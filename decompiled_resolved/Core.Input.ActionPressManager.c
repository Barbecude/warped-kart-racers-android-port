// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Input.ActionPressManager

// ============================================================
// RVA: 0x16469e4 | Core.Input.ActionPressManager.Init
// ============================================================

void Core_Input_ActionPressManager__Init(void)

{
  return;
}



// ============================================================
// RVA: 0x16469e8 | Core.Input.ActionPressManager.Update
// ============================================================

void Core_Input_ActionPressManager__Update(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_a0;
  char cStack_98;
  undefined2 uStack_97;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined4 uStack_8f;
  undefined3 uStack_8b;
  undefined4 uStack_84;
  undefined3 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  
  lVar5 = param_1;
  if ((bRam0000000003eb5760 & 1) == 0) {
    func_0x00f78a20(0x3d39c20);
    func_0x00f78a20(0x3d39c28);
    lVar5 = func_0x00f78a20(0x3d39c30);
    bRam0000000003eb5760 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar6) {
        return;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
        lVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(lVar9 + 0x10) + lVar7;
      uVar8 = *(undefined8 *)(lVar9 + 0x20);
      cVar2 = *(char *)(lVar9 + 0x28);
      uStack_7c = *(undefined2 *)(lVar9 + 0x29);
      uStack_7a = *(undefined1 *)(lVar9 + 0x2b);
      uVar1 = *(undefined4 *)(lVar9 + 0x2c);
      uVar3 = *(undefined1 *)(lVar9 + 0x30);
      uStack_8f = *(undefined4 *)(lVar9 + 0x31);
      uStack_84._0_3_ = (undefined3)uStack_8f;
      uStack_84._3_1_ = (undefined1)*(undefined4 *)(lVar9 + 0x34);
      uStack_80 = (undefined3)((uint)*(undefined4 *)(lVar9 + 0x34) >> 8);
      uStack_a0 = uVar8;
      cStack_98 = cVar2;
      uStack_94 = uVar1;
      uStack_90 = uVar3;
      uStack_8b = uStack_80;
      uStack_97 = uStack_7c;
      uStack_95 = uStack_7a;
      iVar4 = /*Core.Input.ActionPressManager$$CalculatePressedState*/ func_0x01646bac(lVar5,&uStack_a0);
      if (*(long *)(param_1 + 0x10) == 0) break;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      uStack_70 = (undefined1)iVar4;
      uStack_6c = uVar1;
      if (iVar4 == 1 && cVar2 == '\0') {
        uStack_6c = param_2;
      }
      uStack_6f = uStack_7c;
      uStack_6d = uStack_7a;
      uStack_67 = uStack_84;
      uStack_63 = uStack_80;
      uStack_78 = uVar8;
      uStack_68 = uVar3;
      lVar5 = /*System.Collections.Generic.List<ActionState>$$set_Item*/ func_0x02369ecc(*(long *)(param_1 + 0x10),uVar6,&uStack_78,uRam0000000003d39c30);
      uVar6 = uVar6 + 1;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = lVar7 + 0x18;
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1646bac | Core.Input.ActionPressManager.CalculatePressedState
// ============================================================

/* WARNING: Possible PIC construction at 0x01646c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0303e288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0303ef04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0303e4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0303e5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0303e640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0303e7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0303e644) */
/* WARNING: Removing unreachable block (ram,0x0303e668) */
/* WARNING: Removing unreachable block (ram,0x0303e648) */
/* WARNING: Removing unreachable block (ram,0x0303e5b0) */
/* WARNING: Removing unreachable block (ram,0x0303e4ec) */
/* WARNING: Removing unreachable block (ram,0x0303e50c) */
/* WARNING: Removing unreachable block (ram,0x0303e4f0) */
/* WARNING: Removing unreachable block (ram,0x0303ef08) */
/* WARNING: Removing unreachable block (ram,0x0303ef0c) */
/* WARNING: Removing unreachable block (ram,0x0303ef38) */
/* WARNING: Removing unreachable block (ram,0x0303e28c) */
/* WARNING: Removing unreachable block (ram,0x0303e298) */
/* WARNING: Removing unreachable block (ram,0x0303e2e8) */
/* WARNING: Removing unreachable block (ram,0x0303e29c) */
/* WARNING: Removing unreachable block (ram,0x0303e2b8) */
/* WARNING: Removing unreachable block (ram,0x0303e2bc) */
/* WARNING: Removing unreachable block (ram,0x0303e2c0) */
/* WARNING: Removing unreachable block (ram,0x0303e2c4) */
/* WARNING: Removing unreachable block (ram,0x0303e2cc) */
/* WARNING: Removing unreachable block (ram,0x0303e2d0) */
/* WARNING: Removing unreachable block (ram,0x0303e2d4) */
/* WARNING: Removing unreachable block (ram,0x0303e290) */
/* WARNING: Removing unreachable block (ram,0x0303e2d8) */
/* WARNING: Removing unreachable block (ram,0x01646c90) */
/* WARNING: Removing unreachable block (ram,0x01646c94) */
/* WARNING: Removing unreachable block (ram,0x0303e7fc) */
/* WARNING: Removing unreachable block (ram,0x0303e800) */

ulong Core_Input_ActionPressManager__CalculatePressedState
                (undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar11;
  uint uVar9;
  uint uVar10;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  int extraout_w1;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  int *piVar24;
  undefined8 *unaff_x19;
  byte *pbVar25;
  ulong unaff_x20;
  byte *pbVar26;
  ulong unaff_x21;
  undefined8 unaff_x22;
  byte *pbVar27;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined8 unaff_x30;
  undefined *puVar29;
  ulong extraout_d0;
  undefined8 unaff_d8;
  ulong uVar30;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_70 [8];
  int iStack_68;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar28 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5765 & 1) == 0) {
    func_0x00f78a20(0x3d32518);
    func_0x00f78a20(0x3d32520);
    func_0x00f78a20(0x3d32528);
    func_0x00f78a20(0x3d3fa88);
    bRam0000000003eb5765 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)((long)param_2 + 0x14) == 1) {
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) {
      plVar13 = (long *)/*UnityEngine.InputSystem.InputControl$$get_Item*/ func_0x0303d35c(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8),*param_2,0);
      goto code_r0x0303e170;
    }
  }
  else if (*(int *)((long)param_2 + 0x14) == 0) {
    auStack_58 = /*UnityEngine.InputSystem.Gamepad$$get_all*/ func_0x0301e60c(0);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&uStack_48,auStack_58,uRam0000000003d3fa88);
    unaff_x21 = 0x3d32520;
    unaff_x22 = 0x3d32528;
    unaff_x20 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&uStack_48,uRam0000000003d32520);
    if ((unaff_x20 & 1) == 0) {
      iStack_68 = 0x5b;
      /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_48,uRam0000000003d32518);
      if (iStack_68 != 0x83) {
        return 0;
      }
      return unaff_x20;
    }
    lVar12 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&uStack_48,uRam0000000003d32528);
    if (lVar12 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1646d38);
      (*pcVar3)();
    }
    plVar13 = (long *)/*UnityEngine.InputSystem.InputControl$$get_Item*/ func_0x0303d35c(lVar12,*param_2,0);
    unaff_x30 = 0x1646c90;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    unaff_x19 = param_2;
    unaff_x29 = puVar28;
