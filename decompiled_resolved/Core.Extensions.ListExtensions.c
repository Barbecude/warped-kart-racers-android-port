// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Extensions.ListExtensions

// ============================================================
// RVA: 0x1646784 | Core.Extensions.ListExtensions..cctor
// ============================================================

void Core_Extensions_ListExtensions___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb575d & 1) == 0) {
    func_0x00f78a20(0x3d22ff0);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb575d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar1,0);
  **(undefined8 **)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1874140 | Core.Extensions.ListExtensions.Shuffle<DefinitionID>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1874460 | Core.Extensions.ListExtensions.Shuffle<int>
// ============================================================

ulong Core_Extensions_ListExtensions__Shuffle_int_
                (long *param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  
  if ((bRam0000000003eb6558 & 1) == 0) {
    func_0x00f78a20(0x3d22ff0);
    bRam0000000003eb6558 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar23 = **(long **)(param_2 + 0x30);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    lVar18 = *param_1;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar23) {
          puVar7 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0187450c;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    param_3 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar23);
LAB_0187450c:
    uVar8 = (*(code *)*puVar7)(param_1,puVar7[1]);
    uVar21 = uVar8;
    if (1 < (int)uVar8) {
      do {
        if (((*(ushort *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar9 = (long *)**(long **)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xb8);
        if (plVar9 == (long *)0x0) goto LAB_0187477c;
        uVar10 = (**(code **)(*plVar9 + 0x198))(plVar9,uVar21,*(undefined8 *)(*plVar9 + 0x1a0));
        lVar23 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar23);
        }
        lVar18 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar23) {
              puVar7 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
              goto code_r0x018745cc;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar23,0);
code_r0x018745cc:
        param_3 = (*(code *)*puVar7)(param_1,uVar10,puVar7[1]);
        lVar23 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar23);
        }
        iVar5 = (int)uVar21;
        uVar21 = (ulong)(iVar5 - 1);
        lVar18 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar23) {
              puVar7 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
              goto code_r0x01874648;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar23,0);
code_r0x01874648:
        uVar11 = (*(code *)*puVar7)(param_1,uVar21,puVar7[1]);
        lVar23 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar23);
        }
        lVar18 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar23) {
              puVar7 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto code_r0x018746c4;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar23,1);
code_r0x018746c4:
        (*(code *)*puVar7)(param_1,uVar10,uVar11,puVar7[1]);
        lVar23 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar23);
        }
        lVar18 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar23) {
              puVar7 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto code_r0x01874740;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar23,1);
code_r0x01874740:
        param_4 = puVar7[1];
        uVar8 = (*(code *)*puVar7)(param_1,uVar21);
      } while (2 < iVar5);
    }
    return uVar8;
  }
LAB_0187477c:
  auVar25 = func_0x00f78af4();
  lVar23 = auVar25._8_8_;
  plVar9 = auVar25._0_8_;
  if ((bRam0000000003eb6559 & 1) == 0) {
    func_0x00f78a20(0x3d22ff0);
    bRam0000000003eb6559 = 1;
  }
  if (plVar9 != (long *)0x0) {
    lVar18 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar18);
    }
    lVar19 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar18) {
          puVar7 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x0187482c;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    param_3 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18);
code_r0x0187482c:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar21 = uVar8;
    if (1 < (int)uVar8) {
      do {
        if (((*(ushort *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)**(long **)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xb8);
        if (plVar12 == (long *)0x0) goto code_r0x01874a9c;
        uVar10 = (**(code **)(*plVar12 + 0x198))(plVar12,uVar21,*(undefined8 *)(*plVar12 + 0x1a0));
        lVar18 = *(long *)(*(long *)(lVar23 + 0x30) + 8);
        if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar18);
        }
        lVar19 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar18) {
              puVar7 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
              goto code_r0x018748ec;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18,0);
code_r0x018748ec:
        param_3 = (*(code *)*puVar7)(plVar9,uVar10,puVar7[1]);
        lVar18 = *(long *)(*(long *)(lVar23 + 0x30) + 8);
        if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar18);
        }
        iVar5 = (int)uVar21;
        uVar21 = (ulong)(iVar5 - 1);
        lVar19 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar18) {
              puVar7 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
              goto code_r0x01874968;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18,0);
code_r0x01874968:
        uVar11 = (*(code *)*puVar7)(plVar9,uVar21,puVar7[1]);
        lVar18 = *(long *)(*(long *)(lVar23 + 0x30) + 8);
        if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar18);
        }
        lVar19 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar18) {
              puVar7 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto code_r0x018749e4;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18,1);
