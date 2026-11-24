// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndContext

// ============================================================
// RVA: 0x15876d4 | Atlas.FrontEnd.FrontEndContext.GetContextName
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndContext__GetContextName(void)

{
  if ((bRam0000000003eb50e7 & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb50e7 = 1;
  }
  return /*STR('FrontEndContext')*/ uRam0000000003d6d050;
}



// ============================================================
// RVA: 0x1587718 | Atlas.FrontEnd.FrontEndContext.get_FrontEndScene
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndContext__get_FrontEndScene(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



// ============================================================
// RVA: 0x1587720 | Atlas.FrontEnd.FrontEndContext.get_SingleplayerState
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndContext__get_SingleplayerState(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x1587728 | Atlas.FrontEnd.FrontEndContext.OnInit
// ============================================================

long Atlas_FrontEnd_FrontEndContext__OnInit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb50e8 & 1) == 0) {
    func_0x00f78a20(0x3d275e8);
    bRam0000000003eb50e8 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContext.<OnInit>d__41_TypeInfo*/ uRam0000000003d275e8);
  /*Atlas.FrontEnd.FrontEndContext.<OnInit>d__41$$.ctor*/ func_0x0154db64(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return lVar1;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb50e9 & 1) == 0) {
    func_0x00f78a20(0x3d275f0);
    bRam0000000003eb50e9 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42_TypeInfo*/ uRam0000000003d275f0);
  /*Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42$$.ctor*/ func_0x0154e56c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    return lVar1;
  }
  auVar4 = func_0x00f78af4();
  uVar2 = auVar4._8_8_;
  lVar1 = *(long *)(auVar4._0_8_ + 0x118);
  if (lVar1 != 0) {
    /*Atlas.FrontEnd.FrontEndScene$$Update*/ func_0x01587870(lVar1,uVar2);
  }
  lVar1 = *(long *)(auVar4._0_8_ + 0xa8);
  if (lVar1 != 0) {
    if ((bRam0000000003eba4f5 & 1) == 0) {
      func_0x00f78a20(0x3d24d40,uVar2,0);
      bRam0000000003eba4f5 = 1;
    }
    if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
    lVar1 = *(long *)(lVar1 + 0x18);
    if (lVar1 != 0) {
      /*Core.StateManagement.State$$Update*/ func_0x02b94f7c(lVar1,uVar2);
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*pcRam0000000003ec05a0)(uVar3);
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x15877b0 | Atlas.FrontEnd.FrontEndContext.OnPostInit
// ============================================================

long Atlas_FrontEnd_FrontEndContext__OnPostInit(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb50e9 & 1) == 0) {
    func_0x00f78a20(0x3d275f0);
    bRam0000000003eb50e9 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42_TypeInfo*/ uRam0000000003d275f0);
  /*Atlas.FrontEnd.FrontEndContext.<OnPostInit>d__42$$.ctor*/ func_0x0154e56c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  auVar4 = func_0x00f78af4();
  uVar2 = auVar4._8_8_;
  lVar1 = *(long *)(auVar4._0_8_ + 0x118);
  if (lVar1 != 0) {
    /*Atlas.FrontEnd.FrontEndScene$$Update*/ func_0x01587870(lVar1,uVar2);
  }
  lVar1 = *(long *)(auVar4._0_8_ + 0xa8);
  if (lVar1 != 0) {
    if ((bRam0000000003eba4f5 & 1) == 0) {
      func_0x00f78a20(0x3d24d40,uVar2,0);
      bRam0000000003eba4f5 = 1;
    }
    if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
    lVar1 = *(long *)(lVar1 + 0x18);
    if (lVar1 != 0) {
      /*Core.StateManagement.State$$Update*/ func_0x02b94f7c(lVar1,uVar2);
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*pcRam0000000003ec05a0)(uVar3);
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x1587824 | Atlas.FrontEnd.FrontEndContext.OnUpdate
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnUpdate(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x118) != 0) {
    /*Atlas.FrontEnd.FrontEndScene$$Update*/ func_0x01587870(*(long *)(param_1 + 0x118),param_2);
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if ((bRam0000000003eba4f5 & 1) == 0) {
      func_0x00f78a20(0x3d24d40,param_2,0);
      bRam0000000003eba4f5 = 1;
    }
    if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
    lVar1 = *(long *)(lVar1 + 0x18);
    if (lVar1 != 0) {
      /*Core.StateManagement.State$$Update*/ func_0x02b94f7c(lVar1,param_2);
    }
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
  return;
}



// ============================================================
// RVA: 0x1587cfc | Atlas.FrontEnd.FrontEndContext.OnLateUpdate
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnLateUpdate(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x118);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x88) != '\0') {
      uStack_18 = param_2;
      /*Atlas.FrontEnd.FrontEndScene$$LateUpdateKarts*/ func_0x01593dec(lVar1,&uStack_18);
    }
  }
  return;
}



// ============================================================
// RVA: 0x1587d5c | Atlas.FrontEnd.FrontEndContext.OnDeInit
// ============================================================

long Atlas_FrontEnd_FrontEndContext__OnDeInit(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb50ea & 1) == 0) {
    func_0x00f78a20(0x3d275e0);
    bRam0000000003eb50ea = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45_TypeInfo*/ uRam0000000003d275e0);
  /*Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45$$.ctor*/ func_0x0154d8bc(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  lVar2 = *(long *)(lVar1 + 0x118);
  if (lVar2 != 0) {
    lVar1 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar1 = /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar2 + 0x80),0);
    }
    *(undefined8 *)(lVar2 + 0x80) = 0;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x1587dd0 | Atlas.FrontEnd.FrontEndContext.DeInitEditor
// ============================================================

void Atlas_FrontEnd_FrontEndContext__DeInitEditor(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x118);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x80) != 0) {
      /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(lVar1 + 0x80),0);
    }
    *(undefined8 *)(lVar1 + 0x80) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x1587e34 | Atlas.FrontEnd.FrontEndContext.SetScreenHandlePartyInvite
// ============================================================

void Atlas_FrontEnd_FrontEndContext__SetScreenHandlePartyInvite(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x160) = param_2;
  return;
}



