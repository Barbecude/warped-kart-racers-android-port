// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ResolveSaveRequest

// ============================================================
// RVA: 0x1683bf0 | Core.Services.ResolveSaveRequest.get_ByteBuffer
// ============================================================

undefined8 Core_Services_ResolveSaveRequest__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1683bf8 | Core.Services.ResolveSaveRequest.GetRootAsResolveSaveRequest
// ============================================================

undefined1  [16] Core_Services_ResolveSaveRequest__GetRootAsResolveSaveRequest(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar4._4_4_ = 0;
    auVar4._0_4_ = *(int *)(param_1 + 0x18) + iVar1;
    auVar4._8_8_ = param_1;
    return auVar4;
  }
  auVar6 = func_0x00f78af4();
  puVar2 = auVar6._0_8_;
  *(int *)puVar2 = auVar6._8_4_;
  puVar2[1] = uVar3;
  auVar5._0_8_ = *puVar2;
  auVar5._8_8_ = uVar3;
  return auVar5;
}



// ============================================================
// RVA: 0x1683c04 | Core.Services.ResolveSaveRequest.GetRootAsResolveSaveRequest
// ============================================================

undefined1  [16]
Core_Services_ResolveSaveRequest__GetRootAsResolveSaveRequest
          (long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar3._0_8_ = param_2 & 0xffffffff00000000 | (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar1);
    auVar3._8_8_ = param_1;
    return auVar3;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._0_8_;
  *(int *)puVar2 = auVar5._8_4_;
  puVar2[1] = param_3;
  auVar4._0_8_ = *puVar2;
  auVar4._8_8_ = param_3;
  return auVar4;
}



// ============================================================
// RVA: 0x1683c48 | Core.Services.ResolveSaveRequest.__assign
// ============================================================

