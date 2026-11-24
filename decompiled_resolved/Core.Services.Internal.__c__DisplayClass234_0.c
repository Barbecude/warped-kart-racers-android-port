// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass234_0

// ============================================================
// RVA: 0x16884bc | Core.Services.Internal.<>c__DisplayClass234_0..ctor
// ============================================================

void Core_Services_Internal___c__DisplayClass234_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x16884c4 | Core.Services.Internal.<>c__DisplayClass234_0.<OnResponse>b__0
// ============================================================

ulong Core_Services_Internal___c__DisplayClass234_0___OnResponse_b__0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    iVar2 = /*Core.Services.Response$$get_RequestId*/ func_0x01683e94(param_1 + 0x10);
    return (ulong)(iVar1 == iVar2);
  }
  uVar3 = func_0x00f78af4();
  return uVar3;
}



