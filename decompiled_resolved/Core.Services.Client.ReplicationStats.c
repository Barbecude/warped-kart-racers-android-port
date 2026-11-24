// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Client.ReplicationStats

// ============================================================
// RVA: 0x16872b4 | Core.Services.Client.ReplicationStats.Reset
// ============================================================

void Core_Services_Client_ReplicationStats__Reset(undefined8 *param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5a30 & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb5a30 = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*System.TimeSpan_TypeInfo*/ lRam0000000003d25238;
  param_1[3] = **(undefined8 **)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xb8);
  param_1[4] = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  param_1[5] = **(undefined8 **)(lVar1 + 0xb8);
  param_1[6] = **(undefined8 **)(lVar1 + 0xb8);
  param_1[7] = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  param_1[8] = **(undefined8 **)(lVar1 + 0xb8);
  return;
}



