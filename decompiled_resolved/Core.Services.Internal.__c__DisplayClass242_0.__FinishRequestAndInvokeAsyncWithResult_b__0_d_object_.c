// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<object>

// ============================================================
// RVA: 0x1b1315c | Core.Services.Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<object>.MoveNext
// ============================================================

void Core_Services_Internal___c__DisplayClass242_0___FinishRequestAndInvokeAsyncWithResult_b__0_d_object___MoveNext
               (int *param_1,long param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000003eb6ab7 & 1) == 0) {
    func_0x00f78a20(0x3d2ca08);
    func_0x00f78a20(0x3d2ca10);
    func_0x00f78a20(0x3d41518);
    bRam0000000003eb6ab7 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x01b133d8;
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x01b133d8;
    }
    auStack_60 = Core_Services_Internal__FinishRequestAndInvokeAsync
                           (*(long *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                            *(undefined1 *)(lVar5 + 0x20),0);
    auStack_50 = /*UniRx.Async.UniTask<Internal.HTTP.Response>$$GetAwaiter*/ func_0x01b79904(auStack_60,uRam0000000003d41518);
    uVar3 = /*UniRx.Async.UniTask.Awaiter<Internal.HTTP.Response>$$get_IsCompleted*/ func_0x01cf5ae0(auStack_50,uRam0000000003d2ca10);
    auVar1 = auStack_60;
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_50;
      lVar5 = *(long *)(param_2 + 0x18);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<object>$$AwaitUnsafeOnCompleted<UniTask.Awaiter<object>, Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<object>>*/ func_0x0170af04(param_1 + 2,auStack_50,param_1,**(undefined8 **)(lVar5 + 0xc0));
      return;
    }
  }
  auStack_60 = auVar1;
  lVar5 = /*UniRx.Async.UniTask.Awaiter<Internal.HTTP.Response>$$GetResult*/ func_0x01cf5bb4(auStack_50,uRam0000000003d2ca08);
  lVar6 = *(long *)(param_2 + 0x18);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = func_0x00f78adc(lVar5,lVar6);
    if (lVar4 == 0) {
      func_0x00f78e5c(lVar5,lVar6);
code_r0x01b133d8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1b133dc);
      (*pcVar2)();
    }
  }
  *param_1 = -2;
  lVar5 = *(long *)(param_2 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$SetResult*/ func_0x01cb1820(param_1 + 2,lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
  return;
}



// ============================================================
// RVA: 0x1b133f0 | Core.Services.Internal.<>c__DisplayClass242_0.<<FinishRequestAndInvokeAsyncWithResult>b__0>d<object>.SetStateMachine
// ============================================================

undefined1  [16]
Core_Services_Internal___c__DisplayClass242_0___FinishRequestAndInvokeAsyncWithResult_b__0_d_object___SetStateMachine
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