code_r0x018749e4:
        (*(code *)*puVar7)(plVar9,uVar10,uVar11,puVar7[1]);
        lVar18 = *(long *)(*(long *)(lVar23 + 0x30) + 8);
        if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar18);
        }
        lVar19 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar8 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar18) {
              puVar7 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto code_r0x01874a60;
            }
            piVar22 = piVar22 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18,1);
code_r0x01874a60:
        param_4 = puVar7[1];
        uVar8 = (*(code *)*puVar7)(plVar9,uVar21);
      } while (2 < iVar5);
    }
    return uVar8;
  }
code_r0x01874a9c:
  auVar25 = func_0x00f78af4();
  lVar23 = param_6;
  iVar5 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if (iVar5 != 0) {
    auVar26 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                        (auVar25._0_8_,auVar25._8_8_);
    puVar7 = (undefined8 *)**(long **)(param_6 + 0x30);
    uVar10 = param_4;
    iVar5 = (*(code *)*puVar7)(auVar26._0_8_,auVar26._8_8_,param_3);
    if (iVar5 != 0) {
      do {
        uVar21 = auVar25._0_8_;
        uVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                           (uVar21,auVar25._8_8_);
        puVar16 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar13 = (*(code *)*puVar16)(auVar26._0_8_,auVar26._8_8_);
        if (param_5 == 0) {
          auVar27 = func_0x00f78af4();
          iVar5 = auVar27._8_4_;
          plVar9 = auVar27._0_8_;
          puVar17 = puVar7;
          lVar18 = lVar23;
          if (plVar9 == (long *)0x0) goto LAB_01875284;
          lVar19 = **(long **)(lVar23 + 0x30);
          uVar11 = uVar10;
          if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar19);
          }
          lVar20 = *plVar9;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar21 == 0) goto LAB_01874c8c;
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          goto LAB_01874c74;
        }
        uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                          (param_5,uVar11,uVar13);
        if ((uVar8 & 1) != 0) {
          return uVar21;
        }
        auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar21,auVar25._8_8_);
        auVar26 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar26._0_8_,auVar26._8_8_);
        puVar7 = (undefined8 *)**(long **)(param_6 + 0x30);
        uVar10 = param_4;
        uVar21 = (*(code *)*puVar7)(auVar26._0_8_,auVar26._8_8_,param_3);
      } while ((uVar21 & 1) != 0);
    }
  }
  return param_3;
  while( true ) {
    piVar22 = piVar22 + 4;
    uVar21 = uVar21 - 1;
    if (uVar21 == 0) break;
LAB_01874c74:
    if (*(long *)(piVar22 + -2) == lVar19) {
      puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_01874cac;
    }
  }
LAB_01874c8c:
  puVar14 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,0);