// ============================================================
// RVA: 0x1587e3c | Atlas.FrontEnd.FrontEndContext.InitStates
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1589a5c | Atlas.FrontEnd.FrontEndContext.DeInitStates
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_FrontEnd_FrontEndContext__DeInitStates(long param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *unaff_x25;
  undefined8 *puVar27;
  undefined8 unaff_x26;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulong uStack_2a0;
  ulong uStack_298;
  ulong *puStack_290;
  undefined8 uStack_288;
  undefined8 ****ppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  ulong *puStack_260;
  undefined8 uStack_258;
  undefined8 ****ppppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  ulong *puStack_230;
  undefined8 uStack_228;
  undefined8 ****ppppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ****ppppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ****ppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ****ppppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong *puStack_170;
  undefined8 uStack_168;
  undefined8 ****ppppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined1 ****ppppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  uVar10 = 0x3d1b6e0;
  uVar26 = 0x3d1b6e0;
  uVar25 = 0x3d2a5a8;
  if ((bRam0000000003eb50ec & 1) == 0) {
    func_0x00f78a20(0x3d2a138);
    func_0x00f78a20(0x3d2a038);
    func_0x00f78a20(0x3d1b4a0);
    func_0x00f78a20(0x3d1b420);
    func_0x00f78a20(0x3d2a5a8);
    func_0x00f78a20(0x3d1b6e0);
    func_0x00f78a20(0x3d56b68);
    func_0x00f78a20(0x3d56b78);
    func_0x00f78a20(0x3d56b80);
    bRam0000000003eb50ec = 1;
  }
  lVar23 = *(long *)(param_1 + 0xb0);
  uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
  uVar11 = uRam0000000003d2a5a8;
  /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
  if (lVar23 != 0) {
    unaff_x27 = 0x3d1b000;
    uVar28 = 0x3d56b78;
    unaff_x25 = (undefined8 *)0x3d2a000;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState(lVar23,uVar12);
    lVar23 = *(long *)(param_1 + 0xb0);
    uVar12 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    uVar11 = uRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar12,param_1,uRam0000000003d56b78);
    unaff_x26 = 0x3d56b78;
    if (lVar23 != 0) {
      Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout(lVar23,uVar12);
      lVar23 = *(long *)(param_1 + 0xb8);
      uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
      uVar11 = uRam0000000003d2a5a8;
      /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
      if (lVar23 != 0) {
        Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState(lVar23,uVar12);
        lVar23 = *(long *)(param_1 + 0xc0);
        uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
        uVar11 = uRam0000000003d2a5a8;
        /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
        unaff_x26 = uVar28;
        if (lVar23 != 0) {
          unaff_x28 = 0x3d1b000;
          unaff_x27 = 0x3d56000;
          puVar27 = (undefined8 *)0x3d2a038;
          Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed(lVar23,uVar12);
          lVar23 = *(long *)(param_1 + 0xc0);
          uVar12 = func_0x00f78aec(/*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420);
          uVar11 = uRam0000000003d2a038;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar12,param_1,uRam0000000003d56b68);
          unaff_x25 = (undefined8 *)0x3d2a038;
          if (lVar23 != 0) {
            Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected(lVar23,uVar12);
            lVar23 = *(long *)(param_1 + 0xc0);
            uVar12 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
            uVar11 = uRam0000000003d2a138;
            /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar12,param_1,uRam0000000003d56b78);
            if (lVar23 != 0) {
              Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout(lVar23,uVar12);
              lVar23 = *(long *)(param_1 + 200);
              uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
              uVar11 = uRam0000000003d2a5a8;
              /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
              unaff_x25 = puVar27;
              if (lVar23 != 0) {
                Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent
                          (lVar23,uVar12);
                lVar23 = *(long *)(param_1 + 0xd0);
                uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                uVar11 = uRam0000000003d2a5a8;
                /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                if (lVar23 != 0) {
                  Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState
                            (lVar23,uVar12);
                  lVar23 = *(long *)(param_1 + 0xd8);
                  uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                  uVar11 = uRam0000000003d2a5a8;
                  /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                  if (lVar23 != 0) {
                    Atlas_Contexts_FrontendContextPostSingleplayerState__remove_OnExitPostEvent
                              (lVar23,uVar12,0);
                    lVar23 = *(long *)(param_1 + 0xd8);
                    uVar12 = func_0x00f78aec(/*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420);
                    uVar11 = uRam0000000003d2a038;
                    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar12,param_1,uRam0000000003d56b68);
                    if (lVar23 != 0) {
                      Atlas_Contexts_FrontendContextPostSingleplayerState__remove_OnPlayAgain
                                (lVar23,uVar12,0);
                      lVar23 = *(long *)(param_1 + 0xe0);
                      uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                      uVar11 = uRam0000000003d2a5a8;
                      /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                      if (lVar23 != 0) {
                        Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState
                                  (lVar23,uVar12);
                        lVar23 = *(long *)(param_1 + 0xe8);
                        uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                        uVar11 = uRam0000000003d2a5a8;
                        /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                        if (lVar23 != 0) {
                          Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState
                                    (lVar23,uVar12);
                          lVar23 = *(long *)(param_1 + 0xf0);
                          uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                          uVar11 = uRam0000000003d2a5a8;
                          /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                          if (lVar23 != 0) {
                            Atlas_Contexts_FrontendContextCharacterRankState__remove_TransitionFromState
                                      (lVar23,uVar12,0);
                            lVar23 = *(long *)(param_1 + 0xf8);
                            uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                            uVar11 = uRam0000000003d2a5a8;
                            /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                            if (lVar23 != 0) {
                              Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState
                                        (lVar23,uVar12);
                              lVar23 = *(long *)(param_1 + 0x100);
                              uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                              uVar11 = uRam0000000003d2a5a8;
                              /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                              if (lVar23 != 0) {
                                Atlas_Contexts_VotingState__remove_RequestState(lVar23,uVar12,0);
                                lVar23 = *(long *)(param_1 + 0x108);
                                uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
                                uVar11 = uRam0000000003d2a5a8;
                                /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,param_1,uRam0000000003d56b80);
                                if (lVar23 != 0) {
                                  if ((bRam0000000003eb4c03 & 1) == 0) {
                                    func_0x00f78a20(0x3d1b6e0,uVar12,0);
                                    bRam0000000003eb4c03 = 1;
                                  }
                                  puVar22 = (ulong *)(lVar23 + 0x78);
                                  uVar11 = *puVar22;
                                  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar12,0),
                                         plVar8 == (long *)0x0 || (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))
                                        ) {
                                    uVar9 = func_0x00ff0f44(puVar22,plVar8,uVar11);
                                    bVar5 = uVar11 == uVar9;
                                    uVar11 = uVar9;
                                    if (bVar5) {
                                      return uVar9;
                                    }
                                  }
                                  auVar35 = func_0x00f78e5c(plVar8);
                                  lVar14 = auVar35._8_8_;
                                  lVar23 = auVar35._0_8_;
                                  if ((bRam0000000003eb4c04 & 1) == 0) {
                                    func_0x00f78a20(0x3d55090);
                                    func_0x00f78a20(0x3d550b8);
                                    func_0x00f78a20(0x3d550c8);
                                    func_0x00f78a20(0x3d55150);
                                    func_0x00f78a20(0x3d551b0);
                                    func_0x00f78a20(0x3d551d0);
                                    func_0x00f78a20(0x3d28a00);
                                    func_0x00f78a20(0x3d40650);
                                    bRam0000000003eb4c04 = 1;
                                  }
                                  if (lVar14 != 0) {
                                    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar14,uRam0000000003d550b8);
                                    *(undefined8 *)(lVar23 + 0x88) = uVar10;
                                    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar14,uRam0000000003d551b0);
                                    *(undefined8 *)(lVar23 + 0x90) = uVar10;
                                    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar14,uRam0000000003d55150);
                                    *(undefined8 *)(lVar23 + 0x80) = uVar10;
                                    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar14,uRam0000000003d55090);
                                    *(undefined8 *)(lVar23 + 0x98) = uVar10;
                                    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar14,uRam0000000003d551d0);
                                    *(undefined8 *)(lVar23 + 0xa0) = uVar10;
                                    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar14,uRam0000000003d550c8);
                                    *(undefined8 *)(lVar23 + 0xa8) = uVar10;
                                    uVar10 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsStateData_TypeInfo*/ uRam0000000003d28a00);
                                    Atlas_Contexts_RoundResultsState_RoundResultsStateData___ctor
                                              (uVar10,0);
                                    *(undefined8 *)(lVar23 + 0x68) = uVar10;
                                    uVar11 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar23,uRam0000000003d40650);
                                    if ((uVar11 != 0) && (*(long *)(uVar11 + 0x10) != 0)) {
                                      *(undefined4 *)(*(long *)(uVar11 + 0x10) + 0x10) = 2;
                                      return uVar11;
                                    }
                                  }
                                  uVar11 = func_0x00f78af4();
                                  *(undefined8 *)(uVar11 + 0xa0) = 0;
                                  *(undefined8 *)(uVar11 + 0x88) = 0;
                                  *(undefined8 *)(uVar11 + 0x80) = 0;
                                  *(undefined8 *)(uVar11 + 0x98) = 0;
                                  *(undefined8 *)(uVar11 + 0x90) = 0;
                                  return uVar11;
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
      }
    }
  }
  auVar35 = func_0x00f78af4();
  uVar28 = auVar35._8_8_;
  uStack_90 = 0x3d56b80;
  pcStack_68 = Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState;
  uStack_88 = uVar12;
  uStack_80 = 0;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5113 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5113 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar28,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar12 = auVar35._8_8_;
  uStack_c0 = 0x3d1b6e0;
  pcStack_98 = Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout;
  uStack_b8 = uVar9;
  puStack_b0 = puVar22;
  uStack_a8 = uVar28;
  ppuStack_a0 = &puStack_70;
  if ((bRam0000000003eb5115 & 1) == 0) {
    func_0x00f78a20(0x3d1b4a0);
    bRam0000000003eb5115 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x80);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar12,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar28 = auVar35._8_8_;
  uStack_f0 = 0x3d1b4a0;
  pcStack_c8 = Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState;
  uStack_e8 = uVar9;
  puStack_e0 = puVar22;
  uStack_d8 = uVar12;
  pppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb5107 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5107 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar28,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar12 = auVar35._8_8_;
  uStack_120 = 0x3d1b6e0;
  pcStack_f8 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed;
  uStack_118 = uVar9;
  puStack_110 = puVar22;
  uStack_108 = uVar28;
  ppppuStack_100 = &pppuStack_d0;
  if ((bRam0000000003eb50f7 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb50f7 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x80);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar12,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar28 = auVar35._8_8_;
  uStack_150 = 0x3d1b6e0;
  pcStack_128 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected;
  uStack_148 = uVar9;
  puStack_140 = puVar22;
  uStack_138 = uVar12;
  ppppuStack_130 = &ppppuStack_100;
  if ((bRam0000000003eb50f5 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb50f5 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar28,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar12 = auVar35._8_8_;
  uStack_180 = 0x3d1b420;
  pcStack_158 = Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
  uStack_178 = uVar9;
  puStack_170 = puVar22;
  uStack_168 = uVar28;
  ppppuStack_160 = &ppppuStack_130;
  if ((bRam0000000003eb50f9 & 1) == 0) {
    func_0x00f78a20(0x3d1b4a0);
    bRam0000000003eb50f9 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x88);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar12,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar28 = auVar35._8_8_;
  uStack_1b0 = 0x3d1b4a0;
  pcStack_188 = Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
  uStack_1a8 = uVar9;
  puStack_1a0 = puVar22;
  uStack_198 = uVar12;
  ppppuStack_190 = &ppppuStack_160;
  if ((bRam0000000003eb5130 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5130 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar28,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar12 = auVar35._8_8_;
  uStack_1e0 = 0x3d1b6e0;
  pcStack_1b8 = Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
  uStack_1d8 = uVar9;
  puStack_1d0 = puVar22;
  uStack_1c8 = uVar28;
  ppppuStack_1c0 = &ppppuStack_190;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar12,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar28 = auVar35._8_8_;
  uStack_210 = 0x3d1b6e0;
  pcStack_1e8 = Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  uStack_208 = uVar9;
  puStack_200 = puVar22;
  uStack_1f8 = uVar12;
  ppppuStack_1f0 = &ppppuStack_1c0;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar28,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar12 = auVar35._8_8_;
  uStack_240 = 0x3d1b6e0;
  pcStack_218 = Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  uStack_238 = uVar9;
  puStack_230 = puVar22;
  uStack_228 = uVar28;
  ppppuStack_220 = &ppppuStack_1f0;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar12,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  uVar28 = auVar35._8_8_;
  uStack_270 = 0x3d1b6e0;
  pcStack_248 = Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_268 = uVar9;
  puStack_260 = puVar22;
  uStack_258 = uVar12;
  ppppuStack_250 = &ppppuStack_220;
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  puVar22 = (ulong *)(auVar35._0_8_ + 0x78);
  uVar9 = *puVar22;
  while( true ) {
    iVar18 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar28);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar13 = func_0x00ff0f44(puVar22,plVar8,uVar9);
    bVar5 = uVar9 == uVar13;
    uVar9 = uVar13;
    if (bVar5) {
      return uVar13;
    }
  }
  auVar35 = func_0x00f78e5c(plVar8);
  lVar23 = auVar35._8_8_;
  puVar3 = &uStack_2a0;
  uStack_2a0 = 0x3d1b6e0;
  puStack_278 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_298 = uVar9;
  puStack_290 = puVar22;
  uStack_288 = uVar28;
  ppppuStack_280 = &ppppuStack_250;
  if ((bRam0000000003eb50ed & 1) == 0) {
    func_0x00f78a20(0x3d27618);
    func_0x00f78a20(0x3d5d988);
    bRam0000000003eb50ed = 1;
  }
  uVar9 = 0x3eb5000;
  if (lVar23 == 0) {
code_r0x0158a62c:
    auVar36 = func_0x00f78af4();
    uVar13 = uVar11;
    uVar24 = 0x3d1b6e0;
    pppppuVar30 = &ppppuStack_280;
    puVar31 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar35;
  }
  else {
    iVar6 = Atlas_FrontEnd_EventInfo__get_Multiplayer(lVar23);
    auVar1._8_8_ = puStack_290;
    auVar1._0_8_ = uStack_288;
    if (iVar6 != 0) {
      uVar13 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      iVar18 = 0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(uVar13,lVar23)
      ;
      lVar23 = lRam0000000003d5d988;
      lVar14 = *(long *)(auVar35._0_8_ + 0xa8);
      uVar9 = uVar13;
      if (lVar14 != 0) {
        uVar11 = uVar13;
        if ((bRam0000000003eb668b & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb668b = 1;
        }
        uVar10 = **(undefined8 **)(lVar23 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
        auVar36._8_8_ = puStack_290;
        auVar36._0_8_ = uStack_288;
        if (lVar14 == 0) {
          auVar35 = func_0x00f78af4();
          plVar8 = auVar35._8_8_;
          lVar23 = auVar35._0_8_;
          if ((bRam0000000003eb668c & 1) == 0) {
            func_0x00f78a20(0x3d220f0);
            func_0x00f78a20(0x3d22180);
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb668c = 1;
          }
          if (plVar8 == (long *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar10 = func_0x00f78aec();
            uVar25 = func_0x00f78a24(0x3d7c5e8);
            /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar10,uVar25,0);
            uVar25 = func_0x00f78a24(0x3d5da50);
            func_0x00f78ac0(uVar10,uVar25);
          }
          else {
            if (lVar23 == 0) {
              lVar23 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            lVar14 = **(long **)(uVar11 + 0x30);
            if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar14);
            }
            lVar19 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar9 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar14) {
                  puVar27 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x018e1828;
                }
                piVar21 = piVar21 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,lVar14,0);
code_r0x018e1828:
            plVar8 = (long *)(*(code *)*puVar27)(plVar8,puVar27[1]);
            if (plVar8 != (long *)0x0) {
              lVar14 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar9 != 0) {
                piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar27 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x018e1890;
                  }
                  piVar21 = piVar21 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
              uVar9 = (*(code *)*puVar27)(plVar8,puVar27[1]);
              if ((uVar9 & 1) == 0) {
                uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
                if (plVar8 != (long *)0x0) {
                  lVar23 = *plVar8;
                  uVar9 = (ulong)*(ushort *)(lVar23 + 0x12a);
                  if (uVar9 != 0) {
                    piVar21 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar27 = (undefined8 *)(lVar23 + (long)*piVar21 * 0x10 + 0x138);
                        goto code_r0x018e1bc4;
                      }
                      piVar21 = piVar21 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
                  (*(code *)*puVar27)(plVar8,puVar27[1]);
                }
                return uVar11;
              }
              lVar14 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
              lVar19 = *(long *)(*(long *)(uVar11 + 0x30) + 8);
              if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar19);
              }
              lVar20 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar9 != 0) {
                piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar19) {
                    puVar27 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x018e1934;
                  }
                  piVar21 = piVar21 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,lVar19,0);
code_r0x018e1934:
              lVar19 = (*(code *)*puVar27)(plVar8,puVar27[1]);
              if (lVar19 != 0) {
                lVar19 = *(long *)(*(long *)(uVar11 + 0x30) + 8);
                if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar19);
                }
                lVar20 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar9 != 0) {
                  piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == lVar19) {
                      puVar27 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                      goto code_r0x018e19a8;
                    }
                    piVar21 = piVar21 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,lVar19,0);
code_r0x018e19a8:
                plVar17 = (long *)(*(code *)*puVar27)(plVar8,puVar27[1]);
                if (plVar17 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                lVar19 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
                if (lVar19 != 0) {
                  if (lVar14 == 0) {
                    func_0x00f78af4();
                    goto code_r0x018e1c64;
                  }
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar19,0);
                }
              }