code_r0x0303e170:
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar28 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar30 = 0;
    lVar12 = 0x3ebc000;
    if ((bRam0000000003ebce8e & 1) == 0) {
      func_0x00f78a20(0x3d20380,0);
      bRam0000000003ebce8e = 1;
    }
    if (plVar13 == (long *)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar14 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d785e0);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar15,0);
      uVar15 = func_0x00f78a24(0x3d58608);
      puVar29 = &UnityEngine_InputSystem_InputControlExtensions__IsActuated;
      plVar13 = (long *)func_0x00f78ac0(uVar14,uVar15);
      uVar16 = extraout_d0;
    }
    else {
      iVar8 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(0,0,0);
      uVar16 = uVar30;
      if (iVar8 != 0) {
        if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*UnityEngine.InputSystem.Controls.ButtonControl_TypeInfo*/ lRam0000000003d20380 + 300)) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.Controls.ButtonControl_TypeInfo*/ lRam0000000003d20380 + 300) * 8 +
                     -8) != /*UnityEngine.InputSystem.Controls.ButtonControl_TypeInfo*/ lRam0000000003d20380)) {
          uVar16 = (ulong)**(uint **)(/*UnityEngine.InputSystem.Controls.ButtonControl_TypeInfo*/ lRam0000000003d20380 + 0xb8);
        }
        else {
          uVar9 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_pressPointOrDefault*/ func_0x02fdd61c(plVar13,0);
          uVar16 = (ulong)uVar9;
        }
      }
      puVar28 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar29 = *(undefined **)((long)register0x00000008 + -8);
      lVar12 = *(long *)((long)register0x00000008 + -0x20);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar30 = *(ulong *)((long)register0x00000008 + -0x28);
      puVar7 = (undefined1 *)register0x00000008;
    }
    *(undefined8 *)(puVar7 + -0x30) = unaff_d9;
    *(ulong *)(puVar7 + -0x28) = uVar30;
    *(long *)(puVar7 + -0x20) = lVar12;
    *(undefined8 *)(puVar7 + -0x18) = uVar14;
    *(undefined1 **)(puVar7 + -0x10) = puVar28;
    *(undefined **)(puVar7 + -8) = puVar29;
    *(long *)(puVar7 + -0x50) = lVar12;
    *(long **)(puVar7 + -0x48) = plVar13;
    *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x38) = &UNK_0303e28c;
    if (plVar13 == (long *)0x0) {
      func_0x00f78a24(uVar16,0x3d1fcf0);
      uVar14 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d785e0);
      uVar18 = 0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar15,0);
      uVar15 = func_0x00f78a24(0x3d585a8);
      auVar32 = func_0x00f78ac0(uVar14,uVar15);
      plVar13 = auVar32._0_8_;
      *(undefined8 *)(puVar7 + -0x80) = unaff_x22;
      *(ulong *)(puVar7 + -0x78) = unaff_x21;
      *(long *)(puVar7 + -0x70) = lVar12;
      *(undefined8 *)(puVar7 + -0x68) = uVar14;
      *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x40;
      *(undefined **)(puVar7 + -0x58) =
           &UnityEngine_InputSystem_InputControlExtensions__ReadValueIntoBuffer;
      if (plVar13 == (long *)0x0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar15 = func_0x00f78aec();
        uVar14 = 0x3d785e0;
      }
      else {
        if (auVar32._8_8_ != 0) {
          uVar14 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48();
          uVar14 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar14,0);
                    /* WARNING: Could not recover jumptable at 0x0303e3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar30 = (**(code **)(*plVar13 + 0x1c8))
                             (plVar13,uVar14,auVar32._8_8_,uVar18,*(undefined8 *)(*plVar13 + 0x1d0))
          ;
          return uVar30;
        }
        func_0x00f78a24(0x3d1fcf0);
        uVar15 = func_0x00f78aec();
        uVar14 = 0x3d78058;
        lVar12 = 0;
      }
      uVar14 = func_0x00f78a24(uVar14);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14,0);
      uVar14 = func_0x00f78a24(0x3d58628);
      plVar13 = (long *)func_0x00f78ac0(uVar15,uVar14);
      *(long *)(puVar7 + -0xa0) = lVar12;
      *(undefined8 *)(puVar7 + -0x98) = uVar15;
      *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x60;
      *(undefined **)(puVar7 + -0x88) =
           &UnityEngine_InputSystem_InputControlExtensions__ReadDefaultValueAsObject;
      if (plVar13 == (long *)0x0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar14 = func_0x00f78aec();
        uVar15 = func_0x00f78a24(0x3d785e0);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar15,0);
        uVar15 = func_0x00f78a24(0x3d58610);
        auVar32 = func_0x00f78ac0(uVar14,uVar15);
        lVar19 = auVar32._0_8_;
        *(long *)(puVar7 + -0xc0) = lVar12;
        *(undefined8 *)(puVar7 + -0xb8) = uVar14;
        *(undefined1 **)(puVar7 + -0xb0) = puVar7 + -0x90;
        *(undefined **)(puVar7 + -0xa8) =
             &UnityEngine_InputSystem_InputControlExtensions__ReadValueFromEventAsObject;
        puVar28 = puVar7 + -0xb0;
        uVar30 = unaff_x21;
        if (lVar19 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          lVar19 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d785e0);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar19,uVar14,0);
          uVar14 = func_0x00f78a24(0x3d58620);
          puVar29 = &UnityEngine_InputSystem_InputControlExtensions__GetStatePtrFromStateEvent;
          auVar32 = func_0x00f78ac0(lVar19,uVar14);
          puVar7 = puVar7 + -0xc0;
          goto code_r0x0303e564;
        }
        puVar29 = &UNK_0303e4ec;
        puVar7 = puVar7 + -0xc0;
        goto code_r0x0303e564;
      }
      if (cRam0000000003ccc32a == '\0') {
        func_0x00f78a20(0x3d22870);
        cRam0000000003ccc32a = '\x01';
      }
                    /* WARNING: Could not recover jumptable at 0x0303e488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar30 = (**(code **)(*plVar13 + 0x1b8))
                         (plVar13,**(undefined8 **)(/*UnityEngine.InputSystem.LowLevel.InputStateBuffers_TypeInfo*/ lRam0000000003d22870 + 0xb8),
                          *(undefined8 *)(*plVar13 + 0x1c0));
      return uVar30;
    }
    uVar14 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48();
    uVar14 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar14,0);
    auVar31._8_8_ = uVar14;
    auVar31._0_8_ = plVar13;
    lVar19 = 0;
    puVar28 = *(undefined1 **)(puVar7 + -0x40);
    puVar29 = *(undefined **)(puVar7 + -0x38);
    puVar4 = puVar7 + -0x30;
    uVar14 = *(undefined8 *)(puVar7 + -0x50);
    uVar15 = *(undefined8 *)(puVar7 + -0x48);
code_r0x0303e98c:
    puVar7 = puVar4 + -0x30;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = uVar14;
    *(undefined8 *)(puVar4 + -0x18) = uVar15;
    *(undefined1 **)(puVar4 + -0x10) = puVar28;
    *(undefined **)(puVar4 + -8) = puVar29;
    puVar28 = puVar4 + -0x10;
    if (auVar31._0_8_ == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar18 = func_0x00f78aec();
      uVar15 = 0x3d785e0;
      lVar19 = param_4;
code_r0x0303ea3c:
      uVar15 = func_0x00f78a24(uVar15);
      lVar20 = 0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar18,uVar15);
      uVar15 = func_0x00f78a24(0x3d585b0);
      puVar29 = &UnityEngine_InputSystem_InputControlExtensions__CompareState;
      auVar31 = func_0x00f78ac0(uVar18,uVar15);
    }
    else {
      if (auVar31._8_8_ == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar18 = func_0x00f78aec();
        uVar15 = 0x3d7ba40;
        uVar14 = 0;
        lVar19 = param_4;
        goto code_r0x0303ea3c;
      }
      if (cRam0000000003ccc32a == '\0') {
        func_0x00f78a20(0x3d22870);
        cRam0000000003ccc32a = '\x01';
      }
      lVar20 = **(long **)(/*UnityEngine.InputSystem.LowLevel.InputStateBuffers_TypeInfo*/ lRam0000000003d22870 + 0xb8);
      puVar28 = *(undefined1 **)(puVar4 + -0x10);
      puVar29 = *(undefined **)(puVar4 + -8);
      uVar14 = *(undefined8 *)(puVar4 + -0x20);
      uVar18 = *(undefined8 *)(puVar4 + -0x18);
      unaff_x22 = *(undefined8 *)(puVar4 + -0x30);
      unaff_x21 = *(ulong *)(puVar4 + -0x28);
      puVar7 = puVar4;
    }
