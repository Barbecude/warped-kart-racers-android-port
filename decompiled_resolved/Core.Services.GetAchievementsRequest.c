// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.GetAchievementsRequest

// ============================================================
// RVA: 0x166b5d8 | Core.Services.GetAchievementsRequest.get_ByteBuffer
// ============================================================

undefined8 Core_Services_GetAchievementsRequest__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x166b5e0 | Core.Services.GetAchievementsRequest.GetRootAsGetAchievementsRequest
// ============================================================

undefined1  [16] Core_Services_GetAchievementsRequest__GetRootAsGetAchievementsRequest(long param_1)

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
// RVA: 0x166b5ec | Core.Services.GetAchievementsRequest.GetRootAsGetAchievementsRequest
// ============================================================

undefined1  [16]
Core_Services_GetAchievementsRequest__GetRootAsGetAchievementsRequest
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
// RVA: 0x166b630 | Core.Services.GetAchievementsRequest.__assign
// ============================================================

undefined1  [16]
Core_Services_GetAchievementsRequest____assign
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
// RVA: 0x166b644 | Core.Services.GetAchievementsRequest.__init
// ============================================================

void Core_Services_GetAchievementsRequest____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x166b650 | Core.Services.GetAchievementsRequest.StartGetAchievementsRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetAchievementsRequest__StartGetAchievementsRequest
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong unaff_x21;
  undefined8 uVar19;
  ulong unaff_x22;
  ulong uVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_c0 [4];
  undefined1 auStack_a0 [12];
  int iStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [2];
  undefined *apuStack_70 [2];
  
  if (param_1 != 0) {
    uVar13 = 0;
    puVar3 = &stack0xfffffffffffffff0;
    lVar18 = 0;
    uVar19 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 0) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0);
        *(undefined8 *)(param_1 + 0x28) = uVar19;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar10;
      return uVar10;
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffd0;
    do {
      uVar11 = auVar23._8_8_;
      *(long *)(puVar2 + -0x20) = lVar18;
      *(long *)(puVar2 + -0x18) = param_1;
      *(undefined1 **)(puVar2 + -0x10) = puVar3;
      *(undefined **)(puVar2 + -8) = puVar22;
      uVar12 = auVar23._8_4_;
      if ((int)uVar12 < *(int *)(auVar23._0_8_ + 0x30)) {
        lVar18 = *(long *)(auVar23._0_8_ + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar14 = uVar13;
        if (lVar18 == 0) goto code_r0x016ce410;
        if (uVar12 < *(uint *)(lVar18 + 0x18)) {
          *(int *)(lVar18 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar11 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar11,uVar13);
        uVar13 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar11,uVar13);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar13 = func_0x00f78b24();
      auVar23 = func_0x00f78ac0(uVar13,0);
      uVar10 = auVar23._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x48) = uVar19;
      *(long *)(puVar2 + -0x40) = lVar18;
      *(undefined8 *)(puVar2 + -0x38) = uVar11;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar14 == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
        return uVar10;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar14);
      puVar3 = *(undefined1 **)(puVar2 + -0x30);
      puVar22 = *(undefined **)(puVar2 + -0x28);
      lVar18 = *(long *)(puVar2 + -0x40);
      param_1 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      uVar19 = *(undefined8 *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  lVar18 = func_0x00f78af4();
  if ((bRam0000000003eb58c0 & 1) == 0) {
    func_0x00f78a20(0x3d3f098);
    bRam0000000003eb58c0 = 1;
  }
  if (lVar18 == 0) {
    lVar18 = func_0x00f78af4();
    return *(ulong *)(lVar18 + 8);
  }
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar18 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,0);
    uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
    unaff_x21 = (ulong)*(uint *)(lVar18 + 0x30);
    uVar12 = *(uint *)(lVar18 + 0x30) - 1;
    if (-2 < (int)uVar12) {
      uVar12 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar12;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(lVar18 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar20 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar20) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar10 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)sVar4);
      lVar15 = *(long *)(lVar18 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar20) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar12 = uVar1;
    } while (0 < (long)uVar20);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(lVar18 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)((short)uVar10 - (short)uVar7));
    uVar12 = uVar12 * 2 + 6;
    unaff_x21 = (ulong)uVar12;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)uVar12);
    unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
    if (0 < (int)*(uint *)(lVar18 + 0x40)) {
      uVar20 = 0;
      do {
        lVar15 = *(long *)(lVar18 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(lVar18 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar20 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar12 = *(uint *)(lVar18 + 0x10);
        unaff_x22 = (ulong)uVar12;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar18 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar18 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(lVar18 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar12 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar20 = uVar20 + 1;
        unaff_x22 = (ulong)*(int *)(lVar18 + 0x40);
      } while ((long)uVar20 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar18 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar15 = *(long *)(lVar18 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(lVar18 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
      }
      uVar12 = (uint)unaff_x22;
      *(uint *)(lVar18 + 0x40) = uVar12 + 1;
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(lVar18 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
          iVar9 = iVar9 - iVar17;
          iVar8 = iVar8 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(lVar18 + 0x30) = 0xffffffff;
          return uVar10;
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
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar19,uVar13);
  apuStack_70[1] = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar21 = apuStack_70;
  lVar18 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_94 = iVar17;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  auStack_80[0] = uVar10;
  auStack_80[1] = uVar19;
  apuStack_70[0] = &stack0xffffffffffffffe0;
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - auVar24._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar8,4);
    lVar18 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar18 != 0) {
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,(iVar8 - iVar9) + iVar17,2);
      if ((uVar10 & 0xffff) != 0) {
        return uVar10;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar19,uVar11,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar18);
  uVar19 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar23 = func_0x00f78ac0(uVar10,uVar19);
  puVar3 = auStack_a0;
  do {
    uVar20 = auVar23._8_8_;
    lVar15 = auVar23._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar10;
    *(long *)(puVar3 + -0x18) = lVar18;
    *(undefined ***)(puVar3 + -0x10) = ppuVar21;
    *(undefined **)(puVar3 + -8) = puVar22;
    ppuVar21 = (undefined **)(puVar3 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar20);
code_r0x016cef70:
      if (*(long *)(lVar15 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
        return uVar10;
      }
    }
    else if (lVar15 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar20);
      if ((*(long *)(lVar15 + 0x18) != 0) &&
         (lVar18 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar18 != 0)) {
        uVar20 = (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(lVar15 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar20);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar23 = func_0x00f78af4();
    uVar13 = 0;
    puVar3 = puVar3 + -0x20;
    lVar18 = lVar15;
    uVar10 = uVar20;
  } while( true );
}



// ============================================================
// RVA: 0x166b66c | Core.Services.GetAchievementsRequest.EndGetAchievementsRequest
// ============================================================

ulong Core_Services_GetAchievementsRequest__EndGetAchievementsRequest(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong unaff_x21;
  uint uVar16;
  ulong unaff_x22;
  ulong uVar17;
  undefined1 **ppuVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  ulong auStack_b0 [4];
  undefined1 auStack_90 [12];
  int iStack_84;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb58c0 & 1) == 0) {
    func_0x00f78a20(0x3d3f098);
    bRam0000000003eb58c0 = 1;
  }
  if (param_1 == 0) {
    lVar12 = func_0x00f78af4();
    return *(ulong *)(lVar12 + 8);
  }
  uVar15 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
    uVar15 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x30);
    uVar16 = *(uint *)(param_1 + 0x30) - 1;
    if (-2 < (int)uVar16) {
      uVar16 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar16;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar14 = (int)uVar15;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar12 = *(long *)(param_1 + 0x28);
      if (lVar12 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar12 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar12 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar17 = unaff_x22 - 8;
      if (*(uint *)(lVar12 + 0x18) <= uVar17) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar12 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar15 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)sVar3);
      lVar12 = *(long *)(param_1 + 0x28);
      if (lVar12 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar12 + 0x18) <= uVar17) goto code_r0x016ced88;
      *(undefined4 *)(lVar12 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar16 = uVar1;
    } while (0 < (long)uVar17);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(param_1 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)uVar15 - (short)uVar6));
    uVar16 = uVar16 * 2 + 6;
    unaff_x21 = (ulong)uVar16;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar16);
    unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      uVar17 = 0;
      do {
        lVar12 = *(long *)(param_1 + 0x18);
        if (((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) ||
           (lVar13 = *(long *)(param_1 + 0x38), lVar13 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar13 + 0x18) <= uVar17) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18) - *(int *)(lVar13 + uVar17 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar16 = *(uint *)(param_1 + 0x10);
        unaff_x22 = (ulong)uVar16;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,unaff_x21,2);
        if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),unaff_x22,2);
        if (sVar3 == sVar4) {
          if (sVar3 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(param_1 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
            iVar7 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
            if (iVar7 == 0) {
              unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(param_1 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar14;
            *(int *)(param_1 + 0x10) = iVar8;
            iVar7 = iVar7 - iVar14;
            goto code_r0x016ced3c;
          }
          iVar7 = 2;
          while( true ) {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar1 + iVar7,2);
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar16 + iVar7,2);
            if (sVar4 != sVar5) break;
            iVar7 = iVar7 + 2;
            if (sVar3 <= iVar7) goto code_r0x016cec64;
          }
        }
        uVar17 = uVar17 + 1;
        unaff_x22 = (ulong)*(int *)(param_1 + 0x40);
      } while ((long)uVar17 < (long)unaff_x22);
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
        lVar12 = *(long *)(param_1 + 0x38);
        if (lVar12 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar12,unaff_x21,*(undefined4 *)(lVar12 + 0x18),0);
        *(ulong *)(param_1 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
      }
      uVar16 = (uint)unaff_x22;
      *(uint *)(param_1 + 0x40) = uVar16 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar6;
        unaff_x21 = *(ulong *)(param_1 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
          iVar8 = iVar8 - iVar14;
          iVar7 = iVar7 - iVar14;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
          *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
          return uVar15;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar9 = func_0x00f78aec();
  uVar10 = func_0x00f78a24(0x3d6cea8);
  iVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar9,uVar10);
  uVar10 = func_0x00f78a24(0x3d56a30);
  auVar21 = func_0x00f78ac0(uVar9,uVar10);
  puStack_58 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar18 = &puStack_60;
  lVar12 = *(long *)(auVar21._0_8_ + 0x18);
  iStack_84 = iVar14;
  uStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  uStack_70 = uVar15;
  uStack_68 = uVar9;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18) - auVar21._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,iVar7,4);
    lVar12 = *(long *)(auVar21._0_8_ + 0x18);
    if (lVar12 != 0) {
      uVar15 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,(iVar7 - iVar8) + iVar14,2);
      if ((uVar15 & 0xffff) != 0) {
        return uVar15;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_84,0);
  uVar10 = func_0x00f78a24(0x3d6ce88);
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar10,uVar9,uVar11,0);
  func_0x00f78a24(0x3d22a38);
  uVar15 = func_0x00f78aec();
  uVar10 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,lVar12);
  uVar9 = func_0x00f78a24(0x3d56a50);
  puVar19 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar20 = func_0x00f78ac0(uVar15,uVar9);
  puVar2 = auStack_90;
  do {
    uVar17 = auVar20._8_8_;
    lVar13 = auVar20._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar15;
    *(long *)(puVar2 + -0x18) = lVar12;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar18;
    *(undefined **)(puVar2 + -8) = puVar19;
    ppuVar18 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar10 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),4);
      uVar15 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar17);
code_r0x016cef70:
      if (*(long *)(lVar13 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x18) = *(undefined4 *)(lVar13 + 0x10);
        return uVar15;
      }
    }
    else if (lVar13 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar17);
      if ((*(long *)(lVar13 + 0x18) != 0) &&
         (lVar12 = *(long *)(*(long *)(lVar13 + 0x18) + 0x10), lVar12 != 0)) {
        uVar17 = (ulong)(uint)(*(int *)(lVar12 + 0x18) - *(int *)(lVar13 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
        uVar15 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,uVar17);
        goto code_r0x016cef70;
      }
    }
    puVar19 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar20 = func_0x00f78af4();
    uVar10 = 0;
    puVar2 = puVar2 + -0x20;
    lVar12 = lVar13;
    uVar15 = uVar17;
  } while( true );
}



