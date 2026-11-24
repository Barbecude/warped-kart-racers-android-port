// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c

// ============================================================
// RVA: 0x1687de0 | Core.Services.Internal.<>c..cctor
// ============================================================

void Core_Services_Internal___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5a33 & 1) == 0) {
    func_0x00f78a20(0x3d27bd0);
    bRam0000000003eb5a33 = 1;
  }
  uVar1 = func_0x00f78aec(/*Core.Services.Internal.<>c_TypeInfo*/ lRam0000000003d27bd0);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Core.Services.Internal.<>c_TypeInfo*/ lRam0000000003d27bd0 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1687e40 | Core.Services.Internal.<>c..ctor
// ============================================================

void Core_Services_Internal___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1687e48 | Core.Services.Internal.<>c.<.ctor>b__50_0
// ============================================================

void Core_Services_Internal___c____ctor_b__50_0(void)

{
  return;
}



// ============================================================
// RVA: 0x1687e4c | Core.Services.Internal.<>c.<.ctor>b__50_1
// ============================================================

void Core_Services_Internal___c____ctor_b__50_1(void)

{
  return;
}



// ============================================================
// RVA: 0x1687e50 | Core.Services.Internal.<>c.<SyncNetworkTime>b__181_0
// ============================================================

ulong Core_Services_Internal___c___SyncNetworkTime_b__181_0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x1;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_50 [16];
  
  func_0x00f78a24(0x3d24970);
  uVar3 = func_0x00f78aec();
  /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar3,4);
  uVar4 = func_0x00f78a24(0x3d63328);
  func_0x00f78ac0(uVar3,uVar4);
  if ((bRam0000000003eb5a34 & 1) == 0) {
    func_0x00f78a20(0x3d41480);
    func_0x00f78a20(0x3d41520);
    bRam0000000003eb5a34 = 1;
  }
  if ((extraout_x1 != 0) && (*(long *)(extraout_x1 + 0x20) != 0)) {
    auStack_50 = /*UniRx.Async.UniTaskCompletionSource<object>$$get_Task*/ func_0x028b51dc(*(long *)(extraout_x1 + 0x20),uRam0000000003d41480);
    uVar5 = /*UniRx.Async.UniTask<object>$$get_IsCompleted*/ func_0x01b797a0(auStack_50,uRam0000000003d41520);
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5a35 & 1) == 0) {
    func_0x00f78a20(0x3d32078);
    func_0x00f78a20(0x3d32080);
    func_0x00f78a20(0x3d32088);
    func_0x00f78a20(0x3d39b00);
    func_0x00f78a20(0x3d39b08);
    func_0x00f78a20(0x3d41500);
    func_0x00f78a20(0x3d41508);
    bRam0000000003eb5a35 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  if (*(long *)(lVar6 + 0x18) != 0) {
    /*System.Collections.Generic.List<UniTask<DateTime>>$$GetEnumerator*/ func_0x0235d424(&uStack_f0,*(long *)(lVar6 + 0x18),uRam0000000003d39b00);
    iVar7 = 0;
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<UniTask<DateTime>>$$MoveNext*/ func_0x01f61f20(&uStack_b0,uRam0000000003d32080), (uVar5 & 1) != 0) {
      uStack_b8 = uStack_98;
      uStack_c0 = uStack_a0;
      iVar2 = /*UniRx.Async.UniTask<DateTime>$$get_Status*/ func_0x01b76954(&uStack_c0,uRam0000000003d41508);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          lVar8 = *(long *)(lVar6 + 0x20);
          uVar3 = /*UniRx.Async.UniTask<DateTime>$$get_Result*/ func_0x01b76ab8(&uStack_c0,uRam0000000003d41500);
          if (lVar8 == 0) goto code_r0x016880e8;
          *(undefined8 *)(lVar8 + 0x4e8) = uVar3;
          lVar8 = *(long *)(lVar6 + 0x20);
          uVar9 = /*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x016880f4;
          }
          *(undefined4 *)(lVar8 + 0x4f8) = uVar9;
          iStack_d0 = 0x82;
          goto code_r0x01688060;
        }
        iVar7 = iVar7 + 1;
      }
    }
    iStack_d0 = 0x6b;
code_r0x01688060:
    /*System.Collections.Generic.List.Enumerator<UniTask<DateTime>>$$Dispose*/ func_0x01f61f1c(&uStack_b0,uRam0000000003d32078);
    if (iStack_d0 == 0x82) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
      if (iVar7 != *(int *)(*(long *)(lVar6 + 0x18) + 0x18)) {
        return 0;
      }
      goto code_r0x016880b4;
    }
  }
  func_0x00f78af4();
