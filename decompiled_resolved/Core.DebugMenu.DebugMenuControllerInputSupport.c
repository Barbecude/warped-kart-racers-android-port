// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugMenuControllerInputSupport

// ============================================================
// RVA: 0x163e6a8 | Core.DebugMenu.DebugMenuControllerInputSupport.DeInit
// ============================================================

void Core_DebugMenu_DebugMenuControllerInputSupport__DeInit(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb572f & 1) == 0) {
    func_0x00f78a20(0x3d2a3a8);
    func_0x00f78a20(0x3d1b5d0);
    func_0x00f78a20(0x3d54920);
    func_0x00f78a20(0x3d54928);
    bRam0000000003eb572f = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  uVar2 = func_0x00f78aec(/*System.Action<InputAction.CallbackContext>_TypeInfo*/ uRam0000000003d1b5d0);
  /*System.Action<InputAction.CallbackContext>$$.ctor*/ func_0x01e5a648(uVar2,param_1,uRam0000000003d54920,uRam0000000003d2a3a8);
  if (lVar4 != 0) {
    /*UnityEngine.InputSystem.InputAction$$remove_performed*/ func_0x03022be4(lVar4,uVar2,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      /*UnityEngine.InputSystem.InputAction$$Disable*/ func_0x030232a8(*(long *)(param_1 + 0x18),0);
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar3) {
          uVar6 = 0;
          do {
            if (uVar3 <= uVar6) goto LAB_0163e800;
            lVar5 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
            uVar2 = func_0x00f78aec(/*System.Action<InputAction.CallbackContext>_TypeInfo*/ uRam0000000003d1b5d0);
            /*System.Action<InputAction.CallbackContext>$$.ctor*/ func_0x01e5a648(uVar2,param_1,uRam0000000003d54928,uRam0000000003d2a3a8);
            if (lVar5 == 0) goto LAB_0163e7fc;
            /*UnityEngine.InputSystem.InputAction$$remove_performed*/ func_0x03022be4(lVar5,uVar2,0);
            /*UnityEngine.InputSystem.InputAction$$Disable*/ func_0x030232a8(lVar5,0);
            uVar6 = uVar6 + 1;
            uVar3 = *(uint *)(lVar4 + 0x18);
          } while ((int)uVar6 < (int)uVar3);
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
      }
    }
  }
LAB_0163e7fc:
  func_0x00f78af4();
LAB_0163e800:
  uVar2 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar2,0);
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
  Core_DebugMenu_DebugMenu__UpdateMouse(lVar4);
  Core_DebugMenu_DebugMenu__UpdateTouch(lVar4);
  Core_DebugMenu_DebugMenu__UpdateCanvasAlphaAndRemoveAtTarget
            (0x41700000,0x3f800000,extraout_s0,lVar4,*(undefined8 *)(lVar4 + 0x50));
  Core_DebugMenu_DebugMenu__UpdateCanvasAlphaAndRemoveAtTarget
            (0xc1700000,0,extraout_s0,lVar4,*(undefined8 *)(lVar4 + 0x58));
  if (*(long *)(lVar4 + 0x78) != 0) {
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
// RVA: 0x163ed08 | Core.DebugMenu.DebugMenuControllerInputSupport.Update
// ============================================================

void Core_DebugMenu_DebugMenuControllerInputSupport__Update(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  long lStack_48;
  
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
  uStack_50 = 0;
  lStack_48 = 0;
  if (cRam0000000003ca3507 == '\0') {
    func_0x00f78a20(0x3d21b78);
    cRam0000000003ca3507 = '\x01';
  }
  if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) != 0) {
    if (((*(ushort *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = **(undefined8 **)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      lVar4 = *(long *)(lVar4 + 0x38);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x0163f05c;
      }
      uVar3 = /*UnityEngine.GameObject$$TryGetComponent<UniversalAdditionalLightData>*/ func_0x0185d9a8(lVar4,&lStack_48,uRam0000000003d57a68);
      if ((uVar3 & 1) != 0) {
        uVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar4,0);
        if (*(long *)(param_1 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x0163f05c;
        }
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
        if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*Core.DebugMenu.UIExtensions$$IsTransformADescendentOf*/ func_0x01643758(uVar2,uVar6);
        if ((uVar3 & 1) != 0) {
          if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*Core.DebugMenu.UIExtensions$$TryFindComponentInParentChain<ScrollRect>*/ func_0x01a39154(lVar4,&uStack_50,uRam0000000003d5f6e8);
          if ((uVar3 & 1) != 0) {
            if (lStack_48 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            uVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_48,uRam0000000003d53528);
            uVar2 = uStack_50;
            if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.DebugMenu.UIExtensions$$ScrollToCentre*/ func_0x0164383c(uVar2,uVar6);
          }
          if (*(long *)(param_1 + 0x10) == 0) {
            func_0x00f78af4();
code_r0x0163f05c:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x163f060);
            (*pcVar1)();
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x0163f05c;
          }
          uVar3 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar4,0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x0163f05c;
            }
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
          }
        }
      }
    }
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar5,0);
  }
  return;
}



