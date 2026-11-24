// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.FixedArray8<FixedString32Bytes>

// ============================================================
// RVA: 0x21448a4 | Core.Containers.FixedArray8<FixedString32Bytes>.get_Length
// ============================================================

undefined8 Core_Containers_FixedArray8_FixedString32Bytes___get_Length(void)

{
  return 8;
}



// ============================================================
// RVA: 0x21448ac | Core.Containers.FixedArray8<FixedString32Bytes>.get_Item
// ============================================================

void Core_Containers_FixedArray8_FixedString32Bytes___get_Item
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
                    /* WARNING: Could not recover jumptable at 0x02144934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
  return;
}



// ============================================================
// RVA: 0x2144938 | Core.Containers.FixedArray8<FixedString32Bytes>..ctor
// ============================================================

void Core_Containers_FixedArray8_FixedString32Bytes____ctor
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
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
  long lStack_208;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  
  lStack_48 = *(long *)PTR_03a5d648;
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
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
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar5 = *(long *)(param_3 + 0x18);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  uStack_188 = uStack_108;
  uStack_190 = uStack_110;
  uStack_178 = uStack_f8;
  uStack_180 = uStack_100;
  Core_Containers_FixedArray4_FixedString32Bytes____ctor
            (&uStack_f0,&uStack_190,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = uStack_78;
  param_1[0xe] = uStack_80;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar5 = *(long *)(param_3 + 0x18);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
  Core_Containers_FixedArray4_FixedString32Bytes____ctor(&uStack_190,&uStack_70);
  param_1[0x19] = uStack_148;
  param_1[0x18] = uStack_150;
  param_1[0x1b] = uStack_138;
  param_1[0x1a] = uStack_140;
  param_1[0x1d] = uStack_128;
  param_1[0x1c] = uStack_130;
  param_1[0x1f] = uStack_118;
  param_1[0x1e] = uStack_120;
  param_1[0x11] = uStack_188;
  param_1[0x10] = uStack_190;
  param_1[0x13] = uStack_178;
  param_1[0x12] = uStack_180;
  param_1[0x15] = uStack_168;
  param_1[0x14] = uStack_170;
  param_1[0x17] = uStack_158;
  param_1[0x16] = uStack_160;
  if (*(long *)PTR_03a5d648 == lStack_48) {
    return;
  }
  auVar9 = ___stack_chk_fail();
  puVar1 = auVar9._0_8_;
  uVar6 = 0;
  lStack_208 = *(long *)PTR_03a5d648;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar4 = puVar1;
  while( true ) {
    if ((*(ushort *)(*(long *)(auVar9._8_8_ + 0x18) + 0x132) & 1) == 0) {
      func_0x00fac028();
    }
    if (uVar6 == 8) {
      extraout_x8[0x19] = uStack_248;
      extraout_x8[0x18] = uStack_250;
      extraout_x8[0x1b] = uStack_238;
      extraout_x8[0x1a] = uStack_240;
      extraout_x8[0x1d] = uStack_228;
      extraout_x8[0x1c] = uStack_230;
      extraout_x8[0x1f] = uStack_218;
      extraout_x8[0x1e] = uStack_220;
      extraout_x8[0x11] = uStack_288;
      extraout_x8[0x10] = uStack_290;
      extraout_x8[0x13] = uStack_278;
      extraout_x8[0x12] = uStack_280;
      extraout_x8[0x15] = uStack_268;
      extraout_x8[0x14] = uStack_270;
      extraout_x8[0x17] = uStack_258;
      extraout_x8[0x16] = uStack_260;
      extraout_x8[9] = uStack_2c8;
      extraout_x8[8] = uStack_2d0;
      extraout_x8[0xb] = uStack_2b8;
      extraout_x8[10] = uStack_2c0;
      extraout_x8[0xd] = uStack_2a8;
      extraout_x8[0xc] = uStack_2b0;
      extraout_x8[0xf] = uStack_298;
      extraout_x8[0xe] = uStack_2a0;
      extraout_x8[1] = uStack_308;
      *extraout_x8 = uStack_310;
      extraout_x8[3] = uStack_2f8;
      extraout_x8[2] = uStack_300;
      extraout_x8[5] = uStack_2e8;
      extraout_x8[4] = uStack_2f0;
      extraout_x8[7] = uStack_2d8;
      extraout_x8[6] = uStack_2e0;
      if (*(long *)PTR_03a5d648 == lStack_208) {
        return;
      }
      goto code_r0x02144bc0;
    }
    lVar5 = *(long *)(auVar9._8_8_ + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    puVar2 = (undefined8 *)
             Core_Containers_FixedArray8_FixedString32Bytes___get_Item(&uStack_310,uVar6);
    if (puVar1 == (undefined8 *)0x0) break;
    if (*(uint *)(puVar1 + 3) <= uVar6) goto code_r0x02144bb4;
    uVar3 = puVar4[4];
    uVar8 = puVar4[7];
    uVar7 = puVar4[6];
    puVar2[1] = puVar4[5];
    *puVar2 = uVar3;
    puVar2[3] = uVar8;
    puVar2[2] = uVar7;
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 4;
  }
  func_0x00f78af4();
code_r0x02144bb4:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
code_r0x02144bc0:
  auVar9 = ___stack_chk_fail();
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  puVar4 = (undefined8 *)
           Core_Containers_FixedArray8_FixedString32Bytes___get_Item
                     (auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
  uVar3 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  extraout_x8_00[1] = puVar4[1];
  *extraout_x8_00 = uVar3;
  extraout_x8_00[3] = uVar8;
  extraout_x8_00[2] = uVar7;
  return;
}



// ============================================================
// RVA: 0x2144a78 | Core.Containers.FixedArray8<FixedString32Bytes>.op_Explicit
// ============================================================

void Core_Containers_FixedArray8_FixedString32Bytes___op_Explicit
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  long lStack_58;
  
  uVar4 = 0;
  lStack_58 = *(long *)PTR_03a5d648;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar3 = param_2;
  while( true ) {
    if ((*(ushort *)(*(long *)(param_3 + 0x18) + 0x132) & 1) == 0) {
      func_0x00fac028();
    }
    if (uVar4 == 8) {
      param_1[0x19] = uStack_98;
      param_1[0x18] = uStack_a0;
      param_1[0x1b] = uStack_88;
      param_1[0x1a] = uStack_90;
      param_1[0x1d] = uStack_78;
      param_1[0x1c] = uStack_80;
      param_1[0x1f] = uStack_68;
      param_1[0x1e] = uStack_70;
      param_1[0x11] = uStack_d8;
      param_1[0x10] = uStack_e0;
      param_1[0x13] = uStack_c8;
      param_1[0x12] = uStack_d0;
      param_1[0x15] = uStack_b8;
      param_1[0x14] = uStack_c0;
      param_1[0x17] = uStack_a8;
      param_1[0x16] = uStack_b0;
      param_1[9] = uStack_118;
      param_1[8] = uStack_120;
      param_1[0xb] = uStack_108;
      param_1[10] = uStack_110;
      param_1[0xd] = uStack_f8;
      param_1[0xc] = uStack_100;
      param_1[0xf] = uStack_e8;
      param_1[0xe] = uStack_f0;
      param_1[1] = uStack_158;
      *param_1 = uStack_160;
      param_1[3] = uStack_148;
      param_1[2] = uStack_150;
      param_1[5] = uStack_138;
      param_1[4] = uStack_140;
      param_1[7] = uStack_128;
      param_1[6] = uStack_130;
      if (*(long *)PTR_03a5d648 == lStack_58) {
        return;
      }
      goto code_r0x02144bc0;
    }
    lVar5 = *(long *)(param_3 + 0x18);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    param_4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    puVar1 = (undefined8 *)
             Core_Containers_FixedArray8_FixedString32Bytes___get_Item(&uStack_160,uVar4);
    if (param_2 == (undefined8 *)0x0) break;
    if (*(uint *)(param_2 + 3) <= uVar4) goto LAB_02144bb4;
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
LAB_02144bb4:
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
code_r0x02144bc0:
  auVar8 = ___stack_chk_fail();
  lVar5 = *(long *)(param_4 + 0x18);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  puVar3 = (undefined8 *)
           Core_Containers_FixedArray8_FixedString32Bytes___get_Item
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
// RVA: 0x2144bc4 | Core.Containers.FixedArray8<FixedString32Bytes>.Get
// ============================================================

void Core_Containers_FixedArray8_FixedString32Bytes___Get
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
           Core_Containers_FixedArray8_FixedString32Bytes___get_Item
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
// RVA: 0x2144c20 | Core.Containers.FixedArray8<FixedString32Bytes>.Set
// ============================================================

void Core_Containers_FixedArray8_FixedString32Bytes___Set
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
           Core_Containers_FixedArray8_FixedString32Bytes___get_Item
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
// RVA: 0x2144c7c | Core.Containers.FixedArray8<FixedString32Bytes>.ToString
// ============================================================

ulong Core_Containers_FixedArray8_FixedString32Bytes___ToString(long param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *unaff_x19;
  ulong unaff_x20;
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
  undefined1 auVar15 [16];
  
  if ((bRam0000000003eb7af3 & 1) == 0) {
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6ce70);
    func_0x00f78a20(0x3d66fe8);
    func_0x00f78a20(0x3d66ef8);
    bRam0000000003eb7af3 = 1;
  }
  plVar2 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  if (plVar2 == (long *)0x0) goto LAB_02144e8c;
  if ((/*STR('FixedArray8(')*/ lRam0000000003d6ce70 == 0) ||
     (lVar3 = func_0x00f78adc(/*STR('FixedArray8(')*/ lRam0000000003d6ce70,*(undefined8 *)(*plVar2 + 0x40)), lVar3 != 0)) {
    if ((int)plVar2[3] != 0) {
      plVar2[4] = /*STR('FixedArray8(')*/ lRam0000000003d6ce70;
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
      goto LAB_02144e80;
      uVar12 = (uint)plVar2[3];
      if ((plVar2[3] & 0xfffffffeU) != 0) {
        plVar2[5] = lVar3;
        if (/*STR(', ')*/ lRam0000000003d66fe8 != 0) {
          lVar3 = func_0x00f78adc(/*STR(', ')*/ lRam0000000003d66fe8,*(undefined8 *)(*plVar2 + 0x40));
          if (lVar3 == 0) goto LAB_02144e80;
          uVar12 = (uint)plVar2[3];
        }
        if (2 < uVar12) {
          plVar2[6] = /*STR(', ')*/ lRam0000000003d66fe8;
          lVar3 = *(long *)(param_2 + 0x18);
          if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar3);
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar3);
          }
          lVar3 = (**(code **)(lVar3 + 0x168))(param_1 + 0x70,*(undefined8 *)(lVar3 + 0x170));
          if ((lVar3 != 0) &&
             (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_02144e80;
          uVar12 = (uint)plVar2[3];
          if ((plVar2[3] & 0xfffffffcU) != 0) {
            plVar2[7] = lVar3;
            if (/*STR(')')*/ lRam0000000003d66ef8 != 0) {
              lVar3 = func_0x00f78adc(/*STR(')')*/ lRam0000000003d66ef8,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar3 == 0) goto LAB_02144e80;
              uVar12 = (uint)plVar2[3];
            }
            if (4 < uVar12) {
              plVar2[8] = /*STR(')')*/ lRam0000000003d66ef8;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = plVar2;
              puVar1 = (undefined1 *)register0x00000008;
              do {
                lVar3 = auVar15._0_8_;
                *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                *(long **)(puVar1 + -0x38) = unaff_x23;
                *(ulong *)(puVar1 + -0x30) = unaff_x22;
                *(ulong *)(puVar1 + -0x28) = unaff_x21;
                *(ulong *)(puVar1 + -0x20) = unaff_x20;
                *(long **)(puVar1 + -0x18) = unaff_x19;
                *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
                *(undefined **)(puVar1 + -8) = unaff_x30;
                if ((bRam0000000003eb946a & 1) == 0) {
                  func_0x00f78a20(0x3d1f498,auVar15._8_8_);
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
                      uVar7 = func_0x00f78b24();
code_r0x029cfc18:
                      func_0x00f78ac0(uVar7,0);
code_r0x029cfc20:
                      func_0x00f78a24(0x3d23ae8);
                      uVar7 = func_0x00f78aec();
                      /*System.OutOfMemoryException$$.ctor*/ func_0x02965294(uVar7,0);
                      do {
                        uVar9 = func_0x00f78a24(0x3d5da90);
                        func_0x00f78ac0(uVar7,uVar9);
code_r0x029cfc54:
                        func_0x00f78a24(0x3d1fcf0);
                        uVar7 = func_0x00f78aec();
                        uVar9 = func_0x00f78a24(0x3d7c5e8);
                        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar7,uVar9,0);
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
                    lVar8 = func_0x00f78adc(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar8 == 0) {
                      uVar7 = func_0x00f78b14();
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
                unaff_x20 = *(ulong *)(puVar1 + -0x20);
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
                *(ulong *)(puVar1 + -0x20) = unaff_x20;
                *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
                *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
                *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
                unaff_x29 = puVar1 + -0x10;
                uVar6 = func_0x00f834ac(iVar11);
                if (unaff_x19 != (long *)0x0) {
                  uVar10 = (ulong)*(uint *)(unaff_x19 + 3);
                  if ((int)*(uint *)(unaff_x19 + 3) < 1) {
                    return uVar6;
                  }
                  unaff_x22 = 0;
                  unaff_x21 = 0;
                  while (uVar12 = (uint)unaff_x22, unaff_x20 = uVar6, uVar12 < (uint)uVar10) {
                    unaff_x23 = unaff_x19 + (long)(int)uVar12 + 4;
                    /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar6,unaff_x21,*unaff_x23);
                    uVar10 = unaff_x19[3];
                    if ((uint)uVar10 <= uVar12) break;
                    if (*unaff_x23 == 0) goto code_r0x029cfad8;
                    unaff_x21 = (ulong)(uint)(*(int *)(*unaff_x23 + 0x10) + (int)unaff_x21);
                    unaff_x22 = (ulong)(uVar12 + 1);
                    if ((int)(uint)uVar10 <= (int)(uVar12 + 1)) {
                      return uVar6;
                    }
                  }
                  uVar7 = func_0x00f78b24();
                  func_0x00f78ac0(uVar7,0);
                }
code_r0x029cfad8:
                unaff_x30 = &System_String__Concat;
                auVar15 = func_0x00f78af4();
                puVar1 = puVar1 + -0x40;
              } while( true );
            }
          }
        }
      }
    }
    uVar7 = func_0x00f78b24();
  }
  else {
LAB_02144e80:
    uVar7 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar7,0);
LAB_02144e8c:
  puVar5 = (ushort *)func_0x00f78af4();
  return (ulong)*puVar5;
}



