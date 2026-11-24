// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugMenu

// ============================================================
// RVA: 0x163e300 | Core.DebugMenu.DebugMenu.get_IsControllerSupported
// ============================================================

bool Core_DebugMenu_DebugMenu__get_IsControllerSupported(long param_1)

{
  return *(long *)(param_1 + 0x78) != 0;
}



// ============================================================
// RVA: 0x163e310 | Core.DebugMenu.DebugMenu.get_DebugMenuPanelId
// ============================================================

undefined4 Core_DebugMenu_DebugMenu__get_DebugMenuPanelId(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x163e318 | Core.DebugMenu.DebugMenu.get_RootPanelId
// ============================================================

undefined4 Core_DebugMenu_DebugMenu__get_RootPanelId(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ============================================================
// RVA: 0x163e320 | Core.DebugMenu.DebugMenu.get_RootRectTransform
// ============================================================

undefined8 Core_DebugMenu_DebugMenu__get_RootRectTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x163e328 | Core.DebugMenu.DebugMenu.get_Visible
// ============================================================

ulong Core_DebugMenu_DebugMenu__get_Visible(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 extraout_s0;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (pcRam0000000003ebe9d0 == (code *)0x0) {
      pcRam0000000003ebe9d0 = (code *)func_0x00f789d4("UnityEngine.Behaviour::get_enabled()");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebe9d0)(lVar1);
    return uVar2;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(auVar3._0_8_ + 0x28);
  if (lVar1 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebe9d8)(lVar1,auVar3._8_8_);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000003ec2fb8 == (code *)0x0) {
      pcRam0000000003ec2fb8 = (code *)func_0x00f789d4("UnityEngine.CanvasGroup::get_alpha()");
    }
                    /* WARNING: Could not recover jumptable at 0x032f44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ec2fb8)(lVar1);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ec2fc0)(extraout_s0,lVar1);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar1 + 0x80);
}



// ============================================================
// RVA: 0x163e348 | Core.DebugMenu.DebugMenu.set_Visible
// ============================================================

ulong Core_DebugMenu_DebugMenu__set_Visible(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 extraout_s0;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebe9d8)(lVar1,param_2);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000003ec2fb8 == (code *)0x0) {
      pcRam0000000003ec2fb8 = (code *)func_0x00f789d4("UnityEngine.CanvasGroup::get_alpha()");
    }
                    /* WARNING: Could not recover jumptable at 0x032f44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ec2fb8)(lVar1);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ec2fc0)(extraout_s0,lVar1);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar1 + 0x80);
}



// ============================================================
// RVA: 0x163e368 | Core.DebugMenu.DebugMenu.get_Opacity
// ============================================================

ulong Core_DebugMenu_DebugMenu__get_Opacity(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 extraout_s0;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000003ec2fb8 == (code *)0x0) {
      pcRam0000000003ec2fb8 = (code *)func_0x00f789d4("UnityEngine.CanvasGroup::get_alpha()");
    }
                    /* WARNING: Could not recover jumptable at 0x032f44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ec2fb8)(lVar1);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ec2fc0)(extraout_s0,lVar1);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar1 + 0x80);
}



// ============================================================
// RVA: 0x163e388 | Core.DebugMenu.DebugMenu.set_Opacity
// ============================================================

ulong Core_DebugMenu_DebugMenu__set_Opacity(undefined4 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ec2fc0)(param_1,lVar1);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar1 + 0x80);
}



// ============================================================
// RVA: 0x163e3a8 | Core.DebugMenu.DebugMenu.get_IsInited
// ============================================================

undefined1 Core_DebugMenu_DebugMenu__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x163e3b0 | Core.DebugMenu.DebugMenu.Init
// ============================================================

long Core_DebugMenu_DebugMenu__Init(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb5701 & 1) == 0) {
    func_0x00f78a20(0x3d270a8);
    bRam0000000003eb5701 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<Init>d__51_TypeInfo*/ uRam0000000003d270a8);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return lVar1;
}



// ============================================================
// RVA: 0x163e44c | Core.DebugMenu.DebugMenu.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x0163e4f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163e4fc) */
/* WARNING: Removing unreachable block (ram,0x0163e508) */
/* WARNING: Removing unreachable block (ram,0x0163e528) */
/* WARNING: Removing unreachable block (ram,0x0163e530) */
/* WARNING: Removing unreachable block (ram,0x0163e534) */
/* WARNING: Removing unreachable block (ram,0x0163e54c) */
/* WARNING: Removing unreachable block (ram,0x0163e574) */
/* WARNING: Removing unreachable block (ram,0x0163e590) */
/* WARNING: Removing unreachable block (ram,0x0163e5ac) */
/* WARNING: Removing unreachable block (ram,0x0163e5e0) */
/* WARNING: Removing unreachable block (ram,0x0163e5ec) */
/* WARNING: Removing unreachable block (ram,0x0163e5f4) */
/* WARNING: Removing unreachable block (ram,0x0163e5fc) */
/* WARNING: Removing unreachable block (ram,0x0163e608) */
/* WARNING: Removing unreachable block (ram,0x0163e678) */
/* WARNING: Removing unreachable block (ram,0x0163e67c) */
/* WARNING: Removing unreachable block (ram,0x0163e618) */
/* WARNING: Removing unreachable block (ram,0x0163e61c) */
/* WARNING: Removing unreachable block (ram,0x0163e628) */
/* WARNING: Removing unreachable block (ram,0x0163e630) */
/* WARNING: Removing unreachable block (ram,0x0163e64c) */
/* WARNING: Removing unreachable block (ram,0x0163e654) */
/* WARNING: Removing unreachable block (ram,0x0163e658) */

void Core_DebugMenu_DebugMenu__DeInit(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb5702 & 1) == 0) {
    func_0x00f78a20(0x3d433f8);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d21118);
    func_0x00f78a20(0x3d2ed10);
    func_0x00f78a20(0x3d399c0);
    func_0x00f78a20(0x3d3cfb8);
    func_0x00f78a20(0x3d3a6a0);
    func_0x00f78a20(0x3d399c8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5702 = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
  }
  if ((bRam0000000003eb572f & 1) == 0) {
    func_0x00f78a20(0x3d2a3a8);
    func_0x00f78a20(0x3d1b5d0);
    func_0x00f78a20(0x3d54920);
    func_0x00f78a20(0x3d54928);
    bRam0000000003eb572f = 1;
  }
  lVar5 = *(long *)(lVar2 + 0x18);
  uVar3 = func_0x00f78aec(/*System.Action<InputAction.CallbackContext>_TypeInfo*/ uRam0000000003d1b5d0);
  /*System.Action<InputAction.CallbackContext>$$.ctor*/ func_0x01e5a648(uVar3,lVar2,uRam0000000003d54920,uRam0000000003d2a3a8);
  if (lVar5 != 0) {
    /*UnityEngine.InputSystem.InputAction$$remove_performed*/ func_0x03022be4(lVar5,uVar3,0);
    if (*(long *)(lVar2 + 0x18) != 0) {
      /*UnityEngine.InputSystem.InputAction$$Disable*/ func_0x030232a8(*(long *)(lVar2 + 0x18),0);
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 != 0) {
        uVar4 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar4) {
          uVar7 = 0;
          do {
            if (uVar4 <= uVar7) goto code_r0x0163e800;
            lVar6 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
            uVar3 = func_0x00f78aec(/*System.Action<InputAction.CallbackContext>_TypeInfo*/ uRam0000000003d1b5d0);
            /*System.Action<InputAction.CallbackContext>$$.ctor*/ func_0x01e5a648(uVar3,lVar2,uRam0000000003d54928,uRam0000000003d2a3a8);
            if (lVar6 == 0) goto code_r0x0163e7fc;
            /*UnityEngine.InputSystem.InputAction$$remove_performed*/ func_0x03022be4(lVar6,uVar3,0);
            /*UnityEngine.InputSystem.InputAction$$Disable*/ func_0x030232a8(lVar6,0);
            uVar7 = uVar7 + 1;
            uVar4 = *(uint *)(lVar5 + 0x18);
          } while ((int)uVar7 < (int)uVar4);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        return;
      }
    }
  }
code_r0x0163e7fc:
  func_0x00f78af4();
code_r0x0163e800:
  uVar3 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb5703 & 1) == 0) {
    func_0x00f78a20(0x3d21118);
    bRam0000000003eb5703 = 1;
  }
  if (((*(ushort *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined8 *)(*(long *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  /*Core.DebugMenu.DebugMenu$$UpdateMouse*/ func_0x0163e944(lVar2);
  /*Core.DebugMenu.DebugMenu$$UpdateTouch*/ func_0x0163e9f8(lVar2);
  /*Core.DebugMenu.DebugMenu$$UpdateCanvasAlphaAndRemoveAtTarget*/ func_0x0163eab4(0x41700000,0x3f800000,extraout_s0,lVar2,*(undefined8 *)(lVar2 + 0x50));
  /*Core.DebugMenu.DebugMenu$$UpdateCanvasAlphaAndRemoveAtTarget*/ func_0x0163eab4(0xc1700000,0,extraout_s0,lVar2,*(undefined8 *)(lVar2 + 0x58));
  if (*(long *)(lVar2 + 0x78) == 0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x163e8f0);
    (*pcVar1)();
  }
  /*Core.DebugMenu.DebugMenuControllerInputSupport$$Update*/ func_0x0163ed08();
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar3);
  return;
}



// ============================================================
// RVA: 0x163e80c | Core.DebugMenu.DebugMenu.Update
// ============================================================

void Core_DebugMenu_DebugMenu__Update(undefined4 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5703 & 1) == 0) {
    func_0x00f78a20(0x3d21118);
    bRam0000000003eb5703 = 1;
  }
  if (((*(ushort *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = *(undefined8 *)(*(long *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  /*Core.DebugMenu.DebugMenu$$UpdateMouse*/ func_0x0163e944(param_2);
  /*Core.DebugMenu.DebugMenu$$UpdateTouch*/ func_0x0163e9f8(param_2);
  /*Core.DebugMenu.DebugMenu$$UpdateCanvasAlphaAndRemoveAtTarget*/ func_0x0163eab4(0x41700000,0x3f800000,param_1,param_2,*(undefined8 *)(param_2 + 0x50));
  /*Core.DebugMenu.DebugMenu$$UpdateCanvasAlphaAndRemoveAtTarget*/ func_0x0163eab4(0xc1700000,0,param_1,param_2,*(undefined8 *)(param_2 + 0x58));
  if (*(long *)(param_2 + 0x78) != 0) {
    /*Core.DebugMenu.DebugMenuControllerInputSupport$$Update*/ func_0x0163ed08();
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar2);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x163e8f0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x163e944 | Core.DebugMenu.DebugMenu.UpdateMouse
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__UpdateMouse
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  uint uVar15;
  undefined8 unaff_x21;
  ulong uVar16;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 uVar18;
  undefined1 extraout_b0_03;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar19;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar20;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar21;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined1 auStack_120 [16];
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb5707 & 1) == 0) {
    func_0x00f78a20(0x3d36b38);
    bRam0000000003eb5707 = 1;
  }
  if (cRam0000000003ca3509 == '\0') {
    func_0x00f78a20(0x3d235a0);
    cRam0000000003ca3509 = '\x01';
  }
  lVar14 = **(long **)(/*UnityEngine.InputSystem.Mouse_TypeInfo*/ lRam0000000003d235a0 + 0xb8);
  if (lVar14 == 0) {
    return;
  }
  if (*(long *)(lVar14 + 0x188) != 0) {
    iVar8 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(*(long *)(lVar14 + 0x188),0);
    if (iVar8 == 0) {
      return;
    }
    if (*(long *)(lVar14 + 0x158) != 0) {
      /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar14 + 0x158),uRam0000000003d36b38);
      lVar10 = param_4;
      uVar18 = extraout_b0;
      uVar19 = extraout_var;
      uVar20 = extraout_var_04;
      uVar21 = extraout_var_09;
      goto Core_DebugMenu_DebugMenu__TryPressRootButton;
    }
  }
  lVar10 = func_0x00f78af4();
  puStack_28 = &Core_DebugMenu_DebugMenu__UpdateTouch;
  lStack_40 = lVar14;
  lStack_38 = param_4;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5708 & 1) == 0) {
    func_0x00f78a20(0x3d36b38);
    bRam0000000003eb5708 = 1;
  }
  if (cRam0000000003ca3506 == '\0') {
    func_0x00f78a20(0x3d25370);
    cRam0000000003ca3506 = '\x01';
  }
  if (**(long **)(/*UnityEngine.InputSystem.Touchscreen_TypeInfo*/ lRam0000000003d25370 + 0xb8) == 0) {
    return;
  }
  lVar14 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Touchscreen_TypeInfo*/ lRam0000000003d25370 + 0xb8) + 0x180);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0xf0) != 0)) {
    iVar8 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(*(long *)(lVar14 + 0xf0),0);
    if (iVar8 == 0) {
      return;
    }
    if (*(long *)(lVar14 + 0x100) != 0) {
      /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar14 + 0x100),uRam0000000003d36b38);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = lStack_38;
      unaff_x20 = lStack_40;
      unaff_x29 = puStack_30;
      unaff_x30 = puStack_28;
      uVar18 = extraout_b0_00;
      uVar19 = extraout_var_00;
      uVar20 = extraout_var_05;
      uVar21 = extraout_var_10;
Core_DebugMenu_DebugMenu__TryPressRootButton:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      iVar8 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      iVar9 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      param_2 = param_2 / (float)iVar9;
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      if (_UNK_033f875c <
          (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) / (float)iVar8) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(param_2)) {
          bVar5 = param_2 < 0.75;
          bVar6 = param_2 == 0.75;
          bVar7 = false;
        }
      }
      if (!bVar6 && bVar5 == bVar7) {
        *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if ((bRam0000000003eb572b & 1) == 0) {
          func_0x00f78a20(0x3d21070);
          bRam0000000003eb572b = 1;
        }
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
        uVar13 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar12,*(undefined8 *)(lVar10 + 0x68),0);
        *(undefined8 *)((long)register0x00000008 + -0x38) = uVar13;
        /*System.TimeSpan$$get_TotalMilliseconds*/ func_0x029edf00((undefined1 *)((long)register0x00000008 + -0x38),0);
        if (_UNK_03406a68 <=
            (float)(double)CONCAT17(extraout_var_17,
                                    CONCAT16(extraout_var_16,
                                             CONCAT15(extraout_var_15,
                                                      CONCAT14(extraout_var_14,
                                                               CONCAT13(extraout_var_13,
                                                                        CONCAT12(extraout_var_08,
                                                                                 CONCAT11(
                                                  extraout_var_03,extraout_b0_03)))))))) {
          *(undefined4 *)(lVar10 + 0x70) = 0;
        }
        else {
          iVar8 = *(int *)(lVar10 + 0x70) + 1;
          *(int *)(lVar10 + 0x70) = iVar8;
          if (1 < iVar8) {
            if (*(int *)(lVar10 + 0x60) == -1) {
              if (*(int *)(lVar10 + 0x3c) != -1) {
                /*Core.DebugMenu.DebugMenu$$PushPanel*/ func_0x0163f2bc(lVar10,*(int *)(lVar10 + 0x3c),0xffffffff);
              }
            }
            else {
              /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc(0,lVar10);
            }
            *(undefined4 *)(lVar10 + 0x60) = 0xffffffff;
          }
        }
        *(undefined8 *)(lVar10 + 0x68) = uVar12;
        return;
      }
      return;
    }
  }
  auVar23 = func_0x00f78af4();
  lVar14 = auVar23._8_8_;
  puStack_48 = &Core_DebugMenu_DebugMenu__UpdateCanvasAlphaAndRemoveAtTarget;
  fVar3 = (float)CONCAT13(extraout_var_11,
                          CONCAT12(extraout_var_06,CONCAT11(extraout_var_01,extraout_b0_01)));
  uVar16 = 0x3eb5000;
  ppuStack_50 = &puStack_30;
  if ((bRam0000000003eb5709 & 1) == 0) {
    func_0x00f78a20(0x3d53478);
    func_0x00f78a20(0x3d3cfc0);
    func_0x00f78a20(0x3d3cfc8);
    func_0x00f78a20(0x3d3cfd0);
    func_0x00f78a20(0x3d3cfd8);
    bRam0000000003eb5709 = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  if (lVar14 != 0) {
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar1) {
      uVar16 = 0;
      uVar12 = 0x3d3cfd8;
      do {
        uVar15 = (uint)uVar16;
        if (uVar1 <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(lVar14 + 0x10) + (long)(int)uVar15 * 8;
        fVar22 = *(float *)(lVar10 + 0x20);
        uVar2 = *(undefined4 *)(lVar10 + 0x24);
        lVar10 = unaff_x23;
        if (fVar22 <= 0.0) {
          iVar8 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar23._0_8_,uVar2,1,&uStack_100);
          unaff_x22 = lStack_f0;
          if (iVar8 != 0) {
            unaff_x24 = 0x3d3cfd8;
            if ((lStack_f0 == 0) ||
               (lVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_f0,uRam0000000003d53478), lVar10 == 0))
            goto code_r0x0163ed04;
            /*Core.DebugMenu.DebugUIPanelBehaviour$$UpdateRootHeightFromContent*/ func_0x0163fbb0();
            unaff_x23 = lVar10;
            unaff_x24 = uVar12;
            if (*(long *)(lVar10 + 0x58) == 0) goto code_r0x0163ed04;
            /*UnityEngine.CanvasGroup$$get_alpha*/ func_0x032f44bc(*(long *)(lVar10 + 0x58),0);
            fVar22 = fVar3 * param_3 +
                     (float)CONCAT13(extraout_var_12,
                                     CONCAT12(extraout_var_07,
                                              CONCAT11(extraout_var_02,extraout_b0_02)));
            if (fVar3 <= 0.0) {
              if (fVar22 < param_2) goto code_r0x0163ec34;
            }
            else if (param_2 < fVar22) {
code_r0x0163ec34:
              fVar22 = param_2;
            }
            if ((float)CONCAT13(extraout_var_12,
                                CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02)))
                != fVar22) {
              if (*(long *)(lVar10 + 0x58) == 0) goto code_r0x0163ed04;
              /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(SUB41(fVar22,0),*(long *)(lVar10 + 0x58),0);
              if (*(long *)(lVar10 + 0x58) == 0) goto code_r0x0163ed04;
              /*UnityEngine.CanvasGroup$$set_blocksRaycasts*/ func_0x032f461c(*(long *)(lVar10 + 0x58),1.0 <= fVar22,0);
              lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0);
              if (lVar11 == 0) goto code_r0x0163ed04;
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,0.0 < fVar22,0);
              /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(SUB41(*(float *)(lVar10 + 0x70) + (1.0 - fVar22) * -50.0,0),
                              *(undefined4 *)(lVar10 + 0x74),unaff_x22,0);
            }
            if (0.0 < fVar22) goto code_r0x0163ecc8;
          }
          /*System.Collections.Generic.List<DebugMenu.DelayedId>$$RemoveAt*/ func_0x02515fbc(lVar14,uVar16,uRam0000000003d3cfc0);
          uVar16 = (ulong)(uVar15 - 1);
        }
        else {
          /*System.Collections.Generic.List<DebugMenu.DelayedId>$$set_Item*/ func_0x02514468(lVar14,uVar16,CONCAT44(uVar2,fVar22 - param_3),uRam0000000003d3cfd8);
        }
code_r0x0163ecc8:
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar15;
        uVar1 = *(uint *)(lVar14 + 0x18);
        unaff_x23 = lVar10;
      } while ((int)uVar15 < (int)uVar1);
    }
    return;
  }
code_r0x0163ed04:
  lVar14 = func_0x00f78af4();
  puStack_108 = &Core_DebugMenu_DebugMenuControllerInputSupport__Update;
  uStack_140 = unaff_x24;
  lStack_138 = unaff_x23;
  lStack_130 = unaff_x22;
  uStack_128 = uVar16;
  pppuStack_110 = &ppuStack_50;
  auStack_120 = auVar23;
  if ((bRam0000000003eb5730 & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d21120);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d57a68);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5f6e8);
    func_0x00f78a20(0x3d25598);
    bRam0000000003eb5730 = 1;
  }
  uStack_150 = 0;
  lStack_148 = 0;
  if (cRam0000000003ca3507 == '\0') {
    func_0x00f78a20(0x3d21b78);
    cRam0000000003ca3507 = '\x01';
  }
  if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) != 0) {
    if (((*(ushort *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = **(undefined8 **)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar12,0);
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
    if ((uVar16 & 1) == 0) {
      lVar10 = 0;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      lVar10 = *(long *)(lVar10 + 0x38);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
    if ((uVar16 & 1) != 0) {
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      uVar16 = /*UnityEngine.GameObject$$TryGetComponent<UniversalAdditionalLightData>*/ func_0x0185d9a8(lVar10,&lStack_148,uRam0000000003d57a68);
      if ((uVar16 & 1) != 0) {
        uVar13 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0);
        if (*(long *)(lVar14 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x0163f05c;
        }
        uVar17 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x20);
        if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = /*Core.DebugMenu.UIExtensions$$IsTransformADescendentOf*/ func_0x01643758(uVar13,uVar17);
        if ((uVar16 & 1) != 0) {
          if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar16 = /*Core.DebugMenu.UIExtensions$$TryFindComponentInParentChain<ScrollRect>*/ func_0x01a39154(lVar10,&uStack_150,uRam0000000003d5f6e8);
          if ((uVar16 & 1) != 0) {
            if (lStack_148 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            uVar17 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_148,uRam0000000003d53528);
            uVar13 = uStack_150;
            if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.DebugMenu.UIExtensions$$ScrollToCentre*/ func_0x0164383c(uVar13,uVar17);
          }
          if (*(long *)(lVar14 + 0x10) == 0) {
            func_0x00f78af4();
code_r0x0163f05c:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x163f060);
            (*pcVar4)();
          }
          lVar10 = *(long *)(*(long *)(lVar14 + 0x10) + 0x20);
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          uVar16 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar10,0);
          if ((uVar16 & 1) == 0) {
            if (*(long *)(lVar14 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + 0x20);
            if (lVar14 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0);
            if (lVar14 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0);
          }
        }
      }
    }
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar12,0);
  }
  return;
}



// ============================================================
// RVA: 0x163e9f8 | Core.DebugMenu.DebugMenu.UpdateTouch
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__UpdateTouch
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined1 auStack_100 [16];
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_38;
  
  if ((bRam0000000003eb5708 & 1) == 0) {
    func_0x00f78a20(0x3d36b38);
    bRam0000000003eb5708 = 1;
  }
  if (cRam0000000003ca3506 == '\0') {
    func_0x00f78a20(0x3d25370);
    cRam0000000003ca3506 = '\x01';
  }
  if (**(long **)(/*UnityEngine.InputSystem.Touchscreen_TypeInfo*/ lRam0000000003d25370 + 0xb8) == 0) {
    return;
  }
  lVar14 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Touchscreen_TypeInfo*/ lRam0000000003d25370 + 0xb8) + 0x180);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0xf0) != 0)) {
    iVar8 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(*(long *)(lVar14 + 0xf0),0);
    if (iVar8 == 0) {
      return;
    }
    if (*(long *)(lVar14 + 0x100) != 0) {
      /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar14 + 0x100),uRam0000000003d36b38);
      iVar8 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      iVar9 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      param_2 = param_2 / (float)iVar9;
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      if (_UNK_033f875c <
          (float)CONCAT13(extraout_var_07,
                          CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0))) /
          (float)iVar8) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(param_2)) {
          bVar5 = param_2 < 0.75;
          bVar6 = param_2 == 0.75;
          bVar7 = false;
        }
      }
      if (!bVar6 && bVar5 == bVar7) {
        if ((bRam0000000003eb572b & 1) == 0) {
          func_0x00f78a20(0x3d21070);
          bRam0000000003eb572b = 1;
        }
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
        lStack_38 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar13,*(undefined8 *)(param_4 + 0x68),0);
        /*System.TimeSpan$$get_TotalMilliseconds*/ func_0x029edf00(&lStack_38,0);
        if (_UNK_03406a68 <=
            (float)(double)CONCAT17(extraout_var_14,
                                    CONCAT16(extraout_var_13,
                                             CONCAT15(extraout_var_12,
                                                      CONCAT14(extraout_var_11,
                                                               CONCAT13(extraout_var_10,
                                                                        CONCAT12(extraout_var_06,
                                                                                 CONCAT11(
                                                  extraout_var_02,extraout_b0_02)))))))) {
          *(undefined4 *)(param_4 + 0x70) = 0;
        }
        else {
          iVar8 = *(int *)(param_4 + 0x70) + 1;
          *(int *)(param_4 + 0x70) = iVar8;
          if (1 < iVar8) {
            if (*(int *)(param_4 + 0x60) == -1) {
              if (*(int *)(param_4 + 0x3c) != -1) {
                /*Core.DebugMenu.DebugMenu$$PushPanel*/ func_0x0163f2bc(param_4,*(int *)(param_4 + 0x3c),0xffffffff);
              }
            }
            else {
              /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc(0,param_4);
            }
            *(undefined4 *)(param_4 + 0x60) = 0xffffffff;
          }
        }
        *(undefined8 *)(param_4 + 0x68) = uVar13;
        return;
      }
      return;
    }
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  fVar3 = (float)CONCAT13(extraout_var_08,
                          CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00)));
  uVar16 = 0x3eb5000;
  lStack_38 = param_4;
  if ((bRam0000000003eb5709 & 1) == 0) {
    func_0x00f78a20(0x3d53478);
    func_0x00f78a20(0x3d3cfc0);
    func_0x00f78a20(0x3d3cfc8);
    func_0x00f78a20(0x3d3cfd0);
    func_0x00f78a20(0x3d3cfd8);
    bRam0000000003eb5709 = 1;
  }
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  lStack_d0 = 0;
  if (lVar14 != 0) {
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (0 < (int)uVar1) {
      uVar16 = 0;
      uVar13 = 0x3d3cfd8;
      do {
        uVar15 = (uint)uVar16;
        if (uVar1 <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(lVar14 + 0x10) + (long)(int)uVar15 * 8;
        fVar18 = *(float *)(lVar10 + 0x20);
        uVar2 = *(undefined4 *)(lVar10 + 0x24);
        lVar10 = unaff_x23;
        if (fVar18 <= 0.0) {
          iVar8 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar19._0_8_,uVar2,1,&uStack_e0);
          unaff_x22 = lStack_d0;
          if (iVar8 != 0) {
            unaff_x24 = 0x3d3cfd8;
            if ((lStack_d0 == 0) ||
               (lVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_d0,uRam0000000003d53478), lVar10 == 0))
            goto code_r0x0163ed04;
            /*Core.DebugMenu.DebugUIPanelBehaviour$$UpdateRootHeightFromContent*/ func_0x0163fbb0();
            unaff_x23 = lVar10;
            unaff_x24 = uVar13;
            if (*(long *)(lVar10 + 0x58) == 0) goto code_r0x0163ed04;
            /*UnityEngine.CanvasGroup$$get_alpha*/ func_0x032f44bc(*(long *)(lVar10 + 0x58),0);
            fVar18 = fVar3 * param_3 +
                     (float)CONCAT13(extraout_var_09,
                                     CONCAT12(extraout_var_05,
                                              CONCAT11(extraout_var_01,extraout_b0_01)));
            if (fVar3 <= 0.0) {
              if (fVar18 < param_2) goto code_r0x0163ec34;
            }
            else if (param_2 < fVar18) {
code_r0x0163ec34:
              fVar18 = param_2;
            }
            if ((float)CONCAT13(extraout_var_09,
                                CONCAT12(extraout_var_05,CONCAT11(extraout_var_01,extraout_b0_01)))
                != fVar18) {
              if (*(long *)(lVar10 + 0x58) == 0) goto code_r0x0163ed04;
              /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(SUB41(fVar18,0),*(long *)(lVar10 + 0x58),0);
              if (*(long *)(lVar10 + 0x58) == 0) goto code_r0x0163ed04;
              /*UnityEngine.CanvasGroup$$set_blocksRaycasts*/ func_0x032f461c(*(long *)(lVar10 + 0x58),1.0 <= fVar18,0);
              lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0);
              if (lVar11 == 0) goto code_r0x0163ed04;
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,0.0 < fVar18,0);
              /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(SUB41(*(float *)(lVar10 + 0x70) + (1.0 - fVar18) * -50.0,0),
                              *(undefined4 *)(lVar10 + 0x74),unaff_x22,0);
            }
            if (0.0 < fVar18) goto code_r0x0163ecc8;
          }
          /*System.Collections.Generic.List<DebugMenu.DelayedId>$$RemoveAt*/ func_0x02515fbc(lVar14,uVar16,uRam0000000003d3cfc0);
          uVar16 = (ulong)(uVar15 - 1);
        }
        else {
          /*System.Collections.Generic.List<DebugMenu.DelayedId>$$set_Item*/ func_0x02514468(lVar14,uVar16,CONCAT44(uVar2,fVar18 - param_3),uRam0000000003d3cfd8);
        }
code_r0x0163ecc8:
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar15;
        uVar1 = *(uint *)(lVar14 + 0x18);
        unaff_x23 = lVar10;
      } while ((int)uVar15 < (int)uVar1);
    }
    return;
  }
code_r0x0163ed04:
  lVar14 = func_0x00f78af4();
  puStack_e8 = &Core_DebugMenu_DebugMenuControllerInputSupport__Update;
  uStack_120 = unaff_x24;
  lStack_118 = unaff_x23;
  lStack_110 = unaff_x22;
  uStack_108 = uVar16;
  puStack_f0 = &stack0xffffffffffffffd0;
  auStack_100 = auVar19;
  if ((bRam0000000003eb5730 & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d21120);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d57a68);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5f6e8);
    func_0x00f78a20(0x3d25598);
    bRam0000000003eb5730 = 1;
  }
  uStack_130 = 0;
  lStack_128 = 0;
  if (cRam0000000003ca3507 == '\0') {
    func_0x00f78a20(0x3d21b78);
    cRam0000000003ca3507 = '\x01';
  }
  if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) != 0) {
    if (((*(ushort *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = **(undefined8 **)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar13,0);
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
    if ((uVar16 & 1) == 0) {
      lVar10 = 0;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      lVar10 = *(long *)(lVar10 + 0x38);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
    if ((uVar16 & 1) != 0) {
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      uVar16 = /*UnityEngine.GameObject$$TryGetComponent<UniversalAdditionalLightData>*/ func_0x0185d9a8(lVar10,&lStack_128,uRam0000000003d57a68);
      if ((uVar16 & 1) != 0) {
        uVar12 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0);
        if (*(long *)(lVar14 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x0163f05c;
        }
        uVar17 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x20);
        if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = /*Core.DebugMenu.UIExtensions$$IsTransformADescendentOf*/ func_0x01643758(uVar12,uVar17);
        if ((uVar16 & 1) != 0) {
          if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar16 = /*Core.DebugMenu.UIExtensions$$TryFindComponentInParentChain<ScrollRect>*/ func_0x01a39154(lVar10,&uStack_130,uRam0000000003d5f6e8);
          if ((uVar16 & 1) != 0) {
            if (lStack_128 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            uVar17 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_128,uRam0000000003d53528);
            uVar12 = uStack_130;
            if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.DebugMenu.UIExtensions$$ScrollToCentre*/ func_0x0164383c(uVar12,uVar17);
          }
          if (*(long *)(lVar14 + 0x10) == 0) {
            func_0x00f78af4();
code_r0x0163f05c:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x163f060);
            (*pcVar4)();
          }
          lVar10 = *(long *)(*(long *)(lVar14 + 0x10) + 0x20);
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          uVar16 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar10,0);
          if ((uVar16 & 1) == 0) {
            if (*(long *)(lVar14 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + 0x20);
            if (lVar14 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0);
            if (lVar14 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0);
          }
        }
      }
    }
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar13,0);
  }
  return;
}



// ============================================================
// RVA: 0x163eab4 | Core.DebugMenu.DebugMenu.UpdateCanvasAlphaAndRemoveAtTarget
// ============================================================

void Core_DebugMenu_DebugMenu__UpdateCanvasAlphaAndRemoveAtTarget
               (float param_1,float param_2,float param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 unaff_x24;
  undefined8 uVar11;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  float fVar12;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb5709 & 1) == 0) {
    func_0x00f78a20(0x3d53478);
    func_0x00f78a20(0x3d3cfc0);
    func_0x00f78a20(0x3d3cfc8);
    func_0x00f78a20(0x3d3cfd0);
    func_0x00f78a20(0x3d3cfd8);
    bRam0000000003eb5709 = 1;
  }
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  if (param_5 != 0) {
    uVar1 = *(uint *)(param_5 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      uVar11 = 0x3d3cfd8;
      do {
        uVar8 = (uint)uVar9;
        if (uVar1 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(param_5 + 0x10) + (long)(int)uVar8 * 8;
        fVar12 = *(float *)(lVar5 + 0x20);
        uVar2 = *(undefined4 *)(lVar5 + 0x24);
        lVar5 = unaff_x23;
        if (fVar12 <= 0.0) {
          iVar4 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(param_4,uVar2,1,&uStack_c0);
          unaff_x22 = lStack_b0;
          if (iVar4 != 0) {
            unaff_x24 = 0x3d3cfd8;
            if ((lStack_b0 == 0) ||
               (lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_b0,uRam0000000003d53478), lVar5 == 0))
            goto LAB_0163ed04;
            /*Core.DebugMenu.DebugUIPanelBehaviour$$UpdateRootHeightFromContent*/ func_0x0163fbb0();
            unaff_x23 = lVar5;
            unaff_x24 = uVar11;
            if (*(long *)(lVar5 + 0x58) == 0) goto LAB_0163ed04;
            /*UnityEngine.CanvasGroup$$get_alpha*/ func_0x032f44bc(*(long *)(lVar5 + 0x58),0);
            fVar12 = param_1 * param_3 +
                     (float)CONCAT13(extraout_var_01,
                                     CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
            if (param_1 <= 0.0) {
              if (fVar12 < param_2) goto code_r0x0163ec34;
            }
            else if (param_2 < fVar12) {
code_r0x0163ec34:
              fVar12 = param_2;
            }
            if ((float)CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) !=
                fVar12) {
              if (*(long *)(lVar5 + 0x58) == 0) goto LAB_0163ed04;
              /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(SUB41(fVar12,0),*(long *)(lVar5 + 0x58),0);
              if (*(long *)(lVar5 + 0x58) == 0) goto LAB_0163ed04;
              /*UnityEngine.CanvasGroup$$set_blocksRaycasts*/ func_0x032f461c(*(long *)(lVar5 + 0x58),1.0 <= fVar12,0);
              lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0);
              if (lVar6 == 0) goto LAB_0163ed04;
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,0.0 < fVar12,0);
              /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(SUB41(*(float *)(lVar5 + 0x70) + (1.0 - fVar12) * -50.0,0),
                              *(undefined4 *)(lVar5 + 0x74),unaff_x22,0);
            }
            if (0.0 < fVar12) goto LAB_0163ecc8;
          }
          /*System.Collections.Generic.List<DebugMenu.DelayedId>$$RemoveAt*/ func_0x02515fbc(param_5,uVar9,uRam0000000003d3cfc0);
          uVar9 = (ulong)(uVar8 - 1);
        }
        else {
          /*System.Collections.Generic.List<DebugMenu.DelayedId>$$set_Item*/ func_0x02514468(param_5,uVar9,CONCAT44(uVar2,fVar12 - param_3),uRam0000000003d3cfd8);
        }
LAB_0163ecc8:
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar8;
        uVar1 = *(uint *)(param_5 + 0x18);
        unaff_x23 = lVar5;
      } while ((int)uVar8 < (int)uVar1);
    }
    return;
  }
LAB_0163ed04:
  lVar5 = func_0x00f78af4();
  puStack_c8 = &Core_DebugMenu_DebugMenuControllerInputSupport__Update;
  uStack_100 = unaff_x24;
  lStack_f8 = unaff_x23;
  lStack_f0 = unaff_x22;
  uStack_e8 = uVar9;
  uStack_e0 = param_4;
  lStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5730 & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d21120);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d57a68);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5f6e8);
    func_0x00f78a20(0x3d25598);
    bRam0000000003eb5730 = 1;
  }
  uStack_110 = 0;
  lStack_108 = 0;
  if (cRam0000000003ca3507 == '\0') {
    func_0x00f78a20(0x3d21b78);
    cRam0000000003ca3507 = '\x01';
  }
  if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) != 0) {
    if (((*(ushort *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = **(undefined8 **)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar11,0);
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if ((uVar9 & 1) == 0) {
      lVar6 = 0;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      lVar6 = *(long *)(lVar6 + 0x38);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
    if ((uVar9 & 1) != 0) {
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      uVar9 = /*UnityEngine.GameObject$$TryGetComponent<UniversalAdditionalLightData>*/ func_0x0185d9a8(lVar6,&lStack_108,uRam0000000003d57a68);
      if ((uVar9 & 1) != 0) {
        uVar7 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar6,0);
        if (*(long *)(lVar5 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x0163f05c;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x20);
        if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*Core.DebugMenu.UIExtensions$$IsTransformADescendentOf*/ func_0x01643758(uVar7,uVar10);
        if ((uVar9 & 1) != 0) {
          if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*Core.DebugMenu.UIExtensions$$TryFindComponentInParentChain<ScrollRect>*/ func_0x01a39154(lVar6,&uStack_110,uRam0000000003d5f6e8);
          if ((uVar9 & 1) != 0) {
            if (lStack_108 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            uVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_108,uRam0000000003d53528);
            uVar7 = uStack_110;
            if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.DebugMenu.UIExtensions$$ScrollToCentre*/ func_0x0164383c(uVar7,uVar10);
          }
          if (*(long *)(lVar5 + 0x10) == 0) {
            func_0x00f78af4();
code_r0x0163f05c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x163f060);
            (*pcVar3)();
          }
          lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x20);
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0);
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          uVar9 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar6,0);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(lVar5 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x20);
            if (lVar5 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
            if (lVar5 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
          }
        }
      }
    }
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar11,0);
  }
  return;
}



// ============================================================
// RVA: 0x163f0f0 | Core.DebugMenu.DebugMenu.IsPanelShowing
// ============================================================

/* WARNING: Possible PIC construction at 0x0163f110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163f354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016429ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163f3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163f480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164288c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164292c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01642890) */
/* WARNING: Removing unreachable block (ram,0x01642894) */
/* WARNING: Removing unreachable block (ram,0x0164289c) */
/* WARNING: Removing unreachable block (ram,0x016428e8) */
/* WARNING: Removing unreachable block (ram,0x016428b8) */
/* WARNING: Removing unreachable block (ram,0x016428bc) */
/* WARNING: Removing unreachable block (ram,0x016428ec) */
/* WARNING: Removing unreachable block (ram,0x016428f4) */
/* WARNING: Removing unreachable block (ram,0x0163f484) */
/* WARNING: Removing unreachable block (ram,0x0163f3d8) */
/* WARNING: Removing unreachable block (ram,0x0163f4c0) */
/* WARNING: Removing unreachable block (ram,0x0163f4ec) */
/* WARNING: Removing unreachable block (ram,0x0163f50c) */
/* WARNING: Removing unreachable block (ram,0x0163f518) */
/* WARNING: Removing unreachable block (ram,0x0163f3dc) */
/* WARNING: Removing unreachable block (ram,0x0163f3e4) */
/* WARNING: Removing unreachable block (ram,0x0163f3fc) */
/* WARNING: Removing unreachable block (ram,0x0163f410) */
/* WARNING: Removing unreachable block (ram,0x0163f418) */
/* WARNING: Removing unreachable block (ram,0x0163f430) */
/* WARNING: Removing unreachable block (ram,0x0163f43c) */
/* WARNING: Removing unreachable block (ram,0x0163f458) */
/* WARNING: Removing unreachable block (ram,0x0163f464) */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Removing unreachable block (ram,0x016429f0) */
/* WARNING: Removing unreachable block (ram,0x016429f4) */
/* WARNING: Removing unreachable block (ram,0x016429fc) */
/* WARNING: Removing unreachable block (ram,0x01642a30) */
/* WARNING: Removing unreachable block (ram,0x01642a18) */
/* WARNING: Removing unreachable block (ram,0x01642a84) */
/* WARNING: Removing unreachable block (ram,0x01642a1c) */
/* WARNING: Removing unreachable block (ram,0x01642a34) */
/* WARNING: Removing unreachable block (ram,0x01642a3c) */
/* WARNING: Removing unreachable block (ram,0x01642a40) */
/* WARNING: Removing unreachable block (ram,0x01642a4c) */
/* WARNING: Removing unreachable block (ram,0x01642a58) */
/* WARNING: Removing unreachable block (ram,0x01642a60) */
/* WARNING: Removing unreachable block (ram,0x01642ce4) */
/* WARNING: Removing unreachable block (ram,0x01642ce8) */
/* WARNING: Removing unreachable block (ram,0x01642cf0) */
/* WARNING: Removing unreachable block (ram,0x01642d08) */
/* WARNING: Removing unreachable block (ram,0x01642d1c) */
/* WARNING: Removing unreachable block (ram,0x01642d20) */
/* WARNING: Removing unreachable block (ram,0x01642d2c) */
/* WARNING: Removing unreachable block (ram,0x01642c54) */
/* WARNING: Removing unreachable block (ram,0x01642d88) */
/* WARNING: Removing unreachable block (ram,0x01642c58) */
/* WARNING: Removing unreachable block (ram,0x01642c60) */
/* WARNING: Removing unreachable block (ram,0x01642c80) */
/* WARNING: Removing unreachable block (ram,0x01642c94) */
/* WARNING: Removing unreachable block (ram,0x01642c9c) */
/* WARNING: Removing unreachable block (ram,0x01642cb4) */
/* WARNING: Removing unreachable block (ram,0x01642d30) */
/* WARNING: Removing unreachable block (ram,0x01642d60) */
/* WARNING: Removing unreachable block (ram,0x0164295c) */
/* WARNING: Removing unreachable block (ram,0x0164298c) */
/* WARNING: Removing unreachable block (ram,0x016429b8) */
/* WARNING: Removing unreachable block (ram,0x01642a88) */
/* WARNING: Removing unreachable block (ram,0x016429cc) */
/* WARNING: Removing unreachable block (ram,0x01642d3c) */
/* WARNING: Removing unreachable block (ram,0x01642cc4) */
/* WARNING: Removing unreachable block (ram,0x01642da0) */
/* WARNING: Removing unreachable block (ram,0x01642da4) */
/* WARNING: Removing unreachable block (ram,0x01642da8) */
/* WARNING: Removing unreachable block (ram,0x01642cc8) */
/* WARNING: Removing unreachable block (ram,0x0163f358) */
/* WARNING: Removing unreachable block (ram,0x0163f35c) */
/* WARNING: Removing unreachable block (ram,0x0163f364) */
/* WARNING: Removing unreachable block (ram,0x0163f384) */
/* WARNING: Removing unreachable block (ram,0x0163f548) */
/* WARNING: Removing unreachable block (ram,0x0163f550) */
/* WARNING: Removing unreachable block (ram,0x0163f554) */
/* WARNING: Removing unreachable block (ram,0x0163f578) */
/* WARNING: Removing unreachable block (ram,0x0163f598) */
/* WARNING: Removing unreachable block (ram,0x0163f5d8) */
/* WARNING: Removing unreachable block (ram,0x0163f5a0) */
/* WARNING: Removing unreachable block (ram,0x0163f5cc) */
/* WARNING: Removing unreachable block (ram,0x0163f5ac) */
/* WARNING: Removing unreachable block (ram,0x0163f398) */
/* WARNING: Removing unreachable block (ram,0x0163f3c4) */
/* WARNING: Removing unreachable block (ram,0x0163f3a0) */
/* WARNING: Removing unreachable block (ram,0x0163f4a8) */
/* WARNING: Removing unreachable block (ram,0x0163f3a8) */
/* WARNING: Removing unreachable block (ram,0x0163f114) */
/* WARNING: Removing unreachable block (ram,0x0163f13c) */
/* WARNING: Removing unreachable block (ram,0x0163f118) */
/* WARNING: Removing unreachable block (ram,0x0163f120) */
/* WARNING: Removing unreachable block (ram,0x0163f148) */
/* WARNING: Removing unreachable block (ram,0x0163f12c) */
/* WARNING: Removing unreachable block (ram,0x0322ef6c) */
/* WARNING: Removing unreachable block (ram,0x0322ef88) */
/* WARNING: Removing unreachable block (ram,0x0322ef9c) */
/* WARNING: Removing unreachable block (ram,0x01642930) */
/* WARNING: Removing unreachable block (ram,0x016428f8) */
/* WARNING: Removing unreachable block (ram,0x01642904) */
/* WARNING: Removing unreachable block (ram,0x01642910) */
/* WARNING: Removing unreachable block (ram,0x01642918) */
/* WARNING: Removing unreachable block (ram,0x016427fc) */
/* WARNING: Removing unreachable block (ram,0x0164282c) */
/* WARNING: Removing unreachable block (ram,0x01642858) */
/* WARNING: Removing unreachable block (ram,0x016428d0) */
/* WARNING: Removing unreachable block (ram,0x0164286c) */
/* WARNING: Removing unreachable block (ram,0x0164293c) */
/* WARNING: Removing unreachable block (ram,0x01642940) */
/* WARNING: Removing unreachable block (ram,0x01642aa0) */
/* WARNING: Removing unreachable block (ram,0x01642abc) */
/* WARNING: Removing unreachable block (ram,0x01642ae8) */
/* WARNING: Removing unreachable block (ram,0x01642af0) */
/* WARNING: Removing unreachable block (ram,0x01642b18) */
/* WARNING: Removing unreachable block (ram,0x01642b20) */
/* WARNING: Removing unreachable block (ram,0x01642b24) */
/* WARNING: Removing unreachable block (ram,0x01642bb4) */
/* WARNING: Removing unreachable block (ram,0x01642b34) */
/* WARNING: Removing unreachable block (ram,0x01642b38) */
/* WARNING: Removing unreachable block (ram,0x01642b74) */
/* WARNING: Removing unreachable block (ram,0x01642b7c) */
/* WARNING: Removing unreachable block (ram,0x01642b80) */
/* WARNING: Removing unreachable block (ram,0x01642bc0) */
/* WARNING: Removing unreachable block (ram,0x01642bc4) */
/* WARNING: Removing unreachable block (ram,0x01642bf4) */
/* WARNING: Removing unreachable block (ram,0x01642c2c) */
/* WARNING: Removing unreachable block (ram,0x01642b9c) */
/* WARNING: Removing unreachable block (ram,0x032b7cb0) */
/* WARNING: Removing unreachable block (ram,0x032abcb4) */
/* WARNING: Removing unreachable block (ram,0x032abce0) */
/* WARNING: Removing unreachable block (ram,0x032abd3c) */
/* WARNING: Removing unreachable block (ram,0x032abd7c) */
/* WARNING: Removing unreachable block (ram,0x032abd9c) */
/* WARNING: Removing unreachable block (ram,0x032abda4) */
/* WARNING: Removing unreachable block (ram,0x032abda8) */
/* WARNING: Removing unreachable block (ram,0x032abdbc) */
/* WARNING: Removing unreachable block (ram,0x032abdd4) */
/* WARNING: Removing unreachable block (ram,0x032abddc) */
/* WARNING: Removing unreachable block (ram,0x032abde0) */
/* WARNING: Removing unreachable block (ram,0x032abdec) */
/* WARNING: Removing unreachable block (ram,0x032abe00) */
/* WARNING: Removing unreachable block (ram,0x032abe0c) */
/* WARNING: Removing unreachable block (ram,0x032abe14) */
/* WARNING: Removing unreachable block (ram,0x032abe1c) */
/* WARNING: Removing unreachable block (ram,0x032abe4c) */
/* WARNING: Removing unreachable block (ram,0x032abe60) */
/* WARNING: Removing unreachable block (ram,0x032abe6c) */
/* WARNING: Removing unreachable block (ram,0x032abe74) */
/* WARNING: Removing unreachable block (ram,0x032abe7c) */
/* WARNING: Removing unreachable block (ram,0x032abe9c) */
/* WARNING: Removing unreachable block (ram,0x032abd44) */
/* WARNING: Removing unreachable block (ram,0x032abeb4) */
/* WARNING: Removing unreachable block (ram,0x032abd64) */
/* WARNING: Removing unreachable block (ram,0x032abeb8) */
/* WARNING: Removing unreachable block (ram,0x032abed8) */
/* WARNING: Removing unreachable block (ram,0x032abee0) */
/* WARNING: Removing unreachable block (ram,0x032abee4) */
/* WARNING: Removing unreachable block (ram,0x0322b788) */
/* WARNING: Removing unreachable block (ram,0x0322b7b0) */
/* WARNING: Removing unreachable block (ram,0x0322b7d0) */
/* WARNING: Removing unreachable block (ram,0x0322b7dc) */
/* WARNING: Removing unreachable block (ram,0x0322b7e4) */
/* WARNING: Removing unreachable block (ram,0x0322b7e8) */
/* WARNING: Removing unreachable block (ram,0x0322b7f4) */
/* WARNING: Removing unreachable block (ram,0x0322b808) */
/* WARNING: Removing unreachable block (ram,0x0322b814) */
/* WARNING: Removing unreachable block (ram,0x0322b81c) */
/* WARNING: Removing unreachable block (ram,0x0322b824) */
/* WARNING: Removing unreachable block (ram,0x0322b8a8) */
/* WARNING: Removing unreachable block (ram,0x0322b8d8) */
/* WARNING: Removing unreachable block (ram,0x0322b8f8) */
/* WARNING: Removing unreachable block (ram,0x0322b904) */
/* WARNING: Removing unreachable block (ram,0x0322b90c) */
/* WARNING: Removing unreachable block (ram,0x0322b910) */
/* WARNING: Removing unreachable block (ram,0x0322b91c) */
/* WARNING: Removing unreachable block (ram,0x0322b930) */
/* WARNING: Removing unreachable block (ram,0x0322b93c) */
/* WARNING: Removing unreachable block (ram,0x0322b944) */
/* WARNING: Removing unreachable block (ram,0x0322b94c) */
/* WARNING: Removing unreachable block (ram,0x0322b9d4) */
/* WARNING: Removing unreachable block (ram,0x0322ba04) */
/* WARNING: Removing unreachable block (ram,0x0322ba24) */
/* WARNING: Removing unreachable block (ram,0x0322ba30) */
/* WARNING: Removing unreachable block (ram,0x0322ba38) */
/* WARNING: Removing unreachable block (ram,0x0322ba3c) */
/* WARNING: Removing unreachable block (ram,0x0322ba48) */
/* WARNING: Removing unreachable block (ram,0x0322ba5c) */
/* WARNING: Removing unreachable block (ram,0x0322ba68) */
/* WARNING: Removing unreachable block (ram,0x0322ba70) */
/* WARNING: Removing unreachable block (ram,0x0322ba78) */
/* WARNING: Removing unreachable block (ram,0x0322bb00) */
/* WARNING: Removing unreachable block (ram,0x0322bb38) */
/* WARNING: Removing unreachable block (ram,0x0322bb58) */
/* WARNING: Removing unreachable block (ram,0x0322bb64) */
/* WARNING: Removing unreachable block (ram,0x0322bb6c) */
/* WARNING: Removing unreachable block (ram,0x0322bb70) */
/* WARNING: Removing unreachable block (ram,0x0322bb7c) */
/* WARNING: Removing unreachable block (ram,0x0322bb90) */
/* WARNING: Removing unreachable block (ram,0x0322bb9c) */
/* WARNING: Removing unreachable block (ram,0x0322bba4) */
/* WARNING: Removing unreachable block (ram,0x0322bbac) */
/* WARNING: Removing unreachable block (ram,0x0322bc38) */
/* WARNING: Removing unreachable block (ram,0x0322bc68) */
/* WARNING: Removing unreachable block (ram,0x0322bc88) */
/* WARNING: Removing unreachable block (ram,0x0322bc94) */
/* WARNING: Removing unreachable block (ram,0x0322bc9c) */
/* WARNING: Removing unreachable block (ram,0x0322bca0) */
/* WARNING: Removing unreachable block (ram,0x0322bcac) */
/* WARNING: Removing unreachable block (ram,0x0322bcc0) */
/* WARNING: Removing unreachable block (ram,0x0322bccc) */
/* WARNING: Removing unreachable block (ram,0x0322bcd4) */
/* WARNING: Removing unreachable block (ram,0x0322bcdc) */
/* WARNING: Removing unreachable block (ram,0x0322bd60) */
/* WARNING: Removing unreachable block (ram,0x0322bd90) */
/* WARNING: Removing unreachable block (ram,0x0322bdb0) */
/* WARNING: Removing unreachable block (ram,0x0322bdbc) */
/* WARNING: Removing unreachable block (ram,0x0322bdc4) */
/* WARNING: Removing unreachable block (ram,0x0322bdc8) */
/* WARNING: Removing unreachable block (ram,0x0322bdd4) */
/* WARNING: Removing unreachable block (ram,0x0322bde8) */
/* WARNING: Removing unreachable block (ram,0x0322bdf4) */
/* WARNING: Removing unreachable block (ram,0x0322bdfc) */
/* WARNING: Removing unreachable block (ram,0x0322be04) */
/* WARNING: Removing unreachable block (ram,0x0322be8c) */
/* WARNING: Removing unreachable block (ram,0x0322bebc) */
/* WARNING: Removing unreachable block (ram,0x0322bedc) */
/* WARNING: Removing unreachable block (ram,0x0322bee8) */
/* WARNING: Removing unreachable block (ram,0x0322bef0) */
/* WARNING: Removing unreachable block (ram,0x0322bef4) */
/* WARNING: Removing unreachable block (ram,0x0322bf00) */
/* WARNING: Removing unreachable block (ram,0x0322bf14) */
/* WARNING: Removing unreachable block (ram,0x0322bf20) */
/* WARNING: Removing unreachable block (ram,0x0322bf28) */
/* WARNING: Removing unreachable block (ram,0x0322bf30) */
/* WARNING: Removing unreachable block (ram,0x0322bfb8) */
/* WARNING: Removing unreachable block (ram,0x0322bff0) */
/* WARNING: Removing unreachable block (ram,0x0322c010) */
/* WARNING: Removing unreachable block (ram,0x0322c01c) */
/* WARNING: Removing unreachable block (ram,0x0322c024) */
/* WARNING: Removing unreachable block (ram,0x0322c028) */
/* WARNING: Removing unreachable block (ram,0x0322c034) */
/* WARNING: Removing unreachable block (ram,0x0322c048) */
/* WARNING: Removing unreachable block (ram,0x0322c054) */
/* WARNING: Removing unreachable block (ram,0x0322c05c) */
/* WARNING: Removing unreachable block (ram,0x0322c064) */
/* WARNING: Removing unreachable block (ram,0x0322c0f0) */
/* WARNING: Removing unreachable block (ram,0x0322c10c) */
/* WARNING: Removing unreachable block (ram,0x0322c11c) */
/* WARNING: Removing unreachable block (ram,0x0322c070) */
/* WARNING: Removing unreachable block (ram,0x0322c088) */
/* WARNING: Removing unreachable block (ram,0x0322c090) */
/* WARNING: Removing unreachable block (ram,0x0322c0b8) */
/* WARNING: Removing unreachable block (ram,0x0322c09c) */
/* WARNING: Removing unreachable block (ram,0x0322c0a8) */
/* WARNING: Removing unreachable block (ram,0x0322c0c4) */
/* WARNING: Removing unreachable block (ram,0x0322bf3c) */
/* WARNING: Removing unreachable block (ram,0x0322bf54) */
/* WARNING: Removing unreachable block (ram,0x0322bf5c) */
/* WARNING: Removing unreachable block (ram,0x0322bf84) */
/* WARNING: Removing unreachable block (ram,0x0322bf68) */
/* WARNING: Removing unreachable block (ram,0x0322bf74) */
/* WARNING: Removing unreachable block (ram,0x0322bf94) */
/* WARNING: Removing unreachable block (ram,0x0322be10) */
/* WARNING: Removing unreachable block (ram,0x0322be28) */
/* WARNING: Removing unreachable block (ram,0x0322be30) */
/* WARNING: Removing unreachable block (ram,0x0322be58) */
/* WARNING: Removing unreachable block (ram,0x0322be3c) */
/* WARNING: Removing unreachable block (ram,0x0322be48) */
/* WARNING: Removing unreachable block (ram,0x0322be68) */
/* WARNING: Removing unreachable block (ram,0x0322bce8) */
/* WARNING: Removing unreachable block (ram,0x0322bd00) */
/* WARNING: Removing unreachable block (ram,0x0322bd08) */
/* WARNING: Removing unreachable block (ram,0x0322bd30) */
/* WARNING: Removing unreachable block (ram,0x0322bd14) */
/* WARNING: Removing unreachable block (ram,0x0322bd20) */
/* WARNING: Removing unreachable block (ram,0x0322bd40) */
/* WARNING: Removing unreachable block (ram,0x0322bbb8) */
/* WARNING: Removing unreachable block (ram,0x0322bbd0) */
/* WARNING: Removing unreachable block (ram,0x0322bbd8) */
/* WARNING: Removing unreachable block (ram,0x0322bc00) */
/* WARNING: Removing unreachable block (ram,0x0322bbe4) */
/* WARNING: Removing unreachable block (ram,0x0322bbf0) */
/* WARNING: Removing unreachable block (ram,0x0322bc0c) */
/* WARNING: Removing unreachable block (ram,0x0322ba84) */
/* WARNING: Removing unreachable block (ram,0x0322ba9c) */
/* WARNING: Removing unreachable block (ram,0x0322baa4) */
/* WARNING: Removing unreachable block (ram,0x0322bacc) */
/* WARNING: Removing unreachable block (ram,0x0322bab0) */
/* WARNING: Removing unreachable block (ram,0x0322babc) */
/* WARNING: Removing unreachable block (ram,0x0322badc) */
/* WARNING: Removing unreachable block (ram,0x0322b958) */
/* WARNING: Removing unreachable block (ram,0x0322b970) */
/* WARNING: Removing unreachable block (ram,0x0322b978) */
/* WARNING: Removing unreachable block (ram,0x0322b9a0) */
/* WARNING: Removing unreachable block (ram,0x0322b984) */
/* WARNING: Removing unreachable block (ram,0x0322b990) */
/* WARNING: Removing unreachable block (ram,0x0322b9b0) */
/* WARNING: Removing unreachable block (ram,0x0322b830) */
/* WARNING: Removing unreachable block (ram,0x0322b848) */
/* WARNING: Removing unreachable block (ram,0x0322b850) */
/* WARNING: Removing unreachable block (ram,0x0322b878) */
/* WARNING: Removing unreachable block (ram,0x0322b85c) */
/* WARNING: Removing unreachable block (ram,0x0322b868) */
/* WARNING: Removing unreachable block (ram,0x0322b888) */

ulong Core_DebugMenu_DebugMenu__IsPanelShowing(ulong param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  puVar5 = &uStack_40;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  puVar7 = (undefined *)0x163f114;
  puVar2 = &uStack_40;
  while( true ) {
    *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar2 + -0x28) = unaff_x21;
    *(ulong *)((long)puVar2 + -0x20) = unaff_x20;
    *(ulong *)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)puVar2 + -8) = puVar7;
    unaff_x23 = 0x3eb5000;
    if ((bRam0000000003eb5723 & 1) == 0) {
      func_0x00f78a20(0x3d2ed58);
      bRam0000000003eb5723 = 1;
    }
    *(undefined8 *)((long)puVar2 + -0x50) = 0;
    *(undefined8 *)((long)puVar2 + -0x68) = 0;
    *(undefined8 *)((long)puVar2 + -0x70) = 0;
    *(undefined8 *)((long)puVar2 + -0x58) = 0;
    *(undefined8 *)((long)puVar2 + -0x60) = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar3 = /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$TryGetValue*/ func_0x01e96f88(*(long *)(param_1 + 0x48),param_2,(undefined1 *)((long)puVar2 + -0x70)
                              ,uRam0000000003d2ed58);
      iVar1 = *(int *)((long)puVar2 + -0x68);
      if ((uVar3 & iVar1 == 1) == 1) {
        uVar8 = *(undefined8 *)((long)puVar2 + -0x70);
        uVar10 = *(undefined8 *)((long)puVar2 + -0x58);
        uVar9 = *(undefined8 *)((long)puVar2 + -0x60);
        puVar5[1] = *(undefined8 *)((long)puVar2 + -0x68);
        *puVar5 = uVar8;
        puVar5[3] = uVar10;
        puVar5[2] = uVar9;
        puVar5[4] = *(undefined8 *)((long)puVar2 + -0x50);
      }
      else {
        puVar5[4] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
      }
      return (ulong)(uVar3 & iVar1 == 1);
    }
    auVar11 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)puVar2 + -0xa0);
    *(ulong *)((long)puVar2 + -0xa0) = param_1;
    *(ulong *)((long)puVar2 + -0x98) = param_2;
    *(undefined8 *)((long)puVar2 + -0x90) = 1;
    *(undefined8 **)((long)puVar2 + -0x88) = puVar5;
    *(undefined1 **)((long)puVar2 + -0x80) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x78) = &Core_DebugMenu_DebugMenu__IsOnlyPanelShowing;
    if ((bRam0000000003eb5704 & 1) == 0) {
      func_0x00f78a20(0x3d3cfc8);
      func_0x00f78a20(0x3d3cfd0);
      bRam0000000003eb5704 = 1;
    }
    lVar6 = *(long *)(auVar11._0_8_ + 0x50);
    if (lVar6 != 0) break;
    unaff_x19 = func_0x00f78af4();
    param_2 = (ulong)*(uint *)(unaff_x19 + 0x3c);
    if (*(uint *)(unaff_x19 + 0x3c) == 0xffffffff) {
      return unaff_x19;
    }
    unaff_x21 = 0xffffffff;
    *(undefined8 *)((long)puVar2 + -0xe0) = unaff_x24;
    *(undefined8 *)((long)puVar2 + -0xd8) = 0x3eb5000;
    *(ulong *)((long)puVar2 + -0xd0) = param_1;
    *(undefined8 *)((long)puVar2 + -200) = 0x3eb5000;
    *(undefined1 (*) [16])((long)puVar2 + -0xc0) = auVar11;
    *(undefined1 **)((long)puVar2 + -0xb0) = (undefined1 *)((long)puVar2 + -0x80);
    *(undefined **)((long)puVar2 + -0xa8) = &Core_DebugMenu_DebugMenu__ShowRootPanel;
    unaff_x22 = 0x3eb5000;
    if ((bRam0000000003eb5724 & 1) == 0) {
      func_0x00f78a20(0x3d21150);
      func_0x00f78a20(0x3d403d0);
      func_0x00f78a20(0x3d403e0);
      func_0x00f78a20(0x3d403c8);
      func_0x00f78a20(0x3d1e880);
      bRam0000000003eb5724 = 1;
    }
    *(undefined8 *)((long)puVar2 + -0xf0) = 0;
    *(undefined8 *)((long)puVar2 + -0x108) = 0;
    *(undefined8 *)((long)puVar2 + -0x110) = 0;
    *(undefined8 *)((long)puVar2 + -0xf8) = 0;
    *(undefined8 *)((long)puVar2 + -0x100) = 0;
    *(undefined8 *)((long)puVar2 + -0x120) = 0;
    *(undefined8 *)((long)puVar2 + -0x138) = 0;
    *(undefined8 *)((long)puVar2 + -0x140) = 0;
    *(undefined8 *)((long)puVar2 + -0x128) = 0;
    *(undefined8 *)((long)puVar2 + -0x130) = 0;
    puVar5 = (undefined8 *)((long)puVar2 + -0x110);
    puVar7 = &UNK_0163f358;
    puVar2 = (undefined8 *)((long)puVar2 + -0x140);
    param_1 = unaff_x19;
    unaff_x20 = param_2;
  }
  if (*(int *)(lVar6 + 0x18) == 1) {
    uVar4 = (ulong)(*(int *)(*(long *)(lVar6 + 0x10) + 0x24) == auVar11._8_4_);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x163f14c | Core.DebugMenu.DebugMenu.TryGetElementCopy
// ============================================================

/* WARNING: Possible PIC construction at 0x01642d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163f480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164292c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163f484) */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Removing unreachable block (ram,0x01642930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_DebugMenu_DebugMenu__TryGetElementCopy
                (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long **pplVar5;
  undefined1 *puVar6;
  long **pplVar7;
  uint uVar8;
  ulong uVar10;
  ulong uVar11;
  int iVar9;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined8 unaff_x24;
  undefined8 uVar27;
  undefined8 *******pppppppuVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long *plStack_160;
  ulong uStack_158;
  undefined8 ******ppppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar24 = (long *)0x3eb5000;
  if ((bRam0000000003eb5723 & 1) == 0) {
    func_0x00f78a20(0x3d2ed58);
    bRam0000000003eb5723 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_1[9] != 0) {
    uVar8 = /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$TryGetValue*/ func_0x01e96f88(param_1[9],param_2,&uStack_70,uRam0000000003d2ed58);
    uVar8 = uVar8 & (int)uStack_68 == (int)param_3;
    if (uVar8 == 1) {
      param_4[1] = uStack_68;
      *param_4 = uStack_70;
      param_4[3] = uStack_58;
      param_4[2] = uStack_60;
      param_4[4] = uStack_50;
    }
    else {
      param_4[4] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[3] = 0;
      param_4[2] = 0;
    }
    return (ulong)uVar8;
  }
  auVar31 = func_0x00f78af4();
  pplVar5 = &plStack_a0;
  puStack_78 = &Core_DebugMenu_DebugMenu__IsOnlyPanelShowing;
  plStack_a0 = param_1;
  uStack_98 = param_2;
  uStack_90 = param_3;
  puStack_88 = param_4;
  pppppuStack_80 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5704 & 1) == 0) {
    func_0x00f78a20(0x3d3cfc8);
    func_0x00f78a20(0x3d3cfd0);
    bRam0000000003eb5704 = 1;
  }
  lVar17 = *(long *)(auVar31._0_8_ + 0x50);
  if (lVar17 != 0) {
    if (*(int *)(lVar17 + 0x18) == 1) {
      uVar10 = (ulong)(*(int *)(*(long *)(lVar17 + 0x10) + 0x24) == auVar31._8_4_);
    }
    else {
      uVar10 = 0;
    }
    return uVar10;
  }
  uVar10 = func_0x00f78af4();
  plVar14 = (long *)CONCAT44(0,*(uint *)(uVar10 + 0x3c));
  auVar33._8_8_ = uVar10;
  auVar33._0_8_ = plVar14;
  if (*(uint *)(uVar10 + 0x3c) == 0xffffffff) {
    return uVar10;
  }
  puStack_a8 = &Core_DebugMenu_DebugMenu__ShowRootPanel;
  plVar21 = (long *)0xffffffff;
  ppppppuStack_b0 = &pppppuStack_80;
  if ((bRam0000000003eb5724 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403e0);
    func_0x00f78a20(0x3d403c8);
    func_0x00f78a20(0x3d1e880);
    bRam0000000003eb5724 = 1;
  }
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  plStack_f8 = (long *)0x0;
  uStack_100 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
  uVar11 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,plVar14,1,&uStack_110);
  plVar22 = plStack_f8;
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  uVar20 = unaff_x24;
  if (plStack_f8 != (long *)0x0) {
    uVar23 = 0x3d21150;
    uVar27 = 0x3d21150;
    uVar20 = uVar27;
    if ((*(byte *)(*plStack_f8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plStack_f8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      func_0x00f78e5c(plStack_f8);
    }
    else {
      if (plStack_f8[0xf] != 0) {
        if (*(long *)(uVar10 + 0x78) == 0) {
          return uVar11;
        }
        plVar21 = (long *)0x3eb5000;
        plVar25 = (long *)0x3eb5000;
        plVar14 = plStack_f8;
        pppppppuVar28 = (undefined8 *******)ppppppuStack_b0;
        puVar30 = puStack_a8;
        goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
      }
      iVar9 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,0xffffffff,1,&uStack_140);
      plVar25 = plStack_128;
      if (iVar9 == 0) {
        plVar21 = (long *)func_0x00f78aec(/*System.Collections.Generic.Stack<int>_TypeInfo*/ uRam0000000003d1e880);
        /*System.Collections.Generic.Stack<int>$$.ctor*/ func_0x028641f8(plVar21,uRam0000000003d403c8);
        plVar22[0xf] = (long)plVar21;
        if (plVar21 != (long *)0x0) {
          /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(plVar21,plVar14,uRam0000000003d403e0);
          if ((plVar22[5] != 0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar22[5],0), lVar17 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,0,0);
            uVar11 = 0;
            plVar21 = (long *)0x3eb5000;
            plVar25 = (long *)0x3eb5000;
            pplVar5 = &plStack_a0;
            pppppppuVar28 = (undefined8 *******)ppppppuStack_b0;
            puVar30 = puStack_a8;
            goto code_r0x016427fc;
          }
        }
      }
      else {
        plVar24 = plVar25;
        uVar20 = uVar23;
        if (plStack_128 != (long *)0x0) {
          unaff_x24 = uVar23;
          if ((*(byte *)(*plStack_128 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plStack_128 + 200) +
                        (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8) !=
              /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x0163f554;
          if (plStack_128[0xf] == 0) {
            return 0;
          }
          uVar11 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(plStack_128[0xf],uRam0000000003d403d0);
          if ((int)uVar11 != -1) {
            return uVar11;
          }
          lVar17 = plVar25[0xf];
          plVar22[0xf] = lVar17;
          if (lVar17 != 0) {
            /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(lVar17,plVar14,uRam0000000003d403e0);
            uVar20 = uVar27;
            if ((plVar22[5] != 0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar22[5],0), lVar17 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0);
              uVar11 = (ulong)_UNK_033f8144;
              pplVar5 = (long **)&uStack_140;
              param_1 = plVar22;
              pppppppuVar28 = &ppppppuStack_b0;
              puVar30 = &UNK_0163f484;
              auVar31 = auVar33;
              goto code_r0x016427fc;
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  unaff_x24 = uVar20;
code_r0x0163f554:
  uVar12 = func_0x00f78e5c(plVar24);
  pplVar7 = &plStack_160;
  puStack_148 = &Core_DebugMenu_DebugMenu__HideAllPanels;
  pppppppuVar28 = &ppppppuStack_150;
  auVar3._8_8_ = uVar12;
  auVar3._0_8_ = 0x3eb5000;
  uVar11 = uVar12;
  plStack_160 = plVar14;
  uStack_158 = uVar10;
  ppppppuStack_150 = &ppppppuStack_b0;
  if ((bRam0000000003eb5705 & 1) == 0) {
    func_0x00f78a20(0x3d3cfc8);
    uVar11 = func_0x00f78a20(0x3d3cfd0);
    bRam0000000003eb5705 = 1;
  }
  auVar4._8_8_ = uStack_158;
  auVar4._0_8_ = plStack_160;
  lVar17 = *(long *)(uVar12 + 0x50);
  if (lVar17 == 0) {
    puVar30 = &Core_DebugMenu_DebugMenu__PopAll;
    auVar32 = func_0x00f78af4();
    plVar16 = (long *)0x0;
  }
  else {
    if (*(int *)(lVar17 + 0x18) < 1) {
      return uVar11;
    }
    auVar32._8_4_ =
         *(undefined4 *)(*(long *)(lVar17 + 0x10) + (ulong)(*(int *)(lVar17 + 0x18) - 1) * 8 + 0x24)
    ;
    auVar32._0_8_ = uVar12;
    auVar32._12_4_ = 0;
    plVar16 = (long *)0x0;
    pplVar7 = (long **)&uStack_140;
    pppppppuVar28 = (undefined8 *******)ppppppuStack_150;
    puVar30 = puStack_148;
    auVar3 = auVar4;
  }
  do {
    while( true ) {
      auVar31 = auVar32;
      uVar11 = auVar31._8_8_;
      uVar10 = auVar31._0_8_;
      *(undefined8 *)((long)pplVar7 + -0x40) = unaff_x24;
      *(long **)((long)pplVar7 + -0x38) = plVar24;
      *(long **)((long)pplVar7 + -0x30) = plVar22;
      *(long **)((long)pplVar7 + -0x28) = plVar21;
      *(undefined1 (*) [16])((long)pplVar7 + -0x20) = auVar3;
      *(undefined8 ********)((long)pplVar7 + -0x10) = pppppppuVar28;
      *(undefined **)((long)pplVar7 + -8) = puVar30;
      pppppppuVar28 = (undefined8 *******)((long)pplVar7 + -0x10);
      if ((bRam0000000003eb5726 & 1) == 0) {
        func_0x00f78a20(0x3d21150);
        func_0x00f78a20(0x3d403d0);
        func_0x00f78a20(0x3d403d8);
        func_0x00f78a20(0x3d403e8);
        bRam0000000003eb5726 = 1;
      }
      *(undefined8 *)((long)pplVar7 + -0x50) = 0;
      *(undefined8 *)((long)pplVar7 + -0x68) = 0;
      *(undefined8 *)((long)pplVar7 + -0x70) = 0;
      *(undefined8 *)((long)pplVar7 + -0x58) = 0;
      *(undefined8 *)((long)pplVar7 + -0x60) = 0;
      *(undefined8 *)((long)pplVar7 + -0x80) = 0;
      *(undefined8 *)((long)pplVar7 + -0x98) = 0;
      *(undefined8 *)((long)pplVar7 + -0xa0) = 0;
      *(undefined8 *)((long)pplVar7 + -0x88) = 0;
      *(undefined8 *)((long)pplVar7 + -0x90) = 0;
      uVar12 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                         (uVar10,uVar11,1,(undefined1 *)((long)pplVar7 + -0x70));
      if ((int)uVar12 == 0) {
        return uVar12;
      }
      plVar21 = *(long **)((long)pplVar7 + -0x58);
      plVar14 = plVar21;
      if (plVar21 == (long *)0x0) goto code_r0x01642da0;
      plVar25 = (long *)0x3d21150;
      plVar26 = (long *)0x3d21150;
      plVar22 = plVar16;
      plVar24 = plVar25;
      if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*plVar21 + 300)) &&
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                   -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) break;
code_r0x01642da8:
      auVar32 = func_0x00f78e5c(plVar14);
      plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
      pplVar7 = (long **)((long)pplVar7 + -0xa0);
      puVar30 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
      auVar3 = auVar31;
    }
    if (plVar21[0xf] == 0) {
code_r0x01642da0:
      func_0x00f78af4();
      plVar14 = plVar21;
      plVar22 = plVar16;
      goto code_r0x01642da8;
    }
    uVar20 = 0x3d403d8;
    /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(plVar21[0xf],uRam0000000003d403d8);
    lVar17 = plVar21[0xf];
    unaff_x24 = uVar20;
    if (lVar17 == 0) goto code_r0x01642da0;
    uVar8 = *(int *)(lVar17 + 0x18) - (int)plVar16;
    plVar16 = (long *)(ulong)uVar8;
    param_1 = plVar16;
    if (0 < (int)uVar8) {
      do {
        plVar24 = plVar26;
        unaff_x24 = uVar20;
        if (lVar17 == 0) goto code_r0x01642da0;
        uVar23 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar17,uRam0000000003d403d8);
        iVar9 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (uVar10,uVar23,1,(undefined1 *)((long)pplVar7 + -0xa0));
        if (iVar9 != 0) {
          plVar14 = *(long **)((long)pplVar7 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar14 == (long *)0x0) goto code_r0x01642da0;
          plVar22 = plVar16;
          plVar24 = plVar25;
          unaff_x24 = uVar20;
          if ((*(byte *)(*plVar14 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
          plVar14[0xf] = 0;
        }
        lVar17 = plVar21[0xf];
        uVar8 = (int)plVar16 - 1;
        plVar16 = (long *)(ulong)uVar8;
      } while (uVar8 != 0);
      param_1 = (long *)0x0;
      plVar24 = plVar26;
      unaff_x24 = 0x3d403d8;
      if (lVar17 == 0) goto code_r0x01642da0;
    }
    if (*(int *)(lVar17 + 0x18) < 1) {
      plVar21[0xf] = 0;
      puVar29 = *(undefined1 **)((long)pplVar7 + -0x10);
      puVar30 = *(undefined **)((long)pplVar7 + -8);
      uVar12 = *(ulong *)((long)pplVar7 + -0x20);
      lVar17 = *(long *)((long)pplVar7 + -0x30);
      uVar20 = *(undefined8 *)((long)pplVar7 + -0x28);
      puVar6 = (undefined1 *)pplVar7;
      uVar19 = *(ulong *)((long)pplVar7 + -0x18);
      break;
    }
    plVar14 = (long *)/*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar17,uRam0000000003d403d0);
    uVar11 = (ulong)_UNK_033f8144;
    pplVar5 = (long **)((long)pplVar7 + -0xa0);
    unaff_x24 = uVar20;
    puVar30 = &UNK_01642d60;
code_r0x016427fc:
    while( true ) {
      *(undefined8 *)((long)pplVar5 + -0x40) = unaff_d9;
      *(ulong *)((long)pplVar5 + -0x38) = unaff_d8;
      *(long **)((long)pplVar5 + -0x30) = param_1;
      *(long **)((long)pplVar5 + -0x28) = plVar21;
      *(undefined1 (*) [16])((long)pplVar5 + -0x20) = auVar31;
      *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar28;
      *(undefined **)((long)pplVar5 + -8) = puVar30;
      pppppppuVar28 = (undefined8 *******)((long)pplVar5 + -0x10);
      uVar12 = uVar10;
      if ((bRam0000000003eb5727 & 1) == 0) {
        func_0x00f78a20(0x3d535c0);
        func_0x00f78a20(0x3d3acd0);
        uVar12 = func_0x00f78a20(0x3d3acd8);
        bRam0000000003eb5727 = 1;
      }
      *(undefined8 *)((long)pplVar5 + -0x50) = 0;
      *(undefined8 *)((long)pplVar5 + -0x68) = 0;
      *(undefined8 *)((long)pplVar5 + -0x70) = 0;
      *(undefined8 *)((long)pplVar5 + -0x58) = 0;
      *(undefined8 *)((long)pplVar5 + -0x60) = 0;
      if ((int)plVar14 == -1) {
        return uVar12;
      }
      /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(uVar11,uVar12,*(undefined8 *)(uVar10 + 0x58),*(undefined8 *)(uVar10 + 0x50),
                      plVar14);
      plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
      uVar12 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                         (uVar10,plVar14,1,(undefined1 *)((long)pplVar5 + -0x70));
      if ((int)uVar12 == 0) {
        return uVar12;
      }
      if (*(long *)((long)pplVar5 + -0x60) == 0) break;
      plVar14 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)pplVar5 + -0x60),uRam0000000003d535c0);
      auVar31._8_8_ = uVar10;
      auVar31._0_8_ = plVar14;
      if (*(long *)(uVar10 + 0x78) == 0) {
        if (plVar14 != (long *)0x0) goto code_r0x016428ec;
        break;
      }
      if (plVar14 == (long *)0x0) break;
      plVar16 = (long *)0x0;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar14,1);
code_r0x016428ec:
      param_1 = (long *)plVar14[0x10];
      if (param_1 == (long *)0x0) goto code_r0x01642940;
      plVar21 = (long *)0x0;
      if ((int)param_1[3] < 1) goto code_r0x01642940;
      if ((int)param_1[3] == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      plVar14 = (long *)(ulong)*(uint *)(param_1[2] + 0x20);
      puVar30 = &UNK_01642930;
      pplVar5 = (long **)((long)pplVar5 + -0x70);
      unaff_d8 = uVar11;
    }
    func_0x00f78af4();
code_r0x01642940:
    pppppppuVar28 = *(undefined8 ********)((long)pplVar5 + -0x10);
    puVar30 = *(undefined **)((long)pplVar5 + -8);
    auVar31 = *(undefined1 (*) [16])((long)pplVar5 + -0x20);
    param_1 = *(long **)((long)pplVar5 + -0x30);
    plVar21 = *(long **)((long)pplVar5 + -0x28);
    unaff_d9 = *(undefined8 *)((long)pplVar5 + -0x40);
    unaff_d8 = *(ulong *)((long)pplVar5 + -0x38);
Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild:
    *(undefined1 (*) [16])((long)pplVar5 + -0x20) = auVar31;
    *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar28;
    *(undefined **)((long)pplVar5 + -8) = puVar30;
    uVar20 = 0x3eb5000;
    if ((bRam0000000003eb5734 & 1) == 0) {
      func_0x00f78a20(0x3d535e8);
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5734 = 1;
    }
    if (plVar14[8] != 0) {
      uVar20 = 0x3d23000;
      plVar14 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar14[8],uRam0000000003d535e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar14,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      if (plVar14 != (long *)0x0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar14,1,0);
        plVar16 = *(long **)(*plVar14 + 0x380);
        (**(code **)(*plVar14 + 0x378))(plVar14,0);
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar17 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        plVar24 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar14,0);
        uVar20 = 0;
        if (lVar17 != 0) goto code_r0x01642b9c;
      }
    }
    auVar3._8_8_ = plVar14;
    auVar3._0_8_ = uVar20;
    auVar32 = func_0x00f78af4();
    pplVar7 = (long **)((long)pplVar5 + -0x20);
    plVar22 = param_1;
    plVar24 = plVar25;
    pppppppuVar28 = (undefined8 *******)((long)pplVar5 + -0x10);
    puVar30 = &Core_DebugMenu_DebugMenu__PopPanels;
  } while( true );
code_r0x0164295c:
  *(undefined8 *)(puVar6 + -0x40) = unaff_d9;
  *(ulong *)(puVar6 + -0x38) = unaff_d8;
  *(long *)(puVar6 + -0x30) = lVar17;
  *(undefined8 *)(puVar6 + -0x28) = uVar20;
  *(ulong *)(puVar6 + -0x20) = uVar12;
  *(ulong *)(puVar6 + -0x18) = uVar19;
  *(undefined1 **)(puVar6 + -0x10) = puVar29;
  *(undefined **)(puVar6 + -8) = puVar30;
  puVar29 = puVar6 + -0x10;
  unaff_d8 = 0;
  uVar12 = uVar10;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    uVar12 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)(puVar6 + -0x50) = 0;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  *(undefined8 *)(puVar6 + -0x70) = 0;
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  if ((int)uVar11 == -1) {
    return uVar12;
  }
  /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,uVar12,*(undefined8 *)(uVar10 + 0x50),*(undefined8 *)(uVar10 + 0x58),uVar11);
  uVar11 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,uVar11,1,puVar6 + -0x70);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(puVar6 + -0x60) == 0) {
code_r0x01642a84:
    uVar10 = func_0x00f78af4();
    return uVar10;
  }
  uVar12 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar6 + -0x60),uRam0000000003d535c0);
  if (*(long *)(uVar10 + 0x78) == 0) {
    uVar11 = uVar12;
    if (uVar12 == 0) goto code_r0x01642a84;
  }
  else {
    if (uVar12 == 0) goto code_r0x01642a84;
    uVar11 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(uVar12,0,0);
  }
  lVar17 = *(long *)(uVar12 + 0x80);
  if (lVar17 == 0) {
    return uVar11;
  }
  uVar20 = 0;
  if (*(int *)(lVar17 + 0x18) < 1) {
    return uVar11;
  }
  if (*(int *)(lVar17 + 0x18) == 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  uVar11 = (ulong)*(uint *)(*(long *)(lVar17 + 0x10) + 0x20);
  puVar30 = &UNK_01642a78;
  puVar6 = puVar6 + -0x70;
  uVar19 = uVar10;
  goto code_r0x0164295c;
code_r0x01642b9c:
  *(undefined8 *)((long)pplVar5 + -0x20) = *(undefined8 *)((long)pplVar5 + -0x20);
  *(undefined8 *)((long)pplVar5 + -0x18) = *(undefined8 *)((long)pplVar5 + -0x18);
  *(undefined8 *)((long)pplVar5 + -0x10) = *(undefined8 *)((long)pplVar5 + -0x10);
  *(undefined8 *)((long)pplVar5 + -8) = *(undefined8 *)((long)pplVar5 + -8);
  uVar20 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar17,plVar24,0);
  *(undefined8 *)((long)pplVar5 + -0x40) = unaff_x24;
  *(long **)((long)pplVar5 + -0x38) = plVar25;
  *(long **)((long)pplVar5 + -0x30) = param_1;
  *(long **)((long)pplVar5 + -0x28) = plVar21;
  *(undefined8 *)((long)pplVar5 + -0x20) = *(undefined8 *)((long)pplVar5 + -0x20);
  *(undefined8 *)((long)pplVar5 + -0x18) = *(undefined8 *)((long)pplVar5 + -0x18);
  *(undefined8 *)((long)pplVar5 + -0x10) = *(undefined8 *)((long)pplVar5 + -0x10);
  *(undefined8 *)((long)pplVar5 + -8) = *(undefined8 *)((long)pplVar5 + -8);
  if ((bRam0000000003ec2c3f & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d560a8);
    func_0x00f78a20(0x3d560f0);
    func_0x00f78a20(0x3d21718);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d69450);
    func_0x00f78a20(0x3d7c748);
    bRam0000000003ec2c3f = 1;
  }
  uVar23 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
  if (*(char *)(lVar17 + 0x41) == '\0') {
    *(undefined1 *)(lVar17 + 0x41) = 1;
    uVar23 = *(undefined8 *)(lVar17 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar24,uVar23,0);
    if ((int)uVar10 == 0) {
      uVar23 = *(undefined8 *)(lVar17 + 0x38);
      if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (cRam0000000003e85071 == '\0') {
        func_0x00f78a20(0x3d21718);
        cRam0000000003e85071 = '\x01';
      }
      if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar23,uVar20,*(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                      uRam0000000003d560a8);
      *(long **)(lVar17 + 0x38) = plVar24;
      if (cRam0000000003e85072 == '\0') {
        func_0x00f78a20(0x3d21718);
        cRam0000000003e85072 = '\x01';
      }
      if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar24,uVar20,
                               *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                               uRam0000000003d560f0);
    }
    *(undefined1 *)(lVar17 + 0x41) = 0;
    return uVar10;
  }
  if (plVar24 == (long *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = (**(code **)(*plVar24 + 0x168))(plVar24,*(undefined8 *)(*plVar24 + 0x170));
  }
  uVar27 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
  uVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar23,uVar20,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = 0;
  uVar23 = *(undefined8 *)((long)pplVar5 + -0x30);
  uVar1 = *(undefined8 *)((long)pplVar5 + -0x40);
  uVar2 = *(undefined8 *)((long)pplVar5 + -0x38);
  *(undefined8 *)((long)pplVar5 + -0x30) = uVar23;
  *(undefined8 *)((long)pplVar5 + -0x28) = *(undefined8 *)((long)pplVar5 + -0x28);
  *(undefined8 *)((long)pplVar5 + -0x20) = *(undefined8 *)((long)pplVar5 + -0x20);
  *(undefined8 *)((long)pplVar5 + -0x18) = *(undefined8 *)((long)pplVar5 + -0x18);
  *(undefined8 *)((long)pplVar5 + -0x10) = *(undefined8 *)((long)pplVar5 + -0x10);
  *(undefined8 *)((long)pplVar5 + -8) = *(undefined8 *)((long)pplVar5 + -8);
  if ((bRam0000000003ebf392 & 1) == 0) {
    func_0x00f78a20(0x3d210d8,0);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf392 = 1;
    uVar15 = extraout_x1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar15 = extraout_x1_00;
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8,uVar15);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar17 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 4) * 0x10 + 0x138);
          goto code_r0x0322b888;
        }
        piVar18 = piVar18 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)*puVar13)(plVar24,0,uVar20,puVar13[1]);
    return uVar10;
  }
  auVar31 = func_0x00f78af4();
  *(undefined8 *)((long)pplVar5 + -0x60) = uVar23;
  *(undefined8 *)((long)pplVar5 + -0x58) = 0x3ca3000;
  *(undefined8 *)((long)pplVar5 + -0x50) = 0;
  *(undefined8 *)((long)pplVar5 + -0x48) = uVar20;
  *(undefined1 **)((long)pplVar5 + -0x40) = (undefined1 *)((long)pplVar5 + -0x10);
  *(undefined **)((long)pplVar5 + -0x38) = &UnityEngine_Debug__LogError;
  if ((bRam0000000003ebf393 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf393 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar17 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 5) * 0x10 + 0x138);
          goto code_r0x0322b9b0;
        }
        piVar18 = piVar18 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)*puVar13)(plVar24,0,auVar31._0_8_,auVar31._8_8_,puVar13[1]);
    return uVar10;
  }
  auVar33 = func_0x00f78af4();
  *(undefined8 *)((long)pplVar5 + -0x90) = 0x3ca3000;
  *(undefined8 *)((long)pplVar5 + -0x88) = 0;
  *(undefined1 (*) [16])((long)pplVar5 + -0x80) = auVar31;
  *(undefined1 **)((long)pplVar5 + -0x70) = (undefined1 *)((long)pplVar5 + -0x40);
  *(undefined **)((long)pplVar5 + -0x68) = &UnityEngine_Debug__LogErrorFormat;
  if ((bRam0000000003ebf394 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf394 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar17 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 7) * 0x10 + 0x138);
          goto code_r0x0322badc;
        }
        piVar18 = piVar18 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)*puVar13)(plVar24,0,auVar33._0_8_,auVar33._8_8_,puVar13[1]);
    return uVar10;
  }
  auVar31 = func_0x00f78af4();
  *(undefined8 *)((long)pplVar5 + -0xd0) = uVar1;
  *(undefined8 *)((long)pplVar5 + -200) = uVar2;
  *(undefined8 *)((long)pplVar5 + -0xc0) = 0x3ca3000;
  *(undefined8 *)((long)pplVar5 + -0xb8) = 0;
  *(undefined1 (*) [16])((long)pplVar5 + -0xb0) = auVar33;
  *(undefined1 **)((long)pplVar5 + -0xa0) = (undefined1 *)((long)pplVar5 + -0x70);
  *(undefined **)((long)pplVar5 + -0x98) = &UnityEngine_Debug__LogErrorFormat;
  uVar20 = uVar27;
  if ((bRam0000000003ebf395 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d222f8);
    bRam0000000003ebf395 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar17 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
          goto code_r0x0322bc0c;
        }
        piVar18 = piVar18 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)*puVar13)(plVar24,0,auVar31._0_8_,auVar31._8_8_,uVar27,puVar13[1]);
    return uVar10;
  }
  auVar33 = func_0x00f78af4();
  *(undefined8 *)((long)pplVar5 + -0x100) = 0;
  *(undefined1 (*) [16])((long)pplVar5 + -0xf8) = auVar31;
  *(undefined8 *)((long)pplVar5 + -0xe8) = uVar27;
  *(undefined1 **)((long)pplVar5 + -0xe0) = (undefined1 *)((long)pplVar5 + -0xa0);
  *(undefined **)((long)pplVar5 + -0xd8) = &UnityEngine_Debug__LogException;
  if ((bRam0000000003ebf397 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d222f8);
    bRam0000000003ebf397 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar17 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto code_r0x0322bd40;
        }
        piVar18 = piVar18 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)*puVar13)(plVar24,auVar33._0_8_,auVar33._8_8_,puVar13[1]);
    return uVar10;
  }
  auVar31 = func_0x00f78af4();
  *(undefined8 *)((long)pplVar5 + -0x130) = 0x3ca3000;
  *(undefined8 *)((long)pplVar5 + -0x128) = 0;
  *(undefined1 (*) [16])((long)pplVar5 + -0x120) = auVar33;
  *(undefined1 **)((long)pplVar5 + -0x110) = (undefined1 *)((long)pplVar5 + -0xe0);
  *(undefined **)((long)pplVar5 + -0x108) = &UnityEngine_Debug__LogWarning;
  if ((bRam0000000003ebf399 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf399 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar17 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 5) * 0x10 + 0x138);
          goto code_r0x0322be68;
        }
        piVar18 = piVar18 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)*puVar13)(plVar24,2,auVar31._0_8_,auVar31._8_8_,puVar13[1]);
    return uVar10;
  }
  auVar33 = func_0x00f78af4();
  *(undefined8 *)((long)pplVar5 + -0x160) = 0x3ca3000;
  *(undefined8 *)((long)pplVar5 + -0x158) = 0;
  *(undefined1 (*) [16])((long)pplVar5 + -0x150) = auVar31;
  *(undefined1 **)((long)pplVar5 + -0x140) = (undefined1 *)((long)pplVar5 + -0x110);
  *(undefined **)((long)pplVar5 + -0x138) = &UnityEngine_Debug__LogWarningFormat;
  if ((bRam0000000003ebf39a & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf39a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 != (long *)0x0) {
    lVar17 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 7) * 0x10 + 0x138);
          goto code_r0x0322bf94;
        }
        piVar18 = piVar18 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)*puVar13)(plVar24,2,auVar33._0_8_,auVar33._8_8_,puVar13[1]);
    return uVar10;
  }
  auVar31 = func_0x00f78af4();
  *(undefined8 *)((long)pplVar5 + -0x1a0) = uVar1;
  *(undefined8 *)((long)pplVar5 + -0x198) = 0x3ca3000;
  *(undefined8 *)((long)pplVar5 + -400) = 0x3ca3000;
  *(undefined8 *)((long)pplVar5 + -0x188) = 0;
  *(undefined1 (*) [16])((long)pplVar5 + -0x180) = auVar33;
  *(undefined1 **)((long)pplVar5 + -0x170) = (undefined1 *)((long)pplVar5 + -0x140);
  *(undefined **)((long)pplVar5 + -0x168) = &UnityEngine_Debug__LogWarningFormat;
  if ((bRam0000000003ebf39b & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d222f8);
    bRam0000000003ebf39b = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar24 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar24 == (long *)0x0) {
    func_0x00f78af4();
    *(long *)((long)pplVar5 + -0x1c0) = auVar31._8_8_;
    *(undefined8 *)((long)pplVar5 + -0x1b8) = uVar20;
    *(undefined1 **)((long)pplVar5 + -0x1b0) = (undefined1 *)((long)pplVar5 + -0x170);
    *(undefined **)((long)pplVar5 + -0x1a8) = &UnityEngine_Debug__get_isDebugBuild;
    if (pcRam0000000003ebf3a0 == (code *)0x0) {
      pcRam0000000003ebf3a0 = (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ebf3a0)();
    return uVar10;
  }
  lVar17 = *plVar24;
  uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar10 != 0) {
    piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
        puVar13 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
        goto code_r0x0322c0c4;
      }
      piVar18 = piVar18 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  puVar13 = (undefined8 *)func_0x00fac1f0(plVar24,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*(code *)*puVar13)(plVar24,2,auVar31._0_8_,auVar31._8_8_,uVar20,puVar13[1]);
  return uVar10;
}



// ============================================================
// RVA: 0x163f214 | Core.DebugMenu.DebugMenu.IsOnlyPanelShowing
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163f298 | Core.DebugMenu.DebugMenu.ShowRootPanel
// ============================================================

/* WARNING: Possible PIC construction at 0x01642d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163f480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164292c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163f484) */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Removing unreachable block (ram,0x01642930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__ShowRootPanel(long *param_1)

{
  undefined8 *******pppppppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long **pplVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar15;
  long *unaff_x21;
  long *plVar16;
  long *unaff_x22;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long *unaff_x23;
  long *plVar20;
  undefined8 unaff_x24;
  undefined8 uVar21;
  undefined8 *******unaff_x29;
  undefined1 *puVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  long *plStack_c0;
  long *plStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  
  plVar10 = (long *)(ulong)*(uint *)((long)param_1 + 0x3c);
  if (*(uint *)((long)param_1 + 0x3c) == 0xffffffff) {
    return;
  }
  pppppppuVar1 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar16 = (long *)0xffffffff;
  if ((bRam0000000003eb5724 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403e0);
    func_0x00f78a20(0x3d403c8);
    func_0x00f78a20(0x3d1e880);
    bRam0000000003eb5724 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plStack_58 = (long *)0x0;
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plVar12 = (long *)((long)&MACH_HEADER.magic + 1);
  iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,plVar10,1,&uStack_70);
  plVar18 = plStack_58;
  if (iVar7 == 0) {
    return;
  }
  uVar15 = unaff_x24;
  if (plStack_58 != (long *)0x0) {
    uVar19 = 0x3d21150;
    uVar21 = 0x3d21150;
    uVar15 = uVar21;
    if ((*(byte *)(*plStack_58 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plStack_58 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      func_0x00f78e5c(plStack_58);
    }
    else {
      if (plStack_58[0xf] != 0) {
        plVar10 = plStack_58;
        if (param_1[0xf] != 0) goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
        return;
      }
      iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,0xffffffff,1,&uStack_a0);
      plVar12 = plStack_88;
      if (iVar7 == 0) {
        plVar16 = (long *)func_0x00f78aec(/*System.Collections.Generic.Stack<int>_TypeInfo*/ uRam0000000003d1e880);
        /*System.Collections.Generic.Stack<int>$$.ctor*/ func_0x028641f8(plVar16,uRam0000000003d403c8);
        plVar18[0xf] = (long)plVar16;
        if (plVar16 != (long *)0x0) {
          /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(plVar16,plVar10,uRam0000000003d403e0);
          if ((plVar18[5] != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar18[5],0), lVar8 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
            uVar24 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
            goto code_r0x016427fc;
          }
        }
      }
      else {
        unaff_x23 = plVar12;
        uVar15 = uVar19;
        if (plStack_88 != (long *)0x0) {
          unaff_x21 = plVar16;
          unaff_x24 = uVar19;
          if ((*(byte *)(*plStack_88 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plStack_88 + 200) +
                        (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8) !=
              /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x0163f554;
          if (plStack_88[0xf] == 0) {
            return;
          }
          iVar7 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(plStack_88[0xf],uRam0000000003d403d0);
          if (iVar7 != -1) {
            return;
          }
          lVar8 = plVar12[0xf];
          plVar18[0xf] = lVar8;
          if (lVar8 != 0) {
            /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(lVar8,plVar10,uRam0000000003d403e0);
            uVar15 = uVar21;
            if ((plVar18[5] != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar18[5],0), lVar8 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
              uVar24 = (undefined1)_UNK_033f8144;
              uVar25 = (undefined1)((uint)_UNK_033f8144 >> 8);
              uVar26 = (undefined1)((uint)_UNK_033f8144 >> 0x10);
              uVar27 = (undefined1)((uint)_UNK_033f8144 >> 0x18);
              unaff_x30 = &UNK_0163f484;
              register0x00000008 = (BADSPACEBASE *)&uStack_a0;
              unaff_x19 = param_1;
              unaff_x20 = plVar10;
              unaff_x22 = plVar18;
              unaff_x29 = pppppppuVar1;
              goto code_r0x016427fc;
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  unaff_x21 = plVar16;
  unaff_x24 = uVar15;
code_r0x0163f554:
  lVar8 = func_0x00f78e5c(unaff_x23);
  pplVar6 = &plStack_c0;
  puStack_a8 = &Core_DebugMenu_DebugMenu__HideAllPanels;
  unaff_x29 = &ppppppuStack_b0;
  auVar29._8_8_ = lVar8;
  auVar29._0_8_ = 0x3eb5000;
  plStack_c0 = plVar10;
  plStack_b8 = param_1;
  ppppppuStack_b0 = pppppppuVar1;
  if ((bRam0000000003eb5705 & 1) == 0) {
    func_0x00f78a20(0x3d3cfc8);
    func_0x00f78a20(0x3d3cfd0);
    bRam0000000003eb5705 = 1;
  }
  auVar30._8_8_ = plStack_b8;
  auVar30._0_8_ = plStack_c0;
  lVar17 = *(long *)(lVar8 + 0x50);
  if (lVar17 == 0) {
    puVar23 = &Core_DebugMenu_DebugMenu__PopAll;
    auVar28 = func_0x00f78af4();
    plVar12 = (long *)0x0;
  }
  else {
    if (*(int *)(lVar17 + 0x18) < 1) {
      return;
    }
    auVar28._8_4_ =
         *(undefined4 *)(*(long *)(lVar17 + 0x10) + (ulong)(*(int *)(lVar17 + 0x18) - 1) * 8 + 0x24)
    ;
    auVar28._0_8_ = lVar8;
    auVar28._12_4_ = 0;
    plVar12 = (long *)0x0;
    pplVar6 = (long **)&uStack_a0;
    unaff_x29 = (undefined8 *******)ppppppuStack_b0;
    puVar23 = puStack_a8;
    auVar29 = auVar30;
  }
  do {
    while( true ) {
      auVar30 = auVar28;
      unaff_x19 = auVar30._8_8_;
      param_1 = auVar30._0_8_;
      *(undefined8 *)((long)pplVar6 + -0x40) = unaff_x24;
      *(long **)((long)pplVar6 + -0x38) = unaff_x23;
      *(long **)((long)pplVar6 + -0x30) = plVar18;
      *(long **)((long)pplVar6 + -0x28) = unaff_x21;
      *(undefined1 (*) [16])((long)pplVar6 + -0x20) = auVar29;
      *(undefined8 ********)((long)pplVar6 + -0x10) = unaff_x29;
      *(undefined **)((long)pplVar6 + -8) = puVar23;
      unaff_x29 = (undefined8 *******)((long)pplVar6 + -0x10);
      if ((bRam0000000003eb5726 & 1) == 0) {
        func_0x00f78a20(0x3d21150);
        func_0x00f78a20(0x3d403d0);
        func_0x00f78a20(0x3d403d8);
        func_0x00f78a20(0x3d403e8);
        bRam0000000003eb5726 = 1;
      }
      *(undefined8 *)((long)pplVar6 + -0x50) = 0;
      *(undefined8 *)((long)pplVar6 + -0x68) = 0;
      *(undefined8 *)((long)pplVar6 + -0x70) = 0;
      *(undefined8 *)((long)pplVar6 + -0x58) = 0;
      *(undefined8 *)((long)pplVar6 + -0x60) = 0;
      *(undefined8 *)((long)pplVar6 + -0x80) = 0;
      *(undefined8 *)((long)pplVar6 + -0x98) = 0;
      *(undefined8 *)((long)pplVar6 + -0xa0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x88) = 0;
      *(undefined8 *)((long)pplVar6 + -0x90) = 0;
      iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                        (param_1,unaff_x19,1,(undefined1 *)((long)pplVar6 + -0x70));
      if (iVar7 == 0) {
        return;
      }
      unaff_x21 = *(long **)((long)pplVar6 + -0x58);
      plVar10 = unaff_x21;
      if (unaff_x21 == (long *)0x0) goto code_r0x01642da0;
      plVar16 = (long *)0x3d21150;
      plVar20 = (long *)0x3d21150;
      plVar18 = plVar12;
      unaff_x23 = plVar16;
      if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*unaff_x21 + 300)) &&
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                   -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) break;
code_r0x01642da8:
      auVar28 = func_0x00f78e5c(plVar10);
      plVar12 = (long *)((long)&MACH_HEADER.magic + 1);
      pplVar6 = (long **)((long)pplVar6 + -0xa0);
      puVar23 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
      auVar29 = auVar30;
    }
    if (unaff_x21[0xf] == 0) {
code_r0x01642da0:
      func_0x00f78af4();
      plVar10 = unaff_x21;
      plVar18 = plVar12;
      goto code_r0x01642da8;
    }
    uVar15 = 0x3d403d8;
    /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
    lVar8 = unaff_x21[0xf];
    unaff_x24 = uVar15;
    if (lVar8 == 0) goto code_r0x01642da0;
    uVar4 = *(int *)(lVar8 + 0x18) - (int)plVar12;
    plVar12 = (long *)(ulong)uVar4;
    unaff_x22 = plVar12;
    if (0 < (int)uVar4) {
      do {
        unaff_x23 = plVar20;
        unaff_x24 = uVar15;
        if (lVar8 == 0) goto code_r0x01642da0;
        uVar19 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar8,uRam0000000003d403d8);
        iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (param_1,uVar19,1,(undefined1 *)((long)pplVar6 + -0xa0));
        if (iVar7 != 0) {
          plVar10 = *(long **)((long)pplVar6 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar10 == (long *)0x0) goto code_r0x01642da0;
          plVar18 = plVar12;
          unaff_x23 = plVar16;
          unaff_x24 = uVar15;
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
          plVar10[0xf] = 0;
        }
        lVar8 = unaff_x21[0xf];
        uVar4 = (int)plVar12 - 1;
        plVar12 = (long *)(ulong)uVar4;
      } while (uVar4 != 0);
      unaff_x22 = (long *)0x0;
      unaff_x23 = plVar20;
      unaff_x24 = 0x3d403d8;
      if (lVar8 == 0) goto code_r0x01642da0;
    }
    if (*(int *)(lVar8 + 0x18) < 1) {
      unaff_x21[0xf] = 0;
      puVar22 = *(undefined1 **)((long)pplVar6 + -0x10);
      puVar23 = *(undefined **)((long)pplVar6 + -8);
      lVar8 = *(long *)((long)pplVar6 + -0x20);
      lVar17 = *(long *)((long)pplVar6 + -0x30);
      uVar15 = *(undefined8 *)((long)pplVar6 + -0x28);
      puVar5 = (undefined1 *)pplVar6;
      plVar10 = *(long **)((long)pplVar6 + -0x18);
      break;
    }
    plVar10 = (long *)/*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar8,uRam0000000003d403d0);
    uVar24 = (undefined1)_UNK_033f8144;
    uVar25 = (undefined1)((uint)_UNK_033f8144 >> 8);
    uVar26 = (undefined1)((uint)_UNK_033f8144 >> 0x10);
    uVar27 = (undefined1)((uint)_UNK_033f8144 >> 0x18);
    unaff_x30 = &UNK_01642d60;
    register0x00000008 = (BADSPACEBASE *)((long)pplVar6 + -0xa0);
    unaff_x20 = param_1;
    unaff_x23 = plVar16;
    unaff_x24 = uVar15;
code_r0x016427fc:
    while( true ) {
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x10);
      unaff_d8 = (ulong)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)));
      plVar16 = param_1;
      if ((bRam0000000003eb5727 & 1) == 0) {
        func_0x00f78a20(0x3d535c0);
        func_0x00f78a20(0x3d3acd0);
        plVar16 = (long *)func_0x00f78a20(0x3d3acd8);
        bRam0000000003eb5727 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      if ((int)plVar10 == -1) {
        return;
      }
      /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(uVar24,plVar16,param_1[0xb],param_1[10],plVar10);
      plVar12 = (long *)((long)&MACH_HEADER.magic + 1);
      iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                        (param_1,plVar10,1,(undefined1 *)((long)register0x00000008 + -0x70));
      if (iVar7 == 0) {
        return;
      }
      unaff_x20 = plVar10;
      if (*(long *)((long)register0x00000008 + -0x60) == 0) break;
      unaff_x20 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x60),
                                          uRam0000000003d535c0);
      if (param_1[0xf] == 0) {
        if (unaff_x20 != (long *)0x0) goto code_r0x016428ec;
        break;
      }
      if (unaff_x20 == (long *)0x0) break;
      plVar12 = (long *)0x0;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(unaff_x20,1);
code_r0x016428ec:
      unaff_x22 = (long *)unaff_x20[0x10];
      plVar10 = unaff_x20;
      if (unaff_x22 == (long *)0x0) goto code_r0x01642940;
      unaff_x21 = (long *)0x0;
      if ((int)unaff_x22[3] < 1) goto code_r0x01642940;
      if ((int)unaff_x22[3] == 0) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      plVar10 = (long *)(ulong)*(uint *)(unaff_x22[2] + 0x20);
      unaff_x30 = &UNK_01642930;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
      unaff_x19 = param_1;
    }
    func_0x00f78af4();
    plVar10 = unaff_x20;
code_r0x01642940:
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_d8 = *(ulong *)((long)register0x00000008 + -0x38);
Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild:
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar15 = 0x3eb5000;
    if ((bRam0000000003eb5734 & 1) == 0) {
      func_0x00f78a20(0x3d535e8);
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5734 = 1;
    }
    if (plVar10[8] != 0) {
      uVar15 = 0x3d23000;
      plVar10 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar10[8],uRam0000000003d535e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar10,0);
      if (iVar7 == 0) {
        return;
      }
      if (plVar10 != (long *)0x0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar10,1,0);
        plVar12 = *(long **)(*plVar10 + 0x380);
        (**(code **)(*plVar10 + 0x378))(plVar10,0);
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        plVar16 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar10,0);
        uVar15 = 0;
        if (lVar8 != 0) goto code_r0x01642b9c;
      }
    }
    auVar29._8_8_ = plVar10;
    auVar29._0_8_ = uVar15;
    auVar28 = func_0x00f78af4();
    pplVar6 = (long **)((long)register0x00000008 + -0x20);
    plVar18 = unaff_x22;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x10);
    puVar23 = &Core_DebugMenu_DebugMenu__PopPanels;
  } while( true );
code_r0x0164295c:
  *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
  *(ulong *)(puVar5 + -0x38) = unaff_d8;
  *(long *)(puVar5 + -0x30) = lVar17;
  *(undefined8 *)(puVar5 + -0x28) = uVar15;
  *(long *)(puVar5 + -0x20) = lVar8;
  *(long **)(puVar5 + -0x18) = plVar10;
  *(undefined1 **)(puVar5 + -0x10) = puVar22;
  *(undefined **)(puVar5 + -8) = puVar23;
  puVar22 = puVar5 + -0x10;
  unaff_d8 = 0;
  plVar10 = param_1;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    plVar10 = (long *)func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)(puVar5 + -0x50) = 0;
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  if ((int)unaff_x19 == -1) {
    return;
  }
  /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,plVar10,param_1[10],param_1[0xb],unaff_x19);
  iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,unaff_x19,1,puVar5 + -0x70);
  if (iVar7 == 0) {
    return;
  }
  if (*(long *)(puVar5 + -0x60) == 0) {
code_r0x01642a84:
    func_0x00f78af4();
    return;
  }
  lVar8 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar5 + -0x60),uRam0000000003d535c0);
  if (param_1[0xf] == 0) {
    if (lVar8 == 0) goto code_r0x01642a84;
  }
  else {
    if (lVar8 == 0) goto code_r0x01642a84;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar8,0,0);
  }
  lVar17 = *(long *)(lVar8 + 0x80);
  if (lVar17 == 0) {
    return;
  }
  uVar15 = 0;
  if (*(int *)(lVar17 + 0x18) < 1) {
    return;
  }
  if (*(int *)(lVar17 + 0x18) == 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  unaff_x19 = (long *)(ulong)*(uint *)(*(long *)(lVar17 + 0x10) + 0x20);
  puVar23 = &UNK_01642a78;
  puVar5 = puVar5 + -0x70;
  plVar10 = param_1;
  goto code_r0x0164295c;
code_r0x01642b9c:
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar15 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar8,plVar16,0);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if ((bRam0000000003ec2c3f & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d560a8);
    func_0x00f78a20(0x3d560f0);
    func_0x00f78a20(0x3d21718);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d69450);
    func_0x00f78a20(0x3d7c748);
    bRam0000000003ec2c3f = 1;
  }
  uVar19 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
  if (*(char *)(lVar8 + 0x41) == '\0') {
    *(undefined1 *)(lVar8 + 0x41) = 1;
    uVar19 = *(undefined8 *)(lVar8 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar16,uVar19,0);
    if (iVar7 == 0) {
      uVar19 = *(undefined8 *)(lVar8 + 0x38);
      if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (cRam0000000003e85071 == '\0') {
        func_0x00f78a20(0x3d21718);
        cRam0000000003e85071 = '\x01';
      }
      if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar19,uVar15,*(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                      uRam0000000003d560a8);
      *(long **)(lVar8 + 0x38) = plVar16;
      if (cRam0000000003e85072 == '\0') {
        func_0x00f78a20(0x3d21718);
        cRam0000000003e85072 = '\x01';
      }
      if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar16,uVar15,*(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                      uRam0000000003d560f0);
    }
    *(undefined1 *)(lVar8 + 0x41) = 0;
    return;
  }
  if (plVar16 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
  }
  uVar21 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
  uVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar19,uVar15,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = 0;
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if ((bRam0000000003ebf392 & 1) == 0) {
    func_0x00f78a20(0x3d210d8,0);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf392 = 1;
    uVar11 = extraout_x1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
    uVar11 = extraout_x1_00;
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8,uVar11);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 4) * 0x10 + 0x138);
          goto code_r0x0322b888;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar10,0,uVar15,puVar9[1]);
    return;
  }
  auVar29 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3ca3000;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar15;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = &UnityEngine_Debug__LogError;
  if ((bRam0000000003ebf393 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf393 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto code_r0x0322b9b0;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar10,0,auVar29._0_8_,auVar29._8_8_,puVar9[1]);
    return;
  }
  auVar30 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3ca3000;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar29;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) = &UnityEngine_Debug__LogErrorFormat;
  if ((bRam0000000003ebf394 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf394 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 7) * 0x10 + 0x138);
          goto code_r0x0322badc;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar10,0,auVar30._0_8_,auVar30._8_8_,puVar9[1]);
    return;
  }
  auVar29 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -200) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3ca3000;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xb0) = auVar30;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x98) = &UnityEngine_Debug__LogErrorFormat;
  uVar15 = uVar21;
  if ((bRam0000000003ebf395 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d222f8);
    bRam0000000003ebf395 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x0322bc0c;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar10,0,auVar29._0_8_,auVar29._8_8_,uVar21,puVar9[1]);
    return;
  }
  auVar30 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xf8) = auVar29;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar21;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined **)((long)register0x00000008 + -0xd8) = &UnityEngine_Debug__LogException;
  if ((bRam0000000003ebf397 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d222f8);
    bRam0000000003ebf397 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto code_r0x0322bd40;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar10,auVar30._0_8_,auVar30._8_8_,puVar9[1]);
    return;
  }
  auVar29 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0x3ca3000;
  *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x120) = auVar30;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(undefined **)((long)register0x00000008 + -0x108) = &UnityEngine_Debug__LogWarning;
  if ((bRam0000000003ebf399 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf399 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto code_r0x0322be68;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar10,2,auVar29._0_8_,auVar29._8_8_,puVar9[1]);
    return;
  }
  auVar30 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3ca3000;
  *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x150) = auVar29;
  *(undefined1 **)((long)register0x00000008 + -0x140) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(undefined **)((long)register0x00000008 + -0x138) = &UnityEngine_Debug__LogWarningFormat;
  if ((bRam0000000003ebf39a & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    bRam0000000003ebf39a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 7) * 0x10 + 0x138);
          goto code_r0x0322bf94;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar10,2,auVar30._0_8_,auVar30._8_8_,puVar9[1]);
    return;
  }
  auVar29 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x198) = 0x3ca3000;
  *(undefined8 *)((long)register0x00000008 + -400) = 0x3ca3000;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x180) = auVar30;
  *(undefined1 **)((long)register0x00000008 + -0x170) =
       (undefined1 *)((long)register0x00000008 + -0x140);
  *(undefined **)((long)register0x00000008 + -0x168) = &UnityEngine_Debug__LogWarningFormat;
  if ((bRam0000000003ebf39b & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d222f8);
    bRam0000000003ebf39b = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (plVar10 == (long *)0x0) {
    func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x1c0) = auVar29._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar15;
    *(undefined1 **)((long)register0x00000008 + -0x1b0) =
         (undefined1 *)((long)register0x00000008 + -0x170);
    *(undefined **)((long)register0x00000008 + -0x1a8) = &UnityEngine_Debug__get_isDebugBuild;
    if (pcRam0000000003ebf3a0 == (code *)0x0) {
      pcRam0000000003ebf3a0 = (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf3a0)();
    return;
  }
  lVar8 = *plVar10;
  uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
        goto code_r0x0322c0c4;
      }
      piVar14 = piVar14 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(plVar10,2,auVar29._0_8_,auVar29._8_8_,uVar15,puVar9[1]);
  return;
}



// ============================================================
// RVA: 0x163f2b0 | Core.DebugMenu.DebugMenu.IsValidId
// ============================================================

bool Core_DebugMenu_DebugMenu__IsValidId(undefined8 param_1,int param_2)

{
  return param_2 != -1;
}



// ============================================================
// RVA: 0x163f2bc | Core.DebugMenu.DebugMenu.PushPanel
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163f55c | Core.DebugMenu.DebugMenu.HideAllPanels
// ============================================================

/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__HideAllPanels(ulong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar15;
  undefined8 unaff_x23;
  undefined8 uVar16;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  undefined *unaff_x30;
  undefined *puVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  
  puVar5 = &stack0xffffffffffffffe0;
  puVar17 = &stack0xfffffffffffffff0;
  uVar14 = 0x3eb5000;
  if ((bRam0000000003eb5705 & 1) == 0) {
    func_0x00f78a20(0x3d3cfc8);
    func_0x00f78a20(0x3d3cfd0);
    bRam0000000003eb5705 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x50);
  if (lVar13 == 0) {
    unaff_x30 = &Core_DebugMenu_DebugMenu__PopAll;
    auVar19 = func_0x00f78af4();
    uVar12 = 0;
    uVar3 = auVar19._0_8_;
    uVar4 = auVar19._8_8_;
  }
  else {
    if (*(int *)(lVar13 + 0x18) < 1) {
      return;
    }
    uVar12 = 0;
    puVar5 = (undefined1 *)register0x00000008;
    uVar3 = param_1;
    uVar4 = (ulong)*(uint *)(*(long *)(lVar13 + 0x10) + (ulong)(*(int *)(lVar13 + 0x18) - 1) * 8 +
                            0x24);
    param_1 = unaff_x19;
    uVar14 = unaff_x20;
    puVar17 = unaff_x29;
  }
Core_DebugMenu_DebugMenu__PopPanels:
  uVar11 = uVar4;
  uVar7 = uVar3;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(ulong *)(puVar5 + -0x20) = uVar14;
  *(ulong *)(puVar5 + -0x18) = param_1;
  *(undefined1 **)(puVar5 + -0x10) = puVar17;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  puVar17 = puVar5 + -0x10;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar5 + -0x50) = 0;
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  *(undefined8 *)(puVar5 + -0x80) = 0;
  *(undefined8 *)(puVar5 + -0x98) = 0;
  *(undefined8 *)(puVar5 + -0xa0) = 0;
  *(undefined8 *)(puVar5 + -0x88) = 0;
  *(undefined8 *)(puVar5 + -0x90) = 0;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar7,uVar11,1,puVar5 + -0x70);
  if (iVar6 == 0) {
    return;
  }
  unaff_x21 = *(long **)(puVar5 + -0x58);
  plVar9 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    uVar10 = 0x3d21150;
    uVar16 = 0x3d21150;
    unaff_x22 = uVar12;
    unaff_x23 = uVar10;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar13 = unaff_x21[0xf];
      unaff_x24 = uVar1;
      if (lVar13 == 0) goto code_r0x01642da0;
      uVar2 = *(int *)(lVar13 + 0x18) - (int)uVar12;
      uVar12 = (ulong)uVar2;
      if ((int)uVar2 < 1) goto code_r0x01642d30;
      do {
        unaff_x23 = uVar16;
        unaff_x24 = uVar1;
        if (lVar13 == 0) goto code_r0x01642da0;
        uVar8 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar13,uRam0000000003d403d8);
        iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar7,uVar8,1,puVar5 + -0xa0);
        if (iVar6 != 0) {
          plVar9 = *(long **)(puVar5 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar9 == (long *)0x0) goto code_r0x01642da0;
          unaff_x22 = uVar12;
          unaff_x23 = uVar10;
          unaff_x24 = uVar1;
          if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
          plVar9[0xf] = 0;
        }
        lVar13 = unaff_x21[0xf];
        uVar2 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar2;
      } while (uVar2 != 0);
      unaff_x23 = uVar16;
      unaff_x24 = 0x3d403d8;
      if (lVar13 != 0) goto code_r0x01642d30;
    }
  }
code_r0x01642da0:
  func_0x00f78af4();
  plVar9 = unaff_x21;
  unaff_x22 = uVar12;
code_r0x01642da8:
  unaff_x30 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar19 = func_0x00f78e5c(plVar9);
  uVar12 = 1;
  puVar5 = puVar5 + -0xa0;
  uVar3 = auVar19._0_8_;
  uVar4 = auVar19._8_8_;
  param_1 = uVar11;
  uVar14 = uVar7;
  goto Core_DebugMenu_DebugMenu__PopPanels;
code_r0x01642d30:
  if (0 < *(int *)(lVar13 + 0x18)) {
    uVar10 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar13,uRam0000000003d403d0);
    /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc((char)_UNK_033f8144,uVar7,uVar10);
  }
  unaff_x21[0xf] = 0;
  puVar17 = *(undefined1 **)(puVar5 + -0x10);
  puVar18 = *(undefined **)(puVar5 + -8);
  lVar13 = *(long *)(puVar5 + -0x20);
  lVar15 = *(long *)(puVar5 + -0x30);
  uVar10 = *(undefined8 *)(puVar5 + -0x28);
  uVar14 = *(ulong *)(puVar5 + -0x18);
  while( true ) {
    *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x38) = unaff_d8;
    *(long *)(puVar5 + -0x30) = lVar15;
    *(undefined8 *)(puVar5 + -0x28) = uVar10;
    *(long *)(puVar5 + -0x20) = lVar13;
    *(ulong *)(puVar5 + -0x18) = uVar14;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(undefined **)(puVar5 + -8) = puVar18;
    puVar17 = puVar5 + -0x10;
    unaff_d8 = 0;
    uVar14 = uVar7;
    if ((bRam0000000003eb5728 & 1) == 0) {
      func_0x00f78a20(0x3d535c0);
      func_0x00f78a20(0x3d3acd0);
      uVar14 = func_0x00f78a20(0x3d3acd8);
      bRam0000000003eb5728 = 1;
    }
    *(undefined8 *)(puVar5 + -0x50) = 0;
    *(undefined8 *)(puVar5 + -0x68) = 0;
    *(undefined8 *)(puVar5 + -0x70) = 0;
    *(undefined8 *)(puVar5 + -0x58) = 0;
    *(undefined8 *)(puVar5 + -0x60) = 0;
    if ((int)uVar11 == -1) {
      return;
    }
    /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,uVar14,*(undefined8 *)(uVar7 + 0x50),*(undefined8 *)(uVar7 + 0x58),uVar11);
    iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar7,uVar11,1,puVar5 + -0x70);
    if (iVar6 == 0) {
      return;
    }
    if (*(long *)(puVar5 + -0x60) == 0) break;
    lVar13 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar5 + -0x60),uRam0000000003d535c0);
    if (*(long *)(uVar7 + 0x78) == 0) {
      if (lVar13 == 0) break;
    }
    else {
      if (lVar13 == 0) break;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar13,0,0);
    }
    lVar15 = *(long *)(lVar13 + 0x80);
    if (lVar15 == 0) {
      return;
    }
    uVar10 = 0;
    if (*(int *)(lVar15 + 0x18) < 1) {
      return;
    }
    if (*(int *)(lVar15 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar11 = (ulong)*(uint *)(*(long *)(lVar15 + 0x10) + 0x20);
    puVar18 = &UNK_01642a78;
    puVar5 = puVar5 + -0x70;
    uVar14 = uVar7;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x163f5dc | Core.DebugMenu.DebugMenu.PopAll
// ============================================================

/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__PopAll(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 unaff_x19;
  long lVar14;
  undefined8 unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar15;
  undefined8 unaff_x23;
  undefined8 uVar16;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  undefined *unaff_x30;
  undefined *puVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  
  auVar4._8_8_ = unaff_x19;
  auVar4._0_8_ = unaff_x20;
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = param_1;
  uVar13 = 0;
  puVar5 = (undefined1 *)register0x00000008;
Core_DebugMenu_DebugMenu__PopPanels:
  auVar3 = auVar19;
  uVar12 = auVar3._8_8_;
  lVar7 = auVar3._0_8_;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar5 + -0x20) = auVar4;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  unaff_x29 = puVar5 + -0x10;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar5 + -0x50) = 0;
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  *(undefined8 *)(puVar5 + -0x80) = 0;
  *(undefined8 *)(puVar5 + -0x98) = 0;
  *(undefined8 *)(puVar5 + -0xa0) = 0;
  *(undefined8 *)(puVar5 + -0x88) = 0;
  *(undefined8 *)(puVar5 + -0x90) = 0;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar12,1,puVar5 + -0x70);
  if (iVar6 == 0) {
    return;
  }
  unaff_x21 = *(long **)(puVar5 + -0x58);
  plVar10 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    uVar11 = 0x3d21150;
    uVar16 = 0x3d21150;
    unaff_x22 = uVar13;
    unaff_x23 = uVar11;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar8 = unaff_x21[0xf];
      unaff_x24 = uVar1;
      if (lVar8 == 0) goto code_r0x01642da0;
      uVar2 = *(int *)(lVar8 + 0x18) - (int)uVar13;
      uVar13 = (ulong)uVar2;
      if ((int)uVar2 < 1) goto code_r0x01642d30;
      do {
        unaff_x23 = uVar16;
        unaff_x24 = uVar1;
        if (lVar8 == 0) goto code_r0x01642da0;
        uVar9 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar8,uRam0000000003d403d8);
        iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar9,1,puVar5 + -0xa0);
        if (iVar6 != 0) {
          plVar10 = *(long **)(puVar5 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar10 == (long *)0x0) goto code_r0x01642da0;
          unaff_x22 = uVar13;
          unaff_x23 = uVar11;
          unaff_x24 = uVar1;
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
          plVar10[0xf] = 0;
        }
        lVar8 = unaff_x21[0xf];
        uVar2 = (int)uVar13 - 1;
        uVar13 = (ulong)uVar2;
      } while (uVar2 != 0);
      unaff_x23 = uVar16;
      unaff_x24 = 0x3d403d8;
      if (lVar8 != 0) goto code_r0x01642d30;
    }
  }
code_r0x01642da0:
  func_0x00f78af4();
  plVar10 = unaff_x21;
  unaff_x22 = uVar13;
code_r0x01642da8:
  unaff_x30 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar19 = func_0x00f78e5c(plVar10);
  uVar13 = 1;
  puVar5 = puVar5 + -0xa0;
  auVar4 = auVar3;
  goto Core_DebugMenu_DebugMenu__PopPanels;
code_r0x01642d30:
  if (0 < *(int *)(lVar8 + 0x18)) {
    uVar11 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar8,uRam0000000003d403d0);
    /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc((char)_UNK_033f8144,lVar7,uVar11);
  }
  unaff_x21[0xf] = 0;
  puVar17 = *(undefined1 **)(puVar5 + -0x10);
  puVar18 = *(undefined **)(puVar5 + -8);
  lVar8 = *(long *)(puVar5 + -0x20);
  lVar15 = *(long *)(puVar5 + -0x30);
  uVar11 = *(undefined8 *)(puVar5 + -0x28);
  lVar14 = *(long *)(puVar5 + -0x18);
  while( true ) {
    *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x38) = unaff_d8;
    *(long *)(puVar5 + -0x30) = lVar15;
    *(undefined8 *)(puVar5 + -0x28) = uVar11;
    *(long *)(puVar5 + -0x20) = lVar8;
    *(long *)(puVar5 + -0x18) = lVar14;
    *(undefined1 **)(puVar5 + -0x10) = puVar17;
    *(undefined **)(puVar5 + -8) = puVar18;
    puVar17 = puVar5 + -0x10;
    unaff_d8 = 0;
    lVar8 = lVar7;
    if ((bRam0000000003eb5728 & 1) == 0) {
      func_0x00f78a20(0x3d535c0);
      func_0x00f78a20(0x3d3acd0);
      lVar8 = func_0x00f78a20(0x3d3acd8);
      bRam0000000003eb5728 = 1;
    }
    *(undefined8 *)(puVar5 + -0x50) = 0;
    *(undefined8 *)(puVar5 + -0x68) = 0;
    *(undefined8 *)(puVar5 + -0x70) = 0;
    *(undefined8 *)(puVar5 + -0x58) = 0;
    *(undefined8 *)(puVar5 + -0x60) = 0;
    if ((int)uVar12 == -1) {
      return;
    }
    /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,lVar8,*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58),uVar12);
    iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar12,1,puVar5 + -0x70);
    if (iVar6 == 0) {
      return;
    }
    if (*(long *)(puVar5 + -0x60) == 0) break;
    lVar8 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar5 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar7 + 0x78) == 0) {
      if (lVar8 == 0) break;
    }
    else {
      if (lVar8 == 0) break;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar8,0,0);
    }
    lVar15 = *(long *)(lVar8 + 0x80);
    if (lVar15 == 0) {
      return;
    }
    uVar11 = 0;
    if (*(int *)(lVar15 + 0x18) < 1) {
      return;
    }
    if (*(int *)(lVar15 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar12 = (ulong)*(uint *)(*(long *)(lVar15 + 0x10) + 0x20);
    puVar18 = &UNK_01642a78;
    puVar5 = puVar5 + -0x70;
    lVar14 = lVar7;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x163f5e4 | Core.DebugMenu.DebugMenu.HideLastPanel
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Core_DebugMenu_DebugMenu__HideLastPanel(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 auVar7 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  
  lVar3 = param_1;
  if ((bRam0000000003eb5706 & 1) == 0) {
    func_0x00f78a20(0x3d3cfc8);
    lVar3 = func_0x00f78a20(0x3d3cfd0);
    bRam0000000003eb5706 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x50);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x18) < 1)) {
    return lVar3;
  }
  iVar1 = *(int *)(*(long *)(lVar6 + 0x10) + (ulong)(*(int *)(lVar6 + 0x18) - 1) * 8 + 0x24);
  puVar5 = &uStack_60;
  if ((bRam0000000003eb5725 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5725 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_48 = (long *)0x0;
  uStack_50 = 0;
  uVar4 = 1;
  lVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,iVar1,1,&uStack_60);
  plVar2 = plStack_48;
  if ((int)lVar3 == 0) {
    return lVar3;
  }
  if (plStack_48 != (long *)0x0) {
    if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*plStack_48 + 300)) &&
       (*(long *)(*(long *)(*plStack_48 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      lVar3 = plStack_48[0xf];
      if (lVar3 != 0) {
        if (1 < *(int *)(lVar3 + 0x18)) {
          /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar3,uRam0000000003d403d8);
          lVar3 = plVar2[0xf];
          if (lVar3 == 0) goto code_r0x0163f7b0;
          uVar4 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar3,uRam0000000003d403d0);
          /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc((char)_UNK_033f8144,param_1,uVar4);
        }
        plVar2[0xf] = 0;
      }
      lVar3 = /*Core.DebugMenu.DebugMenu$$HidePanel*/ func_0x0164295c(0,param_1,iVar1);
      if (*(int *)(param_1 + 0x60) != iVar1) {
        return lVar3;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      return lVar3;
    }
    func_0x00f78e5c(plStack_48);
  }
code_r0x0163f7b0:
  auVar7 = func_0x00f78af4();
  lVar3 = /*Core.DebugMenu.DebugMenu$$AddPanel*/ func_0x0163fd40(0,0,(float)CONCAT13(extraout_var_01,
                                              CONCAT12(extraout_var_00,
                                                       CONCAT11(extraout_var,extraout_b0))) * 1000.0
                              * _UNK_033f7d80,auVar7._0_8_,1);
  /*Core.DebugMenu.DebugMenu$$AddButton*/ func_0x0163f880(0,auVar7._0_8_,auVar7._8_8_,uVar4,1,0,puVar5,lVar3,0xffffffff,0);
  return lVar3;
}



// ============================================================
// RVA: 0x163f65c | Core.DebugMenu.DebugMenu.PopPanel
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Core_DebugMenu_DebugMenu__PopPanel(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  
  puVar5 = &uStack_60;
  if ((bRam0000000003eb5725 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5725 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_48 = (long *)0x0;
  uStack_50 = 0;
  uVar4 = 1;
  uVar2 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,1,&uStack_60);
  plVar1 = plStack_48;
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (plStack_48 != (long *)0x0) {
    if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*plStack_48 + 300)) &&
       (*(long *)(*(long *)(*plStack_48 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      lVar3 = plStack_48[0xf];
      if (lVar3 != 0) {
        if (1 < *(int *)(lVar3 + 0x18)) {
          /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar3,uRam0000000003d403d8);
          lVar3 = plVar1[0xf];
          if (lVar3 == 0) goto LAB_0163f7b0;
          uVar2 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar3,uRam0000000003d403d0);
          /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc((char)_UNK_033f8144,param_1,uVar2);
        }
        plVar1[0xf] = 0;
      }
      uVar2 = /*Core.DebugMenu.DebugMenu$$HidePanel*/ func_0x0164295c(0,param_1,param_2);
      if (*(int *)(param_1 + 0x60) != (int)param_2) {
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      return uVar2;
    }
    func_0x00f78e5c(plStack_48);
  }
LAB_0163f7b0:
  auVar6 = func_0x00f78af4();
  uVar2 = /*Core.DebugMenu.DebugMenu$$AddPanel*/ func_0x0163fd40(0,0,(float)CONCAT13(extraout_var_01,
                                              CONCAT12(extraout_var_00,
                                                       CONCAT11(extraout_var,extraout_b0))) * 1000.0
                              * _UNK_033f7d80,auVar6._0_8_,1);
  /*Core.DebugMenu.DebugMenu$$AddButton*/ func_0x0163f880(0,auVar6._0_8_,auVar6._8_8_,uVar4,1,0,puVar5,uVar2,0xffffffff,0);
  return uVar2;
}



// ============================================================
// RVA: 0x163f7b4 | Core.DebugMenu.DebugMenu.AddButtonAndPanel
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Core_DebugMenu_DebugMenu__AddButtonAndPanel
          (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  undefined8 uVar1;
  
  uVar1 = /*Core.DebugMenu.DebugMenu$$AddPanel*/ func_0x0163fd40(0,0,param_1 * 1000.0 * _UNK_033f7d80,param_2,1,param_4,param_5,0xffffffff)
  ;
  /*Core.DebugMenu.DebugMenu$$AddButton*/ func_0x0163f880(0x41a00000,param_2,param_3,param_4,1,0,param_5,uVar1,0xffffffff,0);
  return uVar1;
}



// ============================================================
// RVA: 0x163f854 | Core.DebugMenu.DebugMenu.AddPanelByScreenPercentage
// ============================================================

/* WARNING: Possible PIC construction at 0x0163fe50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163fe54) */
/* WARNING: Removing unreachable block (ram,0x0163fe58) */
/* WARNING: Removing unreachable block (ram,0x0163fe80) */
/* WARNING: Removing unreachable block (ram,0x0163febc) */
/* WARNING: Removing unreachable block (ram,0x0163fed4) */
/* WARNING: Removing unreachable block (ram,0x0163fee8) */
/* WARNING: Removing unreachable block (ram,0x0163ff04) */
/* WARNING: Removing unreachable block (ram,0x0163ff10) */
/* WARNING: Removing unreachable block (ram,0x0163ff24) */
/* WARNING: Removing unreachable block (ram,0x0163ff30) */
/* WARNING: Removing unreachable block (ram,0x0163ff48) */
/* WARNING: Removing unreachable block (ram,0x0163ff8c) */
/* WARNING: Removing unreachable block (ram,0x0163ffc8) */
/* WARNING: Removing unreachable block (ram,0x0163ffd0) */
/* WARNING: Removing unreachable block (ram,0x01640004) */
/* WARNING: Removing unreachable block (ram,0x0164001c) */
/* WARNING: Removing unreachable block (ram,0x01640048) */
/* WARNING: Removing unreachable block (ram,0x01640060) */
/* WARNING: Removing unreachable block (ram,0x0164008c) */
/* WARNING: Removing unreachable block (ram,0x0164009c) */
/* WARNING: Removing unreachable block (ram,0x016400a4) */
/* WARNING: Removing unreachable block (ram,0x016400bc) */
/* WARNING: Removing unreachable block (ram,0x016400c4) */
/* WARNING: Removing unreachable block (ram,0x016400d8) */
/* WARNING: Removing unreachable block (ram,0x016400e4) */
/* WARNING: Removing unreachable block (ram,0x01640154) */
/* WARNING: Removing unreachable block (ram,0x01640110) */
/* WARNING: Removing unreachable block (ram,0x01640128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__AddPanelByScreenPercentage(float param_1,float param_2,float param_3)

{
  if ((bRam0000000003eb570a & 1) == 0) {
    func_0x00f78a20(SUB41(param_1 * 1000.0 * _UNK_033f7d80,0),param_2 * 1000.0 * _UNK_033f7d80,
                    param_3 * 1000.0 * _UNK_033f7d80,0x3d535c0);
    func_0x00f78a20(0x3d53478);
    func_0x00f78a20(0x3d548f8);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d62a08);
    func_0x00f78a20(0x3d62a10);
    func_0x00f78a20(0x3d62a18);
    func_0x00f78a20(0x3d27080);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d71028);
    bRam0000000003eb570a = 1;
  }
  func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass65_0_TypeInfo*/ uRam0000000003d27080);
  return;
}



// ============================================================
// RVA: 0x163f880 | Core.DebugMenu.DebugMenu.AddButton
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Core_DebugMenu_DebugMenu__AddButton
          (undefined4 param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 auVar8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb570b & 1) == 0) {
    func_0x00f78a20(0x3d548e0);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d698e0);
    bRam0000000003eb570b = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  lStack_90 = 0;
  iVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_3,param_4,1,&uStack_a0);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  if (lStack_90 != 0) {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_90,0);
    param_2 = 50.0;
    auVar8 = /*Core.DebugMenu.DebugMenu$$InstantiateUIWithOptionalLabel*/ func_0x01640384(SUB41((float)CONCAT13(extraout_var_05,
                                                   CONCAT12(extraout_var_02,
                                                            CONCAT11(extraout_var,extraout_b0))) +
                                   -6.0,0),0x42480000,param_1,param_3,2,/*STR('Button')*/ uRam0000000003d698e0,
                             param_11);
    uVar5 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(param_3,2,param_4,auVar8._0_8_,auVar8._8_8_,param_8,uRam0000000003d548e0
                           );
    /*Core.DebugMenu.DebugMenu$$ConfigureButton*/ func_0x01640428(param_3,uVar5,param_5,param_6,param_7,param_9,param_10);
    if (plStack_88 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*plStack_88 + 300)) &&
         (*(long *)(*(long *)(*plStack_88 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
        /*Core.DebugMenu.DebugUIPanelBehaviour$$AddContent*/ func_0x01640670(plStack_88,auVar8._0_8_);
        return uVar5;
      }
      goto LAB_0163fa30;
    }
  }
  func_0x00f78af4();
LAB_0163fa30:
  lVar6 = func_0x00f78e5c();
  iVar4 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
  uVar5 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
  param_2 = param_2 / (float)(int)uVar5;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (_UNK_033f875c <
      (float)CONCAT13(extraout_var_06,
                      CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00))) /
      (float)iVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_2)) {
      bVar1 = param_2 < 0.75;
      bVar2 = param_2 == 0.75;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    if ((bRam0000000003eb572b & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb572b = 1;
    }
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
    uStack_d8 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar5,*(undefined8 *)(lVar6 + 0x68),0);
    uVar7 = /*System.TimeSpan$$get_TotalMilliseconds*/ func_0x029edf00(&uStack_d8,0);
    if (_UNK_03406a68 <=
        (float)(double)CONCAT17(extraout_var_11,
                                CONCAT16(extraout_var_10,
                                         CONCAT15(extraout_var_09,
                                                  CONCAT14(extraout_var_08,
                                                           CONCAT13(extraout_var_07,
                                                                    CONCAT12(extraout_var_04,
                                                                             CONCAT11(
                                                  extraout_var_01,extraout_b0_01)))))))) {
      *(undefined4 *)(lVar6 + 0x70) = 0;
    }
    else {
      iVar4 = *(int *)(lVar6 + 0x70) + 1;
      *(int *)(lVar6 + 0x70) = iVar4;
      if (1 < iVar4) {
        if (*(int *)(lVar6 + 0x60) == -1) {
          if (*(int *)(lVar6 + 0x3c) != -1) {
            uVar7 = Core_DebugMenu_DebugMenu__PushPanel(lVar6,*(int *)(lVar6 + 0x3c),0xffffffff);
          }
        }
        else {
          uVar7 = /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc(0,lVar6);
        }
        *(undefined4 *)(lVar6 + 0x60) = 0xffffffff;
      }
    }
    *(undefined8 *)(lVar6 + 0x68) = uVar5;
    return uVar7;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x163fa34 | Core.DebugMenu.DebugMenu.TryPressRootButton
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__TryPressRootButton(float param_1,float param_2,long param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  
  iVar5 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
  iVar6 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
  param_2 = param_2 / (float)iVar6;
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (_UNK_033f875c < param_1 / (float)iVar5) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(param_2)) {
      bVar2 = param_2 < 0.75;
      bVar3 = param_2 == 0.75;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    return;
  }
  if ((bRam0000000003eb572b & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb572b = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
  uStack_38 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar7,*(undefined8 *)(param_3 + 0x68),0);
  dVar1 = (double)/*System.TimeSpan$$get_TotalMilliseconds*/ func_0x029edf00(&uStack_38,0);
  if (_UNK_03406a68 <= (float)dVar1) {
    *(undefined4 *)(param_3 + 0x70) = 0;
  }
  else {
    iVar5 = *(int *)(param_3 + 0x70) + 1;
    *(int *)(param_3 + 0x70) = iVar5;
    if (1 < iVar5) {
      if (*(int *)(param_3 + 0x60) == -1) {
        if (*(int *)(param_3 + 0x3c) != -1) {
          Core_DebugMenu_DebugMenu__PushPanel(param_3,*(int *)(param_3 + 0x3c),0xffffffff);
        }
      }
      else {
        /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc(0,param_3);
      }
      *(undefined4 *)(param_3 + 0x60) = 0xffffffff;
    }
  }
  *(undefined8 *)(param_3 + 0x68) = uVar7;
  return;
}



// ============================================================
// RVA: 0x163faac | Core.DebugMenu.DebugMenu.RootButtonPressed
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__RootButtonPressed(long param_1)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb572b & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb572b = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
  uStack_38 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar3,*(undefined8 *)(param_1 + 0x68),0);
  dVar2 = (double)/*System.TimeSpan$$get_TotalMilliseconds*/ func_0x029edf00(&uStack_38,0);
  if (_UNK_03406a68 <= (float)dVar2) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x70) + 1;
    *(int *)(param_1 + 0x70) = iVar1;
    if (1 < iVar1) {
      if (*(int *)(param_1 + 0x60) == -1) {
        if (*(int *)(param_1 + 0x3c) != -1) {
          Core_DebugMenu_DebugMenu__PushPanel(param_1,*(int *)(param_1 + 0x3c),0xffffffff);
        }
      }
      else {
        /*Core.DebugMenu.DebugMenu$$ShowPanel*/ func_0x016427fc(0,param_1);
      }
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    }
  }
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  return;
}



// ============================================================
// RVA: 0x163fd40 | Core.DebugMenu.DebugMenu.AddPanel
// ============================================================

/* WARNING: Possible PIC construction at 0x0163fe50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163fe54) */
/* WARNING: Removing unreachable block (ram,0x0163fe58) */
/* WARNING: Removing unreachable block (ram,0x0163fe80) */
/* WARNING: Removing unreachable block (ram,0x0163febc) */
/* WARNING: Removing unreachable block (ram,0x0163fed4) */
/* WARNING: Removing unreachable block (ram,0x0163fee8) */
/* WARNING: Removing unreachable block (ram,0x0163ff04) */
/* WARNING: Removing unreachable block (ram,0x0163ff10) */
/* WARNING: Removing unreachable block (ram,0x0163ff24) */
/* WARNING: Removing unreachable block (ram,0x0163ff30) */
/* WARNING: Removing unreachable block (ram,0x0163ff48) */
/* WARNING: Removing unreachable block (ram,0x0163ff8c) */
/* WARNING: Removing unreachable block (ram,0x0163ffc8) */
/* WARNING: Removing unreachable block (ram,0x0163ffd0) */
/* WARNING: Removing unreachable block (ram,0x01640004) */
/* WARNING: Removing unreachable block (ram,0x0164001c) */
/* WARNING: Removing unreachable block (ram,0x01640048) */
/* WARNING: Removing unreachable block (ram,0x01640060) */
/* WARNING: Removing unreachable block (ram,0x0164008c) */
/* WARNING: Removing unreachable block (ram,0x0164009c) */
/* WARNING: Removing unreachable block (ram,0x016400a4) */
/* WARNING: Removing unreachable block (ram,0x016400bc) */
/* WARNING: Removing unreachable block (ram,0x016400c4) */
/* WARNING: Removing unreachable block (ram,0x016400d8) */
/* WARNING: Removing unreachable block (ram,0x016400e4) */
/* WARNING: Removing unreachable block (ram,0x01640154) */
/* WARNING: Removing unreachable block (ram,0x01640110) */
/* WARNING: Removing unreachable block (ram,0x01640128) */

void Core_DebugMenu_DebugMenu__AddPanel(void)

{
  if ((bRam0000000003eb570a & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d53478);
    func_0x00f78a20(0x3d548f8);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d62a08);
    func_0x00f78a20(0x3d62a10);
    func_0x00f78a20(0x3d62a18);
    func_0x00f78a20(0x3d27080);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d71028);
    bRam0000000003eb570a = 1;
  }
  func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass65_0_TypeInfo*/ uRam0000000003d27080);
  return;
}



// ============================================================
// RVA: 0x1640160 | Core.DebugMenu.DebugMenu.InstantiateUI
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1640384 | Core.DebugMenu.DebugMenu.InstantiateUIWithOptionalLabel
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1640428 | Core.DebugMenu.DebugMenu.ConfigureButton
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x164069c | Core.DebugMenu.DebugMenu.AddRootButton
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x164092c | Core.DebugMenu.DebugMenu.RemoveElement
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1640a78 | Core.DebugMenu.DebugMenu.RemoveAllElementsCreatedBy
// ============================================================

/* WARNING: Possible PIC construction at 0x01640de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016411e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x016411e8) */
/* WARNING: Removing unreachable block (ram,0x016411f0) */
/* WARNING: Removing unreachable block (ram,0x01641210) */
/* WARNING: Removing unreachable block (ram,0x01641224) */
/* WARNING: Removing unreachable block (ram,0x01640de8) */
/* WARNING: Removing unreachable block (ram,0x01640df0) */
/* WARNING: Removing unreachable block (ram,0x01640e10) */
/* WARNING: Removing unreachable block (ram,0x01640e24) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */

long * Core_DebugMenu_DebugMenu__RemoveAllElementsCreatedBy
                 (undefined1 param_1 [16],uint param_2,uint param_3,uint param_4,long param_5,
                 long param_6,undefined8 param_7,long *param_8,long *param_9,long *param_10,
                 undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *plVar16;
  code *pcVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  int extraout_w1;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long *plVar35;
  undefined8 *puVar36;
  undefined1 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined *puVar40;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar41;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long *plStack_528;
  undefined8 uStack_520;
  undefined1 auStack_510 [16];
  long lStack_500;
  undefined8 uStack_4f8;
  undefined8 ******ppppppuStack_4f0;
  undefined *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 ******ppppppuStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  ulong uStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined1 *puStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 ******ppppppuStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 *puStack_380;
  long *plStack_378;
  undefined1 ******ppppppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  ulong uStack_330;
  ulong uStack_328;
  undefined1 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 ****ppppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 ***pppuStack_1f0;
  undefined *puStack_1e8;
  long alStack_1e0 [3];
  long *plStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  long alStack_140 [6];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  
  puVar39 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb570e & 1) == 0) {
    func_0x00f78a20(0x3d2ed20);
    func_0x00f78a20(0x3d34150);
    func_0x00f78a20(0x3d34158);
    func_0x00f78a20(0x3d34188);
    func_0x00f78a20(0x3d392b8);
    func_0x00f78a20(0x3d392c0);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d3acd0);
    func_0x00f78a20(0x3d3acd8);
    func_0x00f78a20(0x3d1daa8);
    bRam0000000003eb570e = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  plStack_68 = (long *)0x0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar19 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
  /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db018(lVar19,uRam0000000003d3ac78);
  if (*(long *)(param_5 + 0x48) == 0) goto LAB_01640c64;
  puVar39 = (undefined8 *)0x3d34150;
  /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$GetEnumerator*/ func_0x01e95980(&uStack_a0,*(long *)(param_5 + 0x48),uRam0000000003d2ed20);
  while (uVar20 = /*System.Collections.Generic.Dictionary.Enumerator<int, DebugMenu.Element>$$MoveNext*/ func_0x01fc4a30(&uStack_a0,uRam0000000003d34158), (uVar20 & 1) != 0) {
    if (plStack_68 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x01640c60;
    }
    uVar20 = uStack_90 & 0xffffffff;
    lVar21 = (**(code **)(*plStack_68 + 0x198))(plStack_68,*(undefined8 *)(*plStack_68 + 0x1a0));
    if (lVar21 == param_6) {
      if (lVar19 == 0) {
        func_0x00f78af4();
code_r0x01640c60:
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1640c64);
        (*pcVar17)();
      }
      param_7 = uRam0000000003d3ac90;
      /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar19,uVar20);
    }
  }
  /*System.Collections.Generic.Dictionary.Enumerator<int, DebugMenu.Element>$$Dispose*/ func_0x01fc4be0(&uStack_a0,uRam0000000003d34150);
  do {
    if (lVar19 != 0) {
      plVar22 = (long *)(ulong)*(uint *)(lVar19 + 0x18);
      if (0 < (int)*(uint *)(lVar19 + 0x18)) {
        uVar20 = 0;
        do {
          if (((ulong)plVar22 & 0xffffffff) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          Core_DebugMenu_DebugMenu__RemoveElement
                    (param_5,*(undefined4 *)(*(long *)(lVar19 + 0x10) + uVar20 * 4 + 0x20));
          uVar20 = uVar20 + 1;
          plVar22 = (long *)(long)*(int *)(lVar19 + 0x18);
        } while ((long)uVar20 < (long)plVar22);
      }
      return plVar22;
    }
LAB_01640c64:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01640ca8;
    plVar22 = (long *)___cxa_begin_catch();
    lVar21 = *plVar22;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.Enumerator<int, DebugMenu.Element>$$Dispose*/ func_0x01fc4be0(&uStack_a0,*puVar39);
  } while (lVar21 == 0);
  func_0x00f78ac0(lVar21,0);
code_r0x01640ca8:
  auVar45 = __Unwind_Resume();
  uVar31 = auVar45._0_8_;
  plVar24 = alStack_140;
  puStack_a8 = &Core_DebugMenu_DebugMenu__AddSlider;
  uVar20 = (ulong)CONCAT13(extraout_var_15,
                           CONCAT12(extraout_var_07,CONCAT11(extraout_var,extraout_b0)));
  plVar22 = param_9;
  plVar27 = param_10;
  uVar42 = param_2;
  uVar43 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb570f & 1) == 0) {
    func_0x00f78a20(0x3d54900);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d72aa0);
    bRam0000000003eb570f = 1;
  }
  alStack_140[4] = 0;
  alStack_140[1] = 0;
  alStack_140[0] = 0;
  alStack_140[3] = 0;
  alStack_140[2] = 0;
  uVar30 = 1;
  iVar18 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar31,auVar45._8_8_);
  if (iVar18 == 0) {
    return (long *)0xffffffff;
  }
  if (alStack_140[2] == 0) {
    func_0x00f78af4();
    puVar40 = &Core_DebugMenu_DebugMenu__ConfigureSlider;
    auVar45 = func_0x00f78e5c();
    uVar41 = extraout_b0_01;
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(alStack_140[2],0);
    auVar46 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_16,
                                               CONCAT12(extraout_var_08,
                                                        CONCAT11(extraout_var_00,extraout_b0_00))) +
                               -6.0,0),0x42480000,param_4,uVar31,5,/*STR('Slider')*/ uRam0000000003d72aa0,param_10);
    param_11 = uRam0000000003d54900;
    uVar30 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar31,5,auVar45._8_8_,auVar46._0_8_,auVar46._8_8_);
    auVar45._8_8_ = uVar30;
    auVar45._0_8_ = uVar31;
    plVar24 = (long *)((long)&MACH_HEADER.magic + 1);
    puVar40 = &UNK_01640de8;
    uVar30 = param_7;
    plVar22 = param_8;
    plVar27 = param_9;
    uVar41 = extraout_b0;
    uVar42 = param_2;
    uVar43 = param_3;
  }
  plVar35 = alStack_1e0;
  uVar44 = (ulong)uVar43;
  uVar31 = uVar30;
  plVar25 = plVar24;
  plVar28 = plVar22;
  uStack_1b0 = (ulong)param_4;
  uStack_1a8 = uVar20;
  uStack_1a0 = (ulong)param_2;
  uStack_198 = (ulong)param_3;
  ppuStack_150 = &puStack_b0;
  puStack_148 = puVar40;
  if ((bRam0000000003eb5717 & 1) == 0) {
    func_0x00f78a20(0x3d21158);
    func_0x00f78a20(0x3d62a30);
    func_0x00f78a20(0x3d27090);
    func_0x00f78a20(0x3d415e0);
    func_0x00f78a20(0x3d1eb28);
    func_0x00f78a20(0x3d41730);
    bRam0000000003eb5717 = 1;
  }
  uStack_1c0 = 0;
  alStack_1e0[1] = 0;
  alStack_1e0[0] = 0;
  plStack_1c8 = (long *)0x0;
  alStack_1e0[2] = 0;
  lVar19 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass78_0_TypeInfo*/ uRam0000000003d27090);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar19,0);
  if (lVar19 == 0) {
code_r0x016410cc:
    func_0x00f78af4();
  }
  else {
    *(long **)(lVar19 + 0x10) = plVar22;
    *(int *)(lVar19 + 0x18) = auVar45._8_4_;
    uVar31 = 5;
    plVar23 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar45._0_8_,auVar45._8_8_);
    plVar16 = plStack_1c8;
    auVar2._8_8_ = plVar23;
    auVar2._0_8_ = plStack_1c8;
    auVar1._8_8_ = plVar23;
    auVar1._0_8_ = plStack_1c8;
    auVar46._8_8_ = plVar23;
    auVar46._0_8_ = plStack_1c8;
    auVar45._8_8_ = plVar23;
    auVar45._0_8_ = plStack_1c8;
    if ((int)plVar23 == 0) {
      return plVar23;
    }
    plVar25 = plVar35;
    if (plStack_1c8 == (long *)0x0) goto code_r0x016410cc;
    auVar45 = auVar2;
    if ((*(byte *)(/*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158 + 300) <= *(byte *)(*plStack_1c8 + 300)) &&
       (*(long *)(*(long *)(*plStack_1c8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158)) {
      plVar22 = (long *)plStack_1c8[6];
      auVar45 = auVar46;
      if (plVar22 != (long *)0x0) {
        /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(plVar22,plVar24,0);
        /*UnityEngine.UI.Slider$$set_minValue*/ func_0x032e5c24(uVar41,plVar22,0);
        /*UnityEngine.UI.Slider$$set_maxValue*/ func_0x032e5ccc((char)uVar43,plVar22,0);
        (**(code **)(*plVar22 + 0x428))((char)uVar42,plVar22,*(undefined8 *)(*plVar22 + 0x430));
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetDecimalPlaces*/ func_0x01641ddc(plVar16,uVar30);
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetTextForValues*/ func_0x01643c84(uVar41,plVar16,plVar16[3]);
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetTextForValues*/ func_0x01643c84((char)uVar43,plVar16,plVar16[5]);
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetTextForValues*/ func_0x01643c84((char)uVar42,plVar16,plVar16[4]);
        uVar31 = 0;
        /*UnityEngine.UI.Slider$$set_wholeNumbers*/ func_0x032e5d74(plVar22,(int)uVar30 == 0);
        plVar25 = plVar35;
        auVar45 = auVar1;
        if (plVar22[0x24] != 0) {
          /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(plVar22[0x24],0);
          if (*(long *)(lVar19 + 0x10) == 0) {
code_r0x0164109c:
            /*Core.DebugMenu.DebugUISliderBehaviour$$AddListenerToUpdateValueText*/ func_0x01641e84(plVar16);
            return plVar23;
          }
          lVar21 = plVar22[0x24];
          plVar24 = (long *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<float>_TypeInfo*/ uRam0000000003d1eb28);
          uVar31 = uRam0000000003d62a30;
          plVar25 = plRam0000000003d415e0;
          /*UnityEngine.Events.UnityAction<float>$$.ctor*/ func_0x01b7f17c(plVar24,lVar19);
          uVar30 = 0;
          auVar45 = auVar2;
          if (lVar21 != 0) {
            /*UnityEngine.Events.UnityEvent<float>$$AddListener*/ func_0x01b845c8(lVar21,plVar24,uRam0000000003d41730);
            goto code_r0x0164109c;
          }
        }
      }
      goto code_r0x016410cc;
    }
  }
  auVar47 = func_0x00f78e5c(auVar45._0_8_);
  uVar32 = auVar47._8_8_;
  uVar34 = auVar47._0_8_;
  puVar39 = &uStack_260;
  puStack_1e8 = &Core_DebugMenu_DebugMenu__AddLabel;
  uVar43 = CONCAT13(extraout_var_17,
                    CONCAT12(extraout_var_09,CONCAT11(extraout_var_01,extraout_b0_02)));
  plVar35 = plVar28;
  uStack_230 = uVar44;
  uStack_228 = (ulong)uVar42;
  plStack_220 = plVar22;
  plStack_218 = plVar24;
  lStack_208 = lVar19;
  uStack_1f8 = uVar30;
  pppuStack_1f0 = &ppuStack_150;
  if ((bRam0000000003eb5710 & 1) == 0) {
    uStack_210 = auVar45._0_8_;
    uStack_200 = auVar45._8_8_;
    func_0x00f78a20(0x3d548f0);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6f278);
    auVar45._8_8_ = uStack_200;
    auVar45._0_8_ = uStack_210;
    bRam0000000003eb5710 = 1;
  }
  uStack_200 = auVar45._8_8_;
  uStack_210 = auVar45._0_8_;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  lStack_250 = 0;
  uVar30 = 1;
  iVar18 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar34,uVar32);
  if (iVar18 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_250 == 0) {
    func_0x00f78af4();
    puVar40 = &Core_DebugMenu_DebugMenu__ConfigureLabel;
    auVar48 = func_0x00f78e5c();
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_250,0);
    auVar45 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_18,
                                               CONCAT12(extraout_var_10,
                                                        CONCAT11(extraout_var_02,extraout_b0_03))) +
                               -6.0,0),0xbf800000,uVar43,uVar34,4,/*STR('Label')*/ uRam0000000003d6f278,plVar28);
    plVar35 = auVar45._8_8_;
    plVar28 = auVar45._0_8_;
    param_11 = uRam0000000003d548f0;
    plVar22 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar34,4,uVar32,plVar28);
    auVar48._8_8_ = plVar22;
    auVar48._0_8_ = uVar34;
    puVar39 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    puVar40 = &UNK_016411e8;
    uVar30 = uVar31;
    plVar27 = plVar25;
    plVar25 = plVar22;
  }
  puVar36 = &uStack_2d0;
  uStack_2a0 = 0x3eb5000;
  plStack_298 = plVar28;
  plStack_288 = plVar25;
  uStack_278 = uVar31;
  ppppuStack_270 = &pppuStack_1f0;
  puStack_268 = puVar40;
  if ((bRam0000000003eb5719 & 1) == 0) {
    uStack_290 = uVar32;
    uStack_280 = uVar34;
    func_0x00f78a20(0x3d21148);
    auVar47._8_8_ = uStack_290;
    auVar47._0_8_ = uStack_280;
    bRam0000000003eb5719 = 1;
  }
  uStack_290 = auVar47._8_8_;
  uStack_280 = auVar47._0_8_;
  uStack_2b0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  plStack_2b8 = (long *)0x0;
  uStack_2c0 = 0;
  uVar31 = 4;
  plVar24 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar48._0_8_,auVar48._8_8_);
  plVar22 = plStack_2b8;
  if ((int)plVar24 == 0) {
    return plVar24;
  }
  if (plStack_2b8 != (long *)0x0) {
    if ((*(byte *)(*plStack_2b8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300)) ||
       (*(long *)(*(long *)(*plStack_2b8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148)) goto code_r0x01641360;
    plVar25 = (long *)plStack_2b8[3];
    if (plVar25 != (long *)0x0) {
      uVar31 = *(undefined8 *)(*plVar25 + 0x5f0);
      (**(code **)(*plVar25 + 0x5e8))(plVar25,uVar30);
      plVar25 = (long *)plVar22[3];
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x2c8))(plVar25,puVar39,*(undefined8 *)(*plVar25 + 0x2d0));
        return plVar24;
      }
    }
  }
  func_0x00f78af4();
code_r0x01641360:
  auVar49 = func_0x00f78e5c(plVar22);
  uVar34 = auVar49._8_8_;
  uVar30 = auVar49._0_8_;
  puVar39 = &uStack_360;
  puStack_2d8 = &Core_DebugMenu_DebugMenu__AddDropdown;
  uVar42 = CONCAT13(extraout_var_19,
                    CONCAT12(extraout_var_11,CONCAT11(extraout_var_03,extraout_b0_04)));
  plVar22 = plVar35;
  plVar24 = plVar27;
  uStack_330 = uVar44;
  uStack_328 = (ulong)uVar43;
  pppppuStack_2e0 = &ppppuStack_270;
  if ((bRam0000000003eb5711 & 1) == 0) {
    func_0x00f78a20(0x3d548e8);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6be98);
    bRam0000000003eb5711 = 1;
  }
  uStack_340 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  lStack_350 = 0;
  uVar32 = 1;
  iVar18 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar30,uVar34);
  if (iVar18 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_350 == 0) {
    func_0x00f78af4();
    puVar40 = &Core_DebugMenu_DebugMenu__ConfigureDropdown;
    auVar50 = func_0x00f78e5c();
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_350,0);
    auVar45 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_20,
                                               CONCAT12(extraout_var_12,
                                                        CONCAT11(extraout_var_04,extraout_b0_05))) +
                               -6.0,0),0x42480000,uVar42,uVar30,6,/*STR('Dropdown')*/ uRam0000000003d6be98,param_11);
    param_11 = auVar45._0_8_;
    plVar25 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar30,6,uVar34,param_11,auVar45._8_8_,plVar27,
                                      uRam0000000003d548e8);
    auVar50._8_8_ = plVar25;
    auVar50._0_8_ = uVar30;
    puVar40 = &UNK_0164148c;
    uVar32 = uVar31;
    puVar39 = puVar36;
    plVar22 = plVar35;
    plVar24 = plVar27;
    plVar27 = plVar25;
  }
  uVar26 = auVar50._0_8_;
  puVar38 = &uStack_3e0;
  uStack_3b0 = 0x3eb5000;
  uVar33 = uVar32;
  puVar37 = (undefined1 *)puVar39;
  plVar25 = plVar22;
  uStack_3a8 = param_11;
  plStack_398 = plVar27;
  uStack_388 = uVar31;
  puStack_380 = (undefined1 *)puVar36;
  plStack_378 = plVar35;
  ppppppuStack_370 = &pppppuStack_2e0;
  puStack_368 = puVar40;
  if ((bRam0000000003eb571b & 1) == 0) {
    uStack_3a0 = uVar34;
    uStack_390 = uVar30;
    func_0x00f78a20(0x3d535b8);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d62a38);
    func_0x00f78a20(0x3d27098);
    func_0x00f78a20(0x3d415a0);
    func_0x00f78a20(0x3d1eb00);
    func_0x00f78a20(0x3d416e0);
    auVar49._8_8_ = uStack_3a0;
    auVar49._0_8_ = uStack_390;
    bRam0000000003eb571b = 1;
  }
  uStack_3a0 = auVar49._8_8_;
  uStack_390 = auVar49._0_8_;
  uStack_3c0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  lStack_3d0 = 0;
  lVar19 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass82_0_TypeInfo*/ uRam0000000003d27098);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar19,0);
  if (lVar19 != 0) {
    *(long **)(lVar19 + 0x10) = plVar22;
    *(int *)(lVar19 + 0x18) = auVar50._8_4_;
    uVar33 = 6;
    plVar27 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar26,auVar50._8_8_);
    auVar3._8_8_ = plVar27;
    auVar3._0_8_ = uVar26;
    auVar50._8_8_ = plVar27;
    auVar50._0_8_ = uVar26;
    if ((int)plVar27 == 0) {
      return plVar27;
    }
    puVar37 = (undefined1 *)puVar38;
    if (lStack_3d0 != 0) {
      lVar21 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_3d0,uRam0000000003d535b8);
      auVar10._8_8_ = plVar27;
      auVar10._0_8_ = lVar21;
      auVar9._8_8_ = plVar27;
      auVar9._0_8_ = lVar21;
      auVar8._8_8_ = plVar27;
      auVar8._0_8_ = lVar21;
      auVar7._8_8_ = plVar27;
      auVar7._0_8_ = lVar21;
      auVar6._8_8_ = plVar27;
      auVar6._0_8_ = lVar21;
      auVar5._8_8_ = plVar27;
      auVar5._0_8_ = lVar21;
      auVar4._8_8_ = plVar27;
      auVar4._0_8_ = lVar21;
      puVar37 = (undefined1 *)puVar38;
      auVar50 = auVar3;
      if (puVar39 != (undefined8 *)0x0) {
        if (*(uint *)((long)puVar39 + 0x18) <= (uint)uVar32) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          puVar37 = (undefined1 *)puVar38;
        }
        auVar50 = auVar4;
        if ((lVar21 != 0) &&
           (plVar28 = *(long **)(lVar21 + 0x20), auVar50 = auVar5, plVar28 != (long *)0x0)) {
          uVar33 = *(undefined8 *)(*plVar28 + 0x5f0);
          (**(code **)(*plVar28 + 0x5e8))
                    (plVar28,*(undefined8 *)
                              (*(long *)((long)puVar39 + 0x10) + (long)(int)(uint)uVar32 * 8 + 0x20)
                    );
          /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_Options*/ func_0x01642194(lVar21,puVar39);
          /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_TemplateItemHeight*/ func_0x016421dc(0,lVar21);
          auVar50 = auVar6;
          if (*(long *)(lVar21 + 0x18) != 0) {
            uVar33 = 0;
            /*UnityEngine.UI.Dropdown$$set_value*/ func_0x032b4c50(*(long *)(lVar21 + 0x18),uVar32);
            auVar50 = auVar7;
            if ((*(long *)(lVar21 + 0x18) != 0) &&
               (lVar29 = *(long *)(*(long *)(lVar21 + 0x18) + 0x130), auVar50 = auVar8, lVar29 != 0)
               ) {
              /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar29,0);
              if (*(long *)(lVar19 + 0x10) == 0) {
                return plVar27;
              }
              auVar50 = auVar9;
              if (*(long *)(lVar21 + 0x18) != 0) {
                lVar21 = *(long *)(*(long *)(lVar21 + 0x18) + 0x130);
                puVar39 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<int>_TypeInfo*/ uRam0000000003d1eb00);
                uVar33 = uRam0000000003d62a38;
                puVar37 = puRam0000000003d415a0;
                /*UnityEngine.Events.UnityAction<int>$$.ctor*/ func_0x01b7e498(puVar39,lVar19);
                uVar32 = 0;
                auVar50 = auVar10;
                if (lVar21 != 0) {
                  /*UnityEngine.Events.UnityEvent<int>$$AddListener*/ func_0x01b8370c(lVar21,puVar39,uRam0000000003d416e0);
                  return plVar27;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar51 = func_0x00f78af4();
  uVar30 = auVar51._8_8_;
  uVar31 = auVar51._0_8_;
  puVar36 = &uStack_470;
  uStack_430 = 0x3eb5000;
  uStack_428 = 0x3eb5000;
  puStack_3e8 = &Core_DebugMenu_DebugMenu__AddToggle;
  uStack_440 = uVar44;
  uStack_438 = (ulong)uVar42;
  plStack_420 = plVar22;
  puStack_410 = (undefined1 *)puVar39;
  lStack_400 = lVar19;
  uStack_3f8 = uVar32;
  ppppppuStack_3f0 = &ppppppuStack_370;
  if ((bRam0000000003eb5712 & 1) == 0) {
    uStack_418 = auVar50._0_8_;
    uStack_408 = auVar50._8_8_;
    func_0x00f78a20(0x3d54908);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d74e90);
    auVar50._8_8_ = uStack_408;
    auVar50._0_8_ = uStack_418;
    bRam0000000003eb5712 = 1;
  }
  uStack_408 = auVar50._8_8_;
  uStack_418 = auVar50._0_8_;
  uStack_450 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  lStack_460 = 0;
  uVar34 = 1;
  iVar18 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar31,uVar30);
  if (iVar18 != 0) {
    if (lStack_460 == 0) {
      func_0x00f78af4();
      puVar40 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
      auVar52 = func_0x00f78e5c();
    }
    else {
      /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_460,0);
      auVar45 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                          (SUB41((float)CONCAT13(extraout_var_22,
                                                 CONCAT12(extraout_var_14,
                                                          CONCAT11(extraout_var_06,extraout_b0_07)))
                                 + -6.0,0),0x42480000,
                           CONCAT13(extraout_var_21,
                                    CONCAT12(extraout_var_13,
                                             CONCAT11(extraout_var_05,extraout_b0_06))),uVar31,7,
                           /*STR('Toggle')*/ uRam0000000003d74e90,plVar24);
      plVar24 = auVar45._0_8_;
      plVar25 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar31,7,uVar30,plVar24,auVar45._8_8_,plVar25,
                                        uRam0000000003d54908);
      auVar52._8_8_ = plVar25;
      auVar52._0_8_ = uVar31;
      puVar40 = &UNK_01641834;
      uVar34 = uVar33;
      puVar36 = (undefined8 *)puVar37;
    }
    uVar32 = auVar52._0_8_;
    plStack_4b0 = plVar24;
    plStack_4a0 = plVar25;
    uStack_490 = uVar33;
    puStack_488 = puVar37;
    ppppppuStack_480 = &ppppppuStack_3f0;
    puStack_478 = puVar40;
    if ((bRam0000000003eb571d & 1) == 0) {
      uStack_4a8 = uVar30;
      uStack_498 = uVar31;
      func_0x00f78a20(0x3d535d0);
      func_0x00f78a20(0x3d62a40);
      func_0x00f78a20(0x3d270a0);
      func_0x00f78a20(0x3d41568);
      func_0x00f78a20(0x3d1ead0);
      func_0x00f78a20(0x3d41668);
      auVar51._8_8_ = uStack_4a8;
      auVar51._0_8_ = uStack_498;
      bRam0000000003eb571d = 1;
    }
    uStack_4a8 = auVar51._8_8_;
    uStack_498 = auVar51._0_8_;
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    lStack_4d0 = 0;
    lVar19 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar19,0);
    if (lVar19 != 0) {
      *(undefined8 **)(lVar19 + 0x10) = puVar36;
      *(int *)(lVar19 + 0x18) = auVar52._8_4_;
      plVar22 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy
                                  (uVar32,auVar52._8_8_,7,&uStack_4e0);
      auVar11._8_8_ = plVar22;
      auVar11._0_8_ = uVar32;
      auVar52._8_8_ = plVar22;
      auVar52._0_8_ = uVar32;
      if ((int)plVar22 == 0) {
        return plVar22;
      }
      if (lStack_4d0 != 0) {
        lVar21 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_4d0,uRam0000000003d535d0);
        auVar15._8_8_ = plVar22;
        auVar15._0_8_ = lVar21;
        auVar14._8_8_ = plVar22;
        auVar14._0_8_ = lVar21;
        auVar13._8_8_ = plVar22;
        auVar13._0_8_ = lVar21;
        auVar12._8_8_ = plVar22;
        auVar12._0_8_ = lVar21;
        auVar52 = auVar11;
        if ((lVar21 != 0) && (auVar52 = auVar12, *(long *)(lVar21 + 0x18) != 0)) {
          /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar21 + 0x18),uVar34,0);
          auVar52 = auVar13;
          if ((*(long *)(lVar21 + 0x18) != 0) &&
             (lVar29 = *(long *)(*(long *)(lVar21 + 0x18) + 0x110), auVar52 = auVar14, lVar29 != 0))
          {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar29,0);
            if (*(long *)(lVar19 + 0x10) == 0) {
              return plVar22;
            }
            auVar52 = auVar15;
            if (*(long *)(lVar21 + 0x18) != 0) {
              lVar21 = *(long *)(*(long *)(lVar21 + 0x18) + 0x110);
              uVar31 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
              auVar52._0_8_ = uVar31;
              /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar31,lVar19,uRam0000000003d62a40,uRam0000000003d41568);
              uVar34 = 0;
              if (lVar21 != 0) {
                /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar21,uVar31,uRam0000000003d41668);
                return plVar22;
              }
            }
          }
        }
      }
    }
    auVar45 = func_0x00f78af4();
    puStack_4e8 = &Core_DebugMenu_DebugMenu__GetButton;
    lStack_500 = lVar19;
    uStack_4f8 = uVar34;
    ppppppuStack_4f0 = &ppppppuStack_480;
    auStack_510 = auVar52;
    if ((bRam0000000003eb5713 & 1) == 0) {
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5713 = 1;
    }
    uStack_520 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    plStack_528 = (long *)0x0;
    uStack_530 = 0;
    uVar20 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar45._0_8_,auVar45._8_8_,2,&uStack_540);
    if ((uVar20 & 1) == 0) {
      iVar18 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                         (auVar45._0_8_,auVar45._8_8_,3,&uStack_540);
      if (iVar18 == 0) {
        return (long *)0x0;
      }
    }
    if (plStack_528 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_528 + 300)) &&
         (*(long *)(*(long *)(*plStack_528 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        return plStack_528;
      }
      func_0x00f78e5c();
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x1640cac | Core.DebugMenu.DebugMenu.AddSlider
// ============================================================

/* WARNING: Possible PIC construction at 0x01640de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016411e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x016411e8) */
/* WARNING: Removing unreachable block (ram,0x016411f0) */
/* WARNING: Removing unreachable block (ram,0x01641210) */
/* WARNING: Removing unreachable block (ram,0x01641224) */
/* WARNING: Removing unreachable block (ram,0x01640de8) */
/* WARNING: Removing unreachable block (ram,0x01640df0) */
/* WARNING: Removing unreachable block (ram,0x01640e10) */
/* WARNING: Removing unreachable block (ram,0x01640e24) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */

long * Core_DebugMenu_DebugMenu__AddSlider
                 (uint param_1,uint param_2,uint param_3,uint param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,long *param_8,long *param_9,long *param_10,
                 undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined1 *puVar31;
  undefined8 *puVar32;
  long *plVar33;
  long lVar34;
  long *plVar35;
  undefined *puVar36;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar37;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  uint uVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  undefined8 uStack_480;
  undefined1 auStack_470 [16];
  long lStack_460;
  undefined8 uStack_458;
  undefined8 ******ppppppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long *plStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined1 *puStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined1 ******ppppppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 *puStack_2e0;
  long *plStack_2d8;
  undefined1 *****pppppuStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  undefined1 ****ppppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  long alStack_140 [3];
  long *plStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long alStack_a0 [6];
  
  uVar37 = (undefined1)param_1;
  plVar17 = alStack_a0;
  plVar35 = param_9;
  plVar19 = param_10;
  uVar38 = param_2;
  uVar39 = param_3;
  if ((bRam0000000003eb570f & 1) == 0) {
    func_0x00f78a20(0x3d54900);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d72aa0);
    bRam0000000003eb570f = 1;
  }
  alStack_a0[4] = 0;
  alStack_a0[1] = 0;
  alStack_a0[0] = 0;
  alStack_a0[3] = 0;
  alStack_a0[2] = 0;
  uVar24 = 1;
  iVar14 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_5,param_6);
  if (iVar14 == 0) {
    return (long *)0xffffffff;
  }
  if (alStack_a0[2] == 0) {
    func_0x00f78af4();
    puVar36 = &Core_DebugMenu_DebugMenu__ConfigureSlider;
    auVar40 = func_0x00f78e5c();
    plVar15 = auVar40._8_8_;
    param_5 = auVar40._0_8_;
    uVar37 = extraout_b0_00;
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(alStack_a0[2],0);
    auVar40 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_13,
                                               CONCAT12(extraout_var_06,
                                                        CONCAT11(extraout_var,extraout_b0))) + -6.0,
                               0),0x42480000,param_4,param_5,5,/*STR('Slider')*/ uRam0000000003d72aa0,param_10);
    param_11 = uRam0000000003d54900;
    plVar15 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(param_5,5,param_6,auVar40._0_8_,auVar40._8_8_);
    plVar17 = (long *)((long)&MACH_HEADER.magic + 1);
    puVar36 = (undefined *)0x1640de8;
    uVar24 = param_7;
    plVar35 = param_8;
    plVar19 = param_9;
    uVar38 = param_2;
    uVar39 = param_3;
  }
  plVar29 = alStack_140;
  uVar23 = (ulong)uVar39;
  uVar25 = uVar24;
  plVar20 = plVar17;
  plVar33 = plVar35;
  uStack_110 = (ulong)param_4;
  uStack_108 = (ulong)param_1;
  uStack_100 = (ulong)param_2;
  uStack_f8 = (ulong)param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  puStack_a8 = puVar36;
  if ((bRam0000000003eb5717 & 1) == 0) {
    func_0x00f78a20(0x3d21158);
    func_0x00f78a20(0x3d62a30);
    func_0x00f78a20(0x3d27090);
    func_0x00f78a20(0x3d415e0);
    func_0x00f78a20(0x3d1eb28);
    func_0x00f78a20(0x3d41730);
    bRam0000000003eb5717 = 1;
  }
  uStack_120 = 0;
  alStack_140[1] = 0;
  alStack_140[0] = 0;
  plStack_128 = (long *)0x0;
  alStack_140[2] = 0;
  lVar16 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass78_0_TypeInfo*/ uRam0000000003d27090);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar16,0);
  if (lVar16 == 0) {
code_r0x016410cc:
    func_0x00f78af4();
    plStack_170 = param_5;
  }
  else {
    *(long **)(lVar16 + 0x10) = plVar35;
    *(int *)(lVar16 + 0x18) = (int)plVar15;
    uVar25 = 5;
    plVar15 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(param_5,plVar15);
    param_5 = plStack_128;
    if ((int)plVar15 == 0) {
      return plVar15;
    }
    plVar20 = plVar29;
    if (plStack_128 == (long *)0x0) goto code_r0x016410cc;
    plStack_170 = plStack_128;
    if ((*(byte *)(/*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158 + 300) <= *(byte *)(*plStack_128 + 300)) &&
       (*(long *)(*(long *)(*plStack_128 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158)) {
      plVar35 = (long *)plStack_128[6];
      if (plVar35 != (long *)0x0) {
        /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(plVar35,plVar17,0);
        /*UnityEngine.UI.Slider$$set_minValue*/ func_0x032e5c24(uVar37,plVar35,0);
        /*UnityEngine.UI.Slider$$set_maxValue*/ func_0x032e5ccc((char)uVar39,plVar35,0);
        (**(code **)(*plVar35 + 0x428))((char)uVar38,plVar35,*(undefined8 *)(*plVar35 + 0x430));
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetDecimalPlaces*/ func_0x01641ddc(param_5,uVar24);
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetTextForValues*/ func_0x01643c84(uVar37,param_5,param_5[3]);
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetTextForValues*/ func_0x01643c84((char)uVar39,param_5,param_5[5]);
        /*Core.DebugMenu.DebugUISliderBehaviour$$SetTextForValues*/ func_0x01643c84((char)uVar38,param_5,param_5[4]);
        uVar25 = 0;
        /*UnityEngine.UI.Slider$$set_wholeNumbers*/ func_0x032e5d74(plVar35,(int)uVar24 == 0);
        plVar20 = plVar29;
        if (plVar35[0x24] != 0) {
          /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(plVar35[0x24],0);
          if (*(long *)(lVar16 + 0x10) == 0) {
code_r0x0164109c:
            /*Core.DebugMenu.DebugUISliderBehaviour$$AddListenerToUpdateValueText*/ func_0x01641e84(param_5);
            return plVar15;
          }
          lVar34 = plVar35[0x24];
          plVar17 = (long *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<float>_TypeInfo*/ uRam0000000003d1eb28);
          uVar25 = uRam0000000003d62a30;
          plVar20 = plRam0000000003d415e0;
          /*UnityEngine.Events.UnityAction<float>$$.ctor*/ func_0x01b7f17c(plVar17,lVar16);
          uVar24 = 0;
          if (lVar34 != 0) {
            /*UnityEngine.Events.UnityEvent<float>$$AddListener*/ func_0x01b845c8(lVar34,plVar17,uRam0000000003d41730);
            goto code_r0x0164109c;
          }
        }
      }
      goto code_r0x016410cc;
    }
  }
  auVar40 = func_0x00f78e5c(plStack_170);
  uVar26 = auVar40._8_8_;
  uVar28 = auVar40._0_8_;
  puVar22 = &uStack_1c0;
  puStack_148 = &Core_DebugMenu_DebugMenu__AddLabel;
  uVar39 = CONCAT13(extraout_var_14,
                    CONCAT12(extraout_var_07,CONCAT11(extraout_var_00,extraout_b0_01)));
  plVar29 = plVar33;
  uStack_190 = uVar23;
  uStack_188 = (ulong)uVar38;
  plStack_180 = plVar35;
  plStack_178 = plVar17;
  lStack_168 = lVar16;
  plStack_160 = plVar15;
  uStack_158 = uVar24;
  ppuStack_150 = &puStack_b0;
  if ((bRam0000000003eb5710 & 1) == 0) {
    func_0x00f78a20(0x3d548f0);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6f278);
    bRam0000000003eb5710 = 1;
  }
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  uVar24 = 1;
  iVar14 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar28,uVar26);
  if (iVar14 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_1b0 == 0) {
    func_0x00f78af4();
    puVar36 = &Core_DebugMenu_DebugMenu__ConfigureLabel;
    auVar41 = func_0x00f78e5c();
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_1b0,0);
    auVar41 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_15,
                                               CONCAT12(extraout_var_08,
                                                        CONCAT11(extraout_var_01,extraout_b0_02))) +
                               -6.0,0),0xbf800000,uVar39,uVar28,4,/*STR('Label')*/ uRam0000000003d6f278,plVar33);
    plVar29 = auVar41._8_8_;
    plVar33 = auVar41._0_8_;
    param_11 = uRam0000000003d548f0;
    plVar35 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar28,4,uVar26,plVar33);
    auVar41._8_8_ = plVar35;
    auVar41._0_8_ = uVar28;
    puVar22 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    puVar36 = &UNK_016411e8;
    uVar24 = uVar25;
    plVar19 = plVar20;
    plVar20 = plVar35;
  }
  puVar30 = &uStack_230;
  uStack_200 = 0x3eb5000;
  plStack_1f8 = plVar33;
  plStack_1e8 = plVar20;
  uStack_1d8 = uVar25;
  pppuStack_1d0 = &ppuStack_150;
  puStack_1c8 = puVar36;
  if ((bRam0000000003eb5719 & 1) == 0) {
    uStack_1f0 = uVar26;
    uStack_1e0 = uVar28;
    func_0x00f78a20(0x3d21148);
    auVar40._8_8_ = uStack_1f0;
    auVar40._0_8_ = uStack_1e0;
    bRam0000000003eb5719 = 1;
  }
  uStack_1f0 = auVar40._8_8_;
  uStack_1e0 = auVar40._0_8_;
  uStack_210 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  uVar25 = 4;
  plVar17 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar41._0_8_,auVar41._8_8_);
  plVar35 = plStack_218;
  if ((int)plVar17 == 0) {
    return plVar17;
  }
  if (plStack_218 != (long *)0x0) {
    if ((*(byte *)(*plStack_218 + 300) < *(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300)) ||
       (*(long *)(*(long *)(*plStack_218 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148)) goto code_r0x01641360;
    plVar15 = (long *)plStack_218[3];
    if (plVar15 != (long *)0x0) {
      uVar25 = *(undefined8 *)(*plVar15 + 0x5f0);
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar24);
      plVar15 = (long *)plVar35[3];
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x2c8))(plVar15,puVar22,*(undefined8 *)(*plVar15 + 0x2d0));
        return plVar17;
      }
    }
  }
  func_0x00f78af4();
code_r0x01641360:
  auVar42 = func_0x00f78e5c(plVar35);
  uVar28 = auVar42._8_8_;
  uVar24 = auVar42._0_8_;
  puVar22 = &uStack_2c0;
  puStack_238 = &Core_DebugMenu_DebugMenu__AddDropdown;
  uVar38 = CONCAT13(extraout_var_16,
                    CONCAT12(extraout_var_09,CONCAT11(extraout_var_02,extraout_b0_03)));
  plVar35 = plVar29;
  plVar17 = plVar19;
  uStack_290 = uVar23;
  uStack_288 = (ulong)uVar39;
  ppppuStack_240 = &pppuStack_1d0;
  if ((bRam0000000003eb5711 & 1) == 0) {
    func_0x00f78a20(0x3d548e8);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6be98);
    bRam0000000003eb5711 = 1;
  }
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  lStack_2b0 = 0;
  uVar26 = 1;
  iVar14 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar24,uVar28);
  if (iVar14 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_2b0 == 0) {
    func_0x00f78af4();
    puVar36 = &Core_DebugMenu_DebugMenu__ConfigureDropdown;
    auVar43 = func_0x00f78e5c();
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_2b0,0);
    auVar40 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_17,
                                               CONCAT12(extraout_var_10,
                                                        CONCAT11(extraout_var_03,extraout_b0_04))) +
                               -6.0,0),0x42480000,uVar38,uVar24,6,/*STR('Dropdown')*/ uRam0000000003d6be98,param_11);
    param_11 = auVar40._0_8_;
    plVar15 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar24,6,uVar28,param_11,auVar40._8_8_,plVar19,
                                      uRam0000000003d548e8);
    auVar43._8_8_ = plVar15;
    auVar43._0_8_ = uVar24;
    puVar36 = &UNK_0164148c;
    uVar26 = uVar25;
    puVar22 = puVar30;
    plVar35 = plVar29;
    plVar17 = plVar19;
    plVar19 = plVar15;
  }
  uVar18 = auVar43._0_8_;
  puVar32 = &uStack_340;
  uStack_310 = 0x3eb5000;
  uVar27 = uVar26;
  puVar31 = (undefined1 *)puVar22;
  plVar15 = plVar35;
  uStack_308 = param_11;
  plStack_2f8 = plVar19;
  uStack_2e8 = uVar25;
  puStack_2e0 = (undefined1 *)puVar30;
  plStack_2d8 = plVar29;
  pppppuStack_2d0 = &ppppuStack_240;
  puStack_2c8 = puVar36;
  if ((bRam0000000003eb571b & 1) == 0) {
    uStack_300 = uVar28;
    uStack_2f0 = uVar24;
    func_0x00f78a20(0x3d535b8);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d62a38);
    func_0x00f78a20(0x3d27098);
    func_0x00f78a20(0x3d415a0);
    func_0x00f78a20(0x3d1eb00);
    func_0x00f78a20(0x3d416e0);
    auVar42._8_8_ = uStack_300;
    auVar42._0_8_ = uStack_2f0;
    bRam0000000003eb571b = 1;
  }
  uStack_300 = auVar42._8_8_;
  uStack_2f0 = auVar42._0_8_;
  uStack_320 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  lStack_330 = 0;
  lVar16 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass82_0_TypeInfo*/ uRam0000000003d27098);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar16,0);
  if (lVar16 != 0) {
    *(long **)(lVar16 + 0x10) = plVar35;
    *(int *)(lVar16 + 0x18) = auVar43._8_4_;
    uVar27 = 6;
    plVar19 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar18,auVar43._8_8_);
    auVar1._8_8_ = plVar19;
    auVar1._0_8_ = uVar18;
    auVar43._8_8_ = plVar19;
    auVar43._0_8_ = uVar18;
    if ((int)plVar19 == 0) {
      return plVar19;
    }
    puVar31 = (undefined1 *)puVar32;
    if (lStack_330 != 0) {
      lVar34 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_330,uRam0000000003d535b8);
      auVar8._8_8_ = plVar19;
      auVar8._0_8_ = lVar34;
      auVar7._8_8_ = plVar19;
      auVar7._0_8_ = lVar34;
      auVar6._8_8_ = plVar19;
      auVar6._0_8_ = lVar34;
      auVar5._8_8_ = plVar19;
      auVar5._0_8_ = lVar34;
      auVar4._8_8_ = plVar19;
      auVar4._0_8_ = lVar34;
      auVar3._8_8_ = plVar19;
      auVar3._0_8_ = lVar34;
      auVar2._8_8_ = plVar19;
      auVar2._0_8_ = lVar34;
      puVar31 = (undefined1 *)puVar32;
      auVar43 = auVar1;
      if (puVar22 != (undefined8 *)0x0) {
        if (*(uint *)((long)puVar22 + 0x18) <= (uint)uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          puVar31 = (undefined1 *)puVar32;
        }
        auVar43 = auVar2;
        if ((lVar34 != 0) &&
           (plVar20 = *(long **)(lVar34 + 0x20), auVar43 = auVar3, plVar20 != (long *)0x0)) {
          uVar27 = *(undefined8 *)(*plVar20 + 0x5f0);
          (**(code **)(*plVar20 + 0x5e8))
                    (plVar20,*(undefined8 *)
                              (*(long *)((long)puVar22 + 0x10) + (long)(int)(uint)uVar26 * 8 + 0x20)
                    );
          /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_Options*/ func_0x01642194(lVar34,puVar22);
          /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_TemplateItemHeight*/ func_0x016421dc(0,lVar34);
          auVar43 = auVar4;
          if (*(long *)(lVar34 + 0x18) != 0) {
            uVar27 = 0;
            /*UnityEngine.UI.Dropdown$$set_value*/ func_0x032b4c50(*(long *)(lVar34 + 0x18),uVar26);
            auVar43 = auVar5;
            if ((*(long *)(lVar34 + 0x18) != 0) &&
               (lVar21 = *(long *)(*(long *)(lVar34 + 0x18) + 0x130), auVar43 = auVar6, lVar21 != 0)
               ) {
              /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar21,0);
              if (*(long *)(lVar16 + 0x10) == 0) {
                return plVar19;
              }
              auVar43 = auVar7;
              if (*(long *)(lVar34 + 0x18) != 0) {
                lVar34 = *(long *)(*(long *)(lVar34 + 0x18) + 0x130);
                puVar22 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<int>_TypeInfo*/ uRam0000000003d1eb00);
                uVar27 = uRam0000000003d62a38;
                puVar31 = puRam0000000003d415a0;
                /*UnityEngine.Events.UnityAction<int>$$.ctor*/ func_0x01b7e498(puVar22,lVar16);
                uVar26 = 0;
                auVar43 = auVar8;
                if (lVar34 != 0) {
                  /*UnityEngine.Events.UnityEvent<int>$$AddListener*/ func_0x01b8370c(lVar34,puVar22,uRam0000000003d416e0);
                  return plVar19;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar44 = func_0x00f78af4();
  uVar25 = auVar44._8_8_;
  uVar24 = auVar44._0_8_;
  puVar30 = &uStack_3d0;
  uStack_390 = 0x3eb5000;
  uStack_388 = 0x3eb5000;
  puStack_348 = &Core_DebugMenu_DebugMenu__AddToggle;
  uStack_3a0 = uVar23;
  uStack_398 = (ulong)uVar38;
  plStack_380 = plVar35;
  puStack_370 = (undefined1 *)puVar22;
  lStack_360 = lVar16;
  uStack_358 = uVar26;
  ppppppuStack_350 = &pppppuStack_2d0;
  if ((bRam0000000003eb5712 & 1) == 0) {
    uStack_378 = auVar43._0_8_;
    uStack_368 = auVar43._8_8_;
    func_0x00f78a20(0x3d54908);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d74e90);
    auVar43._8_8_ = uStack_368;
    auVar43._0_8_ = uStack_378;
    bRam0000000003eb5712 = 1;
  }
  uStack_368 = auVar43._8_8_;
  uStack_378 = auVar43._0_8_;
  uStack_3b0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  lStack_3c0 = 0;
  uVar28 = 1;
  iVar14 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar24,uVar25);
  if (iVar14 != 0) {
    if (lStack_3c0 == 0) {
      func_0x00f78af4();
      puVar36 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
      auVar45 = func_0x00f78e5c();
    }
    else {
      /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_3c0,0);
      auVar40 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                          (SUB41((float)CONCAT13(extraout_var_19,
                                                 CONCAT12(extraout_var_12,
                                                          CONCAT11(extraout_var_05,extraout_b0_06)))
                                 + -6.0,0),0x42480000,
                           CONCAT13(extraout_var_18,
                                    CONCAT12(extraout_var_11,
                                             CONCAT11(extraout_var_04,extraout_b0_05))),uVar24,7,
                           /*STR('Toggle')*/ uRam0000000003d74e90,plVar17);
      plVar17 = auVar40._0_8_;
      plVar15 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar24,7,uVar25,plVar17,auVar40._8_8_,plVar15,
                                        uRam0000000003d54908);
      auVar45._8_8_ = plVar15;
      auVar45._0_8_ = uVar24;
      puVar36 = &UNK_01641834;
      uVar28 = uVar27;
      puVar30 = (undefined8 *)puVar31;
    }
    uVar26 = auVar45._0_8_;
    plStack_410 = plVar17;
    plStack_400 = plVar15;
    uStack_3f0 = uVar27;
    puStack_3e8 = puVar31;
    ppppppuStack_3e0 = &ppppppuStack_350;
    puStack_3d8 = puVar36;
    if ((bRam0000000003eb571d & 1) == 0) {
      uStack_408 = uVar25;
      uStack_3f8 = uVar24;
      func_0x00f78a20(0x3d535d0);
      func_0x00f78a20(0x3d62a40);
      func_0x00f78a20(0x3d270a0);
      func_0x00f78a20(0x3d41568);
      func_0x00f78a20(0x3d1ead0);
      func_0x00f78a20(0x3d41668);
      auVar44._8_8_ = uStack_408;
      auVar44._0_8_ = uStack_3f8;
      bRam0000000003eb571d = 1;
    }
    uStack_408 = auVar44._8_8_;
    uStack_3f8 = auVar44._0_8_;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    lStack_430 = 0;
    lVar16 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar16,0);
    if (lVar16 != 0) {
      *(undefined8 **)(lVar16 + 0x10) = puVar30;
      *(int *)(lVar16 + 0x18) = auVar45._8_4_;
      plVar35 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy
                                  (uVar26,auVar45._8_8_,7,&uStack_440);
      auVar9._8_8_ = plVar35;
      auVar9._0_8_ = uVar26;
      auVar45._8_8_ = plVar35;
      auVar45._0_8_ = uVar26;
      if ((int)plVar35 == 0) {
        return plVar35;
      }
      if (lStack_430 != 0) {
        lVar34 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_430,uRam0000000003d535d0);
        auVar13._8_8_ = plVar35;
        auVar13._0_8_ = lVar34;
        auVar12._8_8_ = plVar35;
        auVar12._0_8_ = lVar34;
        auVar11._8_8_ = plVar35;
        auVar11._0_8_ = lVar34;
        auVar10._8_8_ = plVar35;
        auVar10._0_8_ = lVar34;
        auVar45 = auVar9;
        if ((lVar34 != 0) && (auVar45 = auVar10, *(long *)(lVar34 + 0x18) != 0)) {
          /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar34 + 0x18),uVar28,0);
          auVar45 = auVar11;
          if ((*(long *)(lVar34 + 0x18) != 0) &&
             (lVar21 = *(long *)(*(long *)(lVar34 + 0x18) + 0x110), auVar45 = auVar12, lVar21 != 0))
          {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar21,0);
            if (*(long *)(lVar16 + 0x10) == 0) {
              return plVar35;
            }
            auVar45 = auVar13;
            if (*(long *)(lVar34 + 0x18) != 0) {
              lVar34 = *(long *)(*(long *)(lVar34 + 0x18) + 0x110);
              uVar24 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
              auVar45._0_8_ = uVar24;
              /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar24,lVar16,uRam0000000003d62a40,uRam0000000003d41568);
              uVar28 = 0;
              if (lVar34 != 0) {
                /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar34,uVar24,uRam0000000003d41668);
                return plVar35;
              }
            }
          }
        }
      }
    }
    auVar40 = func_0x00f78af4();
    puStack_448 = &Core_DebugMenu_DebugMenu__GetButton;
    lStack_460 = lVar16;
    uStack_458 = uVar28;
    ppppppuStack_450 = &ppppppuStack_3e0;
    auStack_470 = auVar45;
    if ((bRam0000000003eb5713 & 1) == 0) {
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5713 = 1;
    }
    uStack_480 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    plStack_488 = (long *)0x0;
    uStack_490 = 0;
    uVar23 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar40._0_8_,auVar40._8_8_,2,&uStack_4a0);
    if ((uVar23 & 1) == 0) {
      iVar14 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                         (auVar40._0_8_,auVar40._8_8_,3,&uStack_4a0);
      if (iVar14 == 0) {
        return (long *)0x0;
      }
    }
    if (plStack_488 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_488 + 300)) &&
         (*(long *)(*(long *)(*plStack_488 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        return plStack_488;
      }
      func_0x00f78e5c();
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x1640e64 | Core.DebugMenu.DebugMenu.ConfigureSlider
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16410d8 | Core.DebugMenu.DebugMenu.AddLabel
// ============================================================

/* WARNING: Possible PIC construction at 0x016411e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x016411e8) */
/* WARNING: Removing unreachable block (ram,0x016411f0) */
/* WARNING: Removing unreachable block (ram,0x01641210) */
/* WARNING: Removing unreachable block (ram,0x01641224) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */

long * Core_DebugMenu_DebugMenu__AddLabel
                 (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined1 auStack_330 [16];
  long lStack_320;
  undefined8 uStack_318;
  undefined1 ******ppppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *****pppppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 ****ppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar23 = &uStack_80;
  uVar16 = param_6;
  if ((bRam0000000003eb5710 & 1) == 0) {
    func_0x00f78a20(0x3d548f0);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6f278);
    bRam0000000003eb5710 = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  uVar20 = 1;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_2,param_3);
  if (iVar6 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_70 == 0) {
    func_0x00f78af4();
    puVar27 = &Core_DebugMenu_DebugMenu__ConfigureLabel;
    auVar28 = func_0x00f78e5c();
    uVar7 = auVar28._8_8_;
    uVar8 = auVar28._0_8_;
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_70,0);
    auVar28 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_09,
                                               CONCAT12(extraout_var_04,
                                                        CONCAT11(extraout_var,extraout_b0))) + -6.0,
                               0),0xbf800000,param_1,param_2,4,/*STR('Label')*/ uRam0000000003d6f278,param_6);
    uVar16 = auVar28._8_8_;
    param_6 = auVar28._0_8_;
    param_8 = uRam0000000003d548f0;
    uVar7 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(param_2,4,param_3,param_6);
    puVar23 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    puVar27 = (undefined *)0x16411e8;
    uVar8 = param_2;
    uVar20 = param_4;
    param_7 = param_5;
    param_5 = uVar7;
  }
  puVar24 = &uStack_f0;
  uStack_c0 = 0x3eb5000;
  uStack_b8 = param_6;
  uStack_b0 = param_3;
  uStack_a8 = param_5;
  uStack_a0 = param_2;
  uStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  puStack_88 = puVar27;
  if ((bRam0000000003eb5719 & 1) == 0) {
    func_0x00f78a20(0x3d21148);
    bRam0000000003eb5719 = 1;
  }
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  plStack_d8 = (long *)0x0;
  uStack_e0 = 0;
  uVar21 = 4;
  plVar9 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar8,uVar7);
  plVar13 = plStack_d8;
  if ((int)plVar9 == 0) {
    return plVar9;
  }
  if (plStack_d8 != (long *)0x0) {
    if ((*(byte *)(*plStack_d8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300)) ||
       (*(long *)(*(long *)(*plStack_d8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148)) goto code_r0x01641360;
    plVar10 = (long *)plStack_d8[3];
    if (plVar10 != (long *)0x0) {
      uVar21 = *(undefined8 *)(*plVar10 + 0x5f0);
      (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar20);
      plVar10 = (long *)plVar13[3];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2c8))(plVar10,puVar23,*(undefined8 *)(*plVar10 + 0x2d0));
        return plVar9;
      }
    }
  }
  func_0x00f78af4();
code_r0x01641360:
  auVar28 = func_0x00f78e5c(plVar13);
  uVar19 = auVar28._8_8_;
  uVar7 = auVar28._0_8_;
  puVar23 = &uStack_180;
  puStack_f8 = &Core_DebugMenu_DebugMenu__AddDropdown;
  uVar20 = uVar16;
  uVar8 = param_7;
  ppuStack_100 = &puStack_90;
  if ((bRam0000000003eb5711 & 1) == 0) {
    func_0x00f78a20(0x3d548e8);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6be98);
    bRam0000000003eb5711 = 1;
  }
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  lStack_170 = 0;
  uVar22 = 1;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar7,uVar19);
  if (iVar6 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_170 == 0) {
    func_0x00f78af4();
    puVar27 = &Core_DebugMenu_DebugMenu__ConfigureDropdown;
    auVar29 = func_0x00f78e5c();
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_170,0);
    auVar29 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_11,
                                               CONCAT12(extraout_var_06,
                                                        CONCAT11(extraout_var_01,extraout_b0_01))) +
                               -6.0,0),0x42480000,
                         CONCAT13(extraout_var_10,
                                  CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00))
                                 ),uVar7,6,/*STR('Dropdown')*/ uRam0000000003d6be98,param_8);
    param_8 = auVar29._0_8_;
    uVar11 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar7,6,uVar19,param_8,auVar29._8_8_,param_7,uRam0000000003d548e8);
    auVar29._8_8_ = uVar11;
    auVar29._0_8_ = uVar7;
    puVar27 = &UNK_0164148c;
    uVar22 = uVar21;
    puVar23 = puVar24;
    uVar20 = uVar16;
    uVar8 = param_7;
    param_7 = uVar11;
  }
  puVar26 = &uStack_200;
  uStack_1d0 = 0x3eb5000;
  uVar11 = uVar22;
  puVar25 = (undefined1 *)puVar23;
  uVar17 = uVar20;
  uStack_1c8 = param_8;
  uStack_1b8 = param_7;
  uStack_1a8 = uVar21;
  puStack_1a0 = (undefined1 *)puVar24;
  uStack_198 = uVar16;
  pppuStack_190 = &ppuStack_100;
  puStack_188 = puVar27;
  if ((bRam0000000003eb571b & 1) == 0) {
    uStack_1c0 = uVar19;
    uStack_1b0 = uVar7;
    func_0x00f78a20(0x3d535b8);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d62a38);
    func_0x00f78a20(0x3d27098);
    func_0x00f78a20(0x3d415a0);
    func_0x00f78a20(0x3d1eb00);
    func_0x00f78a20(0x3d416e0);
    auVar28._8_8_ = uStack_1c0;
    auVar28._0_8_ = uStack_1b0;
    bRam0000000003eb571b = 1;
  }
  uStack_1c0 = auVar28._8_8_;
  uStack_1b0 = auVar28._0_8_;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  lStack_1f0 = 0;
  lVar12 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass82_0_TypeInfo*/ uRam0000000003d27098);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x10) = uVar20;
    *(int *)(lVar12 + 0x18) = auVar29._8_4_;
    uVar11 = 6;
    plVar13 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar29._0_8_,auVar29._8_8_);
    if ((int)plVar13 == 0) {
      return plVar13;
    }
    puVar25 = (undefined1 *)puVar26;
    if ((lStack_1f0 != 0) &&
       (lVar14 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_1f0,uRam0000000003d535b8), puVar25 = (undefined1 *)puVar26,
       puVar23 != (undefined8 *)0x0)) {
      if (*(uint *)((long)puVar23 + 0x18) <= (uint)uVar22) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        puVar25 = (undefined1 *)puVar26;
      }
      if ((lVar14 != 0) && (plVar9 = *(long **)(lVar14 + 0x20), plVar9 != (long *)0x0)) {
        uVar11 = *(undefined8 *)(*plVar9 + 0x5f0);
        (**(code **)(*plVar9 + 0x5e8))
                  (plVar9,*(undefined8 *)
                           (*(long *)((long)puVar23 + 0x10) + (long)(int)(uint)uVar22 * 8 + 0x20));
        /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_Options*/ func_0x01642194(lVar14,puVar23);
        /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_TemplateItemHeight*/ func_0x016421dc(0,lVar14);
        if (*(long *)(lVar14 + 0x18) != 0) {
          uVar11 = 0;
          /*UnityEngine.UI.Dropdown$$set_value*/ func_0x032b4c50(*(long *)(lVar14 + 0x18),uVar22);
          if ((*(long *)(lVar14 + 0x18) != 0) &&
             (lVar15 = *(long *)(*(long *)(lVar14 + 0x18) + 0x130), lVar15 != 0)) {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar15,0);
            if (*(long *)(lVar12 + 0x10) == 0) {
              return plVar13;
            }
            if (*(long *)(lVar14 + 0x18) != 0) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x18) + 0x130);
              uVar16 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int>_TypeInfo*/ uRam0000000003d1eb00);
              uVar11 = uRam0000000003d62a38;
              puVar25 = puRam0000000003d415a0;
              /*UnityEngine.Events.UnityAction<int>$$.ctor*/ func_0x01b7e498(uVar16,lVar12);
              if (lVar14 != 0) {
                /*UnityEngine.Events.UnityEvent<int>$$AddListener*/ func_0x01b8370c(lVar14,uVar16,uRam0000000003d416e0);
                return plVar13;
              }
            }
          }
        }
      }
    }
  }
  auVar30 = func_0x00f78af4();
  uVar20 = auVar30._8_8_;
  uVar16 = auVar30._0_8_;
  puVar23 = &uStack_290;
  puStack_208 = &Core_DebugMenu_DebugMenu__AddToggle;
  ppppuStack_210 = &pppuStack_190;
  if ((bRam0000000003eb5712 & 1) == 0) {
    func_0x00f78a20(0x3d54908);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d74e90);
    bRam0000000003eb5712 = 1;
  }
  uStack_270 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  lStack_280 = 0;
  uVar7 = 1;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar16,uVar20);
  if (iVar6 != 0) {
    if (lStack_280 == 0) {
      func_0x00f78af4();
      puVar27 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
      auVar31 = func_0x00f78e5c();
    }
    else {
      /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_280,0);
      auVar28 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                          (SUB41((float)CONCAT13(extraout_var_13,
                                                 CONCAT12(extraout_var_08,
                                                          CONCAT11(extraout_var_03,extraout_b0_03)))
                                 + -6.0,0),0x42480000,
                           CONCAT13(extraout_var_12,
                                    CONCAT12(extraout_var_07,
                                             CONCAT11(extraout_var_02,extraout_b0_02))),uVar16,7,
                           /*STR('Toggle')*/ uRam0000000003d74e90,uVar8);
      uVar8 = auVar28._0_8_;
      uVar17 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar16,7,uVar20,uVar8,auVar28._8_8_,uVar17,uRam0000000003d54908);
      auVar31._8_8_ = uVar17;
      auVar31._0_8_ = uVar16;
      puVar27 = &UNK_01641834;
      uVar7 = uVar11;
      puVar23 = (undefined8 *)puVar25;
    }
    uVar21 = auVar31._0_8_;
    uStack_2d0 = uVar8;
    uStack_2c0 = uVar17;
    uStack_2b0 = uVar11;
    puStack_2a8 = puVar25;
    pppppuStack_2a0 = &ppppuStack_210;
    puStack_298 = puVar27;
    if ((bRam0000000003eb571d & 1) == 0) {
      uStack_2c8 = uVar20;
      uStack_2b8 = uVar16;
      func_0x00f78a20(0x3d535d0);
      func_0x00f78a20(0x3d62a40);
      func_0x00f78a20(0x3d270a0);
      func_0x00f78a20(0x3d41568);
      func_0x00f78a20(0x3d1ead0);
      func_0x00f78a20(0x3d41668);
      auVar30._8_8_ = uStack_2c8;
      auVar30._0_8_ = uStack_2b8;
      bRam0000000003eb571d = 1;
    }
    uStack_2c8 = auVar30._8_8_;
    uStack_2b8 = auVar30._0_8_;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    lStack_2f0 = 0;
    lVar12 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
    if (lVar12 != 0) {
      *(undefined8 **)(lVar12 + 0x10) = puVar23;
      *(int *)(lVar12 + 0x18) = auVar31._8_4_;
      plVar13 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy
                                  (uVar21,auVar31._8_8_,7,&uStack_300);
      auVar1._8_8_ = plVar13;
      auVar1._0_8_ = uVar21;
      auVar31._8_8_ = plVar13;
      auVar31._0_8_ = uVar21;
      if ((int)plVar13 == 0) {
        return plVar13;
      }
      if (lStack_2f0 != 0) {
        lVar14 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_2f0,uRam0000000003d535d0);
        auVar5._8_8_ = plVar13;
        auVar5._0_8_ = lVar14;
        auVar4._8_8_ = plVar13;
        auVar4._0_8_ = lVar14;
        auVar3._8_8_ = plVar13;
        auVar3._0_8_ = lVar14;
        auVar2._8_8_ = plVar13;
        auVar2._0_8_ = lVar14;
        auVar31 = auVar1;
        if ((lVar14 != 0) && (auVar31 = auVar2, *(long *)(lVar14 + 0x18) != 0)) {
          /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar14 + 0x18),uVar7,0);
          auVar31 = auVar3;
          if ((*(long *)(lVar14 + 0x18) != 0) &&
             (lVar15 = *(long *)(*(long *)(lVar14 + 0x18) + 0x110), auVar31 = auVar4, lVar15 != 0))
          {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar15,0);
            if (*(long *)(lVar12 + 0x10) == 0) {
              return plVar13;
            }
            auVar31 = auVar5;
            if (*(long *)(lVar14 + 0x18) != 0) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x18) + 0x110);
              uVar16 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
              auVar31._0_8_ = uVar16;
              /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar16,lVar12,uRam0000000003d62a40,uRam0000000003d41568);
              uVar7 = 0;
              if (lVar14 != 0) {
                /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar14,uVar16,uRam0000000003d41668);
                return plVar13;
              }
            }
          }
        }
      }
    }
    auVar28 = func_0x00f78af4();
    puStack_308 = &Core_DebugMenu_DebugMenu__GetButton;
    lStack_320 = lVar12;
    uStack_318 = uVar7;
    ppppppuStack_310 = &pppppuStack_2a0;
    auStack_330 = auVar31;
    if ((bRam0000000003eb5713 & 1) == 0) {
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5713 = 1;
    }
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    plStack_348 = (long *)0x0;
    uStack_350 = 0;
    uVar18 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar28._0_8_,auVar28._8_8_,2,&uStack_360);
    if ((uVar18 & 1) == 0) {
      iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar28._0_8_,auVar28._8_8_,3,&uStack_360)
      ;
      if (iVar6 == 0) {
        return (long *)0x0;
      }
    }
    if (plStack_348 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_348 + 300)) &&
         (*(long *)(*(long *)(*plStack_348 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        return plStack_348;
      }
      func_0x00f78e5c();
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x164125c | Core.DebugMenu.DebugMenu.ConfigureLabel
// ============================================================

/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */

long * Core_DebugMenu_DebugMenu__ConfigureLabel
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b0 [16];
  long lStack_2a0;
  undefined8 uStack_298;
  undefined1 *****pppppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 ****ppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  
  puVar20 = &uStack_70;
  if ((bRam0000000003eb5719 & 1) == 0) {
    func_0x00f78a20(0x3d21148);
    bRam0000000003eb5719 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plStack_58 = (long *)0x0;
  uStack_60 = 0;
  uVar17 = 4;
  plVar7 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2);
  plVar11 = plStack_58;
  if ((int)plVar7 == 0) {
    return plVar7;
  }
  if (plStack_58 != (long *)0x0) {
    if ((*(byte *)(*plStack_58 + 300) < *(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300)) ||
       (*(long *)(*(long *)(*plStack_58 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUILabelBehaviour_TypeInfo*/ lRam0000000003d21148)) goto LAB_01641360;
    plVar8 = (long *)plStack_58[3];
    if (plVar8 != (long *)0x0) {
      uVar17 = *(undefined8 *)(*plVar8 + 0x5f0);
      (**(code **)(*plVar8 + 0x5e8))(plVar8,param_3);
      plVar8 = (long *)plVar11[3];
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x2c8))(plVar8,param_4,*(undefined8 *)(*plVar8 + 0x2d0));
        return plVar7;
      }
    }
  }
  func_0x00f78af4();
LAB_01641360:
  auVar27 = func_0x00f78e5c(plVar11);
  uVar15 = auVar27._8_8_;
  uVar19 = auVar27._0_8_;
  puVar21 = &uStack_100;
  puStack_78 = &Core_DebugMenu_DebugMenu__AddDropdown;
  uVar24 = param_5;
  uVar25 = param_6;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5711 & 1) == 0) {
    func_0x00f78a20(0x3d548e8);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6be98);
    bRam0000000003eb5711 = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  uVar18 = 1;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar19,uVar15);
  if (iVar6 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_f0 == 0) {
    func_0x00f78af4();
    puVar26 = &Core_DebugMenu_DebugMenu__ConfigureDropdown;
    auVar28 = func_0x00f78e5c();
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_f0,0);
    auVar28 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_08,
                                               CONCAT12(extraout_var_04,
                                                        CONCAT11(extraout_var_00,extraout_b0_00))) +
                               -6.0,0),0x42480000,
                         CONCAT13(extraout_var_07,
                                  CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0))),
                         uVar19,6,/*STR('Dropdown')*/ uRam0000000003d6be98,param_7);
    param_7 = auVar28._0_8_;
    uVar9 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar19,6,uVar15,param_7,auVar28._8_8_,param_6,uRam0000000003d548e8);
    auVar28._8_8_ = uVar9;
    auVar28._0_8_ = uVar19;
    puVar26 = &UNK_0164148c;
    uVar18 = uVar17;
    puVar21 = puVar20;
    uVar24 = param_5;
    uVar25 = param_6;
    param_6 = uVar9;
  }
  puVar23 = &uStack_180;
  uStack_150 = 0x3eb5000;
  uVar9 = uVar18;
  puVar22 = (undefined1 *)puVar21;
  uVar14 = uVar24;
  uStack_148 = param_7;
  uStack_138 = param_6;
  uStack_128 = uVar17;
  puStack_120 = (undefined1 *)puVar20;
  uStack_118 = param_5;
  ppuStack_110 = &puStack_80;
  puStack_108 = puVar26;
  if ((bRam0000000003eb571b & 1) == 0) {
    uStack_140 = uVar15;
    uStack_130 = uVar19;
    func_0x00f78a20(0x3d535b8);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d62a38);
    func_0x00f78a20(0x3d27098);
    func_0x00f78a20(0x3d415a0);
    func_0x00f78a20(0x3d1eb00);
    func_0x00f78a20(0x3d416e0);
    auVar27._8_8_ = uStack_140;
    auVar27._0_8_ = uStack_130;
    bRam0000000003eb571b = 1;
  }
  uStack_140 = auVar27._8_8_;
  uStack_130 = auVar27._0_8_;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  lStack_170 = 0;
  lVar10 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass82_0_TypeInfo*/ uRam0000000003d27098);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = uVar24;
    *(int *)(lVar10 + 0x18) = auVar28._8_4_;
    uVar9 = 6;
    plVar11 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar28._0_8_,auVar28._8_8_);
    if ((int)plVar11 == 0) {
      return plVar11;
    }
    puVar22 = (undefined1 *)puVar23;
    if ((lStack_170 != 0) &&
       (lVar12 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_170,uRam0000000003d535b8), puVar22 = (undefined1 *)puVar23,
       puVar21 != (undefined8 *)0x0)) {
      if (*(uint *)((long)puVar21 + 0x18) <= (uint)uVar18) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        puVar22 = (undefined1 *)puVar23;
      }
      if ((lVar12 != 0) && (plVar7 = *(long **)(lVar12 + 0x20), plVar7 != (long *)0x0)) {
        uVar9 = *(undefined8 *)(*plVar7 + 0x5f0);
        (**(code **)(*plVar7 + 0x5e8))
                  (plVar7,*(undefined8 *)
                           (*(long *)((long)puVar21 + 0x10) + (long)(int)(uint)uVar18 * 8 + 0x20));
        /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_Options*/ func_0x01642194(lVar12,puVar21);
        /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_TemplateItemHeight*/ func_0x016421dc(0,lVar12);
        if (*(long *)(lVar12 + 0x18) != 0) {
          uVar9 = 0;
          /*UnityEngine.UI.Dropdown$$set_value*/ func_0x032b4c50(*(long *)(lVar12 + 0x18),uVar18);
          if ((*(long *)(lVar12 + 0x18) != 0) &&
             (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x130), lVar13 != 0)) {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar13,0);
            if (*(long *)(lVar10 + 0x10) == 0) {
              return plVar11;
            }
            if (*(long *)(lVar12 + 0x18) != 0) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0x18) + 0x130);
              uVar17 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int>_TypeInfo*/ uRam0000000003d1eb00);
              uVar9 = uRam0000000003d62a38;
              puVar22 = puRam0000000003d415a0;
              /*UnityEngine.Events.UnityAction<int>$$.ctor*/ func_0x01b7e498(uVar17,lVar10);
              if (lVar12 != 0) {
                /*UnityEngine.Events.UnityEvent<int>$$AddListener*/ func_0x01b8370c(lVar12,uVar17,uRam0000000003d416e0);
                return plVar11;
              }
            }
          }
        }
      }
    }
  }
  auVar29 = func_0x00f78af4();
  uVar24 = auVar29._8_8_;
  uVar17 = auVar29._0_8_;
  puVar20 = &uStack_210;
  puStack_188 = &Core_DebugMenu_DebugMenu__AddToggle;
  pppuStack_190 = &ppuStack_110;
  if ((bRam0000000003eb5712 & 1) == 0) {
    func_0x00f78a20(0x3d54908);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d74e90);
    bRam0000000003eb5712 = 1;
  }
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  lStack_200 = 0;
  uVar19 = 1;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar17,uVar24);
  if (iVar6 != 0) {
    if (lStack_200 == 0) {
      func_0x00f78af4();
      puVar26 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
      auVar30 = func_0x00f78e5c();
    }
    else {
      /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_200,0);
      auVar27 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                          (SUB41((float)CONCAT13(extraout_var_10,
                                                 CONCAT12(extraout_var_06,
                                                          CONCAT11(extraout_var_02,extraout_b0_02)))
                                 + -6.0,0),0x42480000,
                           CONCAT13(extraout_var_09,
                                    CONCAT12(extraout_var_05,
                                             CONCAT11(extraout_var_01,extraout_b0_01))),uVar17,7,
                           /*STR('Toggle')*/ uRam0000000003d74e90,uVar25);
      uVar25 = auVar27._0_8_;
      uVar14 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar17,7,uVar24,uVar25,auVar27._8_8_,uVar14,uRam0000000003d54908);
      auVar30._8_8_ = uVar14;
      auVar30._0_8_ = uVar17;
      puVar26 = &UNK_01641834;
      uVar19 = uVar9;
      puVar20 = (undefined8 *)puVar22;
    }
    uVar15 = auVar30._0_8_;
    uStack_250 = uVar25;
    uStack_240 = uVar14;
    uStack_230 = uVar9;
    puStack_228 = puVar22;
    ppppuStack_220 = &pppuStack_190;
    puStack_218 = puVar26;
    if ((bRam0000000003eb571d & 1) == 0) {
      uStack_248 = uVar24;
      uStack_238 = uVar17;
      func_0x00f78a20(0x3d535d0);
      func_0x00f78a20(0x3d62a40);
      func_0x00f78a20(0x3d270a0);
      func_0x00f78a20(0x3d41568);
      func_0x00f78a20(0x3d1ead0);
      func_0x00f78a20(0x3d41668);
      auVar29._8_8_ = uStack_248;
      auVar29._0_8_ = uStack_238;
      bRam0000000003eb571d = 1;
    }
    uStack_248 = auVar29._8_8_;
    uStack_238 = auVar29._0_8_;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    lStack_270 = 0;
    lVar10 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    if (lVar10 != 0) {
      *(undefined8 **)(lVar10 + 0x10) = puVar20;
      *(int *)(lVar10 + 0x18) = auVar30._8_4_;
      plVar11 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy
                                  (uVar15,auVar30._8_8_,7,&uStack_280);
      auVar1._8_8_ = plVar11;
      auVar1._0_8_ = uVar15;
      auVar30._8_8_ = plVar11;
      auVar30._0_8_ = uVar15;
      if ((int)plVar11 == 0) {
        return plVar11;
      }
      if (lStack_270 != 0) {
        lVar12 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_270,uRam0000000003d535d0);
        auVar5._8_8_ = plVar11;
        auVar5._0_8_ = lVar12;
        auVar4._8_8_ = plVar11;
        auVar4._0_8_ = lVar12;
        auVar3._8_8_ = plVar11;
        auVar3._0_8_ = lVar12;
        auVar2._8_8_ = plVar11;
        auVar2._0_8_ = lVar12;
        auVar30 = auVar1;
        if ((lVar12 != 0) && (auVar30 = auVar2, *(long *)(lVar12 + 0x18) != 0)) {
          /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar12 + 0x18),uVar19,0);
          auVar30 = auVar3;
          if ((*(long *)(lVar12 + 0x18) != 0) &&
             (lVar13 = *(long *)(*(long *)(lVar12 + 0x18) + 0x110), auVar30 = auVar4, lVar13 != 0))
          {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar13,0);
            if (*(long *)(lVar10 + 0x10) == 0) {
              return plVar11;
            }
            auVar30 = auVar5;
            if (*(long *)(lVar12 + 0x18) != 0) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0x18) + 0x110);
              uVar17 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
              auVar30._0_8_ = uVar17;
              /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar17,lVar10,uRam0000000003d62a40,uRam0000000003d41568);
              uVar19 = 0;
              if (lVar12 != 0) {
                /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar12,uVar17,uRam0000000003d41668);
                return plVar11;
              }
            }
          }
        }
      }
    }
    auVar27 = func_0x00f78af4();
    puStack_288 = &Core_DebugMenu_DebugMenu__GetButton;
    lStack_2a0 = lVar10;
    uStack_298 = uVar19;
    pppppuStack_290 = &ppppuStack_220;
    auStack_2b0 = auVar30;
    if ((bRam0000000003eb5713 & 1) == 0) {
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5713 = 1;
    }
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    plStack_2c8 = (long *)0x0;
    uStack_2d0 = 0;
    uVar16 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar27._0_8_,auVar27._8_8_,2,&uStack_2e0);
    if ((uVar16 & 1) == 0) {
      iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar27._0_8_,auVar27._8_8_,3,&uStack_2e0)
      ;
      if (iVar6 == 0) {
        return (long *)0x0;
      }
    }
    if (plStack_2c8 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_2c8 + 300)) &&
         (*(long *)(*(long *)(*plStack_2c8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        return plStack_2c8;
      }
      func_0x00f78e5c();
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x1641368 | Core.DebugMenu.DebugMenu.AddDropdown
// ============================================================

/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */

long * Core_DebugMenu_DebugMenu__AddDropdown
                 (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  undefined1 auStack_240 [16];
  long lStack_230;
  undefined8 uStack_228;
  undefined1 ****ppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar19 = &uStack_90;
  uVar13 = param_6;
  uVar22 = param_7;
  if ((bRam0000000003eb5711 & 1) == 0) {
    func_0x00f78a20(0x3d548e8);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d6be98);
    bRam0000000003eb5711 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uVar16 = 1;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_2,param_3);
  if (iVar6 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_80 == 0) {
    func_0x00f78af4();
    puVar23 = &Core_DebugMenu_DebugMenu__ConfigureDropdown;
    auVar24 = func_0x00f78e5c();
    uVar7 = auVar24._8_8_;
    uVar18 = auVar24._0_8_;
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_80,0);
    auVar24 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_05,
                                               CONCAT12(extraout_var_02,
                                                        CONCAT11(extraout_var,extraout_b0))) + -6.0,
                               0),0x42480000,param_1,param_2,6,/*STR('Dropdown')*/ uRam0000000003d6be98,param_8);
    param_8 = auVar24._0_8_;
    uVar7 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(param_2,6,param_3,param_8,auVar24._8_8_,param_7,uRam0000000003d548e8);
    puVar23 = (undefined *)0x164148c;
    uVar18 = param_2;
    uVar16 = param_4;
    puVar19 = (undefined8 *)param_5;
    uVar13 = param_6;
    uVar22 = param_7;
    param_7 = uVar7;
  }
  puVar21 = &uStack_110;
  uStack_e0 = 0x3eb5000;
  uVar17 = uVar16;
  puVar20 = (undefined1 *)puVar19;
  uVar14 = uVar13;
  uStack_d8 = param_8;
  uStack_d0 = param_3;
  uStack_c8 = param_7;
  uStack_c0 = param_2;
  uStack_b8 = param_4;
  puStack_b0 = param_5;
  uStack_a8 = param_6;
  puStack_a0 = &stack0xfffffffffffffff0;
  puStack_98 = puVar23;
  if ((bRam0000000003eb571b & 1) == 0) {
    func_0x00f78a20(0x3d535b8);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d62a38);
    func_0x00f78a20(0x3d27098);
    func_0x00f78a20(0x3d415a0);
    func_0x00f78a20(0x3d1eb00);
    func_0x00f78a20(0x3d416e0);
    bRam0000000003eb571b = 1;
  }
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  lVar8 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass82_0_TypeInfo*/ uRam0000000003d27098);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = uVar13;
    *(int *)(lVar8 + 0x18) = (int)uVar7;
    uVar17 = 6;
    plVar9 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar18,uVar7);
    if ((int)plVar9 == 0) {
      return plVar9;
    }
    puVar20 = (undefined1 *)puVar21;
    if ((lStack_100 != 0) &&
       (lVar10 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_100,uRam0000000003d535b8), puVar20 = (undefined1 *)puVar21,
       puVar19 != (undefined8 *)0x0)) {
      if (*(uint *)((long)puVar19 + 0x18) <= (uint)uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        puVar20 = (undefined1 *)puVar21;
      }
      if ((lVar10 != 0) && (plVar11 = *(long **)(lVar10 + 0x20), plVar11 != (long *)0x0)) {
        uVar17 = *(undefined8 *)(*plVar11 + 0x5f0);
        (**(code **)(*plVar11 + 0x5e8))
                  (plVar11,*(undefined8 *)
                            (*(long *)((long)puVar19 + 0x10) + (long)(int)(uint)uVar16 * 8 + 0x20));
        /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_Options*/ func_0x01642194(lVar10,puVar19);
        /*Core.DebugMenu.DebugUIDropdownBehaviour$$set_TemplateItemHeight*/ func_0x016421dc(0,lVar10);
        if (*(long *)(lVar10 + 0x18) != 0) {
          uVar17 = 0;
          /*UnityEngine.UI.Dropdown$$set_value*/ func_0x032b4c50(*(long *)(lVar10 + 0x18),uVar16);
          if ((*(long *)(lVar10 + 0x18) != 0) &&
             (lVar12 = *(long *)(*(long *)(lVar10 + 0x18) + 0x130), lVar12 != 0)) {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar12,0);
            if (*(long *)(lVar8 + 0x10) == 0) {
              return plVar9;
            }
            if (*(long *)(lVar10 + 0x18) != 0) {
              lVar10 = *(long *)(*(long *)(lVar10 + 0x18) + 0x130);
              uVar13 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int>_TypeInfo*/ uRam0000000003d1eb00);
              uVar17 = uRam0000000003d62a38;
              puVar20 = puRam0000000003d415a0;
              /*UnityEngine.Events.UnityAction<int>$$.ctor*/ func_0x01b7e498(uVar13,lVar8);
              if (lVar10 != 0) {
                /*UnityEngine.Events.UnityEvent<int>$$AddListener*/ func_0x01b8370c(lVar10,uVar13,uRam0000000003d416e0);
                return plVar9;
              }
            }
          }
        }
      }
    }
  }
  auVar24 = func_0x00f78af4();
  uVar16 = auVar24._8_8_;
  uVar13 = auVar24._0_8_;
  puVar19 = &uStack_1a0;
  puStack_118 = &Core_DebugMenu_DebugMenu__AddToggle;
  ppuStack_120 = &puStack_a0;
  if ((bRam0000000003eb5712 & 1) == 0) {
    func_0x00f78a20(0x3d54908);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d74e90);
    bRam0000000003eb5712 = 1;
  }
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  uVar18 = 1;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar13,uVar16);
  if (iVar6 != 0) {
    if (lStack_190 == 0) {
      func_0x00f78af4();
      puVar23 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
      auVar25 = func_0x00f78e5c();
    }
    else {
      /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_190,0);
      auVar25 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                          (SUB41((float)CONCAT13(extraout_var_07,
                                                 CONCAT12(extraout_var_04,
                                                          CONCAT11(extraout_var_01,extraout_b0_01)))
                                 + -6.0,0),0x42480000,
                           CONCAT13(extraout_var_06,
                                    CONCAT12(extraout_var_03,
                                             CONCAT11(extraout_var_00,extraout_b0_00))),uVar13,7,
                           /*STR('Toggle')*/ uRam0000000003d74e90,uVar22);
      uVar22 = auVar25._0_8_;
      uVar14 = /*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(uVar13,7,uVar16,uVar22,auVar25._8_8_,uVar14,uRam0000000003d54908);
      auVar25._8_8_ = uVar14;
      auVar25._0_8_ = uVar13;
      puVar23 = &UNK_01641834;
      uVar18 = uVar17;
      puVar19 = (undefined8 *)puVar20;
    }
    uVar7 = auVar25._0_8_;
    uStack_1e0 = uVar22;
    uStack_1d0 = uVar14;
    uStack_1c0 = uVar17;
    puStack_1b8 = puVar20;
    pppuStack_1b0 = &ppuStack_120;
    puStack_1a8 = puVar23;
    if ((bRam0000000003eb571d & 1) == 0) {
      uStack_1d8 = uVar16;
      uStack_1c8 = uVar13;
      func_0x00f78a20(0x3d535d0);
      func_0x00f78a20(0x3d62a40);
      func_0x00f78a20(0x3d270a0);
      func_0x00f78a20(0x3d41568);
      func_0x00f78a20(0x3d1ead0);
      func_0x00f78a20(0x3d41668);
      auVar24._8_8_ = uStack_1d8;
      auVar24._0_8_ = uStack_1c8;
      bRam0000000003eb571d = 1;
    }
    uStack_1d8 = auVar24._8_8_;
    uStack_1c8 = auVar24._0_8_;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    lStack_200 = 0;
    lVar8 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
    if (lVar8 != 0) {
      *(undefined8 **)(lVar8 + 0x10) = puVar19;
      *(int *)(lVar8 + 0x18) = auVar25._8_4_;
      plVar9 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy
                                 (uVar7,auVar25._8_8_,7,&uStack_210);
      auVar1._8_8_ = plVar9;
      auVar1._0_8_ = uVar7;
      auVar25._8_8_ = plVar9;
      auVar25._0_8_ = uVar7;
      if ((int)plVar9 == 0) {
        return plVar9;
      }
      if (lStack_200 != 0) {
        lVar10 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_200,uRam0000000003d535d0);
        auVar5._8_8_ = plVar9;
        auVar5._0_8_ = lVar10;
        auVar4._8_8_ = plVar9;
        auVar4._0_8_ = lVar10;
        auVar3._8_8_ = plVar9;
        auVar3._0_8_ = lVar10;
        auVar2._8_8_ = plVar9;
        auVar2._0_8_ = lVar10;
        auVar25 = auVar1;
        if ((lVar10 != 0) && (auVar25 = auVar2, *(long *)(lVar10 + 0x18) != 0)) {
          /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar10 + 0x18),uVar18,0);
          auVar25 = auVar3;
          if ((*(long *)(lVar10 + 0x18) != 0) &&
             (lVar12 = *(long *)(*(long *)(lVar10 + 0x18) + 0x110), auVar25 = auVar4, lVar12 != 0))
          {
            /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar12,0);
            if (*(long *)(lVar8 + 0x10) == 0) {
              return plVar9;
            }
            auVar25 = auVar5;
            if (*(long *)(lVar10 + 0x18) != 0) {
              lVar10 = *(long *)(*(long *)(lVar10 + 0x18) + 0x110);
              uVar13 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
              auVar25._0_8_ = uVar13;
              /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar13,lVar8,uRam0000000003d62a40,uRam0000000003d41568);
              uVar18 = 0;
              if (lVar10 != 0) {
                /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar10,uVar13,uRam0000000003d41668);
                return plVar9;
              }
            }
          }
        }
      }
    }
    auVar24 = func_0x00f78af4();
    puStack_218 = &Core_DebugMenu_DebugMenu__GetButton;
    lStack_230 = lVar8;
    uStack_228 = uVar18;
    ppppuStack_220 = &pppuStack_1b0;
    auStack_240 = auVar25;
    if ((bRam0000000003eb5713 & 1) == 0) {
      func_0x00f78a20(0x3d21140);
      bRam0000000003eb5713 = 1;
    }
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    plStack_258 = (long *)0x0;
    uStack_260 = 0;
    uVar15 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar24._0_8_,auVar24._8_8_,2,&uStack_270);
    if ((uVar15 & 1) == 0) {
      iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar24._0_8_,auVar24._8_8_,3,&uStack_270)
      ;
      if (iVar6 == 0) {
        return (long *)0x0;
      }
    }
    if (plStack_258 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_258 + 300)) &&
         (*(long *)(*(long *)(*plStack_258 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        return plStack_258;
      }
      func_0x00f78e5c();
      return (long *)0x0;
    }
    return (long *)0x0;
  }
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x1641504 | Core.DebugMenu.DebugMenu.ConfigureDropdown
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1641718 | Core.DebugMenu.DebugMenu.AddToggle
// ============================================================

/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */

long * Core_DebugMenu_DebugMenu__AddToggle
                 (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5,long *param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 auVar11 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar9 = &uStack_90;
  if ((bRam0000000003eb5712 & 1) == 0) {
    func_0x00f78a20(0x3d54908);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d74e90);
    bRam0000000003eb5712 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uVar8 = 1;
  iVar1 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_2,param_3);
  if (iVar1 == 0) {
    return (long *)0xffffffff;
  }
  if (lStack_80 == 0) {
    func_0x00f78af4();
    puVar10 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
    auVar11 = func_0x00f78e5c();
    plVar2 = auVar11._8_8_;
    lVar6 = auVar11._0_8_;
  }
  else {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lStack_80,0);
    auVar11 = Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel
                        (SUB41((float)CONCAT13(extraout_var_01,
                                               CONCAT12(extraout_var_00,
                                                        CONCAT11(extraout_var,extraout_b0))) + -6.0,
                               0),0x42480000,param_1,param_2,7,/*STR('Toggle')*/ uRam0000000003d74e90,param_7);
    param_7 = auVar11._0_8_;
    plVar2 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(param_2,7,param_3,param_7,auVar11._8_8_,param_6,
                                     uRam0000000003d54908);
    puVar10 = (undefined *)0x1641834;
    lVar6 = param_2;
    uVar8 = param_4;
    puVar9 = (undefined8 *)param_5;
    param_6 = plVar2;
  }
  uStack_d0 = param_7;
  uStack_c8 = param_3;
  plStack_c0 = param_6;
  lStack_b8 = param_2;
  uStack_b0 = param_4;
  puStack_a8 = param_5;
  puStack_a0 = &stack0xfffffffffffffff0;
  puStack_98 = puVar10;
  if ((bRam0000000003eb571d & 1) == 0) {
    func_0x00f78a20(0x3d535d0);
    func_0x00f78a20(0x3d62a40);
    func_0x00f78a20(0x3d270a0);
    func_0x00f78a20(0x3d41568);
    func_0x00f78a20(0x3d1ead0);
    func_0x00f78a20(0x3d41668);
    bRam0000000003eb571d = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  lVar3 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 0x10) = puVar9;
    *(int *)(lVar3 + 0x18) = (int)plVar2;
    plVar2 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,plVar2,7,&uStack_100);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    if (((lStack_f0 != 0) && (lVar4 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_f0,uRam0000000003d535d0), lVar4 != 0))
       && (lVar6 = lVar4, *(long *)(lVar4 + 0x18) != 0)) {
      /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar4 + 0x18),uVar8,0);
      if ((*(long *)(lVar4 + 0x18) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar4 + 0x18) + 0x110), lVar5 != 0)) {
        /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar5,0);
        if (*(long *)(lVar3 + 0x10) == 0) {
          return plVar2;
        }
        if (*(long *)(lVar4 + 0x18) != 0) {
          lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0x110);
          lVar6 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
          /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(lVar6,lVar3,uRam0000000003d62a40,uRam0000000003d41568);
          uVar8 = 0;
          if (lVar4 != 0) {
            /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar4,lVar6,uRam0000000003d41668);
            return plVar2;
          }
        }
      }
    }
  }
  auVar11 = func_0x00f78af4();
  puStack_108 = &Core_DebugMenu_DebugMenu__GetButton;
  lStack_130 = lVar6;
  plStack_128 = plVar2;
  lStack_120 = lVar3;
  uStack_118 = uVar8;
  ppuStack_110 = &puStack_a0;
  if ((bRam0000000003eb5713 & 1) == 0) {
    func_0x00f78a20(0x3d21140);
    bRam0000000003eb5713 = 1;
  }
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  plStack_148 = (long *)0x0;
  uStack_150 = 0;
  uVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar11._0_8_,auVar11._8_8_,2,&uStack_160);
  if (((uVar7 & 1) != 0) ||
     (iVar1 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar11._0_8_,auVar11._8_8_,3,&uStack_160)
     , iVar1 != 0)) {
    if (plStack_148 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_148 + 300)) &&
       (*(long *)(*(long *)(*plStack_148 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
      return plStack_148;
    }
    func_0x00f78e5c();
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x16418ac | Core.DebugMenu.DebugMenu.ConfigureToggle
// ============================================================

long * Core_DebugMenu_DebugMenu__ConfigureToggle
                 (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb571d & 1) == 0) {
    func_0x00f78a20(0x3d535d0);
    func_0x00f78a20(0x3d62a40);
    func_0x00f78a20(0x3d270a0);
    func_0x00f78a20(0x3d41568);
    func_0x00f78a20(0x3d1ead0);
    func_0x00f78a20(0x3d41668);
    bRam0000000003eb571d = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  lVar2 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_4;
    *(int *)(lVar2 + 0x18) = (int)param_2;
    param_2 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,7,&uStack_70);
    if ((int)param_2 == 0) {
      return param_2;
    }
    if (((lStack_60 != 0) && (lVar3 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_60,uRam0000000003d535d0), lVar3 != 0))
       && (param_1 = lVar3, *(long *)(lVar3 + 0x18) != 0)) {
      /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar3 + 0x18),param_3,0);
      if ((*(long *)(lVar3 + 0x18) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x18) + 0x110), lVar4 != 0)) {
        /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar4,0);
        if (*(long *)(lVar2 + 0x10) == 0) {
          return param_2;
        }
        if (*(long *)(lVar3 + 0x18) != 0) {
          lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0x110);
          param_1 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
          /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(param_1,lVar2,uRam0000000003d62a40,uRam0000000003d41568);
          param_3 = 0;
          if (lVar3 != 0) {
            /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar3,param_1,uRam0000000003d41668);
            return param_2;
          }
        }
      }
    }
  }
  auVar6 = func_0x00f78af4();
  puStack_78 = &Core_DebugMenu_DebugMenu__GetButton;
  lStack_a0 = param_1;
  plStack_98 = param_2;
  lStack_90 = lVar2;
  uStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5713 & 1) == 0) {
    func_0x00f78a20(0x3d21140);
    bRam0000000003eb5713 = 1;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  uVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar6._0_8_,auVar6._8_8_,2,&uStack_d0);
  if (((uVar5 & 1) != 0) ||
     (iVar1 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar6._0_8_,auVar6._8_8_,3,&uStack_d0),
     iVar1 != 0)) {
    if (plStack_b8 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_b8 + 300)) &&
       (*(long *)(*(long *)(*plStack_b8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
      return plStack_b8;
    }
    func_0x00f78e5c();
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x1641a50 | Core.DebugMenu.DebugMenu.GetButton
// ============================================================

long * Core_DebugMenu_DebugMenu__GetButton(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb5713 & 1) == 0) {
    func_0x00f78a20(0x3d21140);
    bRam0000000003eb5713 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_48 = (long *)0x0;
  uStack_50 = 0;
  uVar2 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,2,&uStack_60);
  if (((uVar2 & 1) != 0) ||
     (iVar1 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,3,&uStack_60), iVar1 != 0)
     ) {
    if (plStack_48 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_48 + 300)) &&
       (*(long *)(*(long *)(*plStack_48 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
      return plStack_48;
    }
    func_0x00f78e5c();
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x1641bf4 | Core.DebugMenu.DebugMenu.ConfigureButton
// ============================================================

undefined8
Core_DebugMenu_DebugMenu__ConfigureButton
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5715 & 1) == 0) {
    func_0x00f78a20(0x3d21140);
    bRam0000000003eb5715 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plStack_58 = (long *)0x0;
  uStack_60 = 0;
  uVar5 = 2;
  uVar2 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,2,&uStack_70);
  if ((uVar2 & 1) == 0) {
    uVar5 = 3;
    uVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,3,&uStack_70);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    if ((*(byte *)(*plStack_58 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300)) ||
       (*(long *)(*(long *)(*plStack_58 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
      func_0x00f78e5c(plStack_58);
    }
    else {
      /*Core.DebugMenu.DebugUIButtonBehaviour$$set_Text*/ func_0x01641b28(plStack_58,param_3);
      lVar4 = plVar1[3];
      if (lVar4 != 0) {
        /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar4,param_4,0);
        return 1;
      }
    }
  }
  auVar6 = func_0x00f78af4();
  plStack_98 = plVar1;
  puStack_78 = &Core_DebugMenu_DebugMenu__SetButtonInteractable;
  uStack_a0 = param_1;
  uStack_90 = param_3;
  uStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5716 & 1) == 0) {
    func_0x00f78a20(0x3d21140);
    bRam0000000003eb5716 = 1;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_c0 = 0;
  uVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar6._0_8_,auVar6._8_8_,2,&uStack_d0);
  if ((int)uVar3 != 0) {
    if (plStack_b8 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_b8 + 300)) &&
         (*(long *)(*(long *)(*plStack_b8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        if (plStack_b8[3] != 0) {
          /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(plStack_b8[3],uVar5,0);
          return 1;
        }
        uVar5 = func_0x00f78af4();
        return uVar5;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1641cfc | Core.DebugMenu.DebugMenu.SetButtonInteractable
// ============================================================

undefined8
Core_DebugMenu_DebugMenu__SetButtonInteractable
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb5716 & 1) == 0) {
    func_0x00f78a20(0x3d21140);
    bRam0000000003eb5716 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_48 = (long *)0x0;
  uStack_50 = 0;
  uVar1 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,2,&uStack_60);
  if ((int)uVar1 != 0) {
    if (plStack_48 != (long *)0x0) {
      if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plStack_48 + 300)) &&
         (*(long *)(*(long *)(*plStack_48 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
        if (plStack_48[3] != 0) {
          /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(plStack_48[3],param_3,0);
          return 1;
        }
        uVar1 = func_0x00f78af4();
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1641f50 | Core.DebugMenu.DebugMenu.ConfigureSlider
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1642088 | Core.DebugMenu.DebugMenu.SetDropdownIndex
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

long Core_DebugMenu_DebugMenu__SetDropdownIndex
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar15;
  long *plVar16;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar17;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar18;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar19 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar4 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb571a & 1) == 0) {
    func_0x00f78a20(0x3d535b8);
    bRam0000000003eb571a = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  lVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,6,&uStack_60);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  if (((lStack_50 == 0) || (lVar6 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_50,uRam0000000003d535b8), lVar6 == 0)) ||
     (lVar6 = *(long *)(lVar6 + 0x18), uVar15 = param_3, lVar6 == 0)) {
    auVar19 = func_0x00f78af4();
    lVar6 = *(long *)(auVar19._0_8_ + 0x18);
    if (lVar6 == 0) {
      lVar6 = func_0x00f78af4();
      return lVar6;
    }
    unaff_x30 = &Core_DebugMenu_DebugUIDropdownBehaviour__SetIndex;
    register0x00000008 = (BADSPACEBASE *)&uStack_60;
    uVar15 = auVar19._8_8_;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    unaff_x22 = 0x3eb5000;
    unaff_x29 = puVar4;
  }
  auVar3._8_8_ = unaff_x21;
  auVar3._0_8_ = unaff_x19;
  auVar19._8_8_ = uVar15;
  auVar19._0_8_ = lVar6;
  puVar4 = (undefined1 *)register0x00000008;
  uVar15 = 1;
  do {
    auVar2 = auVar19;
    uVar11 = uVar15;
    lVar6 = auVar2._0_8_;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = auVar3._8_8_;
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(long *)(puVar4 + -0x18) = auVar3._0_8_;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    unaff_x29 = puVar4 + -0x10;
    unaff_x22 = 0x3ec2000;
    if ((bRam0000000003ec2c21 & 1) == 0) {
      func_0x00f78a20(0x3d3d148);
      func_0x00f78a20(0x3d416e8);
      func_0x00f78a20(0x3d6bea8);
      bRam0000000003ec2c21 = 1;
    }
    lVar10 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if ((int)lVar10 == 0) {
      lVar13 = *(long *)(lVar6 + 0x128);
      if (lVar13 != 0) goto code_r0x032b4ce8;
    }
    else {
      if (*(int *)(lVar6 + 0x120) == auVar2._8_4_) {
        return lVar10;
      }
      lVar13 = *(long *)(lVar6 + 0x128);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
        if (*(int *)(*(long *)(lVar13 + 0x10) + 0x18) == 0) {
          return lVar10;
        }
code_r0x032b4ce8:
        if (*(long *)(lVar13 + 0x10) != 0) {
          uVar5 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(auVar2._8_8_,0,*(int *)(*(long *)(lVar13 + 0x10) + 0x18) + -1,0);
          *(undefined4 *)(lVar6 + 0x120) = uVar5;
          lVar10 = /*UnityEngine.UI.Dropdown$$RefreshShownValue*/ func_0x032b4154(lVar6);
          if ((int)uVar11 == 0) {
            return lVar10;
          }
          /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('Dropdown.value')*/ uRam0000000003d6bea8,lVar6,0);
          lVar10 = lRam0000000003d416e8;
          lVar13 = *(long *)(lVar6 + 0x130);
          if (lVar13 != 0) break;
        }
      }
    }
    unaff_x30 = &UnityEngine_UI_Dropdown__SetValueWithoutNotify;
    auVar19 = func_0x00f78af4();
    puVar4 = puVar4 + -0x30;
    uVar15 = 0;
    unaff_x20 = uVar11;
    auVar3 = auVar2;
  } while( true );
  uVar1 = *(uint *)(lVar6 + 0x120);
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  if ((bRam0000000003eb6c46 & 1) == 0) {
    func_0x00f78a20(0x3d22a90);
    func_0x00f78a20(0x3d39e50);
    func_0x00f78a20(0x3d39e58);
    func_0x00f78a20(0x3d1f218);
    bRam0000000003eb6c46 = 1;
  }
  lVar6 = 0x3eb6000;
  if ((lVar13 == 0) || (lVar7 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar13,0), lVar7 == 0)) {
code_r0x01b83be4:
    func_0x00f78af4();
code_r0x01b83be8:
    uVar15 = func_0x00f78b24();
    lVar7 = lVar6;
code_r0x01b83bf4:
    lVar6 = func_0x00f78ac0(uVar15,0);
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(long *)(puVar4 + -0xa0) = lVar7;
    *(long *)(puVar4 + -0x98) = lVar13;
    *(ulong *)(puVar4 + -0x90) = (ulong)uVar1;
    *(long *)(puVar4 + -0x88) = lVar10;
    *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x78) =
         &UnityEngine_Events_UnityEvent_TouchScreenKeyboard_Status____ctor;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(lVar6 + 0x20) = 1;
    return lVar6;
  }
  uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
  lVar6 = lVar7;
  if (0 < (int)*(uint *)(lVar7 + 0x18)) {
    lVar18 = 4;
    do {
      uVar17 = lVar18 - 4;
      if ((uVar12 & 0xffffffff) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar18 * 8);
      lVar6 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
      }
      plVar8 = (long *)func_0x00f78adc(uVar15,lVar6);
      if (plVar8 == (long *)0x0) {
        if (*(uint *)(lVar7 + 0x18) <= uVar17) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar6 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar18 * 8),
                                /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
        if (lVar6 == 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar17) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar16 = *(long **)(*(long *)(lVar7 + 0x10) + lVar18 * 8);
          plVar8 = *(long **)(lVar13 + 0x28);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
            *(long **)(lVar13 + 0x28) = plVar8;
          }
          *(uint *)(puVar4 + -100) = uVar1;
          lVar6 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0x38);
          if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar6);
          }
          lVar14 = func_0x00f78ae0(lVar6,puVar4 + -100);
          lVar6 = lVar7;
          if (plVar8 == (long *)0x0) goto code_r0x01b83be4;
          if ((lVar14 != 0) &&
             (lVar9 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar15 = func_0x00f78b14();
            goto code_r0x01b83bf4;
          }
          if ((int)plVar8[3] == 0) goto code_r0x01b83be8;
          plVar8[4] = lVar14;
          if (plVar16 == (long *)0x0) goto code_r0x01b83be4;
          lVar6 = (**(code **)(*plVar16 + 0x178))
                            (plVar16,*(undefined8 *)(lVar13 + 0x28),
                             *(undefined8 *)(*plVar16 + 0x180));
        }
        else {
          lVar6 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar6,0);
        }
      }
      else {
        lVar6 = (**(code **)(*plVar8 + 0x198))(plVar8,(ulong)uVar1,*(undefined8 *)(*plVar8 + 0x1a0))
        ;
      }
      uVar12 = (ulong)*(int *)(lVar7 + 0x18);
      lVar14 = lVar18 + -3;
      lVar18 = lVar18 + 1;
    } while (lVar14 < (long)uVar12);
  }
  return lVar6;
}



// ============================================================
// RVA: 0x164224c | Core.DebugMenu.DebugMenu.ConfigureDropdown
// ============================================================

undefined8
Core_DebugMenu_DebugMenu__ConfigureDropdown
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb571c & 1) == 0) {
    func_0x00f78a20(0x3d535b8);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb571c = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  uVar1 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,6,&uStack_60);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (((lStack_50 != 0) && (lVar2 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_50,uRam0000000003d535b8), lVar2 != 0)) &&
     (lVar4 = *(long *)(lVar2 + 0x38), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= (uint)param_3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    plVar3 = *(long **)(lVar2 + 0x20);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5e8))
                (plVar3,*(undefined8 *)
                         (*(long *)(lVar4 + 0x10) + (long)(int)(uint)param_3 * 8 + 0x20),
                 *(undefined8 *)(*plVar3 + 0x5f0));
      if (*(long *)(lVar2 + 0x18) != 0) {
        /*UnityEngine.UI.Dropdown$$set_value*/ func_0x032b4c50(*(long *)(lVar2 + 0x18),param_3,0);
        return uVar1;
      }
    }
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x1642378 | Core.DebugMenu.DebugMenu.ConfigureToggle
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x164242c | Core.DebugMenu.DebugMenu.SyncSliderValue
// ============================================================

/* WARNING: Possible PIC construction at 0x0164292c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01642930) */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Core_DebugMenu_DebugMenu__SyncSliderValue
               (undefined1 param_1,uint param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long **pplVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  ulong uVar16;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 ***pppuVar24;
  undefined1 *puVar25;
  undefined *puVar26;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar27;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar28;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar29;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar30;
  float fVar31;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar14 = &uStack_70;
  if ((bRam0000000003eb571f & 1) == 0) {
    func_0x00f78a20(0x3d535c8);
    bRam0000000003eb571f = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uVar18 = 5;
  lVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_4,param_5);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  if ((lStack_60 != 0) && (lVar6 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_60,uRam0000000003d535c8), lVar6 != 0)) {
    plVar7 = *(long **)(lVar6 + 0x30);
    if (*(char *)(lVar6 + 0x38) == '\0') {
      if (plVar7 != (long *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x428))(param_1,plVar7,*(undefined8 *)(*plVar7 + 0x430));
        goto LAB_016424f4;
      }
    }
    else if (plVar7 != (long *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x418))(plVar7,*(undefined8 *)(*plVar7 + 0x420));
LAB_016424f4:
      *(undefined1 *)(lVar6 + 0x38) = 0;
      return lVar8;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_78 = &Core_DebugMenu_DebugUISliderBehaviour__set_Value;
  plVar7 = *(long **)(lVar6 + 0x30);
  puStack_80 = &stack0xfffffffffffffff0;
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01642538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (**(code **)(*plVar7 + 0x428))(plVar7,*(undefined8 *)(*plVar7 + 0x430));
    return lVar6;
  }
  auVar35 = func_0x00f78af4();
  plVar7 = auVar35._0_8_;
  puStack_88 = &Core_DebugMenu_DebugMenu__InstantiateComponentUIWithLabel;
  uVar32 = (ulong)param_2;
  fVar31 = (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  uVar33 = (ulong)(uint)fVar31;
  uVar15 = 0x3d6d868;
  puStack_90 = (undefined1 *)&puStack_80;
  if ((bRam0000000003eb5721 & 1) == 0) {
    puStack_90 = (undefined1 *)&puStack_80;
    func_0x00f78a20(0x3d53560);
    func_0x00f78a20(0x3d53748);
    func_0x00f78a20(0x3d53758);
    func_0x00f78a20(0x3d6f278);
    func_0x00f78a20(0x3d6d868);
    bRam0000000003eb5721 = 1;
  }
  lStack_100 = 0;
  uStack_f8 = 0;
  fVar31 = fVar31 + -15.0;
  fVar34 = fVar31 * param_3 * _UNK_033f7d80;
  lVar6 = Core_DebugMenu_DebugMenu__InstantiateUI
                    (SUB41(fVar31 * (100.0 - param_3) * _UNK_033f7d80,0),param_2,plVar7,
                     auVar35._8_8_,uVar18);
  uVar9 = /*System.String$$Concat*/ func_0x029bdb88(uVar18,/*STR('Label')*/ uRam0000000003d6f278,0);
  lVar8 = Core_DebugMenu_DebugMenu__InstantiateUI(SUB41(fVar34,0),param_2,plVar7,4,uVar9);
  uVar9 = /*System.String$$Concat*/ func_0x029bdb88(uVar18,/*STR('HorizontalLayout')*/ uRam0000000003d6d868,0);
  plVar10 = (long *)Core_DebugMenu_DebugMenu__InstantiateUI(extraout_b0,param_2,plVar7,8);
  if (lVar6 != 0) {
    uVar9 = uRam0000000003d53758;
    iVar5 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(lVar6,&uStack_f8);
    plVar7 = plVar10;
    if (iVar5 != 0) {
      if (plVar10 == (long *)0x0) goto code_r0x01642754;
      uVar9 = uRam0000000003d53748;
      iVar5 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(plVar10,&lStack_100);
      if (iVar5 != 0) {
        if (lStack_100 == 0) goto code_r0x01642754;
        *(undefined8 *)(lStack_100 + 0xf8) = uStack_f8;
      }
    }
    if ((lVar8 != 0) &&
       (plVar11 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar8,uRam0000000003d53560), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x5e8))(plVar11,puVar14,*(undefined8 *)(*plVar11 + 0x5f0));
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar8,plVar10,0,0);
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar6,plVar10,0,0);
      return (long)plVar10;
    }
  }
code_r0x01642754:
  func_0x00f78af4();
  auVar35._8_8_ = uVar9;
  auVar35._0_8_ = extraout_x1;
  puStack_108 = &Core_DebugMenu_DebugMenu__InstantiatePrefab;
  pppuVar24 = &ppuStack_110;
  plVar10 = (long *)0x3d23990;
  plStack_130 = plVar7;
  lStack_128 = lVar8;
  lStack_120 = lVar6;
  puStack_118 = (undefined1 *)puVar14;
  ppuStack_110 = &puStack_90;
  if ((bRam0000000003eb5722 & 1) == 0) {
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5722 = 1;
  }
  uVar21 = 0x3d5b098;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
  if (lVar6 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(lVar6,uVar9,0);
    return lVar6;
  }
  puVar26 = &Core_DebugMenu_DebugMenu__ShowPanel;
  auVar36 = func_0x00f78af4();
  pplVar3 = &plStack_130;
  uVar27 = extraout_b0_00;
  uVar28 = extraout_var_00;
  uVar29 = extraout_var_02;
  uVar30 = extraout_var_04;
code_r0x016427fc:
  while( true ) {
    plVar7 = auVar36._8_8_;
    lVar8 = auVar36._0_8_;
    *(ulong *)((long)pplVar3 + -0x40) = uVar33;
    *(ulong *)((long)pplVar3 + -0x38) = uVar32;
    *(ulong *)((long)pplVar3 + -0x30) = uVar21;
    *(long **)((long)pplVar3 + -0x28) = plVar10;
    *(undefined1 (*) [16])((long)pplVar3 + -0x20) = auVar35;
    *(undefined1 ****)((long)pplVar3 + -0x10) = pppuVar24;
    *(undefined **)((long)pplVar3 + -8) = puVar26;
    pppuVar24 = (undefined1 ***)((long)pplVar3 + -0x10);
    uVar32 = (ulong)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
    lVar6 = lVar8;
    if ((bRam0000000003eb5727 & 1) == 0) {
      func_0x00f78a20(0x3d535c0);
      func_0x00f78a20(0x3d3acd0);
      lVar6 = func_0x00f78a20(0x3d3acd8);
      bRam0000000003eb5727 = 1;
    }
    *(undefined8 *)((long)pplVar3 + -0x50) = 0;
    *(undefined8 *)((long)pplVar3 + -0x68) = 0;
    *(undefined8 *)((long)pplVar3 + -0x70) = 0;
    *(undefined8 *)((long)pplVar3 + -0x58) = 0;
    *(undefined8 *)((long)pplVar3 + -0x60) = 0;
    if (auVar36._8_4_ == -1) {
      return lVar6;
    }
    /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(uVar27,lVar6,*(undefined8 *)(lVar8 + 0x58),*(undefined8 *)(lVar8 + 0x50),plVar7)
    ;
    uVar19 = 1;
    lVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                      (lVar8,plVar7,1,(undefined1 *)((long)pplVar3 + -0x70));
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (*(long *)((long)pplVar3 + -0x60) == 0) break;
    plVar7 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)pplVar3 + -0x60),uRam0000000003d535c0);
    auVar35._8_8_ = lVar8;
    auVar35._0_8_ = plVar7;
    if (*(long *)(lVar8 + 0x78) == 0) {
      if (plVar7 != (long *)0x0) goto code_r0x016428ec;
      break;
    }
    if (plVar7 == (long *)0x0) break;
    uVar19 = 0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar7,1);
code_r0x016428ec:
    uVar21 = plVar7[0x10];
    if (uVar21 == 0) goto code_r0x01642940;
    plVar10 = (long *)0x0;
    if (*(int *)(uVar21 + 0x18) < 1) goto code_r0x01642940;
    if (*(int *)(uVar21 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    auVar36._8_4_ = *(undefined4 *)(*(long *)(uVar21 + 0x10) + 0x20);
    auVar36._0_8_ = lVar8;
    auVar36._12_4_ = 0;
    puVar26 = &UNK_01642930;
    pplVar3 = (long **)((long)pplVar3 + -0x70);
  }
  func_0x00f78af4();
code_r0x01642940:
  uVar21 = *(ulong *)((long)pplVar3 + -0x30);
  plVar10 = *(long **)((long)pplVar3 + -0x28);
  uVar33 = *(ulong *)((long)pplVar3 + -0x40);
  uVar32 = *(ulong *)((long)pplVar3 + -0x38);
  *(undefined8 *)((long)pplVar3 + -0x20) = *(undefined8 *)((long)pplVar3 + -0x20);
  *(undefined8 *)((long)pplVar3 + -0x18) = *(undefined8 *)((long)pplVar3 + -0x18);
  *(undefined8 *)((long)pplVar3 + -0x10) = *(undefined8 *)((long)pplVar3 + -0x10);
  *(undefined8 *)((long)pplVar3 + -8) = *(undefined8 *)((long)pplVar3 + -8);
  pppuVar24 = (undefined1 ***)((long)pplVar3 + -0x10);
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb5734 & 1) == 0) {
    func_0x00f78a20(0x3d535e8);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5734 = 1;
  }
  if (plVar7[8] != 0) {
    uVar9 = 0x3d23000;
    plVar7 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar7[8],uRam0000000003d535e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar7,0);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (plVar7 != (long *)0x0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar7,1,0);
      uVar19 = *(ulong *)(*plVar7 + 0x380);
      (**(code **)(*plVar7 + 0x378))(plVar7,0);
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      plVar11 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar7,0);
      uVar9 = 0;
      if (lVar6 != 0) {
        *(undefined8 *)((long)pplVar3 + -0x20) = *(undefined8 *)((long)pplVar3 + -0x20);
        *(undefined8 *)((long)pplVar3 + -0x18) = *(undefined8 *)((long)pplVar3 + -0x18);
        *(undefined8 *)((long)pplVar3 + -0x10) = *(undefined8 *)((long)pplVar3 + -0x10);
        *(undefined8 *)((long)pplVar3 + -8) = *(undefined8 *)((long)pplVar3 + -8);
        uVar9 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar6,plVar11,0);
        *(undefined8 *)((long)pplVar3 + -0x40) = uVar15;
        *(undefined8 *)((long)pplVar3 + -0x38) = uVar18;
        *(ulong *)((long)pplVar3 + -0x30) = uVar21;
        *(long **)((long)pplVar3 + -0x28) = plVar10;
        *(undefined8 *)((long)pplVar3 + -0x20) = *(undefined8 *)((long)pplVar3 + -0x20);
        *(undefined8 *)((long)pplVar3 + -0x18) = *(undefined8 *)((long)pplVar3 + -0x18);
        *(undefined8 *)((long)pplVar3 + -0x10) = *(undefined8 *)((long)pplVar3 + -0x10);
        *(undefined8 *)((long)pplVar3 + -8) = *(undefined8 *)((long)pplVar3 + -8);
        if ((bRam0000000003ec2c3f & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d560a8);
          func_0x00f78a20(0x3d560f0);
          func_0x00f78a20(0x3d21718);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d69450);
          func_0x00f78a20(0x3d7c748);
          bRam0000000003ec2c3f = 1;
        }
        uVar18 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
        if (*(char *)(lVar6 + 0x41) == '\0') {
          *(undefined1 *)(lVar6 + 0x41) = 1;
          uVar18 = *(undefined8 *)(lVar6 + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar11,uVar18,0);
          if ((int)lVar8 == 0) {
            uVar18 = *(undefined8 *)(lVar6 + 0x38);
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (cRam0000000003e85071 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85071 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar18,uVar9,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                            uRam0000000003d560a8);
            *(long **)(lVar6 + 0x38) = plVar11;
            if (cRam0000000003e85072 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85072 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar11,uVar9,
                                    *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                                    uRam0000000003d560f0);
          }
          *(undefined1 *)(lVar6 + 0x41) = 0;
          return lVar8;
        }
        if (plVar11 == (long *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        }
        uVar9 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
        uVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar18,uVar15,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = 0;
        uVar15 = *(undefined8 *)((long)pplVar3 + -0x30);
        uVar13 = *(undefined8 *)((long)pplVar3 + -0x40);
        uVar23 = *(undefined8 *)((long)pplVar3 + -0x38);
        *(undefined8 *)((long)pplVar3 + -0x30) = uVar15;
        *(undefined8 *)((long)pplVar3 + -0x28) = *(undefined8 *)((long)pplVar3 + -0x28);
        *(undefined8 *)((long)pplVar3 + -0x20) = *(undefined8 *)((long)pplVar3 + -0x20);
        *(undefined8 *)((long)pplVar3 + -0x18) = *(undefined8 *)((long)pplVar3 + -0x18);
        *(undefined8 *)((long)pplVar3 + -0x10) = *(undefined8 *)((long)pplVar3 + -0x10);
        *(undefined8 *)((long)pplVar3 + -8) = *(undefined8 *)((long)pplVar3 + -8);
        if ((bRam0000000003ebf392 & 1) == 0) {
          func_0x00f78a20(0x3d210d8,0);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf392 = 1;
          uVar17 = extraout_x1_00;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar17 = extraout_x1_01;
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8,uVar17);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar32 == 0) goto code_r0x0322b868;
          piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto code_r0x0322b850;
        }
        auVar35 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0x60) = uVar15;
        *(undefined8 *)((long)pplVar3 + -0x58) = 0x3ca3000;
        *(undefined8 *)((long)pplVar3 + -0x50) = 0;
        *(undefined8 *)((long)pplVar3 + -0x48) = uVar18;
        *(undefined1 **)((long)pplVar3 + -0x40) = (undefined1 *)((long)pplVar3 + -0x10);
        *(undefined **)((long)pplVar3 + -0x38) = &UnityEngine_Debug__LogError;
        if ((bRam0000000003ebf393 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf393 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar32 == 0) goto code_r0x0322b990;
          piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto code_r0x0322b978;
        }
        auVar36 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0x90) = 0x3ca3000;
        *(undefined8 *)((long)pplVar3 + -0x88) = 0;
        *(undefined1 (*) [16])((long)pplVar3 + -0x80) = auVar35;
        *(undefined1 **)((long)pplVar3 + -0x70) = (undefined1 *)((long)pplVar3 + -0x40);
        *(undefined **)((long)pplVar3 + -0x68) = &UnityEngine_Debug__LogErrorFormat;
        if ((bRam0000000003ebf394 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf394 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar32 == 0) goto code_r0x0322babc;
          piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto code_r0x0322baa4;
        }
        auVar35 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0xd0) = uVar13;
        *(undefined8 *)((long)pplVar3 + -200) = uVar23;
        *(undefined8 *)((long)pplVar3 + -0xc0) = 0x3ca3000;
        *(undefined8 *)((long)pplVar3 + -0xb8) = 0;
        *(undefined1 (*) [16])((long)pplVar3 + -0xb0) = auVar36;
        *(undefined1 **)((long)pplVar3 + -0xa0) = (undefined1 *)((long)pplVar3 + -0x70);
        *(undefined **)((long)pplVar3 + -0x98) = &UnityEngine_Debug__LogErrorFormat;
        uVar18 = uVar9;
        if ((bRam0000000003ebf395 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d222f8);
          bRam0000000003ebf395 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar32 == 0) goto code_r0x0322bbf0;
          piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto code_r0x0322bbd8;
        }
        auVar36 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0x100) = 0;
        *(undefined1 (*) [16])((long)pplVar3 + -0xf8) = auVar35;
        *(undefined8 *)((long)pplVar3 + -0xe8) = uVar9;
        *(undefined1 **)((long)pplVar3 + -0xe0) = (undefined1 *)((long)pplVar3 + -0xa0);
        *(undefined **)((long)pplVar3 + -0xd8) = &UnityEngine_Debug__LogException;
        if ((bRam0000000003ebf397 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d222f8);
          bRam0000000003ebf397 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar32 == 0) goto code_r0x0322bd20;
          piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto code_r0x0322bd08;
        }
        auVar35 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0x130) = 0x3ca3000;
        *(undefined8 *)((long)pplVar3 + -0x128) = 0;
        *(undefined1 (*) [16])((long)pplVar3 + -0x120) = auVar36;
        *(undefined1 **)((long)pplVar3 + -0x110) = (undefined1 *)((long)pplVar3 + -0xe0);
        *(undefined **)((long)pplVar3 + -0x108) = &UnityEngine_Debug__LogWarning;
        if ((bRam0000000003ebf399 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf399 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar32 == 0) goto code_r0x0322be48;
          piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto code_r0x0322be30;
        }
        auVar36 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0x160) = 0x3ca3000;
        *(undefined8 *)((long)pplVar3 + -0x158) = 0;
        *(undefined1 (*) [16])((long)pplVar3 + -0x150) = auVar35;
        *(undefined1 **)((long)pplVar3 + -0x140) = (undefined1 *)((long)pplVar3 + -0x110);
        *(undefined **)((long)pplVar3 + -0x138) = &UnityEngine_Debug__LogWarningFormat;
        if ((bRam0000000003ebf39a & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf39a = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 != (long *)0x0) {
          lVar6 = *plVar7;
          uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar32 == 0) goto code_r0x0322bf74;
          piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto code_r0x0322bf5c;
        }
        auVar35 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0x1a0) = uVar13;
        *(undefined8 *)((long)pplVar3 + -0x198) = 0x3ca3000;
        *(undefined8 *)((long)pplVar3 + -400) = 0x3ca3000;
        *(undefined8 *)((long)pplVar3 + -0x188) = 0;
        *(undefined1 (*) [16])((long)pplVar3 + -0x180) = auVar36;
        *(undefined1 **)((long)pplVar3 + -0x170) = (undefined1 *)((long)pplVar3 + -0x140);
        *(undefined **)((long)pplVar3 + -0x168) = &UnityEngine_Debug__LogWarningFormat;
        if ((bRam0000000003ebf39b & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d222f8);
          bRam0000000003ebf39b = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 == (long *)0x0) {
          func_0x00f78af4();
          *(long *)((long)pplVar3 + -0x1c0) = auVar35._8_8_;
          *(undefined8 *)((long)pplVar3 + -0x1b8) = uVar18;
          *(undefined1 **)((long)pplVar3 + -0x1b0) = (undefined1 *)((long)pplVar3 + -0x170);
          *(undefined **)((long)pplVar3 + -0x1a8) = &UnityEngine_Debug__get_isDebugBuild;
          if (pcRam0000000003ebf3a0 == (code *)0x0) {
            pcRam0000000003ebf3a0 = (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()")
            ;
          }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar6 = (*pcRam0000000003ebf3a0)();
          return lVar6;
        }
        lVar6 = *plVar7;
        uVar32 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar32 == 0) goto code_r0x0322c0a8;
        piVar20 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto code_r0x0322c090;
      }
    }
  }
  auVar2._8_8_ = plVar7;
  auVar2._0_8_ = uVar9;
  puVar26 = &Core_DebugMenu_DebugMenu__PopPanels;
  auVar36 = func_0x00f78af4();
  puVar4 = (undefined1 *)((long)pplVar3 + -0x20);
  uVar9 = uVar18;
  uVar13 = uVar15;
code_r0x01642bc4:
  auVar35 = auVar36;
  uVar16 = auVar35._8_8_;
  lVar6 = auVar35._0_8_;
  pplVar3 = (long **)(puVar4 + -0xa0);
  *(undefined8 *)(puVar4 + -0x40) = uVar13;
  *(undefined8 *)(puVar4 + -0x38) = uVar9;
  *(ulong *)(puVar4 + -0x30) = uVar21;
  *(long **)(puVar4 + -0x28) = plVar10;
  *(undefined1 (*) [16])(puVar4 + -0x20) = auVar2;
  *(undefined1 ****)(puVar4 + -0x10) = pppuVar24;
  *(undefined **)(puVar4 + -8) = puVar26;
  pppuVar24 = (undefined1 ***)(puVar4 + -0x10);
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(undefined8 *)(puVar4 + -0x68) = 0;
  *(undefined8 *)(puVar4 + -0x70) = 0;
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined8 *)(puVar4 + -0x60) = 0;
  *(undefined8 *)(puVar4 + -0x80) = 0;
  *(undefined8 *)(puVar4 + -0x98) = 0;
  *(undefined8 *)(puVar4 + -0xa0) = 0;
  *(undefined8 *)(puVar4 + -0x88) = 0;
  *(undefined8 *)(puVar4 + -0x90) = 0;
  lVar8 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar16,1,puVar4 + -0x70);
  if ((int)lVar8 == 0) {
    return lVar8;
  }
  plVar10 = *(long **)(puVar4 + -0x58);
  plVar7 = plVar10;
  if (plVar10 != (long *)0x0) {
    uVar18 = 0x3d21150;
    uVar23 = 0x3d21150;
    uVar21 = uVar19;
    uVar9 = uVar18;
    if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8)
        != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
    if (plVar10[0xf] == 0) goto code_r0x01642da0;
    uVar15 = 0x3d403d8;
    /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(plVar10[0xf],uRam0000000003d403d8);
    lVar8 = plVar10[0xf];
    uVar13 = uVar15;
    if (lVar8 != 0) {
      uVar1 = *(int *)(lVar8 + 0x18) - (int)uVar19;
      uVar19 = (ulong)uVar1;
      uVar21 = uVar19;
      if ((int)uVar1 < 1) goto code_r0x01642d30;
      do {
        uVar9 = uVar23;
        uVar13 = uVar15;
        if (lVar8 == 0) goto code_r0x01642da0;
        uVar13 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar8,uRam0000000003d403d8);
        iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar13,1,puVar4 + -0xa0);
        if (iVar5 != 0) {
          plVar7 = *(long **)(puVar4 + -0x88);
          uVar13 = 0x3d403d8;
          if (plVar7 == (long *)0x0) goto code_r0x01642da0;
          uVar21 = uVar19;
          uVar9 = uVar18;
          uVar13 = uVar15;
          if ((*(byte *)(*plVar7 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
          plVar7[0xf] = 0;
        }
        lVar8 = plVar10[0xf];
        uVar1 = (int)uVar19 - 1;
        uVar19 = (ulong)uVar1;
      } while (uVar1 != 0);
      uVar21 = 0;
      uVar9 = uVar23;
      uVar13 = 0x3d403d8;
      if (lVar8 != 0) goto code_r0x01642d30;
    }
  }
code_r0x01642da0:
  func_0x00f78af4();
  plVar7 = plVar10;
  uVar21 = uVar19;
code_r0x01642da8:
  puVar26 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar36 = func_0x00f78e5c(plVar7);
  uVar19 = 1;
  puVar4 = puVar4 + -0xa0;
  auVar2 = auVar35;
  goto code_r0x01642bc4;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322b850:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar6 + (long)(*piVar20 + 4) * 0x10 + 0x138);
      goto code_r0x0322b888;
    }
  }
code_r0x0322b868:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,0,uVar18,puVar14[1]);
  return lVar6;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322b978:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar6 + (long)(*piVar20 + 5) * 0x10 + 0x138);
      goto code_r0x0322b9b0;
    }
  }
code_r0x0322b990:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,0,auVar35._0_8_,auVar35._8_8_,puVar14[1]);
  return lVar6;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322baa4:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar6 + (long)(*piVar20 + 7) * 0x10 + 0x138);
      goto code_r0x0322badc;
    }
  }
code_r0x0322babc:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,0,auVar36._0_8_,auVar36._8_8_,puVar14[1]);
  return lVar6;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322bbd8:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
      puVar14 = (undefined8 *)(lVar6 + (long)*piVar20 * 0x10 + 0x138);
      goto code_r0x0322bc0c;
    }
  }
code_r0x0322bbf0:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,0,auVar35._0_8_,auVar35._8_8_,uVar9,puVar14[1]);
  return lVar6;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322bd08:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
      puVar14 = (undefined8 *)(lVar6 + (long)(*piVar20 + 1) * 0x10 + 0x138);
      goto code_r0x0322bd40;
    }
  }
code_r0x0322bd20:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,auVar36._0_8_,auVar36._8_8_,puVar14[1]);
  return lVar6;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322be30:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar6 + (long)(*piVar20 + 5) * 0x10 + 0x138);
      goto code_r0x0322be68;
    }
  }
code_r0x0322be48:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,2,auVar35._0_8_,auVar35._8_8_,puVar14[1]);
  return lVar6;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322bf5c:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar6 + (long)(*piVar20 + 7) * 0x10 + 0x138);
      goto code_r0x0322bf94;
    }
  }
code_r0x0322bf74:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,2,auVar36._0_8_,auVar36._8_8_,puVar14[1]);
  return lVar6;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar32 = uVar32 - 1;
    if (uVar32 == 0) break;
code_r0x0322c090:
    if (*(long *)(piVar20 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
      puVar14 = (undefined8 *)(lVar6 + (long)*piVar20 * 0x10 + 0x138);
      goto code_r0x0322c0c4;
    }
  }
code_r0x0322c0a8:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar6 = (*(code *)*puVar14)(plVar7,2,auVar35._0_8_,auVar35._8_8_,uVar18,puVar14[1]);
  return lVar6;
code_r0x01642d30:
  if (0 < *(int *)(lVar8 + 0x18)) {
    uVar9 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar8,uRam0000000003d403d0);
    auVar36._8_8_ = uVar9;
    auVar36._0_8_ = lVar6;
    uVar27 = (undefined1)_UNK_033f8144;
    uVar28 = (undefined1)((uint)_UNK_033f8144 >> 8);
    uVar29 = (undefined1)((uint)_UNK_033f8144 >> 0x10);
    uVar30 = (undefined1)((uint)_UNK_033f8144 >> 0x18);
    puVar26 = &UNK_01642d60;
    goto code_r0x016427fc;
  }
  plVar10[0xf] = 0;
  puVar25 = *(undefined1 **)(puVar4 + -0x10);
  puVar26 = *(undefined **)(puVar4 + -8);
  lVar8 = *(long *)(puVar4 + -0x20);
  lVar22 = *(long *)(puVar4 + -0x30);
  uVar18 = *(undefined8 *)(puVar4 + -0x28);
  lVar12 = *(long *)(puVar4 + -0x18);
  while( true ) {
    *(ulong *)(puVar4 + -0x40) = uVar33;
    *(ulong *)(puVar4 + -0x38) = uVar32;
    *(long *)(puVar4 + -0x30) = lVar22;
    *(undefined8 *)(puVar4 + -0x28) = uVar18;
    *(long *)(puVar4 + -0x20) = lVar8;
    *(long *)(puVar4 + -0x18) = lVar12;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar26;
    puVar25 = puVar4 + -0x10;
    uVar32 = 0;
    lVar8 = lVar6;
    if ((bRam0000000003eb5728 & 1) == 0) {
      func_0x00f78a20(0x3d535c0);
      func_0x00f78a20(0x3d3acd0);
      lVar8 = func_0x00f78a20(0x3d3acd8);
      bRam0000000003eb5728 = 1;
    }
    *(undefined8 *)(puVar4 + -0x50) = 0;
    *(undefined8 *)(puVar4 + -0x68) = 0;
    *(undefined8 *)(puVar4 + -0x70) = 0;
    *(undefined8 *)(puVar4 + -0x58) = 0;
    *(undefined8 *)(puVar4 + -0x60) = 0;
    if ((int)uVar16 == -1) {
      return lVar8;
    }
    /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,lVar8,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58),uVar16);
    lVar8 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar16,1,puVar4 + -0x70);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (*(long *)(puVar4 + -0x60) == 0) break;
    lVar8 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar4 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar6 + 0x78) == 0) {
      lVar12 = lVar8;
      if (lVar8 == 0) break;
    }
    else {
      if (lVar8 == 0) break;
      lVar12 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar8,0,0);
    }
    lVar22 = *(long *)(lVar8 + 0x80);
    if (lVar22 == 0) {
      return lVar12;
    }
    uVar18 = 0;
    if (*(int *)(lVar22 + 0x18) < 1) {
      return lVar12;
    }
    if (*(int *)(lVar22 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar16 = (ulong)*(uint *)(*(long *)(lVar22 + 0x10) + 0x20);
    puVar26 = &UNK_01642a78;
    puVar4 = puVar4 + -0x70;
    lVar12 = lVar6;
  }
  lVar6 = func_0x00f78af4();
  return lVar6;
}



// ============================================================
// RVA: 0x1642540 | Core.DebugMenu.DebugMenu.InstantiateComponentUIWithLabel
// ============================================================

/* WARNING: Possible PIC construction at 0x0164292c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01642930) */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_DebugMenu_DebugMenu__InstantiateComponentUIWithLabel
          (float param_1,uint param_2,float param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar16;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 **ppuVar24;
  undefined1 *puVar25;
  undefined *puVar26;
  undefined1 extraout_b0;
  undefined1 uVar27;
  undefined1 extraout_var;
  undefined1 uVar28;
  undefined1 extraout_var_00;
  undefined1 uVar29;
  undefined1 extraout_var_01;
  undefined1 uVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar31 = (ulong)param_2;
  uVar32 = (ulong)(uint)param_1;
  uVar15 = 0x3d6d868;
  if ((bRam0000000003eb5721 & 1) == 0) {
    func_0x00f78a20(0x3d53560);
    func_0x00f78a20(0x3d53748);
    func_0x00f78a20(0x3d53758);
    func_0x00f78a20(0x3d6f278);
    func_0x00f78a20(0x3d6d868);
    bRam0000000003eb5721 = 1;
  }
  lStack_80 = 0;
  uStack_78 = 0;
  fVar33 = (param_1 + -15.0) * param_3 * _UNK_033f7d80;
  lVar7 = Core_DebugMenu_DebugMenu__InstantiateUI
                    (SUB41((param_1 + -15.0) * (100.0 - param_3) * _UNK_033f7d80,0),param_2,param_4,
                     param_5,param_6);
  uVar8 = /*System.String$$Concat*/ func_0x029bdb88(param_6,/*STR('Label')*/ uRam0000000003d6f278,0);
  lVar9 = Core_DebugMenu_DebugMenu__InstantiateUI(SUB41(fVar33,0),param_2,param_4,4,uVar8);
  uVar8 = /*System.String$$Concat*/ func_0x029bdb88(param_6,/*STR('HorizontalLayout')*/ uRam0000000003d6d868,0);
  auVar36._0_8_ = Core_DebugMenu_DebugMenu__InstantiateUI(SUB41(param_1,0),param_2,param_4,8);
  if (lVar7 != 0) {
    uVar8 = uRam0000000003d53758;
    iVar6 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(lVar7,&uStack_78);
    param_4 = auVar36._0_8_;
    if (iVar6 != 0) {
      if (auVar36._0_8_ == 0) goto LAB_01642754;
      uVar8 = uRam0000000003d53748;
      iVar6 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(auVar36._0_8_,&lStack_80);
      if (iVar6 != 0) {
        if (lStack_80 == 0) goto LAB_01642754;
        *(undefined8 *)(lStack_80 + 0xf8) = uStack_78;
      }
    }
    if ((lVar9 != 0) &&
       (plVar10 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar9,uRam0000000003d53560), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x5e8))(plVar10,param_7,*(undefined8 *)(*plVar10 + 0x5f0));
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar9,auVar36._0_8_,0,0);
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar7,auVar36._0_8_,0,0);
      auVar36._8_8_ = lVar7;
      return auVar36;
    }
  }
LAB_01642754:
  func_0x00f78af4();
  auVar38._8_8_ = uVar8;
  auVar38._0_8_ = extraout_x1;
  puStack_88 = &Core_DebugMenu_DebugMenu__InstantiatePrefab;
  ppuVar24 = &puStack_90;
  plVar10 = (long *)0x3d23990;
  lStack_b0 = param_4;
  lStack_a8 = lVar9;
  lStack_a0 = lVar7;
  uStack_98 = param_7;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5722 & 1) == 0) {
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5722 = 1;
  }
  uVar21 = 0x3d5b098;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar34._0_8_ = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
  if (auVar34._0_8_ != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(auVar34._0_8_,uVar8,0);
    auVar34._8_8_ = extraout_x1_00;
    return auVar34;
  }
  puVar26 = &Core_DebugMenu_DebugMenu__ShowPanel;
  auVar35 = func_0x00f78af4();
  plVar4 = &lStack_b0;
  uVar27 = extraout_b0;
  uVar28 = extraout_var;
  uVar29 = extraout_var_00;
  uVar30 = extraout_var_01;
code_r0x016427fc:
  while( true ) {
    plVar11 = auVar35._8_8_;
    lVar7 = auVar35._0_8_;
    *(ulong *)((long)plVar4 + -0x40) = uVar32;
    *(ulong *)((long)plVar4 + -0x38) = uVar31;
    *(ulong *)((long)plVar4 + -0x30) = uVar21;
    *(long **)((long)plVar4 + -0x28) = plVar10;
    *(undefined1 (*) [16])((long)plVar4 + -0x20) = auVar38;
    *(undefined1 ***)((long)plVar4 + -0x10) = ppuVar24;
    *(undefined **)((long)plVar4 + -8) = puVar26;
    ppuVar24 = (undefined1 **)((long)plVar4 + -0x10);
    uVar31 = (ulong)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)));
    auVar36 = auVar35;
    if ((bRam0000000003eb5727 & 1) == 0) {
      func_0x00f78a20(0x3d535c0);
      func_0x00f78a20(0x3d3acd0);
      auVar36 = func_0x00f78a20(0x3d3acd8);
      bRam0000000003eb5727 = 1;
    }
    *(undefined8 *)((long)plVar4 + -0x50) = 0;
    *(undefined8 *)((long)plVar4 + -0x68) = 0;
    *(undefined8 *)((long)plVar4 + -0x70) = 0;
    *(undefined8 *)((long)plVar4 + -0x58) = 0;
    *(undefined8 *)((long)plVar4 + -0x60) = 0;
    if (auVar35._8_4_ == -1) {
      return auVar36;
    }
    /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(uVar27,auVar36._0_8_,*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar7 + 0x50)
                    ,plVar11);
    uVar18 = 1;
    auVar36 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                        (lVar7,plVar11,1,(undefined1 *)((long)plVar4 + -0x70));
    if (auVar36._0_4_ == 0) {
      return auVar36;
    }
    if (*(long *)((long)plVar4 + -0x60) == 0) break;
    plVar11 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)plVar4 + -0x60),uRam0000000003d535c0);
    auVar38._8_8_ = lVar7;
    auVar38._0_8_ = plVar11;
    if (*(long *)(lVar7 + 0x78) == 0) {
      if (plVar11 != (long *)0x0) goto code_r0x016428ec;
      break;
    }
    if (plVar11 == (long *)0x0) break;
    uVar18 = 0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar11,1);
code_r0x016428ec:
    uVar21 = plVar11[0x10];
    if (uVar21 == 0) goto code_r0x01642940;
    plVar10 = (long *)0x0;
    if (*(int *)(uVar21 + 0x18) < 1) goto code_r0x01642940;
    if (*(int *)(uVar21 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    auVar35._8_4_ = *(undefined4 *)(*(long *)(uVar21 + 0x10) + 0x20);
    auVar35._0_8_ = lVar7;
    auVar35._12_4_ = 0;
    puVar26 = &UNK_01642930;
    plVar4 = (long *)((long)plVar4 + -0x70);
  }
  func_0x00f78af4();
code_r0x01642940:
  uVar21 = *(ulong *)((long)plVar4 + -0x30);
  plVar10 = *(long **)((long)plVar4 + -0x28);
  uVar32 = *(ulong *)((long)plVar4 + -0x40);
  uVar31 = *(ulong *)((long)plVar4 + -0x38);
  *(undefined8 *)((long)plVar4 + -0x20) = *(undefined8 *)((long)plVar4 + -0x20);
  *(undefined8 *)((long)plVar4 + -0x18) = *(undefined8 *)((long)plVar4 + -0x18);
  *(undefined8 *)((long)plVar4 + -0x10) = *(undefined8 *)((long)plVar4 + -0x10);
  *(undefined8 *)((long)plVar4 + -8) = *(undefined8 *)((long)plVar4 + -8);
  ppuVar24 = (undefined1 **)((long)plVar4 + -0x10);
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5734 & 1) == 0) {
    func_0x00f78a20(0x3d535e8);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5734 = 1;
  }
  if (plVar11[8] != 0) {
    uVar8 = 0x3d23000;
    plVar11 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar11[8],uRam0000000003d535e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar36 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar11,0);
    if (auVar36._0_4_ == 0) {
      return auVar36;
    }
    if (plVar11 != (long *)0x0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar11,1,0);
      uVar18 = *(ulong *)(*plVar11 + 0x380);
      (**(code **)(*plVar11 + 0x378))(plVar11,0);
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      plVar12 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar11,0);
      uVar8 = 0;
      if (lVar7 != 0) {
        *(undefined8 *)((long)plVar4 + -0x20) = *(undefined8 *)((long)plVar4 + -0x20);
        *(undefined8 *)((long)plVar4 + -0x18) = *(undefined8 *)((long)plVar4 + -0x18);
        *(undefined8 *)((long)plVar4 + -0x10) = *(undefined8 *)((long)plVar4 + -0x10);
        *(undefined8 *)((long)plVar4 + -8) = *(undefined8 *)((long)plVar4 + -8);
        uVar8 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar7,plVar12,0);
        *(undefined8 *)((long)plVar4 + -0x40) = uVar15;
        *(undefined8 *)((long)plVar4 + -0x38) = param_6;
        *(ulong *)((long)plVar4 + -0x30) = uVar21;
        *(long **)((long)plVar4 + -0x28) = plVar10;
        *(undefined8 *)((long)plVar4 + -0x20) = *(undefined8 *)((long)plVar4 + -0x20);
        *(undefined8 *)((long)plVar4 + -0x18) = *(undefined8 *)((long)plVar4 + -0x18);
        *(undefined8 *)((long)plVar4 + -0x10) = *(undefined8 *)((long)plVar4 + -0x10);
        *(undefined8 *)((long)plVar4 + -8) = *(undefined8 *)((long)plVar4 + -8);
        if ((bRam0000000003ec2c3f & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d560a8);
          func_0x00f78a20(0x3d560f0);
          func_0x00f78a20(0x3d21718);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d69450);
          func_0x00f78a20(0x3d7c748);
          bRam0000000003ec2c3f = 1;
        }
        uVar15 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
        if (*(char *)(lVar7 + 0x41) == '\0') {
          *(undefined1 *)(lVar7 + 0x41) = 1;
          uVar15 = *(undefined8 *)(lVar7 + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar36 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar12,uVar15,0);
          if (auVar36._0_4_ == 0) {
            uVar15 = *(undefined8 *)(lVar7 + 0x38);
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (cRam0000000003e85071 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85071 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar15,uVar8,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                            uRam0000000003d560a8);
            *(long **)(lVar7 + 0x38) = plVar12;
            if (cRam0000000003e85072 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85072 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auVar36 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar12,uVar8,
                                      *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60)
                                      ,uRam0000000003d560f0);
          }
          *(undefined1 *)(lVar7 + 0x41) = 0;
          return auVar36;
        }
        if (plVar12 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        }
        uVar13 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
        uVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar8,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = 0;
        uVar8 = *(undefined8 *)((long)plVar4 + -0x30);
        uVar23 = *(undefined8 *)((long)plVar4 + -0x40);
        uVar1 = *(undefined8 *)((long)plVar4 + -0x38);
        *(undefined8 *)((long)plVar4 + -0x30) = uVar8;
        *(undefined8 *)((long)plVar4 + -0x28) = *(undefined8 *)((long)plVar4 + -0x28);
        *(undefined8 *)((long)plVar4 + -0x20) = *(undefined8 *)((long)plVar4 + -0x20);
        *(undefined8 *)((long)plVar4 + -0x18) = *(undefined8 *)((long)plVar4 + -0x18);
        *(undefined8 *)((long)plVar4 + -0x10) = *(undefined8 *)((long)plVar4 + -0x10);
        *(undefined8 *)((long)plVar4 + -8) = *(undefined8 *)((long)plVar4 + -8);
        if ((bRam0000000003ebf392 & 1) == 0) {
          func_0x00f78a20(0x3d210d8,0);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf392 = 1;
          uVar17 = extraout_x1_01;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar17 = extraout_x1_02;
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8,uVar17);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar31 == 0) goto code_r0x0322b868;
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x0322b850;
        }
        auVar36 = func_0x00f78af4();
        *(undefined8 *)((long)plVar4 + -0x60) = uVar8;
        *(undefined8 *)((long)plVar4 + -0x58) = 0x3ca3000;
        *(undefined8 *)((long)plVar4 + -0x50) = 0;
        *(undefined8 *)((long)plVar4 + -0x48) = uVar15;
        *(undefined1 **)((long)plVar4 + -0x40) = (undefined1 *)((long)plVar4 + -0x10);
        *(undefined **)((long)plVar4 + -0x38) = &UnityEngine_Debug__LogError;
        if ((bRam0000000003ebf393 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf393 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar31 == 0) goto code_r0x0322b990;
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x0322b978;
        }
        auVar38 = func_0x00f78af4();
        *(undefined8 *)((long)plVar4 + -0x90) = 0x3ca3000;
        *(undefined8 *)((long)plVar4 + -0x88) = 0;
        *(undefined1 (*) [16])((long)plVar4 + -0x80) = auVar36;
        *(undefined1 **)((long)plVar4 + -0x70) = (undefined1 *)((long)plVar4 + -0x40);
        *(undefined **)((long)plVar4 + -0x68) = &UnityEngine_Debug__LogErrorFormat;
        if ((bRam0000000003ebf394 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf394 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar31 == 0) goto code_r0x0322babc;
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x0322baa4;
        }
        auVar36 = func_0x00f78af4();
        *(undefined8 *)((long)plVar4 + -0xd0) = uVar23;
        *(undefined8 *)((long)plVar4 + -200) = uVar1;
        *(undefined8 *)((long)plVar4 + -0xc0) = 0x3ca3000;
        *(undefined8 *)((long)plVar4 + -0xb8) = 0;
        *(undefined1 (*) [16])((long)plVar4 + -0xb0) = auVar38;
        *(undefined1 **)((long)plVar4 + -0xa0) = (undefined1 *)((long)plVar4 + -0x70);
        *(undefined **)((long)plVar4 + -0x98) = &UnityEngine_Debug__LogErrorFormat;
        uVar15 = uVar13;
        if ((bRam0000000003ebf395 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d222f8);
          bRam0000000003ebf395 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar31 == 0) goto code_r0x0322bbf0;
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x0322bbd8;
        }
        auVar38 = func_0x00f78af4();
        *(undefined8 *)((long)plVar4 + -0x100) = 0;
        *(undefined1 (*) [16])((long)plVar4 + -0xf8) = auVar36;
        *(undefined8 *)((long)plVar4 + -0xe8) = uVar13;
        *(undefined1 **)((long)plVar4 + -0xe0) = (undefined1 *)((long)plVar4 + -0xa0);
        *(undefined **)((long)plVar4 + -0xd8) = &UnityEngine_Debug__LogException;
        if ((bRam0000000003ebf397 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d222f8);
          bRam0000000003ebf397 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar31 == 0) goto code_r0x0322bd20;
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x0322bd08;
        }
        auVar36 = func_0x00f78af4();
        *(undefined8 *)((long)plVar4 + -0x130) = 0x3ca3000;
        *(undefined8 *)((long)plVar4 + -0x128) = 0;
        *(undefined1 (*) [16])((long)plVar4 + -0x120) = auVar38;
        *(undefined1 **)((long)plVar4 + -0x110) = (undefined1 *)((long)plVar4 + -0xe0);
        *(undefined **)((long)plVar4 + -0x108) = &UnityEngine_Debug__LogWarning;
        if ((bRam0000000003ebf399 & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf399 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar31 == 0) goto code_r0x0322be48;
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x0322be30;
        }
        auVar38 = func_0x00f78af4();
        *(undefined8 *)((long)plVar4 + -0x160) = 0x3ca3000;
        *(undefined8 *)((long)plVar4 + -0x158) = 0;
        *(undefined1 (*) [16])((long)plVar4 + -0x150) = auVar36;
        *(undefined1 **)((long)plVar4 + -0x140) = (undefined1 *)((long)plVar4 + -0x110);
        *(undefined **)((long)plVar4 + -0x138) = &UnityEngine_Debug__LogWarningFormat;
        if ((bRam0000000003ebf39a & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf39a = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar31 == 0) goto code_r0x0322bf74;
          piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x0322bf5c;
        }
        auVar36 = func_0x00f78af4();
        *(undefined8 *)((long)plVar4 + -0x1a0) = uVar23;
        *(undefined8 *)((long)plVar4 + -0x198) = 0x3ca3000;
        *(undefined8 *)((long)plVar4 + -400) = 0x3ca3000;
        *(undefined8 *)((long)plVar4 + -0x188) = 0;
        *(undefined1 (*) [16])((long)plVar4 + -0x180) = auVar38;
        *(undefined1 **)((long)plVar4 + -0x170) = (undefined1 *)((long)plVar4 + -0x140);
        *(undefined **)((long)plVar4 + -0x168) = &UnityEngine_Debug__LogWarningFormat;
        if ((bRam0000000003ebf39b & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d222f8);
          bRam0000000003ebf39b = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar10 == (long *)0x0) {
          func_0x00f78af4();
          *(long *)((long)plVar4 + -0x1c0) = auVar36._8_8_;
          *(undefined8 *)((long)plVar4 + -0x1b8) = uVar15;
          *(undefined1 **)((long)plVar4 + -0x1b0) = (undefined1 *)((long)plVar4 + -0x170);
          *(undefined **)((long)plVar4 + -0x1a8) = &UnityEngine_Debug__get_isDebugBuild;
          if (pcRam0000000003ebf3a0 == (code *)0x0) {
            pcRam0000000003ebf3a0 = (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()")
            ;
          }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar36 = (*pcRam0000000003ebf3a0)();
          return auVar36;
        }
        lVar7 = *plVar10;
        uVar31 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar31 == 0) goto code_r0x0322c0a8;
        piVar19 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto code_r0x0322c090;
      }
    }
  }
  auVar3._8_8_ = plVar11;
  auVar3._0_8_ = uVar8;
  puVar26 = &Core_DebugMenu_DebugMenu__PopPanels;
  auVar36 = func_0x00f78af4();
  puVar5 = (undefined1 *)((long)plVar4 + -0x20);
  uVar8 = param_6;
  uVar13 = uVar15;
code_r0x01642bc4:
  auVar38 = auVar36;
  uVar16 = auVar38._8_8_;
  lVar7 = auVar38._0_8_;
  plVar4 = (long *)(puVar5 + -0xa0);
  *(undefined8 *)(puVar5 + -0x40) = uVar13;
  *(undefined8 *)(puVar5 + -0x38) = uVar8;
  *(ulong *)(puVar5 + -0x30) = uVar21;
  *(long **)(puVar5 + -0x28) = plVar10;
  *(undefined1 (*) [16])(puVar5 + -0x20) = auVar3;
  *(undefined1 ***)(puVar5 + -0x10) = ppuVar24;
  *(undefined **)(puVar5 + -8) = puVar26;
  ppuVar24 = (undefined1 **)(puVar5 + -0x10);
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar5 + -0x50) = 0;
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  *(undefined8 *)(puVar5 + -0x80) = 0;
  *(undefined8 *)(puVar5 + -0x98) = 0;
  *(undefined8 *)(puVar5 + -0xa0) = 0;
  *(undefined8 *)(puVar5 + -0x88) = 0;
  *(undefined8 *)(puVar5 + -0x90) = 0;
  auVar36 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar16,1,puVar5 + -0x70);
  if (auVar36._0_4_ == 0) {
    return auVar36;
  }
  plVar10 = *(long **)(puVar5 + -0x58);
  plVar11 = plVar10;
  if (plVar10 != (long *)0x0) {
    param_6 = 0x3d21150;
    uVar23 = 0x3d21150;
    uVar21 = uVar18;
    uVar8 = param_6;
    if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8)
        != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
    if (plVar10[0xf] == 0) goto code_r0x01642da0;
    uVar15 = 0x3d403d8;
    /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(plVar10[0xf],uRam0000000003d403d8);
    lVar9 = plVar10[0xf];
    uVar13 = uVar15;
    if (lVar9 != 0) {
      uVar2 = *(int *)(lVar9 + 0x18) - (int)uVar18;
      uVar18 = (ulong)uVar2;
      uVar21 = uVar18;
      if ((int)uVar2 < 1) goto code_r0x01642d30;
      do {
        uVar8 = uVar23;
        uVar13 = uVar15;
        if (lVar9 == 0) goto code_r0x01642da0;
        uVar13 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar9,uRam0000000003d403d8);
        iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar13,1,puVar5 + -0xa0);
        if (iVar6 != 0) {
          plVar11 = *(long **)(puVar5 + -0x88);
          uVar13 = 0x3d403d8;
          if (plVar11 == (long *)0x0) goto code_r0x01642da0;
          uVar21 = uVar18;
          uVar8 = param_6;
          uVar13 = uVar15;
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
          plVar11[0xf] = 0;
        }
        lVar9 = plVar10[0xf];
        uVar2 = (int)uVar18 - 1;
        uVar18 = (ulong)uVar2;
      } while (uVar2 != 0);
      uVar21 = 0;
      uVar8 = uVar23;
      uVar13 = 0x3d403d8;
      if (lVar9 != 0) goto code_r0x01642d30;
    }
  }
code_r0x01642da0:
  func_0x00f78af4();
  plVar11 = plVar10;
  uVar21 = uVar18;
code_r0x01642da8:
  puVar26 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar36 = func_0x00f78e5c(plVar11);
  uVar18 = 1;
  puVar5 = puVar5 + -0xa0;
  auVar3 = auVar38;
  goto code_r0x01642bc4;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322b850:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar7 + (long)(*piVar19 + 4) * 0x10 + 0x138);
      goto code_r0x0322b888;
    }
  }
code_r0x0322b868:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,0,uVar15,puVar14[1]);
  return auVar36;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322b978:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar7 + (long)(*piVar19 + 5) * 0x10 + 0x138);
      goto code_r0x0322b9b0;
    }
  }
code_r0x0322b990:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,0,auVar36._0_8_,auVar36._8_8_,puVar14[1]);
  return auVar36;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322baa4:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar7 + (long)(*piVar19 + 7) * 0x10 + 0x138);
      goto code_r0x0322badc;
    }
  }
code_r0x0322babc:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,0,auVar38._0_8_,auVar38._8_8_,puVar14[1]);
  return auVar36;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322bbd8:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
      puVar14 = (undefined8 *)(lVar7 + (long)*piVar19 * 0x10 + 0x138);
      goto code_r0x0322bc0c;
    }
  }
code_r0x0322bbf0:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,0,auVar36._0_8_,auVar36._8_8_,uVar13,puVar14[1]);
  return auVar36;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322bd08:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
      puVar14 = (undefined8 *)(lVar7 + (long)(*piVar19 + 1) * 0x10 + 0x138);
      goto code_r0x0322bd40;
    }
  }
code_r0x0322bd20:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,auVar38._0_8_,auVar38._8_8_,puVar14[1]);
  return auVar36;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322be30:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar7 + (long)(*piVar19 + 5) * 0x10 + 0x138);
      goto code_r0x0322be68;
    }
  }
code_r0x0322be48:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,2,auVar36._0_8_,auVar36._8_8_,puVar14[1]);
  return auVar36;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322bf5c:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
      puVar14 = (undefined8 *)(lVar7 + (long)(*piVar19 + 7) * 0x10 + 0x138);
      goto code_r0x0322bf94;
    }
  }
code_r0x0322bf74:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,2,auVar38._0_8_,auVar38._8_8_,puVar14[1]);
  return auVar36;
  while( true ) {
    piVar19 = piVar19 + 4;
    uVar31 = uVar31 - 1;
    if (uVar31 == 0) break;
code_r0x0322c090:
    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
      puVar14 = (undefined8 *)(lVar7 + (long)*piVar19 * 0x10 + 0x138);
      goto code_r0x0322c0c4;
    }
  }
code_r0x0322c0a8:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar36 = (*(code *)*puVar14)(plVar10,2,auVar36._0_8_,auVar36._8_8_,uVar15,puVar14[1]);
  return auVar36;
code_r0x01642d30:
  if (0 < *(int *)(lVar9 + 0x18)) {
    uVar8 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar9,uRam0000000003d403d0);
    auVar35._8_8_ = uVar8;
    auVar35._0_8_ = lVar7;
    uVar27 = (undefined1)_UNK_033f8144;
    uVar28 = (undefined1)((uint)_UNK_033f8144 >> 8);
    uVar29 = (undefined1)((uint)_UNK_033f8144 >> 0x10);
    uVar30 = (undefined1)((uint)_UNK_033f8144 >> 0x18);
    puVar26 = &UNK_01642d60;
    goto code_r0x016427fc;
  }
  plVar10[0xf] = 0;
  puVar25 = *(undefined1 **)(puVar5 + -0x10);
  puVar26 = *(undefined **)(puVar5 + -8);
  lVar9 = *(long *)(puVar5 + -0x20);
  lVar22 = *(long *)(puVar5 + -0x30);
  uVar15 = *(undefined8 *)(puVar5 + -0x28);
  lVar20 = *(long *)(puVar5 + -0x18);
  while( true ) {
    auVar37._8_8_ = uVar16;
    auVar37._0_8_ = lVar7;
    *(ulong *)(puVar5 + -0x40) = uVar32;
    *(ulong *)(puVar5 + -0x38) = uVar31;
    *(long *)(puVar5 + -0x30) = lVar22;
    *(undefined8 *)(puVar5 + -0x28) = uVar15;
    *(long *)(puVar5 + -0x20) = lVar9;
    *(long *)(puVar5 + -0x18) = lVar20;
    *(undefined1 **)(puVar5 + -0x10) = puVar25;
    *(undefined **)(puVar5 + -8) = puVar26;
    puVar25 = puVar5 + -0x10;
    uVar31 = 0;
    if ((bRam0000000003eb5728 & 1) == 0) {
      func_0x00f78a20(0x3d535c0);
      func_0x00f78a20(0x3d3acd0);
      auVar37 = func_0x00f78a20(0x3d3acd8);
      bRam0000000003eb5728 = 1;
    }
    *(undefined8 *)(puVar5 + -0x50) = 0;
    *(undefined8 *)(puVar5 + -0x68) = 0;
    *(undefined8 *)(puVar5 + -0x70) = 0;
    *(undefined8 *)(puVar5 + -0x58) = 0;
    *(undefined8 *)(puVar5 + -0x60) = 0;
    if ((int)uVar16 == -1) {
      return auVar37;
    }
    /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,auVar37._0_8_,*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58),
                    uVar16);
    auVar36 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar16,1,puVar5 + -0x70);
    if (auVar36._0_4_ == 0) {
      return auVar36;
    }
    if (*(long *)(puVar5 + -0x60) == 0) break;
    auVar36 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar5 + -0x60),uRam0000000003d535c0);
    lVar9 = auVar36._0_8_;
    if (*(long *)(lVar7 + 0x78) == 0) {
      if (lVar9 == 0) break;
    }
    else {
      if (lVar9 == 0) break;
      auVar36 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar9,0,0);
    }
    lVar22 = *(long *)(lVar9 + 0x80);
    if (lVar22 == 0) {
      return auVar36;
    }
    uVar15 = 0;
    if (*(int *)(lVar22 + 0x18) < 1) {
      return auVar36;
    }
    if (*(int *)(lVar22 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar16 = (ulong)*(uint *)(*(long *)(lVar22 + 0x10) + 0x20);
    puVar26 = &UNK_01642a78;
    puVar5 = puVar5 + -0x70;
    lVar20 = lVar7;
  }
  auVar36 = func_0x00f78af4();
  return auVar36;
}



// ============================================================
// RVA: 0x1642758 | Core.DebugMenu.DebugMenu.InstantiatePrefab
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16427fc | Core.DebugMenu.DebugMenu.ShowPanel
// ============================================================

/* WARNING: Possible PIC construction at 0x01642a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01642a78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__ShowPanel(undefined1 param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x21;
  ulong uVar17;
  ulong unaff_x22;
  long lVar18;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar6 = param_2;
  if ((bRam0000000003eb5727 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar6 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5727 = 1;
  }
  plStack_50 = (long *)0x0;
  puStack_68 = (undefined *)0x0;
  puStack_70 = (undefined1 *)0x0;
  uStack_58 = 0;
  lStack_60 = 0;
  if ((int)param_3 == -1) {
    return;
  }
  /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(param_1,lVar6,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50),
                  param_3);
  uVar12 = 1;
  iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_2,param_3,1,&puStack_70);
  if (iVar5 == 0) {
    return;
  }
  if (lStack_60 == 0) {
LAB_0164293c:
    func_0x00f78af4();
  }
  else {
    param_3 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_60,uRam0000000003d535c0);
    if (*(long *)(param_2 + 0x78) == 0) {
      if (param_3 != (long *)0x0) goto LAB_016428ec;
      goto LAB_0164293c;
    }
    if (param_3 == (long *)0x0) goto LAB_0164293c;
    uVar12 = 0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(param_3,1);
LAB_016428ec:
    lVar6 = param_3[0x10];
    if (lVar6 != 0) {
      uVar17 = 0;
      do {
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar17) goto code_r0x01642940;
        if (*(uint *)(lVar6 + 0x18) <= uVar17) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        Core_DebugMenu_DebugMenu__ShowPanel
                  (param_1,param_2,*(undefined4 *)(*(long *)(lVar6 + 0x10) + uVar17 * 4 + 0x20));
        uVar17 = uVar17 + 1;
        lVar6 = param_3[0x10];
      } while (lVar6 != 0);
      goto LAB_0164293c;
    }
  }
code_r0x01642940:
  uVar16 = 0x3eb5000;
  if ((bRam0000000003eb5734 & 1) == 0) {
    func_0x00f78a20(0x3d535e8);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5734 = 1;
  }
  if (param_3[8] != 0) {
    uVar16 = 0x3d23000;
    param_3 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(param_3[8],uRam0000000003d535e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_3,0);
    if (iVar5 == 0) {
      return;
    }
    if (param_3 != (long *)0x0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(param_3,1,0);
      uVar12 = *(ulong *)(*param_3 + 0x380);
      (**(code **)(*param_3 + 0x378))(param_3,0);
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      plVar7 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_3,0);
      uVar16 = 0;
      if (lVar6 != 0) {
        uVar16 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar6,plVar7,0);
        if ((bRam0000000003ec2c3f & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d560a8);
          func_0x00f78a20(0x3d560f0);
          func_0x00f78a20(0x3d21718);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d69450);
          func_0x00f78a20(0x3d7c748);
          bRam0000000003ec2c3f = 1;
        }
        uVar11 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
        if (*(char *)(lVar6 + 0x41) == '\0') {
          *(undefined1 *)(lVar6 + 0x41) = 1;
          uVar11 = *(undefined8 *)(lVar6 + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar7,uVar11,0);
          if (iVar5 == 0) {
            uVar11 = *(undefined8 *)(lVar6 + 0x38);
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (cRam0000000003e85071 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85071 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar11,uVar16,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                            uRam0000000003d560a8);
            *(long **)(lVar6 + 0x38) = plVar7;
            if (cRam0000000003e85072 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85072 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar7,uVar16,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                            uRam0000000003d560f0);
          }
          *(undefined1 *)(lVar6 + 0x41) = 0;
          return;
        }
        if (plVar7 == (long *)0x0) {
          uVar16 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar13 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
        uVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar16,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = 0;
        if ((bRam0000000003ebf392 & 1) == 0) {
          func_0x00f78a20(0x3d210d8,0);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf392 = 1;
          uVar11 = extraout_x1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar11 = extraout_x1_00;
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8,uVar11);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 == (long *)0x0) {
          auVar22 = func_0x00f78af4();
          uStack_58 = 0x3ca3000;
          plStack_50 = plVar7;
          uStack_48 = uVar16;
          if ((bRam0000000003ebf393 & 1) == 0) {
            func_0x00f78a20(0x3d210d8);
            func_0x00f78a20(0x3d22300);
            bRam0000000003ebf393 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (cRam0000000003ca34ff == '\0') {
            func_0x00f78a20(0x3d210d8);
            cRam0000000003ca34ff = '\x01';
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar7 == (long *)0x0) {
            auVar22 = func_0x00f78af4();
            puStack_68 = &UnityEngine_Debug__LogErrorFormat;
            puStack_70 = &stack0xffffffffffffffc0;
            if ((bRam0000000003ebf394 & 1) == 0) {
              func_0x00f78a20(0x3d210d8);
              func_0x00f78a20(0x3d22300);
              bRam0000000003ebf394 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (cRam0000000003ca34ff == '\0') {
              func_0x00f78a20(0x3d210d8);
              cRam0000000003ca34ff = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar7 == (long *)0x0) {
              auVar22 = func_0x00f78af4();
              uVar16 = uVar13;
              if ((bRam0000000003ebf395 & 1) == 0) {
                func_0x00f78a20(0x3d210d8);
                func_0x00f78a20(0x3d222f8);
                bRam0000000003ebf395 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (cRam0000000003ca34ff == '\0') {
                func_0x00f78a20(0x3d210d8);
                cRam0000000003ca34ff = '\x01';
              }
              if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar7 == (long *)0x0) {
                auVar22 = func_0x00f78af4();
                if ((bRam0000000003ebf397 & 1) == 0) {
                  func_0x00f78a20(0x3d210d8);
                  func_0x00f78a20(0x3d222f8);
                  bRam0000000003ebf397 = 1;
                }
                if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                if (cRam0000000003ca34ff == '\0') {
                  func_0x00f78a20(0x3d210d8);
                  cRam0000000003ca34ff = '\x01';
                }
                if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar7 == (long *)0x0) {
                  auVar22 = func_0x00f78af4();
                  if ((bRam0000000003ebf399 & 1) == 0) {
                    func_0x00f78a20(0x3d210d8);
                    func_0x00f78a20(0x3d22300);
                    bRam0000000003ebf399 = 1;
                  }
                  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  if (cRam0000000003ca34ff == '\0') {
                    func_0x00f78a20(0x3d210d8);
                    cRam0000000003ca34ff = '\x01';
                  }
                  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar7 == (long *)0x0) {
                    auVar22 = func_0x00f78af4();
                    if ((bRam0000000003ebf39a & 1) == 0) {
                      func_0x00f78a20(0x3d210d8);
                      func_0x00f78a20(0x3d22300);
                      bRam0000000003ebf39a = 1;
                    }
                    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    if (cRam0000000003ca34ff == '\0') {
                      func_0x00f78a20(0x3d210d8);
                      cRam0000000003ca34ff = '\x01';
                    }
                    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar7 == (long *)0x0) {
                      auVar22 = func_0x00f78af4();
                      if ((bRam0000000003ebf39b & 1) == 0) {
                        func_0x00f78a20(0x3d210d8);
                        func_0x00f78a20(0x3d222f8);
                        bRam0000000003ebf39b = 1;
                      }
                      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      if (cRam0000000003ca34ff == '\0') {
                        func_0x00f78a20(0x3d210d8);
                        cRam0000000003ca34ff = '\x01';
                      }
                      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar7 == (long *)0x0) {
                        func_0x00f78af4();
                        if (pcRam0000000003ebf3a0 == (code *)0x0) {
                          pcRam0000000003ebf3a0 =
                               (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
                        }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000003ebf3a0)();
                        return;
                      }
                      lVar6 = *plVar7;
                      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
                      if (uVar12 != 0) {
                        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                            puVar10 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                            goto code_r0x0322c0c4;
                          }
                          piVar14 = piVar14 + 4;
                          uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)*puVar10)(plVar7,2,auVar22._0_8_,auVar22._8_8_,uVar16,puVar10[1]);
                      return;
                    }
                    lVar6 = *plVar7;
                    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
                    if (uVar12 != 0) {
                      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 7) * 0x10 + 0x138);
                          goto code_r0x0322bf94;
                        }
                        piVar14 = piVar14 + 4;
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar10)(plVar7,2,auVar22._0_8_,auVar22._8_8_,puVar10[1]);
                    return;
                  }
                  lVar6 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                        puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                        goto code_r0x0322be68;
                      }
                      piVar14 = piVar14 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar10)(plVar7,2,auVar22._0_8_,auVar22._8_8_,puVar10[1]);
                  return;
                }
                lVar6 = *plVar7;
                uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar12 != 0) {
                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto code_r0x0322bd40;
                    }
                    piVar14 = piVar14 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar10)(plVar7,auVar22._0_8_,auVar22._8_8_,puVar10[1]);
                return;
              }
              lVar6 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar12 != 0) {
                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar10 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                    goto code_r0x0322bc0c;
                  }
                  piVar14 = piVar14 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar10)(plVar7,0,auVar22._0_8_,auVar22._8_8_,uVar13,puVar10[1]);
              return;
            }
            lVar6 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 7) * 0x10 + 0x138);
                  goto code_r0x0322badc;
                }
                piVar14 = piVar14 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar10)(plVar7,0,auVar22._0_8_,auVar22._8_8_,puVar10[1]);
            return;
          }
          lVar6 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                goto code_r0x0322b9b0;
              }
              piVar14 = piVar14 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar10)(plVar7,0,auVar22._0_8_,auVar22._8_8_,puVar10[1]);
          return;
        }
        lVar6 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
              puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto code_r0x0322b888;
            }
            piVar14 = piVar14 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar10)(plVar7,0,uVar16,puVar10[1]);
        return;
      }
    }
  }
  auVar22._8_8_ = param_3;
  auVar22._0_8_ = uVar16;
  puVar20 = &Core_DebugMenu_DebugMenu__PopPanels;
  auVar21 = func_0x00f78af4();
  puVar19 = &stack0xffffffffffffffe0;
  puVar3 = (undefined1 *)register0x00000008;
code_r0x01642bc4:
  auVar2 = auVar21;
  puVar4 = puVar19;
  uVar17 = auVar2._8_8_;
  lVar6 = auVar2._0_8_;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar4 + -0x20) = auVar22;
  *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
  *(undefined **)(puVar4 + -8) = puVar20;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(undefined8 *)(puVar4 + -0x68) = 0;
  *(undefined8 *)(puVar4 + -0x70) = 0;
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined8 *)(puVar4 + -0x60) = 0;
  *(undefined8 *)(puVar4 + -0x80) = 0;
  *(undefined8 *)(puVar4 + -0x98) = 0;
  *(undefined8 *)(puVar4 + -0xa0) = 0;
  *(undefined8 *)(puVar4 + -0x88) = 0;
  *(undefined8 *)(puVar4 + -0x90) = 0;
  iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar17,1,puVar4 + -0x70);
  if (iVar5 == 0) {
    return;
  }
  unaff_x21 = *(long **)(puVar4 + -0x58);
  plVar7 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    uVar16 = 0x3d21150;
    uVar11 = 0x3d21150;
    unaff_x22 = uVar12;
    unaff_x23 = uVar16;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar13 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar8 = unaff_x21[0xf];
      unaff_x24 = uVar13;
      if (lVar8 == 0) goto code_r0x01642da0;
      uVar1 = *(int *)(lVar8 + 0x18) - (int)uVar12;
      uVar12 = (ulong)uVar1;
      if ((int)uVar1 < 1) goto code_r0x01642d30;
      do {
        unaff_x23 = uVar11;
        unaff_x24 = uVar13;
        if (lVar8 == 0) goto code_r0x01642da0;
        uVar9 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar8,uRam0000000003d403d8);
        iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar9,1,puVar4 + -0xa0);
        if (iVar5 != 0) {
          plVar7 = *(long **)(puVar4 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar7 == (long *)0x0) goto code_r0x01642da0;
          unaff_x22 = uVar12;
          unaff_x23 = uVar16;
          unaff_x24 = uVar13;
          if ((*(byte *)(*plVar7 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01642da8;
          plVar7[0xf] = 0;
        }
        lVar8 = unaff_x21[0xf];
        uVar1 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar1;
      } while (uVar1 != 0);
      unaff_x23 = uVar11;
      unaff_x24 = 0x3d403d8;
      if (lVar8 != 0) goto code_r0x01642d30;
    }
  }
code_r0x01642da0:
  func_0x00f78af4();
  plVar7 = unaff_x21;
  unaff_x22 = uVar12;
code_r0x01642da8:
  puVar20 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar21 = func_0x00f78e5c(plVar7);
  uVar12 = 1;
  puVar19 = puVar4 + -0xa0;
  puVar3 = puVar4;
  auVar22 = auVar2;
  goto code_r0x01642bc4;
code_r0x01642d30:
  if (0 < *(int *)(lVar8 + 0x18)) {
    uVar16 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar8,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar6,uVar16);
  }
  unaff_x21[0xf] = 0;
  puVar19 = *(undefined1 **)(puVar4 + -0x10);
  puVar20 = *(undefined **)(puVar4 + -8);
  lVar8 = *(long *)(puVar4 + -0x20);
  lVar18 = *(long *)(puVar4 + -0x30);
  uVar16 = *(undefined8 *)(puVar4 + -0x28);
  puVar3 = puVar4;
  lVar15 = *(long *)(puVar4 + -0x18);
  while( true ) {
    *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x38) = unaff_d8;
    *(long *)(puVar3 + -0x30) = lVar18;
    *(undefined8 *)(puVar3 + -0x28) = uVar16;
    *(long *)(puVar3 + -0x20) = lVar8;
    *(long *)(puVar3 + -0x18) = lVar15;
    *(undefined1 **)(puVar3 + -0x10) = puVar19;
    *(undefined **)(puVar3 + -8) = puVar20;
    puVar19 = puVar3 + -0x10;
    unaff_d8 = 0;
    lVar8 = lVar6;
    if ((bRam0000000003eb5728 & 1) == 0) {
      func_0x00f78a20(0x3d535c0);
      func_0x00f78a20(0x3d3acd0);
      lVar8 = func_0x00f78a20(0x3d3acd8);
      bRam0000000003eb5728 = 1;
    }
    *(undefined8 *)(puVar3 + -0x50) = 0;
    *(undefined8 *)(puVar3 + -0x68) = 0;
    *(undefined8 *)(puVar3 + -0x70) = 0;
    *(undefined8 *)(puVar3 + -0x58) = 0;
    *(undefined8 *)(puVar3 + -0x60) = 0;
    if ((int)uVar17 == -1) {
      return;
    }
    /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,lVar8,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58),uVar17);
    iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar17,1,puVar3 + -0x70);
    if (iVar5 == 0) {
      return;
    }
    if (*(long *)(puVar3 + -0x60) == 0) break;
    lVar8 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar3 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar6 + 0x78) == 0) {
      if (lVar8 == 0) break;
    }
    else {
      if (lVar8 == 0) break;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar8,0,0);
    }
    lVar18 = *(long *)(lVar8 + 0x80);
    if (lVar18 == 0) {
      return;
    }
    uVar16 = 0;
    if (*(int *)(lVar18 + 0x18) < 1) {
      return;
    }
    if (*(int *)(lVar18 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar17 = (ulong)*(uint *)(*(long *)(lVar18 + 0x10) + 0x20);
    puVar20 = &UNK_01642a78;
    puVar3 = puVar3 + -0x70;
    lVar15 = lVar6;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x164295c | Core.DebugMenu.DebugMenu.HidePanel
// ============================================================

void Core_DebugMenu_DebugMenu__HidePanel(undefined1 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = param_2;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar2 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  if ((int)param_3 == -1) {
    return;
  }
  /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(param_1,lVar2,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                  param_3);
  iVar1 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_2,param_3,1,&uStack_70);
  if (iVar1 == 0) {
    return;
  }
  if (lStack_60 != 0) {
    lVar2 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_60,uRam0000000003d535c0);
    if (*(long *)(param_2 + 0x78) == 0) {
      if (lVar2 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar2 == 0) goto LAB_01642a84;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar2,0,0);
    }
    lVar4 = *(long *)(lVar2 + 0x80);
    if (lVar4 == 0) {
      return;
    }
    uVar3 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      Core_DebugMenu_DebugMenu__HidePanel
                (param_1,param_2,*(undefined4 *)(*(long *)(lVar4 + 0x10) + uVar3 * 4 + 0x20));
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(lVar2 + 0x80);
    } while (lVar4 != 0);
  }
LAB_01642a84:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1642bc4 | Core.DebugMenu.DebugMenu.PopPanels
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__PopPanels(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar12;
  long *unaff_x21;
  long lVar13;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar14;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  
  auVar4._8_8_ = unaff_x19;
  auVar4._0_8_ = unaff_x20;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
code_r0x01642bc4:
  auVar3 = auVar15;
  uVar11 = auVar3._8_8_;
  lVar6 = auVar3._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar4;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (lVar6,uVar11,1,(undefined1 *)((long)register0x00000008 + -0x70));
  if (iVar5 == 0) {
    return;
  }
  unaff_x21 = *(long **)((long)register0x00000008 + -0x58);
  plVar9 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    uVar10 = 0x3d21150;
    uVar14 = 0x3d21150;
    unaff_x22 = param_3;
    unaff_x23 = uVar10;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar7 = unaff_x21[0xf];
      unaff_x24 = uVar1;
      if (lVar7 == 0) goto LAB_01642da0;
      uVar2 = *(int *)(lVar7 + 0x18) - (int)param_3;
      param_3 = (ulong)uVar2;
      if ((int)uVar2 < 1) goto LAB_01642d30;
      do {
        unaff_x23 = uVar14;
        unaff_x24 = uVar1;
        if (lVar7 == 0) goto LAB_01642da0;
        uVar8 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar7,uRam0000000003d403d8);
        iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (lVar6,uVar8,1,(undefined1 *)((long)register0x00000008 + -0xa0));
        if (iVar5 != 0) {
          plVar9 = *(long **)((long)register0x00000008 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar9 == (long *)0x0) goto LAB_01642da0;
          unaff_x22 = param_3;
          unaff_x23 = uVar10;
          unaff_x24 = uVar1;
          if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar9[0xf] = 0;
        }
        lVar7 = unaff_x21[0xf];
        uVar2 = (int)param_3 - 1;
        param_3 = (ulong)uVar2;
      } while (uVar2 != 0);
      unaff_x23 = uVar14;
      unaff_x24 = 0x3d403d8;
      if (lVar7 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar9 = unaff_x21;
  unaff_x22 = param_3;
LAB_01642da8:
  unaff_x30 = &Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar15 = func_0x00f78e5c(plVar9);
  param_3 = 1;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  auVar4 = auVar3;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar7 + 0x18)) {
    uVar10 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar7,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar6,uVar10);
  }
  unaff_x21[0xf] = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar7 = lVar6;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar7 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  if (auVar3._8_4_ == -1) {
    return;
  }
  /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,lVar7,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58),uVar11);
  iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (lVar6,uVar11,1,(undefined1 *)((long)register0x00000008 + -0x70));
  if (iVar5 == 0) {
    return;
  }
  if (*(long *)((long)register0x00000008 + -0x60) != 0) {
    lVar7 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar6 + 0x78) == 0) {
      if (lVar7 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar7 == 0) goto LAB_01642a84;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar7,0,0);
    }
    lVar13 = *(long *)(lVar7 + 0x80);
    if (lVar13 == 0) {
      return;
    }
    uVar12 = 0;
    do {
      if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar12) {
        return;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      Core_DebugMenu_DebugMenu__HidePanel
                (0,lVar6,*(undefined4 *)(*(long *)(lVar13 + 0x10) + uVar12 * 4 + 0x20));
      uVar12 = uVar12 + 1;
      lVar13 = *(long *)(lVar7 + 0x80);
    } while (lVar13 != 0);
  }
LAB_01642a84:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1642dac | Core.DebugMenu.DebugMenu.PopPanelToFirst
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__PopPanelToFirst(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar12;
  long *unaff_x21;
  long lVar13;
  ulong unaff_x22;
  undefined8 uVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  
  auVar4._8_8_ = unaff_x19;
  auVar4._0_8_ = unaff_x20;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
Core_DebugMenu_DebugMenu__PopPanels:
  auVar3 = auVar15;
  uVar11 = auVar3._8_8_;
  lVar10 = auVar3._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar4;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_x22 = 1;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (lVar10,uVar11,1,(undefined1 *)((long)register0x00000008 + -0x70));
  if (iVar5 == 0) {
    return;
  }
  unaff_x21 = *(long **)((long)register0x00000008 + -0x58);
  plVar8 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    uVar9 = 0x3d21150;
    uVar14 = 0x3d21150;
    unaff_x23 = uVar9;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar6 = unaff_x21[0xf];
      unaff_x24 = uVar1;
      if (lVar6 == 0) goto LAB_01642da0;
      uVar2 = *(int *)(lVar6 + 0x18) - 1;
      unaff_x22 = (ulong)uVar2;
      if ((int)uVar2 < 1) goto LAB_01642d30;
      do {
        unaff_x23 = uVar14;
        unaff_x24 = uVar1;
        if (lVar6 == 0) goto LAB_01642da0;
        uVar7 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar6,uRam0000000003d403d8);
        iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (lVar10,uVar7,1,(undefined1 *)((long)register0x00000008 + -0xa0));
        if (iVar5 != 0) {
          plVar8 = *(long **)((long)register0x00000008 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar8 == (long *)0x0) goto LAB_01642da0;
          unaff_x23 = uVar9;
          unaff_x24 = uVar1;
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar8[0xf] = 0;
        }
        lVar6 = unaff_x21[0xf];
        uVar2 = (int)unaff_x22 - 1;
        unaff_x22 = (ulong)uVar2;
      } while (uVar2 != 0);
      unaff_x23 = uVar14;
      unaff_x24 = 0x3d403d8;
      if (lVar6 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar8 = unaff_x21;
LAB_01642da8:
  unaff_x30 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar15 = func_0x00f78e5c(plVar8);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  auVar4 = auVar3;
  goto Core_DebugMenu_DebugMenu__PopPanels;
LAB_01642d30:
  if (0 < *(int *)(lVar6 + 0x18)) {
    uVar9 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar6,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar10,uVar9);
  }
  unaff_x21[0xf] = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar6 = lVar10;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar6 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  if (auVar3._8_4_ == -1) {
    return;
  }
  /*Core.DebugMenu.DebugMenu$$RemoveFromFirstListAndAddToSecond*/ func_0x01642db4(0,lVar6,*(undefined8 *)(lVar10 + 0x50),*(undefined8 *)(lVar10 + 0x58),uVar11);
  iVar5 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (lVar10,uVar11,1,(undefined1 *)((long)register0x00000008 + -0x70));
  if (iVar5 == 0) {
    return;
  }
  if (*(long *)((long)register0x00000008 + -0x60) != 0) {
    lVar6 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar10 + 0x78) == 0) {
      if (lVar6 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar6 == 0) goto LAB_01642a84;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar6,0,0);
    }
    lVar13 = *(long *)(lVar6 + 0x80);
    if (lVar13 == 0) {
      return;
    }
    uVar12 = 0;
    do {
      if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar12) {
        return;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      Core_DebugMenu_DebugMenu__HidePanel
                (0,lVar10,*(undefined4 *)(*(long *)(lVar13 + 0x10) + uVar12 * 4 + 0x20));
      uVar12 = uVar12 + 1;
      lVar13 = *(long *)(lVar6 + 0x80);
    } while (lVar13 != 0);
  }
LAB_01642a84:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1642db4 | Core.DebugMenu.DebugMenu.RemoveFromFirstListAndAddToSecond
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
                (uint param_1,ulong param_2,long *param_3,ulong param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined1 ****ppppuVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint extraout_w8;
  long lVar14;
  long extraout_x9;
  int *piVar15;
  ulong unaff_x19;
  ulong unaff_x20;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *unaff_x23;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 unaff_x24;
  undefined1 *puVar24;
  undefined1 **ppuVar25;
  undefined *puVar26;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  long *plStack_110;
  long *plStack_108;
  undefined1 auStack_100 [16];
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppppuVar2 = (undefined1 ****)&stack0xffffffffffffffb0;
  plVar20 = (long *)0x3eb5000;
  if ((bRam0000000003eb5729 & 1) == 0) {
    func_0x00f78a20(0x3d3cfb0);
    func_0x00f78a20(0x3d3cfc0);
    func_0x00f78a20(0x3d3cfc8);
    param_2 = func_0x00f78a20(0x3d3cfd0);
    bRam0000000003eb5729 = 1;
  }
  if (param_3 != (long *)0x0) {
    uVar13 = *(uint *)(param_3 + 3);
    if (0 < (int)uVar13) {
      plVar20 = (long *)0x0;
      unaff_x23 = (long *)0x3d3cfc0;
      do {
        uVar18 = (uint)plVar20;
        if (uVar13 <= uVar18) {
          param_2 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(param_3[2] + (long)(int)uVar18 * 8 + 0x24) == (int)param_5) {
          param_2 = /*System.Collections.Generic.List<DebugMenu.DelayedId>$$RemoveAt*/ func_0x02515fbc(param_3,plVar20,uRam0000000003d3cfc0);
          uVar18 = uVar18 - 1;
        }
        plVar20 = (long *)(ulong)(uVar18 + 1);
        uVar13 = *(uint *)(param_3 + 3);
      } while ((int)(uVar18 + 1) < (int)uVar13);
    }
    if (param_4 != 0) {
      uVar13 = *(uint *)(param_4 + 0x18);
      if (0 < (int)uVar13) {
        uVar18 = 0;
        do {
          if (uVar13 <= uVar18) {
            param_2 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(int *)(*(long *)(param_4 + 0x10) + (long)(int)uVar18 * 8 + 0x24) == (int)param_5) {
            return param_2;
          }
          uVar18 = uVar18 + 1;
          uVar13 = *(uint *)(param_4 + 0x18);
        } while ((int)uVar18 < (int)uVar13);
      }
      uVar4 = (ulong)param_1 | param_5 << 0x20;
      lVar14 = *(long *)(param_4 + 0x10);
      puVar12 = puRam0000000003d3cfb0;
      if (lVar14 == 0) {
code_r0x0251481c:
        uVar4 = unaff_x20;
        param_4 = unaff_x19;
        uVar7 = func_0x00f78af4();
        lVar14 = extraout_x9;
        uVar13 = extraout_w8;
code_r0x02514820:
        *(uint *)(param_4 + 0x18) = uVar13 + 1;
      }
      else {
        uVar13 = *(uint *)(param_4 + 0x18);
        uVar7 = param_4;
        if (uVar13 != *(uint *)(lVar14 + 0x18)) goto code_r0x02514820;
        puVar12 = *(undefined8 **)(*(long *)(puRam0000000003d3cfb0[3] + 0xc0) + 0x60);
        uVar7 = (*(code *)*puVar12)(param_4,uVar13 + 1);
        lVar14 = *(long *)(param_4 + 0x10);
        uVar13 = *(uint *)(param_4 + 0x18);
        *(uint *)(param_4 + 0x18) = uVar13 + 1;
        unaff_x19 = param_4;
        unaff_x20 = uVar4;
        if (lVar14 == 0) goto code_r0x0251481c;
      }
      if (uVar13 < *(uint *)(lVar14 + 0x18)) {
        *(ulong *)(lVar14 + (long)(int)uVar13 * 8 + 0x20) = uVar4;
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
        return uVar7;
      }
      uVar8 = func_0x00f78b24();
      auVar28 = func_0x00f78ac0(uVar8,0);
      plVar20 = auVar28._8_8_;
      lVar14 = auVar28._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x48))(plVar20,0x14);
      if (lVar14 != 0) {
        pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x28);
        lVar21 = *(long *)(*(long *)(puVar12[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        if (plVar20 != (long *)0x0) {
          if (*(long *)(*plVar20 + 0x40) == *(long *)(lVar21 + 0x40)) {
            puVar9 = (undefined8 *)func_0x00f78ae4(plVar20);
            (*pcVar22)(lVar14,*puVar9,*(undefined8 *)(*(long *)(puVar12[3] + 0xc0) + 0x28));
            iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x68))(lVar14);
            return (ulong)(iVar3 - 1);
          }
          func_0x00f78e5c(plVar20,lVar21);
          goto code_r0x02514a04;
        }
      }
      func_0x00f78af4();
code_r0x02514a04:
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x2514a08);
      (*pcVar22)();
    }
  }
  auVar28 = func_0x00f78af4();
  uVar8 = auVar28._8_8_;
  uVar4 = auVar28._0_8_;
  puStack_58 = &Core_DebugMenu_DebugMenu__ButtonPressed;
  lStack_70 = param_5;
  uStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb572a & 1) == 0) {
    func_0x00f78a20(0x3d535b0);
    bRam0000000003eb572a = 1;
  }
  plStack_a8 = (long *)0x0;
  uStack_b0 = (long *)0x0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar4,uVar8,2,&uStack_b0);
  if (((uVar7 & 1) == 0) &&
     (uVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar4,uVar8,3,&uStack_b0), (int)uVar7 == 0
     )) {
    return uVar7;
  }
  if ((plStack_a0 == (long *)0x0) ||
     (uVar7 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plStack_a0,uRam0000000003d535b0), uVar7 == 0)) {
    auVar30 = func_0x00f78af4();
    puStack_b8 = &Core_DebugMenu_DebugMenu__MinimiseButtonPressed;
    auStack_d0._0_8_ = uVar8;
    auStack_d0._8_8_ = uVar4;
    ppuStack_c0 = &puStack_60;
    uVar4 = Core_DebugMenu_DebugMenu__HidePanel(0);
    *(int *)(auVar30._0_8_ + 0x60) = auVar30._8_4_;
    return uVar4;
  }
  uVar6 = uVar7;
  if (*(int *)(uVar7 + 0x28) != -1) {
    uVar6 = Core_DebugMenu_DebugMenu__PushPanel(uVar4,*(int *)(uVar7 + 0x28),uStack_b0._4_4_);
  }
  uVar13 = *(uint *)(uVar7 + 0x2c);
  plVar10 = (long *)(ulong)uVar13;
  if (uVar13 == 0xffffffff) {
    return uVar6;
  }
  plVar16 = (long *)0xffffffff;
  if ((bRam0000000003eb5724 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403e0);
    func_0x00f78a20(0x3d403c8);
    func_0x00f78a20(0x3d1e880);
    bRam0000000003eb5724 = 1;
  }
  plStack_a0 = (long *)0x0;
  puStack_b8 = (undefined *)0x0;
  ppuStack_c0 = (undefined1 **)0x0;
  plStack_a8 = (long *)0x0;
  uStack_b0 = (long *)0x0;
  auStack_d0._0_8_ = 0;
  puStack_e8 = (undefined *)0x0;
  pppuStack_f0 = (undefined1 ***)0x0;
  plStack_d8 = (long *)0x0;
  uStack_e0 = 0;
  plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
  uVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar4,plVar10,1,&ppuStack_c0);
  plVar19 = plStack_a8;
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  uVar8 = unaff_x24;
  if (plStack_a8 == (long *)0x0) {
LAB_0163f550:
    func_0x00f78af4();
    unaff_x24 = uVar8;
code_r0x0163f554:
    param_3 = plVar16;
    uVar6 = func_0x00f78e5c(unaff_x23);
    ppppuVar2 = (undefined1 ****)&plStack_110;
    auStack_100._8_8_ = Core_DebugMenu_DebugMenu__HideAllPanels;
    ppuVar25 = (undefined1 **)auStack_100;
    auVar29._8_8_ = uVar6;
    auVar29._0_8_ = 0x3eb5000;
    uVar7 = uVar6;
    plStack_110 = plVar10;
    plStack_108 = (long *)uVar4;
    auStack_100._0_8_ = &puStack_60;
    if ((bRam0000000003eb5705 & 1) == 0) {
      func_0x00f78a20(0x3d3cfc8);
      uVar7 = func_0x00f78a20(0x3d3cfd0);
      bRam0000000003eb5705 = 1;
    }
    auVar1._8_8_ = plStack_108;
    auVar1._0_8_ = plStack_110;
    lVar14 = *(long *)(uVar6 + 0x50);
    if (lVar14 == 0) {
      pcVar22 = Core_DebugMenu_DebugMenu__PopAll;
      auVar27 = func_0x00f78af4();
      plVar11 = (long *)0x0;
    }
    else {
      if (*(int *)(lVar14 + 0x18) < 1) {
        return uVar7;
      }
      auVar27._8_4_ =
           *(undefined4 *)
            (*(long *)(lVar14 + 0x10) + (ulong)(*(int *)(lVar14 + 0x18) - 1) * 8 + 0x24);
      auVar27._0_8_ = uVar6;
      auVar27._12_4_ = 0;
      plVar11 = (long *)0x0;
      ppppuVar2 = &pppuStack_f0;
      ppuVar25 = (undefined1 **)auStack_100._0_8_;
      pcVar22 = (code *)auStack_100._8_8_;
      auVar29 = auVar1;
    }
  }
  else {
    uVar8 = 0x3d21150;
    uVar23 = 0x3d21150;
    if ((*(byte *)(*plStack_a8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plStack_a8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      func_0x00f78e5c(plStack_a8);
      uVar8 = uVar23;
      goto LAB_0163f550;
    }
    if (plStack_a8[0xf] == 0) {
      iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar4,0xffffffff,1,&pppuStack_f0);
      plVar11 = plStack_d8;
      if (iVar3 == 0) {
        plVar16 = (long *)func_0x00f78aec(/*System.Collections.Generic.Stack<int>_TypeInfo*/ uRam0000000003d1e880);
        /*System.Collections.Generic.Stack<int>$$.ctor*/ func_0x028641f8(plVar16,uRam0000000003d403c8);
        plVar19[0xf] = (long)plVar16;
        uVar8 = uVar23;
        if (plVar16 != (long *)0x0) {
          /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(plVar16,plVar10,uRam0000000003d403e0);
          if ((plVar19[5] != 0) && (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar19[5],0), lVar14 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,0,0);
            uVar7 = uVar4;
            if ((bRam0000000003eb5727 & 1) == 0) {
              func_0x00f78a20(0x3d535c0);
              func_0x00f78a20(0x3d3acd0);
              uVar7 = func_0x00f78a20(0x3d3acd8);
              bRam0000000003eb5727 = 1;
            }
            plStack_a0 = (long *)0x0;
            puStack_b8 = (undefined *)0x0;
            ppuStack_c0 = (undefined1 **)0x0;
            plStack_a8 = (long *)0x0;
            uStack_b0 = (long *)0x0;
            if (uVar13 == 0xffffffff) {
              return uVar7;
            }
            Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
                      (0,uVar7,*(undefined8 *)(uVar4 + 0x58),*(undefined8 *)(uVar4 + 0x50),plVar10);
            plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
            uVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar4,plVar10,1,&ppuStack_c0);
            if ((int)uVar7 == 0) {
              return uVar7;
            }
            if (uStack_b0 != (long *)0x0) {
              plVar10 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(uStack_b0,uRam0000000003d535c0);
              if (*(long *)(uVar4 + 0x78) == 0) {
                if (plVar10 != (long *)0x0) goto LAB_016428ec;
              }
              else if (plVar10 != (long *)0x0) {
                plVar11 = (long *)0x0;
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar10,1);
LAB_016428ec:
                lVar14 = plVar10[0x10];
                if (lVar14 == 0) goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
                uVar7 = 0;
                do {
                  if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar7)
                  goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
                  if (*(uint *)(lVar14 + 0x18) <= uVar7) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  Core_DebugMenu_DebugMenu__ShowPanel
                            (0,uVar4,*(undefined4 *)(*(long *)(lVar14 + 0x10) + uVar7 * 4 + 0x20));
                  uVar7 = uVar7 + 1;
                  lVar14 = plVar10[0x10];
                } while (lVar14 != 0);
              }
            }
            func_0x00f78af4();
            goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
          }
        }
        goto LAB_0163f550;
      }
      unaff_x23 = plVar11;
      if (plStack_d8 == (long *)0x0) goto LAB_0163f550;
      unaff_x24 = uVar8;
      if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*plStack_d8 + 300)) &&
         (*(long *)(*(long *)(*plStack_d8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
        if (plStack_d8[0xf] == 0) {
          return 0;
        }
        uVar7 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(plStack_d8[0xf],uRam0000000003d403d0);
        if ((int)uVar7 != -1) {
          return uVar7;
        }
        lVar14 = plVar11[0xf];
        plVar19[0xf] = lVar14;
        if (lVar14 != 0) {
          /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(lVar14,plVar10,uRam0000000003d403e0);
          uVar8 = uVar23;
          if ((plVar19[5] != 0) && (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar19[5],0), lVar14 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0);
            Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,uVar4,plVar10);
            auVar28._8_8_ = 0xffffffff;
            auVar28._0_8_ = uVar4;
            uVar4 = uStack_68;
            lVar14 = lStack_70;
            puVar24 = puStack_60;
            puVar26 = puStack_58;
            goto code_r0x0164295c;
          }
        }
        goto LAB_0163f550;
      }
      goto code_r0x0163f554;
    }
    plVar10 = plStack_a8;
    if (*(long *)(uVar4 + 0x78) == 0) {
      return uVar7;
    }
Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild:
    uVar8 = 0x3eb5000;
    if ((bRam0000000003eb5734 & 1) == 0) {
      func_0x00f78a20(0x3d535e8);
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5734 = 1;
    }
    if (plVar10[8] != 0) {
      uVar8 = 0x3d23000;
      plVar10 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar10[8],uRam0000000003d535e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar10,0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if (plVar10 != (long *)0x0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar10,1,0);
        plVar11 = *(long **)(*plVar10 + 0x380);
        (**(code **)(*plVar10 + 0x378))(plVar10,0);
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        plVar16 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar10,0);
        uVar8 = 0;
        if (lVar14 != 0) {
          uVar8 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar14,plVar16,0);
          if ((bRam0000000003ec2c3f & 1) == 0) {
            func_0x00f78a20(0x3d210d8);
            func_0x00f78a20(0x3d560a8);
            func_0x00f78a20(0x3d560f0);
            func_0x00f78a20(0x3d21718);
            func_0x00f78a20(0x3d23990);
            func_0x00f78a20(0x3d69450);
            func_0x00f78a20(0x3d7c748);
            bRam0000000003ec2c3f = 1;
          }
          uVar23 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
          if (*(char *)(lVar14 + 0x41) == '\0') {
            *(undefined1 *)(lVar14 + 0x41) = 1;
            uVar23 = *(undefined8 *)(lVar14 + 0x38);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar16,uVar23,0);
            if ((int)uVar4 == 0) {
              uVar23 = *(undefined8 *)(lVar14 + 0x38);
              if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (cRam0000000003e85071 == '\0') {
                func_0x00f78a20(0x3d21718);
                cRam0000000003e85071 = '\x01';
              }
              if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar23,uVar8,
                              *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                              uRam0000000003d560a8);
              *(long **)(lVar14 + 0x38) = plVar16;
              if (cRam0000000003e85072 == '\0') {
                func_0x00f78a20(0x3d21718);
                cRam0000000003e85072 = '\x01';
              }
              if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar4 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar16,uVar8,
                                      *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60)
                                      ,uRam0000000003d560f0);
            }
            *(undefined1 *)(lVar14 + 0x41) = 0;
            return uVar4;
          }
          if (plVar16 == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
          }
          uVar5 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
          uVar8 = /*System.String$$Concat*/ func_0x029be39c(uVar23,uVar8,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar23 = 0;
          if ((bRam0000000003ebf392 & 1) == 0) {
            func_0x00f78a20(0x3d210d8,0);
            func_0x00f78a20(0x3d22300);
            bRam0000000003ebf392 = 1;
            uVar23 = extraout_x1;
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
            uVar23 = extraout_x1_00;
          }
          if (cRam0000000003ca34ff == '\0') {
            func_0x00f78a20(0x3d210d8,uVar23);
            cRam0000000003ca34ff = '\x01';
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar10 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar10 == (long *)0x0) {
            auVar28 = func_0x00f78af4();
            plStack_a8 = (long *)0x3ca3000;
            uStack_b0 = plVar20;
            plStack_a0 = plVar10;
            uStack_98 = uVar8;
            if ((bRam0000000003ebf393 & 1) == 0) {
              func_0x00f78a20(0x3d210d8);
              func_0x00f78a20(0x3d22300);
              bRam0000000003ebf393 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (cRam0000000003ca34ff == '\0') {
              func_0x00f78a20(0x3d210d8);
              cRam0000000003ca34ff = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar20 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar20 == (long *)0x0) {
              auVar29 = func_0x00f78af4();
              uStack_e0 = 0x3ca3000;
              puStack_b8 = &UnityEngine_Debug__LogErrorFormat;
              plStack_d8 = plVar20;
              ppuStack_c0 = (undefined1 **)&stack0xffffffffffffff70;
              auStack_d0 = auVar28;
              if ((bRam0000000003ebf394 & 1) == 0) {
                func_0x00f78a20(0x3d210d8);
                func_0x00f78a20(0x3d22300);
                bRam0000000003ebf394 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (cRam0000000003ca34ff == '\0') {
                func_0x00f78a20(0x3d210d8);
                cRam0000000003ca34ff = '\x01';
              }
              if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar20 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar20 == (long *)0x0) {
                auVar28 = func_0x00f78af4();
                plStack_110 = (long *)0x3ca3000;
                puStack_e8 = &UnityEngine_Debug__LogErrorFormat;
                uVar8 = uVar5;
                plStack_108 = plVar20;
                pppuStack_f0 = &ppuStack_c0;
                auStack_100 = auVar29;
                if ((bRam0000000003ebf395 & 1) == 0) {
                  func_0x00f78a20(0x3d210d8);
                  func_0x00f78a20(0x3d222f8);
                  bRam0000000003ebf395 = 1;
                }
                if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                if (cRam0000000003ca34ff == '\0') {
                  func_0x00f78a20(0x3d210d8);
                  cRam0000000003ca34ff = '\x01';
                }
                if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar20 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar20 == (long *)0x0) {
                  auVar28 = func_0x00f78af4();
                  if ((bRam0000000003ebf397 & 1) == 0) {
                    func_0x00f78a20(0x3d210d8);
                    func_0x00f78a20(0x3d222f8);
                    bRam0000000003ebf397 = 1;
                  }
                  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  if (cRam0000000003ca34ff == '\0') {
                    func_0x00f78a20(0x3d210d8);
                    cRam0000000003ca34ff = '\x01';
                  }
                  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  plVar20 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar20 == (long *)0x0) {
                    auVar28 = func_0x00f78af4();
                    if ((bRam0000000003ebf399 & 1) == 0) {
                      func_0x00f78a20(0x3d210d8);
                      func_0x00f78a20(0x3d22300);
                      bRam0000000003ebf399 = 1;
                    }
                    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    if (cRam0000000003ca34ff == '\0') {
                      func_0x00f78a20(0x3d210d8);
                      cRam0000000003ca34ff = '\x01';
                    }
                    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    plVar20 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar20 == (long *)0x0) {
                      auVar28 = func_0x00f78af4();
                      if ((bRam0000000003ebf39a & 1) == 0) {
                        func_0x00f78a20(0x3d210d8);
                        func_0x00f78a20(0x3d22300);
                        bRam0000000003ebf39a = 1;
                      }
                      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      if (cRam0000000003ca34ff == '\0') {
                        func_0x00f78a20(0x3d210d8);
                        cRam0000000003ca34ff = '\x01';
                      }
                      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar20 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar20 == (long *)0x0) {
                        auVar28 = func_0x00f78af4();
                        if ((bRam0000000003ebf39b & 1) == 0) {
                          func_0x00f78a20(0x3d210d8);
                          func_0x00f78a20(0x3d222f8);
                          bRam0000000003ebf39b = 1;
                        }
                        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        if (cRam0000000003ca34ff == '\0') {
                          func_0x00f78a20(0x3d210d8);
                          cRam0000000003ca34ff = '\x01';
                        }
                        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        plVar20 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                        if (plVar20 == (long *)0x0) {
                          func_0x00f78af4();
                          if (pcRam0000000003ebf3a0 == (code *)0x0) {
                            pcRam0000000003ebf3a0 =
                                 (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
                          }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar4 = (*pcRam0000000003ebf3a0)();
                          return uVar4;
                        }
                        lVar14 = *plVar20;
                        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar4 != 0) {
                          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                              puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                              goto code_r0x0322c0c4;
                            }
                            piVar15 = piVar15 + 4;
                            uVar4 = uVar4 - 1;
                          } while (uVar4 != 0);
                        }
                        puVar12 = (undefined8 *)func_0x00fac1f0(plVar20,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar4 = (*(code *)*puVar12)(plVar20,2,auVar28._0_8_,auVar28._8_8_,uVar8,
                                                    puVar12[1]);
                        return uVar4;
                      }
                      lVar14 = *plVar20;
                      uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar4 != 0) {
                        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                            goto code_r0x0322bf94;
                          }
                          piVar15 = piVar15 + 4;
                          uVar4 = uVar4 - 1;
                        } while (uVar4 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x00fac1f0(plVar20,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar4 = (*(code *)*puVar12)(plVar20,2,auVar28._0_8_,auVar28._8_8_,puVar12[1]);
                      return uVar4;
                    }
                    lVar14 = *plVar20;
                    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar4 != 0) {
                      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                          goto code_r0x0322be68;
                        }
                        piVar15 = piVar15 + 4;
                        uVar4 = uVar4 - 1;
                      } while (uVar4 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar20,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar4 = (*(code *)*puVar12)(plVar20,2,auVar28._0_8_,auVar28._8_8_,puVar12[1]);
                    return uVar4;
                  }
                  lVar14 = *plVar20;
                  uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar4 != 0) {
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                        puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                        goto code_r0x0322bd40;
                      }
                      piVar15 = piVar15 + 4;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar20,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar4 = (*(code *)*puVar12)(plVar20,auVar28._0_8_,auVar28._8_8_,puVar12[1]);
                  return uVar4;
                }
                lVar14 = *plVar20;
                uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar4 != 0) {
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                      goto code_r0x0322bc0c;
                    }
                    piVar15 = piVar15 + 4;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar20,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar4 = (*(code *)*puVar12)(plVar20,0,auVar28._0_8_,auVar28._8_8_,uVar5,puVar12[1]);
                return uVar4;
              }
              lVar14 = *plVar20;
              uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar4 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                    puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                    goto code_r0x0322badc;
                  }
                  piVar15 = piVar15 + 4;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar20,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar4 = (*(code *)*puVar12)(plVar20,0,auVar29._0_8_,auVar29._8_8_,puVar12[1]);
              return uVar4;
            }
            lVar14 = *plVar20;
            uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar4 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                  goto code_r0x0322b9b0;
                }
                piVar15 = piVar15 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar20,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (*(code *)*puVar12)(plVar20,0,auVar28._0_8_,auVar28._8_8_,puVar12[1]);
            return uVar4;
          }
          lVar14 = *plVar10;
          uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar4 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
                goto code_r0x0322b888;
              }
              piVar15 = piVar15 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar10,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)*puVar12)(plVar10,0,uVar8,puVar12[1]);
          return uVar4;
        }
      }
    }
    auVar29._8_8_ = plVar10;
    auVar29._0_8_ = uVar8;
    auVar27 = func_0x00f78af4();
    ppppuVar2 = (undefined1 ****)&lStack_70;
    plVar19 = plVar20;
    ppuVar25 = &puStack_60;
    pcVar22 = Core_DebugMenu_DebugMenu__PopPanels;
  }
code_r0x01642bc4:
  auVar28 = auVar27;
  uVar8 = auVar28._0_8_;
  *(undefined8 *)((long)ppppuVar2 + -0x40) = unaff_x24;
  *(long **)((long)ppppuVar2 + -0x38) = unaff_x23;
  *(long **)((long)ppppuVar2 + -0x30) = plVar19;
  *(long **)((long)ppppuVar2 + -0x28) = param_3;
  *(undefined1 (*) [16])((long)ppppuVar2 + -0x20) = auVar29;
  *(undefined1 ***)((long)ppppuVar2 + -0x10) = ppuVar25;
  *(code **)((long)ppppuVar2 + -8) = pcVar22;
  ppuVar25 = (undefined1 **)((long)ppppuVar2 + -0x10);
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)((long)ppppuVar2 + -0x50) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x68) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x70) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x58) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x60) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x80) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x98) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0xa0) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x88) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x90) = 0;
  uVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (uVar8,auVar28._8_8_,1,(undefined1 *)((long)ppppuVar2 + -0x70));
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  param_3 = *(long **)((long)ppppuVar2 + -0x58);
  plVar20 = param_3;
  if (param_3 != (long *)0x0) {
    plVar10 = (long *)0x3d21150;
    plVar16 = (long *)0x3d21150;
    plVar19 = plVar11;
    unaff_x23 = plVar10;
    if ((*(byte *)(*param_3 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8)
        != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (param_3[0xf] != 0) {
      uVar23 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(param_3[0xf],uRam0000000003d403d8);
      lVar14 = param_3[0xf];
      unaff_x24 = uVar23;
      if (lVar14 == 0) goto LAB_01642da0;
      uVar13 = *(int *)(lVar14 + 0x18) - (int)plVar11;
      plVar11 = (long *)(ulong)uVar13;
      if ((int)uVar13 < 1) goto LAB_01642d30;
      do {
        unaff_x23 = plVar16;
        unaff_x24 = uVar23;
        if (lVar14 == 0) goto LAB_01642da0;
        uVar5 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar14,uRam0000000003d403d8);
        iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (uVar8,uVar5,1,(undefined1 *)((long)ppppuVar2 + -0xa0));
        if (iVar3 != 0) {
          plVar20 = *(long **)((long)ppppuVar2 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar20 == (long *)0x0) goto LAB_01642da0;
          plVar19 = plVar11;
          unaff_x23 = plVar10;
          unaff_x24 = uVar23;
          if ((*(byte *)(*plVar20 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar20[0xf] = 0;
        }
        lVar14 = param_3[0xf];
        uVar13 = (int)plVar11 - 1;
        plVar11 = (long *)(ulong)uVar13;
      } while (uVar13 != 0);
      unaff_x23 = plVar16;
      unaff_x24 = 0x3d403d8;
      if (lVar14 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar20 = param_3;
  plVar19 = plVar11;
LAB_01642da8:
  auVar27 = func_0x00f78e5c(plVar20);
  plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
  ppppuVar2 = (undefined1 ****)((long)ppppuVar2 + -0xa0);
  pcVar22 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar29 = auVar28;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar14 + 0x18)) {
    uVar23 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar14,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,uVar8,uVar23);
  }
  param_3[0xf] = 0;
  plVar20 = *(long **)((long)ppppuVar2 + -0x30);
  param_3 = *(long **)((long)ppppuVar2 + -0x28);
  uVar4 = *(ulong *)((long)ppppuVar2 + -0x18);
  lVar14 = *(long *)((long)ppppuVar2 + -0x20);
  puVar24 = *(undefined1 **)((long)ppppuVar2 + -0x10);
  puVar26 = *(undefined **)((long)ppppuVar2 + -8);
code_r0x0164295c:
  uVar7 = auVar28._0_8_;
  *(undefined8 *)((long)ppppuVar2 + -0x40) = unaff_d9;
  *(ulong *)((long)ppppuVar2 + -0x38) = (ulong)param_1;
  *(long **)((long)ppppuVar2 + -0x30) = plVar20;
  *(long **)((long)ppppuVar2 + -0x28) = param_3;
  *(long *)((long)ppppuVar2 + -0x20) = lVar14;
  *(ulong *)((long)ppppuVar2 + -0x18) = uVar4;
  *(undefined1 **)((long)ppppuVar2 + -0x10) = puVar24;
  *(undefined **)((long)ppppuVar2 + -8) = puVar26;
  uVar4 = uVar7;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    uVar4 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)((long)ppppuVar2 + -0x50) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x68) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x70) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x58) = 0;
  *(undefined8 *)((long)ppppuVar2 + -0x60) = 0;
  if (auVar28._8_4_ == -1) {
    return uVar4;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,uVar4,*(undefined8 *)(uVar7 + 0x50),*(undefined8 *)(uVar7 + 0x58),auVar28._8_8_);
  uVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (uVar7,auVar28._8_8_,1,(undefined1 *)((long)ppppuVar2 + -0x70));
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (*(long *)((long)ppppuVar2 + -0x60) != 0) {
    uVar4 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)ppppuVar2 + -0x60),uRam0000000003d535c0);
    if (*(long *)(uVar7 + 0x78) == 0) {
      uVar6 = uVar4;
      if (uVar4 == 0) goto LAB_01642a84;
    }
    else {
      if (uVar4 == 0) goto LAB_01642a84;
      uVar6 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(uVar4,0,0);
    }
    lVar14 = *(long *)(uVar4 + 0x80);
    if (lVar14 == 0) {
      return uVar6;
    }
    uVar17 = 0;
    do {
      if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar17) {
        return uVar6;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar17) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar6 = Core_DebugMenu_DebugMenu__HidePanel
                        (0,uVar7,*(undefined4 *)(*(long *)(lVar14 + 0x10) + uVar17 * 4 + 0x20));
      uVar17 = uVar17 + 1;
      lVar14 = *(long *)(uVar4 + 0x80);
    } while (lVar14 != 0);
  }
LAB_01642a84:
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x1642f18 | Core.DebugMenu.DebugMenu.ButtonPressed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1643008 | Core.DebugMenu.DebugMenu.MinimiseButtonPressed
// ============================================================

void Core_DebugMenu_DebugMenu__MinimiseButtonPressed(long param_1,undefined4 param_2)

{
  Core_DebugMenu_DebugMenu__HidePanel(0);
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643034 | Core.DebugMenu.DebugMenu.BackButtonPressed
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Core_DebugMenu_DebugMenu__BackButtonPressed(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  
  puVar5 = &uStack_60;
  if ((bRam0000000003eb5725 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5725 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plStack_48 = (long *)0x0;
  uStack_50 = 0;
  uVar4 = 1;
  uVar2 = Core_DebugMenu_DebugMenu__TryGetElementCopy(param_1,param_2,1,&uStack_60);
  plVar1 = plStack_48;
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (plStack_48 != (long *)0x0) {
    if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*plStack_48 + 300)) &&
       (*(long *)(*(long *)(*plStack_48 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      lVar3 = plStack_48[0xf];
      if (lVar3 != 0) {
        if (1 < *(int *)(lVar3 + 0x18)) {
          /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar3,uRam0000000003d403d8);
          lVar3 = plVar1[0xf];
          if (lVar3 == 0) goto LAB_0163f7b0;
          uVar2 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar3,uRam0000000003d403d0);
          Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,param_1,uVar2);
        }
        plVar1[0xf] = 0;
      }
      uVar2 = Core_DebugMenu_DebugMenu__HidePanel(0,param_1,param_2);
      if (*(int *)(param_1 + 0x60) != (int)param_2) {
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
      return uVar2;
    }
    func_0x00f78e5c(plStack_48);
  }
LAB_0163f7b0:
  auVar6 = func_0x00f78af4();
  uVar2 = Core_DebugMenu_DebugMenu__AddPanel
                    (0,0,(float)CONCAT13(extraout_var_01,
                                         CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)
                                                 )) * 1000.0 * _UNK_033f7d80,auVar6._0_8_,1);
  Core_DebugMenu_DebugMenu__AddButton
            (0,auVar6._0_8_,auVar6._8_8_,uVar4,1,0,puVar5,uVar2,0xffffffff,0);
  return uVar2;
}



// ============================================================
// RVA: 0x1643038 | Core.DebugMenu.DebugMenu.CloseButtonPressed
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenu__CloseButtonPressed(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long lVar14;
  ulong unaff_x22;
  undefined8 uVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  
  auVar4._8_8_ = unaff_x19;
  auVar4._0_8_ = unaff_x20;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  uVar13 = 0;
  puVar5 = (undefined1 *)register0x00000008;
Core_DebugMenu_DebugMenu__PopPanels:
  auVar3 = auVar16;
  uVar12 = auVar3._8_8_;
  lVar7 = auVar3._0_8_;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar5 + -0x20) = auVar4;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(code **)(puVar5 + -8) = unaff_x30;
  unaff_x29 = puVar5 + -0x10;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar5 + -0x50) = 0;
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  *(undefined8 *)(puVar5 + -0x80) = 0;
  *(undefined8 *)(puVar5 + -0x98) = 0;
  *(undefined8 *)(puVar5 + -0xa0) = 0;
  *(undefined8 *)(puVar5 + -0x88) = 0;
  *(undefined8 *)(puVar5 + -0x90) = 0;
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar12,1,puVar5 + -0x70);
  if (iVar6 == 0) {
    return;
  }
  unaff_x21 = *(long **)(puVar5 + -0x58);
  plVar10 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    uVar11 = 0x3d21150;
    uVar15 = 0x3d21150;
    unaff_x22 = uVar13;
    unaff_x23 = uVar11;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar8 = unaff_x21[0xf];
      unaff_x24 = uVar1;
      if (lVar8 == 0) goto LAB_01642da0;
      uVar2 = *(int *)(lVar8 + 0x18) - (int)uVar13;
      uVar13 = (ulong)uVar2;
      if ((int)uVar2 < 1) goto LAB_01642d30;
      do {
        unaff_x23 = uVar15;
        unaff_x24 = uVar1;
        if (lVar8 == 0) goto LAB_01642da0;
        uVar9 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar8,uRam0000000003d403d8);
        iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar9,1,puVar5 + -0xa0);
        if (iVar6 != 0) {
          plVar10 = *(long **)(puVar5 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar10 == (long *)0x0) goto LAB_01642da0;
          unaff_x22 = uVar13;
          unaff_x23 = uVar11;
          unaff_x24 = uVar1;
          if ((*(byte *)(*plVar10 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar10[0xf] = 0;
        }
        lVar8 = unaff_x21[0xf];
        uVar2 = (int)uVar13 - 1;
        uVar13 = (ulong)uVar2;
      } while (uVar2 != 0);
      unaff_x23 = uVar15;
      unaff_x24 = 0x3d403d8;
      if (lVar8 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar10 = unaff_x21;
  unaff_x22 = uVar13;
LAB_01642da8:
  unaff_x30 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar16 = func_0x00f78e5c(plVar10);
  uVar13 = 1;
  puVar5 = puVar5 + -0xa0;
  auVar4 = auVar3;
  goto Core_DebugMenu_DebugMenu__PopPanels;
LAB_01642d30:
  if (0 < *(int *)(lVar8 + 0x18)) {
    uVar11 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar8,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar7,uVar11);
  }
  unaff_x21[0xf] = 0;
  *(undefined8 *)(puVar5 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  lVar8 = lVar7;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar8 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)(puVar5 + -0x50) = 0;
  *(undefined8 *)(puVar5 + -0x68) = 0;
  *(undefined8 *)(puVar5 + -0x70) = 0;
  *(undefined8 *)(puVar5 + -0x58) = 0;
  *(undefined8 *)(puVar5 + -0x60) = 0;
  if (auVar3._8_4_ == -1) {
    return;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,lVar8,*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58),uVar12);
  iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar7,uVar12,1,puVar5 + -0x70);
  if (iVar6 == 0) {
    return;
  }
  if (*(long *)(puVar5 + -0x60) != 0) {
    lVar8 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar5 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar7 + 0x78) == 0) {
      if (lVar8 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar8 == 0) goto LAB_01642a84;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar8,0,0);
    }
    lVar14 = *(long *)(lVar8 + 0x80);
    if (lVar14 == 0) {
      return;
    }
    uVar13 = 0;
    do {
      if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar13) {
        return;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar13) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      Core_DebugMenu_DebugMenu__HidePanel
                (0,lVar7,*(undefined4 *)(*(long *)(lVar14 + 0x10) + uVar13 * 4 + 0x20));
      uVar13 = uVar13 + 1;
      lVar14 = *(long *)(lVar8 + 0x80);
    } while (lVar14 != 0);
  }
LAB_01642a84:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1643040 | Core.DebugMenu.DebugMenu.GetNextIdAndIncrement
// ============================================================

int Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  return iVar1;
}



// ============================================================
// RVA: 0x1643054 | Core.DebugMenu.DebugMenu.OnOpacitySliderChange
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Core_DebugMenu_DebugMenu__OnOpacitySliderChange(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 != 0) {
    param_1 = param_1 * _UNK_033f7d80;
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*pcRam0000000003ec2fc0)(param_1,lVar1);
    return auVar3;
  }
  auVar3._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb572c & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb572c = 1;
  }
  *(undefined8 *)(auVar3._0_8_ + 0x38) = 0xffffffffffffffff;
  *(undefined4 *)(auVar3._0_8_ + 0x60) = 0xffffffff;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
  *(undefined8 *)(auVar3._0_8_ + 0x68) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x1643080 | Core.DebugMenu.DebugMenu..ctor
// ============================================================

undefined1  [16] Core_DebugMenu_DebugMenu___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb572c & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb572c = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x1643108 | Core.DebugMenu.DebugMenu..cctor
// ============================================================

/* WARNING: Possible PIC construction at 0x01643584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01643660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01643664) */
/* WARNING: Removing unreachable block (ram,0x01643698) */
/* WARNING: Removing unreachable block (ram,0x0164369c) */
/* WARNING: Removing unreachable block (ram,0x016436b0) */
/* WARNING: Removing unreachable block (ram,0x016436bc) */
/* WARNING: Removing unreachable block (ram,0x016436c8) */
/* WARNING: Removing unreachable block (ram,0x016436d4) */
/* WARNING: Removing unreachable block (ram,0x016436f8) */
/* WARNING: Removing unreachable block (ram,0x01643710) */
/* WARNING: Removing unreachable block (ram,0x0164371c) */
/* WARNING: Removing unreachable block (ram,0x01643724) */
/* WARNING: Removing unreachable block (ram,0x01643588) */
/* WARNING: Removing unreachable block (ram,0x016435cc) */
/* WARNING: Removing unreachable block (ram,0x016435d0) */
/* WARNING: Removing unreachable block (ram,0x016435e4) */
/* WARNING: Removing unreachable block (ram,0x016435ec) */
/* WARNING: Removing unreachable block (ram,0x016435f8) */
/* WARNING: Removing unreachable block (ram,0x01643600) */
/* WARNING: Removing unreachable block (ram,0x0164362c) */
/* WARNING: Removing unreachable block (ram,0x01643644) */
/* WARNING: Removing unreachable block (ram,0x0164364c) */
/* WARNING: Removing unreachable block (ram,0x01643654) */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu___cctor(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar7;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  int extraout_var;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar22;
  undefined1 *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char acStack_158 [120];
  undefined1 auStack_e0 [8];
  char acStack_d8 [48];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb572d & 1) == 0) {
    func_0x00f78a20(0x3d21118);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6b8f8);
    func_0x00f78a20(0x3d6b908);
    func_0x00f78a20(0x3d6b958);
    func_0x00f78a20(0x3d6b928);
    func_0x00f78a20(0x3d6b910);
    func_0x00f78a20(0x3d6b8f0);
    func_0x00f78a20(0x3d6b900);
    func_0x00f78a20(0x3d6b920);
    func_0x00f78a20(0x3d6b930);
    func_0x00f78a20(0x3d6b918);
    bRam0000000003eb572d = 1;
  }
  plVar8 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,9);
  if (plVar8 != (long *)0x0) {
    if ((/*STR('Debug/DebugUICanvas')*/ lRam0000000003d6b8f8 == 0) ||
       (lVar9 = func_0x00f78adc(/*STR('Debug/DebugUICanvas')*/ lRam0000000003d6b8f8,*(undefined8 *)(*plVar8 + 0x40)), lVar9 != 0))
    {
      uVar19 = plVar8[3];
      if ((int)uVar19 != 0) {
        plVar8[4] = /*STR('Debug/DebugUICanvas')*/ lRam0000000003d6b8f8;
        if (/*STR('Debug/DebugUIPanel')*/ lRam0000000003d6b918 != 0) {
          lVar9 = func_0x00f78adc(/*STR('Debug/DebugUIPanel')*/ lRam0000000003d6b918,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_01643400;
          uVar19 = plVar8[3];
        }
        if ((uVar19 & 0xfffffffe) != 0) {
          plVar8[5] = /*STR('Debug/DebugUIPanel')*/ lRam0000000003d6b918;
          if (/*STR('Debug/DebugUIButton')*/ lRam0000000003d6b8f0 != 0) {
            lVar9 = func_0x00f78adc(/*STR('Debug/DebugUIButton')*/ lRam0000000003d6b8f0,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar9 == 0) goto LAB_01643400;
            uVar19 = plVar8[3];
          }
          if (2 < (uint)uVar19) {
            plVar8[6] = /*STR('Debug/DebugUIButton')*/ lRam0000000003d6b8f0;
            if (/*STR('Debug/DebugUIRootButton')*/ lRam0000000003d6b920 != 0) {
              lVar9 = func_0x00f78adc(/*STR('Debug/DebugUIRootButton')*/ lRam0000000003d6b920,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar9 == 0) goto LAB_01643400;
              uVar19 = plVar8[3];
            }
            if ((uVar19 & 0xfffffffc) != 0) {
              plVar8[7] = /*STR('Debug/DebugUIRootButton')*/ lRam0000000003d6b920;
              if (/*STR('Debug/DebugUILabel')*/ lRam0000000003d6b910 != 0) {
                lVar9 = func_0x00f78adc(/*STR('Debug/DebugUILabel')*/ lRam0000000003d6b910,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar9 == 0) goto LAB_01643400;
                uVar19 = plVar8[3];
              }
              if (4 < (uint)uVar19) {
                plVar8[8] = /*STR('Debug/DebugUILabel')*/ lRam0000000003d6b910;
                if (/*STR('Debug/DebugUISlider')*/ lRam0000000003d6b928 != 0) {
                  lVar9 = func_0x00f78adc(/*STR('Debug/DebugUISlider')*/ lRam0000000003d6b928,*(undefined8 *)(*plVar8 + 0x40));
                  if (lVar9 == 0) goto LAB_01643400;
                  uVar19 = plVar8[3];
                }
                if (5 < (uint)uVar19) {
                  plVar8[9] = /*STR('Debug/DebugUISlider')*/ lRam0000000003d6b928;
                  if (/*STR('Debug/DebugUIDropdown')*/ lRam0000000003d6b900 != 0) {
                    lVar9 = func_0x00f78adc(/*STR('Debug/DebugUIDropdown')*/ lRam0000000003d6b900,*(undefined8 *)(*plVar8 + 0x40));
                    if (lVar9 == 0) goto LAB_01643400;
                    uVar19 = plVar8[3];
                  }
                  if (6 < (uint)uVar19) {
                    plVar8[10] = /*STR('Debug/DebugUIDropdown')*/ lRam0000000003d6b900;
                    if (/*STR('Debug/DebugUIToggle')*/ lRam0000000003d6b930 != 0) {
                      lVar9 = func_0x00f78adc(/*STR('Debug/DebugUIToggle')*/ lRam0000000003d6b930,*(undefined8 *)(*plVar8 + 0x40));
                      if (lVar9 == 0) goto LAB_01643400;
                      uVar19 = plVar8[3];
                    }
                    uVar18 = (uint)uVar19;
                    if ((uVar19 & 0xfffffff8) != 0) {
                      plVar8[0xb] = /*STR('Debug/DebugUIToggle')*/ lRam0000000003d6b930;
                      if (/*STR('Debug/DebugUIHorizontalLayout')*/ lRam0000000003d6b908 != 0) {
                        lVar9 = func_0x00f78adc(/*STR('Debug/DebugUIHorizontalLayout')*/ lRam0000000003d6b908,*(undefined8 *)(*plVar8 + 0x40)
                                               );
                        if (lVar9 == 0) goto LAB_01643400;
                        uVar18 = (uint)plVar8[3];
                      }
                      if (8 < uVar18) {
                        plVar8[0xc] = /*STR('Debug/DebugUIHorizontalLayout')*/ lRam0000000003d6b908;
                        **(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) = (long)plVar8;
                        piVar10 = (int *)/*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('DebugMenu.Update()')*/ uRam0000000003d6b958,1,0,0,0);
                        *(int **)(*(long *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) + 8) = piVar10;
                        return piVar10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar11 = func_0x00f78b24();
    }
    else {
LAB_01643400:
      uVar11 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar11,0);
  }
  auVar26 = func_0x00f78af4();
  lVar12 = auVar26._8_8_;
  lVar9 = auVar26._0_8_;
  puVar3 = &stack0xffffffffffffff80;
  puStack_38 = &Core_DebugMenu_DebugMenuControllerInputSupport__Init;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb572e & 1) == 0) {
    func_0x00f78a20(0x3d2a3a8);
    func_0x00f78a20(0x3d1b5d0);
    func_0x00f78a20(0x3d54920);
    func_0x00f78a20(0x3d54928);
    func_0x00f78a20(0x3d1f0d0);
    func_0x00f78a20(0x3d22758);
    func_0x00f78a20(0x3d3fa90);
    func_0x00f78a20(0x3d66fa0);
    func_0x00f78a20(0x3d66f90);
    func_0x00f78a20(0x3d66f98);
    bRam0000000003eb572e = 1;
  }
  *(long *)(lVar9 + 0x10) = lVar12;
  /*UnityEngine.InputSystem.Gamepad$$get_all*/ func_0x0301e60c(0);
  if (0 < extraout_var) {
    if (lVar12 == 0) goto code_r0x01643740;
    Core_DebugMenu_DebugMenu__HideAllPanels(lVar12);
  }
  uVar11 = 0x3d1b5d0;
  uVar19 = 0x3d2a3a8;
  lVar12 = func_0x00f78aec(/*UnityEngine.InputSystem.InputAction_TypeInfo*/ uRam0000000003d22758);
  /*UnityEngine.InputSystem.InputAction$$.ctor*/ func_0x03022db8(lVar12,0,0,/*STR('*/{cancel}')*/ uRam0000000003d66fa0,0,0,0,0);
  *(long *)(lVar9 + 0x18) = lVar12;
  uVar13 = func_0x00f78aec(/*System.Action<InputAction.CallbackContext>_TypeInfo*/ uRam0000000003d1b5d0);
  /*System.Action<InputAction.CallbackContext>$$.ctor*/ func_0x01e5a648(uVar13,lVar9,uRam0000000003d54920,uRam0000000003d2a3a8);
  if (lVar12 == 0) {
code_r0x01643740:
    func_0x00f78af4();
    uVar11 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar11,0);
      uVar11 = func_0x00f78b14();
    } while( true );
  }
  /*UnityEngine.InputSystem.InputAction$$add_performed*/ func_0x03022b88(lVar12,uVar13,0);
  lVar12 = *(long *)(lVar9 + 0x18);
  if (lVar12 == 0) goto code_r0x01643740;
  lVar21 = 0x3d1f000;
  lStack_a0 = 0x3d1f000;
  puStack_88 = &UNK_01643588;
  lStack_a8 = *(long *)PTR_03a5d648;
  lStack_98 = lVar9;
  pppuStack_90 = &ppuStack_40;
  piVar10 = (int *)/*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(acStack_d8,lVar12,0);
  if (acStack_d8[0] == '\0') {
    lVar21 = *(long *)(lVar12 + 200);
    if (lVar21 == 0) {
      /*UnityEngine.InputSystem.InputAction$$CreateInternalActionMapForSingletonAction*/ func_0x03023cb8(lVar12);
      lVar21 = *(long *)(lVar12 + 200);
      if (lVar21 != 0) goto code_r0x030231f8;
      goto code_r0x03023238;
    }
code_r0x030231f8:
    /*UnityEngine.InputSystem.InputActionMap$$ResolveBindingsIfNecessary*/ func_0x030227fc(lVar21);
    auVar26._8_8_ = lVar12;
    auVar26._0_8_ = *(long *)(lVar21 + 0x60);
    if (*(long *)(lVar21 + 0x60) == 0) goto code_r0x03023238;
    lVar9 = lStack_98;
    lVar14 = lStack_a0;
    ppppuVar22 = (undefined8 ****)pppuStack_90;
    puVar24 = puStack_88;
    if (*(long *)PTR_03a5d648 != lStack_a8) goto code_r0x03023234;
  }
  else {
    if (*(long *)PTR_03a5d648 == lStack_a8) {
      return piVar10;
    }
code_r0x03023234:
    ___stack_chk_fail();
code_r0x03023238:
    auVar26 = func_0x00f78af4();
    puVar3 = auStack_e0;
    lVar9 = lVar12;
    lVar14 = lVar21;
    ppppuVar22 = &pppuStack_90;
    puVar24 = &UnityEngine_InputSystem_InputActionState__EnableSingleAction;
  }
  lVar21 = auVar26._8_8_;
  lVar12 = auVar26._0_8_;
  *(long *)(puVar3 + -0x20) = lVar14;
  *(long *)(puVar3 + -0x18) = lVar9;
  *(undefined8 *****)(puVar3 + -0x10) = ppppuVar22;
  *(undefined **)(puVar3 + -8) = puVar24;
  /*UnityEngine.InputSystem.InputActionState$$EnableControls*/ func_0x03033f98();
  if (lVar21 != 0) {
    /*UnityEngine.InputSystem.InputActionState.TriggerState$$set_phase*/ func_0x030b1330(*(long *)(lVar12 + 0x60) + (long)*(int *)(lVar21 + 0xc0) * 0x30,1,0);
    lVar9 = *(long *)(lVar21 + 200);
    if (lVar9 != 0) {
      *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
      /*UnityEngine.InputSystem.InputActionState$$HookOnBeforeUpdate*/ func_0x03033690(lVar12);
      iVar6 = 0;
      uVar11 = *(undefined8 *)(puVar3 + -0x10);
      uVar25 = *(undefined8 *)(puVar3 + -8);
      uVar16 = *(undefined8 *)(puVar3 + -0x20);
      uVar20 = *(undefined8 *)(puVar3 + -0x18);
      puVar4 = puVar3;
      goto UnityEngine_InputSystem_InputActionState__NotifyListenersOfActionChange;
    }
  }
  lVar9 = func_0x00f78af4();
  puVar4 = puVar3 + -0x80;
  *(undefined1 (*) [16])(puVar3 + -0x40) = auVar26;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) = &UnityEngine_InputSystem_InputAction__Disable;
  puVar23 = puVar3 + -0x30;
  *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)PTR_03a5d648;
  piVar10 = (int *)/*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(puVar3 + -0x78);
  if (puVar3[-0x78] == '\0') {
    if (*(long *)PTR_03a5d648 == *(long *)(puVar3 + -0x48)) {
      return piVar10;
    }
code_r0x03023344:
    puVar24 = &UnityEngine_InputSystem_InputActionState__DisableSingleAction;
    auVar27 = ___stack_chk_fail();
  }
  else {
    if ((*(long *)(lVar9 + 200) == 0) ||
       (lVar21 = *(long *)(*(long *)(lVar9 + 200) + 0x60), auVar27._8_8_ = lVar9,
       auVar27._0_8_ = lVar21, lVar21 == 0)) {
      func_0x00f78af4();
      goto code_r0x03023344;
    }
    if (*(long *)PTR_03a5d648 != *(long *)(puVar3 + -0x48)) goto code_r0x03023344;
    puVar23 = *(undefined1 **)(puVar3 + -0x30);
    puVar24 = *(undefined **)(puVar3 + -0x28);
    lVar12 = *(long *)(puVar3 + -0x40);
    lVar9 = *(long *)(puVar3 + -0x38);
    puVar4 = puVar3 + -0x20;
  }
  lVar21 = auVar27._8_8_;
  *(long *)(puVar4 + -0x20) = lVar12;
  *(long *)(puVar4 + -0x18) = lVar9;
  *(undefined1 **)(puVar4 + -0x10) = puVar23;
  *(undefined **)(puVar4 + -8) = puVar24;
  /*UnityEngine.InputSystem.InputActionState$$DisableControls*/ func_0x03034058();
  if (lVar21 != 0) {
    /*UnityEngine.InputSystem.InputActionState$$ResetActionState*/ func_0x03023780(auVar27._0_8_,*(undefined4 *)(lVar21 + 0xc0),0,0);
    lVar9 = *(long *)(lVar21 + 200);
    if (lVar9 != 0) {
      *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + -1;
      iVar6 = 1;
      uVar11 = *(undefined8 *)(puVar4 + -0x10);
      uVar25 = *(undefined8 *)(puVar4 + -8);
      uVar16 = *(undefined8 *)(puVar4 + -0x20);
      uVar20 = *(undefined8 *)(puVar4 + -0x18);
UnityEngine_InputSystem_InputActionState__NotifyListenersOfActionChange:
      *(undefined8 *)(puVar4 + -0x40) = 0x3d22758;
      *(undefined8 *)(puVar4 + -0x38) = 0x3d1b5d0;
      *(undefined8 *)(puVar4 + -0x30) = 0x3d2a3a8;
      *(undefined8 *)(puVar4 + -0x28) = uVar13;
      *(undefined8 *)(puVar4 + -0x20) = uVar16;
      *(undefined8 *)(puVar4 + -0x18) = uVar20;
      *(undefined8 *)(puVar4 + -0x10) = uVar11;
      *(undefined8 *)(puVar4 + -8) = uVar25;
      if ((bRam0000000003ebce5d & 1) == 0) {
        func_0x00f78a20(0x3d54eb0);
        func_0x00f78a20(0x3d54e80);
        func_0x00f78a20(0x3d22780);
        func_0x00f78a20(0x3d7ac98);
        func_0x00f78a20(0x3d7ac90);
        bRam0000000003ebce5d = 1;
      }
      piVar10 = (int *)/*UnityEngine.InputSystem.Utilities.DelegateHelpers$$InvokeCallbacksSafe<string, InputControlLayoutChange>*/ func_0x018421d8(*(long *)(/*UnityEngine.InputSystem.InputActionState_TypeInfo*/ lRam0000000003d22780 + 0xb8) + 0x10,lVar21,iVar6,
                                       /*STR('onActionChange')*/ uRam0000000003d7ac90,0,uRam0000000003d54eb0);
      lVar9 = lRam0000000003d54e80;
      if (iVar6 != 8) {
        return piVar10;
      }
      lVar12 = *(long *)(/*UnityEngine.InputSystem.InputActionState_TypeInfo*/ lRam0000000003d22780 + 0xb8);
      puVar3 = (undefined1 *)(lVar12 + 0x60);
      *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = 0x3d66000;
      *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
      *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
      *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
      *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      piVar10 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar3,**(undefined8 **)(lRam0000000003d54e80 + 0x30),
                                       /*STR('onActionControlsChange')*/ uRam0000000003d7ac98,0);
      if ((int)piVar10 == 0) {
        return piVar10;
      }
      /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar3,*(undefined8 *)(*(long *)(lVar9 + 0x30) + 8));
      iVar6 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar3,**(undefined8 **)(lVar9 + 0x30));
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          lVar14 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar3,iVar6,*(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x10));
          if (lVar14 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x18418f8);
            (*pcVar2)();
          }
          (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x18))(lVar14,lVar21);
          iVar6 = iVar6 + 1;
          iVar7 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar3,**(undefined8 **)(lVar9 + 0x30));
        } while (iVar6 < iVar7);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x30) + 0x20);
      *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
      *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
      *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
      *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
      *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
      *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      *puVar3 = 0;
      if (0 < *(int *)(lVar12 + 0x98)) {
        iVar6 = 0;
        do {
          lVar21 = *(long *)(lVar9 + 0x18);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          uVar11 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c((int *)(lVar12 + 0x98),iVar6,**(undefined8 **)(lVar21 + 0xc0));
          lVar21 = *(long *)(lVar9 + 0x18);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar3,uVar11,*(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x38));
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar12 + 0x98));
      }
      piVar10 = (int *)(lVar12 + 0x80);
      if (0 < *piVar10) {
        iVar6 = 0;
        do {
          lVar21 = *(long *)(lVar9 + 0x18);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          uVar11 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar10,iVar6,**(undefined8 **)(lVar21 + 0xc0));
          lVar21 = *(long *)(lVar9 + 0x18);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar3,uVar11,*(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x40));
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar12 + 0x80));
      }
      if ((*(ushort *)(*(long *)(lVar9 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028(*(long *)(lVar9 + 0x18));
      }
      *piVar10 = 0;
      *(undefined8 *)(lVar12 + 0x88) = 0;
      *(undefined8 *)(lVar12 + 0x90) = 0;
      return piVar10;
    }
  }
  puVar24 = &UnityEngine_InputSystem_InputAction__Clone;
  uVar15 = func_0x00f78af4();
  puVar3 = puVar4 + -0x20;
  while( true ) {
    puVar5 = puVar3;
    *(undefined8 *)(puVar5 + -0x40) = 0x3d22758;
    *(undefined8 *)(puVar5 + -0x38) = uVar11;
    *(ulong *)(puVar5 + -0x30) = uVar19;
    *(undefined8 *)(puVar5 + -0x28) = uVar13;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar27;
    *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
    *(undefined **)(puVar5 + -8) = puVar24;
    uVar11 = 0x3d3faf8;
    if ((bRam0000000003ebcdd3 & 1) == 0) {
      func_0x00f78a20(0x3d22758);
      func_0x00f78a20(0x3d3faf8);
      bRam0000000003ebcdd3 = 1;
    }
    uVar13 = *(undefined8 *)(uVar15 + 0x10);
    uVar19 = (ulong)*(uint *)(uVar15 + 0x18);
    piVar10 = (int *)func_0x00f78aec(/*UnityEngine.InputSystem.InputAction_TypeInfo*/ uRam0000000003d22758);
    /*UnityEngine.InputSystem.InputAction$$.ctor*/ func_0x03022db8(piVar10,uVar13,uVar19,0,0,0,0);
    auVar26 = /*UnityEngine.InputSystem.InputAction$$get_bindings*/ func_0x030226ec(uVar15);
    *(undefined1 (*) [16])(puVar5 + -0x50) = auVar26;
    uVar16 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputBinding>$$ToArray*/ func_0x02747878(puVar5 + -0x50,uRam0000000003d3faf8);
    if (piVar10 != (int *)0x0) break;
    puVar24 = &UnityEngine_InputSystem_InputAction__System_ICloneable_Clone;
    uVar17 = func_0x00f78af4();
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar15;
    auVar27 = auVar1 << 0x40;
    puVar3 = puVar5 + -0x50;
    uVar15 = uVar17;
    puVar4 = puVar5;
  }
  *(undefined8 *)(piVar10 + 0x10) = uVar16;
  piVar10[0x2d] = *(int *)(uVar15 + 0xb4);
  *(undefined8 *)(piVar10 + 8) = *(undefined8 *)(uVar15 + 0x20);
  *(undefined8 *)(piVar10 + 0xe) = *(undefined8 *)(uVar15 + 0x38);
  *(undefined8 *)(piVar10 + 0xc) = *(undefined8 *)(uVar15 + 0x30);
  return piVar10;
}



// ============================================================
// RVA: 0x1840b34 | Core.DebugMenu.DebugMenu.CreateElement<DebugUIButtonBehaviour>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__CreateElement_DebugUIButtonBehaviour_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long *extraout_x1;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  int *piStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_4;
  if ((bRam0000000003eb647b & 1) == 0) {
    func_0x00f78a20(0x3d2ed70);
    func_0x00f78a20(0x3d25a98);
    bRam0000000003eb647b = 1;
  }
  piVar9 = (int *)0x3eb6000;
  if ((param_1 != 0) &&
     (piVar7 = (int *)Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(param_1,0), param_5 != 0)) {
    unaff_x27 = 0x3d25000;
    param_5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(param_5);
    param_7 = func_0x00f78aec(/*System.WeakReference_TypeInfo*/ uRam0000000003d25a98);
    /*System.WeakReference$$.ctor*/ func_0x02a2224c(param_7,param_6,0);
    piVar9 = piVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      uStack_88 = SUB84(piVar7,0);
      uStack_84 = (undefined4)param_3;
      uStack_80 = (undefined4)param_2;
      uStack_7c = 0;
      lStack_78 = param_4;
      lStack_70 = param_5;
      lStack_68 = param_7;
      /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$set_Item*/ func_0x01e9527c(*(long *)(param_1 + 0x48),piVar7,&uStack_88,uRam0000000003d2ed70);
      return piVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_98 = &Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_;
  uStack_b0 = param_2;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((lVar8 != 0) &&
     (lVar8 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), param_4 = lVar11, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
    return piVar9;
  }
  auVar32 = func_0x00f78af4();
  lVar11 = auVar32._8_8_;
  plVar12 = auVar32._0_8_;
  puStack_b8 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  piStack_f0 = piVar9;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_3;
  uStack_d0 = param_2;
  lStack_c8 = param_4;
  ppuStack_c0 = &puStack_a0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar8 = plVar12[10];
  lVar27 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar8,lVar27);
  lVar30 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar9 = (int *)0x0;
    if (lVar8 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar8 = func_0x00f78adc(lVar8,lVar23);
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar8 != 0) {
      piVar9 = (int *)func_0x00f78adc(lVar8,lVar23);
      uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar9 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar8,lVar23);
    }
    piVar9 = (int *)0x0;
    uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar9 != (int *)0x0) {
      return piVar9;
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8);
    lVar11 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    uVar25 = func_0x00f78a24(0x3d663d0);
    uVar13 = func_0x00f78a24(0x3d69d18);
    piVar9 = (int *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar20 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar9 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar9 != (int *)0x0) {
      if (lVar8 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar12[10] != 0) &&
         (plVar10 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar12[10],0), plVar10 != (long *)0x0)) {
        uStack_f8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar25 = func_0x00f78a24(0x3d663d0);
  uVar13 = func_0x00f78a24(0x3d69d18);
  uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
code_r0x01840ea4:
  lVar8 = 0;
  uVar25 = /*System.String$$Concat*/ func_0x029be818(uVar13,uStack_f8,uVar25);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  lVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar25);
  uVar15 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar14,uVar15);
  plVar12 = auVar32._8_8_;
  piVar7 = auVar32._0_8_;
  puStack_108 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar23 = *plVar12;
  piStack_130 = piVar9;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  uStack_118 = uVar25;
  pppuStack_110 = (undefined8 ***)&ppuStack_c0;
  if (lVar23 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar17 = lVar11;
    do {
      if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar26) {
        return piVar7;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar25 = func_0x00f78b24();
        func_0x00f78ac0(uVar25,0);
        plVar3 = &uStack_180;
        puStack_138 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar24 = *extraout_x1;
        lVar23 = lVar17;
        uVar21 = uVar20;
        lVar22 = lVar8;
        lStack_170 = lVar30;
        lStack_168 = lVar27;
        lStack_160 = lVar28;
        uStack_158 = uVar26;
        plStack_150 = plVar12;
        lStack_148 = lVar11;
        ppppuStack_140 = &pppuStack_110;
        if (lVar24 == 0) goto code_r0x01841098;
        uVar19 = (uint)lVar17;
        if (uVar19 < *(uint *)(lVar24 + 0x18)) {
          lVar27 = (long)(int)uVar19;
          uVar16 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar24 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar8 + 0x30));
          lVar30 = *extraout_x1;
          lVar11 = lVar17;
          plVar12 = extraout_x1;
          uVar26 = uVar20;
          lVar28 = lVar8;
          if ((uVar16 & 1) == 0) {
code_r0x01841028:
            uStack_180 = 0;
            uStack_178 = 0;
            lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
            lVar23 = 4;
            uVar21 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_180,uVar20);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar17 = lVar11;
              func_0x00f78af4();
            }
            else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar8 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = uStack_178;
              *(undefined8 *)(lVar8 + 0x20) = uStack_180;
code_r0x01841064:
              lVar8 = *extraout_x1;
              if (lVar8 == 0) goto code_r0x01841098;
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                return *(int **)(lVar8 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar24 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar24 + 0x28) < (int)uVar20) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar24 + 0x20,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar25 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar25,0);
        uVar20 = auVar32._8_8_;
        plVar10 = auVar32._0_8_;
        puStack_188 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar11 = lVar23;
        uVar16 = uVar21;
        lStack_1c0 = lVar30;
        lStack_1b8 = lVar27;
        lStack_1b0 = lVar28;
        uStack_1a8 = uVar26;
        plStack_1a0 = plVar12;
        lStack_198 = lVar17;
        pppppuStack_190 = &ppppuStack_140;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
        if ((int)lVar23 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar8;
          lVar11 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar19 = 0;
          if (iVar5 != 0) {
            uVar19 = iVar4 / iVar5;
          }
          uVar20 = (ulong)uVar19;
        }
        lVar28 = lStack_198;
        plVar12 = plStack_1a0;
        uVar26 = uStack_1a8;
        lVar17 = lStack_1b0;
        lVar30 = lStack_1b8;
        lVar27 = lStack_1c0;
        ppppppuVar31 = (undefined8 ******)pppppuStack_190;
        puStack_208 = puStack_188;
        if (plVar10 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_200 = 0x3eb6000;
          lStack_1f8 = 0x3d23210;
          puStack_1c8 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_1d0;
          lVar28 = lVar11;
          uVar21 = uVar16;
          lStack_1f0 = lVar8;
          uStack_1e8 = uVar20;
          plStack_1e0 = plVar10;
          lStack_1d8 = lVar23;
          pppppuStack_1d0 = &pppppuStack_190;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = (**(code **)**(undefined8 **)(uVar16 + 0x30))();
          if ((int)lVar11 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar17;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar19 = 0;
            if (iVar5 != 0) {
              uVar19 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar19;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar20 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            puStack_208 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar8;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar19 = 0;
              if (iVar5 != 0) {
                uVar19 = iVar4 / iVar5;
              }
              uVar20 = (ulong)uVar19;
            }
            if (plVar10 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar18 = auVar32._0_8_;
              piVar9 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if ((int)piVar9 == 0) {
                return piVar9;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar18,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar11 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar18,iVar4,
                                           *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (lVar11,auVar32._8_8_);
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar11 = *(long *)(*(long *)(lVar22 + 0x30) + 0x20);
              *puVar18 = 0;
              if (0 < *(int *)(puVar18 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar18 + 0x38,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x38));
              }
              piVar9 = (int *)(puVar18 + 0x20);
              if (0 < *piVar9) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar9,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar11 + 0x18));
              }
              *piVar9 = 0;
              *(undefined8 *)(puVar18 + 0x28) = 0;
              *(undefined8 *)(puVar18 + 0x30) = 0;
              return piVar9;
            }
            plVar3 = &lStack_200;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar12 = (long *)0x0;
            lVar23 = lVar28;
            lVar28 = lVar11;
          }
          else {
            plVar3 = &lStack_1c0;
            plVar10 = auVar32._0_8_;
            uVar20 = uVar26;
            lVar8 = lVar17;
            lVar23 = lVar11;
            lVar28 = lStack_1d8;
            plVar12 = plStack_1e0;
            uVar26 = uStack_1e8;
            lVar17 = lStack_1f0;
            lVar30 = lStack_1f8;
            lVar27 = lStack_200;
            ppppppuVar31 = (undefined8 ******)pppppuStack_1d0;
            puStack_208 = puStack_1c8;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(long *)((long)plVar3 + -0x50) = param_7;
        *(long *)((long)plVar3 + -0x48) = param_5;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar17;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar12;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_208;
        *(int *)((long)plVar3 + -100) = (int)lVar8;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar23 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar19 = *(uint *)(plVar10 + 5);
        if ((int)uVar19 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar28,**(undefined8 **)(lVar11 + 0x30));
      if ((int)piVar7 != 0) {
        lVar23 = *plVar12;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + lVar28,
                                        *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar23 = *plVar12;
      lVar28 = lVar28 + 0x10;
    } while (lVar23 != 0);
  }
  piVar9 = (int *)func_0x00f78af4();
  return piVar9;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar10 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar19 != 0) {
      iVar1 = iVar6 / (int)uVar19;
    }
    uVar19 = iVar6 - iVar1 * uVar19;
    if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
    lVar8 = (long)(int)uVar19;
    iVar6 = *(int *)(lVar11 + lVar8 * 8 + 0x20);
    lVar11 = plVar10[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar11 != iVar6) && (-1 < (int)lVar11 - iVar6)) {
      lVar11 = plVar10[4];
      if (lVar11 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
      if (*(int *)(lVar11 + lVar8 * 8 + 0x24) == iVar4) {
        lVar11 = plVar10[3];
        if (lVar11 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar11,0);
        if (iVar6 == (int)uVar20) {
          lVar11 = plVar10[3];
          if (lVar11 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
          lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
          if (lVar11 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar11,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar11 = plVar10[4];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            *(int *)(lVar11 + lVar8 * 8 + 0x20) = (int)plVar10[6];
            *(uint *)((long)plVar10 + 0x2c) = uVar19;
            lVar11 = plVar10[3];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            lVar11 = lVar11 + lVar8 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar19 = *(uint *)(plVar10 + 5);
    if ((int)uVar19 <= iVar29) break;
code_r0x03125f10:
    lVar11 = plVar10[4];
    if (lVar11 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar12 = (long *)plVar10[3];
  if (plVar12 != (long *)0x0) {
    if (uVar19 == *(uint *)(plVar12 + 3)) {
      plVar12 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar19 << 1);
      iVar5 = (int)plVar10[5];
      if (0 < iVar5) {
        lVar11 = 4;
        do {
          lVar8 = plVar10[3];
          if (lVar8 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar11 - 4U) goto code_r0x03126220;
          if (plVar12 == (long *)0x0) goto code_r0x0312621c;
          lVar8 = *(long *)(lVar8 + lVar11 * 8);
          if ((lVar8 != 0) &&
             (lVar27 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar12 + 3) <= lVar11 - 4U) goto code_r0x03126220;
          plVar12[lVar11] = lVar8;
          iVar5 = (int)plVar10[5];
          lVar8 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar8 < iVar5);
      }
      plVar10[3] = (long)plVar12;
      lVar11 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar19 = *(uint *)(plVar10 + 5);
      if (0 < (int)uVar19) {
        lVar8 = 4;
        do {
          lVar27 = plVar10[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          if (lVar11 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar11 + lVar8 * 8) = *(undefined8 *)(lVar27 + lVar8 * 8);
          uVar19 = *(uint *)(plVar10 + 5);
          lVar27 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar27 < (int)uVar19);
      }
      plVar10[4] = lVar11;
      plVar12 = (long *)plVar10[3];
    }
    lVar11 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar11,uVar20,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar12 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar12 + 3) <= uVar19) goto code_r0x03126220;
      plVar12[(long)(int)uVar19 + 4] = lVar11;
      lVar11 = plVar10[4];
      if (lVar11 != 0) {
        uVar19 = *(uint *)(plVar10 + 5);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = lVar11 + (long)(int)uVar19 * 8;
        *(int *)(lVar11 + 0x20) = (int)plVar10[6];
        *(int *)(lVar11 + 0x24) = iVar4;
        lVar11 = plVar10[3];
        *(uint *)(plVar10 + 5) = uVar19 + 1;
        *(uint *)((long)plVar10 + 0x2c) = uVar19;
        if (lVar11 != 0) {
          if (uVar19 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar19 * 8;
code_r0x031261b8:
            return *(int **)(lVar11 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar25 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar25,0);
code_r0x0312622c:
    uVar25 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840b34 | Core.DebugMenu.DebugMenu.CreateElement<DebugUIDropdownBehaviour>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__CreateElement_DebugUIButtonBehaviour_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long *extraout_x1;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  int *piStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_4;
  if ((bRam0000000003eb647b & 1) == 0) {
    func_0x00f78a20(0x3d2ed70);
    func_0x00f78a20(0x3d25a98);
    bRam0000000003eb647b = 1;
  }
  piVar9 = (int *)0x3eb6000;
  if ((param_1 != 0) &&
     (piVar7 = (int *)Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(param_1,0), param_5 != 0)) {
    unaff_x27 = 0x3d25000;
    param_5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(param_5);
    param_7 = func_0x00f78aec(/*System.WeakReference_TypeInfo*/ uRam0000000003d25a98);
    /*System.WeakReference$$.ctor*/ func_0x02a2224c(param_7,param_6,0);
    piVar9 = piVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      uStack_88 = SUB84(piVar7,0);
      uStack_84 = (undefined4)param_3;
      uStack_80 = (undefined4)param_2;
      uStack_7c = 0;
      lStack_78 = param_4;
      lStack_70 = param_5;
      lStack_68 = param_7;
      /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$set_Item*/ func_0x01e9527c(*(long *)(param_1 + 0x48),piVar7,&uStack_88,uRam0000000003d2ed70);
      return piVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_98 = &Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_;
  uStack_b0 = param_2;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((lVar8 != 0) &&
     (lVar8 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), param_4 = lVar11, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
    return piVar9;
  }
  auVar32 = func_0x00f78af4();
  lVar11 = auVar32._8_8_;
  plVar12 = auVar32._0_8_;
  puStack_b8 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  piStack_f0 = piVar9;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_3;
  uStack_d0 = param_2;
  lStack_c8 = param_4;
  ppuStack_c0 = &puStack_a0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar8 = plVar12[10];
  lVar27 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar8,lVar27);
  lVar30 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar9 = (int *)0x0;
    if (lVar8 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar8 = func_0x00f78adc(lVar8,lVar23);
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar8 != 0) {
      piVar9 = (int *)func_0x00f78adc(lVar8,lVar23);
      uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar9 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar8,lVar23);
    }
    piVar9 = (int *)0x0;
    uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar9 != (int *)0x0) {
      return piVar9;
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8);
    lVar11 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    uVar25 = func_0x00f78a24(0x3d663d0);
    uVar13 = func_0x00f78a24(0x3d69d18);
    piVar9 = (int *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar20 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar9 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar9 != (int *)0x0) {
      if (lVar8 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar12[10] != 0) &&
         (plVar10 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar12[10],0), plVar10 != (long *)0x0)) {
        uStack_f8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar25 = func_0x00f78a24(0x3d663d0);
  uVar13 = func_0x00f78a24(0x3d69d18);
  uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
code_r0x01840ea4:
  lVar8 = 0;
  uVar25 = /*System.String$$Concat*/ func_0x029be818(uVar13,uStack_f8,uVar25);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  lVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar25);
  uVar15 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar14,uVar15);
  plVar12 = auVar32._8_8_;
  piVar7 = auVar32._0_8_;
  puStack_108 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar23 = *plVar12;
  piStack_130 = piVar9;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  uStack_118 = uVar25;
  pppuStack_110 = (undefined8 ***)&ppuStack_c0;
  if (lVar23 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar17 = lVar11;
    do {
      if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar26) {
        return piVar7;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar25 = func_0x00f78b24();
        func_0x00f78ac0(uVar25,0);
        plVar3 = &uStack_180;
        puStack_138 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar24 = *extraout_x1;
        lVar23 = lVar17;
        uVar21 = uVar20;
        lVar22 = lVar8;
        lStack_170 = lVar30;
        lStack_168 = lVar27;
        lStack_160 = lVar28;
        uStack_158 = uVar26;
        plStack_150 = plVar12;
        lStack_148 = lVar11;
        ppppuStack_140 = &pppuStack_110;
        if (lVar24 == 0) goto code_r0x01841098;
        uVar19 = (uint)lVar17;
        if (uVar19 < *(uint *)(lVar24 + 0x18)) {
          lVar27 = (long)(int)uVar19;
          uVar16 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar24 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar8 + 0x30));
          lVar30 = *extraout_x1;
          lVar11 = lVar17;
          plVar12 = extraout_x1;
          uVar26 = uVar20;
          lVar28 = lVar8;
          if ((uVar16 & 1) == 0) {
code_r0x01841028:
            uStack_180 = 0;
            uStack_178 = 0;
            lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
            lVar23 = 4;
            uVar21 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_180,uVar20);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar17 = lVar11;
              func_0x00f78af4();
            }
            else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar8 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = uStack_178;
              *(undefined8 *)(lVar8 + 0x20) = uStack_180;
code_r0x01841064:
              lVar8 = *extraout_x1;
              if (lVar8 == 0) goto code_r0x01841098;
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                return *(int **)(lVar8 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar24 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar24 + 0x28) < (int)uVar20) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar24 + 0x20,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar25 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar25,0);
        uVar20 = auVar32._8_8_;
        plVar10 = auVar32._0_8_;
        puStack_188 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar11 = lVar23;
        uVar16 = uVar21;
        lStack_1c0 = lVar30;
        lStack_1b8 = lVar27;
        lStack_1b0 = lVar28;
        uStack_1a8 = uVar26;
        plStack_1a0 = plVar12;
        lStack_198 = lVar17;
        pppppuStack_190 = &ppppuStack_140;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
        if ((int)lVar23 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar8;
          lVar11 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar19 = 0;
          if (iVar5 != 0) {
            uVar19 = iVar4 / iVar5;
          }
          uVar20 = (ulong)uVar19;
        }
        lVar28 = lStack_198;
        plVar12 = plStack_1a0;
        uVar26 = uStack_1a8;
        lVar17 = lStack_1b0;
        lVar30 = lStack_1b8;
        lVar27 = lStack_1c0;
        ppppppuVar31 = (undefined8 ******)pppppuStack_190;
        puStack_208 = puStack_188;
        if (plVar10 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_200 = 0x3eb6000;
          lStack_1f8 = 0x3d23210;
          puStack_1c8 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_1d0;
          lVar28 = lVar11;
          uVar21 = uVar16;
          lStack_1f0 = lVar8;
          uStack_1e8 = uVar20;
          plStack_1e0 = plVar10;
          lStack_1d8 = lVar23;
          pppppuStack_1d0 = &pppppuStack_190;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = (**(code **)**(undefined8 **)(uVar16 + 0x30))();
          if ((int)lVar11 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar17;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar19 = 0;
            if (iVar5 != 0) {
              uVar19 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar19;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar20 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            puStack_208 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar8;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar19 = 0;
              if (iVar5 != 0) {
                uVar19 = iVar4 / iVar5;
              }
              uVar20 = (ulong)uVar19;
            }
            if (plVar10 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar18 = auVar32._0_8_;
              piVar9 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if ((int)piVar9 == 0) {
                return piVar9;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar18,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar11 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar18,iVar4,
                                           *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (lVar11,auVar32._8_8_);
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar11 = *(long *)(*(long *)(lVar22 + 0x30) + 0x20);
              *puVar18 = 0;
              if (0 < *(int *)(puVar18 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar18 + 0x38,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x38));
              }
              piVar9 = (int *)(puVar18 + 0x20);
              if (0 < *piVar9) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar9,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar11 + 0x18));
              }
              *piVar9 = 0;
              *(undefined8 *)(puVar18 + 0x28) = 0;
              *(undefined8 *)(puVar18 + 0x30) = 0;
              return piVar9;
            }
            plVar3 = &lStack_200;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar12 = (long *)0x0;
            lVar23 = lVar28;
            lVar28 = lVar11;
          }
          else {
            plVar3 = &lStack_1c0;
            plVar10 = auVar32._0_8_;
            uVar20 = uVar26;
            lVar8 = lVar17;
            lVar23 = lVar11;
            lVar28 = lStack_1d8;
            plVar12 = plStack_1e0;
            uVar26 = uStack_1e8;
            lVar17 = lStack_1f0;
            lVar30 = lStack_1f8;
            lVar27 = lStack_200;
            ppppppuVar31 = (undefined8 ******)pppppuStack_1d0;
            puStack_208 = puStack_1c8;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(long *)((long)plVar3 + -0x50) = param_7;
        *(long *)((long)plVar3 + -0x48) = param_5;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar17;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar12;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_208;
        *(int *)((long)plVar3 + -100) = (int)lVar8;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar23 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar19 = *(uint *)(plVar10 + 5);
        if ((int)uVar19 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar28,**(undefined8 **)(lVar11 + 0x30));
      if ((int)piVar7 != 0) {
        lVar23 = *plVar12;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + lVar28,
                                        *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar23 = *plVar12;
      lVar28 = lVar28 + 0x10;
    } while (lVar23 != 0);
  }
  piVar9 = (int *)func_0x00f78af4();
  return piVar9;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar10 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar19 != 0) {
      iVar1 = iVar6 / (int)uVar19;
    }
    uVar19 = iVar6 - iVar1 * uVar19;
    if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
    lVar8 = (long)(int)uVar19;
    iVar6 = *(int *)(lVar11 + lVar8 * 8 + 0x20);
    lVar11 = plVar10[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar11 != iVar6) && (-1 < (int)lVar11 - iVar6)) {
      lVar11 = plVar10[4];
      if (lVar11 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
      if (*(int *)(lVar11 + lVar8 * 8 + 0x24) == iVar4) {
        lVar11 = plVar10[3];
        if (lVar11 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar11,0);
        if (iVar6 == (int)uVar20) {
          lVar11 = plVar10[3];
          if (lVar11 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
          lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
          if (lVar11 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar11,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar11 = plVar10[4];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            *(int *)(lVar11 + lVar8 * 8 + 0x20) = (int)plVar10[6];
            *(uint *)((long)plVar10 + 0x2c) = uVar19;
            lVar11 = plVar10[3];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            lVar11 = lVar11 + lVar8 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar19 = *(uint *)(plVar10 + 5);
    if ((int)uVar19 <= iVar29) break;
code_r0x03125f10:
    lVar11 = plVar10[4];
    if (lVar11 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar12 = (long *)plVar10[3];
  if (plVar12 != (long *)0x0) {
    if (uVar19 == *(uint *)(plVar12 + 3)) {
      plVar12 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar19 << 1);
      iVar5 = (int)plVar10[5];
      if (0 < iVar5) {
        lVar11 = 4;
        do {
          lVar8 = plVar10[3];
          if (lVar8 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar11 - 4U) goto code_r0x03126220;
          if (plVar12 == (long *)0x0) goto code_r0x0312621c;
          lVar8 = *(long *)(lVar8 + lVar11 * 8);
          if ((lVar8 != 0) &&
             (lVar27 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar12 + 3) <= lVar11 - 4U) goto code_r0x03126220;
          plVar12[lVar11] = lVar8;
          iVar5 = (int)plVar10[5];
          lVar8 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar8 < iVar5);
      }
      plVar10[3] = (long)plVar12;
      lVar11 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar19 = *(uint *)(plVar10 + 5);
      if (0 < (int)uVar19) {
        lVar8 = 4;
        do {
          lVar27 = plVar10[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          if (lVar11 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar11 + lVar8 * 8) = *(undefined8 *)(lVar27 + lVar8 * 8);
          uVar19 = *(uint *)(plVar10 + 5);
          lVar27 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar27 < (int)uVar19);
      }
      plVar10[4] = lVar11;
      plVar12 = (long *)plVar10[3];
    }
    lVar11 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar11,uVar20,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar12 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar12 + 3) <= uVar19) goto code_r0x03126220;
      plVar12[(long)(int)uVar19 + 4] = lVar11;
      lVar11 = plVar10[4];
      if (lVar11 != 0) {
        uVar19 = *(uint *)(plVar10 + 5);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = lVar11 + (long)(int)uVar19 * 8;
        *(int *)(lVar11 + 0x20) = (int)plVar10[6];
        *(int *)(lVar11 + 0x24) = iVar4;
        lVar11 = plVar10[3];
        *(uint *)(plVar10 + 5) = uVar19 + 1;
        *(uint *)((long)plVar10 + 0x2c) = uVar19;
        if (lVar11 != 0) {
          if (uVar19 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar19 * 8;
code_r0x031261b8:
            return *(int **)(lVar11 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar25 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar25,0);
code_r0x0312622c:
    uVar25 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840b34 | Core.DebugMenu.DebugMenu.CreateElement<DebugUILabelBehaviour>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__CreateElement_DebugUIButtonBehaviour_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long *extraout_x1;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  int *piStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_4;
  if ((bRam0000000003eb647b & 1) == 0) {
    func_0x00f78a20(0x3d2ed70);
    func_0x00f78a20(0x3d25a98);
    bRam0000000003eb647b = 1;
  }
  piVar9 = (int *)0x3eb6000;
  if ((param_1 != 0) &&
     (piVar7 = (int *)Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(param_1,0), param_5 != 0)) {
    unaff_x27 = 0x3d25000;
    param_5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(param_5);
    param_7 = func_0x00f78aec(/*System.WeakReference_TypeInfo*/ uRam0000000003d25a98);
    /*System.WeakReference$$.ctor*/ func_0x02a2224c(param_7,param_6,0);
    piVar9 = piVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      uStack_88 = SUB84(piVar7,0);
      uStack_84 = (undefined4)param_3;
      uStack_80 = (undefined4)param_2;
      uStack_7c = 0;
      lStack_78 = param_4;
      lStack_70 = param_5;
      lStack_68 = param_7;
      /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$set_Item*/ func_0x01e9527c(*(long *)(param_1 + 0x48),piVar7,&uStack_88,uRam0000000003d2ed70);
      return piVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_98 = &Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_;
  uStack_b0 = param_2;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((lVar8 != 0) &&
     (lVar8 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), param_4 = lVar11, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
    return piVar9;
  }
  auVar32 = func_0x00f78af4();
  lVar11 = auVar32._8_8_;
  plVar12 = auVar32._0_8_;
  puStack_b8 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  piStack_f0 = piVar9;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_3;
  uStack_d0 = param_2;
  lStack_c8 = param_4;
  ppuStack_c0 = &puStack_a0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar8 = plVar12[10];
  lVar27 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar8,lVar27);
  lVar30 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar9 = (int *)0x0;
    if (lVar8 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar8 = func_0x00f78adc(lVar8,lVar23);
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar8 != 0) {
      piVar9 = (int *)func_0x00f78adc(lVar8,lVar23);
      uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar9 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar8,lVar23);
    }
    piVar9 = (int *)0x0;
    uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar9 != (int *)0x0) {
      return piVar9;
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8);
    lVar11 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    uVar25 = func_0x00f78a24(0x3d663d0);
    uVar13 = func_0x00f78a24(0x3d69d18);
    piVar9 = (int *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar20 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar9 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar9 != (int *)0x0) {
      if (lVar8 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar12[10] != 0) &&
         (plVar10 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar12[10],0), plVar10 != (long *)0x0)) {
        uStack_f8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar25 = func_0x00f78a24(0x3d663d0);
  uVar13 = func_0x00f78a24(0x3d69d18);
  uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
code_r0x01840ea4:
  lVar8 = 0;
  uVar25 = /*System.String$$Concat*/ func_0x029be818(uVar13,uStack_f8,uVar25);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  lVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar25);
  uVar15 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar14,uVar15);
  plVar12 = auVar32._8_8_;
  piVar7 = auVar32._0_8_;
  puStack_108 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar23 = *plVar12;
  piStack_130 = piVar9;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  uStack_118 = uVar25;
  pppuStack_110 = (undefined8 ***)&ppuStack_c0;
  if (lVar23 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar17 = lVar11;
    do {
      if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar26) {
        return piVar7;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar25 = func_0x00f78b24();
        func_0x00f78ac0(uVar25,0);
        plVar3 = &uStack_180;
        puStack_138 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar24 = *extraout_x1;
        lVar23 = lVar17;
        uVar21 = uVar20;
        lVar22 = lVar8;
        lStack_170 = lVar30;
        lStack_168 = lVar27;
        lStack_160 = lVar28;
        uStack_158 = uVar26;
        plStack_150 = plVar12;
        lStack_148 = lVar11;
        ppppuStack_140 = &pppuStack_110;
        if (lVar24 == 0) goto code_r0x01841098;
        uVar19 = (uint)lVar17;
        if (uVar19 < *(uint *)(lVar24 + 0x18)) {
          lVar27 = (long)(int)uVar19;
          uVar16 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar24 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar8 + 0x30));
          lVar30 = *extraout_x1;
          lVar11 = lVar17;
          plVar12 = extraout_x1;
          uVar26 = uVar20;
          lVar28 = lVar8;
          if ((uVar16 & 1) == 0) {
code_r0x01841028:
            uStack_180 = 0;
            uStack_178 = 0;
            lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
            lVar23 = 4;
            uVar21 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_180,uVar20);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar17 = lVar11;
              func_0x00f78af4();
            }
            else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar8 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = uStack_178;
              *(undefined8 *)(lVar8 + 0x20) = uStack_180;
code_r0x01841064:
              lVar8 = *extraout_x1;
              if (lVar8 == 0) goto code_r0x01841098;
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                return *(int **)(lVar8 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar24 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar24 + 0x28) < (int)uVar20) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar24 + 0x20,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar25 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar25,0);
        uVar20 = auVar32._8_8_;
        plVar10 = auVar32._0_8_;
        puStack_188 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar11 = lVar23;
        uVar16 = uVar21;
        lStack_1c0 = lVar30;
        lStack_1b8 = lVar27;
        lStack_1b0 = lVar28;
        uStack_1a8 = uVar26;
        plStack_1a0 = plVar12;
        lStack_198 = lVar17;
        pppppuStack_190 = &ppppuStack_140;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
        if ((int)lVar23 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar8;
          lVar11 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar19 = 0;
          if (iVar5 != 0) {
            uVar19 = iVar4 / iVar5;
          }
          uVar20 = (ulong)uVar19;
        }
        lVar28 = lStack_198;
        plVar12 = plStack_1a0;
        uVar26 = uStack_1a8;
        lVar17 = lStack_1b0;
        lVar30 = lStack_1b8;
        lVar27 = lStack_1c0;
        ppppppuVar31 = (undefined8 ******)pppppuStack_190;
        puStack_208 = puStack_188;
        if (plVar10 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_200 = 0x3eb6000;
          lStack_1f8 = 0x3d23210;
          puStack_1c8 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_1d0;
          lVar28 = lVar11;
          uVar21 = uVar16;
          lStack_1f0 = lVar8;
          uStack_1e8 = uVar20;
          plStack_1e0 = plVar10;
          lStack_1d8 = lVar23;
          pppppuStack_1d0 = &pppppuStack_190;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = (**(code **)**(undefined8 **)(uVar16 + 0x30))();
          if ((int)lVar11 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar17;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar19 = 0;
            if (iVar5 != 0) {
              uVar19 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar19;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar20 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            puStack_208 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar8;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar19 = 0;
              if (iVar5 != 0) {
                uVar19 = iVar4 / iVar5;
              }
              uVar20 = (ulong)uVar19;
            }
            if (plVar10 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar18 = auVar32._0_8_;
              piVar9 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if ((int)piVar9 == 0) {
                return piVar9;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar18,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar11 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar18,iVar4,
                                           *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (lVar11,auVar32._8_8_);
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar11 = *(long *)(*(long *)(lVar22 + 0x30) + 0x20);
              *puVar18 = 0;
              if (0 < *(int *)(puVar18 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar18 + 0x38,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x38));
              }
              piVar9 = (int *)(puVar18 + 0x20);
              if (0 < *piVar9) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar9,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar11 + 0x18));
              }
              *piVar9 = 0;
              *(undefined8 *)(puVar18 + 0x28) = 0;
              *(undefined8 *)(puVar18 + 0x30) = 0;
              return piVar9;
            }
            plVar3 = &lStack_200;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar12 = (long *)0x0;
            lVar23 = lVar28;
            lVar28 = lVar11;
          }
          else {
            plVar3 = &lStack_1c0;
            plVar10 = auVar32._0_8_;
            uVar20 = uVar26;
            lVar8 = lVar17;
            lVar23 = lVar11;
            lVar28 = lStack_1d8;
            plVar12 = plStack_1e0;
            uVar26 = uStack_1e8;
            lVar17 = lStack_1f0;
            lVar30 = lStack_1f8;
            lVar27 = lStack_200;
            ppppppuVar31 = (undefined8 ******)pppppuStack_1d0;
            puStack_208 = puStack_1c8;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(long *)((long)plVar3 + -0x50) = param_7;
        *(long *)((long)plVar3 + -0x48) = param_5;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar17;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar12;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_208;
        *(int *)((long)plVar3 + -100) = (int)lVar8;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar23 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar19 = *(uint *)(plVar10 + 5);
        if ((int)uVar19 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar28,**(undefined8 **)(lVar11 + 0x30));
      if ((int)piVar7 != 0) {
        lVar23 = *plVar12;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + lVar28,
                                        *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar23 = *plVar12;
      lVar28 = lVar28 + 0x10;
    } while (lVar23 != 0);
  }
  piVar9 = (int *)func_0x00f78af4();
  return piVar9;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar10 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar19 != 0) {
      iVar1 = iVar6 / (int)uVar19;
    }
    uVar19 = iVar6 - iVar1 * uVar19;
    if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
    lVar8 = (long)(int)uVar19;
    iVar6 = *(int *)(lVar11 + lVar8 * 8 + 0x20);
    lVar11 = plVar10[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar11 != iVar6) && (-1 < (int)lVar11 - iVar6)) {
      lVar11 = plVar10[4];
      if (lVar11 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
      if (*(int *)(lVar11 + lVar8 * 8 + 0x24) == iVar4) {
        lVar11 = plVar10[3];
        if (lVar11 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar11,0);
        if (iVar6 == (int)uVar20) {
          lVar11 = plVar10[3];
          if (lVar11 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
          lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
          if (lVar11 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar11,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar11 = plVar10[4];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            *(int *)(lVar11 + lVar8 * 8 + 0x20) = (int)plVar10[6];
            *(uint *)((long)plVar10 + 0x2c) = uVar19;
            lVar11 = plVar10[3];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            lVar11 = lVar11 + lVar8 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar19 = *(uint *)(plVar10 + 5);
    if ((int)uVar19 <= iVar29) break;
code_r0x03125f10:
    lVar11 = plVar10[4];
    if (lVar11 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar12 = (long *)plVar10[3];
  if (plVar12 != (long *)0x0) {
    if (uVar19 == *(uint *)(plVar12 + 3)) {
      plVar12 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar19 << 1);
      iVar5 = (int)plVar10[5];
      if (0 < iVar5) {
        lVar11 = 4;
        do {
          lVar8 = plVar10[3];
          if (lVar8 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar11 - 4U) goto code_r0x03126220;
          if (plVar12 == (long *)0x0) goto code_r0x0312621c;
          lVar8 = *(long *)(lVar8 + lVar11 * 8);
          if ((lVar8 != 0) &&
             (lVar27 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar12 + 3) <= lVar11 - 4U) goto code_r0x03126220;
          plVar12[lVar11] = lVar8;
          iVar5 = (int)plVar10[5];
          lVar8 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar8 < iVar5);
      }
      plVar10[3] = (long)plVar12;
      lVar11 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar19 = *(uint *)(plVar10 + 5);
      if (0 < (int)uVar19) {
        lVar8 = 4;
        do {
          lVar27 = plVar10[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          if (lVar11 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar11 + lVar8 * 8) = *(undefined8 *)(lVar27 + lVar8 * 8);
          uVar19 = *(uint *)(plVar10 + 5);
          lVar27 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar27 < (int)uVar19);
      }
      plVar10[4] = lVar11;
      plVar12 = (long *)plVar10[3];
    }
    lVar11 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar11,uVar20,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar12 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar12 + 3) <= uVar19) goto code_r0x03126220;
      plVar12[(long)(int)uVar19 + 4] = lVar11;
      lVar11 = plVar10[4];
      if (lVar11 != 0) {
        uVar19 = *(uint *)(plVar10 + 5);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = lVar11 + (long)(int)uVar19 * 8;
        *(int *)(lVar11 + 0x20) = (int)plVar10[6];
        *(int *)(lVar11 + 0x24) = iVar4;
        lVar11 = plVar10[3];
        *(uint *)(plVar10 + 5) = uVar19 + 1;
        *(uint *)((long)plVar10 + 0x2c) = uVar19;
        if (lVar11 != 0) {
          if (uVar19 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar19 * 8;
code_r0x031261b8:
            return *(int **)(lVar11 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar25 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar25,0);
code_r0x0312622c:
    uVar25 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840b34 | Core.DebugMenu.DebugMenu.CreateElement<DebugUIPanelBehaviour>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__CreateElement_DebugUIButtonBehaviour_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long *extraout_x1;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  int *piStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_4;
  if ((bRam0000000003eb647b & 1) == 0) {
    func_0x00f78a20(0x3d2ed70);
    func_0x00f78a20(0x3d25a98);
    bRam0000000003eb647b = 1;
  }
  piVar9 = (int *)0x3eb6000;
  if ((param_1 != 0) &&
     (piVar7 = (int *)Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(param_1,0), param_5 != 0)) {
    unaff_x27 = 0x3d25000;
    param_5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(param_5);
    param_7 = func_0x00f78aec(/*System.WeakReference_TypeInfo*/ uRam0000000003d25a98);
    /*System.WeakReference$$.ctor*/ func_0x02a2224c(param_7,param_6,0);
    piVar9 = piVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      uStack_88 = SUB84(piVar7,0);
      uStack_84 = (undefined4)param_3;
      uStack_80 = (undefined4)param_2;
      uStack_7c = 0;
      lStack_78 = param_4;
      lStack_70 = param_5;
      lStack_68 = param_7;
      /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$set_Item*/ func_0x01e9527c(*(long *)(param_1 + 0x48),piVar7,&uStack_88,uRam0000000003d2ed70);
      return piVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_98 = &Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_;
  uStack_b0 = param_2;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((lVar8 != 0) &&
     (lVar8 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), param_4 = lVar11, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
    return piVar9;
  }
  auVar32 = func_0x00f78af4();
  lVar11 = auVar32._8_8_;
  plVar12 = auVar32._0_8_;
  puStack_b8 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  piStack_f0 = piVar9;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_3;
  uStack_d0 = param_2;
  lStack_c8 = param_4;
  ppuStack_c0 = &puStack_a0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar8 = plVar12[10];
  lVar27 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar8,lVar27);
  lVar30 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar9 = (int *)0x0;
    if (lVar8 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar8 = func_0x00f78adc(lVar8,lVar23);
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar8 != 0) {
      piVar9 = (int *)func_0x00f78adc(lVar8,lVar23);
      uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar9 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar8,lVar23);
    }
    piVar9 = (int *)0x0;
    uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar9 != (int *)0x0) {
      return piVar9;
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8);
    lVar11 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    uVar25 = func_0x00f78a24(0x3d663d0);
    uVar13 = func_0x00f78a24(0x3d69d18);
    piVar9 = (int *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar20 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar9 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar9 != (int *)0x0) {
      if (lVar8 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar12[10] != 0) &&
         (plVar10 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar12[10],0), plVar10 != (long *)0x0)) {
        uStack_f8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar25 = func_0x00f78a24(0x3d663d0);
  uVar13 = func_0x00f78a24(0x3d69d18);
  uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
code_r0x01840ea4:
  lVar8 = 0;
  uVar25 = /*System.String$$Concat*/ func_0x029be818(uVar13,uStack_f8,uVar25);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  lVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar25);
  uVar15 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar14,uVar15);
  plVar12 = auVar32._8_8_;
  piVar7 = auVar32._0_8_;
  puStack_108 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar23 = *plVar12;
  piStack_130 = piVar9;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  uStack_118 = uVar25;
  pppuStack_110 = (undefined8 ***)&ppuStack_c0;
  if (lVar23 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar17 = lVar11;
    do {
      if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar26) {
        return piVar7;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar25 = func_0x00f78b24();
        func_0x00f78ac0(uVar25,0);
        plVar3 = &uStack_180;
        puStack_138 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar24 = *extraout_x1;
        lVar23 = lVar17;
        uVar21 = uVar20;
        lVar22 = lVar8;
        lStack_170 = lVar30;
        lStack_168 = lVar27;
        lStack_160 = lVar28;
        uStack_158 = uVar26;
        plStack_150 = plVar12;
        lStack_148 = lVar11;
        ppppuStack_140 = &pppuStack_110;
        if (lVar24 == 0) goto code_r0x01841098;
        uVar19 = (uint)lVar17;
        if (uVar19 < *(uint *)(lVar24 + 0x18)) {
          lVar27 = (long)(int)uVar19;
          uVar16 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar24 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar8 + 0x30));
          lVar30 = *extraout_x1;
          lVar11 = lVar17;
          plVar12 = extraout_x1;
          uVar26 = uVar20;
          lVar28 = lVar8;
          if ((uVar16 & 1) == 0) {
code_r0x01841028:
            uStack_180 = 0;
            uStack_178 = 0;
            lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
            lVar23 = 4;
            uVar21 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_180,uVar20);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar17 = lVar11;
              func_0x00f78af4();
            }
            else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar8 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = uStack_178;
              *(undefined8 *)(lVar8 + 0x20) = uStack_180;
code_r0x01841064:
              lVar8 = *extraout_x1;
              if (lVar8 == 0) goto code_r0x01841098;
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                return *(int **)(lVar8 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar24 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar24 + 0x28) < (int)uVar20) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar24 + 0x20,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar25 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar25,0);
        uVar20 = auVar32._8_8_;
        plVar10 = auVar32._0_8_;
        puStack_188 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar11 = lVar23;
        uVar16 = uVar21;
        lStack_1c0 = lVar30;
        lStack_1b8 = lVar27;
        lStack_1b0 = lVar28;
        uStack_1a8 = uVar26;
        plStack_1a0 = plVar12;
        lStack_198 = lVar17;
        pppppuStack_190 = &ppppuStack_140;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
        if ((int)lVar23 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar8;
          lVar11 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar19 = 0;
          if (iVar5 != 0) {
            uVar19 = iVar4 / iVar5;
          }
          uVar20 = (ulong)uVar19;
        }
        lVar28 = lStack_198;
        plVar12 = plStack_1a0;
        uVar26 = uStack_1a8;
        lVar17 = lStack_1b0;
        lVar30 = lStack_1b8;
        lVar27 = lStack_1c0;
        ppppppuVar31 = (undefined8 ******)pppppuStack_190;
        puStack_208 = puStack_188;
        if (plVar10 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_200 = 0x3eb6000;
          lStack_1f8 = 0x3d23210;
          puStack_1c8 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_1d0;
          lVar28 = lVar11;
          uVar21 = uVar16;
          lStack_1f0 = lVar8;
          uStack_1e8 = uVar20;
          plStack_1e0 = plVar10;
          lStack_1d8 = lVar23;
          pppppuStack_1d0 = &pppppuStack_190;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = (**(code **)**(undefined8 **)(uVar16 + 0x30))();
          if ((int)lVar11 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar17;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar19 = 0;
            if (iVar5 != 0) {
              uVar19 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar19;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar20 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            puStack_208 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar8;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar19 = 0;
              if (iVar5 != 0) {
                uVar19 = iVar4 / iVar5;
              }
              uVar20 = (ulong)uVar19;
            }
            if (plVar10 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar18 = auVar32._0_8_;
              piVar9 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if ((int)piVar9 == 0) {
                return piVar9;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar18,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar11 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar18,iVar4,
                                           *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (lVar11,auVar32._8_8_);
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar11 = *(long *)(*(long *)(lVar22 + 0x30) + 0x20);
              *puVar18 = 0;
              if (0 < *(int *)(puVar18 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar18 + 0x38,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x38));
              }
              piVar9 = (int *)(puVar18 + 0x20);
              if (0 < *piVar9) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar9,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar11 + 0x18));
              }
              *piVar9 = 0;
              *(undefined8 *)(puVar18 + 0x28) = 0;
              *(undefined8 *)(puVar18 + 0x30) = 0;
              return piVar9;
            }
            plVar3 = &lStack_200;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar12 = (long *)0x0;
            lVar23 = lVar28;
            lVar28 = lVar11;
          }
          else {
            plVar3 = &lStack_1c0;
            plVar10 = auVar32._0_8_;
            uVar20 = uVar26;
            lVar8 = lVar17;
            lVar23 = lVar11;
            lVar28 = lStack_1d8;
            plVar12 = plStack_1e0;
            uVar26 = uStack_1e8;
            lVar17 = lStack_1f0;
            lVar30 = lStack_1f8;
            lVar27 = lStack_200;
            ppppppuVar31 = (undefined8 ******)pppppuStack_1d0;
            puStack_208 = puStack_1c8;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(long *)((long)plVar3 + -0x50) = param_7;
        *(long *)((long)plVar3 + -0x48) = param_5;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar17;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar12;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_208;
        *(int *)((long)plVar3 + -100) = (int)lVar8;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar23 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar19 = *(uint *)(plVar10 + 5);
        if ((int)uVar19 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar28,**(undefined8 **)(lVar11 + 0x30));
      if ((int)piVar7 != 0) {
        lVar23 = *plVar12;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + lVar28,
                                        *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar23 = *plVar12;
      lVar28 = lVar28 + 0x10;
    } while (lVar23 != 0);
  }
  piVar9 = (int *)func_0x00f78af4();
  return piVar9;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar10 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar19 != 0) {
      iVar1 = iVar6 / (int)uVar19;
    }
    uVar19 = iVar6 - iVar1 * uVar19;
    if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
    lVar8 = (long)(int)uVar19;
    iVar6 = *(int *)(lVar11 + lVar8 * 8 + 0x20);
    lVar11 = plVar10[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar11 != iVar6) && (-1 < (int)lVar11 - iVar6)) {
      lVar11 = plVar10[4];
      if (lVar11 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
      if (*(int *)(lVar11 + lVar8 * 8 + 0x24) == iVar4) {
        lVar11 = plVar10[3];
        if (lVar11 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar11,0);
        if (iVar6 == (int)uVar20) {
          lVar11 = plVar10[3];
          if (lVar11 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
          lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
          if (lVar11 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar11,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar11 = plVar10[4];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            *(int *)(lVar11 + lVar8 * 8 + 0x20) = (int)plVar10[6];
            *(uint *)((long)plVar10 + 0x2c) = uVar19;
            lVar11 = plVar10[3];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            lVar11 = lVar11 + lVar8 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar19 = *(uint *)(plVar10 + 5);
    if ((int)uVar19 <= iVar29) break;
code_r0x03125f10:
    lVar11 = plVar10[4];
    if (lVar11 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar12 = (long *)plVar10[3];
  if (plVar12 != (long *)0x0) {
    if (uVar19 == *(uint *)(plVar12 + 3)) {
      plVar12 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar19 << 1);
      iVar5 = (int)plVar10[5];
      if (0 < iVar5) {
        lVar11 = 4;
        do {
          lVar8 = plVar10[3];
          if (lVar8 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar11 - 4U) goto code_r0x03126220;
          if (plVar12 == (long *)0x0) goto code_r0x0312621c;
          lVar8 = *(long *)(lVar8 + lVar11 * 8);
          if ((lVar8 != 0) &&
             (lVar27 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar12 + 3) <= lVar11 - 4U) goto code_r0x03126220;
          plVar12[lVar11] = lVar8;
          iVar5 = (int)plVar10[5];
          lVar8 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar8 < iVar5);
      }
      plVar10[3] = (long)plVar12;
      lVar11 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar19 = *(uint *)(plVar10 + 5);
      if (0 < (int)uVar19) {
        lVar8 = 4;
        do {
          lVar27 = plVar10[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          if (lVar11 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar11 + lVar8 * 8) = *(undefined8 *)(lVar27 + lVar8 * 8);
          uVar19 = *(uint *)(plVar10 + 5);
          lVar27 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar27 < (int)uVar19);
      }
      plVar10[4] = lVar11;
      plVar12 = (long *)plVar10[3];
    }
    lVar11 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar11,uVar20,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar12 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar12 + 3) <= uVar19) goto code_r0x03126220;
      plVar12[(long)(int)uVar19 + 4] = lVar11;
      lVar11 = plVar10[4];
      if (lVar11 != 0) {
        uVar19 = *(uint *)(plVar10 + 5);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = lVar11 + (long)(int)uVar19 * 8;
        *(int *)(lVar11 + 0x20) = (int)plVar10[6];
        *(int *)(lVar11 + 0x24) = iVar4;
        lVar11 = plVar10[3];
        *(uint *)(plVar10 + 5) = uVar19 + 1;
        *(uint *)((long)plVar10 + 0x2c) = uVar19;
        if (lVar11 != 0) {
          if (uVar19 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar19 * 8;
code_r0x031261b8:
            return *(int **)(lVar11 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar25 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar25,0);
code_r0x0312622c:
    uVar25 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840b34 | Core.DebugMenu.DebugMenu.CreateElement<DebugUISliderBehaviour>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__CreateElement_DebugUIButtonBehaviour_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long *extraout_x1;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  int *piStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_4;
  if ((bRam0000000003eb647b & 1) == 0) {
    func_0x00f78a20(0x3d2ed70);
    func_0x00f78a20(0x3d25a98);
    bRam0000000003eb647b = 1;
  }
  piVar9 = (int *)0x3eb6000;
  if ((param_1 != 0) &&
     (piVar7 = (int *)Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(param_1,0), param_5 != 0)) {
    unaff_x27 = 0x3d25000;
    param_5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(param_5);
    param_7 = func_0x00f78aec(/*System.WeakReference_TypeInfo*/ uRam0000000003d25a98);
    /*System.WeakReference$$.ctor*/ func_0x02a2224c(param_7,param_6,0);
    piVar9 = piVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      uStack_88 = SUB84(piVar7,0);
      uStack_84 = (undefined4)param_3;
      uStack_80 = (undefined4)param_2;
      uStack_7c = 0;
      lStack_78 = param_4;
      lStack_70 = param_5;
      lStack_68 = param_7;
      /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$set_Item*/ func_0x01e9527c(*(long *)(param_1 + 0x48),piVar7,&uStack_88,uRam0000000003d2ed70);
      return piVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_98 = &Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_;
  uStack_b0 = param_2;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((lVar8 != 0) &&
     (lVar8 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), param_4 = lVar11, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
    return piVar9;
  }
  auVar32 = func_0x00f78af4();
  lVar11 = auVar32._8_8_;
  plVar12 = auVar32._0_8_;
  puStack_b8 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  piStack_f0 = piVar9;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_3;
  uStack_d0 = param_2;
  lStack_c8 = param_4;
  ppuStack_c0 = &puStack_a0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar8 = plVar12[10];
  lVar27 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar8,lVar27);
  lVar30 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar9 = (int *)0x0;
    if (lVar8 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar8 = func_0x00f78adc(lVar8,lVar23);
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar8 != 0) {
      piVar9 = (int *)func_0x00f78adc(lVar8,lVar23);
      uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar9 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar8,lVar23);
    }
    piVar9 = (int *)0x0;
    uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar9 != (int *)0x0) {
      return piVar9;
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8);
    lVar11 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    uVar25 = func_0x00f78a24(0x3d663d0);
    uVar13 = func_0x00f78a24(0x3d69d18);
    piVar9 = (int *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar20 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar9 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar9 != (int *)0x0) {
      if (lVar8 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar12[10] != 0) &&
         (plVar10 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar12[10],0), plVar10 != (long *)0x0)) {
        uStack_f8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar25 = func_0x00f78a24(0x3d663d0);
  uVar13 = func_0x00f78a24(0x3d69d18);
  uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
code_r0x01840ea4:
  lVar8 = 0;
  uVar25 = /*System.String$$Concat*/ func_0x029be818(uVar13,uStack_f8,uVar25);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  lVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar25);
  uVar15 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar14,uVar15);
  plVar12 = auVar32._8_8_;
  piVar7 = auVar32._0_8_;
  puStack_108 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar23 = *plVar12;
  piStack_130 = piVar9;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  uStack_118 = uVar25;
  pppuStack_110 = (undefined8 ***)&ppuStack_c0;
  if (lVar23 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar17 = lVar11;
    do {
      if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar26) {
        return piVar7;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar25 = func_0x00f78b24();
        func_0x00f78ac0(uVar25,0);
        plVar3 = &uStack_180;
        puStack_138 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar24 = *extraout_x1;
        lVar23 = lVar17;
        uVar21 = uVar20;
        lVar22 = lVar8;
        lStack_170 = lVar30;
        lStack_168 = lVar27;
        lStack_160 = lVar28;
        uStack_158 = uVar26;
        plStack_150 = plVar12;
        lStack_148 = lVar11;
        ppppuStack_140 = &pppuStack_110;
        if (lVar24 == 0) goto code_r0x01841098;
        uVar19 = (uint)lVar17;
        if (uVar19 < *(uint *)(lVar24 + 0x18)) {
          lVar27 = (long)(int)uVar19;
          uVar16 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar24 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar8 + 0x30));
          lVar30 = *extraout_x1;
          lVar11 = lVar17;
          plVar12 = extraout_x1;
          uVar26 = uVar20;
          lVar28 = lVar8;
          if ((uVar16 & 1) == 0) {
code_r0x01841028:
            uStack_180 = 0;
            uStack_178 = 0;
            lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
            lVar23 = 4;
            uVar21 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_180,uVar20);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar17 = lVar11;
              func_0x00f78af4();
            }
            else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar8 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = uStack_178;
              *(undefined8 *)(lVar8 + 0x20) = uStack_180;
code_r0x01841064:
              lVar8 = *extraout_x1;
              if (lVar8 == 0) goto code_r0x01841098;
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                return *(int **)(lVar8 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar24 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar24 + 0x28) < (int)uVar20) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar24 + 0x20,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar25 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar25,0);
        uVar20 = auVar32._8_8_;
        plVar10 = auVar32._0_8_;
        puStack_188 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar11 = lVar23;
        uVar16 = uVar21;
        lStack_1c0 = lVar30;
        lStack_1b8 = lVar27;
        lStack_1b0 = lVar28;
        uStack_1a8 = uVar26;
        plStack_1a0 = plVar12;
        lStack_198 = lVar17;
        pppppuStack_190 = &ppppuStack_140;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
        if ((int)lVar23 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar8;
          lVar11 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar19 = 0;
          if (iVar5 != 0) {
            uVar19 = iVar4 / iVar5;
          }
          uVar20 = (ulong)uVar19;
        }
        lVar28 = lStack_198;
        plVar12 = plStack_1a0;
        uVar26 = uStack_1a8;
        lVar17 = lStack_1b0;
        lVar30 = lStack_1b8;
        lVar27 = lStack_1c0;
        ppppppuVar31 = (undefined8 ******)pppppuStack_190;
        puStack_208 = puStack_188;
        if (plVar10 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_200 = 0x3eb6000;
          lStack_1f8 = 0x3d23210;
          puStack_1c8 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_1d0;
          lVar28 = lVar11;
          uVar21 = uVar16;
          lStack_1f0 = lVar8;
          uStack_1e8 = uVar20;
          plStack_1e0 = plVar10;
          lStack_1d8 = lVar23;
          pppppuStack_1d0 = &pppppuStack_190;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = (**(code **)**(undefined8 **)(uVar16 + 0x30))();
          if ((int)lVar11 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar17;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar19 = 0;
            if (iVar5 != 0) {
              uVar19 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar19;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar20 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            puStack_208 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar8;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar19 = 0;
              if (iVar5 != 0) {
                uVar19 = iVar4 / iVar5;
              }
              uVar20 = (ulong)uVar19;
            }
            if (plVar10 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar18 = auVar32._0_8_;
              piVar9 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if ((int)piVar9 == 0) {
                return piVar9;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar18,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar11 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar18,iVar4,
                                           *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (lVar11,auVar32._8_8_);
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar11 = *(long *)(*(long *)(lVar22 + 0x30) + 0x20);
              *puVar18 = 0;
              if (0 < *(int *)(puVar18 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar18 + 0x38,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x38));
              }
              piVar9 = (int *)(puVar18 + 0x20);
              if (0 < *piVar9) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar9,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar11 + 0x18));
              }
              *piVar9 = 0;
              *(undefined8 *)(puVar18 + 0x28) = 0;
              *(undefined8 *)(puVar18 + 0x30) = 0;
              return piVar9;
            }
            plVar3 = &lStack_200;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar12 = (long *)0x0;
            lVar23 = lVar28;
            lVar28 = lVar11;
          }
          else {
            plVar3 = &lStack_1c0;
            plVar10 = auVar32._0_8_;
            uVar20 = uVar26;
            lVar8 = lVar17;
            lVar23 = lVar11;
            lVar28 = lStack_1d8;
            plVar12 = plStack_1e0;
            uVar26 = uStack_1e8;
            lVar17 = lStack_1f0;
            lVar30 = lStack_1f8;
            lVar27 = lStack_200;
            ppppppuVar31 = (undefined8 ******)pppppuStack_1d0;
            puStack_208 = puStack_1c8;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(long *)((long)plVar3 + -0x50) = param_7;
        *(long *)((long)plVar3 + -0x48) = param_5;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar17;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar12;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_208;
        *(int *)((long)plVar3 + -100) = (int)lVar8;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar23 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar19 = *(uint *)(plVar10 + 5);
        if ((int)uVar19 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar28,**(undefined8 **)(lVar11 + 0x30));
      if ((int)piVar7 != 0) {
        lVar23 = *plVar12;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + lVar28,
                                        *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar23 = *plVar12;
      lVar28 = lVar28 + 0x10;
    } while (lVar23 != 0);
  }
  piVar9 = (int *)func_0x00f78af4();
  return piVar9;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar10 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar19 != 0) {
      iVar1 = iVar6 / (int)uVar19;
    }
    uVar19 = iVar6 - iVar1 * uVar19;
    if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
    lVar8 = (long)(int)uVar19;
    iVar6 = *(int *)(lVar11 + lVar8 * 8 + 0x20);
    lVar11 = plVar10[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar11 != iVar6) && (-1 < (int)lVar11 - iVar6)) {
      lVar11 = plVar10[4];
      if (lVar11 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
      if (*(int *)(lVar11 + lVar8 * 8 + 0x24) == iVar4) {
        lVar11 = plVar10[3];
        if (lVar11 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar11,0);
        if (iVar6 == (int)uVar20) {
          lVar11 = plVar10[3];
          if (lVar11 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
          lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
          if (lVar11 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar11,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar11 = plVar10[4];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            *(int *)(lVar11 + lVar8 * 8 + 0x20) = (int)plVar10[6];
            *(uint *)((long)plVar10 + 0x2c) = uVar19;
            lVar11 = plVar10[3];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            lVar11 = lVar11 + lVar8 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar19 = *(uint *)(plVar10 + 5);
    if ((int)uVar19 <= iVar29) break;
code_r0x03125f10:
    lVar11 = plVar10[4];
    if (lVar11 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar12 = (long *)plVar10[3];
  if (plVar12 != (long *)0x0) {
    if (uVar19 == *(uint *)(plVar12 + 3)) {
      plVar12 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar19 << 1);
      iVar5 = (int)plVar10[5];
      if (0 < iVar5) {
        lVar11 = 4;
        do {
          lVar8 = plVar10[3];
          if (lVar8 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar11 - 4U) goto code_r0x03126220;
          if (plVar12 == (long *)0x0) goto code_r0x0312621c;
          lVar8 = *(long *)(lVar8 + lVar11 * 8);
          if ((lVar8 != 0) &&
             (lVar27 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar12 + 3) <= lVar11 - 4U) goto code_r0x03126220;
          plVar12[lVar11] = lVar8;
          iVar5 = (int)plVar10[5];
          lVar8 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar8 < iVar5);
      }
      plVar10[3] = (long)plVar12;
      lVar11 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar19 = *(uint *)(plVar10 + 5);
      if (0 < (int)uVar19) {
        lVar8 = 4;
        do {
          lVar27 = plVar10[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          if (lVar11 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar11 + lVar8 * 8) = *(undefined8 *)(lVar27 + lVar8 * 8);
          uVar19 = *(uint *)(plVar10 + 5);
          lVar27 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar27 < (int)uVar19);
      }
      plVar10[4] = lVar11;
      plVar12 = (long *)plVar10[3];
    }
    lVar11 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar11,uVar20,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar12 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar12 + 3) <= uVar19) goto code_r0x03126220;
      plVar12[(long)(int)uVar19 + 4] = lVar11;
      lVar11 = plVar10[4];
      if (lVar11 != 0) {
        uVar19 = *(uint *)(plVar10 + 5);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = lVar11 + (long)(int)uVar19 * 8;
        *(int *)(lVar11 + 0x20) = (int)plVar10[6];
        *(int *)(lVar11 + 0x24) = iVar4;
        lVar11 = plVar10[3];
        *(uint *)(plVar10 + 5) = uVar19 + 1;
        *(uint *)((long)plVar10 + 0x2c) = uVar19;
        if (lVar11 != 0) {
          if (uVar19 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar19 * 8;
code_r0x031261b8:
            return *(int **)(lVar11 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar25 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar25,0);
code_r0x0312622c:
    uVar25 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840b34 | Core.DebugMenu.DebugMenu.CreateElement<DebugUIToggleBehaviour>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__CreateElement_DebugUIButtonBehaviour_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long *extraout_x1;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  int *piStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_4;
  if ((bRam0000000003eb647b & 1) == 0) {
    func_0x00f78a20(0x3d2ed70);
    func_0x00f78a20(0x3d25a98);
    bRam0000000003eb647b = 1;
  }
  piVar9 = (int *)0x3eb6000;
  if ((param_1 != 0) &&
     (piVar7 = (int *)Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(param_1,0), param_5 != 0)) {
    unaff_x27 = 0x3d25000;
    param_5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(param_5);
    param_7 = func_0x00f78aec(/*System.WeakReference_TypeInfo*/ uRam0000000003d25a98);
    /*System.WeakReference$$.ctor*/ func_0x02a2224c(param_7,param_6,0);
    piVar9 = piVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      uStack_88 = SUB84(piVar7,0);
      uStack_84 = (undefined4)param_3;
      uStack_80 = (undefined4)param_2;
      uStack_7c = 0;
      lStack_78 = param_4;
      lStack_70 = param_5;
      lStack_68 = param_7;
      /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$set_Item*/ func_0x01e9527c(*(long *)(param_1 + 0x48),piVar7,&uStack_88,uRam0000000003d2ed70);
      return piVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_98 = &Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_;
  uStack_b0 = param_2;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((lVar8 != 0) &&
     (lVar8 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), param_4 = lVar11, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
    return piVar9;
  }
  auVar32 = func_0x00f78af4();
  lVar11 = auVar32._8_8_;
  plVar12 = auVar32._0_8_;
  puStack_b8 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  piStack_f0 = piVar9;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_3;
  uStack_d0 = param_2;
  lStack_c8 = param_4;
  ppuStack_c0 = &puStack_a0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar8 = plVar12[10];
  lVar27 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar8,lVar27);
  lVar30 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar9 = (int *)0x0;
    if (lVar8 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar8 = func_0x00f78adc(lVar8,lVar23);
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar8 != 0) {
      piVar9 = (int *)func_0x00f78adc(lVar8,lVar23);
      uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar9 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar8,lVar23);
    }
    piVar9 = (int *)0x0;
    uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar9 != (int *)0x0) {
      return piVar9;
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8);
    lVar11 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    uVar25 = func_0x00f78a24(0x3d663d0);
    uVar13 = func_0x00f78a24(0x3d69d18);
    piVar9 = (int *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar20 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar9 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar9 != (int *)0x0) {
      if (lVar8 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar12[10] != 0) &&
         (plVar10 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar12[10],0), plVar10 != (long *)0x0)) {
        uStack_f8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar25 = func_0x00f78a24(0x3d663d0);
  uVar13 = func_0x00f78a24(0x3d69d18);
  uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
code_r0x01840ea4:
  lVar8 = 0;
  uVar25 = /*System.String$$Concat*/ func_0x029be818(uVar13,uStack_f8,uVar25);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  lVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar25);
  uVar15 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar14,uVar15);
  plVar12 = auVar32._8_8_;
  piVar7 = auVar32._0_8_;
  puStack_108 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar23 = *plVar12;
  piStack_130 = piVar9;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  uStack_118 = uVar25;
  pppuStack_110 = (undefined8 ***)&ppuStack_c0;
  if (lVar23 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar17 = lVar11;
    do {
      if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar26) {
        return piVar7;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar25 = func_0x00f78b24();
        func_0x00f78ac0(uVar25,0);
        plVar3 = &uStack_180;
        puStack_138 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar24 = *extraout_x1;
        lVar23 = lVar17;
        uVar21 = uVar20;
        lVar22 = lVar8;
        lStack_170 = lVar30;
        lStack_168 = lVar27;
        lStack_160 = lVar28;
        uStack_158 = uVar26;
        plStack_150 = plVar12;
        lStack_148 = lVar11;
        ppppuStack_140 = &pppuStack_110;
        if (lVar24 == 0) goto code_r0x01841098;
        uVar19 = (uint)lVar17;
        if (uVar19 < *(uint *)(lVar24 + 0x18)) {
          lVar27 = (long)(int)uVar19;
          uVar16 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar24 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar8 + 0x30));
          lVar30 = *extraout_x1;
          lVar11 = lVar17;
          plVar12 = extraout_x1;
          uVar26 = uVar20;
          lVar28 = lVar8;
          if ((uVar16 & 1) == 0) {
code_r0x01841028:
            uStack_180 = 0;
            uStack_178 = 0;
            lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
            lVar23 = 4;
            uVar21 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_180,uVar20);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar17 = lVar11;
              func_0x00f78af4();
            }
            else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar8 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = uStack_178;
              *(undefined8 *)(lVar8 + 0x20) = uStack_180;
code_r0x01841064:
              lVar8 = *extraout_x1;
              if (lVar8 == 0) goto code_r0x01841098;
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                return *(int **)(lVar8 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar24 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar24 + 0x28) < (int)uVar20) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar24 + 0x20,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar25 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar25,0);
        uVar20 = auVar32._8_8_;
        plVar10 = auVar32._0_8_;
        puStack_188 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar11 = lVar23;
        uVar16 = uVar21;
        lStack_1c0 = lVar30;
        lStack_1b8 = lVar27;
        lStack_1b0 = lVar28;
        uStack_1a8 = uVar26;
        plStack_1a0 = plVar12;
        lStack_198 = lVar17;
        pppppuStack_190 = &ppppuStack_140;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
        if ((int)lVar23 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar8;
          lVar11 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar19 = 0;
          if (iVar5 != 0) {
            uVar19 = iVar4 / iVar5;
          }
          uVar20 = (ulong)uVar19;
        }
        lVar28 = lStack_198;
        plVar12 = plStack_1a0;
        uVar26 = uStack_1a8;
        lVar17 = lStack_1b0;
        lVar30 = lStack_1b8;
        lVar27 = lStack_1c0;
        ppppppuVar31 = (undefined8 ******)pppppuStack_190;
        puStack_208 = puStack_188;
        if (plVar10 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_200 = 0x3eb6000;
          lStack_1f8 = 0x3d23210;
          puStack_1c8 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_1d0;
          lVar28 = lVar11;
          uVar21 = uVar16;
          lStack_1f0 = lVar8;
          uStack_1e8 = uVar20;
          plStack_1e0 = plVar10;
          lStack_1d8 = lVar23;
          pppppuStack_1d0 = &pppppuStack_190;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = (**(code **)**(undefined8 **)(uVar16 + 0x30))();
          if ((int)lVar11 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar17;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar19 = 0;
            if (iVar5 != 0) {
              uVar19 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar19;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar20 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            puStack_208 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar8;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar19 = 0;
              if (iVar5 != 0) {
                uVar19 = iVar4 / iVar5;
              }
              uVar20 = (ulong)uVar19;
            }
            if (plVar10 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar18 = auVar32._0_8_;
              piVar9 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if ((int)piVar9 == 0) {
                return piVar9;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar18,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar11 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar18,iVar4,
                                           *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (lVar11,auVar32._8_8_);
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar11 = *(long *)(*(long *)(lVar22 + 0x30) + 0x20);
              *puVar18 = 0;
              if (0 < *(int *)(puVar18 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar18 + 0x38,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x38));
              }
              piVar9 = (int *)(puVar18 + 0x20);
              if (0 < *piVar9) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar9,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar11 + 0x18));
              }
              *piVar9 = 0;
              *(undefined8 *)(puVar18 + 0x28) = 0;
              *(undefined8 *)(puVar18 + 0x30) = 0;
              return piVar9;
            }
            plVar3 = &lStack_200;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar12 = (long *)0x0;
            lVar23 = lVar28;
            lVar28 = lVar11;
          }
          else {
            plVar3 = &lStack_1c0;
            plVar10 = auVar32._0_8_;
            uVar20 = uVar26;
            lVar8 = lVar17;
            lVar23 = lVar11;
            lVar28 = lStack_1d8;
            plVar12 = plStack_1e0;
            uVar26 = uStack_1e8;
            lVar17 = lStack_1f0;
            lVar30 = lStack_1f8;
            lVar27 = lStack_200;
            ppppppuVar31 = (undefined8 ******)pppppuStack_1d0;
            puStack_208 = puStack_1c8;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(long *)((long)plVar3 + -0x50) = param_7;
        *(long *)((long)plVar3 + -0x48) = param_5;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar17;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar12;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_208;
        *(int *)((long)plVar3 + -100) = (int)lVar8;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar23 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar19 = *(uint *)(plVar10 + 5);
        if ((int)uVar19 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar28,**(undefined8 **)(lVar11 + 0x30));
      if ((int)piVar7 != 0) {
        lVar23 = *plVar12;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + lVar28,
                                        *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar23 = *plVar12;
      lVar28 = lVar28 + 0x10;
    } while (lVar23 != 0);
  }
  piVar9 = (int *)func_0x00f78af4();
  return piVar9;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar10 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar19 != 0) {
      iVar1 = iVar6 / (int)uVar19;
    }
    uVar19 = iVar6 - iVar1 * uVar19;
    if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
    lVar8 = (long)(int)uVar19;
    iVar6 = *(int *)(lVar11 + lVar8 * 8 + 0x20);
    lVar11 = plVar10[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar11 != iVar6) && (-1 < (int)lVar11 - iVar6)) {
      lVar11 = plVar10[4];
      if (lVar11 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
      if (*(int *)(lVar11 + lVar8 * 8 + 0x24) == iVar4) {
        lVar11 = plVar10[3];
        if (lVar11 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar11,0);
        if (iVar6 == (int)uVar20) {
          lVar11 = plVar10[3];
          if (lVar11 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
          lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
          if (lVar11 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar11,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar11 = plVar10[4];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            *(int *)(lVar11 + lVar8 * 8 + 0x20) = (int)plVar10[6];
            *(uint *)((long)plVar10 + 0x2c) = uVar19;
            lVar11 = plVar10[3];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            lVar11 = lVar11 + lVar8 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar19 = *(uint *)(plVar10 + 5);
    if ((int)uVar19 <= iVar29) break;
code_r0x03125f10:
    lVar11 = plVar10[4];
    if (lVar11 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar12 = (long *)plVar10[3];
  if (plVar12 != (long *)0x0) {
    if (uVar19 == *(uint *)(plVar12 + 3)) {
      plVar12 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar19 << 1);
      iVar5 = (int)plVar10[5];
      if (0 < iVar5) {
        lVar11 = 4;
        do {
          lVar8 = plVar10[3];
          if (lVar8 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar11 - 4U) goto code_r0x03126220;
          if (plVar12 == (long *)0x0) goto code_r0x0312621c;
          lVar8 = *(long *)(lVar8 + lVar11 * 8);
          if ((lVar8 != 0) &&
             (lVar27 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar12 + 3) <= lVar11 - 4U) goto code_r0x03126220;
          plVar12[lVar11] = lVar8;
          iVar5 = (int)plVar10[5];
          lVar8 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar8 < iVar5);
      }
      plVar10[3] = (long)plVar12;
      lVar11 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar19 = *(uint *)(plVar10 + 5);
      if (0 < (int)uVar19) {
        lVar8 = 4;
        do {
          lVar27 = plVar10[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          if (lVar11 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar11 + lVar8 * 8) = *(undefined8 *)(lVar27 + lVar8 * 8);
          uVar19 = *(uint *)(plVar10 + 5);
          lVar27 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar27 < (int)uVar19);
      }
      plVar10[4] = lVar11;
      plVar12 = (long *)plVar10[3];
    }
    lVar11 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar11,uVar20,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar12 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar12 + 3) <= uVar19) goto code_r0x03126220;
      plVar12[(long)(int)uVar19 + 4] = lVar11;
      lVar11 = plVar10[4];
      if (lVar11 != 0) {
        uVar19 = *(uint *)(plVar10 + 5);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = lVar11 + (long)(int)uVar19 * 8;
        *(int *)(lVar11 + 0x20) = (int)plVar10[6];
        *(int *)(lVar11 + 0x24) = iVar4;
        lVar11 = plVar10[3];
        *(uint *)(plVar10 + 5) = uVar19 + 1;
        *(uint *)((long)plVar10 + 0x2c) = uVar19;
        if (lVar11 != 0) {
          if (uVar19 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar19 * 8;
code_r0x031261b8:
            return *(int **)(lVar11 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar25 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar25,0);
code_r0x0312622c:
    uVar25 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840b34 | Core.DebugMenu.DebugMenu.CreateElement<object>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__CreateElement_DebugUIButtonBehaviour_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  long *extraout_x1;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  int *piStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_4;
  if ((bRam0000000003eb647b & 1) == 0) {
    func_0x00f78a20(0x3d2ed70);
    func_0x00f78a20(0x3d25a98);
    bRam0000000003eb647b = 1;
  }
  piVar9 = (int *)0x3eb6000;
  if ((param_1 != 0) &&
     (piVar7 = (int *)Core_DebugMenu_DebugMenu__GetNextIdAndIncrement(param_1,0), param_5 != 0)) {
    unaff_x27 = 0x3d25000;
    param_5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(param_5);
    param_7 = func_0x00f78aec(/*System.WeakReference_TypeInfo*/ uRam0000000003d25a98);
    /*System.WeakReference$$.ctor*/ func_0x02a2224c(param_7,param_6,0);
    piVar9 = piVar7;
    if (*(long *)(param_1 + 0x48) != 0) {
      uStack_88 = SUB84(piVar7,0);
      uStack_84 = (undefined4)param_3;
      uStack_80 = (undefined4)param_2;
      uStack_7c = 0;
      lStack_78 = param_4;
      lStack_70 = param_5;
      lStack_68 = param_7;
      /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$set_Item*/ func_0x01e9527c(*(long *)(param_1 + 0x48),piVar7,&uStack_88,uRam0000000003d2ed70);
      return piVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_98 = &Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_;
  uStack_b0 = param_2;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((lVar8 != 0) &&
     (lVar8 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), param_4 = lVar11, lVar8 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar9 = (int *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
    return piVar9;
  }
  auVar32 = func_0x00f78af4();
  lVar11 = auVar32._8_8_;
  plVar12 = auVar32._0_8_;
  puStack_b8 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  piStack_f0 = piVar9;
  lStack_e8 = param_1;
  uStack_e0 = param_6;
  uStack_d8 = param_3;
  uStack_d0 = param_2;
  lStack_c8 = param_4;
  ppuStack_c0 = &puStack_a0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar8 = plVar12[10];
  lVar27 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar8,lVar27);
  lVar30 = **(long **)(lVar11 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar9 = (int *)0x0;
    if (lVar8 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar8 = func_0x00f78adc(lVar8,lVar23);
    lVar23 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar8 != 0) {
      piVar9 = (int *)func_0x00f78adc(lVar8,lVar23);
      uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar9 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar8,lVar23);
    }
    piVar9 = (int *)0x0;
    uStack_f8 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar9 != (int *)0x0) {
      return piVar9;
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8);
    lVar11 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) &&
       (lVar11 = func_0x00f78a24(0x3d25458), *(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    uVar25 = func_0x00f78a24(0x3d663d0);
    uVar13 = func_0x00f78a24(0x3d69d18);
    piVar9 = (int *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar20 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar9 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar9 != (int *)0x0) {
      if (lVar8 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar12[10] != 0) &&
         (plVar10 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar12[10],0), plVar10 != (long *)0x0)) {
        uStack_f8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar25 = func_0x00f78a24(0x3d663d0);
  uVar13 = func_0x00f78a24(0x3d69d18);
  uVar20 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
code_r0x01840ea4:
  lVar8 = 0;
  uVar25 = /*System.String$$Concat*/ func_0x029be818(uVar13,uStack_f8,uVar25);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  lVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar25);
  uVar15 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar14,uVar15);
  plVar12 = auVar32._8_8_;
  piVar7 = auVar32._0_8_;
  puStack_108 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar23 = *plVar12;
  piStack_130 = piVar9;
  uStack_128 = uVar13;
  uStack_120 = uVar14;
  uStack_118 = uVar25;
  pppuStack_110 = (undefined8 ***)&ppuStack_c0;
  if (lVar23 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar17 = lVar11;
    do {
      if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar26) {
        return piVar7;
      }
      if (*(uint *)(lVar23 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar25 = func_0x00f78b24();
        func_0x00f78ac0(uVar25,0);
        plVar3 = &uStack_180;
        puStack_138 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar24 = *extraout_x1;
        lVar23 = lVar17;
        uVar21 = uVar20;
        lVar22 = lVar8;
        lStack_170 = lVar30;
        lStack_168 = lVar27;
        lStack_160 = lVar28;
        uStack_158 = uVar26;
        plStack_150 = plVar12;
        lStack_148 = lVar11;
        ppppuStack_140 = &pppuStack_110;
        if (lVar24 == 0) goto code_r0x01841098;
        uVar19 = (uint)lVar17;
        if (uVar19 < *(uint *)(lVar24 + 0x18)) {
          lVar27 = (long)(int)uVar19;
          uVar16 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar24 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar8 + 0x30));
          lVar30 = *extraout_x1;
          lVar11 = lVar17;
          plVar12 = extraout_x1;
          uVar26 = uVar20;
          lVar28 = lVar8;
          if ((uVar16 & 1) == 0) {
code_r0x01841028:
            uStack_180 = 0;
            uStack_178 = 0;
            lVar22 = *(long *)(*(long *)(lVar8 + 0x30) + 0x10);
            lVar23 = 4;
            uVar21 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_180,uVar20);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar17 = lVar11;
              func_0x00f78af4();
            }
            else if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar8 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar8 + 0x28) = uStack_178;
              *(undefined8 *)(lVar8 + 0x20) = uStack_180;
code_r0x01841064:
              lVar8 = *extraout_x1;
              if (lVar8 == 0) goto code_r0x01841098;
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                return *(int **)(lVar8 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar19 < *(uint *)(lVar30 + 0x18)) {
              lVar24 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar24 + 0x28) < (int)uVar20) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar24 + 0x20,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar25 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar25,0);
        uVar20 = auVar32._8_8_;
        plVar10 = auVar32._0_8_;
        puStack_188 = &
                      UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar11 = lVar23;
        uVar16 = uVar21;
        lStack_1c0 = lVar30;
        lStack_1b8 = lVar27;
        lStack_1b0 = lVar28;
        uStack_1a8 = uVar26;
        plStack_1a0 = plVar12;
        lStack_198 = lVar17;
        pppppuStack_190 = &ppppuStack_140;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
        if ((int)lVar23 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar8;
          lVar11 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar19 = 0;
          if (iVar5 != 0) {
            uVar19 = iVar4 / iVar5;
          }
          uVar20 = (ulong)uVar19;
        }
        lVar28 = lStack_198;
        plVar12 = plStack_1a0;
        uVar26 = uStack_1a8;
        lVar17 = lStack_1b0;
        lVar30 = lStack_1b8;
        lVar27 = lStack_1c0;
        ppppppuVar31 = (undefined8 ******)pppppuStack_190;
        puStack_208 = puStack_188;
        if (plVar10 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_200 = 0x3eb6000;
          lStack_1f8 = 0x3d23210;
          puStack_1c8 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_1d0;
          lVar28 = lVar11;
          uVar21 = uVar16;
          lStack_1f0 = lVar8;
          uStack_1e8 = uVar20;
          plStack_1e0 = plVar10;
          lStack_1d8 = lVar23;
          pppppuStack_1d0 = &pppppuStack_190;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar17 = (**(code **)**(undefined8 **)(uVar16 + 0x30))();
          if ((int)lVar11 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar17;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar19 = 0;
            if (iVar5 != 0) {
              uVar19 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar19;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar20 = auVar32._8_8_;
            plVar10 = auVar32._0_8_;
            puStack_208 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = (**(code **)**(undefined8 **)(uVar21 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar8;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar19 = 0;
              if (iVar5 != 0) {
                uVar19 = iVar4 / iVar5;
              }
              uVar20 = (ulong)uVar19;
            }
            if (plVar10 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar18 = auVar32._0_8_;
              piVar9 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if ((int)piVar9 == 0) {
                return piVar9;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar18,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar11 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar18,iVar4,
                                           *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0x10));
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (lVar11,auVar32._8_8_);
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar18,**(undefined8 **)(lVar22 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar11 = *(long *)(*(long *)(lVar22 + 0x30) + 0x20);
              *puVar18 = 0;
              if (0 < *(int *)(puVar18 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar18 + 0x38,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x38));
              }
              piVar9 = (int *)(puVar18 + 0x20);
              if (0 < *piVar9) {
                iVar4 = 0;
                do {
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  uVar25 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar9,iVar4,**(undefined8 **)(lVar8 + 0xc0));
                  lVar8 = *(long *)(lVar11 + 0x18);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar18,uVar25,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar18 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar11 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar11 + 0x18));
              }
              *piVar9 = 0;
              *(undefined8 *)(puVar18 + 0x28) = 0;
              *(undefined8 *)(puVar18 + 0x30) = 0;
              return piVar9;
            }
            plVar3 = &lStack_200;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar12 = (long *)0x0;
            lVar23 = lVar28;
            lVar28 = lVar11;
          }
          else {
            plVar3 = &lStack_1c0;
            plVar10 = auVar32._0_8_;
            uVar20 = uVar26;
            lVar8 = lVar17;
            lVar23 = lVar11;
            lVar28 = lStack_1d8;
            plVar12 = plStack_1e0;
            uVar26 = uStack_1e8;
            lVar17 = lStack_1f0;
            lVar30 = lStack_1f8;
            lVar27 = lStack_200;
            ppppppuVar31 = (undefined8 ******)pppppuStack_1d0;
            puStack_208 = puStack_1c8;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(long *)((long)plVar3 + -0x50) = param_7;
        *(long *)((long)plVar3 + -0x48) = param_5;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar17;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar12;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_208;
        *(int *)((long)plVar3 + -100) = (int)lVar8;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar23 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar19 = *(uint *)(plVar10 + 5);
        if ((int)uVar19 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar28,**(undefined8 **)(lVar11 + 0x30));
      if ((int)piVar7 != 0) {
        lVar23 = *plVar12;
        if (lVar23 == 0) break;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar7 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + lVar28,
                                        *(undefined8 *)(*(long *)(lVar11 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar23 = *plVar12;
      lVar28 = lVar28 + 0x10;
    } while (lVar23 != 0);
  }
  piVar9 = (int *)func_0x00f78af4();
  return piVar9;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar10 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar19 != 0) {
      iVar1 = iVar6 / (int)uVar19;
    }
    uVar19 = iVar6 - iVar1 * uVar19;
    if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
    lVar8 = (long)(int)uVar19;
    iVar6 = *(int *)(lVar11 + lVar8 * 8 + 0x20);
    lVar11 = plVar10[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar11 != iVar6) && (-1 < (int)lVar11 - iVar6)) {
      lVar11 = plVar10[4];
      if (lVar11 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
      if (*(int *)(lVar11 + lVar8 * 8 + 0x24) == iVar4) {
        lVar11 = plVar10[3];
        if (lVar11 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar11,0);
        if (iVar6 == (int)uVar20) {
          lVar11 = plVar10[3];
          if (lVar11 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
          lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
          if (lVar11 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar11,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar11 = plVar10[4];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            *(int *)(lVar11 + lVar8 * 8 + 0x20) = (int)plVar10[6];
            *(uint *)((long)plVar10 + 0x2c) = uVar19;
            lVar11 = plVar10[3];
            if (lVar11 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
            lVar11 = lVar11 + lVar8 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar19 = *(uint *)(plVar10 + 5);
    if ((int)uVar19 <= iVar29) break;
code_r0x03125f10:
    lVar11 = plVar10[4];
    if (lVar11 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar12 = (long *)plVar10[3];
  if (plVar12 != (long *)0x0) {
    if (uVar19 == *(uint *)(plVar12 + 3)) {
      plVar12 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar19 << 1);
      iVar5 = (int)plVar10[5];
      if (0 < iVar5) {
        lVar11 = 4;
        do {
          lVar8 = plVar10[3];
          if (lVar8 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar11 - 4U) goto code_r0x03126220;
          if (plVar12 == (long *)0x0) goto code_r0x0312621c;
          lVar8 = *(long *)(lVar8 + lVar11 * 8);
          if ((lVar8 != 0) &&
             (lVar27 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar12 + 3) <= lVar11 - 4U) goto code_r0x03126220;
          plVar12[lVar11] = lVar8;
          iVar5 = (int)plVar10[5];
          lVar8 = lVar11 + -3;
          lVar11 = lVar11 + 1;
        } while (lVar8 < iVar5);
      }
      plVar10[3] = (long)plVar12;
      lVar11 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar19 = *(uint *)(plVar10 + 5);
      if (0 < (int)uVar19) {
        lVar8 = 4;
        do {
          lVar27 = plVar10[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          if (lVar11 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar8 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar11 + lVar8 * 8) = *(undefined8 *)(lVar27 + lVar8 * 8);
          uVar19 = *(uint *)(plVar10 + 5);
          lVar27 = lVar8 + -3;
          lVar8 = lVar8 + 1;
        } while (lVar27 < (int)uVar19);
      }
      plVar10[4] = lVar11;
      plVar12 = (long *)plVar10[3];
    }
    lVar11 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar11,uVar20,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar12 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar12 + 3) <= uVar19) goto code_r0x03126220;
      plVar12[(long)(int)uVar19 + 4] = lVar11;
      lVar11 = plVar10[4];
      if (lVar11 != 0) {
        uVar19 = *(uint *)(plVar10 + 5);
        if (*(uint *)(lVar11 + 0x18) <= uVar19) goto code_r0x03126220;
        lVar11 = lVar11 + (long)(int)uVar19 * 8;
        *(int *)(lVar11 + 0x20) = (int)plVar10[6];
        *(int *)(lVar11 + 0x24) = iVar4;
        lVar11 = plVar10[3];
        *(uint *)(plVar10 + 5) = uVar19 + 1;
        *(uint *)((long)plVar10 + 0x2c) = uVar19;
        if (lVar11 != 0) {
          if (uVar19 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar19 * 8;
code_r0x031261b8:
            return *(int **)(lVar11 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar25 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar25,0);
code_r0x0312622c:
    uVar25 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840c44 | Core.DebugMenu.DebugMenu.InstantiatePrefab<RectTransform>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long *extraout_x1;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  long *plStack_110;
  long lStack_108;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  int *piStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  if ((param_1 != 0) && (lVar7 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar8 = (int *)(**(code **)**(undefined8 **)(param_4 + 0x30))();
    return piVar8;
  }
  auVar32 = func_0x00f78af4();
  lVar7 = auVar32._8_8_;
  plVar10 = auVar32._0_8_;
  puStack_28 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar25 = plVar10[10];
  lVar27 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar25,lVar27);
  lVar30 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar8 = (int *)0x0;
    if (lVar25 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar22 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar25 = func_0x00f78adc(lVar25,lVar22);
    lVar22 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    if (lVar25 != 0) {
      piVar8 = (int *)func_0x00f78adc(lVar25,lVar22);
      uStack_68 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar8 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar25,lVar22);
    }
    piVar8 = (int *)0x0;
    uStack_68 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar8 != (int *)0x0) {
      return piVar8;
    }
    uVar24 = *(undefined8 *)(*(long *)(lVar7 + 0x30) + 8);
    lVar7 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) &&
       (lVar7 = func_0x00f78a24(0x3d25458), *(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar10 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar24,0);
    uVar24 = func_0x00f78a24(0x3d663d0);
    uVar11 = func_0x00f78a24(0x3d69d18);
    piVar8 = (int *)0x0;
    if (plVar10 == (long *)0x0) {
      uVar19 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar8 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar8 != (int *)0x0) {
      if (lVar25 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar10[10] != 0) &&
         (plVar9 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar10[10],0), plVar9 != (long *)0x0)) {
        uStack_68 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar24 = func_0x00f78a24(0x3d663d0);
  uVar11 = func_0x00f78a24(0x3d69d18);
  uVar19 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
code_r0x01840ea4:
  lVar25 = 0;
  uVar24 = /*System.String$$Concat*/ func_0x029be818(uVar11,uStack_68,uVar24);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  lVar7 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar24);
  uVar13 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar12,uVar13);
  plVar10 = auVar32._8_8_;
  piVar14 = auVar32._0_8_;
  puStack_78 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar22 = *plVar10;
  piStack_a0 = piVar8;
  uStack_98 = uVar11;
  uStack_90 = uVar12;
  uStack_88 = uVar24;
  pppuStack_80 = (undefined8 ***)&puStack_30;
  if (lVar22 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar16 = lVar7;
    do {
      if ((long)(int)*(uint *)(lVar22 + 0x18) <= (long)uVar26) {
        return piVar14;
      }
      if (*(uint *)(lVar22 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar24 = func_0x00f78b24();
        func_0x00f78ac0(uVar24,0);
        plVar3 = &uStack_f0;
        puStack_a8 = &
                     UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar23 = *extraout_x1;
        lVar22 = lVar16;
        uVar20 = uVar19;
        lVar21 = lVar25;
        lStack_e0 = lVar30;
        lStack_d8 = lVar27;
        lStack_d0 = lVar28;
        uStack_c8 = uVar26;
        plStack_c0 = plVar10;
        lStack_b8 = lVar7;
        ppppuStack_b0 = &pppuStack_80;
        if (lVar23 == 0) goto code_r0x01841098;
        uVar18 = (uint)lVar16;
        if (uVar18 < *(uint *)(lVar23 + 0x18)) {
          lVar27 = (long)(int)uVar18;
          uVar15 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar25 + 0x30));
          lVar30 = *extraout_x1;
          lVar7 = lVar16;
          plVar10 = extraout_x1;
          uVar26 = uVar19;
          lVar28 = lVar25;
          if ((uVar15 & 1) == 0) {
code_r0x01841028:
            uStack_f0 = 0;
            uStack_e8 = 0;
            lVar21 = *(long *)(*(long *)(lVar25 + 0x30) + 0x10);
            lVar22 = 4;
            uVar20 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_f0,uVar19);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar16 = lVar7;
              func_0x00f78af4();
            }
            else if (uVar18 < *(uint *)(lVar30 + 0x18)) {
              lVar25 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar25 + 0x28) = uStack_e8;
              *(undefined8 *)(lVar25 + 0x20) = uStack_f0;
code_r0x01841064:
              lVar25 = *extraout_x1;
              if (lVar25 == 0) goto code_r0x01841098;
              if (uVar18 < *(uint *)(lVar25 + 0x18)) {
                return *(int **)(lVar25 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar18 < *(uint *)(lVar30 + 0x18)) {
              lVar23 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar23 + 0x28) < (int)uVar19) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + 0x20,*(undefined8 *)(*(long *)(lVar25 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar24 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar24,0);
        uVar19 = auVar32._8_8_;
        plVar9 = auVar32._0_8_;
        puStack_f8 = &
                     UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar7 = lVar22;
        uVar15 = uVar20;
        lStack_130 = lVar30;
        lStack_128 = lVar27;
        lStack_120 = lVar28;
        uStack_118 = uVar26;
        plStack_110 = plVar10;
        lStack_108 = lVar16;
        pppppuStack_100 = &ppppuStack_b0;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar25 = (**(code **)**(undefined8 **)(uVar20 + 0x30))();
        if ((int)lVar22 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar25;
          lVar7 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar18 = 0;
          if (iVar5 != 0) {
            uVar18 = iVar4 / iVar5;
          }
          uVar19 = (ulong)uVar18;
        }
        lVar28 = lStack_108;
        plVar10 = plStack_110;
        uVar26 = uStack_118;
        lVar16 = lStack_120;
        lVar30 = lStack_128;
        lVar27 = lStack_130;
        ppppppuVar31 = (undefined8 ******)pppppuStack_100;
        puStack_178 = puStack_f8;
        if (plVar9 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_170 = 0x3eb6000;
          lStack_168 = 0x3d23210;
          puStack_138 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_140;
          lVar28 = lVar7;
          uVar20 = uVar15;
          lStack_160 = lVar25;
          uStack_158 = uVar19;
          plStack_150 = plVar9;
          lStack_148 = lVar22;
          pppppuStack_140 = &pppppuStack_100;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar16 = (**(code **)**(undefined8 **)(uVar15 + 0x30))();
          if ((int)lVar7 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar16;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar18 = 0;
            if (iVar5 != 0) {
              uVar18 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar18;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar19 = auVar32._8_8_;
            plVar9 = auVar32._0_8_;
            puStack_178 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar25 = (**(code **)**(undefined8 **)(uVar20 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar25;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar18 = 0;
              if (iVar5 != 0) {
                uVar18 = iVar4 / iVar5;
              }
              uVar19 = (ulong)uVar18;
            }
            if (plVar9 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar17 = auVar32._0_8_;
              piVar8 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar17,**(undefined8 **)(lVar21 + 0x30));
              if ((int)piVar8 == 0) {
                return piVar8;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar17,*(undefined8 *)(*(long *)(lVar21 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar17,**(undefined8 **)(lVar21 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar7 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar17,iVar4,
                                          *(undefined8 *)(*(long *)(lVar21 + 0x30) + 0x10));
                  if (lVar7 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))(lVar7,auVar32._8_8_)
                  ;
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar17,**(undefined8 **)(lVar21 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar7 = *(long *)(*(long *)(lVar21 + 0x30) + 0x20);
              *puVar17 = 0;
              if (0 < *(int *)(puVar17 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  uVar24 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar17 + 0x38,iVar4,**(undefined8 **)(lVar25 + 0xc0));
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar17,uVar24,*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar17 + 0x38));
              }
              piVar8 = (int *)(puVar17 + 0x20);
              if (0 < *piVar8) {
                iVar4 = 0;
                do {
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  uVar24 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar8,iVar4,**(undefined8 **)(lVar25 + 0xc0));
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar17,uVar24,*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar17 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar7 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar7 + 0x18));
              }
              *piVar8 = 0;
              *(undefined8 *)(puVar17 + 0x28) = 0;
              *(undefined8 *)(puVar17 + 0x30) = 0;
              return piVar8;
            }
            plVar3 = &lStack_170;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar10 = (long *)0x0;
            lVar22 = lVar28;
            lVar28 = lVar7;
          }
          else {
            plVar3 = &lStack_130;
            plVar9 = auVar32._0_8_;
            uVar19 = uVar26;
            lVar25 = lVar16;
            lVar22 = lVar7;
            lVar28 = lStack_148;
            plVar10 = plStack_150;
            uVar26 = uStack_158;
            lVar16 = lStack_160;
            lVar30 = lStack_168;
            lVar27 = lStack_170;
            ppppppuVar31 = (undefined8 ******)pppppuStack_140;
            puStack_178 = puStack_138;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar3 + -0x50) = unaff_x26;
        *(undefined8 *)((long)plVar3 + -0x48) = unaff_x25;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar16;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar10;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_178;
        *(int *)((long)plVar3 + -100) = (int)lVar25;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar22 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar18 = *(uint *)(plVar9 + 5);
        if ((int)uVar18 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar14 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar22 + lVar28,**(undefined8 **)(lVar7 + 0x30));
      if ((int)piVar14 != 0) {
        lVar22 = *plVar10;
        if (lVar22 == 0) break;
        if (*(uint *)(lVar22 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar14 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar22 + lVar28,
                                         *(undefined8 *)(*(long *)(lVar7 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar22 = *plVar10;
      lVar28 = lVar28 + 0x10;
    } while (lVar22 != 0);
  }
  piVar8 = (int *)func_0x00f78af4();
  return piVar8;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar9 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar18 != 0) {
      iVar1 = iVar6 / (int)uVar18;
    }
    uVar18 = iVar6 - iVar1 * uVar18;
    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
    lVar25 = (long)(int)uVar18;
    iVar6 = *(int *)(lVar7 + lVar25 * 8 + 0x20);
    lVar7 = plVar9[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar7 != iVar6) && (-1 < (int)lVar7 - iVar6)) {
      lVar7 = plVar9[4];
      if (lVar7 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
      if (*(int *)(lVar7 + lVar25 * 8 + 0x24) == iVar4) {
        lVar7 = plVar9[3];
        if (lVar7 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
        lVar7 = *(long *)(lVar7 + lVar25 * 8 + 0x20);
        if (lVar7 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar7,0);
        if (iVar6 == (int)uVar19) {
          lVar7 = plVar9[3];
          if (lVar7 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
          lVar7 = *(long *)(lVar7 + lVar25 * 8 + 0x20);
          if (lVar7 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar7,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar7 = plVar9[4];
            if (lVar7 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
            *(int *)(lVar7 + lVar25 * 8 + 0x20) = (int)plVar9[6];
            *(uint *)((long)plVar9 + 0x2c) = uVar18;
            lVar7 = plVar9[3];
            if (lVar7 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
            lVar7 = lVar7 + lVar25 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar18 = *(uint *)(plVar9 + 5);
    if ((int)uVar18 <= iVar29) break;
code_r0x03125f10:
    lVar7 = plVar9[4];
    if (lVar7 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar10 = (long *)plVar9[3];
  if (plVar10 != (long *)0x0) {
    if (uVar18 == *(uint *)(plVar10 + 3)) {
      plVar10 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar18 << 1);
      iVar5 = (int)plVar9[5];
      if (0 < iVar5) {
        lVar7 = 4;
        do {
          lVar25 = plVar9[3];
          if (lVar25 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar25 + 0x18) <= lVar7 - 4U) goto code_r0x03126220;
          if (plVar10 == (long *)0x0) goto code_r0x0312621c;
          lVar25 = *(long *)(lVar25 + lVar7 * 8);
          if ((lVar25 != 0) &&
             (lVar27 = func_0x00f78adc(lVar25,*(undefined8 *)(*plVar10 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar10 + 3) <= lVar7 - 4U) goto code_r0x03126220;
          plVar10[lVar7] = lVar25;
          iVar5 = (int)plVar9[5];
          lVar25 = lVar7 + -3;
          lVar7 = lVar7 + 1;
        } while (lVar25 < iVar5);
      }
      plVar9[3] = (long)plVar10;
      lVar7 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar18 = *(uint *)(plVar9 + 5);
      if (0 < (int)uVar18) {
        lVar25 = 4;
        do {
          lVar27 = plVar9[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar25 - 4U) goto code_r0x03126220;
          if (lVar7 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar25 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar7 + lVar25 * 8) = *(undefined8 *)(lVar27 + lVar25 * 8);
          uVar18 = *(uint *)(plVar9 + 5);
          lVar27 = lVar25 + -3;
          lVar25 = lVar25 + 1;
        } while (lVar27 < (int)uVar18);
      }
      plVar9[4] = lVar7;
      plVar10 = (long *)plVar9[3];
    }
    lVar7 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar7,uVar19,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar10 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar25 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar25 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar10 + 3) <= uVar18) goto code_r0x03126220;
      plVar10[(long)(int)uVar18 + 4] = lVar7;
      lVar7 = plVar9[4];
      if (lVar7 != 0) {
        uVar18 = *(uint *)(plVar9 + 5);
        if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
        lVar7 = lVar7 + (long)(int)uVar18 * 8;
        *(int *)(lVar7 + 0x20) = (int)plVar9[6];
        *(int *)(lVar7 + 0x24) = iVar4;
        lVar7 = plVar9[3];
        *(uint *)(plVar9 + 5) = uVar18 + 1;
        *(uint *)((long)plVar9 + 0x2c) = uVar18;
        if (lVar7 != 0) {
          if (uVar18 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar18 * 8;
code_r0x031261b8:
            return *(int **)(lVar7 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar24 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar24,0);
code_r0x0312622c:
    uVar24 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x1840c44 | Core.DebugMenu.DebugMenu.InstantiatePrefab<object>
// ============================================================

/* WARNING: Possible PIC construction at 0x01d025c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01d025c8) */
/* WARNING: Removing unreachable block (ram,0x01d025d4) */
/* WARNING: Removing unreachable block (ram,0x01d025dc) */

int * Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_
                (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long *extraout_x1;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar31;
  undefined1 auVar32 [16];
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  long *plStack_110;
  long lStack_108;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  int *piStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  if ((param_1 != 0) && (lVar7 = Core_DebugMenu_DebugMenu__InstantiatePrefab(), lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01840c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar8 = (int *)(**(code **)**(undefined8 **)(param_4 + 0x30))();
    return piVar8;
  }
  auVar32 = func_0x00f78af4();
  lVar7 = auVar32._8_8_;
  plVar10 = auVar32._0_8_;
  puStack_28 = &UnityEngine_Rendering_UI_DebugUIHandlerWidget__CastWidget_DebugUI_Table_Row_;
  puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb647c & 1) == 0) {
    func_0x00f78a20(0x3d7aa78);
    bRam0000000003eb647c = 1;
  }
  lVar25 = plVar10[10];
  lVar27 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  lVar27 = func_0x00f78adc(lVar25,lVar27);
  lVar30 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar27 == 0) {
    piVar8 = (int *)0x0;
    if (lVar25 != 0) goto code_r0x01840d20;
code_r0x01840d68:
    lVar22 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar25 = func_0x00f78adc(lVar25,lVar22);
    lVar22 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    if (lVar25 != 0) {
      piVar8 = (int *)func_0x00f78adc(lVar25,lVar22);
      uStack_68 = /*STR('null')*/ uRam0000000003d7aa78;
      if (piVar8 != (int *)0x0) goto joined_r0x01840ddc;
      func_0x00f78e5c(lVar25,lVar22);
    }
    piVar8 = (int *)0x0;
    uStack_68 = /*STR('null')*/ uRam0000000003d7aa78;
joined_r0x01840ddc:
    if (piVar8 != (int *)0x0) {
      return piVar8;
    }
    uVar24 = *(undefined8 *)(*(long *)(lVar7 + 0x30) + 8);
    lVar7 = func_0x00f78a24(0x3d25458);
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) &&
       (lVar7 = func_0x00f78a24(0x3d25458), *(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78a24(0x3d25458);
      func_0x00f78ad0();
    }
    plVar10 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar24,0);
    uVar24 = func_0x00f78a24(0x3d663d0);
    uVar11 = func_0x00f78a24(0x3d69d18);
    piVar8 = (int *)0x0;
    if (plVar10 == (long *)0x0) {
      uVar19 = 0;
      goto code_r0x01840ea4;
    }
  }
  else {
    piVar8 = (int *)func_0x00f78adc(lVar27,lVar30);
    if (piVar8 != (int *)0x0) {
      if (lVar25 == 0) goto code_r0x01840d68;
code_r0x01840d20:
      if ((plVar10[10] != 0) &&
         (plVar9 = (long *)/*System.Object$$GetType*/ func_0x02959198(plVar10[10],0), plVar9 != (long *)0x0)) {
        uStack_68 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        goto joined_r0x01840ddc;
      }
      func_0x00f78af4();
    }
    func_0x00f78e5c(lVar27,lVar30);
  }
  uVar24 = func_0x00f78a24(0x3d663d0);
  uVar11 = func_0x00f78a24(0x3d69d18);
  uVar19 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
code_r0x01840ea4:
  lVar25 = 0;
  uVar24 = /*System.String$$Concat*/ func_0x029be818(uVar11,uStack_68,uVar24);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  lVar7 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar24);
  uVar13 = func_0x00f78a24(0x3d54aa0);
  auVar32 = func_0x00f78ac0(uVar12,uVar13);
  plVar10 = auVar32._8_8_;
  piVar14 = auVar32._0_8_;
  puStack_78 = &UnityEngine_Rendering_Universal_DeferredShaderData__DisposeNativeArrays_PreTile_;
  lVar22 = *plVar10;
  piStack_a0 = piVar8;
  uStack_98 = uVar11;
  uStack_90 = uVar12;
  uStack_88 = uVar24;
  pppuStack_80 = (undefined8 ***)&puStack_30;
  if (lVar22 != 0) {
    uVar26 = 0;
    lVar28 = 0x20;
    lVar16 = lVar7;
    do {
      if ((long)(int)*(uint *)(lVar22 + 0x18) <= (long)uVar26) {
        return piVar14;
      }
      if (*(uint *)(lVar22 + 0x18) <= uVar26) {
code_r0x01840f8c:
        uVar24 = func_0x00f78b24();
        func_0x00f78ac0(uVar24,0);
        plVar3 = &uStack_f0;
        puStack_a8 = &
                     UnityEngine_Rendering_Universal_DeferredShaderData__GetOrUpdateNativeArray_PreTile_
        ;
        lVar23 = *extraout_x1;
        lVar22 = lVar16;
        uVar20 = uVar19;
        lVar21 = lVar25;
        lStack_e0 = lVar30;
        lStack_d8 = lVar27;
        lStack_d0 = lVar28;
        uStack_c8 = uVar26;
        plStack_c0 = plVar10;
        lStack_b8 = lVar7;
        ppppuStack_b0 = &pppuStack_80;
        if (lVar23 == 0) goto code_r0x01841098;
        uVar18 = (uint)lVar16;
        if (uVar18 < *(uint *)(lVar23 + 0x18)) {
          lVar27 = (long)(int)uVar18;
          uVar15 = /*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar23 + lVar27 * 0x10 + 0x20,**(undefined8 **)(lVar25 + 0x30));
          lVar30 = *extraout_x1;
          lVar7 = lVar16;
          plVar10 = extraout_x1;
          uVar26 = uVar19;
          lVar28 = lVar25;
          if ((uVar15 & 1) == 0) {
code_r0x01841028:
            uStack_f0 = 0;
            uStack_e8 = 0;
            lVar21 = *(long *)(*(long *)(lVar25 + 0x30) + 0x10);
            lVar22 = 4;
            uVar20 = 1;
            /*Unity.Collections.NativeArray<PreTile>$$.ctor*/ func_0x025fc0f0(&uStack_f0,uVar19);
            if (lVar30 == 0) {
code_r0x01841098:
              lVar16 = lVar7;
              func_0x00f78af4();
            }
            else if (uVar18 < *(uint *)(lVar30 + 0x18)) {
              lVar25 = lVar30 + lVar27 * 0x10;
              *(undefined8 *)(lVar25 + 0x28) = uStack_e8;
              *(undefined8 *)(lVar25 + 0x20) = uStack_f0;
code_r0x01841064:
              lVar25 = *extraout_x1;
              if (lVar25 == 0) goto code_r0x01841098;
              if (uVar18 < *(uint *)(lVar25 + 0x18)) {
                return *(int **)(lVar25 + lVar27 * 0x10 + 0x20);
              }
            }
          }
          else {
            if (lVar30 == 0) goto code_r0x01841098;
            if (uVar18 < *(uint *)(lVar30 + 0x18)) {
              lVar23 = lVar30 + lVar27 * 0x10;
              if (*(int *)(lVar23 + 0x28) < (int)uVar19) {
                /*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar23 + 0x20,*(undefined8 *)(*(long *)(lVar25 + 0x30) + 0x20));
                lVar30 = *extraout_x1;
                goto code_r0x01841028;
              }
              goto code_r0x01841064;
            }
          }
        }
        uVar24 = func_0x00f78b24();
        auVar32 = func_0x00f78ac0(uVar24,0);
        uVar19 = auVar32._8_8_;
        plVar9 = auVar32._0_8_;
        puStack_f8 = &
                     UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_PunctualLightData_
        ;
        lVar7 = lVar22;
        uVar15 = uVar20;
        lStack_130 = lVar30;
        lStack_128 = lVar27;
        lStack_120 = lVar28;
        uStack_118 = uVar26;
        plStack_110 = plVar10;
        lStack_108 = lVar16;
        pppppuStack_100 = &ppppuStack_b0;
        if ((bRam0000000003eb647d & 1) == 0) {
          func_0x00f78a20(0x3d21260);
          func_0x00f78a20(0x3d23210);
          bRam0000000003eb647d = 1;
        }
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar25 = (**(code **)**(undefined8 **)(uVar20 + 0x30))();
        if ((int)lVar22 != 0) {
          if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = (int)lVar25;
          lVar7 = 0;
          iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
          uVar18 = 0;
          if (iVar5 != 0) {
            uVar18 = iVar4 / iVar5;
          }
          uVar19 = (ulong)uVar18;
        }
        lVar28 = lStack_108;
        plVar10 = plStack_110;
        uVar26 = uStack_118;
        lVar16 = lStack_120;
        lVar30 = lStack_128;
        lVar27 = lStack_130;
        ppppppuVar31 = (undefined8 ******)pppppuStack_100;
        puStack_178 = puStack_f8;
        if (plVar9 == (long *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar26 = auVar32._8_8_;
          lStack_170 = 0x3eb6000;
          lStack_168 = 0x3d23210;
          puStack_138 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_TileData_
          ;
          ppppppuVar31 = &pppppuStack_140;
          lVar28 = lVar7;
          uVar20 = uVar15;
          lStack_160 = lVar25;
          uStack_158 = uVar19;
          plStack_150 = plVar9;
          lStack_148 = lVar22;
          pppppuStack_140 = &pppppuStack_100;
          if ((bRam0000000003eb647e & 1) == 0) {
            func_0x00f78a20(0x3d21260);
            func_0x00f78a20(0x3d23210);
            bRam0000000003eb647e = 1;
          }
          if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar16 = (**(code **)**(undefined8 **)(uVar15 + 0x30))();
          if ((int)lVar7 != 0) {
            if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = (int)lVar16;
            lVar28 = 0;
            iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10);
            uVar18 = 0;
            if (iVar5 != 0) {
              uVar18 = iVar4 / iVar5;
            }
            uVar26 = (ulong)uVar18;
          }
          if (auVar32._0_8_ == (long *)0x0) {
            auVar32 = func_0x00f78af4();
            uVar19 = auVar32._8_8_;
            plVar9 = auVar32._0_8_;
            puStack_178 = &UnityEngine_Rendering_Universal_DeferredShaderData__ReserveBuffer_uint_;
            if ((bRam0000000003eb647f & 1) == 0) {
              func_0x00f78a20(0x3d21260);
              func_0x00f78a20(0x3d23210);
              bRam0000000003eb647f = 1;
            }
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar25 = (**(code **)**(undefined8 **)(uVar20 + 0x30))();
            if ((int)lVar28 != 0) {
              if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = (int)lVar25;
              iVar4 = /*UnityEngine.Rendering.Universal.DeferredShaderData$$Align*/ func_0x03126348(iVar5 * auVar32._8_4_,0x10,0);
              uVar18 = 0;
              if (iVar5 != 0) {
                uVar18 = iVar4 / iVar5;
              }
              uVar19 = (ulong)uVar18;
            }
            if (plVar9 == (long *)0x0) {
              auVar32 = func_0x00f78af4();
              puVar17 = auVar32._0_8_;
              piVar8 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar17,**(undefined8 **)(lVar21 + 0x30));
              if ((int)piVar8 == 0) {
                return piVar8;
              }
              /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar17,*(undefined8 *)(*(long *)(lVar21 + 0x30) + 8));
              iVar4 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar17,**(undefined8 **)(lVar21 + 0x30));
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar7 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar17,iVar4,
                                          *(undefined8 *)(*(long *)(lVar21 + 0x30) + 0x10));
                  if (lVar7 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1841624);
                    (*pcVar2)();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))(lVar7,auVar32._8_8_)
                  ;
                  iVar4 = iVar4 + 1;
                  iVar5 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar17,**(undefined8 **)(lVar21 + 0x30));
                } while (iVar4 < iVar5);
              }
              lVar7 = *(long *)(*(long *)(lVar21 + 0x30) + 0x20);
              *puVar17 = 0;
              if (0 < *(int *)(puVar17 + 0x38)) {
                iVar4 = 0;
                do {
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  uVar24 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(puVar17 + 0x38,iVar4,**(undefined8 **)(lVar25 + 0xc0));
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar17,uVar24,*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x38));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar17 + 0x38));
              }
              piVar8 = (int *)(puVar17 + 0x20);
              if (0 < *piVar8) {
                iVar4 = 0;
                do {
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  uVar24 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar8,iVar4,**(undefined8 **)(lVar25 + 0xc0));
                  lVar25 = *(long *)(lVar7 + 0x18);
                  if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar25);
                  }
                  /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar17,uVar24,*(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x40));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(puVar17 + 0x20));
              }
              if ((*(ushort *)(*(long *)(lVar7 + 0x18) + 0x132) & 1) == 0) {
                func_0x00fac028(*(long *)(lVar7 + 0x18));
              }
              *piVar8 = 0;
              *(undefined8 *)(puVar17 + 0x28) = 0;
              *(undefined8 *)(puVar17 + 0x30) = 0;
              return piVar8;
            }
            plVar3 = &lStack_170;
            lVar27 = 0x3eb6000;
            lVar30 = 0x3d23210;
            plVar10 = (long *)0x0;
            lVar22 = lVar28;
            lVar28 = lVar7;
          }
          else {
            plVar3 = &lStack_130;
            plVar9 = auVar32._0_8_;
            uVar19 = uVar26;
            lVar25 = lVar16;
            lVar22 = lVar7;
            lVar28 = lStack_148;
            plVar10 = plStack_150;
            uVar26 = uStack_158;
            lVar16 = lStack_160;
            lVar30 = lStack_168;
            lVar27 = lStack_170;
            ppppppuVar31 = (undefined8 ******)pppppuStack_140;
            puStack_178 = puStack_138;
          }
        }
        *(undefined8 *)((long)plVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar3 + -0x50) = unaff_x26;
        *(undefined8 *)((long)plVar3 + -0x48) = unaff_x25;
        *(long *)((long)plVar3 + -0x40) = lVar27;
        *(long *)((long)plVar3 + -0x38) = lVar30;
        *(long *)((long)plVar3 + -0x30) = lVar16;
        *(ulong *)((long)plVar3 + -0x28) = uVar26;
        *(long **)((long)plVar3 + -0x20) = plVar10;
        *(long *)((long)plVar3 + -0x18) = lVar28;
        *(undefined8 *******)((long)plVar3 + -0x10) = ppppppuVar31;
        *(undefined **)((long)plVar3 + -8) = puStack_178;
        *(int *)((long)plVar3 + -100) = (int)lVar25;
        if ((bRam0000000003ebd71b & 1) == 0) {
          func_0x00f78a20(0x3d1f750);
          func_0x00f78a20(0x3d1ee28);
          func_0x00f78a20(0x3d20900);
          func_0x00f78a20(0x3d21260);
          bRam0000000003ebd71b = 1;
        }
        iVar4 = 8;
        if ((int)lVar22 == 0) {
          iVar4 = 0x10;
        }
        iVar5 = /*UnityEngine.QualitySettings$$get_maxQueuedFrames*/ func_0x0325153c(0);
        uVar18 = *(uint *)(plVar9 + 5);
        if ((int)uVar18 < 1) goto code_r0x03126008;
        iVar29 = 0;
        goto code_r0x03125f10;
      }
      piVar14 = (int *)/*Unity.Collections.NativeArray<PreTile>$$get_IsCreated*/ func_0x025fc548(lVar22 + lVar28,**(undefined8 **)(lVar7 + 0x30));
      if ((int)piVar14 != 0) {
        lVar22 = *plVar10;
        if (lVar22 == 0) break;
        if (*(uint *)(lVar22 + 0x18) <= uVar26) goto code_r0x01840f8c;
        piVar14 = (int *)/*Unity.Collections.NativeArray<PreTile>$$Dispose*/ func_0x025fc558(lVar22 + lVar28,
                                         *(undefined8 *)(*(long *)(lVar7 + 0x30) + 8));
      }
      uVar26 = uVar26 + 1;
      lVar22 = *plVar10;
      lVar28 = lVar28 + 0x10;
    } while (lVar22 != 0);
  }
  piVar8 = (int *)func_0x00f78af4();
  return piVar8;
  while( true ) {
    iVar6 = iVar29 + *(int *)((long)plVar9 + 0x2c) + 1;
    iVar1 = 0;
    if (uVar18 != 0) {
      iVar1 = iVar6 / (int)uVar18;
    }
    uVar18 = iVar6 - iVar1 * uVar18;
    if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
    lVar25 = (long)(int)uVar18;
    iVar6 = *(int *)(lVar7 + lVar25 * 8 + 0x20);
    lVar7 = plVar9[6];
    if (((*(ushort *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Rendering.Universal.DeferredShaderData_TypeInfo*/ lRam0000000003d21260 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = iVar6 + iVar5;
    if (((int)lVar7 != iVar6) && (-1 < (int)lVar7 - iVar6)) {
      lVar7 = plVar9[4];
      if (lVar7 == 0) goto code_r0x0312621c;
      if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
      if (*(int *)(lVar7 + lVar25 * 8 + 0x24) == iVar4) {
        lVar7 = plVar9[3];
        if (lVar7 == 0) goto code_r0x0312621c;
        if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
        lVar7 = *(long *)(lVar7 + lVar25 * 8 + 0x20);
        if (lVar7 == 0) goto code_r0x0312621c;
        iVar6 = /*UnityEngine.ComputeBuffer$$get_count*/ func_0x032283c0(lVar7,0);
        if (iVar6 == (int)uVar19) {
          lVar7 = plVar9[3];
          if (lVar7 == 0) goto code_r0x0312621c;
          if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
          lVar7 = *(long *)(lVar7 + lVar25 * 8 + 0x20);
          if (lVar7 == 0) goto code_r0x0312621c;
          iVar6 = /*UnityEngine.ComputeBuffer$$get_stride*/ func_0x03228400(lVar7,0);
          if (iVar6 == *(int *)((long)plVar3 + -100)) {
            lVar7 = plVar9[4];
            if (lVar7 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
            *(int *)(lVar7 + lVar25 * 8 + 0x20) = (int)plVar9[6];
            *(uint *)((long)plVar9 + 0x2c) = uVar18;
            lVar7 = plVar9[3];
            if (lVar7 == 0) goto code_r0x0312621c;
            if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
            lVar7 = lVar7 + lVar25 * 8;
            goto code_r0x031261b8;
          }
        }
      }
    }
    iVar29 = iVar29 + 1;
    uVar18 = *(uint *)(plVar9 + 5);
    if ((int)uVar18 <= iVar29) break;
code_r0x03125f10:
    lVar7 = plVar9[4];
    if (lVar7 == 0) goto code_r0x0312621c;
  }
code_r0x03126008:
  plVar10 = (long *)plVar9[3];
  if (plVar10 != (long *)0x0) {
    if (uVar18 == *(uint *)(plVar10 + 3)) {
      plVar10 = (long *)func_0x00f78a34(/*UnityEngine.ComputeBuffer[]_TypeInfo*/ uRam0000000003d1ee28,uVar18 << 1);
      iVar5 = (int)plVar9[5];
      if (0 < iVar5) {
        lVar7 = 4;
        do {
          lVar25 = plVar9[3];
          if (lVar25 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar25 + 0x18) <= lVar7 - 4U) goto code_r0x03126220;
          if (plVar10 == (long *)0x0) goto code_r0x0312621c;
          lVar25 = *(long *)(lVar25 + lVar7 * 8);
          if ((lVar25 != 0) &&
             (lVar27 = func_0x00f78adc(lVar25,*(undefined8 *)(*plVar10 + 0x40)), lVar27 == 0))
          goto code_r0x0312622c;
          if ((ulong)*(uint *)(plVar10 + 3) <= lVar7 - 4U) goto code_r0x03126220;
          plVar10[lVar7] = lVar25;
          iVar5 = (int)plVar9[5];
          lVar25 = lVar7 + -3;
          lVar7 = lVar7 + 1;
        } while (lVar25 < iVar5);
      }
      plVar9[3] = (long)plVar10;
      lVar7 = func_0x00f78a34(/*UnityEngine.Rendering.Universal.DeferredShaderData.ComputeBufferInfo[]_TypeInfo*/ uRam0000000003d1f750,iVar5 << 1);
      uVar18 = *(uint *)(plVar9 + 5);
      if (0 < (int)uVar18) {
        lVar25 = 4;
        do {
          lVar27 = plVar9[4];
          if (lVar27 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar27 + 0x18) <= lVar25 - 4U) goto code_r0x03126220;
          if (lVar7 == 0) goto code_r0x0312621c;
          if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar25 - 4U) goto code_r0x03126220;
          *(undefined8 *)(lVar7 + lVar25 * 8) = *(undefined8 *)(lVar27 + lVar25 * 8);
          uVar18 = *(uint *)(plVar9 + 5);
          lVar27 = lVar25 + -3;
          lVar25 = lVar25 + 1;
        } while (lVar27 < (int)uVar18);
      }
      plVar9[4] = lVar7;
      plVar10 = (long *)plVar9[3];
    }
    lVar7 = func_0x00f78aec(/*UnityEngine.ComputeBuffer_TypeInfo*/ uRam0000000003d20900);
    /*UnityEngine.ComputeBuffer$$.ctor*/ func_0x032283b8(lVar7,uVar19,*(undefined4 *)((long)plVar3 + -100),iVar4,0,0);
    if (plVar10 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar25 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar25 == 0))
      goto code_r0x0312622c;
      if (*(uint *)(plVar10 + 3) <= uVar18) goto code_r0x03126220;
      plVar10[(long)(int)uVar18 + 4] = lVar7;
      lVar7 = plVar9[4];
      if (lVar7 != 0) {
        uVar18 = *(uint *)(plVar9 + 5);
        if (*(uint *)(lVar7 + 0x18) <= uVar18) goto code_r0x03126220;
        lVar7 = lVar7 + (long)(int)uVar18 * 8;
        *(int *)(lVar7 + 0x20) = (int)plVar9[6];
        *(int *)(lVar7 + 0x24) = iVar4;
        lVar7 = plVar9[3];
        *(uint *)(plVar9 + 5) = uVar18 + 1;
        *(uint *)((long)plVar9 + 0x2c) = uVar18;
        if (lVar7 != 0) {
          if (uVar18 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar18 * 8;
code_r0x031261b8:
            return *(int **)(lVar7 + 0x20);
          }
          goto code_r0x03126220;
        }
      }
    }
  }
code_r0x0312621c:
  func_0x00f78af4();
code_r0x03126220:
  uVar24 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar24,0);
code_r0x0312622c:
    uVar24 = func_0x00f78b14();
  } while( true );
}



