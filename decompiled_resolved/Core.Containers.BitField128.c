// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.BitField128

// ============================================================
// RVA: 0x163b954 | Core.Containers.BitField128..ctor
// ============================================================

void Core_Containers_BitField128___ctor(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// ============================================================
// RVA: 0x163b95c | Core.Containers.BitField128.get_Item
// ============================================================

bool Core_Containers_BitField128__get_Item(ulong *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb56d6 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56d6 = 1;
  }
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8);
  uVar4 = (*(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8))[1];
  uVar5 = uVar4 << (param_2 & 0x3f);
  uVar1 = uVar5;
  if ((int)param_2 < 0x40) {
    uVar1 = uVar4 >> ((ulong)-param_2 & 0x3f) | uVar3 << (param_2 & 0x3f);
  }
  uVar2 = 0;
  if ((int)param_2 < 0x40) {
    uVar2 = uVar5;
  }
  if (param_2 != 0) {
    uVar4 = uVar2;
    uVar3 = uVar1;
  }
  return (uVar3 & (*param_1 ^ 0xffffffffffffffff)) == 0 &&
         (uVar4 & (param_1[1] ^ 0xffffffffffffffff)) == 0;
}



// ============================================================
// RVA: 0x163ba18 | Core.Containers.BitField128.set_Item
// ============================================================

void Core_Containers_BitField128__set_Item(ulong *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb56d7 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56d7 = 1;
  }
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = **(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8);
  uVar3 = (*(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8))[1];
  uVar5 = uVar3 << (param_2 & 0x3f);
  uVar4 = uVar5;
  if ((int)param_2 < 0x40) {
    uVar4 = uVar3 >> ((ulong)-param_2 & 0x3f) | uVar2 << (param_2 & 0x3f);
  }
  uVar1 = 0;
  if ((int)param_2 < 0x40) {
    uVar1 = uVar5;
  }
  if (param_2 != 0) {
    uVar3 = uVar1;
    uVar2 = uVar4;
  }
  uVar4 = *param_1;
  uVar5 = param_1[1];
  if (param_3 == 0) {
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = uVar4 & (uVar2 ^ 0xffffffffffffffff);
    uVar5 = uVar5 & (uVar3 ^ 0xffffffffffffffff);
  }
  else {
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = uVar4 | uVar2;
    uVar5 = uVar5 | uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}



// ============================================================
// RVA: 0x163bb0c | Core.Containers.BitField128.get_Length
// ============================================================

undefined8 Core_Containers_BitField128__get_Length(void)

{
  return 0x80;
}



// ============================================================
// RVA: 0x163bb14 | Core.Containers.BitField128.SetBit
// ============================================================

void Core_Containers_BitField128__SetBit(ulong *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb56d8 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56d8 = 1;
  }
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8);
  uVar4 = (*(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8))[1];
  uVar5 = uVar4 << (param_2 & 0x3f);
  uVar1 = uVar5;
  if ((int)param_2 < 0x40) {
    uVar1 = uVar4 >> ((ulong)-param_2 & 0x3f) | uVar3 << (param_2 & 0x3f);
  }
  uVar2 = 0;
  if ((int)param_2 < 0x40) {
    uVar2 = uVar5;
  }
  if (param_2 != 0) {
    uVar4 = uVar2;
    uVar3 = uVar1;
  }
  *param_1 = *param_1 | uVar3;
  param_1[1] = param_1[1] | uVar4;
  return;
}



// ============================================================
// RVA: 0x163bbc8 | Core.Containers.BitField128.UnsetBit
// ============================================================

void Core_Containers_BitField128__UnsetBit(ulong *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb56d9 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56d9 = 1;
  }
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8);
  uVar4 = (*(ulong **)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8))[1];
  uVar5 = uVar4 << (param_2 & 0x3f);
  uVar1 = uVar5;
  if ((int)param_2 < 0x40) {
    uVar1 = uVar4 >> ((ulong)-param_2 & 0x3f) | uVar3 << (param_2 & 0x3f);
  }
  uVar2 = 0;
  if ((int)param_2 < 0x40) {
    uVar2 = uVar5;
  }
  if (param_2 != 0) {
    uVar4 = uVar2;
    uVar3 = uVar1;
  }
  *param_1 = *param_1 & (uVar3 ^ 0xffffffffffffffff);
  param_1[1] = param_1[1] & (uVar4 ^ 0xffffffffffffffff);
  return;
}



// ============================================================
// RVA: 0x163bc7c | Core.Containers.BitField128.GetBits
// ============================================================

undefined1  [16] Core_Containers_BitField128__GetBits(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb56da & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56da = 1;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._0_8_ = uVar1 & param_2;
  auVar3._8_8_ = uVar2 & param_3;
  return auVar3;
}



// ============================================================
// RVA: 0x163bcfc | Core.Containers.BitField128.SetBits
// ============================================================