code_r0x018e19dc:
              do {
                lVar19 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar19 + 0x12a);
                if (uVar9 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                      puVar27 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                      goto code_r0x018e1a28;
                    }
                    piVar21 = piVar21 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
                uVar9 = (*(code *)*puVar27)(plVar8,puVar27[1]);
                if ((uVar9 & 1) == 0) {
                  uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar14,0);
                  goto joined_r0x018e1920;
                }
                if (lVar14 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar23,0);
                lVar19 = *(long *)(*(long *)(uVar11 + 0x30) + 8);
                if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar19);
                }
                lVar20 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar9 != 0) {
                  piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == lVar19) {
                      puVar27 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                      goto code_r0x018e1ab0;
                    }
                    piVar21 = piVar21 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,lVar19,0);
code_r0x018e1ab0:
                lVar19 = (*(code *)*puVar27)(plVar8,puVar27[1]);
              } while (lVar19 == 0);
              lVar19 = *(long *)(*(long *)(uVar11 + 0x30) + 8);
              if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar19);
              }
              lVar20 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar9 != 0) {
                piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar19) {
                    puVar27 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x018e1b24;
                  }
                  piVar21 = piVar21 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar27 = (undefined8 *)func_0x00fac1f0(plVar8,lVar19,0);
