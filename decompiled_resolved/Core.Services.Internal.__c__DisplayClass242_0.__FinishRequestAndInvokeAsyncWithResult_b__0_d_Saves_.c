// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<Saves>

// ============================================================
// RVA: 0x1b13a1c | Core.Services.Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<Saves>.MoveNext
// ============================================================

void Core_Services_Internal___c__DisplayClass242_0___FinishRequestAndInvokeAsyncWithResult_b__0_d_Saves___MoveNext
               (int *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000003eb6aba & 1) == 0) {
    func_0x00f78a20(0x3d2ca08);
    func_0x00f78a20(0x3d2ca10);
    func_0x00f78a20(0x3d41518);
    bRam0000000003eb6aba = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar3 = ZEXT816(0);
  if (*param_1 == 0) {
    auStack_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 10);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x01b13ca8;
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x01b13ca8;
    }
    auStack_50 = Core_Services_Internal__FinishRequestAndInvokeAsync
                           (*(long *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18),
                            *(undefined1 *)(lVar8 + 0x20),0);
    auStack_40 = /*UniRx.Async.UniTask<Internal.HTTP.Response>$$GetAwaiter*/ func_0x01b79904(auStack_50,uRam0000000003d41518);
    uVar5 = /*UniRx.Async.UniTask.Awaiter<Internal.HTTP.Response>$$get_IsCompleted*/ func_0x01cf5ae0(auStack_40,uRam0000000003d2ca10);
    auVar3 = auStack_50;
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = auStack_40;
      lVar8 = *(long *)(param_2 + 0x18);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Saves>$$AwaitUnsafeOnCompleted<UniTask.Awaiter<object>, Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<Saves>>*/ func_0x0170e0f4(param_1 + 2,auStack_40,param_1,**(undefined8 **)(lVar8 + 0xc0));
      return;
    }
  }
  auStack_50 = auVar3;
  plVar6 = (long *)/*UniRx.Async.UniTask.Awaiter<Internal.HTTP.Response>$$GetResult*/ func_0x01cf5bb4(auStack_40,uRam0000000003d2ca08);
  lVar8 = *(long *)(param_2 + 0x18);
  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar8);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar8);
  }
  if (plVar6 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar8 + 0x40)) {
      puVar7 = (undefined8 *)func_0x00f78ae4(plVar6);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      *param_1 = -2;
      lVar8 = *(long *)(param_2 + 0x18);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Saves>$$SetResult*/ func_0x01cb2568(param_1 + 2,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
      return;
    }
    func_0x00f78e5c(plVar6,lVar8);
  }
code_r0x01b13ca8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1b13cac);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x1b13cc0 | Core.Services.Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<Saves>.SetStateMachine
// ============================================================

undefined1  [16]
Core_Services_Internal___c__DisplayClass242_0___FinishRequestAndInvokeAsyncWithResult_b__0_d_Saves___SetStateMachine
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028(*(long *)(param_3 + 0x18));
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}