// ============================================================
// RVA: 0x1643410 | Core.DebugMenu.DebugMenuControllerInputSupport.Init
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

int * Core_DebugMenu_DebugMenuControllerInputSupport__Init(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int extraout_var;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char acStack_128 [120];
  undefined1 auStack_b0 [8];
  char acStack_a8 [48];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  puVar3 = &stack0xffffffffffffffb0;
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
  *(long *)(param_1 + 0x10) = param_2;
  /*UnityEngine.InputSystem.Gamepad$$get_all*/ func_0x0301e60c(0);
  if (0 < extraout_var) {
    if (param_2 == 0) goto LAB_01643740;
    Core_DebugMenu_DebugMenu__HideAllPanels(param_2);
  }
  uVar11 = 0x3d1b5d0;
  uVar19 = 0x3d2a3a8;
  lVar8 = func_0x00f78aec(/*UnityEngine.InputSystem.InputAction_TypeInfo*/ uRam0000000003d22758);
  /*UnityEngine.InputSystem.InputAction$$.ctor*/ func_0x03022db8(lVar8,0,0,/*STR('*/{cancel}')*/ uRam0000000003d66fa0,0,0,0,0);
  *(long *)(param_1 + 0x18) = lVar8;
  uVar9 = func_0x00f78aec(/*System.Action<InputAction.CallbackContext>_TypeInfo*/ uRam0000000003d1b5d0);
  /*System.Action<InputAction.CallbackContext>$$.ctor*/ func_0x01e5a648(uVar9,param_1,uRam0000000003d54920,uRam0000000003d2a3a8);
  if (lVar8 == 0) {
LAB_01643740:
    func_0x00f78af4();
    uVar11 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar11,0);
      uVar11 = func_0x00f78b14();
    } while( true );
  }
  /*UnityEngine.InputSystem.InputAction$$add_performed*/ func_0x03022b88(lVar8,uVar9,0);
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) goto LAB_01643740;
  lVar18 = 0x3d1f000;
  lStack_70 = 0x3d1f000;
  puStack_58 = (undefined *)0x1643588;
  lStack_78 = *(long *)PTR_03a5d648;
  lStack_68 = param_1;
  pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
  piVar12 = (int *)/*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(acStack_a8,lVar8,0);
  if (acStack_a8[0] == '\0') {
    lVar18 = *(long *)(lVar8 + 200);
    if (lVar18 == 0) {
      /*UnityEngine.InputSystem.InputAction$$CreateInternalActionMapForSingletonAction*/ func_0x03023cb8(lVar8);
      lVar18 = *(long *)(lVar8 + 200);
      if (lVar18 != 0) goto code_r0x030231f8;
      goto code_r0x03023238;
    }
