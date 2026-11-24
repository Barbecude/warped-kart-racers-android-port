// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Response

// ============================================================
// RVA: 0x1683e1c | Core.Services.Response.get_ByteBuffer
// ============================================================

undefined8 Core_Services_Response__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1683e24 | Core.Services.Response.GetRootAsResponse
// ============================================================

undefined1  [16] Core_Services_Response__GetRootAsResponse(long param_1)

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
// RVA: 0x1683e30 | Core.Services.Response.GetRootAsResponse
// ============================================================

undefined1  [16]
Core_Services_Response__GetRootAsResponse(long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x1683e74 | Core.Services.Response.__assign
// ============================================================

undefined1  [16]
Core_Services_Response____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1683e88 | Core.Services.Response.__init
// ============================================================

void Core_Services_Response____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1683e94 | Core.Services.Response.get_RequestId
// ============================================================

/* WARNING: Possible PIC construction at 0x01683fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01683fe0) */
/* WARNING: Removing unreachable block (ram,0x01683fc8) */
/* WARNING: Removing unreachable block (ram,0x01683ff8) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__get_RequestId
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  undefined1 ****ppppuVar25;
  undefined8 ****ppppuVar26;
  undefined1 **ppuVar27;
  undefined *puVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  ulong auStack_190 [4];
  undefined1 auStack_170 [12];
  int iStack_164;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 ***pppuStack_70;
  undefined *puStack_68;
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
  puStack_28 = &Core_Services_Response__get_ErrorCode;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar13,6,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  lVar20 = *(long *)(piVar13 + 2);
  if (lVar20 != 0) {
    uVar19 = *piVar13 + (int)uVar12;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar20,uVar19,1);
    if ((*(long *)(lVar20 + 0x10) == 0) ||
       (lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar19 < *(uint *)(lVar20 + 0x18)) {
      return (long)*(char *)(lVar20 + (int)uVar19 + 0x20);
    }
    uVar15 = func_0x00f78b24();
    auVar29 = func_0x00f78ac0(uVar15,0);
    ppuStack_50 = &puStack_30;
    puStack_48 = &FlatBuffers_ByteBuffer__Get;
code_r0x016cccfc:
    uVar15 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar29._0_8_,auVar29._8_8_,1);
    lVar20 = *(long *)(auVar29._0_8_ + 0x10);
    if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar29._8_4_ < *(uint *)(lVar20 + 0x18)) {
      return (ulong)*(byte *)(lVar20 + (int)auVar29._8_4_ + 0x20);
    }
    uVar16 = func_0x00f78b24();
    auVar29 = func_0x00f78ac0(uVar16,0);
    puStack_68 = &FlatBuffers_ByteBuffer__GetStringUTF8;
    pppuStack_70 = &ppuStack_50;
    plVar17 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar20 = *(long *)(auVar29._0_8_ + 0x10);
    if ((lVar20 != 0) && (plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*plVar17 + 0x348))
                         (plVar17,*(undefined8 *)(lVar20 + 0x10),auVar29._8_8_,uVar15,
                          *(undefined8 *)(*plVar17 + 0x350));
      return uVar12;
    }
    auVar29 = func_0x00f78af4();
    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar29._0_8_,auVar29._8_8_,2);
    return (ulong)(uint)(int)sVar6;
  }
  piVar13 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Services_Response__get_PayloadType;
  uVar15 = 0;
  ppuStack_50 = &puStack_30;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar13,8);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(piVar13 + 2) != 0) {
    auVar29._8_4_ = *piVar13 + (int)uVar12;
    auVar29._0_8_ = *(long *)(piVar13 + 2);
    auVar29._12_4_ = 0;
    goto code_r0x016cccfc;
  }
  auVar29 = func_0x00f78af4();
  piVar14 = auVar29._0_8_;
  puVar3 = &stack0xffffffffffffff60;
  puStack_68 = &Core_Services_Response__CreateResponse;
  ppppuVar25 = &pppuStack_70;
  pppuStack_70 = &ppuStack_50;
  if (piVar14 != (int *)0x0) {
    puVar28 = &UNK_01683fc8;
    piVar13 = piVar14;
    unaff_x21 = param_4;
    unaff_x22 = auVar29._8_8_;
code_r0x016ce2a4:
    uVar16 = 0;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar15;
    *(int **)(puVar3 + -0x18) = piVar13;
    *(undefined1 *****)(puVar3 + -0x10) = ppppuVar25;
    *(undefined **)(puVar3 + -8) = puVar28;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 4) {
        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(piVar14 + 10) = uVar15;
      }
      piVar14[0xc] = 4;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar30 = func_0x00f78af4();
    ppppuVar4 = (undefined8 ****)(puVar3 + -0x30);
    piVar13 = piVar14;
    ppppuVar26 = (undefined8 ****)(puVar3 + -0x10);
    puVar28 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      uVar15 = auVar30._8_8_;
      *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar4 + -0x18) = piVar13;
      *(undefined8 *****)((long)ppppuVar4 + -0x10) = ppppuVar26;
      *(undefined **)((long)ppppuVar4 + -8) = puVar28;
      uVar19 = auVar30._8_4_;
      if ((int)uVar19 < *(int *)(auVar30._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar30._0_8_ + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar18 = uVar16;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar19 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar19 * 4 + 0x20) = (int)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar15 = func_0x00f78aec();
        uVar16 = func_0x00f78a24(0x3d6ceb8);
        uVar18 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar16);
        uVar16 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar15,uVar16);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar16 = func_0x00f78b24();
      auVar30 = func_0x00f78ac0(uVar16,0);
      uVar12 = auVar30._0_8_;
      *(ulong *)((long)ppppuVar4 + -0x50) = unaff_x22;
      *(ulong *)((long)ppppuVar4 + -0x48) = unaff_x21;
      *(long *)((long)ppppuVar4 + -0x40) = unaff_x20;
      *(undefined8 *)((long)ppppuVar4 + -0x38) = uVar15;
      *(undefined1 **)((long)ppppuVar4 + -0x30) = (undefined1 *)((long)ppppuVar4 + -0x10);
      *(undefined **)((long)ppppuVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar18 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar18);
      plVar17 = (long *)((long)ppppuVar4 + -0x30);
      puVar1 = (undefined8 *)((long)ppppuVar4 + -0x28);
      unaff_x20 = *(long *)((long)ppppuVar4 + -0x40);
      piVar13 = *(int **)((long)ppppuVar4 + -0x38);
      unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x50);
      unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x48);
      ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + -0x20);
      ppppuVar26 = (undefined8 ****)*plVar17;
      puVar28 = (undefined *)*puVar1;
    } while( true );
  }
  auVar29 = func_0x00f78af4();
  uVar16 = auVar29._8_8_;
  uVar12 = auVar29._0_8_;
  pppuStack_b0 = ppppuVar25;
  if (uVar12 != 0) {
    param_4 = 0;
    puStack_a8 = &Core_Services_Response__AddPayload;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar16,uVar16,0,0);
    auVar30._8_8_ = 3;
    auVar30._0_8_ = uVar12;
    ppppuVar4 = (undefined8 ****)&stack0xffffffffffffff60;
    ppppuVar26 = (undefined8 ****)pppuStack_b0;
    puVar28 = puStack_a8;
    goto code_r0x016ce380;
  }
  ppppuVar26 = &pppuStack_b0;
  puStack_a8 = &Core_Services_Response__AddPayload;
  auVar29 = func_0x00f78af4();
  uVar12 = auVar29._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar29._8_8_);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar12;
    puVar28 = &Core_Services_Response__AddRequestId;
    ppppuVar4 = &pppuStack_b0;
    goto code_r0x016ce380;
  }
  ppppuVar26 = (undefined8 ****)&stack0xffffffffffffff40;
  auVar29 = func_0x00f78af4();
  uVar12 = auVar29._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar12,auVar29._8_8_);
    auVar30._8_8_ = 2;
    auVar30._0_8_ = uVar12;
    puVar28 = &Core_Services_Response__AddPayloadType;
    ppppuVar4 = (undefined8 ****)&stack0xffffffffffffff40;
    goto code_r0x016ce380;
  }
  ppppuVar26 = (undefined8 ****)&stack0xffffffffffffff30;
  auVar29 = func_0x00f78af4();
  uVar12 = auVar29._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,auVar29._8_8_);
    auVar30._8_8_ = 1;
    auVar30._0_8_ = uVar12;
    puVar28 = &Core_Services_Response__AddErrorCode;
    ppppuVar4 = (undefined8 ****)&stack0xffffffffffffff30;
    goto code_r0x016ce380;
  }
  lVar20 = func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff00;
  ppppuVar25 = (undefined1 ****)&stack0xffffffffffffff10;
  uVar15 = 0x3eb5000;
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar20 == 0) {
    puVar28 = &Core_Services_Response__StartResponse;
    piVar14 = (int *)func_0x00f78af4();
    if (piVar14 == (int *)0x0) {
      lVar20 = func_0x00f78af4();
      return *(ulong *)(lVar20 + 8);
    }
    piVar13 = (int *)0x0;
    goto code_r0x016ce2a4;
  }
  uVar12 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar20 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,0);
    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
    unaff_x21 = (ulong)*(uint *)(lVar20 + 0x30);
    uVar19 = *(uint *)(lVar20 + 0x30) - 1;
    if (-2 < (int)uVar19) {
      uVar19 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar19;
    do {
      uVar2 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar2;
      iVar23 = (int)uVar12;
      if ((int)uVar2 < 0) goto code_r0x016ceb30;
      lVar21 = *(long *)(lVar20 + 0x28);
      if (lVar21 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar21 + 0x18) <= uVar2) goto code_r0x016ced88;
    } while (*(int *)(lVar21 + (ulong)uVar2 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar24 = unaff_x22 - 8;
      if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
      iVar10 = *(int *)(lVar21 + unaff_x22 * 4);
      sVar6 = 0;
      if (iVar10 != 0) {
        sVar6 = (short)uVar12 - (short)iVar10;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar6);
      lVar21 = *(long *)(lVar20 + 0x28);
      if (lVar21 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
      *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar19 = uVar2;
    } while (0 < (long)uVar24);
code_r0x016ceb30:
    uVar9 = *(undefined4 *)(lVar20 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)((short)uVar12 - (short)uVar9));
    uVar19 = uVar19 * 2 + 6;
    unaff_x21 = (ulong)uVar19;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)uVar19);
    unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
    if (0 < (int)*(uint *)(lVar20 + 0x40)) {
      uVar24 = 0;
      do {
        lVar21 = *(long *)(lVar20 + 0x18);
        if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
           (lVar22 = *(long *)(lVar20 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar22 + 0x18) <= uVar24) goto code_r0x016ced88;
        uVar2 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - *(int *)(lVar22 + uVar24 * 4 + 0x20);
        unaff_x21 = (ulong)uVar2;
        uVar19 = *(uint *)(lVar20 + 0x10);
        unaff_x22 = (ulong)uVar19;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
        if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
        if (sVar6 == sVar7) {
          if (sVar6 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar20 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar24) goto code_r0x016ced88;
            iVar10 = *(int *)(unaff_x21 + uVar24 * 4 + 0x20);
            if (iVar10 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar20 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
            *(int *)(lVar20 + 0x10) = iVar11;
            iVar10 = iVar10 - iVar23;
            goto code_r0x016ced3c;
          }
          iVar10 = 2;
          while( true ) {
            if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar2 + iVar10,2);
            if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar19 + iVar10,2);
            if (sVar7 != sVar8) break;
            iVar10 = iVar10 + 2;
            if (sVar6 <= iVar10) goto code_r0x016cec64;
          }
        }
        uVar24 = uVar24 + 1;
        unaff_x22 = (ulong)*(int *)(lVar20 + 0x40);
      } while ((long)uVar24 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar20 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar21 = *(long *)(lVar20 + 0x38);
        if (lVar21 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar21,unaff_x21,*(undefined4 *)(lVar21 + 0x18),0);
        *(ulong *)(lVar20 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
      }
      uVar19 = (uint)unaff_x22;
      *(uint *)(lVar20 + 0x40) = uVar19 + 1;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar19 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar19 * 4 + 0x20) = uVar9;
        unaff_x21 = *(ulong *)(lVar20 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
          iVar11 = iVar11 - iVar23;
          iVar10 = iVar10 - iVar23;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
          *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
          return uVar12;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar15 = func_0x00f78aec();
  uVar16 = func_0x00f78a24(0x3d6cea8);
  iVar23 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar16);
  uVar16 = func_0x00f78a24(0x3d56a30);
  auVar31 = func_0x00f78ac0(uVar15,uVar16);
  puStack_138 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar27 = &puStack_140;
  lVar20 = *(long *)(auVar31._0_8_ + 0x18);
  iStack_164 = iVar23;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  uStack_150 = uVar12;
  uStack_148 = uVar15;
  puStack_140 = &stack0xffffffffffffff10;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
    iVar10 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar31._8_4_;
    iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar10,4);
    lVar20 = *(long *)(auVar31._0_8_ + 0x18);
    if (lVar20 != 0) {
      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar10 - iVar11) + iVar23,2);
      if ((uVar12 & 0xffff) != 0) {
        return uVar12;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_164,0);
  uVar16 = func_0x00f78a24(0x3d6ce88);
  uVar18 = func_0x00f78a24(0x3d66338);
  lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar18,0);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar16 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar20);
  uVar15 = func_0x00f78a24(0x3d56a50);
  puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar29 = func_0x00f78ac0(uVar12,uVar15);
  puVar5 = auStack_170;
  do {
    uVar24 = auVar29._8_8_;
    lVar21 = auVar29._0_8_;
    *(ulong *)(puVar5 + -0x20) = uVar12;
    *(long *)(puVar5 + -0x18) = lVar20;
    *(undefined1 ***)(puVar5 + -0x10) = ppuVar27;
    *(undefined **)(puVar5 + -8) = puVar28;
    ppuVar27 = (undefined1 **)(puVar5 + -0x10);
    if ((int)uVar16 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
code_r0x016cef70:
      if (*(long *)(lVar21 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
        return uVar12;
      }
    }
    else if (lVar21 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
      if ((*(long *)(lVar21 + 0x18) != 0) &&
         (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
        uVar24 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar24);
        goto code_r0x016cef70;
      }
    }
    puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar29 = func_0x00f78af4();
    uVar16 = 0;
    puVar5 = puVar5 + -0x20;
    lVar20 = lVar21;
    uVar12 = uVar24;
  } while( true );
}



// ============================================================
// RVA: 0x1683ee8 | Core.Services.Response.get_ErrorCode
// ============================================================

/* WARNING: Possible PIC construction at 0x01683fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01683fe0) */
/* WARNING: Removing unreachable block (ram,0x01683fc8) */
/* WARNING: Removing unreachable block (ram,0x01683ff8) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__get_ErrorCode
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 ****ppppuVar4;
  undefined1 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  undefined1 ***pppuVar25;
  undefined1 ****ppppuVar26;
  undefined1 **ppuVar27;
  undefined *puVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  ulong auStack_170 [4];
  undefined1 auStack_150 [12];
  int iStack_144;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  lVar20 = *(long *)(param_1 + 2);
  if (lVar20 != 0) {
    uVar19 = *param_1 + (int)uVar12;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar20,uVar19,1);
    if ((*(long *)(lVar20 + 0x10) == 0) ||
       (lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar19 < *(uint *)(lVar20 + 0x18)) {
      return (long)*(char *)(lVar20 + (int)uVar19 + 0x20);
    }
    uVar15 = func_0x00f78b24();
    auVar29 = func_0x00f78ac0(uVar15,0);
    puStack_30 = &stack0xfffffffffffffff0;
    puStack_28 = &FlatBuffers_ByteBuffer__Get;
code_r0x016cccfc:
    uVar15 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar29._0_8_,auVar29._8_8_,1);
    lVar20 = *(long *)(auVar29._0_8_ + 0x10);
    if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar29._8_4_ < *(uint *)(lVar20 + 0x18)) {
      return (ulong)*(byte *)(lVar20 + (int)auVar29._8_4_ + 0x20);
    }
    uVar16 = func_0x00f78b24();
    auVar29 = func_0x00f78ac0(uVar16,0);
    puStack_48 = &FlatBuffers_ByteBuffer__GetStringUTF8;
    ppuStack_50 = &puStack_30;
    plVar17 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar20 = *(long *)(auVar29._0_8_ + 0x10);
    if ((lVar20 != 0) && (plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*plVar17 + 0x348))
                         (plVar17,*(undefined8 *)(lVar20 + 0x10),auVar29._8_8_,uVar15,
                          *(undefined8 *)(*plVar17 + 0x350));
      return uVar12;
    }
    auVar29 = func_0x00f78af4();
    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar29._0_8_,auVar29._8_8_,2);
    return (ulong)(uint)(int)sVar6;
  }
  piVar13 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_Response__get_PayloadType;
  uVar15 = 0;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar13,8);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(piVar13 + 2) != 0) {
    auVar29._8_4_ = *piVar13 + (int)uVar12;
    auVar29._0_8_ = *(long *)(piVar13 + 2);
    auVar29._12_4_ = 0;
    goto code_r0x016cccfc;
  }
  auVar29 = func_0x00f78af4();
  piVar14 = auVar29._0_8_;
  puVar3 = &stack0xffffffffffffff80;
  puStack_48 = &Core_Services_Response__CreateResponse;
  pppuVar25 = &ppuStack_50;
  ppuStack_50 = &puStack_30;
  if (piVar14 != (int *)0x0) {
    puVar28 = &UNK_01683fc8;
    piVar13 = piVar14;
    unaff_x21 = param_4;
    unaff_x22 = auVar29._8_8_;
code_r0x016ce2a4:
    uVar16 = 0;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar15;
    *(int **)(puVar3 + -0x18) = piVar13;
    *(undefined1 ****)(puVar3 + -0x10) = pppuVar25;
    *(undefined **)(puVar3 + -8) = puVar28;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 4) {
        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(piVar14 + 10) = uVar15;
      }
      piVar14[0xc] = 4;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar30 = func_0x00f78af4();
    ppppuVar4 = (undefined1 ****)(puVar3 + -0x30);
    piVar13 = piVar14;
    ppppuVar26 = (undefined1 ****)(puVar3 + -0x10);
    puVar28 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      uVar15 = auVar30._8_8_;
      *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar4 + -0x18) = piVar13;
      *(undefined1 *****)((long)ppppuVar4 + -0x10) = ppppuVar26;
      *(undefined **)((long)ppppuVar4 + -8) = puVar28;
      uVar19 = auVar30._8_4_;
      if ((int)uVar19 < *(int *)(auVar30._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar30._0_8_ + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar18 = uVar16;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar19 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar19 * 4 + 0x20) = (int)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar15 = func_0x00f78aec();
        uVar16 = func_0x00f78a24(0x3d6ceb8);
        uVar18 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar16);
        uVar16 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar15,uVar16);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar16 = func_0x00f78b24();
      auVar30 = func_0x00f78ac0(uVar16,0);
      uVar12 = auVar30._0_8_;
      *(ulong *)((long)ppppuVar4 + -0x50) = unaff_x22;
      *(ulong *)((long)ppppuVar4 + -0x48) = unaff_x21;
      *(long *)((long)ppppuVar4 + -0x40) = unaff_x20;
      *(undefined8 *)((long)ppppuVar4 + -0x38) = uVar15;
      *(undefined1 **)((long)ppppuVar4 + -0x30) = (undefined1 *)((long)ppppuVar4 + -0x10);
      *(undefined **)((long)ppppuVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar18 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar18);
      plVar17 = (long *)((long)ppppuVar4 + -0x30);
      puVar1 = (undefined8 *)((long)ppppuVar4 + -0x28);
      unaff_x20 = *(long *)((long)ppppuVar4 + -0x40);
      piVar13 = *(int **)((long)ppppuVar4 + -0x38);
      unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x50);
      unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x48);
      ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x20);
      ppppuVar26 = (undefined1 ****)*plVar17;
      puVar28 = (undefined *)*puVar1;
    } while( true );
  }
  auVar29 = func_0x00f78af4();
  uVar16 = auVar29._8_8_;
  uVar12 = auVar29._0_8_;
  pppuStack_90 = pppuVar25;
  if (uVar12 != 0) {
    param_4 = 0;
    puStack_88 = &Core_Services_Response__AddPayload;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar16,uVar16,0,0);
    auVar30._8_8_ = 3;
    auVar30._0_8_ = uVar12;
    ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff80;
    ppppuVar26 = (undefined1 ****)pppuStack_90;
    puVar28 = puStack_88;
    goto code_r0x016ce380;
  }
  ppppuVar26 = &pppuStack_90;
  puStack_88 = &Core_Services_Response__AddPayload;
  auVar29 = func_0x00f78af4();
  uVar12 = auVar29._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar29._8_8_);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar12;
    puVar28 = &Core_Services_Response__AddRequestId;
    ppppuVar4 = &pppuStack_90;
    goto code_r0x016ce380;
  }
  ppppuVar26 = (undefined1 ****)&stack0xffffffffffffff60;
  auVar29 = func_0x00f78af4();
  uVar12 = auVar29._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar12,auVar29._8_8_);
    auVar30._8_8_ = 2;
    auVar30._0_8_ = uVar12;
    puVar28 = &Core_Services_Response__AddPayloadType;
    ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff60;
    goto code_r0x016ce380;
  }
  ppppuVar26 = (undefined1 ****)&stack0xffffffffffffff50;
  auVar29 = func_0x00f78af4();
  uVar12 = auVar29._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar29._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,auVar29._8_8_);
    auVar30._8_8_ = 1;
    auVar30._0_8_ = uVar12;
    puVar28 = &Core_Services_Response__AddErrorCode;
    ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff50;
    goto code_r0x016ce380;
  }
  lVar20 = func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff20;
  pppuVar25 = (undefined1 ***)&stack0xffffffffffffff30;
  uVar15 = 0x3eb5000;
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar20 == 0) {
    puVar28 = &Core_Services_Response__StartResponse;
    piVar14 = (int *)func_0x00f78af4();
    if (piVar14 == (int *)0x0) {
      lVar20 = func_0x00f78af4();
      return *(ulong *)(lVar20 + 8);
    }
    piVar13 = (int *)0x0;
    goto code_r0x016ce2a4;
  }
  uVar12 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar20 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,0);
    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
    unaff_x21 = (ulong)*(uint *)(lVar20 + 0x30);
    uVar19 = *(uint *)(lVar20 + 0x30) - 1;
    if (-2 < (int)uVar19) {
      uVar19 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar19;
    do {
      uVar2 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar2;
      iVar23 = (int)uVar12;
      if ((int)uVar2 < 0) goto code_r0x016ceb30;
      lVar21 = *(long *)(lVar20 + 0x28);
      if (lVar21 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar21 + 0x18) <= uVar2) goto code_r0x016ced88;
    } while (*(int *)(lVar21 + (ulong)uVar2 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar24 = unaff_x22 - 8;
      if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
      iVar10 = *(int *)(lVar21 + unaff_x22 * 4);
      sVar6 = 0;
      if (iVar10 != 0) {
        sVar6 = (short)uVar12 - (short)iVar10;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar6);
      lVar21 = *(long *)(lVar20 + 0x28);
      if (lVar21 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
      *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar19 = uVar2;
    } while (0 < (long)uVar24);
code_r0x016ceb30:
    uVar9 = *(undefined4 *)(lVar20 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)((short)uVar12 - (short)uVar9));
    uVar19 = uVar19 * 2 + 6;
    unaff_x21 = (ulong)uVar19;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)uVar19);
    unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
    if (0 < (int)*(uint *)(lVar20 + 0x40)) {
      uVar24 = 0;
      do {
        lVar21 = *(long *)(lVar20 + 0x18);
        if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
           (lVar22 = *(long *)(lVar20 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar22 + 0x18) <= uVar24) goto code_r0x016ced88;
        uVar2 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - *(int *)(lVar22 + uVar24 * 4 + 0x20);
        unaff_x21 = (ulong)uVar2;
        uVar19 = *(uint *)(lVar20 + 0x10);
        unaff_x22 = (ulong)uVar19;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
        if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
        if (sVar6 == sVar7) {
          if (sVar6 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar20 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar24) goto code_r0x016ced88;
            iVar10 = *(int *)(unaff_x21 + uVar24 * 4 + 0x20);
            if (iVar10 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar20 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
            *(int *)(lVar20 + 0x10) = iVar11;
            iVar10 = iVar10 - iVar23;
            goto code_r0x016ced3c;
          }
          iVar10 = 2;
          while( true ) {
            if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar2 + iVar10,2);
            if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar19 + iVar10,2);
            if (sVar7 != sVar8) break;
            iVar10 = iVar10 + 2;
            if (sVar6 <= iVar10) goto code_r0x016cec64;
          }
        }
        uVar24 = uVar24 + 1;
        unaff_x22 = (ulong)*(int *)(lVar20 + 0x40);
      } while ((long)uVar24 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar20 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar21 = *(long *)(lVar20 + 0x38);
        if (lVar21 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar21,unaff_x21,*(undefined4 *)(lVar21 + 0x18),0);
        *(ulong *)(lVar20 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
      }
      uVar19 = (uint)unaff_x22;
      *(uint *)(lVar20 + 0x40) = uVar19 + 1;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar19 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar19 * 4 + 0x20) = uVar9;
        unaff_x21 = *(ulong *)(lVar20 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
          iVar11 = iVar11 - iVar23;
          iVar10 = iVar10 - iVar23;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
          *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
          return uVar12;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar15 = func_0x00f78aec();
  uVar16 = func_0x00f78a24(0x3d6cea8);
  iVar23 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar16);
  uVar16 = func_0x00f78a24(0x3d56a30);
  auVar31 = func_0x00f78ac0(uVar15,uVar16);
  puStack_118 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar27 = &puStack_120;
  lVar20 = *(long *)(auVar31._0_8_ + 0x18);
  iStack_144 = iVar23;
  uStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  uStack_130 = uVar12;
  uStack_128 = uVar15;
  puStack_120 = &stack0xffffffffffffff30;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
    iVar10 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar31._8_4_;
    iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar10,4);
    lVar20 = *(long *)(auVar31._0_8_ + 0x18);
    if (lVar20 != 0) {
      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar10 - iVar11) + iVar23,2);
      if ((uVar12 & 0xffff) != 0) {
        return uVar12;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_144,0);
  uVar16 = func_0x00f78a24(0x3d6ce88);
  uVar18 = func_0x00f78a24(0x3d66338);
  lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar18,0);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar16 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar20);
  uVar15 = func_0x00f78a24(0x3d56a50);
  puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar29 = func_0x00f78ac0(uVar12,uVar15);
  puVar5 = auStack_150;
  do {
    uVar24 = auVar29._8_8_;
    lVar21 = auVar29._0_8_;
    *(ulong *)(puVar5 + -0x20) = uVar12;
    *(long *)(puVar5 + -0x18) = lVar20;
    *(undefined1 ***)(puVar5 + -0x10) = ppuVar27;
    *(undefined **)(puVar5 + -8) = puVar28;
    ppuVar27 = (undefined1 **)(puVar5 + -0x10);
    if ((int)uVar16 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
code_r0x016cef70:
      if (*(long *)(lVar21 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
        return uVar12;
      }
    }
    else if (lVar21 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
      if ((*(long *)(lVar21 + 0x18) != 0) &&
         (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
        uVar24 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar24);
        goto code_r0x016cef70;
      }
    }
    puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar29 = func_0x00f78af4();
    uVar16 = 0;
    puVar5 = puVar5 + -0x20;
    lVar20 = lVar21;
    uVar12 = uVar24;
  } while( true );
}



// ============================================================
// RVA: 0x1683f3c | Core.Services.Response.get_PayloadType
// ============================================================

/* WARNING: Possible PIC construction at 0x01683fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01683fe0) */
/* WARNING: Removing unreachable block (ram,0x01683fc8) */
/* WARNING: Removing unreachable block (ram,0x01683ff8) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__get_PayloadType
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  int iVar23;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  undefined1 ***pppuVar25;
  undefined1 **ppuVar26;
  undefined *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_150 [4];
  undefined1 auStack_130 [12];
  int iStack_124;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar18 = 0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    uVar17 = *param_1 + (int)uVar12;
    uVar18 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar19,uVar17,1);
    if ((*(long *)(lVar19 + 0x10) == 0) ||
       (lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10), lVar19 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar17 < *(uint *)(lVar19 + 0x18)) {
      return (ulong)*(byte *)(lVar19 + (int)uVar17 + 0x20);
    }
    uVar14 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar14,0);
    puStack_28 = &FlatBuffers_ByteBuffer__GetStringUTF8;
    puStack_30 = &stack0xfffffffffffffff0;
    plVar15 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar19 = *(long *)(auVar28._0_8_ + 0x10);
    if ((lVar19 != 0) && (plVar15 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*plVar15 + 0x348))
                         (plVar15,*(undefined8 *)(lVar19 + 0x10),auVar28._8_8_,uVar18,
                          *(undefined8 *)(*plVar15 + 0x350));
      return uVar12;
    }
    auVar28 = func_0x00f78af4();
    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar28._0_8_,auVar28._8_8_,2);
    return (ulong)(uint)(int)sVar6;
  }
  auVar28 = func_0x00f78af4();
  piVar13 = auVar28._0_8_;
  puVar3 = &stack0xffffffffffffffa0;
  puStack_28 = &Core_Services_Response__CreateResponse;
  ppuVar26 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar13 != (int *)0x0) {
    puVar27 = &UNK_01683fc8;
    piVar22 = piVar13;
    unaff_x21 = param_4;
    unaff_x22 = auVar28._8_8_;
code_r0x016ce2a4:
    uVar14 = 0;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar18;
    *(int **)(puVar3 + -0x18) = piVar22;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar26;
    *(undefined **)(puVar3 + -8) = puVar27;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 4) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(piVar13 + 10) = uVar18;
      }
      piVar13[0xc] = 4;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar28 = func_0x00f78af4();
    pppuVar4 = (undefined1 ***)(puVar3 + -0x30);
    param_1 = piVar13;
    pppuVar25 = (undefined1 ***)(puVar3 + -0x10);
    puVar27 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      uVar18 = auVar28._8_8_;
      *(long *)((long)pppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar4 + -0x18) = param_1;
      *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar25;
      *(undefined **)((long)pppuVar4 + -8) = puVar27;
      uVar17 = auVar28._8_4_;
      if ((int)uVar17 < *(int *)(auVar28._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar28._0_8_ + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar16 = uVar14;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar18 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d6ceb8);
        uVar16 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar18,uVar14);
        uVar14 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar18,uVar14);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar14 = func_0x00f78b24();
      auVar28 = func_0x00f78ac0(uVar14,0);
      uVar12 = auVar28._0_8_;
      *(ulong *)((long)pppuVar4 + -0x50) = unaff_x22;
      *(ulong *)((long)pppuVar4 + -0x48) = unaff_x21;
      *(long *)((long)pppuVar4 + -0x40) = unaff_x20;
      *(undefined8 *)((long)pppuVar4 + -0x38) = uVar18;
      *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x10);
      *(undefined **)((long)pppuVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
      plVar15 = (long *)((long)pppuVar4 + -0x30);
      puVar1 = (undefined8 *)((long)pppuVar4 + -0x28);
      unaff_x20 = *(long *)((long)pppuVar4 + -0x40);
      param_1 = *(int **)((long)pppuVar4 + -0x38);
      unaff_x22 = *(ulong *)((long)pppuVar4 + -0x50);
      unaff_x21 = *(ulong *)((long)pppuVar4 + -0x48);
      pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x20);
      pppuVar25 = (undefined1 ***)*plVar15;
      puVar27 = (undefined *)*puVar1;
    } while( true );
  }
  auVar28 = func_0x00f78af4();
  uVar14 = auVar28._8_8_;
  uVar12 = auVar28._0_8_;
  ppuStack_70 = ppuVar26;
  if (uVar12 != 0) {
    param_4 = 0;
    puStack_68 = &Core_Services_Response__AddPayload;
    if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar14,uVar14,0,0);
    auVar28._8_8_ = 3;
    auVar28._0_8_ = uVar12;
    pppuVar4 = (undefined1 ***)&stack0xffffffffffffffa0;
    pppuVar25 = (undefined1 ***)ppuStack_70;
    puVar27 = puStack_68;
    goto code_r0x016ce380;
  }
  pppuVar25 = &ppuStack_70;
  puStack_68 = &Core_Services_Response__AddPayload;
  auVar28 = func_0x00f78af4();
  uVar12 = auVar28._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar28._8_8_);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar12;
    puVar27 = &Core_Services_Response__AddRequestId;
    pppuVar4 = &ppuStack_70;
    goto code_r0x016ce380;
  }
  pppuVar25 = (undefined1 ***)&stack0xffffffffffffff80;
  auVar28 = func_0x00f78af4();
  uVar12 = auVar28._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar12,auVar28._8_8_);
    auVar28._8_8_ = 2;
    auVar28._0_8_ = uVar12;
    puVar27 = &Core_Services_Response__AddPayloadType;
    pppuVar4 = (undefined1 ***)&stack0xffffffffffffff80;
    goto code_r0x016ce380;
  }
  pppuVar25 = (undefined1 ***)&stack0xffffffffffffff70;
  auVar28 = func_0x00f78af4();
  uVar12 = auVar28._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,auVar28._8_8_);
    auVar28._8_8_ = 1;
    auVar28._0_8_ = uVar12;
    puVar27 = &Core_Services_Response__AddErrorCode;
    pppuVar4 = (undefined1 ***)&stack0xffffffffffffff70;
    goto code_r0x016ce380;
  }
  lVar19 = func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff40;
  ppuVar26 = (undefined1 **)&stack0xffffffffffffff50;
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar19 == 0) {
    puVar27 = &Core_Services_Response__StartResponse;
    piVar13 = (int *)func_0x00f78af4();
    if (piVar13 == (int *)0x0) {
      lVar19 = func_0x00f78af4();
      return *(ulong *)(lVar19 + 8);
    }
    piVar22 = (int *)0x0;
    goto code_r0x016ce2a4;
  }
  uVar12 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar19 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
    uVar17 = *(uint *)(lVar19 + 0x30) - 1;
    if (-2 < (int)uVar17) {
      uVar17 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar17;
    do {
      uVar2 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar2;
      iVar23 = (int)uVar12;
      if ((int)uVar2 < 0) goto code_r0x016ceb30;
      lVar20 = *(long *)(lVar19 + 0x28);
      if (lVar20 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar20 + 0x18) <= uVar2) goto code_r0x016ced88;
    } while (*(int *)(lVar20 + (ulong)uVar2 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar24 = unaff_x22 - 8;
      if (*(uint *)(lVar20 + 0x18) <= uVar24) goto code_r0x016ced88;
      iVar10 = *(int *)(lVar20 + unaff_x22 * 4);
      sVar6 = 0;
      if (iVar10 != 0) {
        sVar6 = (short)uVar12 - (short)iVar10;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar6);
      lVar20 = *(long *)(lVar19 + 0x28);
      if (lVar20 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar20 + 0x18) <= uVar24) goto code_r0x016ced88;
      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar17 = uVar2;
    } while (0 < (long)uVar24);
code_r0x016ceb30:
    uVar9 = *(undefined4 *)(lVar19 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar12 - (short)uVar9));
    uVar17 = uVar17 * 2 + 6;
    unaff_x21 = (ulong)uVar17;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar17);
    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
      uVar24 = 0;
      do {
        lVar20 = *(long *)(lVar19 + 0x18);
        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
        uVar2 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - *(int *)(lVar21 + uVar24 * 4 + 0x20);
        unaff_x21 = (ulong)uVar2;
        uVar17 = *(uint *)(lVar19 + 0x10);
        unaff_x22 = (ulong)uVar17;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
        if (sVar6 == sVar7) {
          if (sVar6 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar19 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar24) goto code_r0x016ced88;
            iVar10 = *(int *)(unaff_x21 + uVar24 * 4 + 0x20);
            if (iVar10 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar19 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
            *(int *)(lVar19 + 0x10) = iVar11;
            iVar10 = iVar10 - iVar23;
            goto code_r0x016ced3c;
          }
          iVar10 = 2;
          while( true ) {
            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar2 + iVar10,2);
            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar17 + iVar10,2);
            if (sVar7 != sVar8) break;
            iVar10 = iVar10 + 2;
            if (sVar6 <= iVar10) goto code_r0x016cec64;
          }
        }
        uVar24 = uVar24 + 1;
        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
      } while ((long)uVar24 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar19 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar20 = *(long *)(lVar19 + 0x38);
        if (lVar20 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
        *(ulong *)(lVar19 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
      }
      uVar17 = (uint)unaff_x22;
      *(uint *)(lVar19 + 0x40) = uVar17 + 1;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar9;
        unaff_x21 = *(ulong *)(lVar19 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
          iVar11 = iVar11 - iVar23;
          iVar10 = iVar10 - iVar23;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
  iVar23 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar14);
  uVar14 = func_0x00f78a24(0x3d56a30);
  auVar29 = func_0x00f78ac0(uVar18,uVar14);
  puStack_f8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar26 = &puStack_100;
  lVar19 = *(long *)(auVar29._0_8_ + 0x18);
  iStack_124 = iVar23;
  uStack_120 = unaff_x22;
  uStack_118 = unaff_x21;
  uStack_110 = uVar12;
  uStack_108 = uVar18;
  puStack_100 = &stack0xffffffffffffff50;
  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
    iVar10 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar29._8_4_;
    iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar10,4);
    lVar19 = *(long *)(auVar29._0_8_ + 0x18);
    if (lVar19 != 0) {
      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar10 - iVar11) + iVar23,2);
      if ((uVar12 & 0xffff) != 0) {
        return uVar12;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_124,0);
  uVar14 = func_0x00f78a24(0x3d6ce88);
  uVar16 = func_0x00f78a24(0x3d66338);
  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar18,uVar16,0);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar19);
  uVar18 = func_0x00f78a24(0x3d56a50);
  puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar28 = func_0x00f78ac0(uVar12,uVar18);
  puVar5 = auStack_130;
  do {
    uVar24 = auVar28._8_8_;
    lVar20 = auVar28._0_8_;
    *(ulong *)(puVar5 + -0x20) = uVar12;
    *(long *)(puVar5 + -0x18) = lVar19;
    *(undefined1 ***)(puVar5 + -0x10) = ppuVar26;
    *(undefined **)(puVar5 + -8) = puVar27;
    ppuVar26 = (undefined1 **)(puVar5 + -0x10);
    if ((int)uVar14 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar24);
code_r0x016cef70:
      if (*(long *)(lVar20 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
        return uVar12;
      }
    }
    else if (lVar20 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar24);
      if ((*(long *)(lVar20 + 0x18) != 0) &&
         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
        uVar24 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar24);
        goto code_r0x016cef70;
      }
    }
    puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar28 = func_0x00f78af4();
    uVar14 = 0;
    puVar5 = puVar5 + -0x20;
    lVar19 = lVar20;
    uVar12 = uVar24;
  } while( true );
}



// ============================================================
// RVA: 0x1683f90 | Core.Services.Response.CreateResponse
// ============================================================

/* WARNING: Possible PIC construction at 0x01683fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01683ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01683fe0) */
/* WARNING: Removing unreachable block (ram,0x01683fc8) */
/* WARNING: Removing unreachable block (ram,0x01683ff8) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__CreateResponse
                (long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  short sVar7;
  undefined4 uVar10;
  short sVar8;
  short sVar9;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  int iVar20;
  long unaff_x20;
  ulong uVar21;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar22;
  undefined1 **ppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_130 [4];
  undefined1 auStack_110 [12];
  int iStack_104;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar4 = &stack0xffffffffffffffc0;
  puVar6 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar24 = (undefined *)0x1683fc8;
    lVar15 = param_1;
    unaff_x21 = param_4;
    unaff_x22 = param_2;
code_r0x016ce2a4:
    uVar13 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = param_3;
    *(long *)(puVar4 + -0x18) = lVar15;
    *(undefined1 **)(puVar4 + -0x10) = puVar6;
    *(undefined **)(puVar4 + -8) = puVar24;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 4) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(param_1 + 0x28) = uVar13;
      }
      *(undefined4 *)(param_1 + 0x30) = 4;
      uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar21;
      return uVar21;
    }
    auVar25 = func_0x00f78af4();
    ppuVar5 = (undefined1 **)(puVar4 + -0x30);
    unaff_x19 = param_1;
    ppuVar23 = (undefined1 **)(puVar4 + -0x10);
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      uVar14 = auVar25._8_8_;
      *(long *)((long)ppuVar5 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar5 + -0x10) = ppuVar23;
      *(undefined **)((long)ppuVar5 + -8) = puVar24;
      uVar17 = auVar25._8_4_;
      if ((int)uVar17 < *(int *)(auVar25._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar25._0_8_ + 0x28);
        uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar16 = uVar13;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar21;
          return uVar21;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar14 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6ceb8);
        uVar16 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar13);
        uVar13 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar14,uVar13);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar13 = func_0x00f78b24();
      auVar25 = func_0x00f78ac0(uVar13,0);
      uVar21 = auVar25._0_8_;
      *(ulong *)((long)ppuVar5 + -0x50) = unaff_x22;
      *(ulong *)((long)ppuVar5 + -0x48) = unaff_x21;
      *(long *)((long)ppuVar5 + -0x40) = unaff_x20;
      *(undefined8 *)((long)ppuVar5 + -0x38) = uVar14;
      *(undefined1 **)((long)ppuVar5 + -0x30) = (undefined1 *)((long)ppuVar5 + -0x10);
      *(undefined **)((long)ppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar16 == (int)param_4) && (*(char *)(uVar21 + 0x48) == '\0')) {
        return uVar21;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar21,uVar16);
      plVar1 = (long *)((long)ppuVar5 + -0x30);
      puVar2 = (undefined8 *)((long)ppuVar5 + -0x28);
      unaff_x20 = *(long *)((long)ppuVar5 + -0x40);
      unaff_x19 = *(long *)((long)ppuVar5 + -0x38);
      unaff_x22 = *(ulong *)((long)ppuVar5 + -0x50);
      unaff_x21 = *(ulong *)((long)ppuVar5 + -0x48);
      ppuVar5 = (undefined1 **)((long)ppuVar5 + -0x20);
      ppuVar23 = (undefined1 **)*plVar1;
      puVar24 = (undefined *)*puVar2;
    } while( true );
  }
  auVar25 = func_0x00f78af4();
  uVar13 = auVar25._8_8_;
  uVar21 = auVar25._0_8_;
  puStack_50 = puVar6;
  if (uVar21 != 0) {
    param_4 = 0;
    puStack_48 = &Core_Services_Response__AddPayload;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar21,uVar13,uVar13,0,0);
    auVar25._8_8_ = 3;
    auVar25._0_8_ = uVar21;
    ppuVar5 = (undefined1 **)&stack0xffffffffffffffc0;
    ppuVar23 = (undefined1 **)puStack_50;
    puVar24 = puStack_48;
    goto code_r0x016ce380;
  }
  ppuVar23 = &puStack_50;
  puStack_48 = &Core_Services_Response__AddPayload;
  auVar25 = func_0x00f78af4();
  uVar21 = auVar25._0_8_;
  if (uVar21 != 0) {
    param_4 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar21,auVar25._8_8_);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar21;
    puVar24 = &Core_Services_Response__AddRequestId;
    ppuVar5 = &puStack_50;
    goto code_r0x016ce380;
  }
  ppuVar23 = (undefined1 **)&stack0xffffffffffffffa0;
  auVar25 = func_0x00f78af4();
  uVar21 = auVar25._0_8_;
  if (uVar21 != 0) {
    param_4 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar21,auVar25._8_8_);
    auVar25._8_8_ = 2;
    auVar25._0_8_ = uVar21;
    puVar24 = &Core_Services_Response__AddPayloadType;
    ppuVar5 = (undefined1 **)&stack0xffffffffffffffa0;
    goto code_r0x016ce380;
  }
  ppuVar23 = (undefined1 **)&stack0xffffffffffffff90;
  auVar25 = func_0x00f78af4();
  uVar21 = auVar25._0_8_;
  if (uVar21 != 0) {
    param_4 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar21,auVar25._8_8_);
    auVar25._8_8_ = 1;
    auVar25._0_8_ = uVar21;
    puVar24 = &Core_Services_Response__AddErrorCode;
    ppuVar5 = (undefined1 **)&stack0xffffffffffffff90;
    goto code_r0x016ce380;
  }
  lVar15 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffff60;
  puVar6 = &stack0xffffffffffffff70;
  param_3 = 0x3eb5000;
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar15 == 0) {
    puVar24 = &Core_Services_Response__StartResponse;
    param_1 = func_0x00f78af4();
    if (param_1 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    lVar15 = 0;
    goto code_r0x016ce2a4;
  }
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar15 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
    uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
    unaff_x21 = (ulong)*(uint *)(lVar15 + 0x30);
    uVar17 = *(uint *)(lVar15 + 0x30) - 1;
    if (-2 < (int)uVar17) {
      uVar17 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar17;
    do {
      uVar3 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar3;
      iVar20 = (int)uVar21;
      if ((int)uVar3 < 0) goto code_r0x016ceb30;
      lVar18 = *(long *)(lVar15 + 0x28);
      if (lVar18 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar18 + 0x18) <= uVar3) goto code_r0x016ced88;
    } while (*(int *)(lVar18 + (ulong)uVar3 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar22 = unaff_x22 - 8;
      if (*(uint *)(lVar18 + 0x18) <= uVar22) goto code_r0x016ced88;
      iVar11 = *(int *)(lVar18 + unaff_x22 * 4);
      sVar7 = 0;
      if (iVar11 != 0) {
        sVar7 = (short)uVar21 - (short)iVar11;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar7);
      lVar18 = *(long *)(lVar15 + 0x28);
      if (lVar18 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar18 + 0x18) <= uVar22) goto code_r0x016ced88;
      *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar17 = uVar3;
    } while (0 < (long)uVar22);
code_r0x016ceb30:
    uVar10 = *(undefined4 *)(lVar15 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar21 - (short)uVar10));
    uVar17 = uVar17 * 2 + 6;
    unaff_x21 = (ulong)uVar17;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)uVar17);
    unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
    if (0 < (int)*(uint *)(lVar15 + 0x40)) {
      uVar22 = 0;
      do {
        lVar18 = *(long *)(lVar15 + 0x18);
        if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
           (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x016ced88;
        uVar3 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - *(int *)(lVar19 + uVar22 * 4 + 0x20);
        unaff_x21 = (ulong)uVar3;
        uVar17 = *(uint *)(lVar15 + 0x10);
        unaff_x22 = (ulong)uVar17;
        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
        if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),unaff_x22,2);
        if (sVar7 == sVar8) {
          if (sVar7 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar15 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar22) goto code_r0x016ced88;
            iVar11 = *(int *)(unaff_x21 + uVar22 * 4 + 0x20);
            if (iVar11 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar15 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar20;
            *(int *)(lVar15 + 0x10) = iVar12;
            iVar11 = iVar11 - iVar20;
            goto code_r0x016ced3c;
          }
          iVar11 = 2;
          while( true ) {
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar3 + iVar11,2);
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar17 + iVar11,2);
            if (sVar8 != sVar9) break;
            iVar11 = iVar11 + 2;
            if (sVar7 <= iVar11) goto code_r0x016cec64;
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
        lVar18 = *(long *)(lVar15 + 0x38);
        if (lVar18 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
        *(ulong *)(lVar15 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
      }
      uVar17 = (uint)unaff_x22;
      *(uint *)(lVar15 + 0x40) = uVar17 + 1;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar10;
        unaff_x21 = *(ulong *)(lVar15 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
          iVar12 = iVar12 - iVar20;
          iVar11 = iVar11 - iVar20;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
          *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
          return uVar21;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar13 = func_0x00f78b24();
    func_0x00f78ac0(uVar13,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar13 = func_0x00f78aec();
  uVar14 = func_0x00f78a24(0x3d6cea8);
  iVar20 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
  uVar14 = func_0x00f78a24(0x3d56a30);
  auVar26 = func_0x00f78ac0(uVar13,uVar14);
  puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar5 = &puStack_e0;
  lVar15 = *(long *)(auVar26._0_8_ + 0x18);
  iStack_104 = iVar20;
  uStack_100 = unaff_x22;
  uStack_f8 = unaff_x21;
  uStack_f0 = uVar21;
  uStack_e8 = uVar13;
  puStack_e0 = &stack0xffffffffffffff70;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar11 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar26._8_4_;
    iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar11,4);
    lVar15 = *(long *)(auVar26._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar21 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar11 - iVar12) + iVar20,2);
      if ((uVar21 & 0xffff) != 0) {
        return uVar21;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_104,0);
  uVar14 = func_0x00f78a24(0x3d6ce88);
  uVar16 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar16,0);
  func_0x00f78a24(0x3d22a38);
  uVar21 = func_0x00f78aec();
  uVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar21,lVar15);
  uVar13 = func_0x00f78a24(0x3d56a50);
  puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar25 = func_0x00f78ac0(uVar21,uVar13);
  puVar6 = auStack_110;
  do {
    uVar22 = auVar25._8_8_;
    lVar18 = auVar25._0_8_;
    *(ulong *)(puVar6 + -0x20) = uVar21;
    *(long *)(puVar6 + -0x18) = lVar15;
    *(undefined1 ***)(puVar6 + -0x10) = ppuVar5;
    *(undefined **)(puVar6 + -8) = puVar24;
    ppuVar5 = (undefined1 **)(puVar6 + -0x10);
    if ((int)uVar14 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
      uVar21 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar22);
code_r0x016cef70:
      if (*(long *)(lVar18 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
        return uVar21;
      }
    }
    else if (lVar18 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar22);
      if ((*(long *)(lVar18 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar15 != 0)) {
        uVar22 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar18 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
        uVar21 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar22);
        goto code_r0x016cef70;
      }
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar25 = func_0x00f78af4();
    uVar14 = 0;
    puVar6 = puVar6 + -0x20;
    lVar15 = lVar18;
    uVar21 = uVar22;
  } while( true );
}



// ============================================================
// RVA: 0x1684014 | Core.Services.Response.AddPayload
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__AddPayload
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
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 **ppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_f0 [4];
  undefined1 auStack_d0 [12];
  int iStack_c4;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 3;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      uVar12 = (uint)uVar16;
      if ((int)uVar12 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar13 = param_2;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        uVar11 = uVar16;
        if (uVar12 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar16 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar13 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar16,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
        uVar11 = uVar16;
      }
      uVar16 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar16,0);
      uVar16 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(ulong *)(puVar2 + -0x48) = unaff_x21;
      *(long *)(puVar2 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x38) = uVar11;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar13 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      param_2 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar13);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
      unaff_x30 = *(undefined **)(puVar2 + -0x28);
      unaff_x20 = *(long *)(puVar2 + -0x40);
      unaff_x19 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      unaff_x21 = *(ulong *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    param_2 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,auVar21._8_8_);
    uVar16 = 0;
    unaff_x30 = &Core_Services_Response__AddRequestId;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  unaff_x29 = &stack0xffffffffffffffe0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    param_2 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar21._8_8_);
    uVar16 = 2;
    unaff_x30 = &Core_Services_Response__AddPayloadType;
    puVar2 = &stack0xffffffffffffffe0;
    goto code_r0x016ce380;
  }
  unaff_x29 = &stack0xffffffffffffffd0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    param_2 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar21._8_8_);
    uVar16 = 1;
    unaff_x30 = &Core_Services_Response__AddErrorCode;
    puVar2 = &stack0xffffffffffffffd0;
    goto code_r0x016ce380;
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    param_2 = 0;
    puVar2 = &stack0xffffffffffffff70;
    unaff_x29 = &stack0xffffffffffffff90;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 4) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 4;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    goto code_r0x016ce380;
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
    uVar12 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar12) {
      uVar12 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar12;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar12 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar12 = uVar12 * 2 + 6;
    unaff_x21 = (ulong)uVar12;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar12);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar9 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar12 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar12;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
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
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar12 + iVar7,2);
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
        lVar14 = *(long *)(lVar9 + 0x38);
        if (lVar14 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar12 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar12 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
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
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar16,uVar13);
  puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_a0;
  lVar9 = *(long *)(auVar22._0_8_ + 0x18);
  iStack_c4 = iVar17;
  uStack_c0 = unaff_x22;
  uStack_b8 = unaff_x21;
  uStack_b0 = uVar10;
  uStack_a8 = uVar16;
  puStack_a0 = &stack0xffffffffffffffb0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar22._0_8_ + 0x18);
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
  uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar11,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar16 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar10,uVar16);
  puVar2 = auStack_d0;
  do {
    uVar18 = auVar21._8_8_;
    lVar14 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar14 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
        return uVar10;
      }
    }
    else if (lVar14 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar13 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar14;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x1684038 | Core.Services.Response.AddRequestId
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__AddRequestId
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
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 **ppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_e0 [4];
  undefined1 auStack_c0 [12];
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      uVar11 = (uint)uVar16;
      if ((int)uVar11 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar12 = uVar13;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        uVar13 = uVar16;
        if (uVar11 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar16 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6ceb8);
        uVar12 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar13);
        uVar13 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar16,uVar13);
code_r0x016ce410:
        func_0x00f78af4();
        uVar13 = uVar16;
      }
      uVar16 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar16,0);
      uVar16 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(ulong *)(puVar2 + -0x48) = unaff_x21;
      *(long *)(puVar2 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x38) = uVar13;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar12 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar12);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
      unaff_x30 = *(undefined **)(puVar2 + -0x28);
      unaff_x20 = *(long *)(puVar2 + -0x40);
      unaff_x19 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      unaff_x21 = *(ulong *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar21._8_8_);
    uVar16 = 2;
    unaff_x30 = &Core_Services_Response__AddPayloadType;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  unaff_x29 = &stack0xffffffffffffffe0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar21._8_8_);
    uVar16 = 1;
    unaff_x30 = &Core_Services_Response__AddErrorCode;
    puVar2 = &stack0xffffffffffffffe0;
    goto code_r0x016ce380;
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar13 = 0;
    puVar2 = &stack0xffffffffffffff80;
    unaff_x29 = &stack0xffffffffffffffa0;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 4) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 4;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    goto code_r0x016ce380;
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
    uVar11 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar11) {
      uVar11 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar11;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar11 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar11 = uVar11 * 2 + 6;
    unaff_x21 = (ulong)uVar11;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar11);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar9 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar11 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar11;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
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
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar11 + iVar7,2);
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
        lVar14 = *(long *)(lVar9 + 0x38);
        if (lVar14 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar11 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar11 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar11 * 4 + 0x20) = uVar6;
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
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar16,uVar13);
  puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_90;
  lVar9 = *(long *)(auVar22._0_8_ + 0x18);
  iStack_b4 = iVar17;
  uStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  uStack_a0 = uVar10;
  uStack_98 = uVar16;
  puStack_90 = &stack0xffffffffffffffc0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar22._0_8_ + 0x18);
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
  uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar16 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar10,uVar16);
  puVar2 = auStack_c0;
  do {
    uVar18 = auVar21._8_8_;
    lVar14 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar14 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
        return uVar10;
      }
    }
    else if (lVar14 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar13 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar14;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x168405c | Core.Services.Response.AddPayloadType
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__AddPayloadType
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
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 **ppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
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
    uVar16 = 2;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      uVar11 = (uint)uVar16;
      if ((int)uVar11 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar12 = uVar13;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        uVar13 = uVar16;
        if (uVar11 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar16 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6ceb8);
        uVar12 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar13);
        uVar13 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar16,uVar13);
code_r0x016ce410:
        func_0x00f78af4();
        uVar13 = uVar16;
      }
      uVar16 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar16,0);
      uVar16 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(ulong *)(puVar2 + -0x48) = unaff_x21;
      *(long *)(puVar2 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x38) = uVar13;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar12 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar12);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
      unaff_x30 = *(undefined **)(puVar2 + -0x28);
      unaff_x20 = *(long *)(puVar2 + -0x40);
      unaff_x19 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      unaff_x21 = *(ulong *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar21._8_8_);
    uVar16 = 1;
    unaff_x30 = &Core_Services_Response__AddErrorCode;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar13 = 0;
    puVar2 = &stack0xffffffffffffff90;
    unaff_x29 = &stack0xffffffffffffffb0;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 4) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 4;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    goto code_r0x016ce380;
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
    uVar11 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar11) {
      uVar11 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar11;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar11 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar11 = uVar11 * 2 + 6;
    unaff_x21 = (ulong)uVar11;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar11);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar9 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar11 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar11;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
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
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar11 + iVar7,2);
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
        lVar14 = *(long *)(lVar9 + 0x38);
        if (lVar14 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar11 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar11 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar11 * 4 + 0x20) = uVar6;
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
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar16,uVar13);
  puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_80;
  lVar9 = *(long *)(auVar22._0_8_ + 0x18);
  iStack_a4 = iVar17;
  uStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  uStack_90 = uVar10;
  uStack_88 = uVar16;
  puStack_80 = &stack0xffffffffffffffd0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar22._0_8_ + 0x18);
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
  uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar16 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar10,uVar16);
  puVar2 = auStack_b0;
  do {
    uVar18 = auVar21._8_8_;
    lVar14 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar14 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
        return uVar10;
      }
    }
    else if (lVar14 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar13 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar14;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x1684080 | Core.Services.Response.AddErrorCode
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__AddErrorCode
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
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 **ppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_c0 [4];
  undefined1 auStack_a0 [12];
  int iStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 1;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      uVar11 = (uint)uVar16;
      if ((int)uVar11 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar12 = uVar13;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        uVar13 = uVar16;
        if (uVar11 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar16 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6ceb8);
        uVar12 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar13);
        uVar13 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar16,uVar13);
code_r0x016ce410:
        func_0x00f78af4();
        uVar13 = uVar16;
      }
      uVar16 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar16,0);
      uVar16 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(ulong *)(puVar2 + -0x48) = unaff_x21;
      *(long *)(puVar2 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x38) = uVar13;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar12 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar12);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
      unaff_x30 = *(undefined **)(puVar2 + -0x28);
      unaff_x20 = *(long *)(puVar2 + -0x40);
      unaff_x19 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      unaff_x21 = *(ulong *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar13 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 4) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 4;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    goto code_r0x016ce380;
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
    uVar11 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar11) {
      uVar11 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar11;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar11 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar11 = uVar11 * 2 + 6;
    unaff_x21 = (ulong)uVar11;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar11);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar9 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar11 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar11;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
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
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar11 + iVar7,2);
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
        lVar14 = *(long *)(lVar9 + 0x38);
        if (lVar14 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar11 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar11 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar11 * 4 + 0x20) = uVar6;
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
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar16,uVar13);
  puStack_68 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_70;
  lVar9 = *(long *)(auVar22._0_8_ + 0x18);
  iStack_94 = iVar17;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  uStack_80 = uVar10;
  uStack_78 = uVar16;
  puStack_70 = &stack0xffffffffffffffe0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar22._0_8_ + 0x18);
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
  uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar16 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar10,uVar16);
  puVar2 = auStack_a0;
  do {
    uVar18 = auVar21._8_8_;
    lVar14 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar14 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
        return uVar10;
      }
    }
    else if (lVar14 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar13 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar14;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x16840a4 | Core.Services.Response.EndResponse
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Response__EndResponse
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
  
  if ((bRam0000000003eb5a0c & 1) == 0) {
    func_0x00f78a20(0x3d3f220);
    bRam0000000003eb5a0c = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 4;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 4) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 4;
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
// RVA: 0x16840f0 | Core.Services.Response.StartResponse
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_Response__StartResponse
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
  lVar7 = 4;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 4) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 4;
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



// ============================================================
// RVA: 0x18de074 | Core.Services.Response.Payload<Achievements>
// ============================================================

void Core_Services_Response__Payload_Achievements_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,10,0);
  if ((int)uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auVar2 = /*FlatBuffers.Table$$__union<Achievements>*/ func_0x018e3ab0(param_2,uVar1,**(undefined8 **)(param_3 + 0x30));
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*System.Nullable<Achievements>$$.ctor*/ func_0x02619a30(&uStack_48,auVar2._0_8_,auVar2._8_8_,
                    *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



// ============================================================
// RVA: 0x18de110 | Core.Services.Response.Payload<Group>
// ============================================================

void Core_Services_Response__Payload_Group_(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,10,0);
  if ((int)uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auVar2 = /*FlatBuffers.Table$$__union<Group>*/ func_0x018e3e14(param_2,uVar1,**(undefined8 **)(param_3 + 0x30));
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*System.Nullable<Group>$$.ctor*/ func_0x026518e0(&uStack_48,auVar2._0_8_,auVar2._8_8_,
                    *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



// ============================================================
// RVA: 0x18de1ac | Core.Services.Response.Payload<LeaderboardScores>
// ============================================================

void Core_Services_Response__Payload_LeaderboardScores_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,10,0);
  if ((int)uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auVar2 = /*FlatBuffers.Table$$__union<LeaderboardScores>*/ func_0x018e43e4(param_2,uVar1,**(undefined8 **)(param_3 + 0x30));
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*System.Nullable<LeaderboardScores>$$.ctor*/ func_0x0265b164(&uStack_48,auVar2._0_8_,auVar2._8_8_,
                    *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



// ============================================================
// RVA: 0x18de248 | Core.Services.Response.Payload<LeaderboardSets>
// ============================================================

void Core_Services_Response__Payload_LeaderboardSets_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,10,0);
  if ((int)uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auVar2 = /*FlatBuffers.Table$$__union<LeaderboardSets>*/ func_0x018e4460(param_2,uVar1,**(undefined8 **)(param_3 + 0x30));
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*System.Nullable<LeaderboardSets>$$.ctor*/ func_0x0265bcdc(&uStack_48,auVar2._0_8_,auVar2._8_8_,
                    *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



// ============================================================
// RVA: 0x18de2e4 | Core.Services.Response.Payload<Player>
// ============================================================

void Core_Services_Response__Payload_Player_(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,10,0);
  if ((int)uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auVar2 = /*FlatBuffers.Table$$__union<Player>*/ func_0x018e44dc(param_2,uVar1,**(undefined8 **)(param_3 + 0x30));
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_48,auVar2._0_8_,auVar2._8_8_,
                    *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



// ============================================================
// RVA: 0x18de380 | Core.Services.Response.Payload<Save>
// ============================================================

void Core_Services_Response__Payload_Save_(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,10,0);
  if ((int)uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auVar2 = /*FlatBuffers.Table$$__union<Save>*/ func_0x018e4558(param_2,uVar1,**(undefined8 **)(param_3 + 0x30));
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*System.Nullable<Save>$$.ctor*/ func_0x0265fca8(&uStack_48,auVar2._0_8_,auVar2._8_8_,
                    *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



// ============================================================
// RVA: 0x18de41c | Core.Services.Response.Payload<Saves>
// ============================================================

void Core_Services_Response__Payload_Saves_(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,10,0);
  if ((int)uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auVar2 = /*FlatBuffers.Table$$__union<Saves>*/ func_0x018e45d4(param_2,uVar1,**(undefined8 **)(param_3 + 0x30));
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*System.Nullable<Saves>$$.ctor*/ func_0x02660820(&uStack_48,auVar2._0_8_,auVar2._8_8_,
                    *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
  }
  return;
}



