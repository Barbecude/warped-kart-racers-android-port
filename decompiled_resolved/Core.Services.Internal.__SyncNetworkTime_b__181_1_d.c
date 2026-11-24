// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<<SyncNetworkTime>b__181_1>d

// ============================================================
// RVA: 0x168736c | Core.Services.Internal.<<SyncNetworkTime>b__181_1>d.MoveNext
// ============================================================

void Core_Services_Internal___SyncNetworkTime_b__181_1_d__MoveNext(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb5a31 & 1) == 0) {
    func_0x00f78a20(0x3d2c530);
    func_0x00f78a20(0x3d2c538);
    func_0x00f78a20(0x3d2c558);
    func_0x00f78a20(0x3d2c9c8);
    func_0x00f78a20(0x3d2c9d0);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d35548);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d1c8d8);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d39af8);
    func_0x00f78a20(0x3d39af0);
    func_0x00f78a20(0x3d1d758);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d63330);
    func_0x00f78a20(0x3d27bd8);
    func_0x00f78a20(0x3d63338);
    func_0x00f78a20(0x3d27be0);
    func_0x00f78a20(0x3d5fa68);
    func_0x00f78a20(0x3d414a8);
    func_0x00f78a20(0x3d414b8);
    func_0x00f78a20(0x3d414c0);
    func_0x00f78a20(0x3d5fa38);
    func_0x00f78a20(0x3d5fa40);
    func_0x00f78a20(0x3d25710);
    func_0x00f78a20(0x3d67cb0);
    func_0x00f78a20(0x3d7bf20);
    func_0x00f78a20(0x3d68608);
    bRam0000000003eb5a31 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar11 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x12);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_70 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
