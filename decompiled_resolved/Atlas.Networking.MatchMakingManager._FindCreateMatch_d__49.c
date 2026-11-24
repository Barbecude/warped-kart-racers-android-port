// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.MatchMakingManager.<FindCreateMatch>d__49

// ============================================================
// RVA: 0x155e65c | Atlas.Networking.MatchMakingManager.<FindCreateMatch>d__49.MoveNext
// ============================================================

void Atlas_Networking_MatchMakingManager__FindCreateMatch_d__49__MoveNext(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4fbb & 1) == 0) {
    func_0x00f78a20(0x3d2a438);
    func_0x00f78a20(0x3d52200);
    func_0x00f78a20(0x3d521b0);
    func_0x00f78a20(0x3d521c0);
    func_0x00f78a20(0x3d2c9f8);
    func_0x00f78a20(0x3d2ca18);
    func_0x00f78a20(0x3d2ca20);
    func_0x00f78a20(0x3d2ca00);
    func_0x00f78a20(0x3d41538);
    func_0x00f78a20(0x3d41510);
    bRam0000000003eb4fbb = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar1 = *param_1;
  lVar7 = *(long *)(param_1 + 10);
  if (4 < uVar1) {
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x0155ee54;
    }
    if ((*(char *)(lVar7 + 0x90) != '\0') ||
       (uVar3 = Atlas_Networking_MatchMakingManager__IsMatchMakingOrInGroup(lVar7,0),
       (uVar3 & 1) != 0)) goto LAB_0155e834;
  }
  switch(uVar1) {
  case 0:
    uStack_48 = *(undefined8 *)(param_1 + 0x14);
    uStack_50 = *(undefined8 *)(param_1 + 0x12);
    uStack_40 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = 0xffffffff;
    break;
  case 1:
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = 0xffffffff;
    goto code_r0x0155e994;
  case 2:
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = 0xffffffff;
    goto code_r0x0155e7e4;
  case 3:
    uStack_98 = *(undefined8 *)(param_1 + 0x1c);
    uStack_a0 = *(undefined8 *)(param_1 + 0x1a);
    uStack_90 = *(undefined8 *)(param_1 + 0x1e);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = 0xffffffff;
    goto code_r0x0155e814;
  case 4:
    uStack_98 = *(undefined8 *)(param_1 + 0x1c);
    uStack_a0 = *(undefined8 *)(param_1 + 0x1a);
    uStack_90 = *(undefined8 *)(param_1 + 0x1e);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = 0xffffffff;
    goto code_r0x0155e7b8;
  default:
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x0155ee54;
    }
    lVar6 = *(long *)(param_1 + 0xc);
    *(long *)(lVar7 + 0xb0) = lVar6;
    if (*(long *)(lVar7 + 0x20) != 0) {
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x0155ee54;
      }
      /*System.Action<RESULT, string>$$Invoke*/ func_0x01e6ca18(*(long *)(lVar7 + 0x20),*(undefined4 *)(lVar6 + 0x10),
                      *(undefined8 *)(lVar6 + 0x18),uRam0000000003d2a438);
    }
    Atlas_Networking_MatchMakingManager__AddDelegates(lVar7,0);
    *(undefined1 *)(lVar7 + 0x90) = 1;
    Atlas_Networking_MatchMakingManager__SetVisuals(lVar7,0);
    if (*(long *)(lVar7 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x0155ee54;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 0x38) + 0x30);
    if (plVar4 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0155ee54;
    }
    (**(code **)(*plVar4 + 0x718))(&uStack_d8,plVar4,*(undefined8 *)(*plVar4 + 0x720));
    uStack_68 = uStack_d0;
    uStack_70 = uStack_d8;
    uStack_60 = uStack_c8;
    /*UniRx.Async.UniTask<Player>$$GetAwaiter*/ func_0x01b7a14c(&uStack_d8,&uStack_70,uRam0000000003d41538);
    uStack_48 = uStack_d0;
    uStack_50 = uStack_d8;
    uStack_40 = uStack_c8;
    uVar3 = /*UniRx.Async.UniTask.Awaiter<Player>$$get_IsCompleted*/ func_0x01cf62cc(&uStack_50,uRam0000000003d2ca20);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = uStack_48;
      *(undefined8 *)(param_1 + 0x12) = uStack_50;
      *(undefined8 *)(param_1 + 0x16) = uStack_40;
      /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Player>, MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x01829eac(param_1 + 2,&uStack_50,param_1,uRam0000000003d521c0);
      return;
    }
  }
  /*UniRx.Async.UniTask.Awaiter<Player>$$GetResult*/ func_0x01cf63b0(&uStack_50,uRam0000000003d2ca18);
  if (lVar7 == 0) {
    func_0x00f78af4();
    goto code_r0x0155ee54;
  }
  if (*(long *)(lVar7 + 0x38) == 0) {
    func_0x00f78af4();
    goto code_r0x0155ee54;
  }
  plVar4 = *(long **)(*(long *)(lVar7 + 0x38) + 0x30);
  if (plVar4 == (long *)0x0) {
    func_0x00f78af4();
    goto code_r0x0155ee54;
  }
  uStack_80 = (**(code **)(*plVar4 + 0x638))(plVar4,*(undefined8 *)(*plVar4 + 0x640));
  uStack_78 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_80,0);
  uVar3 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_78,0);
  if ((uVar3 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x18) = uStack_78;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x0182b9bc(param_1 + 2,&uStack_78,param_1,uRam0000000003d52200);
    return;
  }