code_r0x018e1b24:
              plVar17 = (long *)(*(code *)*puVar27)(plVar8,puVar27[1]);
              if (plVar17 != (long *)0x0) {
                lVar19 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
                if (lVar19 != 0) {
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar19,0);
                }
                goto code_r0x018e19dc;
              }
              func_0x00f78af4();
              goto code_r0x018e1c64;
            }
          }
          func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x18e1c68);
          (*pcVar2)();
        }
        iVar18 = 1;
        puVar4 = &uStack_270;
        uVar12 = 0x3d1b6e0;
        uVar28 = 0x3d2a5a8;
        uVar11 = uStack_298;
        uVar24 = uStack_2a0;
        pppppuVar30 = (undefined8 *****)ppppuStack_280;
        puVar31 = puStack_278;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_270;
    uVar13 = uVar11;
    uVar9 = uStack_298;
    uVar24 = uStack_2a0;
    pppppuVar30 = (undefined8 *****)ppppuStack_280;
    puVar31 = puStack_278;
    auVar36 = auVar35;
  }
  lVar19 = auVar36._8_8_;
  lVar23 = auVar36._0_8_;
  puVar4 = (undefined8 *)((long)puVar3 + -0xf0);
  *(undefined8 *)((long)puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
  *(undefined8 **)((long)puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar3 + -0x40) = 0x3d1b6e0;
  *(undefined8 *)((long)puVar3 + -0x38) = 0x3d2a5a8;
  *(ulong *)((long)puVar3 + -0x30) = uVar24;
  *(ulong *)((long)puVar3 + -0x28) = uVar9;
  *(long *)((long)puVar3 + -0x20) = auVar1._8_8_;
  *(long *)((long)puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar30;
  *(undefined **)((long)puVar3 + -8) = puVar31;
  if ((bRam0000000003eb50ee & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d57510);
    func_0x00f78a20(0x3d3ae58);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ee = 1;
  }
  *(undefined8 *)((long)puVar3 + -0x68) = 0;
  uVar11 = 0x3eb5000;
  uVar28 = 0x3d2a5a8;
  uVar12 = uVar10;
  if ((*(long *)(lVar23 + 0x38) != 0) && (lVar19 != 0)) {
    uVar29 = 0x3d21270;
    uVar11 = *(ulong *)(*(long *)(lVar23 + 0x38) + 0x10);
    uVar24 = *(ulong *)(lVar19 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar24,0);
    uVar28 = uVar25;
    uVar12 = uVar26;
    unaff_x26 = 0x3d21270;
    if (uVar11 != 0) {
      uVar25 = uRam0000000003d57288;
      uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(uVar11,uVar15);
      iVar18 = (int)uVar25;
      if (*(long *)(lVar23 + 0x38) != 0) {
        uVar24 = *(ulong *)(*(long *)(lVar23 + 0x38) + 0x10);
        uVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(lVar19 + 0x20),0);
        uVar11 = uVar9;
        unaff_x26 = uVar29;
        if (uVar24 != 0) {
          uVar25 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(uVar24,uVar25,uRam0000000003d572d8);
          iVar18 = 0;
          uVar16 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(uVar9,uVar25);
          if (uVar16 != 0) {
            uVar25 = 0x3d23990;
            uVar28 = *(undefined8 *)(lVar19 + 0x38);
            uVar12 = *(undefined8 *)(lVar19 + 0x30);
            uVar15 = *(undefined8 *)(lVar19 + 0x48);
            uVar29 = *(undefined8 *)(lVar19 + 0x40);
            uVar33 = *(undefined8 *)(lVar19 + 0x58);
            uVar32 = *(undefined8 *)(lVar19 + 0x50);
            uVar34 = *(undefined8 *)(lVar19 + 0x60);
            *(undefined8 *)(uVar16 + 0xb0) = *(undefined8 *)(lVar19 + 0x68);
            *(undefined8 *)(uVar16 + 0xa8) = uVar34;
            *(undefined8 *)(uVar16 + 0xa0) = uVar33;
            *(undefined8 *)(uVar16 + 0x98) = uVar32;
            *(undefined8 *)(uVar16 + 0x90) = uVar15;
            *(undefined8 *)(uVar16 + 0x88) = uVar29;
            *(undefined8 *)(uVar16 + 0x80) = uVar28;
            *(undefined8 *)(uVar16 + 0x78) = uVar12;
            *(undefined4 *)(uVar16 + 0x18) = *(undefined4 *)(lVar19 + 0x10);
            uVar7 = Atlas_FrontEnd_EventInfo__get_NumberOfAI(lVar19);
            *(undefined4 *)(uVar16 + 0x70) = uVar7;
            uVar28 = *(undefined8 *)(lVar19 + 0x70);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x25 = (undefined8 *)(uVar16 + 0x78);
            iVar18 = 0;
            iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar28,0);
            uVar12 = uVar10;
            uVar24 = uVar16;
            if (iVar6 == 0) goto code_r0x0158a900;
            uVar12 = uVar26;
            unaff_x27 = 0x3d23990;
            if (*(long *)(lVar19 + 0x70) != 0) {
              *(undefined8 *)(uVar16 + 0x40) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x18);
              if (*(long *)(lVar19 + 0x70) != 0) {
                *(undefined8 *)(uVar16 + 0x48) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x60);
                unaff_x27 = uVar25;
                if (*(long *)(lVar19 + 0x70) != 0) {
                  *(undefined8 *)(uVar16 + 0x50) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x68);
                  if (*(long *)(lVar19 + 0x70) != 0) {
                    *(undefined8 *)(uVar16 + 0x58) =
                         *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x70);
                    lVar14 = *(long *)(lVar19 + 0x70);
                    if (lVar14 != 0) {
                      *(int *)(uVar16 + 0x74) = *(int *)(lVar14 + 0x118) + -1;
                      *(undefined8 *)(uVar16 + 0x60) = *(undefined8 *)(lVar14 + 0x130);
                      if ((*(long *)(lVar19 + 0x70) != 0) && (*(long *)(lVar23 + 0x38) != 0)) {
                        uVar12 = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x110);
                        lVar14 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
                        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
                        uVar28 = 0;
                        if (lVar14 != 0) {
                          uVar13 = uRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar14,uVar10,(undefined1 *)((long)puVar3 + -0x68));
                          uVar28 = *(undefined8 *)((long)puVar3 + -0x68);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar18 = 0;
                          iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar28,0);
                          if (iVar6 == 0) {
code_r0x0158a900:
                            if (*(long *)(uVar16 + 0xc0) == 0) {
                              unaff_x27 = uVar25;
                              if (*(long *)(lVar19 + 0x70) != 0) {
                                uVar10 = *(undefined8 *)(lVar23 + 0x88);
                                uVar26 = *(undefined8 *)(lVar23 + 0x90);
                                uVar29 = *(undefined8 *)(lVar23 + 0x38);
                                uVar7 = *(undefined4 *)(*(long *)(lVar19 + 0x70) + 0x108);
                                uVar15 = *unaff_x25;
                                uVar33 = *(undefined8 *)(uVar16 + 0x90);
                                uVar32 = *(undefined8 *)(uVar16 + 0x88);
                                *(undefined8 *)((long)puVar3 + -0xe8) =
                                     *(undefined8 *)(uVar16 + 0x80);
                                *(undefined8 *)((long)puVar3 + -0xf0) = uVar15;
                                *(undefined8 *)((long)puVar3 + -0xd8) = uVar33;
                                *(undefined8 *)((long)puVar3 + -0xe0) = uVar32;
                                uVar15 = *(undefined8 *)(uVar16 + 0x98);
                                uVar33 = *(undefined8 *)(uVar16 + 0xb0);
                                uVar32 = *(undefined8 *)(uVar16 + 0xa8);
                                *(undefined8 *)((long)puVar3 + -200) =
                                     *(undefined8 *)(uVar16 + 0xa0);
                                *(undefined8 *)((long)puVar3 + -0xd0) = uVar15;
                                *(undefined8 *)((long)puVar3 + -0xb8) = uVar33;
                                *(undefined8 *)((long)puVar3 + -0xc0) = uVar32;
                                uVar13 = 0;
                                lVar14 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                                   (uVar29,uVar26,uVar10,0,uVar7,
                                                    (undefined1 *)((long)puVar3 + -0xf0),0);
                                iVar18 = (int)uVar10;
                                if (lVar14 != 0) {
                                  uVar10 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar14,uRam0000000003d3ae58);
                                  *(undefined8 *)(uVar16 + 0xc0) = uVar10;
                                  goto code_r0x0158a954;
                                }
                              }
                            }
                            else {
code_r0x0158a954:
                              iVar6 = *(int *)(lVar19 + 0x2c);
                              if (iVar6 != 0) {
                                *(undefined4 *)(uVar16 + 200) = *(undefined4 *)(lVar19 + 0x28);
                                *(int *)(uVar16 + 0xcc) = iVar6;
                              }
                              unaff_x27 = uVar25;
                              if ((uVar9 != 0) && (*(long *)(lVar23 + 0x30) != 0)) {
                                uVar11 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar23 + 0x30),
                                                         *(undefined8 *)(uVar9 + 0x30),uVar16,0);
                                return uVar11;
                              }
                            }
                          }
                          else if (*(long *)(lVar19 + 0x70) != 0) {
                            uVar13 = *(ulong *)((long)puVar3 + -0x68);
                            uVar10 = *(undefined8 *)(lVar23 + 0x88);
                            uVar26 = *(undefined8 *)(lVar23 + 0x90);
                            uVar29 = *(undefined8 *)(lVar23 + 0x38);
                            uVar7 = *(undefined4 *)(*(long *)(lVar19 + 0x70) + 0x108);
                            uVar15 = *unaff_x25;
                            uVar33 = *(undefined8 *)(uVar16 + 0x90);
                            uVar32 = *(undefined8 *)(uVar16 + 0x88);
                            *(undefined8 *)((long)puVar3 + -0xa8) = *(undefined8 *)(uVar16 + 0x80);
                            *(undefined8 *)((long)puVar3 + -0xb0) = uVar15;
                            *(undefined8 *)((long)puVar3 + -0x98) = uVar33;
                            *(undefined8 *)((long)puVar3 + -0xa0) = uVar32;
                            uVar15 = *(undefined8 *)(uVar16 + 0x98);
                            uVar33 = *(undefined8 *)(uVar16 + 0xb0);
                            uVar32 = *(undefined8 *)(uVar16 + 0xa8);
                            *(undefined8 *)((long)puVar3 + -0x88) = *(undefined8 *)(uVar16 + 0xa0);
                            *(undefined8 *)((long)puVar3 + -0x90) = uVar15;
                            *(undefined8 *)((long)puVar3 + -0x78) = uVar33;
                            *(undefined8 *)((long)puVar3 + -0x80) = uVar32;
                            lVar14 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                               (uVar29,uVar26,uVar10,uVar13,uVar7,
                                                (undefined1 *)((long)puVar3 + -0xb0),0);
                            iVar18 = (int)uVar10;
                            if (lVar14 != 0) {
                              uVar10 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar14,uRam0000000003d3ae58);
                              *(undefined8 *)(uVar16 + 0xc0) = uVar10;
                              goto code_r0x0158a900;
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
  }
  auVar35 = func_0x00f78af4();
  uVar10 = auVar35._8_8_;
  *(undefined1 **)((long)puVar3 + -0x100) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0xf8) = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar14 = *(long *)(auVar35._0_8_ + 0xa8);
  if (lVar14 != 0) {
    pppppuVar30 = *(undefined8 ******)((long)puVar3 + -0x100);
    puVar31 = *(undefined **)((long)puVar3 + -0xf8);
Core_StateManagement_StateMachine__TryRequestState:
    *(undefined8 *)((long)puVar4 + -0x40) = uVar12;
    *(undefined8 *)((long)puVar4 + -0x38) = uVar28;
    *(ulong *)((long)puVar4 + -0x30) = uVar24;
    *(ulong *)((long)puVar4 + -0x28) = uVar11;
    *(long *)((long)puVar4 + -0x20) = auVar36._8_8_;
    *(long *)((long)puVar4 + -0x18) = auVar36._0_8_;
    *(undefined8 ******)((long)puVar4 + -0x10) = pppppuVar30;
    *(undefined **)((long)puVar4 + -8) = puVar31;
    *(undefined8 *)((long)puVar4 + -0x50) = 0;
    *(undefined8 *)((long)puVar4 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar14,uVar10,(undefined1 *)((long)puVar4 + -0x50));
    lVar23 = *(long *)((long)puVar4 + -0x50);
    if (lVar23 != 0) {
      if (*(long *)(lVar14 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar14 + 0x18) = lVar23;
      *(undefined8 *)(lVar14 + 0x20) = uVar10;
      lVar19 = lVar23;
      if ((iVar18 != 0) && (plVar8 = *(long **)(lVar23 + 0x68), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        lVar19 = *(long *)(lVar14 + 0x18);
        if (*(long *)(lVar14 + 0x18) == 0) {
          func_0x00f78af4();
          lVar19 = lVar23;
        }
      }
      *(ulong *)(lVar19 + 0x70) = uVar13;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar23 != 0);
  }
  auVar35 = func_0x00f78af4();
  lVar14 = auVar35._0_8_;
  *(undefined8 *)((long)puVar3 + -0x160) = unaff_x28;
  *(undefined8 *)((long)puVar3 + -0x158) = unaff_x27;
  *(undefined8 *)((long)puVar3 + -0x150) = unaff_x26;
  *(undefined8 **)((long)puVar3 + -0x148) = unaff_x25;
  *(undefined8 *)((long)puVar3 + -0x140) = uVar12;
  *(undefined8 *)((long)puVar3 + -0x138) = uVar28;
  *(ulong *)((long)puVar3 + -0x130) = uVar24;
  *(ulong *)((long)puVar3 + -0x128) = uVar11;
  *(long *)((long)puVar3 + -0x120) = lVar19;
  *(long *)((long)puVar3 + -0x118) = lVar23;
  *(undefined1 **)((long)puVar3 + -0x110) = (undefined1 *)((long)puVar3 + -0x100);
  *(undefined **)((long)puVar3 + -0x108) = &Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout;
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
  }
  *(undefined8 *)((long)puVar3 + -0x170) = 0;
  *(undefined8 *)((long)puVar3 + -0x188) = 0;
  *(undefined8 *)((long)puVar3 + -400) = 0;
  *(undefined8 *)((long)puVar3 + -0x178) = 0;
  *(undefined8 *)((long)puVar3 + -0x180) = 0;
  *(undefined8 *)((long)puVar3 + -0x198) = 0;
  *(undefined8 *)((long)puVar3 + -0x1b0) = 0;
  *(undefined8 *)((long)puVar3 + -0x1a8) = 0;
  *(undefined8 *)((long)puVar3 + -0x1a0) = 0;
  *(undefined4 *)((long)puVar3 + -0x1b8) = 0;
  lVar23 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar23,uRam0000000003d3a498);
  if ((*(long *)(lVar14 + 0x80) != 0) &&
     (lVar19 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar14 + 0x80),0), lVar19 != 0)) {
    *(long *)((long)puVar3 + -0x238) = auVar35._8_8_;
    if (*(long *)(lVar19 + 0x50) != 0) {
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084((undefined1 *)((long)puVar3 + -0x1e8),*(long *)(lVar19 + 0x50),
                      uRam0000000003d3d860);
      *(undefined8 *)((long)puVar3 + -0x188) = *(undefined8 *)((long)puVar3 + -0x1e0);
      *(undefined8 *)((long)puVar3 + -400) = *(undefined8 *)((long)puVar3 + -0x1e8);
      *(undefined8 *)((long)puVar3 + -0x178) = *(undefined8 *)((long)puVar3 + -0x1d0);
      *(undefined8 *)((long)puVar3 + -0x180) = *(undefined8 *)((long)puVar3 + -0x1d8);
      *(undefined8 *)((long)puVar3 + -0x170) = *(undefined8 *)((long)puVar3 + -0x1c8);
code_r0x0158ab4c:
      uVar11 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0((undefined1 *)((long)puVar3 + -400),uRam0000000003d336f8);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar10 = *(undefined8 *)((long)puVar3 + -0x180);
          uVar25 = *(undefined8 *)((long)puVar3 + -0x170);
          lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar26 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar25,0);
          if (lVar19 == 0) {
            func_0x00f78af4(uVar26,uVar26);
          }
          else {
            uVar11 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar19,uVar26,0);
            if ((uVar11 & 1) == 0) goto code_r0x0158ac28;
            if (*(long *)(lVar14 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar19 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar26 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar25,0);
              if (lVar19 == 0) {
                func_0x00f78af4(uVar26,uVar26);
              }
              else {
                uVar11 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar19,uVar26,(undefined1 *)((long)puVar3 + -0x198),
                                         uRam0000000003d574f0);
                if ((uVar11 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar14 + 0x90) != 0) {
                  uVar11 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar14 + 0x90),
                                           *(undefined8 *)((long)puVar3 + -0x198),0);
                  if ((uVar11 & 1) == 0) goto code_r0x0158ac28;
                  if (*(long *)(lVar14 + 0x88) != 0) goto code_r0x0158ac18;
                  goto code_r0x0158ad68;
                }
                func_0x00f78af4();
              }
            }
          }
        }
        goto code_r0x0158ad6c;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc((undefined1 *)((long)puVar3 + -400),uRam0000000003d336f0);
      *(undefined4 *)((long)puVar3 + -0x1b8) = 0;
      if (lVar23 != 0) {
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc((undefined1 *)((long)puVar3 + -0x1b0),lVar23,uRam0000000003d3a4b8);
        while( true ) {
          uVar11 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780((undefined1 *)((long)puVar3 + -0x1b0),uRam0000000003d32418);
          if ((uVar11 & 1) == 0) {
            *(undefined4 *)((long)puVar3 + -0x1c0) = 0xf3;
            *(int *)((long)puVar3 + -0x1b8) = *(int *)((long)puVar3 + -0x1b8) + 1;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c((undefined1 *)((long)puVar3 + -0x1b0),uRam0000000003d32410);
            puVar27 = *(undefined8 **)((long)puVar3 + -0x238);
            uVar10 = *puVar27;
            uVar26 = puVar27[3];
            uVar25 = puVar27[2];
            *(undefined8 *)((long)puVar3 + -0x228) = puVar27[1];
            *(undefined8 *)((long)puVar3 + -0x230) = uVar10;
            *(undefined8 *)((long)puVar3 + -0x218) = uVar26;
            *(undefined8 *)((long)puVar3 + -0x220) = uVar25;
            uVar10 = puVar27[4];
            uVar26 = puVar27[7];
            uVar25 = puVar27[6];
            *(undefined8 *)((long)puVar3 + -0x208) = puVar27[5];
            *(undefined8 *)((long)puVar3 + -0x210) = uVar10;
            *(undefined8 *)((long)puVar3 + -0x1f8) = uVar26;
            *(undefined8 *)((long)puVar3 + -0x200) = uVar25;
            uVar11 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar14,(undefined1 *)((long)puVar3 + -0x230));
            return uVar11;
          }
          if (*(long *)(lVar14 + 0x88) == 0) break;
          /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(lVar14 + 0x88),*(undefined8 *)((long)puVar3 + -0x1a0),
                          *(undefined8 *)((long)puVar3 + -0x1a0),0);
        }
        func_0x00f78af4();
        goto code_r0x0158ad6c;
      }
    }
  }
  func_0x00f78af4();
