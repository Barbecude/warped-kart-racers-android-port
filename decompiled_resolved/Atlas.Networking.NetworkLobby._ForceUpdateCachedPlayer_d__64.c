// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkLobby.<ForceUpdateCachedPlayer>d__64

// ============================================================
// RVA: 0x15614fc | Atlas.Networking.NetworkLobby.<ForceUpdateCachedPlayer>d__64.MoveNext
// ============================================================

void Atlas_Networking_NetworkLobby__ForceUpdateCachedPlayer_d__64__MoveNext(int *param_1)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000003eb4fc3 & 1) == 0) {
    func_0x00f78a20(0x3d521c8);
    func_0x00f78a20(0x3d2ca18);
    func_0x00f78a20(0x3d2ca20);
    func_0x00f78a20(0x3d3ebe0);
    func_0x00f78a20(0x3d41538);
    bRam0000000003eb4fc3 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar4 = *(long *)(param_1 + 10);
  if (*param_1 == 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0xe);
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
    uStack_30 = *(undefined8 *)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    if (*(long *)(lVar4 + 0x70) == 0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 0x70) + 0x30);
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    uVar3 = (**(code **)(*plVar2 + 0x7a8))(plVar2,*(undefined8 *)(*plVar2 + 0x7b0));
    if ((uVar3 & 1) == 0) goto LAB_015616c0;
    if (*(long *)(lVar4 + 0x70) == 0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 0x70) + 0x30);
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    (**(code **)(*plVar2 + 0x758))(&uStack_78,plVar2,*(undefined8 *)(*plVar2 + 0x760));
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    uStack_50 = uStack_68;
    /*UniRx.Async.UniTask<Player>$$GetAwaiter*/ func_0x01b7a14c(&uStack_78,&uStack_60,uRam0000000003d41538);
    uStack_38 = uStack_70;
    uStack_40 = uStack_78;
    uStack_30 = uStack_68;
    uVar3 = /*UniRx.Async.UniTask.Awaiter<Player>$$get_IsCompleted*/ func_0x01cf62cc(&uStack_40,uRam0000000003d2ca20);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_38;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_30;
      /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Player>, NetworkLobby.<ForceUpdateCachedPlayer>d__64>*/ func_0x0182a1e8(param_1 + 2,&uStack_40,param_1,uRam0000000003d521c8);
      return;
    }
  }
  auVar5 = /*UniRx.Async.UniTask.Awaiter<Player>$$GetResult*/ func_0x01cf63b0(&uStack_40,uRam0000000003d2ca18);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_78,auVar5._0_8_,auVar5._8_8_,uRam0000000003d3ebe0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0xb8) = uStack_70;
    *(undefined8 *)(lVar4 + 0xb0) = uStack_78;
    *(undefined8 *)(lVar4 + 0xc0) = uStack_68;
LAB_015616c0:
    *param_1 = -2;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(param_1 + 2,0);
    return;
  }
  func_0x00f78af4();
code_r0x015617b8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15617bc);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15617d0 | Atlas.Networking.NetworkLobby.<ForceUpdateCachedPlayer>d__64.SetStateMachine
// ============================================================

void Atlas_Networking_NetworkLobby__ForceUpdateCachedPlayer_d__64__SetStateMachine
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