LAB_01874cac:
  uVar13 = (*(code *)*puVar14)(plVar9,puVar16,puVar14[1]);
  uVar24 = (int)uVar10 - iVar5;
  uVar1 = (int)puVar16 - iVar5;
  uVar2 = uVar1;
  uVar10 = uVar11;
  while( true ) {
    uVar3 = uVar2 * 2;
    uVar4 = uVar3 + 2;
    if ((int)uVar24 <= (int)uVar4) break;
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x01874d44;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,0);
code_r0x01874d44:
    uVar11 = (*(code *)*puVar16)(plVar9,uVar4 + iVar5,puVar16[1]);
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x01874dbc;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,0);
code_r0x01874dbc:
    puVar16 = (undefined8 *)puVar14[1];
    uVar15 = (*(code *)*puVar14)(plVar9,(uVar3 | 1) + iVar5);
    if (puVar7 == (undefined8 *)0x0) goto LAB_01875284;
    iVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 8))(puVar7,uVar11,uVar15);
    uVar3 = uVar3 | 1;
    if (iVar6 == 0) {
      uVar3 = uVar4;
    }
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x01874e5c;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,0);
code_r0x01874e5c:
    uVar11 = (*(code *)*puVar16)(plVar9,uVar3 + iVar5,puVar16[1]);
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar16 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto code_r0x01874ed8;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,1);
code_r0x01874ed8:
    uVar10 = puVar16[1];
    (*(code *)*puVar16)(plVar9,uVar2 + iVar5,uVar11);
    uVar2 = uVar3;
  }
  if (uVar4 == uVar24) {
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x01874f94;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,0);
code_r0x01874f94:
    uVar11 = (*(code *)*puVar16)(plVar9,(uVar3 | 1) + iVar5,puVar16[1]);
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar16 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto code_r0x01875014;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,1);
code_r0x01875014:
    uVar10 = puVar16[1];
    (*(code *)*puVar16)(plVar9,uVar2 + iVar5,uVar11);
    uVar2 = uVar3 | 1;
  }
  while (uVar24 = uVar1, uVar2 != uVar1) {
    uVar3 = uVar2;
    if (-1 < (int)(uVar2 - 1)) {
      uVar3 = uVar2 - 1;
    }
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x018750a8;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,0);
code_r0x018750a8:
    iVar6 = ((int)uVar3 >> 1) + iVar5;
    puVar16 = (undefined8 *)puVar14[1];
    uVar11 = (*(code *)*puVar14)(plVar9,iVar6);
    if (puVar7 == (undefined8 *)0x0) {
LAB_01875284:
      auVar25 = func_0x00f78af4();
      puVar7 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18);
      uVar11 = uVar10;
      lVar23 = lVar18;
      iVar5 = (*(code *)*puVar7)();
      if (iVar5 == 0) {
        uVar21 = 1;
      }
      else {
        do {
          puVar14 = (undefined8 *)**(undefined8 **)(lVar18 + 0x30);
          uVar13 = (*(code *)*puVar14)(auVar25._0_8_,auVar25._8_8_);
          if (puVar17 == (undefined8 *)0x0) {
            auVar25 = func_0x00f78af4();
            iVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x18))();
            if (iVar5 == 0) {
              return 0;
            }
            while( true ) {
              uVar10 = (**(code **)**(undefined8 **)(lVar23 + 0x30))(auVar25._0_8_,auVar25._8_8_);
              if (puVar7 == (undefined8 *)0x0) {
                uVar21 = func_0x00f78af4();
                return uVar21;
              }
              uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 8))(puVar7,uVar10);
              if ((uVar21 & 1) != 0) break;
              auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x10))
                                  (auVar25._0_8_,auVar25._8_8_);
              uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 0x18))
                                (auVar25._0_8_,auVar25._8_8_,puVar14,uVar11);
              if ((uVar8 & 1) == 0) {
                return uVar21;
              }
            }
            return uVar21;
          }
          uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 8))(puVar17,uVar13);
          if ((int)uVar21 == 0) {
            return uVar21;
          }
          auVar25 = (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x10))
                              (auVar25._0_8_,auVar25._8_8_);
          puVar7 = *(undefined8 **)(*(long *)(lVar18 + 0x30) + 0x18);
          uVar11 = uVar10;
          uVar8 = (*(code *)*puVar7)(auVar25._0_8_,auVar25._8_8_,puVar16);
        } while ((uVar8 & 1) != 0);
      }
      return uVar21;
    }
    uVar21 = (*(code *)**(undefined8 **)(*(long *)(lVar23 + 0x30) + 8))(puVar7,uVar11,uVar13);
    uVar24 = uVar2;
    if ((uVar21 & 1) == 0) break;
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar16 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x01875148;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,0);
code_r0x01875148:
    uVar11 = (*(code *)*puVar16)(plVar9,iVar6,puVar16[1]);
    lVar19 = **(long **)(lVar23 + 0x30);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    lVar20 = *plVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar16 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto code_r0x018751c4;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,1);
code_r0x018751c4:
    uVar10 = puVar16[1];
    (*(code *)*puVar16)(plVar9,uVar2 + iVar5,uVar11);
    uVar2 = (int)uVar3 >> 1;
  }
  lVar23 = **(long **)(lVar23 + 0x30);
  if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar23);
  }
  lVar18 = *plVar9;
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == lVar23) {
        puVar7 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
        goto code_r0x01875254;
      }
      piVar22 = piVar22 + 4;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar23,1);