code_r0x0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar2)();
code_r0x0158ac18:
  uVar11 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar14 + 0x88),uVar25,0);
  if ((uVar11 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
    if (lVar23 == 0) {
      func_0x00f78af4(uVar10,uVar10);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar23,uVar10,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x158a574 | Atlas.FrontEnd.FrontEndContext.ModeSelected
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_FrontEnd_FrontEndContext__ModeSelected
                (long param_1,long param_2,int param_3,long param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 unaff_x23;
  long lVar20;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar25._8_8_ = unaff_x20;
  auVar25._0_8_ = unaff_x19;
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = param_1;
  if ((bRam0000000003eb50ed & 1) == 0) {
    func_0x00f78a20(0x3d27618);
    func_0x00f78a20(0x3d5d988);
    bRam0000000003eb50ed = 1;
  }
  lVar5 = 0x3eb5000;
  if (param_2 == 0) {
LAB_0158a62c:
    unaff_x21 = lVar5;
    unaff_x30 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar26 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffd0;
    lVar5 = param_4;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = &stack0xfffffffffffffff0;
  }
  else {
    iVar3 = Atlas_FrontEnd_EventInfo__get_Multiplayer(param_2);
    puVar2 = (undefined1 *)register0x00000008;
    lVar5 = param_4;
    if (iVar3 != 0) {
      lVar5 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      param_3 = 0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(lVar5,param_2)
      ;
      lVar20 = lRam0000000003d5d988;
      lVar6 = *(long *)(param_1 + 0xa8);
      if (lVar6 != 0) {
        lVar12 = lVar5;
        if ((bRam0000000003eb668b & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb668b = 1;
        }
        uVar19 = **(undefined8 **)(lVar20 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
        if (lVar6 == 0) {
          auVar26 = func_0x00f78af4();
          plVar15 = auVar26._8_8_;
          lVar5 = auVar26._0_8_;
          if ((bRam0000000003eb668c & 1) == 0) {
            func_0x00f78a20(0x3d220f0);
            func_0x00f78a20(0x3d22180);
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb668c = 1;
          }
          if (plVar15 == (long *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar19 = func_0x00f78aec();
            uVar11 = func_0x00f78a24(0x3d7c5e8);
            /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar11,0);
            uVar11 = func_0x00f78a24(0x3d5da50);
            func_0x00f78ac0(uVar19,uVar11);
          }
          else {
            if (lVar5 == 0) {
              lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            lVar20 = **(long **)(lVar12 + 0x30);
            if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar20);
            }
            lVar6 = *plVar15;
            uVar16 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar20) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar18 * 0x10 + 0x138);
                  goto code_r0x018e1828;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,lVar20,0);
code_r0x018e1828:
            plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
            if (plVar15 != (long *)0x0) {
              lVar20 = *plVar15;
              uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar9 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x018e1890;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
              uVar16 = (*(code *)*puVar9)(plVar15,puVar9[1]);
              if ((uVar16 & 1) == 0) {
                uVar16 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
                if (plVar15 != (long *)0x0) {
                  lVar5 = *plVar15;
                  uVar17 = (ulong)*(ushort *)(lVar5 + 0x12a);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar9 = (undefined8 *)(lVar5 + (long)*piVar18 * 0x10 + 0x138);
                        goto code_r0x018e1bc4;
                      }
                      piVar18 = piVar18 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
                  (*(code *)*puVar9)(plVar15,puVar9[1]);
                }
                return uVar16;
              }
              lVar20 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
              lVar6 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar6);
              }
              lVar14 = *plVar15;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == lVar6) {
                    puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x018e1934;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,lVar6,0);
code_r0x018e1934:
              lVar6 = (*(code *)*puVar9)(plVar15,puVar9[1]);
              if (lVar6 != 0) {
                lVar6 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar6);
                }
                lVar14 = *plVar15;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar6) {
                      puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                      goto code_r0x018e19a8;
                    }
                    piVar18 = piVar18 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,lVar6,0);
code_r0x018e19a8:
                plVar10 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
                if (plVar10 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                lVar6 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
                if (lVar6 != 0) {
                  if (lVar20 == 0) {
                    func_0x00f78af4();
                    goto code_r0x018e1c64;
                  }
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar20,lVar6,0);
                }
              }
code_r0x018e19dc:
              do {
                lVar6 = *plVar15;
                uVar16 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                      puVar9 = (undefined8 *)(lVar6 + (long)*piVar18 * 0x10 + 0x138);
                      goto code_r0x018e1a28;
                    }
                    piVar18 = piVar18 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
                uVar16 = (*(code *)*puVar9)(plVar15,puVar9[1]);
                if ((uVar16 & 1) == 0) {
                  uVar16 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar20,0);
                  goto joined_r0x018e1920;
                }
                if (lVar20 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar20,lVar5,0);
                lVar6 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
                if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar6);
                }
                lVar14 = *plVar15;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar6) {
                      puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                      goto code_r0x018e1ab0;
                    }
                    piVar18 = piVar18 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,lVar6,0);
