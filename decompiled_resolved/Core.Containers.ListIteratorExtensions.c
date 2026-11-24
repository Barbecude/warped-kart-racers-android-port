// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ListIteratorExtensions

// ============================================================
// RVA: 0x1874aa0 | Core.Containers.ListIteratorExtensions.AdjacentFind<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__AdjacentFind_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar8;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = param_1;
  lVar22 = param_6;
  iVar7 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if (iVar7 != 0) {
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2);
    puVar17 = (undefined8 *)**(long **)(param_6 + 0x30);
    uVar15 = param_4;
    iVar7 = (*(code *)*puVar17)(auVar25._0_8_,auVar25._8_8_,param_3);
    if (iVar7 != 0) {
      do {
        uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                          (auVar26._0_8_,auVar26._8_8_);
        puVar16 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar10 = (*(code *)*puVar16)(auVar25._0_8_,auVar25._8_8_);
        if (param_5 == 0) {
          auVar29 = func_0x00f78af4();
          iVar7 = auVar29._8_4_;
          plVar12 = auVar29._0_8_;
          puVar18 = puVar17;
          lVar20 = lVar22;
          if (plVar12 == (long *)0x0) goto code_r0x01875284;
          lVar23 = **(long **)(lVar22 + 0x30);
          uVar9 = uVar15;
          if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar23);
          }
          lVar19 = *plVar12;
          uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar11 == 0) goto code_r0x01874c8c;
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto code_r0x01874c74;
        }
        uVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                           (param_5,uVar9,uVar10);
        if ((uVar11 & 1) != 0) {
          return auVar26;
        }
        auVar26 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar26._0_8_,auVar26._8_8_);
        auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar25._0_8_,auVar25._8_8_);
        puVar17 = (undefined8 *)**(long **)(param_6 + 0x30);
        uVar15 = param_4;
        uVar11 = (*(code *)*puVar17)(auVar25._0_8_,auVar25._8_8_,param_3);
      } while ((uVar11 & 1) != 0);
    }
  }
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_3;
  return auVar3;
  while( true ) {
    piVar21 = piVar21 + 4;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) break;
code_r0x01874c74:
    if (*(long *)(piVar21 + -2) == lVar23) {
      puVar13 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto code_r0x01874cac;
    }
  }
code_r0x01874c8c:
  puVar13 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,0);
code_r0x01874cac:
  uVar10 = (*(code *)*puVar13)(plVar12,puVar16,puVar13[1]);
  uVar24 = (int)uVar15 - iVar7;
  uVar1 = (int)puVar16 - iVar7;
  uVar4 = uVar1;
  uVar15 = uVar9;
  while( true ) {
    uVar5 = uVar4 * 2;
    uVar6 = uVar5 + 2;
    if ((int)uVar24 <= (int)uVar6) break;
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x01874d44;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,0);
code_r0x01874d44:
    uVar9 = (*(code *)*puVar16)(plVar12,uVar6 + iVar7,puVar16[1]);
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x01874dbc;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,0);
code_r0x01874dbc:
    puVar16 = (undefined8 *)puVar13[1];
    uVar14 = (*(code *)*puVar13)(plVar12,(uVar5 | 1) + iVar7);
    if (puVar17 == (undefined8 *)0x0) goto code_r0x01875284;
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(puVar17,uVar9,uVar14);
    uVar5 = uVar5 | 1;
    if (iVar8 == 0) {
      uVar5 = uVar6;
    }
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x01874e5c;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,0);
code_r0x01874e5c:
    uVar9 = (*(code *)*puVar16)(plVar12,uVar5 + iVar7,puVar16[1]);
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto code_r0x01874ed8;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,1);
code_r0x01874ed8:
    uVar15 = puVar16[1];
    (*(code *)*puVar16)(plVar12,uVar4 + iVar7,uVar9);
    uVar4 = uVar5;
  }
  if (uVar6 == uVar24) {
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x01874f94;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,0);
code_r0x01874f94:
    uVar9 = (*(code *)*puVar16)(plVar12,(uVar5 | 1) + iVar7,puVar16[1]);
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto code_r0x01875014;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,1);
code_r0x01875014:
    uVar15 = puVar16[1];
    (*(code *)*puVar16)(plVar12,uVar4 + iVar7,uVar9);
    uVar4 = uVar5 | 1;
  }
  while (uVar24 = uVar1, uVar4 != uVar1) {
    uVar5 = uVar4;
    if (-1 < (int)(uVar4 - 1)) {
      uVar5 = uVar4 - 1;
    }
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x018750a8;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,0);
code_r0x018750a8:
    iVar8 = ((int)uVar5 >> 1) + iVar7;
    puVar16 = (undefined8 *)puVar13[1];
    uVar9 = (*(code *)*puVar13)(plVar12,iVar8);
    if (puVar17 == (undefined8 *)0x0) {
code_r0x01875284:
      auVar26 = func_0x00f78af4();
      puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18);
      uVar9 = uVar15;
      lVar22 = lVar20;
      iVar7 = (*(code *)*puVar17)();
      if (iVar7 == 0) {
        auVar25._8_8_ = extraout_x1;
        auVar25._0_8_ = 1;
      }
      else {
        do {
          puVar13 = (undefined8 *)**(undefined8 **)(lVar20 + 0x30);
          uVar10 = (*(code *)*puVar13)(auVar26._0_8_,auVar26._8_8_);
          if (puVar18 == (undefined8 *)0x0) {
            auVar26 = func_0x00f78af4();
            iVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))();
            if (iVar7 == 0) {
              auVar2._8_8_ = 0;
              auVar2._0_8_ = extraout_x1_00;
              return auVar2 << 0x40;
            }
            while( true ) {
              uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x30))(auVar26._0_8_,auVar26._8_8_);
              if (puVar17 == (undefined8 *)0x0) {
                auVar27._0_8_ = func_0x00f78af4();
                auVar27._8_8_ = 0;
                return auVar27;
              }
              auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(puVar17,uVar15);
              if ((auVar25._0_8_ & 1) != 0) break;
              auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))
                                  (auVar26._0_8_,auVar26._8_8_);
              auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                                  (auVar26._0_8_,auVar26._8_8_,puVar13,uVar9);
              auVar28._8_8_ = auVar27._8_8_;
              auVar28._0_8_ = auVar25._0_8_;
              if ((auVar27._0_8_ & 1) == 0) {
                return auVar28;
              }
            }
            return auVar25;
          }
          auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))(puVar18,uVar10);
          if (auVar27._0_4_ == 0) {
            return auVar27;
          }
          auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))
                              (auVar26._0_8_,auVar26._8_8_);
          puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18);
          uVar9 = uVar15;
          auVar28 = (*(code *)*puVar17)(auVar26._0_8_,auVar26._8_8_,puVar16);
          auVar25._8_8_ = auVar28._8_8_;
          auVar25._0_8_ = auVar27._0_8_;
        } while ((auVar28._0_8_ & 1) != 0);
      }
      return auVar25;
    }
    uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(puVar17,uVar9,uVar10);
    uVar24 = uVar4;
    if ((uVar11 & 1) == 0) break;
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x01875148;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,0);
code_r0x01875148:
    uVar9 = (*(code *)*puVar16)(plVar12,iVar8,puVar16[1]);
    lVar23 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar19 = *plVar12;
    uVar11 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar23) {
          puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto code_r0x018751c4;
        }
        piVar21 = piVar21 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar12,lVar23,1);
code_r0x018751c4:
    uVar15 = puVar16[1];
    (*(code *)*puVar16)(plVar12,uVar4 + iVar7,uVar9);
    uVar4 = (int)uVar5 >> 1;
  }
  lVar22 = **(long **)(lVar22 + 0x30);
  if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar22);
  }
  lVar20 = *plVar12;
  uVar11 = (ulong)*(ushort *)(lVar20 + 0x12a);
  if (uVar11 != 0) {
    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar22) {
        puVar17 = (undefined8 *)(lVar20 + (long)(*piVar21 + 1) * 0x10 + 0x138);
        goto code_r0x01875254;
      }
      piVar21 = piVar21 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,1);
code_r0x01875254:
                    /* WARNING: Could not recover jumptable at 0x01875280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar26 = (*(code *)*puVar17)(plVar12,uVar24 + iVar7,uVar10,puVar17[1]);
  return auVar26;
}



// ============================================================
// RVA: 0x1874c0c | Core.Containers.ListIteratorExtensions.AdjustHeap<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__AdjustHeap_object_
                (long *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  
  lVar16 = param_5;
  lVar13 = param_6;
  if (param_1 == (long *)0x0) {
LAB_01875284:
    auVar19 = func_0x00f78af4();
    puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18);
    uVar8 = param_4;
    lVar17 = lVar13;
    iVar5 = (*(code *)*puVar6)();
    if (iVar5 == 0) {
      uVar14 = 1;
    }
    else {
      do {
        puVar11 = (undefined8 *)**(undefined8 **)(lVar13 + 0x30);
        uVar7 = (*(code *)*puVar11)(auVar19._0_8_,auVar19._8_8_);
        if (lVar16 == 0) {
          auVar19 = func_0x00f78af4();
          iVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))();
          if (iVar5 == 0) {
            return 0;
          }
          while( true ) {
            uVar7 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(auVar19._0_8_,auVar19._8_8_);
            if (puVar6 == (undefined8 *)0x0) {
              uVar14 = func_0x00f78af4();
              return uVar14;
            }
            uVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(puVar6,uVar7);
            if ((uVar14 & 1) != 0) break;
            auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))
                                (auVar19._0_8_,auVar19._8_8_);
            uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))
                               (auVar19._0_8_,auVar19._8_8_,puVar11,uVar8);
            if ((uVar10 & 1) == 0) {
              return uVar14;
            }
          }
          return uVar14;
        }
        uVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(lVar16,uVar7);
        if ((int)uVar14 == 0) {
          return uVar14;
        }
        auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))
                            (auVar19._0_8_,auVar19._8_8_);
        puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18);
        uVar8 = param_4;
        uVar10 = (*(code *)*puVar6)(auVar19._0_8_,auVar19._8_8_,param_3);
      } while ((uVar10 & 1) != 0);
    }
    return uVar14;
  }
  lVar17 = **(long **)(param_6 + 0x30);
  uVar8 = param_4;
  if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar17);
  }
  lVar12 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar17) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01874cac;
      }
      piVar15 = piVar15 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,0);
LAB_01874cac:
  uVar7 = (*(code *)*puVar6)(param_1,param_3,puVar6[1]);
  uVar18 = (int)param_4 - param_2;
  uVar1 = (int)param_3 - param_2;
  uVar2 = uVar1;
  param_4 = uVar8;
  while( true ) {
    uVar3 = uVar2 * 2;
    uVar4 = uVar3 + 2;
    if ((int)uVar18 <= (int)uVar4) break;
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x01874d44;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,0);
code_r0x01874d44:
    uVar8 = (*(code *)*puVar6)(param_1,uVar4 + param_2,puVar6[1]);
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x01874dbc;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,0);
code_r0x01874dbc:
    param_3 = puVar6[1];
    uVar9 = (*(code *)*puVar6)(param_1,(uVar3 | 1) + param_2);
    if (param_5 == 0) goto LAB_01875284;
    iVar5 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar8,uVar9);
    uVar3 = uVar3 | 1;
    if (iVar5 == 0) {
      uVar3 = uVar4;
    }
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x01874e5c;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,0);
code_r0x01874e5c:
    uVar8 = (*(code *)*puVar6)(param_1,uVar3 + param_2,puVar6[1]);
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto code_r0x01874ed8;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,1);
code_r0x01874ed8:
    param_4 = puVar6[1];
    (*(code *)*puVar6)(param_1,uVar2 + param_2,uVar8);
    uVar2 = uVar3;
  }
  if (uVar4 == uVar18) {
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x01874f94;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,0);
code_r0x01874f94:
    uVar8 = (*(code *)*puVar6)(param_1,(uVar3 | 1) + param_2,puVar6[1]);
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto code_r0x01875014;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,1);
code_r0x01875014:
    param_4 = puVar6[1];
    (*(code *)*puVar6)(param_1,uVar2 + param_2,uVar8);
    uVar2 = uVar3 | 1;
  }
  while (uVar18 = uVar1, uVar2 != uVar1) {
    uVar3 = uVar2;
    if (-1 < (int)(uVar2 - 1)) {
      uVar3 = uVar2 - 1;
    }
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x018750a8;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,0);
code_r0x018750a8:
    iVar5 = ((int)uVar3 >> 1) + param_2;
    param_3 = puVar6[1];
    uVar8 = (*(code *)*puVar6)(param_1,iVar5);
    if (param_5 == 0) goto LAB_01875284;
    uVar14 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_5,uVar8,uVar7);
    uVar18 = uVar2;
    if ((uVar14 & 1) == 0) break;
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x01875148;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,0);
code_r0x01875148:
    uVar8 = (*(code *)*puVar6)(param_1,iVar5,puVar6[1]);
    lVar17 = **(long **)(param_6 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar12 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar17) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto code_r0x018751c4;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar17,1);
code_r0x018751c4:
    param_4 = puVar6[1];
    (*(code *)*puVar6)(param_1,uVar2 + param_2,uVar8);
    uVar2 = (int)uVar3 >> 1;
  }
  lVar16 = **(long **)(param_6 + 0x30);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  lVar13 = *param_1;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar16) {
        puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto code_r0x01875254;
      }
      piVar15 = piVar15 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)func_0x00fac1f0(param_1,lVar16,1);
code_r0x01875254:
                    /* WARNING: Could not recover jumptable at 0x01875280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar14 = (*(code *)*puVar6)(param_1,uVar18 + param_2,uVar7,puVar6[1]);
  return uVar14;
}



// ============================================================
// RVA: 0x1875288 | Core.Containers.ListIteratorExtensions.AllOf<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__AllOf_object_
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
// RVA: 0x187536c | Core.Containers.ListIteratorExtensions.AnyOf<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__AnyOf_object_
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
// RVA: 0x1875450 | Core.Containers.ListIteratorExtensions.Begin<NetworkEventStanding>
// ============================================================

void Core_Containers_ListIteratorExtensions__Begin_NetworkEventStanding_(void)

{
  return;
}



// ============================================================
// RVA: 0x1875458 | Core.Containers.ListIteratorExtensions.Begin<NetworkPlayer>
// ============================================================

void Core_Containers_ListIteratorExtensions__Begin_NetworkPlayer_(void)

{
  return;
}



// ============================================================
// RVA: 0x1875460 | Core.Containers.ListIteratorExtensions.Begin<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__Begin_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x1875468 | Core.Containers.ListIteratorExtensions.BinarySearch<object>
// ============================================================

undefined8 *
Core_Containers_ListIteratorExtensions__BinarySearch_object_
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
// RVA: 0x1875520 | Core.Containers.ListIteratorExtensions.Copy<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__Copy_object_
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
// RVA: 0x1875618 | Core.Containers.ListIteratorExtensions.CopyBackward<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__CopyBackward_object_
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
// RVA: 0x1875720 | Core.Containers.ListIteratorExtensions.CopyIf<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__CopyIf_object_
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
// RVA: 0x1875858 | Core.Containers.ListIteratorExtensions.CopyN<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__CopyN_object_
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
// RVA: 0x1875928 | Core.Containers.ListIteratorExtensions.Count<object>
// ============================================================

int Core_Containers_ListIteratorExtensions__Count_object_
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
// RVA: 0x1875a0c | Core.Containers.ListIteratorExtensions.CountIf<object>
// ============================================================

int Core_Containers_ListIteratorExtensions__CountIf_object_
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
// RVA: 0x1875ae8 | Core.Containers.ListIteratorExtensions.Distance<object>
// ============================================================

int Core_Containers_ListIteratorExtensions__Distance_object_
              (undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  return param_4 - param_2;
}



// ============================================================
// RVA: 0x1875af0 | Core.Containers.ListIteratorExtensions.End<NetworkEventStanding>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__End_NetworkEventStanding_
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long unaff_x28;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_1 == (long *)0x0) {
    auVar14 = func_0x00f78af4();
    if (auVar14._0_8_ == (long *)0x0) {
      auVar14 = func_0x00f78af4();
      auVar15._0_8_ = auVar14._0_8_;
      if (auVar15._0_8_ == (long *)0x0) {
        auVar14 = func_0x00f78af4();
        auVar16._8_8_ = param_6;
        auVar16._0_8_ = param_5;
        puVar3 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
        uVar7 = param_4;
        pauVar8 = param_7;
        pauVar9 = param_8;
        iVar2 = (*(code *)*puVar3)();
        if (iVar2 == 0) {
          auVar1._8_8_ = extraout_x1;
          auVar1._0_8_ = 1;
        }
        else {
          do {
            uVar4 = (**(code **)**(undefined8 **)param_8[3])(auVar14._0_8_,auVar14._8_8_);
            puVar6 = (undefined8 *)**(undefined8 **)param_8[3];
            uVar5 = (*(code *)*puVar6)(auVar16._0_8_,auVar16._8_8_);
            if (param_7 == (undefined1 (*) [16])0x0) {
              func_0x00f78af4();
              auVar14 = (**(code **)**(undefined8 **)(unaff_x28 + 0x30))();
              *pauVar8 = auVar14;
              auVar14 = (*(code *)**(undefined8 **)(*(long *)(unaff_x28 + 0x30) + 8))
                                  (auVar14._0_8_,auVar14._8_8_,puVar6,uVar7,puVar3,param_6);
              *pauVar9 = auVar14;
              return auVar14;
            }
            auVar15 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(param_7,uVar4,uVar5);
            if (auVar15._0_4_ == 0) {
              return auVar15;
            }
            auVar14 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                                (auVar14._0_8_,auVar14._8_8_);
            auVar16 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                                (auVar16._0_8_,auVar16._8_8_);
            puVar3 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
            uVar7 = param_4;
            auVar17 = (*(code *)*puVar3)(auVar14._0_8_,auVar14._8_8_,param_3);
            auVar1._8_8_ = auVar17._8_8_;
            auVar1._0_8_ = auVar15._0_8_;
          } while ((auVar17._0_8_ & 1) != 0);
        }
        return auVar1;
      }
      lVar13 = **(long **)(auVar14._8_8_ + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      lVar10 = *auVar15._0_8_;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar13) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x01875ca0;
          }
          piVar12 = piVar12 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(auVar15._0_8_,lVar13,0);
code_r0x01875ca0:
      uVar11 = (*(code *)*puVar3)(auVar15._0_8_,puVar3[1]);
      auVar15._8_8_ = uVar11 & 0xffffffff;
      return auVar15;
    }
    lVar13 = **(long **)(auVar14._8_8_ + 0x30);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    lVar10 = *auVar14._0_8_;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01875c04;
        }
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(auVar14._0_8_,lVar13,0);
code_r0x01875c04:
    uVar11 = (*(code *)*puVar3)(auVar14._0_8_,puVar3[1]);
    auVar14._8_8_ = uVar11 & 0xffffffff;
    return auVar14;
  }
  lVar13 = **(long **)(param_2 + 0x30);
  if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  lVar10 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar13) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_01875b68;
      }
      piVar12 = piVar12 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  puVar3 = (undefined8 *)func_0x00fac1f0(param_1,lVar13,0);
LAB_01875b68:
  uVar11 = (*(code *)*puVar3)(param_1,puVar3[1]);
  auVar17._8_8_ = uVar11 & 0xffffffff;
  auVar17._0_8_ = param_1;
  return auVar17;
}



// ============================================================
// RVA: 0x1875b8c | Core.Containers.ListIteratorExtensions.End<NetworkPlayer>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__End_NetworkPlayer_
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long unaff_x28;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_1 == (long *)0x0) {
    auVar14 = func_0x00f78af4();
    if (auVar14._0_8_ == (long *)0x0) {
      auVar14 = func_0x00f78af4();
      auVar16._8_8_ = param_6;
      auVar16._0_8_ = param_5;
      puVar3 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
      uVar7 = param_4;
      pauVar8 = param_7;
      pauVar9 = param_8;
      iVar2 = (*(code *)*puVar3)();
      if (iVar2 == 0) {
        auVar1._8_8_ = extraout_x1;
        auVar1._0_8_ = 1;
      }
      else {
        do {
          uVar4 = (**(code **)**(undefined8 **)param_8[3])(auVar14._0_8_,auVar14._8_8_);
          puVar6 = (undefined8 *)**(undefined8 **)param_8[3];
          uVar5 = (*(code *)*puVar6)(auVar16._0_8_,auVar16._8_8_);
          if (param_7 == (undefined1 (*) [16])0x0) {
            func_0x00f78af4();
            auVar14 = (**(code **)**(undefined8 **)(unaff_x28 + 0x30))();
            *pauVar8 = auVar14;
            auVar14 = (*(code *)**(undefined8 **)(*(long *)(unaff_x28 + 0x30) + 8))
                                (auVar14._0_8_,auVar14._8_8_,puVar6,uVar7,puVar3,param_6);
            *pauVar9 = auVar14;
            return auVar14;
          }
          auVar15 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(param_7,uVar4,uVar5);
          if (auVar15._0_4_ == 0) {
            return auVar15;
          }
          auVar14 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                              (auVar14._0_8_,auVar14._8_8_);
          auVar16 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                              (auVar16._0_8_,auVar16._8_8_);
          puVar3 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
          uVar7 = param_4;
          auVar17 = (*(code *)*puVar3)(auVar14._0_8_,auVar14._8_8_,param_3);
          auVar1._8_8_ = auVar17._8_8_;
          auVar1._0_8_ = auVar15._0_8_;
        } while ((auVar17._0_8_ & 1) != 0);
      }
      return auVar1;
    }
    lVar13 = **(long **)(auVar14._8_8_ + 0x30);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    lVar10 = *auVar14._0_8_;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x01875ca0;
        }
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(auVar14._0_8_,lVar13,0);
code_r0x01875ca0:
    uVar11 = (*(code *)*puVar3)(auVar14._0_8_,puVar3[1]);
    auVar14._8_8_ = uVar11 & 0xffffffff;
    return auVar14;
  }
  lVar13 = **(long **)(param_2 + 0x30);
  if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  lVar10 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar13) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_01875c04;
      }
      piVar12 = piVar12 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  puVar3 = (undefined8 *)func_0x00fac1f0(param_1,lVar13,0);
LAB_01875c04:
  uVar11 = (*(code *)*puVar3)(param_1,puVar3[1]);
  auVar15._8_8_ = uVar11 & 0xffffffff;
  auVar15._0_8_ = param_1;
  return auVar15;
}



// ============================================================
// RVA: 0x1875c28 | Core.Containers.ListIteratorExtensions.End<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__End_object_
          (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined1 (*param_7) [16],undefined1 (*param_8) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long unaff_x28;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_1 == (long *)0x0) {
    auVar14 = func_0x00f78af4();
    auVar16._8_8_ = param_6;
    auVar16._0_8_ = param_5;
    puVar3 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
    uVar7 = param_4;
    pauVar8 = param_7;
    pauVar9 = param_8;
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 == 0) {
      auVar1._8_8_ = extraout_x1;
      auVar1._0_8_ = 1;
    }
    else {
      do {
        uVar4 = (**(code **)**(undefined8 **)param_8[3])(auVar14._0_8_,auVar14._8_8_);
        puVar6 = (undefined8 *)**(undefined8 **)param_8[3];
        uVar5 = (*(code *)*puVar6)(auVar16._0_8_,auVar16._8_8_);
        if (param_7 == (undefined1 (*) [16])0x0) {
          func_0x00f78af4();
          auVar14 = (**(code **)**(undefined8 **)(unaff_x28 + 0x30))();
          *pauVar8 = auVar14;
          auVar14 = (*(code *)**(undefined8 **)(*(long *)(unaff_x28 + 0x30) + 8))
                              (auVar14._0_8_,auVar14._8_8_,puVar6,uVar7,puVar3,param_6);
          *pauVar9 = auVar14;
          return auVar14;
        }
        auVar15 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 8))(param_7,uVar4,uVar5);
        if (auVar15._0_4_ == 0) {
          return auVar15;
        }
        auVar14 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                            (auVar14._0_8_,auVar14._8_8_);
        auVar16 = (*(code *)**(undefined8 **)(*(long *)param_8[3] + 0x10))
                            (auVar16._0_8_,auVar16._8_8_);
        puVar3 = *(undefined8 **)(*(long *)param_8[3] + 0x18);
        uVar7 = param_4;
        auVar17 = (*(code *)*puVar3)(auVar14._0_8_,auVar14._8_8_,param_3);
        auVar1._8_8_ = auVar17._8_8_;
        auVar1._0_8_ = auVar15._0_8_;
      } while ((auVar17._0_8_ & 1) != 0);
    }
    return auVar1;
  }
  lVar13 = **(long **)(param_2 + 0x30);
  if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
  }
  lVar10 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar13) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_01875ca0;
      }
      piVar12 = piVar12 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  puVar3 = (undefined8 *)func_0x00fac1f0(param_1,lVar13,0);
LAB_01875ca0:
  uVar11 = (*(code *)*puVar3)(param_1,puVar3[1]);
  auVar14._8_8_ = uVar11 & 0xffffffff;
  auVar14._0_8_ = param_1;
  return auVar14;
}



// ============================================================
// RVA: 0x1875cc4 | Core.Containers.ListIteratorExtensions.Equal<object>
// ============================================================

undefined8
Core_Containers_ListIteratorExtensions__Equal_object_
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
// RVA: 0x1875e00 | Core.Containers.ListIteratorExtensions.EqualRange<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__EqualRange_object_
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
// RVA: 0x1875e84 | Core.Containers.ListIteratorExtensions.Find<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__Find_object_
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
// RVA: 0x1875f74 | Core.Containers.ListIteratorExtensions.FindEnd<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__FindEnd_object_
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
// RVA: 0x187617c | Core.Containers.ListIteratorExtensions.FindFirstOf<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__FindFirstOf_object_
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
// RVA: 0x1876314 | Core.Containers.ListIteratorExtensions.FindIf<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__FindIf_object_
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
// RVA: 0x18763f4 | Core.Containers.ListIteratorExtensions.FindIfNot<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__FindIfNot_object_
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
// RVA: 0x18764d4 | Core.Containers.ListIteratorExtensions.ForEach<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__ForEach_object_
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
// RVA: 0x187659c | Core.Containers.ListIteratorExtensions.GetAdvanced<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetAdvanced_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x18765a4 | Core.Containers.ListIteratorExtensions.GetCurrent<NetworkEventStanding>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetCurrent_NetworkEventStanding_
               (undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == (long *)0x0) {
    auVar7 = func_0x00f78af4();
    plVar2 = auVar7._0_8_;
    if (plVar2 == (long *)0x0) {
      auVar7 = func_0x00f78af4();
      plVar2 = auVar7._0_8_;
      if (plVar2 == (long *)0x0) {
        func_0x00f78af4();
        return;
      }
      lVar6 = **(long **)(param_4 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
      }
      lVar3 = *plVar2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar6) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x018767a8;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)func_0x00fac1f0(plVar2,lVar6,0);
code_r0x018767a8:
                    /* WARNING: Could not recover jumptable at 0x018767c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(plVar2,auVar7._8_8_,puVar1[1]);
      return;
    }
    lVar6 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar6) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x018766f4;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(plVar2,lVar6,0);
code_r0x018766f4:
    (*(code *)*puVar1)(&uStack_b0,plVar2,auVar7._8_8_,puVar1[1]);
    extraout_x8[1] = uStack_a8;
    *extraout_x8 = uStack_b0;
    extraout_x8[3] = uStack_98;
    extraout_x8[2] = uStack_a0;
    return;
  }
  lVar6 = **(long **)(param_4 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar6) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0187662c;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(param_2,lVar6,0);
LAB_0187662c:
  (*(code *)*puVar1)(&uStack_58,param_2,param_3,puVar1[1]);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[4] = uStack_38;
  return;
}



// ============================================================
// RVA: 0x187666c | Core.Containers.ListIteratorExtensions.GetCurrent<NetworkPlayer>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetCurrent_NetworkPlayer_
               (undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == (long *)0x0) {
    auVar7 = func_0x00f78af4();
    plVar2 = auVar7._0_8_;
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      return;
    }
    lVar6 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar6) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x018767a8;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(plVar2,lVar6,0);
code_r0x018767a8:
                    /* WARNING: Could not recover jumptable at 0x018767c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(plVar2,auVar7._8_8_,puVar1[1]);
    return;
  }
  lVar6 = **(long **)(param_4 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar6) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_018766f4;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(param_2,lVar6,0);
LAB_018766f4:
  (*(code *)*puVar1)(&uStack_50,param_2,param_3,puVar1[1]);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  return;
}



// ============================================================
// RVA: 0x1876728 | Core.Containers.ListIteratorExtensions.GetCurrent<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetCurrent_object_
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    func_0x00f78af4();
    return;
  }
  lVar5 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar2 = *param_1;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar5) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_018767a8;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(param_1,lVar5,0);
LAB_018767a8:
                    /* WARNING: Could not recover jumptable at 0x018767c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x18767c8 | Core.Containers.ListIteratorExtensions.GetNext<NetworkEventStanding>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetNext_NetworkEventStanding_(void)

{
  return;
}



// ============================================================
// RVA: 0x18767d8 | Core.Containers.ListIteratorExtensions.GetNext<NetworkPlayer>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetNext_NetworkPlayer_(void)

{
  return;
}



// ============================================================
// RVA: 0x18767e8 | Core.Containers.ListIteratorExtensions.GetNext<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetNext_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x18767f8 | Core.Containers.ListIteratorExtensions.GetPrev<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__GetPrev_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x1876808 | Core.Containers.ListIteratorExtensions.Includes<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__Includes_object_
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
                    /* WARNING: Could not recover jumptable at 0x01876ce8. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x01876ac0. Too many branches */
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
// RVA: 0x18769d8 | Core.Containers.ListIteratorExtensions.InplaceMerge<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__InplaceMerge_object_
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
                    /* WARNING: Could not recover jumptable at 0x01876ce8. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x01876ac0. Too many branches */
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
// RVA: 0x1876cf0 | Core.Containers.ListIteratorExtensions.IsEqual<NetworkEventStanding>
// ============================================================