code_r0x0303ea68:
    lVar12 = auVar31._0_8_;
    *(undefined8 *)(puVar7 + -0x30) = unaff_x22;
    *(ulong *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar7 + -0x20) = uVar14;
    *(undefined8 *)(puVar7 + -0x18) = uVar18;
    *(undefined1 **)(puVar7 + -0x10) = puVar28;
    *(undefined **)(puVar7 + -8) = puVar29;
    if (lVar12 != 0) {
      lVar22 = (long)*(int *)(lVar12 + 0x14);
      pbVar26 = (byte *)(lVar22 + auVar31._8_8_);
      pbVar25 = (byte *)(lVar22 + lVar20);
      if (lVar19 == 0) {
        uVar9 = *(uint *)(lVar12 + 0x1c);
        if (uVar9 == 1) goto code_r0x0303eacc;
        pbVar21 = (byte *)0x0;
      }
      else {
        pbVar21 = (byte *)(lVar22 + lVar19);
        uVar9 = *(uint *)(lVar12 + 0x1c);
        if (uVar9 == 1) {
          if ((pbVar21 != (byte *)0x0) &&
             (uVar30 = /*UnityEngine.InputSystem.Utilities.MemoryHelpers$$ReadSingleBit*/ func_0x0307bae0(pbVar21,*(undefined4 *)(lVar12 + 0x18),0), (uVar30 & 1) != 0)
             ) {
            return 1;
          }
code_r0x0303eacc:
          uVar9 = /*UnityEngine.InputSystem.Utilities.MemoryHelpers$$ReadSingleBit*/ func_0x0307bae0(pbVar25,*(undefined4 *)(lVar12 + 0x18),0);
          uVar10 = /*UnityEngine.InputSystem.Utilities.MemoryHelpers$$ReadSingleBit*/ func_0x0307bae0(pbVar26,*(undefined4 *)(lVar12 + 0x18),0);
          return (ulong)(uVar9 ^ uVar10 ^ 1);
        }
      }
      uVar10 = *(uint *)(lVar12 + 0x18);
      *(ulong *)(puVar7 + -0x40) = unaff_x24;
      *(long *)(puVar7 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
      *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
      *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
      *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      uVar1 = uVar10 >> 3;
      pbVar27 = (byte *)0x0;
      if (pbVar21 != (byte *)0x0) {
        pbVar27 = pbVar21 + uVar1;
      }
      pbVar2 = pbVar21;
      if (7 < uVar10) {
        uVar10 = uVar10 & 7;
        pbVar26 = pbVar26 + uVar1;
        pbVar25 = pbVar25 + uVar1;
        pbVar2 = pbVar27;
      }
      pbVar27 = pbVar2;
      if (uVar10 != 0) {
        uVar1 = uVar10 + uVar9;
        uVar23 = 0xff >> (ulong)(8 - uVar1 & 0x1f);
        uVar9 = uVar1 - 8;
        if (7 < uVar1) {
          uVar23 = 0xffffffff;
        }
        uVar23 = uVar23 & 0xff << (ulong)(uVar10 & 0x1f);
        if (pbVar2 != (byte *)0x0) {
          pbVar27 = pbVar2 + 1;
          uVar23 = uVar23 & *pbVar2;
        }
        if ((uVar23 & (*pbVar25 ^ *pbVar26)) != 0) {
          return 0;
        }
        if (uVar1 < 9) {
          return 1;
        }
        pbVar26 = pbVar26 + 1;
        pbVar25 = pbVar25 + 1;
      }
      uVar30 = (ulong)(uVar9 >> 3);
      if (7 < uVar9) {
        if (pbVar27 == (byte *)0x0) {
          iVar8 = /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$MemCmp*/ func_0x03279d50(pbVar26,pbVar25,uVar30,0,pbVar21,0);
          if (iVar8 != 0) {
            return 0;
          }
        }
        else {
          lVar12 = 0;
          do {
            if (((pbVar25[lVar12] ^ pbVar26[lVar12]) & pbVar27[lVar12]) != 0) {
              return 0;
            }
            lVar12 = (long)((int)lVar12 + 1);
          } while (lVar12 < (long)uVar30);
        }
      }
      if ((uVar9 & 7) != 0) {
        uVar9 = 0xff >> (ulong)(8 - (uVar9 & 7) & 0x1f);
        if (pbVar27 != (byte *)0x0) {
          uVar9 = uVar9 & pbVar27[uVar30];
        }
        if ((uVar9 & (pbVar25[uVar30] ^ pbVar26[uVar30])) != 0) {
          return 0;
        }
      }
      return 1;
    }
    lVar12 = func_0x00f78af4();
    puVar4 = puVar7 + -0x50;
    *(undefined8 *)(puVar7 + -0x50) = uVar14;
    *(undefined8 *)(puVar7 + -0x48) = uVar18;
    *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x38) =
         &UnityEngine_InputSystem_InputControlExtensions__CheckStateIsAtDefaultIgnoringNoise;
    puVar28 = puVar7 + -0x40;
    if (lVar12 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar15 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d785e0);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar18,0);
      uVar18 = func_0x00f78a24(0x3d585b8);
      puVar29 = &UnityEngine_InputSystem_InputControlExtensions__CheckStateIsAtDefaultIgnoringNoise;
      auVar31 = func_0x00f78ac0(uVar15,uVar18);
      param_4 = lVar19;
    }
    else {
      uVar14 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48();
      uVar14 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar14,0);
      auVar31._8_8_ = uVar14;
      auVar31._0_8_ = lVar12;
      puVar28 = *(undefined1 **)(puVar7 + -0x40);
      puVar29 = *(undefined **)(puVar7 + -0x38);
      puVar4 = puVar7 + -0x30;
      uVar14 = *(undefined8 *)(puVar7 + -0x50);
      uVar15 = *(undefined8 *)(puVar7 + -0x48);
      param_4 = lVar19;
    }
    lVar12 = auVar31._0_8_;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = uVar14;
    *(undefined8 *)(puVar4 + -0x18) = uVar15;
    *(undefined1 **)(puVar4 + -0x10) = puVar28;
    *(undefined **)(puVar4 + -8) = puVar29;
    uVar30 = 0x3ebc000;
    if ((bRam0000000003ebce90 & 1) == 0) {
      func_0x00f78a20(0x3d22870);
      bRam0000000003ebce90 = 1;
    }
    if (lVar12 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar15 = func_0x00f78aec();
      uVar14 = 0x3d785e0;
    }
    else {
      if (auVar31._8_8_ != 0) {
        lVar19 = *(long *)(*(long *)(/*UnityEngine.InputSystem.LowLevel.InputStateBuffers_TypeInfo*/ lRam0000000003d22870 + 0xb8) + 8);
        puVar28 = *(undefined1 **)(puVar4 + -0x10);
        puVar29 = *(undefined **)(puVar4 + -8);
        uVar14 = *(undefined8 *)(puVar4 + -0x20);
        uVar15 = *(undefined8 *)(puVar4 + -0x18);
        unaff_x22 = *(undefined8 *)(puVar4 + -0x30);
        unaff_x21 = *(ulong *)(puVar4 + -0x28);
        goto code_r0x0303e98c;
      }
      func_0x00f78a24(0x3d1fcf0);
      uVar15 = func_0x00f78aec();
      uVar14 = 0x3d7ba40;
    }
    uVar14 = func_0x00f78a24(uVar14);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14,0);
    uVar14 = func_0x00f78a24(0x3d585c0);
    auVar32 = func_0x00f78ac0(uVar15,uVar14);
    lVar20 = auVar32._8_8_;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x58) = 0x3ebc000;
    *(long *)(puVar4 + -0x50) = lVar12;
    *(undefined8 *)(puVar4 + -0x48) = uVar15;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x38) =
         &UnityEngine_InputSystem_InputControlExtensions__CompareStateIgnoringNoise;
    if (auVar32._0_8_ != 0) {
      if (lVar20 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar15 = func_0x00f78aec();
        uVar14 = 0x3d7ba40;
        goto code_r0x0303ed3c;
      }
      uVar14 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48();
      uVar14 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar14,0);
      auVar31._8_8_ = uVar14;
      auVar31._0_8_ = auVar32._0_8_;
      if (cRam0000000003e55068 == '\0') {
        func_0x00f78a20(0x3d22870);
        cRam0000000003e55068 = '\x01';
      }
      lVar19 = *(long *)(*(long *)(/*UnityEngine.InputSystem.LowLevel.InputStateBuffers_TypeInfo*/ lRam0000000003d22870 + 0xb8) + 8);
      puVar28 = *(undefined1 **)(puVar4 + -0x40);
      puVar29 = *(undefined **)(puVar4 + -0x38);
      uVar14 = *(undefined8 *)(puVar4 + -0x50);
      uVar18 = *(undefined8 *)(puVar4 + -0x48);
      puVar7 = puVar4 + -0x30;
      unaff_x22 = *(undefined8 *)(puVar4 + -0x60);
      unaff_x21 = *(ulong *)(puVar4 + -0x58);
      goto code_r0x0303ea68;
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar14 = 0x3d785e0;
code_r0x0303ed3c:
    uVar14 = func_0x00f78a24(uVar14);
    lVar19 = 0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14);
    uVar14 = func_0x00f78a24(0x3d585d0);
    auVar32 = func_0x00f78ac0(uVar15,uVar14);
    lVar20 = auVar32._8_8_;
    *(undefined8 *)(puVar4 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x88) = 0x3ebc000;
    *(long *)(puVar4 + -0x80) = lVar12;
    *(undefined8 *)(puVar4 + -0x78) = uVar15;
    *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x68) = &UnityEngine_InputSystem_InputControlExtensions__CompareState;
    if (auVar32._0_8_ == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar15 = func_0x00f78aec();
      uVar14 = 0x3d785e0;
      goto code_r0x0303edf4;
    }
    if (lVar20 != 0) {
      uVar14 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48();
      uVar14 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar14,0);
      auVar31._8_8_ = uVar14;
      auVar31._0_8_ = auVar32._0_8_;
      puVar28 = *(undefined1 **)(puVar4 + -0x70);
      puVar29 = *(undefined **)(puVar4 + -0x68);
      uVar14 = *(undefined8 *)(puVar4 + -0x80);
      uVar18 = *(undefined8 *)(puVar4 + -0x78);
      puVar7 = puVar4 + -0x60;
      unaff_x22 = *(undefined8 *)(puVar4 + -0x90);
      unaff_x21 = *(ulong *)(puVar4 + -0x88);
      goto code_r0x0303ea68;
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar14 = 0x3d7ba40;
    lVar12 = 0;
