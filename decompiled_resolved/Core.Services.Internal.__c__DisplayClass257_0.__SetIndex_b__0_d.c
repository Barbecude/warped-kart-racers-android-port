// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass257_0.<<SetIndex>b__0>d

// ============================================================
// RVA: 0x168a278 | Core.Services.Internal.<>c__DisplayClass257_0.<<SetIndex>b__0>d.MoveNext
// ============================================================

void Core_Services_Internal___c__DisplayClass257_0___SetIndex_b__0_d__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000003eb5a48 & 1) == 0) {
    func_0x00f78a20(0x3d52038);
    func_0x00f78a20(0x3d2ca48);
    func_0x00f78a20(0x3d2ca50);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d41558);
    func_0x00f78a20(0x3d27c38);
    bRam0000000003eb5a48 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 != 0) {
    lVar6 = *(long *)(param_1 + 6);
    if (lVar6 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar5 = *(undefined8 *)(lVar6 + 0x10);
      lVar3 = func_0x00f78aec(/*Core.Services.Internal.XLIndexSetRequest_TypeInfo*/ uRam0000000003d27c38);
      /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0);
      if (lVar3 != 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x18);
        *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar6 + 0x20);
        *(undefined8 *)(lVar3 + 0x10) = uVar7;
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar6 + 0x28);
        if (((*(byte *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Core_Services_Internal__CreateXlIndexRequest(uVar5,1,lVar3,0);
        auStack_50 = /*Core.Services.Internal.HTTP$$Send*/ func_0x0168863c();
        auStack_40 = /*UniRx.Async.UniTask<Internal.HTTP.Response>$$GetAwaiter*/ func_0x01b79904(auStack_50,uRam0000000003d41558);
        uVar4 = /*UniRx.Async.UniTask.Awaiter<Internal.HTTP.Response>$$get_IsCompleted*/ func_0x01cf5ae0(auStack_40,uRam0000000003d2ca50);
        auVar1 = auStack_50;
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_40;
          /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Internal.HTTP.Response>, Internal.<>c__DisplayClass257_0.<<SetIndex>b__0>d>*/ func_0x0181c18c(param_1 + 2,auStack_40,param_1,uRam0000000003d52038);
          return;
        }
        goto LAB_0168a3e4;
      }
      func_0x00f78af4();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x168a4d0);
    (*pcVar2)();
  }
  auStack_40 = *(undefined1 (*) [16])(param_1 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = -1;
LAB_0168a3e4:
  auStack_50 = auVar1;
  /*UniRx.Async.UniTask.Awaiter<Internal.HTTP.Response>$$GetResult*/ func_0x01cf5bb4(auStack_40,uRam0000000003d2ca48);
  *param_1 = -2;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$SetResult*/ func_0x02f99854(param_1 + 2,0);
  return;
}



// ============================================================
// RVA: 0x168a4e4 | Core.Services.Internal.<>c__DisplayClass257_0.<<SetIndex>b__0>d.SetStateMachine
// ============================================================

long Core_Services_Internal___c__DisplayClass257_0___SetIndex_b__0_d__SetStateMachine(long param_1)

{
  return param_1 + 8;
}