code_r0x01875254:
                    /* WARNING: Could not recover jumptable at 0x01875280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar21 = (*(code *)*puVar7)(plVar9,uVar24 + iVar5,uVar13,puVar7[1]);
  return uVar21;
}



// ============================================================
// RVA: 0x1874780 | Core.Extensions.ListExtensions.Shuffle<object>
// ============================================================

ulong Core_Extensions_ListExtensions__Shuffle_object_
                (long *param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  
  if ((bRam0000000003eb6559 & 1) == 0) {
    func_0x00f78a20(0x3d22ff0);
    bRam0000000003eb6559 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar21 = **(long **)(param_2 + 0x30);
    if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar21);
    }
    lVar17 = *param_1;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar21) {
          puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0187482c;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    param_3 = 0;
    puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar21);
LAB_0187482c:
    uVar8 = (*(code *)*puVar7)(param_1,puVar7[1]);
    uVar19 = uVar8;
    if (1 < (int)uVar8) {
      do {
        if (((*(ushort *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar9 = (long *)**(long **)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xb8);
        if (plVar9 == (long *)0x0) goto LAB_01874a9c;
        uVar10 = (**(code **)(*plVar9 + 0x198))(plVar9,uVar19,*(undefined8 *)(*plVar9 + 0x1a0));
        lVar21 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        lVar17 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar21) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x018748ec;
            }
            piVar20 = piVar20 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar21,0);
code_r0x018748ec:
        param_3 = (*(code *)*puVar7)(param_1,uVar10,puVar7[1]);
        lVar21 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        iVar5 = (int)uVar19;
        uVar19 = (ulong)(iVar5 - 1);
        lVar17 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar21) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x01874968;
            }
            piVar20 = piVar20 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar21,0);
code_r0x01874968:
        uVar11 = (*(code *)*puVar7)(param_1,uVar19,puVar7[1]);
        lVar21 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        lVar17 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar21) {
              puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto code_r0x018749e4;
            }
            piVar20 = piVar20 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar21,1);
code_r0x018749e4:
        (*(code *)*puVar7)(param_1,uVar10,uVar11,puVar7[1]);
        lVar21 = *(long *)(*(long *)(param_2 + 0x30) + 8);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        lVar17 = *param_1;
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar21) {
              puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto code_r0x01874a60;
            }
            piVar20 = piVar20 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(param_1,lVar21,1);
code_r0x01874a60:
        param_4 = puVar7[1];
        uVar8 = (*(code *)*puVar7)(param_1,uVar19);
      } while (2 < iVar5);
    }
    return uVar8;
  }
LAB_01874a9c:
  auVar24 = func_0x00f78af4();
  lVar21 = param_6;
  iVar5 = (**(code **)**(undefined8 **)(param_6 + 0x30))();
  if (iVar5 != 0) {
    auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                        (auVar24._0_8_,auVar24._8_8_);
    puVar7 = (undefined8 *)**(long **)(param_6 + 0x30);
    uVar10 = param_4;
    iVar5 = (*(code *)*puVar7)(auVar25._0_8_,auVar25._8_8_,param_3);
    if (iVar5 != 0) {
      do {
        uVar19 = auVar24._0_8_;
        uVar11 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10))
                           (uVar19,auVar24._8_8_);
        puVar15 = *(undefined8 **)(*(long *)(param_6 + 0x30) + 0x10);
        uVar12 = (*(code *)*puVar15)(auVar25._0_8_,auVar25._8_8_);
        if (param_5 == 0) {
          auVar26 = func_0x00f78af4();
          iVar5 = auVar26._8_4_;
          plVar9 = auVar26._0_8_;
          puVar16 = puVar7;
          lVar17 = lVar21;
          if (plVar9 == (long *)0x0) goto LAB_01875284;
          lVar22 = **(long **)(lVar21 + 0x30);
          uVar11 = uVar10;
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          lVar18 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 == 0) goto LAB_01874c8c;
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_01874c74;
        }
        uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 0x18))
                          (param_5,uVar11,uVar12);
        if ((uVar8 & 1) != 0) {
          return uVar19;
        }
        auVar24 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))(uVar19,auVar24._8_8_);
        auVar25 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x30) + 8))
                            (auVar25._0_8_,auVar25._8_8_);
        puVar7 = (undefined8 *)**(long **)(param_6 + 0x30);
        uVar10 = param_4;
        uVar19 = (*(code *)*puVar7)(auVar25._0_8_,auVar25._8_8_,param_3);
      } while ((uVar19 & 1) != 0);
    }
  }
  return param_3;
  while( true ) {
    piVar20 = piVar20 + 4;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) break;
LAB_01874c74:
    if (*(long *)(piVar20 + -2) == lVar22) {
      puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01874cac;
    }
  }
LAB_01874c8c:
  puVar13 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
LAB_01874cac:
  uVar12 = (*(code *)*puVar13)(plVar9,puVar15,puVar13[1]);
  uVar23 = (int)uVar10 - iVar5;
  uVar1 = (int)puVar15 - iVar5;
  uVar2 = uVar1;
  uVar10 = uVar11;
  while( true ) {
    uVar3 = uVar2 * 2;
    uVar4 = uVar3 + 2;
    if ((int)uVar23 <= (int)uVar4) break;
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x01874d44;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x01874d44:
    uVar11 = (*(code *)*puVar15)(plVar9,uVar4 + iVar5,puVar15[1]);
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x01874dbc;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x01874dbc:
    puVar15 = (undefined8 *)puVar13[1];
    uVar14 = (*(code *)*puVar13)(plVar9,(uVar3 | 1) + iVar5);
    if (puVar7 == (undefined8 *)0x0) goto LAB_01875284;
    iVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(puVar7,uVar11,uVar14);
    uVar3 = uVar3 | 1;
    if (iVar6 == 0) {
      uVar3 = uVar4;
    }
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x01874e5c;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x01874e5c:
    uVar11 = (*(code *)*puVar15)(plVar9,uVar3 + iVar5,puVar15[1]);
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto code_r0x01874ed8;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,1);
code_r0x01874ed8:
    uVar10 = puVar15[1];
    (*(code *)*puVar15)(plVar9,uVar2 + iVar5,uVar11);
    uVar2 = uVar3;
  }
  if (uVar4 == uVar23) {
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x01874f94;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x01874f94:
    uVar11 = (*(code *)*puVar15)(plVar9,(uVar3 | 1) + iVar5,puVar15[1]);
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto code_r0x01875014;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,1);
code_r0x01875014:
    uVar10 = puVar15[1];
    (*(code *)*puVar15)(plVar9,uVar2 + iVar5,uVar11);
    uVar2 = uVar3 | 1;
  }
  while (uVar23 = uVar1, uVar2 != uVar1) {
    uVar3 = uVar2;
    if (-1 < (int)(uVar2 - 1)) {
      uVar3 = uVar2 - 1;
    }
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x018750a8;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x018750a8:
    iVar6 = ((int)uVar3 >> 1) + iVar5;
    puVar15 = (undefined8 *)puVar13[1];
    uVar11 = (*(code *)*puVar13)(plVar9,iVar6);
    if (puVar7 == (undefined8 *)0x0) {
LAB_01875284:
      auVar24 = func_0x00f78af4();
      puVar7 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18);
      uVar11 = uVar10;
      lVar21 = lVar17;
      iVar5 = (*(code *)*puVar7)();
      if (iVar5 == 0) {
        uVar19 = 1;
      }
      else {
        do {
          puVar13 = (undefined8 *)**(undefined8 **)(lVar17 + 0x30);
          uVar12 = (*(code *)*puVar13)(auVar24._0_8_,auVar24._8_8_);
          if (puVar16 == (undefined8 *)0x0) {
            auVar24 = func_0x00f78af4();
            iVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))();
            if (iVar5 == 0) {
              return 0;
            }
            while( true ) {
              uVar10 = (**(code **)**(undefined8 **)(lVar21 + 0x30))(auVar24._0_8_,auVar24._8_8_);
              if (puVar7 == (undefined8 *)0x0) {
                uVar19 = func_0x00f78af4();
                return uVar19;
              }
              uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(puVar7,uVar10);
              if ((uVar19 & 1) != 0) break;
              auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))
                                  (auVar24._0_8_,auVar24._8_8_);
              uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x18))
                                (auVar24._0_8_,auVar24._8_8_,puVar13,uVar11);
              if ((uVar8 & 1) == 0) {
                return uVar19;
              }
            }
            return uVar19;
          }
          uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(puVar16,uVar12);
          if ((int)uVar19 == 0) {
            return uVar19;
          }
          auVar24 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x10))
                              (auVar24._0_8_,auVar24._8_8_);
          puVar7 = *(undefined8 **)(*(long *)(lVar17 + 0x30) + 0x18);
          uVar11 = uVar10;
          uVar8 = (*(code *)*puVar7)(auVar24._0_8_,auVar24._8_8_,puVar15);
        } while ((uVar8 & 1) != 0);
      }
      return uVar19;
    }
    uVar19 = (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))(puVar7,uVar11,uVar12);
    uVar23 = uVar2;
    if ((uVar19 & 1) == 0) break;
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto code_r0x01875148;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x01875148:
    uVar11 = (*(code *)*puVar15)(plVar9,iVar6,puVar15[1]);
    lVar22 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar22);
    }
    lVar18 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar22) {
          puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto code_r0x018751c4;
        }
        piVar20 = piVar20 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,1);
code_r0x018751c4:
    uVar10 = puVar15[1];
    (*(code *)*puVar15)(plVar9,uVar2 + iVar5,uVar11);
    uVar2 = (int)uVar3 >> 1;
  }
  lVar21 = **(long **)(lVar21 + 0x30);
  if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar21);
  }
  lVar17 = *plVar9;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == lVar21) {
        puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto code_r0x01875254;
      }
      piVar20 = piVar20 + 4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar21,1);
code_r0x01875254:
                    /* WARNING: Could not recover jumptable at 0x01875280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar19 = (*(code *)*puVar7)(plVar9,uVar23 + iVar5,uVar12,puVar7[1]);
  return uVar19;
}



