// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.BitField128.Enumerator

// ============================================================
// RVA: 0x163c1e0 | Core.Containers.BitField128.Enumerator..ctor
// ============================================================

void Core_Containers_BitField128_Enumerator___ctor(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}



// ============================================================
// RVA: 0x163cb7c | Core.Containers.BitField128.Enumerator.MoveNext
// ============================================================

bool Core_Containers_BitField128_Enumerator__MoveNext(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1 < 0x80;
}



// ============================================================
// RVA: 0x163cb94 | Core.Containers.BitField128.Enumerator.get_Current
// ============================================================

bool Core_Containers_BitField128_Enumerator__get_Current(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if ((bRam0000000003eb56ec & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56ec = 1;
  }
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8);
  uVar4 = (*(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8))[1];
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = uVar4 << (uVar5 & 0x3f);
  uVar1 = uVar6;
  if ((int)uVar5 < 0x40) {
    uVar1 = uVar3 << (uVar5 & 0x3f) | uVar4 >> ((ulong)-uVar5 & 0x3f);
  }
  uVar2 = 0;
  if ((int)uVar5 < 0x40) {
    uVar2 = uVar6;
  }
  if (uVar5 != 0) {
    uVar4 = uVar2;
    uVar3 = uVar1;
  }
  return (uVar3 & (*(ulong *)*param_1 ^ 0xffffffffffffffff)) == 0 &&
         (uVar4 & (((ulong *)*param_1)[1] ^ 0xffffffffffffffff)) == 0;
}



