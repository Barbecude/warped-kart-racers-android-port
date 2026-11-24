// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.DeleteSaveRequest

// ============================================================
// RVA: 0x1667724 | Core.Services.DeleteSaveRequest.get_ByteBuffer
// ============================================================

undefined8 Core_Services_DeleteSaveRequest__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x166772c | Core.Services.DeleteSaveRequest.GetRootAsDeleteSaveRequest
// ============================================================

undefined1  [16] Core_Services_DeleteSaveRequest__GetRootAsDeleteSaveRequest(long param_1)

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
// RVA: 0x1667738 | Core.Services.DeleteSaveRequest.GetRootAsDeleteSaveRequest
// ============================================================

undefined1  [16]
Core_Services_DeleteSaveRequest__GetRootAsDeleteSaveRequest
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
// RVA: 0x166777c | Core.Services.DeleteSaveRequest.__assign
// ============================================================

undefined1  [16]
Core_Services_DeleteSaveRequest____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1667790 | Core.Services.DeleteSaveRequest.__init
// ============================================================

void Core_Services_DeleteSaveRequest____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x166779c | Core.Services.DeleteSaveRequest.get_Index
// ============================================================

/* WARNING: Possible PIC construction at 0x01667810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667814) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_DeleteSaveRequest__get_Index
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 **ppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_100 [4];
  undefined1 auStack_e0 [12];
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar10,4);
    return uVar10;
  }
  auVar22 = func_0x00f78af4();
  lVar13 = auVar22._0_8_;
  puVar2 = &stack0xffffffffffffffc0;
  puStack_28 = &Core_Services_DeleteSaveRequest__CreateDeleteSaveRequest;
  ppuVar20 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar13 != 0) {
    puVar21 = &UNK_01667814;
code_r0x016ce2a4:
    param_1 = auVar22._0_8_;
    uVar11 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar22._8_8_;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    ppuVar20 = (undefined1 **)(puVar2 + -0x10);
    unaff_x20 = 1;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 10) != 0) {
      if (*(int *)(*(long *)(param_1 + 10) + 0x18) < 1) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
        *(undefined8 *)(param_1 + 10) = uVar11;
      }
      param_1[0xc] = 1;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      param_1[0xd] = (int)uVar10;
      return uVar10;
    }
    puStack_48 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar3 = puVar2 + -0x30;
code_r0x016ce380:
    do {
      uVar12 = auVar23._8_8_;
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(int **)(puVar3 + -0x18) = param_1;
      *(undefined1 ***)(puVar3 + -0x10) = ppuVar20;
      *(undefined **)(puVar3 + -8) = puStack_48;
      uVar15 = auVar23._8_4_;
      if ((int)uVar15 < *(int *)(auVar23._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar23._0_8_ + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar14 = uVar11;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar10;
          return uVar10;
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
      uVar10 = auVar23._0_8_;
      *(ulong *)(puVar3 + -0x50) = unaff_x22;
      *(ulong *)(puVar3 + -0x48) = unaff_x21;
      *(long *)(puVar3 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar3 + -0x38) = uVar12;
      *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar14 == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
        return uVar10;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar14);
      ppuVar20 = *(undefined1 ***)(puVar3 + -0x30);
      puStack_48 = *(undefined **)(puVar3 + -0x28);
      unaff_x20 = *(long *)(puVar3 + -0x40);
      param_1 = *(int **)(puVar3 + -0x38);
      unaff_x22 = *(ulong *)(puVar3 + -0x50);
      unaff_x21 = *(ulong *)(puVar3 + -0x48);
      puVar3 = puVar3 + -0x20;
    } while( true );
  }
  auVar22 = func_0x00f78af4();
  uVar10 = auVar22._0_8_;
  if (uVar10 != 0) {
    param_4 = 0;
    puStack_48 = &Core_Services_DeleteSaveRequest__AddIndex;
    if ((auVar22._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar10,auVar22._8_8_);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar10;
    puVar3 = &stack0xffffffffffffffc0;
    goto code_r0x016ce380;
  }
  lVar13 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff90;
  ppuVar20 = (undefined1 **)&stack0xffffffffffffffa0;
  if ((bRam0000000003eb58a2 & 1) == 0) {
    func_0x00f78a20(0x3d3f050);
    bRam0000000003eb58a2 = 1;
  }
  if (lVar13 == 0) {
    puVar21 = &Core_Services_DeleteSaveRequest__StartDeleteSaveRequest;
    lVar13 = func_0x00f78af4();
    auVar22._8_8_ = 0x3eb5000;
    auVar22._0_8_ = lVar13;
    if (lVar13 == 0) {
      lVar13 = func_0x00f78af4();
      return *(ulong *)(lVar13 + 8);
    }
    lVar13 = 0;
    goto code_r0x016ce2a4;
  }
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar13 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
    uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
    unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
    uVar15 = *(uint *)(lVar13 + 0x30) - 1;
    if (-2 < (int)uVar15) {
      uVar15 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar15;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar18 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar16 = *(long *)(lVar13 + 0x28);
      if (lVar16 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar16 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar16 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar19 = unaff_x22 - 8;
      if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar16 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar10 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar4);
      lVar16 = *(long *)(lVar13 + 0x28);
      if (lVar16 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
      *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar15 = uVar1;
    } while (0 < (long)uVar19);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(lVar13 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar10 - (short)uVar7));
    uVar15 = uVar15 * 2 + 6;
    unaff_x21 = (ulong)uVar15;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar15);
    unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
    if (0 < (int)*(uint *)(lVar13 + 0x40)) {
      uVar19 = 0;
      do {
        lVar16 = *(long *)(lVar13 + 0x18);
        if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
           (lVar17 = *(long *)(lVar13 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - *(int *)(lVar17 + uVar19 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar15 = *(uint *)(lVar13 + 0x10);
        unaff_x22 = (ulong)uVar15;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
        if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar13 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar13 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
            *(int *)(lVar13 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar18;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar15 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
      } while ((long)uVar19 < (long)unaff_x22);
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
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(lVar13 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
          iVar9 = iVar9 - iVar18;
          iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
          return uVar10;
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
  auVar24 = func_0x00f78ac0(uVar11,uVar12);
  puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar20 = &puStack_b0;
  lVar13 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_d4 = iVar18;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  uStack_c0 = uVar10;
  uStack_b8 = uVar11;
  puStack_b0 = &stack0xffffffffffffffa0;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar24._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar8,4);
    lVar13 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar13 != 0) {
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar8 - iVar9) + iVar18,2);
      if ((uVar10 & 0xffff) != 0) {
        return uVar10;
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
  uVar10 = func_0x00f78aec();
  uVar12 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar13);
  uVar11 = func_0x00f78a24(0x3d56a50);
  puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar22 = func_0x00f78ac0(uVar10,uVar11);
  puVar3 = auStack_e0;
  do {
    uVar19 = auVar22._8_8_;
    lVar16 = auVar22._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar10;
    *(long *)(puVar3 + -0x18) = lVar13;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar20;
    *(undefined **)(puVar3 + -8) = puVar21;
    ppuVar20 = (undefined1 **)(puVar3 + -0x10);
    if ((int)uVar12 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
      if (*(long *)(lVar16 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
        return uVar10;
      }
    }
    else if (lVar16 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar13 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar13 != 0)) {
        uVar19 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar16 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
        goto code_r0x016cef70;
      }
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar22 = func_0x00f78af4();
    uVar12 = 0;
    puVar3 = puVar3 + -0x20;
    lVar13 = lVar16;
    uVar10 = uVar19;
  } while( true );
}



// ============================================================
// RVA: 0x16677f0 | Core.Services.DeleteSaveRequest.CreateDeleteSaveRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x01667810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667814) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_DeleteSaveRequest__CreateDeleteSaveRequest
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
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
  undefined1 auVar24 [12];
  ulong auStack_e0 [4];
  undefined1 auStack_c0 [12];
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_28;
  
  puVar2 = &stack0xffffffffffffffe0;
  puVar4 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar22 = (undefined *)0x1667814;
    lVar13 = param_1;
code_r0x016ce2a4:
    uVar11 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_2;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar22;
    puVar4 = puVar2 + -0x10;
    unaff_x20 = 1;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 1) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    puStack_28 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar3 = puVar2 + -0x30;
    unaff_x19 = param_1;
code_r0x016ce380:
    do {
      uVar12 = auVar23._8_8_;
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = puVar4;
      *(undefined **)(puVar3 + -8) = puStack_28;
      uVar15 = auVar23._8_4_;
      if ((int)uVar15 < *(int *)(auVar23._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar23._0_8_ + 0x28);
        uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar14 = uVar11;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar19;
          return uVar19;
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
      uVar19 = auVar23._0_8_;
      *(ulong *)(puVar3 + -0x50) = unaff_x22;
      *(ulong *)(puVar3 + -0x48) = unaff_x21;
      *(long *)(puVar3 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar3 + -0x38) = uVar12;
      *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar14 == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
        return uVar19;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,uVar14);
      puVar4 = *(undefined1 **)(puVar3 + -0x30);
      puStack_28 = *(undefined **)(puVar3 + -0x28);
      unaff_x20 = *(long *)(puVar3 + -0x40);
      unaff_x19 = *(long *)(puVar3 + -0x38);
      unaff_x22 = *(ulong *)(puVar3 + -0x50);
      unaff_x21 = *(ulong *)(puVar3 + -0x48);
      puVar3 = puVar3 + -0x20;
    } while( true );
  }
  auVar23 = func_0x00f78af4();
  uVar19 = auVar23._0_8_;
  if (uVar19 != 0) {
    param_4 = 0;
    puStack_28 = &Core_Services_DeleteSaveRequest__AddIndex;
    if ((auVar23._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar19,auVar23._8_8_);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar19;
    puVar3 = &stack0xffffffffffffffe0;
    goto code_r0x016ce380;
  }
  lVar13 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffb0;
  puVar4 = &stack0xffffffffffffffc0;
  param_2 = 0x3eb5000;
  if ((bRam0000000003eb58a2 & 1) == 0) {
    func_0x00f78a20(0x3d3f050);
    bRam0000000003eb58a2 = 1;
  }
  if (lVar13 == 0) {
    puVar22 = &Core_Services_DeleteSaveRequest__StartDeleteSaveRequest;
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
  auVar24 = func_0x00f78ac0(uVar11,uVar12);
  puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar21 = &puStack_90;
  lVar13 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_b4 = iVar18;
  uStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  uStack_a0 = uVar19;
  uStack_98 = uVar11;
  puStack_90 = &stack0xffffffffffffffc0;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar24._8_4_;
    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar9,4);
    lVar13 = *(long *)(auVar24._0_8_ + 0x18);
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
  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
  uVar12 = func_0x00f78a24(0x3d6ce88);
  uVar14 = func_0x00f78a24(0x3d66338);
  lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar14,0);
  func_0x00f78a24(0x3d22a38);
  uVar19 = func_0x00f78aec();
  uVar12 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar13);
  uVar11 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar23 = func_0x00f78ac0(uVar19,uVar11);
  puVar4 = auStack_c0;
  do {
    uVar20 = auVar23._8_8_;
    lVar16 = auVar23._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar19;
    *(long *)(puVar4 + -0x18) = lVar13;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar21;
    *(undefined **)(puVar4 + -8) = puVar22;
    ppuVar21 = (undefined1 **)(puVar4 + -0x10);
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
    auVar23 = func_0x00f78af4();
    uVar12 = 0;
    puVar4 = puVar4 + -0x20;
    lVar13 = lVar16;
    uVar19 = uVar20;
  } while( true );
}



// ============================================================
// RVA: 0x1667834 | Core.Services.DeleteSaveRequest.AddIndex
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_DeleteSaveRequest__AddIndex
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
    uVar16 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_2);
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
  if ((bRam0000000003eb58a2 & 1) == 0) {
    func_0x00f78a20(0x3d3f050);
    bRam0000000003eb58a2 = 1;
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
    unaff_x20 = 1;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 1) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 1;
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
// RVA: 0x1667858 | Core.Services.DeleteSaveRequest.EndDeleteSaveRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_DeleteSaveRequest__EndDeleteSaveRequest
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
  
  if ((bRam0000000003eb58a2 & 1) == 0) {
    func_0x00f78a20(0x3d3f050);
    bRam0000000003eb58a2 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 1;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 1) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 1;
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
// RVA: 0x16678a4 | Core.Services.DeleteSaveRequest.StartDeleteSaveRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_DeleteSaveRequest__StartDeleteSaveRequest
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
  lVar7 = 1;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 1) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,1);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
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



