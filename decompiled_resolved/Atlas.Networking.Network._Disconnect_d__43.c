// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.Network.<Disconnect>d__43

// ============================================================
// RVA: 0x1560c2c | Atlas.Networking.Network.<Disconnect>d__43.MoveNext
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01560e18) */

void Atlas_Networking_Network__Disconnect_d__43__MoveNext(int *param_1)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 auStack_78 [9];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4fc1 & 1) == 0) {
    func_0x00f78a20(0x3d52210);
    bRam0000000003eb4fc1 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  iVar6 = *param_1;
  lVar5 = *(long *)(param_1 + 10);
  if (iVar6 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iVar6 = -1;
    *param_1 = -1;
LAB_01560d5c:
    /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_48,0);
    auStack_78[0] = 0xee;
    uStack_54 = 1;
    if (iVar6 < 0) {
      if (lVar5 == 0) {
        func_0x00f78af4();
code_r0x01560fdc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1560fe0);
        (*pcVar1)();
      }
      if (*(long *)(lVar5 + 0x18) == 0) {
        func_0x00f78af4();
        goto code_r0x01560fdc;
      }
      plVar2 = *(long **)(*(long *)(lVar5 + 0x18) + 0x30);
      if (plVar2 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01560fdc;
      }
      (**(code **)(*plVar2 + 0x648))(plVar2,*(undefined8 *)(*plVar2 + 0x650));
    }
  }
  else {
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x01560fdc;
    }
    if (((*(long *)(lVar5 + 0x18) == 0) ||
        (plVar2 = *(long **)(*(long *)(lVar5 + 0x18) + 0x30), plVar2 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar2 + 0x4e8))(plVar2,*(undefined8 *)(*plVar2 + 0x4f0)),
       (uVar3 & 1) == 0)) goto LAB_01560de4;
    if (*(long *)(lVar5 + 0x18) == 0) {
      func_0x00f78af4();
      goto code_r0x01560fdc;
    }
    plVar2 = *(long **)(*(long *)(lVar5 + 0x18) + 0x30);
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x01560fdc;
    }
    uVar3 = (**(code **)(*plVar2 + 0x848))(plVar2,*(undefined8 *)(*plVar2 + 0x850));
    lVar4 = *(long *)(lVar5 + 0x18);
    if ((uVar3 & 1) == 0) {
      if (lVar4 == 0) {
        func_0x00f78af4();
      }
      else {
        plVar2 = *(long **)(lVar4 + 0x30);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x648))(plVar2,*(undefined8 *)(*plVar2 + 0x650));
          goto LAB_01560de4;
        }
        func_0x00f78af4();
      }
      goto code_r0x01560fdc;
    }
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x01560fdc;
    }
    plVar2 = *(long **)(lVar4 + 0x30);
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x01560fdc;
    }
    uStack_50 = (**(code **)(*plVar2 + 0x808))(plVar2,*(undefined8 *)(*plVar2 + 0x810));
    uStack_48 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_50,0);
    uVar3 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_48,0);
    if ((uVar3 & 1) != 0) goto LAB_01560d5c;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = uStack_48;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, Network.<Disconnect>d__43>*/ func_0x0182bf24(param_1 + 2,&uStack_48,param_1,uRam0000000003d52210);
    auStack_78[0] = 0x11c;
    uStack_54 = 1;
  }
  if (*(int *)(((ulong)auStack_78 | 4) - 4) == 0x11c) {
    return;
  }
LAB_01560de4:
  *param_1 = -2;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(param_1 + 2,0);
  return;
}



// ============================================================
// RVA: 0x1560ff4 | Atlas.Networking.Network.<Disconnect>d__43.SetStateMachine
// ============================================================

void Atlas_Networking_Network__Disconnect_d__43__SetStateMachine(long param_1,long param_2)

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



