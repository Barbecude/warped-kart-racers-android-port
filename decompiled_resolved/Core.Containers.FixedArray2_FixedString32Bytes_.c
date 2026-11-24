// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.FixedArray2<FixedString32Bytes>

// ============================================================
// RVA: 0x2143ff4 | Core.Containers.FixedArray2<FixedString32Bytes>.get_Length
// ============================================================

undefined8 Core_Containers_FixedArray2_FixedString32Bytes___get_Length(void)

{
  return 2;
}



// ============================================================
// RVA: 0x2143ffc | Core.Containers.FixedArray2<FixedString32Bytes>.get_Item
// ============================================================

void Core_Containers_FixedArray2_FixedString32Bytes___get_Item
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x18);
  uVar1 = *(ushort *)(lVar3 + 0x132);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar3);
    lVar2 = *(long *)(param_3 + 0x18);
    uVar1 = *(ushort *)(lVar2 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 8);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x02144084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
  return;
}



// ============================================================
// RVA: 0x2144088 | Core.Containers.FixedArray2<FixedString32Bytes>.op_Explicit
// ============================================================

void Core_Containers_FixedArray2_FixedString32Bytes___op_Explicit
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar3 = *(long *)PTR_03a5d648;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x18) != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      uVar8 = *(undefined8 *)(param_2 + 0x38);
      uVar6 = *(undefined8 *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x18) != 1) {
        uVar9 = *(undefined8 *)(param_2 + 0x48);
        uVar7 = *(undefined8 *)(param_2 + 0x40);
        uVar5 = *(undefined8 *)(param_2 + 0x58);
        uVar4 = *(undefined8 *)(param_2 + 0x50);
        param_1[1] = *(undefined8 *)(param_2 + 0x28);
        *param_1 = uVar1;
        param_1[3] = uVar8;
        param_1[2] = uVar6;
        param_1[5] = uVar9;
        param_1[4] = uVar7;
        param_1[7] = uVar5;
        param_1[6] = uVar4;
        if (*(long *)PTR_03a5d648 == lVar3) {
          return;
        }
        goto LAB_02144104;
      }
    }
    uVar1 = func_0x00f78b24();
    func_0x00f78ac0(uVar1,0);
  }
  func_0x00f78af4();
LAB_02144104:
  auVar10 = ___stack_chk_fail();
  lVar3 = *(long *)(param_4 + 0x18);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  puVar2 = (undefined8 *)
           Core_Containers_FixedArray2_FixedString32Bytes___get_Item
                     (auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
  uVar1 = *puVar2;
  uVar8 = puVar2[3];
  uVar6 = puVar2[2];
  extraout_x8[1] = puVar2[1];
  *extraout_x8 = uVar1;
  extraout_x8[3] = uVar8;
  extraout_x8[2] = uVar6;
  return;
}



// ============================================================
// RVA: 0x2144108 | Core.Containers.FixedArray2<FixedString32Bytes>.Get
// ============================================================

void Core_Containers_FixedArray2_FixedString32Bytes___Get
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_4 + 0x18);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  puVar1 = (undefined8 *)
           Core_Containers_FixedArray2_FixedString32Bytes___get_Item
                     (param_2,param_3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
  uVar3 = *puVar1;
  uVar5 = puVar1[3];
  uVar4 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  return;
}



// ============================================================
// RVA: 0x2144164 | Core.Containers.FixedArray2<FixedString32Bytes>.Set
// ============================================================

void Core_Containers_FixedArray2_FixedString32Bytes___Set
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_4 + 0x18);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  puVar1 = (undefined8 *)
           Core_Containers_FixedArray2_FixedString32Bytes___get_Item
                     (param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
  uVar5 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  return;
}



// ============================================================
// RVA: 0x21441c0 | Core.Containers.FixedArray2<FixedString32Bytes>.ToString
// ============================================================

