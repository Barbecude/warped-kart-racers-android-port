// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.Network

// ============================================================
// RVA: 0x1490e28 | Atlas.Networking.Network.EndSession
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14913d8 | Atlas.Networking.Network.OnSinglePlayerFallBackRequested
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149abf8 | Atlas.Networking.Network.get_LocalPlayerSyncId
// ============================================================

/* WARNING: Possible PIC construction at 0x0167e558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167e570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0167e55c) */
/* WARNING: Removing unreachable block (ram,0x0167e574) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Atlas_Networking_Network__get_LocalPlayerSyncId
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 ***pppuVar5;
  undefined1 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 **ppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_130 [4];
  undefined1 auStack_110 [12];
  int iStack_104;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  piVar14 = (int *)(param_1 + 0x40);
  uVar20 = 0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,8);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x48),*piVar14 + (int)uVar13,4);
    return uVar13;
  }
  auVar26 = func_0x00f78af4();
  lVar17 = auVar26._0_8_;
  puVar4 = &stack0xffffffffffffffb0;
  puStack_28 = &Core_Services_Player__CreatePlayer;
  ppuVar24 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar17 != 0) {
    puVar25 = &UNK_0167e55c;
    unaff_x21 = uVar20;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    piVar14 = auVar26._0_8_;
    uVar15 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar26._8_8_;
    *(long *)(puVar4 + -0x18) = lVar17;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar24;
    *(undefined **)(puVar4 + -8) = puVar25;
    unaff_x20 = 3;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 3) {
        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(piVar14 + 10) = uVar15;
      }
      piVar14[0xc] = 3;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar27 = func_0x00f78af4();
    pppuVar5 = (undefined1 ***)(puVar4 + -0x30);
    ppuVar24 = (undefined1 **)(puVar4 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar13 = auVar26._0_8_;
  ppuStack_60 = ppuVar24;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_58 = &Core_Services_Player__AddSyncId;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar13,auVar26._8_8_);
    auVar27._8_8_ = 2;
    auVar27._0_8_ = uVar13;
    pppuVar5 = (undefined1 ***)&stack0xffffffffffffffb0;
    ppuVar24 = ppuStack_60;
    puVar25 = puStack_58;
    goto code_r0x016ce380;
  }
  pppuVar5 = &ppuStack_60;
  puStack_58 = &Core_Services_Player__AddSyncId;
  puVar25 = &Core_Services_Player__AddId;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppuVar5 = (undefined1 ***)&stack0xffffffffffffff90;
    puVar25 = &Core_Services_Player__AddDisplayName;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      lVar17 = func_0x00f78af4();
      puVar4 = &stack0xffffffffffffff60;
      puStack_88 = &Core_Services_Player__EndPlayer;
      ppuVar24 = &puStack_90;
      puStack_90 = &stack0xffffffffffffff80;
      if ((bRam0000000003eb59e8 & 1) == 0) {
        puStack_90 = &stack0xffffffffffffff80;
        func_0x00f78a20(0x3d3f1c0);
        bRam0000000003eb59e8 = 1;
      }
      if (lVar17 == 0) {
        puVar25 = &Core_Services_Player__StartPlayer;
        lVar17 = func_0x00f78af4();
        auVar26._8_8_ = 0x3eb5000;
        auVar26._0_8_ = lVar17;
        if (lVar17 == 0) {
          lVar17 = func_0x00f78af4();
          return *(ulong *)(lVar17 + 8);
        }
        lVar17 = 0;
        goto code_r0x016ce2a4;
      }
      uVar13 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar17 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,0);
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
        unaff_x21 = (ulong)*(uint *)(lVar17 + 0x30);
        uVar19 = *(uint *)(lVar17 + 0x30) - 1;
        if (-2 < (int)uVar19) {
          uVar19 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar19;
        do {
          uVar3 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar3;
          iVar23 = (int)uVar13;
          if ((int)uVar3 < 0) goto code_r0x016ceb30;
          lVar21 = *(long *)(lVar17 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar3) goto code_r0x016ced88;
        } while (*(int *)(lVar21 + (ulong)uVar3 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar20 = unaff_x22 - 8;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto code_r0x016ced88;
          iVar11 = *(int *)(lVar21 + unaff_x22 * 4);
          sVar7 = 0;
          if (iVar11 != 0) {
            sVar7 = (short)uVar13 - (short)iVar11;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)sVar7);
          lVar21 = *(long *)(lVar17 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto code_r0x016ced88;
          *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar19 = uVar3;
        } while (0 < (long)uVar20);
code_r0x016ceb30:
        uVar10 = *(undefined4 *)(lVar17 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)((short)uVar13 - (short)uVar10));
        uVar19 = uVar19 * 2 + 6;
        unaff_x21 = (ulong)uVar19;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)uVar19);
        unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
        if (0 < (int)*(uint *)(lVar17 + 0x40)) {
          uVar20 = 0;
          do {
            lVar21 = *(long *)(lVar17 + 0x18);
            if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
               (lVar22 = *(long *)(lVar17 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar22 + 0x18) <= uVar20) goto code_r0x016ced88;
            uVar3 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - *(int *)(lVar22 + uVar20 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar3;
            uVar19 = *(uint *)(lVar17 + 0x10);
            unaff_x22 = (ulong)uVar19;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
            if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),unaff_x22,2);
            if (sVar7 == sVar8) {
              if (sVar7 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar17 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                iVar11 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                if (iVar11 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar17 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
                *(int *)(lVar17 + 0x10) = iVar12;
                iVar11 = iVar11 - iVar23;
                goto code_r0x016ced3c;
              }
              iVar11 = 2;
              while( true ) {
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar3 + iVar11,2);
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar19 + iVar11,2);
                if (sVar8 != sVar9) break;
                iVar11 = iVar11 + 2;
                if (sVar7 <= iVar11) goto code_r0x016cec64;
              }
            }
            uVar20 = uVar20 + 1;
            unaff_x22 = (ulong)*(int *)(lVar17 + 0x40);
          } while ((long)uVar20 < (long)unaff_x22);
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
            lVar21 = *(long *)(lVar17 + 0x38);
            if (lVar21 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar21,unaff_x21,*(undefined4 *)(lVar21 + 0x18),0);
            *(ulong *)(lVar17 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
          }
          uVar19 = (uint)unaff_x22;
          *(uint *)(lVar17 + 0x40) = uVar19 + 1;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar19 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar19 * 4 + 0x20) = uVar10;
            unaff_x21 = *(ulong *)(lVar17 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
              iVar12 = iVar12 - iVar23;
              iVar11 = iVar11 - iVar23;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
              *(undefined4 *)(lVar17 + 0x30) = 0xffffffff;
              return uVar13;
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
      auVar28 = func_0x00f78ac0(uVar15,uVar16);
      puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar5 = &ppuStack_e0;
      lVar17 = *(long *)(auVar28._0_8_ + 0x18);
      iStack_104 = iVar23;
      uStack_100 = unaff_x22;
      uStack_f8 = unaff_x21;
      uStack_f0 = uVar13;
      uStack_e8 = uVar15;
      ppuStack_e0 = &puStack_90;
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
        iVar11 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar28._8_4_;
        iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,iVar11,4);
        lVar17 = *(long *)(auVar28._0_8_ + 0x18);
        if (lVar17 != 0) {
          uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,(iVar11 - iVar12) + iVar23,2);
          if ((uVar13 & 0xffff) != 0) {
            return uVar13;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_104,0);
      uVar16 = func_0x00f78a24(0x3d6ce88);
      uVar18 = func_0x00f78a24(0x3d66338);
      lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar18,0);
      func_0x00f78a24(0x3d22a38);
      uVar13 = func_0x00f78aec();
      uVar16 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar17);
      uVar15 = func_0x00f78a24(0x3d56a50);
      puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar26 = func_0x00f78ac0(uVar13,uVar15);
      puVar6 = auStack_110;
      do {
        uVar20 = auVar26._8_8_;
        lVar21 = auVar26._0_8_;
        *(ulong *)(puVar6 + -0x20) = uVar13;
        *(long *)(puVar6 + -0x18) = lVar17;
        *(undefined1 ****)(puVar6 + -0x10) = pppuVar5;
        *(undefined **)(puVar6 + -8) = puVar25;
        pppuVar5 = (undefined1 ***)(puVar6 + -0x10);
        if ((int)uVar16 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar20);
code_r0x016cef70:
          if (*(long *)(lVar21 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
            return uVar13;
          }
        }
        else if (lVar21 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar20);
          if ((*(long *)(lVar21 + 0x18) != 0) &&
             (lVar17 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar17 != 0)) {
            uVar20 = (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar21 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar20);
            goto code_r0x016cef70;
          }
        }
        puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar26 = func_0x00f78af4();
        uVar16 = 0;
        puVar6 = puVar6 + -0x20;
        lVar17 = lVar21;
        uVar13 = uVar20;
      } while( true );
    }
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  uVar15 = auVar26._8_8_;
  uVar13 = auVar26._0_8_;
  auVar27._8_8_ = uVar16;
  auVar27._0_8_ = uVar13;
  param_4 = 0;
  *(long *)((long)pppuVar5 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar5 + -0x18) = piVar14;
  *(undefined1 ****)((long)pppuVar5 + -0x10) = pppuVar5;
  *(undefined **)((long)pppuVar5 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar13,uVar15,uVar15,0,0);
  ppuVar24 = *(undefined1 ***)((long)pppuVar5 + -0x10);
  puVar25 = *(undefined **)((long)pppuVar5 + -8);
  unaff_x20 = *(long *)((long)pppuVar5 + -0x20);
  piVar14 = *(int **)((long)pppuVar5 + -0x18);
code_r0x016ce380:
  do {
    uVar16 = auVar27._8_8_;
    *(long *)((long)pppuVar5 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar5 + -0x18) = piVar14;
    *(undefined1 ***)((long)pppuVar5 + -0x10) = ppuVar24;
    *(undefined **)((long)pppuVar5 + -8) = puVar25;
    uVar19 = auVar27._8_4_;
    if ((int)uVar19 < *(int *)(auVar27._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar15;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar19 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar19 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar15,0);
    uVar13 = auVar27._0_8_;
    *(ulong *)((long)pppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)pppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)pppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppuVar5 + -0x38) = uVar16;
    *(undefined1 **)((long)pppuVar5 + -0x30) = (undefined1 *)((long)pppuVar5 + -0x10);
    *(undefined **)((long)pppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar18);
    plVar1 = (long *)((long)pppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)pppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)pppuVar5 + -0x40);
    piVar14 = *(int **)((long)pppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)pppuVar5 + -0x48);
    pppuVar5 = (undefined1 ***)((long)pppuVar5 + -0x20);
    ppuVar24 = (undefined1 **)*plVar1;
    puVar25 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x149da54 | Atlas.Networking.Network.get_IsSinglePlayer
// ============================================================

undefined1 Atlas_Networking_Network__get_IsSinglePlayer(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x149da5c | Atlas.Networking.Network.get_IsInited
// ============================================================

undefined1 Atlas_Networking_Network__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x149da64 | Atlas.Networking.Network.set_IsInited
// ============================================================

void Atlas_Networking_Network__set_IsInited(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x149da6c | Atlas.Networking.Network.add_SessionCreated
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149db0c | Atlas.Networking.Network.remove_SessionCreated
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149dbac | Atlas.Networking.Network.add_SessionDestroyed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149dc4c | Atlas.Networking.Network.remove_SessionDestroyed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149dcec | Atlas.Networking.Network.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149df24 | Atlas.Networking.Network.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149e0c0 | Atlas.Networking.Network.EarlyUpdate
// ============================================================

void Atlas_Networking_Network__EarlyUpdate(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4a24 & 1) == 0) {
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d5ac30);
    bRam0000000003eb4a24 = 1;
  }
  if ((*(char *)(param_1 + 0x6c) == '\0') || (*(long *)(param_1 + 0x20) == 0)) {
    return;
  }
  /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_58,*(long *)(param_1 + 0x20),0);
  uStack_68 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = *(undefined8 *)(param_1 + 0x78);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_88 = uStack_50;
  uStack_90 = uStack_58;
  uStack_80 = uStack_48;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_a0 = uStack_60;
  iVar2 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_90,&uStack_b0,0);
  if (iVar2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_58,*(long *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x70) = uStack_50;
    *(undefined8 *)(param_1 + 0x68) = uStack_58;
    *(undefined8 *)(param_1 + 0x78) = uStack_48;
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar5 != 0)) &&
       (lVar5 = *(long *)(lVar5 + 0xa8), lVar5 != 0)) {
      /*System.Action$$Invoke*/ func_0x02924c90(lVar5,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        Atlas_Gameplay_PauseManager__UnPause(*(long *)(param_1 + 0x30),0,0);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar5 != 0)) {
          uVar6 = *(undefined8 *)(lVar5 + 0xa0);
          uVar3 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
          /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar3,param_1,uRam0000000003d5ac30,uRam0000000003d2a4a8);
          plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar3,0);
          if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
            *(long **)(lVar5 + 0xa0) = plVar4;
            return;
          }
          goto LAB_0149e288;
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0149e288:
  auVar7 = func_0x00f78e5c();
  if ((bRam0000000003eb4a25 & 1) == 0) {
    func_0x00f78a20(0x3d236d0);
    bRam0000000003eb4a25 = 1;
  }
  if (((*(ushort *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(undefined8 **)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  plVar4 = *(long **)(auVar7._0_8_ + 0x20);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x188))(plVar4,auVar7._8_8_,*(undefined8 *)(*plVar4 + 400));
  }
  lVar5 = *(long *)(auVar7._0_8_ + 0x28);
  if (lVar5 == 0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x149e344);
    (*pcVar1)();
  }
  /*Atlas.Networking.NetworkLobby$$Update*/ func_0x014a8a50(lVar5,0);
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar3);
  return;
}



