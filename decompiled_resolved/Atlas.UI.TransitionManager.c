// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.TransitionManager

// ============================================================
// RVA: 0x1511a60 | Atlas.UI.TransitionManager.get_IsTransitionFullyVisible
// ============================================================

bool Atlas_UI_TransitionManager__get_IsTransitionFullyVisible(long param_1)

{
  return *(int *)(param_1 + 0x30) == 2;
}



// ============================================================
// RVA: 0x1511a70 | Atlas.UI.TransitionManager.get_IsTransitionEnding
// ============================================================

bool Atlas_UI_TransitionManager__get_IsTransitionEnding(long param_1)

{
  return *(int *)(param_1 + 0x30) == 3;
}



// ============================================================
// RVA: 0x1511a80 | Atlas.UI.TransitionManager.get_IsTransitionVisible
// ============================================================

bool Atlas_UI_TransitionManager__get_IsTransitionVisible(long param_1)

{
  return *(int *)(param_1 + 0x30) != 0;
}



// ============================================================
// RVA: 0x1511a90 | Atlas.UI.TransitionManager.get_IsTransitionHidden
// ============================================================

bool Atlas_UI_TransitionManager__get_IsTransitionHidden(long param_1)

{
  return *(int *)(param_1 + 0x30) == 0;
}



// ============================================================
// RVA: 0x1511aa0 | Atlas.UI.TransitionManager.Init
// ============================================================

void Atlas_UI_TransitionManager__Init
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d78 & 1) == 0) {
    func_0x00f78a20(0x3d28098);
    func_0x00f78a20(0x3d5e640);
    func_0x00f78a20(0x3d41568);
    func_0x00f78a20(0x3d1ead0);
    func_0x00f78a20(0x3d41668);
    func_0x00f78a20(0x3d41660);
    func_0x00f78a20(0x3d1eb68);
    func_0x00f78a20(0x3d41798);
    func_0x00f78a20(0x3d1eb78);
    func_0x00f78a20(0x3d417b0);
    func_0x00f78a20(0x3d1eb80);
    bRam0000000003eb4d78 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent<int, string, Sprite>_TypeInfo*/ uRam0000000003d1eb80);
  /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$.ctor*/ func_0x01b85f00(uVar1,uRam0000000003d417b0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent<int, Sprite>_TypeInfo*/ uRam0000000003d1eb78);
  /*UnityEngine.Events.UnityEvent<int, Sprite>$$.ctor*/ func_0x01b854d0(uVar1,uRam0000000003d41798);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  lVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent<bool>_TypeInfo*/ uRam0000000003d1eb68);
  /*UnityEngine.Events.UnityEvent<bool>$$.ctor*/ func_0x01b827c0(lVar2,uRam0000000003d41660);
  *(long *)(param_1 + 0x48) = lVar2;
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
  /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar1,param_1,uRam0000000003d5e640,uRam0000000003d41568);
  if (lVar2 != 0) {
    /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar2,uVar1,uRam0000000003d41668);
    lVar2 = func_0x00f78aec(/*Atlas.UI.Screens.MaskTransitionScreen.TransitionData_TypeInfo*/ uRam0000000003d28098);
    Atlas_UI_Screens_MaskTransitionScreen_TransitionData___ctor(lVar2,0);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(lVar2 + 0x10) = uVar1;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(lVar2 + 0x28) = param_5;
      if (*(long *)(param_1 + 0x18) != 0) {
        Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen
                  (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                   *(undefined4 *)(param_1 + 0x20),lVar2,0);
        *(undefined1 *)(param_1 + 0x10) = 1;
        return;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x1511cb0 | Atlas.UI.TransitionManager.DeInit
// ============================================================

void Atlas_UI_TransitionManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x1511ccc | Atlas.UI.TransitionManager.Update
// ============================================================

void Atlas_UI_TransitionManager__Update(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d79 & 1) == 0) {
    func_0x00f78a20(0x3d253d0);
    bRam0000000003eb4d79 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.TransitionManager_TypeInfo*/ lRam0000000003d253d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.TransitionManager_TypeInfo*/ lRam0000000003d253d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(undefined8 **)(/*Atlas.UI.TransitionManager_TypeInfo*/ lRam0000000003d253d0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x1511d44 | Atlas.UI.TransitionManager.StartTransitionSequence
// ============================================================

undefined8
Atlas_UI_TransitionManager__StartTransitionSequence
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d7a & 1) == 0) {
    func_0x00f78a20(0x3d417c0);
    bRam0000000003eb4d7a = 1;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(int *)(param_1 + 0x30) != 0 && param_5 == 0)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 1) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$Invoke*/ func_0x01b86208(*(long *)(param_1 + 0x38),param_2,param_3,param_4,uRam0000000003d417c0);
    }
    /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
    uVar1 = 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1511e00 | Atlas.UI.TransitionManager.SetState
