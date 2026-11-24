// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorCircleBuffer

// ============================================================
// RVA: 0x168135c | Core.Services.ReplicatorCircleBuffer.get_IsReady
// ============================================================

bool Core_Services_ReplicatorCircleBuffer__get_IsReady(long param_1)

{
  return *(int *)(param_1 + 0x10) == *(int *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1681370 | Core.Services.ReplicatorCircleBuffer.Create
// ============================================================

void Core_Services_ReplicatorCircleBuffer__Create(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb59f4 & 1) == 0) {
    func_0x00f78a20(0x3d1f5b0);
    bRam0000000003eb59f4 = 1;
  }
  uVar1 = func_0x00f78a34(/*uint[]_TypeInfo*/ uRam0000000003d1f5b0,param_2);
  *param_1 = uVar1;
  *(int *)(param_1 + 1) = (int)param_2;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



// ============================================================
// RVA: 0x16813dc | Core.Services.ReplicatorCircleBuffer.Add
// ============================================================

long * Core_Services_ReplicatorCircleBuffer__Add(long *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)((long)param_1 + 0xc) < *(uint *)(lVar6 + 0x18)) {
    *(undefined4 *)(lVar6 + (long)(int)*(uint *)((long)param_1 + 0xc) * 4 + 0x20) = param_2;
    if (*(uint *)(param_1 + 2) < *(uint *)(param_1 + 1)) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) + 1;
    }
    iVar1 = 0;
    if ((long)(*(int *)((long)param_1 + 0xc) + 1) < (long)(ulong)*(uint *)(param_1 + 1)) {
      iVar1 = *(int *)((long)param_1 + 0xc) + 1;
    }
    *(int *)((long)param_1 + 0xc) = iVar1;
    return param_1;
  }
  uVar4 = func_0x00f78b24();
  plVar5 = (long *)func_0x00f78ac0(uVar4,0);
  uVar2 = *(uint *)(plVar5 + 2);
  if (uVar2 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar6 = *plVar5;
    if (lVar6 == 0) {
code_r0x016814b4:
      lVar6 = func_0x00f78af4();
      return *(long **)(lVar6 + 8);
    }
    lVar8 = 0;
    uVar7 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= (uint)lVar8) {
        uVar4 = func_0x00f78b24();
        func_0x00f78ac0(uVar4,0);
        goto code_r0x016814b4;
      }
      uVar7 = *(int *)(lVar6 + lVar8 * 4 + 0x20) + uVar7;
      lVar8 = (long)(int)((uint)lVar8 + 1);
    } while (lVar8 < (long)(ulong)uVar2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar7 / uVar2;
    }
    plVar5 = (long *)(ulong)uVar3;
  }
  return plVar5;
}



// ============================================================
// RVA: 0x168144c | Core.Services.ReplicatorCircleBuffer.Average
// ============================================================

ulong Core_Services_ReplicatorCircleBuffer__Average(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = *param_1;
    if (lVar5 == 0) {
LAB_016814b4:
      lVar5 = func_0x00f78af4();
      return *(ulong *)(lVar5 + 8);
    }
    lVar7 = 0;
    uVar6 = 0;
    do {
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) {
        uVar4 = func_0x00f78b24();
        func_0x00f78ac0(uVar4,0);
        goto LAB_016814b4;
      }
      uVar6 = *(int *)(lVar5 + lVar7 * 4 + 0x20) + uVar6;
      lVar7 = (long)(int)((uint)lVar7 + 1);
    } while (lVar7 < (long)(ulong)uVar1);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar6 / uVar1;
    }
    uVar3 = (ulong)uVar2;
  }
  return uVar3;
}



