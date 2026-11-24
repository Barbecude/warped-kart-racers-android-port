// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.FixedArray4<FixedString32Bytes>

// ============================================================
// RVA: 0x2144380 | Core.Containers.FixedArray4<FixedString32Bytes>.get_Length
// ============================================================

undefined8 Core_Containers_FixedArray4_FixedString32Bytes___get_Length(void)

{
  return 4;
}



// ============================================================
// RVA: 0x2144388 | Core.Containers.FixedArray4<FixedString32Bytes>.get_Item
// ============================================================

void Core_Containers_FixedArray4_FixedString32Bytes___get_Item
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
                    /* WARNING: Could not recover jumptable at 0x02144410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
  return;
}



// ============================================================
// RVA: 0x2144414 | Core.Containers.FixedArray4<FixedString32Bytes>..ctor
// ============================================================

void Core_Containers_FixedArray4_FixedString32Bytes____ctor
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
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
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_148;
  
  lVar5 = *(long *)PTR_03a5d648;
  uVar8 = param_2[1];
  uVar3 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  lVar7 = param_3;
  if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  param_1[1] = uVar8;
  *param_1 = uVar3;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[5] = uVar8;
  param_1[4] = uVar3;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  uVar10 = param_2[1];
  uVar9 = *param_2;
  uVar8 = param_2[3];
  uVar3 = param_2[2];
  if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
    func_0x00fac028();
  }
  param_1[9] = uVar10;
  param_1[8] = uVar9;
  param_1[0xb] = uVar8;
  param_1[10] = uVar3;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar3;
  if (*(long *)PTR_03a5d648 == lVar5) {
    return;
  }
  auVar11 = ___stack_chk_fail();
  puVar1 = auVar11._0_8_;
  uVar6 = 0;
  lStack_148 = *(long *)PTR_03a5d648;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar4 = puVar1;
  while( true ) {
    if ((*(ushort *)(*(long *)(auVar11._8_8_ + 0x18) + 0x132) & 1) == 0) {
      func_0x00fac028();
    }
    if (uVar6 == 4) {
      extraout_x8[9] = uStack_188;
      extraout_x8[8] = uStack_190;
      extraout_x8[0xb] = uStack_178;
      extraout_x8[10] = uStack_180;
      extraout_x8[0xd] = uStack_168;
      extraout_x8[0xc] = uStack_170;
      extraout_x8[0xf] = uStack_158;
      extraout_x8[0xe] = uStack_160;
      extraout_x8[1] = uStack_1c8;
      *extraout_x8 = uStack_1d0;
      extraout_x8[3] = uStack_1b8;
      extraout_x8[2] = uStack_1c0;
      extraout_x8[5] = uStack_1a8;
      extraout_x8[4] = uStack_1b0;
      extraout_x8[7] = uStack_198;
      extraout_x8[6] = uStack_1a0;
      if (*(long *)PTR_03a5d648 == lStack_148) {
        return;
      }
      goto code_r0x021445d4;
    }
    lVar7 = *(long *)(auVar11._8_8_ + 0x18);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    puVar2 = (undefined8 *)
             Core_Containers_FixedArray4_FixedString32Bytes___get_Item(&uStack_1d0,uVar6);
    if (puVar1 == (undefined8 *)0x0) break;
    if (*(uint *)(puVar1 + 3) <= uVar6) goto code_r0x021445c8;
    uVar3 = puVar4[4];
    uVar9 = puVar4[7];
    uVar8 = puVar4[6];
    puVar2[1] = puVar4[5];
    *puVar2 = uVar3;
    puVar2[3] = uVar9;
    puVar2[2] = uVar8;
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 4;
  }
  func_0x00f78af4();
code_r0x021445c8:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
code_r0x021445d4:
  auVar11 = ___stack_chk_fail();
  lVar7 = *(long *)(lVar7 + 0x18);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  puVar4 = (undefined8 *)
           Core_Containers_FixedArray4_FixedString32Bytes___get_Item
                     (auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
  uVar3 = *puVar4;
  uVar9 = puVar4[3];
  uVar8 = puVar4[2];
  extraout_x8_00[1] = puVar4[1];
  *extraout_x8_00 = uVar3;
  extraout_x8_00[3] = uVar9;
  extraout_x8_00[2] = uVar8;
  return;
}



// ============================================================
// RVA: 0x21444c4 | Core.Containers.FixedArray4<FixedString32Bytes>.op_Explicit
// ============================================================

void Core_Containers_FixedArray4_FixedString32Bytes___op_Explicit
               (undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
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
  long lStack_48;
  
  uVar4 = 0;
  lStack_48 = *(long *)PTR_03a5d648;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  puVar3 = param_2;
  while( true ) {
    if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
      func_0x00fac028();
    }
    if (uVar4 == 4) {
      param_1[9] = uStack_88;
      param_1[8] = uStack_90;
      param_1[0xb] = uStack_78;
      param_1[10] = uStack_80;
      param_1[0xd] = uStack_68;
      param_1[0xc] = uStack_70;
      param_1[0xf] = uStack_58;
      param_1[0xe] = uStack_60;
      param_1[1] = uStack_c8;
      *param_1 = uStack_d0;
      param_1[3] = uStack_b8;
      param_1[2] = uStack_c0;
      param_1[5] = uStack_a8;
      param_1[4] = uStack_b0;
      param_1[7] = uStack_98;
      param_1[6] = uStack_a0;
      if (*(long *)PTR_03a5d648 == lStack_48) {
        return;
      }
      goto code_r0x021445d4;
    }
    lVar5 = *(long *)(param_3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    param_4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    puVar1 = (undefined8 *)
             Core_Containers_FixedArray4_FixedString32Bytes___get_Item(&uStack_d0,uVar4);
    if (param_2 == (undefined8 *)0x0) break;
    if (*(uint *)(param_2 + 3) <= uVar4) goto LAB_021445c8;
    uVar2 = puVar3[4];
    uVar7 = puVar3[7];
    uVar6 = puVar3[6];
    puVar1[1] = puVar3[5];
    *puVar1 = uVar2;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 4;
  }
  func_0x00f78af4();
LAB_021445c8:
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
code_r0x021445d4:
  auVar8 = ___stack_chk_fail();
  lVar5 = *(long *)(param_4 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  puVar3 = (undefined8 *)
           Core_Containers_FixedArray4_FixedString32Bytes___get_Item
                     (auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
  uVar2 = *puVar3;
  uVar7 = puVar3[3];
  uVar6 = puVar3[2];
  extraout_x8[1] = puVar3[1];
  *extraout_x8 = uVar2;
  extraout_x8[3] = uVar7;
  extraout_x8[2] = uVar6;
  return;
}



// ============================================================
// RVA: 0x21445d8 | Core.Containers.FixedArray4<FixedString32Bytes>.Get
// ============================================================

void Core_Containers_FixedArray4_FixedString32Bytes___Get
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
           Core_Containers_FixedArray4_FixedString32Bytes___get_Item
                     (param_2,param_3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20));
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
// RVA: 0x2144634 | Core.Containers.FixedArray4<FixedString32Bytes>.Set
// ============================================================

void Core_Containers_FixedArray4_FixedString32Bytes___Set
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
           Core_Containers_FixedArray4_FixedString32Bytes___get_Item
                     (param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20));
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
// RVA: 0x2144690 | Core.Containers.FixedArray4<FixedString32Bytes>.ToString
// ============================================================

undefined8 Core_Containers_FixedArray4_FixedString32Bytes___ToString(long param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  int iVar9;
  ulong unaff_x21;
  uint uVar10;
  ulong unaff_x22;
  long lVar11;
  uint uVar12;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar13 [16];
  
  if ((bRam0000000003eb7af2 & 1) == 0) {
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6ce68);
    func_0x00f78a20(0x3d66fe8);
    func_0x00f78a20(0x3d66ef8);
    bRam0000000003eb7af2 = 1;
  }
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  if (plVar2 == (long *)0x0) goto LAB_021448a0;
  if ((/*STR('FixedArray4(')*/ lRam0000000003d6ce68 == 0) ||
     (lVar3 = func_0x00f78adc(/*STR('FixedArray4(')*/ lRam0000000003d6ce68,*(undefined8 *)(*plVar2 + 0x40)), lVar3 != 0)) {
    if ((int)plVar2[3] != 0) {
      plVar2[4] = /*STR('FixedArray4(')*/ lRam0000000003d6ce68;
      lVar3 = *(long *)(param_2 + 0x18);
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      lVar3 = (**(code **)(lVar3 + 0x168))(param_1 + -0x10,*(undefined8 *)(lVar3 + 0x170));
      if ((lVar3 != 0) &&
         (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_02144894;
      uVar10 = (uint)plVar2[3];
      if ((plVar2[3] & 0xfffffffeU) != 0) {
        plVar2[5] = lVar3;
        if (/*STR(', ')*/ lRam0000000003d66fe8 != 0) {
          lVar3 = func_0x00f78adc(/*STR(', ')*/ lRam0000000003d66fe8,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar3 == 0) goto LAB_02144894;
          uVar10 = (uint)plVar2[3];
        }
        if (2 < uVar10) {
          plVar2[6] = /*STR(', ')*/ lRam0000000003d66fe8;
          lVar3 = *(long *)(param_2 + 0x18);
          if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar3);
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar3);
          }
          lVar3 = (**(code **)(lVar3 + 0x168))(param_1 + 0x30,*(undefined8 *)(lVar3 + 0x170));
          if ((lVar3 != 0) &&
             (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_02144894;
          uVar10 = (uint)plVar2[3];
          if ((plVar2[3] & 0xfffffffcU) != 0) {
            plVar2[7] = lVar3;
            if (/*STR(')')*/ lRam0000000003d66ef8 != 0) {
              lVar3 = func_0x00f78adc(/*STR(')')*/ lRam0000000003d66ef8,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar3 == 0) goto LAB_02144894;
              uVar10 = (uint)plVar2[3];
            }
            if (4 < uVar10) {
              plVar2[8] = /*STR(')')*/ lRam0000000003d66ef8;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = plVar2;
              puVar1 = (undefined1 *)register0x00000008;
              do {
                lVar3 = auVar13._0_8_;
                *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                *(long **)(puVar1 + -0x38) = unaff_x23;
                *(ulong *)(puVar1 + -0x30) = unaff_x22;
                *(ulong *)(puVar1 + -0x28) = unaff_x21;
                *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
                *(long **)(puVar1 + -0x18) = unaff_x19;
                *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
                *(undefined **)(puVar1 + -8) = unaff_x30;
                if ((bRam0000000003eb946a & 1) == 0) {
                  func_0x00f78a20(0x3d1f498,auVar13._8_8_);
                  func_0x00f78a20(0x3d24dd0);
                  bRam0000000003eb946a = 1;
                }
                if (lVar3 == 0) goto code_r0x029cfc54;
                unaff_x19 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,
                                                    *(undefined4 *)(lVar3 + 0x18));
                uVar10 = *(uint *)(lVar3 + 0x18);
                if ((int)uVar10 < 1) {
                  iVar9 = 0;
                }
                else {
                  lVar4 = 0;
                  iVar9 = 0;
                  do {
                    uVar12 = (uint)lVar4;
                    if (uVar10 <= uVar12) {
code_r0x029cfc0c:
                      uVar5 = func_0x00f78b24();
code_r0x029cfc18:
                      func_0x00f78ac0(uVar5,0);
code_r0x029cfc20:
                      func_0x00f78a24(0x3d23ae8);
                      uVar5 = func_0x00f78aec();
                      /*System.OutOfMemoryException$$.ctor*/ func_0x02965294(uVar5,0);
                      do {
                        uVar7 = func_0x00f78a24(0x3d5da90);
                        func_0x00f78ac0(uVar5,uVar7);
code_r0x029cfc54:
                        func_0x00f78a24(0x3d1fcf0);
                        uVar5 = func_0x00f78aec();
                        uVar7 = func_0x00f78a24(0x3d7c5e8);
                        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar7,0);
                      } while( true );
                    }
                    lVar11 = *(long *)(lVar3 + (lVar4 + 4) * 8);
                    if (lVar11 == 0) {
                      lVar11 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                    }
                    if (unaff_x19 == (long *)0x0) {
                      func_0x00f78af4();
code_r0x029cfbf4:
                      if (uVar12 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[lVar4 + 4] = lVar11;
                        func_0x00f78af4();
                      }
                      goto code_r0x029cfc0c;
                    }
                    if (lVar11 == 0) goto code_r0x029cfbf4;
                    lVar6 = func_0x00f78adc(lVar11,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar6 == 0) {
                      uVar5 = func_0x00f78b14();
                      goto code_r0x029cfc18;
                    }
                    if (*(uint *)(unaff_x19 + 3) <= uVar12) goto code_r0x029cfc0c;
                    unaff_x19[lVar4 + 4] = lVar11;
                    iVar9 = *(int *)(lVar11 + 0x10) + iVar9;
                    if (iVar9 < 0) goto code_r0x029cfc20;
                    uVar10 = *(uint *)(lVar3 + 0x18);
                    lVar4 = lVar4 + 1;
                  } while ((int)lVar4 < (int)uVar10);
                }
                unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
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
                *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
                *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
                *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
                *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
                unaff_x29 = puVar1 + -0x10;
                uVar5 = func_0x00f834ac(iVar9);
                if (unaff_x19 != (long *)0x0) {
                  uVar8 = (ulong)*(uint *)(unaff_x19 + 3);
                  if ((int)*(uint *)(unaff_x19 + 3) < 1) {
                    return uVar5;
                  }
                  unaff_x22 = 0;
                  unaff_x21 = 0;
                  while (uVar10 = (uint)unaff_x22, unaff_x20 = uVar5, uVar10 < (uint)uVar8) {
                    unaff_x23 = unaff_x19 + (long)(int)uVar10 + 4;
                    /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar5,unaff_x21,*unaff_x23);
                    uVar8 = unaff_x19[3];
                    if ((uint)uVar8 <= uVar10) break;
                    if (*unaff_x23 == 0) goto code_r0x029cfad8;
                    unaff_x21 = (ulong)(uint)(*(int *)(*unaff_x23 + 0x10) + (int)unaff_x21);
                    unaff_x22 = (ulong)(uVar10 + 1);
                    if ((int)(uint)uVar8 <= (int)(uVar10 + 1)) {
                      return uVar5;
                    }
                  }
                  uVar5 = func_0x00f78b24();
                  func_0x00f78ac0(uVar5,0);
                }
code_r0x029cfad8:
                unaff_x30 = &System_String__Concat;
                auVar13 = func_0x00f78af4();
                puVar1 = puVar1 + -0x40;
              } while( true );
            }
          }
        }
      }
    }
    uVar5 = func_0x00f78b24();
  }
  else {
LAB_02144894:
    uVar5 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar5,0);
LAB_021448a0:
  func_0x00f78af4();
  return 8;
}