code_r0x0303edf4:
    uVar14 = func_0x00f78a24(uVar14);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14,0);
    uVar14 = func_0x00f78a24(0x3d585c8);
    auVar32 = func_0x00f78ac0(uVar15,uVar14);
    plVar13 = auVar32._0_8_;
    *(long *)(puVar4 + -0xb0) = lVar12;
    *(undefined8 *)(puVar4 + -0xa8) = uVar15;
    *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
    *(undefined **)(puVar4 + -0x98) =
         &UnityEngine_InputSystem_InputControlExtensions__HasValueChangeInState;
    if (plVar13 == (long *)0x0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar15 = func_0x00f78aec();
      uVar14 = 0x3d785e0;
    }
    else {
      if (auVar32._8_8_ != 0) {
        uVar14 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48();
        uVar14 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar14,0);
                    /* WARNING: Could not recover jumptable at 0x0303ee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar30 = (**(code **)(*plVar13 + 0x1f8))
                           (plVar13,uVar14,auVar32._8_8_,*(undefined8 *)(*plVar13 + 0x200));
        return uVar30;
      }
      func_0x00f78a24(0x3d1fcf0);
      uVar15 = func_0x00f78aec();
      uVar14 = 0x3d7ba40;
    }
    uVar14 = func_0x00f78a24(uVar14);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14,0);
    uVar14 = func_0x00f78a24(0x3d58600);
    auVar32 = func_0x00f78ac0(uVar15,uVar14);
    lVar19 = auVar32._0_8_;
    puVar5 = puVar4 + -0xe0;
    *(long *)(puVar4 + -0xd0) = lVar12;
    *(undefined8 *)(puVar4 + -200) = uVar15;
    *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0xa0;
    *(undefined **)(puVar4 + -0xb8) =
         &UnityEngine_InputSystem_InputControlExtensions__HasValueChangeInEvent;
    puVar28 = puVar4 + -0xc0;
    *(long *)(puVar4 + -0xd8) = auVar32._8_8_;
    if (lVar19 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      lVar20 = func_0x00f78aec();
      uVar14 = 0x3d785e0;
    }
    else {
      uVar16 = /*UnityEngine.InputSystem.LowLevel.InputEventPtr$$get_valid*/ func_0x0304e4f8(puVar4 + -0xd8,0);
      if ((uVar16 & 1) != 0) {
        auVar32._8_8_ = *(undefined8 *)(puVar4 + -0xd8);
        auVar32._0_8_ = lVar19;
        puVar29 = &UNK_0303ef08;
        puVar7 = puVar4 + -0xe0;
code_r0x0303e564:
        while( true ) {
          lVar20 = auVar32._0_8_;
          puVar5 = puVar7 + -0x30;
          *(long *)(puVar7 + -0x20) = lVar12;
          *(long *)(puVar7 + -0x18) = lVar19;
          *(undefined1 **)(puVar7 + -0x10) = puVar28;
          *(undefined **)(puVar7 + -8) = puVar29;
          puVar28 = puVar7 + -0x10;
          *(long *)(puVar7 + -0x28) = auVar32._8_8_;
          if (lVar20 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar15 = func_0x00f78aec();
            uVar14 = 0x3d785e0;
          }
          else {
            uVar16 = /*UnityEngine.InputSystem.LowLevel.InputEventPtr$$get_valid*/ func_0x0304e4f8(puVar7 + -0x28,0);
            if ((uVar16 & 1) != 0) {
              lVar12 = *(long *)(puVar7 + -0x28);
              auVar33._8_8_ = lVar12;
              auVar33._0_8_ = lVar20;
              uVar16 = /*UnityEngine.InputSystem.LowLevel.InputEventPtr$$get_type*/ func_0x0304e638(puVar7 + -0x28,0);
              uVar16 = uVar16 & 0xffffffff;
              puVar29 = &UNK_0303e5b0;
              goto code_r0x0303efb0;
            }
            func_0x00f78a24(0x3d1fcf0);
            uVar15 = func_0x00f78aec();
            uVar14 = 0x3d79188;
          }
          uVar14 = func_0x00f78a24(uVar14);
          lVar19 = 0;
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14);
          uVar14 = func_0x00f78a24(0x3d585e8);
          auVar32 = func_0x00f78ac0(uVar15,uVar14);
          *(long *)(puVar7 + -0x50) = lVar12;
          *(undefined8 *)(puVar7 + -0x48) = uVar15;
          *(undefined1 **)(puVar7 + -0x40) = puVar28;
          *(undefined **)(puVar7 + -0x38) =
               &UnityEngine_InputSystem_InputControlExtensions__WriteValueFromObjectIntoEvent;
          puVar28 = puVar7 + -0x40;
          if (auVar32._0_8_ == 0) break;
          puVar29 = &UNK_0303e644;
          puVar7 = puVar7 + -0x50;
          lVar12 = auVar32._0_8_;
        }
        func_0x00f78a24(0x3d1fcf0);
        uVar14 = func_0x00f78aec();
        uVar15 = func_0x00f78a24(0x3d785e0);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar15,0);
        uVar15 = func_0x00f78a24(0x3d58648);
        auVar32 = func_0x00f78ac0(uVar14,uVar15);
        plVar13 = auVar32._0_8_;
        puVar6 = puVar7 + -0x80;
        *(undefined8 *)(puVar7 + -0x80) = unaff_x22;
        *(ulong *)(puVar7 + -0x78) = uVar30;
        *(long *)(puVar7 + -0x70) = lVar12;
        *(undefined8 *)(puVar7 + -0x68) = uVar14;
        *(undefined1 **)(puVar7 + -0x60) = puVar28;
        *(undefined **)(puVar7 + -0x58) =
             &UnityEngine_InputSystem_InputControlExtensions__WriteValueIntoState;
        puVar28 = puVar7 + -0x60;
        if (plVar13 == (long *)0x0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar15 = func_0x00f78aec();
          uVar14 = 0x3d785e0;
        }
        else {
          if (auVar32._8_8_ != 0) {
            uVar14 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
            uVar15 = /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Malloc*/ func_0x03279b4c((long)(int)uVar14,8,2,0);
            uVar18 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48(plVar13);
            uVar18 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar18,0);
            (**(code **)(*plVar13 + 0x1c8))
                      (plVar13,uVar18,uVar15,uVar14,*(undefined8 *)(*plVar13 + 0x1d0));
            (**(code **)(*plVar13 + 0x1d8))
                      (plVar13,uVar15,uVar14,auVar32._8_8_,*(undefined8 *)(*plVar13 + 0x1e0));
            puVar28 = *(undefined1 **)(puVar7 + -0x60);
            puVar29 = *(undefined **)(puVar7 + -0x58);
            uVar14 = *(undefined8 *)(puVar7 + -0x70);
            puVar6 = puVar7 + -0x50;
            unaff_x22 = *(undefined8 *)(puVar7 + -0x80);
            uVar30 = *(ulong *)(puVar7 + -0x78);
            uVar18 = *(undefined8 *)(puVar7 + -0x68);
            goto code_r0x03279ba4;
          }
          func_0x00f78a24(0x3d1fcf0);
          uVar15 = func_0x00f78aec();
          uVar14 = 0x3d7ba40;
          lVar12 = 0;
        }
        uVar14 = func_0x00f78a24(uVar14);
        unaff_x21 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14);
        uVar14 = func_0x00f78a24(0x3d58650);
        func_0x00f78ac0(uVar15,uVar14);
        if (extraout_w1 == 1) {
          puVar17 = (undefined8 *)___cxa_begin_catch();
          uVar14 = *puVar17;
          ___cxa_end_catch();
          puVar29 = &UNK_0303e7fc;
          uVar18 = uVar15;
code_r0x03279ba4:
          *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
          *(ulong *)(puVar6 + -0x28) = uVar30;
          *(undefined8 *)(puVar6 + -0x20) = uVar14;
          *(undefined8 *)(puVar6 + -0x18) = uVar18;
          *(undefined1 **)(puVar6 + -0x10) = puVar28;
          *(undefined **)(puVar6 + -8) = puVar29;
          if (pcRam0000000003ec1a70 == (code *)0x0) {
            pcRam0000000003ec1a70 =
                 (code *)func_0x00f789d4(
                                        "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03279bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar30 = (*pcRam0000000003ec1a70)(uVar15,2);
          return uVar30;
        }
        __Unwind_Resume();
        auVar32 = func_0x00f78ac0(lVar12,0);
        lVar19 = auVar32._0_8_;
        puVar4 = puVar7 + -0xd0;
        *(ulong *)(puVar7 + -0xc0) = unaff_x24;
        *(long *)(puVar7 + -0xb8) = unaff_x23;
        *(undefined8 *)(puVar7 + -0xb0) = unaff_x22;
        *(ulong *)(puVar7 + -0xa8) = uVar30;
        *(long *)(puVar7 + -0xa0) = lVar12;
        *(undefined8 *)(puVar7 + -0x98) = uVar15;
        *(undefined1 **)(puVar7 + -0x90) = puVar28;
        *(undefined **)(puVar7 + -0x88) = &UnityEngine_InputSystem_InputControlExtensions__CopyState
        ;
        puVar28 = puVar7 + -0x90;
        unaff_x22 = 0x3ebc000;
        if ((bRam0000000003ebce8f & 1) == 0) {
          func_0x00f78a20(0x3d232c0);
          bRam0000000003ebce8f = 1;
        }
        if (lVar19 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar15 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d78b08);
          lVar19 = 0;
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar14);
          uVar14 = 0;
        }
        else {
          if (0 < (int)unaff_x21) {
            uVar14 = *(undefined8 *)(lVar19 + 0x10);
            *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(lVar19 + 0x18);
            *(undefined8 *)(puVar7 + -0xd0) = uVar14;
            uVar11 = /*UnityEngine.InputSystem.LowLevel.InputStateBlock$$get_alignedSizeInBytes*/ func_0x03060e88(puVar7 + -0xd0,0);
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*System.Math$$Min*/ func_0x02b0210c(unaff_x21 & 0xffffffff,uVar11,0);
            uVar15 = /*UnityEngine.InputSystem.InputControl$$GetDeviceIndex*/ func_0x0303da48(lVar19);
            lVar12 = /*UnityEngine.InputSystem.LowLevel.InputStateBuffers$$GetFrontBufferForDevice*/ func_0x03062de4(uVar15,0);
            uVar30 = /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$MemCpy*/ func_0x03279bf4(auVar32._8_8_,(ulong)*(uint *)(puVar7 + -0xcc) + lVar12,uVar14,
                                     0);
            return uVar30;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar15 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d78090);
          lVar19 = func_0x00f78a24(0x3d78088);
          param_4 = 0;
          /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar15,uVar14);
        }
        uVar18 = func_0x00f78a24(0x3d585d8);
        puVar29 = &UnityEngine_InputSystem_InputControlExtensions__CheckStateIsAtDefault;
        auVar31 = func_0x00f78ac0(uVar15,uVar18);
        goto code_r0x0303e98c;
      }
      func_0x00f78a24(0x3d1fcf0);
      lVar20 = func_0x00f78aec();
      uVar14 = 0x3d79188;
    }
    uVar14 = func_0x00f78a24(uVar14);
    uVar16 = 0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar20,uVar14);
    uVar14 = func_0x00f78a24(0x3d585f8);
    puVar29 = &UnityEngine_InputSystem_InputControlExtensions__GetStatePtrFromStateEventUnchecked;
    auVar33 = func_0x00f78ac0(lVar20,uVar14);
