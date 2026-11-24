// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkEventStanding

// ============================================================
// RVA: 0x165999c | Core.Networking.NetworkEventStanding.ToFlatBuffer
// ============================================================

/* WARNING: Possible PIC construction at 0x01654b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01654b24) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_NetworkEventStanding__ToFlatBuffer(uint *param_1,long param_2)

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
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  int iVar20;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 **ppuVar21;
  code *pcVar22;
  undefined *puVar23;
  float extraout_s0;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_150 [4];
  undefined1 auStack_130 [12];
  int iStack_124;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar16 = (ulong)(byte)param_1[1];
  uVar17 = (ulong)param_1[2];
  puVar2 = &stack0xffffffffffffffb0;
  puVar4 = &stack0xfffffffffffffff0;
  if (param_2 != 0) {
    pcVar22 = (code *)0x1654b24;
    lVar13 = param_2;
    unaff_x21 = (ulong)(byte)param_1[9];
    unaff_x22 = (ulong)*param_1;
code_r0x016ce2a4:
    uVar11 = 0;
    ppuVar3 = (undefined1 **)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = uVar16;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(code **)(puVar2 + -8) = pcVar22;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_2);
    if (*(long *)(param_2 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_2 + 0x28) + 0x18) < 5) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(param_2 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_2 + 0x30) = 5;
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_2);
      *(int *)(param_2 + 0x34) = (int)uVar16;
      return uVar16;
    }
    auVar25 = func_0x00f78af4();
    unaff_x19 = param_2;
    ppuVar21 = (undefined1 **)(puVar2 + -0x10);
    pcVar22 = (code *)&FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      lVar13 = auVar25._8_8_;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
      *(code **)((long)ppuVar3 + -8) = pcVar22;
      puVar4 = (undefined1 *)((long)ppuVar3 + -0x10);
      uVar15 = auVar25._8_4_;
      if ((int)uVar15 < *(int *)(auVar25._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar25._0_8_ + 0x28);
        uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar16;
          return uVar16;
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
      pcVar22 = (code *)&FlatBuffers_FlatBufferBuilder__AddBool;
      auVar25 = func_0x00f78ac0(uVar12,0);
      uVar12 = auVar25._8_8_;
      auVar24._8_8_ = uVar11;
      auVar24._0_8_ = auVar25._0_8_;
      ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
      unaff_x19 = lVar13;
code_r0x016ce420:
      uVar16 = auVar24._0_8_;
      auVar25._8_8_ = uVar12;
      auVar25._0_8_ = uVar16;
      *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar3 + -0x10) = puVar4;
      *(code **)((long)ppuVar3 + -8) = pcVar22;
      if ((auVar24._8_4_ == (int)uVar17) && (*(char *)(uVar16 + 0x48) == '\0')) {
        return uVar16;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar16,auVar24._8_8_);
      unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
      unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
      ppuVar21 = (undefined1 **)*(undefined1 **)((long)ppuVar3 + -0x10);
      pcVar22 = *(code **)((long)ppuVar3 + -8);
    } while( true );
  }
  uVar16 = func_0x00f78af4(param_1[8]);
  puStack_60 = puVar4;
  if (uVar16 != 0) {
    pcStack_58 = Core_Networking_EventStanding__AddSplinePosition;
    if (extraout_s0 == 0.0 && *(char *)(uVar16 + 0x48) == '\0') {
      return uVar16;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar16);
    auVar25._8_8_ = 3;
    auVar25._0_8_ = uVar16;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffffb0;
    ppuVar21 = (undefined1 **)puStack_60;
    pcVar22 = pcStack_58;
    goto code_r0x016ce380;
  }
  ppuVar21 = &puStack_60;
  pcStack_58 = Core_Networking_EventStanding__AddSplinePosition;
  auVar25 = func_0x00f78af4();
  uVar16 = auVar25._0_8_;
  if (uVar16 != 0) {
    uVar17 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar16 + 0x48) == '\0')) {
      return uVar16;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar16,auVar25._8_8_);
    auVar25._8_8_ = 2;
    auVar25._0_8_ = uVar16;
    pcVar22 = Core_Networking_EventStanding__AddTimeStamp;
    ppuVar3 = &puStack_60;
    goto code_r0x016ce380;
  }
  ppuVar21 = (undefined1 **)&stack0xffffffffffffff90;
  auVar25 = func_0x00f78af4();
  uVar16 = auVar25._0_8_;
  if (uVar16 != 0) {
    uVar17 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar16 + 0x48) == '\0')) {
      return uVar16;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar16,auVar25._8_8_);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar16;
    pcVar22 = Core_Networking_EventStanding__AddSyncId;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffff90;
    goto code_r0x016ce380;
  }
  ppuVar3 = (undefined1 **)&stack0xffffffffffffff80;
  puVar4 = &stack0xffffffffffffff80;
  pcVar22 = Core_Networking_EventStanding__AddDnf;
  auVar24 = func_0x00f78af4();
  if (auVar24._0_8_ != 0) {
    uVar12 = 4;
    uVar17 = 0;
    goto code_r0x016ce420;
  }
  ppuVar21 = (undefined1 **)&stack0xffffffffffffff70;
  auVar25 = func_0x00f78af4();
  uVar16 = auVar25._0_8_;
  if (uVar16 != 0) {
    uVar17 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar16 + 0x48) == '\0')) {
      return uVar16;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar16,auVar25._8_8_);
    auVar25._8_8_ = 1;
    auVar25._0_8_ = uVar16;
    pcVar22 = Core_Networking_EventStanding__AddBattleScore;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffff70;
    goto code_r0x016ce380;
  }
  lVar13 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff40;
  puVar4 = &stack0xffffffffffffff50;
  uVar16 = 0x3eb5000;
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
  }
  if (lVar13 == 0) {
    pcVar22 = Core_Networking_EventStanding__StartEventStanding;
    param_2 = func_0x00f78af4();
    if (param_2 == 0) {
      lVar13 = func_0x00f78af4();
      return *(ulong *)(lVar13 + 8);
    }
    lVar13 = 0;
    goto code_r0x016ce2a4;
  }
  uVar16 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar13 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
    unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
    uVar15 = *(uint *)(lVar13 + 0x30) - 1;
    if (-2 < (int)uVar15) {
      uVar15 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar15;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar20 = (int)uVar16;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar18 = *(long *)(lVar13 + 0x28);
      if (lVar18 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar18 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar18 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar17 = unaff_x22 - 8;
      if (*(uint *)(lVar18 + 0x18) <= uVar17) goto code_r0x016ced88;
      iVar9 = *(int *)(lVar18 + unaff_x22 * 4);
      sVar5 = 0;
      if (iVar9 != 0) {
        sVar5 = (short)uVar16 - (short)iVar9;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar5);
      lVar18 = *(long *)(lVar13 + 0x28);
      if (lVar18 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar18 + 0x18) <= uVar17) goto code_r0x016ced88;
      *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar15 = uVar1;
    } while (0 < (long)uVar17);
code_r0x016ceb30:
    uVar8 = *(undefined4 *)(lVar13 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar16 - (short)uVar8));
    uVar15 = uVar15 * 2 + 6;
    unaff_x21 = (ulong)uVar15;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar15);
    unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
    if (0 < (int)*(uint *)(lVar13 + 0x40)) {
      uVar17 = 0;
      do {
        lVar18 = *(long *)(lVar13 + 0x18);
        if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
           (lVar19 = *(long *)(lVar13 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - *(int *)(lVar19 + uVar17 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar15 = *(uint *)(lVar13 + 0x10);
        unaff_x22 = (ulong)uVar15;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
        if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
        if (sVar5 == sVar6) {
          if (sVar5 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar13 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
            if (iVar9 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar13 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar20;
            *(int *)(lVar13 + 0x10) = iVar10;
            iVar9 = iVar9 - iVar20;
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
        uVar17 = uVar17 + 1;
        unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
      } while ((long)uVar17 < (long)unaff_x22);
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
        lVar18 = *(long *)(lVar13 + 0x38);
        if (lVar18 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
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
          iVar10 = iVar10 - iVar20;
          iVar9 = iVar9 - iVar20;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
          *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
          return uVar16;
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
  iVar20 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
  uVar12 = func_0x00f78a24(0x3d56a30);
  auVar26 = func_0x00f78ac0(uVar11,uVar12);
  puStack_f8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar3 = &puStack_100;
  lVar13 = *(long *)(auVar26._0_8_ + 0x18);
  iStack_124 = iVar20;
  uStack_120 = unaff_x22;
  uStack_118 = unaff_x21;
  uStack_110 = uVar16;
  uStack_108 = uVar11;
  puStack_100 = &stack0xffffffffffffff50;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar26._8_4_;
    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar9,4);
    lVar13 = *(long *)(auVar26._0_8_ + 0x18);
    if (lVar13 != 0) {
      uVar16 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar9 - iVar10) + iVar20,2);
      if ((uVar16 & 0xffff) != 0) {
        return uVar16;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_124,0);
  uVar12 = func_0x00f78a24(0x3d6ce88);
  uVar14 = func_0x00f78a24(0x3d66338);
  lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar14,0);
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar12 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,lVar13);
  uVar11 = func_0x00f78a24(0x3d56a50);
  puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar25 = func_0x00f78ac0(uVar16,uVar11);
  puVar4 = auStack_130;
  do {
    uVar17 = auVar25._8_8_;
    lVar18 = auVar25._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar16;
    *(long *)(puVar4 + -0x18) = lVar13;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar3;
    *(undefined **)(puVar4 + -8) = puVar23;
    ppuVar3 = (undefined1 **)(puVar4 + -0x10);
    if ((int)uVar12 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar17);
code_r0x016cef70:
      if (*(long *)(lVar18 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
        return uVar16;
      }
    }
    else if (lVar18 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar17);
      if ((*(long *)(lVar18 + 0x18) != 0) &&
         (lVar13 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar13 != 0)) {
        uVar17 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar18 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
        uVar16 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar17);
        goto code_r0x016cef70;
      }
    }
    puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar25 = func_0x00f78af4();
    uVar12 = 0;
    puVar4 = puVar4 + -0x20;
    lVar13 = lVar18;
    uVar16 = uVar17;
  } while( true );
}



