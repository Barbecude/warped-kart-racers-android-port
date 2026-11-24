// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.BitField8

// ============================================================
// RVA: 0x163c470 | Core.Containers.BitField8..ctor
// ============================================================

void Core_Containers_BitField8___ctor(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



// ============================================================
// RVA: 0x163c478 | Core.Containers.BitField8.get_Item
// ============================================================

byte Core_Containers_BitField8__get_Item(byte *param_1,uint param_2)

{
  return *param_1 >> (ulong)(param_2 & 0x1f) & 1;
}



// ============================================================
// RVA: 0x163c488 | Core.Containers.BitField8.RequireIndexInBounds
// ============================================================

void Core_Containers_BitField8__RequireIndexInBounds(void)

{
  return;
}



// ============================================================
// RVA: 0x163c48c | Core.Containers.BitField8.set_Item
// ============================================================

void Core_Containers_BitField8__set_Item(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = (byte)(1 << (ulong)(param_2 & 0x1f));
  bVar1 = *param_1 | bVar2;
  if (param_3 == 0) {
    bVar1 = *param_1 & (bVar2 ^ 0xff);
  }
  *param_1 = bVar1;
  return;
}



// ============================================================
// RVA: 0x163c4b0 | Core.Containers.BitField8.get_Length
// ============================================================

undefined8 Core_Containers_BitField8__get_Length(void)

{
  return 8;
}



// ============================================================
// RVA: 0x163c4b8 | Core.Containers.BitField8.SetBit
// ============================================================

void Core_Containers_BitField8__SetBit(byte *param_1,uint param_2)

{
  *param_1 = *param_1 | (byte)(1 << (ulong)(param_2 & 0x1f));
  return;
}



// ============================================================
// RVA: 0x163c4d0 | Core.Containers.BitField8.UnsetBit
// ============================================================

void Core_Containers_BitField8__UnsetBit(byte *param_1,uint param_2)

{
  *param_1 = *param_1 & ((byte)(1 << (ulong)(param_2 & 0x1f)) ^ 0xff);
  return;
}



// ============================================================
// RVA: 0x163c4e8 | Core.Containers.BitField8.GetBits
// ============================================================

byte Core_Containers_BitField8__GetBits(byte *param_1,byte param_2)

{
  return *param_1 & param_2;
}



// ============================================================
// RVA: 0x163c4f4 | Core.Containers.BitField8.SetBits
// ============================================================

void Core_Containers_BitField8__SetBits(byte *param_1,byte param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



// ============================================================
// RVA: 0x163c504 | Core.Containers.BitField8.CombineBits
// ============================================================

uint Core_Containers_BitField8__CombineBits(byte *param_1,uint param_2)

{
  return *param_1 | param_2;
}



// ============================================================
// RVA: 0x163c510 | Core.Containers.BitField8.CombineBits
// ============================================================

uint Core_Containers_BitField8__CombineBits(byte *param_1,uint param_2)

{
  return *param_1 | param_2;
}



// ============================================================
// RVA: 0x163c51c | Core.Containers.BitField8.Equals
// ============================================================

bool Core_Containers_BitField8__Equals(char *param_1,long *param_2)

{
  bool bVar1;
  char *pcVar2;
  
  if ((bRam0000000003eb56e3 & 1) == 0) {
    func_0x00f78a20(0x3d201b8);
    bRam0000000003eb56e3 = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != /*Core.Containers.BitField8_TypeInfo*/ lRam0000000003d201b8)) {
    bVar1 = false;
  }
  else {
    pcVar2 = (char *)func_0x00f78ae4(param_2);
    bVar1 = *param_1 == *pcVar2;
  }
  return bVar1;
}



// ============================================================
// RVA: 0x163c5a0 | Core.Containers.BitField8.Equals
// ============================================================

bool Core_Containers_BitField8__Equals(char *param_1,char param_2)

{
  return *param_1 == param_2;
}



// ============================================================
// RVA: 0x163c5b0 | Core.Containers.BitField8.GetHashCode
// ============================================================

undefined1 Core_Containers_BitField8__GetHashCode(undefined1 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x163c5b8 | Core.Containers.BitField8.CountBits
// ============================================================

uint Core_Containers_BitField8__CountBits(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1 - (*param_1 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  return (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
}