code_r0x0303efb0:
    uVar14 = auVar33._8_8_;
    lVar19 = auVar33._0_8_;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(ulong *)(puVar5 + -0x48) = unaff_x25;
    *(ulong *)(puVar5 + -0x40) = unaff_x24;
    *(long *)(puVar5 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(ulong *)(puVar5 + -0x28) = uVar30;
    *(long *)(puVar5 + -0x20) = lVar12;
    *(long *)(puVar5 + -0x18) = lVar20;
    *(undefined1 **)(puVar5 + -0x10) = puVar28;
    *(undefined **)(puVar5 + -8) = puVar29;
    uVar9 = (uint)uVar16;
    if ((bRam0000000003ebce91 & 1) == 0) {
      func_0x00f78a20(0x3d22248);
      bRam0000000003ebce91 = 1;
    }
    uVar11 = /*UnityEngine.InputSystem.Utilities.FourCC$$op_Implicit*/ func_0x0301d5ac(0x53544154,0);
    iVar8 = /*UnityEngine.InputSystem.Utilities.FourCC$$op_Equality*/ func_0x0301e290(uVar16 & 0xffffffff,uVar11,0);
    if (iVar8 == 0) {
      uVar11 = /*UnityEngine.InputSystem.Utilities.FourCC$$op_Implicit*/ func_0x0301d5ac(0x444c5441,0);
      iVar8 = /*UnityEngine.InputSystem.Utilities.FourCC$$op_Equality*/ func_0x0301e290(uVar16 & 0xffffffff,uVar11,0);
      uVar30 = unaff_x24;
      if (iVar8 != 0) {
        lVar12 = /*UnityEngine.InputSystem.LowLevel.DeltaStateEvent$$FromUnchecked*/ func_0x02fe02fc(uVar14,0);
        if (lVar12 != 0) {
          uVar10 = *(uint *)(lVar12 + 0x14);
          unaff_x24 = (ulong)*(uint *)(lVar12 + 0x18);
          *(uint *)(puVar5 + -0x54) = *(uint *)(lVar12 + 0x18);
          uVar9 = /*UnityEngine.InputSystem.LowLevel.DeltaStateEvent$$get_deltaStateSizeInBytes*/ func_0x02fe0190(lVar12,0);
          lVar12 = /*UnityEngine.InputSystem.LowLevel.DeltaStateEvent$$get_deltaState*/ func_0x02fe01ac(lVar12,0);
          goto code_r0x0303f0bc;
        }
        goto code_r0x0303f200;
      }
code_r0x0303f204:
      *(uint *)(puVar5 + -0x58) = uVar9;
      uVar14 = func_0x00f78a24(0x3d219f8);
      uVar14 = func_0x00f78ae0(uVar14,puVar5 + -0x58);
      uVar15 = func_0x00f78a24(0x3d6c5f0);
      uVar14 = /*System.String$$Format*/ func_0x029bc688(uVar15,uVar14,0);
      func_0x00f78a24(0x3d1fce8);
      uVar15 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d79188);
      /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar15,uVar14,uVar18,0);
      uVar14 = func_0x00f78a24(0x3d585f0);
      func_0x00f78ac0(uVar15,uVar14);
    }
    else {
      lVar12 = /*UnityEngine.InputSystem.LowLevel.StateEvent$$FromUnchecked*/ func_0x030907b8(uVar14,0);
      *(undefined4 *)(puVar5 + -0x54) = 0;
      if (lVar12 == 0) {
code_r0x0303f200:
        func_0x00f78af4();
        uVar30 = unaff_x24;
        goto code_r0x0303f204;
      }
      uVar10 = *(uint *)(lVar12 + 0x14);
      uVar9 = /*UnityEngine.InputSystem.LowLevel.StateEvent$$get_stateSizeInBytes*/ func_0x0309064c(lVar12,0);
      lVar12 = /*UnityEngine.InputSystem.LowLevel.StateEvent$$get_state*/ func_0x03090668(lVar12,0);
      unaff_x24 = 0;
code_r0x0303f0bc:
      unaff_x25 = (ulong)uVar10;
      if ((lVar19 == 0) || (unaff_x23 = *(long *)(lVar19 + 0x78), unaff_x23 == 0))
      goto code_r0x0303f200;
      iVar8 = /*UnityEngine.InputSystem.Utilities.FourCC$$op_Inequality*/ func_0x0301d5b0(unaff_x25,*(undefined4 *)(unaff_x23 + 0x10),0);
      uVar30 = /*UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver_TypeInfo*/ uRam0000000003d22248;
      if (iVar8 == 0) goto code_r0x0303f188;
      if ((*(byte *)(unaff_x23 + 0xd8) >> 1 & 1) == 0) {
        return 0;
      }
      lVar20 = func_0x00f78adc(unaff_x23,/*UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver_TypeInfo*/ uRam0000000003d22248);
      uVar16 = /*UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver_TypeInfo*/ uRam0000000003d22248;
      unaff_x25 = 0x3d22248;
      if (lVar20 != 0) {
        plVar13 = (long *)func_0x00f78adc(unaff_x23,/*UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver_TypeInfo*/ uRam0000000003d22248);
        if (plVar13 == (long *)0x0) goto code_r0x0303f294;
        lVar20 = *plVar13;
        uVar30 = (ulong)*(ushort *)(lVar20 + 0x12a);
        if (uVar30 == 0) goto code_r0x0303f144;
        piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        goto code_r0x0303f12c;
      }
    }
    uVar16 = unaff_x25;
    func_0x00f78e5c(unaff_x23,uVar30);