bool Core_Containers_ListIteratorExtensions__IsEqual_NetworkEventStanding_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



// ============================================================
// RVA: 0x1876d00 | Core.Containers.ListIteratorExtensions.IsEqual<NetworkPlayer>
// ============================================================

bool Core_Containers_ListIteratorExtensions__IsEqual_NetworkPlayer_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



// ============================================================
// RVA: 0x1876d10 | Core.Containers.ListIteratorExtensions.IsEqual<object>
// ============================================================

bool Core_Containers_ListIteratorExtensions__IsEqual_object_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



// ============================================================
// RVA: 0x1876d20 | Core.Containers.ListIteratorExtensions.IsHeap<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__IsHeap_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x01876d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
            (auVar1._0_8_,auVar1._8_8_,param_3,param_4);
  return;
}



// ============================================================
// RVA: 0x1876d70 | Core.Containers.ListIteratorExtensions.IsHeapUntil<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__IsHeapUntil_object_
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
        goto code_r0x01876f80;
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
code_r0x01876f80:
  uVar5 = auVar21._8_8_;
  uVar4 = auVar21._0_8_;
  puVar11 = puVar10;
  iVar3 = (*pcVar16)();
  if (iVar3 == 0) goto code_r0x01876ff8;
  puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
  uVar7 = (*(code *)*puVar9)(uVar4,uVar5);
  if (puVar12 == (undefined8 *)0x0) goto code_r0x018770b8;
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(puVar12,uVar7);
  if ((uVar6 & 1) == 0) goto code_r0x01876ff8;
  auVar21 = (**(code **)**(undefined8 **)(lVar14 + 0x30))(uVar4,uVar5);
  puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 8);
  pcVar16 = (code *)*puVar13;
  goto code_r0x01876f80;
code_r0x01876ff8:
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
code_r0x018770b8:
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
// RVA: 0x1876f44 | Core.Containers.ListIteratorExtensions.IsPartitioned<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__IsPartitioned_object_
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
    if (param_5 == 0) goto LAB_018770b8;
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
LAB_018770b8:
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
// RVA: 0x18770bc | Core.Containers.ListIteratorExtensions.IsPermutation<object>
// ============================================================

undefined8
Core_Containers_ListIteratorExtensions__IsPermutation_object_
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
// RVA: 0x18772f8 | Core.Containers.ListIteratorExtensions.IsSorted<object>
// ============================================================

undefined8 *
Core_Containers_ListIteratorExtensions__IsSorted_object_
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
// RVA: 0x1877460 | Core.Containers.ListIteratorExtensions.IsSortedUntil<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__IsSortedUntil_object_
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
// RVA: 0x18775d4 | Core.Containers.ListIteratorExtensions.IteratorAt<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__IteratorAt_object_(void)

{
  return;
}



// ============================================================
// RVA: 0x18775dc | Core.Containers.ListIteratorExtensions.LexicographicalCompare<object>
// ============================================================

undefined8
Core_Containers_ListIteratorExtensions__LexicographicalCompare_object_
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
                    /* WARNING: Could not recover jumptable at 0x018777a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20))
                    (auVar17._0_8_,auVar17._8_8_,param_7,param_8);
  return uVar6;
}



// ============================================================
// RVA: 0x18777d4 | Core.Containers.ListIteratorExtensions.LowerBound<object>
// ============================================================

undefined8
Core_Containers_ListIteratorExtensions__LowerBound_object_
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
// RVA: 0x18778d4 | Core.Containers.ListIteratorExtensions.MakeHeap<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__MakeHeap_object_
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
// RVA: 0x187795c | Core.Containers.ListIteratorExtensions.MaxElement<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__MaxElement_object_
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
          goto code_r0x01877b00;
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
code_r0x01877b00:
  uVar4 = auVar29._8_8_;
  uVar5 = auVar29._0_8_;
  uVar9 = auVar27._8_8_;
  uVar17 = auVar27._0_8_;
  uVar8 = auVar28._8_8_;
  pauVar26 = auVar28._0_8_;
  uVar3 = (*UNRECOVERED_JUMPTABLE)(pauVar26,uVar8);
  if ((uVar3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(unaff_x25 + 0x30) + 8);
code_r0x01877c94:
                    /* WARNING: Could not recover jumptable at 0x01877cb8. Too many branches */
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
    goto code_r0x01877c94;
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
    goto code_r0x01877b00;
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
code_r0x018780bc:
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
    if (auVar30._0_4_ == 0) goto code_r0x018780bc;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x10))
                        (auVar28._0_8_,auVar28._8_8_);
    auVar31 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x10))
                        (auVar31._0_8_,auVar31._8_8_);
    puVar18 = *(undefined8 **)(*(long *)(lVar10 + 0x30) + 0x18);
    pauVar14 = pauVar16;
    auVar30 = (*(code *)*puVar18)(auVar28._0_8_,auVar28._8_8_,puVar12);
    if ((auVar30._0_8_ & 1) == 0) goto code_r0x018780bc;
  }
  auVar28 = func_0x00f78af4();
  auVar33._8_8_ = pauVar14;
  auVar33._0_8_ = puVar19;
  uVar9 = auVar28._8_8_;
  uVar5 = auVar28._0_8_;
  pauVar16 = pauVar15;
  auVar28 = (**(code **)**(undefined8 **)pauVar15[3])();
  uVar4 = auVar28._8_8_;
  if ((auVar28._0_8_ & 1) != 0) goto code_r0x01878238;
  auVar28 = (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 8))(puVar19,pauVar14);
  uVar17 = auVar28._8_8_;
  puVar12 = (undefined8 *)**(long **)pauVar15[3];
  auVar30 = (*(code *)*puVar12)(uVar5,uVar9,auVar28._0_8_,uVar17);
  uVar4 = auVar30._8_8_;
  if ((auVar30._0_8_ & 1) != 0) goto code_r0x01878238;
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
      goto code_r0x0187823c;
    }
    puVar12 = (undefined8 *)**(long **)pauVar15[3];
    uVar17 = uVar9;
    iVar2 = (*(code *)*puVar12)(uVar4,uVar7,uVar5);
    if (iVar2 != 0) {
      (*(code *)**(undefined8 **)(*(long *)pauVar15[3] + 0x28))(uVar5,uVar9,puVar19,pauVar14);
      uVar4 = extraout_x1;
code_r0x01878238:
      uVar5 = 0;
code_r0x0187823c:
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
// RVA: 0x1877ab0 | Core.Containers.ListIteratorExtensions.Merge<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__Merge_object_
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
code_r0x01877b00:
  uVar9 = auVar29._8_8_;
  uVar10 = auVar29._0_8_;
  uVar6 = auVar28._8_8_;
  pauVar26 = auVar28._0_8_;
  uVar7 = auVar27._8_8_;
  uVar16 = auVar27._0_8_;
  uVar3 = (*UNRECOVERED_JUMPTABLE)(pauVar26,uVar6,param_3,param_4);
  if ((uVar3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
code_r0x01877c94:
                    /* WARNING: Could not recover jumptable at 0x01877cb8. Too many branches */
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
    goto code_r0x01877c94;
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
    goto code_r0x01877b00;
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
code_r0x018780bc:
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
    if (auVar28._0_4_ == 0) goto code_r0x018780bc;
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                        (auVar27._0_8_,auVar27._8_8_);
    auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                        (auVar30._0_8_,auVar30._8_8_);
    puVar17 = *(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18);
    pauVar15 = pauVar13;
    auVar28 = (*(code *)*puVar17)(auVar27._0_8_,auVar27._8_8_,puVar11);
    if ((auVar28._0_8_ & 1) == 0) goto code_r0x018780bc;
  }
  auVar27 = func_0x00f78af4();
  auVar32._8_8_ = pauVar15;
  auVar32._0_8_ = puVar18;
  uVar7 = auVar27._8_8_;
  uVar10 = auVar27._0_8_;
  pauVar21 = pauVar20;
  auVar27 = (**(code **)**(undefined8 **)pauVar20[3])();
  uVar9 = auVar27._8_8_;
  if ((auVar27._0_8_ & 1) != 0) goto code_r0x01878238;
  auVar27 = (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 8))(puVar18,pauVar15);
  uVar16 = auVar27._8_8_;
  puVar11 = (undefined8 *)**(long **)pauVar20[3];
  auVar28 = (*(code *)*puVar11)(uVar10,uVar7,auVar27._0_8_,uVar16);
  uVar9 = auVar28._8_8_;
  if ((auVar28._0_8_ & 1) != 0) goto code_r0x01878238;
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
      goto code_r0x0187823c;
    }
    puVar11 = (undefined8 *)**(long **)pauVar20[3];
    uVar16 = uVar7;
    iVar2 = (*(code *)*puVar11)(uVar9,uVar5,uVar10);
    if (iVar2 != 0) {
      (*(code *)**(undefined8 **)(*(long *)pauVar20[3] + 0x28))(uVar10,uVar7,puVar18,pauVar15);
      uVar9 = extraout_x1;
code_r0x01878238:
      uVar10 = 0;
code_r0x0187823c:
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
// RVA: 0x1877cc0 | Core.Containers.ListIteratorExtensions.MinElement<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__MinElement_object_
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
            if ((auVar23._0_8_ & 1) != 0) goto code_r0x01878238;
            auVar23 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 8))(puVar11,uVar9);
            uVar13 = auVar23._8_8_;
            puVar15 = (undefined8 *)**(long **)pauVar17[3];
            auVar24 = (*(code *)*puVar15)(uVar5,uVar6,auVar23._0_8_,uVar13);
            uVar4 = auVar24._8_8_;
            if ((auVar24._0_8_ & 1) == 0) goto code_r0x0187817c;
            goto code_r0x01878238;
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
code_r0x01878264:
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
  goto code_r0x0187823c;
  while( true ) {
    auVar23 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x10))(auVar23._0_8_,auVar23._8_8_)
    ;
    uVar9 = uVar13;
    auVar22 = (*(code *)**(undefined8 **)(*(long *)pauVar16[3] + 0x18))
                        (auVar23._0_8_,auVar23._8_8_,puVar12,uVar13);
    uVar4 = auVar22._8_8_;
    if ((auVar22._0_8_ & 1) == 0) break;
code_r0x01878360:
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
code_r0x018783e4:
  auVar27._8_8_ = uVar4;
  auVar27._0_8_ = uVar2;
  return auVar27;
  while( true ) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x18))(puVar14,uVar7,uVar8);
    if (iVar1 != 0) goto code_r0x01878264;
    puVar15 = (undefined8 *)**(long **)pauVar17[3];
    uVar13 = uVar6;
    iVar1 = (*(code *)*puVar15)(uVar4,uVar10,uVar5);
    if (iVar1 != 0) break;
code_r0x0187817c:
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
      if (iVar1 != 0) goto code_r0x01878360;
      uVar2 = 1;
      uVar4 = extraout_x1_01;
      goto code_r0x018783e4;
    }
  }
  (*(code *)**(undefined8 **)(*(long *)pauVar17[3] + 0x28))(uVar5,uVar6,puVar11,uVar9);
  uVar4 = extraout_x1;
code_r0x01878238:
  uVar9 = 0;
code_r0x0187823c:
  auVar25._8_8_ = uVar4;
  auVar25._0_8_ = uVar9;
  return auVar25;
}



// ============================================================
// RVA: 0x1877e14 | Core.Containers.ListIteratorExtensions.MinMaxElement<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__MinMaxElement_object_
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
        if ((int)uVar4 != 0) goto code_r0x01878000;
        goto code_r0x018780bc;
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
code_r0x01878000:
  uVar6 = (**(code **)**(undefined8 **)(unaff_x27 + 0x30))(auVar23._0_8_,auVar23._8_8_);
  puVar13 = (undefined8 *)**(undefined8 **)(unaff_x27 + 0x30);
  uVar8 = (*(code *)*puVar13)(auVar24._0_8_,auVar24._8_8_);
  if (pauVar18 != (undefined1 (*) [16])0x0) {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 8))(pauVar18,uVar6,uVar8);
    if ((int)uVar4 == 0) goto code_r0x018780bc;
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 0x10))
                        (auVar23._0_8_,auVar23._8_8_);
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 0x10))
                        (auVar24._0_8_,auVar24._8_8_);
    puVar16 = *(undefined8 **)(*(long *)(unaff_x27 + 0x30) + 0x18);
    uVar5 = uVar7;
    uVar4 = (*(code *)*puVar16)(auVar23._0_8_,auVar23._8_8_,puVar12);
    if ((uVar4 & 1) == 0) {
code_r0x018780bc:
      *pauVar19 = auVar23;
      *unaff_x28 = auVar24;
      return uVar4;
    }
    goto code_r0x01878000;
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
// RVA: 0x1877fac | Core.Containers.ListIteratorExtensions.Mismatch<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__Mismatch_object_
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
LAB_018780bc:
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
    if ((int)uVar4 == 0) goto LAB_018780bc;
    auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))
                        (auVar21._0_8_,auVar21._8_8_);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))
                        (auVar22._0_8_,auVar22._8_8_);
    puVar16 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18);
    uVar10 = param_4;
    uVar4 = (*(code *)*puVar16)(auVar21._0_8_,auVar21._8_8_,param_3);
    if ((uVar4 & 1) == 0) goto LAB_018780bc;
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
// RVA: 0x18780e8 | Core.Containers.ListIteratorExtensions.NextPermutation<object>
// ============================================================

uint Core_Containers_ListIteratorExtensions__NextPermutation_object_
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
          goto code_r0x01878360;
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
code_r0x01878360:
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
// RVA: 0x187831c | Core.Containers.ListIteratorExtensions.NoneOf<object>
// ============================================================

uint Core_Containers_ListIteratorExtensions__NoneOf_object_
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
// RVA: 0x1878400 | Core.Containers.ListIteratorExtensions.NotEqual<NetworkEventStanding>
// ============================================================

bool Core_Containers_ListIteratorExtensions__NotEqual_NetworkEventStanding_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 != param_3 || param_2 != param_4;
}



// ============================================================
// RVA: 0x1878410 | Core.Containers.ListIteratorExtensions.NotEqual<NetworkPlayer>
// ============================================================

bool Core_Containers_ListIteratorExtensions__NotEqual_NetworkPlayer_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 != param_3 || param_2 != param_4;
}



// ============================================================
// RVA: 0x1878420 | Core.Containers.ListIteratorExtensions.NotEqual<object>
// ============================================================

bool Core_Containers_ListIteratorExtensions__NotEqual_object_
               (long param_1,int param_2,long param_3,int param_4)

{
  return param_1 != param_3 || param_2 != param_4;
}



// ============================================================
// RVA: 0x1878430 | Core.Containers.ListIteratorExtensions.NthElement<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__NthElement_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
                    /* WARNING: Could not recover jumptable at 0x01878448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_8 + 0x30))(param_1,param_2,param_5,param_6,param_7);
  return;
}



// ============================================================
// RVA: 0x187844c | Core.Containers.ListIteratorExtensions.PartialSort<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__PartialSort_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
                    /* WARNING: Could not recover jumptable at 0x01878464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_8 + 0x30))(param_1,param_2,param_5,param_6,param_7);
  return;
}



// ============================================================
// RVA: 0x1878468 | Core.Containers.ListIteratorExtensions.Partition<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__Partition_object_
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
                    /* WARNING: Could not recover jumptable at 0x01878930. Too many branches */
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
// RVA: 0x1878610 | Core.Containers.ListIteratorExtensions.PartitionCopy<object>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__PartitionCopy_object_
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
                    /* WARNING: Could not recover jumptable at 0x01878930. Too many branches */
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
// RVA: 0x1878798 | Core.Containers.ListIteratorExtensions.PartitionPoint<object>
// ============================================================

undefined8
Core_Containers_ListIteratorExtensions__PartitionPoint_object_
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
                    /* WARNING: Could not recover jumptable at 0x01878930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18))
                      (auVar11._0_8_,uVar9,uVar9,auVar12._8_8_,puVar7);
    return uVar4;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1878880 | Core.Containers.ListIteratorExtensions.PopHeap<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__PopHeap_object_
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
                    /* WARNING: Could not recover jumptable at 0x01878930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
              (param_1,param_2,param_2,auVar2._8_8_,param_5);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x1878948 | Core.Containers.ListIteratorExtensions.PrevPermutation<object>
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined8 *
Core_Containers_ListIteratorExtensions__PrevPermutation_object_
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
          goto joined_r0x01878c74;
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
joined_r0x01878c74:
  if (iVar3 < 1) {
code_r0x01878d9c:
                    /* WARNING: Could not recover jumptable at 0x01878dd0. Too many branches */
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
    if ((bRam0000000003eb655a & 1) == 0) {
      func_0x00f78a20(0x3d35820);
      bRam0000000003eb655a = 1;
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
  if ((uVar4 & 1) == 0) goto code_r0x01878d9c;
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
  goto joined_r0x01878c74;
}



// ============================================================
// RVA: 0x1878b7c | Core.Containers.ListIteratorExtensions.PushHeap<object>
// ============================================================

/* WARNING: Type propagation algorithm not settling */