code_r0x030231f8:
    /*UnityEngine.InputSystem.InputActionMap$$ResolveBindingsIfNecessary*/ func_0x030227fc(lVar18);
    auVar24._8_8_ = lVar8;
    auVar24._0_8_ = *(long *)(lVar18 + 0x60);
    if (*(long *)(lVar18 + 0x60) == 0) goto code_r0x03023238;
    lVar16 = lStack_68;
    lVar10 = lStack_70;
    ppppuVar20 = (undefined8 ****)pppuStack_60;
    puVar22 = puStack_58;
    if (*(long *)PTR_03a5d648 != lStack_78) goto code_r0x03023234;
  }
  else {
    if (*(long *)PTR_03a5d648 == lStack_78) {
      return piVar12;
    }
code_r0x03023234:
    ___stack_chk_fail();
code_r0x03023238:
    auVar24 = func_0x00f78af4();
    puVar3 = auStack_b0;
    lVar16 = lVar8;
    lVar10 = lVar18;
    ppppuVar20 = &pppuStack_60;
    puVar22 = &UnityEngine_InputSystem_InputActionState__EnableSingleAction;
  }
  lVar18 = auVar24._8_8_;
  lVar8 = auVar24._0_8_;
  *(long *)(puVar3 + -0x20) = lVar10;
  *(long *)(puVar3 + -0x18) = lVar16;
  *(undefined8 *****)(puVar3 + -0x10) = ppppuVar20;
  *(undefined **)(puVar3 + -8) = puVar22;
  /*UnityEngine.InputSystem.InputActionState$$EnableControls*/ func_0x03033f98();
  if (lVar18 != 0) {
    /*UnityEngine.InputSystem.InputActionState.TriggerState$$set_phase*/ func_0x030b1330(*(long *)(lVar8 + 0x60) + (long)*(int *)(lVar18 + 0xc0) * 0x30,1,0);
    lVar16 = *(long *)(lVar18 + 200);
    if (lVar16 != 0) {
      *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
      /*UnityEngine.InputSystem.InputActionState$$HookOnBeforeUpdate*/ func_0x03033690(lVar8);
      iVar6 = 0;
      uVar11 = *(undefined8 *)(puVar3 + -0x10);
      uVar23 = *(undefined8 *)(puVar3 + -8);
      uVar14 = *(undefined8 *)(puVar3 + -0x20);
      uVar17 = *(undefined8 *)(puVar3 + -0x18);
      puVar4 = puVar3;
      goto UnityEngine_InputSystem_InputActionState__NotifyListenersOfActionChange;
    }
  }
  lVar16 = func_0x00f78af4();
  puVar4 = puVar3 + -0x80;
  *(undefined1 (*) [16])(puVar3 + -0x40) = auVar24;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) = &UnityEngine_InputSystem_InputAction__Disable;
  puVar21 = puVar3 + -0x30;
  *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)PTR_03a5d648;
  piVar12 = (int *)/*UnityEngine.InputSystem.InputAction$$get_currentState*/ func_0x03022910(puVar3 + -0x78);
  if (puVar3[-0x78] == '\0') {
    if (*(long *)PTR_03a5d648 == *(long *)(puVar3 + -0x48)) {
      return piVar12;
    }
code_r0x03023344:
    puVar22 = &UnityEngine_InputSystem_InputActionState__DisableSingleAction;
    auVar25 = ___stack_chk_fail();
  }
  else {
    if ((*(long *)(lVar16 + 200) == 0) ||
       (lVar18 = *(long *)(*(long *)(lVar16 + 200) + 0x60), auVar25._8_8_ = lVar16,
       auVar25._0_8_ = lVar18, lVar18 == 0)) {
      func_0x00f78af4();
      goto code_r0x03023344;
    }
    if (*(long *)PTR_03a5d648 != *(long *)(puVar3 + -0x48)) goto code_r0x03023344;
    puVar21 = *(undefined1 **)(puVar3 + -0x30);
    puVar22 = *(undefined **)(puVar3 + -0x28);
    lVar8 = *(long *)(puVar3 + -0x40);
    lVar16 = *(long *)(puVar3 + -0x38);
    puVar4 = puVar3 + -0x20;
  }
  lVar18 = auVar25._8_8_;
  *(long *)(puVar4 + -0x20) = lVar8;
  *(long *)(puVar4 + -0x18) = lVar16;
  *(undefined1 **)(puVar4 + -0x10) = puVar21;
  *(undefined **)(puVar4 + -8) = puVar22;
  /*UnityEngine.InputSystem.InputActionState$$DisableControls*/ func_0x03034058();
  if (lVar18 != 0) {
    /*UnityEngine.InputSystem.InputActionState$$ResetActionState*/ func_0x03023780(auVar25._0_8_,*(undefined4 *)(lVar18 + 0xc0),0,0);
    lVar8 = *(long *)(lVar18 + 200);
    if (lVar8 != 0) {
      *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + -1;
      iVar6 = 1;
      uVar11 = *(undefined8 *)(puVar4 + -0x10);
      uVar23 = *(undefined8 *)(puVar4 + -8);
      uVar14 = *(undefined8 *)(puVar4 + -0x20);
      uVar17 = *(undefined8 *)(puVar4 + -0x18);
UnityEngine_InputSystem_InputActionState__NotifyListenersOfActionChange:
      *(undefined8 *)(puVar4 + -0x40) = 0x3d22758;
      *(undefined8 *)(puVar4 + -0x38) = 0x3d1b5d0;
      *(undefined8 *)(puVar4 + -0x30) = 0x3d2a3a8;
      *(undefined8 *)(puVar4 + -0x28) = uVar9;
      *(undefined8 *)(puVar4 + -0x20) = uVar14;
      *(undefined8 *)(puVar4 + -0x18) = uVar17;
      *(undefined8 *)(puVar4 + -0x10) = uVar11;
      *(undefined8 *)(puVar4 + -8) = uVar23;
      if ((bRam0000000003ebce5d & 1) == 0) {
        func_0x00f78a20(0x3d54eb0);
        func_0x00f78a20(0x3d54e80);
        func_0x00f78a20(0x3d22780);
        func_0x00f78a20(0x3d7ac98);
        func_0x00f78a20(0x3d7ac90);
        bRam0000000003ebce5d = 1;
      }
      piVar12 = (int *)/*UnityEngine.InputSystem.Utilities.DelegateHelpers$$InvokeCallbacksSafe<string, InputControlLayoutChange>*/ func_0x018421d8(*(long *)(/*UnityEngine.InputSystem.InputActionState_TypeInfo*/ lRam0000000003d22780 + 0xb8) + 0x10,lVar18,iVar6,
                                       /*STR('onActionChange')*/ uRam0000000003d7ac90,0,uRam0000000003d54eb0);
      lVar8 = lRam0000000003d54e80;
      if (iVar6 != 8) {
        return piVar12;
      }
      lVar16 = *(long *)(/*UnityEngine.InputSystem.InputActionState_TypeInfo*/ lRam0000000003d22780 + 0xb8);
      puVar3 = (undefined1 *)(lVar16 + 0x60);
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
      piVar12 = (int *)/*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar3,**(undefined8 **)(lRam0000000003d54e80 + 0x30),
                                       /*STR('onActionControlsChange')*/ uRam0000000003d7ac98,0);
      if ((int)piVar12 == 0) {
        return piVar12;
      }
      /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$LockForChanges*/ func_0x01d02484(puVar3,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 8));
      iVar6 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar3,**(undefined8 **)(lVar8 + 0x30));
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          lVar10 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_Item*/ func_0x01d02004(puVar3,iVar6,*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10));
          if (lVar10 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x18418f8);
            (*pcVar2)();
          }
          (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18))(lVar10,lVar18);
          iVar6 = iVar6 + 1;
          iVar7 = /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$get_length*/ func_0x01d01ffc(puVar3,**(undefined8 **)(lVar8 + 0x30));
        } while (iVar6 < iVar7);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 0x20);
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
      if (0 < *(int *)(lVar16 + 0x98)) {
        iVar6 = 0;
        do {
          lVar18 = *(long *)(lVar8 + 0x18);
          if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar18);
          }
          uVar11 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c((int *)(lVar16 + 0x98),iVar6,**(undefined8 **)(lVar18 + 0xc0));
          lVar18 = *(long *)(lVar8 + 0x18);
          if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar18);
          }
          /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$RemoveCallback*/ func_0x01d022cc(puVar3,uVar11,*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x38));
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar16 + 0x98));
      }
      piVar12 = (int *)(lVar16 + 0x80);
      if (0 < *piVar12) {
        iVar6 = 0;
        do {
          lVar18 = *(long *)(lVar8 + 0x18);
          if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar18);
          }
          uVar11 = /*UnityEngine.InputSystem.Utilities.InlinedArray<TrackedDeviceRaycaster>$$get_Item*/ func_0x021f769c(piVar12,iVar6,**(undefined8 **)(lVar18 + 0xc0));
          lVar18 = *(long *)(lVar8 + 0x18);
          if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar18);
          }
          /*UnityEngine.InputSystem.Utilities.CallbackArray<object>$$AddCallback*/ func_0x01d020e8(puVar3,uVar11,*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x40));
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar16 + 0x80));
      }
      if ((*(ushort *)(*(long *)(lVar8 + 0x18) + 0x132) & 1) == 0) {
        func_0x00fac028(*(long *)(lVar8 + 0x18));
      }
      *piVar12 = 0;
      *(undefined8 *)(lVar16 + 0x88) = 0;
      *(undefined8 *)(lVar16 + 0x90) = 0;
      return piVar12;
    }
  }
  puVar22 = &UnityEngine_InputSystem_InputAction__Clone;
  uVar13 = func_0x00f78af4();
  puVar3 = puVar4 + -0x20;
  while( true ) {
    puVar5 = puVar3;
    *(undefined8 *)(puVar5 + -0x40) = 0x3d22758;
    *(undefined8 *)(puVar5 + -0x38) = uVar11;
    *(ulong *)(puVar5 + -0x30) = uVar19;
    *(undefined8 *)(puVar5 + -0x28) = uVar9;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar25;
    *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
    *(undefined **)(puVar5 + -8) = puVar22;
    uVar11 = 0x3d3faf8;
    if ((bRam0000000003ebcdd3 & 1) == 0) {
      func_0x00f78a20(0x3d22758);
      func_0x00f78a20(0x3d3faf8);
      bRam0000000003ebcdd3 = 1;
    }
    uVar9 = *(undefined8 *)(uVar13 + 0x10);
    uVar19 = (ulong)*(uint *)(uVar13 + 0x18);
    piVar12 = (int *)func_0x00f78aec(/*UnityEngine.InputSystem.InputAction_TypeInfo*/ uRam0000000003d22758);
    /*UnityEngine.InputSystem.InputAction$$.ctor*/ func_0x03022db8(piVar12,uVar9,uVar19,0,0,0,0);
    auVar24 = /*UnityEngine.InputSystem.InputAction$$get_bindings*/ func_0x030226ec(uVar13);
    *(undefined1 (*) [16])(puVar5 + -0x50) = auVar24;
    uVar14 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputBinding>$$ToArray*/ func_0x02747878(puVar5 + -0x50,uRam0000000003d3faf8);
    if (piVar12 != (int *)0x0) break;
    puVar22 = &UnityEngine_InputSystem_InputAction__System_ICloneable_Clone;
    uVar15 = func_0x00f78af4();
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar13;
    auVar25 = auVar1 << 0x40;
    puVar3 = puVar5 + -0x50;
    uVar13 = uVar15;
    puVar4 = puVar5;
  }
  *(undefined8 *)(piVar12 + 0x10) = uVar14;
  piVar12[0x2d] = *(int *)(uVar13 + 0xb4);
  *(undefined8 *)(piVar12 + 8) = *(undefined8 *)(uVar13 + 0x20);
  *(undefined8 *)(piVar12 + 0xe) = *(undefined8 *)(uVar13 + 0x38);
  *(undefined8 *)(piVar12 + 0xc) = *(undefined8 *)(uVar13 + 0x30);
  return piVar12;
}