// ============================================================
// RVA: 0x149e28c | Atlas.Networking.Network.Update
// ============================================================

void Atlas_Networking_Network__Update(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4a25 & 1) == 0) {
    func_0x00f78a20(0x3d236d0);
    bRam0000000003eb4a25 = 1;
  }
  if (((*(ushort *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(undefined8 **)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,param_2,*(undefined8 *)(*plVar2 + 400));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Atlas.Networking.NetworkLobby$$Update*/ func_0x014a8a50(*(long *)(param_1 + 0x28),0);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar3);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x149e344);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x149e38c | Atlas.Networking.Network.LateUpdate
// ============================================================

void Atlas_Networking_Network__LateUpdate(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4a26 & 1) == 0) {
    func_0x00f78a20(0x3d236d0);
    bRam0000000003eb4a26 = 1;
  }
  if (((*(ushort *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar2);
  return;
}



// ============================================================
// RVA: 0x149e448 | Atlas.Networking.Network.GetSession
// ============================================================

undefined8 Atlas_Networking_Network__GetSession(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x149e450 | Atlas.Networking.Network.Lobby
// ============================================================

undefined8 Atlas_Networking_Network__Lobby(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x149e458 | Atlas.Networking.Network.GetLastSessionId
// ============================================================

void Atlas_Networking_Network__GetLastSessionId(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined8 uStack_50;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    param_1[1] = *(undefined8 *)(lVar1 + 0x38);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar2 = *(undefined8 *)(lVar1 + 0x50);
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    param_1[5] = *(undefined8 *)(lVar1 + 0x58);
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    return;
  }
  uStack_58 = func_0x00f78af4();
  if ((bRam0000000003eb4a2d & 1) == 0) {
    func_0x00f78a20(0x3d52238);
    bRam0000000003eb4a2d = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_50 = 0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_c0,0);
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_70 = uStack_b8;
  uStack_78 = uStack_c0;
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<Network.<Disconnect>d__43>*/ func_0x0182c5e8(&uStack_a0,&uStack_80,uRam0000000003d52238);
  return;
}



// ============================================================
// RVA: 0x149e484 | Atlas.Networking.Network.Disconnect
// ============================================================

void Atlas_Networking_Network__Disconnect(undefined8 param_1)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4a2d & 1) == 0) {
    func_0x00f78a20(0x3d52238);
    bRam0000000003eb4a2d = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 0;
  uStack_48 = param_1;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_b0,0);
  uStack_50 = uStack_98;
  uStack_58 = uStack_a0;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<Network.<Disconnect>d__43>*/ func_0x0182c5e8(&uStack_90,&uStack_70,uRam0000000003d52238);
  return;
}



