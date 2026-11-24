// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.BitField64

// ============================================================
// RVA: 0x163c1f0 | Core.Containers.BitField64..ctor
// ============================================================

void Core_Containers_BitField64___ctor(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// ============================================================
// RVA: 0x163c1f8 | Core.Containers.BitField64.get_Item
// ============================================================

uint Core_Containers_BitField64__get_Item(ulong *param_1,ulong param_2)

{
  return (uint)(*param_1 >> (param_2 & 0x3f)) & 1;
}



// ============================================================
// RVA: 0x163c208 | Core.Containers.BitField64.set_Item
// ============================================================

void Core_Containers_BitField64__set_Item(ulong *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = 1L << (param_2 & 0x3f);
  uVar1 = *param_1 | uVar2;
  if (param_3 == 0) {
    uVar1 = *param_1 & (uVar2 ^ 0xffffffffffffffff);
  }
  *param_1 = uVar1;
  return;
}



// ============================================================
// RVA: 0x163c22c | Core.Containers.BitField64.get_Length
// ============================================================

undefined8 Core_Containers_BitField64__get_Length(void)

{
  return 0x40;
}



// ============================================================
// RVA: 0x163c234 | Core.Containers.BitField64.SetBit
// ============================================================

void Core_Containers_BitField64__SetBit(ulong *param_1,ulong param_2)

{
  *param_1 = *param_1 | 1L << (param_2 & 0x3f);
  return;
}



// ============================================================
// RVA: 0x163c24c | Core.Containers.BitField64.UnsetBit
// ============================================================

void Core_Containers_BitField64__UnsetBit(ulong *param_1,ulong param_2)

{
  *param_1 = *param_1 & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
  return;
}



// ============================================================
// RVA: 0x163c264 | Core.Containers.BitField64.GetBits
// ============================================================

ulong Core_Containers_BitField64__GetBits(ulong *param_1,ulong param_2)

{
  return *param_1 & param_2;
}



// ============================================================
// RVA: 0x163c270 | Core.Containers.BitField64.SetBits
// ============================================================

void Core_Containers_BitField64__SetBits(ulong *param_1,ulong param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



// ============================================================
// RVA: 0x163c280 | Core.Containers.BitField64.UnsetBits
// ============================================================

void Core_Containers_BitField64__UnsetBits(ulong *param_1,ulong param_2)

{
  *param_1 = *param_1 & (param_2 ^ 0xffffffffffffffff);
  return;
}



// ============================================================
// RVA: 0x163c290 | Core.Containers.BitField64.Equals
// ============================================================

bool Core_Containers_BitField64__Equals(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  
  if ((bRam0000000003eb56e1 & 1) == 0) {
    func_0x00f78a20(0x3d201b0);
    bRam0000000003eb56e1 = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != /*Core.Containers.BitField64_TypeInfo*/ lRam0000000003d201b0)) {
    bVar1 = false;
  }
  else {
    plVar2 = (long *)func_0x00f78ae4(param_2);
    bVar1 = *param_1 == *plVar2;
  }
  return bVar1;
}



// ============================================================
// RVA: 0x163c314 | Core.Containers.BitField64.Equals
// ============================================================

bool Core_Containers_BitField64__Equals(long *param_1,long param_2)

{
  return *param_1 == param_2;
}



// ============================================================
// RVA: 0x163c324 | Core.Containers.BitField64.GetHashCode
// ============================================================

uint Core_Containers_BitField64__GetHashCode(uint *param_1)

{
  return param_1[1] ^ *param_1;
}



// ============================================================
// RVA: 0x163c32c | Core.Containers.BitField64.ToString
// ============================================================

long Core_Containers_BitField64__ToString(ulong *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((bRam0000000003eb56e2 & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d69750);
    bRam0000000003eb56e2 = 1;
  }
  lVar6 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,0x4c);
  uVar11 = 0;
  do {
    if ((/*STR('BitArray64{')*/ lRam0000000003d69750 == 0) ||
       (uVar4 = /*System.String$$get_Chars*/ func_0x029c5420(/*STR('BitArray64{')*/ lRam0000000003d69750,uVar11,0), lVar6 == 0)) {
      func_0x00f78af4();
      goto LAB_0163c44c;
    }
    uVar3 = *(uint *)(lVar6 + 0x18);
    if (uVar3 <= uVar11) goto LAB_0163c44c;
    *(undefined2 *)(lVar6 + 0x20 + uVar11 * 2) = uVar4;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0xb);
  lVar9 = 0;
  uVar11 = *param_1;
  uVar1 = uVar3;
  if (uVar3 < 0xc) {
    uVar1 = 0xb;
  }
  uVar10 = 0x8000000000000000;
  do {
    if ((ulong)uVar1 * 2 + -0x16 == lVar9) goto LAB_0163c44c;
    uVar4 = 0x30;
    if ((uVar11 & uVar10) != 0) {
      uVar4 = 0x31;
    }
    *(undefined2 *)(lVar6 + 0x36 + lVar9) = uVar4;
    uVar10 = uVar10 >> 1;
    lVar9 = lVar9 + 2;
  } while (lVar9 != 0x80);
  if (0x4b < uVar3) {
    *(undefined2 *)(lVar6 + 0xb6) = 0x7d;
    if ((bRam0000000003eb944e & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,lVar6,0);
      bRam0000000003eb944e = 1;
    }
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
      lVar9 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      lVar9 = func_0x00f834ac();
      if (lVar9 == 0) {
        lVar8 = 0;
      }
      else {
        iVar5 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
        lVar8 = lVar9 + iVar5;
      }
      lVar2 = 0;
      if (*(int *)(lVar6 + 0x18) != 0) {
        lVar2 = lVar6 + 0x20;
      }
      /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar8,lVar2,*(int *)(lVar6 + 0x18) << 1,0);
    }
    return lVar9;
  }
LAB_0163c44c:
  uVar7 = func_0x00f78b24();
  lVar6 = func_0x00f78ac0(uVar7,0);
  return lVar6;
}



// ============================================================
// RVA: 0x163c458 | Core.Containers.BitField64.GetEnumerator
// ============================================================

void Core_Containers_BitField64__GetEnumerator(void)

{
  return;
}



