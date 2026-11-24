// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass181_0

// ============================================================
// RVA: 0x1687d74 | Core.Services.Internal.<>c__DisplayClass181_0..ctor
// ============================================================

void Core_Services_Internal___c__DisplayClass181_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1687f18 | Core.Services.Internal.<>c__DisplayClass181_0.<SyncNetworkTime>b__2
// ============================================================

ulong Core_Services_Internal___c__DisplayClass181_0___SyncNetworkTime_b__2(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Collections.Generic.List<UniTask<DateTime>>$$GetEnumerator*/ func_0x0235d424(&uStack_a0,*(long *)(param_1 + 0x18),uRam0000000003d39b00);
    iVar6 = 0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<UniTask<DateTime>>$$MoveNext*/ func_0x01f61f20(&uStack_60,uRam0000000003d32080), (uVar3 & 1) != 0) {
      uStack_68 = uStack_48;
      uStack_70 = uStack_50;
      iVar2 = /*UniRx.Async.UniTask<DateTime>$$get_Status*/ func_0x01b76954(&uStack_70,uRam0000000003d41508);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          lVar7 = *(long *)(param_1 + 0x20);
          uVar4 = /*UniRx.Async.UniTask<DateTime>$$get_Result*/ func_0x01b76ab8(&uStack_70,uRam0000000003d41500);
          if (lVar7 == 0) goto code_r0x016880e8;
          *(undefined8 *)(lVar7 + 0x4e8) = uVar4;
          lVar7 = *(long *)(param_1 + 0x20);
          uVar8 = /*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
          if (lVar7 == 0) {
            func_0x00f78af4();
            goto code_r0x016880f4;
          }
          *(undefined4 *)(lVar7 + 0x4f8) = uVar8;
          iStack_80 = 0x82;
          goto code_r0x01688060;
        }
        iVar6 = iVar6 + 1;
      }
    }
    iStack_80 = 0x6b;
code_r0x01688060:
    /*System.Collections.Generic.List.Enumerator<UniTask<DateTime>>$$Dispose*/ func_0x01f61f1c(&uStack_60,uRam0000000003d32078);
    if (iStack_80 == 0x82) {
      return uVar3;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      if (iVar6 != *(int *)(*(long *)(param_1 + 0x18) + 0x18)) {
        return 0;
      }
      goto code_r0x016880b4;
    }
  }
  func_0x00f78af4();
code_r0x016880b4:
  func_0x00f78a24(0x3d24970);
  uVar4 = func_0x00f78aec();
  /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar4,1);
  uVar5 = func_0x00f78a24(0x3d63330);
  func_0x00f78ac0(uVar4,uVar5);
code_r0x016880e8:
  func_0x00f78af4();
code_r0x016880f4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x16880f8);
  (*pcVar1)();
}