code_r0x018e1ab0:
                lVar6 = (*(code *)*puVar9)(plVar15,puVar9[1]);
              } while (lVar6 == 0);
              lVar6 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
              if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar6);
              }
              lVar14 = *plVar15;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == lVar6) {
                    puVar9 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x018e1b24;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar9 = (undefined8 *)func_0x00fac1f0(plVar15,lVar6,0);
code_r0x018e1b24:
              plVar10 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
              if (plVar10 != (long *)0x0) {
                lVar6 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
                if (lVar6 != 0) {
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar20,lVar6,0);
                }
                goto code_r0x018e19dc;
              }
              func_0x00f78af4();
              goto code_r0x018e1c64;
            }
          }
          func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x18e1c68);
          (*pcVar1)();
        }
        param_3 = 1;
        auVar26 = auVar25;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto LAB_0158a62c;
    }
  }
  lVar12 = auVar26._8_8_;
  lVar20 = auVar26._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xf0);
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 **)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(long *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb50ee & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d57510);
    func_0x00f78a20(0x3d3ae58);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ee = 1;
  }
  *(undefined8 *)(puVar2 + -0x68) = 0;
  unaff_x21 = 0x3eb5000;
  if ((*(long *)(lVar20 + 0x38) != 0) && (lVar12 != 0)) {
    uVar19 = 0x3d21270;
    unaff_x21 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    unaff_x22 = *(long *)(lVar12 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
    unaff_x26 = 0x3d21270;
    if (unaff_x21 != 0) {
      uVar8 = uRam0000000003d57288;
      lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x21,uVar11);
      param_3 = (int)uVar8;
      if (*(long *)(lVar20 + 0x38) != 0) {
        unaff_x22 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
        uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(lVar12 + 0x20),0);
        unaff_x21 = lVar6;
        unaff_x26 = uVar19;
        if (unaff_x22 != 0) {
          uVar19 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x22,uVar11,uRam0000000003d572d8);
          param_3 = 0;
          lVar14 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar6,uVar19);
          if (lVar14 != 0) {
            uVar19 = 0x3d23990;
            uVar8 = *(undefined8 *)(lVar12 + 0x38);
            uVar11 = *(undefined8 *)(lVar12 + 0x30);
            uVar21 = *(undefined8 *)(lVar12 + 0x48);
            uVar7 = *(undefined8 *)(lVar12 + 0x40);
            uVar23 = *(undefined8 *)(lVar12 + 0x58);
            uVar22 = *(undefined8 *)(lVar12 + 0x50);
            uVar24 = *(undefined8 *)(lVar12 + 0x60);
            *(undefined8 *)(lVar14 + 0xb0) = *(undefined8 *)(lVar12 + 0x68);
            *(undefined8 *)(lVar14 + 0xa8) = uVar24;
            *(undefined8 *)(lVar14 + 0xa0) = uVar23;
            *(undefined8 *)(lVar14 + 0x98) = uVar22;
            *(undefined8 *)(lVar14 + 0x90) = uVar21;
            *(undefined8 *)(lVar14 + 0x88) = uVar7;
            *(undefined8 *)(lVar14 + 0x80) = uVar8;
            *(undefined8 *)(lVar14 + 0x78) = uVar11;
            *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(lVar12 + 0x10);
            uVar4 = Atlas_FrontEnd_EventInfo__get_NumberOfAI(lVar12);
            *(undefined4 *)(lVar14 + 0x70) = uVar4;
            unaff_x23 = *(undefined8 *)(lVar12 + 0x70);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x25 = (undefined8 *)(lVar14 + 0x78);
            param_3 = 0;
            iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x23,0);
            unaff_x22 = lVar14;
            if (iVar3 == 0) goto code_r0x0158a900;
            unaff_x27 = 0x3d23990;
            if (*(long *)(lVar12 + 0x70) != 0) {
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x18);
              if (*(long *)(lVar12 + 0x70) != 0) {
                *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x60);
                unaff_x27 = uVar19;
                if (*(long *)(lVar12 + 0x70) != 0) {
                  *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x68);
                  if (*(long *)(lVar12 + 0x70) != 0) {
                    *(undefined8 *)(lVar14 + 0x58) =
                         *(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x70);
                    lVar13 = *(long *)(lVar12 + 0x70);
                    if (lVar13 != 0) {
                      *(int *)(lVar14 + 0x74) = *(int *)(lVar13 + 0x118) + -1;
                      *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(lVar13 + 0x130);
                      if ((*(long *)(lVar12 + 0x70) != 0) && (*(long *)(lVar20 + 0x38) != 0)) {
                        unaff_x24 = *(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x110);
                        lVar13 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
                        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x24,0);
                        unaff_x23 = 0;
                        if (lVar13 != 0) {
                          lVar5 = lRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar13,uVar11,puVar2 + -0x68);
                          unaff_x23 = *(undefined8 *)(puVar2 + -0x68);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          param_3 = 0;
                          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x23,0);
                          if (iVar3 == 0) {
code_r0x0158a900:
                            if (*(long *)(lVar14 + 0xc0) == 0) {
                              unaff_x27 = uVar19;
                              if (*(long *)(lVar12 + 0x70) != 0) {
                                uVar11 = *(undefined8 *)(lVar20 + 0x88);
                                uVar8 = *(undefined8 *)(lVar20 + 0x90);
                                uVar7 = *(undefined8 *)(lVar20 + 0x38);
                                uVar4 = *(undefined4 *)(*(long *)(lVar12 + 0x70) + 0x108);
                                uVar21 = *unaff_x25;
                                uVar23 = *(undefined8 *)(lVar14 + 0x90);
                                uVar22 = *(undefined8 *)(lVar14 + 0x88);
                                *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar14 + 0x80);
                                *(undefined8 *)(puVar2 + -0xf0) = uVar21;
                                *(undefined8 *)(puVar2 + -0xd8) = uVar23;
                                *(undefined8 *)(puVar2 + -0xe0) = uVar22;
                                uVar21 = *(undefined8 *)(lVar14 + 0x98);
                                uVar23 = *(undefined8 *)(lVar14 + 0xb0);
                                uVar22 = *(undefined8 *)(lVar14 + 0xa8);
                                *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(lVar14 + 0xa0);
                                *(undefined8 *)(puVar2 + -0xd0) = uVar21;
                                *(undefined8 *)(puVar2 + -0xb8) = uVar23;
                                *(undefined8 *)(puVar2 + -0xc0) = uVar22;
                                lVar5 = 0;
                                lVar13 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                                   (uVar7,uVar8,uVar11,0,uVar4,puVar2 + -0xf0,0);
                                param_3 = (int)uVar11;
                                if (lVar13 != 0) {
                                  uVar11 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar13,uRam0000000003d3ae58);
                                  *(undefined8 *)(lVar14 + 0xc0) = uVar11;
                                  goto code_r0x0158a954;
                                }
                              }
                            }
                            else {
code_r0x0158a954:
                              iVar3 = *(int *)(lVar12 + 0x2c);
                              if (iVar3 != 0) {
                                *(undefined4 *)(lVar14 + 200) = *(undefined4 *)(lVar12 + 0x28);
                                *(int *)(lVar14 + 0xcc) = iVar3;
                              }
                              unaff_x27 = uVar19;
                              if ((lVar6 != 0) && (*(long *)(lVar20 + 0x30) != 0)) {
                                uVar16 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar20 + 0x30),
                                                         *(undefined8 *)(lVar6 + 0x30),lVar14,0);
                                return uVar16;
                              }
                            }
                          }
                          else if (*(long *)(lVar12 + 0x70) != 0) {
                            lVar5 = *(long *)(puVar2 + -0x68);
                            uVar11 = *(undefined8 *)(lVar20 + 0x88);
                            uVar8 = *(undefined8 *)(lVar20 + 0x90);
                            uVar7 = *(undefined8 *)(lVar20 + 0x38);
                            uVar4 = *(undefined4 *)(*(long *)(lVar12 + 0x70) + 0x108);
                            uVar21 = *unaff_x25;
                            uVar23 = *(undefined8 *)(lVar14 + 0x90);
                            uVar22 = *(undefined8 *)(lVar14 + 0x88);
                            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(lVar14 + 0x80);
                            *(undefined8 *)(puVar2 + -0xb0) = uVar21;
                            *(undefined8 *)(puVar2 + -0x98) = uVar23;
                            *(undefined8 *)(puVar2 + -0xa0) = uVar22;
                            uVar21 = *(undefined8 *)(lVar14 + 0x98);
                            uVar23 = *(undefined8 *)(lVar14 + 0xb0);
                            uVar22 = *(undefined8 *)(lVar14 + 0xa8);
                            *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(lVar14 + 0xa0);
                            *(undefined8 *)(puVar2 + -0x90) = uVar21;
                            *(undefined8 *)(puVar2 + -0x78) = uVar23;
                            *(undefined8 *)(puVar2 + -0x80) = uVar22;
                            lVar13 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                               (uVar7,uVar8,uVar11,lVar5,uVar4,puVar2 + -0xb0,0);
                            param_3 = (int)uVar11;
                            if (lVar13 != 0) {
                              uVar11 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar13,uRam0000000003d3ae58);
                              *(undefined8 *)(lVar14 + 0xc0) = uVar11;
                              goto code_r0x0158a900;
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
  }
  auVar25 = func_0x00f78af4();
  uVar19 = auVar25._8_8_;
  *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0xf8) = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar6 = *(long *)(auVar25._0_8_ + 0xa8);
  if (lVar6 != 0) {
    unaff_x29 = *(undefined1 **)(puVar2 + -0x100);
    unaff_x30 = *(undefined **)(puVar2 + -0xf8);
Core_StateManagement_StateMachine__TryRequestState:
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar26._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar26._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar6,uVar19,(undefined1 *)((long)register0x00000008 + -0x50));
    lVar20 = *(long *)((long)register0x00000008 + -0x50);
    if (lVar20 != 0) {
      if (*(long *)(lVar6 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar6 + 0x18) = lVar20;
      *(undefined8 *)(lVar6 + 0x20) = uVar19;
      lVar12 = lVar20;
      if ((param_3 != 0) && (plVar15 = *(long **)(lVar20 + 0x68), plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
        lVar12 = *(long *)(lVar6 + 0x18);
        if (*(long *)(lVar6 + 0x18) == 0) {
          func_0x00f78af4();
          lVar12 = lVar20;
        }
      }
      *(long *)(lVar12 + 0x70) = lVar5;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar20 != 0);
  }
  auVar26 = func_0x00f78af4();
  lVar5 = auVar26._0_8_;
  *(undefined8 *)(puVar2 + -0x160) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x158) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x150) = unaff_x26;
  *(undefined8 **)(puVar2 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x140) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x138) = unaff_x23;
  *(long *)(puVar2 + -0x130) = unaff_x22;
  *(long *)(puVar2 + -0x128) = unaff_x21;
  *(long *)(puVar2 + -0x120) = lVar12;
  *(long *)(puVar2 + -0x118) = lVar20;
  *(undefined1 **)(puVar2 + -0x110) = puVar2 + -0x100;
  *(undefined **)(puVar2 + -0x108) = &Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout;
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
  }
  *(undefined8 *)(puVar2 + -0x170) = 0;
  *(undefined8 *)(puVar2 + -0x188) = 0;
  *(undefined8 *)(puVar2 + -400) = 0;
  *(undefined8 *)(puVar2 + -0x178) = 0;
  *(undefined8 *)(puVar2 + -0x180) = 0;
  *(undefined8 *)(puVar2 + -0x198) = 0;
  *(undefined8 *)(puVar2 + -0x1b0) = 0;
  *(undefined8 *)(puVar2 + -0x1a8) = 0;
  *(undefined8 *)(puVar2 + -0x1a0) = 0;
  *(undefined4 *)(puVar2 + -0x1b8) = 0;
  lVar20 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar20,uRam0000000003d3a498);
  if ((*(long *)(lVar5 + 0x80) != 0) &&
     (lVar6 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar5 + 0x80),0), lVar6 != 0)) {
    *(long *)(puVar2 + -0x238) = auVar26._8_8_;
    if (*(long *)(lVar6 + 0x50) != 0) {
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084(puVar2 + -0x1e8,*(long *)(lVar6 + 0x50),uRam0000000003d3d860);
      *(undefined8 *)(puVar2 + -0x188) = *(undefined8 *)(puVar2 + -0x1e0);
      *(undefined8 *)(puVar2 + -400) = *(undefined8 *)(puVar2 + -0x1e8);
      *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)(puVar2 + -0x1d0);
      *(undefined8 *)(puVar2 + -0x180) = *(undefined8 *)(puVar2 + -0x1d8);
      *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x1c8);
code_r0x0158ab4c:
      uVar16 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(puVar2 + -400,uRam0000000003d336f8);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(lVar5 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar19 = *(undefined8 *)(puVar2 + -0x180);
          uVar11 = *(undefined8 *)(puVar2 + -0x170);
          lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
          if (lVar6 == 0) {
            func_0x00f78af4(uVar8,uVar8);
          }
          else {
            uVar16 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar6,uVar8,0);
            if ((uVar16 & 1) == 0) goto code_r0x0158ac28;
            if (*(long *)(lVar5 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
              if (lVar6 == 0) {
                func_0x00f78af4(uVar8,uVar8);
              }
              else {
                uVar16 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar6,uVar8,puVar2 + -0x198,uRam0000000003d574f0);
                if ((uVar16 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar5 + 0x90) != 0) {
                  uVar16 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar5 + 0x90),*(undefined8 *)(puVar2 + -0x198),
                                           0);
                  if ((uVar16 & 1) == 0) goto code_r0x0158ac28;
                  if (*(long *)(lVar5 + 0x88) != 0) goto code_r0x0158ac18;
                  goto code_r0x0158ad68;
                }
                func_0x00f78af4();
              }
            }
          }
        }
        goto code_r0x0158ad6c;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc(puVar2 + -400,uRam0000000003d336f0);
      *(undefined4 *)(puVar2 + -0x1b8) = 0;
      if (lVar20 != 0) {
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(puVar2 + -0x1b0,lVar20,uRam0000000003d3a4b8);
        while( true ) {
          uVar16 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(puVar2 + -0x1b0,uRam0000000003d32418);
          if ((uVar16 & 1) == 0) {
            *(undefined4 *)(puVar2 + -0x1c0) = 0xf3;
            *(int *)(puVar2 + -0x1b8) = *(int *)(puVar2 + -0x1b8) + 1;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(puVar2 + -0x1b0,uRam0000000003d32410);
            puVar9 = *(undefined8 **)(puVar2 + -0x238);
            uVar19 = *puVar9;
            uVar8 = puVar9[3];
            uVar11 = puVar9[2];
            *(undefined8 *)(puVar2 + -0x228) = puVar9[1];
            *(undefined8 *)(puVar2 + -0x230) = uVar19;
            *(undefined8 *)(puVar2 + -0x218) = uVar8;
            *(undefined8 *)(puVar2 + -0x220) = uVar11;
            uVar19 = puVar9[4];
            uVar8 = puVar9[7];
            uVar11 = puVar9[6];
            *(undefined8 *)(puVar2 + -0x208) = puVar9[5];
            *(undefined8 *)(puVar2 + -0x210) = uVar19;
            *(undefined8 *)(puVar2 + -0x1f8) = uVar8;
            *(undefined8 *)(puVar2 + -0x200) = uVar11;
            uVar16 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar5,puVar2 + -0x230);
            return uVar16;
          }
          if (*(long *)(lVar5 + 0x88) == 0) break;
          /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(lVar5 + 0x88),*(undefined8 *)(puVar2 + -0x1a0),
                          *(undefined8 *)(puVar2 + -0x1a0),0);
        }
        func_0x00f78af4();
        goto code_r0x0158ad6c;
      }
    }
  }
  func_0x00f78af4();