// ============================================================
// RVA: 0x16439bc | Core.DebugMenu.DebugMenuControllerInputSupport.HandleGoBack
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16439d8 | Core.DebugMenu.DebugMenuControllerInputSupport.HandleShowHide
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugMenuControllerInputSupport__HandleShowHide(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 unaff_x19;
  undefined8 uVar12;
  undefined8 unaff_x20;
  long *plVar13;
  long *unaff_x21;
  long lVar14;
  long *plVar15;
  long *unaff_x22;
  long *plVar16;
  long *unaff_x23;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x29;
  code *pcVar19;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long *plStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x00f78af4();
    return;
  }
  uVar1 = *(uint *)(lVar6 + 0x3c);
  plVar8 = (long *)(ulong)uVar1;
  if (uVar1 == 0xffffffff) {
    return;
  }
  plVar13 = (long *)0xffffffff;
  if ((bRam0000000003eb5724 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403e0);
    func_0x00f78a20(0x3d403c8);
    func_0x00f78a20(0x3d1e880);
    bRam0000000003eb5724 = 1;
  }
  plStack_50 = (long *)0x0;
  puStack_68 = (undefined *)0x0;
  puStack_70 = (undefined1 *)0x0;
  plStack_58 = (long *)0x0;
  lStack_60 = 0;
  auStack_80._0_8_ = 0;
  puStack_98 = (undefined *)0x0;
  ppuStack_a0 = (undefined1 **)0x0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plVar9 = (long *)((long)&MACH_HEADER.magic + 1);
  iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,plVar8,1,&puStack_70);
  plVar15 = plStack_58;
  if (iVar3 == 0) {
    return;
  }
  uVar12 = unaff_x24;
  if (plStack_58 == (long *)0x0) {
LAB_0163f550:
    func_0x00f78af4();
    unaff_x24 = uVar12;
code_r0x0163f554:
    unaff_x21 = plVar13;
    lVar4 = func_0x00f78e5c(unaff_x23);
    auStack_b0._8_8_ = Core_DebugMenu_DebugMenu__HideAllPanels;
    puVar18 = auStack_b0;
    auVar22._8_8_ = lVar4;
    auVar22._0_8_ = 0x3eb5000;
    plStack_c0 = plVar8;
    plStack_b8 = (long *)lVar6;
    auStack_b0._0_8_ = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5705 & 1) == 0) {
      func_0x00f78a20(0x3d3cfc8);
      func_0x00f78a20(0x3d3cfd0);
      bRam0000000003eb5705 = 1;
    }
    auVar2._8_8_ = plStack_b8;
    auVar2._0_8_ = plStack_c0;
    lVar6 = *(long *)(lVar4 + 0x50);
    if (lVar6 == 0) {
      pcVar19 = Core_DebugMenu_DebugMenu__PopAll;
      auVar20 = func_0x00f78af4();
      plVar9 = (long *)0x0;
      register0x00000008 = (BADSPACEBASE *)&plStack_c0;
    }
    else {
      if (*(int *)(lVar6 + 0x18) < 1) {
        return;
      }
      auVar20._8_4_ =
           *(undefined4 *)(*(long *)(lVar6 + 0x10) + (ulong)(*(int *)(lVar6 + 0x18) - 1) * 8 + 0x24)
      ;
      auVar20._0_8_ = lVar4;
      auVar20._12_4_ = 0;
      plVar9 = (long *)0x0;
      register0x00000008 = (BADSPACEBASE *)&ppuStack_a0;
      puVar18 = (undefined1 *)auStack_b0._0_8_;
      pcVar19 = (code *)auStack_b0._8_8_;
      auVar22 = auVar2;
    }
  }
  else {
    uVar12 = 0x3d21150;
    uVar17 = 0x3d21150;
    if ((*(byte *)(*plStack_58 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plStack_58 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      func_0x00f78e5c(plStack_58);
      uVar12 = uVar17;
      goto LAB_0163f550;
    }
    if (plStack_58[0xf] == 0) {
      iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,0xffffffff,1,&ppuStack_a0);
      plVar9 = plStack_88;
      if (iVar3 == 0) {
        plVar13 = (long *)func_0x00f78aec(/*System.Collections.Generic.Stack<int>_TypeInfo*/ uRam0000000003d1e880);
        /*System.Collections.Generic.Stack<int>$$.ctor*/ func_0x028641f8(plVar13,uRam0000000003d403c8);
        plVar15[0xf] = (long)plVar13;
        uVar12 = uVar17;
        if (plVar13 != (long *)0x0) {
          /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(plVar13,plVar8,uRam0000000003d403e0);
          if ((plVar15[5] != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar15[5],0), lVar4 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
            lVar4 = lVar6;
            if ((bRam0000000003eb5727 & 1) == 0) {
              func_0x00f78a20(0x3d535c0);
              func_0x00f78a20(0x3d3acd0);
              lVar4 = func_0x00f78a20(0x3d3acd8);
              bRam0000000003eb5727 = 1;
            }
            plStack_50 = (long *)0x0;
            puStack_68 = (undefined *)0x0;
            puStack_70 = (undefined1 *)0x0;
            plStack_58 = (long *)0x0;
            lStack_60 = 0;
            if (uVar1 == 0xffffffff) {
              return;
            }
            Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
                      (0,lVar4,*(undefined8 *)(lVar6 + 0x58),*(undefined8 *)(lVar6 + 0x50),plVar8);
            plVar9 = (long *)((long)&MACH_HEADER.magic + 1);
            iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,plVar8,1,&puStack_70);
            if (iVar3 == 0) {
              return;
            }
            if (lStack_60 != 0) {
              plVar8 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_60,uRam0000000003d535c0);
              if (*(long *)(lVar6 + 0x78) == 0) {
                if (plVar8 != (long *)0x0) goto LAB_016428ec;
              }
              else if (plVar8 != (long *)0x0) {
                plVar9 = (long *)0x0;
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar8,1);
LAB_016428ec:
                lVar4 = plVar8[0x10];
                if (lVar4 == 0) goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
                uVar10 = 0;
                do {
                  if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar10)
                  goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
                  if (*(uint *)(lVar4 + 0x18) <= uVar10) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  Core_DebugMenu_DebugMenu__ShowPanel
                            (0,lVar6,*(undefined4 *)(*(long *)(lVar4 + 0x10) + uVar10 * 4 + 0x20));
                  uVar10 = uVar10 + 1;
                  lVar4 = plVar8[0x10];
                } while (lVar4 != 0);
              }
            }
            func_0x00f78af4();
            goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
          }
        }
        goto LAB_0163f550;
      }
      unaff_x23 = plVar9;
      if (plStack_88 == (long *)0x0) goto LAB_0163f550;
      unaff_x24 = uVar12;
      if ((*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) <= *(byte *)(*plStack_88 + 300)) &&
         (*(long *)(*(long *)(*plStack_88 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                   + -8) == /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
        if (plStack_88[0xf] == 0) {
          return;
        }
        iVar3 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(plStack_88[0xf],uRam0000000003d403d0);
        if (iVar3 != -1) {
          return;
        }
        lVar4 = plVar9[0xf];
        plVar15[0xf] = lVar4;
        if (lVar4 != 0) {
          /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(lVar4,plVar8,uRam0000000003d403e0);
          uVar12 = uVar17;
          if ((plVar15[5] != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar15[5],0), lVar4 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
            Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar6,plVar8);
            auVar21._8_8_ = 0xffffffff;
            auVar21._0_8_ = lVar6;
            goto code_r0x0164295c;
          }
        }
        goto LAB_0163f550;
      }
      goto code_r0x0163f554;
    }
    plVar8 = plStack_58;
    if (*(long *)(lVar6 + 0x78) == 0) {
      return;
    }
Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild:
    puVar18 = &stack0xfffffffffffffff0;
    uVar12 = 0x3eb5000;
    if ((bRam0000000003eb5734 & 1) == 0) {
      func_0x00f78a20(0x3d535e8);
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5734 = 1;
    }
    if (plVar8[8] != 0) {
      uVar12 = 0x3d23000;
      plVar8 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar8[8],uRam0000000003d535e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar8,0);
      if (iVar3 == 0) {
        return;
      }
      if (plVar8 != (long *)0x0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar8,1,0);
        plVar9 = *(long **)(*plVar8 + 0x380);
        (**(code **)(*plVar8 + 0x378))(plVar8,0);
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        plVar13 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar8,0);
        uVar12 = 0;
        if (lVar6 != 0) {
          uVar12 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar6,plVar13,0);
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
          uVar17 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
          if (*(char *)(lVar6 + 0x41) == '\0') {
            *(undefined1 *)(lVar6 + 0x41) = 1;
            uVar17 = *(undefined8 *)(lVar6 + 0x38);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar13,uVar17,0);
            if (iVar3 == 0) {
              uVar17 = *(undefined8 *)(lVar6 + 0x38);
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
              /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar17,uVar12,
                              *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                              uRam0000000003d560a8);
              *(long **)(lVar6 + 0x38) = plVar13;
              if (cRam0000000003e85072 == '\0') {
                func_0x00f78a20(0x3d21718);
                cRam0000000003e85072 = '\x01';
              }
              if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar13,uVar12,
                              *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                              uRam0000000003d560f0);
            }
            *(undefined1 *)(lVar6 + 0x41) = 0;
            return;
          }
          if (plVar13 == (long *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
          }
          uVar5 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
          uVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar12,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = 0;
          if ((bRam0000000003ebf392 & 1) == 0) {
            func_0x00f78a20(0x3d210d8,0);
            func_0x00f78a20(0x3d22300);
            bRam0000000003ebf392 = 1;
            uVar17 = extraout_x1;
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
            uVar17 = extraout_x1_00;
          }
          if (cRam0000000003ca34ff == '\0') {
            func_0x00f78a20(0x3d210d8,uVar17);
            cRam0000000003ca34ff = '\x01';
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar8 == (long *)0x0) {
            auVar21 = func_0x00f78af4();
            plStack_58 = (long *)0x3ca3000;
            plStack_50 = plVar8;
            uStack_48 = uVar12;
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
            plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar8 == (long *)0x0) {
              auVar22 = func_0x00f78af4();
              uStack_90 = 0x3ca3000;
              puStack_68 = &UnityEngine_Debug__LogErrorFormat;
              plStack_88 = plVar8;
              puStack_70 = &stack0xffffffffffffffc0;
              auStack_80 = auVar21;
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
              plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar8 == (long *)0x0) {
                auVar21 = func_0x00f78af4();
                plStack_c0 = (long *)0x3ca3000;
                puStack_98 = &UnityEngine_Debug__LogErrorFormat;
                uVar12 = uVar5;
                plStack_b8 = plVar8;
                ppuStack_a0 = &puStack_70;
                auStack_b0 = auVar22;
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
                plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar8 == (long *)0x0) {
                  auVar21 = func_0x00f78af4();
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
                  plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar8 == (long *)0x0) {
                    auVar21 = func_0x00f78af4();
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
                    plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar8 == (long *)0x0) {
                      auVar21 = func_0x00f78af4();
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
                      plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar8 == (long *)0x0) {
                        auVar21 = func_0x00f78af4();
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
                        plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                        if (plVar8 == (long *)0x0) {
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
                        lVar6 = *plVar8;
                        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                        if (uVar10 != 0) {
                          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                              puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                              goto code_r0x0322c0c4;
                            }
                            piVar11 = piVar11 + 4;
                            uVar10 = uVar10 - 1;
                          } while (uVar10 != 0);
                        }
                        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)*puVar7)(plVar8,2,auVar21._0_8_,auVar21._8_8_,uVar12,puVar7[1]);
                        return;
                      }
                      lVar6 = *plVar8;
                      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                      if (uVar10 != 0) {
                        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                            goto code_r0x0322bf94;
                          }
                          piVar11 = piVar11 + 4;
                          uVar10 = uVar10 - 1;
                        } while (uVar10 != 0);
                      }
                      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)*puVar7)(plVar8,2,auVar21._0_8_,auVar21._8_8_,puVar7[1]);
                      return;
                    }
                    lVar6 = *plVar8;
                    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                          goto code_r0x0322be68;
                        }
                        piVar11 = piVar11 + 4;
                        uVar10 = uVar10 - 1;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar7)(plVar8,2,auVar21._0_8_,auVar21._8_8_,puVar7[1]);
                    return;
                  }
                  lVar6 = *plVar8;
                  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto code_r0x0322bd40;
                      }
                      piVar11 = piVar11 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar7)(plVar8,auVar21._0_8_,auVar21._8_8_,puVar7[1]);
                  return;
                }
                lVar6 = *plVar8;
                uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                      goto code_r0x0322bc0c;
                    }
                    piVar11 = piVar11 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar7)(plVar8,0,auVar21._0_8_,auVar21._8_8_,uVar5,puVar7[1]);
                return;
              }
              lVar6 = *plVar8;
              uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                    puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                    goto code_r0x0322badc;
                  }
                  piVar11 = piVar11 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar7)(plVar8,0,auVar22._0_8_,auVar22._8_8_,puVar7[1]);
              return;
            }
            lVar6 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                  goto code_r0x0322b9b0;
                }
                piVar11 = piVar11 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar7)(plVar8,0,auVar21._0_8_,auVar21._8_8_,puVar7[1]);
            return;
          }
          lVar6 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto code_r0x0322b888;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar7)(plVar8,0,uVar12,puVar7[1]);
          return;
        }
      }
    }
    auVar22._8_8_ = plVar8;
    auVar22._0_8_ = uVar12;
    auVar20 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar15 = unaff_x22;
    pcVar19 = Core_DebugMenu_DebugMenu__PopPanels;
  }
