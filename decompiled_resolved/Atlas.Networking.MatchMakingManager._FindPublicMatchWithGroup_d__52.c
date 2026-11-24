// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.MatchMakingManager.<FindPublicMatchWithGroup>d__52

// ============================================================
// RVA: 0x155ee78 | Atlas.Networking.MatchMakingManager.<FindPublicMatchWithGroup>d__52.MoveNext
// ============================================================

void Atlas_Networking_MatchMakingManager__FindPublicMatchWithGroup_d__52__MoveNext(int *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4fbc & 1) == 0) {
    func_0x00f78a20(0x3d52208);
    bRam0000000003eb4fbc = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  lVar4 = *(long *)(param_1 + 10);
  if (*param_1 == 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x0155f110;
    }
    if (*(char *)(lVar4 + 0x90) != '\0') goto LAB_0155ef80;
    *(undefined1 *)(lVar4 + 0x90) = 1;
    if (*(long *)(lVar4 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x0155f110;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0x38) + 0x30);
    uVar2 = Atlas_Networking_MatchMakingManager__SetupPublicMatch(lVar4,0);
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4(uVar2,uVar2);
      goto code_r0x0155f110;
    }
    uStack_40 = (**(code **)(*plVar5 + 0x6a8))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x6b0));
    uStack_38 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_40,0);
    uVar3 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_38,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_38;
      /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, MatchMakingManager.<FindPublicMatchWithGroup>d__52>*/ func_0x0182bc78(param_1 + 2,&uStack_38,param_1,uRam0000000003d52208);
      return;
    }
  }
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_38,0);
  if (lVar4 == 0) {
    func_0x00f78af4();
code_r0x0155f110:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x155f114);
    (*pcVar1)();
  }
  *(undefined1 *)(lVar4 + 0x90) = 0;
LAB_0155ef80:
  *param_1 = -2;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(param_1 + 2,0);
  return;
}



// ============================================================
// RVA: 0x155f128 | Atlas.Networking.MatchMakingManager.<FindPublicMatchWithGroup>d__52.SetStateMachine
// ============================================================

void Atlas_Networking_MatchMakingManager__FindPublicMatchWithGroup_d__52__SetStateMachine
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (param_2 == 0) {
    func_0x00f78a24(0x3d1fcf0,0,0);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d7ba38);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar3,uVar4);
    uVar4 = func_0x00f78a24(0x3d51c30);
    func_0x00f78ac0(uVar3,uVar4);
  }
  else if (*(long *)(param_1 + 0x10) == 0) {
    *(long *)(param_1 + 0x10) = param_2;
    return;
  }
  uVar3 = func_0x00f78a24(0x3d73d78);
  uVar3 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar3,0);
  func_0x00f78a24(0x3d22a38);
  uVar4 = func_0x00f78aec();
  puVar8 = (undefined8 *)0x0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar3);
  uVar3 = func_0x00f78a24(0x3d51c30);
  auVar10 = func_0x00f78ac0(uVar4,uVar3);
  lVar7 = auVar10._8_8_;
  plVar5 = auVar10._0_8_;
  if ((bRam0000000003eb8f09 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d21168);
    func_0x00f78a20(0x3d21720);
    func_0x00f78a20(0x3d62198);
    func_0x00f78a20(0x3d269a0);
    bRam0000000003eb8f09 = 1;
  }
  if (((*(ushort *)(/*System.Diagnostics.Debugger_TypeInfo*/ lRam0000000003d21168 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Diagnostics.Debugger_TypeInfo*/ lRam0000000003d21168 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*System.Diagnostics.Debugger$$NotifyOfCrossThreadDependency*/ func_0x02aa498c(0);
  if (((*(ushort *)(/*System.Threading.ExecutionContext_TypeInfo*/ lRam0000000003d21720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Threading.ExecutionContext_TypeInfo*/ lRam0000000003d21720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Threading.ExecutionContext$$FastCapture*/ func_0x02acf36c(0);
  if ((lVar6 == 0) || (iVar2 = /*System.Threading.ExecutionContext$$get_IsPreAllocatedDefault*/ func_0x02acdfcc(lVar6,0), iVar2 == 0)) {
    lVar9 = *plVar5;
    uVar3 = func_0x00f78aec(/*System.Runtime.CompilerServices.AsyncMethodBuilderCore.MoveNextRunner_TypeInfo*/ uRam0000000003d269a0);
    /*System.Runtime.CompilerServices.AsyncMethodBuilderCore.MoveNextRunner$$.ctor*/ func_0x02a59e48(uVar3,lVar6,lVar9,0);
    lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    puVar1 = puRam0000000003d62198;
    *(undefined8 *)(lVar6 + 0x10) = *puRam0000000003d62198;
    *(undefined8 *)(lVar6 + 0x20) = uVar3;
    *(undefined8 **)(lVar6 + 0x28) = puVar1;
    if (lVar7 != 0) {
      /*System.Runtime.CompilerServices.AsyncMethodBuilderCore$$OutputAsyncCausalityEvents*/ func_0x02932ed4(lVar6,lVar7,lVar6);
    }
  }
  else {
    if (plVar5[1] != 0) {
      return;
    }
    lVar9 = *plVar5;
    uVar3 = func_0x00f78aec(/*System.Runtime.CompilerServices.AsyncMethodBuilderCore.MoveNextRunner_TypeInfo*/ uRam0000000003d269a0);
    /*System.Runtime.CompilerServices.AsyncMethodBuilderCore.MoveNextRunner$$.ctor*/ func_0x02a59e48(uVar3,lVar6,lVar9,0);
    lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    puVar1 = puRam0000000003d62198;
    *(undefined8 *)(lVar6 + 0x10) = *puRam0000000003d62198;
    *(undefined8 *)(lVar6 + 0x20) = uVar3;
    *(undefined8 **)(lVar6 + 0x28) = puVar1;
    if (lVar7 != 0) {
      lVar6 = /*System.Runtime.CompilerServices.AsyncMethodBuilderCore$$OutputAsyncCausalityEvents*/ func_0x02932ed4(lVar6,lVar7,lVar6);
    }
    plVar5[1] = lVar6;
  }
  if (*plVar5 == 0) {
    *puVar8 = uVar3;
  }
  return;
}