code_r0x0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar1)();
code_r0x0158ac18:
  uVar16 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar5 + 0x88),uVar11,0);
  if ((uVar16 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar19,0);
    if (lVar20 == 0) {
      func_0x00f78af4(uVar19,uVar19);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar20,uVar19,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x158a630 | Atlas.FrontEnd.FrontEndContext.StartGameContext
// ============================================================

ulong Atlas_FrontEnd_FrontEndContext__StartGameContext
                (long param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  int iStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
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
  undefined8 uStack_68;
  
  if ((bRam0000000003eb50ee & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d57510);
    func_0x00f78a20(0x3d3ae58);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ee = 1;
  }
  uStack_68 = 0;
  lVar13 = 0x3eb5000;
  if ((*(long *)(param_1 + 0x38) != 0) && (param_2 != 0)) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    unaff_x22 = *(long *)(param_2 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
    if (lVar13 != 0) {
      uVar14 = uRam0000000003d57288;
      lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uVar5);
      param_3 = (int)uVar14;
      if (*(long *)(param_1 + 0x38) != 0) {
        unaff_x22 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(param_2 + 0x20),0);
        lVar13 = lVar6;
        if (unaff_x22 != 0) {
          uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x22,uVar5,uRam0000000003d572d8);
          param_3 = 0;
          lVar7 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar6,uVar5);
          if (lVar7 != 0) {
            uVar14 = *(undefined8 *)(param_2 + 0x38);
            uVar5 = *(undefined8 *)(param_2 + 0x30);
            uVar15 = *(undefined8 *)(param_2 + 0x48);
            uVar9 = *(undefined8 *)(param_2 + 0x40);
            uVar17 = *(undefined8 *)(param_2 + 0x58);
            uVar16 = *(undefined8 *)(param_2 + 0x50);
            uVar18 = *(undefined8 *)(param_2 + 0x60);
            *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(param_2 + 0x68);
            *(undefined8 *)(lVar7 + 0xa8) = uVar18;
            *(undefined8 *)(lVar7 + 0xa0) = uVar17;
            *(undefined8 *)(lVar7 + 0x98) = uVar16;
            *(undefined8 *)(lVar7 + 0x90) = uVar15;
            *(undefined8 *)(lVar7 + 0x88) = uVar9;
            *(undefined8 *)(lVar7 + 0x80) = uVar14;
            *(undefined8 *)(lVar7 + 0x78) = uVar5;
            *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(param_2 + 0x10);
            uVar3 = Atlas_FrontEnd_EventInfo__get_NumberOfAI(param_2);
            *(undefined4 *)(lVar7 + 0x70) = uVar3;
            unaff_x23 = *(undefined8 *)(param_2 + 0x70);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            param_3 = 0;
            iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x23,0);
            unaff_x22 = lVar7;
            if (iVar4 == 0) goto LAB_0158a900;
            if (*(long *)(param_2 + 0x70) != 0) {
              *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x18);
              if (*(long *)(param_2 + 0x70) != 0) {
                *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60);
                if (*(long *)(param_2 + 0x70) != 0) {
                  *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x68);
                  if (*(long *)(param_2 + 0x70) != 0) {
                    *(undefined8 *)(lVar7 + 0x58) =
                         *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x70);
                    lVar11 = *(long *)(param_2 + 0x70);
                    if (lVar11 != 0) {
                      *(int *)(lVar7 + 0x74) = *(int *)(lVar11 + 0x118) + -1;
                      *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)(lVar11 + 0x130);
                      if ((*(long *)(param_2 + 0x70) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
                        unaff_x24 = *(long *)(*(long *)(param_2 + 0x70) + 0x110);
                        lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
                        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x24,0);
                        unaff_x23 = 0;
                        if (lVar11 != 0) {
                          param_4 = uRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar11,uVar5,&uStack_68);
                          unaff_x23 = uStack_68;
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          param_3 = 0;
                          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x23,0);
                          if (iVar4 == 0) {
LAB_0158a900:
                            if (*(long *)(lVar7 + 0xc0) == 0) {
                              if (*(long *)(param_2 + 0x70) != 0) {
                                uVar5 = *(undefined8 *)(param_1 + 0x88);
                                uStack_e8 = *(undefined8 *)(lVar7 + 0x80);
                                uStack_f0 = *(undefined8 *)(lVar7 + 0x78);
                                uStack_d8 = *(undefined8 *)(lVar7 + 0x90);
                                uStack_e0 = *(undefined8 *)(lVar7 + 0x88);
                                uStack_c8 = *(undefined8 *)(lVar7 + 0xa0);
                                uStack_d0 = *(undefined8 *)(lVar7 + 0x98);
                                uStack_b8 = *(undefined8 *)(lVar7 + 0xb0);
                                uStack_c0 = *(undefined8 *)(lVar7 + 0xa8);
                                param_4 = 0;
                                lVar11 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                                   (*(undefined8 *)(param_1 + 0x38),
                                                    *(undefined8 *)(param_1 + 0x90),uVar5,0,
                                                    *(undefined4 *)
                                                     (*(long *)(param_2 + 0x70) + 0x108),&uStack_f0,
                                                    0);
                                param_3 = (int)uVar5;
                                if (lVar11 != 0) {
                                  uVar5 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar11,uRam0000000003d3ae58);
                                  *(undefined8 *)(lVar7 + 0xc0) = uVar5;
                                  goto LAB_0158a954;
                                }
                              }
                            }
                            else {
LAB_0158a954:
                              iVar4 = *(int *)(param_2 + 0x2c);
                              if (iVar4 != 0) {
                                *(undefined4 *)(lVar7 + 200) = *(undefined4 *)(param_2 + 0x28);
                                *(int *)(lVar7 + 0xcc) = iVar4;
                              }
                              if ((lVar6 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
                                uVar8 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(param_1 + 0x30),
                                                        *(undefined8 *)(lVar6 + 0x30),lVar7,0);
                                return uVar8;
                              }
                            }
                          }
                          else if (*(long *)(param_2 + 0x70) != 0) {
                            uVar5 = *(undefined8 *)(param_1 + 0x88);
                            uStack_a8 = *(undefined8 *)(lVar7 + 0x80);
                            uStack_b0 = *(undefined8 *)(lVar7 + 0x78);
                            uStack_98 = *(undefined8 *)(lVar7 + 0x90);
                            uStack_a0 = *(undefined8 *)(lVar7 + 0x88);
                            uStack_88 = *(undefined8 *)(lVar7 + 0xa0);
                            uStack_90 = *(undefined8 *)(lVar7 + 0x98);
                            uStack_78 = *(undefined8 *)(lVar7 + 0xb0);
                            uStack_80 = *(undefined8 *)(lVar7 + 0xa8);
                            param_4 = uStack_68;
                            lVar11 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                               (*(undefined8 *)(param_1 + 0x38),
                                                *(undefined8 *)(param_1 + 0x90),uVar5,uStack_68,
                                                *(undefined4 *)(*(long *)(param_2 + 0x70) + 0x108),
                                                &uStack_b0,0);
                            param_3 = (int)uVar5;
                            if (lVar11 != 0) {
                              uVar5 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar11,uRam0000000003d3ae58);
                              *(undefined8 *)(lVar7 + 0xc0) = uVar5;
                              goto LAB_0158a900;
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
  }
  auVar19 = func_0x00f78af4();
  puStack_110 = (undefined1 *)&puStack_100;
  puStack_f8 = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar6 = *(long *)(auVar19._0_8_ + 0xa8);
  puStack_100 = &stack0xfffffffffffffff0;
  if (lVar6 != 0) {
    puStack_f8 = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
    lStack_140 = 0;
    uStack_138 = 0;
    lStack_130 = unaff_x24;
    lStack_128 = unaff_x23;
    lStack_120 = unaff_x22;
    lStack_118 = lVar13;
    puStack_110 = (undefined1 *)param_2;
    puStack_108 = (undefined *)param_1;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar6,auVar19._8_8_,&lStack_140);
    lVar13 = lStack_140;
    if (lStack_140 != 0) {
      if (*(long *)(lVar6 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar6 + 0x18) = lVar13;
      *(long *)(lVar6 + 0x20) = auVar19._8_8_;
      lVar7 = lVar13;
      if ((param_3 != 0) && (plVar12 = *(long **)(lVar13 + 0x68), plVar12 != (long *)0x0)) {
        (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
        lVar7 = *(long *)(lVar6 + 0x18);
        if (*(long *)(lVar6 + 0x18) == 0) {
          func_0x00f78af4();
          lVar7 = lVar13;
        }
      }
      *(undefined8 *)(lVar7 + 0x70) = param_4;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar13 != 0);
  }
  auVar19 = func_0x00f78af4();
  puVar10 = auVar19._8_8_;
  lVar6 = auVar19._0_8_;
  puStack_108 = &Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout;
  lStack_140 = unaff_x24;
  uStack_138 = unaff_x23;
  lStack_130 = unaff_x22;
  lStack_128 = lVar13;
  lStack_120 = param_2;
  lStack_118 = param_1;
  ppuVar1 = &puStack_100;
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
    ppuVar1 = (undefined1 **)puStack_110;
  }
  puStack_110 = (undefined1 *)ppuVar1;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  iStack_1b8 = 0;
  lVar13 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar13,uRam0000000003d3a498);
  if (((*(long *)(lVar6 + 0x80) != 0) &&
      (lVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar6 + 0x80),0), lVar7 != 0)) &&
     (*(long *)(lVar7 + 0x50) != 0)) {
    /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084(&uStack_1e8,*(long *)(lVar7 + 0x50),uRam0000000003d3d860);
    uStack_188 = uStack_1e0;
    uStack_190 = uStack_1e8;
    uStack_178 = uStack_1d0;
    uStack_180 = uStack_1d8;
    uStack_170 = uStack_1c8;
code_r0x0158ab4c:
    uVar8 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(&uStack_190,uRam0000000003d336f8);
    uVar14 = uStack_170;
    uVar5 = uStack_180;
    if ((uVar8 & 1) != 0) {
      if (*(long *)(lVar6 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar14,0);
        if (lVar7 == 0) {
          func_0x00f78af4(uVar9,uVar9);
        }
        else {
          uVar8 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar7,uVar9,0);
          if ((uVar8 & 1) == 0) goto code_r0x0158ac28;
          if (*(long *)(lVar6 + 0x38) == 0) {
            func_0x00f78af4();
          }
          else {
            lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar14,0);
            if (lVar7 == 0) {
              func_0x00f78af4(uVar9,uVar9);
            }
            else {
              uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar7,uVar9,&uStack_198,uRam0000000003d574f0);
              if ((uVar8 & 1) == 0) goto code_r0x0158ac28;
              if (*(long *)(lVar6 + 0x90) != 0) {
                uVar8 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar6 + 0x90),uStack_198,0);
                if ((uVar8 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar6 + 0x88) != 0) goto code_r0x0158ac18;
                goto code_r0x0158ad68;
              }
              func_0x00f78af4();
            }
          }
        }
      }
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc(&uStack_190,uRam0000000003d336f0);
    iStack_1b8 = 0;
    if (lVar13 != 0) {
      /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_1b0,lVar13,uRam0000000003d3a4b8);
      while( true ) {
        uVar8 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_1b0,uRam0000000003d32418);
        if ((uVar8 & 1) == 0) {
          iStack_1b8 = iStack_1b8 + 1;
          uStack_1c0 = 0xf3;
          /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_1b0,uRam0000000003d32410);
          uStack_228 = puVar10[1];
          uStack_230 = *puVar10;
          uStack_218 = puVar10[3];
          uStack_220 = puVar10[2];
          uStack_208 = puVar10[5];
          uStack_210 = puVar10[4];
          uStack_1f8 = puVar10[7];
          uStack_200 = puVar10[6];
          uVar8 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar6,&uStack_230);
          return uVar8;
        }
        if (*(long *)(lVar6 + 0x88) == 0) break;
        /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(lVar6 + 0x88),uStack_1a0,uStack_1a0,0);
      }
      func_0x00f78af4();
      goto code_r0x0158ad6c;
    }
  }
  func_0x00f78af4();