undefined8 *
Core_Containers_ListIteratorExtensions__PushHeap_object_
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
      if ((bRam0000000003eb655a & 1) == 0) {
        func_0x00f78a20(0x3d35820);
        bRam0000000003eb655a = 1;
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
                    /* WARNING: Could not recover jumptable at 0x01878dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined8 *)
           (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                     (auVar20._0_8_,auVar20._8_8_,uVar5);
  return puVar4;
}



// ============================================================
// RVA: 0x1878dd8 | Core.Containers.ListIteratorExtensions.RandomShuffle<object>
// ============================================================

undefined8 *
Core_Containers_ListIteratorExtensions__RandomShuffle_object_
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
  if ((bRam0000000003eb655a & 1) == 0) {
    func_0x00f78a20(0x3d35820);
    bRam0000000003eb655a = 1;
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
// RVA: 0x1878ef8 | Core.Containers.ListIteratorExtensions.ReplaceCopyIf<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__ReplaceCopyIf_object_
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
// RVA: 0x1879048 | Core.Containers.ListIteratorExtensions.ReplaceIf<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__ReplaceIf_object_
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
// RVA: 0x187913c | Core.Containers.ListIteratorExtensions.Reverse<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__Reverse_object_
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
// RVA: 0x1879228 | Core.Containers.ListIteratorExtensions.ReverseCopy<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__ReverseCopy_object_
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
// RVA: 0x1879320 | Core.Containers.ListIteratorExtensions.Rotate<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__Rotate_object_
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
// RVA: 0x187946c | Core.Containers.ListIteratorExtensions.RotateCopy<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__RotateCopy_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)**(undefined8 **)(param_9 + 0x30))
                     (param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x018794f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_9 + 0x30))
            (param_1,param_2,param_3,param_4,auVar1._0_8_,auVar1._8_8_);
  return;
}



// ============================================================
// RVA: 0x18794f8 | Core.Containers.ListIteratorExtensions.Search<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__Search_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,undefined8 *param_7,long param_8,long param_9,
          long param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar9;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar29;
  int *piVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [16];
  undefined1 auStack_5b0 [16];
  long lStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 ******ppppppuStack_580;
  undefined *puStack_578;
  long lStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4a0 [16];
  undefined8 *puStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined1 auStack_470 [16];
  undefined8 uStack_460;
  long lStack_458;
  undefined8 ******ppppppuStack_450;
  undefined *puStack_448;
  long lStack_438;
  undefined8 *puStack_430;
  long lStack_428;
  undefined1 auStack_420 [16];
  undefined8 *puStack_410;
  long lStack_408;
  undefined1 auStack_400 [16];
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  long lStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [16];
  undefined8 *puStack_380;
  long lStack_378;
  undefined8 *puStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 ******ppppppuStack_350;
  undefined *puStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined1 auStack_320 [16];
  undefined8 *puStack_310;
  long lStack_308;
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined1 ******ppppppuStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  undefined8 *puStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined1 auStack_260 [16];
  undefined1 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  undefined1 auStack_230 [16];
  undefined1 ****ppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined1 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
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
  long *plVar13;
  
  auVar33._8_8_ = param_6;
  auVar33._0_8_ = param_5;
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
  lVar31 = param_6;
  puVar14 = param_7;
  lStack_68 = param_8;
  uVar10 = (**(code **)**(undefined8 **)(param_10 + 0x30))(param_5,param_6,param_7,param_8);
  if ((uVar10 & 1) != 0) {
LAB_018796ac:
    auVar34._8_8_ = param_2;
    auVar34._0_8_ = param_1;
    return auVar34;
  }
  puVar27 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
  uVar19 = param_4;
  iVar8 = (*(code *)*puVar27)(param_1,param_2,param_3);
  lStack_80 = param_6;
  uStack_88 = param_5;
joined_r0x01879580:
  param_1 = param_3;
  param_2 = param_4;
  auVar36 = auVar32;
  if (iVar8 == 0) goto LAB_018796ac;
  while( true ) {
    uStack_78 = auVar36._8_8_;
    uStack_70 = auVar36._0_8_;
    uVar18 = auVar33._8_8_;
    uVar15 = auVar33._0_8_;
    uVar17 = auVar32._8_8_;
    uVar20 = auVar32._0_8_;
    uVar11 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10))(uVar20,uVar17);
    puVar21 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x10);
    uVar12 = (*(code *)*puVar21)(uVar15,uVar18);
    if (param_9 == 0) break;
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 0x18))(param_9,uVar11,uVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8);
    if ((uVar10 & 1) == 0) goto LAB_0187966c;
    auVar32 = (*UNRECOVERED_JUMPTABLE_00)(uVar20,uVar17);
    auVar33 = (*(code *)**(undefined8 **)(*(long *)(param_10 + 0x30) + 8))(uVar15,uVar18);
    uVar10 = (**(code **)**(undefined8 **)(param_10 + 0x30))
                       (auVar33._0_8_,auVar33._8_8_,param_7,lStack_68);
    param_1 = uStack_70;
    param_2 = uStack_78;
    if ((uVar10 & 1) != 0) goto LAB_018796ac;
    puVar27 = (undefined8 *)**(ulong **)(param_10 + 0x30);
    uVar19 = param_4;
    uVar10 = (*(code *)*puVar27)(auVar32._0_8_,auVar32._8_8_,param_3);
    auVar36._8_8_ = uStack_78;
    auVar36._0_8_ = uStack_70;
    param_1 = param_3;
    param_2 = param_4;
    if ((uVar10 & 1) != 0) goto LAB_018796ac;
  }
  auVar32 = func_0x00f78af4();
  auVar2._8_8_ = uVar19;
  auVar2._0_8_ = puVar21;
  auVar1._8_8_ = uVar19;
  auVar1._0_8_ = puVar21;
  lStack_e8 = param_9;
  lStack_b8 = param_10;
  puStack_98 = &Core_Containers_ListIteratorExtensions__SearchN_object_;
  lVar29 = lVar31;
  puVar23 = puVar14;
  lVar26 = param_8;
  uStack_f0 = uVar15;
  uStack_e0 = uVar11;
  uStack_d8 = uVar18;
  uStack_d0 = param_4;
  puStack_c8 = param_7;
  uStack_c0 = param_3;
  uStack_b0 = uVar17;
  uStack_a8 = uVar20;
  puStack_a0 = &stack0xfffffffffffffff0;
  iVar8 = (**(code **)**(undefined8 **)(param_8 + 0x30))();
  auVar35 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                      (auVar32._0_8_,auVar32._8_8_,iVar8 - (uint)puVar27);
  puVar24 = auVar35._8_8_;
  puVar28 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
  uVar9 = (*(code *)*puVar28)(auVar32._0_8_,auVar32._8_8_,auVar35._0_8_);
  uStack_f4 = (uint)puVar27;
  auVar33 = auVar32;
  while( true ) {
    if (uVar9 == 0) {
      return auVar1;
    }
    puStack_108 = auVar35._8_8_;
    uStack_100 = auVar35._0_8_;
    puVar22 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18);
    uVar11 = (*(code *)*puVar22)(auVar32._0_8_,auVar32._8_8_);
    if (puVar14 == (undefined8 *)0x0) break;
    puVar24 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20);
    uVar10 = (*(code *)*puVar24)(puVar14,lVar31,uVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10);
    if ((uVar10 & 1) == 0) {
      auVar32 = (*UNRECOVERED_JUMPTABLE_00)(auVar33._0_8_,auVar33._8_8_);
      puVar28 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
      puVar24 = puStack_108;
      uVar9 = (*(code *)*puVar28)(auVar32._0_8_,auVar32._8_8_,uStack_100);
      auVar35._8_8_ = puStack_108;
      auVar35._0_8_ = uStack_100;
      auVar33 = auVar32;
      auVar1 = auVar2;
      uVar3 = uStack_f4;
    }
    else {
      auVar32 = (*UNRECOVERED_JUMPTABLE_00)(auVar32._0_8_,auVar32._8_8_);
      auVar35._8_8_ = puStack_108;
      auVar35._0_8_ = uStack_100;
      uVar9 = (int)puVar27 - 1;
      auVar1 = auVar33;
      uVar3 = uVar9;
    }
    puVar27 = (undefined8 *)(ulong)uVar3;
  }
  auVar36 = func_0x00f78af4();
  plVar13 = auVar36._0_8_;
  puStack_118 = &Core_Containers_ListIteratorExtensions__SetCurrent_NetworkEventStanding_;
  uStack_198 = puVar22[1];
  uStack_1a0 = *puVar22;
  uStack_188 = puVar22[3];
  uStack_190 = puVar22[2];
  uStack_180 = puVar22[4];
  puStack_140 = puVar14;
  lStack_138 = param_8;
  ppuStack_120 = &puStack_a0;
  auStack_130 = auVar33;
  if (plVar13 != (long *)0x0) {
    lVar31 = *(long *)puVar24[6];
    if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar31);
    }
    lVar29 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar29 + 0x12a);
    if (uVar10 != 0) {
      piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar31) {
          puVar14 = (undefined8 *)(lVar29 + (long)(*piVar30 + 1) * 0x10 + 0x138);
          goto code_r0x018798ec;
        }
        piVar30 = piVar30 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar13,lVar31,1);
code_r0x018798ec:
    uStack_168 = uStack_198;
    uStack_170 = uStack_1a0;
    uStack_158 = uStack_188;
    uStack_160 = uStack_190;
    uStack_150 = uStack_180;
    auVar32 = (*(code *)*puVar14)(plVar13,auVar36._8_8_,&uStack_170,puVar14[1]);
    return auVar32;
  }
  auVar36 = func_0x00f78af4();
  plVar13 = auVar36._0_8_;
  puStack_1a8 = &Core_Containers_ListIteratorExtensions__SetCurrent_NetworkPlayer_;
  uStack_208 = puVar22[1];
  uStack_210 = *puVar22;
  uStack_1f8 = puVar22[3];
  uStack_200 = puVar22[2];
  puStack_1d0 = puVar14;
  lStack_1c8 = param_8;
  pppuStack_1b0 = &ppuStack_120;
  auStack_1c0 = auVar33;
  if (plVar13 != (long *)0x0) {
    lVar31 = *(long *)puVar24[6];
    if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar31);
    }
    lVar29 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar29 + 0x12a);
    if (uVar10 != 0) {
      piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar31) {
          puVar14 = (undefined8 *)(lVar29 + (long)(*piVar30 + 1) * 0x10 + 0x138);
          goto code_r0x018799bc;
        }
        piVar30 = piVar30 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar13,lVar31,1);
code_r0x018799bc:
    uStack_1e8 = uStack_208;
    uStack_1f0 = uStack_210;
    uStack_1d8 = uStack_1f8;
    uStack_1e0 = uStack_200;
    auVar32 = (*(code *)*puVar14)(plVar13,auVar36._8_8_,&uStack_1f0,puVar14[1]);
    return auVar32;
  }
  auVar36 = func_0x00f78af4();
  plVar13 = auVar36._0_8_;
  puStack_218 = &Core_Containers_ListIteratorExtensions__SetCurrent_object_;
  puStack_240 = puVar14;
  lStack_238 = param_8;
  ppppuStack_220 = &pppuStack_1b0;
  auStack_230 = auVar33;
  if (plVar13 != (long *)0x0) {
    lVar31 = *(long *)puVar24[6];
    if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar31);
    }
    lVar29 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar29 + 0x12a);
    if (uVar10 != 0) {
      piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == lVar31) {
          puVar14 = (undefined8 *)(lVar29 + (long)(*piVar30 + 1) * 0x10 + 0x138);
          goto code_r0x01879a7c;
        }
        piVar30 = piVar30 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar13,lVar31,1);
code_r0x01879a7c:
                    /* WARNING: Could not recover jumptable at 0x01879a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar32 = (*(code *)*puVar14)(plVar13,auVar36._8_8_,puVar22,puVar14[1]);
    return auVar32;
  }
  auVar36 = func_0x00f78af4();
  uVar12 = auStack_230._8_8_;
  uVar11 = auStack_230._0_8_;
  auVar37._8_8_ = lVar29;
  auVar37._0_8_ = puVar28;
  puStack_248 = &Core_Containers_ListIteratorExtensions__SetDifference_object_;
  lStack_2b8 = lStack_238;
  puStack_2b0 = puStack_240;
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(auStack_230._8_8_ + 0x30) + 0x20);
  uStack_270 = 0;
  puVar14 = puVar23;
  lStack_2a8 = lVar26;
  puStack_2a0 = puVar27;
  uStack_298 = uVar19;
  puStack_280 = puVar21;
  lStack_278 = lVar31;
  lStack_268 = param_8;
  pppppuStack_250 = &ppppuStack_220;
  auStack_290 = auVar32;
  auStack_260 = auVar33;
code_r0x01879b00:
  iVar8 = (*UNRECOVERED_JUMPTABLE_00)(auVar36._0_8_,auVar36._8_8_);
  if (iVar8 == 0) {
code_r0x01879ce8:
                    /* WARNING: Could not recover jumptable at 0x01879d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar32 = (*(code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x28))
                        (auVar36._0_8_,auVar36._8_8_,puVar22,puVar24,puStack_2b0,lStack_2b8);
    return auVar32;
  }
  do {
    uVar17 = auVar37._8_8_;
    uVar18 = auVar37._0_8_;
    uVar19 = auVar36._8_8_;
    uVar20 = auVar36._0_8_;
    puVar27 = *(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x20);
    lVar31 = lStack_2a8;
    uVar10 = (*(code *)*puVar27)(uVar18,uVar17,puVar23);
    if ((uVar10 & 1) == 0) goto code_r0x01879ce8;
    uVar15 = (**(code **)**(undefined8 **)(uVar12 + 0x30))(uVar20,uVar19);
    puVar21 = (undefined8 *)**(undefined8 **)(uVar12 + 0x30);
    uVar16 = (*(code *)*puVar21)(uVar18,uVar17);
    if (uVar11 == 0) {
      auVar32 = func_0x00f78af4();
      lVar4 = lStack_2a8;
      lVar25 = lStack_2b8;
      auVar38._8_8_ = lVar29;
      auVar38._0_8_ = puVar27;
      lStack_308 = uVar12;
      lStack_2e8 = uVar11;
      puStack_2c8 = &Core_Containers_ListIteratorExtensions__SetIntersection_object_;
      lStack_330 = lStack_2c0;
      puVar28 = puVar14;
      lStack_328 = lVar26;
      puStack_310 = puVar23;
      uStack_2f0 = uVar15;
      puStack_2e0 = puVar22;
      puStack_2d8 = puVar24;
      ppppppuStack_2d0 = &pppppuStack_250;
      auStack_300 = auVar36;
      auStack_320 = auVar37;
      iVar8 = (*(code *)**(undefined8 **)(*(long *)(lStack_2a8 + 0x30) + 0x20))();
      puVar27 = puStack_2b0;
      lStack_338 = lVar25;
      if (iVar8 == 0) goto code_r0x01879f94;
      break;
    }
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 8))(uVar11,uVar15,uVar16);
    if (iVar8 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(uVar12 + 0x30))(uVar18,uVar17);
      uVar16 = (**(code **)**(undefined8 **)(uVar12 + 0x30))(uVar20,uVar19);
      iVar8 = (*(code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 8))(uVar11,uVar15,uVar16);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x18);
      if (iVar8 == 0) goto code_r0x01879c94;
      auVar37 = (*UNRECOVERED_JUMPTABLE_00)(uVar18,uVar17);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x20);
    }
    else {
      uVar17 = (**(code **)**(undefined8 **)(uVar12 + 0x30))(uVar20,uVar19);
      lVar31 = lStack_2b8;
      (*(code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x10))(puStack_2b0,lStack_2b8,uVar17);
      auVar32 = (*(code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x18))(puStack_2b0,lVar31);
      lStack_2b8 = auVar32._8_8_;
      puStack_2b0 = auVar32._0_8_;
      auVar36 = (*(code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x18))(uVar20,uVar19);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x20);
    }
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)(auVar36._0_8_,auVar36._8_8_,puVar22,puVar24);
    if ((uVar10 & 1) == 0) goto code_r0x01879ce8;
  } while( true );
code_r0x01879d94:
  uVar19 = auVar38._8_8_;
  uVar11 = auVar38._0_8_;
  uVar12 = auVar32._8_8_;
  uVar20 = auVar32._0_8_;
  puVar24 = *(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x20);
  lVar25 = lStack_328;
  uVar10 = (*(code *)*puVar24)(uVar11,uVar19,puVar14);
  if ((uVar10 & 1) == 0) goto code_r0x01879f94;
  uVar17 = (**(code **)**(undefined8 **)(lVar4 + 0x30))(uVar20,uVar12);
  puVar23 = (undefined8 *)**(long **)(lVar4 + 0x30);
  uVar18 = (*(code *)*puVar23)(uVar11,uVar19);
  if (puVar27 == (undefined8 *)0x0) {
    auVar33 = func_0x00f78af4();
    lVar7 = lStack_328;
    lVar6 = lStack_330;
    auVar40._8_8_ = lVar29;
    auVar40._0_8_ = puVar24;
    lStack_368 = lVar4;
    puStack_358 = puVar27;
    puStack_348 = &Core_Containers_ListIteratorExtensions__SetSymmetricDifference_object_;
    lStack_3b8 = lStack_338;
    lStack_3b0 = lStack_340;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_328 + 0x30);
    puVar27 = puVar28;
    lStack_3a8 = lVar26;
    puStack_380 = puVar21;
    lStack_378 = lVar31;
    puStack_370 = puVar14;
    uStack_360 = uVar17;
    ppppppuStack_350 = &ppppppuStack_2d0;
    goto code_r0x0187a020;
  }
  iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8))(puVar27,uVar17,uVar18);
  if (iVar8 != 0) {
    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10))(uVar20,uVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x20);
code_r0x01879e3c:
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)(auVar32._0_8_,auVar32._8_8_,puVar21,lVar31);
    if ((uVar10 & 1) == 0) {
code_r0x01879f94:
      auVar39._8_8_ = lStack_338;
      auVar39._0_8_ = lStack_330;
      return auVar39;
    }
    goto code_r0x01879d94;
  }
  uVar17 = (**(code **)**(undefined8 **)(lVar4 + 0x30))(uVar11,uVar19);
  uVar18 = (**(code **)**(undefined8 **)(lVar4 + 0x30))(uVar20,uVar12);
  iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8))(puVar27,uVar17,uVar18);
  if (iVar8 != 0) {
    auVar38 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10))(uVar11,uVar19);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x20);
    goto code_r0x01879e3c;
  }
  uVar17 = (**(code **)**(undefined8 **)(lVar4 + 0x30))(uVar20,uVar12);
  lVar25 = lStack_338;
  (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x18))(lStack_330,lStack_338,uVar17);
  auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10))(lStack_330,lVar25);
  lStack_338 = auVar32._8_8_;
  lStack_330 = auVar32._0_8_;
  auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10))(uVar20,uVar12);
  auVar38 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x10))(uVar11,uVar19);
  iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 0x20))
                    (auVar32._0_8_,auVar32._8_8_,puVar21,lVar31);
  if (iVar8 == 0) goto code_r0x01879f94;
  goto code_r0x01879d94;
code_r0x0187a020:
  uVar19 = auVar40._8_8_;
  uVar11 = auVar40._0_8_;
  uVar12 = auVar33._8_8_;
  uVar20 = auVar33._0_8_;
  auStack_3a0 = auVar32;
  auStack_390 = auVar38;
  uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar20,uVar12);
  if ((uVar10 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8);
    lVar25 = lStack_3a8;
code_r0x0187a248:
                    /* WARNING: Could not recover jumptable at 0x0187a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar32 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar40._0_8_,auVar40._8_8_,puVar28,lVar25,lStack_3b0,lStack_3b8);
    return auVar32;
  }
  puVar14 = (undefined8 *)**(undefined8 **)(lVar7 + 0x30);
  lVar31 = lStack_3a8;
  iVar8 = (*(code *)*puVar14)(uVar11,uVar19,puVar28);
  if (iVar8 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8);
    puVar28 = puVar23;
    auVar40 = auVar33;
    goto code_r0x0187a248;
  }
  uVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar20,uVar12);
  puVar21 = *(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10);
  uVar18 = (*(code *)*puVar21)(uVar11,uVar19);
  if (lVar6 == 0) {
    auVar32 = func_0x00f78af4();
    lVar5 = lStack_3a8;
    lVar4 = lStack_3b0;
    auVar43._8_8_ = lStack_3b8;
    auVar43._0_8_ = uStack_3c0;
    auVar42._8_8_ = lVar29;
    auVar42._0_8_ = puVar14;
    lStack_3e8 = lVar6;
    lStack_3d8 = lVar7;
    puStack_3c8 = &Core_Containers_ListIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_3a8 + 0x30);
    lStack_438 = lVar31;
    puStack_430 = puVar27;
    lStack_428 = lVar26;
    puStack_410 = puVar23;
    lStack_408 = lVar25;
    uStack_3f0 = uVar17;
    puStack_3e0 = puVar28;
    ppppppuStack_3d0 = &ppppppuStack_350;
    auStack_420 = auVar33;
    auStack_400 = auVar40;
    goto code_r0x0187a2c0;
  }
  iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x18))(lVar6,uVar17,uVar18);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10);
  if (iVar8 == 0) {
    uVar17 = (*UNRECOVERED_JUMPTABLE_00)(uVar11,uVar19);
    uVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar20,uVar12);
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x18))(lVar6,uVar17,uVar18);
    if (iVar8 == 0) {
      auVar33 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(uVar20,uVar12);
      auVar41._8_8_ = lStack_3b8;
      auVar41._0_8_ = lStack_3b0;
    }
    else {
      uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar11,uVar19);
      lVar31 = lStack_3b8;
      (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x20))(lStack_3b0,lStack_3b8,uVar12);
      auVar41 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(lStack_3b0,lVar31);
    }
    lStack_3b8 = auVar41._8_8_;
    lStack_3b0 = auVar41._0_8_;
    auVar40 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(uVar11,uVar19);
    auVar32 = auStack_3a0;
    auVar38 = auStack_390;
  }
  else {
    uVar19 = (*UNRECOVERED_JUMPTABLE_00)(uVar20,uVar12);
    lVar31 = lStack_3b8;
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x20))(lStack_3b0,lStack_3b8,uVar19);
    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(lStack_3b0,lVar31);
    lStack_3b8 = auVar32._8_8_;
    lStack_3b0 = auVar32._0_8_;
    auVar33 = (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x28))(uVar20,uVar12);
    auVar32 = auStack_3a0;
    auVar38 = auStack_390;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar7 + 0x30);
  goto code_r0x0187a020;
code_r0x0187a2c0:
  uVar19 = auVar43._8_8_;
  uVar11 = auVar43._0_8_;
  uVar12 = auVar42._8_8_;
  uVar20 = auVar42._0_8_;
  uVar17 = auVar32._8_8_;
  uVar18 = auVar32._0_8_;
  uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar18,uVar17);
  if ((uVar10 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8);
    puVar21 = puStack_430;
    lVar31 = lStack_428;
code_r0x0187a4f4:
                    /* WARNING: Could not recover jumptable at 0x0187a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar32 = (*UNRECOVERED_JUMPTABLE_00)(auVar42._0_8_,auVar42._8_8_,puVar21,lVar31,uVar11,uVar19);
    return auVar32;
  }
  puVar14 = (undefined8 *)**(long **)(lVar5 + 0x30);
  lVar31 = lStack_428;
  iVar8 = (*(code *)*puVar14)(uVar20,uVar12,puStack_430);
  if (iVar8 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8);
    lVar31 = lStack_438;
    auVar42 = auVar32;
    goto code_r0x0187a4f4;
  }
  uVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(uVar18,uVar17);
  puVar27 = *(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10);
  uVar16 = (*(code *)*puVar27)(uVar20,uVar12);
  if (lVar4 == 0) {
    auVar33 = func_0x00f78af4();
    uVar11 = auVar33._8_8_;
    uVar19 = auVar33._0_8_;
    lStack_480 = lVar5;
    lStack_458 = lVar4;
    puStack_448 = &Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_;
    lVar26 = lVar29;
    puStack_490 = puVar21;
    uStack_488 = uVar20;
    uStack_478 = uVar12;
    uStack_460 = uVar15;
    ppppppuStack_450 = &ppppppuStack_3d0;
    auStack_470 = auVar43;
    auStack_4a0 = auVar32;
    auVar32 = (**(code **)**(undefined8 **)(lVar29 + 0x30))();
    if ((auVar32._0_8_ & 1) == 0) {
      auVar36 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))(uVar19,uVar11);
      puVar21 = *(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x28);
      lStack_568 = lVar31;
      iVar8 = (*(code *)*puVar21)(auVar36._0_8_,auVar36._8_8_,puVar27);
      auVar32 = auVar33;
      if (iVar8 != 0) {
        do {
          uVar20 = auVar36._8_8_;
          uVar12 = auVar36._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x10))(&uStack_4d8,uVar12,uVar20);
          puVar24 = *(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x10);
          (*(code *)*puVar24)(&uStack_500,uVar19,uVar11);
          if (puVar14 == (undefined8 *)0x0) {
            auVar36 = func_0x00f78af4();
            uVar11 = auVar36._8_8_;
            uVar19 = auVar36._0_8_;
            puStack_578 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
            lVar25 = lVar26;
            uStack_5d0 = uVar20;
            uStack_5c8 = uVar12;
            lStack_5a0 = lVar29;
            puStack_598 = puVar27;
            puStack_590 = &uStack_4d8;
            puStack_588 = puVar14;
            ppppppuStack_580 = &ppppppuStack_450;
            auStack_5b0 = auVar33;
            auStack_5c0 = auVar32;
            auVar32 = (**(code **)**(undefined8 **)(lVar26 + 0x30))();
            if ((auVar32._0_8_ & 1) == 0) {
              auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 8))(uVar19,uVar11);
              puVar14 = *(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x28);
              lVar29 = lVar31;
              iVar8 = (*(code *)*puVar14)(auVar32._0_8_,auVar32._8_8_,puVar24);
              if (iVar8 != 0) {
                do {
                  uVar20 = auVar32._8_8_;
                  uVar12 = auVar32._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x10))
                            (&uStack_5f0,uVar12,uVar20);
                  puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x10);
                  (*(code *)*puVar27)(&uStack_610,uVar19,uVar11);
                  if (puVar21 == (undefined8 *)0x0) {
                    auVar32 = func_0x00f78af4();
                    uVar11 = auVar32._8_8_;
                    uVar19 = auVar32._0_8_;
                    lVar31 = lVar25;
                    auVar33 = (**(code **)**(undefined8 **)(lVar25 + 0x30))();
                    if ((auVar33._0_8_ & 1) != 0) {
                      return auVar33;
                    }
                    auVar33 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 8))
                                        (uVar19,uVar11);
                    puVar21 = *(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x28);
                    lVar26 = lVar29;
                    iVar8 = (*(code *)*puVar21)(auVar33._0_8_,auVar33._8_8_,puVar27,lVar29);
                    if (iVar8 != 0) {
                      do {
                        uVar18 = auVar33._8_8_;
                        uVar17 = auVar33._0_8_;
                        uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x10))
                                           (uVar17,uVar18);
                        puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x10);
                        uVar20 = (*(code *)*puVar24)(uVar19,uVar11);
                        if (puVar14 == (undefined8 *)0x0) {
                          auVar32 = func_0x00f78af4();
                          auVar44._8_8_ = lVar26;
                          auVar44._0_8_ = puVar24;
                          uVar11 = auVar32._8_8_;
                          uVar19 = auVar32._0_8_;
                          auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar31 + 0x30) + 0x18))();
                          iVar8 = auVar32._0_4_;
                          while( true ) {
                            if (iVar8 < 2) break;
                            auVar44 = (**(code **)**(undefined8 **)(lVar31 + 0x30))
                                                (auVar44._0_8_,auVar44._8_8_);
                            uVar12 = auVar44._8_8_;
                            (*(code *)**(undefined8 **)(*(long *)(lVar31 + 0x30) + 8))
                                      (uVar19,uVar11,auVar44._0_8_,uVar12);
                            (*(code *)**(undefined8 **)(*(long *)(lVar31 + 0x30) + 0x10))
                                      (uVar19,uVar11,uVar11,uVar12,puVar21);
                            auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar31 + 0x30) + 0x18))
                                                (uVar19,uVar11,auVar44._0_8_,uVar12);
                            iVar8 = auVar32._0_4_;
                          }
                          return auVar32;
                        }
                        iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x18))
                                          (puVar14,uVar12,uVar20);
                        if (iVar8 != 0) {
                          auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 8))
                                              (auVar32._0_8_,auVar32._8_8_);
                          (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x20))
                                    (auVar32._0_8_,auVar32._8_8_,uVar17,uVar18);
                        }
                        auVar33 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 8))
                                            (uVar17,uVar18);
                        puVar21 = *(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x28);
                        lVar26 = lVar29;
                        uVar10 = (*(code *)*puVar21)(auVar33._0_8_,auVar33._8_8_,puVar27);
                      } while ((uVar10 & 1) != 0);
                    }
                    uVar12 = auVar32._8_8_;
                    uVar20 = auVar32._0_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x20))
                              (uVar19,uVar11,uVar20,uVar12);
                    (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x30))
                              (uVar19,uVar11,uVar20,uVar12,puVar14);
                    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 8))
                                        (uVar20,uVar12);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar25 + 0x30) + 0x30))
                                        (auVar32._0_8_,auVar32._8_8_,puVar27,lVar29,puVar14);
                    return auVar32;
                  }
                  uStack_628 = uStack_5e8;
                  uStack_630 = uStack_5f0;
                  uStack_618 = uStack_5d8;
                  uStack_620 = uStack_5e0;
                  uStack_648 = uStack_608;
                  uStack_650 = uStack_610;
                  uStack_638 = uStack_5f8;
                  uStack_640 = uStack_600;
                  iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x18))
                                    (puVar21,&uStack_630,&uStack_650,
                                     *(undefined8 *)(*(long *)(lVar26 + 0x30) + 0x18));
                  if (iVar8 != 0) {
                    auVar36 = (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 8))
                                        (auVar36._0_8_,auVar36._8_8_);
                    (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x20))
                              (auVar36._0_8_,auVar36._8_8_,uVar12,uVar20);
                  }
                  auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 8))
                                      (uVar12,uVar20);
                  puVar14 = *(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x28);
                  lVar29 = lVar31;
                  uVar10 = (*(code *)*puVar14)(auVar32._0_8_,auVar32._8_8_,puVar24);
                } while ((uVar10 & 1) != 0);
              }
              uVar12 = auVar36._8_8_;
              uVar20 = auVar36._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x20))
                        (uVar19,uVar11,uVar20,uVar12);
              (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x30))
                        (uVar19,uVar11,uVar20,uVar12,puVar21);
              auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 8))(uVar20,uVar12);
              auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x30))
                                  (auVar32._0_8_,auVar32._8_8_,puVar24,lVar31,puVar21);
            }
            return auVar32;
          }
          uStack_528 = uStack_4d0;
          uStack_530 = uStack_4d8;
          uStack_518 = uStack_4c0;
          uStack_520 = uStack_4c8;
          uStack_510 = uStack_4b8;
          uStack_558 = uStack_4f8;
          uStack_560 = uStack_500;
          uStack_548 = uStack_4e8;
          uStack_550 = uStack_4f0;
          uStack_540 = uStack_4e0;
          iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x18))
                            (puVar14,&uStack_530,&uStack_560,
                             *(undefined8 *)(*(long *)(lVar29 + 0x30) + 0x18));
          if (iVar8 != 0) {
            auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))
                                (auVar32._0_8_,auVar32._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x20))
                      (auVar32._0_8_,auVar32._8_8_,uVar12,uVar20);
          }
          auVar36 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))(uVar12,uVar20);
          puVar21 = *(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x28);
          lVar31 = lStack_568;
          uVar10 = (*(code *)*puVar21)(auVar36._0_8_,auVar36._8_8_,puVar27);
        } while ((uVar10 & 1) != 0);
      }
      uVar12 = auVar32._8_8_;
      uVar20 = auVar32._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x20))(uVar19,uVar11,uVar20,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x30))
                (uVar19,uVar11,uVar20,uVar12,puVar14);
      auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 8))(uVar20,uVar12);
      auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar29 + 0x30) + 0x30))
                          (auVar32._0_8_,auVar32._8_8_,puVar27,lStack_568,puVar14);
    }
    return auVar32;
  }
  iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x18))(lVar4,uVar15,uVar16);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10);
  if (iVar8 == 0) {
    uVar15 = (*UNRECOVERED_JUMPTABLE_00)(uVar20,uVar12);
    uVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(uVar18,uVar17);
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x18))(lVar4,uVar15,uVar16);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10);
    if (iVar8 == 0) {
      uVar15 = (*UNRECOVERED_JUMPTABLE_00)(uVar18,uVar17);
      (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x20))(uVar11,uVar19,uVar15);
      auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar18,uVar17);
    }
    else {
      uVar17 = (*UNRECOVERED_JUMPTABLE_00)(uVar20,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x20))(uVar11,uVar19,uVar17);
    }
    auVar42 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar20,uVar12);
  }
  else {
    uVar12 = (*UNRECOVERED_JUMPTABLE_00)(uVar18,uVar17);
    (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x20))(uVar11,uVar19,uVar12);
    auVar32 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar18,uVar17);
  }
  auVar43 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28))(uVar11,uVar19);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar5 + 0x30);
  goto code_r0x0187a2c0;
code_r0x01879c94:
  auVar36 = (*UNRECOVERED_JUMPTABLE_00)(uVar20,uVar19);
  auVar37 = (*(code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x18))(uVar18,uVar17);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(uVar12 + 0x30) + 0x20);
  goto code_r0x01879b00;
LAB_0187966c:
  auVar32 = (*UNRECOVERED_JUMPTABLE_00)(uStack_70,uStack_78);
  puVar27 = *(undefined8 **)(*(long *)(param_10 + 0x30) + 0x20);
  uVar19 = param_4;
  iVar8 = (*(code *)*puVar27)(auVar32._0_8_,auVar32._8_8_,param_3);
  auVar33._8_8_ = lStack_80;
  auVar33._0_8_ = uStack_88;
  goto joined_r0x01879580;
}



// ============================================================
// RVA: 0x18796d8 | Core.Containers.ListIteratorExtensions.SearchN<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1879854 | Core.Containers.ListIteratorExtensions.SetCurrent<NetworkEventStanding>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__SetCurrent_NetworkEventStanding_
                (long *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                undefined8 param_5,long param_6,undefined8 *param_7,long param_8)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar20;
  int *piVar21;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [16];
  long lStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 ******ppppppuStack_470;
  undefined *puStack_468;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_390 [16];
  undefined8 *puStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  long lStack_348;
  undefined8 ******ppppppuStack_340;
  undefined *puStack_338;
  long lStack_328;
  undefined8 *puStack_320;
  long lStack_318;
  undefined1 auStack_310 [16];
  undefined8 *puStack_300;
  long lStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  undefined1 ******ppppppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined8 *puStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined1 *****pppppuStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  long lStack_218;
  undefined1 auStack_210 [16];
  undefined8 *puStack_200;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 ****ppppuStack_1c0;
  undefined *puStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plVar4;
  
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
  uStack_70 = param_3[4];
  if (param_1 == (long *)0x0) {
    auVar24 = func_0x00f78af4();
    plVar4 = auVar24._0_8_;
    puStack_98 = &Core_Containers_ListIteratorExtensions__SetCurrent_NetworkPlayer_;
    ppuStack_110 = &puStack_a0;
    uStack_f8 = param_3[1];
    uStack_100 = *param_3;
    uStack_e8 = param_3[3];
    uStack_f0 = param_3[2];
    puStack_a0 = &stack0xfffffffffffffff0;
    if (plVar4 == (long *)0x0) {
      auVar24 = func_0x00f78af4();
      plVar4 = auVar24._0_8_;
      puStack_108 = &Core_Containers_ListIteratorExtensions__SetCurrent_object_;
      pppuStack_140 = &ppuStack_110;
      if (plVar4 == (long *)0x0) {
        auVar24 = func_0x00f78af4();
        auVar25._8_8_ = param_6;
        auVar25._0_8_ = param_5;
        puStack_138 = &Core_Containers_ListIteratorExtensions__SetDifference_object_;
        UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
        puVar3 = param_7;
        uStack_1a8 = unaff_x21;
        lStack_1a0 = unaff_x22;
        lStack_198 = param_8;
code_r0x01879b00:
        iVar2 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_);
        if (iVar2 == 0) {
code_r0x01879ce8:
                    /* WARNING: Could not recover jumptable at 0x01879d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar20 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x28))
                             (auVar24._0_8_,auVar24._8_8_,param_3,param_4,lStack_1a0,uStack_1a8);
          return uVar20;
        }
        do {
          uVar12 = auVar25._8_8_;
          uVar7 = auVar25._0_8_;
          uVar23 = auVar24._8_8_;
          uVar9 = auVar24._0_8_;
          puVar16 = *(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
          lVar22 = lStack_198;
          uVar20 = (*(code *)*puVar16)(uVar7,uVar12,param_7);
          if ((uVar20 & 1) == 0) goto code_r0x01879ce8;
          uVar5 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar9,uVar23);
          puVar13 = (undefined8 *)**(undefined8 **)(unaff_x19 + 0x30);
          uVar6 = (*(code *)*puVar13)(uVar7,uVar12);
          if (unaff_x20 == 0) {
            auVar26 = func_0x00f78af4();
            lVar18 = lStack_198;
            uVar23 = uStack_1a8;
            auVar27._8_8_ = param_6;
            auVar27._0_8_ = puVar16;
            puStack_1b8 = &Core_Containers_ListIteratorExtensions__SetIntersection_object_;
            uStack_220 = uStack_1b0;
            puVar16 = puVar3;
            lStack_218 = param_8;
            puStack_200 = param_7;
            uStack_1e0 = uVar5;
            puStack_1d0 = param_3;
            lStack_1c8 = param_4;
            ppppuStack_1c0 = &pppuStack_140;
            auStack_1f0 = auVar24;
            auStack_210 = auVar25;
            iVar2 = (*(code *)**(undefined8 **)(*(long *)(lStack_198 + 0x30) + 0x20))();
            lVar19 = lStack_1a0;
            if (iVar2 == 0) {
              return uStack_220;
            }
            uStack_228 = uVar23;
            goto code_r0x01879d94;
          }
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 8))
                            (unaff_x20,uVar5,uVar6);
          if (iVar2 == 0) {
            uVar5 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar7,uVar12);
            uVar6 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar9,uVar23);
            iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 8))
                              (unaff_x20,uVar5,uVar6);
            UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18)
            ;
            if (iVar2 == 0) goto code_r0x01879c94;
            auVar25 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
            UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20)
            ;
          }
          else {
            uVar7 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar9,uVar23);
            uVar12 = uStack_1a8;
            (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x10))
                      (lStack_1a0,uStack_1a8,uVar7);
            auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))
                                (lStack_1a0,uVar12);
            uStack_1a8 = auVar24._8_8_;
            lStack_1a0 = auVar24._0_8_;
            auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))(uVar9,uVar23)
            ;
            UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20)
            ;
          }
          uVar20 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,param_3,param_4);
          if ((uVar20 & 1) == 0) goto code_r0x01879ce8;
        } while( true );
      }
      lVar22 = **(long **)(param_4 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar19 = *plVar4;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar22) {
            puVar3 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto code_r0x01879a7c;
          }
          piVar21 = piVar21 + 4;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar22,1);
code_r0x01879a7c:
                    /* WARNING: Could not recover jumptable at 0x01879a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (*(code *)*puVar3)(plVar4,auVar24._8_8_,param_3,puVar3[1]);
      return uVar20;
    }
    lVar22 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar19 = *plVar4;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar22) {
          puVar3 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto code_r0x018799bc;
        }
        piVar21 = piVar21 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar22,1);
code_r0x018799bc:
    uStack_d8 = uStack_f8;
    uStack_e0 = uStack_100;
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    uVar20 = (*(code *)*puVar3)(plVar4,auVar24._8_8_,&uStack_e0,puVar3[1]);
    return uVar20;
  }
  lVar22 = **(long **)(param_4 + 0x30);
  if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar22);
  }
  lVar19 = *param_1;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar22) {
        puVar3 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
        goto LAB_018798ec;
      }
      piVar21 = piVar21 + 4;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  puVar3 = (undefined8 *)func_0x00fac1f0(param_1,lVar22,1);
LAB_018798ec:
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_40 = uStack_70;
  uVar20 = (*(code *)*puVar3)(param_1,param_2,&uStack_60,puVar3[1]);
  return uVar20;
code_r0x01879d94:
  uVar23 = auVar27._8_8_;
  uVar9 = auVar27._0_8_;
  uVar12 = auVar26._8_8_;
  uVar7 = auVar26._0_8_;
  puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
  lVar15 = lStack_218;
  uVar20 = (*(code *)*puVar17)(uVar9,uVar23,puVar3);
  if ((uVar20 & 1) == 0) {
    return uStack_220;
  }
  uVar5 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar7,uVar12);
  puVar14 = (undefined8 *)**(undefined8 **)(lVar18 + 0x30);
  uVar6 = (*(code *)*puVar14)(uVar9,uVar23);
  if (lVar19 == 0) {
    auVar24 = func_0x00f78af4();
    lVar1 = lStack_218;
    uVar20 = uStack_220;
    auVar28._8_8_ = param_6;
    auVar28._0_8_ = puVar17;
    lStack_258 = lVar18;
    lStack_248 = lVar19;
    puStack_238 = &Core_Containers_ListIteratorExtensions__SetSymmetricDifference_object_;
    uStack_2a8 = uStack_228;
    lStack_2a0 = lStack_230;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_218 + 0x30);
    puVar17 = puVar16;
    lStack_298 = param_8;
    puStack_270 = puVar13;
    lStack_268 = lVar22;
    puStack_260 = puVar3;
    uStack_250 = uVar5;
    pppppuStack_240 = &ppppuStack_1c0;
    goto code_r0x0187a020;
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(lVar19,uVar5,uVar6);
  if (iVar2 == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar9,uVar23);
    uVar6 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar7,uVar12);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(lVar19,uVar5,uVar6);
    if (iVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar7,uVar12);
      uVar5 = uStack_228;
      (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))(uStack_220,uStack_228,uVar6);
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uStack_220,uVar5);
      uStack_228 = auVar24._8_8_;
      uStack_220 = auVar24._0_8_;
      auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar7,uVar12);
      auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar9,uVar23);
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                        (auVar26._0_8_,auVar26._8_8_,puVar13,lVar22);
      if (iVar2 == 0) {
        return uStack_220;
      }
      goto code_r0x01879d94;
    }
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar9,uVar23);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
  }
  else {
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar7,uVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
  }
  uVar20 = (*UNRECOVERED_JUMPTABLE_00)(auVar26._0_8_,auVar26._8_8_,puVar13,lVar22);
  if ((uVar20 & 1) == 0) {
    return uStack_220;
  }
  goto code_r0x01879d94;
code_r0x0187a020:
  uVar23 = auVar28._8_8_;
  uVar9 = auVar28._0_8_;
  uVar12 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  auStack_290 = auVar26;
  auStack_280 = auVar27;
  uVar8 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
  if ((uVar8 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 8);
    lVar15 = lStack_298;
code_r0x0187a248:
                    /* WARNING: Could not recover jumptable at 0x0187a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*UNRECOVERED_JUMPTABLE_00)
                       (auVar28._0_8_,auVar28._8_8_,puVar16,lVar15,lStack_2a0,uStack_2a8);
    return uVar20;
  }
  puVar3 = (undefined8 *)**(undefined8 **)(lVar1 + 0x30);
  lVar22 = lStack_298;
  iVar2 = (*(code *)*puVar3)(uVar9,uVar23,puVar16);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 8);
    puVar16 = puVar14;
    auVar28 = auVar24;
    goto code_r0x0187a248;
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10))(uVar7,uVar12);
  puVar13 = *(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10);
  uVar6 = (*(code *)*puVar13)(uVar9,uVar23);
  if (uVar20 == 0) {
    auVar25 = func_0x00f78af4();
    lVar18 = lStack_298;
    lVar19 = lStack_2a0;
    auVar30._8_8_ = uStack_2a8;
    auVar30._0_8_ = uStack_2b0;
    auVar26._8_8_ = param_6;
    auVar26._0_8_ = puVar3;
    uStack_2d8 = uVar20;
    lStack_2c8 = lVar1;
    puStack_2b8 = &Core_Containers_ListIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_298 + 0x30);
    lStack_328 = lVar22;
    puStack_320 = puVar17;
    lStack_318 = param_8;
    puStack_300 = puVar14;
    lStack_2f8 = lVar15;
    uStack_2e0 = uVar5;
    puStack_2d0 = puVar16;
    ppppppuStack_2c0 = &pppppuStack_240;
    auStack_310 = auVar24;
    auStack_2f0 = auVar28;
    goto code_r0x0187a2c0;
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x18))(uVar20,uVar5,uVar6);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10);
  if (iVar2 == 0) {
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar9,uVar23);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10))(uVar7,uVar12);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x18))(uVar20,uVar5,uVar6);
    if (iVar2 == 0) {
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(uVar7,uVar12);
      auVar29._8_8_ = uStack_2a8;
      auVar29._0_8_ = lStack_2a0;
    }
    else {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10))(uVar9,uVar23);
      uVar12 = uStack_2a8;
      (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x20))(lStack_2a0,uStack_2a8,uVar7);
      auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(lStack_2a0,uVar12);
    }
    uStack_2a8 = auVar29._8_8_;
    lStack_2a0 = auVar29._0_8_;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(uVar9,uVar23);
    auVar26 = auStack_290;
    auVar27 = auStack_280;
  }
  else {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
    uVar23 = uStack_2a8;
    (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x20))(lStack_2a0,uStack_2a8,uVar9);
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(lStack_2a0,uVar23);
    uStack_2a8 = auVar24._8_8_;
    lStack_2a0 = auVar24._0_8_;
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(uVar7,uVar12);
    auVar26 = auStack_290;
    auVar27 = auStack_280;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar1 + 0x30);
  goto code_r0x0187a020;
code_r0x0187a2c0:
  uVar23 = auVar30._8_8_;
  uVar9 = auVar30._0_8_;
  uVar12 = auVar26._8_8_;
  uVar7 = auVar26._0_8_;
  uVar5 = auVar25._8_8_;
  uVar6 = auVar25._0_8_;
  uVar20 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
  if ((uVar20 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8);
    puVar13 = puStack_320;
    lVar22 = lStack_318;
code_r0x0187a4f4:
                    /* WARNING: Could not recover jumptable at 0x0187a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*UNRECOVERED_JUMPTABLE_00)(auVar26._0_8_,auVar26._8_8_,puVar13,lVar22,uVar9,uVar23);
    return uVar20;
  }
  puVar3 = (undefined8 *)**(long **)(lVar18 + 0x30);
  lVar22 = lStack_318;
  iVar2 = (*(code *)*puVar3)(uVar7,uVar12,puStack_320);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8);
    lVar22 = lStack_328;
    auVar26 = auVar25;
    goto code_r0x0187a4f4;
  }
  uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar6,uVar5);
  puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
  uVar11 = (*(code *)*puVar16)(uVar7,uVar12);
  if (lVar19 == 0) {
    auVar24 = func_0x00f78af4();
    uVar9 = auVar24._8_8_;
    uVar23 = auVar24._0_8_;
    lStack_370 = lVar18;
    lStack_348 = lVar19;
    puStack_338 = &Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_;
    lVar19 = param_6;
    puStack_380 = puVar13;
    uStack_378 = uVar7;
    uStack_368 = uVar12;
    uStack_350 = uVar10;
    ppppppuStack_340 = &ppppppuStack_2c0;
    auStack_360 = auVar30;
    auStack_390 = auVar25;
    uVar20 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((uVar20 & 1) == 0) {
      auVar26 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar23,uVar9);
      puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      lStack_458 = lVar22;
      iVar2 = (*(code *)*puVar13)(auVar26._0_8_,auVar26._8_8_,puVar16);
      auVar25 = auVar24;
      if (iVar2 != 0) {
        do {
          uVar7 = auVar26._8_8_;
          uVar12 = auVar26._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_3c8,uVar12,uVar7);
          puVar17 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
          (*(code *)*puVar17)(&uStack_3f0,uVar23,uVar9);
          if (puVar3 == (undefined8 *)0x0) {
            auVar26 = func_0x00f78af4();
            uVar9 = auVar26._8_8_;
            uVar23 = auVar26._0_8_;
            puStack_468 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
            lVar18 = lVar19;
            uStack_4c0 = uVar7;
            uStack_4b8 = uVar12;
            lStack_490 = param_6;
            puStack_488 = puVar16;
            puStack_480 = &uStack_3c8;
            puStack_478 = puVar3;
            ppppppuStack_470 = &ppppppuStack_340;
            auStack_4a0 = auVar24;
            auStack_4b0 = auVar25;
            uVar20 = (**(code **)**(undefined8 **)(lVar19 + 0x30))();
            if ((uVar20 & 1) == 0) {
              auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar23,uVar9);
              puVar3 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x28);
              lVar15 = lVar22;
              iVar2 = (*(code *)*puVar3)(auVar24._0_8_,auVar24._8_8_,puVar17);
              if (iVar2 != 0) {
                do {
                  uVar7 = auVar24._8_8_;
                  uVar12 = auVar24._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))
                            (&uStack_4e0,uVar12,uVar7);
                  puVar16 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10);
                  (*(code *)*puVar16)(&uStack_500,uVar23,uVar9);
                  if (puVar13 == (undefined8 *)0x0) {
                    auVar24 = func_0x00f78af4();
                    uVar9 = auVar24._8_8_;
                    uVar23 = auVar24._0_8_;
                    lVar22 = lVar18;
                    uVar20 = (**(code **)**(undefined8 **)(lVar18 + 0x30))();
                    if ((uVar20 & 1) != 0) {
                      return uVar20;
                    }
                    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                        (uVar23,uVar9);
                    puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28);
                    lVar19 = lVar15;
                    iVar2 = (*(code *)*puVar13)(auVar25._0_8_,auVar25._8_8_,puVar16,lVar15);
                    if (iVar2 != 0) {
                      do {
                        uVar6 = auVar25._8_8_;
                        uVar5 = auVar25._0_8_;
                        uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))
                                           (uVar5,uVar6);
                        puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
                        uVar7 = (*(code *)*puVar17)(uVar23,uVar9);
                        if (puVar3 == (undefined8 *)0x0) {
                          auVar25 = func_0x00f78af4();
                          auVar24._8_8_ = lVar19;
                          auVar24._0_8_ = puVar17;
                          uVar9 = auVar25._8_8_;
                          uVar23 = auVar25._0_8_;
                          uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))();
                          iVar2 = (int)uVar20;
                          while( true ) {
                            if (iVar2 < 2) break;
                            auVar24 = (**(code **)**(undefined8 **)(lVar22 + 0x30))
                                                (auVar24._0_8_,auVar24._8_8_);
                            uVar12 = auVar24._8_8_;
                            (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
                                      (uVar23,uVar9,auVar24._0_8_,uVar12);
                            (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))
                                      (uVar23,uVar9,uVar9,uVar12,puVar13);
                            uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                                               (uVar23,uVar9,auVar24._0_8_,uVar12);
                            iVar2 = (int)uVar20;
                          }
                          return uVar20;
                        }
                        iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))
                                          (puVar3,uVar12,uVar7);
                        if (iVar2 != 0) {
                          auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                              (auVar24._0_8_,auVar24._8_8_);
                          (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                                    (auVar24._0_8_,auVar24._8_8_,uVar5,uVar6);
                        }
                        auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                            (uVar5,uVar6);
                        puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28);
                        lVar19 = lVar15;
                        uVar20 = (*(code *)*puVar13)(auVar25._0_8_,auVar25._8_8_,puVar16);
                      } while ((uVar20 & 1) != 0);
                    }
                    uVar12 = auVar24._8_8_;
                    uVar7 = auVar24._0_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                              (uVar23,uVar9,uVar7,uVar12);
                    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x30))
                              (uVar23,uVar9,uVar7,uVar12,puVar3);
                    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                        (uVar7,uVar12);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x30))
                                       (auVar24._0_8_,auVar24._8_8_,puVar16,lVar15,puVar3);
                    return uVar20;
                  }
                  uStack_518 = uStack_4d8;
                  uStack_520 = uStack_4e0;
                  uStack_508 = uStack_4c8;
                  uStack_510 = uStack_4d0;
                  uStack_538 = uStack_4f8;
                  uStack_540 = uStack_500;
                  uStack_528 = uStack_4e8;
                  uStack_530 = uStack_4f0;
                  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18))
                                    (puVar13,&uStack_520,&uStack_540,
                                     *(undefined8 *)(*(long *)(lVar19 + 0x30) + 0x18));
                  if (iVar2 != 0) {
                    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))
                                        (auVar26._0_8_,auVar26._8_8_);
                    (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20))
                              (auVar26._0_8_,auVar26._8_8_,uVar12,uVar7);
                  }
                  auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar12,uVar7)
                  ;
                  puVar3 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x28);
                  lVar15 = lVar22;
                  uVar20 = (*(code *)*puVar3)(auVar24._0_8_,auVar24._8_8_,puVar17);
                } while ((uVar20 & 1) != 0);
              }
              uVar12 = auVar26._8_8_;
              uVar7 = auVar26._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20))
                        (uVar23,uVar9,uVar7,uVar12);
              (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x30))
                        (uVar23,uVar9,uVar7,uVar12,puVar13);
              auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar7,uVar12);
              uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x30))
                                 (auVar24._0_8_,auVar24._8_8_,puVar17,lVar22,puVar13);
            }
            return uVar20;
          }
          uStack_418 = uStack_3c0;
          uStack_420 = uStack_3c8;
          uStack_408 = uStack_3b0;
          uStack_410 = uStack_3b8;
          uStack_400 = uStack_3a8;
          uStack_448 = uStack_3e8;
          uStack_450 = uStack_3f0;
          uStack_438 = uStack_3d8;
          uStack_440 = uStack_3e0;
          uStack_430 = uStack_3d0;
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (puVar3,&uStack_420,&uStack_450,
                             *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
          if (iVar2 != 0) {
            auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar25._0_8_,auVar25._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                      (auVar25._0_8_,auVar25._8_8_,uVar12,uVar7);
          }
          auVar26 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar12,uVar7);
          puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
          lVar22 = lStack_458;
          uVar20 = (*(code *)*puVar13)(auVar26._0_8_,auVar26._8_8_,puVar16);
        } while ((uVar20 & 1) != 0);
      }
      uVar12 = auVar25._8_8_;
      uVar7 = auVar25._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar23,uVar9,uVar7,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (uVar23,uVar9,uVar7,uVar12,puVar3);
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar12);
      uVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                         (auVar24._0_8_,auVar24._8_8_,puVar16,lStack_458,puVar3);
    }
    return uVar20;
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))(lVar19,uVar10,uVar11);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
  if (iVar2 == 0) {
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
    uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar6,uVar5);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))(lVar19,uVar10,uVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
    if (iVar2 == 0) {
      uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
      (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))(uVar9,uVar23,uVar10);
      auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar6,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))(uVar9,uVar23,uVar5);
    }
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar7,uVar12);
  }
  else {
    uVar12 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))(uVar9,uVar23,uVar12);
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar6,uVar5);
  }
  auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar9,uVar23);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar18 + 0x30);
  goto code_r0x0187a2c0;
code_r0x01879c94:
  auVar24 = (*UNRECOVERED_JUMPTABLE_00)(uVar9,uVar23);
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))(uVar7,uVar12);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
  goto code_r0x01879b00;
}



// ============================================================
// RVA: 0x187992c | Core.Containers.ListIteratorExtensions.SetCurrent<NetworkPlayer>
// ============================================================

ulong Core_Containers_ListIteratorExtensions__SetCurrent_NetworkPlayer_
                (long *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                undefined8 param_5,long param_6,undefined8 *param_7,long param_8)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar20;
  int *piVar21;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [16];
  long lStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined *puStack_3d8;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
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
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_300 [16];
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined1 ******ppppppuStack_2b0;
  undefined *puStack_2a8;
  long lStack_298;
  undefined8 *puStack_290;
  long lStack_288;
  undefined1 auStack_280 [16];
  undefined8 *puStack_270;
  long lStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  undefined1 *****pppppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 ****ppppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  undefined1 auStack_180 [16];
  undefined8 *puStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 *puStack_140;
  long lStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plVar4;
  
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  if (param_1 == (long *)0x0) {
    auVar24 = func_0x00f78af4();
    plVar4 = auVar24._0_8_;
    puStack_78 = &Core_Containers_ListIteratorExtensions__SetCurrent_object_;
    ppuStack_b0 = &puStack_80;
    puStack_80 = &stack0xfffffffffffffff0;
    if (plVar4 == (long *)0x0) {
      auVar24 = func_0x00f78af4();
      auVar25._8_8_ = param_6;
      auVar25._0_8_ = param_5;
      puStack_a8 = &Core_Containers_ListIteratorExtensions__SetDifference_object_;
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
      puVar3 = param_7;
      uStack_118 = unaff_x21;
      lStack_110 = unaff_x22;
      lStack_108 = param_8;
code_r0x01879b00:
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_);
      if (iVar2 == 0) {
code_r0x01879ce8:
                    /* WARNING: Could not recover jumptable at 0x01879d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar20 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x28))
                           (auVar24._0_8_,auVar24._8_8_,param_3,param_4,lStack_110,uStack_118);
        return uVar20;
      }
      do {
        uVar12 = auVar25._8_8_;
        uVar7 = auVar25._0_8_;
        uVar23 = auVar24._8_8_;
        uVar9 = auVar24._0_8_;
        puVar16 = *(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
        lVar22 = lStack_108;
        uVar20 = (*(code *)*puVar16)(uVar7,uVar12,param_7);
        if ((uVar20 & 1) == 0) goto code_r0x01879ce8;
        uVar5 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar9,uVar23);
        puVar13 = (undefined8 *)**(undefined8 **)(unaff_x19 + 0x30);
        uVar6 = (*(code *)*puVar13)(uVar7,uVar12);
        if (unaff_x20 == 0) {
          auVar26 = func_0x00f78af4();
          lVar18 = lStack_108;
          uVar23 = uStack_118;
          auVar27._8_8_ = param_6;
          auVar27._0_8_ = puVar16;
          puStack_128 = &Core_Containers_ListIteratorExtensions__SetIntersection_object_;
          uStack_190 = uStack_120;
          puVar16 = puVar3;
          lStack_188 = param_8;
          puStack_170 = param_7;
          uStack_150 = uVar5;
          puStack_140 = param_3;
          lStack_138 = param_4;
          pppuStack_130 = &ppuStack_b0;
          auStack_160 = auVar24;
          auStack_180 = auVar25;
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(lStack_108 + 0x30) + 0x20))();
          lVar19 = lStack_110;
          if (iVar2 == 0) {
            return uStack_190;
          }
          uStack_198 = uVar23;
          goto code_r0x01879d94;
        }
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 8))(unaff_x20,uVar5,uVar6)
        ;
        if (iVar2 == 0) {
          uVar5 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar7,uVar12);
          uVar6 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar9,uVar23);
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 8))
                            (unaff_x20,uVar5,uVar6);
          UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18);
          if (iVar2 == 0) goto code_r0x01879c94;
          auVar25 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
          UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar9,uVar23);
          uVar12 = uStack_118;
          (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x10))
                    (lStack_110,uStack_118,uVar7);
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))
                              (lStack_110,uVar12);
          uStack_118 = auVar24._8_8_;
          lStack_110 = auVar24._0_8_;
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))(uVar9,uVar23);
          UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
        }
        uVar20 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,param_3,param_4);
        if ((uVar20 & 1) == 0) goto code_r0x01879ce8;
      } while( true );
    }
    lVar22 = **(long **)(param_4 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar19 = *plVar4;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar22) {
          puVar3 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto code_r0x01879a7c;
        }
        piVar21 = piVar21 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar22,1);
code_r0x01879a7c:
                    /* WARNING: Could not recover jumptable at 0x01879a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*(code *)*puVar3)(plVar4,auVar24._8_8_,param_3,puVar3[1]);
    return uVar20;
  }
  lVar22 = **(long **)(param_4 + 0x30);
  if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar22);
  }
  lVar19 = *param_1;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar22) {
        puVar3 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
        goto LAB_018799bc;
      }
      piVar21 = piVar21 + 4;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  puVar3 = (undefined8 *)func_0x00fac1f0(param_1,lVar22,1);
LAB_018799bc:
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  uVar20 = (*(code *)*puVar3)(param_1,param_2,&uStack_50,puVar3[1]);
  return uVar20;
code_r0x01879d94:
  uVar23 = auVar27._8_8_;
  uVar9 = auVar27._0_8_;
  uVar12 = auVar26._8_8_;
  uVar7 = auVar26._0_8_;
  puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
  lVar15 = lStack_188;
  uVar20 = (*(code *)*puVar17)(uVar9,uVar23,puVar3);
  if ((uVar20 & 1) == 0) {
    return uStack_190;
  }
  uVar5 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar7,uVar12);
  puVar14 = (undefined8 *)**(undefined8 **)(lVar18 + 0x30);
  uVar6 = (*(code *)*puVar14)(uVar9,uVar23);
  if (lVar19 == 0) {
    auVar24 = func_0x00f78af4();
    lVar1 = lStack_188;
    uVar20 = uStack_190;
    auVar28._8_8_ = param_6;
    auVar28._0_8_ = puVar17;
    lStack_1c8 = lVar18;
    lStack_1b8 = lVar19;
    puStack_1a8 = &Core_Containers_ListIteratorExtensions__SetSymmetricDifference_object_;
    uStack_218 = uStack_198;
    lStack_210 = lStack_1a0;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_188 + 0x30);
    puVar17 = puVar16;
    lStack_208 = param_8;
    puStack_1e0 = puVar13;
    lStack_1d8 = lVar22;
    puStack_1d0 = puVar3;
    uStack_1c0 = uVar5;
    ppppuStack_1b0 = &pppuStack_130;
    goto code_r0x0187a020;
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(lVar19,uVar5,uVar6);
  if (iVar2 == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar9,uVar23);
    uVar6 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar7,uVar12);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(lVar19,uVar5,uVar6);
    if (iVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar18 + 0x30))(uVar7,uVar12);
      uVar5 = uStack_198;
      (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))(uStack_190,uStack_198,uVar6);
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uStack_190,uVar5);
      uStack_198 = auVar24._8_8_;
      uStack_190 = auVar24._0_8_;
      auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar7,uVar12);
      auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar9,uVar23);
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                        (auVar26._0_8_,auVar26._8_8_,puVar13,lVar22);
      if (iVar2 == 0) {
        return uStack_190;
      }
      goto code_r0x01879d94;
    }
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar9,uVar23);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
  }
  else {
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar7,uVar12);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20);
  }
  uVar20 = (*UNRECOVERED_JUMPTABLE_00)(auVar26._0_8_,auVar26._8_8_,puVar13,lVar22);
  if ((uVar20 & 1) == 0) {
    return uStack_190;
  }
  goto code_r0x01879d94;
code_r0x0187a020:
  uVar23 = auVar28._8_8_;
  uVar9 = auVar28._0_8_;
  uVar12 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  auStack_200 = auVar26;
  auStack_1f0 = auVar27;
  uVar8 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
  if ((uVar8 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 8);
    lVar15 = lStack_208;
code_r0x0187a248:
                    /* WARNING: Could not recover jumptable at 0x0187a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*UNRECOVERED_JUMPTABLE_00)
                       (auVar28._0_8_,auVar28._8_8_,puVar16,lVar15,lStack_210,uStack_218);
    return uVar20;
  }
  puVar3 = (undefined8 *)**(undefined8 **)(lVar1 + 0x30);
  lVar22 = lStack_208;
  iVar2 = (*(code *)*puVar3)(uVar9,uVar23,puVar16);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 8);
    puVar16 = puVar14;
    auVar28 = auVar24;
    goto code_r0x0187a248;
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10))(uVar7,uVar12);
  puVar13 = *(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10);
  uVar6 = (*(code *)*puVar13)(uVar9,uVar23);
  if (uVar20 == 0) {
    auVar25 = func_0x00f78af4();
    lVar18 = lStack_208;
    lVar19 = lStack_210;
    auVar30._8_8_ = uStack_218;
    auVar30._0_8_ = uStack_220;
    auVar26._8_8_ = param_6;
    auVar26._0_8_ = puVar3;
    uStack_248 = uVar20;
    lStack_238 = lVar1;
    puStack_228 = &Core_Containers_ListIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_208 + 0x30);
    lStack_298 = lVar22;
    puStack_290 = puVar17;
    lStack_288 = param_8;
    puStack_270 = puVar14;
    lStack_268 = lVar15;
    uStack_250 = uVar5;
    puStack_240 = puVar16;
    pppppuStack_230 = &ppppuStack_1b0;
    auStack_280 = auVar24;
    auStack_260 = auVar28;
    goto code_r0x0187a2c0;
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x18))(uVar20,uVar5,uVar6);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10);
  if (iVar2 == 0) {
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar9,uVar23);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10))(uVar7,uVar12);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x18))(uVar20,uVar5,uVar6);
    if (iVar2 == 0) {
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(uVar7,uVar12);
      auVar29._8_8_ = uStack_218;
      auVar29._0_8_ = lStack_210;
    }
    else {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x10))(uVar9,uVar23);
      uVar12 = uStack_218;
      (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x20))(lStack_210,uStack_218,uVar7);
      auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(lStack_210,uVar12);
    }
    uStack_218 = auVar29._8_8_;
    lStack_210 = auVar29._0_8_;
    auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(uVar9,uVar23);
    auVar26 = auStack_200;
    auVar27 = auStack_1f0;
  }
  else {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
    uVar23 = uStack_218;
    (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x20))(lStack_210,uStack_218,uVar9);
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(lStack_210,uVar23);
    uStack_218 = auVar24._8_8_;
    lStack_210 = auVar24._0_8_;
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 0x28))(uVar7,uVar12);
    auVar26 = auStack_200;
    auVar27 = auStack_1f0;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar1 + 0x30);
  goto code_r0x0187a020;
code_r0x0187a2c0:
  uVar23 = auVar30._8_8_;
  uVar9 = auVar30._0_8_;
  uVar12 = auVar26._8_8_;
  uVar7 = auVar26._0_8_;
  uVar5 = auVar25._8_8_;
  uVar6 = auVar25._0_8_;
  uVar20 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
  if ((uVar20 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8);
    puVar13 = puStack_290;
    lVar22 = lStack_288;
code_r0x0187a4f4:
                    /* WARNING: Could not recover jumptable at 0x0187a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*UNRECOVERED_JUMPTABLE_00)(auVar26._0_8_,auVar26._8_8_,puVar13,lVar22,uVar9,uVar23);
    return uVar20;
  }
  puVar3 = (undefined8 *)**(long **)(lVar18 + 0x30);
  lVar22 = lStack_288;
  iVar2 = (*(code *)*puVar3)(uVar7,uVar12,puStack_290);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8);
    lVar22 = lStack_298;
    auVar26 = auVar25;
    goto code_r0x0187a4f4;
  }
  uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar6,uVar5);
  puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
  uVar11 = (*(code *)*puVar16)(uVar7,uVar12);
  if (lVar19 == 0) {
    auVar24 = func_0x00f78af4();
    uVar9 = auVar24._8_8_;
    uVar23 = auVar24._0_8_;
    lStack_2e0 = lVar18;
    lStack_2b8 = lVar19;
    puStack_2a8 = &Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_;
    lVar19 = param_6;
    puStack_2f0 = puVar13;
    uStack_2e8 = uVar7;
    uStack_2d8 = uVar12;
    uStack_2c0 = uVar10;
    ppppppuStack_2b0 = &pppppuStack_230;
    auStack_2d0 = auVar30;
    auStack_300 = auVar25;
    uVar20 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((uVar20 & 1) == 0) {
      auVar26 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar23,uVar9);
      puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      lStack_3c8 = lVar22;
      iVar2 = (*(code *)*puVar13)(auVar26._0_8_,auVar26._8_8_,puVar16);
      auVar25 = auVar24;
      if (iVar2 != 0) {
        do {
          uVar7 = auVar26._8_8_;
          uVar12 = auVar26._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_338,uVar12,uVar7);
          puVar17 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
          (*(code *)*puVar17)(&uStack_360,uVar23,uVar9);
          if (puVar3 == (undefined8 *)0x0) {
            auVar26 = func_0x00f78af4();
            uVar9 = auVar26._8_8_;
            uVar23 = auVar26._0_8_;
            puStack_3d8 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
            lVar18 = lVar19;
            uStack_430 = uVar7;
            uStack_428 = uVar12;
            lStack_400 = param_6;
            puStack_3f8 = puVar16;
            puStack_3f0 = &uStack_338;
            puStack_3e8 = puVar3;
            ppppppuStack_3e0 = &ppppppuStack_2b0;
            auStack_410 = auVar24;
            auStack_420 = auVar25;
            uVar20 = (**(code **)**(undefined8 **)(lVar19 + 0x30))();
            if ((uVar20 & 1) == 0) {
              auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar23,uVar9);
              puVar3 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x28);
              lVar15 = lVar22;
              iVar2 = (*(code *)*puVar3)(auVar24._0_8_,auVar24._8_8_,puVar17);
              if (iVar2 != 0) {
                do {
                  uVar7 = auVar24._8_8_;
                  uVar12 = auVar24._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10))
                            (&uStack_450,uVar12,uVar7);
                  puVar16 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x10);
                  (*(code *)*puVar16)(&uStack_470,uVar23,uVar9);
                  if (puVar13 == (undefined8 *)0x0) {
                    auVar24 = func_0x00f78af4();
                    uVar9 = auVar24._8_8_;
                    uVar23 = auVar24._0_8_;
                    lVar22 = lVar18;
                    uVar20 = (**(code **)**(undefined8 **)(lVar18 + 0x30))();
                    if ((uVar20 & 1) != 0) {
                      return uVar20;
                    }
                    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                        (uVar23,uVar9);
                    puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28);
                    lVar19 = lVar15;
                    iVar2 = (*(code *)*puVar13)(auVar25._0_8_,auVar25._8_8_,puVar16,lVar15);
                    if (iVar2 != 0) {
                      do {
                        uVar6 = auVar25._8_8_;
                        uVar5 = auVar25._0_8_;
                        uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))
                                           (uVar5,uVar6);
                        puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
                        uVar7 = (*(code *)*puVar17)(uVar23,uVar9);
                        if (puVar3 == (undefined8 *)0x0) {
                          auVar25 = func_0x00f78af4();
                          auVar24._8_8_ = lVar19;
                          auVar24._0_8_ = puVar17;
                          uVar9 = auVar25._8_8_;
                          uVar23 = auVar25._0_8_;
                          uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))();
                          iVar2 = (int)uVar20;
                          while( true ) {
                            if (iVar2 < 2) break;
                            auVar24 = (**(code **)**(undefined8 **)(lVar22 + 0x30))
                                                (auVar24._0_8_,auVar24._8_8_);
                            uVar12 = auVar24._8_8_;
                            (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
                                      (uVar23,uVar9,auVar24._0_8_,uVar12);
                            (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))
                                      (uVar23,uVar9,uVar9,uVar12,puVar13);
                            uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                                               (uVar23,uVar9,auVar24._0_8_,uVar12);
                            iVar2 = (int)uVar20;
                          }
                          return uVar20;
                        }
                        iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))
                                          (puVar3,uVar12,uVar7);
                        if (iVar2 != 0) {
                          auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                              (auVar24._0_8_,auVar24._8_8_);
                          (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                                    (auVar24._0_8_,auVar24._8_8_,uVar5,uVar6);
                        }
                        auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                            (uVar5,uVar6);
                        puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28);
                        lVar19 = lVar15;
                        uVar20 = (*(code *)*puVar13)(auVar25._0_8_,auVar25._8_8_,puVar16);
                      } while ((uVar20 & 1) != 0);
                    }
                    uVar12 = auVar24._8_8_;
                    uVar7 = auVar24._0_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                              (uVar23,uVar9,uVar7,uVar12);
                    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x30))
                              (uVar23,uVar9,uVar7,uVar12,puVar3);
                    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                        (uVar7,uVar12);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x30))
                                       (auVar24._0_8_,auVar24._8_8_,puVar16,lVar15,puVar3);
                    return uVar20;
                  }
                  uStack_488 = uStack_448;
                  uStack_490 = uStack_450;
                  uStack_478 = uStack_438;
                  uStack_480 = uStack_440;
                  uStack_4a8 = uStack_468;
                  uStack_4b0 = uStack_470;
                  uStack_498 = uStack_458;
                  uStack_4a0 = uStack_460;
                  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x18))
                                    (puVar13,&uStack_490,&uStack_4b0,
                                     *(undefined8 *)(*(long *)(lVar19 + 0x30) + 0x18));
                  if (iVar2 != 0) {
                    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))
                                        (auVar26._0_8_,auVar26._8_8_);
                    (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20))
                              (auVar26._0_8_,auVar26._8_8_,uVar12,uVar7);
                  }
                  auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar12,uVar7)
                  ;
                  puVar3 = *(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x28);
                  lVar15 = lVar22;
                  uVar20 = (*(code *)*puVar3)(auVar24._0_8_,auVar24._8_8_,puVar17);
                } while ((uVar20 & 1) != 0);
              }
              uVar12 = auVar26._8_8_;
              uVar7 = auVar26._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x20))
                        (uVar23,uVar9,uVar7,uVar12);
              (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x30))
                        (uVar23,uVar9,uVar7,uVar12,puVar13);
              auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 8))(uVar7,uVar12);
              uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar19 + 0x30) + 0x30))
                                 (auVar24._0_8_,auVar24._8_8_,puVar17,lVar22,puVar13);
            }
            return uVar20;
          }
          uStack_388 = uStack_330;
          uStack_390 = uStack_338;
          uStack_378 = uStack_320;
          uStack_380 = uStack_328;
          uStack_370 = uStack_318;
          uStack_3b8 = uStack_358;
          uStack_3c0 = uStack_360;
          uStack_3a8 = uStack_348;
          uStack_3b0 = uStack_350;
          uStack_3a0 = uStack_340;
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (puVar3,&uStack_390,&uStack_3c0,
                             *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
          if (iVar2 != 0) {
            auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar25._0_8_,auVar25._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                      (auVar25._0_8_,auVar25._8_8_,uVar12,uVar7);
          }
          auVar26 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar12,uVar7);
          puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
          lVar22 = lStack_3c8;
          uVar20 = (*(code *)*puVar13)(auVar26._0_8_,auVar26._8_8_,puVar16);
        } while ((uVar20 & 1) != 0);
      }
      uVar12 = auVar25._8_8_;
      uVar7 = auVar25._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar23,uVar9,uVar7,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (uVar23,uVar9,uVar7,uVar12,puVar3);
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar12);
      uVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                         (auVar24._0_8_,auVar24._8_8_,puVar16,lStack_3c8,puVar3);
    }
    return uVar20;
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))(lVar19,uVar10,uVar11);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
  if (iVar2 == 0) {
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
    uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))(uVar6,uVar5);
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))(lVar19,uVar10,uVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
    if (iVar2 == 0) {
      uVar10 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
      (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))(uVar9,uVar23,uVar10);
      auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar6,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar12);
      (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))(uVar9,uVar23,uVar5);
    }
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar7,uVar12);
  }
  else {
    uVar12 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))(uVar9,uVar23,uVar12);
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar6,uVar5);
  }
  auVar30 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28))(uVar9,uVar23);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar18 + 0x30);
  goto code_r0x0187a2c0;
code_r0x01879c94:
  auVar24 = (*UNRECOVERED_JUMPTABLE_00)(uVar9,uVar23);
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))(uVar7,uVar12);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
  goto code_r0x01879b00;
}



// ============================================================
// RVA: 0x18799f4 | Core.Containers.ListIteratorExtensions.SetCurrent<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__SetCurrent_object_
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          long param_6,undefined8 *param_7,long param_8)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar21;
  long unaff_x22;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [16];
  undefined1 auStack_3a0 [16];
  long lStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_290 [16];
  undefined8 *puStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  long lStack_248;
  undefined8 ***pppuStack_240;
  undefined *puStack_238;
  long lStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  undefined1 auStack_210 [16];
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined8 *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  undefined8 *puStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 == (long *)0x0) {
    auVar23 = func_0x00f78af4();
    auVar24._8_8_ = param_6;
    auVar24._0_8_ = param_5;
    puStack_38 = &Core_Containers_ListIteratorExtensions__SetDifference_object_;
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
    puVar4 = param_7;
    uStack_a8 = unaff_x21;
    lStack_a0 = unaff_x22;
    lStack_98 = param_8;
    puStack_40 = &stack0xfffffffffffffff0;
code_r0x01879b00:
    iVar3 = (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_);
    if (iVar3 == 0) {
code_r0x01879ce8:
                    /* WARNING: Could not recover jumptable at 0x01879d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x28))
                          (auVar23._0_8_,auVar23._8_8_,param_3,param_4,lStack_a0,uStack_a8);
      return auVar23;
    }
    do {
      uVar11 = auVar24._8_8_;
      uVar7 = auVar24._0_8_;
      uVar21 = auVar23._8_8_;
      uVar8 = auVar23._0_8_;
      puVar15 = *(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
      lVar22 = lStack_98;
      uVar19 = (*(code *)*puVar15)(uVar7,uVar11,param_7);
      if ((uVar19 & 1) == 0) goto code_r0x01879ce8;
      uVar5 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar8,uVar21);
      puVar12 = (undefined8 *)**(undefined8 **)(unaff_x19 + 0x30);
      uVar6 = (*(code *)*puVar12)(uVar7,uVar11);
      if (unaff_x20 == 0) {
        auVar25 = func_0x00f78af4();
        lVar17 = lStack_98;
        uVar21 = uStack_a8;
        auVar26._8_8_ = param_6;
        auVar26._0_8_ = puVar15;
        puStack_b8 = &Core_Containers_ListIteratorExtensions__SetIntersection_object_;
        lStack_120 = lStack_b0;
        puVar15 = puVar4;
        lStack_118 = param_8;
        puStack_100 = param_7;
        uStack_e0 = uVar5;
        uStack_d0 = param_3;
        lStack_c8 = param_4;
        ppuStack_c0 = &puStack_40;
        auStack_f0 = auVar23;
        auStack_110 = auVar24;
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(lStack_98 + 0x30) + 0x20))();
        lVar18 = lStack_a0;
        uStack_128 = uVar21;
        if (iVar3 == 0) goto code_r0x01879f94;
        goto code_r0x01879d94;
      }
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 8))(unaff_x20,uVar5,uVar6);
      if (iVar3 == 0) {
        uVar5 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar7,uVar11);
        uVar6 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar8,uVar21);
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 8))(unaff_x20,uVar5,uVar6)
        ;
        UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18);
        if (iVar3 == 0) goto code_r0x01879c94;
        auVar24 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
        UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(unaff_x19 + 0x30))(uVar8,uVar21);
        uVar11 = uStack_a8;
        (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x10))(lStack_a0,uStack_a8,uVar7);
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))(lStack_a0,uVar11)
        ;
        uStack_a8 = auVar23._8_8_;
        lStack_a0 = auVar23._0_8_;
        auVar23 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))(uVar8,uVar21);
        UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
      }
      uVar19 = (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_,param_3,param_4);
      if ((uVar19 & 1) == 0) goto code_r0x01879ce8;
    } while( true );
  }
  lVar22 = **(long **)(param_4 + 0x30);
  if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar22);
  }
  lVar18 = *param_1;
  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == lVar22) {
        puVar4 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_01879a7c;
      }
      piVar20 = piVar20 + 4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  puVar4 = (undefined8 *)func_0x00fac1f0(param_1,lVar22,1);
LAB_01879a7c:
                    /* WARNING: Could not recover jumptable at 0x01879a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar23 = (*(code *)*puVar4)(param_1,param_2,param_3,puVar4[1]);
  return auVar23;
code_r0x01879d94:
  uVar21 = auVar26._8_8_;
  uVar8 = auVar26._0_8_;
  uVar11 = auVar25._8_8_;
  uVar7 = auVar25._0_8_;
  puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20);
  lVar14 = lStack_118;
  uVar19 = (*(code *)*puVar16)(uVar8,uVar21,puVar4);
  if ((uVar19 & 1) == 0) goto code_r0x01879f94;
  uVar5 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar7,uVar11);
  puVar13 = (undefined8 *)**(undefined8 **)(lVar17 + 0x30);
  uVar6 = (*(code *)*puVar13)(uVar8,uVar21);
  if (lVar18 == 0) {
    auVar23 = func_0x00f78af4();
    lVar2 = lStack_118;
    lVar1 = lStack_120;
    auVar27._8_8_ = param_6;
    auVar27._0_8_ = puVar16;
    lStack_158 = lVar17;
    lStack_148 = lVar18;
    puStack_138 = &Core_Containers_ListIteratorExtensions__SetSymmetricDifference_object_;
    uStack_1a8 = uStack_128;
    lStack_1a0 = lStack_130;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_118 + 0x30);
    puVar16 = puVar15;
    lStack_198 = param_8;
    puStack_170 = puVar12;
    lStack_168 = lVar22;
    puStack_160 = puVar4;
    uStack_150 = uVar5;
    pppuStack_140 = &ppuStack_c0;
    goto code_r0x0187a020;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar18,uVar5,uVar6);
  if (iVar3 != 0) {
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar7,uVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20);
code_r0x01879e3c:
    uVar19 = (*UNRECOVERED_JUMPTABLE_00)(auVar25._0_8_,auVar25._8_8_,puVar12,lVar22);
    if ((uVar19 & 1) == 0) goto code_r0x01879f94;
    goto code_r0x01879d94;
  }
  uVar5 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar8,uVar21);
  uVar6 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar7,uVar11);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar18,uVar5,uVar6);
  if (iVar3 != 0) {
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar8,uVar21);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20);
    goto code_r0x01879e3c;
  }
  uVar6 = (**(code **)**(undefined8 **)(lVar17 + 0x30))(uVar7,uVar11);
  uVar5 = uStack_128;
  (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lStack_120,uStack_128,uVar6);
  auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(lStack_120,uVar5);
  uStack_128 = auVar23._8_8_;
  lStack_120 = auVar23._0_8_;
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar7,uVar11);
  auVar26 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar8,uVar21);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                    (auVar25._0_8_,auVar25._8_8_,puVar12,lVar22);
  if (iVar3 == 0) {
code_r0x01879f94:
    auVar23._8_8_ = uStack_128;
    auVar23._0_8_ = lStack_120;
    return auVar23;
  }
  goto code_r0x01879d94;
code_r0x0187a020:
  uVar21 = auVar27._8_8_;
  uVar8 = auVar27._0_8_;
  uVar11 = auVar23._8_8_;
  uVar7 = auVar23._0_8_;
  auStack_190 = auVar25;
  auStack_180 = auVar26;
  uVar19 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
  if ((uVar19 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    lVar14 = lStack_198;
code_r0x0187a248:
                    /* WARNING: Could not recover jumptable at 0x0187a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar23 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar27._0_8_,auVar27._8_8_,puVar15,lVar14,lStack_1a0,uStack_1a8);
    return auVar23;
  }
  puVar4 = (undefined8 *)**(undefined8 **)(lVar2 + 0x30);
  lVar22 = lStack_198;
  iVar3 = (*(code *)*puVar4)(uVar8,uVar21,puVar15);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    puVar15 = puVar13;
    auVar27 = auVar23;
    goto code_r0x0187a248;
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar7,uVar11);
  puVar12 = *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  uVar6 = (*(code *)*puVar12)(uVar8,uVar21);
  if (lVar1 == 0) {
    auVar24 = func_0x00f78af4();
    lVar17 = lStack_198;
    lVar18 = lStack_1a0;
    auVar29._8_8_ = uStack_1a8;
    auVar29._0_8_ = uStack_1b0;
    auVar25._8_8_ = param_6;
    auVar25._0_8_ = puVar4;
    lStack_1d8 = lVar1;
    lStack_1c8 = lVar2;
    puStack_1b8 = &Core_Containers_ListIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_198 + 0x30);
    lStack_228 = lVar22;
    puStack_220 = puVar16;
    lStack_218 = param_8;
    puStack_200 = puVar13;
    lStack_1f8 = lVar14;
    uStack_1e0 = uVar5;
    puStack_1d0 = puVar15;
    pppuStack_1c0 = &pppuStack_140;
    auStack_210 = auVar23;
    auStack_1f0 = auVar27;
    goto code_r0x0187a2c0;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar5,uVar6);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar21);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar7,uVar11);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar5,uVar6);
    if (iVar3 == 0) {
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar7,uVar11);
      auVar28._8_8_ = uStack_1a8;
      auVar28._0_8_ = lStack_1a0;
    }
    else {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar8,uVar21);
      uVar11 = uStack_1a8;
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_1a0,uStack_1a8,uVar7);
      auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_1a0,uVar11);
    }
    uStack_1a8 = auVar28._8_8_;
    lStack_1a0 = auVar28._0_8_;
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar21);
    auVar25 = auStack_190;
    auVar26 = auStack_180;
  }
  else {
    uVar8 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
    uVar21 = uStack_1a8;
    (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_1a0,uStack_1a8,uVar8);
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_1a0,uVar21);
    uStack_1a8 = auVar23._8_8_;
    lStack_1a0 = auVar23._0_8_;
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar7,uVar11);
    auVar25 = auStack_190;
    auVar26 = auStack_180;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar2 + 0x30);
  goto code_r0x0187a020;
code_r0x0187a2c0:
  uVar21 = auVar29._8_8_;
  uVar8 = auVar29._0_8_;
  uVar11 = auVar25._8_8_;
  uVar7 = auVar25._0_8_;
  uVar5 = auVar24._8_8_;
  uVar6 = auVar24._0_8_;
  uVar19 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
  if ((uVar19 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    puVar12 = puStack_220;
    lVar22 = lStack_218;
code_r0x0187a4f4:
                    /* WARNING: Could not recover jumptable at 0x0187a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar23 = (*UNRECOVERED_JUMPTABLE_00)(auVar25._0_8_,auVar25._8_8_,puVar12,lVar22,uVar8,uVar21);
    return auVar23;
  }
  puVar4 = (undefined8 *)**(long **)(lVar17 + 0x30);
  lVar22 = lStack_218;
  iVar3 = (*(code *)*puVar4)(uVar7,uVar11,puStack_220);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    lVar22 = lStack_228;
    auVar25 = auVar24;
    goto code_r0x0187a4f4;
  }
  uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar6,uVar5);
  puVar15 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  uVar10 = (*(code *)*puVar15)(uVar7,uVar11);
  if (lVar18 == 0) {
    auVar25 = func_0x00f78af4();
    uVar8 = auVar25._8_8_;
    uVar21 = auVar25._0_8_;
    lStack_270 = lVar17;
    lStack_248 = lVar18;
    puStack_238 = &Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_;
    lVar18 = param_6;
    puStack_280 = puVar12;
    uStack_278 = uVar7;
    uStack_268 = uVar11;
    uStack_250 = uVar9;
    pppuStack_240 = &pppuStack_1c0;
    auStack_260 = auVar29;
    auStack_290 = auVar24;
    auVar23 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((auVar23._0_8_ & 1) == 0) {
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar21,uVar8);
      puVar12 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      lStack_358 = lVar22;
      iVar3 = (*(code *)*puVar12)(auVar24._0_8_,auVar24._8_8_,puVar15);
      auVar23 = auVar25;
      if (iVar3 != 0) {
        do {
          uVar7 = auVar24._8_8_;
          uVar11 = auVar24._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_2c8,uVar11,uVar7);
          puVar16 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
          (*(code *)*puVar16)(&uStack_2f0,uVar21,uVar8);
          if (puVar4 == (undefined8 *)0x0) {
            auVar24 = func_0x00f78af4();
            uVar8 = auVar24._8_8_;
            uVar21 = auVar24._0_8_;
            puStack_368 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
            lVar17 = lVar18;
            uStack_3c0 = uVar7;
            uStack_3b8 = uVar11;
            lStack_390 = param_6;
            puStack_388 = puVar15;
            puStack_380 = &uStack_2c8;
            puStack_378 = puVar4;
            pppuStack_370 = &pppuStack_240;
            auStack_3a0 = auVar25;
            auStack_3b0 = auVar23;
            auVar23 = (**(code **)**(undefined8 **)(lVar18 + 0x30))();
            if ((auVar23._0_8_ & 1) == 0) {
              auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(uVar21,uVar8);
              puVar4 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28);
              lVar14 = lVar22;
              iVar3 = (*(code *)*puVar4)(auVar23._0_8_,auVar23._8_8_,puVar16);
              if (iVar3 != 0) {
                do {
                  uVar7 = auVar23._8_8_;
                  uVar11 = auVar23._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))
                            (&uStack_3e0,uVar11,uVar7);
                  puVar15 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10);
                  (*(code *)*puVar15)(&uStack_400,uVar21,uVar8);
                  if (puVar12 == (undefined8 *)0x0) {
                    auVar23 = func_0x00f78af4();
                    uVar8 = auVar23._8_8_;
                    uVar21 = auVar23._0_8_;
                    lVar22 = lVar17;
                    auVar24 = (**(code **)**(undefined8 **)(lVar17 + 0x30))();
                    if ((auVar24._0_8_ & 1) != 0) {
                      return auVar24;
                    }
                    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                        (uVar21,uVar8);
                    puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28);
                    lVar18 = lVar14;
                    iVar3 = (*(code *)*puVar12)(auVar24._0_8_,auVar24._8_8_,puVar15,lVar14);
                    if (iVar3 != 0) {
                      do {
                        uVar6 = auVar24._8_8_;
                        uVar5 = auVar24._0_8_;
                        uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))
                                           (uVar5,uVar6);
                        puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
                        uVar7 = (*(code *)*puVar16)(uVar21,uVar8);
                        if (puVar4 == (undefined8 *)0x0) {
                          auVar23 = func_0x00f78af4();
                          auVar30._8_8_ = lVar18;
                          auVar30._0_8_ = puVar16;
                          uVar8 = auVar23._8_8_;
                          uVar21 = auVar23._0_8_;
                          auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))();
                          iVar3 = auVar23._0_4_;
                          while( true ) {
                            if (iVar3 < 2) break;
                            auVar30 = (**(code **)**(undefined8 **)(lVar22 + 0x30))
                                                (auVar30._0_8_,auVar30._8_8_);
                            uVar11 = auVar30._8_8_;
                            (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
                                      (uVar21,uVar8,auVar30._0_8_,uVar11);
                            (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))
                                      (uVar21,uVar8,uVar8,uVar11,puVar12);
                            auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x18))
                                                (uVar21,uVar8,auVar30._0_8_,uVar11);
                            iVar3 = auVar23._0_4_;
                          }
                          return auVar23;
                        }
                        iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))
                                          (puVar4,uVar11,uVar7);
                        if (iVar3 != 0) {
                          auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                              (auVar23._0_8_,auVar23._8_8_);
                          (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                                    (auVar23._0_8_,auVar23._8_8_,uVar5,uVar6);
                        }
                        auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                            (uVar5,uVar6);
                        puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28);
                        lVar18 = lVar14;
                        uVar19 = (*(code *)*puVar12)(auVar24._0_8_,auVar24._8_8_,puVar15);
                      } while ((uVar19 & 1) != 0);
                    }
                    uVar11 = auVar23._8_8_;
                    uVar7 = auVar23._0_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                              (uVar21,uVar8,uVar7,uVar11);
                    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x30))
                              (uVar21,uVar8,uVar7,uVar11,puVar4);
                    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                        (uVar7,uVar11);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x30))
                                        (auVar23._0_8_,auVar23._8_8_,puVar15,lVar14,puVar4);
                    return auVar23;
                  }
                  uStack_418 = uStack_3d8;
                  uStack_420 = uStack_3e0;
                  uStack_408 = uStack_3c8;
                  uStack_410 = uStack_3d0;
                  uStack_438 = uStack_3f8;
                  uStack_440 = uStack_400;
                  uStack_428 = uStack_3e8;
                  uStack_430 = uStack_3f0;
                  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18))
                                    (puVar12,&uStack_420,&uStack_440,
                                     *(undefined8 *)(*(long *)(lVar18 + 0x30) + 0x18));
                  if (iVar3 != 0) {
                    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))
                                        (auVar24._0_8_,auVar24._8_8_);
                    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                              (auVar24._0_8_,auVar24._8_8_,uVar11,uVar7);
                  }
                  auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(uVar11,uVar7)
                  ;
                  puVar4 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x28);
                  lVar14 = lVar22;
                  uVar19 = (*(code *)*puVar4)(auVar23._0_8_,auVar23._8_8_,puVar16);
                } while ((uVar19 & 1) != 0);
              }
              uVar11 = auVar24._8_8_;
              uVar7 = auVar24._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x20))
                        (uVar21,uVar8,uVar7,uVar11);
              (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x30))
                        (uVar21,uVar8,uVar7,uVar11,puVar12);
              auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(uVar7,uVar11);
              auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x30))
                                  (auVar23._0_8_,auVar23._8_8_,puVar16,lVar22,puVar12);
            }
            return auVar23;
          }
          uStack_318 = uStack_2c0;
          uStack_320 = uStack_2c8;
          uStack_308 = uStack_2b0;
          uStack_310 = uStack_2b8;
          uStack_300 = uStack_2a8;
          uStack_348 = uStack_2e8;
          uStack_350 = uStack_2f0;
          uStack_338 = uStack_2d8;
          uStack_340 = uStack_2e0;
          uStack_330 = uStack_2d0;
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (puVar4,&uStack_320,&uStack_350,
                             *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
          if (iVar3 != 0) {
            auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar23._0_8_,auVar23._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                      (auVar23._0_8_,auVar23._8_8_,uVar11,uVar7);
          }
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar11,uVar7);
          puVar12 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
          lVar22 = lStack_358;
          uVar19 = (*(code *)*puVar12)(auVar24._0_8_,auVar24._8_8_,puVar15);
        } while ((uVar19 & 1) != 0);
      }
      uVar11 = auVar23._8_8_;
      uVar7 = auVar23._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar21,uVar8,uVar7,uVar11);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (uVar21,uVar8,uVar7,uVar11,puVar4);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar11);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                          (auVar23._0_8_,auVar23._8_8_,puVar15,lStack_358,puVar4);
    }
    return auVar23;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar18,uVar9,uVar10);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar6,uVar5);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar18,uVar9,uVar10);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
    if (iVar3 == 0) {
      uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
      (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar8,uVar21,uVar9);
      auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar6,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
      (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar8,uVar21,uVar5);
    }
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar7,uVar11);
  }
  else {
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar8,uVar21,uVar11);
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar6,uVar5);
  }
  auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar8,uVar21);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar17 + 0x30);
  goto code_r0x0187a2c0;
code_r0x01879c94:
  auVar23 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar21);
  auVar24 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x18))(uVar7,uVar11);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x30) + 0x20);
  goto code_r0x01879b00;
}



// ============================================================
// RVA: 0x1879aa0 | Core.Containers.ListIteratorExtensions.SetDifference<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__SetDifference_object_
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
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
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
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [16];
  long lStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 ***pppuStack_340;
  undefined *puStack_338;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  puVar19 = param_7;
  lStack_68 = param_8;
code_r0x01879b00:
  iVar3 = (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_,param_3,param_4);
  if (iVar3 == 0) {
LAB_01879ce8:
                    /* WARNING: Could not recover jumptable at 0x01879d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))
                        (auVar23._0_8_,auVar23._8_8_,param_3,param_4,lStack_70,uStack_78);
    return auVar22;
  }
  do {
    uVar21 = auVar23._8_8_;
    uVar8 = auVar23._0_8_;
    uVar11 = auVar22._8_8_;
    uVar7 = auVar22._0_8_;
    puVar17 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
    lVar14 = lStack_68;
    uVar4 = (*(code *)*puVar17)(uVar7,uVar11,param_7);
    if ((uVar4 & 1) == 0) goto LAB_01879ce8;
    uVar5 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar21);
    puVar12 = (undefined8 *)**(undefined8 **)(param_12 + 0x30);
    uVar6 = (*(code *)*puVar12)(uVar7,uVar11);
    if (param_11 == 0) {
      auVar24 = func_0x00f78af4();
      lVar20 = lStack_68;
      uVar21 = uStack_78;
      auVar25._8_8_ = param_6;
      auVar25._0_8_ = puVar17;
      lStack_c8 = param_12;
      lStack_a8 = param_11;
      puStack_88 = &Core_Containers_ListIteratorExtensions__SetIntersection_object_;
      lStack_f0 = lStack_80;
      puVar17 = puVar19;
      lStack_e8 = param_8;
      puStack_d0 = param_7;
      uStack_b0 = uVar5;
      uStack_a0 = param_3;
      uStack_98 = param_4;
      puStack_90 = &stack0xfffffffffffffff0;
      auStack_e0 = auVar22;
      auStack_c0 = auVar23;
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(lStack_68 + 0x30) + 0x20))();
      lVar16 = lStack_70;
      uStack_f8 = uVar21;
      if (iVar3 == 0) goto code_r0x01879f94;
      break;
    }
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8))(param_11,uVar5,uVar6);
    if (iVar3 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar7,uVar11);
      uVar6 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar21);
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8))(param_11,uVar5,uVar6);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18);
      if (iVar3 == 0) goto LAB_01879c94;
      auVar22 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(param_12 + 0x30))(uVar8,uVar21);
      uVar11 = uStack_78;
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(lStack_70,uStack_78,uVar7);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(lStack_70,uVar11);
      uStack_78 = auVar23._8_8_;
      lStack_70 = auVar23._0_8_;
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(uVar8,uVar21);
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
    }
    uVar4 = (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_,param_3,param_4);
    if ((uVar4 & 1) == 0) goto LAB_01879ce8;
  } while( true );
code_r0x01879d94:
  uVar21 = auVar25._8_8_;
  uVar8 = auVar25._0_8_;
  uVar11 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  puVar18 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20);
  lVar15 = lStack_e8;
  uVar4 = (*(code *)*puVar18)(uVar8,uVar21,puVar19);
  if ((uVar4 & 1) == 0) goto code_r0x01879f94;
  uVar5 = (**(code **)**(undefined8 **)(lVar20 + 0x30))(uVar7,uVar11);
  puVar13 = (undefined8 *)**(undefined8 **)(lVar20 + 0x30);
  uVar6 = (*(code *)*puVar13)(uVar8,uVar21);
  if (lVar16 == 0) {
    auVar22 = func_0x00f78af4();
    lVar2 = lStack_e8;
    lVar1 = lStack_f0;
    auVar27._8_8_ = param_6;
    auVar27._0_8_ = puVar18;
    lStack_128 = lVar20;
    lStack_118 = lVar16;
    puStack_108 = &Core_Containers_ListIteratorExtensions__SetSymmetricDifference_object_;
    uStack_178 = uStack_f8;
    lStack_170 = lStack_100;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_e8 + 0x30);
    puVar18 = puVar17;
    lStack_168 = param_8;
    puStack_140 = puVar12;
    lStack_138 = lVar14;
    puStack_130 = puVar19;
    uStack_120 = uVar5;
    ppuStack_110 = &puStack_90;
    goto code_r0x0187a020;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))(lVar16,uVar5,uVar6);
  if (iVar3 != 0) {
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar7,uVar11);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20);
code_r0x01879e3c:
    uVar4 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,puVar12,lVar14);
    if ((uVar4 & 1) == 0) goto code_r0x01879f94;
    goto code_r0x01879d94;
  }
  uVar5 = (**(code **)**(undefined8 **)(lVar20 + 0x30))(uVar8,uVar21);
  uVar6 = (**(code **)**(undefined8 **)(lVar20 + 0x30))(uVar7,uVar11);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))(lVar16,uVar5,uVar6);
  if (iVar3 != 0) {
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar8,uVar21);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20);
    goto code_r0x01879e3c;
  }
  uVar6 = (**(code **)**(undefined8 **)(lVar20 + 0x30))(uVar7,uVar11);
  uVar5 = uStack_f8;
  (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))(lStack_f0,uStack_f8,uVar6);
  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(lStack_f0,uVar5);
  uStack_f8 = auVar22._8_8_;
  lStack_f0 = auVar22._0_8_;
  auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar7,uVar11);
  auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar8,uVar21);
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))
                    (auVar24._0_8_,auVar24._8_8_,puVar12,lVar14);
  if (iVar3 == 0) {
code_r0x01879f94:
    auVar26._8_8_ = uStack_f8;
    auVar26._0_8_ = lStack_f0;
    return auVar26;
  }
  goto code_r0x01879d94;
code_r0x0187a020:
  uVar21 = auVar27._8_8_;
  uVar8 = auVar27._0_8_;
  uVar11 = auVar22._8_8_;
  uVar7 = auVar22._0_8_;
  auStack_160 = auVar24;
  auStack_150 = auVar25;
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
  if ((uVar4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    lVar15 = lStack_168;
code_r0x0187a248:
                    /* WARNING: Could not recover jumptable at 0x0187a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)
                        (auVar27._0_8_,auVar27._8_8_,puVar17,lVar15,lStack_170,uStack_178);
    return auVar22;
  }
  puVar19 = (undefined8 *)**(undefined8 **)(lVar2 + 0x30);
  lVar14 = lStack_168;
  iVar3 = (*(code *)*puVar19)(uVar8,uVar21,puVar17);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 8);
    puVar17 = puVar13;
    auVar27 = auVar22;
    goto code_r0x0187a248;
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar7,uVar11);
  puVar12 = *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  uVar6 = (*(code *)*puVar12)(uVar8,uVar21);
  if (lVar1 == 0) {
    auVar23 = func_0x00f78af4();
    lVar20 = lStack_168;
    lVar16 = lStack_170;
    auVar29._8_8_ = uStack_178;
    auVar29._0_8_ = uStack_180;
    auVar24._8_8_ = param_6;
    auVar24._0_8_ = puVar19;
    lStack_1a8 = lVar1;
    lStack_198 = lVar2;
    puStack_188 = &Core_Containers_ListIteratorExtensions__SetUnion_object_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_168 + 0x30);
    lStack_1f8 = lVar14;
    puStack_1f0 = puVar18;
    lStack_1e8 = param_8;
    puStack_1d0 = puVar13;
    lStack_1c8 = lVar15;
    uStack_1b0 = uVar5;
    puStack_1a0 = puVar17;
    pppuStack_190 = &ppuStack_110;
    auStack_1e0 = auVar22;
    auStack_1c0 = auVar27;
    goto code_r0x0187a2c0;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar5,uVar6);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar21);
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar7,uVar11);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x18))(lVar1,uVar5,uVar6);
    if (iVar3 == 0) {
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar7,uVar11);
      auVar28._8_8_ = uStack_178;
      auVar28._0_8_ = lStack_170;
    }
    else {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x10))(uVar8,uVar21);
      uVar11 = uStack_178;
      (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_170,uStack_178,uVar7);
      auVar28 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_170,uVar11);
    }
    uStack_178 = auVar28._8_8_;
    lStack_170 = auVar28._0_8_;
    auVar27 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar8,uVar21);
    auVar24 = auStack_160;
    auVar25 = auStack_150;
  }
  else {
    uVar8 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
    uVar21 = uStack_178;
    (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x20))(lStack_170,uStack_178,uVar8);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(lStack_170,uVar21);
    uStack_178 = auVar22._8_8_;
    lStack_170 = auVar22._0_8_;
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x28))(uVar7,uVar11);
    auVar24 = auStack_160;
    auVar25 = auStack_150;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar2 + 0x30);
  goto code_r0x0187a020;
code_r0x0187a2c0:
  uVar21 = auVar29._8_8_;
  uVar8 = auVar29._0_8_;
  uVar11 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  uVar5 = auVar23._8_8_;
  uVar6 = auVar23._0_8_;
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
  if ((uVar4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8);
    puVar12 = puStack_1f0;
    lVar14 = lStack_1e8;
code_r0x0187a4f4:
                    /* WARNING: Could not recover jumptable at 0x0187a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar22 = (*UNRECOVERED_JUMPTABLE_00)(auVar24._0_8_,auVar24._8_8_,puVar12,lVar14,uVar8,uVar21);
    return auVar22;
  }
  puVar19 = (undefined8 *)**(long **)(lVar20 + 0x30);
  lVar14 = lStack_1e8;
  iVar3 = (*(code *)*puVar19)(uVar7,uVar11,puStack_1f0);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8);
    lVar14 = lStack_1f8;
    auVar24 = auVar23;
    goto code_r0x0187a4f4;
  }
  uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar6,uVar5);
  puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10);
  uVar10 = (*(code *)*puVar17)(uVar7,uVar11);
  if (lVar16 == 0) {
    auVar24 = func_0x00f78af4();
    uVar8 = auVar24._8_8_;
    uVar21 = auVar24._0_8_;
    lStack_240 = lVar20;
    lStack_218 = lVar16;
    puStack_208 = &Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_;
    lVar16 = param_6;
    puStack_250 = puVar12;
    uStack_248 = uVar7;
    uStack_238 = uVar11;
    uStack_220 = uVar9;
    pppuStack_210 = &pppuStack_190;
    auStack_230 = auVar29;
    auStack_260 = auVar23;
    auVar22 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((auVar22._0_8_ & 1) == 0) {
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar21,uVar8);
      puVar12 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      lStack_328 = lVar14;
      iVar3 = (*(code *)*puVar12)(auVar23._0_8_,auVar23._8_8_,puVar17);
      auVar22 = auVar24;
      if (iVar3 != 0) {
        do {
          uVar7 = auVar23._8_8_;
          uVar11 = auVar23._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_298,uVar11,uVar7);
          puVar18 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
          (*(code *)*puVar18)(&uStack_2c0,uVar21,uVar8);
          if (puVar19 == (undefined8 *)0x0) {
            auVar23 = func_0x00f78af4();
            uVar8 = auVar23._8_8_;
            uVar21 = auVar23._0_8_;
            puStack_338 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
            lVar20 = lVar16;
            uStack_390 = uVar7;
            uStack_388 = uVar11;
            lStack_360 = param_6;
            puStack_358 = puVar17;
            puStack_350 = &uStack_298;
            puStack_348 = puVar19;
            pppuStack_340 = &pppuStack_210;
            auStack_370 = auVar24;
            auStack_380 = auVar22;
            auVar22 = (**(code **)**(undefined8 **)(lVar16 + 0x30))();
            if ((auVar22._0_8_ & 1) == 0) {
              auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(uVar21,uVar8);
              puVar19 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x28);
              lVar15 = lVar14;
              iVar3 = (*(code *)*puVar19)(auVar22._0_8_,auVar22._8_8_,puVar18);
              if (iVar3 != 0) {
                do {
                  uVar7 = auVar22._8_8_;
                  uVar11 = auVar22._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))
                            (&uStack_3b0,uVar11,uVar7);
                  puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10);
                  (*(code *)*puVar17)(&uStack_3d0,uVar21,uVar8);
                  if (puVar12 == (undefined8 *)0x0) {
                    auVar22 = func_0x00f78af4();
                    uVar8 = auVar22._8_8_;
                    uVar21 = auVar22._0_8_;
                    lVar14 = lVar20;
                    auVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x30))();
                    if ((auVar23._0_8_ & 1) != 0) {
                      return auVar23;
                    }
                    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                                        (uVar21,uVar8);
                    puVar12 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28);
                    lVar16 = lVar15;
                    iVar3 = (*(code *)*puVar12)(auVar23._0_8_,auVar23._8_8_,puVar17,lVar15);
                    if (iVar3 != 0) {
                      do {
                        uVar6 = auVar23._8_8_;
                        uVar5 = auVar23._0_8_;
                        uVar11 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))
                                           (uVar5,uVar6);
                        puVar18 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10);
                        uVar7 = (*(code *)*puVar18)(uVar21,uVar8);
                        if (puVar19 == (undefined8 *)0x0) {
                          auVar22 = func_0x00f78af4();
                          auVar30._8_8_ = lVar16;
                          auVar30._0_8_ = puVar18;
                          uVar8 = auVar22._8_8_;
                          uVar21 = auVar22._0_8_;
                          auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))();
                          iVar3 = auVar22._0_4_;
                          while( true ) {
                            if (iVar3 < 2) break;
                            auVar30 = (**(code **)**(undefined8 **)(lVar14 + 0x30))
                                                (auVar30._0_8_,auVar30._8_8_);
                            uVar11 = auVar30._8_8_;
                            (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
                                      (uVar21,uVar8,auVar30._0_8_,uVar11);
                            (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                                      (uVar21,uVar8,uVar8,uVar11,puVar12);
                            auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                                                (uVar21,uVar8,auVar30._0_8_,uVar11);
                            iVar3 = auVar22._0_4_;
                          }
                          return auVar22;
                        }
                        iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))
                                          (puVar19,uVar11,uVar7);
                        if (iVar3 != 0) {
                          auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                                              (auVar22._0_8_,auVar22._8_8_);
                          (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))
                                    (auVar22._0_8_,auVar22._8_8_,uVar5,uVar6);
                        }
                        auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                                            (uVar5,uVar6);
                        puVar12 = *(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28);
                        lVar16 = lVar15;
                        uVar4 = (*(code *)*puVar12)(auVar23._0_8_,auVar23._8_8_,puVar17);
                      } while ((uVar4 & 1) != 0);
                    }
                    uVar11 = auVar22._8_8_;
                    uVar7 = auVar22._0_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))
                              (uVar21,uVar8,uVar7,uVar11);
                    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x30))
                              (uVar21,uVar8,uVar7,uVar11,puVar19);
                    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                                        (uVar7,uVar11);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x30))
                                        (auVar22._0_8_,auVar22._8_8_,puVar17,lVar15,puVar19);
                    return auVar22;
                  }
                  uStack_3e8 = uStack_3a8;
                  uStack_3f0 = uStack_3b0;
                  uStack_3d8 = uStack_398;
                  uStack_3e0 = uStack_3a0;
                  uStack_408 = uStack_3c8;
                  uStack_410 = uStack_3d0;
                  uStack_3f8 = uStack_3b8;
                  uStack_400 = uStack_3c0;
                  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x18))
                                    (puVar12,&uStack_3f0,&uStack_410,
                                     *(undefined8 *)(*(long *)(lVar16 + 0x30) + 0x18));
                  if (iVar3 != 0) {
                    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
                                        (auVar23._0_8_,auVar23._8_8_);
                    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20))
                              (auVar23._0_8_,auVar23._8_8_,uVar11,uVar7);
                  }
                  auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(uVar11,uVar7)
                  ;
                  puVar19 = *(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x28);
                  lVar15 = lVar14;
                  uVar4 = (*(code *)*puVar19)(auVar22._0_8_,auVar22._8_8_,puVar18);
                } while ((uVar4 & 1) != 0);
              }
              uVar11 = auVar23._8_8_;
              uVar7 = auVar23._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x20))
                        (uVar21,uVar8,uVar7,uVar11);
              (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x30))
                        (uVar21,uVar8,uVar7,uVar11,puVar12);
              auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))(uVar7,uVar11);
              auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x30))
                                  (auVar22._0_8_,auVar22._8_8_,puVar18,lVar14,puVar12);
            }
            return auVar22;
          }
          uStack_2e8 = uStack_290;
          uStack_2f0 = uStack_298;
          uStack_2d8 = uStack_280;
          uStack_2e0 = uStack_288;
          uStack_2d0 = uStack_278;
          uStack_318 = uStack_2b8;
          uStack_320 = uStack_2c0;
          uStack_308 = uStack_2a8;
          uStack_310 = uStack_2b0;
          uStack_300 = uStack_2a0;
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (puVar19,&uStack_2f0,&uStack_320,
                             *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
          if (iVar3 != 0) {
            auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar22._0_8_,auVar22._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                      (auVar22._0_8_,auVar22._8_8_,uVar11,uVar7);
          }
          auVar23 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar11,uVar7);
          puVar12 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
          lVar14 = lStack_328;
          uVar4 = (*(code *)*puVar12)(auVar23._0_8_,auVar23._8_8_,puVar17);
        } while ((uVar4 & 1) != 0);
      }
      uVar11 = auVar22._8_8_;
      uVar7 = auVar22._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar21,uVar8,uVar7,uVar11);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (uVar21,uVar8,uVar7,uVar11,puVar19);
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar11);
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                          (auVar22._0_8_,auVar22._8_8_,puVar17,lStack_328,puVar19);
    }
    return auVar22;
  }
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))(lVar16,uVar9,uVar10);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10);
  if (iVar3 == 0) {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar6,uVar5);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x18))(lVar16,uVar9,uVar10);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10);
    if (iVar3 == 0) {
      uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
      (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))(uVar8,uVar21,uVar9);
      auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(uVar6,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar7,uVar11);
      (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))(uVar8,uVar21,uVar5);
    }
    auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(uVar7,uVar11);
  }
  else {
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar5);
    (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x20))(uVar8,uVar21,uVar11);
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(uVar6,uVar5);
  }
  auVar29 = (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x28))(uVar8,uVar21);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar20 + 0x30);
  goto code_r0x0187a2c0;
LAB_01879c94:
  auVar23 = (*UNRECOVERED_JUMPTABLE_00)(uVar8,uVar21);
  auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(uVar7,uVar11);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20);
  goto code_r0x01879b00;
}



// ============================================================
// RVA: 0x1879d2c | Core.Containers.ListIteratorExtensions.SetIntersection<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1879fc0 | Core.Containers.ListIteratorExtensions.SetSymmetricDifference<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__SetSymmetricDifference_object_
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
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  long lStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined1 ***pppuStack_240;
  undefined *puStack_238;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
    uVar18 = auVar20._8_8_;
    uVar5 = auVar20._0_8_;
    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9,param_3,param_4);
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      param_4 = lStack_68;
code_r0x0187a248:
                    /* WARNING: Could not recover jumptable at 0x0187a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(auVar20._0_8_,auVar20._8_8_,param_7,param_4,lStack_70,uStack_78);
      return;
    }
    puVar15 = (undefined8 *)**(undefined8 **)(param_12 + 0x30);
    lVar12 = lStack_68;
    iVar1 = (*(code *)*puVar15)(uVar5,uVar18,param_7);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      param_7 = param_3;
      auVar20 = auVar19;
      goto code_r0x0187a248;
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar6,uVar9);
    puVar10 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    uVar4 = (*(code *)*puVar10)(uVar5,uVar18);
    if (param_11 == 0) {
      auVar22 = func_0x00f78af4();
      lVar17 = lStack_68;
      lVar14 = lStack_70;
      auVar24._8_8_ = uStack_78;
      auVar24._0_8_ = uStack_80;
      auVar23._8_8_ = param_6;
      auVar23._0_8_ = puVar15;
      lStack_a8 = param_11;
      lStack_98 = param_12;
      puStack_88 = &Core_Containers_ListIteratorExtensions__SetUnion_object_;
      UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lStack_68 + 0x30);
      lStack_f8 = lVar12;
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
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar5,uVar18);
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar6,uVar9);
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar3,uVar4);
      if (iVar1 == 0) {
        auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar6,uVar9);
        auVar21._8_8_ = uStack_78;
        auVar21._0_8_ = lStack_70;
      }
      else {
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar5,uVar18);
        uVar9 = uStack_78;
        (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(lStack_70,uStack_78,uVar6);
        auVar21 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(lStack_70,uVar9);
      }
      uStack_78 = auVar21._8_8_;
      lStack_70 = auVar21._0_8_;
      auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar5,uVar18);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9);
      uVar18 = uStack_78;
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(lStack_70,uStack_78,uVar5);
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(lStack_70,uVar18);
      uStack_78 = auVar19._8_8_;
      lStack_70 = auVar19._0_8_;
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar6,uVar9);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(param_12 + 0x30);
  } while( true );
code_r0x0187a2c0:
  uVar18 = auVar24._8_8_;
  uVar5 = auVar24._0_8_;
  uVar9 = auVar23._8_8_;
  uVar6 = auVar23._0_8_;
  uVar3 = auVar22._8_8_;
  uVar4 = auVar22._0_8_;
  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(uVar4,uVar3);
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    puVar10 = puStack_f0;
    lVar12 = lStack_e8;
code_r0x0187a4f4:
                    /* WARNING: Could not recover jumptable at 0x0187a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(auVar23._0_8_,auVar23._8_8_,puVar10,lVar12,uVar5,uVar18);
    return;
  }
  puVar16 = (undefined8 *)**(long **)(lVar17 + 0x30);
  lVar12 = lStack_e8;
  iVar1 = (*(code *)*puVar16)(uVar6,uVar9,puStack_f0);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8);
    lVar12 = lStack_f8;
    auVar23 = auVar22;
    goto code_r0x0187a4f4;
  }
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar4,uVar3);
  puVar15 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  uVar8 = (*(code *)*puVar15)(uVar6,uVar9);
  if (lVar14 == 0) {
    auVar19 = func_0x00f78af4();
    uVar5 = auVar19._8_8_;
    uVar18 = auVar19._0_8_;
    lStack_140 = lVar17;
    lStack_118 = lVar14;
    puStack_108 = &Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_;
    lVar14 = param_6;
    puStack_150 = puVar10;
    uStack_148 = uVar6;
    uStack_138 = uVar9;
    uStack_120 = uVar7;
    ppuStack_110 = &puStack_90;
    auStack_130 = auVar24;
    auStack_160 = auVar22;
    uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
    if ((uVar2 & 1) == 0) {
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar18,uVar5);
      puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      lStack_228 = lVar12;
      iVar1 = (*(code *)*puVar10)(auVar22._0_8_,auVar22._8_8_,puVar15);
      auVar20 = auVar19;
      if (iVar1 != 0) {
        do {
          uVar6 = auVar22._8_8_;
          uVar9 = auVar22._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_198,uVar9,uVar6);
          puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
          (*(code *)*puVar11)(&uStack_1c0,uVar18,uVar5);
          if (puVar16 == (undefined8 *)0x0) {
            auVar22 = func_0x00f78af4();
            uVar5 = auVar22._8_8_;
            uVar18 = auVar22._0_8_;
            puStack_238 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
            lVar17 = lVar14;
            uStack_290 = uVar6;
            uStack_288 = uVar9;
            lStack_260 = param_6;
            puStack_258 = puVar15;
            puStack_250 = &uStack_198;
            puStack_248 = puVar16;
            pppuStack_240 = &ppuStack_110;
            auStack_270 = auVar19;
            auStack_280 = auVar20;
            uVar2 = (**(code **)**(undefined8 **)(lVar14 + 0x30))();
            if ((uVar2 & 1) == 0) {
              auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar18,uVar5);
              puVar16 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28);
              lVar13 = lVar12;
              iVar1 = (*(code *)*puVar16)(auVar19._0_8_,auVar19._8_8_,puVar11);
              if (iVar1 != 0) {
                do {
                  uVar6 = auVar19._8_8_;
                  uVar9 = auVar19._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                            (&uStack_2b0,uVar9,uVar6);
                  puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
                  (*(code *)*puVar15)(&uStack_2d0,uVar18,uVar5);
                  if (puVar10 == (undefined8 *)0x0) {
                    auVar19 = func_0x00f78af4();
                    uVar5 = auVar19._8_8_;
                    uVar18 = auVar19._0_8_;
                    lVar12 = lVar17;
                    uVar2 = (**(code **)**(undefined8 **)(lVar17 + 0x30))();
                    if ((uVar2 & 1) != 0) {
                      return;
                    }
                    auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                        (uVar18,uVar5);
                    puVar10 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28);
                    lVar14 = lVar13;
                    iVar1 = (*(code *)*puVar10)(auVar20._0_8_,auVar20._8_8_,puVar15,lVar13);
                    if (iVar1 != 0) {
                      do {
                        uVar4 = auVar20._8_8_;
                        uVar3 = auVar20._0_8_;
                        uVar9 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))
                                          (uVar3,uVar4);
                        puVar11 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
                        uVar6 = (*(code *)*puVar11)(uVar18,uVar5);
                        if (puVar16 == (undefined8 *)0x0) {
                          auVar19 = func_0x00f78af4();
                          auVar22._8_8_ = lVar14;
                          auVar22._0_8_ = puVar11;
                          uVar5 = auVar19._8_8_;
                          uVar18 = auVar19._0_8_;
                          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))();
                          while( true ) {
                            if (iVar1 < 2) break;
                            auVar22 = (**(code **)**(undefined8 **)(lVar12 + 0x30))
                                                (auVar22._0_8_,auVar22._8_8_);
                            uVar9 = auVar22._8_8_;
                            (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                                      (uVar18,uVar5,auVar22._0_8_,uVar9);
                            (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                                      (uVar18,uVar5,uVar5,uVar9,puVar10);
                            iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))
                                              (uVar18,uVar5,auVar22._0_8_,uVar9);
                          }
                          return;
                        }
                        iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))
                                          (puVar16,uVar9,uVar6);
                        if (iVar1 != 0) {
                          auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                              (auVar19._0_8_,auVar19._8_8_);
                          (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                                    (auVar19._0_8_,auVar19._8_8_,uVar3,uVar4);
                        }
                        auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                            (uVar3,uVar4);
                        puVar10 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28);
                        lVar14 = lVar13;
                        uVar2 = (*(code *)*puVar10)(auVar20._0_8_,auVar20._8_8_,puVar15);
                      } while ((uVar2 & 1) != 0);
                    }
                    uVar9 = auVar19._8_8_;
                    uVar6 = auVar19._0_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))
                              (uVar18,uVar5,uVar6,uVar9);
                    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x30))
                              (uVar18,uVar5,uVar6,uVar9,puVar16);
                    auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))
                                        (uVar6,uVar9);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x30))
                              (auVar19._0_8_,auVar19._8_8_,puVar15,lVar13,puVar16);
                    return;
                  }
                  uStack_2e8 = uStack_2a8;
                  uStack_2f0 = uStack_2b0;
                  uStack_2d8 = uStack_298;
                  uStack_2e0 = uStack_2a0;
                  uStack_308 = uStack_2c8;
                  uStack_310 = uStack_2d0;
                  uStack_2f8 = uStack_2b8;
                  uStack_300 = uStack_2c0;
                  iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                                    (puVar10,&uStack_2f0,&uStack_310,
                                     *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x18));
                  if (iVar1 != 0) {
                    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
                                        (auVar22._0_8_,auVar22._8_8_);
                    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                              (auVar22._0_8_,auVar22._8_8_,uVar9,uVar6);
                  }
                  auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar9,uVar6);
                  puVar16 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28);
                  lVar13 = lVar12;
                  uVar2 = (*(code *)*puVar16)(auVar19._0_8_,auVar19._8_8_,puVar11);
                } while ((uVar2 & 1) != 0);
              }
              uVar9 = auVar22._8_8_;
              uVar6 = auVar22._0_8_;
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                        (uVar18,uVar5,uVar6,uVar9);
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x30))
                        (uVar18,uVar5,uVar6,uVar9,puVar10);
              auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar6,uVar9);
              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x30))
                        (auVar19._0_8_,auVar19._8_8_,puVar11,lVar12,puVar10);
            }
            return;
          }
          uStack_1e8 = uStack_190;
          uStack_1f0 = uStack_198;
          uStack_1d8 = uStack_180;
          uStack_1e0 = uStack_188;
          uStack_1d0 = uStack_178;
          uStack_218 = uStack_1b8;
          uStack_220 = uStack_1c0;
          uStack_208 = uStack_1a8;
          uStack_210 = uStack_1b0;
          uStack_200 = uStack_1a0;
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                            (puVar16,&uStack_1f0,&uStack_220,
                             *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
          if (iVar1 != 0) {
            auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                (auVar20._0_8_,auVar20._8_8_);
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                      (auVar20._0_8_,auVar20._8_8_,uVar9,uVar6);
          }
          auVar22 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar9,uVar6);
          puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
          lVar12 = lStack_228;
          uVar2 = (*(code *)*puVar10)(auVar22._0_8_,auVar22._8_8_,puVar15);
        } while ((uVar2 & 1) != 0);
      }
      uVar9 = auVar20._8_8_;
      uVar6 = auVar20._0_8_;
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar18,uVar5,uVar6,uVar9);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (uVar18,uVar5,uVar6,uVar9,puVar16);
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar6,uVar9);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                (auVar19._0_8_,auVar19._8_8_,puVar15,lStack_228,puVar16);
    }
    return;
  }
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar14,uVar7,uVar8);
  UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
  if (iVar1 == 0) {
    uVar7 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9);
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))(uVar4,uVar3);
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18))(lVar14,uVar7,uVar8);
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10);
    if (iVar1 == 0) {
      uVar7 = (*UNRECOVERED_JUMPTABLE_00)(uVar4,uVar3);
      (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar5,uVar18,uVar7);
      auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar4,uVar3);
    }
    else {
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar6,uVar9);
      (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar5,uVar18,uVar3);
    }
    auVar23 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar6,uVar9);
  }
  else {
    uVar9 = (*UNRECOVERED_JUMPTABLE_00)(uVar4,uVar3);
    (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x20))(uVar5,uVar18,uVar9);
    auVar22 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar4,uVar3);
  }
  auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x28))(uVar5,uVar18);
  UNRECOVERED_JUMPTABLE_00 = *(code **)**(undefined8 **)(lVar17 + 0x30);
  goto code_r0x0187a2c0;
}



// ============================================================
// RVA: 0x187a270 | Core.Containers.ListIteratorExtensions.SetUnion<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__SetUnion_object_
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
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
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
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
    uVar16 = auVar20._8_8_;
    uVar17 = auVar20._0_8_;
    uVar7 = auVar18._8_8_;
    uVar8 = auVar18._0_8_;
    uVar5 = auVar19._8_8_;
    uVar11 = auVar19._0_8_;
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar8,uVar7,param_3,uStack_78);
    if ((uVar2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      param_3 = uStack_70;
      uVar5 = uStack_68;
code_r0x0187a4f4:
                    /* WARNING: Could not recover jumptable at 0x0187a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(auVar19._0_8_,auVar19._8_8_,param_3,uVar5,uVar17,uVar16);
      return;
    }
    puVar12 = (undefined8 *)**(long **)(param_12 + 0x30);
    uVar6 = uStack_68;
    iVar1 = (*(code *)*puVar12)(uVar11,uVar5,uStack_70);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 8);
      uVar5 = uStack_78;
      auVar19 = auVar18;
      goto code_r0x0187a4f4;
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar8,uVar7);
    puVar9 = *(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    uVar4 = (*(code *)*puVar9)(uVar11,uVar5);
    if (param_11 == 0) {
      auVar19 = func_0x00f78af4();
      uVar17 = auVar19._8_8_;
      uVar16 = auVar19._0_8_;
      lStack_c0 = param_12;
      lStack_98 = param_11;
      puStack_88 = &Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_;
      lVar14 = param_6;
      uStack_d0 = param_3;
      uStack_c8 = uVar11;
      uStack_b8 = uVar5;
      uStack_a0 = uVar3;
      puStack_90 = &stack0xfffffffffffffff0;
      auStack_b0 = auVar20;
      auStack_e0 = auVar18;
      uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
      if ((uVar2 & 1) == 0) {
        auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar16,uVar17);
        puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        uStack_1a8 = uVar6;
        iVar1 = (*(code *)*puVar13)(auVar20._0_8_,auVar20._8_8_,puVar9);
        auVar18 = auVar19;
        if (iVar1 != 0) {
          do {
            uVar11 = auVar20._8_8_;
            uVar5 = auVar20._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_118,uVar5,uVar11)
            ;
            puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
            (*(code *)*puVar10)(&uStack_140,uVar16,uVar17);
            if (puVar12 == (undefined8 *)0x0) {
              auVar20 = func_0x00f78af4();
              uVar17 = auVar20._8_8_;
              uVar16 = auVar20._0_8_;
              puStack_1b8 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
              lVar15 = lVar14;
              uStack_210 = uVar11;
              uStack_208 = uVar5;
              lStack_1e0 = param_6;
              puStack_1d8 = puVar9;
              puStack_1d0 = &uStack_118;
              puStack_1c8 = puVar12;
              ppuStack_1c0 = &puStack_90;
              auStack_1f0 = auVar19;
              auStack_200 = auVar18;
              uVar2 = (**(code **)**(undefined8 **)(lVar14 + 0x30))();
              if ((uVar2 & 1) == 0) {
                auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar16,uVar17);
                puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28);
                uVar5 = uVar6;
                iVar1 = (*(code *)*puVar12)(auVar18._0_8_,auVar18._8_8_,puVar10);
                if (iVar1 != 0) {
                  do {
                    uVar7 = auVar18._8_8_;
                    uVar11 = auVar18._0_8_;
                    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                              (&uStack_230,uVar11,uVar7);
                    puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10);
                    (*(code *)*puVar9)(&uStack_250,uVar16,uVar17);
                    if (puVar13 == (undefined8 *)0x0) {
                      auVar18 = func_0x00f78af4();
                      uVar17 = auVar18._8_8_;
                      uVar16 = auVar18._0_8_;
                      lVar14 = lVar15;
                      uVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))();
                      if ((uVar2 & 1) != 0) {
                        return;
                      }
                      auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))
                                          (uVar16,uVar17);
                      puVar13 = *(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x28);
                      uVar11 = uVar5;
                      iVar1 = (*(code *)*puVar13)(auVar19._0_8_,auVar19._8_8_,puVar9,uVar5);
                      if (iVar1 != 0) {
                        do {
                          uVar3 = auVar19._8_8_;
                          uVar6 = auVar19._0_8_;
                          uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))
                                            (uVar6,uVar3);
                          puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10);
                          uVar8 = (*(code *)*puVar10)(uVar16,uVar17);
                          if (puVar12 == (undefined8 *)0x0) {
                            auVar18 = func_0x00f78af4();
                            auVar21._8_8_ = uVar11;
                            auVar21._0_8_ = puVar10;
                            uVar17 = auVar18._8_8_;
                            uVar16 = auVar18._0_8_;
                            iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))();
                            while( true ) {
                              if (iVar1 < 2) break;
                              auVar21 = (**(code **)**(undefined8 **)(lVar14 + 0x30))
                                                  (auVar21._0_8_,auVar21._8_8_);
                              uVar5 = auVar21._8_8_;
                              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
                                        (uVar16,uVar17,auVar21._0_8_,uVar5);
                              (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))
                                        (uVar16,uVar17,uVar17,uVar5,puVar13);
                              iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                                                (uVar16,uVar17,auVar21._0_8_,uVar5);
                            }
                            return;
                          }
                          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))
                                            (puVar12,uVar7,uVar8);
                          if (iVar1 != 0) {
                            auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))
                                                (auVar18._0_8_,auVar18._8_8_);
                            (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x20))
                                      (auVar18._0_8_,auVar18._8_8_,uVar6,uVar3);
                          }
                          auVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))
                                              (uVar6,uVar3);
                          puVar13 = *(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x28);
                          uVar11 = uVar5;
                          uVar2 = (*(code *)*puVar13)(auVar19._0_8_,auVar19._8_8_,puVar9);
                        } while ((uVar2 & 1) != 0);
                      }
                      uVar11 = auVar18._8_8_;
                      uVar7 = auVar18._0_8_;
                      (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x20))
                                (uVar16,uVar17,uVar7,uVar11);
                      (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x30))
                                (uVar16,uVar17,uVar7,uVar11,puVar12);
                      auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))
                                          (uVar7,uVar11);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x30))
                                (auVar18._0_8_,auVar18._8_8_,puVar9,uVar5,puVar12);
                      return;
                    }
                    uStack_268 = uStack_228;
                    uStack_270 = uStack_230;
                    uStack_258 = uStack_218;
                    uStack_260 = uStack_220;
                    uStack_288 = uStack_248;
                    uStack_290 = uStack_250;
                    uStack_278 = uStack_238;
                    uStack_280 = uStack_240;
                    iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))
                                      (puVar13,&uStack_270,&uStack_290,
                                       *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x18));
                    if (iVar1 != 0) {
                      auVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
                                          (auVar20._0_8_,auVar20._8_8_);
                      (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                                (auVar20._0_8_,auVar20._8_8_,uVar11,uVar7);
                    }
                    auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
                                        (uVar11,uVar7);
                    puVar12 = *(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x28);
                    uVar5 = uVar6;
                    uVar2 = (*(code *)*puVar12)(auVar18._0_8_,auVar18._8_8_,puVar10);
                  } while ((uVar2 & 1) != 0);
                }
                uVar5 = auVar20._8_8_;
                uVar11 = auVar20._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x20))
                          (uVar16,uVar17,uVar11,uVar5);
                (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x30))
                          (uVar16,uVar17,uVar11,uVar5,puVar13);
                auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(uVar11,uVar5);
                (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x30))
                          (auVar18._0_8_,auVar18._8_8_,puVar10,uVar6,puVar13);
              }
              return;
            }
            uStack_168 = uStack_110;
            uStack_170 = uStack_118;
            uStack_158 = uStack_100;
            uStack_160 = uStack_108;
            uStack_150 = uStack_f8;
            uStack_198 = uStack_138;
            uStack_1a0 = uStack_140;
            uStack_188 = uStack_128;
            uStack_190 = uStack_130;
            uStack_180 = uStack_120;
            iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                              (puVar12,&uStack_170,&uStack_1a0,
                               *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
            if (iVar1 != 0) {
              auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                                  (auVar18._0_8_,auVar18._8_8_);
              (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                        (auVar18._0_8_,auVar18._8_8_,uVar5,uVar11);
            }
            auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar5,uVar11);
            puVar13 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
            uVar6 = uStack_1a8;
            uVar2 = (*(code *)*puVar13)(auVar20._0_8_,auVar20._8_8_,puVar9);
          } while ((uVar2 & 1) != 0);
        }
        uVar5 = auVar18._8_8_;
        uVar11 = auVar18._0_8_;
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(uVar16,uVar17,uVar11,uVar5);
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                  (uVar16,uVar17,uVar11,uVar5,puVar12);
        auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar11,uVar5);
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
                  (auVar18._0_8_,auVar18._8_8_,puVar9,uStack_1a8,puVar12);
      }
      return;
    }
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar3,uVar4);
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
    if (iVar1 == 0) {
      uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar11,uVar5);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10))(uVar8,uVar7);
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x18))(param_11,uVar6,uVar3);
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x10);
      if (iVar1 == 0) {
        uVar6 = (*UNRECOVERED_JUMPTABLE)(uVar8,uVar7);
        (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar17,uVar16,uVar6);
        auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar8,uVar7);
      }
      else {
        uVar7 = (*UNRECOVERED_JUMPTABLE)(uVar11,uVar5);
        (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar17,uVar16,uVar7);
      }
      auVar19 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar11,uVar5);
    }
    else {
      uVar5 = (*UNRECOVERED_JUMPTABLE)(uVar8,uVar7);
      (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x20))(uVar17,uVar16,uVar5);
      auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar8,uVar7);
    }
    auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_12 + 0x30) + 0x28))(uVar17,uVar16);
    UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(param_12 + 0x30);
  } while( true );
}



// ============================================================
// RVA: 0x187a520 | Core.Containers.ListIteratorExtensions.Sort<NetworkEventStanding>
// ============================================================

void Core_Containers_ListIteratorExtensions__Sort_NetworkEventStanding_
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
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_128;
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
  
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  lVar12 = param_6;
  uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar2 & 1) == 0) {
    auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2);
    puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    uStack_128 = param_4;
    iVar1 = (*(code *)*puVar10)(auVar17._0_8_,auVar17._8_8_,param_3);
    if (iVar1 != 0) {
      do {
        uVar14 = auVar17._8_8_;
        uVar8 = auVar17._0_8_;
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_98,uVar8,uVar14);
        puVar6 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        (*(code *)*puVar6)(&uStack_c0,param_1,param_2);
        if (param_5 == 0) {
          auVar17 = func_0x00f78af4();
          uVar9 = auVar17._8_8_;
          uVar3 = auVar17._0_8_;
          puStack_138 = &Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_;
          lVar13 = lVar12;
          uStack_190 = uVar14;
          uStack_188 = uVar8;
          uStack_170 = param_1;
          uStack_168 = param_2;
          lStack_160 = param_6;
          uStack_158 = param_3;
          puStack_150 = &uStack_98;
          lStack_148 = param_5;
          puStack_140 = &stack0xfffffffffffffff0;
          auStack_180 = auVar18;
          uVar2 = (**(code **)**(undefined8 **)(lVar12 + 0x30))();
          if ((uVar2 & 1) == 0) {
            auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))(uVar3,uVar9);
            puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x28);
            uVar8 = param_4;
            iVar1 = (*(code *)*puVar11)(auVar18._0_8_,auVar18._8_8_,puVar6);
            if (iVar1 != 0) {
              do {
                uVar4 = auVar18._8_8_;
                uVar14 = auVar18._0_8_;
                (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                          (&uStack_1b0,uVar14,uVar4);
                puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10);
                (*(code *)*puVar7)(&uStack_1d0,uVar3,uVar9);
                if (puVar10 == (undefined8 *)0x0) {
                  auVar18 = func_0x00f78af4();
                  uVar3 = auVar18._8_8_;
                  uVar14 = auVar18._0_8_;
                  lVar12 = lVar13;
                  uVar2 = (**(code **)**(undefined8 **)(lVar13 + 0x30))();
                  if ((uVar2 & 1) != 0) {
                    return;
                  }
                  auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(uVar14,uVar3)
                  ;
                  puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x28);
                  uVar9 = uVar8;
                  iVar1 = (*(code *)*puVar10)(auVar17._0_8_,auVar17._8_8_,puVar7,uVar8);
                  if (iVar1 != 0) {
                    do {
                      uVar16 = auVar17._8_8_;
                      uVar15 = auVar17._0_8_;
                      uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))
                                        (uVar15,uVar16);
                      puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10);
                      uVar5 = (*(code *)*puVar6)(uVar14,uVar3);
                      if (puVar11 == (undefined8 *)0x0) {
                        auVar18 = func_0x00f78af4();
                        auVar17._8_8_ = uVar9;
                        auVar17._0_8_ = puVar6;
                        uVar14 = auVar18._8_8_;
                        uVar8 = auVar18._0_8_;
                        iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))();
                        while( true ) {
                          if (iVar1 < 2) break;
                          auVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x30))
                                              (auVar17._0_8_,auVar17._8_8_);
                          uVar3 = auVar17._8_8_;
                          (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                                    (uVar8,uVar14,auVar17._0_8_,uVar3);
                          (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                                    (uVar8,uVar14,uVar14,uVar3,puVar10);
                          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))
                                            (uVar8,uVar14,auVar17._0_8_,uVar3);
                        }
                        return;
                      }
                      iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x18))
                                        (puVar11,uVar4,uVar5);
                      if (iVar1 != 0) {
                        auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                                            (auVar18._0_8_,auVar18._8_8_);
                        (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x20))
                                  (auVar18._0_8_,auVar18._8_8_,uVar15,uVar16);
                      }
                      auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                                          (uVar15,uVar16);
                      puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x28);
                      uVar9 = uVar8;
                      uVar2 = (*(code *)*puVar10)(auVar17._0_8_,auVar17._8_8_,puVar7);
                    } while ((uVar2 & 1) != 0);
                  }
                  uVar9 = auVar18._8_8_;
                  uVar4 = auVar18._0_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x20))
                            (uVar14,uVar3,uVar4,uVar9);
                  (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x30))
                            (uVar14,uVar3,uVar4,uVar9,puVar11);
                  auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))(uVar4,uVar9);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x30))
                            (auVar18._0_8_,auVar18._8_8_,puVar7,uVar8,puVar11);
                  return;
                }
                uStack_1e8 = uStack_1a8;
                uStack_1f0 = uStack_1b0;
                uStack_1d8 = uStack_198;
                uStack_1e0 = uStack_1a0;
                uStack_208 = uStack_1c8;
                uStack_210 = uStack_1d0;
                uStack_1f8 = uStack_1b8;
                uStack_200 = uStack_1c0;
                iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))
                                  (puVar10,&uStack_1f0,&uStack_210,
                                   *(undefined8 *)(*(long *)(lVar12 + 0x30) + 0x18));
                if (iVar1 != 0) {
                  auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                                      (auVar17._0_8_,auVar17._8_8_);
                  (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x20))
                            (auVar17._0_8_,auVar17._8_8_,uVar14,uVar4);
                }
                auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))(uVar14,uVar4);
                puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x28);
                uVar8 = param_4;
                uVar2 = (*(code *)*puVar11)(auVar18._0_8_,auVar18._8_8_,puVar6);
              } while ((uVar2 & 1) != 0);
            }
            uVar8 = auVar17._8_8_;
            uVar14 = auVar17._0_8_;
            (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x20))(uVar3,uVar9,uVar14,uVar8);
            (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x30))
                      (uVar3,uVar9,uVar14,uVar8,puVar10);
            auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))(uVar14,uVar8);
            (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x30))
                      (auVar18._0_8_,auVar18._8_8_,puVar6,param_4,puVar10);
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
          auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar18._0_8_,auVar18._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar18._0_8_,auVar18._8_8_,uVar8,uVar14);
        }
        auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar8,uVar14);
        puVar10 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        param_4 = uStack_128;
        uVar2 = (*(code *)*puVar10)(auVar17._0_8_,auVar17._8_8_,param_3);
      } while ((uVar2 & 1) != 0);
    }
    uVar8 = auVar18._8_8_;
    uVar14 = auVar18._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(param_1,param_2,uVar14,uVar8);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (param_1,param_2,uVar14,uVar8,param_5);
    auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar14,uVar8);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (auVar18._0_8_,auVar18._8_8_,param_3,uStack_128,param_5);
  }
  return;
}



// ============================================================
// RVA: 0x187a754 | Core.Containers.ListIteratorExtensions.Sort<NetworkPlayer>
// ============================================================

void Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  lVar11 = param_6;
  uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar2 & 1) == 0) {
    auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2);
    puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    uVar7 = param_4;
    iVar1 = (*(code *)*puVar9)(auVar17._0_8_,auVar17._8_8_,param_3);
    if (iVar1 != 0) {
      do {
        uVar15 = auVar17._8_8_;
        uVar13 = auVar17._0_8_;
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(&uStack_80,uVar13,uVar15);
        puVar5 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        (*(code *)*puVar5)(&uStack_a0,param_1,param_2);
        if (param_5 == 0) {
          auVar18 = func_0x00f78af4();
          uVar15 = auVar18._8_8_;
          uVar13 = auVar18._0_8_;
          lVar12 = lVar11;
          uVar2 = (**(code **)**(undefined8 **)(lVar11 + 0x30))();
          if ((uVar2 & 1) != 0) {
            return;
          }
          auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(uVar13,uVar15);
          puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x28);
          uVar8 = uVar7;
          iVar1 = (*(code *)*puVar10)(auVar17._0_8_,auVar17._8_8_,puVar5,uVar7);
          if (iVar1 != 0) {
            do {
              uVar16 = auVar17._8_8_;
              uVar14 = auVar17._0_8_;
              uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x10))(uVar14,uVar16);
              puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x10);
              uVar4 = (*(code *)*puVar6)(uVar13,uVar15);
              if (puVar9 == (undefined8 *)0x0) {
                auVar18 = func_0x00f78af4();
                auVar17._8_8_ = uVar8;
                auVar17._0_8_ = puVar6;
                uVar13 = auVar18._8_8_;
                uVar7 = auVar18._0_8_;
                iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))();
                while( true ) {
                  if (iVar1 < 2) break;
                  auVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x30))
                                      (auVar17._0_8_,auVar17._8_8_);
                  uVar15 = auVar17._8_8_;
                  (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                            (uVar7,uVar13,auVar17._0_8_,uVar15);
                  (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                            (uVar7,uVar13,uVar13,uVar15,puVar10);
                  iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18))
                                    (uVar7,uVar13,auVar17._0_8_,uVar15);
                }
                return;
              }
              iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x18))
                                (puVar9,uVar3,uVar4);
              if (iVar1 != 0) {
                auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))
                                    (auVar18._0_8_,auVar18._8_8_);
                (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x20))
                          (auVar18._0_8_,auVar18._8_8_,uVar14,uVar16);
              }
              auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(uVar14,uVar16);
              puVar10 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x28);
              uVar8 = uVar7;
              uVar2 = (*(code *)*puVar10)(auVar17._0_8_,auVar17._8_8_,puVar5);
            } while ((uVar2 & 1) != 0);
          }
          uVar8 = auVar18._8_8_;
          uVar3 = auVar18._0_8_;
          (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x20))(uVar13,uVar15,uVar3,uVar8);
          (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x30))
                    (uVar13,uVar15,uVar3,uVar8,puVar9);
          auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(uVar3,uVar8);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x30))
                    (auVar18._0_8_,auVar18._8_8_,puVar5,uVar7,puVar9);
          return;
        }
        uStack_b8 = uStack_78;
        uStack_c0 = uStack_80;
        uStack_a8 = uStack_68;
        uStack_b0 = uStack_70;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        uStack_c8 = uStack_88;
        uStack_d0 = uStack_90;
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                          (param_5,&uStack_c0,&uStack_e0,
                           *(undefined8 *)(*(long *)(param_6 + 0x30) + 0x18));
        if (iVar1 != 0) {
          auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                              (auVar18._0_8_,auVar18._8_8_);
          (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                    (auVar18._0_8_,auVar18._8_8_,uVar13,uVar15);
        }
        auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar13,uVar15);
        puVar9 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
        uVar7 = param_4;
        uVar2 = (*(code *)*puVar9)(auVar17._0_8_,auVar17._8_8_,param_3);
      } while ((uVar2 & 1) != 0);
    }
    uVar7 = auVar18._8_8_;
    uVar13 = auVar18._0_8_;
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(param_1,param_2,uVar13,uVar7);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (param_1,param_2,uVar13,uVar7,param_5);
    auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar13,uVar7);
    (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
              (auVar18._0_8_,auVar18._8_8_,param_3,param_4,param_5);
  }
  return;
}



// ============================================================
// RVA: 0x187a970 | Core.Containers.ListIteratorExtensions.Sort<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__Sort_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  lVar8 = param_6;
  uVar2 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if ((uVar2 & 1) != 0) {
    return;
  }
  auVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(param_1,param_2);
  puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
  uVar6 = param_4;
  iVar1 = (*(code *)*puVar7)(auVar11._0_8_,auVar11._8_8_,param_3,param_4);
  if (iVar1 != 0) {
    do {
      uVar10 = auVar11._8_8_;
      uVar9 = auVar11._0_8_;
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(uVar9,uVar10);
      puVar5 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
      uVar4 = (*(code *)*puVar5)(param_1,param_2);
      if (param_5 == 0) {
        auVar12 = func_0x00f78af4();
        auVar11._8_8_ = uVar6;
        auVar11._0_8_ = puVar5;
        uVar3 = auVar12._8_8_;
        uVar6 = auVar12._0_8_;
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18))();
        while (1 < iVar1) {
          auVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x30))(auVar11._0_8_,auVar11._8_8_);
          uVar4 = auVar11._8_8_;
          (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))(uVar6,uVar3,auVar11._0_8_,uVar4)
          ;
          (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                    (uVar6,uVar3,uVar3,uVar4,puVar7);
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x18))
                            (uVar6,uVar3,auVar11._0_8_,uVar4);
        }
        return;
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(param_5,uVar3,uVar4);
      if (iVar1 != 0) {
        auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar12._0_8_,auVar12._8_8_);
        (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                  (auVar12._0_8_,auVar12._8_8_,uVar9,uVar10);
      }
      auVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar9,uVar10);
      puVar7 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
      uVar6 = param_4;
      uVar2 = (*(code *)*puVar7)(auVar11._0_8_,auVar11._8_8_,param_3);
    } while ((uVar2 & 1) != 0);
  }
  uVar6 = auVar12._8_8_;
  uVar3 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))(param_1,param_2,uVar3,uVar6);
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
            (param_1,param_2,uVar3,uVar6,param_5);
  auVar12 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar3,uVar6);
                    /* WARNING: Could not recover jumptable at 0x0187ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x30))
            (auVar12._0_8_,auVar12._8_8_,param_3,param_4,param_5);
  return;
}



// ============================================================
// RVA: 0x187ab98 | Core.Containers.ListIteratorExtensions.SortHeap<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__SortHeap_object_
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
// RVA: 0x187ac7c | Core.Containers.ListIteratorExtensions.StableSort<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__StableSort_object_
               (long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,long param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  long lVar11;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 auVar12 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  
  uVar1 = (int)param_2 + 1;
  if ((int)uVar1 < (int)param_4) {
    lVar7 = param_5;
    lStack_88 = unaff_x19;
    puStack_70 = param_4;
    uStack_68 = param_2;
    if (param_1 == (long *)0x0) {
LAB_0187afd4:
      auVar12 = func_0x00f78af4();
      puStack_78 = &Core_Containers_ListIteratorExtensions__Swap_NetworkEventStanding_;
      lStack_c0 = unaff_x28;
      uStack_b8 = unaff_x27;
      uStack_b0 = unaff_x24;
      plStack_a8 = param_1;
      uStack_a0 = unaff_x22;
      uStack_98 = unaff_x21;
      uStack_90 = unaff_x20;
      puStack_80 = &stack0xfffffffffffffff0;
      (**(code **)**(undefined8 **)(lVar7 + 0x30))(&uStack_118);
      uStack_e8 = uStack_110;
      uStack_f0 = uStack_118;
      uStack_d8 = uStack_100;
      uStack_e0 = uStack_108;
      uStack_d0 = uStack_f8;
      (**(code **)**(undefined8 **)(lVar7 + 0x30))(&uStack_140,param_3,param_4);
      uStack_168 = uStack_138;
      uStack_170 = uStack_140;
      uStack_158 = uStack_128;
      uStack_160 = uStack_130;
      uStack_150 = uStack_120;
      (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
                (auVar12._0_8_,auVar12._8_8_,&uStack_170,
                 *(undefined8 *)(*(long *)(lVar7 + 0x30) + 8));
      uStack_198 = uStack_e8;
      uStack_1a0 = uStack_f0;
      uStack_188 = uStack_d8;
      uStack_190 = uStack_e0;
      uStack_180 = uStack_d0;
      (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
                (param_3,param_4,&uStack_1a0,*(undefined8 *)(*(long *)(lVar7 + 0x30) + 8));
      return;
    }
    do {
      unaff_x24 = (ulong)uVar1;
      lVar11 = **(long **)(param_6 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      lVar8 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0187ad2c;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_1,lVar11,0);
LAB_0187ad2c:
      uVar5 = (*(code *)*puVar4)(param_1,unaff_x24,puVar4[1]);
      unaff_x22 = param_2;
      unaff_x27 = uStack_68;
      if ((int)uStack_68 <= (int)param_2) {
code_r0x0187ad5c:
        do {
          iVar3 = (int)unaff_x27 + (int)unaff_x22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          unaff_x28 = **(long **)(param_6 + 0x30);
          if ((*(ushort *)(unaff_x28 + 0x132) & 1) == 0) {
            func_0x00fac028(unaff_x28);
          }
          lVar11 = *param_1;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == unaff_x28) {
                puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x0187adcc;
              }
              piVar10 = piVar10 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(param_1,unaff_x28,0);
code_r0x0187adcc:
          uVar2 = iVar3 >> 1;
          unaff_x21 = (ulong)uVar2;
          param_3 = puVar4[1];
          uVar6 = (*(code *)*puVar4)(param_1,unaff_x21,param_3);
          unaff_x20 = 0;
          lStack_88 = param_6;
          if (param_5 == 0) goto LAB_0187afd4;
          param_4 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
          iVar3 = (*(code *)*param_4)(param_5,uVar5,uVar6);
          if (iVar3 != 0) {
            unaff_x22 = (ulong)(uVar2 - 1);
            if ((int)uVar2 <= (int)unaff_x27) break;
            goto code_r0x0187ad5c;
          }
          unaff_x27 = (ulong)(uVar2 + 1);
        } while ((int)uVar2 < (int)unaff_x22);
      }
      while (iVar3 = (int)param_2, (int)unaff_x27 <= iVar3) {
        lVar11 = **(long **)(param_6 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar8 = *param_1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x0187ae88;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_1,lVar11,0);
code_r0x0187ae88:
        uVar6 = (*(code *)*puVar4)(param_1,param_2,puVar4[1]);
        lVar11 = **(long **)(param_6 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar8 = *param_1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto code_r0x0187af04;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_1,lVar11,1);
code_r0x0187af04:
        (*(code *)*puVar4)(param_1,iVar3 + 1,uVar6,puVar4[1]);
        param_2 = (ulong)(iVar3 - 1);
      }
      lVar11 = **(long **)(param_6 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      lVar8 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto code_r0x0187af8c;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_1,lVar11,1);
code_r0x0187af8c:
      param_4 = (undefined8 *)puVar4[1];
      (*(code *)*puVar4)(param_1,unaff_x27,uVar5);
      uVar1 = uVar1 + 1;
      param_2 = unaff_x24;
    } while (uVar1 != (uint)puStack_70);
  }
  return;
}



// ============================================================
// RVA: 0x187afd8 | Core.Containers.ListIteratorExtensions.Swap<NetworkEventStanding>
// ============================================================

void Core_Containers_ListIteratorExtensions__Swap_NetworkEventStanding_
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
// RVA: 0x187b0c8 | Core.Containers.ListIteratorExtensions.Swap<NetworkPlayer>
// ============================================================

void Core_Containers_ListIteratorExtensions__Swap_NetworkPlayer_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  (**(code **)**(undefined8 **)(param_5 + 0x30))(&uStack_80);
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  (**(code **)**(undefined8 **)(param_5 + 0x30))(&uStack_a0,param_3,param_4);
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  uStack_a8 = uStack_88;
  uStack_b0 = uStack_90;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))
            (param_1,param_2,&uStack_c0,*(undefined8 *)(*(long *)(param_5 + 0x30) + 8));
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))
            (param_3,param_4,&uStack_e0,*(undefined8 *)(*(long *)(param_5 + 0x30) + 8));
  return;
}



// ============================================================
// RVA: 0x187b194 | Core.Containers.ListIteratorExtensions.Swap<object>
// ============================================================

void Core_Containers_ListIteratorExtensions__Swap_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
  uVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))(param_3,param_4);
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0187b22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))(param_3,param_4,uVar1);
  return;
}



// ============================================================
// RVA: 0x187b230 | Core.Containers.ListIteratorExtensions.SwapRanges<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__SwapRanges_object_
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
// RVA: 0x187b31c | Core.Containers.ListIteratorExtensions.Transform<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x187b438 | Core.Containers.ListIteratorExtensions.Transform<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x189fd00 | Core.Containers.ListIteratorExtensions.Unique<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__Unique_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6,long param_7,long param_8)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  lVar13 = param_6;
  uVar3 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  auVar18 = auVar17;
  if ((uVar3 & 1) != 0) {
    auVar18._8_8_ = param_4;
    auVar18._0_8_ = param_3;
    return auVar18;
  }
  while( true ) {
    uVar10 = auVar18._8_8_;
    uVar9 = auVar18._0_8_;
    auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                        (auVar17._0_8_,auVar17._8_8_);
    uVar8 = auVar17._8_8_;
    uVar7 = auVar17._0_8_;
    puVar12 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x28);
    uVar6 = param_4;
    uVar3 = (*(code *)*puVar12)(uVar7,uVar8,param_3);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0189fe88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(uVar9,uVar10);
      return auVar17;
    }
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar9,uVar10);
    puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 8);
    uVar5 = (*(code *)*puVar11)(uVar7,uVar8);
    if (param_5 == 0) break;
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))(param_5,uVar4,uVar5);
    if ((uVar3 & 1) == 0) {
      auVar18 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))(uVar9,uVar10);
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar7,uVar8);
      (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x20))
                (auVar18._0_8_,auVar18._8_8_,uVar6);
    }
  }
  auVar17 = func_0x00f78af4();
  auVar20._8_8_ = lVar13;
  auVar20._0_8_ = puVar12;
  lVar15 = param_7;
  uVar3 = (**(code **)**(undefined8 **)(param_8 + 0x30))();
  if ((uVar3 & 1) != 0) {
    auVar19._8_8_ = uVar6;
    auVar19._0_8_ = puVar11;
    return auVar19;
  }
  uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))(auVar17._0_8_,auVar17._8_8_);
  pcVar14 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10);
  do {
    uVar10 = auVar20._8_8_;
    uVar8 = auVar20._0_8_;
    (*pcVar14)(uVar8,uVar10,uVar7);
    do {
      auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                          (auVar17._0_8_,auVar17._8_8_);
      puVar12 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
      uVar3 = (*(code *)*puVar12)(auVar17._0_8_,auVar17._8_8_,puVar11,uVar6);
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x018a0028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar17 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar8,uVar10);
        return auVar17;
      }
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                        (auVar17._0_8_,auVar17._8_8_);
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))(uVar8,uVar10);
      if (param_7 == 0) {
        auVar17 = func_0x00f78af4();
        uVar2 = (**(code **)**(undefined8 **)(lVar15 + 0x30))();
        while( true ) {
          uVar16 = uVar2;
          if ((int)uVar16 < 1) {
            return auVar17;
          }
          uVar2 = uVar16 >> 1;
          auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))
                              (auVar17._0_8_,auVar17._8_8_,uVar2);
          uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))();
          if (lVar13 == 0) break;
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x18))
                            (lVar13,puVar12,uVar6);
          if ((uVar3 & 1) == 0) {
            auVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x20))
                                (auVar18._0_8_,auVar18._8_8_);
            uVar2 = uVar16 + ~uVar2;
          }
        }
        auVar17 = func_0x00f78af4();
        if ((bRam0000000003eb655b & 1) == 0) {
          func_0x00f78a20(0x3d23210);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb655b = 1;
        }
        uVar6 = **(undefined8 **)(auVar17._8_8_ + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar6,0);
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar18 = /*System.Runtime.InteropServices.Marshal$$GetDelegateForFunctionPointer*/ func_0x02b01478(auVar17._0_8_,uVar6,0);
        uVar3 = auVar18._8_8_;
        lVar13 = auVar18._0_8_;
        lVar15 = *(long *)(*(long *)(auVar17._8_8_ + 0x30) + 8);
        if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar15);
          uVar3 = extraout_x1;
        }
        if (lVar13 != 0) {
          auVar17 = func_0x00f78adc(lVar13,lVar15);
          if (auVar17._0_8_ != 0) {
            return auVar17;
          }
          func_0x00f78e5c(lVar13,lVar15);
          uVar3 = extraout_x1_00;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        return auVar1 << 0x40;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))(param_7,uVar9,uVar7);
    } while ((uVar3 & 1) != 0);
    auVar20 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar8,uVar10);
    pcVar14 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10);
  } while( true );
}