code_r0x0303f294:
    lVar12 = func_0x00f78e5c(unaff_x23,uVar16);
    return (ulong)(*(byte *)(lVar12 + 0xd8) >> 1 & 1);
  }
  return 0;
  while( true ) {
    piVar24 = piVar24 + 4;
    uVar30 = uVar30 - 1;
    if (uVar30 == 0) break;
code_r0x0303f12c:
    if (*(ulong *)(piVar24 + -2) == uVar16) {
      puVar17 = (undefined8 *)(lVar20 + (long)(*piVar24 + 2) * 0x10 + 0x138);
      goto code_r0x0303f168;
    }
  }
code_r0x0303f144:
  puVar17 = (undefined8 *)func_0x00fac1f0(plVar13,uVar16,2);
code_r0x0303f168:
  iVar8 = (*(code *)*puVar17)(plVar13,lVar19,uVar14,puVar5 + -0x54,puVar17[1]);
  if (iVar8 != 0) {
    unaff_x24 = (ulong)*(uint *)(puVar5 + -0x54);
code_r0x0303f188:
    *(int *)(puVar5 + -0x54) = *(int *)(unaff_x23 + 0x14) + (int)unaff_x24;
    iVar8 = /*UnityEngine.InputSystem.LowLevel.InputStateBlock$$get_effectiveByteOffset*/ func_0x03060e98(lVar19 + 0x10,0);
    uVar10 = *(uint *)(puVar5 + -0x54);
    if (-1 < (long)((long)iVar8 - (ulong)uVar10)) {
      uVar30 = /*UnityEngine.InputSystem.LowLevel.InputStateBlock$$get_alignedSizeInBytes*/ func_0x03060e88(lVar19 + 0x10,0);
      if (((long)iVar8 - (ulong)uVar10) + (uVar30 & 0xffffffff) <= (ulong)uVar9) {
        return lVar12 - *(int *)(puVar5 + -0x54);
      }
      return 0;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x1646da0 | Core.Input.ActionPressManager.DeInit
// ============================================================

void Core_Input_ActionPressManager__DeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x1646da4 | Core.Input.ActionPressManager.AddWatchedAction
// ============================================================

ulong Core_Input_ActionPressManager__AddWatchedAction(long param_1,undefined8 param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong extraout_x1;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined3 uStack_144;
  uint uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined4 uStack_10f;
  undefined3 uStack_10b;
  undefined8 uStack_100;
  long lStack_f8;
  uint *puStack_f0;
  long lStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  uint auStack_c4 [3];
  undefined8 uStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  uint auStack_84 [3];
  uint *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar7 = param_3;
  if ((bRam0000000003eb5761 & 1) == 0) {
    func_0x00f78a20(0x3d2fc38);
    func_0x00f78a20(0x3d2fc48);
    func_0x00f78a20(0x3d39c18);
    func_0x00f78a20(0x3d39c20);
    bRam0000000003eb5761 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar7 = puRam0000000003d2fc48;
    uVar3 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$ContainsKey*/ func_0x01ece954(*(long *)(param_1 + 0x18),param_2);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uStack_40 = 0;
      uStack_34 = SUB84(param_3,0);
      uStack_38 = 0;
      puVar7 = puRam0000000003d39c18;
      uStack_48 = param_2;
      /*System.Collections.Generic.List<ActionState>$$Add*/ func_0x0236a254(*(long *)(param_1 + 0x10),&uStack_48);
      if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
        uVar3 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(*(long *)(param_1 + 0x18),param_2,
                                *(int *)(*(long *)(param_1 + 0x10) + 0x18) + -1,uRam0000000003d2fc38
                               );
        return uVar3;
      }
    }
  }
  auVar11 = func_0x00f78af4();
  lVar6 = auVar11._0_8_;
  auStack_84[1] = 0x3eb5000;
  auStack_84[2] = 0;
  puStack_58 = &Core_Input_ActionPressManager__IsPressed;
  puVar5 = puVar7;
  puStack_78 = param_3;
  lStack_70 = param_1;
  uStack_68 = param_2;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5762 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    bRam0000000003eb5762 = 1;
  }
  auStack_84[0] = 0;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar5 = auStack_84;
    uVar3 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(lVar6 + 0x18),auVar11._8_8_,puVar5,uRam0000000003d2fc68);
    if ((uVar3 & 1) == 0) {
      Core_Input_ActionPressManager__AddWatchedAction(lVar6,auVar11._8_8_,puVar7);
      return 0;
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (puVar7 != (uint *)0x0) {
      uVar3 = (ulong)(int)auStack_84[0];
      if (puVar7[6] <= auStack_84[0]) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(char *)(*(long *)(puVar7 + 4) + uVar3 * 0x18 + 0x28) == '\0') {
        return 0;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar3;
      auVar11 = auVar12 << 0x40;
      if (lVar6 != 0) {
        lVar8 = (long)(int)auStack_84[0];
        if (*(uint *)(lVar6 + 0x18) <= auStack_84[0]) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        return (ulong)(*(char *)(*(long *)(lVar6 + 0x10) + lVar8 * 0x18 + 0x30) == '\0');
      }
    }
  }
  auVar12 = func_0x00f78af4();
  lVar8 = auVar12._8_8_;
  lVar6 = auVar12._0_8_;
  auStack_c4[1] = 0x3eb5000;
  auStack_c4[2] = 0;
  puStack_98 = &Core_Input_ActionPressManager__WasPressedThisFrame;
  puStack_b0 = puVar7;
  ppuStack_a0 = &puStack_60;
  if ((bRam0000000003eb5763 & 1) == 0) {
    uStack_b8 = auVar11._8_8_;
    uStack_a8 = auVar11._0_8_;
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    auVar11._8_8_ = uStack_b8;
    auVar11._0_8_ = uStack_a8;
    bRam0000000003eb5763 = 1;
  }
  uStack_b8 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  auStack_c4[0] = 0;
  if (*(long *)(lVar6 + 0x18) != 0) {
    uVar3 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(lVar6 + 0x18),lVar8,auStack_c4,uRam0000000003d2fc68);
    auVar11._8_8_ = uStack_b8;
    auVar11._0_8_ = uStack_a8;
    if ((uVar3 & 1) == 0) {
      Core_Input_ActionPressManager__AddWatchedAction(lVar6,lVar8,puVar5);
      return 0;
    }
    lVar9 = *(long *)(lVar6 + 0x10);
    puVar5 = (uint *)0x0;
    if (lVar9 != 0) {
      lVar8 = (long)(int)auStack_c4[0];
      if (*(uint *)(lVar9 + 0x18) <= auStack_c4[0]) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      auVar11._8_8_ = uStack_b8;
      auVar11._0_8_ = uStack_a8;
      if (*(char *)(*(long *)(lVar9 + 0x10) + lVar8 * 0x18 + 0x28) == '\0') {
        return 0;
      }
      lVar9 = *(long *)(lVar6 + 0x10);
      puVar5 = (uint *)0x0;
      if (lVar9 != 0) {
        lVar8 = (long)(int)auStack_c4[0];
        if (*(uint *)(lVar9 + 0x18) <= auStack_c4[0]) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        auVar11._8_8_ = uStack_b8;
        auVar11._0_8_ = uStack_a8;
        if (*(char *)(*(long *)(lVar9 + 0x10) + lVar8 * 0x18 + 0x30) != '\0') {
          return 0;
        }
        lVar9 = *(long *)(lVar6 + 0x10);
        puVar5 = (uint *)0x0;
        if (lVar9 != 0) {
          lVar8 = (long)(int)auStack_c4[0];
          if (*(uint *)(lVar9 + 0x18) <= auStack_c4[0]) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          return (ulong)(*(int *)(*(long *)(lVar9 + 0x10) + lVar8 * 0x18 + 0x2c) ==
                        *(int *)(lVar6 + 0x20));
        }
      }
    }
  }
  uStack_b8 = auVar11._8_8_;
  uStack_a8 = auVar11._0_8_;
  auVar11 = func_0x00f78af4();
  lVar9 = auVar11._0_8_;
  uStack_100 = 0x3eb5000;
  puStack_d8 = &Core_Input_ActionPressManager__Consume;
  uVar3 = auVar11._8_8_;
  lStack_f8 = lVar8;
  puStack_f0 = puVar5;
  lStack_e8 = lVar6;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb5764 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    func_0x00f78a20(0x3d39c30);
    bRam0000000003eb5764 = 1;
    uVar3 = extraout_x1;
  }
  uStack_124 = 0;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar3;
  auVar13 = auVar13 << 0x40;
  if (*(long *)(lVar9 + 0x18) != 0) {
    auVar13 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(lVar9 + 0x18),auVar11._8_8_,&uStack_124,uRam0000000003d2fc68
                             );
    uVar2 = uStack_124;
    uVar3 = auVar13._0_8_;
    if (auVar13._0_4_ == 0) {
      return uVar3;
    }
    lVar6 = *(long *)(lVar9 + 0x10);
    if (lVar6 != 0) {
      uVar10 = (ulong)uStack_124;
      lVar8 = lVar6;
      if (*(uint *)(lVar6 + 0x18) <= uStack_124) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0,uVar10);
        lVar8 = *(long *)(lVar9 + 0x10);
        uVar10 = (ulong)uStack_124;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      auVar13 = auVar1 << 0x40;
      if (lVar8 != 0) {
        lVar6 = *(long *)(lVar6 + 0x10) + (long)(int)uVar2 * 0x18;
        uStack_118 = *(undefined8 *)(lVar6 + 0x28);
        uStack_120 = *(undefined8 *)(lVar6 + 0x20);
        uStack_144 = (undefined3)((uint)*(undefined4 *)(lVar6 + 0x34) >> 8);
        uStack_10f = *(undefined4 *)(lVar6 + 0x31);
        uStack_110 = 1;
        uStack_10b = uStack_144;
        /*System.Collections.Generic.List<ActionState>$$set_Item*/ func_0x02369ecc(lVar8,uVar10,&uStack_120,uRam0000000003d39c30);
        return uVar3;
      }
    }
  }
  uVar3 = func_0x00f78af4(auVar13._0_8_,auVar13._8_8_);
  if ((bRam0000000003eb5766 & 1) == 0) {
    func_0x00f78a20(0x3d2fc30);
    func_0x00f78a20(0x3d1c4a0);
    func_0x00f78a20(0x3d39c10);
    func_0x00f78a20(0x3d1d790);
    bRam0000000003eb5766 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ActionState>_TypeInfo*/ uRam0000000003d1d790);
  /*System.Collections.Generic.List<ActionState>$$.ctor*/ func_0x023695f4(uVar4,0x80,uRam0000000003d39c10);
  *(undefined8 *)(uVar3 + 0x10) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
  /*System.Collections.Generic.Dictionary<string, int>$$.ctor*/ func_0x01ece1cc(uVar4,0x80,uRam0000000003d2fc30);
  *(undefined8 *)(uVar3 + 0x18) = uVar4;
  return uVar3;
}



