// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorViewId

// ============================================================
// RVA: 0x167f054 | Core.Services.ReplicatorViewId.Create
// ============================================================

ulong Core_Services_ReplicatorViewId__Create(ulong param_1,long param_2,long param_3)

{
  return param_1 & 0xffffffff | param_2 << 0x20 | param_3 << 0x30;
}



// ============================================================
// RVA: 0x1682c64 | Core.Services.ReplicatorViewId.CreateSyncIdAndCategory
// ============================================================

uint Core_Services_ReplicatorViewId__CreateSyncIdAndCategory(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != param_1) {
    uVar1 = param_2 & 0xf;
  }
  return uVar1 | (param_3 & 0xf) << 4;
}



// ============================================================
// RVA: 0x1683850 | Core.Services.ReplicatorViewId.Create
// ============================================================

ulong Core_Services_ReplicatorViewId__Create
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  uStack_30 = param_1;
  uStack_28 = param_2;
  lVar1 = Core_Services_ReplicatorStream__get_SyncInstanceId(&uStack_40);
  uVar2 = Core_Services_ReplicatorStream__get_SyncIdAndCategory(&uStack_40);
  uVar3 = (ulong)((uint)uVar2 & 0xf);
  if ((uVar2 & 0xf) == 0) {
    uVar3 = Core_Services_ReplicatorData__get_SyncId(&uStack_30);
  }
  return uVar3 & 0xffffffff | lVar1 << 0x20 | (uVar2 >> 4) << 0x30;
}



