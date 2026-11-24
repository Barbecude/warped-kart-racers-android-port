// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkScore

// ============================================================
// RVA: 0x165abc8 | Core.Networking.NetworkScore.ToFlatBuffer
// ============================================================

/* WARNING: Possible PIC construction at 0x016547c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016547c8) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkScore__ToFlatBuffer(uint *param_1,long param_2)

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
  ulong uVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  int iVar21;
  ulong uVar22;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 **ppuVar23;
  code *pcVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_110 [4];
  undefined1 auStack_f0 [12];
  int iStack_e4;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar18 = (ulong)(byte)param_1[2];
  puVar4 = &stack0xffffffffffffffd0;
  puVar6 = &stack0xfffffffffffffff0;
  if (param_2 != 0) {
    pcVar24 = (code *)0x16547c8;
    lVar15 = param_2;
    uVar22 = uVar18;
    unaff_x21 = (long)(short)param_1[1];
    unaff_x22 = (ulong)*param_1;
code_r0x016ce2a4:
    uVar13 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(ulong *)(puVar4 + -0x20) = uVar22;
    *(long *)(puVar4 + -0x18) = lVar15;
    *(undefined1 **)(puVar4 + -0x10) = puVar6;
    *(code **)(puVar4 + -8) = pcVar24;
    unaff_x20 = 3;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_2);
    if (*(long *)(param_2 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_2 + 0x28) + 0x18) < 3) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(param_2 + 0x28) = uVar13;
      }
      *(undefined4 *)(param_2 + 0x30) = 3;
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_2);
      *(int *)(param_2 + 0x34) = (int)uVar18;
      return uVar18;
    }
    auVar26 = func_0x00f78af4();
    ppuVar5 = (undefined1 **)(puVar4 + -0x30);
    unaff_x19 = param_2;
    ppuVar23 = (undefined1 **)(puVar4 + -0x10);
    pcVar24 = (code *)&FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      uVar14 = auVar26._8_8_;
      *(long *)((long)ppuVar5 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar5 + -0x10) = ppuVar23;
      *(code **)((long)ppuVar5 + -8) = pcVar24;
      uVar17 = auVar26._8_4_;
      if ((int)uVar17 < *(int *)(auVar26._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
        uVar22 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar16 = uVar13;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar22;
          return uVar22;
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
      auVar26 = func_0x00f78ac0(uVar13,0);
      uVar22 = auVar26._0_8_;
      *(ulong *)((long)ppuVar5 + -0x50) = unaff_x22;
      *(ulong *)((long)ppuVar5 + -0x48) = unaff_x21;
      *(long *)((long)ppuVar5 + -0x40) = unaff_x20;
      *(undefined8 *)((long)ppuVar5 + -0x38) = uVar14;
      *(undefined1 **)((long)ppuVar5 + -0x30) = (undefined1 *)((long)ppuVar5 + -0x10);
      *(undefined **)((long)ppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar16 == (int)uVar18) && (*(char *)(uVar22 + 0x48) == '\0')) {
        return uVar22;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar22,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar22,uVar16);
      plVar1 = (long *)((long)ppuVar5 + -0x30);
      puVar2 = (undefined8 *)((long)ppuVar5 + -0x28);
      unaff_x20 = *(long *)((long)ppuVar5 + -0x40);
      unaff_x19 = *(long *)((long)ppuVar5 + -0x38);
      unaff_x22 = *(ulong *)((long)ppuVar5 + -0x50);
      unaff_x21 = *(ulong *)((long)ppuVar5 + -0x48);
      ppuVar5 = (undefined1 **)((long)ppuVar5 + -0x20);
      ppuVar23 = (undefined1 **)*plVar1;
      pcVar24 = (code *)*puVar2;
    } while( true );
  }
  auVar26 = func_0x00f78af4();
  uVar22 = auVar26._0_8_;
  puStack_40 = puVar6;
  if (uVar22 != 0) {
    uVar18 = 0;
    pcStack_38 = Core_Networking_EventScore__AddSyncId;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar22 + 0x48) == '\0')) {
      return uVar22;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar22,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar22,auVar26._8_8_);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar22;
    ppuVar5 = (undefined1 **)&stack0xffffffffffffffd0;
    ppuVar23 = (undefined1 **)puStack_40;
    pcVar24 = pcStack_38;
    goto code_r0x016ce380;
  }
  ppuVar23 = &puStack_40;
  pcStack_38 = Core_Networking_EventScore__AddSyncId;
  auVar26 = func_0x00f78af4();
  uVar22 = auVar26._0_8_;
  if (uVar22 != 0) {
    uVar18 = 0;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar22 + 0x48) == '\0')) {
      return uVar22;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar22,2,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar22,auVar26._8_8_);
    auVar26._8_8_ = 1;
    auVar26._0_8_ = uVar22;
    pcVar24 = Core_Networking_EventScore__AddRoundScore;
    ppuVar5 = &puStack_40;
    goto code_r0x016ce380;
  }
  ppuVar23 = (undefined1 **)&stack0xffffffffffffffb0;
  auVar26 = func_0x00f78af4();
  uVar22 = auVar26._0_8_;
  if (uVar22 != 0) {
    uVar18 = 0;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar22 + 0x48) == '\0')) {
      return uVar22;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar22,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar22,auVar26._8_8_);
    auVar26._8_8_ = 2;
    auVar26._0_8_ = uVar22;
    pcVar24 = Core_Networking_EventScore__AddType;
    ppuVar5 = (undefined1 **)&stack0xffffffffffffffb0;
    goto code_r0x016ce380;
  }
  lVar15 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffff80;
  puVar6 = &stack0xffffffffffffff90;
  uVar22 = 0x3eb5000;
  if ((bRam0000000003eb57f0 & 1) == 0) {
    func_0x00f78a20(0x3d3f078);
    bRam0000000003eb57f0 = 1;
  }
  if (lVar15 == 0) {
    pcVar24 = Core_Networking_EventScore__StartEventScore;
    param_2 = func_0x00f78af4();
    if (param_2 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    lVar15 = 0;
    goto code_r0x016ce2a4;
  }
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar15 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
    uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
    unaff_x21 = (ulong)*(uint *)(lVar15 + 0x30);
    uVar17 = *(uint *)(lVar15 + 0x30) - 1;
    if (-2 < (int)uVar17) {
      uVar17 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar17;
    do {
      uVar3 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar3;
      iVar21 = (int)uVar18;
      if ((int)uVar3 < 0) goto code_r0x016ceb30;
      lVar19 = *(long *)(lVar15 + 0x28);
      if (lVar19 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar19 + 0x18) <= uVar3) goto code_r0x016ced88;
    } while (*(int *)(lVar19 + (ulong)uVar3 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar22 = unaff_x22 - 8;
      if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x016ced88;
      iVar11 = *(int *)(lVar19 + unaff_x22 * 4);
      sVar7 = 0;
      if (iVar11 != 0) {
        sVar7 = (short)uVar18 - (short)iVar11;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar7);
      lVar19 = *(long *)(lVar15 + 0x28);
      if (lVar19 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_r0x016ced88;
      *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar17 = uVar3;
    } while (0 < (long)uVar22);
code_r0x016ceb30:
    uVar10 = *(undefined4 *)(lVar15 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar18 - (short)uVar10));
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
        uVar3 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar20 + uVar22 * 4 + 0x20);
        unaff_x21 = (ulong)uVar3;
        uVar17 = *(uint *)(lVar15 + 0x10);
        unaff_x22 = (ulong)uVar17;
        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
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
            iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar21;
            *(int *)(lVar15 + 0x10) = iVar12;
            iVar11 = iVar11 - iVar21;
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
        lVar19 = *(long *)(lVar15 + 0x38);
        if (lVar19 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
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
          iVar12 = iVar12 - iVar21;
          iVar11 = iVar11 - iVar21;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
          *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
          return uVar18;
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
  iVar21 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
  uVar14 = func_0x00f78a24(0x3d56a30);
  auVar27 = func_0x00f78ac0(uVar13,uVar14);
  puStack_b8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar5 = &puStack_c0;
  lVar15 = *(long *)(auVar27._0_8_ + 0x18);
  iStack_e4 = iVar21;
  uStack_e0 = unaff_x22;
  uStack_d8 = unaff_x21;
  uStack_d0 = uVar18;
  uStack_c8 = uVar13;
  puStack_c0 = &stack0xffffffffffffff90;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar11 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar27._8_4_;
    iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar11,4);
    lVar15 = *(long *)(auVar27._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar18 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar11 - iVar12) + iVar21,2);
      if ((uVar18 & 0xffff) != 0) {
        return uVar18;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e4,0);
  uVar14 = func_0x00f78a24(0x3d6ce88);
  uVar16 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar16,0);
  func_0x00f78a24(0x3d22a38);
  uVar18 = func_0x00f78aec();
  uVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar15);
  uVar13 = func_0x00f78a24(0x3d56a50);
  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar26 = func_0x00f78ac0(uVar18,uVar13);
  puVar6 = auStack_f0;
  do {
    uVar22 = auVar26._8_8_;
    lVar19 = auVar26._0_8_;
    *(ulong *)(puVar6 + -0x20) = uVar18;
    *(long *)(puVar6 + -0x18) = lVar15;
    *(undefined1 ***)(puVar6 + -0x10) = ppuVar5;
    *(undefined **)(puVar6 + -8) = puVar25;
    ppuVar5 = (undefined1 **)(puVar6 + -0x10);
    if ((int)uVar14 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar22);
code_r0x016cef70:
      if (*(long *)(lVar19 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
        return uVar18;
      }
    }
    else if (lVar19 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar22);
      if ((*(long *)(lVar19 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar15 != 0)) {
        uVar22 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar19 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar22);
        goto code_r0x016cef70;
      }
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar26 = func_0x00f78af4();
    uVar14 = 0;
    puVar6 = puVar6 + -0x20;
    lVar15 = lVar19;
    uVar18 = uVar22;
  } while( true );
}