// ============================================================
// RVA: 0x1646e90 | Core.Input.ActionPressManager.IsPressed
// ============================================================

ulong Core_Input_ActionPressManager__IsPressed(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong extraout_x1;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined3 uStack_f4;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined4 uStack_bf;
  undefined3 uStack_bb;
  undefined8 uStack_b0;
  long lStack_a8;
  uint *puStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  uint auStack_74 [3];
  long lStack_68;
  uint *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  uint uStack_34;
  
  puVar4 = param_3;
  if ((bRam0000000003eb5762 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    bRam0000000003eb5762 = 1;
  }
  uStack_34 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar4 = &uStack_34;
    uVar2 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(param_1 + 0x18),param_2,puVar4,uRam0000000003d2fc68);
    if ((uVar2 & 1) == 0) {
      Core_Input_ActionPressManager__AddWatchedAction(param_1,param_2,param_3);
      return 0;
    }
    param_3 = *(uint **)(param_1 + 0x10);
    if (param_3 != (uint *)0x0) {
      param_2 = (long)(int)uStack_34;
      if (param_3[6] <= uStack_34) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(char *)(*(long *)(param_3 + 4) + param_2 * 0x18 + 0x28) == '\0') {
        return 0;
      }
      lVar5 = *(long *)(param_1 + 0x10);
      param_1 = 0;
      if (lVar5 != 0) {
        lVar6 = (long)(int)uStack_34;
        if (*(uint *)(lVar5 + 0x18) <= uStack_34) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        return (ulong)(*(char *)(*(long *)(lVar5 + 0x10) + lVar6 * 0x18 + 0x30) == '\0');
      }
    }
  }
  auVar9 = func_0x00f78af4();
  lVar6 = auVar9._8_8_;
  lVar5 = auVar9._0_8_;
  auStack_74[1] = 0x3eb5000;
  auStack_74[2] = 0;
  puStack_48 = &Core_Input_ActionPressManager__WasPressedThisFrame;
  lStack_68 = param_2;
  puStack_60 = param_3;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5763 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    bRam0000000003eb5763 = 1;
  }
  auStack_74[0] = 0;
  if (*(long *)(lVar5 + 0x18) != 0) {
    uVar2 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(lVar5 + 0x18),lVar6,auStack_74,uRam0000000003d2fc68);
    if ((uVar2 & 1) == 0) {
      Core_Input_ActionPressManager__AddWatchedAction(lVar5,lVar6,puVar4);
      return 0;
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    puVar4 = (uint *)0x0;
    if (lVar7 != 0) {
      lVar6 = (long)(int)auStack_74[0];
      if (*(uint *)(lVar7 + 0x18) <= auStack_74[0]) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(char *)(*(long *)(lVar7 + 0x10) + lVar6 * 0x18 + 0x28) == '\0') {
        return 0;
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      puVar4 = (uint *)0x0;
      if (lVar7 != 0) {
        lVar6 = (long)(int)auStack_74[0];
        if (*(uint *)(lVar7 + 0x18) <= auStack_74[0]) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(char *)(*(long *)(lVar7 + 0x10) + lVar6 * 0x18 + 0x30) != '\0') {
          return 0;
        }
        lVar7 = *(long *)(lVar5 + 0x10);
        puVar4 = (uint *)0x0;
        if (lVar7 != 0) {
          lVar6 = (long)(int)auStack_74[0];
          if (*(uint *)(lVar7 + 0x18) <= auStack_74[0]) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          return (ulong)(*(int *)(*(long *)(lVar7 + 0x10) + lVar6 * 0x18 + 0x2c) ==
                        *(int *)(lVar5 + 0x20));
        }
      }
    }
  }
  auVar9 = func_0x00f78af4();
  lVar7 = auVar9._0_8_;
  uStack_b0 = 0x3eb5000;
  puStack_88 = &Core_Input_ActionPressManager__Consume;
  uVar2 = auVar9._8_8_;
  lStack_a8 = lVar6;
  puStack_a0 = puVar4;
  lStack_98 = lVar5;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb5764 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    func_0x00f78a20(0x3d39c30);
    bRam0000000003eb5764 = 1;
    uVar2 = extraout_x1;
  }
  uStack_d4 = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar10 = auVar10 << 0x40;
  if (*(long *)(lVar7 + 0x18) != 0) {
    auVar10 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(lVar7 + 0x18),auVar9._8_8_,&uStack_d4,uRam0000000003d2fc68);
    uVar1 = uStack_d4;
    uVar2 = auVar10._0_8_;
    if (auVar10._0_4_ == 0) {
      return uVar2;
    }
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 != 0) {
      uVar8 = (ulong)uStack_d4;
      lVar6 = lVar5;
      if (*(uint *)(lVar5 + 0x18) <= uStack_d4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0,uVar8);
        lVar6 = *(long *)(lVar7 + 0x10);
        uVar8 = (ulong)uStack_d4;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar8;
      auVar10 = auVar9 << 0x40;
      if (lVar6 != 0) {
        lVar5 = *(long *)(lVar5 + 0x10) + (long)(int)uVar1 * 0x18;
        uStack_c8 = *(undefined8 *)(lVar5 + 0x28);
        uStack_d0 = *(undefined8 *)(lVar5 + 0x20);
        uStack_f4 = (undefined3)((uint)*(undefined4 *)(lVar5 + 0x34) >> 8);
        uStack_bf = *(undefined4 *)(lVar5 + 0x31);
        uStack_c0 = 1;
        uStack_bb = uStack_f4;
        /*System.Collections.Generic.List<ActionState>$$set_Item*/ func_0x02369ecc(lVar6,uVar8,&uStack_d0,uRam0000000003d39c30);
        return uVar2;
      }
    }
  }
  uVar2 = func_0x00f78af4(auVar10._0_8_,auVar10._8_8_);
  if ((bRam0000000003eb5766 & 1) == 0) {
    func_0x00f78a20(0x3d2fc30);
    func_0x00f78a20(0x3d1c4a0);
    func_0x00f78a20(0x3d39c10);
    func_0x00f78a20(0x3d1d790);
    bRam0000000003eb5766 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ActionState>_TypeInfo*/ uRam0000000003d1d790);
  /*System.Collections.Generic.List<ActionState>$$.ctor*/ func_0x023695f4(uVar3,0x80,uRam0000000003d39c10);
  *(undefined8 *)(uVar2 + 0x10) = uVar3;
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
  /*System.Collections.Generic.Dictionary<string, int>$$.ctor*/ func_0x01ece1cc(uVar3,0x80,uRam0000000003d2fc30);
  *(undefined8 *)(uVar2 + 0x18) = uVar3;
  return uVar2;
}