code_r0x0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar2)();
code_r0x0158ac18:
  uVar8 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar6 + 0x88),uVar14,0);
  if ((uVar8 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar5,0);
    if (lVar13 == 0) {
      func_0x00f78af4(uVar5,uVar5);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar13,uVar5,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x158a9a4 | Atlas.FrontEnd.FrontEndContext.TryRequestState
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b95608) */
/* WARNING: Removing unreachable block (ram,0x02b95610) */
/* WARNING: Removing unreachable block (ram,0x02b95614) */
/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x02b95644) */
/* WARNING: Removing unreachable block (ram,0x02b95648) */

undefined8
Atlas_FrontEnd_FrontEndContext__TryRequestState
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(*(long *)(param_1 + 0xa8),param_2,&stack0xffffffffffffffb0,param_4,0);
    return 0;
  }
  auVar10 = func_0x00f78af4();
  puVar9 = auVar10._8_8_;
  lVar3 = auVar10._0_8_;
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  iStack_c8 = 0;
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar4,uRam0000000003d3a498);
  if (((*(long *)(lVar3 + 0x80) != 0) &&
      (lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar3 + 0x80),0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x50) != 0)) {
    /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084(&uStack_f8,*(long *)(lVar5 + 0x50),uRam0000000003d3d860);
    uStack_98 = uStack_f0;
    uStack_a0 = uStack_f8;
    uStack_88 = uStack_e0;
    uStack_90 = uStack_e8;
    uStack_80 = uStack_d8;
code_r0x0158ab4c:
    uVar6 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(&uStack_a0,uRam0000000003d336f8);
    uVar1 = uStack_80;
    uVar8 = uStack_90;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar3 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar1,0);
        if (lVar5 == 0) {
          func_0x00f78af4(uVar7,uVar7);
        }
        else {
          uVar6 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar5,uVar7,0);
          if ((uVar6 & 1) == 0) goto code_r0x0158ac28;
          if (*(long *)(lVar3 + 0x38) == 0) {
            func_0x00f78af4();
          }
          else {
            lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar1,0);
            if (lVar5 == 0) {
              func_0x00f78af4(uVar7,uVar7);
            }
            else {
              uVar6 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar5,uVar7,&uStack_a8,uRam0000000003d574f0);
              if ((uVar6 & 1) == 0) goto code_r0x0158ac28;
              if (*(long *)(lVar3 + 0x90) != 0) {
                uVar6 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar3 + 0x90),uStack_a8,0);
                if ((uVar6 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar3 + 0x88) != 0) goto code_r0x0158ac18;
                goto code_r0x0158ad68;
              }
              func_0x00f78af4();
            }
          }
        }
      }
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc(&uStack_a0,uRam0000000003d336f0);
    iStack_c8 = 0;
    if (lVar4 != 0) {
      /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_c0,lVar4,uRam0000000003d3a4b8);
      while( true ) {
        uVar6 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_c0,uRam0000000003d32418);
        if ((uVar6 & 1) == 0) {
          iStack_c8 = iStack_c8 + 1;
          uStack_d0 = 0xf3;
          /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_c0,uRam0000000003d32410);
          uStack_138 = puVar9[1];
          uStack_140 = *puVar9;
          uStack_128 = puVar9[3];
          uStack_130 = puVar9[2];
          uStack_118 = puVar9[5];
          uStack_120 = puVar9[4];
          uStack_108 = puVar9[7];
          uStack_110 = puVar9[6];
          uVar8 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar3,&uStack_140);
          return uVar8;
        }
        if (*(long *)(lVar3 + 0x88) == 0) break;
        /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(lVar3 + 0x88),uStack_b0,uStack_b0,0);
      }
      func_0x00f78af4();
      goto code_r0x0158ad6c;
    }
  }
  func_0x00f78af4();
code_r0x0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar2)();
code_r0x0158ac18:
  uVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar3 + 0x88),uVar1,0);
  if ((uVar6 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
    if (lVar4 == 0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar4,uVar8,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x158a9c4 | Atlas.FrontEnd.FrontEndContext.TryFixSavedLoadout
// ============================================================

void Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  int iStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  iStack_b8 = 0;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar3,uRam0000000003d3a498);
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (lVar4 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(param_1 + 0x80),0), lVar4 != 0)) {
    if (*(long *)(lVar4 + 0x50) != 0) {
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084(&uStack_e8,*(long *)(lVar4 + 0x50),uRam0000000003d3d860);
      uStack_88 = uStack_e0;
      uStack_90 = uStack_e8;
      uStack_78 = uStack_d0;
      uStack_80 = uStack_d8;
      uStack_70 = uStack_c8;
LAB_0158ab4c:
      uVar5 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(&uStack_90,uRam0000000003d336f8);
      uVar1 = uStack_70;
      uVar7 = uStack_80;
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar1,0);
          if (lVar4 == 0) {
            func_0x00f78af4(uVar6,uVar6);
          }
          else {
            uVar5 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar4,uVar6,0);
            if ((uVar5 & 1) == 0) goto LAB_0158ac28;
            if (*(long *)(param_1 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar1,0);
              if (lVar4 == 0) {
                func_0x00f78af4(uVar6,uVar6);
              }
              else {
                uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar4,uVar6,&uStack_98,uRam0000000003d574f0);
                if ((uVar5 & 1) == 0) goto LAB_0158ac28;
                if (*(long *)(param_1 + 0x90) != 0) {
                  uVar5 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(param_1 + 0x90),uStack_98,0);
                  if ((uVar5 & 1) == 0) goto LAB_0158ac28;
                  if (*(long *)(param_1 + 0x88) != 0) goto code_r0x0158ac18;
                  goto LAB_0158ad68;
                }
                func_0x00f78af4();
              }
            }
          }
        }
        goto code_r0x0158ad6c;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc(&uStack_90,uRam0000000003d336f0);
      iStack_b8 = 0;
      if (lVar3 != 0) {
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_b0,lVar3,uRam0000000003d3a4b8);
        while( true ) {
          uVar5 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_b0,uRam0000000003d32418);
          if ((uVar5 & 1) == 0) {
            iStack_b8 = iStack_b8 + 1;
            uStack_c0 = 0xf3;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_b0,uRam0000000003d32410);
            uStack_128 = param_2[1];
            uStack_130 = *param_2;
            uStack_118 = param_2[3];
            uStack_120 = param_2[2];
            uStack_108 = param_2[5];
            uStack_110 = param_2[4];
            uStack_f8 = param_2[7];
            uStack_100 = param_2[6];
            /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(param_1,&uStack_130);
            return;
          }
          if (*(long *)(param_1 + 0x88) == 0) break;
          /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(param_1 + 0x88),uStack_a0,uStack_a0,0);
        }
        func_0x00f78af4();
        goto code_r0x0158ad6c;
      }
    }
  }
  func_0x00f78af4();
LAB_0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar2)();
code_r0x0158ac18:
  uVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x88),uVar1,0);
  if ((uVar5 & 1) == 0) {
LAB_0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
    if (lVar3 == 0) {
      func_0x00f78af4(uVar7,uVar7);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar3,uVar7,uRam0000000003d3a4a8);
  }
  goto LAB_0158ab4c;
}



// ============================================================
// RVA: 0x158ae30 | Atlas.FrontEnd.FrontEndContext.CheckAndFixLastSelectedLoadout
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158b01c | Atlas.FrontEnd.FrontEndContext.FixLockedLoadoutPartsFromOtherLoadout
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158b668 | Atlas.FrontEnd.FrontEndContext.OnPartyInviteReceived
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnPartyInviteReceived(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb50f2 & 1) == 0) {
    func_0x00f78a20(0x3d73540);
    bRam0000000003eb50f2 = 1;
  }
  if ((*(char *)(param_1 + 0x160) != '\0') || (lVar6 = *(long *)(param_1 + 0x98), lVar6 == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    lVar6 = func_0x00f78af4();
    *(undefined1 *)(lVar6 + 0x10) = 1;
    return;
  }
  uVar4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0xa0),/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar4,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar3 = lRam0000000003d3f8c0;
  lVar6 = *(long *)(lVar6 + 0x38);
  if ((lVar6 == 0) || (5 < *(int *)(lVar6 + 0x20))) {
    return;
  }
  lVar5 = *(long *)(lVar6 + 0x10);
  if (lVar5 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar2 = *(int *)(lVar6 + 0x20);
    unaff_x19 = lVar6;
    unaff_x20 = lVar3;
    if (iVar2 == *(int *)(lVar5 + 0x18)) {
      iVar1 = iVar2 + 4;
      if (iVar2 + 4 <= iVar2 * 2) {
        iVar1 = iVar2 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (lVar6,iVar1);
      lVar5 = *(long *)(lVar6 + 0x10);
      if (lVar5 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)(lVar6 + 0x1c) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)*(uint *)(lVar6 + 0x1c) * 0x10;
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      *(undefined8 *)(lVar5 + 0x28) = 0x4020000000000000;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar3 + 0x18) + 0xc0) + 0x20))(lVar6);
      *(ulong *)(lVar6 + 0x20) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar6 + 0x20) + 1);
      return;
    }
  }
  uVar4 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar4,0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_50 = unaff_x20;
  lStack_48 = unaff_x19;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_70,auVar7._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  lVar6 = *(long *)(*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  func_0x00f78ae0(lVar6,&uStack_90);
  return;
}



// ============================================================
// RVA: 0x158b6f4 | Atlas.FrontEnd.FrontEndContext..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndContext___ctor(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