code_r0x0155e994:
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_78,0);
  if (lVar7 == 0) {
    func_0x00f78af4();
    goto code_r0x0155ee54;
  }
  *(undefined1 *)(lVar7 + 0xc4) = 1;
  uVar1 = param_1[0xe];
  if (uVar1 == 0) {
    if (*(long *)(lVar7 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x0155ee54;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 0x38) + 0x30);
    uVar5 = Atlas_Networking_MatchMakingManager__SetupPublicMatch(lVar7,0);
    if (plVar4 == (long *)0x0) {
      func_0x00f78af4(uVar5,uVar5);
      goto code_r0x0155ee54;
    }
    uStack_80 = (**(code **)(*plVar4 + 0x6a8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x6b0));
    uStack_78 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_80,0);
    uVar3 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_78,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x18) = uStack_78;
      /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x0182b9bc(param_1 + 2,&uStack_78,param_1,uRam0000000003d52200);
      return;
    }
code_r0x0155e7e4:
    /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_78,0);
code_r0x0155e828:
    if (lVar7 == 0) {
      func_0x00f78af4();
code_r0x0155ee54:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x155ee58);
      (*pcVar2)();
    }
  }
  else {
    if (uVar1 == 1) {
      if (*(long *)(lVar7 + 0x38) == 0) {
        func_0x00f78af4();
        goto code_r0x0155ee54;
      }
      plVar4 = *(long **)(*(long *)(lVar7 + 0x38) + 0x30);
      if (plVar4 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x0155ee54;
      }
      (**(code **)(*plVar4 + 0x7e8))(&uStack_d8,plVar4,*(undefined8 *)(*plVar4 + 0x7f0));
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      /*UniRx.Async.UniTask<Group>$$GetAwaiter*/ func_0x01b773d0(&uStack_d8,&uStack_c0,uRam0000000003d41510);
      uStack_98 = uStack_d0;
      uStack_a0 = uStack_d8;
      uStack_90 = uStack_c8;
      uVar3 = /*UniRx.Async.UniTask.Awaiter<Group>$$get_IsCompleted*/ func_0x01cf4f60(&uStack_a0,uRam0000000003d2ca00);
      if ((uVar3 & 1) == 0) {
        *param_1 = 3;
        *(undefined8 *)(param_1 + 0x1c) = uStack_98;
        *(undefined8 *)(param_1 + 0x1a) = uStack_a0;
        *(undefined8 *)(param_1 + 0x1e) = uStack_90;
        /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Group>, MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x0182983c(param_1 + 2,&uStack_a0,param_1,uRam0000000003d521b0);
        return;
      }
code_r0x0155e814:
      /*UniRx.Async.UniTask.Awaiter<Group>$$GetResult*/ func_0x01cf5044(&uStack_a0,uRam0000000003d2c9f8);
      goto code_r0x0155e828;
    }
    if (uVar1 == 2) {
      if (*(long *)(lVar7 + 0x38) == 0) {
        func_0x00f78af4();
        goto code_r0x0155ee54;
      }
      plVar4 = *(long **)(*(long *)(lVar7 + 0x38) + 0x30);
      if (plVar4 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x0155ee54;
      }
      (**(code **)(*plVar4 + 0x7f8))
                (&uStack_d8,plVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar4 + 0x800))
      ;
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      /*UniRx.Async.UniTask<Group>$$GetAwaiter*/ func_0x01b773d0(&uStack_d8,&uStack_c0,uRam0000000003d41510);
      uStack_98 = uStack_d0;
      uStack_a0 = uStack_d8;
      uStack_90 = uStack_c8;
      uVar3 = /*UniRx.Async.UniTask.Awaiter<Group>$$get_IsCompleted*/ func_0x01cf4f60(&uStack_a0,uRam0000000003d2ca00);
      if ((uVar3 & 1) == 0) {
        *param_1 = 4;
        *(undefined8 *)(param_1 + 0x1c) = uStack_98;
        *(undefined8 *)(param_1 + 0x1a) = uStack_a0;
        *(undefined8 *)(param_1 + 0x1e) = uStack_90;
        /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Group>, MatchMakingManager.<FindCreateMatch>d__49>*/ func_0x0182983c(param_1 + 2,&uStack_a0,param_1,uRam0000000003d521b0);
        return;
      }
code_r0x0155e7b8:
      /*UniRx.Async.UniTask.Awaiter<Group>$$GetResult*/ func_0x01cf5044(&uStack_a0,uRam0000000003d2c9f8);
      goto code_r0x0155e828;
    }
  }
  *(undefined1 *)(lVar7 + 0xc4) = 0;
  *(undefined1 *)(lVar7 + 0x90) = 0;
LAB_0155e834:
  *param_1 = 0xfffffffe;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(param_1 + 2,0);
  return;
}



// ============================================================
// RVA: 0x155ee6c | Atlas.Networking.MatchMakingManager.<FindCreateMatch>d__49.SetStateMachine
// ============================================================

void Atlas_Networking_MatchMakingManager__FindCreateMatch_d__49__SetStateMachine
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



