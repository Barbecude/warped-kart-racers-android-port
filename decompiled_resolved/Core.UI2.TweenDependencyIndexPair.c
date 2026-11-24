// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.TweenDependencyIndexPair

// ============================================================
// RVA: 0x2f82c40 | Core.UI2.TweenDependencyIndexPair.IsEmpty
// ============================================================

bool Core_UI2_TweenDependencyIndexPair__IsEmpty(long param_1)

{
  if ((bRam0000000003ebc629 & 1) == 0) {
    func_0x00f78a20(0x3d40e00);
    func_0x00f78a20(0x3d40e08);
    bRam0000000003ebc629 = 1;
  }
  return *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x2f83324 | Core.UI2.TweenDependencyIndexPair..ctor
// ============================================================

undefined8 Core_UI2_TweenDependencyIndexPair___ctor(long param_1,undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined4 uStack_238;
  undefined4 uStack_234;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long *plStack_218;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 ***pppuStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003ebc627 & 1) == 0) {
    func_0x00f78a20(0x3d40df0);
    bRam0000000003ebc627 = 1;
  }
  if (param_1 != 0) {
    uVar1 = /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0x14) = (int)param_3;
    return uVar1;
  }
  lVar10 = lRam0000000003d40df0;
  auVar16 = func_0x00f78af4();
  plVar7 = auVar16._0_8_;
  if ((bRam0000000003eb8ab1 & 1) == 0) {
    func_0x00f78a20(0x3d22590);
    func_0x00f78a20(0x3d239a0);
    bRam0000000003eb8ab1 = 1;
  }
  if (((*(ushort *)(/*System.Collections.Generic.ObjectEqualityComparer_TypeInfo*/ lRam0000000003d239a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Collections.Generic.ObjectEqualityComparer_TypeInfo*/ lRam0000000003d239a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (plVar7 != (long *)0x0) {
    uVar1 = **(undefined8 **)(/*System.Collections.Generic.ObjectEqualityComparer_TypeInfo*/ lRam0000000003d239a0 + 0xb8);
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.Collections.IStructuralEquatable_TypeInfo*/ lRam0000000003d22590) {
          puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x02887e38;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IStructuralEquatable_TypeInfo*/ lRam0000000003d22590,0);
code_r0x02887e38:
                    /* WARNING: Could not recover jumptable at 0x02887e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*puVar2)(plVar7,auVar16._8_8_,uVar1,puVar2[1]);
    return uVar1;
  }
  auVar16 = func_0x00f78af4();
  lVar3 = auVar16._0_8_;
  puStack_68 = &System_Tuple_int__int___System_Collections_IStructuralEquatable_Equals;
  plVar7 = param_3;
  lVar11 = lVar10;
  puStack_70 = &stack0xffffffffffffffc0;
  if ((bRam0000000003eb8ab2 & 1) == 0) {
    func_0x00f78a20(0x3d22190);
    bRam0000000003eb8ab2 = 1;
  }
  if (auVar16._8_8_ == 0) {
    uVar1 = 0;
  }
  else {
    lVar14 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    lVar14 = func_0x00f78adc(auVar16._8_8_,lVar14);
    uVar1 = 0;
    if (lVar14 != 0) {
      uStack_b4 = *(undefined4 *)(lVar3 + 0x10);
      lVar15 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 8);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      uVar1 = func_0x00f78ae0(lVar15,&uStack_b4);
      uStack_b8 = *(undefined4 *)(lVar14 + 0x10);
      lVar15 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 8);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      uVar4 = func_0x00f78ae0(lVar15,&uStack_b8);
      if (param_3 == (long *)0x0) {
        auVar16 = func_0x00f78af4();
        plVar6 = auVar16._0_8_;
        puStack_c8 = &System_Tuple_int__int___System_IComparable_CompareTo;
        lStack_f0 = lVar14;
        lStack_e8 = lVar3;
        lStack_e0 = lVar10;
        plStack_d8 = param_3;
        ppuStack_d0 = &puStack_70;
        if ((bRam0000000003eb8ab3 & 1) == 0) {
          func_0x00f78a20(0x3d22588);
          func_0x00f78a20(0x3d23168);
          bRam0000000003eb8ab3 = 1;
        }
        if (((*(ushort *)(/*System.Collections.LowLevelComparer_TypeInfo*/ lRam0000000003d23168 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Collections.LowLevelComparer_TypeInfo*/ lRam0000000003d23168 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (plVar6 != (long *)0x0) {
          uVar1 = **(undefined8 **)(/*System.Collections.LowLevelComparer_TypeInfo*/ lRam0000000003d23168 + 0xb8);
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IStructuralComparable_TypeInfo*/ lRam0000000003d22588) {
                puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x0288816c;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IStructuralComparable_TypeInfo*/ lRam0000000003d22588,0);
code_r0x0288816c:
                    /* WARNING: Could not recover jumptable at 0x02888188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*(code *)*puVar2)(plVar6,auVar16._8_8_,uVar1,puVar2[1]);
          return uVar1;
        }
        auVar16 = func_0x00f78af4();
        lVar10 = auVar16._8_8_;
        lVar3 = auVar16._0_8_;
        puStack_f8 = &System_Tuple_int__int___System_Collections_IStructuralComparable_CompareTo;
        plVar6 = plVar7;
        pppuStack_100 = &ppuStack_d0;
        if ((bRam0000000003eb8ab4 & 1) == 0) {
          func_0x00f78a20(0x3d21fe0);
          bRam0000000003eb8ab4 = 1;
        }
        if (lVar10 == 0) {
          return 1;
        }
        lVar14 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar5 = func_0x00f78adc(lVar10,lVar14);
        if (lVar5 == 0) {
          func_0x00055e5c(lVar3);
          plVar7 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar3,0);
          func_0x00055e5c();
          uVar1 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          uVar4 = func_0x00f78a24(0x3d69100);
          uVar1 = /*SR$$Format*/ func_0x029a92c4(uVar4,uVar1,0);
          func_0x00f78a24(0x3d1fce8);
          lVar11 = func_0x00f78aec();
          plVar6 = (long *)func_0x00f78a24(0x3d7ae10);
          /*System.ArgumentException$$.ctor*/ func_0x02920824(lVar11,uVar1,plVar6,0);
          uVar4 = func_0x00f78a24(0x3d40df8);
          func_0x00f78ac0(lVar11,uVar4);
        }
        else {
          uStack_144 = *(undefined4 *)(lVar3 + 0x10);
          lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 8);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          lVar14 = func_0x00f78ae0(lVar10,&uStack_144);
          uStack_148 = *(undefined4 *)(lVar5 + 0x10);
          lVar15 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 8);
          if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar15);
          }
          uVar4 = func_0x00f78ae0(lVar15,&uStack_148);
          uVar1 = 0;
          lVar10 = lVar5;
          if (plVar7 != (long *)0x0) {
            lVar10 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == /*System.Collections.IComparer_TypeInfo*/ lRam0000000003d21fe0) {
                  puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto code_r0x028882d8;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar2 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IComparer_TypeInfo*/ lRam0000000003d21fe0,0);