// ============================================================
// RVA: 0x149e540 | Atlas.Networking.Network.IsSessionHost
// ============================================================

undefined8 Atlas_Networking_Network__IsSessionHost(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (((*(char *)(*(long *)(param_1 + 0x28) + 0x99) == '\0') && (*(long *)(param_1 + 0x18) != 0)) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x30), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0149e57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x938))(plVar1,*(undefined8 *)(*plVar1 + 0x940));
    return uVar2;
  }
  return 1;
}



// ============================================================
// RVA: 0x149e580 | Atlas.Networking.Network.OnMatchStarted
// ============================================================

void Atlas_Networking_Network__OnMatchStarted(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x21;
  long unaff_x22;
  undefined1 auVar7 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar6 = (long *)0x3eb4000;
  uStack_60 = param_2;
  uStack_58 = param_3;
  if ((bRam0000000003eb4a28 & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d236e8);
    func_0x00f78a20(0x3d23730);
    func_0x00f78a20(0x3d237a0);
    func_0x00f78a20(0x3d237a8);
    func_0x00f78a20(0x3d5ac28);
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb4a28 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_0149e644:
    iVar1 = /*Core.Services.Match$$get_Host*/ func_0x0167d714(&uStack_60,0);
    if (iVar1 == 0) {
      plVar6 = (long *)func_0x00f78aec(/*Atlas.Networking.NetworkClientSession_TypeInfo*/ uRam0000000003d236e8);
      /*Atlas.Networking.NetworkClientSession$$.ctor*/ func_0x014a33c4(plVar6,0);
    }
    else {
      plVar6 = (long *)func_0x00f78aec(/*Atlas.Networking.NetworkHostSession_TypeInfo*/ uRam0000000003d23730);
      /*Atlas.Networking.NetworkHostSession$$.ctor*/ func_0x014a72e8(plVar6,0);
    }
    *(long **)(param_1 + 0x20) = plVar6;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (unaff_x22 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), unaff_x22 != 0)) {
      plVar6 = *(long **)(unaff_x22 + 0x120);
      unaff_x21 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(unaff_x21,param_1,uRam0000000003d5ac28,uRam0000000003d2a290);
      param_3 = 0;
      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(plVar6,unaff_x21);
      if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0149e8a4;
      *(long **)(unaff_x22 + 0x120) = plVar2;
      if (*(long *)(param_1 + 0x20) != 0) {
        param_3 = 0;
        /*Core.Networking.NetworkSession$$Init*/ func_0x0165cd1c(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
        if (*(long *)(param_1 + 0x58) != 0) {
          param_3 = 0;
          /*Atlas.Networking.Network.SessionChangeDelegate$$Invoke*/ func_0x01561010(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x20));
        }
        unaff_x21 = *(long *)(param_1 + 0x20);
        plVar6 = (long *)func_0x00f78aec(/*Core.Networking.NetworkServicesInput_TypeInfo*/ uRam0000000003d237a0);
        /*Core.Networking.NetworkServicesInput$$.ctor*/ func_0x0165b10c(plVar6,0);
        if (unaff_x21 != 0) {
          *(long **)(unaff_x21 + 0x20) = plVar6;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar5 != 0)) {
            param_3 = 0;
            /*Core.Networking.NetworkServicesInput$$Init*/ func_0x0165acf4(lVar5,*(undefined8 *)(param_1 + 0x18));
            unaff_x21 = *(long *)(param_1 + 0x20);
            plVar6 = (long *)func_0x00f78aec(/*Core.Networking.NetworkServicesOutput_TypeInfo*/ uRam0000000003d237a8);
            /*Core.Networking.NetworkServicesOutput$$.ctor*/ func_0x0165ccec(plVar6,0);
            if (unaff_x21 != 0) {
              *(long **)(unaff_x21 + 0x18) = plVar6;
              if ((*(long *)(param_1 + 0x20) != 0) &&
                 (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar5 != 0)) {
                param_3 = 0;
                /*Core.Networking.NetworkServicesOutput$$Init*/ func_0x0165b11c(lVar5,*(undefined8 *)(param_1 + 0x18));
                *(undefined1 *)(param_1 + 0x50) = 0;
                /*Core.Services.Match$$get_Host*/ func_0x0167d714(&uStack_60,0);
                unaff_x21 = /*Core.Services.Match$$get_OtherPlayersLength*/ func_0x0167d6d0(&uStack_60,0);
                lVar5 = *(long *)(param_1 + 0x28);
                uVar3 = /*Core.Services.Match$$get_Host*/ func_0x0167d714(&uStack_60,0);
                plVar6 = (long *)0x0;
                if (lVar5 != 0) {
                  unaff_x22 = 0x3d3e000;
                  /*Atlas.Networking.NetworkLobby$$SetAi*/ func_0x014aa2bc(lVar5,0xb - (int)unaff_x21,uVar3,0);
                  plVar6 = *(long **)(param_1 + 0x28);
                  param_3 = *(undefined8 *)(param_1 + 0x48);
                  uStack_78 = 0;
                  uStack_70 = 0;
                  uStack_68 = 0;
                  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_78,*(undefined8 *)(param_1 + 0x40),param_3,
                                  uRam0000000003d3ebe0);
                  if (plVar6 != (long *)0x0) {
                    uStack_88 = uStack_70;
                    uStack_90 = uStack_78;
                    uStack_80 = uStack_68;
                    param_3 = 0;
                    /*Atlas.Networking.NetworkLobby$$SetLocalPlayer*/ func_0x014aa5a8(plVar6,&uStack_90);
                    if (*(long *)(param_1 + 0x28) != 0) {
                      plVar6 = *(long **)(param_1 + 0x20);
                      uVar3 = /*Atlas.Networking.NetworkLobby$$GetNetworkPlayerList*/ func_0x014a9ac8(*(long *)(param_1 + 0x28),0);
                      if (plVar6 != (long *)0x0) {
                        param_3 = *(undefined8 *)(*plVar6 + 0x1b0);
                        (**(code **)(*plVar6 + 0x1a8))(plVar6,uVar3);
                        if (*(long *)(param_1 + 0x38) != 0) {
                          /*Atlas.Settings.AtlasQualitySettings$$BeginSuspendDeviceSleep*/ func_0x0145edcc(*(long *)(param_1 + 0x38),0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) {
LAB_0149e638:
      /*Core.Networking.NetworkSession$$DeInit*/ func_0x0165dd50(lVar5,0);
      goto LAB_0149e644;
    }
    param_3 = 0;
    /*Atlas.Networking.Network.SessionChangeDelegate$$Invoke*/ func_0x01561010();
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) goto LAB_0149e638;
  }
  func_0x00f78af4();
code_r0x0149e8a4:
  auVar7 = func_0x00f78e5c();
  lVar5 = auVar7._0_8_;
  puStack_98 = &Atlas_Networking_Network__OnSinglePlayerRequested;
  lStack_c0 = unaff_x22;
  lStack_b8 = unaff_x21;
  plStack_b0 = plVar6;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a29 & 1) == 0) {
    func_0x00f78a20(0x3d23730);
    bRam0000000003eb4a29 = 1;
  }
  if (*(long *)(lVar5 + 0x20) != 0) {
    return;
  }
  *(undefined1 *)(lVar5 + 0x50) = 1;
  lVar4 = func_0x00f78aec(/*Atlas.Networking.NetworkHostSession_TypeInfo*/ uRam0000000003d23730);
  /*Atlas.Networking.NetworkHostSession$$.ctor*/ func_0x014a72e8(lVar4,0);
  *(long *)(lVar5 + 0x20) = lVar4;
  if (lVar4 != 0) {
    param_3 = 0;
    /*Core.Networking.NetworkSession$$Init*/ func_0x0165d268(lVar4,1);
    if (*(long *)(lVar5 + 0x58) != 0) {
      param_3 = 0;
      /*Atlas.Networking.Network.SessionChangeDelegate$$Invoke*/ func_0x01561010(*(long *)(lVar5 + 0x58),*(undefined8 *)(lVar5 + 0x20));
    }
    if (*(long *)(lVar5 + 0x28) != 0) {
      param_3 = 0;
      /*Atlas.Networking.NetworkLobby$$Clear*/ func_0x014a8858(*(long *)(lVar5 + 0x28),0);
      if (*(long *)(lVar5 + 0x28) != 0) {
        param_3 = 1;
        /*Atlas.Networking.NetworkLobby$$SetAi*/ func_0x014aa2bc(*(long *)(lVar5 + 0x28),auVar7._8_8_,1,0);
        if (*(long *)(lVar5 + 0x28) != 0) {
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          param_3 = 0;
          /*Atlas.Networking.NetworkLobby$$SetLocalPlayer*/ func_0x014aa5a8(*(long *)(lVar5 + 0x28),&uStack_d8);
          if (*(long *)(lVar5 + 0x28) != 0) {
            plVar6 = *(long **)(lVar5 + 0x20);
            uVar3 = /*Atlas.Networking.NetworkLobby$$GetNetworkPlayerList*/ func_0x014a9ac8(*(long *)(lVar5 + 0x28),0);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x1a8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x1b0));
              return;
            }
          }
        }
      }
    }
  }
  auVar7 = func_0x00f78af4();
  *(long *)(auVar7._0_8_ + 0x40) = auVar7._8_8_;
  *(undefined8 *)(auVar7._0_8_ + 0x48) = param_3;
  return;
}



