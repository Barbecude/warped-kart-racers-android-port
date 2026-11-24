// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ArrayIteratorExtensions

// ============================================================
// RVA: 0x180ff44 | Core.Containers.ArrayIteratorExtensions.AdjacentFind<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__AdjacentFind_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long param_5
          ,long param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  lVar16 = param_6;
  iVar5 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if (iVar5 != 0) {
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2);
    puVar14 = (undefined8 *)**(long **)(param_6 + 0x30);
    puVar13 = param_4;
    iVar5 = (*(code *)*puVar14)(auVar23._0_8_,auVar23._8_8_,param_3);
    if (iVar5 != 0) {
      do {
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                          (auVar24._0_8_,auVar24._8_8_);
        puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar7 = (*(code *)*puVar11)(auVar23._0_8_,auVar23._8_8_);
        if (param_5 == 0) {
          auVar24 = func_0x00f78af4();
          lVar9 = auVar24._0_8_;
          puVar15 = puVar14;
          lVar17 = lVar16;
          if (lVar9 == 0) goto code_r0x01810290;
          uVar6 = *(undefined8 *)(lVar9 + 0x18);
          uVar10 = (uint)puVar11;
          if ((uint)uVar6 <= uVar10) goto code_r0x01810284;
          puVar20 = *(undefined8 **)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
          iVar5 = auVar24._8_4_;
          uVar21 = (int)puVar13 - iVar5;
          uVar10 = uVar10 - iVar5;
          uVar22 = uVar10;
          goto joined_r0x01810108;
        }
        uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar6,uVar7);
        if ((uVar8 & 1) != 0) {
          return auVar24;
        }
        auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar24._0_8_,auVar24._8_8_);
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar23._0_8_,auVar23._8_8_);
        puVar14 = (undefined8 *)**(long **)(param_6 + 0x30);
        puVar13 = param_4;
        uVar8 = (*(code *)*puVar14)(auVar23._0_8_,auVar23._8_8_,param_3);
      } while ((uVar8 & 1) != 0);
    }
  }
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_3;
  return auVar3;
joined_r0x01810108:
  uVar19 = uVar22 * 2;
  uVar4 = uVar19 + 2;
  uVar18 = (uint)uVar6;
  if ((int)uVar21 <= (int)uVar4) goto code_r0x018101a0;
  if (uVar18 <= uVar4 + iVar5) goto code_r0x01810284;
  uVar1 = (uVar19 | 1) + iVar5;
  if (uVar18 <= uVar1) goto code_r0x01810284;
  if (puVar14 == (undefined8 *)0x0) goto code_r0x01810290;
  puVar11 = *(undefined8 **)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
  puVar13 = (undefined8 *)**(undefined8 **)(lVar16 + 0x30);
  auVar24 = (*(code *)*puVar13)(puVar14,*(undefined8 *)
                                         (lVar9 + (long)(int)(uVar4 + iVar5) * 8 + 0x20));
  uVar19 = uVar19 | 1;
  if (auVar24._0_4_ == 0) {
    uVar19 = uVar4;
  }
  uVar6 = *(undefined8 *)(lVar9 + 0x18);
  if (((uint)uVar6 <= uVar19 + iVar5) || ((uint)uVar6 <= uVar22 + iVar5)) goto code_r0x01810284;
  *(undefined8 *)(lVar9 + 0x20 + (long)(int)(uVar22 + iVar5) * 8) =
       *(undefined8 *)(lVar9 + 0x20 + (long)(int)(uVar19 + iVar5) * 8);
  uVar22 = uVar19;
  goto joined_r0x01810108;
code_r0x018101a0:
  if (uVar4 == uVar21) {
    uVar21 = (uVar19 | 1) + iVar5;
    if ((uVar18 <= uVar21) || (uVar18 <= uVar22 + iVar5)) goto code_r0x01810284;
    *(undefined8 *)(lVar9 + 0x20 + (long)(int)(uVar22 + iVar5) * 8) =
         *(undefined8 *)(lVar9 + 0x20 + (long)(int)uVar21 * 8);
    uVar22 = uVar19 | 1;
  }
  while (uVar19 = (uint)uVar6, uVar21 = uVar10, uVar22 != uVar10) {
    uVar4 = uVar22;
    if (-1 < (int)(uVar22 - 1)) {
      uVar4 = uVar22 - 1;
    }
    uVar18 = iVar5 + ((int)uVar4 >> 1);
    if (uVar19 <= uVar18) goto code_r0x01810284;
    if (puVar14 == (undefined8 *)0x0) goto code_r0x01810290;
    puVar12 = (undefined8 *)(lVar9 + (long)(int)uVar18 * 8 + 0x20);
    puVar13 = (undefined8 *)**(undefined8 **)(lVar16 + 0x30);
    puVar11 = puVar20;
    auVar24 = (*(code *)*puVar13)(puVar14,*puVar12);
    uVar6 = *(undefined8 *)(lVar9 + 0x18);
    uVar19 = (uint)uVar6;
    uVar21 = uVar22;
    if ((auVar24._0_8_ & 1) == 0) break;
    if ((uVar19 <= uVar18) || (uVar19 <= uVar22 + iVar5)) goto code_r0x01810284;
    *(undefined8 *)(lVar9 + (long)(int)(uVar22 + iVar5) * 8 + 0x20) = *puVar12;
    uVar22 = (int)uVar4 >> 1;
  }
  if (uVar21 + iVar5 < uVar19) {
    *(undefined8 **)(lVar9 + (long)(int)(uVar21 + iVar5) * 8 + 0x20) = puVar20;
    return auVar24;
  }
code_r0x01810284:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
code_r0x01810290:
  auVar24 = func_0x00f78af4();
  puVar20 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18);
  puVar14 = puVar13;
  lVar16 = lVar17;
  iVar5 = (*(code *)*puVar20)();
  if (iVar5 == 0) {
    auVar23._8_8_ = extraout_x1;
    auVar23._0_8_ = 1;
  }
  else {
    do {
      puVar12 = (undefined8 *)**(undefined8 **)(lVar17 + 0x30);
      uVar6 = (*(code *)*puVar12)(auVar24._0_8_,auVar24._8_8_);
      if (puVar15 == (undefined8 *)0x0) {
        auVar24 = func_0x00f78af4();
        iVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))();
        if (iVar5 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = extraout_x1_00;
          return auVar2 << 0x40;
        }
        while( true ) {
          uVar6 = (**(code **)**(undefined8 **)(lVar16 + 0x30))(auVar24._0_8_,auVar24._8_8_);
          if (puVar20 == (undefined8 *)0x0) {
            auVar25._0_8_ = func_0x00f78af4();
            auVar25._8_8_ = 0;
            return auVar25;
          }
          auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(puVar20,uVar6);
          if ((auVar23._0_8_ & 1) != 0) break;
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))
                              (auVar24._0_8_,auVar24._8_8_);
          auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))
                              (auVar24._0_8_,auVar24._8_8_,puVar12,puVar14);
          auVar26._8_8_ = auVar25._8_8_;
          auVar26._0_8_ = auVar23._0_8_;
          if ((auVar25._0_8_ & 1) == 0) {
            return auVar26;
          }
        }
        return auVar23;
      }
      auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(puVar15,uVar6);
      if (auVar25._0_4_ == 0) {
        return auVar25;
      }
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))
                          (auVar24._0_8_,auVar24._8_8_);
      puVar20 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18);
      puVar14 = puVar13;
      auVar26 = (*(code *)*puVar20)(auVar24._0_8_,auVar24._8_8_,puVar11);
      auVar23._8_8_ = auVar26._8_8_;
      auVar23._0_8_ = auVar25._0_8_;
    } while ((auVar26._0_8_ & 1) != 0);
  }
  return auVar23;
}



// ============================================================
// RVA: 0x18100b0 | Core.Containers.ArrayIteratorExtensions.AdjustHeap<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__AdjustHeap_object_
                (ulong param_1,int param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                long param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  
  lVar9 = param_5;
  lVar11 = param_6;
  if (param_1 == 0) goto LAB_01810290;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = (uint)param_3;
  if (uVar6 < (uint)uVar15) {
    uVar16 = *(undefined8 *)(param_1 + (long)(int)uVar6 * 8 + 0x20);
    uVar17 = (int)param_4 - param_2;
    uVar6 = uVar6 - param_2;
    uVar18 = uVar6;
    uVar4 = param_1;
    while( true ) {
      uVar14 = uVar18 * 2;
      uVar2 = uVar14 + 2;
      uVar13 = (uint)uVar15;
      if ((int)uVar17 <= (int)uVar2) break;
      if (uVar13 <= uVar2 + param_2) goto LAB_01810284;
      uVar1 = (uVar14 | 1) + param_2;
      if (uVar13 <= uVar1) goto LAB_01810284;
      if (param_5 == 0) goto LAB_01810290;
      param_3 = *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      param_4 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
      uVar4 = (*(code *)*param_4)(param_5,*(undefined8 *)
                                           (param_1 + (long)(int)(uVar2 + param_2) * 8 + 0x20));
      uVar14 = uVar14 | 1;
      if ((int)uVar4 == 0) {
        uVar14 = uVar2;
      }
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      if (((uint)uVar15 <= uVar14 + param_2) || ((uint)uVar15 <= uVar18 + param_2))
      goto LAB_01810284;
      *(undefined8 *)(param_1 + 0x20 + (long)(int)(uVar18 + param_2) * 8) =
           *(undefined8 *)(param_1 + 0x20 + (long)(int)(uVar14 + param_2) * 8);
      uVar18 = uVar14;
    }
    if (uVar2 == uVar17) {
      uVar17 = (uVar14 | 1) + param_2;
      if ((uVar13 <= uVar17) || (uVar13 <= uVar18 + param_2)) goto LAB_01810284;
      *(undefined8 *)(param_1 + 0x20 + (long)(int)(uVar18 + param_2) * 8) =
           *(undefined8 *)(param_1 + 0x20 + (long)(int)uVar17 * 8);
      uVar18 = uVar14 | 1;
    }
    while (uVar14 = (uint)uVar15, uVar17 = uVar6, uVar18 != uVar6) {
      uVar2 = uVar18;
      if (-1 < (int)(uVar18 - 1)) {
        uVar2 = uVar18 - 1;
      }
      uVar13 = param_2 + ((int)uVar2 >> 1);
      if (uVar14 <= uVar13) goto LAB_01810284;
      if (param_5 == 0) goto LAB_01810290;
      puVar8 = (undefined8 *)(param_1 + (long)(int)uVar13 * 8 + 0x20);
      param_4 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
      param_3 = uVar16;
      uVar4 = (*(code *)*param_4)(param_5,*puVar8);
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = (uint)uVar15;
      uVar17 = uVar18;
      if ((uVar4 & 1) == 0) break;
      if ((uVar14 <= uVar13) || (uVar14 <= uVar18 + param_2)) goto LAB_01810284;
      *(undefined8 *)(param_1 + (long)(int)(uVar18 + param_2) * 8 + 0x20) = *puVar8;
      uVar18 = (int)uVar2 >> 1;
    }
    if (uVar17 + param_2 < uVar14) {
      *(undefined8 *)(param_1 + (long)(int)(uVar17 + param_2) * 8 + 0x20) = uVar16;
      return uVar4;
    }
  }
LAB_01810284:
  uVar15 = func_0x00f78b24();
  func_0x00f78ac0(uVar15,0);
LAB_01810290:
  auVar19 = func_0x00f78af4();
  puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x18);
  puVar8 = param_4;
  lVar12 = lVar11;
  iVar3 = (*(code *)*puVar10)();
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  else {
    do {
      puVar7 = (undefined8 *)**(undefined8 **)(lVar11 + 0x30);
      uVar15 = (*(code *)*puVar7)(auVar19._0_8_,auVar19._8_8_);
      if (lVar9 == 0) {
        auVar19 = func_0x00f78af4();
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))();
        if (iVar3 == 0) {
          return 0;
        }
        while( true ) {
          uVar15 = (**(code **)**(undefined8 **)(lVar12 + 0x30))(auVar19._0_8_,auVar19._8_8_);
          if (puVar10 == (undefined8 *)0x0) {
            uVar4 = func_0x00f78af4();
            return uVar4;
          }
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))(puVar10,uVar15);
          if ((uVar4 & 1) != 0) break;
          auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                              (auVar19._0_8_,auVar19._8_8_);
          uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))
                            (auVar19._0_8_,auVar19._8_8_,puVar7,puVar8);
          if ((uVar5 & 1) == 0) {
            return uVar4;
          }
        }
        return uVar4;
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(lVar9,uVar15);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x10))
                          (auVar19._0_8_,auVar19._8_8_);
      puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x18);
      puVar8 = param_4;
      uVar5 = (*(code *)*puVar10)(auVar19._0_8_,auVar19._8_8_,param_3);
    } while ((uVar5 & 1) != 0);
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1810294 | Core.Containers.ArrayIteratorExtensions.AllOf<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__AllOf_object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18);
  uVar6 = param_4;
  lVar8 = param_6;
  iVar1 = (*(code *)*puVar7)();
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    do {
      puVar5 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
      uVar2 = (*(code *)*puVar5)(auVar9._0_8_,auVar9._8_8_);
      if (param_5 == 0) {
        auVar9 = func_0x00f78af4();
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18))();
        if (iVar1 == 0) {
          return 0;
        }
        while( true ) {
          uVar2 = (**(code **)**(undefined8 **)(lVar8 + 0x30))(auVar9._0_8_,auVar9._8_8_);
          if (puVar7 == (undefined8 *)0x0) {
            uVar3 = func_0x00f78af4();
            return uVar3;
          }
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))(puVar7,uVar2);
          if ((uVar3 & 1) != 0) break;
          auVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                             (auVar9._0_8_,auVar9._8_8_);
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18))
                            (auVar9._0_8_,auVar9._8_8_,puVar5,uVar6);
          if ((uVar4 & 1) == 0) {
            return uVar3;
          }
        }
        return uVar3;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      auVar9 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                         (auVar9._0_8_,auVar9._8_8_);
      puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18);
      uVar6 = param_4;
      uVar4 = (*(code *)*puVar7)(auVar9._0_8_,auVar9._8_8_,param_3);
    } while ((uVar4 & 1) != 0);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1810378 | Core.Containers.ArrayIteratorExtensions.AnyOf<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__AnyOf_object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))(auVar5._0_8_,auVar5._8_8_);
      if (param_5 == 0) {
        uVar3 = func_0x00f78af4();
        return uVar3;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar2);
      if ((uVar3 & 1) != 0) {
        return uVar3;
      }
      auVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                         (auVar5._0_8_,auVar5._8_8_);
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                        (auVar5._0_8_,auVar5._8_8_,param_3,param_4);
    } while ((uVar4 & 1) != 0);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x181045c | Core.Containers.ArrayIteratorExtensions.Begin<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Begin_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x1810464 | Core.Containers.ArrayIteratorExtensions.Begin<PlayerRankingPair>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Begin_PlayerRankingPair_(void)

{
  return;
}



// ============================================================
// RVA: 0x181046c | Core.Containers.ArrayIteratorExtensions.BinarySearch<object>
// ============================================================

undefined8 *
Core_Containers_ArrayIteratorExtensions__BinarySearch_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar8 = (undefined8 *)**(long **)(param_7 + 0x30);
  lVar7 = param_6;
  auVar9 = (*(code *)*puVar8)();
  puVar6 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 8);
  puVar3 = (undefined8 *)(*(code *)*puVar6)(auVar9._0_8_,auVar9._8_8_,param_3,param_4);
  if ((int)puVar3 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10);
    uVar4 = (*(code *)*puVar3)(auVar9._0_8_,auVar9._8_8_);
    if (param_6 == 0) {
      auVar9 = func_0x00f78af4();
      auVar10._8_8_ = lVar7;
      auVar10._0_8_ = puVar6;
      iVar2 = (*(code *)**(undefined8 **)(puVar8[6] + 0x18))();
      if (iVar2 != 0) {
        do {
          uVar4 = (*(code *)**(undefined8 **)puVar8[6])(auVar9._0_8_,auVar9._8_8_);
          (*(code *)**(undefined8 **)(puVar8[6] + 8))(auVar10._0_8_,auVar10._8_8_,uVar4);
          auVar10 = (*(code *)**(undefined8 **)(puVar8[6] + 0x10))(auVar10._0_8_,auVar10._8_8_);
          puVar6 = auVar10._0_8_;
          auVar9 = (*(code *)**(undefined8 **)(puVar8[6] + 0x10))(auVar9._0_8_,auVar9._8_8_);
          uVar5 = (*(code *)**(undefined8 **)(puVar8[6] + 0x18))
                            (auVar9._0_8_,auVar9._8_8_,puVar3,param_4);
        } while ((uVar5 & 1) != 0);
      }
      return puVar6;
    }
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))(param_6,param_5,uVar4);
    puVar3 = (undefined8 *)(ulong)(uVar1 ^ 1);
  }
  return puVar3;
}



// ============================================================
// RVA: 0x1810524 | Core.Containers.ArrayIteratorExtensions.Copy<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__Copy_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  auVar4._8_8_ = param_6;
  auVar4._0_8_ = param_5;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))();
  if (iVar1 != 0) {
    do {
      uVar2 = (**(code **)**(undefined8 **)(param_7 + 0x30))(auVar5._0_8_,auVar5._8_8_);
      (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))(auVar4._0_8_,auVar4._8_8_,uVar2);
      auVar4 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                         (auVar4._0_8_,auVar4._8_8_);
      auVar5 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                         (auVar5._0_8_,auVar5._8_8_);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))
                        (auVar5._0_8_,auVar5._8_8_,param_3,param_4);
    } while ((uVar3 & 1) != 0);
  }
  return auVar4;
}



// ============================================================
// RVA: 0x181061c | Core.Containers.ArrayIteratorExtensions.CopyBackward<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__CopyBackward_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_3;
  auVar4._8_8_ = param_6;
  auVar4._0_8_ = param_5;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))
                    (param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    do {
      auVar4 = (**(code **)**(undefined8 **)(param_7 + 0x30))(auVar4._0_8_,auVar4._8_8_);
      auVar5 = (**(code **)**(undefined8 **)(param_7 + 0x30))(auVar5._0_8_,auVar5._8_8_);
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))();
      (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                (auVar4._0_8_,auVar4._8_8_,uVar2);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))
                        (auVar5._0_8_,auVar5._8_8_,param_1,param_2);
    } while ((uVar3 & 1) != 0);
  }
  return auVar4;
}



// ============================================================
// RVA: 0x1810724 | Core.Containers.ArrayIteratorExtensions.CopyIf<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__CopyIf_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,long param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  auVar10._8_8_ = param_6;
  auVar10._0_8_ = param_5;
  puVar6 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20);
  uVar3 = param_4;
  iVar1 = (*(code *)*puVar6)();
  if (iVar1 != 0) {
    do {
      uVar8 = auVar11._8_8_;
      uVar9 = auVar11._0_8_;
      puVar5 = (undefined8 *)**(undefined8 **)(param_8 + 0x30);
      uVar2 = (*(code *)*puVar5)(uVar9,uVar8);
      iVar1 = (int)puVar5;
      if (param_7 == 0) {
        auVar10 = func_0x00f78af4();
        auVar12._8_8_ = puVar6;
        auVar12._0_8_ = uVar3;
        if (0 < iVar1) {
          uVar7 = iVar1 + 1;
          do {
            uVar3 = (**(code **)**(undefined8 **)(param_6 + 0x30))(auVar10._0_8_,auVar10._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                      (auVar12._0_8_,auVar12._8_8_,uVar3);
            auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                                (auVar12._0_8_,auVar12._8_8_);
            auVar10 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                                (auVar10._0_8_,auVar10._8_8_);
            uVar7 = uVar7 - 1;
          } while (1 < uVar7);
        }
        return auVar12;
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))(param_7,uVar2);
      if (iVar1 != 0) {
        uVar3 = (**(code **)**(undefined8 **)(param_8 + 0x30))(uVar9,uVar8);
        (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10))
                  (auVar10._0_8_,auVar10._8_8_,uVar3);
        auVar10 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))
                            (auVar10._0_8_,auVar10._8_8_);
      }
      auVar11 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))(uVar9,uVar8);
      puVar6 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20);
      uVar3 = param_4;
      uVar4 = (*(code *)*puVar6)(auVar11._0_8_,auVar11._8_8_,param_3);
    } while ((uVar4 & 1) != 0);
  }
  return auVar10;
}



// ============================================================
// RVA: 0x181085c | Core.Containers.ArrayIteratorExtensions.CopyN<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__CopyN_object_
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  auVar3._8_8_ = param_5;
  auVar3._0_8_ = param_4;
  if (0 < param_3) {
    uVar2 = param_3 + 1;
    do {
      uVar1 = (**(code **)**(undefined8 **)(param_6 + 0x30))(auVar4._0_8_,auVar4._8_8_);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(auVar3._0_8_,auVar3._8_8_,uVar1);
      auVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                         (auVar3._0_8_,auVar3._8_8_);
      auVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                         (auVar4._0_8_,auVar4._8_8_);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return auVar3;
}



// ============================================================
// RVA: 0x181092c | Core.Containers.ArrayIteratorExtensions.Count<object>
// ============================================================

int Core_Containers_ArrayIteratorExtensions__Count_object_
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w1;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  puVar6 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18);
  uVar5 = param_4;
  lVar7 = param_6;
  iVar1 = (*(code *)*puVar6)();
  iVar8 = 0;
  if (iVar1 != 0) {
    do {
      puVar4 = (undefined8 *)**(undefined8 **)(param_7 + 0x30);
      uVar2 = (*(code *)*puVar4)(auVar9._0_8_,auVar9._8_8_);
      if (param_6 == 0) {
        auVar9 = func_0x00f78af4();
        uVar2 = uVar5;
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x18))();
        iVar8 = 0;
        if (iVar1 != 0) {
          do {
            iVar1 = (int)uVar2;
            uVar2 = (**(code **)**(undefined8 **)(lVar7 + 0x30))(auVar9._0_8_,auVar9._8_8_);
            if (puVar6 == (undefined8 *)0x0) {
              func_0x00f78af4();
              return iVar1 - extraout_w1;
            }
            iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))(puVar6,uVar2);
            iVar8 = iVar8 + iVar1;
            auVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))
                               (auVar9._0_8_,auVar9._8_8_);
            uVar2 = uVar5;
            uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x18))
                              (auVar9._0_8_,auVar9._8_8_,puVar4,uVar5);
          } while ((uVar3 & 1) != 0);
        }
        return iVar8;
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))(param_6,uVar2,param_5);
      iVar8 = iVar8 + iVar1;
      auVar9 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                         (auVar9._0_8_,auVar9._8_8_);
      puVar6 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18);
      uVar5 = param_4;
      uVar3 = (*(code *)*puVar6)(auVar9._0_8_,auVar9._8_8_,param_3);
    } while ((uVar3 & 1) != 0);
  }
  return iVar8;
}



// ============================================================
// RVA: 0x1810a10 | Core.Containers.ArrayIteratorExtensions.CountIf<object>
// ============================================================

int Core_Containers_ArrayIteratorExtensions__CountIf_object_
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w1;
  int iVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  uVar2 = param_4;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))();
  iVar4 = 0;
  if (iVar1 != 0) {
    do {
      iVar1 = (int)uVar2;
      uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))(auVar5._0_8_,auVar5._8_8_);
      if (param_5 == 0) {
        func_0x00f78af4();
        return iVar1 - extraout_w1;
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar2);
      iVar4 = iVar4 + iVar1;
      auVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                         (auVar5._0_8_,auVar5._8_8_);
      uVar2 = param_4;
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                        (auVar5._0_8_,auVar5._8_8_,param_3,param_4);
    } while ((uVar3 & 1) != 0);
  }
  return iVar4;
}



// ============================================================
// RVA: 0x1810aec | Core.Containers.ArrayIteratorExtensions.Distance<object>
// ============================================================

int Core_Containers_ArrayIteratorExtensions__Distance_object_
              (undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  return param_4 - param_2;
}



// ============================================================
// RVA: 0x1810af4 | Core.Containers.ArrayIteratorExtensions.End<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__End_object_
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long unaff_x28;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_1 != 0) {
    auVar10._8_4_ = *(undefined4 *)(param_1 + 0x18);
    auVar10._0_8_ = param_1;
    auVar10._12_4_ = 0;
    return auVar10;
  }
  auVar11._0_8_ = func_0x00f78af4();
  if (auVar11._0_8_ != 0) {
    auVar11._8_4_ = *(undefined4 *)(auVar11._0_8_ + 0x18);
    auVar11._12_4_ = 0;
    return auVar11;
  }
  auVar10 = func_0x00f78af4();
  auVar12._8_8_ = param_6;
  auVar12._0_8_ = param_5;
  puVar7 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
  uVar6 = param_4;
  pauVar8 = param_7;
  pauVar9 = param_8;
  iVar2 = (*(code *)*puVar7)();
  if (iVar2 == 0) {
    auVar1._8_8_ = extraout_x1;
    auVar1._0_8_ = 1;
  }
  else {
    do {
      uVar3 = (**(code **)**(undefined8 **)param_8[3])(auVar10._0_8_,auVar10._8_8_);
      puVar5 = (undefined8 *)**(undefined8 **)param_8[3];
      uVar4 = (*(code *)*puVar5)(auVar12._0_8_,auVar12._8_8_);
      if (param_7 == (undefined1 (*) [16])0x0) {
        func_0x00f78af4();
        auVar10 = (**(code **)**(undefined8 **)(unaff_x28 + 0x30))();
        *pauVar8 = auVar10;
        auVar10 = (*(code *)**(undefined8 **)(*(long *)(unaff_x28 + 0x30) + 8))
                            (auVar10._0_8_,auVar10._8_8_,puVar5,uVar6,puVar7,param_6);
        *pauVar9 = auVar10;
        return auVar10;
      }
      auVar11 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(param_7,uVar3,uVar4);
      if (auVar11._0_4_ == 0) {
        return auVar11;
      }
      auVar10 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                          (auVar10._0_8_,auVar10._8_8_);
      auVar12 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                          (auVar12._0_8_,auVar12._8_8_);
      puVar7 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
      uVar6 = param_4;
      auVar13 = (*(code *)*puVar7)(auVar10._0_8_,auVar10._8_8_,param_3);
      auVar1._8_8_ = auVar13._8_8_;
      auVar1._0_8_ = auVar11._0_8_;
    } while ((auVar13._0_8_ & 1) != 0);
  }
  return auVar1;
}



// ============================================================
// RVA: 0x1810b10 | Core.Containers.ArrayIteratorExtensions.End<PlayerRankingPair>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__End_PlayerRankingPair_
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long unaff_x28;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_1 != 0) {
    auVar10._8_4_ = *(undefined4 *)(param_1 + 0x18);
    auVar10._0_8_ = param_1;
    auVar10._12_4_ = 0;
    return auVar10;
  }
  auVar10 = func_0x00f78af4();
  auVar12._8_8_ = param_6;
  auVar12._0_8_ = param_5;
  puVar7 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
  uVar6 = param_4;
  pauVar8 = param_7;
  pauVar9 = param_8;
  iVar2 = (*(code *)*puVar7)();
  if (iVar2 == 0) {
    auVar1._8_8_ = extraout_x1;
    auVar1._0_8_ = 1;
  }
  else {
    do {
      uVar3 = (**(code **)**(undefined8 **)param_8[3])(auVar10._0_8_,auVar10._8_8_);
      puVar5 = (undefined8 *)**(undefined8 **)param_8[3];
      uVar4 = (*(code *)*puVar5)(auVar12._0_8_,auVar12._8_8_);
      if (param_7 == (undefined1 (*) [16])0x0) {
        func_0x00f78af4();
        auVar10 = (**(code **)**(undefined8 **)(unaff_x28 + 0x30))();
        *pauVar8 = auVar10;
        auVar10 = (*(code *)**(undefined8 **)(*(long *)(unaff_x28 + 0x30) + 8))
                            (auVar10._0_8_,auVar10._8_8_,puVar5,uVar6,puVar7,param_6);
        *pauVar9 = auVar10;
        return auVar10;
      }
      auVar11 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(param_7,uVar3,uVar4);
      if (auVar11._0_4_ == 0) {
        return auVar11;
      }
      auVar10 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                          (auVar10._0_8_,auVar10._8_8_);
      auVar12 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                          (auVar12._0_8_,auVar12._8_8_);
      puVar7 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
      uVar6 = param_4;
      auVar13 = (*(code *)*puVar7)(auVar10._0_8_,auVar10._8_8_,param_3);
      auVar1._8_8_ = auVar13._8_8_;
      auVar1._0_8_ = auVar11._0_8_;
    } while ((auVar13._0_8_ & 1) != 0);
  }
  return auVar1;
}



// ============================================================
// RVA: 0x1810b2c | Core.Containers.ArrayIteratorExtensions.Equal<object>
// ============================================================

undefined8
Core_Containers_ArrayIteratorExtensions__Equal_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined1 (*param_7) [16],
          undefined1 (*param_8) [16])

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long unaff_x28;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = param_6;
  auVar11._0_8_ = param_5;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  puVar7 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
  uVar6 = param_4;
  pauVar8 = param_7;
  pauVar9 = param_8;
  iVar1 = (*(code *)*puVar7)();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    do {
      uVar2 = (**(code **)**(undefined8 **)param_8[3])(auVar10._0_8_,auVar10._8_8_);
      puVar5 = (undefined8 *)**(undefined8 **)param_8[3];
      uVar3 = (*(code *)*puVar5)(auVar11._0_8_,auVar11._8_8_);
      if (param_7 == (undefined1 (*) [16])0x0) {
        func_0x00f78af4();
        auVar10 = (**(code **)**(undefined8 **)(unaff_x28 + 0x30))();
        *pauVar8 = auVar10;
        auVar10 = (*(code *)**(undefined8 **)(*(long *)(unaff_x28 + 0x30) + 8))
                            (auVar10._0_8_,auVar10._8_8_,puVar5,uVar6,puVar7,param_6);
        *pauVar9 = auVar10;
        return auVar10._0_8_;
      }
      uVar2 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(param_7,uVar2,uVar3);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      auVar10 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                          (auVar10._0_8_,auVar10._8_8_);
      auVar11 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                          (auVar11._0_8_,auVar11._8_8_);
      puVar7 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
      uVar6 = param_4;
      uVar4 = (*(code *)*puVar7)(auVar10._0_8_,auVar10._8_8_,param_3);
    } while ((uVar4 & 1) != 0);
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1810c68 | Core.Containers.ArrayIteratorExtensions.EqualRange<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__EqualRange_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined1 (*param_7) [16],
               undefined1 (*param_8) [16],long param_9)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)**(undefined8 **)(param_9 + 0x30))();
  *param_7 = auVar1;
  auVar1 = (*(code *)**(undefined8 **)(*(long *)(param_9 + 0x30) + 8))
                     (auVar1._0_8_,auVar1._8_8_,param_3,param_4,param_5,param_6);
  *param_8 = auVar1;
  return;
}



// ============================================================
// RVA: 0x1810cec | Core.Containers.ArrayIteratorExtensions.Find<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__Find_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x25;
  long unaff_x26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  long lStack_f0;
  
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = param_1;
  puVar17 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18);
  uVar16 = param_4;
  lVar19 = param_6;
  lVar21 = param_7;
  iVar7 = (*(code *)*puVar17)();
  if (iVar7 != 0) {
    do {
      puVar13 = (undefined8 *)**(undefined8 **)(param_7 + 0x30);
      uVar8 = (*(code *)*puVar13)(auVar23._0_8_,auVar23._8_8_);
      if (param_6 == 0) {
        auVar23 = func_0x00f78af4();
        auVar26._8_8_ = uVar16;
        auVar26._0_8_ = puVar13;
        lVar20 = lVar19;
        lVar22 = lVar21;
        uVar8 = param_8;
        uVar9 = (**(code **)**(undefined8 **)(unaff_x25 + 0x30))(puVar17,lVar19,lVar21,param_8);
        if ((uVar9 & 1) == 0) {
          puVar18 = *(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x20);
          uVar12 = uVar16;
          iVar7 = (*(code *)*puVar18)(auVar23._0_8_,auVar23._8_8_,puVar13);
          while (auVar25._8_8_ = lVar19, auVar25._0_8_ = puVar17, auVar24 = auVar23, iVar7 != 0) {
            while( true ) {
              uVar10 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x10))
                                 (auVar24._0_8_,auVar24._8_8_);
              puVar14 = *(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x10);
              uVar11 = (*(code *)*puVar14)(auVar25._0_8_,auVar25._8_8_);
              if (unaff_x26 == 0) {
                auVar23 = func_0x00f78af4();
                auVar24._8_8_ = lVar20;
                auVar24._0_8_ = puVar18;
                lVar19 = lVar20;
                iVar7 = (*(code *)**(undefined8 **)(puVar17[6] + 0x18))();
                do {
                  auVar1._8_8_ = uVar12;
                  auVar1._0_8_ = puVar14;
                  if (iVar7 == 0) {
                    return auVar1;
                  }
                  puVar13 = *(undefined8 **)(puVar17[6] + 0x18);
                  uVar16 = uVar8;
                  iVar7 = (*(code *)*puVar13)(puVar18,lVar20,lVar22);
                  auVar26 = auVar24;
                  if (iVar7 != 0) {
                    do {
                      uVar10 = (*(code *)**(undefined8 **)puVar17[6])(auVar26._0_8_,auVar26._8_8_);
                      puVar15 = *(undefined8 **)puVar17[6];
                      uVar11 = (*(code *)*puVar15)(auVar23._0_8_,auVar23._8_8_);
                      if (lStack_f0 == 0) {
                        auVar23 = func_0x00f78af4();
                        auVar3._8_8_ = uVar16;
                        auVar3._0_8_ = puVar15;
                        auVar2._8_8_ = uVar16;
                        auVar2._0_8_ = puVar15;
                        puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18);
                        uVar8 = uVar16;
                        lVar21 = lVar19;
                        iVar7 = (*(code *)*puVar17)();
                        if (iVar7 == 0) {
                          return auVar2;
                        }
                        while( true ) {
                          puVar18 = (undefined8 *)**(undefined8 **)(lVar19 + 0x30);
                          uVar12 = (*(code *)*puVar18)(auVar23._0_8_,auVar23._8_8_);
                          if (puVar13 == (undefined8 *)0x0) {
                            auVar23 = func_0x00f78af4();
                            auVar5._8_8_ = uVar8;
                            auVar5._0_8_ = puVar18;
                            auVar4._8_8_ = uVar8;
                            auVar4._0_8_ = puVar18;
                            puVar13 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18);
                            uVar16 = uVar8;
                            lVar19 = lVar21;
                            iVar7 = (*(code *)*puVar13)();
                            if (iVar7 == 0) {
                              return auVar4;
                            }
                            while( true ) {
                              puVar14 = (undefined8 *)**(undefined8 **)(lVar21 + 0x30);
                              uVar12 = (*(code *)*puVar14)(auVar23._0_8_,auVar23._8_8_);
                              if (puVar17 == (undefined8 *)0x0) {
                                auVar23 = func_0x00f78af4();
                                auVar26 = (*(code *)**(undefined8 **)
                                                      (*(long *)(lVar19 + 0x30) + 0x18))();
                                if (auVar26._0_4_ != 0) {
                                  do {
                                    puVar17 = (undefined8 *)**(undefined8 **)(lVar19 + 0x30);
                                    uVar8 = (*(code *)*puVar17)(auVar23._0_8_,auVar23._8_8_);
                                    iVar7 = (int)puVar17;
                                    if (puVar13 == (undefined8 *)0x0) {
                                      auVar28 = func_0x00f78af4();
                                      auVar27._0_8_ = auVar28._0_8_;
                                      auVar27._8_4_ = auVar28._8_4_ + iVar7;
                                      auVar27._12_4_ = 0;
                                      return auVar27;
                                    }
                                    (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))
                                              (puVar13,uVar8);
                                    auVar23 = (*(code *)**(undefined8 **)
                                                          (*(long *)(lVar19 + 0x30) + 0x10))
                                                        (auVar23._0_8_,auVar23._8_8_);
                                    auVar26 = (*(code *)**(undefined8 **)
                                                          (*(long *)(lVar19 + 0x30) + 0x18))
                                                        (auVar23._0_8_,auVar23._8_8_,puVar14,uVar16)
                                    ;
                                  } while ((auVar26._0_8_ & 1) != 0);
                                }
                                return auVar26;
                              }
                              iVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
                                                (puVar17,uVar12);
                              if (iVar7 == 0) break;
                              auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10)
                                        )(auVar23._0_8_,auVar23._8_8_);
                              puVar13 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18);
                              uVar16 = uVar8;
                              uVar9 = (*(code *)*puVar13)(auVar23._0_8_,auVar23._8_8_,puVar18);
                              if ((uVar9 & 1) == 0) {
                                return auVar5;
                              }
                            }
                            return auVar23;
                          }
                          uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))
                                            (puVar13,uVar12);
                          if ((uVar9 & 1) != 0) break;
                          auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))
                                              (auVar23._0_8_,auVar23._8_8_);
                          puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18);
                          uVar8 = uVar16;
                          uVar9 = (*(code *)*puVar17)(auVar23._0_8_,auVar23._8_8_,puVar15);
                          if ((uVar9 & 1) == 0) {
                            return auVar3;
                          }
                        }
                        return auVar23;
                      }
                      uVar9 = (*(code *)**(undefined8 **)(puVar17[6] + 8))(lStack_f0,uVar10,uVar11);
                      if ((uVar9 & 1) != 0) {
                        return auVar23;
                      }
                      auVar26 = (*(code *)**(undefined8 **)(puVar17[6] + 0x10))
                                          (auVar26._0_8_,auVar26._8_8_);
                      puVar13 = *(undefined8 **)(puVar17[6] + 0x18);
                      uVar16 = uVar8;
                      uVar9 = (*(code *)*puVar13)(auVar26._0_8_,auVar26._8_8_,lVar22);
                    } while ((uVar9 & 1) != 0);
                  }
                  auVar23 = (*(code *)**(undefined8 **)(puVar17[6] + 0x10))
                                      (auVar23._0_8_,auVar23._8_8_);
                  iVar7 = (*(code *)**(undefined8 **)(puVar17[6] + 0x18))
                                    (auVar23._0_8_,auVar23._8_8_,puVar14,uVar12);
                } while( true );
              }
              uVar9 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x18))
                                (unaff_x26,uVar10,uVar11);
              auVar1 = auVar26;
              if ((uVar9 & 1) == 0) break;
              auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 8))
                                  (auVar24._0_8_,auVar24._8_8_);
              auVar25 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 8))
                                  (auVar25._0_8_,auVar25._8_8_);
              uVar9 = (**(code **)**(undefined8 **)(unaff_x25 + 0x30))
                                (auVar25._0_8_,auVar25._8_8_,lVar21,param_8);
              auVar1 = auVar23;
              if ((uVar9 & 1) != 0) break;
              puVar18 = (undefined8 *)**(undefined8 **)(unaff_x25 + 0x30);
              uVar12 = uVar16;
              uVar9 = (*(code *)*puVar18)(auVar24._0_8_,auVar24._8_8_,puVar13);
              if ((uVar9 & 1) != 0) {
                return auVar26;
              }
            }
            auVar23 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 8))
                                (auVar23._0_8_,auVar23._8_8_);
            puVar18 = *(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x20);
            uVar12 = uVar16;
            iVar7 = (*(code *)*puVar18)(auVar23._0_8_,auVar23._8_8_,puVar13);
            auVar26 = auVar1;
          }
        }
        return auVar26;
      }
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))(param_6,uVar8,param_5);
      if ((uVar9 & 1) != 0) {
        return auVar23;
      }
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                          (auVar23._0_8_,auVar23._8_8_);
      puVar17 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18);
      uVar16 = param_4;
      uVar9 = (*(code *)*puVar17)(auVar23._0_8_,auVar23._8_8_,param_3);
    } while ((uVar9 & 1) != 0);
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



// ============================================================
// RVA: 0x1810ddc | Core.Containers.ArrayIteratorExtensions.FindEnd<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__FindEnd_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,undefined8 param_7,undefined8 param_8,long param_9,long param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  long lStack_a0;
  
  auVar23._8_8_ = param_4;
  auVar23._0_8_ = param_3;
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  lVar18 = param_6;
  uVar13 = param_7;
  uVar11 = param_8;
  uVar7 = (**(code **)**(undefined8 **)(param_10 + 0x30))(param_5,param_6,param_7,param_8);
  if ((uVar7 & 1) == 0) {
    puVar16 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
    uVar12 = param_4;
    iVar6 = (*(code *)*puVar16)(param_1,param_2,param_3);
    while (auVar21._8_8_ = param_6, auVar21._0_8_ = param_5, auVar20 = auVar22, iVar6 != 0) {
      while( true ) {
        uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))
                          (auVar20._0_8_,auVar20._8_8_);
        puVar14 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10);
        uVar9 = (*(code *)*puVar14)(auVar21._0_8_,auVar21._8_8_);
        if (param_9 == 0) {
          auVar22 = func_0x00f78af4();
          auVar20._8_8_ = lVar18;
          auVar20._0_8_ = puVar16;
          lVar19 = lVar18;
          iVar6 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))();
          do {
            auVar5._8_8_ = uVar12;
            auVar5._0_8_ = puVar14;
            if (iVar6 == 0) {
              return auVar5;
            }
            puVar17 = *(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18);
            uVar8 = uVar11;
            iVar6 = (*(code *)*puVar17)(puVar16,lVar18,uVar13);
            auVar23 = auVar20;
            if (iVar6 != 0) {
              do {
                uVar9 = (**(code **)**(undefined8 **)(param_5 + 0x30))(auVar23._0_8_,auVar23._8_8_);
                puVar15 = (undefined8 *)**(undefined8 **)(param_5 + 0x30);
                uVar10 = (*(code *)*puVar15)(auVar22._0_8_,auVar22._8_8_);
                if (lStack_a0 == 0) {
                  auVar22 = func_0x00f78af4();
                  auVar2._8_8_ = uVar8;
                  auVar2._0_8_ = puVar15;
                  auVar1._8_8_ = uVar8;
                  auVar1._0_8_ = puVar15;
                  puVar16 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18);
                  uVar13 = uVar8;
                  lVar18 = lVar19;
                  iVar6 = (*(code *)*puVar16)();
                  if (iVar6 == 0) {
                    return auVar1;
                  }
                  while( true ) {
                    puVar14 = (undefined8 *)**(undefined8 **)(lVar19 + 0x30);
                    uVar11 = (*(code *)*puVar14)(auVar22._0_8_,auVar22._8_8_);
                    if (puVar17 == (undefined8 *)0x0) {
                      auVar22 = func_0x00f78af4();
                      auVar4._8_8_ = uVar13;
                      auVar4._0_8_ = puVar14;
                      auVar3._8_8_ = uVar13;
                      auVar3._0_8_ = puVar14;
                      puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18);
                      uVar11 = uVar13;
                      lVar19 = lVar18;
                      iVar6 = (*(code *)*puVar17)();
                      if (iVar6 == 0) {
                        return auVar3;
                      }
                      while( true ) {
                        puVar15 = (undefined8 *)**(undefined8 **)(lVar18 + 0x30);
                        uVar12 = (*(code *)*puVar15)(auVar22._0_8_,auVar22._8_8_);
                        if (puVar16 == (undefined8 *)0x0) {
                          auVar22 = func_0x00f78af4();
                          auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18))();
                          if (auVar23._0_4_ != 0) {
                            do {
                              puVar16 = (undefined8 *)**(undefined8 **)(lVar19 + 0x30);
                              uVar13 = (*(code *)*puVar16)(auVar22._0_8_,auVar22._8_8_);
                              iVar6 = (int)puVar16;
                              if (puVar17 == (undefined8 *)0x0) {
                                auVar25 = func_0x00f78af4();
                                auVar24._0_8_ = auVar25._0_8_;
                                auVar24._8_4_ = auVar25._8_4_ + iVar6;
                                auVar24._12_4_ = 0;
                                return auVar24;
                              }
                              (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))
                                        (puVar17,uVar13);
                              auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10)
                                        )(auVar22._0_8_,auVar22._8_8_);
                              auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18)
                                        )(auVar22._0_8_,auVar22._8_8_,puVar15,uVar11);
                            } while ((auVar23._0_8_ & 1) != 0);
                          }
                          return auVar23;
                        }
                        iVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                          (puVar16,uVar12);
                        if (iVar6 == 0) break;
                        auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))
                                            (auVar22._0_8_,auVar22._8_8_);
                        puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18);
                        uVar11 = uVar13;
                        uVar7 = (*(code *)*puVar17)(auVar22._0_8_,auVar22._8_8_,puVar14);
                        if ((uVar7 & 1) == 0) {
                          return auVar4;
                        }
                      }
                      return auVar22;
                    }
                    uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))
                                      (puVar17,uVar11);
                    if ((uVar7 & 1) != 0) break;
                    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))
                                        (auVar22._0_8_,auVar22._8_8_);
                    puVar16 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18);
                    uVar13 = uVar8;
                    uVar7 = (*(code *)*puVar16)(auVar22._0_8_,auVar22._8_8_,puVar15);
                    if ((uVar7 & 1) == 0) {
                      return auVar2;
                    }
                  }
                  return auVar22;
                }
                uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))
                                  (lStack_a0,uVar9,uVar10);
                if ((uVar7 & 1) != 0) {
                  return auVar22;
                }
                auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))
                                    (auVar23._0_8_,auVar23._8_8_);
                puVar17 = *(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18);
                uVar8 = uVar11;
                uVar7 = (*(code *)*puVar17)(auVar23._0_8_,auVar23._8_8_,uVar13);
              } while ((uVar7 & 1) != 0);
            }
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))
                                (auVar22._0_8_,auVar22._8_8_);
            iVar6 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))
                              (auVar22._0_8_,auVar22._8_8_,puVar14,uVar12);
          } while( true );
        }
        uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(param_9,uVar8,uVar9)
        ;
        auVar5 = auVar23;
        if ((uVar7 & 1) == 0) break;
        auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))
                            (auVar20._0_8_,auVar20._8_8_);
        auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))
                            (auVar21._0_8_,auVar21._8_8_);
        uVar7 = (**(code **)**(undefined8 **)(param_10 + 0x30))
                          (auVar21._0_8_,auVar21._8_8_,param_7,param_8);
        auVar5 = auVar22;
        if ((uVar7 & 1) != 0) break;
        puVar16 = (undefined8 *)**(undefined8 **)(param_10 + 0x30);
        uVar12 = param_4;
        uVar7 = (*(code *)*puVar16)(auVar20._0_8_,auVar20._8_8_,param_3);
        if ((uVar7 & 1) != 0) {
          return auVar23;
        }
      }
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))
                          (auVar22._0_8_,auVar22._8_8_);
      puVar16 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
      uVar12 = param_4;
      iVar6 = (*(code *)*puVar16)(auVar22._0_8_,auVar22._8_8_,param_3);
      auVar23 = auVar5;
    }
  }
  return auVar23;
}



// ============================================================
// RVA: 0x1810fe4 | Core.Containers.ArrayIteratorExtensions.FindFirstOf<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__FindFirstOf_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  auVar18._8_8_ = param_6;
  auVar18._0_8_ = param_5;
  lVar14 = param_6;
  iVar5 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))();
  do {
    auVar16._8_8_ = param_4;
    auVar16._0_8_ = param_3;
    if (iVar5 == 0) {
      return auVar16;
    }
    puVar12 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18);
    uVar11 = param_8;
    iVar5 = (*(code *)*puVar12)(param_5,param_6,param_7);
    auVar16 = auVar18;
    if (iVar5 != 0) {
      do {
        uVar6 = (**(code **)**(undefined8 **)(param_10 + 0x30))(auVar16._0_8_,auVar16._8_8_);
        puVar9 = (undefined8 *)**(undefined8 **)(param_10 + 0x30);
        uVar7 = (*(code *)*puVar9)(auVar17._0_8_,auVar17._8_8_);
        if (param_9 == 0) {
          auVar18 = func_0x00f78af4();
          auVar2._8_8_ = uVar11;
          auVar2._0_8_ = puVar9;
          auVar1._8_8_ = uVar11;
          auVar1._0_8_ = puVar9;
          puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18);
          uVar6 = uVar11;
          lVar15 = lVar14;
          iVar5 = (*(code *)*puVar13)();
          if (iVar5 == 0) {
            return auVar1;
          }
          while( true ) {
            puVar10 = (undefined8 *)**(undefined8 **)(lVar14 + 0x30);
            uVar7 = (*(code *)*puVar10)(auVar18._0_8_,auVar18._8_8_);
            if (puVar12 == (undefined8 *)0x0) {
              auVar18 = func_0x00f78af4();
              auVar4._8_8_ = uVar6;
              auVar4._0_8_ = puVar10;
              auVar3._8_8_ = uVar6;
              auVar3._0_8_ = puVar10;
              puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18);
              uVar11 = uVar6;
              lVar14 = lVar15;
              iVar5 = (*(code *)*puVar12)();
              if (iVar5 == 0) {
                return auVar3;
              }
              while( true ) {
                puVar9 = (undefined8 *)**(undefined8 **)(lVar15 + 0x30);
                uVar7 = (*(code *)*puVar9)(auVar18._0_8_,auVar18._8_8_);
                if (puVar13 == (undefined8 *)0x0) {
                  auVar18 = func_0x00f78af4();
                  auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))();
                  if (auVar17._0_4_ != 0) {
                    do {
                      puVar13 = (undefined8 *)**(undefined8 **)(lVar14 + 0x30);
                      uVar6 = (*(code *)*puVar13)(auVar18._0_8_,auVar18._8_8_);
                      iVar5 = (int)puVar13;
                      if (puVar12 == (undefined8 *)0x0) {
                        auVar20 = func_0x00f78af4();
                        auVar19._0_8_ = auVar20._0_8_;
                        auVar19._8_4_ = auVar20._8_4_ + iVar5;
                        auVar19._12_4_ = 0;
                        return auVar19;
                      }
                      (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(puVar12,uVar6);
                      auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                                          (auVar18._0_8_,auVar18._8_8_);
                      auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                                          (auVar18._0_8_,auVar18._8_8_,puVar9,uVar11);
                    } while ((auVar17._0_8_ & 1) != 0);
                  }
                  return auVar17;
                }
                iVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(puVar13,uVar7);
                if (iVar5 == 0) break;
                auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))
                                    (auVar18._0_8_,auVar18._8_8_);
                puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18);
                uVar11 = uVar6;
                uVar8 = (*(code *)*puVar12)(auVar18._0_8_,auVar18._8_8_,puVar10);
                if ((uVar8 & 1) == 0) {
                  return auVar4;
                }
              }
              return auVar18;
            }
            uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(puVar12,uVar7);
            if ((uVar8 & 1) != 0) break;
            auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                                (auVar18._0_8_,auVar18._8_8_);
            puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18);
            uVar6 = uVar11;
            uVar8 = (*(code *)*puVar13)(auVar18._0_8_,auVar18._8_8_,puVar9);
            if ((uVar8 & 1) == 0) {
              return auVar2;
            }
          }
          return auVar18;
        }
        uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(param_9,uVar6,uVar7);
        if ((uVar8 & 1) != 0) {
          return auVar17;
        }
        auVar16 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))
                            (auVar16._0_8_,auVar16._8_8_);
        puVar12 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18);
        uVar11 = param_8;
        uVar8 = (*(code *)*puVar12)(auVar16._0_8_,auVar16._8_8_,param_7);
      } while ((uVar8 & 1) != 0);
    }
    auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))
                        (auVar17._0_8_,auVar17._8_8_);
    iVar5 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))
                      (auVar17._0_8_,auVar17._8_8_,param_3,param_4);
  } while( true );
}



// ============================================================
// RVA: 0x181117c | Core.Containers.ArrayIteratorExtensions.FindIf<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__FindIf_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18);
  uVar7 = param_4;
  lVar12 = param_6;
  iVar3 = (*(code *)*puVar10)();
  if (iVar3 != 0) {
    do {
      puVar8 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
      uVar4 = (*(code *)*puVar8)(auVar14._0_8_,auVar14._8_8_);
      if (param_5 == 0) {
        auVar14 = func_0x00f78af4();
        auVar1._8_8_ = uVar7;
        auVar1._0_8_ = puVar8;
        auVar15._8_8_ = uVar7;
        auVar15._0_8_ = puVar8;
        puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18);
        uVar4 = uVar7;
        lVar13 = lVar12;
        iVar3 = (*(code *)*puVar11)();
        if (iVar3 == 0) {
          return auVar15;
        }
        while( true ) {
          puVar9 = (undefined8 *)**(undefined8 **)(lVar12 + 0x30);
          uVar6 = (*(code *)*puVar9)(auVar14._0_8_,auVar14._8_8_);
          if (puVar10 == (undefined8 *)0x0) {
            auVar14 = func_0x00f78af4();
            auVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18))();
            if (auVar15._0_4_ != 0) {
              do {
                puVar10 = (undefined8 *)**(undefined8 **)(lVar13 + 0x30);
                uVar7 = (*(code *)*puVar10)(auVar14._0_8_,auVar14._8_8_);
                iVar3 = (int)puVar10;
                if (puVar11 == (undefined8 *)0x0) {
                  auVar17 = func_0x00f78af4();
                  auVar16._0_8_ = auVar17._0_8_;
                  auVar16._8_4_ = auVar17._8_4_ + iVar3;
                  auVar16._12_4_ = 0;
                  return auVar16;
                }
                (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(puVar11,uVar7);
                auVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))
                                    (auVar14._0_8_,auVar14._8_8_);
                auVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18))
                                    (auVar14._0_8_,auVar14._8_8_,puVar9,uVar4);
              } while ((auVar15._0_8_ & 1) != 0);
            }
            return auVar15;
          }
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))(puVar10,uVar6);
          if (iVar3 == 0) break;
          auVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                              (auVar14._0_8_,auVar14._8_8_);
          puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18);
          uVar4 = uVar7;
          uVar5 = (*(code *)*puVar11)(auVar14._0_8_,auVar14._8_8_,puVar8);
          if ((uVar5 & 1) == 0) {
            return auVar1;
          }
        }
        return auVar14;
      }
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar4);
      if ((uVar5 & 1) != 0) {
        return auVar14;
      }
      auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                          (auVar14._0_8_,auVar14._8_8_);
      puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18);
      uVar7 = param_4;
      uVar5 = (*(code *)*puVar10)(auVar14._0_8_,auVar14._8_8_,param_3);
    } while ((uVar5 & 1) != 0);
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



// ============================================================
// RVA: 0x181125c | Core.Containers.ArrayIteratorExtensions.FindIfNot<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__FindIfNot_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  puVar8 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18);
  uVar7 = param_4;
  lVar9 = param_6;
  iVar2 = (*(code *)*puVar8)();
  if (iVar2 != 0) {
    do {
      puVar5 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
      uVar3 = (*(code *)*puVar5)(auVar10._0_8_,auVar10._8_8_);
      if (param_5 == 0) {
        auVar10 = func_0x00f78af4();
        auVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x18))();
        if (auVar11._0_4_ != 0) {
          do {
            puVar6 = (undefined8 *)**(undefined8 **)(lVar9 + 0x30);
            uVar3 = (*(code *)*puVar6)(auVar10._0_8_,auVar10._8_8_);
            iVar2 = (int)puVar6;
            if (puVar8 == (undefined8 *)0x0) {
              auVar12 = func_0x00f78af4();
              auVar11._0_8_ = auVar12._0_8_;
              auVar11._8_4_ = auVar12._8_4_ + iVar2;
              auVar11._12_4_ = 0;
              return auVar11;
            }
            (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(puVar8,uVar3);
            auVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x10))
                                (auVar10._0_8_,auVar10._8_8_);
            auVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x18))
                                (auVar10._0_8_,auVar10._8_8_,puVar5,uVar7);
          } while ((auVar11._0_8_ & 1) != 0);
        }
        return auVar11;
      }
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar3);
      if (iVar2 == 0) {
        return auVar10;
      }
      auVar10 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                          (auVar10._0_8_,auVar10._8_8_);
      puVar8 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18);
      uVar7 = param_4;
      uVar4 = (*(code *)*puVar8)(auVar10._0_8_,auVar10._8_8_,param_3);
    } while ((uVar4 & 1) != 0);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x181133c | Core.Containers.ArrayIteratorExtensions.ForEach<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__ForEach_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))();
  if (iVar1 != 0) {
    do {
      uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))(auVar4._0_8_,auVar4._8_8_);
      if (param_5 == 0) {
        func_0x00f78af4();
        return;
      }
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar2);
      auVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                         (auVar4._0_8_,auVar4._8_8_);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                        (auVar4._0_8_,auVar4._8_8_,param_3,param_4);
    } while ((uVar3 & 1) != 0);
  }
  return;
}



// ============================================================
// RVA: 0x1811404 | Core.Containers.ArrayIteratorExtensions.GetAdvanced<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__GetAdvanced_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x181140c | Core.Containers.ArrayIteratorExtensions.GetCurrent<object>
// ============================================================

long Core_Containers_ArrayIteratorExtensions__GetCurrent_object_(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *extraout_x8;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  
  if (param_1 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(param_1 + 0x18)) {
    return *(long *)(param_1 + ((long)((ulong)param_2 << 0x20) >> 0x1d) + 0x20);
  }
  uVar1 = func_0x00f78b24();
  auVar6 = func_0x00f78ac0(uVar1,0);
  lVar2 = auVar6._0_8_;
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (auVar6._8_4_ < *(uint *)(lVar2 + 0x18)) {
    lVar3 = lVar2 + (long)(int)auVar6._8_4_ * 0x28;
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x38);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    extraout_x8[1] = *(undefined8 *)(lVar3 + 0x28);
    *extraout_x8 = uVar1;
    extraout_x8[3] = uVar5;
    extraout_x8[2] = uVar4;
    extraout_x8[4] = *(undefined8 *)(lVar3 + 0x40);
    return lVar2;
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  return lVar2;
}



// ============================================================
// RVA: 0x1811448 | Core.Containers.ArrayIteratorExtensions.GetCurrent<PlayerRankingPair>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__GetCurrent_PlayerRankingPair_
               (undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    func_0x00f78af4();
  }
  else if (param_3 < *(uint *)(param_2 + 0x18)) {
    param_2 = param_2 + (long)(int)param_3 * 0x28;
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[4] = *(undefined8 *)(param_2 + 0x40);
    return;
  }
  uVar1 = func_0x00f78b24();
  func_0x00f78ac0(uVar1,0);
  return;
}



// ============================================================
// RVA: 0x1811490 | Core.Containers.ArrayIteratorExtensions.GetNext<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__GetNext_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x18114a0 | Core.Containers.ArrayIteratorExtensions.GetNext<PlayerRankingPair>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__GetNext_PlayerRankingPair_(void)

{
  return;
}



// ============================================================
// RVA: 0x18114b0 | Core.Containers.ArrayIteratorExtensions.GetPrev<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__GetPrev_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x18114c0 | Core.Containers.ArrayIteratorExtensions.Includes<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__Includes_object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                long param_10)

{
  undefined1 auVar1 [12];
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  auVar20._8_8_ = param_6;
  auVar20._0_8_ = param_5;
  lVar13 = param_7;
  lVar14 = param_8;
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20))
                    (param_5,param_6,param_7,param_8);
  if (iVar2 != 0) {
    do {
      uVar8 = auVar21._8_8_;
      uVar19 = auVar21._0_8_;
      uVar17 = auVar20._8_8_;
      uVar9 = auVar20._0_8_;
      puVar12 = (undefined8 *)**(undefined8 **)(param_10 + 0x30);
      uVar6 = param_4;
      uVar3 = (*(code *)*puVar12)(uVar19,uVar8,param_3);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar9,uVar17);
      puVar10 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 8);
      uVar5 = (*(code *)*puVar10)(uVar19,uVar8);
      if (param_9 == 0) {
        auVar20 = func_0x00f78af4();
        uVar17 = auVar20._8_8_;
        uVar7 = auVar20._0_8_;
        iVar2 = auVar20._8_4_;
        iVar16 = (int)uVar6;
        uVar3 = uVar7;
        if (iVar2 < iVar16) {
          iVar18 = (int)param_6;
          if (iVar16 < iVar18) {
            if (iVar18 - iVar2 != 2) {
              pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18);
              if (iVar18 - iVar16 < iVar16 - iVar2) {
                iVar2 = (*pcVar15)(uVar7,uVar17,puVar10,uVar6);
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 1;
                }
                auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                                    (uVar7,uVar17,iVar2 >> 1);
                uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x30))();
                auVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28))
                                    (puVar10,uVar6,puVar12,param_6,uVar9,lVar13);
              }
              else {
                iVar2 = (*pcVar15)(puVar10,uVar6,puVar12,param_6);
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 1;
                }
                auVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                                    (puVar10,uVar6,iVar2 >> 1);
                uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x30))();
                auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x30))
                                    (uVar7,uVar17,puVar10,uVar6,uVar9,lVar13);
              }
              uStack_f0 = auVar21._8_8_;
              uStack_e8 = auVar21._0_8_;
              uVar8 = auVar20._8_8_;
              uVar9 = auVar20._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x38))
                        (uVar9,uVar8,puVar10,uVar6,uStack_e8,uStack_f0);
              uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                                (puVar10,uVar6,uStack_e8,uStack_f0);
              auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                                  (uVar9,uVar8,uVar6);
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x40))
                        (uVar7,uVar17,uVar9,uVar8,auVar20._0_8_,auVar20._8_8_,lVar13);
                    /* WARNING: Could not recover jumptable at 0x018119a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x40))
                                (auVar20._0_8_,auVar20._8_8_,uStack_e8,uStack_f0,puVar12,param_6,
                                 lVar13);
              return uVar3;
            }
            uVar9 = uVar6;
            uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x30))(puVar10,uVar6);
            uVar11 = (undefined4)uVar9;
            puVar12 = (undefined8 *)**(undefined8 **)(lVar14 + 0x30);
            uVar9 = (*(code *)*puVar12)(uVar7,uVar17);
            if (lVar13 == 0) {
              auVar22 = func_0x00f78af4();
              auVar1._8_4_ = uVar11;
              auVar1._0_8_ = puVar12;
              return (ulong)(auVar22 == auVar1);
            }
            uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar13,uVar8,uVar9);
            if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01811778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                                (uVar7,uVar17,puVar10,uVar6);
              return uVar3;
            }
          }
        }
        return uVar3;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))(param_9,uVar4,uVar5);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar19,uVar8);
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar9,uVar17);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))(param_9,uVar6,uVar4);
      if ((uVar3 & 1) == 0) {
        auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(uVar9,uVar17);
      }
      auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(uVar19,uVar8);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20))
                        (auVar20._0_8_,auVar20._8_8_,param_7,param_8);
    } while ((uVar3 & 1) != 0);
  }
  return 1;
}



// ============================================================
// RVA: 0x1811690 | Core.Containers.ArrayIteratorExtensions.InplaceMerge<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__InplaceMerge_object_
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined1 auVar1 [12];
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  iVar2 = (int)param_2;
  iVar9 = (int)param_4;
  uVar5 = param_1;
  if (iVar2 < iVar9) {
    iVar10 = (int)param_6;
    if (iVar9 < iVar10) {
      if (iVar10 - iVar2 != 2) {
        pcVar8 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18);
        if (iVar10 - iVar9 < iVar9 - iVar2) {
          iVar2 = (*pcVar8)(param_1,param_2,param_3,param_4);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                              (param_1,param_2,iVar2 >> 1);
          uVar4 = (**(code **)**(undefined8 **)(param_8 + 0x30))();
          auVar13 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28))
                              (param_3,param_4,param_5,param_6,uVar4,param_7);
        }
        else {
          iVar2 = (*pcVar8)(param_3,param_4,param_5,param_6);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          auVar13 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                              (param_3,param_4,iVar2 >> 1);
          uVar4 = (**(code **)**(undefined8 **)(param_8 + 0x30))();
          auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x30))
                              (param_1,param_2,param_3,param_4,uVar4,param_7);
        }
        uStack_80 = auVar13._8_8_;
        uStack_78 = auVar13._0_8_;
        uVar11 = auVar12._8_8_;
        uVar3 = auVar12._0_8_;
        (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x38))
                  (uVar3,uVar11,param_3,param_4,uStack_78,uStack_80);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))
                          (param_3,param_4,uStack_78,uStack_80);
        auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar3,uVar11,uVar4)
        ;
        (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                  (param_1,param_2,uVar3,uVar11,auVar12._0_8_,auVar12._8_8_,param_7);
                    /* WARNING: Could not recover jumptable at 0x018119a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                          (auVar12._0_8_,auVar12._8_8_,uStack_78,uStack_80,param_5,param_6,param_7);
        return uVar5;
      }
      uVar4 = param_4;
      uVar3 = (**(code **)**(undefined8 **)(param_8 + 0x30))(param_3,param_4);
      uVar7 = (undefined4)uVar4;
      puVar6 = (undefined8 *)**(undefined8 **)(param_8 + 0x30);
      uVar4 = (*(code *)*puVar6)(param_1,param_2);
      if (param_7 == 0) {
        auVar14 = func_0x00f78af4();
        auVar1._8_4_ = uVar7;
        auVar1._0_8_ = puVar6;
        return (ulong)(auVar14 == auVar1);
      }
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))(param_7,uVar3,uVar4);
      if ((int)uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01811778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10))
                          (param_1,param_2,param_3,param_4);
        return uVar5;
      }
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x18119a8 | Core.Containers.ArrayIteratorExtensions.IsEqual<object>
// ============================================================

bool Core_Containers_ArrayIteratorExtensions__IsEqual_object_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



// ============================================================
// RVA: 0x18119b8 | Core.Containers.ArrayIteratorExtensions.IsEqual<PlayerRankingPair>
// ============================================================

bool Core_Containers_ArrayIteratorExtensions__IsEqual_PlayerRankingPair_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



// ============================================================
// RVA: 0x18119c8 | Core.Containers.ArrayIteratorExtensions.IsHeap<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__IsHeap_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x01811a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
            (auVar1._0_8_,auVar1._8_8_,param_3,param_4);
  return;
}



// ============================================================
// RVA: 0x1811a18 | Core.Containers.ArrayIteratorExtensions.IsHeapUntil<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__IsHeapUntil_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,undefined8 param_7,long param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong extraout_x1_01;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = param_1;
  auVar21._8_8_ = param_4;
  auVar21._0_8_ = param_3;
  puVar12 = (undefined8 *)**(long **)(param_6 + 0x30);
  lVar14 = param_6;
  iVar3 = (*(code *)*puVar12)();
  if (1 < iVar3) {
    iVar17 = 1;
    do {
      uVar18 = auVar20._8_8_;
      uVar7 = auVar20._0_8_;
      puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
      auVar20 = (*(code *)*puVar10)(param_1,param_2,iVar17);
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar7,uVar18);
      puVar8 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
      uVar5 = (*(code *)*puVar8)(auVar20._0_8_,auVar20._8_8_);
      if (param_5 == 0) {
        auVar21 = func_0x00f78af4();
        puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 8);
        pcVar16 = (code *)*puVar13;
        lVar15 = lVar14;
        goto code_r0x01811c28;
      }
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar4,uVar5);
      if ((uVar6 & 1) != 0) {
        return auVar20;
      }
      auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                          (auVar20._0_8_,auVar20._8_8_);
      if (iVar17 + 1 == iVar3) {
        return auVar21;
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar7,uVar18);
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                        (auVar20._0_8_,auVar20._8_8_);
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar4,uVar5);
      if ((uVar6 & 1) != 0) {
        return auVar20;
      }
      auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar7,uVar18);
      iVar17 = iVar17 + 2;
    } while (iVar17 < iVar3);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
code_r0x01811c28:
  uVar5 = auVar21._8_8_;
  uVar4 = auVar21._0_8_;
  puVar11 = puVar10;
  iVar3 = (*pcVar16)();
  if (iVar3 == 0) goto code_r0x01811ca0;
  puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
  uVar7 = (*(code *)*puVar9)(uVar4,uVar5);
  if (puVar12 == (undefined8 *)0x0) goto code_r0x01811d60;
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(puVar12,uVar7);
  if ((uVar6 & 1) == 0) goto code_r0x01811ca0;
  auVar21 = (**(code **)**(undefined8 **)(lVar14 + 0x30))(uVar4,uVar5);
  puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 8);
  pcVar16 = (code *)*puVar13;
  goto code_r0x01811c28;
code_r0x01811ca0:
  puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 8);
  puVar11 = puVar10;
  iVar3 = (*(code *)*puVar13)(uVar4,uVar5,puVar8,puVar10);
  if (iVar3 == 0) {
    uVar6 = 1;
    uVar4 = extraout_x1;
  }
  else {
    do {
      puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
      uVar4 = (*(code *)*puVar9)(auVar21._0_8_,auVar21._8_8_);
      if (puVar12 == (undefined8 *)0x0) {
code_r0x01811d60:
        auVar21 = func_0x00f78af4();
        uVar7 = auVar21._8_8_;
        uVar5 = auVar21._0_8_;
        (**(code **)**(undefined8 **)(param_8 + 0x30))();
        auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                            (uVar5,uVar7,puVar9,puVar11);
        uVar4 = auVar20._8_8_;
        if ((auVar20._0_8_ & 1) == 0) {
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10))
                            (uVar5,uVar7,puVar9,puVar11);
          auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))
                              (puVar13,lVar15,uVar4);
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                            (uVar5,uVar7,puVar9,puVar11);
          uVar4 = extraout_x1_00;
          if (iVar3 != 0) {
            do {
              uVar19 = auVar21._8_8_;
              uVar18 = auVar21._0_8_;
              uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar18,uVar19);
              auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28))
                                  (uVar5,uVar7,uVar18,uVar19,uVar4,param_7);
              iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                                (auVar21._0_8_,auVar21._8_8_,uVar18,uVar19);
              if (iVar3 != 0) {
                uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                                  (uVar18,uVar19);
                auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x30))
                                    (puVar13,lVar15,auVar20._0_8_,auVar20._8_8_,uVar4,param_7);
                if (auVar21._0_4_ == 0) {
                  return auVar21;
                }
                uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                                  (uVar18,uVar19);
                iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x30))
                                  (uVar18,uVar19,puVar9,puVar11,uVar4,param_7);
                if (iVar3 != auVar21._0_4_) {
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = extraout_x1_01;
                  return auVar22 << 0x40;
                }
              }
              auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x38))
                                  (uVar18,uVar19);
              auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                                  (auVar21._0_8_,auVar21._8_8_,puVar9,puVar11);
              uVar4 = auVar22._8_8_;
            } while ((auVar22._0_8_ & 1) != 0);
          }
        }
        auVar2._8_8_ = uVar4;
        auVar2._0_8_ = 1;
        return auVar2;
      }
      auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(puVar12,uVar4);
      uVar4 = auVar20._8_8_;
      if ((auVar20._0_8_ & 1) != 0) break;
      auVar21 = (**(code **)**(undefined8 **)(lVar14 + 0x30))(auVar21._0_8_,auVar21._8_8_);
      puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 8);
      puVar11 = puVar10;
      auVar22 = (*(code *)*puVar13)(auVar21._0_8_,auVar21._8_8_,puVar8);
      uVar4 = auVar22._8_8_;
    } while ((auVar22._0_8_ & 1) != 0);
    uVar6 = (ulong)(auVar20._0_4_ ^ 1);
  }
  auVar23._8_8_ = uVar4;
  auVar23._0_8_ = uVar6;
  return auVar23;
}



// ============================================================
// RVA: 0x1811bec | Core.Containers.ArrayIteratorExtensions.IsPartitioned<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__IsPartitioned_object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,long param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
  pcVar11 = (code *)*puVar9;
  lVar10 = param_6;
  while( true ) {
    uVar6 = auVar14._8_8_;
    uVar5 = auVar14._0_8_;
    uVar8 = param_4;
    iVar1 = (*pcVar11)(uVar5,uVar6,param_3,param_4);
    if (iVar1 == 0) break;
    puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
    uVar3 = (*(code *)*puVar7)(uVar5,uVar6);
    if (param_5 == 0) goto LAB_01811d60;
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar3);
    if ((uVar4 & 1) == 0) break;
    auVar14 = (**(code **)**(undefined8 **)(param_6 + 0x30))(uVar5,uVar6);
    puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
    pcVar11 = (code *)*puVar9;
  }
  puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
  uVar8 = param_4;
  iVar1 = (*(code *)*puVar9)(uVar5,uVar6,param_3,param_4);
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  else {
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
      uVar5 = (*(code *)*puVar7)(auVar14._0_8_,auVar14._8_8_);
      if (param_5 == 0) {
LAB_01811d60:
        auVar14 = func_0x00f78af4();
        uVar6 = auVar14._8_8_;
        uVar5 = auVar14._0_8_;
        (**(code **)**(undefined8 **)(param_8 + 0x30))();
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                          (uVar5,uVar6,puVar7,uVar8);
        if ((uVar4 & 1) == 0) {
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10))
                            (uVar5,uVar6,puVar7,uVar8);
          auVar15 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))
                              (puVar9,lVar10,uVar3);
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                            (uVar5,uVar6,puVar7,uVar8);
          if (iVar1 != 0) {
            do {
              uVar13 = auVar14._8_8_;
              uVar12 = auVar14._0_8_;
              uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar12,uVar13);
              auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28))
                                  (uVar5,uVar6,uVar12,uVar13,uVar3,param_7);
              iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                                (auVar14._0_8_,auVar14._8_8_,uVar12,uVar13);
              if (iVar1 != 0) {
                uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                                  (uVar12,uVar13);
                uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x30))
                                  (puVar9,lVar10,auVar15._0_8_,auVar15._8_8_,uVar3,param_7);
                if ((int)uVar4 == 0) {
                  return uVar4;
                }
                uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                                  (uVar12,uVar13);
                iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x30))
                                  (uVar12,uVar13,puVar7,uVar8,uVar3,param_7);
                if (iVar1 != (int)uVar4) {
                  return 0;
                }
              }
              auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x38))
                                  (uVar12,uVar13);
              uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                                (auVar14._0_8_,auVar14._8_8_,puVar7,uVar8);
            } while ((uVar4 & 1) != 0);
          }
        }
        return 1;
      }
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar5);
      if ((uVar2 & 1) != 0) break;
      auVar14 = (**(code **)**(undefined8 **)(param_6 + 0x30))(auVar14._0_8_,auVar14._8_8_);
      puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
      uVar8 = param_4;
      uVar4 = (*(code *)*puVar9)(auVar14._0_8_,auVar14._8_8_,param_3);
    } while ((uVar4 & 1) != 0);
    uVar4 = (ulong)(uVar2 ^ 1);
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1811d64 | Core.Containers.ArrayIteratorExtensions.IsPermutation<object>
// ============================================================

undefined8
Core_Containers_ArrayIteratorExtensions__IsPermutation_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  (**(code **)**(undefined8 **)(param_8 + 0x30))();
  uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                    (param_1,param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10))
                      (param_1,param_2,param_3,param_4);
    auVar7 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))(param_5,param_6,uVar3);
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                      (param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      do {
        uVar6 = auVar8._8_8_;
        uVar5 = auVar8._0_8_;
        uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar5,uVar6);
        auVar8 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28))
                           (param_1,param_2,uVar5,uVar6,uVar3,param_7);
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                          (auVar8._0_8_,auVar8._8_8_,uVar5,uVar6);
        if (iVar1 != 0) {
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar5,uVar6);
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x30))
                            (param_5,param_6,auVar7._0_8_,auVar7._8_8_,uVar3,param_7);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar5,uVar6);
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x30))
                            (uVar5,uVar6,param_3,param_4,uVar4,param_7);
          if (iVar1 != (int)uVar3) {
            return 0;
          }
        }
        auVar8 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x38))(uVar5,uVar6);
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x40))
                          (auVar8._0_8_,auVar8._8_8_,param_3,param_4);
      } while ((uVar2 & 1) != 0);
    }
  }
  return 1;
}



// ============================================================
// RVA: 0x1811fa0 | Core.Containers.ArrayIteratorExtensions.IsSorted<object>
// ============================================================

undefined8 *
Core_Containers_ArrayIteratorExtensions__IsSorted_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  lVar9 = param_6;
  uVar3 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar3 & 1) == 0) {
    auVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_1,param_2);
    puVar8 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20);
    uVar7 = param_4;
    iVar1 = (*(code *)*puVar8)(auVar11._0_8_,auVar11._8_8_,param_3,param_4);
    if (iVar1 != 0) {
      do {
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                          (auVar11._0_8_,auVar11._8_8_);
        puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
        uVar5 = (*(code *)*puVar6)(auVar12._0_8_,auVar12._8_8_);
        if (param_5 == 0) {
          auVar12 = func_0x00f78af4();
          uVar3 = (**(code **)**(undefined8 **)(lVar9 + 0x30))();
          if ((uVar3 & 1) != 0) {
            return auVar12._0_8_;
          }
          auVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x18))
                              (auVar12._0_8_,auVar12._8_8_);
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x20))
                            (auVar11._0_8_,auVar11._8_8_,puVar6,uVar7);
          if (iVar1 != 0) {
            while( true ) {
              puVar10 = auVar11._0_8_;
              uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))
                                (puVar10,auVar11._8_8_);
              uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))
                                (auVar12._0_8_,auVar12._8_8_);
              if (puVar8 == (undefined8 *)0x0) {
                puVar8 = (undefined8 *)func_0x00f78af4();
                return puVar8;
              }
              uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x10))
                                (puVar8,uVar4,uVar5);
              if ((uVar3 & 1) != 0) break;
              auVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x18))
                                  (auVar12._0_8_,auVar12._8_8_);
              auVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x18))
                                  (puVar10,auVar11._8_8_);
              uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x20))
                                (auVar11._0_8_,auVar11._8_8_,puVar6,uVar7);
              if ((uVar3 & 1) == 0) {
                return puVar6;
              }
            }
            return puVar10;
          }
          return puVar6;
        }
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(param_5,uVar4,uVar5);
        if ((uVar2 & 1) != 0) break;
        auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (auVar12._0_8_,auVar12._8_8_);
        auVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (auVar11._0_8_,auVar11._8_8_);
        puVar8 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20);
        uVar7 = param_4;
        uVar3 = (*(code *)*puVar8)(auVar11._0_8_,auVar11._8_8_,param_3);
      } while ((uVar3 & 1) != 0);
      return (undefined8 *)(ulong)(uVar2 ^ 1);
    }
  }
  return (undefined8 *)((long)&MACH_HEADER.magic + 1);
}



// ============================================================
// RVA: 0x1812108 | Core.Containers.ArrayIteratorExtensions.IsSortedUntil<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__IsSortedUntil_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  uVar4 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  auVar9 = auVar8;
  if ((uVar4 & 1) == 0) {
    auVar7 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_1,param_2);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                      (auVar7._0_8_,auVar7._8_8_,param_3,param_4);
    auVar9 = auVar1;
    if (iVar3 != 0) {
      do {
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                          (auVar7._0_8_,auVar7._8_8_);
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                          (auVar8._0_8_,auVar8._8_8_);
        if (param_5 == 0) {
          auVar9 = func_0x00f78af4();
          auVar9._8_8_ = auVar9._8_8_ & 0xffffffff;
          return auVar9;
        }
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(param_5,uVar5,uVar6);
        if ((uVar4 & 1) != 0) {
          return auVar7;
        }
        auVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                           (auVar8._0_8_,auVar8._8_8_);
        auVar7 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                           (auVar7._0_8_,auVar7._8_8_);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                          (auVar7._0_8_,auVar7._8_8_,param_3,param_4);
        auVar9 = auVar2;
      } while ((uVar4 & 1) != 0);
    }
  }
  return auVar9;
}



// ============================================================
// RVA: 0x181227c | Core.Containers.ArrayIteratorExtensions.IteratorAt<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__IteratorAt_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x1812284 | Core.Containers.ArrayIteratorExtensions.LexicographicalCompare<object>
// ============================================================

undefined8
Core_Containers_ArrayIteratorExtensions__LexicographicalCompare_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,long param_7,undefined8 param_8,long param_9,long param_10
          )

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar17._8_8_ = param_6;
  auVar17._0_8_ = param_5;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  lVar11 = param_7;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20))();
  if (iVar1 != 0) {
    do {
      uVar6 = auVar17._8_8_;
      uVar12 = auVar17._0_8_;
      uVar14 = auVar16._8_8_;
      uVar15 = auVar16._0_8_;
      puVar8 = (undefined8 *)**(undefined8 **)(param_10 + 0x30);
      uVar3 = (*(code *)*puVar8)(uVar12,uVar6,param_7,param_8);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar12,uVar6);
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar15,uVar14);
      if (param_9 == 0) {
        auVar16 = func_0x00f78af4();
        puVar9 = (undefined8 *)**(undefined8 **)(lVar11 + 0x30);
        lVar10 = param_6;
        uVar2 = (*(code *)*puVar9)();
        while( true ) {
          uVar13 = uVar2;
          if ((int)uVar13 < 1) {
            return auVar16._0_8_;
          }
          uVar2 = uVar13 >> 1;
          puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 8);
          auVar17 = (*(code *)*puVar7)(auVar16._0_8_,auVar16._8_8_,uVar2);
          uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x10))();
          if (param_6 == 0) break;
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x18))
                            (param_6,uVar6,puVar8);
          if (iVar1 != 0) {
            auVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x20))
                                (auVar17._0_8_,auVar17._8_8_);
            uVar2 = uVar13 + ~uVar2;
          }
        }
        auVar16 = func_0x00f78af4();
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x30))();
        if (1 < (int)uVar6) {
          uVar2 = (int)uVar6 - 2U >> 1;
          do {
            uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 8))
                              (auVar16._0_8_,auVar16._8_8_,auVar16._8_4_ + uVar2,puVar7,puVar9);
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0xffffffff);
        }
        return uVar6;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))(param_9,uVar4,uVar5);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar15,uVar14);
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar12,uVar6);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))(param_9,uVar4,uVar5);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      auVar16 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(uVar15,uVar14);
      auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(uVar12,uVar6);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20))
                        (auVar16._0_8_,auVar16._8_8_,param_3,param_4);
    } while ((uVar3 & 1) != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x01812448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20))
                    (auVar17._0_8_,auVar17._8_8_,param_7,param_8);
  return uVar6;
}



// ============================================================
// RVA: 0x181247c | Core.Containers.ArrayIteratorExtensions.LowerBound<object>
// ============================================================

undefined8
Core_Containers_ArrayIteratorExtensions__LowerBound_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  puVar5 = (undefined8 *)**(undefined8 **)(param_7 + 0x30);
  lVar6 = param_6;
  uVar1 = (*(code *)*puVar5)();
  while( true ) {
    uVar7 = uVar1;
    if ((int)uVar7 < 1) {
      return auVar9._0_8_;
    }
    uVar1 = uVar7 >> 1;
    puVar4 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 8);
    auVar8 = (*(code *)*puVar4)(auVar9._0_8_,auVar9._8_8_,uVar1);
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))();
    if (param_6 == 0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))(param_6,uVar3,param_5);
    if (iVar2 != 0) {
      auVar9 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x20))
                         (auVar8._0_8_,auVar8._8_8_);
      uVar1 = uVar7 + ~uVar1;
    }
  }
  auVar9 = func_0x00f78af4();
  uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x30))();
  if (1 < (int)uVar3) {
    uVar1 = (int)uVar3 - 2U >> 1;
    do {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8))
                        (auVar9._0_8_,auVar9._8_8_,auVar9._8_4_ + uVar1,puVar4,puVar5);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0xffffffff);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x181257c | Core.Containers.ArrayIteratorExtensions.MakeHeap<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__MakeHeap_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if (1 < iVar1) {
    uVar2 = iVar1 - 2U >> 1;
    do {
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                (param_1,param_2,(int)param_2 + uVar2,param_4,param_5);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffff);
  }
  return;
}



// ============================================================
// RVA: 0x1812604 | Core.Containers.ArrayIteratorExtensions.MaxElement<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__MaxElement_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16],
          long param_5,undefined1 (*param_6) [16],undefined1 (*param_7) [16],
          undefined1 (*param_8) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar24;
  undefined8 uVar25;
  long unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 (*pauVar26) [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  auVar28._8_8_ = param_4;
  auVar28._0_8_ = param_3;
  auVar29._8_8_ = unaff_x27;
  auVar29._0_8_ = unaff_x28;
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = param_1;
  pauVar16 = param_6;
  uVar3 = (**(code **)**(undefined8 **)param_6[3])();
  if ((uVar3 & 1) == 0) {
    auVar27 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x18))(param_1,param_2);
    puVar18 = *(undefined8 **)(*(long *)param_6[3] + 0x20);
    pauVar14 = param_4;
    iVar2 = (*(code *)*puVar18)(auVar27._0_8_,auVar27._8_8_,param_3);
    auVar28 = auVar30;
    if (iVar2 != 0) {
      do {
        uVar4 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 8))(auVar30._0_8_,auVar30._8_8_);
        pauVar11 = *(undefined1 (**) [16])(*(long *)param_6[3] + 8);
        uVar5 = (**(code **)*pauVar11)(auVar27._0_8_,auVar27._8_8_);
        if (param_5 == 0) {
          auVar28 = func_0x00f78af4();
          auVar27._8_8_ = pauVar16;
          auVar27._0_8_ = puVar18;
          UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(unaff_x25 + 0x30);
          pauVar20 = param_7;
          pauVar22 = param_8;
          goto code_r0x018127a8;
        }
        iVar2 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x10))(param_5,uVar4,uVar5);
        auVar28 = auVar27;
        if (iVar2 == 0) {
          auVar28 = auVar30;
        }
        auVar27 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x18))
                            (auVar27._0_8_,auVar27._8_8_);
        puVar18 = *(undefined8 **)(*(long *)param_6[3] + 0x20);
        pauVar14 = param_4;
        uVar3 = (*(code *)*puVar18)(auVar27._0_8_,auVar27._8_8_,param_3);
        auVar30 = auVar28;
      } while ((uVar3 & 1) != 0);
    }
  }
  return auVar28;
code_r0x018127a8:
  uVar4 = auVar29._8_8_;
  uVar5 = auVar29._0_8_;
  uVar9 = auVar27._8_8_;
  uVar17 = auVar27._0_8_;
  uVar8 = auVar28._8_8_;
  pauVar26 = auVar28._0_8_;
  uVar3 = (*UNRECOVERED_JUMPTABLE)(pauVar26,uVar8);
  if ((uVar3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 8);
code_r0x0181293c:
                    /* WARNING: Could not recover jumptable at 0x01812960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar28 = (*UNRECOVERED_JUMPTABLE)(auVar27._0_8_,auVar27._8_8_,param_7,param_8,uVar5,uVar4);
    return auVar28;
  }
  puVar18 = (undefined8 *)**(long **)(unaff_x25 + 0x30);
  pauVar15 = param_8;
  iVar2 = (*(code *)*puVar18)(uVar17,uVar9,param_7);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 8);
    param_7 = pauVar11;
    param_8 = pauVar14;
    auVar27 = auVar28;
    goto code_r0x0181293c;
  }
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x10))(uVar17,uVar9);
  puVar12 = *(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x10);
  uVar7 = (*(code *)*puVar12)(pauVar26,uVar8);
  if (unaff_x26 != 0) {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x18))(unaff_x26,uVar6,uVar7);
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x10);
    if (iVar2 == 0) {
      uVar9 = (*UNRECOVERED_JUMPTABLE)(pauVar26,uVar8);
      (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x20))(uVar5,uVar4,uVar9);
      auVar28 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x28))(pauVar26,uVar8);
    }
    else {
      uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar17,uVar9);
      (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x20))(uVar5,uVar4,uVar8);
      auVar27 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x28))(uVar17,uVar9);
    }
    auVar29 = (*(code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 0x28))(uVar5,uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(unaff_x25 + 0x30);
    goto code_r0x018127a8;
  }
  auVar28 = func_0x00f78af4();
  auVar1._8_8_ = pauVar15;
  auVar1._0_8_ = puVar12;
  pauVar14 = pauVar16;
  uVar3 = (**(code **)**(undefined8 **)pauVar16[3])();
  if ((uVar3 & 1) != 0) {
    return auVar1;
  }
  auVar30 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x18))(auVar28._0_8_,auVar28._8_8_);
  puVar19 = *(undefined8 **)(*(long *)pauVar16[3] + 0x20);
  pauVar11 = pauVar15;
  iVar2 = (*(code *)*puVar19)(auVar30._0_8_,auVar30._8_8_,puVar12);
  if (iVar2 == 0) {
    return auVar28;
  }
  while( true ) {
    lVar10 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 8))(auVar30._0_8_,auVar30._8_8_);
    puVar13 = *(undefined8 **)(*(long *)pauVar16[3] + 8);
    uVar4 = (*(code *)*puVar13)(auVar28._0_8_,auVar28._8_8_);
    if (puVar18 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x10))(puVar18,lVar10,uVar4);
    auVar29 = auVar30;
    if (iVar2 == 0) {
      auVar29 = auVar28;
    }
    auVar28 = auVar29;
    auVar30 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x18))(auVar30._0_8_,auVar30._8_8_)
    ;
    puVar19 = *(undefined8 **)(*(long *)pauVar16[3] + 0x20);
    pauVar11 = pauVar15;
    uVar3 = (*(code *)*puVar19)(auVar30._0_8_,auVar30._8_8_,puVar12);
    if ((uVar3 & 1) == 0) {
      return auVar28;
    }
  }
  auVar28 = func_0x00f78af4();
  pauVar15 = pauVar14;
  pauVar21 = pauVar20;
  pauVar23 = pauVar22;
  (**(code **)**(undefined8 **)pauVar22[3])();
  *pauVar14 = auVar28;
  *pauVar20 = auVar28;
  auVar28 = (*(code *)**(undefined8 **)(*(long *)pauVar22[3] + 0x18))(auVar28._0_8_,auVar28._8_8_);
  puVar18 = *(undefined8 **)(*(long *)pauVar22[3] + 0x20);
  pauVar16 = pauVar11;
  auVar30 = (*(code *)*puVar18)(auVar28._0_8_,auVar28._8_8_,puVar13);
  if (auVar30._0_4_ == 0) {
    return auVar30;
  }
  while( true ) {
    uVar17 = auVar28._8_8_;
    uVar9 = auVar28._0_8_;
    uVar4 = (*(code *)**(undefined8 **)(*(long *)pauVar22[3] + 8))(uVar9,uVar17);
    puVar12 = *(undefined8 **)(*(long *)pauVar22[3] + 8);
    uVar5 = (*(code *)*puVar12)(*(undefined8 *)*pauVar14,*(undefined8 *)(*pauVar14 + 8));
    if (puVar19 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar22[3] + 0x10))(puVar19,uVar4,uVar5);
    if (iVar2 != 0) {
      *pauVar14 = auVar28;
    }
    uVar4 = (*(code *)**(undefined8 **)(*(long *)pauVar22[3] + 8))
                      (*(undefined8 *)*pauVar20,*(undefined8 *)(*pauVar20 + 8));
    uVar5 = (*(code *)**(undefined8 **)(*(long *)pauVar22[3] + 8))(uVar9,uVar17);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar22[3] + 0x10))(puVar19,uVar4,uVar5);
    if (iVar2 != 0) {
      *pauVar20 = auVar28;
    }
    auVar28 = (*(code *)**(undefined8 **)(*(long *)pauVar22[3] + 0x18))(uVar9,uVar17);
    puVar18 = *(undefined8 **)(*(long *)pauVar22[3] + 0x20);
    pauVar16 = pauVar11;
    auVar30 = (*(code *)*puVar18)(auVar28._0_8_,auVar28._8_8_,puVar13);
    if ((auVar30._0_8_ & 1) == 0) {
      return auVar30;
    }
  }
  auVar28 = func_0x00f78af4();
  auVar31._8_8_ = pauVar15;
  auVar31._0_8_ = puVar18;
  puVar18 = *(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x18);
  pauVar14 = pauVar16;
  auVar30 = (*(code *)*puVar18)();
  if (auVar30._0_4_ == 0) {
code_r0x01812d64:
    *pauVar23 = auVar28;
    *pauVar26 = auVar31;
    return auVar30;
  }
  while( true ) {
    uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x30))(auVar28._0_8_,auVar28._8_8_);
    puVar19 = (undefined8 *)**(undefined8 **)(lVar10 + 0x30);
    uVar5 = (*(code *)*puVar19)(auVar31._0_8_,auVar31._8_8_);
    if (pauVar21 == (undefined1 (*) [16])0x0) break;
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 8))(pauVar21,uVar4,uVar5);
    if (auVar30._0_4_ == 0) goto code_r0x01812d64;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x10))
                        (auVar28._0_8_,auVar28._8_8_);
    auVar31 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x10))
                        (auVar31._0_8_,auVar31._8_8_);
    puVar18 = *(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x18);
    pauVar14 = pauVar16;
    auVar30 = (*(code *)*puVar18)(auVar28._0_8_,auVar28._8_8_,puVar12);
    if ((auVar30._0_8_ & 1) == 0) goto code_r0x01812d64;
  }
  auVar28 = func_0x00f78af4();
  auVar33._8_8_ = pauVar14;
  auVar33._0_8_ = puVar19;
  uVar9 = auVar28._8_8_;
  uVar5 = auVar28._0_8_;
  pauVar16 = pauVar15;
  auVar28 = (**(code **)**(undefined8 **)pauVar15[3])();
  uVar4 = auVar28._8_8_;
  if ((auVar28._0_8_ & 1) != 0) goto code_r0x01812ee0;
  auVar28 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 8))(puVar19,pauVar14);
  uVar17 = auVar28._8_8_;
  puVar12 = (undefined8 *)**(long **)pauVar15[3];
  auVar30 = (*(code *)*puVar12)(uVar5,uVar9,auVar28._0_8_,uVar17);
  uVar4 = auVar30._8_8_;
  if ((auVar30._0_8_ & 1) != 0) goto code_r0x01812ee0;
  while( true ) {
    uVar25 = auVar28._8_8_;
    uVar24 = auVar28._0_8_;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 8))(uVar24,uVar25);
    uVar7 = auVar28._8_8_;
    uVar4 = auVar28._0_8_;
    uVar8 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x10))();
    puVar13 = *(undefined8 **)(*(long *)pauVar15[3] + 0x10);
    uVar6 = (*(code *)*puVar13)(uVar24,uVar25);
    if (puVar18 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x18))(puVar18,uVar8,uVar6);
    if (iVar2 != 0) {
      do {
        uVar5 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x10))(uVar4,uVar7);
        auVar33 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 8))
                            (auVar33._0_8_,auVar33._8_8_);
        uVar9 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x10))();
        iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x18))(puVar18,uVar5,uVar9);
      } while (iVar2 == 0);
      (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x20))
                (uVar4,uVar7,auVar33._0_8_,auVar33._8_8_);
      (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x28))(uVar24,uVar25,puVar19,pauVar14);
      uVar5 = 1;
      uVar4 = extraout_x1_00;
      goto code_r0x01812ee4;
    }
    puVar12 = (undefined8 *)**(long **)pauVar15[3];
    uVar17 = uVar9;
    iVar2 = (*(code *)*puVar12)(uVar4,uVar7,uVar5);
    if (iVar2 != 0) {
      (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x28))(uVar5,uVar9,puVar19,pauVar14);
      uVar4 = extraout_x1;
code_r0x01812ee0:
      uVar5 = 0;
code_r0x01812ee4:
      auVar32._8_8_ = uVar4;
      auVar32._0_8_ = uVar5;
      return auVar32;
    }
  }
  auVar28 = func_0x00f78af4();
  uVar4 = uVar17;
  iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x18))();
  if (iVar2 == 0) {
    uVar3 = 1;
    uVar5 = extraout_x1_01;
  }
  else {
    do {
      iVar2 = (int)uVar4;
      puVar18 = (undefined8 *)**(long **)pauVar16[3];
      uVar4 = (*(code *)*puVar18)(auVar28._0_8_,auVar28._8_8_);
      if (puVar12 == (undefined8 *)0x0) {
        auVar28 = func_0x00f78af4();
        auVar35._8_8_ = auVar28._8_8_;
        auVar35._1_7_ = 0;
        auVar35[0] = auVar28._0_8_ != puVar18 || auVar28._8_4_ != iVar2;
        return auVar35;
      }
      auVar30 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 8))(puVar12,uVar4);
      uVar5 = auVar30._8_8_;
      if ((auVar30._0_8_ & 1) != 0) break;
      auVar28 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x10))
                          (auVar28._0_8_,auVar28._8_8_);
      uVar4 = uVar17;
      auVar29 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x18))
                          (auVar28._0_8_,auVar28._8_8_,puVar13,uVar17);
      uVar5 = auVar29._8_8_;
    } while ((auVar29._0_8_ & 1) != 0);
    uVar3 = (ulong)(auVar30._0_4_ ^ 1);
  }
  auVar34._8_8_ = uVar5;
  auVar34._0_8_ = uVar3;
  return auVar34;
}



// ============================================================
// RVA: 0x1812758 | Core.Containers.ArrayIteratorExtensions.Merge<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__Merge_object_
          (undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],
          undefined1 (*param_4) [16],undefined8 param_5,undefined1 (*param_6) [16],
          undefined1 (*param_7) [16],undefined1 (*param_8) [16],undefined8 param_9,
          undefined8 param_10,long param_11,long param_12)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 (*pauVar26) [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  auVar29._8_8_ = param_10;
  auVar29._0_8_ = param_9;
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  auVar27._8_8_ = param_6;
  auVar27._0_8_ = param_5;
  UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(param_12 + 0x30);
  pauVar15 = param_7;
  pauVar21 = param_8;
code_r0x018127a8:
  uVar9 = auVar29._8_8_;
  uVar10 = auVar29._0_8_;
  uVar6 = auVar28._8_8_;
  pauVar26 = auVar28._0_8_;
  uVar7 = auVar27._8_8_;
  uVar16 = auVar27._0_8_;
  uVar3 = (*UNRECOVERED_JUMPTABLE)(pauVar26,uVar6,param_3,param_4);
  if ((uVar3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
code_r0x0181293c:
                    /* WARNING: Could not recover jumptable at 0x01812960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar27 = (*UNRECOVERED_JUMPTABLE)(auVar27._0_8_,auVar27._8_8_,param_7,param_8,uVar10,uVar9);
    return auVar27;
  }
  puVar17 = (undefined8 *)**(long **)(param_12 + 0x30);
  pauVar13 = param_8;
  iVar2 = (*(code *)*puVar17)(uVar16,uVar7,param_7);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
    param_7 = param_3;
    param_8 = param_4;
    auVar27 = auVar28;
    goto code_r0x0181293c;
  }
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar16,uVar7);
  puVar11 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
  uVar5 = (*(code *)*puVar11)(pauVar26,uVar6);
  if (param_11 != 0) {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar4,uVar5);
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    if (iVar2 == 0) {
      uVar7 = (*UNRECOVERED_JUMPTABLE)(pauVar26,uVar6);
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar10,uVar9,uVar7);
      auVar28 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(pauVar26,uVar6);
    }
    else {
      uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar16,uVar7);
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar10,uVar9,uVar6);
      auVar27 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar16,uVar7);
    }
    auVar29 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar10,uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(param_12 + 0x30);
    goto code_r0x018127a8;
  }
  auVar27 = func_0x00f78af4();
  auVar1._8_8_ = pauVar13;
  auVar1._0_8_ = puVar11;
  pauVar19 = param_6;
  uVar3 = (**(code **)**(undefined8 **)param_6[3])();
  if ((uVar3 & 1) != 0) {
    return auVar1;
  }
  auVar28 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x18))(auVar27._0_8_,auVar27._8_8_);
  puVar18 = *(undefined8 **)(*(long *)param_6[3] + 0x20);
  pauVar14 = pauVar13;
  iVar2 = (*(code *)*puVar18)(auVar28._0_8_,auVar28._8_8_,puVar11);
  if (iVar2 == 0) {
    return auVar27;
  }
  while( true ) {
    lVar8 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 8))(auVar28._0_8_,auVar28._8_8_);
    puVar12 = *(undefined8 **)(*(long *)param_6[3] + 8);
    uVar9 = (*(code *)*puVar12)(auVar27._0_8_,auVar27._8_8_);
    if (puVar17 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x10))(puVar17,lVar8,uVar9);
    auVar29 = auVar28;
    if (iVar2 == 0) {
      auVar29 = auVar27;
    }
    auVar27 = auVar29;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x18))(auVar28._0_8_,auVar28._8_8_);
    puVar18 = *(undefined8 **)(*(long *)param_6[3] + 0x20);
    pauVar14 = pauVar13;
    uVar3 = (*(code *)*puVar18)(auVar28._0_8_,auVar28._8_8_,puVar11);
    if ((uVar3 & 1) == 0) {
      return auVar27;
    }
  }
  auVar27 = func_0x00f78af4();
  pauVar20 = pauVar19;
  pauVar22 = pauVar15;
  pauVar23 = pauVar21;
  (**(code **)**(undefined8 **)pauVar21[3])();
  *pauVar19 = auVar27;
  *pauVar15 = auVar27;
  auVar27 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 0x18))(auVar27._0_8_,auVar27._8_8_);
  puVar17 = *(undefined8 **)(*(long *)pauVar21[3] + 0x20);
  pauVar13 = pauVar14;
  auVar28 = (*(code *)*puVar17)(auVar27._0_8_,auVar27._8_8_,puVar12);
  if (auVar28._0_4_ == 0) {
    return auVar28;
  }
  while( true ) {
    uVar16 = auVar27._8_8_;
    uVar7 = auVar27._0_8_;
    uVar9 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 8))(uVar7,uVar16);
    puVar11 = *(undefined8 **)(*(long *)pauVar21[3] + 8);
    uVar10 = (*(code *)*puVar11)(*(undefined8 *)*pauVar19,*(undefined8 *)(*pauVar19 + 8));
    if (puVar18 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 0x10))(puVar18,uVar9,uVar10);
    if (iVar2 != 0) {
      *pauVar19 = auVar27;
    }
    uVar9 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 8))
                      (*(undefined8 *)*pauVar15,*(undefined8 *)(*pauVar15 + 8));
    uVar10 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 8))(uVar7,uVar16);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 0x10))(puVar18,uVar9,uVar10);
    if (iVar2 != 0) {
      *pauVar15 = auVar27;
    }
    auVar27 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 0x18))(uVar7,uVar16);
    puVar17 = *(undefined8 **)(*(long *)pauVar21[3] + 0x20);
    pauVar13 = pauVar14;
    auVar28 = (*(code *)*puVar17)(auVar27._0_8_,auVar27._8_8_,puVar12);
    if ((auVar28._0_8_ & 1) == 0) {
      return auVar28;
    }
  }
  auVar27 = func_0x00f78af4();
  auVar30._8_8_ = pauVar20;
  auVar30._0_8_ = puVar17;
  puVar17 = *(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18);
  pauVar15 = pauVar13;
  auVar28 = (*(code *)*puVar17)();
  if (auVar28._0_4_ == 0) {
code_r0x01812d64:
    *pauVar23 = auVar27;
    *pauVar26 = auVar30;
    return auVar28;
  }
  while( true ) {
    uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x30))(auVar27._0_8_,auVar27._8_8_);
    puVar18 = (undefined8 *)**(undefined8 **)(lVar8 + 0x30);
    uVar10 = (*(code *)*puVar18)(auVar30._0_8_,auVar30._8_8_);
    if (pauVar22 == (undefined1 (*) [16])0x0) break;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))(pauVar22,uVar9,uVar10);
    if (auVar28._0_4_ == 0) goto code_r0x01812d64;
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                        (auVar27._0_8_,auVar27._8_8_);
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                        (auVar30._0_8_,auVar30._8_8_);
    puVar17 = *(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18);
    pauVar15 = pauVar13;
    auVar28 = (*(code *)*puVar17)(auVar27._0_8_,auVar27._8_8_,puVar11);
    if ((auVar28._0_8_ & 1) == 0) goto code_r0x01812d64;
  }
  auVar27 = func_0x00f78af4();
  auVar32._8_8_ = pauVar15;
  auVar32._0_8_ = puVar18;
  uVar7 = auVar27._8_8_;
  uVar10 = auVar27._0_8_;
  pauVar21 = pauVar20;
  auVar27 = (**(code **)**(undefined8 **)pauVar20[3])();
  uVar9 = auVar27._8_8_;
  if ((auVar27._0_8_ & 1) != 0) goto code_r0x01812ee0;
  auVar27 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 8))(puVar18,pauVar15);
  uVar16 = auVar27._8_8_;
  puVar11 = (undefined8 *)**(long **)pauVar20[3];
  auVar28 = (*(code *)*puVar11)(uVar10,uVar7,auVar27._0_8_,uVar16);
  uVar9 = auVar28._8_8_;
  if ((auVar28._0_8_ & 1) != 0) goto code_r0x01812ee0;
  while( true ) {
    uVar25 = auVar27._8_8_;
    uVar24 = auVar27._0_8_;
    auVar27 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 8))(uVar24,uVar25);
    uVar5 = auVar27._8_8_;
    uVar9 = auVar27._0_8_;
    uVar6 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x10))();
    puVar12 = *(undefined8 **)(*(long *)pauVar20[3] + 0x10);
    uVar4 = (*(code *)*puVar12)(uVar24,uVar25);
    if (puVar17 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x18))(puVar17,uVar6,uVar4);
    if (iVar2 != 0) {
      do {
        uVar10 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x10))(uVar9,uVar5);
        auVar32 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 8))
                            (auVar32._0_8_,auVar32._8_8_);
        uVar7 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x10))();
        iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x18))(puVar17,uVar10,uVar7);
      } while (iVar2 == 0);
      (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x20))
                (uVar9,uVar5,auVar32._0_8_,auVar32._8_8_);
      (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x28))(uVar24,uVar25,puVar18,pauVar15);
      uVar10 = 1;
      uVar9 = extraout_x1_00;
      goto code_r0x01812ee4;
    }
    puVar11 = (undefined8 *)**(long **)pauVar20[3];
    uVar16 = uVar7;
    iVar2 = (*(code *)*puVar11)(uVar9,uVar5,uVar10);
    if (iVar2 != 0) {
      (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x28))(uVar10,uVar7,puVar18,pauVar15);
      uVar9 = extraout_x1;
code_r0x01812ee0:
      uVar10 = 0;
code_r0x01812ee4:
      auVar31._8_8_ = uVar9;
      auVar31._0_8_ = uVar10;
      return auVar31;
    }
  }
  auVar27 = func_0x00f78af4();
  uVar9 = uVar16;
  iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 0x18))();
  if (iVar2 == 0) {
    uVar3 = 1;
    uVar10 = extraout_x1_01;
  }
  else {
    do {
      iVar2 = (int)uVar9;
      puVar17 = (undefined8 *)**(long **)pauVar21[3];
      uVar9 = (*(code *)*puVar17)(auVar27._0_8_,auVar27._8_8_);
      if (puVar11 == (undefined8 *)0x0) {
        auVar27 = func_0x00f78af4();
        auVar34._8_8_ = auVar27._8_8_;
        auVar34._1_7_ = 0;
        auVar34[0] = auVar27._0_8_ != puVar17 || auVar27._8_4_ != iVar2;
        return auVar34;
      }
      auVar28 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 8))(puVar11,uVar9);
      uVar10 = auVar28._8_8_;
      if ((auVar28._0_8_ & 1) != 0) break;
      auVar27 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 0x10))
                          (auVar27._0_8_,auVar27._8_8_);
      uVar9 = uVar16;
      auVar29 = (*(code *)**(undefined8 **)(*(long *)pauVar21[3] + 0x18))
                          (auVar27._0_8_,auVar27._8_8_,puVar12,uVar16);
      uVar10 = auVar29._8_8_;
    } while ((auVar29._0_8_ & 1) != 0);
    uVar3 = (ulong)(auVar28._0_4_ ^ 1);
  }
  auVar33._8_8_ = uVar10;
  auVar33._0_8_ = uVar3;
  return auVar33;
}



// ============================================================
// RVA: 0x1812968 | Core.Containers.ArrayIteratorExtensions.MinElement<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__MinElement_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined1 (*param_6) [16],undefined1 (*param_7) [16],undefined1 (*param_8) [16])

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 (*unaff_x28) [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  auVar24._8_8_ = param_4;
  auVar24._0_8_ = param_3;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = param_1;
  pauVar16 = param_6;
  uVar2 = (**(code **)**(undefined8 **)param_6[3])();
  if ((uVar2 & 1) == 0) {
    auVar22 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x18))(param_1,param_2);
    puVar14 = *(undefined8 **)(*(long *)param_6[3] + 0x20);
    uVar9 = param_4;
    iVar1 = (*(code *)*puVar14)(auVar22._0_8_,auVar22._8_8_,param_3);
    auVar24 = auVar23;
    if (iVar1 != 0) {
      while( true ) {
        lVar3 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 8))(auVar22._0_8_,auVar22._8_8_);
        puVar11 = *(undefined8 **)(*(long *)param_6[3] + 8);
        uVar4 = (*(code *)*puVar11)(auVar23._0_8_,auVar23._8_8_);
        if (param_5 == 0) break;
        iVar1 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x10))(param_5,lVar3,uVar4);
        auVar24 = auVar22;
        if (iVar1 == 0) {
          auVar24 = auVar23;
        }
        auVar22 = (*(code *)**(undefined8 **)(*(long *)param_6[3] + 0x18))
                            (auVar22._0_8_,auVar22._8_8_);
        puVar14 = *(undefined8 **)(*(long *)param_6[3] + 0x20);
        uVar9 = param_4;
        uVar2 = (*(code *)*puVar14)(auVar22._0_8_,auVar22._8_8_,param_3);
        auVar23 = auVar24;
        if ((uVar2 & 1) == 0) {
          return auVar24;
        }
      }
      auVar23 = func_0x00f78af4();
      pauVar17 = pauVar16;
      pauVar18 = param_7;
      pauVar19 = param_8;
      (**(code **)**(undefined8 **)param_8[3])();
      *pauVar16 = auVar23;
      *param_7 = auVar23;
      auVar23 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x18))
                          (auVar23._0_8_,auVar23._8_8_);
      puVar15 = *(undefined8 **)(*(long *)param_8[3] + 0x20);
      uVar4 = uVar9;
      auVar24 = (*(code *)*puVar15)(auVar23._0_8_,auVar23._8_8_,puVar11);
      if (auVar24._0_4_ == 0) {
        return auVar24;
      }
      while( true ) {
        uVar7 = auVar23._8_8_;
        uVar13 = auVar23._0_8_;
        uVar5 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(uVar13,uVar7);
        puVar12 = *(undefined8 **)(*(long *)param_8[3] + 8);
        uVar6 = (*(code *)*puVar12)(*(undefined8 *)*pauVar16,*(undefined8 *)(*pauVar16 + 8));
        if (puVar14 == (undefined8 *)0x0) break;
        iVar1 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))(puVar14,uVar5,uVar6);
        if (iVar1 != 0) {
          *pauVar16 = auVar23;
        }
        uVar4 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))
                          (*(undefined8 *)*param_7,*(undefined8 *)(*param_7 + 8));
        uVar5 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(uVar13,uVar7);
        iVar1 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))(puVar14,uVar4,uVar5);
        if (iVar1 != 0) {
          *param_7 = auVar23;
        }
        auVar23 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x18))(uVar13,uVar7);
        puVar15 = *(undefined8 **)(*(long *)param_8[3] + 0x20);
        uVar4 = uVar9;
        auVar24 = (*(code *)*puVar15)(auVar23._0_8_,auVar23._8_8_,puVar11);
        if ((auVar24._0_8_ & 1) == 0) {
          return auVar24;
        }
      }
      auVar23 = func_0x00f78af4();
      auVar22._8_8_ = pauVar17;
      auVar22._0_8_ = puVar15;
      puVar14 = *(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x18);
      uVar9 = uVar4;
      auVar24 = (*(code *)*puVar14)();
      if (auVar24._0_4_ != 0) {
        do {
          uVar5 = (**(code **)**(undefined8 **)(lVar3 + 0x30))(auVar23._0_8_,auVar23._8_8_);
          puVar11 = (undefined8 *)**(undefined8 **)(lVar3 + 0x30);
          uVar6 = (*(code *)*puVar11)(auVar22._0_8_,auVar22._8_8_);
          if (pauVar18 == (undefined1 (*) [16])0x0) {
            auVar23 = func_0x00f78af4();
            auVar26._8_8_ = uVar9;
            auVar26._0_8_ = puVar11;
            uVar6 = auVar23._8_8_;
            uVar5 = auVar23._0_8_;
            pauVar16 = pauVar17;
            auVar23 = (**(code **)**(undefined8 **)pauVar17[3])();
            uVar4 = auVar23._8_8_;
            if ((auVar23._0_8_ & 1) != 0) goto code_r0x01812ee0;
            auVar23 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 8))(puVar11,uVar9);
            uVar13 = auVar23._8_8_;
            puVar15 = (undefined8 *)**(long **)pauVar17[3];
            auVar24 = (*(code *)*puVar15)(uVar5,uVar6,auVar23._0_8_,uVar13);
            uVar4 = auVar24._8_8_;
            if ((auVar24._0_8_ & 1) == 0) goto code_r0x01812e24;
            goto code_r0x01812ee0;
          }
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))(pauVar18,uVar5,uVar6);
          if (auVar24._0_4_ == 0) break;
          auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))
                              (auVar23._0_8_,auVar23._8_8_);
          auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))
                              (auVar22._0_8_,auVar22._8_8_);
          puVar14 = *(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x18);
          uVar9 = uVar4;
          auVar24 = (*(code *)*puVar14)(auVar23._0_8_,auVar23._8_8_,puVar12);
        } while ((auVar24._0_8_ & 1) != 0);
      }
      *pauVar19 = auVar23;
      *unaff_x28 = auVar22;
      return auVar24;
    }
  }
  return auVar24;
code_r0x01812f0c:
  do {
    uVar5 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x10))(uVar4,uVar10);
    auVar26 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 8))(auVar26._0_8_,auVar26._8_8_);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x10))();
    iVar1 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x18))(puVar14,uVar5,uVar6);
  } while (iVar1 == 0);
  (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x20))
            (uVar4,uVar10,auVar26._0_8_,auVar26._8_8_);
  (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x28))(uVar20,uVar21,puVar11,uVar9);
  uVar9 = 1;
  uVar4 = extraout_x1_00;
  goto code_r0x01812ee4;
  while( true ) {
    auVar23 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x10))(auVar23._0_8_,auVar23._8_8_)
    ;
    uVar9 = uVar13;
    auVar22 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x18))
                        (auVar23._0_8_,auVar23._8_8_,puVar12,uVar13);
    uVar4 = auVar22._8_8_;
    if ((auVar22._0_8_ & 1) == 0) break;
code_r0x01813008:
    iVar1 = (int)uVar9;
    puVar14 = (undefined8 *)**(long **)pauVar16[3];
    uVar9 = (*(code *)*puVar14)(auVar23._0_8_,auVar23._8_8_);
    if (puVar15 == (undefined8 *)0x0) {
      auVar23 = func_0x00f78af4();
      auVar28._8_8_ = auVar23._8_8_;
      auVar28._1_7_ = 0;
      auVar28[0] = auVar23._0_8_ != puVar14 || auVar23._8_4_ != iVar1;
      return auVar28;
    }
    auVar24 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 8))(puVar15,uVar9);
    uVar4 = auVar24._8_8_;
    if ((auVar24._0_8_ & 1) != 0) break;
  }
  uVar2 = (ulong)(auVar24._0_4_ ^ 1);
code_r0x0181308c:
  auVar27._8_8_ = uVar4;
  auVar27._0_8_ = uVar2;
  return auVar27;
  while( true ) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x18))(puVar14,uVar7,uVar8);
    if (iVar1 != 0) goto code_r0x01812f0c;
    puVar15 = (undefined8 *)**(long **)pauVar17[3];
    uVar13 = uVar6;
    iVar1 = (*(code *)*puVar15)(uVar4,uVar10,uVar5);
    if (iVar1 != 0) break;
code_r0x01812e24:
    uVar21 = auVar23._8_8_;
    uVar20 = auVar23._0_8_;
    auVar23 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 8))(uVar20,uVar21);
    uVar10 = auVar23._8_8_;
    uVar4 = auVar23._0_8_;
    uVar7 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x10))();
    puVar12 = *(undefined8 **)(*(long *)pauVar17[3] + 0x10);
    uVar8 = (*(code *)*puVar12)(uVar20,uVar21);
    if (puVar14 == (undefined8 *)0x0) {
      auVar23 = func_0x00f78af4();
      uVar9 = uVar13;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x18))();
      if (iVar1 != 0) goto code_r0x01813008;
      uVar2 = 1;
      uVar4 = extraout_x1_01;
      goto code_r0x0181308c;
    }
  }
  (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x28))(uVar5,uVar6,puVar11,uVar9);
  uVar4 = extraout_x1;
code_r0x01812ee0:
  uVar9 = 0;
code_r0x01812ee4:
  auVar25._8_8_ = uVar4;
  auVar25._0_8_ = uVar9;
  return auVar25;
}



// ============================================================
// RVA: 0x1812abc | Core.Containers.ArrayIteratorExtensions.MinMaxElement<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__MinMaxElement_object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5,undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                undefined1 (*param_8) [16])

{
  undefined1 auVar1 [12];
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x27;
  undefined1 (*unaff_x28) [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  
  pauVar17 = param_6;
  pauVar18 = param_7;
  pauVar19 = param_8;
  (**(code **)**(undefined8 **)param_8[3])();
  *(undefined8 *)*param_6 = param_1;
  *(undefined8 *)(*param_6 + 8) = param_2;
  *(undefined8 *)*param_7 = param_1;
  *(undefined8 *)(*param_7 + 8) = param_2;
  auVar23 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x18))(param_1,param_2);
  puVar16 = *(undefined8 **)(*(long *)param_8[3] + 0x20);
  uVar7 = param_4;
  uVar4 = (*(code *)*puVar16)(auVar23._0_8_,auVar23._8_8_,param_3);
  if ((int)uVar4 != 0) {
    do {
      uVar22 = auVar23._8_8_;
      uVar8 = auVar23._0_8_;
      uVar5 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(uVar8,uVar22);
      puVar12 = *(undefined8 **)(*(long *)param_8[3] + 8);
      uVar6 = (*(code *)*puVar12)(*(undefined8 *)*param_6,*(undefined8 *)(*param_6 + 8));
      if (param_5 == 0) {
        auVar23 = func_0x00f78af4();
        auVar24._8_8_ = pauVar17;
        auVar24._0_8_ = puVar16;
        puVar16 = *(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 0x18);
        uVar5 = uVar7;
        uVar4 = (*(code *)*puVar16)();
        if ((int)uVar4 != 0) goto code_r0x01812ca8;
        goto code_r0x01812d64;
      }
      iVar2 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))(param_5,uVar5,uVar6);
      if (iVar2 != 0) {
        *param_6 = auVar23;
      }
      uVar7 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))
                        (*(undefined8 *)*param_7,*(undefined8 *)(*param_7 + 8));
      uVar5 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(uVar8,uVar22);
      iVar2 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))(param_5,uVar7,uVar5);
      if (iVar2 != 0) {
        *param_7 = auVar23;
      }
      auVar23 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x18))(uVar8,uVar22);
      puVar16 = *(undefined8 **)(*(long *)param_8[3] + 0x20);
      uVar7 = param_4;
      uVar4 = (*(code *)*puVar16)(auVar23._0_8_,auVar23._8_8_,param_3);
    } while ((uVar4 & 1) != 0);
  }
  return uVar4;
code_r0x01812ca8:
  uVar6 = (**(code **)**(undefined8 **)(unaff_x27 + 0x30))(auVar23._0_8_,auVar23._8_8_);
  puVar13 = (undefined8 *)**(undefined8 **)(unaff_x27 + 0x30);
  uVar8 = (*(code *)*puVar13)(auVar24._0_8_,auVar24._8_8_);
  if (pauVar18 != (undefined1 (*) [16])0x0) {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 8))(pauVar18,uVar6,uVar8);
    if ((int)uVar4 == 0) goto code_r0x01812d64;
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 0x10))
                        (auVar23._0_8_,auVar23._8_8_);
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 0x10))
                        (auVar24._0_8_,auVar24._8_8_);
    puVar16 = *(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 0x18);
    uVar5 = uVar7;
    uVar4 = (*(code *)*puVar16)(auVar23._0_8_,auVar23._8_8_,puVar12);
    if ((uVar4 & 1) == 0) {
code_r0x01812d64:
      *pauVar19 = auVar23;
      *unaff_x28 = auVar24;
      return uVar4;
    }
    goto code_r0x01812ca8;
  }
  auVar24 = func_0x00f78af4();
  auVar23._8_8_ = uVar5;
  auVar23._0_8_ = puVar13;
  uVar6 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  pauVar18 = pauVar17;
  uVar4 = (**(code **)**(undefined8 **)pauVar17[3])();
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  auVar24 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 8))(puVar13,uVar5);
  uVar8 = auVar24._8_8_;
  puVar12 = (undefined8 *)**(long **)pauVar17[3];
  uVar4 = (*(code *)*puVar12)(uVar7,uVar6,auVar24._0_8_,uVar8);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  while( true ) {
    uVar21 = auVar24._8_8_;
    uVar20 = auVar24._0_8_;
    auVar24 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 8))(uVar20,uVar21);
    uVar11 = auVar24._8_8_;
    uVar22 = auVar24._0_8_;
    uVar9 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x10))();
    puVar14 = *(undefined8 **)(*(long *)pauVar17[3] + 0x10);
    uVar10 = (*(code *)*puVar14)(uVar20,uVar21);
    if (puVar16 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x18))(puVar16,uVar9,uVar10);
    if (iVar2 != 0) {
      do {
        uVar7 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x10))(uVar22,uVar11);
        auVar23 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 8))
                            (auVar23._0_8_,auVar23._8_8_);
        uVar6 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x10))();
        iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x18))(puVar16,uVar7,uVar6);
      } while (iVar2 == 0);
      (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x20))
                (uVar22,uVar11,auVar23._0_8_,auVar23._8_8_);
      (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x28))(uVar20,uVar21,puVar13,uVar5);
      return 1;
    }
    puVar12 = (undefined8 *)**(long **)pauVar17[3];
    uVar8 = uVar6;
    iVar2 = (*(code *)*puVar12)(uVar22,uVar11,uVar7);
    if (iVar2 != 0) {
      (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x28))(uVar7,uVar6,puVar13,uVar5);
      return 0;
    }
  }
  auVar23 = func_0x00f78af4();
  uVar7 = uVar8;
  iVar2 = (*(code *)**(undefined8 **)(*(long *)pauVar18[3] + 0x18))();
  if (iVar2 == 0) {
    return 1;
  }
  do {
    uVar15 = (undefined4)uVar7;
    puVar16 = (undefined8 *)**(undefined8 **)pauVar18[3];
    uVar7 = (*(code *)*puVar16)(auVar23._0_8_,auVar23._8_8_);
    if (puVar12 == (undefined8 *)0x0) {
      auVar25 = func_0x00f78af4();
      auVar1._8_4_ = uVar15;
      auVar1._0_8_ = puVar16;
      return (ulong)(auVar25 != auVar1);
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)pauVar18[3] + 8))(puVar12,uVar7);
    if ((uVar3 & 1) != 0) break;
    auVar23 = (*(code *)**(undefined8 **)(*(long *)pauVar18[3] + 0x10))(auVar23._0_8_,auVar23._8_8_)
    ;
    uVar7 = uVar8;
    uVar4 = (*(code *)**(undefined8 **)(*(long *)pauVar18[3] + 0x18))
                      (auVar23._0_8_,auVar23._8_8_,puVar14,uVar8);
  } while ((uVar4 & 1) != 0);
  return (ulong)(uVar3 ^ 1);
}



// ============================================================
// RVA: 0x1812c54 | Core.Containers.ArrayIteratorExtensions.Mismatch<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__Mismatch_object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,long param_6,long param_7,undefined1 (*param_8) [16],
                undefined1 (*param_9) [16],long param_10)

{
  undefined1 auVar1 [12];
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  
  auVar22._8_8_ = param_6;
  auVar22._0_8_ = param_5;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  puVar16 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18);
  uVar10 = param_4;
  uVar4 = (*(code *)*puVar16)();
  if ((int)uVar4 == 0) {
LAB_01812d64:
    *param_8 = auVar21;
    *param_9 = auVar22;
    return uVar4;
  }
  while( true ) {
    uVar5 = (**(code **)**(undefined8 **)(param_10 + 0x30))(auVar21._0_8_,auVar21._8_8_);
    puVar12 = (undefined8 *)**(undefined8 **)(param_10 + 0x30);
    uVar6 = (*(code *)*puVar12)(auVar22._0_8_,auVar22._8_8_);
    if (param_7 == 0) break;
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(param_7,uVar5,uVar6);
    if ((int)uVar4 == 0) goto LAB_01812d64;
    auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))
                        (auVar21._0_8_,auVar21._8_8_);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))
                        (auVar22._0_8_,auVar22._8_8_);
    puVar16 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18);
    uVar10 = param_4;
    uVar4 = (*(code *)*puVar16)(auVar21._0_8_,auVar21._8_8_,param_3);
    if ((uVar4 & 1) == 0) goto LAB_01812d64;
  }
  auVar21 = func_0x00f78af4();
  auVar23._8_8_ = uVar10;
  auVar23._0_8_ = puVar12;
  uVar6 = auVar21._8_8_;
  uVar5 = auVar21._0_8_;
  lVar18 = param_6;
  uVar4 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(puVar12,uVar10);
  uVar15 = auVar21._8_8_;
  puVar17 = (undefined8 *)**(long **)(param_6 + 0x30);
  uVar4 = (*(code *)*puVar17)(uVar5,uVar6,auVar21._0_8_,uVar15);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  while( true ) {
    uVar20 = auVar21._8_8_;
    uVar19 = auVar21._0_8_;
    auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar19,uVar20);
    uVar11 = auVar21._8_8_;
    uVar7 = auVar21._0_8_;
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))();
    puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
    uVar9 = (*(code *)*puVar13)(uVar19,uVar20);
    if (puVar16 == (undefined8 *)0x0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(puVar16,uVar8,uVar9);
    if (iVar2 != 0) {
      do {
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar7,uVar11);
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar23._0_8_,auVar23._8_8_);
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))();
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(puVar16,uVar5,uVar6);
      } while (iVar2 == 0);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                (uVar7,uVar11,auVar23._0_8_,auVar23._8_8_);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))(uVar19,uVar20,puVar12,uVar10);
      return 1;
    }
    puVar17 = (undefined8 *)**(long **)(param_6 + 0x30);
    uVar15 = uVar6;
    iVar2 = (*(code *)*puVar17)(uVar7,uVar11,uVar5);
    if (iVar2 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))(uVar5,uVar6,puVar12,uVar10);
      return 0;
    }
  }
  auVar21 = func_0x00f78af4();
  uVar10 = uVar15;
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))();
  if (iVar2 == 0) {
    return 1;
  }
  do {
    uVar14 = (undefined4)uVar10;
    puVar16 = (undefined8 *)**(undefined8 **)(lVar18 + 0x30);
    uVar10 = (*(code *)*puVar16)(auVar21._0_8_,auVar21._8_8_);
    if (puVar17 == (undefined8 *)0x0) {
      auVar24 = func_0x00f78af4();
      auVar1._8_4_ = uVar14;
      auVar1._0_8_ = puVar16;
      return (ulong)(auVar24 != auVar1);
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(puVar17,uVar10);
    if ((uVar3 & 1) != 0) break;
    auVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))
                        (auVar21._0_8_,auVar21._8_8_);
    uVar10 = uVar15;
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))
                      (auVar21._0_8_,auVar21._8_8_,puVar13,uVar15);
  } while ((uVar4 & 1) != 0);
  return (ulong)(uVar3 ^ 1);
}



// ============================================================
// RVA: 0x1812d90 | Core.Containers.ArrayIteratorExtensions.NextPermutation<object>
// ============================================================

uint Core_Containers_ArrayIteratorExtensions__NextPermutation_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  undefined1 auVar1 [12];
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  
  auVar18._8_8_ = param_4;
  auVar18._0_8_ = param_3;
  lVar14 = param_6;
  uVar4 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar4 & 1) == 0) {
    auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_3,param_4);
    uVar7 = auVar17._8_8_;
    puVar13 = (undefined8 *)**(long **)(param_6 + 0x30);
    uVar4 = (*(code *)*puVar13)(param_1,param_2,auVar17._0_8_,uVar7);
    if ((uVar4 & 1) == 0) {
      do {
        uVar16 = auVar17._8_8_;
        uVar15 = auVar17._0_8_;
        auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar15,uVar16);
        uVar9 = auVar17._8_8_;
        uVar8 = auVar17._0_8_;
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))();
        puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar6 = (*(code *)*puVar10)(uVar15,uVar16);
        if (param_5 == 0) {
          auVar18 = func_0x00f78af4();
          uVar8 = uVar7;
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))();
          if (iVar2 == 0) {
            return 1;
          }
          goto code_r0x01813008;
        }
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar5,uVar6);
        if (iVar2 != 0) {
          do {
            uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar8,uVar9);
            auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar18._0_8_,auVar18._8_8_);
            uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))();
            iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                              (param_5,uVar7,uVar5);
          } while (iVar2 == 0);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (uVar8,uVar9,auVar18._0_8_,auVar18._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))
                    (uVar15,uVar16,param_3,param_4);
          return 1;
        }
        puVar13 = (undefined8 *)**(long **)(param_6 + 0x30);
        uVar7 = param_2;
        iVar2 = (*(code *)*puVar13)(uVar8,uVar9,param_1);
      } while (iVar2 == 0);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))
                (param_1,param_2,param_3,param_4);
    }
  }
  return 0;
  while( true ) {
    auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                        (auVar18._0_8_,auVar18._8_8_);
    uVar8 = uVar7;
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                      (auVar18._0_8_,auVar18._8_8_,puVar10,uVar7);
    if ((uVar4 & 1) == 0) break;
code_r0x01813008:
    uVar12 = (undefined4)uVar8;
    puVar11 = (undefined8 *)**(undefined8 **)(lVar14 + 0x30);
    uVar8 = (*(code *)*puVar11)(auVar18._0_8_,auVar18._8_8_);
    if (puVar13 == (undefined8 *)0x0) {
      auVar19 = func_0x00f78af4();
      auVar1._8_4_ = uVar12;
      auVar1._0_8_ = puVar11;
      return (uint)(auVar19 != auVar1);
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(puVar13,uVar8);
    if ((uVar3 & 1) != 0) break;
  }
  return uVar3 ^ 1;
}



// ============================================================
// RVA: 0x1812fc4 | Core.Containers.ArrayIteratorExtensions.NoneOf<object>
// ============================================================

uint Core_Containers_ArrayIteratorExtensions__NoneOf_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  undefined1 auVar1 [12];
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  uVar4 = param_4;
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))();
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    do {
      uVar7 = (undefined4)uVar4;
      puVar6 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
      uVar4 = (*(code *)*puVar6)(auVar8._0_8_,auVar8._8_8_);
      if (param_5 == 0) {
        auVar9 = func_0x00f78af4();
        auVar1._8_4_ = uVar7;
        auVar1._0_8_ = puVar6;
        return (uint)(auVar9 != auVar1);
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar4);
      if ((uVar3 & 1) != 0) break;
      auVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                         (auVar8._0_8_,auVar8._8_8_);
      uVar4 = param_4;
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                        (auVar8._0_8_,auVar8._8_8_,param_3,param_4);
    } while ((uVar5 & 1) != 0);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x18130a8 | Core.Containers.ArrayIteratorExtensions.NotEqual<object>
// ============================================================

bool Core_Containers_ArrayIteratorExtensions__NotEqual_object_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 != param_3 || param_2 != param_4;
}



// ============================================================
// RVA: 0x18130b8 | Core.Containers.ArrayIteratorExtensions.NotEqual<PlayerRankingPair>
// ============================================================

bool Core_Containers_ArrayIteratorExtensions__NotEqual_PlayerRankingPair_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 != param_3 || param_2 != param_4;
}



// ============================================================
// RVA: 0x18130c8 | Core.Containers.ArrayIteratorExtensions.NthElement<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__NthElement_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
                    /* WARNING: Could not recover jumptable at 0x018130e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_8 + 0x30))(param_1,param_2,param_5,param_6,param_7);
  return;
}



// ============================================================
// RVA: 0x18130e4 | Core.Containers.ArrayIteratorExtensions.PartialSort<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__PartialSort_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
                    /* WARNING: Could not recover jumptable at 0x018130fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_8 + 0x30))(param_1,param_2,param_5,param_6,param_7);
  return;
}



// ============================================================
// RVA: 0x1813100 | Core.Containers.ArrayIteratorExtensions.Partition<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__Partition_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long unaff_x21;
  undefined1 (*unaff_x22) [16];
  undefined8 uVar15;
  uint uVar16;
  undefined1 (*unaff_x23) [16];
  long unaff_x24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar18._8_8_ = param_4;
  auVar18._0_8_ = param_3;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30);
  pcVar14 = (code *)*puVar11;
  lVar12 = param_6;
  do {
    uVar9 = auVar18._8_8_;
    iVar1 = (*pcVar14)(auVar17._0_8_,auVar17._8_8_,auVar18._0_8_);
    if (iVar1 == 0) {
      return auVar17;
    }
    while( true ) {
      uVar6 = auVar17._8_8_;
      uVar15 = auVar17._0_8_;
      puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
      uVar3 = (*(code *)*puVar7)(uVar15,uVar6);
      if (param_5 == 0) {
        auVar17 = func_0x00f78af4();
        auVar19._8_8_ = lVar12;
        auVar19._0_8_ = puVar11;
        auVar20._8_8_ = param_8;
        auVar20._0_8_ = param_7;
        puVar11 = *(undefined8 **)(*(long *)(unaff_x21 + 0x30) + 0x20);
        auVar18 = (*(code *)*puVar11)();
        if (auVar18._0_4_ != 0) {
          do {
            uVar6 = auVar17._8_8_;
            uVar15 = auVar17._0_8_;
            uVar3 = (**(code **)**(undefined8 **)(unaff_x21 + 0x30))(uVar15,uVar6);
            if (unaff_x24 == 0) {
              auVar17 = func_0x00f78af4();
              puVar7 = (undefined8 *)**(undefined8 **)(lVar12 + 0x30);
              lVar13 = lVar12;
              uVar2 = (*(code *)*puVar7)();
              while( true ) {
                uVar16 = uVar2;
                uVar9 = auVar17._8_8_;
                uVar3 = auVar17._0_8_;
                if ((int)uVar16 < 1) {
                  return auVar17;
                }
                uVar2 = uVar16 >> 1;
                puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 8);
                (*(code *)*puVar10)(uVar3,uVar9,uVar2);
                puVar8 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10);
                uVar6 = (*(code *)*puVar8)(uVar3,uVar9);
                if (puVar11 == (undefined8 *)0x0) break;
                iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))(puVar11,uVar6)
                ;
                if (iVar1 != 0) {
                  auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x20))
                                      (uVar3,uVar9);
                  uVar2 = uVar16 + ~uVar2;
                }
              }
              auVar17 = func_0x00f78af4();
              uVar9 = auVar17._8_8_;
              auVar18 = (**(code **)**(undefined8 **)(lVar13 + 0x30))();
              if (1 < auVar18._0_4_) {
                auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(puVar8,puVar10)
                ;
                (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))
                          (auVar17._0_8_,uVar9,auVar18._0_8_,auVar18._8_8_);
                    /* WARNING: Could not recover jumptable at 0x018135c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18))
                                    (auVar17._0_8_,uVar9,uVar9,auVar18._8_8_,puVar7);
                return auVar17;
              }
              return auVar18;
            }
            iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x30) + 8))(unaff_x24,uVar3);
            uVar3 = (**(code **)**(undefined8 **)(unaff_x21 + 0x30))(uVar15,uVar6);
            pcVar14 = (code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x30) + 0x10);
            if (iVar1 == 0) {
              (*pcVar14)(auVar20._0_8_,auVar20._8_8_,uVar3);
              auVar20 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x30) + 0x18))
                                  (auVar20._0_8_,auVar20._8_8_);
            }
            else {
              (*pcVar14)(auVar19._0_8_,auVar19._8_8_);
              auVar19 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x30) + 0x18))
                                  (auVar19._0_8_,auVar19._8_8_);
            }
            auVar17 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x30) + 0x18))(uVar15,uVar6)
            ;
            puVar11 = *(undefined8 **)(*(long *)(unaff_x21 + 0x30) + 0x20);
            auVar18 = (*(code *)*puVar11)(auVar17._0_8_,auVar17._8_8_,puVar7,uVar9);
          } while ((auVar18._0_8_ & 1) != 0);
        }
        *unaff_x23 = auVar19;
        *unaff_x22 = auVar20;
        return auVar18;
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar3);
      if ((uVar4 & 1) == 0) break;
      auVar17 = (**(code **)**(undefined8 **)(param_6 + 0x30))(uVar15,uVar6);
      puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
      uVar9 = auVar18._8_8_;
      uVar4 = (*(code *)*puVar11)(auVar17._0_8_,auVar17._8_8_,auVar18._0_8_);
      if ((uVar4 & 1) != 0) {
        return auVar17;
      }
    }
    do {
      auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                          (auVar18._0_8_,auVar18._8_8_);
      uVar3 = auVar18._8_8_;
      uVar9 = auVar18._0_8_;
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar15,uVar6,uVar9,uVar3);
      if ((uVar4 & 1) != 0) {
        return auVar17;
      }
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar9,uVar3);
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar5);
    } while (iVar1 == 0);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))(uVar15,uVar6,uVar9,uVar3);
    auVar17 = (**(code **)**(undefined8 **)(param_6 + 0x30))(uVar15,uVar6);
    puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30);
    pcVar14 = (code *)*puVar11;
  } while( true );
}



// ============================================================
// RVA: 0x18132a8 | Core.Containers.ArrayIteratorExtensions.PartitionCopy<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__PartitionCopy_object_
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                undefined1 (*param_10) [16],undefined1 (*param_11) [16],long param_12)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  auVar14._8_8_ = param_6;
  auVar14._0_8_ = param_5;
  auVar15._8_8_ = param_8;
  auVar15._0_8_ = param_7;
  puVar8 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
  uVar3 = (*(code *)*puVar8)();
  if ((int)uVar3 != 0) {
    do {
      uVar5 = auVar16._8_8_;
      uVar13 = auVar16._0_8_;
      uVar4 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar13,uVar5);
      if (param_9 == 0) {
        auVar14 = func_0x00f78af4();
        puVar9 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
        lVar10 = param_6;
        uVar2 = (*(code *)*puVar9)();
        while( true ) {
          uVar12 = uVar2;
          uVar4 = auVar14._8_8_;
          uVar3 = auVar14._0_8_;
          if ((int)uVar12 < 1) {
            return uVar3;
          }
          uVar2 = uVar12 >> 1;
          puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
          (*(code *)*puVar7)(uVar3,uVar4,uVar2);
          puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
          uVar5 = (*(code *)*puVar6)(uVar3,uVar4);
          if (puVar8 == (undefined8 *)0x0) break;
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(puVar8,uVar5);
          if (iVar1 != 0) {
            auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar3,uVar4);
            uVar2 = uVar12 + ~uVar2;
          }
        }
        auVar14 = func_0x00f78af4();
        uVar4 = auVar14._8_8_;
        uVar3 = (**(code **)**(undefined8 **)(lVar10 + 0x30))();
        if ((int)uVar3 < 2) {
          return uVar3;
        }
        auVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 8))(puVar6,puVar7);
        (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x10))
                  (auVar14._0_8_,uVar4,auVar15._0_8_,auVar15._8_8_);
                    /* WARNING: Could not recover jumptable at 0x018135c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x18))
                          (auVar14._0_8_,uVar4,uVar4,auVar15._8_8_,puVar9);
        return uVar3;
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8))(param_9,uVar4);
      uVar4 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar13,uVar5);
      pcVar11 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
      if (iVar1 == 0) {
        (*pcVar11)(auVar15._0_8_,auVar15._8_8_,uVar4);
        auVar15 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))
                            (auVar15._0_8_,auVar15._8_8_);
      }
      else {
        (*pcVar11)(auVar14._0_8_,auVar14._8_8_);
        auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))
                            (auVar14._0_8_,auVar14._8_8_);
      }
      auVar16 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(uVar13,uVar5);
      puVar8 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
      uVar3 = (*(code *)*puVar8)(auVar16._0_8_,auVar16._8_8_,param_3,param_4);
    } while ((uVar3 & 1) != 0);
  }
  *param_10 = auVar14;
  *param_11 = auVar15;
  return uVar3;
}



// ============================================================
// RVA: 0x1813430 | Core.Containers.ArrayIteratorExtensions.PartitionPoint<object>
// ============================================================

undefined8
Core_Containers_ArrayIteratorExtensions__PartitionPoint_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  puVar7 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
  lVar8 = param_6;
  uVar1 = (*(code *)*puVar7)();
  while( true ) {
    uVar10 = uVar1;
    uVar4 = auVar11._8_8_;
    uVar9 = auVar11._0_8_;
    if ((int)uVar10 < 1) {
      return uVar9;
    }
    uVar1 = uVar10 >> 1;
    puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
    (*(code *)*puVar6)(uVar9,uVar4,uVar1);
    puVar5 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
    uVar3 = (*(code *)*puVar5)(uVar9,uVar4);
    if (param_5 == 0) break;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar3);
    if (iVar2 != 0) {
      auVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar9,uVar4);
      uVar1 = uVar10 + ~uVar1;
    }
  }
  auVar11 = func_0x00f78af4();
  uVar9 = auVar11._8_8_;
  uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x30))();
  if (1 < (int)uVar4) {
    auVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))(puVar5,puVar6);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
              (auVar11._0_8_,uVar9,auVar12._0_8_,auVar12._8_8_);
                    /* WARNING: Could not recover jumptable at 0x018135c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18))
                      (auVar11._0_8_,uVar9,uVar9,auVar12._8_8_,puVar7);
    return uVar4;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1813518 | Core.Containers.ArrayIteratorExtensions.PopHeap<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__PopHeap_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  iVar1 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if (1 < iVar1) {
    auVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_3,param_4);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
              (param_1,param_2,auVar2._0_8_,auVar2._8_8_);
                    /* WARNING: Could not recover jumptable at 0x018135c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
              (param_1,param_2,param_2,auVar2._8_8_,param_5);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x18135e0 | Core.Containers.ArrayIteratorExtensions.PrevPermutation<object>
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined8 *
Core_Containers_ArrayIteratorExtensions__PrevPermutation_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  auVar24._8_8_ = param_4;
  auVar24._0_8_ = param_3;
  lVar17 = param_6;
  uVar4 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar4 & 1) == 0) {
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_3,param_4);
    uVar7 = auVar23._8_8_;
    puVar14 = (undefined8 *)**(long **)(param_6 + 0x30);
    uVar4 = (*(code *)*puVar14)(param_1,param_2,auVar23._0_8_,uVar7);
    if ((uVar4 & 1) == 0) {
      do {
        uVar20 = auVar23._8_8_;
        uVar13 = auVar23._0_8_;
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar13,uVar20);
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar13,uVar20);
        uVar9 = auVar23._8_8_;
        uVar21 = auVar23._0_8_;
        puVar12 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar6 = (*(code *)*puVar12)();
        if (param_5 == 0) {
          auVar24 = func_0x00f78af4();
          uVar21 = auVar24._8_8_;
          uVar5 = auVar24._0_8_;
          lVar18 = lVar17;
          puVar8 = (undefined8 *)(**(code **)**(undefined8 **)(lVar17 + 0x30))();
          if ((int)puVar8 < 2) {
            return puVar8;
          }
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(puVar12,uVar7);
          uVar7 = auVar24._8_8_;
          uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))();
          iVar3 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar5,uVar21,auVar24._0_8_,uVar7);
          if (-1 < iVar3 + -1) {
            iVar3 = iVar3 + -1;
          }
          auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))
                              (uVar5,uVar21,iVar3 >> 1);
          puVar12 = (undefined8 *)**(long **)(lVar17 + 0x30);
          iVar3 = (*(code *)*puVar12)(uVar5,uVar21,auVar24._0_8_,uVar7);
          goto joined_r0x0181390c;
        }
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar5,uVar6);
        if (iVar3 != 0) {
          do {
            auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar24._0_8_,auVar24._8_8_);
            uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))();
            uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar21,uVar9);
            iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                              (param_5,uVar7,uVar5);
          } while (iVar3 == 0);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (uVar21,uVar9,auVar24._0_8_,auVar24._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))
                    (uVar13,uVar20,param_3,param_4);
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar14 = (undefined8 *)**(long **)(param_6 + 0x30);
        uVar7 = param_2;
        iVar3 = (*(code *)*puVar14)(uVar21,uVar9,param_1);
      } while (iVar3 == 0);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))
                (param_1,param_2,param_3,param_4);
    }
  }
  return (undefined8 *)0x0;
joined_r0x0181390c:
  if (iVar3 < 1) {
code_r0x01813a34:
                    /* WARNING: Could not recover jumptable at 0x01813a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar14 = (undefined8 *)
              (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                        (auVar24._0_8_,auVar24._8_8_,uVar6);
    return puVar14;
  }
  uVar13 = auVar23._8_8_;
  lVar22 = auVar23._0_8_;
  puVar8 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  uVar9 = (*(code *)*puVar8)(lVar22,uVar13);
  if (puVar14 == (undefined8 *)0x0) {
    auVar24 = func_0x00f78af4();
    uVar21 = auVar24._8_8_;
    uVar5 = auVar24._0_8_;
    lVar17 = lVar18;
    if ((bRam0000000003eb62c8 & 1) == 0) {
      func_0x00f78a20(0x3d35820);
      bRam0000000003eb62c8 = 1;
    }
    puVar15 = (undefined8 *)**(undefined8 **)(lVar18 + 0x30);
    puVar14 = (undefined8 *)(*(code *)*puVar15)(uVar5,uVar21,puVar8,uVar7);
    uVar2 = (uint)puVar14;
    while( true ) {
      uVar1 = uVar2 - 1;
      if ((int)uVar1 < 1) {
        return puVar14;
      }
      uVar4 = (ulong)uVar1;
      puVar14 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 8);
      auVar24 = (*(code *)*puVar14)(uVar5,uVar21);
      if (puVar12 == (undefined8 *)0x0) break;
      uVar7 = /*System.Func<int, int>$$Invoke*/ func_0x02170750(puVar12,uVar2,uRam0000000003d35820);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(uVar5,uVar21,uVar7);
      puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
      puVar14 = (undefined8 *)
                (*(code *)*puVar15)(auVar24._0_8_,auVar24._8_8_,auVar23._0_8_,auVar23._8_8_);
      uVar2 = uVar1;
    }
    auVar24 = func_0x00f78af4();
    auVar23._8_8_ = lVar17;
    auVar23._0_8_ = puVar15;
    puVar8 = *(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x20);
    puVar12 = puVar14;
    lVar18 = param_7;
    iVar3 = (*(code *)*puVar8)();
    if (iVar3 != 0) {
      do {
        uVar5 = auVar24._8_8_;
        uVar21 = auVar24._0_8_;
        puVar15 = (undefined8 *)**(undefined8 **)(lVar22 + 0x30);
        uVar7 = (*(code *)*puVar15)(uVar21,uVar5);
        if (param_7 == 0) {
          auVar24 = func_0x00f78af4();
          puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
          puVar14 = puVar12;
          puVar11 = (undefined8 *)(*(code *)*puVar16)();
          if ((int)puVar11 == 0) {
            return puVar11;
          }
          do {
            uVar5 = auVar24._8_8_;
            uVar21 = auVar24._0_8_;
            puVar11 = (undefined8 *)**(undefined8 **)(lVar18 + 0x30);
            uVar7 = (*(code *)*puVar11)(uVar21,uVar5);
            if (puVar8 == (undefined8 *)0x0) {
              auVar24 = func_0x00f78af4();
              auVar25._8_8_ = puVar14;
              auVar25._0_8_ = puVar11;
              pcVar19 = (code *)**(undefined8 **)(puVar16[6] + 0x10);
              while( true ) {
                uVar5 = auVar24._8_8_;
                uVar7 = auVar24._0_8_;
                puVar14 = (undefined8 *)(*pcVar19)();
                if ((int)puVar14 == 0) {
                  return puVar14;
                }
                auVar25 = (*(code *)**(undefined8 **)(puVar16[6] + 0x18))
                                    (auVar25._0_8_,auVar25._8_8_);
                puVar14 = (undefined8 *)
                          (*(code *)**(undefined8 **)(puVar16[6] + 0x10))
                                    (uVar7,uVar5,auVar25._0_8_,auVar25._8_8_);
                if (((ulong)puVar14 & 1) == 0) break;
                (*(code *)**(undefined8 **)puVar16[6])(uVar7,uVar5,auVar25._0_8_,auVar25._8_8_);
                auVar24 = (*(code *)**(undefined8 **)(puVar16[6] + 8))(uVar7,uVar5);
                pcVar19 = (code *)**(undefined8 **)(puVar16[6] + 0x10);
              }
              return puVar14;
            }
            iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(puVar8,uVar7);
            if (iVar3 != 0) {
              (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar21,uVar5,lVar17);
            }
            auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))(uVar21,uVar5);
            puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
            puVar14 = puVar12;
            puVar11 = (undefined8 *)(*(code *)*puVar16)(auVar24._0_8_,auVar24._8_8_,puVar15);
          } while (((ulong)puVar11 & 1) != 0);
          return puVar11;
        }
        uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(param_7,uVar7);
        uVar7 = param_8;
        if ((uVar10 & 1) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar22 + 0x30))(uVar21,uVar5);
        }
        (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))
                  (auVar23._0_8_,auVar23._8_8_,uVar7);
        auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))(uVar21,uVar5);
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                            (auVar23._0_8_,auVar23._8_8_);
        puVar15 = auVar23._0_8_;
        puVar8 = *(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x20);
        puVar12 = puVar14;
        uVar10 = (*(code *)*puVar8)(auVar24._0_8_,auVar24._8_8_,uVar4);
      } while ((uVar10 & 1) != 0);
    }
    return puVar15;
  }
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(puVar14,uVar9,uVar6);
  if ((uVar4 & 1) == 0) goto code_r0x01813a34;
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(lVar22,uVar13);
  (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(auVar24._0_8_,auVar24._8_8_,uVar7);
  iVar3 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar5,uVar21,lVar22,uVar13);
  if (-1 < iVar3 + -1) {
    iVar3 = iVar3 + -1;
  }
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(uVar5,uVar21,iVar3 >> 1);
  puVar12 = (undefined8 *)**(long **)(lVar17 + 0x30);
  iVar3 = (*(code *)*puVar12)(uVar5,uVar21,lVar22);
  uVar7 = uVar13;
  auVar24 = auVar23;
  auVar23 = auVar25;
  goto joined_r0x0181390c;
}



// ============================================================
// RVA: 0x1813814 | Core.Containers.ArrayIteratorExtensions.PushHeap<object>
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined8 *
Core_Containers_ArrayIteratorExtensions__PushHeap_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  lVar16 = param_6;
  puVar4 = (undefined8 *)(**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((int)puVar4 < 2) {
    return puVar4;
  }
  auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_3,param_4);
  uVar8 = auVar20._8_8_;
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))();
  iVar3 = (**(code **)**(undefined8 **)(param_6 + 0x30))(param_1,param_2,auVar20._0_8_,uVar8);
  if (-1 < iVar3 + -1) {
    iVar3 = iVar3 + -1;
  }
  auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                      (param_1,param_2,iVar3 >> 1);
  puVar4 = (undefined8 *)**(long **)(param_6 + 0x30);
  iVar3 = (*(code *)*puVar4)(param_1,param_2,auVar20._0_8_,uVar8);
  while( true ) {
    if (iVar3 < 1) break;
    uVar12 = auVar21._8_8_;
    lVar19 = auVar21._0_8_;
    puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
    uVar6 = (*(code *)*puVar11)(lVar19,uVar12);
    if (param_5 == 0) {
      auVar20 = func_0x00f78af4();
      uVar6 = auVar20._8_8_;
      uVar5 = auVar20._0_8_;
      lVar17 = lVar16;
      if ((bRam0000000003eb62c8 & 1) == 0) {
        func_0x00f78a20(0x3d35820);
        bRam0000000003eb62c8 = 1;
      }
      puVar13 = (undefined8 *)**(undefined8 **)(lVar16 + 0x30);
      puVar11 = (undefined8 *)(*(code *)*puVar13)(uVar5,uVar6,puVar11,uVar8);
      uVar2 = (uint)puVar11;
      while( true ) {
        uVar1 = uVar2 - 1;
        if ((int)uVar1 < 1) {
          return puVar11;
        }
        uVar7 = (ulong)uVar1;
        puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 8);
        auVar20 = (*(code *)*puVar11)(uVar5,uVar6);
        if (puVar4 == (undefined8 *)0x0) break;
        uVar8 = /*System.Func<int, int>$$Invoke*/ func_0x02170750(puVar4,uVar2,uRam0000000003d35820);
        auVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(uVar5,uVar6,uVar8);
        puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10);
        puVar11 = (undefined8 *)
                  (*(code *)*puVar13)(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_);
        uVar2 = uVar1;
      }
      auVar20 = func_0x00f78af4();
      auVar21._8_8_ = lVar17;
      auVar21._0_8_ = puVar13;
      puVar14 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20);
      puVar4 = puVar11;
      lVar16 = param_7;
      iVar3 = (*(code *)*puVar14)();
      if (iVar3 != 0) {
        do {
          uVar5 = auVar20._8_8_;
          uVar6 = auVar20._0_8_;
          puVar13 = (undefined8 *)**(undefined8 **)(lVar19 + 0x30);
          uVar8 = (*(code *)*puVar13)(uVar6,uVar5);
          if (param_7 == 0) {
            auVar20 = func_0x00f78af4();
            puVar15 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20);
            puVar11 = puVar4;
            puVar10 = (undefined8 *)(*(code *)*puVar15)();
            if ((int)puVar10 == 0) {
              return puVar10;
            }
            do {
              uVar5 = auVar20._8_8_;
              uVar6 = auVar20._0_8_;
              puVar10 = (undefined8 *)**(undefined8 **)(lVar16 + 0x30);
              uVar8 = (*(code *)*puVar10)(uVar6,uVar5);
              if (puVar14 == (undefined8 *)0x0) {
                auVar20 = func_0x00f78af4();
                auVar22._8_8_ = puVar11;
                auVar22._0_8_ = puVar10;
                pcVar18 = (code *)**(undefined8 **)(puVar15[6] + 0x10);
                while( true ) {
                  uVar5 = auVar20._8_8_;
                  uVar8 = auVar20._0_8_;
                  puVar4 = (undefined8 *)(*pcVar18)();
                  if ((int)puVar4 == 0) {
                    return puVar4;
                  }
                  auVar22 = (*(code *)**(undefined8 **)(puVar15[6] + 0x18))
                                      (auVar22._0_8_,auVar22._8_8_);
                  puVar4 = (undefined8 *)
                           (*(code *)**(undefined8 **)(puVar15[6] + 0x10))
                                     (uVar8,uVar5,auVar22._0_8_,auVar22._8_8_);
                  if (((ulong)puVar4 & 1) == 0) break;
                  (*(code *)**(undefined8 **)puVar15[6])(uVar8,uVar5,auVar22._0_8_,auVar22._8_8_);
                  auVar20 = (*(code *)**(undefined8 **)(puVar15[6] + 8))(uVar8,uVar5);
                  pcVar18 = (code *)**(undefined8 **)(puVar15[6] + 0x10);
                }
                return puVar4;
              }
              iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(puVar14,uVar8);
              if (iVar3 != 0) {
                (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(uVar6,uVar5,lVar17);
              }
              auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))(uVar6,uVar5);
              puVar15 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20);
              puVar11 = puVar4;
              puVar10 = (undefined8 *)(*(code *)*puVar15)(auVar20._0_8_,auVar20._8_8_,puVar13);
            } while (((ulong)puVar10 & 1) != 0);
            return puVar10;
          }
          uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(param_7,uVar8);
          uVar8 = param_8;
          if ((uVar9 & 1) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar19 + 0x30))(uVar6,uVar5);
          }
          (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))
                    (auVar21._0_8_,auVar21._8_8_,uVar8);
          auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18))(uVar6,uVar5);
          auVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18))
                              (auVar21._0_8_,auVar21._8_8_);
          puVar13 = auVar21._0_8_;
          puVar14 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20);
          puVar4 = puVar11;
          uVar9 = (*(code *)*puVar14)(auVar20._0_8_,auVar20._8_8_,uVar7);
        } while ((uVar9 & 1) != 0);
      }
      return puVar13;
    }
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28))(param_5,uVar6,uVar5);
    if ((uVar7 & 1) == 0) break;
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(lVar19,uVar12);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
              (auVar20._0_8_,auVar20._8_8_,uVar8);
    iVar3 = (**(code **)**(undefined8 **)(param_6 + 0x30))(param_1,param_2,lVar19,uVar12);
    if (-1 < iVar3 + -1) {
      iVar3 = iVar3 + -1;
    }
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                        (param_1,param_2,iVar3 >> 1);
    puVar4 = (undefined8 *)**(long **)(param_6 + 0x30);
    iVar3 = (*(code *)*puVar4)(param_1,param_2,lVar19);
    uVar8 = uVar12;
    auVar20 = auVar21;
    auVar21 = auVar22;
  }
                    /* WARNING: Could not recover jumptable at 0x01813a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined8 *)
           (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                     (auVar20._0_8_,auVar20._8_8_,uVar5);
  return puVar4;
}



// ============================================================
// RVA: 0x1813a70 | Core.Containers.ArrayIteratorExtensions.RandomShuffle<object>
// ============================================================

undefined8 *
Core_Containers_ArrayIteratorExtensions__RandomShuffle_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x26;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar13 = param_6;
  if ((bRam0000000003eb62c8 & 1) == 0) {
    func_0x00f78a20(0x3d35820);
    bRam0000000003eb62c8 = 1;
  }
  puVar10 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
  puVar4 = (undefined8 *)(*(code *)*puVar10)(param_1,param_2,param_3,param_4);
  uVar2 = (uint)puVar4;
  while( true ) {
    uVar1 = uVar2 - 1;
    if ((int)uVar1 < 1) {
      return puVar4;
    }
    uVar16 = (ulong)uVar1;
    puVar4 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
    auVar18 = (*(code *)*puVar4)(param_1,param_2);
    if (param_5 == 0) break;
    uVar5 = /*System.Func<int, int>$$Invoke*/ func_0x02170750(param_5,uVar2,uRam0000000003d35820);
    auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2,uVar5);
    puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
    puVar4 = (undefined8 *)
             (*(code *)*puVar10)(auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,auVar19._8_8_);
    uVar2 = uVar1;
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = lVar13;
  auVar19._0_8_ = puVar10;
  puVar11 = *(undefined8 **)(*(long *)(unaff_x26 + 0x30) + 0x20);
  puVar9 = puVar4;
  lVar14 = param_7;
  iVar3 = (*(code *)*puVar11)();
  if (iVar3 != 0) {
    do {
      uVar8 = auVar18._8_8_;
      uVar17 = auVar18._0_8_;
      puVar10 = (undefined8 *)**(undefined8 **)(unaff_x26 + 0x30);
      uVar5 = (*(code *)*puVar10)(uVar17,uVar8);
      if (param_7 == 0) {
        auVar18 = func_0x00f78af4();
        puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20);
        puVar4 = puVar9;
        puVar7 = (undefined8 *)(*(code *)*puVar12)();
        if ((int)puVar7 == 0) {
          return puVar7;
        }
        do {
          uVar8 = auVar18._8_8_;
          uVar17 = auVar18._0_8_;
          puVar7 = (undefined8 *)**(undefined8 **)(lVar14 + 0x30);
          uVar5 = (*(code *)*puVar7)(uVar17,uVar8);
          if (puVar11 == (undefined8 *)0x0) {
            auVar18 = func_0x00f78af4();
            auVar20._8_8_ = puVar4;
            auVar20._0_8_ = puVar7;
            pcVar15 = (code *)**(undefined8 **)(puVar12[6] + 0x10);
            while( true ) {
              uVar8 = auVar18._8_8_;
              uVar5 = auVar18._0_8_;
              puVar4 = (undefined8 *)(*pcVar15)();
              if ((int)puVar4 == 0) {
                return puVar4;
              }
              auVar20 = (*(code *)**(undefined8 **)(puVar12[6] + 0x18))(auVar20._0_8_,auVar20._8_8_)
              ;
              puVar4 = (undefined8 *)
                       (*(code *)**(undefined8 **)(puVar12[6] + 0x10))
                                 (uVar5,uVar8,auVar20._0_8_,auVar20._8_8_);
              if (((ulong)puVar4 & 1) == 0) break;
              (*(code *)**(undefined8 **)puVar12[6])(uVar5,uVar8,auVar20._0_8_,auVar20._8_8_);
              auVar18 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(uVar5,uVar8);
              pcVar15 = (code *)**(undefined8 **)(puVar12[6] + 0x10);
            }
            return puVar4;
          }
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(puVar11,uVar5);
          if (iVar3 != 0) {
            (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))(uVar17,uVar8,lVar13);
          }
          auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(uVar17,uVar8);
          puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20);
          puVar4 = puVar9;
          puVar7 = (undefined8 *)(*(code *)*puVar12)(auVar18._0_8_,auVar18._8_8_,puVar10);
        } while (((ulong)puVar7 & 1) != 0);
        return puVar7;
      }
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x26 + 0x30) + 8))(param_7,uVar5);
      uVar5 = param_8;
      if ((uVar6 & 1) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(unaff_x26 + 0x30))(uVar17,uVar8);
      }
      (*(code *)**(undefined8 **)(*(long *)(unaff_x26 + 0x30) + 0x10))
                (auVar19._0_8_,auVar19._8_8_,uVar5);
      auVar18 = (*(code *)**(undefined8 **)(*(long *)(unaff_x26 + 0x30) + 0x18))(uVar17,uVar8);
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(unaff_x26 + 0x30) + 0x18))
                          (auVar19._0_8_,auVar19._8_8_);
      puVar11 = *(undefined8 **)(*(long *)(unaff_x26 + 0x30) + 0x20);
      puVar9 = puVar4;
      uVar6 = (*(code *)*puVar11)(auVar18._0_8_,auVar18._8_8_,uVar16);
    } while ((uVar6 & 1) != 0);
    return auVar19._0_8_;
  }
  return puVar10;
}



// ============================================================
// RVA: 0x1813b90 | Core.Containers.ArrayIteratorExtensions.ReplaceCopyIf<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__ReplaceCopyIf_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar15._8_8_ = param_6;
  auVar15._0_8_ = param_5;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  puVar8 = *(undefined8 **)(*(long *)(param_9 + 0x30) + 0x20);
  uVar4 = param_4;
  lVar10 = param_7;
  iVar1 = (*(code *)*puVar8)();
  if (iVar1 != 0) {
    do {
      uVar5 = auVar14._8_8_;
      uVar12 = auVar14._0_8_;
      puVar6 = (undefined8 *)**(undefined8 **)(param_9 + 0x30);
      uVar2 = (*(code *)*puVar6)(uVar12,uVar5);
      if (param_7 == 0) {
        auVar14 = func_0x00f78af4();
        puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x20);
        uVar2 = uVar4;
        auVar15 = (*(code *)*puVar9)();
        if (auVar15._0_4_ == 0) {
          return auVar15;
        }
        do {
          uVar12 = auVar14._8_8_;
          uVar13 = auVar14._0_8_;
          puVar7 = (undefined8 *)**(undefined8 **)(lVar10 + 0x30);
          uVar5 = (*(code *)*puVar7)(uVar13,uVar12);
          if (puVar8 == (undefined8 *)0x0) {
            auVar14 = func_0x00f78af4();
            auVar16._8_8_ = uVar2;
            auVar16._0_8_ = puVar7;
            pcVar11 = (code *)**(undefined8 **)(puVar9[6] + 0x10);
            while( true ) {
              uVar2 = auVar14._8_8_;
              uVar4 = auVar14._0_8_;
              auVar14 = (*pcVar11)();
              if (auVar14._0_4_ == 0) {
                return auVar14;
              }
              auVar16 = (*(code *)**(undefined8 **)(puVar9[6] + 0x18))(auVar16._0_8_,auVar16._8_8_);
              auVar14 = (*(code *)**(undefined8 **)(puVar9[6] + 0x10))
                                  (uVar4,uVar2,auVar16._0_8_,auVar16._8_8_);
              if ((auVar14._0_8_ & 1) == 0) break;
              (*(code *)**(undefined8 **)puVar9[6])(uVar4,uVar2,auVar16._0_8_,auVar16._8_8_);
              auVar14 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(uVar4,uVar2);
              pcVar11 = (code *)**(undefined8 **)(puVar9[6] + 0x10);
            }
            return auVar14;
          }
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 8))(puVar8,uVar5);
          if (iVar1 != 0) {
            (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x10))(uVar13,uVar12,param_6);
          }
          auVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x18))(uVar13,uVar12);
          puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x20);
          uVar2 = uVar4;
          auVar15 = (*(code *)*puVar9)(auVar14._0_8_,auVar14._8_8_,puVar6);
        } while ((auVar15._0_8_ & 1) != 0);
        return auVar15;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_9 + 0x30) + 8))(param_7,uVar2);
      uVar4 = param_8;
      if ((uVar3 & 1) == 0) {
        uVar4 = (**(code **)**(undefined8 **)(param_9 + 0x30))(uVar12,uVar5);
      }
      (*(code *)**(undefined8 **)(*(long *)(param_9 + 0x30) + 0x10))
                (auVar15._0_8_,auVar15._8_8_,uVar4);
      auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_9 + 0x30) + 0x18))(uVar12,uVar5);
      auVar15 = (*(code *)**(undefined8 **)(*(long *)(param_9 + 0x30) + 0x18))
                          (auVar15._0_8_,auVar15._8_8_);
      puVar8 = *(undefined8 **)(*(long *)(param_9 + 0x30) + 0x20);
      uVar4 = param_4;
      uVar3 = (*(code *)*puVar8)(auVar14._0_8_,auVar14._8_8_,param_3);
    } while ((uVar3 & 1) != 0);
  }
  return auVar15;
}



// ============================================================
// RVA: 0x1813ce0 | Core.Containers.ArrayIteratorExtensions.ReplaceIf<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__ReplaceIf_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  puVar6 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 0x20);
  uVar4 = param_4;
  iVar1 = (*(code *)*puVar6)();
  if (iVar1 != 0) {
    do {
      uVar8 = auVar10._8_8_;
      uVar9 = auVar10._0_8_;
      puVar5 = (undefined8 *)**(undefined8 **)(param_7 + 0x30);
      uVar2 = (*(code *)*puVar5)(uVar9,uVar8);
      if (param_5 == 0) {
        auVar10 = func_0x00f78af4();
        auVar11._8_8_ = uVar4;
        auVar11._0_8_ = puVar5;
        pcVar7 = (code *)**(undefined8 **)(puVar6[6] + 0x10);
        while( true ) {
          uVar2 = auVar10._8_8_;
          uVar4 = auVar10._0_8_;
          iVar1 = (*pcVar7)();
          if (iVar1 == 0) {
            return;
          }
          auVar11 = (*(code *)**(undefined8 **)(puVar6[6] + 0x18))(auVar11._0_8_,auVar11._8_8_);
          uVar3 = (*(code *)**(undefined8 **)(puVar6[6] + 0x10))
                            (uVar4,uVar2,auVar11._0_8_,auVar11._8_8_);
          if ((uVar3 & 1) == 0) break;
          (*(code *)**(undefined8 **)puVar6[6])(uVar4,uVar2,auVar11._0_8_,auVar11._8_8_);
          auVar10 = (*(code *)**(undefined8 **)(puVar6[6] + 8))(uVar4,uVar2);
          pcVar7 = (code *)**(undefined8 **)(puVar6[6] + 0x10);
        }
        return;
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))(param_5,uVar2);
      if (iVar1 != 0) {
        (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))(uVar9,uVar8,param_6);
      }
      auVar10 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))(uVar9,uVar8);
      puVar6 = *(undefined8 **)(*(long *)(param_7 + 0x30) + 0x20);
      uVar4 = param_4;
      uVar3 = (*(code *)*puVar6)(auVar10._0_8_,auVar10._8_8_,param_3);
    } while ((uVar3 & 1) != 0);
  }
  return;
}



// ============================================================
// RVA: 0x1813dd4 | Core.Containers.ArrayIteratorExtensions.Reverse<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Reverse_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int iVar1;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar2;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  pcVar5 = (code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10);
  while( true ) {
    uVar4 = auVar7._8_8_;
    uVar2 = auVar7._0_8_;
    iVar1 = (*pcVar5)(uVar2,uVar4,auVar6._0_8_,auVar6._8_8_);
    if (iVar1 == 0) {
      return;
    }
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x18))
                       (auVar6._0_8_,auVar6._8_8_);
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10))
                      (uVar2,uVar4,auVar6._0_8_,auVar6._8_8_);
    if ((uVar3 & 1) == 0) break;
    (**(code **)**(undefined8 **)(param_5 + 0x30))(uVar2,uVar4,auVar6._0_8_,auVar6._8_8_);
    auVar7 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(uVar2,uVar4);
    pcVar5 = (code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x1813ec0 | Core.Containers.ArrayIteratorExtensions.ReverseCopy<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__ReverseCopy_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_6;
  auVar5._0_8_ = param_5;
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = param_3;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x20))();
  if (iVar1 != 0) {
    do {
      auVar4 = (**(code **)**(undefined8 **)(param_7 + 0x30))(auVar4._0_8_,auVar4._8_8_);
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))();
      (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                (auVar5._0_8_,auVar5._8_8_,uVar2);
      auVar5 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))
                         (auVar5._0_8_,auVar5._8_8_);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x20))
                        (param_1,param_2,auVar4._0_8_,auVar4._8_8_);
    } while ((uVar3 & 1) != 0);
  }
  return auVar5;
}



// ============================================================
// RVA: 0x1813fb8 | Core.Containers.ArrayIteratorExtensions.Rotate<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Rotate_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_68;
  
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  auVar4 = auVar1;
  while( true ) {
    uVar10 = auVar4._8_8_;
    uStack_68 = auVar1._0_8_;
    auVar2._8_8_ = uVar10;
    auVar2._0_8_ = uStack_68;
    uVar8 = auVar11._8_8_;
    uVar9 = auVar11._0_8_;
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))
                      (uVar9,uVar8,param_5,param_6);
    if ((uVar7 & 1) == 0) break;
    (**(code **)**(undefined8 **)(param_7 + 0x30))(uVar9,uVar8,auVar4._0_8_,auVar1._8_8_);
    auVar11 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))(uVar9,uVar8);
    auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))(auVar4._0_8_,auVar1._8_8_)
    ;
    auVar3._8_8_ = auVar12._8_8_;
    auVar3._0_8_ = uStack_68;
    auVar5._8_8_ = uVar10;
    auVar5._0_8_ = auVar12._0_8_;
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                      (auVar12._0_8_,auVar12._8_8_,param_5,param_6);
    auVar1 = auVar2;
    auVar4 = auVar2;
    if (((uVar7 & 1) == 0) &&
       (iVar6 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                          (auVar11._0_8_,auVar11._8_8_,uStack_68,uVar10), auVar1 = auVar12,
       auVar4 = auVar12, iVar6 == 0)) {
      auVar1 = auVar3;
      auVar4 = auVar5;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1814104 | Core.Containers.ArrayIteratorExtensions.RotateCopy<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__RotateCopy_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)**(undefined8 **)(param_9 + 0x30))
                     (param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x0181418c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_9 + 0x30))
            (param_1,param_2,param_3,param_4,auVar1._0_8_,auVar1._8_8_);
  return;
}



// ============================================================
// RVA: 0x1814190 | Core.Containers.ArrayIteratorExtensions.Search<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__Search_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,undefined8 *param_7,long param_8,long param_9,
          long param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  int iVar11;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar12;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [16];
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined1 ******ppppppuStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_398;
  undefined1 auStack_390 [16];
  undefined8 *puStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  long lStack_348;
  undefined1 *****pppppuStack_340;
  undefined *puStack_338;
  long lStack_328;
  undefined8 *puStack_320;
  long lStack_318;
  undefined1 auStack_310 [16];
  undefined8 *puStack_300;
  long lStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  undefined1 ****ppppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined8 *puStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined1 ***pppuStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [16];
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined1 **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  uint uStack_f4;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  auVar35._8_8_ = param_6;
  auVar35._0_8_ = param_5;
  auVar34._8_8_ = param_2;
  auVar34._0_8_ = param_1;
  lVar24 = param_6;
  puVar28 = param_7;
  lStack_68 = param_8;
  uVar13 = (**(code **)**(undefined8 **)(param_10 + 0x30))(param_5,param_6,param_7,param_8);
  if ((uVar13 & 1) != 0) {
LAB_01814344:
    auVar36._8_8_ = param_2;
    auVar36._0_8_ = param_1;
    return auVar36;
  }
  puVar26 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
  uVar18 = param_4;
  iVar11 = (*(code *)*puVar26)(param_1,param_2,param_3);
  lStack_80 = param_6;
  uStack_88 = param_5;
joined_r0x01814218:
  param_1 = param_3;
  param_2 = param_4;
  auVar38 = auVar34;
  if (iVar11 == 0) goto LAB_01814344;
  while( true ) {
    uStack_78 = auVar38._8_8_;
    uStack_70 = auVar38._0_8_;
    uVar17 = auVar35._8_8_;
    uVar19 = auVar35._0_8_;
    uVar16 = auVar34._8_8_;
    uVar33 = auVar34._0_8_;
    uVar14 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))(uVar33,uVar16);
    puVar21 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10);
    uVar15 = (*(code *)*puVar21)(uVar19,uVar17);
    if (param_9 == 0) break;
    uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(param_9,uVar14,uVar15);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8);
    if ((uVar13 & 1) == 0) goto LAB_01814304;
    auVar34 = (*UNRECOVERED_JUMPTABLE_00)(uVar33,uVar16);
    auVar35 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar19,uVar17);
    uVar13 = (**(code **)**(undefined8 **)(param_10 + 0x30))
                       (auVar35._0_8_,auVar35._8_8_,param_7,lStack_68);
    param_1 = uStack_70;
    param_2 = uStack_78;
    if ((uVar13 & 1) != 0) goto LAB_01814344;
    puVar26 = (undefined8 *)**(ulong **)(param_10 + 0x30);
    uVar18 = param_4;
    uVar13 = (*(code *)*puVar26)(auVar34._0_8_,auVar34._8_8_,param_3);
    auVar38._8_8_ = uStack_78;
    auVar38._0_8_ = uStack_70;
    param_1 = param_3;
    param_2 = param_4;
    if ((uVar13 & 1) != 0) goto LAB_01814344;
  }
  auVar34 = func_0x00f78af4();
  auVar2._8_8_ = uVar18;
  auVar2._0_8_ = puVar21;
  auVar1._8_8_ = uVar18;
  auVar1._0_8_ = puVar21;
  lStack_e8 = param_9;
  lStack_b8 = param_10;
  puStack_98 = &Core_Containers_ArrayIteratorExtensions__SearchN_object_;
  lVar29 = lVar24;
  puVar31 = puVar28;
  lVar30 = param_8;
  uStack_f0 = uVar19;
  uStack_e0 = uVar14;
  uStack_d8 = uVar17;
  uStack_d0 = param_4;
  puStack_c8 = param_7;
  uStack_c0 = param_3;
  uStack_b0 = uVar16;
  uStack_a8 = uVar33;
  puStack_a0 = &stack0xfffffffffffffff0;
  iVar11 = (**(code **)**(undefined8 **)(param_8 + 0x30))();
  auVar37 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                      (auVar34._0_8_,auVar34._8_8_,iVar11 - (uint)puVar26);
  puVar23 = auVar37._8_8_;
  puVar27 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
  uVar12 = (*(code *)*puVar27)(auVar34._0_8_,auVar34._8_8_,auVar37._0_8_);
  uStack_f4 = (uint)puVar26;
  auVar35 = auVar34;
  while( true ) {
    if (uVar12 == 0) {
      return auVar1;
    }
    puStack_108 = auVar37._8_8_;
    uStack_100 = auVar37._0_8_;
    puVar22 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18);
    uVar14 = (*(code *)*puVar22)(auVar34._0_8_,auVar34._8_8_);
    if (puVar28 == (undefined8 *)0x0) break;
    puVar23 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20);
    uVar13 = (*(code *)*puVar23)(puVar28,lVar24,uVar14);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10);
    if ((uVar13 & 1) == 0) {
      auVar34 = (*UNRECOVERED_JUMPTABLE_00)(auVar35._0_8_,auVar35._8_8_);
      puVar27 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
      puVar23 = puStack_108;
      uVar12 = (*(code *)*puVar27)(auVar34._0_8_,auVar34._8_8_,uStack_100);
      auVar37._8_8_ = puStack_108;
      auVar37._0_8_ = uStack_100;
      auVar35 = auVar34;
      auVar1 = auVar2;
      uVar3 = uStack_f4;
    }
    else {
      auVar34 = (*UNRECOVERED_JUMPTABLE_00)(auVar34._0_8_,auVar34._8_8_);
      auVar37._8_8_ = puStack_108;
      auVar37._0_8_ = uStack_100;
      uVar12 = (int)puVar26 - 1;
      auVar1 = auVar35;
      uVar3 = uVar12;
    }
    puVar26 = (undefined8 *)(ulong)uVar3;
  }
  auVar38 = func_0x00f78af4();
  lVar32 = auVar38._0_8_;
  puStack_118 = &Core_Containers_ArrayIteratorExtensions__SetCurrent_object_;
  ppuStack_120 = &puStack_a0;
  if (lVar32 == 0) {
    func_0x00f78af4();
  }
  else if (auVar38._8_4_ < *(uint *)(lVar32 + 0x18)) {
    *(undefined8 **)(lVar32 + ((auVar38._8_8_ << 0x20) >> 0x1d) + 0x20) = puVar22;
    return auVar38;
  }
  uVar14 = func_0x00f78b24();
  auVar38 = func_0x00f78ac0(uVar14,0);
  lVar32 = auVar38._0_8_;
  puStack_128 = &Core_Containers_ArrayIteratorExtensions__SetCurrent_PlayerRankingPair_;
  if (lVar32 == 0) {
    puStack_130 = (undefined1 *)&ppuStack_120;
    func_0x00f78af4();
  }
  else {
    puStack_130 = (undefined1 *)&ppuStack_120;
    if (auVar38._8_4_ < *(uint *)(lVar32 + 0x18)) {
      lVar32 = lVar32 + (long)(int)auVar38._8_4_ * 0x28;
      uVar14 = puVar22[1];
      uVar18 = *puVar22;
      uVar33 = puVar22[3];
      uVar15 = puVar22[2];
      *(undefined8 *)(lVar32 + 0x40) = puVar22[4];
      *(undefined8 *)(lVar32 + 0x28) = uVar14;
      *(undefined8 *)(lVar32 + 0x20) = uVar18;
      *(undefined8 *)(lVar32 + 0x38) = uVar33;
      *(undefined8 *)(lVar32 + 0x30) = uVar15;
      return auVar38;
    }
  }
  uVar14 = func_0x00f78b24();
  auVar38 = func_0x00f78ac0(uVar14,0);
  puVar4 = puStack_118;
  ppuVar10 = ppuStack_120;
  auVar39._8_8_ = lVar29;
  auVar39._0_8_ = puVar27;
  puStack_138 = &Core_Containers_ArrayIteratorExtensions__SetDifference_object_;
  puStack_1a8 = puStack_128;
  puStack_1a0 = puStack_130;
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puStack_118 + 0x30) + 0x20);
  uStack_160 = 0;
  puVar28 = puVar31;
  lStack_198 = lVar30;
  puStack_190 = puVar26;
  uStack_188 = uVar18;
  puStack_170 = puVar21;
  lStack_168 = lVar24;
  lStack_158 = param_8;
  puStack_140 = (undefined1 *)&puStack_130;
  auStack_150 = auVar35;
  auStack_180 = auVar34;
code_r0x018145d0:
  iVar11 = (*UNRECOVERED_JUMPTABLE_00)(auVar38._0_8_,auVar38._8_8_);
  if (iVar11 == 0) {
code_r0x018147b8:
                    /* WARNING: Could not recover jumptable at 0x018147f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar34 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x28))
                        (auVar38._0_8_,auVar38._8_8_,puVar22,puVar23,puStack_1a0,puStack_1a8);
    return auVar34;
  }
  do {
    uVar15 = auVar39._8_8_;
    uVar33 = auVar39._0_8_;
    uVar18 = auVar38._8_8_;
    uVar14 = auVar38._0_8_;
    puVar26 = *(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x20);
    lVar24 = lStack_198;
    uVar13 = (*(code *)*puVar26)(uVar33,uVar15,puVar31);
    if ((uVar13 & 1) == 0) goto code_r0x018147b8;
    uVar16 = (**(code **)**(undefined8 **)(puVar4 + 0x30))(uVar14,uVar18);
    puVar21 = (undefined8 *)**(undefined8 **)(puVar4 + 0x30);
    uVar17 = (*(code *)*puVar21)(uVar33,uVar15);
    if (ppuVar10 == (undefined1 **)0x0) {
      auVar34 = func_0x00f78af4();
      lVar32 = lStack_198;
      puVar8 = puStack_1a8;
      auVar40._8_8_ = lVar29;
      auVar40._0_8_ = puVar26;
      puStack_1f8 = puVar4;
      ppuStack_1d8 = ppuVar10;
      puStack_1b8 = &Core_Containers_ArrayIteratorExtensions__SetIntersection_object_;
      lStack_220 = lStack_1b0;
      puVar26 = puVar28;
      lStack_218 = lVar30;
      puStack_200 = puVar31;
      uStack_1e0 = uVar16;
      puStack_1d0 = puVar22;
      puStack_1c8 = puVar23;
      ppuStack_1c0 = &puStack_140;
      auStack_1f0 = auVar38;
      auStack_210 = auVar39;
      iVar11 = (*(code *)**(undefined8 **)(*(long *)(lStack_198 + 0x30) + 0x20))();
      puVar9 = puStack_1a0;
      puStack_228 = puVar8;
      if (iVar11 == 0) goto code_r0x01814a64;
      break;
    }
    iVar11 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 8))(ppuVar10,uVar16,uVar17);
    if (iVar11 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(puVar4 + 0x30))(uVar33,uVar15);
      uVar17 = (**(code **)**(undefined8 **)(puVar4 + 0x30))(uVar14,uVar18);
      iVar11 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 8))(ppuVar10,uVar16,uVar17);
      if (iVar11 == 0) goto code_r0x01814764;
      auVar39 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x18))(uVar33,uVar15);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x20);
    }
    else {
      uVar15 = (**(code **)**(undefined8 **)(puVar4 + 0x30))(uVar14,uVar18);
      puVar8 = puStack_1a8;
      (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x10))(puStack_1a0,puStack_1a8,uVar15);
      auVar34 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x18))(puStack_1a0,puVar8);
      puStack_1a8 = auVar34._8_8_;
      puStack_1a0 = auVar34._0_8_;
      auVar38 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x18))(uVar14,uVar18);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x20);
    }
    uVar13 = (*UNRECOVERED_JUMPTABLE_00)(auVar38._0_8_,auVar38._8_8_,puVar22,puVar23);
    if ((uVar13 & 1) == 0) goto code_r0x018147b8;
  } while( true );
code_r0x01814864:
  uVar18 = auVar40._8_8_;
  uVar14 = auVar40._0_8_;
  uVar15 = auVar34._8_8_;
  uVar33 = auVar34._0_8_;
  puVar23 = *(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x20);
  lVar25 = lStack_218;
  uVar13 = (*(code *)*puVar23)(uVar14,uVar18,puVar28);
  if ((uVar13 & 1) == 0) goto code_r0x01814a64;
  uVar16 = (**(code **)**(undefined8 **)(lVar32 + 0x30))(uVar33,uVar15);
  puVar27 = (undefined8 *)**(long **)(lVar32 + 0x30);
  uVar17 = (*(code *)*puVar27)(uVar14,uVar18);
  if (puVar9 == (undefined1 *)0x0) {
    auVar35 = func_0x00f78af4();
    lVar7 = lStack_218;
    lVar6 = lStack_220;
    auVar42._8_8_ = lVar29;
    auVar42._0_8_ = puVar23;
    lStack_258 = lVar32;
    puStack_248 = puVar9;
    puStack_238 = &Core_Containers_ArrayIteratorExtensions__SetSymmetricDifference_object_;
    puStack_2a8 = puStack_228;
    lStack_2a0 = lStack_230;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_218 + 0x30);
    puVar23 = puVar26;
    lStack_298 = lVar30;
    puStack_270 = puVar21;
    lStack_268 = lVar24;
    puStack_260 = puVar28;
    uStack_250 = uVar16;
    pppuStack_240 = &ppuStack_1c0;
    goto code_r0x01814af0;
  }
  iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 8))(puVar9,uVar16,uVar17);
  if (iVar11 != 0) {
    auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x10))(uVar33,uVar15);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x20);
code_r0x0181490c:
    uVar13 = (*UNRECOVERED_JUMPTABLE_00)(auVar34._0_8_,auVar34._8_8_,puVar21,lVar24);
    if ((uVar13 & 1) == 0) {
code_r0x01814a64:
      auVar41._8_8_ = puStack_228;
      auVar41._0_8_ = lStack_220;
      return auVar41;
    }
    goto code_r0x01814864;
  }
  uVar16 = (**(code **)**(undefined8 **)(lVar32 + 0x30))(uVar14,uVar18);
  uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x30))(uVar33,uVar15);
  iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 8))(puVar9,uVar16,uVar17);
  if (iVar11 != 0) {
    auVar40 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x10))(uVar14,uVar18);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x20);
    goto code_r0x0181490c;
  }
  uVar16 = (**(code **)**(undefined8 **)(lVar32 + 0x30))(uVar33,uVar15);
  puVar4 = puStack_228;
  (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x18))(lStack_220,puStack_228,uVar16);
  auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x10))(lStack_220,puVar4);
  puStack_228 = auVar34._8_8_;
  lStack_220 = auVar34._0_8_;
  auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x10))(uVar33,uVar15);
  auVar40 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x10))(uVar14,uVar18);
  iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar32 + 0x30) + 0x20))
                     (auVar34._0_8_,auVar34._8_8_,puVar21,lVar24);
  if (iVar11 == 0) goto code_r0x01814a64;
  goto code_r0x01814864;
code_r0x01814af0:
  uVar18 = auVar42._8_8_;
  uVar14 = auVar42._0_8_;
  uVar15 = auVar35._8_8_;
  uVar33 = auVar35._0_8_;
  auStack_290 = auVar34;
  auStack_280 = auVar40;
  uVar13 = (*UNRECOVERED_JUMPTABLE_00)(uVar33,uVar15);
  if ((uVar13 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8);
    lVar25 = lStack_298;
code_r0x01814d18:
                    /* WARNING: Could not recover jumptable at 0x01814d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar34 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar42._0_8_,auVar42._8_8_,puVar26,lVar25,lStack_2a0,puStack_2a8);
    return auVar34;
  }
  puVar28 = (undefined8 *)**(undefined8 **)(lVar7 + 0x30);
  lVar24 = lStack_298;
  iVar11 = (*(code *)*puVar28)(uVar14,uVar18,puVar26);
  if (iVar11 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8);
    puVar26 = puVar27;
    auVar42 = auVar35;
    goto code_r0x01814d18;
  }
  uVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar33,uVar15);
  puVar21 = *(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10);
  uVar17 = (*(code *)*puVar21)(uVar14,uVar18);
  if (lVar6 == 0) {
    auVar34 = func_0x00f78af4();
    lVar5 = lStack_298;
    lVar32 = lStack_2a0;
    auVar45._8_8_ = puStack_2a8;
    auVar45._0_8_ = uStack_2b0;
    auVar44._8_8_ = lVar29;
    auVar44._0_8_ = puVar28;
    lStack_2d8 = lVar6;
    lStack_2c8 = lVar7;
    puStack_2b8 = &Core_Containers_ArrayIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_298 + 0x30);
    lStack_328 = lVar24;
    puStack_320 = puVar23;
    lStack_318 = lVar30;
    puStack_300 = puVar27;
    lStack_2f8 = lVar25;
    uStack_2e0 = uVar16;
    puStack_2d0 = puVar26;
    ppppuStack_2c0 = &pppuStack_240;
    auStack_310 = auVar35;
    auStack_2f0 = auVar42;
    goto code_r0x01814d90;
  }
  iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x18))(lVar6,uVar16,uVar17);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10);
  if (iVar11 == 0) {
    uVar16 = (*UNRECOVERED_JUMPTABLE_00)(uVar14,uVar18);
    uVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar33,uVar15);
    iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x18))(lVar6,uVar16,uVar17);
    if (iVar11 == 0) {
      auVar35 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(uVar33,uVar15);
      auVar43._8_8_ = puStack_2a8;
      auVar43._0_8_ = lStack_2a0;
    }
    else {
      uVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar14,uVar18);
      puVar4 = puStack_2a8;
      (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x20))(lStack_2a0,puStack_2a8,uVar15);
      auVar43 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(lStack_2a0,puVar4);
    }
    puStack_2a8 = auVar43._8_8_;
    lStack_2a0 = auVar43._0_8_;
    auVar42 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(uVar14,uVar18);
    auVar34 = auStack_290;
    auVar40 = auStack_280;
  }
  else {
    uVar18 = (*UNRECOVERED_JUMPTABLE_00)(uVar33,uVar15);
    puVar4 = puStack_2a8;
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x20))(lStack_2a0,puStack_2a8,uVar18);
    auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(lStack_2a0,puVar4);
    puStack_2a8 = auVar34._8_8_;
    lStack_2a0 = auVar34._0_8_;
    auVar35 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(uVar33,uVar15);
    auVar34 = auStack_290;
    auVar40 = auStack_280;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar7 + 0x30);
  goto code_r0x01814af0;
code_r0x01814d90:
  uVar18 = auVar45._8_8_;
  uVar14 = auVar45._0_8_;
  uVar15 = auVar44._8_8_;
  uVar33 = auVar44._0_8_;
  uVar16 = auVar34._8_8_;
  uVar17 = auVar34._0_8_;
  uVar13 = (*UNRECOVERED_JUMPTABLE_00)(uVar17,uVar16);
  if ((uVar13 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8);
    puVar21 = puStack_320;
    lVar24 = lStack_318;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar34 = (*UNRECOVERED_JUMPTABLE_00)(auVar44._0_8_,auVar44._8_8_,puVar21,lVar24,uVar14,uVar18);
    return auVar34;
  }
  puVar28 = (undefined8 *)**(long **)(lVar5 + 0x30);
  lVar24 = lStack_318;
  iVar11 = (*(code *)*puVar28)(uVar33,uVar15,puStack_320);
  if (iVar11 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8);
    lVar24 = lStack_328;
    auVar44 = auVar34;
    goto code_r0x01814fc4;
  }
  uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(uVar17,uVar16);
  puVar26 = *(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10);
  uVar20 = (*(code *)*puVar26)(uVar33,uVar15);
  if (lVar32 == 0) {
    auVar35 = func_0x00f78af4();
    uVar14 = auVar35._8_8_;
    uVar18 = auVar35._0_8_;
    lStack_370 = lVar5;
    lStack_348 = lVar32;
    puStack_338 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
    lVar30 = lVar29;
    puStack_380 = puVar21;
    uStack_378 = uVar33;
    uStack_368 = uVar15;
    uStack_350 = uVar19;
    pppppuStack_340 = &ppppuStack_2c0;
    auStack_360 = auVar45;
    auStack_390 = auVar34;
    auVar34 = (**(code **)**(undefined8 **)(lVar29 + 0x30))();
    if ((auVar34._0_8_ & 1) != 0) {
      return auVar34;
    }
    auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))(uVar18,uVar14);
    puVar21 = *(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x28);
    lVar32 = lVar24;
    iVar11 = (*(code *)*puVar21)(auVar34._0_8_,auVar34._8_8_,puVar26);
    uStack_398 = uVar18;
    if (iVar11 != 0) {
      do {
        uVar16 = auVar34._8_8_;
        uVar33 = auVar34._0_8_;
        uVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x10))(uVar33,uVar16);
        puVar23 = *(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x10);
        uVar15 = (*(code *)*puVar23)(uStack_398,uVar14);
        if (puVar28 == (undefined8 *)0x0) {
          auVar34 = func_0x00f78af4();
          uVar17 = auVar34._8_8_;
          uVar15 = auVar34._0_8_;
          puStack_3a8 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
          lVar25 = lVar30;
          uStack_400 = uVar16;
          uStack_3f8 = uVar33;
          uStack_3e0 = uVar14;
          puStack_3d8 = puVar26;
          lStack_3d0 = lVar29;
          lStack_3c8 = lVar24;
          uStack_3c0 = uVar18;
          puStack_3b8 = puVar28;
          ppppppuStack_3b0 = &pppppuStack_340;
          auStack_3f0 = auVar35;
          auVar35 = (**(code **)**(undefined8 **)(lVar30 + 0x30))();
          if ((auVar35._0_8_ & 1) == 0) {
            auVar35 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 8))(uVar15,uVar17);
            puVar28 = *(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x28);
            lVar24 = lVar32;
            iVar11 = (*(code *)*puVar28)(auVar35._0_8_,auVar35._8_8_,puVar23,lVar32);
            if (iVar11 != 0) {
              do {
                uVar14 = auVar35._8_8_;
                uVar18 = auVar35._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x10))
                          (&uStack_438,uVar18,uVar14);
                puVar26 = *(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x10);
                (*(code *)*puVar26)(&uStack_460,uVar15,uVar17);
                if (puVar21 == (undefined8 *)0x0) {
                  auVar34 = func_0x00f78af4();
                  auVar46._8_8_ = lVar24;
                  auVar46._0_8_ = puVar26;
                  uVar14 = auVar34._8_8_;
                  uVar18 = auVar34._0_8_;
                  auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x18))();
                  iVar11 = auVar34._0_4_;
                  while( true ) {
                    if (iVar11 < 2) break;
                    auVar46 = (**(code **)**(undefined8 **)(lVar25 + 0x30))
                                        (auVar46._0_8_,auVar46._8_8_);
                    uVar15 = auVar46._8_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 8))
                              (uVar18,uVar14,auVar46._0_8_,uVar15);
                    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x10))
                              (uVar18,uVar14,uVar14,uVar15,puVar28);
                    auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x18))
                                        (uVar18,uVar14,auVar46._0_8_,uVar15);
                    iVar11 = auVar34._0_4_;
                  }
                  return auVar34;
                }
                uStack_488 = uStack_430;
                uStack_490 = uStack_438;
                uStack_478 = uStack_420;
                uStack_480 = uStack_428;
                uStack_470 = uStack_418;
                uStack_4b8 = uStack_458;
                uStack_4c0 = uStack_460;
                uStack_4a8 = uStack_448;
                uStack_4b0 = uStack_450;
                uStack_4a0 = uStack_440;
                iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x18))
                                   (puVar21,&uStack_490,&uStack_4c0,
                                    *(undefined8 *)(*(long *)(lVar30 + 0x30) + 0x18));
                if (iVar11 != 0) {
                  auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 8))
                                      (auVar34._0_8_,auVar34._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x20))
                            (auVar34._0_8_,auVar34._8_8_,uVar18,uVar14);
                }
                auVar35 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 8))(uVar18,uVar14);
                puVar28 = *(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x28);
                lVar24 = lVar32;
                uVar13 = (*(code *)*puVar28)(auVar35._0_8_,auVar35._8_8_,puVar23);
              } while ((uVar13 & 1) != 0);
            }
            uVar18 = auVar34._8_8_;
            uVar14 = auVar34._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x20))
                      (uVar15,uVar17,uVar14,uVar18);
            (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x30))
                      (uVar15,uVar17,uVar14,uVar18,puVar21);
            auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 8))(uVar14,uVar18);
            auVar35 = (*(code *)**(undefined8 **)(*(long *)(lVar30 + 0x30) + 0x30))
                                (auVar34._0_8_,auVar34._8_8_,puVar23,lVar32,puVar21);
          }
          return auVar35;
        }
        iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x18))
                           (puVar28,uVar18,uVar15);
        if (iVar11 != 0) {
          auVar35 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))
                              (auVar35._0_8_,auVar35._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x20))
                    (auVar35._0_8_,auVar35._8_8_,uVar33,uVar16);
        }
        auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))(uVar33,uVar16);
        puVar21 = *(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x28);
        lVar32 = lVar24;
        uVar13 = (*(code *)*puVar21)(auVar34._0_8_,auVar34._8_8_,puVar26);
      } while ((uVar13 & 1) != 0);
    }
    uVar18 = uStack_398;
    uVar15 = auVar35._8_8_;
    uVar33 = auVar35._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x20))(uStack_398,uVar14,uVar33,uVar15);
    (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x30))
              (uVar18,uVar14,uVar33,uVar15,puVar28);
    auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))(uVar33,uVar15);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x30))
                        (auVar34._0_8_,auVar34._8_8_,puVar26,lVar24,puVar28);
    return auVar34;
  }
  iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x18))(lVar32,uVar19,uVar20);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10);
  if (iVar11 == 0) {
    uVar19 = (*UNRECOVERED_JUMPTABLE_00)(uVar33,uVar15);
    uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(uVar17,uVar16);
    iVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x18))(lVar32,uVar19,uVar20);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10);
    if (iVar11 == 0) {
      uVar19 = (*UNRECOVERED_JUMPTABLE_00)(uVar17,uVar16);
      (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x20))(uVar14,uVar18,uVar19);
      auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar17,uVar16);
    }
    else {
      uVar16 = (*UNRECOVERED_JUMPTABLE_00)(uVar33,uVar15);
      (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x20))(uVar14,uVar18,uVar16);
    }
    auVar44 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar33,uVar15);
  }
  else {
    uVar15 = (*UNRECOVERED_JUMPTABLE_00)(uVar17,uVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x20))(uVar14,uVar18,uVar15);
    auVar34 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar17,uVar16);
  }
  auVar45 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar14,uVar18);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar5 + 0x30);
  goto code_r0x01814d90;
code_r0x01814764:
  auVar38 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x18))(uVar14,uVar18);
  auVar39 = (*(code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x18))(uVar33,uVar15);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar4 + 0x30) + 0x20);
  goto code_r0x018145d0;
LAB_01814304:
  auVar34 = (*UNRECOVERED_JUMPTABLE_00)(uStack_70,uStack_78);
  puVar26 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
  uVar18 = param_4;
  iVar11 = (*(code *)*puVar26)(auVar34._0_8_,auVar34._8_8_,param_3);
  auVar35._8_8_ = lStack_80;
  auVar35._0_8_ = uStack_88;
  goto joined_r0x01814218;
}



// ============================================================
// RVA: 0x1814370 | Core.Containers.ArrayIteratorExtensions.SearchN<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__SearchN_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
          ,long param_6,undefined8 *param_7,long param_8)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined8 *puStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined1 ******ppppppuStack_320;
  undefined *puStack_318;
  undefined8 uStack_308;
  undefined1 auStack_300 [16];
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined1 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  long lStack_298;
  undefined8 *puStack_290;
  long lStack_288;
  undefined1 auStack_280 [16];
  undefined8 *puStack_270;
  long lStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  undefined1 ****ppppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_180 [16];
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
  lVar24 = param_6;
  puVar19 = param_7;
  lVar22 = param_8;
  iVar9 = (**(code **)**(undefined8 **)(param_8 + 0x30))();
  auVar30 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                      (param_1,param_2,iVar9 - (uint)param_5);
  puVar20 = auVar30._8_8_;
  puVar25 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
  iVar9 = (*(code *)*puVar25)(param_1,param_2,auVar30._0_8_);
  uStack_64 = (uint)param_5;
  do {
    auVar2._8_8_ = param_4;
    auVar2._0_8_ = param_3;
    auVar31 = auVar32;
    if (iVar9 == 0) {
      return auVar2;
    }
    while( true ) {
      puStack_78 = auVar30._8_8_;
      uStack_70 = auVar30._0_8_;
      puVar17 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18);
      uVar10 = (*(code *)*puVar17)(auVar31._0_8_,auVar31._8_8_);
      if (param_7 == (undefined8 *)0x0) {
        auVar30 = func_0x00f78af4();
        lVar27 = auVar30._0_8_;
        puStack_88 = &Core_Containers_ArrayIteratorExtensions__SetCurrent_object_;
        puStack_90 = &stack0xfffffffffffffff0;
        if (lVar27 == 0) {
          func_0x00f78af4();
        }
        else if (auVar30._8_4_ < *(uint *)(lVar27 + 0x18)) {
          *(undefined8 **)(lVar27 + ((auVar30._8_8_ << 0x20) >> 0x1d) + 0x20) = puVar17;
          return auVar30;
        }
        uVar10 = func_0x00f78b24();
        auVar30 = func_0x00f78ac0(uVar10,0);
        lVar27 = auVar30._0_8_;
        puStack_98 = &Core_Containers_ArrayIteratorExtensions__SetCurrent_PlayerRankingPair_;
        if (lVar27 == 0) {
          puStack_a0 = (undefined1 *)&puStack_90;
          func_0x00f78af4();
        }
        else {
          puStack_a0 = (undefined1 *)&puStack_90;
          if (auVar30._8_4_ < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + (long)(int)auVar30._8_4_ * 0x28;
            uVar28 = puVar17[1];
            uVar10 = *puVar17;
            uVar29 = puVar17[3];
            uVar14 = puVar17[2];
            *(undefined8 *)(lVar27 + 0x40) = puVar17[4];
            *(undefined8 *)(lVar27 + 0x28) = uVar28;
            *(undefined8 *)(lVar27 + 0x20) = uVar10;
            *(undefined8 *)(lVar27 + 0x38) = uVar29;
            *(undefined8 *)(lVar27 + 0x30) = uVar14;
            return auVar30;
          }
        }
        uVar10 = func_0x00f78b24();
        auVar30 = func_0x00f78ac0(uVar10,0);
        puVar3 = puStack_88;
        puVar8 = puStack_90;
        auVar33._8_8_ = lVar24;
        auVar33._0_8_ = puVar25;
        puStack_a8 = &Core_Containers_ArrayIteratorExtensions__SetDifference_object_;
        puStack_118 = puStack_98;
        puStack_110 = puStack_a0;
        UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puStack_88 + 0x30) + 0x20);
        uStack_d0 = 0;
        puVar25 = puVar19;
        lStack_108 = lVar22;
        uStack_100 = param_5;
        uStack_f8 = param_4;
        uStack_e0 = param_3;
        lStack_d8 = param_6;
        lStack_c8 = param_8;
        puStack_b0 = (undefined1 *)&puStack_a0;
        auStack_f0 = auVar31;
        auStack_c0 = auVar32;
        goto code_r0x018145d0;
      }
      puVar20 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20);
      uVar11 = (*(code *)*puVar20)(param_7,param_6,uVar10);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10);
      if ((uVar11 & 1) == 0) break;
      auVar31 = (*UNRECOVERED_JUMPTABLE_00)(auVar31._0_8_,auVar31._8_8_);
      auVar30._8_8_ = puStack_78;
      auVar30._0_8_ = uStack_70;
      uVar1 = (int)param_5 - 1;
      param_5 = (ulong)uVar1;
      if (uVar1 == 0) {
        return auVar32;
      }
    }
    auVar32 = (*UNRECOVERED_JUMPTABLE_00)(auVar32._0_8_,auVar32._8_8_);
    puVar25 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
    puVar20 = puStack_78;
    iVar9 = (*(code *)*puVar25)(auVar32._0_8_,auVar32._8_8_,uStack_70);
    auVar30._8_8_ = puStack_78;
    auVar30._0_8_ = uStack_70;
    param_5 = (ulong)uStack_64;
  } while( true );
code_r0x018145d0:
  iVar9 = (*UNRECOVERED_JUMPTABLE_00)(auVar30._0_8_,auVar30._8_8_);
  if (iVar9 == 0) {
code_r0x018147b8:
                    /* WARNING: Could not recover jumptable at 0x018147f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x28))
                        (auVar30._0_8_,auVar30._8_8_,puVar17,puVar20,puStack_110,puStack_118);
    return auVar30;
  }
  do {
    uVar14 = auVar33._8_8_;
    uVar29 = auVar33._0_8_;
    uVar10 = auVar30._8_8_;
    uVar28 = auVar30._0_8_;
    puVar26 = *(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x20);
    lVar27 = lStack_108;
    uVar11 = (*(code *)*puVar26)(uVar29,uVar14,puVar19);
    if ((uVar11 & 1) == 0) goto code_r0x018147b8;
    uVar12 = (**(code **)**(undefined8 **)(puVar3 + 0x30))(uVar28,uVar10);
    puVar18 = (undefined8 *)**(undefined8 **)(puVar3 + 0x30);
    uVar13 = (*(code *)*puVar18)(uVar29,uVar14);
    if (puVar8 == (undefined1 *)0x0) {
      auVar32 = func_0x00f78af4();
      lVar23 = lStack_108;
      puVar7 = puStack_118;
      auVar31._8_8_ = lVar24;
      auVar31._0_8_ = puVar26;
      puStack_168 = puVar3;
      puStack_148 = puVar8;
      puStack_128 = &Core_Containers_ArrayIteratorExtensions__SetIntersection_object_;
      lStack_190 = lStack_120;
      puVar26 = puVar25;
      lStack_188 = lVar22;
      puStack_170 = puVar19;
      uStack_150 = uVar12;
      puStack_140 = puVar17;
      puStack_138 = puVar20;
      ppuStack_130 = &puStack_b0;
      auStack_160 = auVar30;
      auStack_180 = auVar33;
      iVar9 = (*(code *)**(undefined8 **)(*(long *)(lStack_108 + 0x30) + 0x20))();
      puVar8 = puStack_110;
      puStack_198 = puVar7;
      if (iVar9 == 0) goto code_r0x01814a64;
      break;
    }
    iVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 8))(puVar8,uVar12,uVar13);
    if (iVar9 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(puVar3 + 0x30))(uVar29,uVar14);
      uVar13 = (**(code **)**(undefined8 **)(puVar3 + 0x30))(uVar28,uVar10);
      iVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 8))(puVar8,uVar12,uVar13);
      if (iVar9 == 0) goto code_r0x01814764;
      auVar33 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x18))(uVar29,uVar14);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x20);
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(puVar3 + 0x30))(uVar28,uVar10);
      puVar7 = puStack_118;
      (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x10))(puStack_110,puStack_118,uVar14);
      auVar30 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x18))(puStack_110,puVar7);
      puStack_118 = auVar30._8_8_;
      puStack_110 = auVar30._0_8_;
      auVar30 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x18))(uVar28,uVar10);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x20);
    }
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(auVar30._0_8_,auVar30._8_8_,puVar17,puVar20);
    if ((uVar11 & 1) == 0) goto code_r0x018147b8;
  } while( true );
code_r0x01814864:
  uVar10 = auVar31._8_8_;
  uVar28 = auVar31._0_8_;
  uVar14 = auVar32._8_8_;
  uVar29 = auVar32._0_8_;
  puVar20 = *(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x20);
  lVar21 = lStack_188;
  uVar11 = (*(code *)*puVar20)(uVar28,uVar10,puVar25);
  if ((uVar11 & 1) == 0) goto code_r0x01814a64;
  uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x30))(uVar29,uVar14);
  puVar19 = (undefined8 *)**(long **)(lVar23 + 0x30);
  uVar13 = (*(code *)*puVar19)(uVar28,uVar10);
  if (puVar8 == (undefined1 *)0x0) {
    auVar30 = func_0x00f78af4();
    lVar6 = lStack_188;
    lVar5 = lStack_190;
    auVar35._8_8_ = lVar24;
    auVar35._0_8_ = puVar20;
    lStack_1c8 = lVar23;
    puStack_1b8 = puVar8;
    puStack_1a8 = &Core_Containers_ArrayIteratorExtensions__SetSymmetricDifference_object_;
    puStack_218 = puStack_198;
    lStack_210 = lStack_1a0;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_188 + 0x30);
    puVar20 = puVar26;
    lStack_208 = lVar22;
    puStack_1e0 = puVar18;
    lStack_1d8 = lVar27;
    puStack_1d0 = puVar25;
    uStack_1c0 = uVar12;
    pppuStack_1b0 = &ppuStack_130;
    goto code_r0x01814af0;
  }
  iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 8))(puVar8,uVar12,uVar13);
  if (iVar9 != 0) {
    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x10))(uVar29,uVar14);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x20);
code_r0x0181490c:
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(auVar32._0_8_,auVar32._8_8_,puVar18,lVar27);
    if ((uVar11 & 1) == 0) goto code_r0x01814a64;
    goto code_r0x01814864;
  }
  uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x30))(uVar28,uVar10);
  uVar13 = (**(code **)**(undefined8 **)(lVar23 + 0x30))(uVar29,uVar14);
  iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 8))(puVar8,uVar12,uVar13);
  if (iVar9 != 0) {
    auVar31 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x10))(uVar28,uVar10);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x20);
    goto code_r0x0181490c;
  }
  uVar12 = (**(code **)**(undefined8 **)(lVar23 + 0x30))(uVar29,uVar14);
  puVar3 = puStack_198;
  (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x18))(lStack_190,puStack_198,uVar12);
  auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x10))(lStack_190,puVar3);
  puStack_198 = auVar30._8_8_;
  lStack_190 = auVar30._0_8_;
  auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x10))(uVar29,uVar14);
  auVar31 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x10))(uVar28,uVar10);
  iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x20))
                    (auVar32._0_8_,auVar32._8_8_,puVar18,lVar27);
  if (iVar9 == 0) {
code_r0x01814a64:
    auVar34._8_8_ = puStack_198;
    auVar34._0_8_ = lStack_190;
    return auVar34;
  }
  goto code_r0x01814864;
code_r0x01814af0:
  uVar10 = auVar35._8_8_;
  uVar28 = auVar35._0_8_;
  uVar14 = auVar30._8_8_;
  uVar29 = auVar30._0_8_;
  auStack_200 = auVar32;
  auStack_1f0 = auVar31;
  uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar29,uVar14);
  if ((uVar11 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8);
    lVar21 = lStack_208;
code_r0x01814d18:
                    /* WARNING: Could not recover jumptable at 0x01814d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar30 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar35._0_8_,auVar35._8_8_,puVar26,lVar21,lStack_210,puStack_218);
    return auVar30;
  }
  puVar25 = (undefined8 *)**(undefined8 **)(lVar6 + 0x30);
  lVar27 = lStack_208;
  iVar9 = (*(code *)*puVar25)(uVar28,uVar10,puVar26);
  if (iVar9 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8);
    puVar26 = puVar19;
    auVar35 = auVar30;
    goto code_r0x01814d18;
  }
  uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar29,uVar14);
  puVar17 = *(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10);
  uVar13 = (*(code *)*puVar17)(uVar28,uVar10);
  if (lVar5 == 0) {
    auVar32 = func_0x00f78af4();
    lVar4 = lStack_208;
    lVar23 = lStack_210;
    auVar38._8_8_ = puStack_218;
    auVar38._0_8_ = uStack_220;
    auVar37._8_8_ = lVar24;
    auVar37._0_8_ = puVar25;
    lStack_248 = lVar5;
    lStack_238 = lVar6;
    puStack_228 = &Core_Containers_ArrayIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_208 + 0x30);
    lStack_298 = lVar27;
    puStack_290 = puVar20;
    lStack_288 = lVar22;
    puStack_270 = puVar19;
    lStack_268 = lVar21;
    uStack_250 = uVar12;
    puStack_240 = puVar26;
    ppppuStack_230 = &pppuStack_1b0;
    auStack_280 = auVar30;
    auStack_260 = auVar35;
    goto code_r0x01814d90;
  }
  iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x18))(lVar5,uVar12,uVar13);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10);
  if (iVar9 == 0) {
    uVar12 = (*UNRECOVERED_JUMPTABLE_00)(uVar28,uVar10);
    uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar29,uVar14);
    iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x18))(lVar5,uVar12,uVar13);
    if (iVar9 == 0) {
      auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x28))(uVar29,uVar14);
      auVar36._8_8_ = puStack_218;
      auVar36._0_8_ = lStack_210;
    }
    else {
      uVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar28,uVar10);
      puVar3 = puStack_218;
      (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x20))(lStack_210,puStack_218,uVar14);
      auVar36 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x28))(lStack_210,puVar3);
    }
    puStack_218 = auVar36._8_8_;
    lStack_210 = auVar36._0_8_;
    auVar35 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x28))(uVar28,uVar10);
    auVar32 = auStack_200;
    auVar31 = auStack_1f0;
  }
  else {
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar29,uVar14);
    puVar3 = puStack_218;
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x20))(lStack_210,puStack_218,uVar10);
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x28))(lStack_210,puVar3);
    puStack_218 = auVar30._8_8_;
    lStack_210 = auVar30._0_8_;
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x28))(uVar29,uVar14);
    auVar32 = auStack_200;
    auVar31 = auStack_1f0;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar6 + 0x30);
  goto code_r0x01814af0;
code_r0x01814d90:
  uVar10 = auVar38._8_8_;
  uVar28 = auVar38._0_8_;
  uVar14 = auVar37._8_8_;
  uVar29 = auVar37._0_8_;
  uVar12 = auVar32._8_8_;
  uVar13 = auVar32._0_8_;
  uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar13,uVar12);
  if ((uVar11 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8);
    puVar17 = puStack_290;
    lVar24 = lStack_288;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar30 = (*UNRECOVERED_JUMPTABLE_00)(auVar37._0_8_,auVar37._8_8_,puVar17,lVar24,uVar28,uVar10);
    return auVar30;
  }
  puVar20 = (undefined8 *)**(long **)(lVar4 + 0x30);
  lVar22 = lStack_288;
  iVar9 = (*(code *)*puVar20)(uVar29,uVar14,puStack_290);
  if (iVar9 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8);
    lVar24 = lStack_298;
    auVar37 = auVar32;
    goto code_r0x01814fc4;
  }
  uVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10))(uVar13,uVar12);
  puVar25 = *(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10);
  uVar16 = (*(code *)*puVar25)(uVar29,uVar14);
  if (lVar23 == 0) {
    auVar30 = func_0x00f78af4();
    uVar28 = auVar30._8_8_;
    uVar10 = auVar30._0_8_;
    lStack_2e0 = lVar4;
    lStack_2b8 = lVar23;
    puStack_2a8 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
    lVar27 = lVar24;
    puStack_2f0 = puVar17;
    uStack_2e8 = uVar29;
    uStack_2d8 = uVar14;
    uStack_2c0 = uVar15;
    pppppuStack_2b0 = &ppppuStack_230;
    auStack_2d0 = auVar38;
    auStack_300 = auVar32;
    auVar32 = (**(code **)**(undefined8 **)(lVar24 + 0x30))();
    if ((auVar32._0_8_ & 1) != 0) {
      return auVar32;
    }
    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 8))(uVar10,uVar28);
    puVar19 = *(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x28);
    lVar23 = lVar22;
    iVar9 = (*(code *)*puVar19)(auVar32._0_8_,auVar32._8_8_,puVar25);
    uStack_308 = uVar10;
    if (iVar9 != 0) {
      do {
        uVar12 = auVar32._8_8_;
        uVar29 = auVar32._0_8_;
        uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x10))(uVar29,uVar12);
        puVar17 = *(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x10);
        uVar14 = (*(code *)*puVar17)(uStack_308,uVar28);
        if (puVar20 == (undefined8 *)0x0) {
          auVar32 = func_0x00f78af4();
          uVar13 = auVar32._8_8_;
          uVar14 = auVar32._0_8_;
          puStack_318 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
          lVar21 = lVar27;
          uStack_370 = uVar12;
          uStack_368 = uVar29;
          uStack_350 = uVar28;
          puStack_348 = puVar25;
          lStack_340 = lVar24;
          lStack_338 = lVar22;
          uStack_330 = uVar10;
          puStack_328 = puVar20;
          ppppppuStack_320 = &pppppuStack_2b0;
          auStack_360 = auVar30;
          auVar30 = (**(code **)**(undefined8 **)(lVar27 + 0x30))();
          if ((auVar30._0_8_ & 1) == 0) {
            auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 8))(uVar14,uVar13);
            puVar20 = *(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x28);
            lVar24 = lVar23;
            iVar9 = (*(code *)*puVar20)(auVar30._0_8_,auVar30._8_8_,puVar17,lVar23);
            if (iVar9 != 0) {
              do {
                uVar28 = auVar30._8_8_;
                uVar10 = auVar30._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x10))
                          (&uStack_3a8,uVar10,uVar28);
                puVar25 = *(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x10);
                (*(code *)*puVar25)(&uStack_3d0,uVar14,uVar13);
                if (puVar19 == (undefined8 *)0x0) {
                  auVar30 = func_0x00f78af4();
                  auVar39._8_8_ = lVar24;
                  auVar39._0_8_ = puVar25;
                  uVar28 = auVar30._8_8_;
                  uVar10 = auVar30._0_8_;
                  auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))();
                  iVar9 = auVar30._0_4_;
                  while( true ) {
                    if (iVar9 < 2) break;
                    auVar39 = (**(code **)**(undefined8 **)(lVar21 + 0x30))
                                        (auVar39._0_8_,auVar39._8_8_);
                    uVar14 = auVar39._8_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
                              (uVar10,uVar28,auVar39._0_8_,uVar14);
                    (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))
                              (uVar10,uVar28,uVar28,uVar14,puVar20);
                    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))
                                        (uVar10,uVar28,auVar39._0_8_,uVar14);
                    iVar9 = auVar30._0_4_;
                  }
                  return auVar30;
                }
                uStack_3f8 = uStack_3a0;
                uStack_400 = uStack_3a8;
                uStack_3e8 = uStack_390;
                uStack_3f0 = uStack_398;
                uStack_3e0 = uStack_388;
                uStack_428 = uStack_3c8;
                uStack_430 = uStack_3d0;
                uStack_418 = uStack_3b8;
                uStack_420 = uStack_3c0;
                uStack_410 = uStack_3b0;
                iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x18))
                                  (puVar19,&uStack_400,&uStack_430,
                                   *(undefined8 *)(*(long *)(lVar27 + 0x30) + 0x18));
                if (iVar9 != 0) {
                  auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 8))
                                      (auVar32._0_8_,auVar32._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x20))
                            (auVar32._0_8_,auVar32._8_8_,uVar10,uVar28);
                }
                auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 8))(uVar10,uVar28);
                puVar20 = *(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x28);
                lVar24 = lVar23;
                uVar11 = (*(code *)*puVar20)(auVar30._0_8_,auVar30._8_8_,puVar17);
              } while ((uVar11 & 1) != 0);
            }
            uVar10 = auVar32._8_8_;
            uVar28 = auVar32._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x20))
                      (uVar14,uVar13,uVar28,uVar10);
            (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x30))
                      (uVar14,uVar13,uVar28,uVar10,puVar19);
            auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 8))(uVar28,uVar10);
            auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x30))
                                (auVar30._0_8_,auVar30._8_8_,puVar17,lVar23,puVar19);
          }
          return auVar30;
        }
        iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x18))(puVar20,uVar10,uVar14)
        ;
        if (iVar9 != 0) {
          auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 8))
                              (auVar30._0_8_,auVar30._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x20))
                    (auVar30._0_8_,auVar30._8_8_,uVar29,uVar12);
        }
        auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 8))(uVar29,uVar12);
        puVar19 = *(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x28);
        lVar23 = lVar22;
        uVar11 = (*(code *)*puVar19)(auVar32._0_8_,auVar32._8_8_,puVar25);
      } while ((uVar11 & 1) != 0);
    }
    uVar10 = uStack_308;
    uVar14 = auVar30._8_8_;
    uVar29 = auVar30._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x20))(uStack_308,uVar28,uVar29,uVar14);
    (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x30))
              (uVar10,uVar28,uVar29,uVar14,puVar20);
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 8))(uVar29,uVar14);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar24 + 0x30) + 0x30))
                        (auVar30._0_8_,auVar30._8_8_,puVar25,lVar22,puVar20);
    return auVar30;
  }
  iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x18))(lVar23,uVar15,uVar16);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10);
  if (iVar9 == 0) {
    uVar15 = (*UNRECOVERED_JUMPTABLE_00)(uVar29,uVar14);
    uVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10))(uVar13,uVar12);
    iVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x18))(lVar23,uVar15,uVar16);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10);
    if (iVar9 == 0) {
      uVar15 = (*UNRECOVERED_JUMPTABLE_00)(uVar13,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x20))(uVar28,uVar10,uVar15);
      auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x28))(uVar13,uVar12);
    }
    else {
      uVar12 = (*UNRECOVERED_JUMPTABLE_00)(uVar29,uVar14);
      (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x20))(uVar28,uVar10,uVar12);
    }
    auVar37 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x28))(uVar29,uVar14);
  }
  else {
    uVar14 = (*UNRECOVERED_JUMPTABLE_00)(uVar13,uVar12);
    (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x20))(uVar28,uVar10,uVar14);
    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x28))(uVar13,uVar12);
  }
  auVar38 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x28))(uVar28,uVar10);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar4 + 0x30);
  goto code_r0x01814d90;
code_r0x01814764:
  auVar30 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x18))(uVar28,uVar10);
  auVar33 = (*(code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x18))(uVar29,uVar14);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(puVar3 + 0x30) + 0x20);
  goto code_r0x018145d0;
}



// ============================================================
// RVA: 0x18144ec | Core.Containers.ArrayIteratorExtensions.SetCurrent<object>
// ============================================================

ulong Core_Containers_ArrayIteratorExtensions__SetCurrent_object_
                (ulong param_1,uint param_2,undefined8 *param_3,undefined8 param_4,
                undefined8 param_5,long param_6,undefined8 *param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *UNRECOVERED_JUMPTABLE_00;
  long unaff_x29;
  long unaff_x30;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [16];
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 ******ppppppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined8 *puStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  long lStack_238;
  undefined1 *****pppppuStack_230;
  undefined *puStack_228;
  long lStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  undefined1 auStack_200 [16];
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined1 ****ppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined8 *puStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined1 auStack_100 [16];
  undefined8 *puStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(param_1 + 0x18)) {
    *(undefined8 **)(param_1 + ((long)((ulong)param_2 << 0x20) >> 0x1d) + 0x20) = param_3;
    return param_1;
  }
  uVar5 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar5,0);
  uVar6 = auVar31._0_8_;
  puStack_18 = &Core_Containers_ArrayIteratorExtensions__SetCurrent_PlayerRankingPair_;
  if (uVar6 == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78af4();
  }
  else {
    puStack_20 = &stack0xfffffffffffffff0;
    if (auVar31._8_4_ < *(uint *)(uVar6 + 0x18)) {
      lVar21 = uVar6 + (long)(int)auVar31._8_4_ * 0x28;
      uVar22 = param_3[1];
      uVar5 = *param_3;
      uVar23 = param_3[3];
      uVar9 = param_3[2];
      *(undefined8 *)(lVar21 + 0x40) = param_3[4];
      *(undefined8 *)(lVar21 + 0x28) = uVar22;
      *(undefined8 *)(lVar21 + 0x20) = uVar5;
      *(undefined8 *)(lVar21 + 0x38) = uVar23;
      *(undefined8 *)(lVar21 + 0x30) = uVar9;
      return uVar6;
    }
  }
  uVar5 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar5,0);
  auVar25._8_8_ = param_6;
  auVar25._0_8_ = param_5;
  puStack_28 = &Core_Containers_ArrayIteratorExtensions__SetDifference_object_;
  puStack_98 = puStack_18;
  puStack_90 = puStack_20;
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x20);
  puVar18 = param_7;
  lStack_88 = param_8;
  puStack_30 = (undefined1 *)&puStack_20;
code_r0x018145d0:
  iVar4 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_);
  if (iVar4 == 0) {
code_r0x018147b8:
                    /* WARNING: Could not recover jumptable at 0x018147f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x28))
                      (auVar24._0_8_,auVar24._8_8_,param_3,param_4,puStack_90,puStack_98);
    return uVar6;
  }
  do {
    uVar9 = auVar25._8_8_;
    uVar23 = auVar25._0_8_;
    uVar5 = auVar24._8_8_;
    uVar22 = auVar24._0_8_;
    puVar16 = *(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x20);
    lVar21 = lStack_88;
    uVar6 = (*(code *)*puVar16)(uVar23,uVar9,param_7);
    if ((uVar6 & 1) == 0) goto code_r0x018147b8;
    uVar7 = (**(code **)**(undefined8 **)(unaff_x30 + 0x30))(uVar22,uVar5);
    puVar13 = (undefined8 *)**(undefined8 **)(unaff_x30 + 0x30);
    uVar8 = (*(code *)*puVar13)(uVar23,uVar9);
    if (unaff_x29 == 0) {
      auVar26 = func_0x00f78af4();
      lVar19 = lStack_88;
      puVar1 = puStack_98;
      auVar27._8_8_ = param_6;
      auVar27._0_8_ = puVar16;
      puStack_a8 = &Core_Containers_ArrayIteratorExtensions__SetIntersection_object_;
      uStack_110 = uStack_a0;
      puVar16 = puVar18;
      lStack_108 = param_8;
      puStack_f0 = param_7;
      uStack_d0 = uVar7;
      puStack_c0 = param_3;
      uStack_b8 = param_4;
      ppuStack_b0 = &puStack_30;
      auStack_e0 = auVar24;
      auStack_100 = auVar25;
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(lStack_88 + 0x30) + 0x20))();
      puVar3 = puStack_90;
      if (iVar4 == 0) {
        return uStack_110;
      }
      puStack_118 = puVar1;
      break;
    }
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 8))(unaff_x29,uVar7,uVar8);
    if (iVar4 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(unaff_x30 + 0x30))(uVar23,uVar9);
      uVar8 = (**(code **)**(undefined8 **)(unaff_x30 + 0x30))(uVar22,uVar5);
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 8))(unaff_x29,uVar7,uVar8);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x18);
      if (iVar4 == 0) goto code_r0x01814764;
      auVar25 = (*UNRECOVERED_JUMPTABLE_00)(uVar23,uVar9);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(unaff_x30 + 0x30))(uVar22,uVar5);
      puVar1 = puStack_98;
      (*(code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x10))(puStack_90,puStack_98,uVar9);
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x18))(puStack_90,puVar1);
      puStack_98 = auVar24._8_8_;
      puStack_90 = auVar24._0_8_;
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x18))(uVar22,uVar5);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x20);
    }
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,param_3,param_4);
    if ((uVar6 & 1) == 0) goto code_r0x018147b8;
  } while( true );
code_r0x01814864:
  uVar5 = auVar27._8_8_;
  uVar22 = auVar27._0_8_;
  uVar9 = auVar26._8_8_;
  uVar23 = auVar26._0_8_;
  puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20);
  lVar15 = lStack_108;
  uVar6 = (*(code *)*puVar17)(uVar22,uVar5,puVar18);
  if ((uVar6 & 1) == 0) {
    return uStack_110;
  }
  uVar7 = (**(code **)**(undefined8 **)(lVar19 + 0x30))(uVar23,uVar9);
  puVar14 = (undefined8 *)**(undefined8 **)(lVar19 + 0x30);
  uVar8 = (*(code *)*puVar14)(uVar22,uVar5);
  if (puVar3 == (undefined1 *)0x0) {
    auVar24 = func_0x00f78af4();
    lVar20 = lStack_108;
    uVar6 = uStack_110;
    auVar28._8_8_ = param_6;
    auVar28._0_8_ = puVar17;
    lStack_148 = lVar19;
    puStack_138 = puVar3;
    puStack_128 = &Core_Containers_ArrayIteratorExtensions__SetSymmetricDifference_object_;
    puStack_198 = puStack_118;
    lStack_190 = lStack_120;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_108 + 0x30);
    puVar17 = puVar16;
    lStack_188 = param_8;
    puStack_160 = puVar13;
    lStack_158 = lVar21;
    puStack_150 = puVar18;
    uStack_140 = uVar7;
    pppuStack_130 = &ppuStack_b0;
    goto code_r0x01814af0;
  }
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(puVar3,uVar7,uVar8);
  if (iVar4 == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar19 + 0x30))(uVar22,uVar5);
    uVar8 = (**(code **)**(undefined8 **)(lVar19 + 0x30))(uVar23,uVar9);
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(puVar3,uVar7,uVar8);
    if (iVar4 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar19 + 0x30))(uVar23,uVar9);
      puVar1 = puStack_118;
      (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18))(uStack_110,puStack_118,uVar7);
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))(uStack_110,puVar1);
      puStack_118 = auVar24._8_8_;
      uStack_110 = auVar24._0_8_;
      auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))(uVar23,uVar9);
      auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))(uVar22,uVar5);
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20))
                        (auVar26._0_8_,auVar26._8_8_,puVar13,lVar21);
      if (iVar4 == 0) {
        return uStack_110;
      }
      goto code_r0x01814864;
    }
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))(uVar22,uVar5);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20);
  }
  else {
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))(uVar23,uVar9);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20);
  }
  uVar6 = (*UNRECOVERED_JUMPTABLE_00)(auVar26._0_8_,auVar26._8_8_,puVar13,lVar21);
  if ((uVar6 & 1) == 0) {
    return uStack_110;
  }
  goto code_r0x01814864;
code_r0x01814af0:
  uVar5 = auVar28._8_8_;
  uVar22 = auVar28._0_8_;
  uVar9 = auVar24._8_8_;
  uVar23 = auVar24._0_8_;
  auStack_180 = auVar26;
  auStack_170 = auVar27;
  uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar23,uVar9);
  if ((uVar10 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8);
    lVar15 = lStack_188;
code_r0x01814d18:
                    /* WARNING: Could not recover jumptable at 0x01814d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)
                      (auVar28._0_8_,auVar28._8_8_,puVar16,lVar15,lStack_190,puStack_198);
    return uVar6;
  }
  puVar18 = (undefined8 *)**(undefined8 **)(lVar20 + 0x30);
  lVar21 = lStack_188;
  iVar4 = (*(code *)*puVar18)(uVar22,uVar5,puVar16);
  if (iVar4 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8);
    puVar16 = puVar14;
    auVar28 = auVar24;
    goto code_r0x01814d18;
  }
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar23,uVar9);
  puVar13 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10);
  uVar8 = (*(code *)*puVar13)(uVar22,uVar5);
  if (uVar6 == 0) {
    auVar25 = func_0x00f78af4();
    lVar2 = lStack_188;
    lVar19 = lStack_190;
    auVar30._8_8_ = puStack_198;
    auVar30._0_8_ = uStack_1a0;
    auVar26._8_8_ = param_6;
    auVar26._0_8_ = puVar18;
    uStack_1c8 = uVar6;
    lStack_1b8 = lVar20;
    puStack_1a8 = &Core_Containers_ArrayIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_188 + 0x30);
    lStack_218 = lVar21;
    puStack_210 = puVar17;
    lStack_208 = param_8;
    puStack_1f0 = puVar14;
    lStack_1e8 = lVar15;
    uStack_1d0 = uVar7;
    puStack_1c0 = puVar16;
    ppppuStack_1b0 = &pppuStack_130;
    auStack_200 = auVar24;
    auStack_1e0 = auVar28;
    goto code_r0x01814d90;
  }
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))(uVar6,uVar7,uVar8);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10);
  if (iVar4 == 0) {
    uVar7 = (*UNRECOVERED_JUMPTABLE_00)(uVar22,uVar5);
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar23,uVar9);
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))(uVar6,uVar7,uVar8);
    if (iVar4 == 0) {
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(uVar23,uVar9);
      auVar29._8_8_ = puStack_198;
      auVar29._0_8_ = lStack_190;
    }
    else {
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar22,uVar5);
      puVar1 = puStack_198;
      (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))(lStack_190,puStack_198,uVar9);
      auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(lStack_190,puVar1);
    }
    puStack_198 = auVar29._8_8_;
    lStack_190 = auVar29._0_8_;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(uVar22,uVar5);
    auVar26 = auStack_180;
    auVar27 = auStack_170;
  }
  else {
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar23,uVar9);
    puVar1 = puStack_198;
    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))(lStack_190,puStack_198,uVar5);
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(lStack_190,puVar1);
    puStack_198 = auVar24._8_8_;
    lStack_190 = auVar24._0_8_;
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(uVar23,uVar9);
    auVar26 = auStack_180;
    auVar27 = auStack_170;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar20 + 0x30);
  goto code_r0x01814af0;
code_r0x01814d90:
  uVar5 = auVar30._8_8_;
  uVar22 = auVar30._0_8_;
  uVar9 = auVar26._8_8_;
  uVar23 = auVar26._0_8_;
  uVar7 = auVar25._8_8_;
  uVar8 = auVar25._0_8_;
  uVar6 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar7);
  if ((uVar6 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    puVar13 = puStack_210;
    lVar21 = lStack_208;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(auVar26._0_8_,auVar26._8_8_,puVar13,lVar21,uVar22,uVar5);
    return uVar6;
  }
  puVar18 = (undefined8 *)**(long **)(lVar2 + 0x30);
  lVar21 = lStack_208;
  iVar4 = (*(code *)*puVar18)(uVar23,uVar9,puStack_210);
  if (iVar4 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    lVar21 = lStack_218;
    auVar26 = auVar25;
    goto code_r0x01814fc4;
  }
  uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar8,uVar7);
  puVar16 = *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  uVar12 = (*(code *)*puVar16)(uVar23,uVar9);
  if (lVar19 == 0) {
    auVar24 = func_0x00f78af4();
    uVar22 = auVar24._8_8_;
    uVar5 = auVar24._0_8_;
    lStack_260 = lVar2;
    lStack_238 = lVar19;
    puStack_228 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
    lVar19 = param_6;
    puStack_270 = puVar13;
    uStack_268 = uVar23;
    uStack_258 = uVar9;
    uStack_240 = uVar11;
    pppppuStack_230 = &ppppuStack_1b0;
    auStack_250 = auVar30;
    auStack_280 = auVar25;
    uVar6 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar5,uVar22);
    puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    lVar15 = lVar21;
    iVar4 = (*(code *)*puVar13)(auVar25._0_8_,auVar25._8_8_,puVar16);
    uStack_288 = uVar5;
    if (iVar4 != 0) {
      do {
        uVar7 = auVar25._8_8_;
        uVar23 = auVar25._0_8_;
        uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar23,uVar7);
        puVar17 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar9 = (*(code *)*puVar17)(uStack_288,uVar22);
        if (puVar18 == (undefined8 *)0x0) {
          auVar25 = func_0x00f78af4();
          uVar8 = auVar25._8_8_;
          uVar9 = auVar25._0_8_;
          puStack_298 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
          lVar20 = lVar19;
          uStack_2f0 = uVar7;
          uStack_2e8 = uVar23;
          uStack_2d0 = uVar22;
          puStack_2c8 = puVar16;
          lStack_2c0 = param_6;
          lStack_2b8 = lVar21;
          uStack_2b0 = uVar5;
          puStack_2a8 = puVar18;
          ppppppuStack_2a0 = &pppppuStack_230;
          auStack_2e0 = auVar24;
          uVar6 = (**(code **)**(undefined8 **)(lVar19 + 0x30))();
          if ((uVar6 & 1) == 0) {
            auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar9,uVar8);
            puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x28);
            lVar21 = lVar15;
            iVar4 = (*(code *)*puVar18)(auVar24._0_8_,auVar24._8_8_,puVar17,lVar15);
            if (iVar4 != 0) {
              do {
                uVar22 = auVar24._8_8_;
                uVar5 = auVar24._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))
                          (&uStack_328,uVar5,uVar22);
                puVar16 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10);
                (*(code *)*puVar16)(&uStack_350,uVar9,uVar8);
                if (puVar13 == (undefined8 *)0x0) {
                  auVar25 = func_0x00f78af4();
                  auVar24._8_8_ = lVar21;
                  auVar24._0_8_ = puVar16;
                  uVar22 = auVar25._8_8_;
                  uVar5 = auVar25._0_8_;
                  uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))();
                  iVar4 = (int)uVar6;
                  while( true ) {
                    if (iVar4 < 2) break;
                    auVar24 = (**(code **)**(undefined8 **)(lVar20 + 0x30))
                                        (auVar24._0_8_,auVar24._8_8_);
                    uVar9 = auVar24._8_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                              (uVar5,uVar22,auVar24._0_8_,uVar9);
                    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))
                              (uVar5,uVar22,uVar22,uVar9,puVar18);
                    uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))
                                      (uVar5,uVar22,auVar24._0_8_,uVar9);
                    iVar4 = (int)uVar6;
                  }
                  return uVar6;
                }
                uStack_378 = uStack_320;
                uStack_380 = uStack_328;
                uStack_368 = uStack_310;
                uStack_370 = uStack_318;
                uStack_360 = uStack_308;
                uStack_3a8 = uStack_348;
                uStack_3b0 = uStack_350;
                uStack_398 = uStack_338;
                uStack_3a0 = uStack_340;
                uStack_390 = uStack_330;
                iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18))
                                  (puVar13,&uStack_380,&uStack_3b0,
                                   *(undefined8 *)(*(long *)(lVar19 + 0x30) + 0x18));
                if (iVar4 != 0) {
                  auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))
                                      (auVar25._0_8_,auVar25._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20))
                            (auVar25._0_8_,auVar25._8_8_,uVar5,uVar22);
                }
                auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar5,uVar22);
                puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x28);
                lVar21 = lVar15;
                uVar6 = (*(code *)*puVar18)(auVar24._0_8_,auVar24._8_8_,puVar17);
              } while ((uVar6 & 1) != 0);
            }
            uVar5 = auVar25._8_8_;
            uVar22 = auVar25._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20))(uVar9,uVar8,uVar22,uVar5);
            (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x30))
                      (uVar9,uVar8,uVar22,uVar5,puVar13);
            auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar22,uVar5);
            uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x30))
                              (auVar24._0_8_,auVar24._8_8_,puVar17,lVar15,puVar13);
          }
          return uVar6;
        }
        iVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(puVar18,uVar5,uVar9);
        if (iVar4 != 0) {
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar24._0_8_,auVar24._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar24._0_8_,auVar24._8_8_,uVar23,uVar7);
        }
        auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar23,uVar7);
        puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        lVar15 = lVar21;
        uVar6 = (*(code *)*puVar13)(auVar25._0_8_,auVar25._8_8_,puVar16);
      } while ((uVar6 & 1) != 0);
    }
    uVar5 = uStack_288;
    uVar9 = auVar24._8_8_;
    uVar23 = auVar24._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uStack_288,uVar22,uVar23,uVar9);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (uVar5,uVar22,uVar23,uVar9,puVar18);
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar23,uVar9);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                      (auVar24._0_8_,auVar24._8_8_,puVar16,lVar21,puVar18);
    return uVar6;
  }
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar19,uVar11,uVar12);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  if (iVar4 == 0) {
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar23,uVar9);
    uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar8,uVar7);
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar19,uVar11,uVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
    if (iVar4 == 0) {
      uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar7);
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(uVar22,uVar5,uVar11);
      auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar7);
    }
    else {
      uVar7 = (*UNRECOVERED_JUMPTABLE_00)(uVar23,uVar9);
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(uVar22,uVar5,uVar7);
    }
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar23,uVar9);
  }
  else {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(uVar22,uVar5,uVar9);
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar7);
  }
  auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar22,uVar5);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar2 + 0x30);
  goto code_r0x01814d90;
code_r0x01814764:
  auVar24 = (*UNRECOVERED_JUMPTABLE_00)(uVar22,uVar5);
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x18))(uVar23,uVar9);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x30 + 0x30) + 0x20);
  goto code_r0x018145d0;
}



// ============================================================
// RVA: 0x1814528 | Core.Containers.ArrayIteratorExtensions.SetCurrent<PlayerRankingPair>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__SetCurrent_PlayerRankingPair_
          (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5
          ,long param_6,undefined8 *param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  code *UNRECOVERED_JUMPTABLE_00;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_278;
  undefined1 auStack_270 [16];
  undefined8 *puStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  long lStack_228;
  undefined8 ***pppuStack_220;
  undefined *puStack_218;
  long lStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 == 0) {
    func_0x00f78af4();
  }
  else if ((uint)param_2 < *(uint *)(param_1 + 0x18)) {
    lVar21 = param_1 + (long)(int)(uint)param_2 * 0x28;
    uVar9 = param_3[1];
    uVar4 = *param_3;
    uVar8 = param_3[3];
    uVar12 = param_3[2];
    *(undefined8 *)(lVar21 + 0x40) = param_3[4];
    *(undefined8 *)(lVar21 + 0x28) = uVar9;
    *(undefined8 *)(lVar21 + 0x20) = uVar4;
    *(undefined8 *)(lVar21 + 0x38) = uVar8;
    *(undefined8 *)(lVar21 + 0x30) = uVar12;
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = param_1;
    return auVar22;
  }
  uVar4 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar4,0);
  auVar23._8_8_ = param_6;
  auVar23._0_8_ = param_5;
  puStack_18 = &Core_Containers_ArrayIteratorExtensions__SetDifference_object_;
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
  puVar19 = param_7;
  uStack_88 = unaff_x30;
  lStack_80 = unaff_x29;
  lStack_78 = param_8;
  puStack_20 = &stack0xfffffffffffffff0;
code_r0x018145d0:
  iVar3 = (*UNRECOVERED_JUMPTABLE_00)(auVar22._0_8_,auVar22._8_8_);
  if (iVar3 == 0) {
code_r0x018147b8:
                    /* WARNING: Could not recover jumptable at 0x018147f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x28))
                        (auVar22._0_8_,auVar22._8_8_,param_3,param_4,lStack_80,uStack_88);
    return auVar22;
  }
  do {
    uVar12 = auVar23._8_8_;
    uVar8 = auVar23._0_8_;
    uVar4 = auVar22._8_8_;
    uVar9 = auVar22._0_8_;
    puVar17 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
    lVar21 = lStack_78;
    uVar5 = (*(code *)*puVar17)(uVar8,uVar12,param_7);
    if ((uVar5 & 1) == 0) goto code_r0x018147b8;
    uVar6 = (**(code **)**(undefined8 **)(param_10 + 0x30))(uVar9,uVar4);
    puVar13 = (undefined8 *)**(undefined8 **)(param_10 + 0x30);
    uVar7 = (*(code *)*puVar13)(uVar8,uVar12);
    if (param_9 == 0) {
      auVar24 = func_0x00f78af4();
      lVar16 = lStack_78;
      uVar4 = uStack_88;
      auVar25._8_8_ = param_6;
      auVar25._0_8_ = puVar17;
      lStack_d8 = param_10;
      lStack_b8 = param_9;
      puStack_98 = &Core_Containers_ArrayIteratorExtensions__SetIntersection_object_;
      lStack_100 = lStack_90;
      puVar17 = puVar19;
      lStack_f8 = param_8;
      puStack_e0 = param_7;
      uStack_c0 = uVar6;
      puStack_b0 = param_3;
      uStack_a8 = param_4;
      ppuStack_a0 = &puStack_20;
      auStack_d0 = auVar22;
      auStack_f0 = auVar23;
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(lStack_78 + 0x30) + 0x20))();
      lVar20 = lStack_80;
      uStack_108 = uVar4;
      if (iVar3 == 0) goto code_r0x01814a64;
      break;
    }
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(param_9,uVar6,uVar7);
    if (iVar3 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(param_10 + 0x30))(uVar8,uVar12);
      uVar7 = (**(code **)**(undefined8 **)(param_10 + 0x30))(uVar9,uVar4);
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(param_9,uVar6,uVar7);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18);
      if (iVar3 == 0) goto code_r0x01814764;
      auVar23 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar12);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(param_10 + 0x30))(uVar9,uVar4);
      uVar12 = uStack_88;
      (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))(lStack_80,uStack_88,uVar8);
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(lStack_80,uVar12);
      uStack_88 = auVar22._8_8_;
      lStack_80 = auVar22._0_8_;
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(uVar9,uVar4);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
    }
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(auVar22._0_8_,auVar22._8_8_,param_3,param_4);
    if ((uVar5 & 1) == 0) goto code_r0x018147b8;
  } while( true );
code_r0x01814864:
  uVar4 = auVar25._8_8_;
  uVar9 = auVar25._0_8_;
  uVar12 = auVar24._8_8_;
  uVar8 = auVar24._0_8_;
  puVar18 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20);
  lVar15 = lStack_f8;
  uVar5 = (*(code *)*puVar18)(uVar9,uVar4,puVar19);
  if ((uVar5 & 1) == 0) goto code_r0x01814a64;
  uVar6 = (**(code **)**(undefined8 **)(lVar16 + 0x30))(uVar8,uVar12);
  puVar14 = (undefined8 *)**(undefined8 **)(lVar16 + 0x30);
  uVar7 = (*(code *)*puVar14)(uVar9,uVar4);
  if (lVar20 == 0) {
    auVar22 = func_0x00f78af4();
    lVar2 = lStack_f8;
    lVar1 = lStack_100;
    auVar27._8_8_ = param_6;
    auVar27._0_8_ = puVar18;
    lStack_138 = lVar16;
    lStack_128 = lVar20;
    puStack_118 = &Core_Containers_ArrayIteratorExtensions__SetSymmetricDifference_object_;
    uStack_188 = uStack_108;
    lStack_180 = lStack_110;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_f8 + 0x30);
    puVar18 = puVar17;
    lStack_178 = param_8;
    puStack_150 = puVar13;
    lStack_148 = lVar21;
    puStack_140 = puVar19;
    uStack_130 = uVar6;
    pppuStack_120 = &ppuStack_a0;
    goto code_r0x01814af0;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(lVar20,uVar6,uVar7);
  if (iVar3 != 0) {
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(uVar8,uVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20);
code_r0x0181490c:
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,puVar13,lVar21);
    if ((uVar5 & 1) == 0) goto code_r0x01814a64;
    goto code_r0x01814864;
  }
  uVar6 = (**(code **)**(undefined8 **)(lVar16 + 0x30))(uVar9,uVar4);
  uVar7 = (**(code **)**(undefined8 **)(lVar16 + 0x30))(uVar8,uVar12);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(lVar20,uVar6,uVar7);
  if (iVar3 != 0) {
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(uVar9,uVar4);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20);
    goto code_r0x0181490c;
  }
  uVar7 = (**(code **)**(undefined8 **)(lVar16 + 0x30))(uVar8,uVar12);
  uVar6 = uStack_108;
  (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))(lStack_100,uStack_108,uVar7);
  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(lStack_100,uVar6);
  uStack_108 = auVar22._8_8_;
  lStack_100 = auVar22._0_8_;
  auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(uVar8,uVar12);
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(uVar9,uVar4);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20))
                    (auVar24._0_8_,auVar24._8_8_,puVar13,lVar21);
  if (iVar3 == 0) {
code_r0x01814a64:
    auVar26._8_8_ = uStack_108;
    auVar26._0_8_ = lStack_100;
    return auVar26;
  }
  goto code_r0x01814864;
code_r0x01814af0:
  uVar4 = auVar27._8_8_;
  uVar9 = auVar27._0_8_;
  uVar12 = auVar22._8_8_;
  uVar8 = auVar22._0_8_;
  auStack_170 = auVar24;
  auStack_160 = auVar25;
  uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar12);
  if ((uVar5 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    lVar15 = lStack_178;
code_r0x01814d18:
                    /* WARNING: Could not recover jumptable at 0x01814d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar27._0_8_,auVar27._8_8_,puVar17,lVar15,lStack_180,uStack_188);
    return auVar22;
  }
  puVar19 = (undefined8 *)**(undefined8 **)(lVar2 + 0x30);
  lVar21 = lStack_178;
  iVar3 = (*(code *)*puVar19)(uVar9,uVar4,puVar17);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    puVar17 = puVar14;
    auVar27 = auVar22;
    goto code_r0x01814d18;
  }
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar8,uVar12);
  puVar13 = *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  uVar7 = (*(code *)*puVar13)(uVar9,uVar4);
  if (lVar1 == 0) {
    auVar23 = func_0x00f78af4();
    lVar16 = lStack_178;
    lVar20 = lStack_180;
    auVar29._8_8_ = uStack_188;
    auVar29._0_8_ = uStack_190;
    auVar24._8_8_ = param_6;
    auVar24._0_8_ = puVar19;
    lStack_1b8 = lVar1;
    lStack_1a8 = lVar2;
    puStack_198 = &Core_Containers_ArrayIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_178 + 0x30);
    lStack_208 = lVar21;
    puStack_200 = puVar18;
    lStack_1f8 = param_8;
    puStack_1e0 = puVar14;
    lStack_1d8 = lVar15;
    uStack_1c0 = uVar6;
    puStack_1b0 = puVar17;
    pppuStack_1a0 = &pppuStack_120;
    auStack_1f0 = auVar22;
    auStack_1d0 = auVar27;
    goto code_r0x01814d90;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar6,uVar7);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(uVar9,uVar4);
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar8,uVar12);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar6,uVar7);
    if (iVar3 == 0) {
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar12);
      auVar28._8_8_ = uStack_188;
      auVar28._0_8_ = lStack_180;
    }
    else {
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar9,uVar4);
      uVar12 = uStack_188;
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_180,uStack_188,uVar8);
      auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_180,uVar12);
    }
    uStack_188 = auVar28._8_8_;
    lStack_180 = auVar28._0_8_;
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar9,uVar4);
    auVar24 = auStack_170;
    auVar25 = auStack_160;
  }
  else {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar12);
    uVar4 = uStack_188;
    (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_180,uStack_188,uVar9);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_180,uVar4);
    uStack_188 = auVar22._8_8_;
    lStack_180 = auVar22._0_8_;
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar12);
    auVar24 = auStack_170;
    auVar25 = auStack_160;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar2 + 0x30);
  goto code_r0x01814af0;
code_r0x01814d90:
  uVar4 = auVar29._8_8_;
  uVar9 = auVar29._0_8_;
  uVar12 = auVar24._8_8_;
  uVar8 = auVar24._0_8_;
  uVar6 = auVar23._8_8_;
  uVar7 = auVar23._0_8_;
  uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar6);
  if ((uVar5 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8);
    puVar13 = puStack_200;
    lVar21 = lStack_1f8;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,puVar13,lVar21,uVar9,uVar4);
    return auVar22;
  }
  puVar19 = (undefined8 *)**(long **)(lVar16 + 0x30);
  lVar21 = lStack_1f8;
  iVar3 = (*(code *)*puVar19)(uVar8,uVar12,puStack_200);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8);
    lVar21 = lStack_208;
    auVar24 = auVar23;
    goto code_r0x01814fc4;
  }
  uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(uVar7,uVar6);
  puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10);
  uVar11 = (*(code *)*puVar17)(uVar8,uVar12);
  if (lVar20 == 0) {
    auVar22 = func_0x00f78af4();
    uVar9 = auVar22._8_8_;
    uVar4 = auVar22._0_8_;
    lStack_250 = lVar16;
    lStack_228 = lVar20;
    puStack_218 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
    lVar20 = param_6;
    puStack_260 = puVar13;
    uStack_258 = uVar8;
    uStack_248 = uVar12;
    uStack_230 = uVar10;
    pppuStack_220 = &pppuStack_1a0;
    auStack_240 = auVar29;
    auStack_270 = auVar23;
    auVar23 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((auVar23._0_8_ & 1) != 0) {
      return auVar23;
    }
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar4,uVar9);
    puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    lVar16 = lVar21;
    iVar3 = (*(code *)*puVar13)(auVar23._0_8_,auVar23._8_8_,puVar17);
    uStack_278 = uVar4;
    if (iVar3 != 0) {
      do {
        uVar6 = auVar23._8_8_;
        uVar8 = auVar23._0_8_;
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar8,uVar6);
        puVar18 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar12 = (*(code *)*puVar18)(uStack_278,uVar9);
        if (puVar19 == (undefined8 *)0x0) {
          auVar23 = func_0x00f78af4();
          uVar7 = auVar23._8_8_;
          uVar12 = auVar23._0_8_;
          puStack_288 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
          lVar15 = lVar20;
          uStack_2e0 = uVar6;
          uStack_2d8 = uVar8;
          uStack_2c0 = uVar9;
          puStack_2b8 = puVar17;
          lStack_2b0 = param_6;
          lStack_2a8 = lVar21;
          uStack_2a0 = uVar4;
          puStack_298 = puVar19;
          pppuStack_290 = &pppuStack_220;
          auStack_2d0 = auVar22;
          auVar22 = (**(code **)**(undefined8 **)(lVar20 + 0x30))();
          if ((auVar22._0_8_ & 1) == 0) {
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))(uVar12,uVar7);
            puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28);
            lVar21 = lVar16;
            iVar3 = (*(code *)*puVar19)(auVar22._0_8_,auVar22._8_8_,puVar18,lVar16);
            if (iVar3 != 0) {
              do {
                uVar9 = auVar22._8_8_;
                uVar4 = auVar22._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))
                          (&uStack_318,uVar4,uVar9);
                puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10);
                (*(code *)*puVar17)(&uStack_340,uVar12,uVar7);
                if (puVar13 == (undefined8 *)0x0) {
                  auVar22 = func_0x00f78af4();
                  auVar30._8_8_ = lVar21;
                  auVar30._0_8_ = puVar17;
                  uVar9 = auVar22._8_8_;
                  uVar4 = auVar22._0_8_;
                  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))();
                  iVar3 = auVar22._0_4_;
                  while( true ) {
                    if (iVar3 < 2) break;
                    auVar30 = (**(code **)**(undefined8 **)(lVar15 + 0x30))
                                        (auVar30._0_8_,auVar30._8_8_);
                    uVar12 = auVar30._8_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))
                              (uVar4,uVar9,auVar30._0_8_,uVar12);
                    (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))
                              (uVar4,uVar9,uVar9,uVar12,puVar19);
                    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))
                                        (uVar4,uVar9,auVar30._0_8_,uVar12);
                    iVar3 = auVar22._0_4_;
                  }
                  return auVar22;
                }
                uStack_368 = uStack_310;
                uStack_370 = uStack_318;
                uStack_358 = uStack_300;
                uStack_360 = uStack_308;
                uStack_350 = uStack_2f8;
                uStack_398 = uStack_338;
                uStack_3a0 = uStack_340;
                uStack_388 = uStack_328;
                uStack_390 = uStack_330;
                uStack_380 = uStack_320;
                iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))
                                  (puVar13,&uStack_370,&uStack_3a0,
                                   *(undefined8 *)(*(long *)(lVar20 + 0x30) + 0x18));
                if (iVar3 != 0) {
                  auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                                      (auVar23._0_8_,auVar23._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))
                            (auVar23._0_8_,auVar23._8_8_,uVar4,uVar9);
                }
                auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))(uVar4,uVar9);
                puVar19 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28);
                lVar21 = lVar16;
                uVar5 = (*(code *)*puVar19)(auVar22._0_8_,auVar22._8_8_,puVar18);
              } while ((uVar5 & 1) != 0);
            }
            uVar4 = auVar23._8_8_;
            uVar9 = auVar23._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))(uVar12,uVar7,uVar9,uVar4);
            (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x30))
                      (uVar12,uVar7,uVar9,uVar4,puVar13);
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))(uVar9,uVar4);
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x30))
                                (auVar22._0_8_,auVar22._8_8_,puVar18,lVar16,puVar13);
          }
          return auVar22;
        }
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(puVar19,uVar4,uVar12)
        ;
        if (iVar3 != 0) {
          auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar22._0_8_,auVar22._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar22._0_8_,auVar22._8_8_,uVar8,uVar6);
        }
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar8,uVar6);
        puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        lVar16 = lVar21;
        uVar5 = (*(code *)*puVar13)(auVar23._0_8_,auVar23._8_8_,puVar17);
      } while ((uVar5 & 1) != 0);
    }
    uVar4 = uStack_278;
    uVar12 = auVar22._8_8_;
    uVar8 = auVar22._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uStack_278,uVar9,uVar8,uVar12);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))(uVar4,uVar9,uVar8,uVar12,puVar19)
    ;
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar8,uVar12);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                        (auVar22._0_8_,auVar22._8_8_,puVar17,lVar21,puVar19);
    return auVar22;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))(lVar20,uVar10,uVar11);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar12);
    uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))(uVar7,uVar6);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))(lVar20,uVar10,uVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10);
    if (iVar3 == 0) {
      uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar6);
      (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20))(uVar9,uVar4,uVar10);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x28))(uVar7,uVar6);
    }
    else {
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20))(uVar9,uVar4,uVar6);
    }
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x28))(uVar8,uVar12);
  }
  else {
    uVar12 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar6);
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20))(uVar9,uVar4,uVar12);
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x28))(uVar7,uVar6);
  }
  auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x28))(uVar9,uVar4);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar16 + 0x30);
  goto code_r0x01814d90;
code_r0x01814764:
  auVar22 = (*UNRECOVERED_JUMPTABLE_00)(uVar9,uVar4);
  auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(uVar8,uVar12);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
  goto code_r0x018145d0;
}



// ============================================================
// RVA: 0x1814570 | Core.Containers.ArrayIteratorExtensions.SetDifference<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__SetDifference_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,undefined8 *param_7,long param_8,long param_9,
          undefined8 param_10,long param_11,long param_12)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_268;
  undefined1 auStack_260 [16];
  undefined8 *puStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  long lStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  auVar22._8_8_ = param_6;
  auVar22._0_8_ = param_5;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = param_1;
  uStack_78 = param_10;
  lStack_70 = param_9;
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
  puVar20 = param_7;
  lStack_68 = param_8;
code_r0x018145d0:
  iVar3 = (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_,param_3,param_4);
  if (iVar3 == 0) {
LAB_018147b8:
                    /* WARNING: Could not recover jumptable at 0x018147f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))
                        (auVar23._0_8_,auVar23._8_8_,param_3,param_4,lStack_70,uStack_78);
    return auVar22;
  }
  do {
    uVar12 = auVar23._8_8_;
    uVar8 = auVar23._0_8_;
    uVar11 = auVar22._8_8_;
    uVar7 = auVar22._0_8_;
    puVar18 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
    lVar15 = lStack_68;
    uVar4 = (*(code *)*puVar18)(uVar7,uVar11,param_7);
    if ((uVar4 & 1) == 0) goto LAB_018147b8;
    uVar5 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar12);
    puVar13 = (undefined8 *)**(undefined8 **)(param_12 + 0x30);
    uVar6 = (*(code *)*puVar13)(uVar7,uVar11);
    if (param_11 == 0) {
      auVar24 = func_0x00f78af4();
      lVar17 = lStack_68;
      uVar12 = uStack_78;
      auVar25._8_8_ = param_6;
      auVar25._0_8_ = puVar18;
      lStack_c8 = param_12;
      lStack_a8 = param_11;
      puStack_88 = &Core_Containers_ArrayIteratorExtensions__SetIntersection_object_;
      lStack_f0 = lStack_80;
      puVar18 = puVar20;
      lStack_e8 = param_8;
      puStack_d0 = param_7;
      uStack_b0 = uVar5;
      uStack_a0 = param_3;
      uStack_98 = param_4;
      puStack_90 = &stack0xfffffffffffffff0;
      auStack_e0 = auVar22;
      auStack_c0 = auVar23;
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(lStack_68 + 0x30) + 0x20))();
      lVar21 = lStack_70;
      uStack_f8 = uVar12;
      if (iVar3 == 0) goto code_r0x01814a64;
      break;
    }
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8))(param_11,uVar5,uVar6);
    if (iVar3 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar7,uVar11);
      uVar6 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar12);
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8))(param_11,uVar5,uVar6);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18);
      if (iVar3 == 0) goto LAB_01814764;
      auVar22 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar12);
      uVar11 = uStack_78;
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(lStack_70,uStack_78,uVar7);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(lStack_70,uVar11);
      uStack_78 = auVar23._8_8_;
      lStack_70 = auVar23._0_8_;
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(uVar8,uVar12);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
    }
    uVar4 = (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_,param_3,param_4);
    if ((uVar4 & 1) == 0) goto LAB_018147b8;
  } while( true );
code_r0x01814864:
  uVar12 = auVar25._8_8_;
  uVar8 = auVar25._0_8_;
  uVar11 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  puVar19 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20);
  lVar16 = lStack_e8;
  uVar4 = (*(code *)*puVar19)(uVar8,uVar12,puVar20);
  if ((uVar4 & 1) == 0) goto code_r0x01814a64;
  uVar5 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar7,uVar11);
  puVar14 = (undefined8 *)**(undefined8 **)(lVar17 + 0x30);
  uVar6 = (*(code *)*puVar14)(uVar8,uVar12);
  if (lVar21 == 0) {
    auVar22 = func_0x00f78af4();
    lVar2 = lStack_e8;
    lVar1 = lStack_f0;
    auVar27._8_8_ = param_6;
    auVar27._0_8_ = puVar19;
    lStack_128 = lVar17;
    lStack_118 = lVar21;
    puStack_108 = &Core_Containers_ArrayIteratorExtensions__SetSymmetricDifference_object_;
    uStack_178 = uStack_f8;
    lStack_170 = lStack_100;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_e8 + 0x30);
    puVar19 = puVar18;
    lStack_168 = param_8;
    puStack_140 = puVar13;
    lStack_138 = lVar15;
    puStack_130 = puVar20;
    uStack_120 = uVar5;
    ppuStack_110 = &puStack_90;
    goto code_r0x01814af0;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar21,uVar5,uVar6);
  if (iVar3 != 0) {
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar7,uVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20);
code_r0x0181490c:
    uVar4 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,puVar13,lVar15);
    if ((uVar4 & 1) == 0) goto code_r0x01814a64;
    goto code_r0x01814864;
  }
  uVar5 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar8,uVar12);
  uVar6 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar7,uVar11);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar21,uVar5,uVar6);
  if (iVar3 != 0) {
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar8,uVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20);
    goto code_r0x0181490c;
  }
  uVar6 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar7,uVar11);
  uVar5 = uStack_f8;
  (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lStack_f0,uStack_f8,uVar6);
  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(lStack_f0,uVar5);
  uStack_f8 = auVar22._8_8_;
  lStack_f0 = auVar22._0_8_;
  auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar7,uVar11);
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar8,uVar12);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                    (auVar24._0_8_,auVar24._8_8_,puVar13,lVar15);
  if (iVar3 == 0) {
code_r0x01814a64:
    auVar26._8_8_ = uStack_f8;
    auVar26._0_8_ = lStack_f0;
    return auVar26;
  }
  goto code_r0x01814864;
code_r0x01814af0:
  uVar12 = auVar27._8_8_;
  uVar8 = auVar27._0_8_;
  uVar11 = auVar22._8_8_;
  uVar7 = auVar22._0_8_;
  auStack_160 = auVar24;
  auStack_150 = auVar25;
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
  if ((uVar4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    lVar16 = lStack_168;
code_r0x01814d18:
                    /* WARNING: Could not recover jumptable at 0x01814d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar27._0_8_,auVar27._8_8_,puVar18,lVar16,lStack_170,uStack_178);
    return auVar22;
  }
  puVar20 = (undefined8 *)**(undefined8 **)(lVar2 + 0x30);
  lVar15 = lStack_168;
  iVar3 = (*(code *)*puVar20)(uVar8,uVar12,puVar18);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    puVar18 = puVar14;
    auVar27 = auVar22;
    goto code_r0x01814d18;
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar7,uVar11);
  puVar13 = *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  uVar6 = (*(code *)*puVar13)(uVar8,uVar12);
  if (lVar1 == 0) {
    auVar23 = func_0x00f78af4();
    lVar17 = lStack_168;
    lVar21 = lStack_170;
    auVar29._8_8_ = uStack_178;
    auVar29._0_8_ = uStack_180;
    auVar24._8_8_ = param_6;
    auVar24._0_8_ = puVar20;
    lStack_1a8 = lVar1;
    lStack_198 = lVar2;
    puStack_188 = &Core_Containers_ArrayIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_168 + 0x30);
    lStack_1f8 = lVar15;
    puStack_1f0 = puVar19;
    lStack_1e8 = param_8;
    puStack_1d0 = puVar14;
    lStack_1c8 = lVar16;
    uStack_1b0 = uVar5;
    puStack_1a0 = puVar18;
    pppuStack_190 = &ppuStack_110;
    auStack_1e0 = auVar22;
    auStack_1c0 = auVar27;
    goto code_r0x01814d90;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar5,uVar6);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar12);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar7,uVar11);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar5,uVar6);
    if (iVar3 == 0) {
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar7,uVar11);
      auVar28._8_8_ = uStack_178;
      auVar28._0_8_ = lStack_170;
    }
    else {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar8,uVar12);
      uVar11 = uStack_178;
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_170,uStack_178,uVar7);
      auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_170,uVar11);
    }
    uStack_178 = auVar28._8_8_;
    lStack_170 = auVar28._0_8_;
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar12);
    auVar24 = auStack_160;
    auVar25 = auStack_150;
  }
  else {
    uVar8 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
    uVar12 = uStack_178;
    (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_170,uStack_178,uVar8);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_170,uVar12);
    uStack_178 = auVar22._8_8_;
    lStack_170 = auVar22._0_8_;
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar7,uVar11);
    auVar24 = auStack_160;
    auVar25 = auStack_150;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar2 + 0x30);
  goto code_r0x01814af0;
code_r0x01814d90:
  uVar12 = auVar29._8_8_;
  uVar8 = auVar29._0_8_;
  uVar11 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  uVar5 = auVar23._8_8_;
  uVar6 = auVar23._0_8_;
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
  if ((uVar4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    puVar13 = puStack_1f0;
    lVar15 = lStack_1e8;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,puVar13,lVar15,uVar8,uVar12);
    return auVar22;
  }
  puVar20 = (undefined8 *)**(long **)(lVar17 + 0x30);
  lVar15 = lStack_1e8;
  iVar3 = (*(code *)*puVar20)(uVar7,uVar11,puStack_1f0);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    lVar15 = lStack_1f8;
    auVar24 = auVar23;
    goto code_r0x01814fc4;
  }
  uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar6,uVar5);
  puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  uVar10 = (*(code *)*puVar18)(uVar7,uVar11);
  if (lVar21 == 0) {
    auVar22 = func_0x00f78af4();
    uVar8 = auVar22._8_8_;
    uVar12 = auVar22._0_8_;
    lStack_240 = lVar17;
    lStack_218 = lVar21;
    puStack_208 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
    lVar21 = param_6;
    puStack_250 = puVar13;
    uStack_248 = uVar7;
    uStack_238 = uVar11;
    uStack_220 = uVar9;
    pppuStack_210 = &pppuStack_190;
    auStack_230 = auVar29;
    auStack_260 = auVar23;
    auVar23 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((auVar23._0_8_ & 1) != 0) {
      return auVar23;
    }
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar12,uVar8);
    puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    lVar17 = lVar15;
    iVar3 = (*(code *)*puVar13)(auVar23._0_8_,auVar23._8_8_,puVar18);
    uStack_268 = uVar12;
    if (iVar3 != 0) {
      do {
        uVar5 = auVar23._8_8_;
        uVar7 = auVar23._0_8_;
        uVar12 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar7,uVar5);
        puVar19 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar11 = (*(code *)*puVar19)(uStack_268,uVar8);
        if (puVar20 == (undefined8 *)0x0) {
          auVar23 = func_0x00f78af4();
          uVar6 = auVar23._8_8_;
          uVar11 = auVar23._0_8_;
          puStack_278 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
          lVar16 = lVar21;
          uStack_2d0 = uVar5;
          uStack_2c8 = uVar7;
          uStack_2b0 = uVar8;
          puStack_2a8 = puVar18;
          lStack_2a0 = param_6;
          lStack_298 = lVar15;
          uStack_290 = uVar12;
          puStack_288 = puVar20;
          pppuStack_280 = &pppuStack_210;
          auStack_2c0 = auVar22;
          auVar22 = (**(code **)**(undefined8 **)(lVar21 + 0x30))();
          if ((auVar22._0_8_ & 1) == 0) {
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(uVar11,uVar6);
            puVar20 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x28);
            lVar15 = lVar17;
            iVar3 = (*(code *)*puVar20)(auVar22._0_8_,auVar22._8_8_,puVar19,lVar17);
            if (iVar3 != 0) {
              do {
                uVar8 = auVar22._8_8_;
                uVar12 = auVar22._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))
                          (&uStack_308,uVar12,uVar8);
                puVar18 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10);
                (*(code *)*puVar18)(&uStack_330,uVar11,uVar6);
                if (puVar13 == (undefined8 *)0x0) {
                  auVar22 = func_0x00f78af4();
                  auVar30._8_8_ = lVar15;
                  auVar30._0_8_ = puVar18;
                  uVar8 = auVar22._8_8_;
                  uVar12 = auVar22._0_8_;
                  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))();
                  iVar3 = auVar22._0_4_;
                  while( true ) {
                    if (iVar3 < 2) break;
                    auVar30 = (**(code **)**(undefined8 **)(lVar16 + 0x30))
                                        (auVar30._0_8_,auVar30._8_8_);
                    uVar11 = auVar30._8_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
                              (uVar12,uVar8,auVar30._0_8_,uVar11);
                    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))
                              (uVar12,uVar8,uVar8,uVar11,puVar20);
                    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))
                                        (uVar12,uVar8,auVar30._0_8_,uVar11);
                    iVar3 = auVar22._0_4_;
                  }
                  return auVar22;
                }
                uStack_358 = uStack_300;
                uStack_360 = uStack_308;
                uStack_348 = uStack_2f0;
                uStack_350 = uStack_2f8;
                uStack_340 = uStack_2e8;
                uStack_388 = uStack_328;
                uStack_390 = uStack_330;
                uStack_378 = uStack_318;
                uStack_380 = uStack_320;
                uStack_370 = uStack_310;
                iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))
                                  (puVar13,&uStack_360,&uStack_390,
                                   *(undefined8 *)(*(long *)(lVar21 + 0x30) + 0x18));
                if (iVar3 != 0) {
                  auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
                                      (auVar23._0_8_,auVar23._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x20))
                            (auVar23._0_8_,auVar23._8_8_,uVar12,uVar8);
                }
                auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(uVar12,uVar8);
                puVar20 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x28);
                lVar15 = lVar17;
                uVar4 = (*(code *)*puVar20)(auVar22._0_8_,auVar22._8_8_,puVar19);
              } while ((uVar4 & 1) != 0);
            }
            uVar12 = auVar23._8_8_;
            uVar8 = auVar23._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x20))(uVar11,uVar6,uVar8,uVar12)
            ;
            (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x30))
                      (uVar11,uVar6,uVar8,uVar12,puVar13);
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(uVar8,uVar12);
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x30))
                                (auVar22._0_8_,auVar22._8_8_,puVar19,lVar17,puVar13);
          }
          return auVar22;
        }
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                          (puVar20,uVar12,uVar11);
        if (iVar3 != 0) {
          auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar22._0_8_,auVar22._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar22._0_8_,auVar22._8_8_,uVar7,uVar5);
        }
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar5);
        puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        lVar17 = lVar15;
        uVar4 = (*(code *)*puVar13)(auVar23._0_8_,auVar23._8_8_,puVar18);
      } while ((uVar4 & 1) != 0);
    }
    uVar12 = uStack_268;
    uVar11 = auVar22._8_8_;
    uVar7 = auVar22._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uStack_268,uVar8,uVar7,uVar11);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (uVar12,uVar8,uVar7,uVar11,puVar20);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar11);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                        (auVar22._0_8_,auVar22._8_8_,puVar18,lVar15,puVar20);
    return auVar22;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar21,uVar9,uVar10);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar6,uVar5);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar21,uVar9,uVar10);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
    if (iVar3 == 0) {
      uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
      (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar8,uVar12,uVar9);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar6,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
      (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar8,uVar12,uVar5);
    }
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar7,uVar11);
  }
  else {
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar8,uVar12,uVar11);
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar6,uVar5);
  }
  auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar8,uVar12);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar17 + 0x30);
  goto code_r0x01814d90;
LAB_01814764:
  auVar23 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar12);
  auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(uVar7,uVar11);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
  goto code_r0x018145d0;
}



// ============================================================
// RVA: 0x18147fc | Core.Containers.ArrayIteratorExtensions.SetIntersection<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__SetIntersection_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,undefined8 *param_7,long param_8,long param_9,
          undefined8 param_10,long param_11,long param_12)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  long lStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined1 auStack_160 [16];
  undefined8 *puStack_150;
  long lStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  auVar23._8_8_ = param_6;
  auVar23._0_8_ = param_5;
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  lStack_70 = param_9;
  puVar20 = param_7;
  lStack_68 = param_8;
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))();
  if (iVar3 != 0) {
    uStack_78 = param_10;
    do {
      while( true ) {
        uVar12 = auVar23._8_8_;
        uVar7 = auVar23._0_8_;
        uVar11 = auVar22._8_8_;
        uVar8 = auVar22._0_8_;
        puVar18 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
        lVar15 = lStack_68;
        uVar4 = (*(code *)*puVar18)(uVar7,uVar12,param_7);
        param_10 = uStack_78;
        if ((uVar4 & 1) == 0) goto LAB_01814a64;
        uVar5 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar11);
        puVar13 = (undefined8 *)**(undefined8 **)(param_12 + 0x30);
        uVar6 = (*(code *)*puVar13)(uVar7,uVar12);
        if (param_11 == 0) {
          auVar25 = func_0x00f78af4();
          lVar17 = lStack_68;
          lVar21 = lStack_70;
          auVar26._8_8_ = param_6;
          auVar26._0_8_ = puVar18;
          lStack_a8 = param_12;
          lStack_98 = param_11;
          puStack_88 = &Core_Containers_ArrayIteratorExtensions__SetSymmetricDifference_object_;
          uStack_f8 = uStack_78;
          lStack_f0 = lStack_80;
          UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_68 + 0x30);
          puVar18 = puVar20;
          lStack_e8 = param_8;
          uStack_c0 = param_3;
          uStack_b8 = param_4;
          puStack_b0 = param_7;
          uStack_a0 = uVar5;
          puStack_90 = &stack0xfffffffffffffff0;
          goto code_r0x01814af0;
        }
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8))(param_11,uVar5,uVar6);
        if (iVar3 == 0) break;
        auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar8,uVar11);
        UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
code_r0x0181490c:
        uVar4 = (*UNRECOVERED_JUMPTABLE_00)(auVar22._0_8_,auVar22._8_8_,param_3,param_4);
        param_10 = uStack_78;
        if ((uVar4 & 1) == 0) goto LAB_01814a64;
      }
      uVar5 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar7,uVar12);
      uVar6 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar11);
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8))(param_11,uVar5,uVar6);
      if (iVar3 != 0) {
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar7,uVar12);
        UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
        goto code_r0x0181490c;
      }
      uVar6 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar11);
      uVar5 = uStack_78;
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(lStack_70,uStack_78,uVar6);
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(lStack_70,uVar5);
      uStack_78 = auVar22._8_8_;
      lStack_70 = auVar22._0_8_;
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar8,uVar11);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar7,uVar12);
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))
                        (auVar22._0_8_,auVar22._8_8_,param_3,param_4);
      param_10 = uStack_78;
    } while (iVar3 != 0);
  }
LAB_01814a64:
  auVar24._8_8_ = param_10;
  auVar24._0_8_ = lStack_70;
  return auVar24;
code_r0x01814af0:
  uVar12 = auVar26._8_8_;
  uVar7 = auVar26._0_8_;
  uVar11 = auVar25._8_8_;
  uVar8 = auVar25._0_8_;
  auStack_e0 = auVar22;
  auStack_d0 = auVar23;
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar11);
  if ((uVar4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    lVar15 = lStack_e8;
code_r0x01814d18:
                    /* WARNING: Could not recover jumptable at 0x01814d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar26._0_8_,auVar26._8_8_,puVar20,lVar15,lStack_f0,uStack_f8);
    return auVar22;
  }
  puVar19 = (undefined8 *)**(undefined8 **)(lVar17 + 0x30);
  lVar16 = lStack_e8;
  iVar3 = (*(code *)*puVar19)(uVar7,uVar12,puVar20);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    puVar20 = puVar13;
    auVar26 = auVar25;
    goto code_r0x01814d18;
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar8,uVar11);
  puVar14 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  uVar6 = (*(code *)*puVar14)(uVar7,uVar12);
  if (lVar21 == 0) {
    auVar22 = func_0x00f78af4();
    lVar2 = lStack_e8;
    lVar1 = lStack_f0;
    auVar29._8_8_ = uStack_f8;
    auVar29._0_8_ = uStack_100;
    auVar28._8_8_ = param_6;
    auVar28._0_8_ = puVar19;
    lStack_128 = lVar21;
    lStack_118 = lVar17;
    puStack_108 = &Core_Containers_ArrayIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_e8 + 0x30);
    lStack_178 = lVar16;
    puStack_170 = puVar18;
    lStack_168 = param_8;
    puStack_150 = puVar13;
    lStack_148 = lVar15;
    uStack_130 = uVar5;
    puStack_120 = puVar20;
    ppuStack_110 = &puStack_90;
    auStack_160 = auVar25;
    auStack_140 = auVar26;
    goto code_r0x01814d90;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar21,uVar5,uVar6);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar8,uVar11);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar21,uVar5,uVar6);
    if (iVar3 == 0) {
      auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar8,uVar11);
      auVar27._8_8_ = uStack_f8;
      auVar27._0_8_ = lStack_f0;
    }
    else {
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar7,uVar12);
      uVar11 = uStack_f8;
      (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(lStack_f0,uStack_f8,uVar8);
      auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(lStack_f0,uVar11);
    }
    uStack_f8 = auVar27._8_8_;
    lStack_f0 = auVar27._0_8_;
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar7,uVar12);
    auVar22 = auStack_e0;
    auVar23 = auStack_d0;
  }
  else {
    uVar7 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar11);
    uVar12 = uStack_f8;
    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(lStack_f0,uStack_f8,uVar7);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(lStack_f0,uVar12);
    uStack_f8 = auVar22._8_8_;
    lStack_f0 = auVar22._0_8_;
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar8,uVar11);
    auVar22 = auStack_e0;
    auVar23 = auStack_d0;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar17 + 0x30);
  goto code_r0x01814af0;
code_r0x01814d90:
  uVar12 = auVar29._8_8_;
  uVar7 = auVar29._0_8_;
  uVar11 = auVar28._8_8_;
  uVar8 = auVar28._0_8_;
  uVar5 = auVar22._8_8_;
  uVar6 = auVar22._0_8_;
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
  if ((uVar4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    puVar14 = puStack_170;
    lVar15 = lStack_168;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)(auVar28._0_8_,auVar28._8_8_,puVar14,lVar15,uVar7,uVar12);
    return auVar22;
  }
  puVar20 = (undefined8 *)**(long **)(lVar2 + 0x30);
  lVar15 = lStack_168;
  iVar3 = (*(code *)*puVar20)(uVar8,uVar11,puStack_170);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    lVar15 = lStack_178;
    auVar28 = auVar22;
    goto code_r0x01814fc4;
  }
  uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar6,uVar5);
  puVar18 = *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  uVar10 = (*(code *)*puVar18)(uVar8,uVar11);
  if (lVar1 == 0) {
    auVar23 = func_0x00f78af4();
    uVar7 = auVar23._8_8_;
    uVar12 = auVar23._0_8_;
    lStack_1c0 = lVar2;
    lStack_198 = lVar1;
    puStack_188 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
    lVar21 = param_6;
    puStack_1d0 = puVar14;
    uStack_1c8 = uVar8;
    uStack_1b8 = uVar11;
    uStack_1a0 = uVar9;
    pppuStack_190 = &ppuStack_110;
    auStack_1b0 = auVar29;
    auStack_1e0 = auVar22;
    auVar22 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((auVar22._0_8_ & 1) != 0) {
      return auVar22;
    }
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar12,uVar7);
    puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    lVar17 = lVar15;
    iVar3 = (*(code *)*puVar13)(auVar22._0_8_,auVar22._8_8_,puVar18);
    uStack_1e8 = uVar12;
    if (iVar3 != 0) {
      do {
        uVar5 = auVar22._8_8_;
        uVar8 = auVar22._0_8_;
        uVar12 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar8,uVar5);
        puVar19 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar11 = (*(code *)*puVar19)(uStack_1e8,uVar7);
        if (puVar20 == (undefined8 *)0x0) {
          auVar22 = func_0x00f78af4();
          uVar6 = auVar22._8_8_;
          uVar11 = auVar22._0_8_;
          puStack_1f8 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
          lVar16 = lVar21;
          uStack_250 = uVar5;
          uStack_248 = uVar8;
          uStack_230 = uVar7;
          puStack_228 = puVar18;
          lStack_220 = param_6;
          lStack_218 = lVar15;
          uStack_210 = uVar12;
          puStack_208 = puVar20;
          pppuStack_200 = &pppuStack_190;
          auStack_240 = auVar23;
          auVar23 = (**(code **)**(undefined8 **)(lVar21 + 0x30))();
          if ((auVar23._0_8_ & 1) == 0) {
            auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(uVar11,uVar6);
            puVar20 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x28);
            lVar15 = lVar17;
            iVar3 = (*(code *)*puVar20)(auVar23._0_8_,auVar23._8_8_,puVar19,lVar17);
            if (iVar3 != 0) {
              do {
                uVar7 = auVar23._8_8_;
                uVar12 = auVar23._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))
                          (&uStack_288,uVar12,uVar7);
                puVar18 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10);
                (*(code *)*puVar18)(&uStack_2b0,uVar11,uVar6);
                if (puVar13 == (undefined8 *)0x0) {
                  auVar22 = func_0x00f78af4();
                  auVar25._8_8_ = lVar15;
                  auVar25._0_8_ = puVar18;
                  uVar7 = auVar22._8_8_;
                  uVar12 = auVar22._0_8_;
                  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))();
                  iVar3 = auVar22._0_4_;
                  while( true ) {
                    if (iVar3 < 2) break;
                    auVar25 = (**(code **)**(undefined8 **)(lVar16 + 0x30))
                                        (auVar25._0_8_,auVar25._8_8_);
                    uVar11 = auVar25._8_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
                              (uVar12,uVar7,auVar25._0_8_,uVar11);
                    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))
                              (uVar12,uVar7,uVar7,uVar11,puVar20);
                    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))
                                        (uVar12,uVar7,auVar25._0_8_,uVar11);
                    iVar3 = auVar22._0_4_;
                  }
                  return auVar22;
                }
                uStack_2d8 = uStack_280;
                uStack_2e0 = uStack_288;
                uStack_2c8 = uStack_270;
                uStack_2d0 = uStack_278;
                uStack_2c0 = uStack_268;
                uStack_308 = uStack_2a8;
                uStack_310 = uStack_2b0;
                uStack_2f8 = uStack_298;
                uStack_300 = uStack_2a0;
                uStack_2f0 = uStack_290;
                iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))
                                  (puVar13,&uStack_2e0,&uStack_310,
                                   *(undefined8 *)(*(long *)(lVar21 + 0x30) + 0x18));
                if (iVar3 != 0) {
                  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
                                      (auVar22._0_8_,auVar22._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x20))
                            (auVar22._0_8_,auVar22._8_8_,uVar12,uVar7);
                }
                auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(uVar12,uVar7);
                puVar20 = *(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x28);
                lVar15 = lVar17;
                uVar4 = (*(code *)*puVar20)(auVar23._0_8_,auVar23._8_8_,puVar19);
              } while ((uVar4 & 1) != 0);
            }
            uVar12 = auVar22._8_8_;
            uVar7 = auVar22._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x20))(uVar11,uVar6,uVar7,uVar12)
            ;
            (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x30))
                      (uVar11,uVar6,uVar7,uVar12,puVar13);
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(uVar7,uVar12);
            auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x30))
                                (auVar22._0_8_,auVar22._8_8_,puVar19,lVar17,puVar13);
          }
          return auVar23;
        }
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                          (puVar20,uVar12,uVar11);
        if (iVar3 != 0) {
          auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar23._0_8_,auVar23._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar23._0_8_,auVar23._8_8_,uVar8,uVar5);
        }
        auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar8,uVar5);
        puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        lVar17 = lVar15;
        uVar4 = (*(code *)*puVar13)(auVar22._0_8_,auVar22._8_8_,puVar18);
      } while ((uVar4 & 1) != 0);
    }
    uVar12 = uStack_1e8;
    uVar11 = auVar23._8_8_;
    uVar8 = auVar23._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uStack_1e8,uVar7,uVar8,uVar11);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (uVar12,uVar7,uVar8,uVar11,puVar20);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar8,uVar11);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                        (auVar22._0_8_,auVar22._8_8_,puVar18,lVar15,puVar20);
    return auVar22;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar9,uVar10);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar11);
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar6,uVar5);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar9,uVar10);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
    if (iVar3 == 0) {
      uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(uVar7,uVar12,uVar9);
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar6,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar11);
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(uVar7,uVar12,uVar5);
    }
    auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar11);
  }
  else {
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
    (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(uVar7,uVar12,uVar11);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar6,uVar5);
  }
  auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar7,uVar12);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar2 + 0x30);
  goto code_r0x01814d90;
}



// ============================================================
// RVA: 0x1814a90 | Core.Containers.ArrayIteratorExtensions.SetSymmetricDifference<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__SetSymmetricDifference_object_
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
               undefined8 param_5,long param_6,undefined8 *param_7,long param_8,long param_9,
               undefined8 param_10,long param_11,long param_12)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  long lStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  long lStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = param_1;
  auVar20._8_8_ = param_6;
  auVar20._0_8_ = param_5;
  uStack_78 = param_10;
  lStack_70 = param_9;
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(param_12 + 0x30);
  puVar16 = param_7;
  lStack_68 = param_8;
  do {
    uVar9 = auVar19._8_8_;
    uVar6 = auVar19._0_8_;
    uVar10 = auVar20._8_8_;
    uVar5 = auVar20._0_8_;
    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9,param_3,param_4);
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      param_4 = lStack_68;
code_r0x01814d18:
                    /* WARNING: Could not recover jumptable at 0x01814d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(auVar20._0_8_,auVar20._8_8_,param_7,param_4,lStack_70,uStack_78);
      return;
    }
    puVar15 = (undefined8 *)**(undefined8 **)(param_12 + 0x30);
    lVar13 = lStack_68;
    iVar1 = (*(code *)*puVar15)(uVar5,uVar10,param_7);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      param_7 = param_3;
      auVar20 = auVar19;
      goto code_r0x01814d18;
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar6,uVar9);
    puVar11 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    uVar4 = (*(code *)*puVar11)(uVar5,uVar10);
    if (param_11 == 0) {
      auVar22 = func_0x00f78af4();
      lVar14 = lStack_68;
      lVar17 = lStack_70;
      auVar24._8_8_ = uStack_78;
      auVar24._0_8_ = uStack_80;
      auVar23._8_8_ = param_6;
      auVar23._0_8_ = puVar15;
      lStack_a8 = param_11;
      lStack_98 = param_12;
      puStack_88 = &Core_Containers_ArrayIteratorExtensions__SetUnion_object_;
      UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_68 + 0x30);
      lStack_f8 = lVar13;
      puStack_f0 = puVar16;
      lStack_e8 = param_8;
      puStack_d0 = param_3;
      lStack_c8 = param_4;
      uStack_b0 = uVar3;
      puStack_a0 = param_7;
      puStack_90 = &stack0xfffffffffffffff0;
      auStack_e0 = auVar19;
      auStack_c0 = auVar20;
      break;
    }
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar3,uVar4);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    if (iVar1 == 0) {
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar5,uVar10);
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar6,uVar9);
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar3,uVar4);
      if (iVar1 == 0) {
        auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar6,uVar9);
        auVar21._8_8_ = uStack_78;
        auVar21._0_8_ = lStack_70;
      }
      else {
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar5,uVar10);
        uVar9 = uStack_78;
        (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(lStack_70,uStack_78,uVar6);
        auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(lStack_70,uVar9);
      }
      uStack_78 = auVar21._8_8_;
      lStack_70 = auVar21._0_8_;
      auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar5,uVar10);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9);
      uVar10 = uStack_78;
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(lStack_70,uStack_78,uVar5);
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(lStack_70,uVar10);
      uStack_78 = auVar19._8_8_;
      lStack_70 = auVar19._0_8_;
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar6,uVar9);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(param_12 + 0x30);
  } while( true );
code_r0x01814d90:
  uVar10 = auVar24._8_8_;
  uVar5 = auVar24._0_8_;
  uVar9 = auVar23._8_8_;
  uVar6 = auVar23._0_8_;
  uVar3 = auVar22._8_8_;
  uVar4 = auVar22._0_8_;
  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(uVar4,uVar3);
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8);
    puVar11 = puStack_f0;
    lVar13 = lStack_e8;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_,puVar11,lVar13,uVar5,uVar10);
    return;
  }
  puVar16 = (undefined8 *)**(long **)(lVar14 + 0x30);
  lVar13 = lStack_e8;
  iVar1 = (*(code *)*puVar16)(uVar6,uVar9,puStack_f0);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8);
    lVar13 = lStack_f8;
    auVar23 = auVar22;
    goto code_r0x01814fc4;
  }
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))(uVar4,uVar3);
  puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
  uVar8 = (*(code *)*puVar15)(uVar6,uVar9);
  if (lVar17 == 0) {
    auVar19 = func_0x00f78af4();
    uVar5 = auVar19._8_8_;
    uVar10 = auVar19._0_8_;
    lStack_140 = lVar14;
    lStack_118 = lVar17;
    puStack_108 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
    lVar17 = param_6;
    puStack_150 = puVar11;
    uStack_148 = uVar6;
    uStack_138 = uVar9;
    uStack_120 = uVar7;
    ppuStack_110 = &puStack_90;
    auStack_130 = auVar24;
    auStack_160 = auVar22;
    uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((uVar2 & 1) != 0) {
      return;
    }
    auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar10,uVar5);
    puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    lVar14 = lVar13;
    iVar1 = (*(code *)*puVar11)(auVar20._0_8_,auVar20._8_8_,puVar15);
    uStack_168 = uVar10;
    if (iVar1 != 0) {
      do {
        uVar3 = auVar20._8_8_;
        uVar6 = auVar20._0_8_;
        uVar10 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar6,uVar3);
        puVar12 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar9 = (*(code *)*puVar12)(uStack_168,uVar5);
        if (puVar16 == (undefined8 *)0x0) {
          auVar20 = func_0x00f78af4();
          uVar4 = auVar20._8_8_;
          uVar9 = auVar20._0_8_;
          puStack_178 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
          lVar18 = lVar17;
          uStack_1d0 = uVar3;
          uStack_1c8 = uVar6;
          uStack_1b0 = uVar5;
          puStack_1a8 = puVar15;
          lStack_1a0 = param_6;
          lStack_198 = lVar13;
          uStack_190 = uVar10;
          puStack_188 = puVar16;
          pppuStack_180 = &ppuStack_110;
          auStack_1c0 = auVar19;
          uVar2 = (**(code **)**(undefined8 **)(lVar17 + 0x30))();
          if ((uVar2 & 1) == 0) {
            auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(uVar9,uVar4);
            puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28);
            lVar13 = lVar14;
            iVar1 = (*(code *)*puVar16)(auVar19._0_8_,auVar19._8_8_,puVar12,lVar14);
            if (iVar1 != 0) {
              do {
                uVar5 = auVar19._8_8_;
                uVar10 = auVar19._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))
                          (&uStack_208,uVar10,uVar5);
                puVar15 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
                (*(code *)*puVar15)(&uStack_230,uVar9,uVar4);
                if (puVar11 == (undefined8 *)0x0) {
                  auVar19 = func_0x00f78af4();
                  auVar22._8_8_ = lVar13;
                  auVar22._0_8_ = puVar15;
                  uVar5 = auVar19._8_8_;
                  uVar10 = auVar19._0_8_;
                  iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))();
                  while( true ) {
                    if (iVar1 < 2) break;
                    auVar22 = (**(code **)**(undefined8 **)(lVar18 + 0x30))
                                        (auVar22._0_8_,auVar22._8_8_);
                    uVar9 = auVar22._8_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                              (uVar10,uVar5,auVar22._0_8_,uVar9);
                    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))
                              (uVar10,uVar5,uVar5,uVar9,puVar16);
                    iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))
                                      (uVar10,uVar5,auVar22._0_8_,uVar9);
                  }
                  return;
                }
                uStack_258 = uStack_200;
                uStack_260 = uStack_208;
                uStack_248 = uStack_1f0;
                uStack_250 = uStack_1f8;
                uStack_240 = uStack_1e8;
                uStack_288 = uStack_228;
                uStack_290 = uStack_230;
                uStack_278 = uStack_218;
                uStack_280 = uStack_220;
                uStack_270 = uStack_210;
                iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))
                                  (puVar11,&uStack_260,&uStack_290,
                                   *(undefined8 *)(*(long *)(lVar17 + 0x30) + 0x18));
                if (iVar1 != 0) {
                  auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                      (auVar20._0_8_,auVar20._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                            (auVar20._0_8_,auVar20._8_8_,uVar10,uVar5);
                }
                auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(uVar10,uVar5);
                puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28);
                lVar13 = lVar14;
                uVar2 = (*(code *)*puVar16)(auVar19._0_8_,auVar19._8_8_,puVar12);
              } while ((uVar2 & 1) != 0);
            }
            uVar10 = auVar20._8_8_;
            uVar5 = auVar20._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar9,uVar4,uVar5,uVar10);
            (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x30))
                      (uVar9,uVar4,uVar5,uVar10,puVar11);
            auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(uVar5,uVar10);
            (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x30))
                      (auVar19._0_8_,auVar19._8_8_,puVar12,lVar14,puVar11);
          }
          return;
        }
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(puVar16,uVar10,uVar9)
        ;
        if (iVar1 != 0) {
          auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar19._0_8_,auVar19._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar19._0_8_,auVar19._8_8_,uVar6,uVar3);
        }
        auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar6,uVar3);
        puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        lVar14 = lVar13;
        uVar2 = (*(code *)*puVar11)(auVar20._0_8_,auVar20._8_8_,puVar15);
      } while ((uVar2 & 1) != 0);
    }
    uVar10 = uStack_168;
    uVar9 = auVar19._8_8_;
    uVar6 = auVar19._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uStack_168,uVar5,uVar6,uVar9);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))(uVar10,uVar5,uVar6,uVar9,puVar16)
    ;
    auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar6,uVar9);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (auVar19._0_8_,auVar19._8_8_,puVar15,lVar13,puVar16);
    return;
  }
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(lVar17,uVar7,uVar8);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
  if (iVar1 == 0) {
    uVar7 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9);
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))(uVar4,uVar3);
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(lVar17,uVar7,uVar8);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
    if (iVar1 == 0) {
      uVar7 = (*UNRECOVERED_JUMPTABLE_00)(uVar4,uVar3);
      (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))(uVar5,uVar10,uVar7);
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28))(uVar4,uVar3);
    }
    else {
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9);
      (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))(uVar5,uVar10,uVar3);
    }
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28))(uVar6,uVar9);
  }
  else {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar4,uVar3);
    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))(uVar5,uVar10,uVar9);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28))(uVar4,uVar3);
  }
  auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28))(uVar5,uVar10);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar14 + 0x30);
  goto code_r0x01814d90;
}



// ============================================================
// RVA: 0x1814d40 | Core.Containers.ArrayIteratorExtensions.SetUnion<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__SetUnion_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,long param_11,long param_12)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  auVar20._8_8_ = param_10;
  auVar20._0_8_ = param_9;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  auVar19._8_8_ = param_6;
  auVar19._0_8_ = param_5;
  UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(param_12 + 0x30);
  uStack_78 = param_4;
  uStack_70 = param_7;
  uStack_68 = param_8;
  do {
    uVar8 = auVar20._8_8_;
    uVar16 = auVar20._0_8_;
    uVar7 = auVar18._8_8_;
    uVar17 = auVar18._0_8_;
    uVar5 = auVar19._8_8_;
    uVar9 = auVar19._0_8_;
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar17,uVar7,param_3,uStack_78);
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      param_3 = uStack_70;
      uVar5 = uStack_68;
code_r0x01814fc4:
                    /* WARNING: Could not recover jumptable at 0x01814fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(auVar19._0_8_,auVar19._8_8_,param_3,uVar5,uVar16,uVar8);
      return;
    }
    puVar12 = (undefined8 *)**(long **)(param_12 + 0x30);
    uVar6 = uStack_68;
    iVar1 = (*(code *)*puVar12)(uVar9,uVar5,uStack_70);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      uVar5 = uStack_78;
      auVar19 = auVar18;
      goto code_r0x01814fc4;
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar17,uVar7);
    puVar10 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    uVar4 = (*(code *)*puVar10)(uVar9,uVar5);
    if (param_11 == 0) {
      auVar19 = func_0x00f78af4();
      uVar16 = auVar19._8_8_;
      uVar8 = auVar19._0_8_;
      lStack_c0 = param_12;
      lStack_98 = param_11;
      puStack_88 = &Core_Containers_ArrayIteratorExtensions__Sort_object_;
      lVar14 = param_6;
      uStack_d0 = param_3;
      uStack_c8 = uVar9;
      uStack_b8 = uVar5;
      uStack_a0 = uVar3;
      puStack_90 = &stack0xfffffffffffffff0;
      auStack_b0 = auVar20;
      auStack_e0 = auVar18;
      uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
      if ((uVar2 & 1) != 0) {
        return;
      }
      auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar8,uVar16);
      puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      uVar5 = uVar6;
      iVar1 = (*(code *)*puVar13)(auVar18._0_8_,auVar18._8_8_,puVar10);
      uStack_e8 = uVar8;
      if (iVar1 != 0) {
        do {
          uVar17 = auVar18._8_8_;
          uVar7 = auVar18._0_8_;
          uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar7,uVar17);
          puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
          uVar9 = (*(code *)*puVar11)(uStack_e8,uVar16);
          if (puVar12 == (undefined8 *)0x0) {
            auVar18 = func_0x00f78af4();
            uVar3 = auVar18._8_8_;
            uVar9 = auVar18._0_8_;
            puStack_f8 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
            lVar15 = lVar14;
            uStack_150 = uVar17;
            uStack_148 = uVar7;
            uStack_130 = uVar16;
            puStack_128 = puVar10;
            lStack_120 = param_6;
            uStack_118 = uVar6;
            uStack_110 = uVar8;
            puStack_108 = puVar12;
            ppuStack_100 = &puStack_90;
            auStack_140 = auVar19;
            uVar2 = (**(code **)**(undefined8 **)(lVar14 + 0x30))();
            if ((uVar2 & 1) == 0) {
              auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar9,uVar3);
              puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28);
              uVar8 = uVar5;
              iVar1 = (*(code *)*puVar12)(auVar19._0_8_,auVar19._8_8_,puVar11,uVar5);
              if (iVar1 != 0) {
                do {
                  uVar7 = auVar19._8_8_;
                  uVar16 = auVar19._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                            (&uStack_188,uVar16,uVar7);
                  puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
                  (*(code *)*puVar10)(&uStack_1b0,uVar9,uVar3);
                  if (puVar13 == (undefined8 *)0x0) {
                    auVar18 = func_0x00f78af4();
                    auVar21._8_8_ = uVar8;
                    auVar21._0_8_ = puVar10;
                    uVar16 = auVar18._8_8_;
                    uVar8 = auVar18._0_8_;
                    iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))();
                    while( true ) {
                      if (iVar1 < 2) break;
                      auVar21 = (**(code **)**(undefined8 **)(lVar15 + 0x30))
                                          (auVar21._0_8_,auVar21._8_8_);
                      uVar5 = auVar21._8_8_;
                      (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))
                                (uVar8,uVar16,auVar21._0_8_,uVar5);
                      (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))
                                (uVar8,uVar16,uVar16,uVar5,puVar12);
                      iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))
                                        (uVar8,uVar16,auVar21._0_8_,uVar5);
                    }
                    return;
                  }
                  uStack_1d8 = uStack_180;
                  uStack_1e0 = uStack_188;
                  uStack_1c8 = uStack_170;
                  uStack_1d0 = uStack_178;
                  uStack_1c0 = uStack_168;
                  uStack_208 = uStack_1a8;
                  uStack_210 = uStack_1b0;
                  uStack_1f8 = uStack_198;
                  uStack_200 = uStack_1a0;
                  uStack_1f0 = uStack_190;
                  iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                                    (puVar13,&uStack_1e0,&uStack_210,
                                     *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x18));
                  if (iVar1 != 0) {
                    auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
                                        (auVar18._0_8_,auVar18._8_8_);
                    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                              (auVar18._0_8_,auVar18._8_8_,uVar16,uVar7);
                  }
                  auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar16,uVar7)
                  ;
                  puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28);
                  uVar8 = uVar5;
                  uVar2 = (*(code *)*puVar12)(auVar19._0_8_,auVar19._8_8_,puVar11);
                } while ((uVar2 & 1) != 0);
              }
              uVar8 = auVar18._8_8_;
              uVar16 = auVar18._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                        (uVar9,uVar3,uVar16,uVar8);
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x30))
                        (uVar9,uVar3,uVar16,uVar8,puVar13);
              auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar16,uVar8);
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x30))
                        (auVar18._0_8_,auVar18._8_8_,puVar11,uVar5,puVar13);
            }
            return;
          }
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (puVar12,uVar8,uVar9);
          if (iVar1 != 0) {
            auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar19._0_8_,auVar19._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                      (auVar19._0_8_,auVar19._8_8_,uVar7,uVar17);
          }
          auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar17);
          puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
          uVar5 = uVar6;
          uVar2 = (*(code *)*puVar13)(auVar18._0_8_,auVar18._8_8_,puVar10);
        } while ((uVar2 & 1) != 0);
      }
      uVar8 = uStack_e8;
      uVar5 = auVar19._8_8_;
      uVar9 = auVar19._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uStack_e8,uVar16,uVar9,uVar5);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (uVar8,uVar16,uVar9,uVar5,puVar12);
      auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar9,uVar5);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (auVar18._0_8_,auVar18._8_8_,puVar10,uVar6,puVar12);
      return;
    }
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar3,uVar4);
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    if (iVar1 == 0) {
      uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar9,uVar5);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar17,uVar7);
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar6,uVar3);
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
      if (iVar1 == 0) {
        uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar17,uVar7);
        (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar16,uVar8,uVar6);
        auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar17,uVar7);
      }
      else {
        uVar7 = (*UNRECOVERED_JUMPTABLE)(uVar9,uVar5);
        (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar16,uVar8,uVar7);
      }
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar9,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE)(uVar17,uVar7);
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar16,uVar8,uVar5);
      auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar17,uVar7);
    }
    auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar16,uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(param_12 + 0x30);
  } while( true );
}



// ============================================================
// RVA: 0x1814ff0 | Core.Containers.ArrayIteratorExtensions.Sort<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Sort_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  lVar11 = param_6;
  uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar2 & 1) != 0) {
    return;
  }
  auVar15 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2);
  puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
  uVar8 = param_4;
  iVar1 = (*(code *)*puVar9)(auVar15._0_8_,auVar15._8_8_,param_3);
  uStack_68 = param_1;
  if (iVar1 != 0) {
    do {
      uVar14 = auVar15._8_8_;
      uVar13 = auVar15._0_8_;
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar13,uVar14);
      puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
      uVar4 = (*(code *)*puVar6)(uStack_68,param_2);
      if (param_5 == 0) {
        auVar15 = func_0x00f78af4();
        uVar5 = auVar15._8_8_;
        uVar4 = auVar15._0_8_;
        puStack_78 = &Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_;
        lVar12 = lVar11;
        uStack_d0 = uVar14;
        uStack_c8 = uVar13;
        uStack_b0 = param_2;
        uStack_a8 = param_3;
        lStack_a0 = param_6;
        uStack_98 = param_4;
        uStack_90 = uVar3;
        lStack_88 = param_5;
        puStack_80 = &stack0xfffffffffffffff0;
        auStack_c0 = auVar16;
        uVar2 = (**(code **)**(undefined8 **)(lVar11 + 0x30))();
        if ((uVar2 & 1) == 0) {
          auVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(uVar4,uVar5);
          puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x28);
          uVar3 = uVar8;
          iVar1 = (*(code *)*puVar10)(auVar16._0_8_,auVar16._8_8_,puVar6,uVar8);
          if (iVar1 != 0) {
            do {
              uVar14 = auVar16._8_8_;
              uVar13 = auVar16._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x10))
                        (&uStack_108,uVar13,uVar14);
              puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x10);
              (*(code *)*puVar7)(&uStack_130,uVar4,uVar5);
              if (puVar9 == (undefined8 *)0x0) {
                auVar16 = func_0x00f78af4();
                auVar15._8_8_ = uVar3;
                auVar15._0_8_ = puVar7;
                uVar3 = auVar16._8_8_;
                uVar8 = auVar16._0_8_;
                iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))();
                while( true ) {
                  if (iVar1 < 2) break;
                  auVar15 = (**(code **)**(undefined8 **)(lVar12 + 0x30))
                                      (auVar15._0_8_,auVar15._8_8_);
                  uVar4 = auVar15._8_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                            (uVar8,uVar3,auVar15._0_8_,uVar4);
                  (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                            (uVar8,uVar3,uVar3,uVar4,puVar10);
                  iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))
                                    (uVar8,uVar3,auVar15._0_8_,uVar4);
                }
                return;
              }
              uStack_158 = uStack_100;
              uStack_160 = uStack_108;
              uStack_148 = uStack_f0;
              uStack_150 = uStack_f8;
              uStack_140 = uStack_e8;
              uStack_188 = uStack_128;
              uStack_190 = uStack_130;
              uStack_178 = uStack_118;
              uStack_180 = uStack_120;
              uStack_170 = uStack_110;
              iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x18))
                                (puVar9,&uStack_160,&uStack_190,
                                 *(undefined8 *)(*(long *)(lVar11 + 0x30) + 0x18));
              if (iVar1 != 0) {
                auVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))
                                    (auVar15._0_8_,auVar15._8_8_);
                (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x20))
                          (auVar15._0_8_,auVar15._8_8_,uVar13,uVar14);
              }
              auVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(uVar13,uVar14);
              puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x28);
              uVar3 = uVar8;
              uVar2 = (*(code *)*puVar10)(auVar16._0_8_,auVar16._8_8_,puVar6);
            } while ((uVar2 & 1) != 0);
          }
          uVar3 = auVar15._8_8_;
          uVar13 = auVar15._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x20))(uVar4,uVar5,uVar13,uVar3);
          (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x30))
                    (uVar4,uVar5,uVar13,uVar3,puVar9);
          auVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(uVar13,uVar3);
          (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x30))
                    (auVar16._0_8_,auVar16._8_8_,puVar6,uVar8,puVar9);
        }
        return;
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar3,uVar4);
      if (iVar1 != 0) {
        auVar16 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar16._0_8_,auVar16._8_8_);
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                  (auVar16._0_8_,auVar16._8_8_,uVar13,uVar14);
      }
      auVar15 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar13,uVar14);
      puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      uVar8 = param_4;
      uVar2 = (*(code *)*puVar9)(auVar15._0_8_,auVar15._8_8_,param_3);
    } while ((uVar2 & 1) != 0);
  }
  uVar8 = uStack_68;
  uVar3 = auVar16._8_8_;
  uVar4 = auVar16._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uStack_68,param_2,uVar4,uVar3);
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))(uVar8,param_2,uVar4,uVar3,param_5);
  auVar16 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x01815210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
            (auVar16._0_8_,auVar16._8_8_,param_3,param_4,param_5);
  return;
}



// ============================================================
// RVA: 0x1815218 | Core.Containers.ArrayIteratorExtensions.Sort<PlayerRankingPair>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Sort_PlayerRankingPair_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  lVar6 = param_6;
  uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar2 & 1) == 0) {
    auVar9 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2);
    puVar5 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    uVar4 = param_4;
    iVar1 = (*(code *)*puVar5)(auVar9._0_8_,auVar9._8_8_,param_3,param_4);
    if (iVar1 != 0) {
      do {
        uVar8 = auVar9._8_8_;
        uVar7 = auVar9._0_8_;
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_98,uVar7,uVar8);
        puVar3 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        (*(code *)*puVar3)(&uStack_c0,param_1,param_2);
        if (param_5 == 0) {
          auVar10 = func_0x00f78af4();
          auVar9._8_8_ = uVar4;
          auVar9._0_8_ = puVar3;
          uVar7 = auVar10._8_8_;
          uVar4 = auVar10._0_8_;
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x18))();
          while( true ) {
            if (iVar1 < 2) break;
            auVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x30))(auVar9._0_8_,auVar9._8_8_);
            uVar8 = auVar9._8_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8))
                      (uVar4,uVar7,auVar9._0_8_,uVar8);
            (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))
                      (uVar4,uVar7,uVar7,uVar8,puVar5);
            iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x18))
                              (uVar4,uVar7,auVar9._0_8_,uVar8);
          }
          return;
        }
        uStack_e8 = uStack_90;
        uStack_f0 = uStack_98;
        uStack_d8 = uStack_80;
        uStack_e0 = uStack_88;
        uStack_d0 = uStack_78;
        uStack_118 = uStack_b8;
        uStack_120 = uStack_c0;
        uStack_108 = uStack_a8;
        uStack_110 = uStack_b0;
        uStack_100 = uStack_a0;
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                          (param_5,&uStack_f0,&uStack_120,
                           *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
        if (iVar1 != 0) {
          auVar10 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar10._0_8_,auVar10._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar10._0_8_,auVar10._8_8_,uVar7,uVar8);
        }
        auVar9 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar8);
        puVar5 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        uVar4 = param_4;
        uVar2 = (*(code *)*puVar5)(auVar9._0_8_,auVar9._8_8_,param_3);
      } while ((uVar2 & 1) != 0);
    }
    uVar4 = auVar10._8_8_;
    uVar7 = auVar10._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(param_1,param_2,uVar7,uVar4);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (param_1,param_2,uVar7,uVar4,param_5);
    auVar10 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar4);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (auVar10._0_8_,auVar10._8_8_,param_3,param_4,param_5);
  }
  return;
}



// ============================================================
// RVA: 0x181544c | Core.Containers.ArrayIteratorExtensions.SortHeap<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__SortHeap_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  undefined1 auVar3 [16];
  undefined8 uVar2;
  
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_3;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))();
  while (1 < iVar1) {
    auVar3 = (**(code **)**(undefined8 **)(param_6 + 0x30))(auVar3._0_8_,auVar3._8_8_);
    uVar2 = auVar3._8_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2,auVar3._0_8_,uVar2);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
              (param_1,param_2,param_2,uVar2,param_5);
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                      (param_1,param_2,auVar3._0_8_,uVar2);
  }
  return;
}



// ============================================================
// RVA: 0x1815530 | Core.Containers.ArrayIteratorExtensions.StableSort<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__StableSort_object_
               (long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,long param_5,
               long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 auVar14 [16];
  ulong uVar13;
  
  uVar2 = (uint)param_2;
  iVar3 = (int)param_4;
  if ((int)(uVar2 + 1) < iVar3) {
    lVar4 = param_5;
    if (param_1 == 0) {
LAB_0181569c:
      auVar14 = func_0x00f78af4();
      uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x30))();
      uVar8 = (**(code **)**(undefined8 **)(lVar4 + 0x30))(param_3,param_4);
      (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8))(auVar14._0_8_,auVar14._8_8_,uVar8);
                    /* WARNING: Could not recover jumptable at 0x01815738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8))(param_3,param_4,uVar6);
      return;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = (long)(int)(uVar2 + 1);
    uVar11 = param_2;
    do {
      uVar9 = uVar7;
      if ((uint)uVar6 <= (uint)uVar9) {
LAB_01815690:
        uVar6 = func_0x00f78b24();
        func_0x00f78ac0(uVar6,0);
        goto LAB_0181569c;
      }
      uVar8 = *(undefined8 *)(param_1 + uVar9 * 8 + 0x20);
      uVar7 = uVar11;
      uVar13 = param_2;
      uVar12 = uVar2;
      if ((int)uVar2 <= (int)uVar11) {
        do {
          while( true ) {
            uVar12 = (uint)uVar13;
            iVar1 = uVar12 + (int)uVar7;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            uVar5 = iVar1 >> 1;
            if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_01815690;
            if (param_5 == 0) goto LAB_0181569c;
            param_3 = *(undefined8 *)(param_1 + (long)(int)uVar5 * 8 + 0x20);
            param_4 = (undefined8 *)**(undefined8 **)(param_6 + 0x30);
            iVar1 = (*(code *)*param_4)(param_5,uVar8,param_3);
            if (iVar1 != 0) break;
            uVar12 = uVar5 + 1;
            uVar13 = (ulong)uVar12;
            if ((int)uVar7 <= (int)uVar5) goto code_r0x018155a4;
          }
          uVar7 = (ulong)(uVar5 - 1);
        } while ((int)uVar12 < (int)uVar5);
      }
code_r0x018155a4:
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      while( true ) {
        uVar10 = (uint)uVar11;
        uVar5 = (uint)uVar6;
        if ((int)uVar10 < (int)uVar12) break;
        if ((uVar5 <= uVar10) || (uVar5 <= uVar10 + 1)) goto LAB_01815690;
        *(undefined8 *)(param_1 + 0x20 + (long)(int)(uVar10 + 1) * 8) =
             *(undefined8 *)(param_1 + 0x20 + (long)(int)uVar10 * 8);
        uVar11 = (ulong)(uVar10 - 1);
      }
      if (uVar5 <= uVar12) goto LAB_01815690;
      *(undefined8 *)(param_1 + (long)(int)uVar12 * 8 + 0x20) = uVar8;
      uVar7 = uVar9 + 1;
      uVar11 = uVar9;
    } while ((int)(uVar9 + 1) < iVar3);
  }
  return;
}



// ============================================================
// RVA: 0x18156a0 | Core.Containers.ArrayIteratorExtensions.Swap<object>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Swap_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
  uVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3,param_4);
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x01815738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(param_3,param_4,uVar1);
  return;
}



// ============================================================
// RVA: 0x181573c | Core.Containers.ArrayIteratorExtensions.Swap<PlayerRankingPair>
// ============================================================

void Core_Containers_ArrayIteratorExtensions__Swap_PlayerRankingPair_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  (**(code **)**(undefined8 **)(param_5 + 0x30))(&uStack_a8);
  uStack_78 = uStack_a0;
  uStack_80 = uStack_a8;
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  (**(code **)**(undefined8 **)(param_5 + 0x30))(&uStack_d0,param_3,param_4);
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_e0 = uStack_b0;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))
            (param_1,param_2,&uStack_100,*(undefined8 *)(*(long *)(param_5 + 0x30) + 8));
  uStack_128 = uStack_78;
  uStack_130 = uStack_80;
  uStack_118 = uStack_68;
  uStack_120 = uStack_70;
  uStack_110 = uStack_60;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))
            (param_3,param_4,&uStack_130,*(undefined8 *)(*(long *)(param_5 + 0x30) + 8));
  return;
}



// ============================================================
// RVA: 0x181582c | Core.Containers.ArrayIteratorExtensions.SwapRanges<object>
// ============================================================

undefined1  [16]
Core_Containers_ArrayIteratorExtensions__SwapRanges_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = param_6;
  auVar4._0_8_ = param_5;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))();
  if (iVar1 != 0) {
    do {
      (**(code **)**(undefined8 **)(param_7 + 0x30))
                (auVar3._0_8_,auVar3._8_8_,auVar4._0_8_,auVar4._8_8_);
      auVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))
                         (auVar3._0_8_,auVar3._8_8_);
      auVar4 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))
                         (auVar4._0_8_,auVar4._8_8_);
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))
                        (auVar3._0_8_,auVar3._8_8_,param_3,param_4);
    } while ((uVar2 & 1) != 0);
  }
  return auVar4;
}



// ============================================================
// RVA: 0x1815918 | Core.Containers.ArrayIteratorExtensions.Transform<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1815a34 | Core.Containers.ArrayIteratorExtensions.Transform<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1815ba8 | Core.Containers.ArrayIteratorExtensions.Unique<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1815d38 | Core.Containers.ArrayIteratorExtensions.UniqueCopy<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1815ed8 | Core.Containers.ArrayIteratorExtensions.UpperBound<object>
// ============================================================
// [DECOMPILE_FAILED]