// ============================================================

void Atlas_UI_TransitionManager__SetState(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x30) != param_2) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  return;
}



// ============================================================
// RVA: 0x1511e14 | Atlas.UI.TransitionManager.IsReady
// ============================================================

ulong Atlas_UI_TransitionManager__IsReady
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar10;
  undefined8 uVar11;
  int iVar9;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong unaff_x19;
  uint uVar22;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar23;
  undefined8 unaff_x28;
  undefined1 *puVar24;
  code *pcVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong auStack_c8 [11];
  
  puVar4 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x18) == 0) {
    auVar26 = func_0x00f78af4();
    lVar10 = auVar26._0_8_;
    if ((bRam0000000003eb4d7b & 1) == 0) {
      func_0x00f78a20(0x3d417a8);
      bRam0000000003eb4d7b = 1;
    }
    if ((*(char *)(lVar10 + 0x10) == '\0') || (*(int *)(lVar10 + 0x30) != 2 && param_4 == 0)) {
      uVar17 = 0;
    }
    else {
      if (*(int *)(lVar10 + 0x30) != 3) {
        *(undefined4 *)(lVar10 + 0x30) = 3;
      }
      if (*(long *)(lVar10 + 0x40) != 0) {
        /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar10 + 0x40),auVar26._8_8_,param_3,uRam0000000003d417a8);
      }
      /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
      uVar17 = 1;
    }
    return uVar17;
  }
  uVar22 = *(uint *)(param_1 + 0x20);
  uVar17 = 0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  if (lVar10 == 0) {
    auVar26 = func_0x00f78af4();
    puVar23 = &stack0xffffffffffffffe0;
    lVar10 = *(long *)(auVar26._0_8_ + 0x10);
    auVar26._8_8_ = auVar26._8_8_;
    auVar26._0_8_ = lVar10;
    if (lVar10 != 0) {
      uVar16 = 0;
      pcVar25 = Atlas_UI_AtlasUIManager__GetLayerState;
      goto code_r0x02f884dc;
    }
    auVar26 = func_0x00f78af4();
    puVar24 = &stack0xffffffffffffffd0;
    lVar10 = *(long *)(auVar26._0_8_ + 0x10);
    auVar27._8_8_ = auVar26._8_8_;
    auVar27._0_8_ = lVar10;
    if (lVar10 == 0) {
      auVar26 = func_0x00f78af4();
      lVar10 = *(long *)(auVar26._0_8_ + 0x10);
      auVar28._8_8_ = auVar26._8_8_;
      auVar28._0_8_ = lVar10;
      if (lVar10 == 0) {
        uVar17 = func_0x00f78af4();
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar11,uRam0000000003d2fb80);
        *(undefined8 *)(uVar17 + 0x30) = uVar11;
        return uVar17;
      }
      puVar6 = &stack0xffffffffffffffd0;
      pcVar25 = Atlas_UI_AtlasUIManager__SetScreenVisible;
      goto code_r0x02f88674;
    }
    puVar5 = &stack0xffffffffffffffe0;
    pcVar25 = Atlas_UI_AtlasUIManager__EnableInput;
    uVar16 = uVar17;
    lVar10 = unaff_x21;
  }
  else {
    uVar16 = 0;
    puVar4 = &stack0xffffffffffffffd0;
    unaff_x21 = 0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    if (((int)uVar22 < 0) || (*(int *)(lVar10 + 0x50) <= (int)uVar22)) {
      return 0;
    }
    lVar10 = *(long *)(lVar10 + 0x70);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= uVar22) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar20 = *(long *)(lVar10 + 0x10) + (ulong)uVar22 * 0x28;
      lVar10 = *(long *)(lVar20 + 0x28);
      cVar2 = *(char *)(lVar20 + 0x40);
      iVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar20 + 0x30),0);
      if (iVar9 == 0 || cVar2 != '\0') {
        return 0;
      }
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x4c) != 2)) {
        return 0;
      }
      return 1;
    }
    pcVar25 = (code *)&Core_UI2_UIManager__GetLayerState;
    auVar26 = func_0x00f78af4();
    unaff_x20 = 0;
    unaff_x19 = (ulong)uVar22;