code_r0x028882d8:
            uVar1 = (*(code *)*puVar2)(plVar7,lVar14,uVar4,puVar2[1]);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            uStack_144 = *(undefined4 *)(lVar3 + 0x14);
            lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0x10);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            uVar1 = func_0x00f78ae0(lVar10,&uStack_144);
            uStack_148 = *(undefined4 *)(lVar5 + 0x14);
            lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0x10);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            uVar4 = func_0x00f78ae0(lVar10,&uStack_148);
            lVar10 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == /*System.Collections.IComparer_TypeInfo*/ lRam0000000003d21fe0) {
                  puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto code_r0x028883a4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar2 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IComparer_TypeInfo*/ lRam0000000003d21fe0,0);
code_r0x028883a4:
            uVar1 = (*(code *)*puVar2)(plVar7,uVar1,uVar4,puVar2[1]);
            return uVar1;
          }
        }
        plVar7 = (long *)func_0x00f78af4();
        puStack_158 = &System_Tuple_int__int___GetHashCode;
        lStack_180 = lVar10;
        lStack_178 = lVar3;
        lStack_170 = lVar11;
        uStack_168 = uVar1;
        pppuStack_160 = &pppuStack_100;
        if ((bRam0000000003eb8ab5 & 1) == 0) {
          func_0x00f78a20(0x3d22590);
          func_0x00f78a20(0x3d239a0);
          bRam0000000003eb8ab5 = 1;
        }
        if (((*(ushort *)(/*System.Collections.Generic.ObjectEqualityComparer_TypeInfo*/ lRam0000000003d239a0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Collections.Generic.ObjectEqualityComparer_TypeInfo*/ lRam0000000003d239a0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (plVar7 == (long *)0x0) {
          auVar16 = func_0x00f78af4();
          plVar8 = auVar16._8_8_;
          lVar11 = auVar16._0_8_;
          uStack_1a8 = 0x3eb8000;
          uStack_1a0 = 0x3d239a0;
          puStack_188 = &System_Tuple_int__int___System_Collections_IStructuralEquatable_GetHashCode
          ;
          plVar9 = plVar6;
          lStack_1c0 = lVar15;
          lStack_1b8 = lVar14;
          lStack_1b0 = lVar10;
          plStack_198 = plVar7;
          pppuStack_190 = &pppuStack_160;
          if ((bRam0000000003eb8ab6 & 1) == 0) {
            func_0x00f78a20(0x3d22190);
            bRam0000000003eb8ab6 = 1;
          }
          uStack_1c4 = *(undefined4 *)(lVar11 + 0x10);
          lVar10 = *(long *)(*(long *)(plVar6[3] + 0xc0) + 8);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          uVar1 = func_0x00f78ae0(lVar10,&uStack_1c4);
          if (plVar8 == (long *)0x0) {
            plVar7 = (long *)func_0x00f78af4();
            puStack_1d8 = &System_Tuple_int__int___ToString;
            lStack_200 = lVar10;
            plStack_1f0 = plVar6;
            pppuStack_1e0 = &pppuStack_190;
            if ((bRam0000000003eb8ab7 & 1) == 0) {
              lStack_1f8 = lVar11;
              plStack_1e8 = plVar8;
              func_0x00f78a20(0x3d22600);
              func_0x00f78a20(0x3d24dd8);
              func_0x00f78a20(0x3d66dc0);
              auVar16._8_8_ = plStack_1e8;
              auVar16._0_8_ = lStack_1f8;
              bRam0000000003eb8ab7 = 1;
            }
            plStack_1e8 = auVar16._8_8_;
            lStack_1f8 = auVar16._0_8_;
            lVar11 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
            /*System.Text.StringBuilder$$.ctor*/ func_0x029d178c(lVar11,0);
            if (lVar11 != 0) {
              plVar9 = (long *)0x0;
              /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar11,/*STR('(')*/ uRam0000000003d66dc0);
              if (plVar7 != (long *)0x0) {
                lVar10 = *plVar7;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == /*System.ITupleInternal_TypeInfo*/ lRam0000000003d22600) {
                      puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                      goto code_r0x028887dc;
                    }
                    piVar13 = piVar13 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar2 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.ITupleInternal_TypeInfo*/ lRam0000000003d22600,0);
code_r0x028887dc:
                    /* WARNING: Could not recover jumptable at 0x028887f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar1 = (*(code *)*puVar2)(plVar7,lVar11,puVar2[1]);
                return uVar1;
              }
            }
            auVar16 = func_0x00f78af4();
            plVar6 = auVar16._8_8_;
            uStack_228 = 0x3d24dd8;
            puStack_208 = &System_Tuple_int__int___System_ITupleInternal_ToString;
            lStack_230 = lVar10;
            lStack_220 = lVar11;
            plStack_218 = plVar7;
            pppuStack_210 = &pppuStack_1e0;
            if ((bRam0000000003eb8ab8 & 1) == 0) {
              func_0x00f78a20(0x3d66fe8);
              bRam0000000003eb8ab8 = 1;
            }
            uStack_234 = *(undefined4 *)(auVar16._0_8_ + 0x10);
            lVar10 = *(long *)(*(long *)(plVar9[3] + 0xc0) + 8);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            uVar1 = func_0x00f78ae0(lVar10,&uStack_234);
            if (plVar6 == (long *)0x0) {
              func_0x00f78af4();
              return 2;
            }
            /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(plVar6,uVar1,0);
            /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar6,/*STR(', ')*/ uRam0000000003d66fe8,0);
            uStack_238 = *(undefined4 *)(auVar16._0_8_ + 0x14);
            lVar10 = *(long *)(*(long *)(plVar9[3] + 0xc0) + 0x10);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            uVar1 = func_0x00f78ae0(lVar10,&uStack_238);
            /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(plVar6,uVar1,0);
            /*System.Text.StringBuilder$$Append*/ func_0x029d3800(plVar6,0x29,0);
            uVar1 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            return uVar1;
          }
          lVar10 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190) {
                puVar2 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto code_r0x0288862c;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar2 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190,1);
code_r0x0288862c:
          uVar1 = (*(code *)*puVar2)(plVar8,uVar1,puVar2[1]);
          uStack_1c8 = *(undefined4 *)(lVar11 + 0x14);
          lVar10 = *(long *)(*(long *)(plVar6[3] + 0xc0) + 0x10);
          if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar10);
          }
          uVar4 = func_0x00f78ae0(lVar10,&uStack_1c8);
          lVar10 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190) {
                puVar2 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto code_r0x028886c4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar2 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190,1);