void Core_Containers_BitField128__SetBits(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((bRam0000000003eb56db & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56db = 1;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *param_1 = uVar1 | param_2;
  param_1[1] = uVar2 | param_3;
  return;
}



// ============================================================
// RVA: 0x163bd80 | Core.Containers.BitField128.UnsetBits
// ============================================================

void Core_Containers_BitField128__UnsetBits
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb56dc & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56dc = 1;
  }
  uVar2 = param_1[1];
  uVar1 = *param_1;
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_1[1] = CONCAT17((byte)((ulong)uVar2 >> 0x38) & ~(byte)((ulong)param_3 >> 0x38),
                        CONCAT16((byte)((ulong)uVar2 >> 0x30) & ~(byte)((ulong)param_3 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar2 >> 0x28) &
                                          ~(byte)((ulong)param_3 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar2 >> 0x20) &
                                                   ~(byte)((ulong)param_3 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar2 >> 0x18) &
                                                            ~(byte)((ulong)param_3 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                                     ~(byte)((ulong)param_3 >> 0x10)
                                                                     ,CONCAT11((byte)((ulong)uVar2
                                                                                     >> 8) &
                                                                               ~(byte)((ulong)
                                                  param_3 >> 8),(byte)uVar2 & ~(byte)param_3)))))));
  *param_1 = CONCAT17((byte)((ulong)uVar1 >> 0x38) & ~(byte)((ulong)param_2 >> 0x38),
                      CONCAT16((byte)((ulong)uVar1 >> 0x30) & ~(byte)((ulong)param_2 >> 0x30),
                               CONCAT15((byte)((ulong)uVar1 >> 0x28) &
                                        ~(byte)((ulong)param_2 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar1 >> 0x20) &
                                                 ~(byte)((ulong)param_2 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar1 >> 0x18) &
                                                          ~(byte)((ulong)param_2 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar1 >> 0x10) &
                                                                   ~(byte)((ulong)param_2 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar1 >> 8
                                                                                  ) & ~(byte)((ulong
                                                  )param_2 >> 8),(byte)uVar1 & ~(byte)param_2)))))))
  ;
  return;
}



// ============================================================
// RVA: 0x163be18 | Core.Containers.BitField128.Equals
// ============================================================

bool Core_Containers_BitField128__Equals(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  
  if ((bRam0000000003eb56dd & 1) == 0) {
    func_0x00f78a20(0x3d201a8);
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56dd = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != /*Core.Containers.BitField128_TypeInfo*/ lRam0000000003d201a8)) {
    bVar5 = false;
  }
  else {
    plVar6 = (long *)func_0x00f78ae4(param_2);
    lVar1 = *plVar6;
    lVar3 = plVar6[1];
    lVar2 = *param_1;
    lVar4 = param_1[1];
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    bVar5 = lVar2 == lVar1 && lVar4 == lVar3;
  }
  return bVar5;
}



// ============================================================
// RVA: 0x163becc | Core.Containers.BitField128.Equals
// ============================================================

bool Core_Containers_BitField128__Equals(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb56de & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56de = 1;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1 == param_2 && lVar2 == param_3;
}



// ============================================================
// RVA: 0x163bf50 | Core.Containers.BitField128.GetHashCode
// ============================================================

long Core_Containers_BitField128__GetHashCode(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((bRam0000000003eb56df & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    bRam0000000003eb56df = 1;
  }
  plVar6 = (long *)func_0x00f78ae0(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8,param_1);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
    puVar8 = (undefined8 *)func_0x00f78ae4(plVar6);
    uVar10 = *puVar8;
    param_1[1] = puVar8[1];
    *param_1 = uVar10;
    return lVar7;
  }
  puVar9 = (ulong *)func_0x00f78af4();
  if ((bRam0000000003eb56e0 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d69748);
    bRam0000000003eb56e0 = 1;
  }
  lVar7 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,0x8c);
  uVar14 = 0;
  do {
    if ((/*STR('BitArray128{')*/ lRam0000000003d69748 == 0) ||
       (uVar4 = /*System.String$$get_Chars*/ func_0x029c5420(/*STR('BitArray128{')*/ lRam0000000003d69748,uVar14,0), lVar7 == 0)) {
      func_0x00f78af4();
      goto code_r0x0163c1cc;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar14) goto code_r0x0163c1cc;
    *(undefined2 *)(lVar7 + 0x20 + uVar14 * 2) = uVar4;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0xb);
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = 0;
  uVar15 = *(long *)(*(long *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8) + 8) << 0x3f;
  uVar13 = 0xb;
  while( true ) {
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (uVar15 == 0 && uVar14 == 0) break;
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003cb9a18 == '\0') {
      func_0x00f78a20(0x3d201e8);
      cRam0000000003cb9a18 = '\x01';
    }
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar13) goto code_r0x0163c1cc;
    uVar4 = 0x30;
    if ((uVar2 & uVar15) != 0 || (uVar3 & uVar14) != 0) {
      uVar4 = 0x31;
    }
    *(undefined2 *)(lVar7 + (long)(int)uVar13 * 2 + 0x20) = uVar4;
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = uVar14 >> 1 | uVar15 << 0x3f;
    uVar15 = uVar15 >> 1;
    uVar13 = uVar13 + 1;
  }
  if (uVar13 < *(uint *)(lVar7 + 0x18)) {
    *(undefined2 *)(lVar7 + (long)(int)uVar13 * 2 + 0x20) = 0x7d;
    if ((bRam0000000003eb944e & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,lVar7,0);
      bRam0000000003eb944e = 1;
    }
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
      lVar11 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      lVar11 = func_0x00f834ac();
      if (lVar11 == 0) {
        lVar12 = 0;
      }
      else {
        iVar5 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
        lVar12 = lVar11 + iVar5;
      }
      lVar1 = 0;
      if (*(int *)(lVar7 + 0x18) != 0) {
        lVar1 = lVar7 + 0x20;
      }
      /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar12,lVar1,*(int *)(lVar7 + 0x18) << 1,0);
    }
    return lVar11;
  }