code_r0x02f884dc:
    puVar5 = puVar4 + -0x30;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(ulong *)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar4 + -8) = pcVar25;
    puVar23 = puVar4 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar10 = *(long *)(auVar26._0_8_ + 0x70);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= auVar26._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)auVar26._8_4_ * 0x28 + 0x28);
      if (lVar10 == 0) {
        uVar17 = 4;
      }
      else {
        uVar17 = (ulong)*(uint *)(lVar10 + 0x4c);
      }
      return uVar17;
    }
    pcVar25 = (code *)&Core_UI2_UIManager__EnableInput;
    auVar27 = func_0x00f78af4();
    unaff_x20 = 0;
    unaff_x19 = auVar26._8_8_;
    lVar10 = 0x3ebc000;
  }
  uVar11 = auVar27._8_8_;
  unaff_x21 = auVar27._0_8_;
  puVar6 = puVar5 + -0x40;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = lVar10;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(ulong *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar23;
  *(code **)(puVar5 + -8) = pcVar25;
  puVar24 = puVar5 + -0x10;
  unaff_x22 = 0x3ebc000;
  uVar17 = uVar16;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(unaff_x21 + 0x68) != 0) {
    uVar17 = (ulong)((uint)uVar16 ^ 1);
    uVar14 = /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x68),uVar11,uVar17,0);
    lVar10 = *(long *)(unaff_x21 + 0x70);
    unaff_x22 = 0;
    if (lVar10 != 0) {
      uVar22 = auVar27._8_4_;
      if (*(uint *)(lVar10 + 0x18) <= uVar22) {
        uVar14 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar22 * 0x28 + 0x28) == 0) ||
         (unaff_x22 = *(ulong *)(unaff_x21 + 0x30), unaff_x22 == 0)) {
        return uVar14;
      }
      lVar10 = *(long *)(unaff_x21 + 0x70);
      unaff_x21 = 0;
      if (lVar10 != 0) {
        if (*(uint *)(lVar10 + 0x18) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar15 = *(long **)(*(long *)(lVar10 + 0x10) + (long)(int)uVar22 * 0x28 + 0x28);
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
        *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
        *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
        *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        *(ulong *)(puVar5 + -0x68) = unaff_x22;
        lVar10 = *(long *)(unaff_x22 + 0x68);
        if (lVar10 == 0) {
          puVar23 = puVar5 + -0x68;
          lVar20 = 1;
        }
        else {
          lVar20 = *(long *)(lVar10 + 0x18);
          if (lVar20 == 0) {
            return unaff_x22;
          }
          puVar23 = (undefined1 *)(lVar10 + 0x20);
        }
        lVar10 = 0;
        do {
          lVar18 = *(long *)(puVar23 + lVar10 * 8);
          pcVar25 = *(code **)(lVar18 + 0x10);
          plVar1 = *(long **)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar18 + 0x28);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18);
          }
          iVar9 = func_0x00f78a4c(lVar18);
          bVar7 = *(char *)(lVar18 + 0x4a) == '\x03';
          if (iVar9 == 0) {
            if (bVar7) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                uVar17 = (*pcVar25)(plVar15,uVar11,uVar16,lVar18);
              }
              else {
                if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(unaff_x22 + 0x18) == 0)) goto code_r0x01e71aac;
                iVar9 = func_0x00f78a44(lVar18);
                iVar8 = func_0x00f78ec0(lVar18);
                if (iVar9 == 0) {
                  uVar3 = *(ushort *)(lVar18 + 0x48);
                  if (iVar8 == 0) {
                    lVar18 = *plVar1 + (ulong)uVar3 * 0x10;
                    uVar17 = (**(code **)(lVar18 + 0x138))
                                       (plVar1,plVar15,uVar11,uVar16,*(undefined8 *)(lVar18 + 0x140)
                                       );
                    goto code_r0x01e71bd0;
                  }
                  lVar18 = func_0x00f78a48(lVar18);
                  lVar19 = *plVar1;
                  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
                  if (uVar17 != 0) {
                    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == lVar18) {
                        puVar13 = (undefined8 *)
                                  (lVar19 + (long)(int)(*piVar21 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar21 = piVar21 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar25 = (code *)*puVar13;
                  puVar13 = (undefined8 *)puVar13[1];
                }
                else {
                  if (iVar8 == 0) {
                    uVar12 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar19 = *plVar1;
                    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    if (uVar17 != 0) {
                      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
                          lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar21 = piVar21 + 4;
                        uVar17 = uVar17 - 1;
                      } while (uVar17 != 0);
                    }
                    lVar19 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar12 = *(undefined8 *)(lVar19 + 8);
                  }
                  puVar13 = (undefined8 *)func_0x00f78acc(uVar12,lVar18);
                  pcVar25 = (code *)*puVar13;
                }
                uVar17 = (*pcVar25)(plVar1,plVar15,uVar11,uVar16,puVar13);
              }
            }
            else {
              if ((*(short *)(lVar18 + 0x48) == -1) || (*(long *)(unaff_x22 + 0x18) == 0))
              goto code_r0x01e71bbc;
              iVar9 = func_0x00f78a44(lVar18);
              iVar8 = func_0x00f78ec0(lVar18);
              if (iVar9 == 0) {
                uVar3 = *(ushort *)(lVar18 + 0x48);
                if (iVar8 == 0) {
                  lVar18 = *plVar15 + (ulong)uVar3 * 0x10;
                  uVar17 = (**(code **)(lVar18 + 0x138))
                                     (plVar15,uVar11,uVar16,*(undefined8 *)(lVar18 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar18 = func_0x00f78a48(lVar18);
                lVar19 = *plVar15;
                uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
                if (uVar17 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == lVar18) {
                      puVar13 = (undefined8 *)
                                (lVar19 + (long)(int)(*piVar21 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar21 = piVar21 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                puVar13 = (undefined8 *)func_0x00fac1f0(plVar15,lVar18,(ulong)uVar3);
code_r0x01e71d00:
                pcVar25 = (code *)*puVar13;
                puVar13 = (undefined8 *)puVar13[1];
              }
              else {
                if (iVar8 == 0) {
                  uVar12 = *(undefined8 *)
                            (*plVar15 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar19 = *plVar15;
                  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
                  if (uVar17 != 0) {
                    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
                        lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar21 = piVar21 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  lVar19 = func_0x00fac1f0(plVar15);
code_r0x01e71cd8:
                  uVar12 = *(undefined8 *)(lVar19 + 8);
                }
                puVar13 = (undefined8 *)func_0x00f78acc(uVar12,lVar18);
                pcVar25 = (code *)*puVar13;
              }
              uVar17 = (*pcVar25)(plVar15,uVar11,uVar16,puVar13);
            }
          }
          else {
            if (bVar7) goto code_r0x01e71bbc;
code_r0x01e71aac:
            uVar17 = (*pcVar25)(plVar1,plVar15,uVar11,uVar16,lVar18);
          }
code_r0x01e71bd0:
          lVar10 = lVar10 + 1;
          if (lVar10 == lVar20) {
            return uVar17;
          }
        } while( true );
      }
    }
  }
  pcVar25 = (code *)&Core_UI2_UIManager__SetScreenVisible;
  auVar28 = func_0x00f78af4();
  unaff_x19 = uVar16;
  unaff_x20 = uVar11;
code_r0x02f88674:
  uVar14 = auVar28._0_8_;
  *(ulong *)(puVar6 + -0x30) = unaff_x22;
  *(long *)(puVar6 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar6 + -0x20) = unaff_x20;
  *(ulong *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar24;
  *(code **)(puVar6 + -8) = pcVar25;
  uVar16 = uVar14;
  if ((bRam0000000003ebc652 & 1) == 0) {
    uVar16 = func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar10 = *(long *)(uVar14 + 0x70);
  if (lVar10 != 0) {
    uVar22 = auVar28._8_4_;
    if (*(uint *)(lVar10 + 0x18) <= uVar22) {
      uVar16 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar22 * 0x28 + 0x28) == 0) {
      return uVar16;
    }
    lVar10 = *(long *)(uVar14 + 0x70);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= uVar22) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar22 * 0x28 + 0x28);
      if ((lVar10 != 0) && (plVar15 = *(long **)(lVar10 + 0x28), plVar15 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar17 = (**(code **)(*plVar15 + 0x178))(plVar15,uVar17,*(undefined8 *)(*plVar15 + 0x180));
        return uVar17;
      }
    }
  }
  auVar26 = func_0x00f78af4();
  uVar11 = auVar26._0_8_;
  *(long *)(puVar6 + -0x50) = auVar28._8_8_;
  *(ulong *)(puVar6 + -0x48) = uVar17;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  *(undefined8 *)(puVar6 + -0x70) = 0;
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  uVar17 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar11,auVar26._8_8_,puVar6 + -0x70);
  if ((int)uVar17 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar11,*(undefined8 *)(puVar6 + -0x60),*(undefined8 *)(puVar6 + -0x58));
    *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x68);
    *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x58);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x60);
    uVar17 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar11,puVar6 + -0x90,1);
  }
  return uVar17;
}