code_r0x01642bc4:
  auVar21 = auVar20;
  uVar12 = auVar21._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = plVar15;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar22;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar18;
  *(code **)((long)register0x00000008 + -8) = pcVar19;
  puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
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
  iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (uVar12,auVar21._8_8_,1,(undefined1 *)((long)register0x00000008 + -0x70));
  if (iVar3 == 0) {
    return;
  }
  unaff_x21 = *(long **)((long)register0x00000008 + -0x58);
  plVar8 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    plVar13 = (long *)0x3d21150;
    plVar16 = (long *)0x3d21150;
    plVar15 = plVar9;
    unaff_x23 = plVar13;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar17 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar6 = unaff_x21[0xf];
      unaff_x24 = uVar17;
      if (lVar6 == 0) goto LAB_01642da0;
      uVar1 = *(int *)(lVar6 + 0x18) - (int)plVar9;
      plVar9 = (long *)(ulong)uVar1;
      if ((int)uVar1 < 1) goto LAB_01642d30;
      do {
        unaff_x23 = plVar16;
        unaff_x24 = uVar17;
        if (lVar6 == 0) goto LAB_01642da0;
        uVar5 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar6,uRam0000000003d403d8);
        iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (uVar12,uVar5,1,(undefined1 *)((long)register0x00000008 + -0xa0));
        if (iVar3 != 0) {
          plVar8 = *(long **)((long)register0x00000008 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar8 == (long *)0x0) goto LAB_01642da0;
          plVar15 = plVar9;
          unaff_x23 = plVar13;
          unaff_x24 = uVar17;
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar8[0xf] = 0;
        }
        lVar6 = unaff_x21[0xf];
        uVar1 = (int)plVar9 - 1;
        plVar9 = (long *)(ulong)uVar1;
      } while (uVar1 != 0);
      unaff_x23 = plVar16;
      unaff_x24 = 0x3d403d8;
      if (lVar6 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar8 = unaff_x21;
  plVar15 = plVar9;
LAB_01642da8:
  auVar20 = func_0x00f78e5c(plVar8);
  plVar9 = (long *)((long)&MACH_HEADER.magic + 1);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  pcVar19 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar22 = auVar21;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar6 + 0x18)) {
    uVar17 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar6,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,uVar12,uVar17);
  }
  unaff_x21[0xf] = 0;
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
  unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