undefined8 * Core_Containers_FixedArray2_FixedString32Bytes___ToString(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar11;
  ulong unaff_x21;
  uint uVar12;
  ulong unaff_x22;
  long lVar13;
  uint uVar14;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  if ((bRam0000000003eb7af1 & 1) == 0) {
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66fe8);
    func_0x00f78a20(0x3d6ce60);
    func_0x00f78a20(0x3d66ef8);
    bRam0000000003eb7af1 = 1;
  }
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  if (plVar2 == (long *)0x0) goto LAB_02144368;
  if ((/*STR('FixedArray2(')*/ lRam0000000003d6ce60 == 0) ||
     (lVar3 = func_0x00f78adc(/*STR('FixedArray2(')*/ lRam0000000003d6ce60,*(undefined8 *)(*plVar2 + 0x40)), lVar3 != 0)) {
    if ((int)plVar2[3] != 0) {
      plVar2[4] = /*STR('FixedArray2(')*/ lRam0000000003d6ce60;
      lVar3 = /*Unity.Collections.FixedString32Bytes$$ToString*/ func_0x02fd65dc(param_1,0);
      if ((lVar3 != 0) &&
         (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_0214435c;
      uVar12 = (uint)plVar2[3];
      if ((plVar2[3] & 0xfffffffeU) != 0) {
        plVar2[5] = lVar3;
        if (/*STR(', ')*/ lRam0000000003d66fe8 != 0) {
          lVar3 = func_0x00f78adc(/*STR(', ')*/ lRam0000000003d66fe8,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar3 == 0) goto LAB_0214435c;
          uVar12 = (uint)plVar2[3];
        }
        if (2 < uVar12) {
          plVar2[6] = /*STR(', ')*/ lRam0000000003d66fe8;
          lVar3 = /*Unity.Collections.FixedString32Bytes$$ToString*/ func_0x02fd65dc(param_1 + 0x20,0);
          if ((lVar3 != 0) &&
             (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_0214435c;
          uVar12 = (uint)plVar2[3];
          if ((plVar2[3] & 0xfffffffcU) != 0) {
            plVar2[7] = lVar3;
            if (/*STR(')')*/ lRam0000000003d66ef8 != 0) {
              lVar3 = func_0x00f78adc(/*STR(')')*/ lRam0000000003d66ef8,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar3 == 0) goto LAB_0214435c;
              uVar12 = (uint)plVar2[3];
            }
            if (4 < uVar12) {
              plVar2[8] = /*STR(')')*/ lRam0000000003d66ef8;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = plVar2;
              puVar1 = (undefined1 *)register0x00000008;
              do {
                lVar3 = auVar16._0_8_;
                *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                *(long **)(puVar1 + -0x38) = unaff_x23;
                *(ulong *)(puVar1 + -0x30) = unaff_x22;
                *(ulong *)(puVar1 + -0x28) = unaff_x21;
                *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
                *(long **)(puVar1 + -0x18) = unaff_x19;
                *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
                *(undefined **)(puVar1 + -8) = unaff_x30;
                if ((bRam0000000003eb946a & 1) == 0) {
                  func_0x00f78a20(0x3d1f498,auVar16._8_8_);
                  func_0x00f78a20(0x3d24dd0);
                  bRam0000000003eb946a = 1;
                }
                if (lVar3 == 0) goto code_r0x029cfc54;
                unaff_x19 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,
                                                    *(undefined4 *)(lVar3 + 0x18));
                uVar12 = *(uint *)(lVar3 + 0x18);
                if ((int)uVar12 < 1) {
                  iVar11 = 0;
                }
                else {
                  lVar4 = 0;
                  iVar11 = 0;
                  do {
                    uVar14 = (uint)lVar4;
                    if (uVar12 <= uVar14) {
code_r0x029cfc0c:
                      uVar6 = func_0x00f78b24();
code_r0x029cfc18:
                      func_0x00f78ac0(uVar6,0);
code_r0x029cfc20:
                      func_0x00f78a24(0x3d23ae8);
                      uVar6 = func_0x00f78aec();
                      /*System.OutOfMemoryException$$.ctor*/ func_0x02965294(uVar6,0);
                      do {
                        uVar8 = func_0x00f78a24(0x3d5da90);
                        func_0x00f78ac0(uVar6,uVar8);
code_r0x029cfc54:
                        func_0x00f78a24(0x3d1fcf0);
                        uVar6 = func_0x00f78aec();
                        uVar8 = func_0x00f78a24(0x3d7c5e8);
                        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar6,uVar8,0);
                      } while( true );
                    }
                    lVar13 = *(long *)(lVar3 + (lVar4 + 4) * 8);
                    if (lVar13 == 0) {
                      lVar13 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                    }
                    if (unaff_x19 == (long *)0x0) {
                      func_0x00f78af4();
code_r0x029cfbf4:
                      if (uVar14 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[lVar4 + 4] = lVar13;
                        func_0x00f78af4();
                      }
                      goto code_r0x029cfc0c;
                    }
                    if (lVar13 == 0) goto code_r0x029cfbf4;
                    lVar7 = func_0x00f78adc(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar7 == 0) {
                      uVar6 = func_0x00f78b14();
                      goto code_r0x029cfc18;
                    }
                    if (*(uint *)(unaff_x19 + 3) <= uVar14) goto code_r0x029cfc0c;
                    unaff_x19[lVar4 + 4] = lVar13;
                    iVar11 = *(int *)(lVar13 + 0x10) + iVar11;
                    if (iVar11 < 0) goto code_r0x029cfc20;
                    uVar12 = *(uint *)(lVar3 + 0x18);
                    lVar4 = lVar4 + 1;
                  } while ((int)lVar4 < (int)uVar12);
                }
                unaff_x20 = *(undefined8 **)(puVar1 + -0x20);
                unaff_x22 = *(ulong *)(puVar1 + -0x30);
                unaff_x21 = *(ulong *)(puVar1 + -0x28);
                unaff_x24 = *(undefined8 *)(puVar1 + -0x40);
                unaff_x23 = *(long **)(puVar1 + -0x38);
                unaff_x26 = *(undefined8 *)(puVar1 + -0x50);
                unaff_x25 = *(undefined8 *)(puVar1 + -0x48);
                *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                *(long **)(puVar1 + -0x38) = unaff_x23;
                *(ulong *)(puVar1 + -0x30) = unaff_x22;
                *(ulong *)(puVar1 + -0x28) = unaff_x21;
                *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
                *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
                *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
                *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
                unaff_x29 = puVar1 + -0x10;
                puVar5 = (undefined8 *)func_0x00f834ac(iVar11);
                if (unaff_x19 != (long *)0x0) {
                  uVar10 = (ulong)*(uint *)(unaff_x19 + 3);
                  if ((int)*(uint *)(unaff_x19 + 3) < 1) {
                    return puVar5;
                  }
                  unaff_x22 = 0;
                  unaff_x21 = 0;
                  while (uVar12 = (uint)unaff_x22, unaff_x20 = puVar5, uVar12 < (uint)uVar10) {
                    unaff_x23 = unaff_x19 + (long)(int)uVar12 + 4;
                    /*System.String$$FillStringChecked*/ func_0x029cc26c(puVar5,unaff_x21,*unaff_x23);
                    uVar10 = unaff_x19[3];
                    if ((uint)uVar10 <= uVar12) break;
                    if (*unaff_x23 == 0) goto code_r0x029cfad8;
                    unaff_x21 = (ulong)(uint)(*(int *)(*unaff_x23 + 0x10) + (int)unaff_x21);
                    unaff_x22 = (ulong)(uVar12 + 1);
                    if ((int)(uint)uVar10 <= (int)(uVar12 + 1)) {
                      return puVar5;
                    }
                  }
                  uVar6 = func_0x00f78b24();
                  func_0x00f78ac0(uVar6,0);
                }
code_r0x029cfad8:
                unaff_x30 = &System_String__Concat;
                auVar16 = func_0x00f78af4();
                puVar1 = puVar1 + -0x40;
              } while( true );
            }
          }
        }
      }
    }
    uVar6 = func_0x00f78b24();
  }
  else {
LAB_0214435c:
    uVar6 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar6,0);
LAB_02144368:
  auVar16 = func_0x00f78af4();
  puVar9 = auVar16._8_8_;
  puVar5 = auVar16._0_8_;
  uVar6 = *puVar9;
  uVar15 = puVar9[3];
  uVar8 = puVar9[2];
  puVar5[1] = puVar9[1];
  *puVar5 = uVar6;
  puVar5[3] = uVar15;
  puVar5[2] = uVar8;
  uVar6 = *puVar9;
  uVar15 = puVar9[3];
  uVar8 = puVar9[2];
  puVar5[5] = puVar9[1];
  puVar5[4] = uVar6;
  puVar5[7] = uVar15;
  puVar5[6] = uVar8;
  return puVar5;
}



// ============================================================
// RVA: 0x214436c | Core.Containers.FixedArray2<FixedString32Bytes>..ctor
// ============================================================

void Core_Containers_FixedArray2_FixedString32Bytes____ctor(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[5] = param_2[1];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  return;
}