code_r0x016876f4:
    /*UniRx.Async.UniTask.Awaiter<ValueTuple<bool, object>>$$GetResult*/ func_0x01cf0200(&uStack_80,uRam0000000003d2c9c8);
    piVar1 = param_1 + 0xc;
    iVar3 = /*UniRx.Async.UniTask<object>$$get_Status*/ func_0x01b796f0(piVar1,uRam0000000003d414c0);
    if (iVar3 == 0) {
      if (lVar11 == 0) {
        func_0x00f78af4();
      }
      else {
        uVar9 = func_0x00f78a24(0x3d67ca8);
        Core_Services_Internal__LogError(lVar11,uVar9,0);
        func_0x00f78a24(0x3d24970);
        uVar9 = func_0x00f78aec();
        /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar9,6);
        uVar5 = func_0x00f78a24(0x3d63308);
        func_0x00f78ac0(uVar9,uVar5);
      }
      goto code_r0x01687d5c;
    }
    lVar4 = /*UniRx.Async.UniTask<object>$$get_Result*/ func_0x01b79854(piVar1,uRam0000000003d414b8);
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x01687d5c;
    }
    uStack_c8 = (undefined4)*(undefined8 *)(lVar4 + 0x18);
    uVar9 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_c8);
    uVar9 = /*System.String$$Format*/ func_0x029bcac4(/*STR('<< DNS {0} success, count={1}')*/ uRam0000000003d67cb0,/*STR('time.apple.com')*/ uRam0000000003d7bf20,uVar9,0);
    if (lVar11 == 0) {
      func_0x00f78af4(uVar9,uVar9);
      goto code_r0x01687d5c;
    }
    Core_Services_Internal__LogDebug(lVar11,uVar9,0);
    lVar4 = *(long *)(param_1 + 10);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<UniTask<DateTime>>_TypeInfo*/ uRam0000000003d1d758);
    /*System.Collections.Generic.List<UniTask<DateTime>>$$.ctor*/ func_0x0235bc58(uVar9,uRam0000000003d39af0);
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x01687d5c;
    }
    *(undefined8 *)(lVar4 + 0x18) = uVar9;
    lVar4 = /*UniRx.Async.UniTask<object>$$get_Result*/ func_0x01b79854(piVar1,uRam0000000003d414b8);
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x01687d5c;
    }
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar7 = 0;
      do {
        lVar8 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass181_1_TypeInfo*/ uRam0000000003d27be0);
        /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
        if (lVar8 == 0) {
          func_0x00f78af4();
          goto code_r0x01687d5c;
        }
        lVar10 = *(long *)(param_1 + 10);
        *(long *)(lVar8 + 0x18) = lVar10;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
          uVar9 = func_0x00f78b24();
          func_0x00f78ac0(uVar9,0);
          goto code_r0x01687d5c;
        }
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar4 + 0x20 + uVar7 * 8);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x01687d5c;
        }
        lVar10 = *(long *)(lVar10 + 0x18);
        uVar9 = func_0x00f78aec(/*System.Func<DateTime>_TypeInfo*/ uRam0000000003d1c8d8);
        /*System.Func<DateTime>$$.ctor*/ func_0x021635b8(uVar9,lVar8,uRam0000000003d63338,uRam0000000003d35548);
        if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar12 = /*UniRx.Async.UniTask$$Run<DateTime>*/ func_0x01a39724(uVar9,1,uRam0000000003d5fa38);
        if (lVar10 == 0) {
          func_0x00f78af4();
          goto code_r0x01687d5c;
        }
        /*System.Collections.Generic.List<UniTask<DateTime>>$$Add*/ func_0x0235c920(lVar10,auVar12._0_8_,auVar12._8_8_,uRam0000000003d39af8);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)*(int *)(lVar4 + 0x18));
    }
    uVar5 = *(undefined8 *)(param_1 + 10);
    uVar9 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
    /*System.Func<bool>$$.ctor*/ func_0x02163070(uVar9,uVar5,uRam0000000003d63330,uRam0000000003d35530);
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_b0 = /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(uVar9,4,0,0);
    uStack_a8 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_b0,0);
    uVar7 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_a8,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x16) = uStack_a8;
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<DateTime>$$AwaitUnsafeOnCompleted<UniTask.Awaiter, Internal.<<SyncNetworkTime>b__181_1>d>*/ func_0x01709a9c(param_1 + 2,&uStack_a8,param_1,uRam0000000003d2c538);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar4 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass181_0_TypeInfo*/ uRam0000000003d27bd8);
      /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
      *(long *)(param_1 + 10) = lVar4;
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x01687d5c;
      }
      *(long *)(lVar4 + 0x20) = lVar11;
      if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x4014000000000000,0);
      lVar4 = *(long *)(param_1 + 10);
      uVar5 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x4004000000000000,0);
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x01687d5c;
      }
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x01687d5c;
      }
      Core_Services_Internal__LogDebug(lVar11,/*STR('>> DNS time.apple.com')*/ uRam0000000003d68608,0);
      uVar5 = /*System.Net.Dns$$GetHostAddressesAsync*/ func_0x02ec385c(/*STR('time.apple.com')*/ uRam0000000003d7bf20,0);
      auVar12 = /*UniRx.Async.UniTaskExtensions$$AsUniTask<object>*/ func_0x01a3b018(uVar5,1,uRam0000000003d5fa68);
      *(undefined1 (*) [16])(param_1 + 0xc) = auVar12;
      if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UniRx.Async.UniTask$$Delay*/ func_0x02f9b778(uVar9,1,4,0,0);
      uVar9 = *(undefined8 *)(param_1 + 0xc);
      uVar5 = *(undefined8 *)(param_1 + 0xe);
      if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UniRx.Async.UniTask$$WhenAny<object>*/ func_0x01a3a534(&uStack_c8,uVar9,uVar5,uVar6,uRam0000000003d5fa40);
      uStack_a0 = CONCAT44(uStack_c4,uStack_c8);
      uStack_98 = uStack_c0;
      uStack_90 = uStack_b8;
      /*UniRx.Async.UniTask<ValueTuple<bool, object>>$$GetAwaiter*/ func_0x02902418(&uStack_c8,&uStack_a0,uRam0000000003d414a8);
      uStack_80 = CONCAT44(uStack_c4,uStack_c8);
      uStack_78 = uStack_c0;
      uStack_70 = uStack_b8;
      uVar7 = /*UniRx.Async.UniTask.Awaiter<ValueTuple<bool, object>>$$get_IsCompleted*/ func_0x01cf011c(&uStack_80,uRam0000000003d2c9d0);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = uStack_78;
        *(undefined8 *)(param_1 + 0x10) = uStack_80;
        *(undefined8 *)(param_1 + 0x14) = uStack_70;
        /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<DateTime>$$AwaitUnsafeOnCompleted<UniTask.Awaiter<ValueTuple<bool, object>>, Internal.<<SyncNetworkTime>b__181_1>d>*/ func_0x017093a4(param_1 + 2,&uStack_80,param_1,uRam0000000003d2c530);
        return;
      }
      goto code_r0x016876f4;
    }
    uStack_a8 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_a8,0);
  if (lVar11 != 0) {
    uVar9 = *(undefined8 *)(lVar11 + 0x4e8);
    *param_1 = -2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<DateTime>$$SetResult*/ func_0x01cb023c(param_1 + 2,uVar9,uRam0000000003d2c558);
    return;
  }
  func_0x00f78af4();
code_r0x01687d5c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1687d60);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1687d84 | Core.Services.Internal.<<SyncNetworkTime>b__181_1>d.SetStateMachine
// ============================================================

undefined1  [16]
Core_Services_Internal___SyncNetworkTime_b__181_1_d__SetStateMachine
          (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5a32 & 1) == 0) {
    func_0x00f78a20(0x3d2c560);
    bRam0000000003eb5a32 = 1;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}