code_r0x0164295c:
  lVar4 = auVar21._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar6 = lVar4;
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
  if (auVar21._8_4_ == -1) {
    return;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,lVar6,*(undefined8 *)(lVar4 + 0x50),*(undefined8 *)(lVar4 + 0x58),auVar21._8_8_);
  iVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (lVar4,auVar21._8_8_,1,(undefined1 *)((long)register0x00000008 + -0x70));
  if (iVar3 == 0) {
    return;
  }
  if (*(long *)((long)register0x00000008 + -0x60) != 0) {
    lVar6 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar4 + 0x78) == 0) {
      if (lVar6 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar6 == 0) goto LAB_01642a84;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar6,0,0);
    }
    lVar14 = *(long *)(lVar6 + 0x80);
    if (lVar14 == 0) {
      return;
    }
    uVar10 = 0;
    do {
      if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar10) {
        return;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      Core_DebugMenu_DebugMenu__HidePanel
                (0,lVar4,*(undefined4 *)(*(long *)(lVar14 + 0x10) + uVar10 * 4 + 0x20));
      uVar10 = uVar10 + 1;
      lVar14 = *(long *)(lVar6 + 0x80);
    } while (lVar14 != 0);
  }
LAB_01642a84:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1643a0c | Core.DebugMenu.DebugMenuControllerInputSupport..ctor
// ============================================================

void Core_DebugMenu_DebugMenuControllerInputSupport___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1643a14 | Core.DebugMenu.DebugMenuControllerInputSupport..cctor
// ============================================================

void Core_DebugMenu_DebugMenuControllerInputSupport___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5731 & 1) == 0) {
    func_0x00f78a20(0x3d21120);
    func_0x00f78a20(0x3d6b960);
    bRam0000000003eb5731 = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('DebugMenuControllerInputSupport.Update()')*/ uRam0000000003d6b960,1,0,0,0);
  **(undefined8 **)(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ lRam0000000003d21120 + 0xb8) = uVar1;
  return;
}



