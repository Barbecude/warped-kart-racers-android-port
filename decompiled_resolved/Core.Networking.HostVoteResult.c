// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.HostVoteResult

// ============================================================
// RVA: 0x165728c | Core.Networking.HostVoteResult.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_HostVoteResult__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1657294 | Core.Networking.HostVoteResult.GetRootAsHostVoteResult
// ============================================================

undefined1  [16] Core_Networking_HostVoteResult__GetRootAsHostVoteResult(long param_1)

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
// RVA: 0x16572a0 | Core.Networking.HostVoteResult.GetRootAsHostVoteResult
// ============================================================

undefined1  [16]
Core_Networking_HostVoteResult__GetRootAsHostVoteResult
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
// RVA: 0x16572e4 | Core.Networking.HostVoteResult.__assign
// ============================================================

undefined1  [16]
Core_Networking_HostVoteResult____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x16572f8 | Core.Networking.HostVoteResult.__init
// ============================================================

void Core_Networking_HostVoteResult____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1657304 | Core.Networking.HostVoteResult.get_Map
// ============================================================

/* WARNING: Possible PIC construction at 0x016573d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016573ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016573d8) */
/* WARNING: Removing unreachable block (ram,0x016573f0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteResult__get_Map
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ****ppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar23;
  undefined1 ****ppppuVar24;
  undefined8 ***pppuVar25;
  undefined *unaff_x30;
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
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostVoteResult__get_Type;
  uVar17 = 0;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,6);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar27 = func_0x00f78af4();
  lVar19 = auVar27._0_8_;
  ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff90;
  puVar2 = &stack0xffffffffffffff90;
  puStack_48 = &Core_Networking_HostVoteResult__CreateHostVoteResult;
  pppuVar23 = &ppuStack_50;
  ppuStack_50 = &puStack_30;
  if (lVar19 != 0) {
    puVar26 = &UNK_016573d8;
    unaff_x21 = uVar17;
code_r0x016ce2a4:
    lVar20 = auVar27._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar27._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar23;
    *(undefined **)(puVar2 + -8) = puVar26;
    puVar4 = puVar2 + -0x10;
    lVar19 = 2;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 2) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 2;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar26 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar28 = func_0x00f78af4();
    ppppuVar3 = (undefined1 ****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar26 = &Core_Networking_HostVoteResult__AddType;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    ppppuVar3 = &pppuStack_80;
    ppppuVar24 = &pppuStack_80;
    puStack_78 = &Core_Networking_HostVoteResult__AddType;
    puVar26 = &Core_Networking_HostVoteResult__AddMap;
    pppuStack_80 = pppuVar23;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      puStack_88 = &Core_Networking_HostVoteResult__AddMap;
      puStack_90 = (undefined1 *)&pppuStack_80;
      lVar19 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff50;
      puStack_98 = &Core_Networking_HostVoteResult__EndHostVoteResult;
      pppuVar23 = &ppuStack_a0;
      ppuStack_a0 = &puStack_90;
      if ((bRam0000000003eb580d & 1) == 0) {
        ppuStack_a0 = &puStack_90;
        func_0x00f78a20(0x3d3f130);
        bRam0000000003eb580d = 1;
      }
      if (lVar19 == 0) {
        puVar26 = &Core_Networking_HostVoteResult__StartHostVoteResult;
        lVar19 = func_0x00f78af4();
        auVar27._8_8_ = 0x3eb5000;
        auVar27._0_8_ = lVar19;
        if (lVar19 == 0) {
          lVar19 = func_0x00f78af4();
          return *(ulong *)(lVar19 + 8);
        }
        lVar19 = 0;
        goto code_r0x016ce2a4;
      }
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar19 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
        unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
        uVar16 = *(uint *)(lVar19 + 0x30) - 1;
        if (-2 < (int)uVar16) {
          uVar16 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar16;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar22 = (int)uVar11;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar20 = *(long *)(lVar19 + 0x28);
          if (lVar20 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar17 = unaff_x22 - 8;
          if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar11 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
          lVar20 = *(long *)(lVar19 + 0x28);
          if (lVar20 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
          *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar16 = uVar1;
        } while (0 < (long)uVar17);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar19 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
        uVar16 = uVar16 * 2 + 6;
        unaff_x21 = (ulong)uVar16;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
        if (0 < (int)*(uint *)(lVar19 + 0x40)) {
          uVar17 = 0;
          do {
            lVar20 = *(long *)(lVar19 + 0x18);
            if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
               (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - *(int *)(lVar21 + uVar17 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar16 = *(uint *)(lVar19 + 0x10);
            unaff_x22 = (ulong)uVar16;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar19 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar19 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                *(int *)(lVar19 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar22;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
              }
            }
            uVar17 = uVar17 + 1;
            unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
          } while ((long)uVar17 < (long)unaff_x22);
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
          uVar16 = (uint)unaff_x22;
          *(uint *)(lVar19 + 0x40) = uVar16 + 1;
          uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
            unaff_x21 = *(ulong *)(lVar19 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
              iVar10 = iVar10 - iVar22;
              iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
              *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
              return uVar11;
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
      iVar22 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a30);
      auVar29 = func_0x00f78ac0(uVar13,uVar14);
      puStack_e8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar25 = &ppuStack_f0;
      lVar19 = *(long *)(auVar29._0_8_ + 0x18);
      iStack_114 = iVar22;
      uStack_110 = unaff_x22;
      uStack_108 = unaff_x21;
      uStack_100 = uVar11;
      uStack_f8 = uVar13;
      ppuStack_f0 = &ppuStack_a0;
      if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar29._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
        lVar19 = *(long *)(auVar29._0_8_ + 0x18);
        if (lVar19 != 0) {
          uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
          if ((uVar11 & 0xffff) != 0) {
            return uVar11;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_114,0);
      uVar14 = func_0x00f78a24(0x3d6ce88);
      uVar15 = func_0x00f78a24(0x3d66338);
      lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar14 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar27 = func_0x00f78ac0(uVar11,uVar13);
      puVar4 = auStack_120;
      do {
        uVar17 = auVar27._8_8_;
        lVar20 = auVar27._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar11;
        *(long *)(puVar4 + -0x18) = lVar19;
        *(undefined8 ****)(puVar4 + -0x10) = pppuVar25;
        *(undefined **)(puVar4 + -8) = puVar26;
        pppuVar25 = (undefined8 ***)(puVar4 + -0x10);
        if ((int)uVar14 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
          if (*(long *)(lVar20 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
            return uVar11;
          }
        }
        else if (lVar20 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
          if ((*(long *)(lVar20 + 0x18) != 0) &&
             (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
            uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
            goto code_r0x016cef70;
          }
        }
        puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar27 = func_0x00f78af4();
        uVar14 = 0;
        puVar4 = puVar4 + -0x20;
        lVar19 = lVar20;
        uVar11 = uVar17;
      } while( true );
    }
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
    ppppuVar24 = (undefined1 ****)pppuVar23;
  }
  uVar11 = auVar27._0_8_;
  auVar28._8_8_ = uVar13;
  auVar28._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)ppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)ppppuVar3 + -0x18) = piVar12;
  *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar24;
  *(undefined **)((long)ppppuVar3 + -8) = puVar26;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar27._8_8_);
  puVar4 = *(undefined1 **)((long)ppppuVar3 + -0x10);
  puVar26 = *(undefined **)((long)ppppuVar3 + -8);
  lVar19 = *(long *)((long)ppppuVar3 + -0x20);
  lVar20 = *(long *)((long)ppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)ppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar28._8_8_;
    *(long *)((long)ppppuVar3 + -0x20) = lVar19;
    *(long *)((long)ppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)ppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)ppppuVar3 + -8) = puVar26;
    uVar16 = auVar28._8_4_;
    if ((int)uVar16 < *(int *)(auVar28._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar28._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar28._0_8_;
    *(ulong *)((long)ppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)ppppuVar3 + -0x48) = uVar13;
    *(long *)((long)ppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)ppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)ppppuVar3 + -0x30) = (undefined1 *)((long)ppppuVar3 + -0x10);
    *(undefined **)((long)ppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)ppppuVar3 + -0x30);
    puVar26 = *(undefined **)((long)ppppuVar3 + -0x28);
    lVar19 = *(long *)((long)ppppuVar3 + -0x40);
    lVar20 = *(long *)((long)ppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)ppppuVar3 + -0x48);
    ppppuVar3 = (undefined1 ****)((long)ppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1657358 | Core.Networking.HostVoteResult.get_Type
// ============================================================

/* WARNING: Possible PIC construction at 0x016573d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016573ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016573d8) */
/* WARNING: Removing unreachable block (ram,0x016573f0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteResult__get_Type
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 **ppuVar22;
  undefined1 ***pppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_120 [4];
  undefined1 auStack_100 [12];
  int iStack_f4;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar17 = 0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(param_1 + 2) != 0) {
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar11,2);
    return (ulong)(uint)(int)sVar5;
  }
  auVar25 = func_0x00f78af4();
  lVar14 = auVar25._0_8_;
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffffb0;
  puVar2 = &stack0xffffffffffffffb0;
  puStack_28 = &Core_Networking_HostVoteResult__CreateHostVoteResult;
  ppuVar22 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar14 != 0) {
    puVar24 = &UNK_016573d8;
    unaff_x21 = uVar17;
code_r0x016ce2a4:
    lVar19 = auVar25._0_8_;
    uVar13 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar25._8_8_;
    *(long *)(puVar2 + -0x18) = lVar14;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar22;
    *(undefined **)(puVar2 + -8) = puVar24;
    puVar4 = puVar2 + -0x10;
    lVar14 = 2;
    uVar12 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar19);
    if (*(long *)(lVar19 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar19 + 0x28) + 0x18) < 2) {
        uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(lVar19 + 0x28) = uVar12;
      }
      *(undefined4 *)(lVar19 + 0x30) = 2;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
      *(int *)(lVar19 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar26 = func_0x00f78af4();
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar24 = &Core_Networking_HostVoteResult__AddType;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    pppuVar3 = &ppuStack_60;
    pppuVar23 = &ppuStack_60;
    puStack_58 = &Core_Networking_HostVoteResult__AddType;
    puVar24 = &Core_Networking_HostVoteResult__AddMap;
    ppuStack_60 = ppuVar22;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      puStack_68 = &Core_Networking_HostVoteResult__AddMap;
      puStack_70 = (undefined1 *)&ppuStack_60;
      lVar14 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff70;
      puStack_78 = &Core_Networking_HostVoteResult__EndHostVoteResult;
      ppuVar22 = &puStack_80;
      puStack_80 = (undefined1 *)&puStack_70;
      if ((bRam0000000003eb580d & 1) == 0) {
        puStack_80 = (undefined1 *)&puStack_70;
        func_0x00f78a20(0x3d3f130);
        bRam0000000003eb580d = 1;
      }
      if (lVar14 == 0) {
        puVar24 = &Core_Networking_HostVoteResult__StartHostVoteResult;
        lVar14 = func_0x00f78af4();
        auVar25._8_8_ = 0x3eb5000;
        auVar25._0_8_ = lVar14;
        if (lVar14 == 0) {
          lVar14 = func_0x00f78af4();
          return *(ulong *)(lVar14 + 8);
        }
        lVar14 = 0;
        goto code_r0x016ce2a4;
      }
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar14 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,0);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
        unaff_x21 = (ulong)*(uint *)(lVar14 + 0x30);
        uVar16 = *(uint *)(lVar14 + 0x30) - 1;
        if (-2 < (int)uVar16) {
          uVar16 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar16;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar21 = (int)uVar11;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar19 = *(long *)(lVar14 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar17 = unaff_x22 - 8;
          if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar11 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar14,(int)sVar5);
          lVar19 = *(long *)(lVar14 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x016ced88;
          *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar16 = uVar1;
        } while (0 < (long)uVar17);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar14 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar14,(int)(short)((short)uVar11 - (short)uVar8));
        uVar16 = uVar16 * 2 + 6;
        unaff_x21 = (ulong)uVar16;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar14,(int)(short)uVar16);
        unaff_x22 = (ulong)*(uint *)(lVar14 + 0x40);
        if (0 < (int)*(uint *)(lVar14 + 0x40)) {
          uVar17 = 0;
          do {
            lVar19 = *(long *)(lVar14 + 0x18);
            if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
               (lVar20 = *(long *)(lVar14 + 0x38), lVar20 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar20 + uVar17 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar16 = *(uint *)(lVar14 + 0x10);
            unaff_x22 = (ulong)uVar16;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
            if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar14 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar14 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar14 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar14 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar21;
                *(int *)(lVar14 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar21;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar14 + 0x18),uVar1 + iVar9,2);
                if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar14 + 0x18),uVar16 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
              }
            }
            uVar17 = uVar17 + 1;
            unaff_x22 = (ulong)*(int *)(lVar14 + 0x40);
          } while ((long)uVar17 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar14 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar19 = *(long *)(lVar14 + 0x38);
            if (lVar19 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
            *(ulong *)(lVar14 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar14 + 0x40);
          }
          uVar16 = (uint)unaff_x22;
          *(uint *)(lVar14 + 0x40) = uVar16 + 1;
          uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
            unaff_x21 = *(ulong *)(lVar14 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
              iVar10 = iVar10 - iVar21;
              iVar9 = iVar9 - iVar21;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
              *(undefined4 *)(lVar14 + 0x30) = 0xffffffff;
              return uVar11;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6cea8);
      iVar21 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a30);
      auVar27 = func_0x00f78ac0(uVar12,uVar13);
      puStack_c8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar3 = &ppuStack_d0;
      lVar14 = *(long *)(auVar27._0_8_ + 0x18);
      iStack_f4 = iVar21;
      uStack_f0 = unaff_x22;
      uStack_e8 = unaff_x21;
      uStack_e0 = uVar11;
      uStack_d8 = uVar12;
      ppuStack_d0 = &puStack_80;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - auVar27._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,iVar9,4);
        lVar14 = *(long *)(auVar27._0_8_ + 0x18);
        if (lVar14 != 0) {
          uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,(iVar9 - iVar10) + iVar21,2);
          if ((uVar11 & 0xffff) != 0) {
            return uVar11;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_f4,0);
      uVar13 = func_0x00f78a24(0x3d6ce88);
      uVar15 = func_0x00f78a24(0x3d66338);
      lVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar12,uVar15,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar13 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar14);
      uVar12 = func_0x00f78a24(0x3d56a50);
      puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar25 = func_0x00f78ac0(uVar11,uVar12);
      puVar4 = auStack_100;
      do {
        uVar17 = auVar25._8_8_;
        lVar19 = auVar25._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar11;
        *(long *)(puVar4 + -0x18) = lVar14;
        *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
        *(undefined **)(puVar4 + -8) = puVar24;
        pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
        if ((int)uVar13 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar17);
code_r0x016cef70:
          if (*(long *)(lVar19 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
            return uVar11;
          }
        }
        else if (lVar19 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar17);
          if ((*(long *)(lVar19 + 0x18) != 0) &&
             (lVar14 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar14 != 0)) {
            uVar17 = (ulong)(uint)(*(int *)(lVar14 + 0x18) - *(int *)(lVar19 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar17);
            goto code_r0x016cef70;
          }
        }
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar25 = func_0x00f78af4();
        uVar13 = 0;
        puVar4 = puVar4 + -0x20;
        lVar14 = lVar19;
        uVar11 = uVar17;
      } while( true );
    }
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
    pppuVar23 = (undefined1 ***)ppuVar22;
  }
  uVar11 = auVar25._0_8_;
  auVar26._8_8_ = uVar12;
  auVar26._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = param_1;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar23;
  *(undefined **)((long)pppuVar3 + -8) = puVar24;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar13 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar25._8_8_);
  puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)pppuVar3 + -8);
  lVar14 = *(long *)((long)pppuVar3 + -0x20);
  lVar19 = *(long *)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  uVar12 = *(undefined8 *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar26._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = lVar14;
    *(long *)((long)pppuVar3 + -0x18) = lVar19;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppuVar3 + -8) = puVar24;
    uVar16 = auVar26._8_4_;
    if ((int)uVar16 < *(int *)(auVar26._0_8_ + 0x30)) {
      lVar14 = *(long *)(auVar26._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar13;
      if (lVar14 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar14 + 0x18)) {
        *(int *)(lVar14 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar13 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar13,0);
    uVar11 = auVar26._0_8_;
    *(ulong *)((long)pppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppuVar3 + -0x48) = uVar12;
    *(long *)((long)pppuVar3 + -0x40) = lVar14;
    *(undefined8 *)((long)pppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x10);
    *(undefined **)((long)pppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppuVar3 + -0x30);
    puVar24 = *(undefined **)((long)pppuVar3 + -0x28);
    lVar14 = *(long *)((long)pppuVar3 + -0x40);
    lVar19 = *(long *)((long)pppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x50);
    uVar12 = *(undefined8 *)((long)pppuVar3 + -0x48);
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x16573ac | Core.Networking.HostVoteResult.CreateHostVoteResult
// ============================================================

/* WARNING: Possible PIC construction at 0x016573d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016573ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016573d8) */
/* WARNING: Removing unreachable block (ram,0x016573f0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteResult__CreateHostVoteResult
                (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  ulong uVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **ppuVar22;
  undefined1 ***pppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_100 [4];
  undefined1 auStack_e0 [12];
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffffd0;
  puVar2 = &stack0xffffffffffffffd0;
  ppuVar22 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar24 = (undefined *)0x16573d8;
    lVar13 = param_1;
    unaff_x21 = param_3;
code_r0x016ce2a4:
    uVar12 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_2;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar22;
    *(undefined **)(puVar2 + -8) = puVar24;
    puVar4 = puVar2 + -0x10;
    lVar13 = 2;
    uVar11 = 0x3eb5000;
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
      uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar20;
      return uVar20;
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar25 = func_0x00f78af4();
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar24 = &Core_Networking_HostVoteResult__AddType;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppuVar3 = &ppuStack_40;
    pppuVar23 = &ppuStack_40;
    puStack_38 = &Core_Networking_HostVoteResult__AddType;
    puVar24 = &Core_Networking_HostVoteResult__AddMap;
    ppuStack_40 = ppuVar22;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      puStack_48 = &Core_Networking_HostVoteResult__AddMap;
      puStack_50 = (undefined1 *)&ppuStack_40;
      lVar13 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff90;
      puStack_58 = &Core_Networking_HostVoteResult__EndHostVoteResult;
      ppuVar22 = &puStack_60;
      param_2 = 0x3eb5000;
      puStack_60 = (undefined1 *)&puStack_50;
      if ((bRam0000000003eb580d & 1) == 0) {
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x00f78a20(0x3d3f130);
        bRam0000000003eb580d = 1;
      }
      if (lVar13 == 0) {
        puVar24 = &Core_Networking_HostVoteResult__StartHostVoteResult;
        param_1 = func_0x00f78af4();
        if (param_1 == 0) {
          lVar13 = func_0x00f78af4();
          return *(ulong *)(lVar13 + 8);
        }
        lVar13 = 0;
        goto code_r0x016ce2a4;
      }
      uVar20 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar13 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
        uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
        unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
        uVar15 = *(uint *)(lVar13 + 0x30) - 1;
        if (-2 < (int)uVar15) {
          uVar15 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar15;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar19 = (int)uVar20;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar17 = *(long *)(lVar13 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar17 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar21 = unaff_x22 - 8;
          if (*(uint *)(lVar17 + 0x18) <= uVar21) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar17 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar20 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar5);
          lVar17 = *(long *)(lVar13 + 0x28);
          if (lVar17 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar17 + 0x18) <= uVar21) goto code_r0x016ced88;
          *(undefined4 *)(lVar17 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar15 = uVar1;
        } while (0 < (long)uVar21);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar13 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar20 - (short)uVar8));
        uVar15 = uVar15 * 2 + 6;
        unaff_x21 = (ulong)uVar15;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar15);
        unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
        if (0 < (int)*(uint *)(lVar13 + 0x40)) {
          uVar21 = 0;
          do {
            lVar17 = *(long *)(lVar13 + 0x18);
            if (((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) ||
               (lVar18 = *(long *)(lVar13 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - *(int *)(lVar18 + uVar21 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar15 = *(uint *)(lVar13 + 0x10);
            unaff_x22 = (ulong)uVar15;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,unaff_x21,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar13 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar13 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                *(int *)(lVar13 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar19;
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
            uVar21 = uVar21 + 1;
            unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
          } while ((long)uVar21 < (long)unaff_x22);
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
            lVar17 = *(long *)(lVar13 + 0x38);
            if (lVar17 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar17,unaff_x21,*(undefined4 *)(lVar17 + 0x18),0);
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
              iVar10 = iVar10 - iVar19;
              iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
              *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
              return uVar20;
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
      iVar19 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar27 = func_0x00f78ac0(uVar11,uVar12);
      puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar3 = &ppuStack_b0;
      lVar13 = *(long *)(auVar27._0_8_ + 0x18);
      iStack_d4 = iVar19;
      uStack_d0 = unaff_x22;
      uStack_c8 = unaff_x21;
      uStack_c0 = uVar20;
      uStack_b8 = uVar11;
      ppuStack_b0 = &puStack_60;
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar27._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar9,4);
        lVar13 = *(long *)(auVar27._0_8_ + 0x18);
        if (lVar13 != 0) {
          uVar20 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar9 - iVar10) + iVar19,2);
          if ((uVar20 & 0xffff) != 0) {
            return uVar20;
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
      uVar20 = func_0x00f78aec();
      uVar12 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar20,lVar13);
      uVar11 = func_0x00f78a24(0x3d56a50);
      puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar26 = func_0x00f78ac0(uVar20,uVar11);
      puVar4 = auStack_e0;
      do {
        uVar21 = auVar26._8_8_;
        lVar17 = auVar26._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar20;
        *(long *)(puVar4 + -0x18) = lVar13;
        *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
        *(undefined **)(puVar4 + -8) = puVar24;
        pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
        if ((int)uVar12 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),4);
          uVar20 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar21);
code_r0x016cef70:
          if (*(long *)(lVar17 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x18) = *(undefined4 *)(lVar17 + 0x10);
            return uVar20;
          }
        }
        else if (lVar17 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar21);
          if ((*(long *)(lVar17 + 0x18) != 0) &&
             (lVar13 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10), lVar13 != 0)) {
            uVar21 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar17 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
            uVar20 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,uVar21);
            goto code_r0x016cef70;
          }
        }
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar26 = func_0x00f78af4();
        uVar12 = 0;
        puVar4 = puVar4 + -0x20;
        lVar13 = lVar17;
        uVar20 = uVar21;
      } while( true );
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
    pppuVar23 = (undefined1 ***)ppuVar22;
  }
  uVar20 = auVar26._0_8_;
  auVar25._8_8_ = uVar11;
  auVar25._0_8_ = uVar20;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)pppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar23;
  *(undefined **)((long)pppuVar3 + -8) = puVar24;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar20 + 0x48) == '\0')) {
    return uVar20;
  }
  uVar12 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar20,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar20,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)pppuVar3 + -8);
  lVar13 = *(long *)((long)pppuVar3 + -0x20);
  param_1 = *(long *)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  uVar11 = *(undefined8 *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar14 = auVar25._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = lVar13;
    *(long *)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppuVar3 + -8) = puVar24;
    uVar15 = auVar25._8_4_;
    if ((int)uVar15 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar13 = *(long *)(auVar25._0_8_ + 0x28);
      uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar12;
      if (lVar13 == 0) goto code_r0x016ce410;
      if (uVar15 < *(uint *)(lVar13 + 0x18)) {
        *(int *)(lVar13 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar20;
        return uVar20;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar14 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar14,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar12,0);
    uVar20 = auVar25._0_8_;
    *(ulong *)((long)pppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppuVar3 + -0x48) = uVar11;
    *(long *)((long)pppuVar3 + -0x40) = lVar13;
    *(undefined8 *)((long)pppuVar3 + -0x38) = uVar14;
    *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x10);
    *(undefined **)((long)pppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar20 + 0x48) == '\0')) {
      return uVar20;
    }
    uVar12 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar20,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar20,uVar16);
    puVar4 = *(undefined1 **)((long)pppuVar3 + -0x30);
    puVar24 = *(undefined **)((long)pppuVar3 + -0x28);
    lVar13 = *(long *)((long)pppuVar3 + -0x40);
    param_1 = *(long *)((long)pppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x50);
    uVar11 = *(undefined8 *)((long)pppuVar3 + -0x48);
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1657408 | Core.Networking.HostVoteResult.AddType
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteResult__AddType
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 unaff_x19;
  int iVar17;
  undefined8 unaff_x20;
  long lVar18;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [12];
  int iStack_a4;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = param_1;
  if (param_1 == 0) {
    puVar2 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_HostVoteResult__AddMap;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      puStack_18 = &Core_Networking_HostVoteResult__AddMap;
      puStack_20 = &stack0xfffffffffffffff0;
      lVar9 = func_0x00f78af4();
      puStack_28 = &Core_Networking_HostVoteResult__EndHostVoteResult;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb580d & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d3f130);
        bRam0000000003eb580d = 1;
      }
      if (lVar9 == 0) {
        lVar9 = func_0x00f78af4();
        if (lVar9 == 0) {
          lVar9 = func_0x00f78af4();
          return *(ulong *)(lVar9 + 8);
        }
        uVar15 = 0;
        puVar2 = &stack0xffffffffffffff90;
        puVar20 = &stack0xffffffffffffffb0;
        lVar18 = 2;
        uVar13 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
        if (*(long *)(lVar9 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 2) {
            uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
            *(undefined8 *)(lVar9 + 0x28) = uVar13;
          }
          *(undefined4 *)(lVar9 + 0x30) = 2;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          *(int *)(lVar9 + 0x34) = (int)uVar10;
          return uVar10;
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar24 = func_0x00f78af4();
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
          lVar18 = *(long *)(lVar9 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar18 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar18 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar7 = *(int *)(lVar18 + unaff_x22 * 4);
          sVar3 = 0;
          if (iVar7 != 0) {
            sVar3 = (short)uVar10 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
          lVar18 = *(long *)(lVar9 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar12 = uVar1;
        } while (0 < (long)uVar19);
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
          uVar19 = 0;
          do {
            lVar18 = *(long *)(lVar9 + 0x18);
            if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar9 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar12 = *(uint *)(lVar9 + 0x10);
            unaff_x22 = (ulong)uVar12;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar9 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
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
            uVar19 = uVar19 + 1;
            unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
          } while ((long)uVar19 < (long)unaff_x22);
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
            lVar18 = *(long *)(lVar9 + 0x38);
            if (lVar18 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
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
        uVar13 = func_0x00f78b24();
        func_0x00f78ac0(uVar13,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar13 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      iVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar25 = func_0x00f78ac0(uVar13,uVar15);
      puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar21 = &ppuStack_80;
      lVar9 = *(long *)(auVar25._0_8_ + 0x18);
      iStack_a4 = iVar17;
      uStack_a0 = unaff_x22;
      uStack_98 = unaff_x21;
      uStack_90 = uVar10;
      uStack_88 = uVar13;
      ppuStack_80 = &puStack_30;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar25._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
        lVar9 = *(long *)(auVar25._0_8_ + 0x18);
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
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar11 = func_0x00f78a24(0x3d66338);
      lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar13,uVar11,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar23 = func_0x00f78ac0(uVar10,uVar13);
      puVar2 = auStack_b0;
      do {
        uVar19 = auVar23._8_8_;
        lVar18 = auVar23._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar10;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar21;
        *(undefined **)(puVar2 + -8) = puVar22;
        pppuVar21 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar18 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
            return uVar10;
          }
        }
        else if (lVar18 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
          if ((*(long *)(lVar18 + 0x18) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar9 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar18 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar23 = func_0x00f78af4();
        uVar15 = 0;
        puVar2 = puVar2 + -0x20;
        lVar9 = lVar18;
        uVar10 = uVar19;
      } while( true );
    }
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
    puVar2 = (undefined1 *)register0x00000008;
  }
  uVar10 = auVar23._0_8_;
  auVar24._8_8_ = uVar13;
  auVar24._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(ulong *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((auVar23._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar10,auVar23._8_8_);
  puVar20 = *(undefined1 **)(puVar2 + -0x10);
  puVar22 = *(undefined **)(puVar2 + -8);
  lVar18 = *(long *)(puVar2 + -0x20);
  lVar9 = *(long *)(puVar2 + -0x18);
  unaff_x22 = *(ulong *)(puVar2 + -0x30);
  uVar13 = *(undefined8 *)(puVar2 + -0x28);
code_r0x016ce380:
  do {
    uVar11 = auVar24._8_8_;
    *(long *)(puVar2 + -0x20) = lVar18;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 **)(puVar2 + -0x10) = puVar20;
    *(undefined **)(puVar2 + -8) = puVar22;
    uVar12 = auVar24._8_4_;
    if ((int)uVar12 < *(int *)(auVar24._0_8_ + 0x30)) {
      lVar18 = *(long *)(auVar24._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar14 = uVar15;
      if (lVar18 == 0) goto code_r0x016ce410;
      if (uVar12 < *(uint *)(lVar18 + 0x18)) {
        *(int *)(lVar18 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar11 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar11,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar11,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar15,0);
    uVar10 = auVar24._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar13;
    *(long *)(puVar2 + -0x40) = lVar18;
    *(undefined8 *)(puVar2 + -0x38) = uVar11;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar14 == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar14);
    puVar20 = *(undefined1 **)(puVar2 + -0x30);
    puVar22 = *(undefined **)(puVar2 + -0x28);
    lVar18 = *(long *)(puVar2 + -0x40);
    lVar9 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar13 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x165742c | Core.Networking.HostVoteResult.AddMap
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteResult__AddMap
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
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,param_2);
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
  if ((bRam0000000003eb580d & 1) == 0) {
    func_0x00f78a20(0x3d3f130);
    bRam0000000003eb580d = 1;
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
    unaff_x20 = 2;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 2) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,2);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 2;
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
// RVA: 0x1657450 | Core.Networking.HostVoteResult.EndHostVoteResult
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteResult__EndHostVoteResult
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
  
  if ((bRam0000000003eb580d & 1) == 0) {
    func_0x00f78a20(0x3d3f130);
    bRam0000000003eb580d = 1;
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
// RVA: 0x165749c | Core.Networking.HostVoteResult.StartHostVoteResult
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Networking_HostVoteResult__StartHostVoteResult
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