undefined1  [16]
Core_Services_ResolveSaveRequest____assign
          (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1683c5c | Core.Services.ResolveSaveRequest.__init
// ============================================================

void Core_Services_ResolveSaveRequest____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1683c68 | Core.Services.ResolveSaveRequest.get_Index
// ============================================================

/* WARNING: Possible PIC construction at 0x01683d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01683d3c) */
/* WARNING: Removing unreachable block (ram,0x01683d54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ResolveSaveRequest__get_Index
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ****ppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar22;
  undefined1 ***pppuVar23;
  undefined1 ****ppppuVar24;
  undefined1 **ppuVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_140 [4];
  undefined1 auStack_120 [12];
  int iStack_114;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar12,4);
    return uVar12;
  }
  piVar13 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_ResolveSaveRequest__get_KeepLocal;
  uVar19 = 0;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar13,6);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(piVar13 + 2) != 0) {
    iVar8 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(piVar13 + 2),*piVar13 + (int)uVar12,0);
    return (ulong)(iVar8 != 0);
  }
  auVar27 = func_0x00f78af4();
  piVar14 = auVar27._0_8_;
  puVar2 = &stack0xffffffffffffff90;
  puStack_48 = &Core_Services_ResolveSaveRequest__CreateResolveSaveRequest;
  pppuVar23 = &ppuStack_50;
  ppuStack_50 = &puStack_30;
  if (piVar14 != (int *)0x0) {
    puVar26 = &UNK_01683d3c;
    piVar13 = piVar14;
    unaff_x21 = auVar27._8_8_;
code_r0x016ce2a4:
    uVar15 = 0;
    ppppuVar3 = (undefined1 ****)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar19;
    *(int **)(puVar2 + -0x18) = piVar13;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar23;
    *(undefined **)(puVar2 + -8) = puVar26;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 2) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(piVar14 + 10) = uVar19;
      }
      piVar14[0xc] = 2;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar27 = func_0x00f78af4();
    piVar13 = piVar14;
    pppuVar23 = (undefined1 ***)(puVar2 + -0x10);
    puVar26 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      piVar14 = auVar27._8_8_;
      *(long *)((long)ppppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar3 + -0x18) = piVar13;
      *(undefined1 ****)((long)ppppuVar3 + -0x10) = pppuVar23;
      *(undefined **)((long)ppppuVar3 + -8) = puVar26;
      ppppuVar24 = (undefined1 ****)((long)ppppuVar3 + -0x10);
      uVar18 = auVar27._8_4_;
      if ((int)uVar18 < *(int *)(auVar27._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        piVar14 = (int *)func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d6ceb8);
        uVar15 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar14,uVar19);
        uVar19 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(piVar14,uVar19);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar19 = func_0x00f78b24();
      puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar27 = func_0x00f78ac0(uVar19,0);
      puVar4 = auVar27._8_8_;
      auVar28._8_8_ = uVar15;
      auVar28._0_8_ = auVar27._0_8_;
      ppppuVar3 = (undefined1 ****)((long)ppppuVar3 + -0x20);
      piVar13 = piVar14;
code_r0x016ce420:
      uVar12 = auVar28._0_8_;
      auVar27._8_8_ = puVar4;
      auVar27._0_8_ = uVar12;
      *(ulong *)((long)ppppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)ppppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)ppppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar3 + -0x18) = piVar13;
      *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar24;
      *(undefined **)((long)ppppuVar3 + -8) = puVar26;
      if ((auVar28._8_4_ == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,auVar28._8_8_);
      unaff_x20 = *(long *)((long)ppppuVar3 + -0x20);
      piVar13 = *(int **)((long)ppppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)ppppuVar3 + -0x28);
      pppuVar23 = *(undefined1 ****)((long)ppppuVar3 + -0x10);
      puVar26 = *(undefined **)((long)ppppuVar3 + -8);
    } while( true );
  }
  auVar27 = func_0x00f78af4();
  uVar12 = auVar27._0_8_;
  pppuStack_80 = pppuVar23;
  if (uVar12 != 0) {
    param_4 = 0;
    puStack_78 = &Core_Services_ResolveSaveRequest__AddIndex;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar12,auVar27._8_8_);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar12;
    ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff90;
    pppuVar23 = pppuStack_80;
    puVar26 = puStack_78;
    goto code_r0x016ce380;
  }
  ppppuVar3 = &pppuStack_80;
  ppppuVar24 = &pppuStack_80;
  puStack_78 = &Core_Services_ResolveSaveRequest__AddIndex;
  puVar26 = &Core_Services_ResolveSaveRequest__AddKeepLocal;
  auVar28 = func_0x00f78af4();
  if (auVar28._0_8_ != 0) {
    puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    param_4 = 0;
    goto code_r0x016ce420;
  }
  lVar16 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff50;
  pppuVar23 = (undefined1 ***)&stack0xffffffffffffff60;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5a0b & 1) == 0) {
    func_0x00f78a20(0x3d3f218);
    bRam0000000003eb5a0b = 1;
  }
  if (lVar16 == 0) {
    puVar26 = &Core_Services_ResolveSaveRequest__StartResolveSaveRequest;
    piVar14 = (int *)func_0x00f78af4();
    if (piVar14 == (int *)0x0) {
      lVar16 = func_0x00f78af4();
      return *(ulong *)(lVar16 + 8);
    }
    piVar13 = (int *)0x0;
    goto code_r0x016ce2a4;
  }
  uVar12 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar16 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,0);
    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
    unaff_x21 = (ulong)*(uint *)(lVar16 + 0x30);
    uVar18 = *(uint *)(lVar16 + 0x30) - 1;
    if (-2 < (int)uVar18) {
      uVar18 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar18;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar8 = (int)uVar12;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar20 = *(long *)(lVar16 + 0x28);
      if (lVar20 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar22 = unaff_x22 - 8;
      if (*(uint *)(lVar20 + 0x18) <= uVar22) goto code_r0x016ced88;
      iVar10 = *(int *)(lVar20 + unaff_x22 * 4);
      sVar5 = 0;
      if (iVar10 != 0) {
        sVar5 = (short)uVar12 - (short)iVar10;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)sVar5);
      lVar20 = *(long *)(lVar16 + 0x28);
      if (lVar20 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar20 + 0x18) <= uVar22) goto code_r0x016ced88;
      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar18 = uVar1;
    } while (0 < (long)uVar22);
code_r0x016ceb30:
    uVar9 = *(undefined4 *)(lVar16 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)((short)uVar12 - (short)uVar9));
    uVar18 = uVar18 * 2 + 6;
    unaff_x21 = (ulong)uVar18;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)uVar18);
    unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
    if (0 < (int)*(uint *)(lVar16 + 0x40)) {
      uVar22 = 0;
      do {
        lVar20 = *(long *)(lVar16 + 0x18);
        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
           (lVar21 = *(long *)(lVar16 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar21 + 0x18) <= uVar22) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - *(int *)(lVar21 + uVar22 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar18 = *(uint *)(lVar16 + 0x10);
        unaff_x22 = (ulong)uVar18;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
        if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),unaff_x22,2);
        if (sVar5 == sVar6) {
          if (sVar5 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar16 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar22) goto code_r0x016ced88;
            iVar10 = *(int *)(unaff_x21 + uVar22 * 4 + 0x20);
            if (iVar10 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar16 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar8;
            *(int *)(lVar16 + 0x10) = iVar11;
            iVar10 = iVar10 - iVar8;
            goto code_r0x016ced3c;
          }
          iVar10 = 2;
          while( true ) {
            if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar1 + iVar10,2);
            if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar18 + iVar10,2);
            if (sVar6 != sVar7) break;
            iVar10 = iVar10 + 2;
            if (sVar5 <= iVar10) goto code_r0x016cec64;
          }
        }
        uVar22 = uVar22 + 1;
        unaff_x22 = (ulong)*(int *)(lVar16 + 0x40);
      } while ((long)uVar22 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar16 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar20 = *(long *)(lVar16 + 0x38);
        if (lVar20 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
        *(ulong *)(lVar16 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
      }
      uVar18 = (uint)unaff_x22;
      *(uint *)(lVar16 + 0x40) = uVar18 + 1;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar9;
        unaff_x21 = *(ulong *)(lVar16 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
          iVar11 = iVar11 - iVar8;
          iVar10 = iVar10 - iVar8;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
          *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
          return uVar12;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar19 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d6cea8);
  iVar8 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,uVar15);
  uVar15 = func_0x00f78a24(0x3d56a30);
  auVar29 = func_0x00f78ac0(uVar19,uVar15);
  puStack_e8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar25 = &puStack_f0;
  lVar16 = *(long *)(auVar29._0_8_ + 0x18);
  iStack_114 = iVar8;
  uStack_110 = unaff_x22;
  uStack_108 = unaff_x21;
  uStack_100 = uVar12;
  uStack_f8 = uVar19;
  puStack_f0 = &stack0xffffffffffffff60;
  if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
    iVar10 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar29._8_4_;
    iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,iVar10,4);
    lVar16 = *(long *)(auVar29._0_8_ + 0x18);
    if (lVar16 != 0) {
      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,(iVar10 - iVar11) + iVar8,2);
      if ((uVar12 & 0xffff) != 0) {
        return uVar12;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_114,0);
  uVar15 = func_0x00f78a24(0x3d6ce88);
  uVar17 = func_0x00f78a24(0x3d66338);
  lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar19,uVar17,0);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar15 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar16);
  uVar19 = func_0x00f78a24(0x3d56a50);
  puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar27 = func_0x00f78ac0(uVar12,uVar19);
  puVar4 = auStack_120;
  do {
    uVar22 = auVar27._8_8_;
    lVar20 = auVar27._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar12;
    *(long *)(puVar4 + -0x18) = lVar16;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar25;
    *(undefined **)(puVar4 + -8) = puVar26;
    ppuVar25 = (undefined1 **)(puVar4 + -0x10);
    if ((int)uVar15 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar22);
code_r0x016cef70:
      if (*(long *)(lVar20 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
        return uVar12;
      }
    }
    else if (lVar20 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar22);
      if ((*(long *)(lVar20 + 0x18) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar16 != 0)) {
        uVar22 = (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar20 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar22);
        goto code_r0x016cef70;
      }
    }
    puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar27 = func_0x00f78af4();
    uVar15 = 0;
    puVar4 = puVar4 + -0x20;
    lVar16 = lVar20;
    uVar12 = uVar22;
  } while( true );
}



// ============================================================
// RVA: 0x1683cbc | Core.Services.ResolveSaveRequest.get_KeepLocal
// ============================================================

/* WARNING: Possible PIC construction at 0x01683d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01683d3c) */
/* WARNING: Removing unreachable block (ram,0x01683d54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ResolveSaveRequest__get_KeepLocal
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar22;
  undefined1 ***pppuVar23;
  undefined1 **ppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_120 [4];
  undefined1 auStack_100 [12];
  int iStack_f4;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar18 = 0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar8 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar12,0);
    return (ulong)(iVar8 != 0);
  }
  auVar26 = func_0x00f78af4();
  piVar13 = auVar26._0_8_;
  puVar2 = &stack0xffffffffffffffb0;
  puStack_28 = &Core_Services_ResolveSaveRequest__CreateResolveSaveRequest;
  ppuVar24 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar13 != (int *)0x0) {
    puVar25 = &UNK_01683d3c;
    piVar21 = piVar13;
    unaff_x21 = auVar26._8_8_;
code_r0x016ce2a4:
    uVar14 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar18;
    *(int **)(puVar2 + -0x18) = piVar21;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 2) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(piVar13 + 10) = uVar18;
      }
      piVar13[0xc] = 2;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar26 = func_0x00f78af4();
    param_1 = piVar13;
    ppuVar24 = (undefined1 **)(puVar2 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      piVar13 = auVar26._8_8_;
      *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar3 + -0x18) = param_1;
      *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar24;
      *(undefined **)((long)pppuVar3 + -8) = puVar25;
      pppuVar23 = (undefined1 ***)((long)pppuVar3 + -0x10);
      uVar17 = auVar26._8_4_;
      if ((int)uVar17 < *(int *)(auVar26._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        piVar13 = (int *)func_0x00f78aec();
        uVar18 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar18);
        uVar18 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(piVar13,uVar18);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar18 = func_0x00f78b24();
      puVar25 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar26 = func_0x00f78ac0(uVar18,0);
      puVar4 = auVar26._8_8_;
      auVar27._8_8_ = uVar14;
      auVar27._0_8_ = auVar26._0_8_;
      pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
      param_1 = piVar13;
code_r0x016ce420:
      uVar12 = auVar27._0_8_;
      auVar26._8_8_ = puVar4;
      auVar26._0_8_ = uVar12;
      *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar3 + -0x18) = param_1;
      *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar23;
      *(undefined **)((long)pppuVar3 + -8) = puVar25;
      if ((auVar27._8_4_ == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,auVar27._8_8_);
      unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
      param_1 = *(int **)((long)pppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
      ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -0x10);
      puVar25 = *(undefined **)((long)pppuVar3 + -8);
    } while( true );
  }
  auVar26 = func_0x00f78af4();
  uVar12 = auVar26._0_8_;
  ppuStack_60 = ppuVar24;
  if (uVar12 != 0) {
    param_4 = 0;
    puStack_58 = &Core_Services_ResolveSaveRequest__AddIndex;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar12,auVar26._8_8_);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar12;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffb0;
    ppuVar24 = ppuStack_60;
    puVar25 = puStack_58;
    goto code_r0x016ce380;
  }
  pppuVar3 = &ppuStack_60;
  pppuVar23 = &ppuStack_60;
  puStack_58 = &Core_Services_ResolveSaveRequest__AddIndex;
  puVar25 = &Core_Services_ResolveSaveRequest__AddKeepLocal;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ != 0) {
    puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    param_4 = 0;
    goto code_r0x016ce420;
  }
  lVar15 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff70;
  ppuVar24 = (undefined1 **)&stack0xffffffffffffff80;
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5a0b & 1) == 0) {
    func_0x00f78a20(0x3d3f218);
    bRam0000000003eb5a0b = 1;
  }
  if (lVar15 == 0) {
    puVar25 = &Core_Services_ResolveSaveRequest__StartResolveSaveRequest;
    piVar13 = (int *)func_0x00f78af4();
    if (piVar13 == (int *)0x0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    piVar21 = (int *)0x0;
    goto code_r0x016ce2a4;
  }
  uVar12 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar15 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
    unaff_x21 = (ulong)*(uint *)(lVar15 + 0x30);
    uVar17 = *(uint *)(lVar15 + 0x30) - 1;
    if (-2 < (int)uVar17) {
      uVar17 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar17;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar8 = (int)uVar12;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar19 = *(long *)(lVar15 + 0x28);
      if (lVar19 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar22 = unaff_x22 - 8;
      if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x016ced88;
      iVar10 = *(int *)(lVar19 + unaff_x22 * 4);
      sVar5 = 0;
      if (iVar10 != 0) {
        sVar5 = (short)uVar12 - (short)iVar10;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar5);
      lVar19 = *(long *)(lVar15 + 0x28);
      if (lVar19 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x016ced88;
      *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar17 = uVar1;
    } while (0 < (long)uVar22);
code_r0x016ceb30:
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar12 - (short)uVar9));
    uVar17 = uVar17 * 2 + 6;
    unaff_x21 = (ulong)uVar17;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)uVar17);
    unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
    if (0 < (int)*(uint *)(lVar15 + 0x40)) {
      uVar22 = 0;
      do {
        lVar19 = *(long *)(lVar15 + 0x18);
        if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
           (lVar20 = *(long *)(lVar15 + 0x38), lVar20 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar20 + 0x18) <= uVar22) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar20 + uVar22 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar17 = *(uint *)(lVar15 + 0x10);
        unaff_x22 = (ulong)uVar17;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
        if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),unaff_x22,2);
        if (sVar5 == sVar6) {
          if (sVar5 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar15 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar22) goto code_r0x016ced88;
            iVar10 = *(int *)(unaff_x21 + uVar22 * 4 + 0x20);
            if (iVar10 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar15 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar8;
            *(int *)(lVar15 + 0x10) = iVar11;
            iVar10 = iVar10 - iVar8;
            goto code_r0x016ced3c;
          }
          iVar10 = 2;
          while( true ) {
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar1 + iVar10,2);
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar17 + iVar10,2);
            if (sVar6 != sVar7) break;
            iVar10 = iVar10 + 2;
            if (sVar5 <= iVar10) goto code_r0x016cec64;
          }
        }
        uVar22 = uVar22 + 1;
        unaff_x22 = (ulong)*(int *)(lVar15 + 0x40);
      } while ((long)uVar22 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar15 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar19 = *(long *)(lVar15 + 0x38);
        if (lVar19 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
        *(ulong *)(lVar15 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
      }
      uVar17 = (uint)unaff_x22;
      *(uint *)(lVar15 + 0x40) = uVar17 + 1;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar9;
        unaff_x21 = *(ulong *)(lVar15 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
          iVar11 = iVar11 - iVar8;
          iVar10 = iVar10 - iVar8;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
          *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
          return uVar12;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar18 = func_0x00f78b24();
    func_0x00f78ac0(uVar18,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar18 = func_0x00f78aec();
  uVar14 = func_0x00f78a24(0x3d6cea8);
  iVar8 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar14);
  uVar14 = func_0x00f78a24(0x3d56a30);
  auVar28 = func_0x00f78ac0(uVar18,uVar14);
  puStack_c8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar24 = &puStack_d0;
  lVar15 = *(long *)(auVar28._0_8_ + 0x18);
  iStack_f4 = iVar8;
  uStack_f0 = unaff_x22;
  uStack_e8 = unaff_x21;
  uStack_e0 = uVar12;
  uStack_d8 = uVar18;
  puStack_d0 = &stack0xffffffffffffff80;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar10 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar28._8_4_;
    iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar10,4);
    lVar15 = *(long *)(auVar28._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar10 - iVar11) + iVar8,2);
      if ((uVar12 & 0xffff) != 0) {
        return uVar12;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_f4,0);
  uVar14 = func_0x00f78a24(0x3d6ce88);
  uVar16 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar18,uVar16,0);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar15);
  uVar18 = func_0x00f78a24(0x3d56a50);
  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar26 = func_0x00f78ac0(uVar12,uVar18);
  puVar4 = auStack_100;
  do {
    uVar22 = auVar26._8_8_;
    lVar19 = auVar26._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar12;
    *(long *)(puVar4 + -0x18) = lVar15;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar24;
    *(undefined **)(puVar4 + -8) = puVar25;
    ppuVar24 = (undefined1 **)(puVar4 + -0x10);
    if ((int)uVar14 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar22);
code_r0x016cef70:
      if (*(long *)(lVar19 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
        return uVar12;
      }
    }
    else if (lVar19 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar22);
      if ((*(long *)(lVar19 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar15 != 0)) {
        uVar22 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar19 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar22);
        goto code_r0x016cef70;
      }
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar26 = func_0x00f78af4();
    uVar14 = 0;
    puVar4 = puVar4 + -0x20;
    lVar15 = lVar19;
    uVar12 = uVar22;
  } while( true );
}



// ============================================================
// RVA: 0x1683d10 | Core.Services.ResolveSaveRequest.CreateResolveSaveRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x01683d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01683d3c) */
/* WARNING: Removing unreachable block (ram,0x01683d54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ResolveSaveRequest__CreateResolveSaveRequest
                (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  int iVar18;
  long unaff_x20;
  ulong uVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong auStack_100 [4];
  undefined1 auStack_e0 [12];
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar4 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar22 = (undefined *)0x1683d3c;
    lVar13 = param_1;
    unaff_x21 = param_2;
code_r0x016ce2a4:
    uVar11 = 0;
    ppuVar3 = (undefined1 **)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_3;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar22;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x30) = 2;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    auVar24 = func_0x00f78af4();
    unaff_x19 = param_1;
    puVar4 = puVar2 + -0x10;
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      lVar13 = auVar24._8_8_;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar3 + -0x10) = puVar4;
      *(undefined **)((long)ppuVar3 + -8) = puVar22;
      ppuVar21 = (undefined1 **)((long)ppuVar3 + -0x10);
      uVar15 = auVar24._8_4_;
      if ((int)uVar15 < *(int *)(auVar24._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
        uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar19;
          return uVar19;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        lVar13 = func_0x00f78aec();
        uVar12 = func_0x00f78a24(0x3d6ceb8);
        uVar11 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar13,uVar12);
        uVar12 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(lVar13,uVar12);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar12 = func_0x00f78b24();
      puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar24 = func_0x00f78ac0(uVar12,0);
      uVar12 = auVar24._8_8_;
      auVar23._8_8_ = uVar11;
      auVar23._0_8_ = auVar24._0_8_;
      ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
      unaff_x19 = lVar13;
code_r0x016ce420:
      uVar19 = auVar23._0_8_;
      auVar24._8_8_ = uVar12;
      auVar24._0_8_ = uVar19;
      *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
      *(undefined **)((long)ppuVar3 + -8) = puVar22;
      if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
        return uVar19;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,auVar23._8_8_);
      unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
      unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
      puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar22 = *(undefined **)((long)ppuVar3 + -8);
    } while( true );
  }
  auVar24 = func_0x00f78af4();
  uVar19 = auVar24._0_8_;
  puStack_40 = puVar4;
  if (uVar19 != 0) {
    param_4 = 0;
    puStack_38 = &Core_Services_ResolveSaveRequest__AddIndex;
    if ((auVar24._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar19,auVar24._8_8_);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar19;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffffd0;
    puVar4 = puStack_40;
    puVar22 = puStack_38;
    goto code_r0x016ce380;
  }
  ppuVar3 = &puStack_40;
  ppuVar21 = &puStack_40;
  puStack_38 = &Core_Services_ResolveSaveRequest__AddIndex;
  puVar22 = &Core_Services_ResolveSaveRequest__AddKeepLocal;
  auVar23 = func_0x00f78af4();
  if (auVar23._0_8_ != 0) {
    uVar12 = 1;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  lVar13 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff90;
  puVar4 = &stack0xffffffffffffffa0;
  param_3 = 0x3eb5000;
  if ((bRam0000000003eb5a0b & 1) == 0) {
    func_0x00f78a20(0x3d3f218);
    bRam0000000003eb5a0b = 1;
  }
  if (lVar13 == 0) {
    puVar22 = &Core_Services_ResolveSaveRequest__StartResolveSaveRequest;
    param_1 = func_0x00f78af4();
    if (param_1 == 0) {
      lVar13 = func_0x00f78af4();
      return *(ulong *)(lVar13 + 8);
    }
    lVar13 = 0;
    goto code_r0x016ce2a4;
  }
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar13 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
    uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
    unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
    uVar15 = *(uint *)(lVar13 + 0x30) - 1;
    if (-2 < (int)uVar15) {
      uVar15 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar15;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar18 = (int)uVar19;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar16 = *(long *)(lVar13 + 0x28);
      if (lVar16 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar16 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar16 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar20 = unaff_x22 - 8;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
      iVar9 = *(int *)(lVar16 + unaff_x22 * 4);
      sVar5 = 0;
      if (iVar9 != 0) {
        sVar5 = (short)uVar19 - (short)iVar9;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar5);
      lVar16 = *(long *)(lVar13 + 0x28);
      if (lVar16 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
      *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar15 = uVar1;
    } while (0 < (long)uVar20);
code_r0x016ceb30:
    uVar8 = *(undefined4 *)(lVar13 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar19 - (short)uVar8));
    uVar15 = uVar15 * 2 + 6;
    unaff_x21 = (ulong)uVar15;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar15);
    unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
    if (0 < (int)*(uint *)(lVar13 + 0x40)) {
      uVar20 = 0;
      do {
        lVar16 = *(long *)(lVar13 + 0x18);
        if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
           (lVar17 = *(long *)(lVar13 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar17 + 0x18) <= uVar20) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - *(int *)(lVar17 + uVar20 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar15 = *(uint *)(lVar13 + 0x10);
        unaff_x22 = (ulong)uVar15;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
        if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
        if (sVar5 == sVar6) {
          if (sVar5 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar13 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
            iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
            if (iVar9 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar13 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
            *(int *)(lVar13 + 0x10) = iVar10;
            iVar9 = iVar9 - iVar18;
            goto code_r0x016ced3c;
          }
          iVar9 = 2;
          while( true ) {
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar1 + iVar9,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar15 + iVar9,2);
            if (sVar6 != sVar7) break;
            iVar9 = iVar9 + 2;
            if (sVar5 <= iVar9) goto code_r0x016cec64;
          }
        }
        uVar20 = uVar20 + 1;
        unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
      } while ((long)uVar20 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar13 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar16 = *(long *)(lVar13 + 0x38);
        if (lVar16 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
        *(ulong *)(lVar13 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
      }
      uVar15 = (uint)unaff_x22;
      *(uint *)(lVar13 + 0x40) = uVar15 + 1;
      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar8;
        unaff_x21 = *(ulong *)(lVar13 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
          iVar10 = iVar10 - iVar18;
          iVar9 = iVar9 - iVar18;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
          *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
          return uVar19;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar11 = func_0x00f78aec();
  uVar12 = func_0x00f78a24(0x3d6cea8);
  iVar18 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
  uVar12 = func_0x00f78a24(0x3d56a30);
  auVar25 = func_0x00f78ac0(uVar11,uVar12);
  puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar3 = &puStack_b0;
  lVar13 = *(long *)(auVar25._0_8_ + 0x18);
  iStack_d4 = iVar18;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  uStack_c0 = uVar19;
  uStack_b8 = uVar11;
  puStack_b0 = &stack0xffffffffffffffa0;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar25._8_4_;
    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar9,4);
    lVar13 = *(long *)(auVar25._0_8_ + 0x18);
    if (lVar13 != 0) {
      uVar19 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar9 - iVar10) + iVar18,2);
      if ((uVar19 & 0xffff) != 0) {
        return uVar19;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
  uVar12 = func_0x00f78a24(0x3d6ce88);
  uVar14 = func_0x00f78a24(0x3d66338);
  lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar14,0);
  func_0x00f78a24(0x3d22a38);
  uVar19 = func_0x00f78aec();
  uVar12 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar13);
  uVar11 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar24 = func_0x00f78ac0(uVar19,uVar11);
  puVar4 = auStack_e0;
  do {
    uVar20 = auVar24._8_8_;
    lVar16 = auVar24._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar19;
    *(long *)(puVar4 + -0x18) = lVar13;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar3;
    *(undefined **)(puVar4 + -8) = puVar22;
    ppuVar3 = (undefined1 **)(puVar4 + -0x10);
    if ((int)uVar12 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar20);
code_r0x016cef70:
      if (*(long *)(lVar16 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
        return uVar19;
      }
    }
    else if (lVar16 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar20);
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar13 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar13 != 0)) {
        uVar20 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar16 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        uVar19 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar20);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar24 = func_0x00f78af4();
    uVar12 = 0;
    puVar4 = puVar4 + -0x20;
    lVar13 = lVar16;
    uVar19 = uVar20;
  } while( true );
}



// ============================================================
// RVA: 0x1683d6c | Core.Services.ResolveSaveRequest.AddIndex
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ResolveSaveRequest__AddIndex
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long lVar17;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 **ppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [12];
  int iStack_a4;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar17 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_2);
    puVar3 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined **)(puVar3 + -8) = unaff_x30;
      uVar13 = (uint)lVar17;
      if ((int)uVar13 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        unaff_x19 = lVar17;
        if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        lVar17 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar17,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(lVar17,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
        unaff_x19 = lVar17;
      }
      uVar11 = func_0x00f78b24();
      puVar21 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar23 = func_0x00f78ac0(uVar11,0);
      lVar17 = auVar23._8_8_;
      auVar22._8_8_ = uVar14;
      auVar22._0_8_ = auVar23._0_8_;
      puVar2 = puVar3 + -0x20;
      register0x00000008 = (BADSPACEBASE *)puVar3;
code_r0x016ce420:
      puVar3 = puVar2;
      param_1 = auVar22._0_8_;
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = unaff_x21;
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)(puVar3 + -8) = puVar21;
      if ((auVar22._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar22._8_8_);
      unaff_x29 = *(undefined1 **)(puVar3 + -0x10);
      unaff_x30 = *(undefined **)(puVar3 + -8);
      unaff_x20 = *(long *)(puVar3 + -0x20);
      unaff_x19 = *(long *)(puVar3 + -0x18);
      unaff_x22 = *(ulong *)(puVar3 + -0x30);
      unaff_x21 = *(ulong *)(puVar3 + -0x28);
    } while( true );
  }
  puVar21 = &Core_Services_ResolveSaveRequest__AddKeepLocal;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar17 = 1;
    param_4 = 0;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce420;
  }
  lVar17 = func_0x00f78af4();
  if ((bRam0000000003eb5a0b & 1) == 0) {
    func_0x00f78a20(0x3d3f218);
    bRam0000000003eb5a0b = 1;
  }
  if (lVar17 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar17 = func_0x00f78af4();
      return *(ulong *)(lVar17 + 8);
    }
    uVar14 = 0;
    puVar3 = &stack0xffffffffffffff90;
    unaff_x29 = &stack0xffffffffffffffb0;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 2) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 2;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar22 = func_0x00f78af4();
    lVar17 = auVar22._8_8_;
    param_1 = auVar22._0_8_;
    goto code_r0x016ce380;
  }
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar17 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,0);
    uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
    unaff_x21 = (ulong)*(uint *)(lVar17 + 0x30);
    uVar13 = *(uint *)(lVar17 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar18 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(lVar17 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar19 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar10 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)sVar4);
      lVar15 = *(long *)(lVar17 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar19);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(lVar17 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)((short)uVar10 - (short)uVar7));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
    if (0 < (int)*(uint *)(lVar17 + 0x40)) {
      uVar19 = 0;
      do {
        lVar15 = *(long *)(lVar17 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(lVar17 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(lVar17 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar17 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar17 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
            *(int *)(lVar17 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar18;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar13 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x22 = (ulong)*(int *)(lVar17 + 0x40);
      } while ((long)uVar19 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar17 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar15 = *(long *)(lVar17 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(lVar17 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(lVar17 + 0x40) = uVar13 + 1;
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(lVar17 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
          iVar9 = iVar9 - iVar18;
          iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(lVar17 + 0x30) = 0xffffffff;
          return uVar10;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d6cea8);
  iVar18 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar14,uVar11);
  puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar20 = &puStack_80;
  lVar17 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_a4 = iVar18;
  uStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  uStack_90 = uVar10;
  uStack_88 = uVar14;
  puStack_80 = &stack0xffffffffffffffd0;
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar24._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,iVar8,4);
    lVar17 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar17 != 0) {
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,(iVar8 - iVar9) + iVar18,2);
      if ((uVar10 & 0xffff) != 0) {
        return uVar10;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar14,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar17);
  uVar14 = func_0x00f78a24(0x3d56a50);
  puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar22 = func_0x00f78ac0(uVar10,uVar14);
  puVar3 = auStack_b0;
  do {
    uVar19 = auVar22._8_8_;
    lVar15 = auVar22._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar10;
    *(long *)(puVar3 + -0x18) = lVar17;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar20;
    *(undefined **)(puVar3 + -8) = puVar21;
    ppuVar20 = (undefined1 **)(puVar3 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
code_r0x016cef70:
      if (*(long *)(lVar15 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
        return uVar10;
      }
    }
    else if (lVar15 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
      if ((*(long *)(lVar15 + 0x18) != 0) &&
         (lVar17 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar17 != 0)) {
        uVar19 = (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar15 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar19);
        goto code_r0x016cef70;
      }
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar22 = func_0x00f78af4();
    uVar11 = 0;
    puVar3 = puVar3 + -0x20;
    lVar17 = lVar15;
    uVar10 = uVar19;
  } while( true );
}



// ============================================================
// RVA: 0x1683d90 | Core.Services.ResolveSaveRequest.AddKeepLocal
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ResolveSaveRequest__AddKeepLocal
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 unaff_x19;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  ulong auStack_c0 [4];
  undefined1 auStack_a0 [12];
  int iStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
    uVar14 = 1;
    param_4 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce420;
  }
  lVar9 = func_0x00f78af4();
  puStack_18 = &Core_Services_ResolveSaveRequest__EndResolveSaveRequest;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a0b & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d3f218);
    bRam0000000003eb5a0b = 1;
  }
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4();
    if (lVar9 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar14 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    puVar19 = &stack0xffffffffffffffc0;
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
    if (*(long *)(lVar9 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 2) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar9 + 0x28) = uVar14;
      }
      *(undefined4 *)(lVar9 + 0x30) = 2;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      *(int *)(lVar9 + 0x34) = (int)uVar10;
      return uVar10;
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar22 = func_0x00f78af4();
    do {
      unaff_x19 = auVar22._8_8_;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = lVar9;
      *(undefined1 **)(puVar2 + -0x10) = puVar19;
      *(undefined **)(puVar2 + -8) = puVar21;
      unaff_x29 = puVar2 + -0x10;
      uVar13 = auVar22._8_4_;
      if ((int)uVar13 < *(int *)(auVar22._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar22._0_8_ + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        param_2 = uVar14;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        unaff_x19 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d6ceb8);
        param_2 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar14);
        uVar14 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(unaff_x19,uVar14);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar14 = func_0x00f78b24();
      unaff_x30 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar22 = func_0x00f78ac0(uVar14,0);
      uVar14 = auVar22._8_8_;
      param_1 = auVar22._0_8_;
      puVar2 = puVar2 + -0x20;
code_r0x016ce420:
      auVar22._8_8_ = uVar14;
      auVar22._0_8_ = param_1;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      if (((int)param_2 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,param_2);
      puVar19 = *(undefined1 **)(puVar2 + -0x10);
      puVar21 = *(undefined **)(puVar2 + -8);
      unaff_x20 = *(long *)(puVar2 + -0x20);
      lVar9 = *(long *)(puVar2 + -0x18);
      unaff_x22 = *(ulong *)(puVar2 + -0x30);
      unaff_x21 = *(ulong *)(puVar2 + -0x28);
    } while( true );
  }
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar9 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
    uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
    unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
    uVar13 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(lVar9 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar15 = *(long *)(lVar9 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar15 = *(long *)(lVar9 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(lVar9 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
        if (sVar3 == sVar4) {
          if (sVar3 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar9 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
            iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
            if (iVar7 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar7 = iVar7 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar7 = 2;
          while( true ) {
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar13 + iVar7,2);
            if (sVar4 != sVar5) break;
            iVar7 = iVar7 + 2;
            if (sVar3 <= iVar7) goto code_r0x016cec64;
          }
        }
        uVar18 = uVar18 + 1;
        unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
      } while ((long)uVar18 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar9 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar15 = *(long *)(lVar9 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar13 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar6;
        unaff_x21 = *(ulong *)(lVar9 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          iVar8 = iVar8 - iVar17;
          iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
          *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
          return uVar10;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar23 = func_0x00f78ac0(uVar14,uVar11);
  puStack_68 = &FlatBuffers_FlatBufferBuilder__Required;
  pppuVar20 = &ppuStack_70;
  lVar9 = *(long *)(auVar23._0_8_ + 0x18);
  iStack_94 = iVar17;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  uStack_80 = uVar10;
  uStack_78 = uVar14;
  ppuStack_70 = &puStack_20;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar23._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar23._0_8_ + 0x18);
    if (lVar9 != 0) {
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar17,2);
      if ((uVar10 & 0xffff) != 0) {
        return uVar10;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar14,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar14 = func_0x00f78a24(0x3d56a50);
  puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar22 = func_0x00f78ac0(uVar10,uVar14);
  puVar2 = auStack_a0;
  do {
    uVar18 = auVar22._8_8_;
    lVar15 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar15 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
        return uVar10;
      }
    }
    else if (lVar15 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar18);
      if ((*(long *)(lVar15 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar15 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar22 = func_0x00f78af4();
    uVar11 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar15;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x1683db4 | Core.Services.ResolveSaveRequest.EndResolveSaveRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ResolveSaveRequest__EndResolveSaveRequest
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_b0 [5];
  int iStack_84;
  ulong auStack_80 [4];
  undefined *apuStack_60 [2];
  
  if ((bRam0000000003eb5a0b & 1) == 0) {
    func_0x00f78a20(0x3d3f218);
    bRam0000000003eb5a0b = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 2;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 2) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 2;
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
      *(int *)(lVar15 + 0x34) = (int)uVar18;
      return uVar18;
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffb0;
    do {
      uVar12 = auVar23._8_8_;
      *(long *)(puVar2 + -0x20) = lVar16;
      *(long *)(puVar2 + -0x18) = lVar15;
      *(undefined1 **)(puVar2 + -0x10) = puVar20;
      *(undefined **)(puVar2 + -8) = puVar22;
      uVar13 = auVar23._8_4_;
      if ((int)uVar13 < *(int *)(auVar23._0_8_ + 0x30)) {
        lVar16 = *(long *)(auVar23._0_8_ + 0x28);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar14 = uVar11;
        if (lVar16 == 0) goto code_r0x016ce410;
        if (uVar13 < *(uint *)(lVar16 + 0x18)) {
          *(int *)(lVar16 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar18;
          return uVar18;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar12 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar12,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar11 = func_0x00f78b24();
      auVar23 = func_0x00f78ac0(uVar11,0);
      uVar18 = auVar23._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x48) = uVar10;
      *(long *)(puVar2 + -0x40) = lVar16;
      *(undefined8 *)(puVar2 + -0x38) = uVar12;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar14 == (int)param_4) && (*(char *)(uVar18 + 0x48) == '\0')) {
        return uVar18;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar18,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar18,uVar14);
      puVar20 = *(undefined1 **)(puVar2 + -0x30);
      puVar22 = *(undefined **)(puVar2 + -0x28);
      lVar16 = *(long *)(puVar2 + -0x40);
      lVar15 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      uVar10 = *(undefined8 *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
    uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_1 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar18;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar19 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar18 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)sVar4);
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar19);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)uVar18 - (short)uVar7));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      uVar19 = 0;
      do {
        lVar15 = *(long *)(param_1 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(param_1 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(param_1 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(param_1 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(param_1 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(param_1 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar13 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x22 = (ulong)*(int *)(param_1 + 0x40);
      } while ((long)uVar19 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(param_1 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar15 = *(long *)(param_1 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(param_1 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(param_1 + 0x40) = uVar13 + 1;
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(param_1 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
          iVar9 = iVar9 - iVar17;
          iVar8 = iVar8 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
          return uVar18;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar10,uVar11);
  apuStack_60[1] = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar21 = apuStack_60;
  lVar15 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_84 = iVar17;
  auStack_80[0] = unaff_x22;
  auStack_80[1] = unaff_x21;
  auStack_80[2] = uVar18;
  auStack_80[3] = uVar10;
  apuStack_60[0] = &stack0xfffffffffffffff0;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar24._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar8,4);
    lVar15 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar18 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar8 - iVar9) + iVar17,2);
      if ((uVar18 & 0xffff) != 0) {
        return uVar18;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_84,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar10,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar18 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar15);
  uVar10 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar23 = func_0x00f78ac0(uVar18,uVar10);
  puVar3 = auStack_b0 + 4;
  do {
    uVar19 = auVar23._8_8_;
    lVar16 = auVar23._0_8_;
    *(ulong *)((long)puVar3 + -0x20) = uVar18;
    *(long *)((long)puVar3 + -0x18) = lVar15;
    *(undefined ***)((long)puVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)puVar3 + -8) = puVar22;
    ppuVar21 = (undefined **)((long)puVar3 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
      if (*(long *)(lVar16 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
        return uVar18;
      }
    }
    else if (lVar16 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar15 != 0)) {
        uVar19 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar16 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar23 = func_0x00f78af4();
    uVar11 = 0;
    puVar3 = (ulong *)((long)puVar3 + -0x20);
    lVar15 = lVar16;
    uVar18 = uVar19;
  } while( true );
}



// ============================================================
// RVA: 0x1683e00 | Core.Services.ResolveSaveRequest.StartResolveSaveRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_ResolveSaveRequest__StartResolveSaveRequest
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  long alStack_80 [10];
  
  if (param_1 == 0) {
    lVar7 = func_0x00f78af4();
    return *(long *)(lVar7 + 8);
  }
  uVar5 = 0;
  puVar9 = &stack0xfffffffffffffff0;
  lVar7 = 2;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 2) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 2;
    lVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    *(int *)(param_1 + 0x34) = (int)lVar7;
    return lVar7;
  }
  puVar10 = &FlatBuffers_FlatBufferBuilder__Slot;
  auVar11 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  do {
    uVar3 = auVar11._8_8_;
    *(long *)(puVar1 + -0x20) = lVar7;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    uVar4 = auVar11._8_4_;
    if ((int)uVar4 < *(int *)(auVar11._0_8_ + 0x30)) {
      lVar7 = *(long *)(auVar11._0_8_ + 0x28);
      lVar2 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar6 = uVar5;
      if (lVar7 == 0) goto code_r0x016ce410;
      if (uVar4 < *(uint *)(lVar7 + 0x18)) {
        *(int *)(lVar7 + (long)(int)uVar4 * 4 + 0x20) = (int)lVar2;
        return lVar2;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar3 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d6ceb8);
      uVar6 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar3,uVar5);
      uVar5 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar3,uVar5);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar5 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar5,0);
    lVar2 = auVar11._0_8_;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x48) = uVar8;
    *(long *)(puVar1 + -0x40) = lVar7;
    *(undefined8 *)(puVar1 + -0x38) = uVar3;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar6 == param_4) && (*(char *)(lVar2 + 0x48) == '\0')) {
      return lVar2;
    }
    uVar5 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar2,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(lVar2,uVar6);
    puVar9 = *(undefined1 **)(puVar1 + -0x30);
    puVar10 = *(undefined **)(puVar1 + -0x28);
    lVar7 = *(long *)(puVar1 + -0x40);
    param_1 = *(long *)(puVar1 + -0x38);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x50);
    uVar8 = *(undefined8 *)(puVar1 + -0x48);
    puVar1 = puVar1 + -0x20;
  } while( true );
}