// ============================================================
// RVA: 0x1511e3c | Atlas.UI.TransitionManager.EndTransitionSequence
// ============================================================

undefined8
Atlas_UI_TransitionManager__EndTransitionSequence
          (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d7b & 1) == 0) {
    func_0x00f78a20(0x3d417a8);
    bRam0000000003eb4d7b = 1;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(int *)(param_1 + 0x30) != 2 && param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 3) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(param_1 + 0x40),param_2,param_3,uRam0000000003d417a8);
    }
    /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
    uVar1 = 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1511ef0 | Atlas.UI.TransitionManager.WaitUntilFullyVisible
// ============================================================

long Atlas_UI_TransitionManager__WaitUntilFullyVisible(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4d7c & 1) == 0) {
    func_0x00f78a20(0x3d293b0);
    bRam0000000003eb4d7c = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25_TypeInfo*/ uRam0000000003d293b0);
  /*Atlas.UI.TransitionManager.<WaitUntilFullyVisible>d__25$$.ctor*/ func_0x0156b608(lVar1,0,0);
  if (lVar1 == 0) {
    auVar3 = func_0x00f78af4();
    lVar1 = auVar3._0_8_;
    if ((auVar3._8_8_ & 1) == 0) {
      if (*(int *)(lVar1 + 0x30) == 3) {
        uVar2 = 0;
      }
      else {
        if (*(int *)(lVar1 + 0x30) != 1) {
          return lVar1;
        }
        uVar2 = 2;
      }
      *(undefined4 *)(lVar1 + 0x30) = uVar2;
    }
    return lVar1;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined4 *)(lVar1 + 0x28) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x1511f74 | Atlas.UI.TransitionManager.IsAnimationPlaying
// ============================================================

void Atlas_UI_TransitionManager__IsAnimationPlaying(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x30) == 3) {
      uVar1 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 1) {
        return;
      }
      uVar1 = 2;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  return;
}



// ============================================================
// RVA: 0x1511fa0 | Atlas.UI.TransitionManager..ctor
// ============================================================

void Atlas_UI_TransitionManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1511fa8 | Atlas.UI.TransitionManager..cctor
// ============================================================

void Atlas_UI_TransitionManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d7d & 1) == 0) {
    func_0x00f78a20(0x3d253d0);
    func_0x00f78a20(0x3d75148);
    bRam0000000003eb4d7d = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('TransitionManager.Update()')*/ uRam0000000003d75148,1,0,0,0);
  **(undefined8 **)(/*Atlas.UI.TransitionManager_TypeInfo*/ lRam0000000003d253d0 + 0xb8) = uVar1;
  return;
}



