// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkSessionId

// ============================================================
// RVA: 0x165d344 | Core.Networking.NetworkSessionId..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0165d35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165d360) */
/* WARNING: Removing unreachable block (ram,0x0165d388) */
/* WARNING: Removing unreachable block (ram,0x0165d3bc) */
/* WARNING: Removing unreachable block (ram,0x0165d3dc) */
/* WARNING: Removing unreachable block (ram,0x0165d368) */

void Core_Networking_NetworkSessionId___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x166049c | Core.Networking.NetworkSessionId.ToString
// ============================================================

undefined8 Core_Networking_NetworkSessionId__ToString(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x16604a4 | Core.Networking.NetworkSessionId.Equals
// ============================================================

uint Core_Networking_NetworkSessionId__Equals(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != (long *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    return (uint)(iVar1 == iVar2);
  }
  lVar3 = func_0x00f78af4();
  return *(uint *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x16604e4 | Core.Networking.NetworkSessionId.GetHashCode
// ============================================================

undefined4 Core_Networking_NetworkSessionId__GetHashCode(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x16604ec | Core.Networking.NetworkSessionId.op_Equality
// ============================================================

uint Core_Networking_NetworkSessionId__op_Equality(long param_1,long param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    return (uint)(*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18));
  }
  auVar2 = func_0x00f78af4();
  if ((auVar2._0_8_ != 0) && (auVar2._8_8_ != 0)) {
    return (uint)(*(int *)(auVar2._0_8_ + 0x18) == *(int *)(auVar2._8_8_ + 0x18));
  }
  puVar1 = (uint *)func_0x00f78af4();
  return *puVar1;
}



// ============================================================
// RVA: 0x1660518 | Core.Networking.NetworkSessionId.op_Inequality
// ============================================================

uint Core_Networking_NetworkSessionId__op_Inequality(long param_1,long param_2)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    return (uint)(*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18));
  }
  puVar1 = (uint *)func_0x00f78af4();
  return *puVar1;
}



