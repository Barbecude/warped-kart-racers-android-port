// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkLobby.<>c__DisplayClass38_0

// ============================================================
// RVA: 0x1561438 | Atlas.Networking.NetworkLobby.<>c__DisplayClass38_0..ctor
// ============================================================

void Atlas_Networking_NetworkLobby___c__DisplayClass38_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1561440 | Atlas.Networking.NetworkLobby.<>c__DisplayClass38_0.<Clear>b__0
// ============================================================

void Atlas_Networking_NetworkLobby___c__DisplayClass38_0___Clear_b__0
               (long param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR_03a5d648;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar4 = 1;
LAB_015614cc:
    if (*(long *)PTR_03a5d648 == lStack_28) {
      return;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x70), lVar6 != 0)) {
      plVar7 = *(long **)(lVar6 + 0x30);
      uVar3 = /*Core.Services.Player$$get_Id*/ func_0x0167e3f0(param_2,0);
      /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&uStack_b0,uVar3,0);
      if (plVar7 != (long *)0x0) {
        uStack_68 = uStack_a8;
        uStack_70 = uStack_b0;
        uStack_58 = uStack_98;
        uStack_60 = uStack_a0;
        uStack_48 = uStack_88;
        uStack_50 = uStack_90;
        uStack_38 = uStack_78;
        uStack_40 = uStack_80;
        uVar2 = (**(code **)(*plVar7 + 0x958))(plVar7,&uStack_70,*(undefined8 *)(*plVar7 + 0x960));
        uVar4 = (ulong)(uVar2 ^ 1);
        goto LAB_015614cc;
      }
    }
    uVar4 = func_0x00f78af4();
  }
  piVar5 = (int *)___stack_chk_fail(uVar4);
  if ((bRam0000000003eb4fc3 & 1) == 0) {
    func_0x00f78a20(0x3d521c8);
    func_0x00f78a20(0x3d2ca18);
    func_0x00f78a20(0x3d2ca20);
    func_0x00f78a20(0x3d3ebe0);
    func_0x00f78a20(0x3d41538);
    bRam0000000003eb4fc3 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(piVar5 + 10);
  if (*piVar5 == 0) {
    uStack_e8 = *(undefined8 *)(piVar5 + 0xe);
    uStack_f0 = *(undefined8 *)(piVar5 + 0xc);
    uStack_e0 = *(undefined8 *)(piVar5 + 0x10);
    piVar5[0xe] = 0;
    piVar5[0xf] = 0;
    piVar5[0x10] = 0;
    piVar5[0x11] = 0;
    piVar5[0xc] = 0;
    piVar5[0xd] = 0;
    *piVar5 = -1;
  }
  else {
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    if (*(long *)(lVar6 + 0x70) == 0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 0x70) + 0x30);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    uVar4 = (**(code **)(*plVar7 + 0x7a8))(plVar7,*(undefined8 *)(*plVar7 + 0x7b0));
    if ((uVar4 & 1) == 0) goto code_r0x015616c0;
    if (*(long *)(lVar6 + 0x70) == 0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 0x70) + 0x30);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015617b8;
    }
    (**(code **)(*plVar7 + 0x758))(&uStack_128,plVar7,*(undefined8 *)(*plVar7 + 0x760));
    uStack_108 = uStack_120;
    uStack_110 = uStack_128;
    uStack_100 = uStack_118;
    /*UniRx.Async.UniTask<Player>$$GetAwaiter*/ func_0x01b7a14c(&uStack_128,&uStack_110,uRam0000000003d41538);
    uStack_e8 = uStack_120;
    uStack_f0 = uStack_128;
    uStack_e0 = uStack_118;
    uVar4 = /*UniRx.Async.UniTask.Awaiter<Player>$$get_IsCompleted*/ func_0x01cf62cc(&uStack_f0,uRam0000000003d2ca20);
    if ((uVar4 & 1) == 0) {
      *piVar5 = 0;
      *(undefined8 *)(piVar5 + 0xe) = uStack_e8;
      *(undefined8 *)(piVar5 + 0xc) = uStack_f0;
      *(undefined8 *)(piVar5 + 0x10) = uStack_e0;
      /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Player>, NetworkLobby.<ForceUpdateCachedPlayer>d__64>*/ func_0x0182a1e8(piVar5 + 2,&uStack_f0,piVar5,uRam0000000003d521c8);
      return;
    }
  }
  auVar8 = /*UniRx.Async.UniTask.Awaiter<Player>$$GetResult*/ func_0x01cf63b0(&uStack_f0,uRam0000000003d2ca18);
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_128,auVar8._0_8_,auVar8._8_8_,uRam0000000003d3ebe0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0xb8) = uStack_120;
    *(undefined8 *)(lVar6 + 0xb0) = uStack_128;
    *(undefined8 *)(lVar6 + 0xc0) = uStack_118;
code_r0x015616c0:
    *piVar5 = -2;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(piVar5 + 2,0);
    return;
  }
  func_0x00f78af4();
code_r0x015617b8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15617bc);
  (*pcVar1)();
}