code_r0x0163c1cc:
  uVar10 = func_0x00f78b24();
  lVar7 = func_0x00f78ac0(uVar10,0);
  return lVar7;
}



// ============================================================
// RVA: 0x163bfd8 | Core.Containers.BitField128.ToString
// ============================================================

undefined1  [16] Core_Containers_BitField128__ToString(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long extraout_x1;
  long extraout_x1_00;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((bRam0000000003eb56e0 & 1) == 0) {
    func_0x00f78a20(0x3d201e8);
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d69748);
    bRam0000000003eb56e0 = 1;
  }
  lVar6 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,0x8c);
  uVar11 = 0;
  do {
    if ((/*STR('BitArray128{')*/ lRam0000000003d69748 == 0) ||
       (uVar4 = /*System.String$$get_Chars*/ func_0x029c5420(/*STR('BitArray128{')*/ lRam0000000003d69748,uVar11,0), lVar6 == 0)) {
      func_0x00f78af4();
      goto LAB_0163c1cc;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0163c1cc;
    *(undefined2 *)(lVar6 + 0x20 + uVar11 * 2) = uVar4;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0xb);
  if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = 0;
  uVar12 = *(long *)(*(long *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xb8) + 8) << 0x3f;
  uVar10 = 0xb;
  while( true ) {
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (uVar12 == 0 && uVar11 == 0) break;
    uVar2 = *param_1;
    uVar3 = param_1[1];
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003cb9a18 == '\0') {
      func_0x00f78a20(0x3d201e8);
      cRam0000000003cb9a18 = '\x01';
    }
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0163c1cc;
    uVar4 = 0x30;
    if ((uVar2 & uVar12) != 0 || (uVar3 & uVar11) != 0) {
      uVar4 = 0x31;
    }
    *(undefined2 *)(lVar6 + (long)(int)uVar10 * 2 + 0x20) = uVar4;
    if (((*(ushort *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Containers.Bits128_TypeInfo*/ lRam0000000003d201e8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = uVar11 >> 1 | uVar12 << 0x3f;
    uVar12 = uVar12 >> 1;
    uVar10 = uVar10 + 1;
  }
  if (uVar10 < *(uint *)(lVar6 + 0x18)) {
    *(undefined2 *)(lVar6 + (long)(int)uVar10 * 2 + 0x20) = 0x7d;
    lVar9 = lVar6;
    if ((bRam0000000003eb944e & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,lVar6,0);
      bRam0000000003eb944e = 1;
      lVar9 = extraout_x1;
    }
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
      lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      lVar8 = func_0x00f834ac();
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      else {
        iVar5 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
        lVar9 = lVar8 + iVar5;
      }
      lVar1 = 0;
      if (*(int *)(lVar6 + 0x18) != 0) {
        lVar1 = lVar6 + 0x20;
      }
      /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar9,lVar1,*(int *)(lVar6 + 0x18) << 1,0);
      lVar9 = extraout_x1_00;
    }
    auVar14._8_8_ = lVar9;
    auVar14._0_8_ = lVar8;
    return auVar14;
  }
LAB_0163c1cc:
  uVar7 = func_0x00f78b24();
  auVar13._0_8_ = func_0x00f78ac0(uVar7,0);
  auVar13._8_8_ = 0xffffffff;
  return auVar13;
}



// ============================================================
// RVA: 0x163c1d8 | Core.Containers.BitField128.GetEnumerator
// ============================================================

void Core_Containers_BitField128__GetEnumerator(void)

{
  return;
}