// ============================================================
// RVA: 0x149e8a8 | Atlas.Networking.Network.OnSinglePlayerRequested
// ============================================================

void Atlas_Networking_Network__OnSinglePlayerRequested
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4a29 & 1) == 0) {
    func_0x00f78a20(0x3d23730);
    bRam0000000003eb4a29 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  lVar1 = func_0x00f78aec(/*Atlas.Networking.NetworkHostSession_TypeInfo*/ uRam0000000003d23730);
  /*Atlas.Networking.NetworkHostSession$$.ctor*/ func_0x014a72e8(lVar1,0);
  *(long *)(param_1 + 0x20) = lVar1;
  if (lVar1 != 0) {
    param_3 = 0;
    /*Core.Networking.NetworkSession$$Init*/ func_0x0165d268(lVar1,1);
    if (*(long *)(param_1 + 0x58) != 0) {
      param_3 = 0;
      /*Atlas.Networking.Network.SessionChangeDelegate$$Invoke*/ func_0x01561010(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x20));
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      param_3 = 0;
      /*Atlas.Networking.NetworkLobby$$Clear*/ func_0x014a8858(*(long *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        param_3 = 1;
        /*Atlas.Networking.NetworkLobby$$SetAi*/ func_0x014aa2bc(*(long *)(param_1 + 0x28),param_2,1,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          uStack_48 = 0;
          uStack_40 = 0;
          uStack_38 = 0;
          param_3 = 0;
          /*Atlas.Networking.NetworkLobby$$SetLocalPlayer*/ func_0x014aa5a8(*(long *)(param_1 + 0x28),&uStack_48);
          if (*(long *)(param_1 + 0x28) != 0) {
            plVar3 = *(long **)(param_1 + 0x20);
            uVar2 = /*Atlas.Networking.NetworkLobby$$GetNetworkPlayerList*/ func_0x014a9ac8(*(long *)(param_1 + 0x28),0);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x1b0));
              return;
            }
          }
        }
      }
    }
  }
  auVar4 = func_0x00f78af4();
  *(long *)(auVar4._0_8_ + 0x40) = auVar4._8_8_;
  *(undefined8 *)(auVar4._0_8_ + 0x48) = param_3;
  return;
}



