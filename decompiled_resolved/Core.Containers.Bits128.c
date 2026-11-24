// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.Bits128

// ============================================================
// RVA: 0x163c5f0 | Core.Containers.Bits128.op_RightShift
// ============================================================

undefined1  [16] Core_Containers_Bits128__op_RightShift(ulong param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = param_1 >> ((ulong)param_3 & 0x3f);
  uVar1 = uVar3;
  uVar2 = 0;
  if ((int)param_3 < 0x40) {
    uVar1 = param_2 >> (param_3 & 0x3f) | param_1 << ((ulong)-param_3 & 0x3f);
    uVar2 = uVar3;
  }
  if (param_3 != 0) {
    param_2 = uVar1;
    param_1 = uVar2;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



// ============================================================
// RVA: 0x163c624 | Core.Containers.Bits128.op_LeftShift
// ============================================================

undefined1  [16] Core_Containers_Bits128__op_LeftShift(ulong param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = param_2 << (param_3 & 0x3f);
  uVar1 = uVar3;
  if ((int)param_3 < 0x40) {
    uVar1 = param_1 << (param_3 & 0x3f) | param_2 >> ((ulong)-param_3 & 0x3f);
  }
  uVar2 = 0;
  if ((int)param_3 < 0x40) {
    uVar2 = uVar3;
  }
  if (param_3 != 0) {
    param_2 = uVar2;
    param_1 = uVar1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



// ============================================================
// RVA: 0x163c658 | Core.Containers.Bits128.op_BitwiseAnd
// ============================================================

undefined1  [16]
Core_Containers_Bits128__op_BitwiseAnd(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_3 & param_1;
  auVar1._8_8_ = param_4 & param_2;
  return auVar1;
}



// ============================================================
// RVA: 0x163c664 | Core.Containers.Bits128.op_BitwiseOr
// ============================================================

undefined1  [16]
Core_Containers_Bits128__op_BitwiseOr(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_3 | param_1;
  auVar1._8_8_ = param_4 | param_2;
  return auVar1;
}



// ============================================================
// RVA: 0x163c670 | Core.Containers.Bits128.op_ExclusiveOr
// ============================================================

undefined1  [16]
Core_Containers_Bits128__op_ExclusiveOr(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_3 ^ param_1;
  auVar1._8_8_ = param_4 ^ param_2;
  return auVar1;
}



// ============================================================
// RVA: 0x163c67c | Core.Containers.Bits128.op_Equality
// ============================================================

bool Core_Containers_Bits128__op_Equality(long param_1,long param_2,long param_3,long param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



// ============================================================
// RVA: 0x163c68c | Core.Containers.Bits128.op_Inequality
// ============================================================

bool Core_Containers_Bits128__op_Inequality(long param_1,long param_2,long param_3,long param_4)

{
  if ((bRam0000000003eb56e4 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56e4 = 1;
  }
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1 != param_3 || param_2 != param_4;
}



// ============================================================
// RVA: 0x163c710 | Core.Containers.Bits128.op_OnesComplement
// ============================================================

undefined1  [16] Core_Containers_Bits128__op_OnesComplement(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = ~param_1;
  auVar1._8_8_ = ~param_2;
  return auVar1;
}



// ============================================================
// RVA: 0x163c71c | Core.Containers.Bits128.op_GreaterThan
// ============================================================

bool Core_Containers_Bits128__op_GreaterThan(long param_1,ulong param_2,ulong param_3)

{
  return param_1 != 0 || param_3 < param_2;
}



// ============================================================
// RVA: 0x163c72c | Core.Containers.Bits128.op_LessThan
// ============================================================

bool Core_Containers_Bits128__op_LessThan(long param_1,ulong param_2,ulong param_3)

{
  return param_1 == 0 && param_2 < param_3;
}



// ============================================================
// RVA: 0x163c73c | Core.Containers.Bits128.op_Equality
// ============================================================

bool Core_Containers_Bits128__op_Equality(long param_1,long param_2,long param_3)

{
  return param_1 == 0 && param_2 == param_3;
}



// ============================================================
// RVA: 0x163c74c | Core.Containers.Bits128.op_Inequality
// ============================================================

bool Core_Containers_Bits128__op_Inequality(long param_1,long param_2,long param_3)

{
  if ((bRam0000000003eb56e5 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56e5 = 1;
  }
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1 != 0 || param_2 != param_3;
}



// ============================================================
// RVA: 0x163c7cc | Core.Containers.Bits128..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_Containers_Bits128___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000003eb56e6 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56e6 = 1;
  }
  uVar1 = _UNK_033f8650;
  puVar2 = *(undefined8 **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8);
  puVar2[1] = _UNK_033f8658;
  *puVar2 = uVar1;
  return;
}