// ============================================================
// RVA: 0x1646fa0 | Core.Input.ActionPressManager.WasPressedThisFrame
// ============================================================

ulong Core_Input_ActionPressManager__WasPressedThisFrame
                (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong extraout_x1;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined3 uStack_b4;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined3 uStack_7b;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  uint uStack_34;
  
  if ((bRam0000000003eb5763 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    bRam0000000003eb5763 = 1;
  }
  uStack_34 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(param_1 + 0x18),param_2,&uStack_34,uRam0000000003d2fc68);
    if ((uVar2 & 1) == 0) {
      Core_Input_ActionPressManager__AddWatchedAction(param_1,param_2,param_3);
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    param_3 = 0;
    if (lVar5 != 0) {
      param_2 = (long)(int)uStack_34;
      if (*(uint *)(lVar5 + 0x18) <= uStack_34) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(char *)(*(long *)(lVar5 + 0x10) + param_2 * 0x18 + 0x28) == '\0') {
        return 0;
      }
      lVar5 = *(long *)(param_1 + 0x10);
      param_3 = 0;
      if (lVar5 != 0) {
        param_2 = (long)(int)uStack_34;
        if (*(uint *)(lVar5 + 0x18) <= uStack_34) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(char *)(*(long *)(lVar5 + 0x10) + param_2 * 0x18 + 0x30) != '\0') {
          return 0;
        }
        lVar5 = *(long *)(param_1 + 0x10);
        param_3 = 0;
        if (lVar5 != 0) {
          lVar6 = (long)(int)uStack_34;
          if (*(uint *)(lVar5 + 0x18) <= uStack_34) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          return (ulong)(*(int *)(*(long *)(lVar5 + 0x10) + lVar6 * 0x18 + 0x2c) ==
                        *(int *)(param_1 + 0x20));
        }
      }
    }
  }
  auVar8 = func_0x00f78af4();
  lVar5 = auVar8._0_8_;
  uStack_70 = 0x3eb5000;
  puStack_48 = &Core_Input_ActionPressManager__Consume;
  uVar2 = auVar8._8_8_;
  lStack_68 = param_2;
  uStack_60 = param_3;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5764 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    func_0x00f78a20(0x3d39c30);
    bRam0000000003eb5764 = 1;
    uVar2 = extraout_x1;
  }
  uStack_94 = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar9 = auVar9 << 0x40;
  if (*(long *)(lVar5 + 0x18) != 0) {
    auVar9 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(lVar5 + 0x18),auVar8._8_8_,&uStack_94,uRam0000000003d2fc68);
    uVar1 = uStack_94;
    uVar2 = auVar9._0_8_;
    if (auVar9._0_4_ == 0) {
      return uVar2;
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 != 0) {
      uVar7 = (ulong)uStack_94;
      lVar3 = lVar6;
      if (*(uint *)(lVar6 + 0x18) <= uStack_94) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0,uVar7);
        lVar3 = *(long *)(lVar5 + 0x10);
        uVar7 = (ulong)uStack_94;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar7;
      auVar9 = auVar8 << 0x40;
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar6 + 0x10) + (long)(int)uVar1 * 0x18;
        uStack_88 = *(undefined8 *)(lVar5 + 0x28);
        uStack_90 = *(undefined8 *)(lVar5 + 0x20);
        uStack_b4 = (undefined3)((uint)*(undefined4 *)(lVar5 + 0x34) >> 8);
        uStack_7f = *(undefined4 *)(lVar5 + 0x31);
        uStack_80 = 1;
        uStack_7b = uStack_b4;
        /*System.Collections.Generic.List<ActionState>$$set_Item*/ func_0x02369ecc(lVar3,uVar7,&uStack_90,uRam0000000003d39c30);
        return uVar2;
      }
    }
  }
  uVar2 = func_0x00f78af4(auVar9._0_8_,auVar9._8_8_);
  if ((bRam0000000003eb5766 & 1) == 0) {
    func_0x00f78a20(0x3d2fc30);
    func_0x00f78a20(0x3d1c4a0);
    func_0x00f78a20(0x3d39c10);
    func_0x00f78a20(0x3d1d790);
    bRam0000000003eb5766 = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ActionState>_TypeInfo*/ uRam0000000003d1d790);
  /*System.Collections.Generic.List<ActionState>$$.ctor*/ func_0x023695f4(uVar4,0x80,uRam0000000003d39c10);
  *(undefined8 *)(uVar2 + 0x10) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
  /*System.Collections.Generic.Dictionary<string, int>$$.ctor*/ func_0x01ece1cc(uVar4,0x80,uRam0000000003d2fc30);
  *(undefined8 *)(uVar2 + 0x18) = uVar4;
  return uVar2;
}



// ============================================================
// RVA: 0x16470e8 | Core.Input.ActionPressManager.Consume
// ============================================================

long Core_Input_ActionPressManager__Consume(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong extraout_x1;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined3 uStack_74;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined4 uStack_3f;
  undefined3 uStack_3b;
  
  uVar7 = param_2;
  if ((bRam0000000003eb5764 & 1) == 0) {
    func_0x00f78a20(0x3d2fc68);
    func_0x00f78a20(0x3d39c28);
    func_0x00f78a20(0x3d39c30);
    bRam0000000003eb5764 = 1;
    uVar7 = extraout_x1;
  }
  uStack_54 = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar7;
  auVar8 = auVar8 << 0x40;
  if (*(long *)(param_1 + 0x18) != 0) {
    auVar8 = /*System.Collections.Generic.Dictionary<string, int>$$TryGetValue*/ func_0x01ed02e4(*(long *)(param_1 + 0x18),param_2,&uStack_54,uRam0000000003d2fc68);
    uVar2 = uStack_54;
    lVar4 = auVar8._0_8_;
    if (auVar8._0_4_ == 0) {
      return lVar4;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar7 = (ulong)uStack_54;
      lVar3 = lVar6;
      if (*(uint *)(lVar6 + 0x18) <= uStack_54) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0,uVar7);
        lVar3 = *(long *)(param_1 + 0x10);
        uVar7 = (ulong)uStack_54;
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      auVar8 = auVar1 << 0x40;
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar6 + 0x10) + (long)(int)uVar2 * 0x18;
        uStack_48 = *(undefined8 *)(lVar6 + 0x28);
        uStack_50 = *(undefined8 *)(lVar6 + 0x20);
        uStack_74 = (undefined3)((uint)*(undefined4 *)(lVar6 + 0x34) >> 8);
        uStack_3f = *(undefined4 *)(lVar6 + 0x31);
        uStack_40 = 1;
        uStack_3b = uStack_74;
        /*System.Collections.Generic.List<ActionState>$$set_Item*/ func_0x02369ecc(lVar3,uVar7,&uStack_50,uRam0000000003d39c30);
        return lVar4;
      }
    }
  }
  lVar4 = func_0x00f78af4(auVar8._0_8_,auVar8._8_8_);
  if ((bRam0000000003eb5766 & 1) == 0) {
    func_0x00f78a20(0x3d2fc30);
    func_0x00f78a20(0x3d1c4a0);
    func_0x00f78a20(0x3d39c10);
    func_0x00f78a20(0x3d1d790);
    bRam0000000003eb5766 = 1;
  }
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ActionState>_TypeInfo*/ uRam0000000003d1d790);
  /*System.Collections.Generic.List<ActionState>$$.ctor*/ func_0x023695f4(uVar5,0x80,uRam0000000003d39c10);
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
  /*System.Collections.Generic.Dictionary<string, int>$$.ctor*/ func_0x01ece1cc(uVar5,0x80,uRam0000000003d2fc30);
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  return lVar4;
}



// ============================================================
// RVA: 0x1647210 | Core.Input.ActionPressManager..ctor
// ============================================================

undefined1  [16] Core_Input_ActionPressManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5766 & 1) == 0) {
    func_0x00f78a20(0x3d2fc30);
    func_0x00f78a20(0x3d1c4a0);
    func_0x00f78a20(0x3d39c10);
    func_0x00f78a20(0x3d1d790);
    bRam0000000003eb5766 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<ActionState>_TypeInfo*/ uRam0000000003d1d790);
  /*System.Collections.Generic.List<ActionState>$$.ctor*/ func_0x023695f4(uVar1,0x80,uRam0000000003d39c10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, int>_TypeInfo*/ uRam0000000003d1c4a0);
  /*System.Collections.Generic.Dictionary<string, int>$$.ctor*/ func_0x01ece1cc(uVar1,0x80,uRam0000000003d2fc30);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