// ============================================================
// RVA: 0x149e9c8 | Atlas.Networking.Network.OnAuthenticated
// ============================================================

void Atlas_Networking_Network__OnAuthenticated(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



// ============================================================
// RVA: 0x149e9d0 | Atlas.Networking.Network.OnHostChanged
// ============================================================

void Atlas_Networking_Network__OnHostChanged(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  if ((bRam0000000003eb4a2b & 1) == 0) {
    func_0x00f78a20(0x3d29fa8);
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d23730);
    func_0x00f78a20(0x3d237a0);
    func_0x00f78a20(0x3d237a8);
    func_0x00f78a20(0x3d5ac30);
    bRam0000000003eb4a2b = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (plVar4 = *(long **)(*(long *)(param_1 + 0x18) + 0x30), plVar4 != (long *)0x0)) {
    iVar1 = (**(code **)(*plVar4 + 0x348))(plVar4,*(undefined8 *)(*plVar4 + 0x350));
    if (iVar1 == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 == 0) {
      return;
    }
    if (*(long *)(lVar7 + 0xa0) != 0) {
      iVar1 = *(int *)(*(long *)(lVar7 + 0xa0) + 0x10);
      if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 0x9c) != 2)) &&
         (iVar1 - 8U < 2)) {
        return;
      }
      if (iVar1 == 10) {
        if (*(long *)(lVar7 + 0x70) == 0) goto LAB_0149ed30;
        if (*(int *)(*(long *)(lVar7 + 0x70) + 0x18) == 0) {
          return;
        }
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        Atlas_Gameplay_PauseManager__Pause(*(long *)(param_1 + 0x30),0,1,0,0);
        if (*(char *)(param_1 + 0x6c) == '\0') {
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar7 == 0)) goto LAB_0149ed30;
          uVar8 = *(undefined8 *)(lVar7 + 0xa0);
          uVar5 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
          /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar5,param_1,uRam0000000003d5ac30,uRam0000000003d2a4a8);
          plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar5,0);
          if ((plVar4 != (long *)0x0) && (*plVar4 != /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) goto LAB_0149ed34;
          *(long **)(lVar7 + 0xa0) = plVar4;
        }
        iVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_50,0);
        iVar3 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(param_1 + 0x40,0);
        if (((*(long *)(param_1 + 0x20) != 0) &&
            (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar7 != 0)) &&
           (lVar7 = *(long *)(lVar7 + 0x90), lVar7 != 0)) {
          /*System.Action<bool>$$Invoke*/ func_0x01b42d50(lVar7,iVar2 == iVar3,uRam0000000003d29fa8);
          if (iVar1 == 1) {
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_0149ed30;
            /*Atlas.Networking.NetworkLobby$$ResetReady*/ func_0x014ac208(*(long *)(param_1 + 0x28),0);
          }
          if (iVar2 != iVar3) {
            return;
          }
          lVar7 = func_0x00f78aec(/*Atlas.Networking.NetworkHostSession_TypeInfo*/ uRam0000000003d23730);
          /*Atlas.Networking.NetworkHostSession$$.ctor*/ func_0x014a72e8(lVar7,0);
          if (lVar7 != 0) {
            /*Core.Networking.NetworkSession$$Init*/ func_0x0165d5a0(lVar7,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),0)
            ;
            if (*(long *)(param_1 + 0x60) != 0) {
              /*Atlas.Networking.Network.SessionChangeDelegate$$Invoke*/ func_0x01561010(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x20),0);
            }
            if (*(long *)(param_1 + 0x20) != 0) {
              /*Core.Networking.NetworkSession$$DeInit*/ func_0x0165dd50(*(long *)(param_1 + 0x20),0);
              *(long *)(param_1 + 0x20) = lVar7;
              if (*(long *)(param_1 + 0x58) != 0) {
                /*Atlas.Networking.Network.SessionChangeDelegate$$Invoke*/ func_0x01561010(*(long *)(param_1 + 0x58),lVar7,0);
                lVar7 = *(long *)(param_1 + 0x20);
              }
              uVar5 = func_0x00f78aec(/*Core.Networking.NetworkServicesInput_TypeInfo*/ uRam0000000003d237a0);
              /*Core.Networking.NetworkServicesInput$$.ctor*/ func_0x0165b10c(uVar5,0);
              if (lVar7 != 0) {
                *(undefined8 *)(lVar7 + 0x20) = uVar5;
                if ((*(long *)(param_1 + 0x20) != 0) &&
                   (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar7 != 0)) {
                  /*Core.Networking.NetworkServicesInput$$Init*/ func_0x0165acf4(lVar7,*(undefined8 *)(param_1 + 0x18),0);
                  lVar7 = *(long *)(param_1 + 0x20);
                  uVar5 = func_0x00f78aec(/*Core.Networking.NetworkServicesOutput_TypeInfo*/ uRam0000000003d237a8);
                  /*Core.Networking.NetworkServicesOutput$$.ctor*/ func_0x0165ccec(uVar5,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) = uVar5;
                    if ((*(long *)(param_1 + 0x20) != 0) &&
                       (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar7 != 0)) {
                      /*Core.Networking.NetworkServicesOutput$$Init*/ func_0x0165b11c(lVar7,*(undefined8 *)(param_1 + 0x18),0);
                      lVar7 = *(long *)(param_1 + 0x20);
                      if (lVar7 != 0) {
                        /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_68,lVar7,0);
                        uStack_78 = uStack_60;
                        uStack_80 = uStack_68;
                        uStack_70 = uStack_58;
                        /*Core.Networking.NetworkSession$$SetMigrationStartTime*/ func_0x0165ee68(lVar7,&uStack_80,0);
                        plVar4 = *(long **)(param_1 + 0x20);
                        if (plVar4 != (long *)0x0) {
                          (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0149ed30:
  func_0x00f78af4();
LAB_0149ed34:
  auVar9 = func_0x00f78e5c();
  puVar6 = auVar9._8_8_;
  lVar7 = auVar9._0_8_;
  uVar8 = puVar6[1];
  uVar5 = *puVar6;
  *(undefined8 *)(lVar7 + 0x78) = puVar6[2];
  *(undefined8 *)(lVar7 + 0x70) = uVar8;
  *(undefined8 *)(lVar7 + 0x68) = uVar5;
  return;
}



// ============================================================
// RVA: 0x149ed38 | Atlas.Networking.Network.OnHostMigrationSynced
// ============================================================

void Atlas_Networking_Network__OnHostMigrationSynced(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



// ============================================================
// RVA: 0x149ed4c | Atlas.Networking.Network.StartDebugHostMigration
// ============================================================

void Atlas_Networking_Network__StartDebugHostMigration(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long lStack_78;
  
  if ((bRam0000000003eb4a2c & 1) == 0) {
    func_0x00f78a20(0x3d29fa8);
    bRam0000000003eb4a2c = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Atlas_Gameplay_PauseManager__Pause(*(long *)(param_1 + 0x30),0,1,0,0);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0x90), lVar7 != 0)) {
      lVar8 = *(long *)(lVar7 + 0x68);
      if (lVar8 == 0) {
        puVar16 = &stack0xffffffffffffffa8;
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(lVar8 + 0x18);
        if (lVar14 == 0) {
          return;
        }
        puVar16 = (undefined1 *)(lVar8 + 0x20);
      }
      lVar8 = 0;
      do {
        lVar9 = *(long *)(puVar16 + lVar8 * 8);
        pcVar13 = *(code **)(lVar9 + 0x10);
        plVar15 = *(long **)(lVar9 + 0x20);
        lVar9 = *(long *)(lVar9 + 0x28);
        if (*(short *)(lVar9 + 0x48) == -1) {
          func_0x00f78ad8(lVar9);
        }
        iVar3 = func_0x00f78a4c(lVar9);
        if (iVar3 == 0) {
          if (((plVar15 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
             (((*(byte *)(*plVar15 + 0x115) & 1) != 0 || (*(long *)(lVar7 + 0x18) == 0))))
          goto code_r0x01b42e64;
          iVar3 = func_0x00f78a44(lVar9);
          iVar4 = func_0x00f78ec0(lVar9);
          if (iVar3 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar4 == 0) {
              lVar9 = *plVar15 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))(plVar15,1,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x01b42e74;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar10 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar9) {
                  puVar6 = (undefined8 *)
                           (lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01b42f3c;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar15,lVar9,(ulong)uVar2);
code_r0x01b42f3c:
            pcVar13 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar4 == 0) {
              uVar5 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar10 = *plVar15;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x01b42f14;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar10 = func_0x00fac1f0(plVar15);
code_r0x01b42f14:
              uVar5 = *(undefined8 *)(lVar10 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar9);
            pcVar13 = (code *)*puVar6;
          }
          (*pcVar13)(plVar15,1,puVar6);
        }
        else if (*(char *)(lVar9 + 0x4a) == '\x01') {
          (*pcVar13)(1,lVar9);
        }
        else {
code_r0x01b42e64:
          (*pcVar13)(plVar15,1,lVar9);
        }
code_r0x01b42e74:
        lVar8 = lVar8 + 1;
        if (lVar8 == lVar14) {
          return;
        }
      } while( true );
    }
  }
  lVar7 = func_0x00f78af4();
  if (*(long *)(lVar7 + 0x30) != 0) {
    Atlas_Gameplay_PauseManager__UnPause(*(long *)(lVar7 + 0x30),0,0);
    if (((*(long *)(lVar7 + 0x20) != 0) &&
        (lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x10), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0xa8), lVar7 != 0)) {
      uVar5 = 0;
      lStack_78 = lVar7;
      lVar8 = *(long *)(lVar7 + 0x68);
      if (lVar8 == 0) {
        plVar15 = &lStack_78;
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(lVar8 + 0x18);
        if (lVar14 == 0) {
          return;
        }
        plVar15 = (long *)(lVar8 + 0x20);
      }
      lVar8 = 0;
      do {
        lVar9 = plVar15[lVar8];
        pcVar13 = *(code **)(lVar9 + 0x10);
        plVar1 = *(long **)(lVar9 + 0x20);
        lVar9 = *(long *)(lVar9 + 0x28);
        if (*(short *)(lVar9 + 0x48) == -1) {
          func_0x00f78ad8(lVar9,uVar5);
        }
        iVar3 = func_0x00f78a4c(lVar9);
        if (iVar3 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
          goto code_r0x02924d98;
          iVar3 = func_0x00f78a44(lVar9);
          iVar4 = func_0x00f78ec0(lVar9);
          if (iVar3 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar4 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
              uVar5 = extraout_x1_01;
              goto code_r0x02924da4;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar10 = *plVar1;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar9) {
                  puVar6 = (undefined8 *)
                           (lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
            pcVar13 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar4 == 0) {
              uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar10 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar5 = *(undefined8 *)(lVar10 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar9);
            pcVar13 = (code *)*puVar6;
          }
          (*pcVar13)(plVar1,puVar6);
          uVar5 = extraout_x1_02;
        }
        else if (*(char *)(lVar9 + 0x4a) == '\0') {
          (*pcVar13)(lVar9);
          uVar5 = extraout_x1;
        }
        else {
code_r0x02924d98:
          (*pcVar13)(plVar1,lVar9);
          uVar5 = extraout_x1_00;
        }
code_r0x02924da4:
        lVar8 = lVar8 + 1;
        if (lVar8 == lVar14) {
          return;
        }
      } while( true );
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x149edd0 | Atlas.Networking.Network.EndDebugHostMigration
// ============================================================

void Atlas_Networking_Network__EndDebugHostMigration(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    Atlas_Gameplay_PauseManager__UnPause(*(long *)(param_1 + 0x30),0,0);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0xa8), lVar7 != 0)) {
      uVar6 = 0;
      lStack_58 = lVar7;
      lVar8 = *(long *)(lVar7 + 0x68);
      if (lVar8 == 0) {
        plVar15 = &lStack_58;
        lVar14 = 1;
      }
      else {
        lVar14 = *(long *)(lVar8 + 0x18);
        if (lVar14 == 0) {
          return;
        }
        plVar15 = (long *)(lVar8 + 0x20);
      }
      lVar8 = 0;
      do {
        lVar9 = plVar15[lVar8];
        pcVar13 = *(code **)(lVar9 + 0x10);
        plVar1 = *(long **)(lVar9 + 0x20);
        lVar9 = *(long *)(lVar9 + 0x28);
        if (*(short *)(lVar9 + 0x48) == -1) {
          func_0x00f78ad8(lVar9,uVar6);
        }
        iVar3 = func_0x00f78a4c(lVar9);
        if (iVar3 == 0) {
          if (((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
             (((*(byte *)(*plVar1 + 0x115) & 1) != 0 || (*(long *)(lVar7 + 0x18) == 0))))
          goto code_r0x02924d98;
          iVar3 = func_0x00f78a44(lVar9);
          iVar4 = func_0x00f78ec0(lVar9);
          if (iVar3 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar4 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
              uVar6 = extraout_x1_01;
              goto code_r0x02924da4;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar10 = *plVar1;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar9) {
                  puVar5 = (undefined8 *)
                           (lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x02924e68;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
            pcVar13 = (code *)*puVar5;
            puVar5 = (undefined8 *)puVar5[1];
          }
          else {
            if (iVar4 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar10 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x02924e40;
                  }
                  piVar12 = piVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
              uVar6 = *(undefined8 *)(lVar10 + 8);
            }
            puVar5 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
            pcVar13 = (code *)*puVar5;
          }
          (*pcVar13)(plVar1,puVar5);
          uVar6 = extraout_x1_02;
        }
        else if (*(char *)(lVar9 + 0x4a) == '\0') {
          (*pcVar13)(lVar9);
          uVar6 = extraout_x1;
        }
        else {
code_r0x02924d98:
          (*pcVar13)(plVar1,lVar9);
          uVar6 = extraout_x1_00;
        }
code_r0x02924da4:
        lVar8 = lVar8 + 1;
        if (lVar8 == lVar14) {
          return;
        }
      } while( true );
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x149ee20 | Atlas.Networking.Network..ctor
// ============================================================

void Atlas_Networking_Network___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x149ee28 | Atlas.Networking.Network..cctor
// ============================================================

void Atlas_Networking_Network___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4a2e & 1) == 0) {
    func_0x00f78a20(0x3d236d0);
    func_0x00f78a20(0x3d70248);
    func_0x00f78a20(0x3d70240);
    bRam0000000003eb4a2e = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('Network.Update()')*/ uRam0000000003d70248,1,0,0,0);
  **(undefined8 **)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('Network.LateUpdate()')*/ uRam0000000003d70240,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Networking.Network_TypeInfo*/ lRam0000000003d236d0 + 0xb8) + 8) = uVar1;
  return;
}