code_r0x028886c4:
          uVar4 = (*(code *)*puVar2)(plVar8,uVar4,puVar2[1]);
          uVar1 = /*System.Tuple$$CombineHashCodes*/ func_0x02a02644(uVar1,uVar4,0);
          return uVar1;
        }
        uVar1 = **(undefined8 **)(/*System.Collections.Generic.ObjectEqualityComparer_TypeInfo*/ lRam0000000003d239a0 + 0xb8);
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IStructuralEquatable_TypeInfo*/ lRam0000000003d22590) {
              puVar2 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto code_r0x02888538;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IStructuralEquatable_TypeInfo*/ lRam0000000003d22590,1);
code_r0x02888538:
                    /* WARNING: Could not recover jumptable at 0x02888550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
        return uVar1;
      }
      lVar11 = *param_3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190) {
            puVar2 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x02887fa4;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_3,/*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190,0);
code_r0x02887fa4:
      uVar1 = (*(code *)*puVar2)(param_3,uVar1,uVar4,puVar2[1]);
      if ((int)uVar1 != 0) {
        uStack_b4 = *(undefined4 *)(lVar3 + 0x14);
        lVar11 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        uVar1 = func_0x00f78ae0(lVar11,&uStack_b4);
        uStack_b8 = *(undefined4 *)(lVar14 + 0x14);
        lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        uVar4 = func_0x00f78ae0(lVar10,&uStack_b8);
        lVar10 = *param_3;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190) {
              puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x02888070;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(param_3,/*System.Collections.IEqualityComparer_TypeInfo*/ lRam0000000003d22190,0);
code_r0x02888070:
        uVar1 = (*(code *)*puVar2)(param_3,uVar1,uVar4,puVar2[1]);
      }
    }
  }
  return uVar1;
}



// ============================================================
// RVA: 0x2f83390 | Core.UI2.TweenDependencyIndexPair.CreateEmpty
// ============================================================

undefined8 Core_UI2_TweenDependencyIndexPair__CreateEmpty(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003ebc628 & 1) == 0) {
    func_0x00f78a20(0x3d25430);
    bRam0000000003ebc628 = 1;
  }
  uVar1 = func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  Core_UI2_TweenDependencyIndexPair___ctor(uVar1,param_1,param_1);
  return uVar1;
}