// ============================================================
// RVA: 0x189fe90 | Core.Containers.ListIteratorExtensions.UniqueCopy<object>
// ============================================================

undefined1  [16]
Core_Containers_ListIteratorExtensions__UniqueCopy_object_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  auVar15._8_8_ = param_6;
  auVar15._0_8_ = param_5;
  lVar9 = param_7;
  uVar3 = (**(code **)**(undefined8 **)(param_8 + 0x30))();
  if ((uVar3 & 1) != 0) {
    auVar13._8_8_ = param_4;
    auVar13._0_8_ = param_3;
    return auVar13;
  }
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))(param_1,param_2);
  pcVar10 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10);
  do {
    uVar7 = auVar15._8_8_;
    uVar5 = auVar15._0_8_;
    (*pcVar10)(uVar5,uVar7,uVar4);
    do {
      auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))
                          (auVar14._0_8_,auVar14._8_8_);
      puVar8 = *(undefined8 **)(*(long *)(param_8 + 0x30) + 0x28);
      uVar3 = (*(code *)*puVar8)(auVar14._0_8_,auVar14._8_8_,param_3,param_4);
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x018a0028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar14 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar5,uVar7);
        return auVar14;
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))
                        (auVar14._0_8_,auVar14._8_8_);
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 8))(uVar5,uVar7);
      if (param_7 == 0) {
        auVar14 = func_0x00f78af4();
        uVar2 = (**(code **)**(undefined8 **)(lVar9 + 0x30))();
        while( true ) {
          uVar12 = uVar2;
          if ((int)uVar12 < 1) {
            return auVar14;
          }
          uVar2 = uVar12 >> 1;
          auVar15 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))
                              (auVar14._0_8_,auVar14._8_8_,uVar2);
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x10))();
          if (param_6 == 0) break;
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x18))(param_6,puVar8,uVar4)
          ;
          if ((uVar3 & 1) == 0) {
            auVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x20))
                                (auVar15._0_8_,auVar15._8_8_);
            uVar2 = uVar12 + ~uVar2;
          }
        }
        auVar14 = func_0x00f78af4();
        if ((bRam0000000003eb655b & 1) == 0) {
          func_0x00f78a20(0x3d23210);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb655b = 1;
        }
        uVar4 = **(undefined8 **)(auVar14._8_8_ + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
        if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar15 = /*System.Runtime.InteropServices.Marshal$$GetDelegateForFunctionPointer*/ func_0x02b01478(auVar14._0_8_,uVar4,0);
        uVar3 = auVar15._8_8_;
        lVar9 = auVar15._0_8_;
        lVar11 = *(long *)(*(long *)(auVar14._8_8_ + 0x30) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
          uVar3 = extraout_x1;
        }
        if (lVar9 != 0) {
          auVar14 = func_0x00f78adc(lVar9,lVar11);
          if (auVar14._0_8_ != 0) {
            return auVar14;
          }
          func_0x00f78e5c(lVar9,lVar11);
          uVar3 = extraout_x1_00;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        return auVar1 << 0x40;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x18))(param_7,uVar6,uVar4);
    } while ((uVar3 & 1) != 0);
    auVar15 = (*(code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x20))(uVar5,uVar7);
    pcVar10 = (code *)**(undefined8 **)(*(long *)(param_8 + 0x30) + 0x10);
  } while( true );
}