code_r0x016880b4:
  func_0x00f78a24(0x3d24970);
  uVar3 = func_0x00f78aec();
  /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar3,1);
  uVar4 = func_0x00f78a24(0x3d63330);
  func_0x00f78ac0(uVar3,uVar4);
code_r0x016880e8:
  func_0x00f78af4();
code_r0x016880f4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x16880f8);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1687e90 | Core.Services.Internal.<>c.<CreateNativeRequest>b__244_0
// ============================================================

ulong Core_Services_Internal___c___CreateNativeRequest_b__244_0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000003eb5a34 & 1) == 0) {
    func_0x00f78a20(0x3d41480);
    func_0x00f78a20(0x3d41520);
    bRam0000000003eb5a34 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    auStack_30 = /*UniRx.Async.UniTaskCompletionSource<object>$$get_Task*/ func_0x028b51dc(*(long *)(param_2 + 0x20),uRam0000000003d41480);
    uVar3 = /*UniRx.Async.UniTask<object>$$get_IsCompleted*/ func_0x01b797a0(auStack_30,uRam0000000003d41520);
    return uVar3;
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5a35 & 1) == 0) {
    func_0x00f78a20(0x3d32078);
    func_0x00f78a20(0x3d32080);
    func_0x00f78a20(0x3d32088);
    func_0x00f78a20(0x3d39b00);
    func_0x00f78a20(0x3d39b08);
    func_0x00f78a20(0x3d41500);
    func_0x00f78a20(0x3d41508);
    bRam0000000003eb5a35 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  if (*(long *)(lVar4 + 0x18) != 0) {
    /*System.Collections.Generic.List<UniTask<DateTime>>$$GetEnumerator*/ func_0x0235d424(&uStack_d0,*(long *)(lVar4 + 0x18),uRam0000000003d39b00);
    iVar7 = 0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<UniTask<DateTime>>$$MoveNext*/ func_0x01f61f20(&uStack_90,uRam0000000003d32080), (uVar3 & 1) != 0) {
      uStack_98 = uStack_78;
      uStack_a0 = uStack_80;
      iVar2 = /*UniRx.Async.UniTask<DateTime>$$get_Status*/ func_0x01b76954(&uStack_a0,uRam0000000003d41508);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          lVar8 = *(long *)(lVar4 + 0x20);
          uVar5 = /*UniRx.Async.UniTask<DateTime>$$get_Result*/ func_0x01b76ab8(&uStack_a0,uRam0000000003d41500);
          if (lVar8 == 0) goto code_r0x016880e8;
          *(undefined8 *)(lVar8 + 0x4e8) = uVar5;
          lVar8 = *(long *)(lVar4 + 0x20);
          uVar9 = /*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x016880f4;
          }
          *(undefined4 *)(lVar8 + 0x4f8) = uVar9;
          iStack_b0 = 0x82;
          goto code_r0x01688060;
        }
        iVar7 = iVar7 + 1;
      }
    }
    iStack_b0 = 0x6b;
code_r0x01688060:
    /*System.Collections.Generic.List.Enumerator<UniTask<DateTime>>$$Dispose*/ func_0x01f61f1c(&uStack_90,uRam0000000003d32078);
    if (iStack_b0 == 0x82) {
      return uVar3;
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      if (iVar7 != *(int *)(*(long *)(lVar4 + 0x18) + 0x18)) {
        return 0;
      }
      goto code_r0x016880b4;
    }
  }
  func_0x00f78af4();
code_r0x016880b4:
  func_0x00f78a24(0x3d24970);
  uVar5 = func_0x00f78aec();
  /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar5,1);
  uVar6 = func_0x00f78a24(0x3d63330);
  func_0x00f78ac0(uVar5,uVar6);
code_r0x016880e8:
  func_0x00f78af4();
code_r0x016880f4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x16880f8);
  (*pcVar1)();
}