// ============================================================
// RVA: 0x18a0030 | Core.Containers.ListIteratorExtensions.UpperBound<object>
// ============================================================

long Core_Containers_ListIteratorExtensions__UpperBound_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,long param_7)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  uVar1 = (**(code **)**(undefined8 **)(param_7 + 0x30))();
  while( true ) {
    uVar7 = uVar1;
    if ((int)uVar7 < 1) {
      return auVar9._0_8_;
    }
    uVar1 = uVar7 >> 1;
    auVar8 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 8))
                       (auVar9._0_8_,auVar9._8_8_,uVar1);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x10))();
    if (param_6 == 0) break;
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x18))(param_6,param_5,uVar2);
    if ((uVar3 & 1) == 0) {
      auVar9 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x30) + 0x20))
                         (auVar8._0_8_,auVar8._8_8_);
      uVar1 = uVar7 + ~uVar1;
    }
  }
  auVar9 = func_0x00f78af4();
  if ((bRam0000000003eb655b & 1) == 0) {
    func_0x00f78a20(0x3d23210);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb655b = 1;
  }
  uVar2 = **(undefined8 **)(auVar9._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar2,0);
  if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*System.Runtime.InteropServices.Marshal$$GetDelegateForFunctionPointer*/ func_0x02b01478(auVar9._0_8_,uVar2,0);
  lVar6 = *(long *)(*(long *)(auVar9._8_8_ + 0x30) + 8);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  if (lVar4 != 0) {
    lVar5 = func_0x00f78adc(lVar4,lVar6);
    if (lVar5 != 0) {
      return lVar5;
    }
    func_0x00f78e5c(lVar4,lVar6);
  }
  return 0;
}



