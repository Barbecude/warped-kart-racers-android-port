// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.HostVoteStart

// ============================================================
// RVA: 0x16574b8 | Core.Networking.HostVoteStart.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_HostVoteStart__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16574c0 | Core.Networking.HostVoteStart.GetRootAsHostVoteStart
// ============================================================

undefined1  [16] Core_Networking_HostVoteStart__GetRootAsHostVoteStart(long param_1)

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
// RVA: 0x16574cc | Core.Networking.HostVoteStart.GetRootAsHostVoteStart
// ============================================================

undefined1  [16]
Core_Networking_HostVoteStart__GetRootAsHostVoteStart(long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x1657510 | Core.Networking.HostVoteStart.__assign
// ============================================================

undefined1  [16]
Core_Networking_HostVoteStart____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1657524 | Core.Networking.HostVoteStart.__init
// ============================================================

void Core_Networking_HostVoteStart____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1657530 | Core.Networking.HostVoteStart.get_Map1
// ============================================================

/* WARNING: Possible PIC construction at 0x0165770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165773c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01657728) */
/* WARNING: Removing unreachable block (ram,0x01657710) */
/* WARNING: Removing unreachable block (ram,0x01657740) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__get_Map1
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 *****pppppuVar5;
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
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_1e0 [4];
  undefined1 auStack_1c0 [12];
  int iStack_1b4;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 ****ppppuStack_190;
  undefined *puStack_188;
  ulong uStack_148;
  undefined8 ***apppuStack_140 [6];
  undefined8 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(param_1 + 2);
  if (lVar20 != 0) {
    iVar23 = *param_1 + (int)uVar13;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar23,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostVoteStart__get_Type1;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,6,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar23 = *piVar14 + (int)uVar13;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_HostVoteStart__get_Map2;
  ppppuStack_50 = &ppppuStack_30;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,8,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar23 = *piVar14 + (int)uVar13;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_HostVoteStart__get_Type2;
  ppppuStack_70 = &ppppuStack_50;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar23 = *piVar14 + (int)uVar13;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 *****)ppppuStack_70;
    unaff_x30 = puStack_68;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_88 = &Core_Networking_HostVoteStart__get_CompleteTimeStamp;
  uVar19 = 0;
  ppppuStack_90 = &ppppuStack_70;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(piVar14 + 2) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar14 + 2),*piVar14 + (int)uVar13,4);
    return uVar13;
  }
  auVar26 = func_0x00f78af4();
  lVar20 = auVar26._0_8_;
  puVar4 = &stack0xffffffffffffff20;
  puStack_a8 = &Core_Networking_HostVoteStart__CreateHostVoteStart;
  pppppuVar24 = &ppppuStack_b0;
  ppppuStack_b0 = &ppppuStack_90;
  if (lVar20 != 0) {
    puVar25 = &UNK_01657710;
    unaff_x21 = uVar19;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    piVar14 = auVar26._0_8_;
    uVar15 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar26._8_8_;
    *(long *)(puVar4 + -0x18) = lVar20;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(undefined **)(puVar4 + -8) = puVar25;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 5) {
        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar14 + 10) = uVar15;
      }
      piVar14[0xc] = 5;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar27 = func_0x00f78af4();
    pppppuVar5 = (undefined8 *****)(puVar4 + -0x30);
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar13 = auVar26._0_8_;
  ppppuStack_f0 = pppppuVar24;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_e8 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar26._8_8_);
    auVar27._8_8_ = 4;
    auVar27._0_8_ = uVar13;
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff20;
    pppppuVar24 = (undefined8 *****)ppppuStack_f0;
    puVar25 = puStack_e8;
    goto code_r0x016ce380;
  }
  pppppuVar5 = &ppppuStack_f0;
  puStack_e8 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
  puVar25 = &Core_Networking_HostVoteStart__AddType2;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff00;
    puVar25 = &Core_Networking_HostVoteStart__AddMap2;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar5 = (undefined8 *****)&stack0xfffffffffffffef0;
      puVar25 = &Core_Networking_HostVoteStart__AddType1;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar5 = (undefined8 *****)(apppuStack_140 + 4);
        apppuStack_140[5] = (undefined8 ***)&Core_Networking_HostVoteStart__AddType1;
        puVar25 = &Core_Networking_HostVoteStart__AddMap1;
        apppuStack_140[4] = (undefined8 ***)&stack0xfffffffffffffef0;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          apppuStack_140[3] = (undefined8 ***)&Core_Networking_HostVoteStart__AddMap1;
          apppuStack_140[2] = apppuStack_140 + 4;
          lVar20 = func_0x00f78af4();
          puVar4 = &stack0xfffffffffffffeb0;
          apppuStack_140[1] = (undefined8 ***)&Core_Networking_HostVoteStart__EndHostVoteStart;
          pppppuVar24 = (undefined8 *****)apppuStack_140;
          apppuStack_140[0] = apppuStack_140 + 2;
          if ((bRam0000000003eb580e & 1) == 0) {
            apppuStack_140[0] = apppuStack_140 + 2;
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar20 == 0) {
            puVar25 = &Core_Networking_HostVoteStart__StartHostVoteStart;
            lVar20 = func_0x00f78af4();
            auVar26._8_8_ = 0x3eb5000;
            auVar26._0_8_ = lVar20;
            if (lVar20 == 0) {
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 8);
            }
            lVar20 = 0;
            goto code_r0x016ce2a4;
          }
          uVar13 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar20 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,0);
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
            unaff_x21 = (ulong)*(uint *)(lVar20 + 0x30);
            uVar18 = *(uint *)(lVar20 + 0x30) - 1;
            if (-2 < (int)uVar18) {
              uVar18 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar18;
            do {
              uVar3 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar3;
              iVar23 = (int)uVar13;
              if ((int)uVar3 < 0) goto code_r0x016ceb30;
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar3) goto code_r0x016ced88;
            } while (*(int *)(lVar21 + (ulong)uVar3 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar19 = unaff_x22 - 8;
              if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
              iVar11 = *(int *)(lVar21 + unaff_x22 * 4);
              sVar7 = 0;
              if (iVar11 != 0) {
                sVar7 = (short)uVar13 - (short)iVar11;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar7);
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
              *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar3;
            } while (0 < (long)uVar19);
code_r0x016ceb30:
            uVar10 = *(undefined4 *)(lVar20 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)((short)uVar13 - (short)uVar10));
            uVar18 = uVar18 * 2 + 6;
            unaff_x21 = (ulong)uVar18;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)uVar18);
            unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
            if (0 < (int)*(uint *)(lVar20 + 0x40)) {
              uVar19 = 0;
              do {
                lVar21 = *(long *)(lVar20 + 0x18);
                if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
                   (lVar22 = *(long *)(lVar20 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar22 + 0x18) <= uVar19) goto code_r0x016ced88;
                uVar3 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) -
                        *(int *)(lVar22 + uVar19 * 4 + 0x20);
                unaff_x21 = (ulong)uVar3;
                uVar18 = *(uint *)(lVar20 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
                if (sVar7 == sVar8) {
                  if (sVar7 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar20 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                    iVar11 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                    if (iVar11 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar20 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
                    *(int *)(lVar20 + 0x10) = iVar12;
                    iVar11 = iVar11 - iVar23;
                    goto code_r0x016ced3c;
                  }
                  iVar11 = 2;
                  while( true ) {
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar3 + iVar11,2);
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar18 + iVar11,2);
                    if (sVar8 != sVar9) break;
                    iVar11 = iVar11 + 2;
                    if (sVar7 <= iVar11) goto code_r0x016cec64;
                  }
                }
                uVar19 = uVar19 + 1;
                unaff_x22 = (ulong)*(int *)(lVar20 + 0x40);
              } while ((long)uVar19 < (long)unaff_x22);
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
              uVar18 = (uint)unaff_x22;
              *(uint *)(lVar20 + 0x40) = uVar18 + 1;
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar10;
                unaff_x21 = *(ulong *)(lVar20 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
                  iVar12 = iVar12 - iVar23;
                  iVar11 = iVar11 - iVar23;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                  *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
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
          puStack_188 = &FlatBuffers_FlatBufferBuilder__Required;
          pppppuVar24 = &ppppuStack_190;
          lVar20 = *(long *)(auVar28._0_8_ + 0x18);
          iStack_1b4 = iVar23;
          uStack_1b0 = unaff_x22;
          uStack_1a8 = unaff_x21;
          uStack_1a0 = uVar13;
          uStack_198 = uVar15;
          ppppuStack_190 = apppuStack_140;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar28._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar11,4);
            lVar20 = *(long *)(auVar28._0_8_ + 0x18);
            if (lVar20 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar11 - iVar12) + iVar23,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1b4,0);
          uVar16 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar16 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar26 = func_0x00f78ac0(uVar13,uVar15);
          puVar6 = auStack_1c0;
          do {
            uVar19 = auVar26._8_8_;
            lVar21 = auVar26._0_8_;
            *(ulong *)(puVar6 + -0x20) = uVar13;
            *(long *)(puVar6 + -0x18) = lVar20;
            *(undefined8 ******)(puVar6 + -0x10) = pppppuVar24;
            *(undefined **)(puVar6 + -8) = puVar25;
            pppppuVar24 = (undefined8 *****)(puVar6 + -0x10);
            if ((int)uVar16 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
code_r0x016cef70:
              if (*(long *)(lVar21 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
                return uVar13;
              }
            }
            else if (lVar21 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
              if ((*(long *)(lVar21 + 0x18) != 0) &&
                 (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
                uVar19 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar19);
                goto code_r0x016cef70;
              }
            }
            puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar26 = func_0x00f78af4();
            uVar16 = 0;
            puVar6 = puVar6 + -0x20;
            lVar20 = lVar21;
            uVar13 = uVar19;
          } while( true );
        }
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 2;
    }
  }
  else {
    uVar15 = 3;
  }
  uVar13 = auVar26._0_8_;
  auVar27._8_8_ = uVar15;
  auVar27._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar5 + -0x18) = piVar14;
  *(undefined8 ******)((long)pppppuVar5 + -0x10) = pppppuVar5;
  *(undefined **)((long)pppppuVar5 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar26._8_8_);
  pppppuVar24 = *(undefined8 ******)((long)pppppuVar5 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar5 + -8);
  unaff_x20 = *(long *)((long)pppppuVar5 + -0x20);
  piVar14 = *(int **)((long)pppppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
code_r0x016ce380:
  do {
    uVar16 = auVar27._8_8_;
    *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar5 + -0x18) = piVar14;
    *(undefined8 ******)((long)pppppuVar5 + -0x10) = pppppuVar24;
    *(undefined **)((long)pppppuVar5 + -8) = puVar25;
    uVar18 = auVar27._8_4_;
    if ((int)uVar18 < *(int *)(auVar27._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar17 = uVar15;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar15,0);
    uVar13 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)pppppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)pppppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppppuVar5 + -0x38) = uVar16;
    *(undefined1 **)((long)pppppuVar5 + -0x30) = (undefined1 *)((long)pppppuVar5 + -0x10);
    *(undefined **)((long)pppppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar17 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar17);
    plVar1 = (long *)((long)pppppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)pppppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)pppppuVar5 + -0x40);
    piVar14 = *(int **)((long)pppppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x48);
    pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + -0x20);
    pppppuVar24 = (undefined8 *****)*plVar1;
    puVar25 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1657584 | Core.Networking.HostVoteStart.get_Type1
// ============================================================

/* WARNING: Possible PIC construction at 0x0165770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165773c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01657728) */
/* WARNING: Removing unreachable block (ram,0x01657710) */
/* WARNING: Removing unreachable block (ram,0x01657740) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__get_Type1
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 *****pppppuVar5;
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
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_1c0 [4];
  undefined1 auStack_1a0 [12];
  int iStack_194;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 ****ppppuStack_170;
  undefined *puStack_168;
  ulong uStack_128;
  undefined8 ***apppuStack_120 [6];
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(param_1 + 2);
  if (lVar20 != 0) {
    iVar23 = *param_1 + (int)uVar13;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar23,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostVoteStart__get_Map2;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,8,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar23 = *piVar14 + (int)uVar13;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_HostVoteStart__get_Type2;
  ppppuStack_50 = &ppppuStack_30;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar23 = *piVar14 + (int)uVar13;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_HostVoteStart__get_CompleteTimeStamp;
  uVar19 = 0;
  ppppuStack_70 = &ppppuStack_50;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(piVar14 + 2) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar14 + 2),*piVar14 + (int)uVar13,4);
    return uVar13;
  }
  auVar26 = func_0x00f78af4();
  lVar20 = auVar26._0_8_;
  puVar4 = &stack0xffffffffffffff40;
  puStack_88 = &Core_Networking_HostVoteStart__CreateHostVoteStart;
  pppppuVar24 = &ppppuStack_90;
  ppppuStack_90 = &ppppuStack_70;
  if (lVar20 != 0) {
    puVar25 = &UNK_01657710;
    unaff_x21 = uVar19;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    piVar14 = auVar26._0_8_;
    uVar15 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar26._8_8_;
    *(long *)(puVar4 + -0x18) = lVar20;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
    *(undefined **)(puVar4 + -8) = puVar25;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 5) {
        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar14 + 10) = uVar15;
      }
      piVar14[0xc] = 5;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar27 = func_0x00f78af4();
    pppppuVar5 = (undefined8 *****)(puVar4 + -0x30);
    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar13 = auVar26._0_8_;
  ppppuStack_d0 = pppppuVar24;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_c8 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar26._8_8_);
    auVar27._8_8_ = 4;
    auVar27._0_8_ = uVar13;
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff40;
    pppppuVar24 = (undefined8 *****)ppppuStack_d0;
    puVar25 = puStack_c8;
    goto code_r0x016ce380;
  }
  pppppuVar5 = &ppppuStack_d0;
  puStack_c8 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
  puVar25 = &Core_Networking_HostVoteStart__AddType2;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff20;
    puVar25 = &Core_Networking_HostVoteStart__AddMap2;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff10;
      puVar25 = &Core_Networking_HostVoteStart__AddType1;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar5 = (undefined8 *****)(apppuStack_120 + 4);
        apppuStack_120[5] = (undefined8 ***)&Core_Networking_HostVoteStart__AddType1;
        puVar25 = &Core_Networking_HostVoteStart__AddMap1;
        apppuStack_120[4] = (undefined8 ***)&stack0xffffffffffffff10;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          apppuStack_120[3] = (undefined8 ***)&Core_Networking_HostVoteStart__AddMap1;
          apppuStack_120[2] = apppuStack_120 + 4;
          lVar20 = func_0x00f78af4();
          puVar4 = &stack0xfffffffffffffed0;
          apppuStack_120[1] = (undefined8 ***)&Core_Networking_HostVoteStart__EndHostVoteStart;
          pppppuVar24 = (undefined8 *****)apppuStack_120;
          apppuStack_120[0] = apppuStack_120 + 2;
          if ((bRam0000000003eb580e & 1) == 0) {
            apppuStack_120[0] = apppuStack_120 + 2;
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar20 == 0) {
            puVar25 = &Core_Networking_HostVoteStart__StartHostVoteStart;
            lVar20 = func_0x00f78af4();
            auVar26._8_8_ = 0x3eb5000;
            auVar26._0_8_ = lVar20;
            if (lVar20 == 0) {
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 8);
            }
            lVar20 = 0;
            goto code_r0x016ce2a4;
          }
          uVar13 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar20 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,0);
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
            unaff_x21 = (ulong)*(uint *)(lVar20 + 0x30);
            uVar18 = *(uint *)(lVar20 + 0x30) - 1;
            if (-2 < (int)uVar18) {
              uVar18 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar18;
            do {
              uVar3 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar3;
              iVar23 = (int)uVar13;
              if ((int)uVar3 < 0) goto code_r0x016ceb30;
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar3) goto code_r0x016ced88;
            } while (*(int *)(lVar21 + (ulong)uVar3 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar19 = unaff_x22 - 8;
              if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
              iVar11 = *(int *)(lVar21 + unaff_x22 * 4);
              sVar7 = 0;
              if (iVar11 != 0) {
                sVar7 = (short)uVar13 - (short)iVar11;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar7);
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
              *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar3;
            } while (0 < (long)uVar19);
code_r0x016ceb30:
            uVar10 = *(undefined4 *)(lVar20 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)((short)uVar13 - (short)uVar10));
            uVar18 = uVar18 * 2 + 6;
            unaff_x21 = (ulong)uVar18;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)uVar18);
            unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
            if (0 < (int)*(uint *)(lVar20 + 0x40)) {
              uVar19 = 0;
              do {
                lVar21 = *(long *)(lVar20 + 0x18);
                if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
                   (lVar22 = *(long *)(lVar20 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar22 + 0x18) <= uVar19) goto code_r0x016ced88;
                uVar3 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) -
                        *(int *)(lVar22 + uVar19 * 4 + 0x20);
                unaff_x21 = (ulong)uVar3;
                uVar18 = *(uint *)(lVar20 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
                if (sVar7 == sVar8) {
                  if (sVar7 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar20 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                    iVar11 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                    if (iVar11 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar20 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
                    *(int *)(lVar20 + 0x10) = iVar12;
                    iVar11 = iVar11 - iVar23;
                    goto code_r0x016ced3c;
                  }
                  iVar11 = 2;
                  while( true ) {
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar3 + iVar11,2);
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar18 + iVar11,2);
                    if (sVar8 != sVar9) break;
                    iVar11 = iVar11 + 2;
                    if (sVar7 <= iVar11) goto code_r0x016cec64;
                  }
                }
                uVar19 = uVar19 + 1;
                unaff_x22 = (ulong)*(int *)(lVar20 + 0x40);
              } while ((long)uVar19 < (long)unaff_x22);
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
              uVar18 = (uint)unaff_x22;
              *(uint *)(lVar20 + 0x40) = uVar18 + 1;
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar10;
                unaff_x21 = *(ulong *)(lVar20 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
                  iVar12 = iVar12 - iVar23;
                  iVar11 = iVar11 - iVar23;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                  *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
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
          puStack_168 = &FlatBuffers_FlatBufferBuilder__Required;
          pppppuVar24 = &ppppuStack_170;
          lVar20 = *(long *)(auVar28._0_8_ + 0x18);
          iStack_194 = iVar23;
          uStack_190 = unaff_x22;
          uStack_188 = unaff_x21;
          uStack_180 = uVar13;
          uStack_178 = uVar15;
          ppppuStack_170 = apppuStack_120;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar28._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar11,4);
            lVar20 = *(long *)(auVar28._0_8_ + 0x18);
            if (lVar20 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar11 - iVar12) + iVar23,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_194,0);
          uVar16 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar16 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar26 = func_0x00f78ac0(uVar13,uVar15);
          puVar6 = auStack_1a0;
          do {
            uVar19 = auVar26._8_8_;
            lVar21 = auVar26._0_8_;
            *(ulong *)(puVar6 + -0x20) = uVar13;
            *(long *)(puVar6 + -0x18) = lVar20;
            *(undefined8 ******)(puVar6 + -0x10) = pppppuVar24;
            *(undefined **)(puVar6 + -8) = puVar25;
            pppppuVar24 = (undefined8 *****)(puVar6 + -0x10);
            if ((int)uVar16 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
code_r0x016cef70:
              if (*(long *)(lVar21 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
                return uVar13;
              }
            }
            else if (lVar21 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
              if ((*(long *)(lVar21 + 0x18) != 0) &&
                 (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
                uVar19 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar19);
                goto code_r0x016cef70;
              }
            }
            puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar26 = func_0x00f78af4();
            uVar16 = 0;
            puVar6 = puVar6 + -0x20;
            lVar20 = lVar21;
            uVar13 = uVar19;
          } while( true );
        }
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 2;
    }
  }
  else {
    uVar15 = 3;
  }
  uVar13 = auVar26._0_8_;
  auVar27._8_8_ = uVar15;
  auVar27._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar5 + -0x18) = piVar14;
  *(undefined8 ******)((long)pppppuVar5 + -0x10) = pppppuVar5;
  *(undefined **)((long)pppppuVar5 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar26._8_8_);
  pppppuVar24 = *(undefined8 ******)((long)pppppuVar5 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar5 + -8);
  unaff_x20 = *(long *)((long)pppppuVar5 + -0x20);
  piVar14 = *(int **)((long)pppppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
code_r0x016ce380:
  do {
    uVar16 = auVar27._8_8_;
    *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar5 + -0x18) = piVar14;
    *(undefined8 ******)((long)pppppuVar5 + -0x10) = pppppuVar24;
    *(undefined **)((long)pppppuVar5 + -8) = puVar25;
    uVar18 = auVar27._8_4_;
    if ((int)uVar18 < *(int *)(auVar27._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar17 = uVar15;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar15,0);
    uVar13 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)pppppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)pppppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppppuVar5 + -0x38) = uVar16;
    *(undefined1 **)((long)pppppuVar5 + -0x30) = (undefined1 *)((long)pppppuVar5 + -0x10);
    *(undefined **)((long)pppppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar17 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar17);
    plVar1 = (long *)((long)pppppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)pppppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)pppppuVar5 + -0x40);
    piVar14 = *(int **)((long)pppppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x48);
    pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + -0x20);
    pppppuVar24 = (undefined8 *****)*plVar1;
    puVar25 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x16575d8 | Core.Networking.HostVoteStart.get_Map2
// ============================================================

/* WARNING: Possible PIC construction at 0x0165770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165773c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01657728) */
/* WARNING: Removing unreachable block (ram,0x01657710) */
/* WARNING: Removing unreachable block (ram,0x01657740) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__get_Map2
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 *****pppppuVar5;
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
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 ****ppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_1a0 [4];
  undefined1 auStack_180 [12];
  int iStack_174;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 ****ppppuStack_150;
  undefined *puStack_148;
  ulong uStack_108;
  undefined8 ***apppuStack_100 [6];
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(param_1 + 2);
  if (lVar20 != 0) {
    iVar23 = *param_1 + (int)uVar13;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar23,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostVoteStart__get_Type2;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar23 = *piVar14 + (int)uVar13;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_HostVoteStart__get_CompleteTimeStamp;
  uVar19 = 0;
  ppuStack_50 = (undefined8 **)&puStack_30;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(piVar14 + 2) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar14 + 2),*piVar14 + (int)uVar13,4);
    return uVar13;
  }
  auVar26 = func_0x00f78af4();
  lVar20 = auVar26._0_8_;
  puVar4 = &stack0xffffffffffffff60;
  puStack_68 = &Core_Networking_HostVoteStart__CreateHostVoteStart;
  ppppuVar24 = &pppuStack_70;
  pppuStack_70 = &ppuStack_50;
  if (lVar20 != 0) {
    puVar25 = &UNK_01657710;
    unaff_x21 = uVar19;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    piVar14 = auVar26._0_8_;
    uVar15 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar26._8_8_;
    *(long *)(puVar4 + -0x18) = lVar20;
    *(undefined8 *****)(puVar4 + -0x10) = ppppuVar24;
    *(undefined **)(puVar4 + -8) = puVar25;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 5) {
        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar14 + 10) = uVar15;
      }
      piVar14[0xc] = 5;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar27 = func_0x00f78af4();
    pppppuVar5 = (undefined8 *****)(puVar4 + -0x30);
    ppppuVar24 = (undefined8 ****)(puVar4 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar13 = auVar26._0_8_;
  ppppuStack_b0 = ppppuVar24;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_a8 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar26._8_8_);
    auVar27._8_8_ = 4;
    auVar27._0_8_ = uVar13;
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff60;
    ppppuVar24 = ppppuStack_b0;
    puVar25 = puStack_a8;
    goto code_r0x016ce380;
  }
  pppppuVar5 = &ppppuStack_b0;
  puStack_a8 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
  puVar25 = &Core_Networking_HostVoteStart__AddType2;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff40;
    puVar25 = &Core_Networking_HostVoteStart__AddMap2;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff30;
      puVar25 = &Core_Networking_HostVoteStart__AddType1;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar5 = (undefined8 *****)(apppuStack_100 + 4);
        apppuStack_100[5] = (undefined8 ***)&Core_Networking_HostVoteStart__AddType1;
        puVar25 = &Core_Networking_HostVoteStart__AddMap1;
        apppuStack_100[4] = (undefined8 ***)&stack0xffffffffffffff30;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          apppuStack_100[3] = (undefined8 ***)&Core_Networking_HostVoteStart__AddMap1;
          apppuStack_100[2] = apppuStack_100 + 4;
          lVar20 = func_0x00f78af4();
          puVar4 = &stack0xfffffffffffffef0;
          apppuStack_100[1] = (undefined8 ***)&Core_Networking_HostVoteStart__EndHostVoteStart;
          ppppuVar24 = apppuStack_100;
          apppuStack_100[0] = apppuStack_100 + 2;
          if ((bRam0000000003eb580e & 1) == 0) {
            apppuStack_100[0] = apppuStack_100 + 2;
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar20 == 0) {
            puVar25 = &Core_Networking_HostVoteStart__StartHostVoteStart;
            lVar20 = func_0x00f78af4();
            auVar26._8_8_ = 0x3eb5000;
            auVar26._0_8_ = lVar20;
            if (lVar20 == 0) {
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 8);
            }
            lVar20 = 0;
            goto code_r0x016ce2a4;
          }
          uVar13 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar20 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,0);
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
            unaff_x21 = (ulong)*(uint *)(lVar20 + 0x30);
            uVar18 = *(uint *)(lVar20 + 0x30) - 1;
            if (-2 < (int)uVar18) {
              uVar18 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar18;
            do {
              uVar3 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar3;
              iVar23 = (int)uVar13;
              if ((int)uVar3 < 0) goto code_r0x016ceb30;
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar3) goto code_r0x016ced88;
            } while (*(int *)(lVar21 + (ulong)uVar3 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar19 = unaff_x22 - 8;
              if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
              iVar11 = *(int *)(lVar21 + unaff_x22 * 4);
              sVar7 = 0;
              if (iVar11 != 0) {
                sVar7 = (short)uVar13 - (short)iVar11;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar7);
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
              *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar3;
            } while (0 < (long)uVar19);
code_r0x016ceb30:
            uVar10 = *(undefined4 *)(lVar20 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)((short)uVar13 - (short)uVar10));
            uVar18 = uVar18 * 2 + 6;
            unaff_x21 = (ulong)uVar18;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)uVar18);
            unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
            if (0 < (int)*(uint *)(lVar20 + 0x40)) {
              uVar19 = 0;
              do {
                lVar21 = *(long *)(lVar20 + 0x18);
                if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
                   (lVar22 = *(long *)(lVar20 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar22 + 0x18) <= uVar19) goto code_r0x016ced88;
                uVar3 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) -
                        *(int *)(lVar22 + uVar19 * 4 + 0x20);
                unaff_x21 = (ulong)uVar3;
                uVar18 = *(uint *)(lVar20 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
                if (sVar7 == sVar8) {
                  if (sVar7 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar20 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                    iVar11 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                    if (iVar11 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar20 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
                    *(int *)(lVar20 + 0x10) = iVar12;
                    iVar11 = iVar11 - iVar23;
                    goto code_r0x016ced3c;
                  }
                  iVar11 = 2;
                  while( true ) {
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar3 + iVar11,2);
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar18 + iVar11,2);
                    if (sVar8 != sVar9) break;
                    iVar11 = iVar11 + 2;
                    if (sVar7 <= iVar11) goto code_r0x016cec64;
                  }
                }
                uVar19 = uVar19 + 1;
                unaff_x22 = (ulong)*(int *)(lVar20 + 0x40);
              } while ((long)uVar19 < (long)unaff_x22);
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
              uVar18 = (uint)unaff_x22;
              *(uint *)(lVar20 + 0x40) = uVar18 + 1;
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar10;
                unaff_x21 = *(ulong *)(lVar20 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
                  iVar12 = iVar12 - iVar23;
                  iVar11 = iVar11 - iVar23;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                  *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
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
          puStack_148 = &FlatBuffers_FlatBufferBuilder__Required;
          pppppuVar5 = &ppppuStack_150;
          lVar20 = *(long *)(auVar28._0_8_ + 0x18);
          iStack_174 = iVar23;
          uStack_170 = unaff_x22;
          uStack_168 = unaff_x21;
          uStack_160 = uVar13;
          uStack_158 = uVar15;
          ppppuStack_150 = apppuStack_100;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar28._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar11,4);
            lVar20 = *(long *)(auVar28._0_8_ + 0x18);
            if (lVar20 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar11 - iVar12) + iVar23,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_174,0);
          uVar16 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar16 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar26 = func_0x00f78ac0(uVar13,uVar15);
          puVar6 = auStack_180;
          do {
            uVar19 = auVar26._8_8_;
            lVar21 = auVar26._0_8_;
            *(ulong *)(puVar6 + -0x20) = uVar13;
            *(long *)(puVar6 + -0x18) = lVar20;
            *(undefined8 ******)(puVar6 + -0x10) = pppppuVar5;
            *(undefined **)(puVar6 + -8) = puVar25;
            pppppuVar5 = (undefined8 *****)(puVar6 + -0x10);
            if ((int)uVar16 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
code_r0x016cef70:
              if (*(long *)(lVar21 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
                return uVar13;
              }
            }
            else if (lVar21 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
              if ((*(long *)(lVar21 + 0x18) != 0) &&
                 (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
                uVar19 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar19);
                goto code_r0x016cef70;
              }
            }
            puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar26 = func_0x00f78af4();
            uVar16 = 0;
            puVar6 = puVar6 + -0x20;
            lVar20 = lVar21;
            uVar13 = uVar19;
          } while( true );
        }
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 2;
    }
  }
  else {
    uVar15 = 3;
  }
  uVar13 = auVar26._0_8_;
  auVar27._8_8_ = uVar15;
  auVar27._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar5 + -0x18) = piVar14;
  *(undefined8 ******)((long)pppppuVar5 + -0x10) = pppppuVar5;
  *(undefined **)((long)pppppuVar5 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar26._8_8_);
  ppppuVar24 = *(undefined8 *****)((long)pppppuVar5 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar5 + -8);
  unaff_x20 = *(long *)((long)pppppuVar5 + -0x20);
  piVar14 = *(int **)((long)pppppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
code_r0x016ce380:
  do {
    uVar16 = auVar27._8_8_;
    *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar5 + -0x18) = piVar14;
    *(undefined8 *****)((long)pppppuVar5 + -0x10) = ppppuVar24;
    *(undefined **)((long)pppppuVar5 + -8) = puVar25;
    uVar18 = auVar27._8_4_;
    if ((int)uVar18 < *(int *)(auVar27._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar17 = uVar15;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar15,0);
    uVar13 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)pppppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)pppppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppppuVar5 + -0x38) = uVar16;
    *(undefined1 **)((long)pppppuVar5 + -0x30) = (undefined1 *)((long)pppppuVar5 + -0x10);
    *(undefined **)((long)pppppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar17 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar17);
    plVar1 = (long *)((long)pppppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)pppppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)pppppuVar5 + -0x40);
    piVar14 = *(int **)((long)pppppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x48);
    pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + -0x20);
    ppppuVar24 = (undefined8 ****)*plVar1;
    puVar25 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x165762c | Core.Networking.HostVoteStart.get_Type2
// ============================================================

/* WARNING: Possible PIC construction at 0x0165770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165773c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01657728) */
/* WARNING: Removing unreachable block (ram,0x01657710) */
/* WARNING: Removing unreachable block (ram,0x01657740) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__get_Type2
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *****pppppuVar5;
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
  undefined1 ****ppppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_180 [4];
  undefined1 auStack_160 [12];
  int iStack_154;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 ****ppppuStack_130;
  undefined *puStack_128;
  ulong uStack_e8;
  undefined1 ***apppuStack_e0 [6];
  undefined1 ****ppppuStack_90;
  undefined *puStack_88;
  undefined1 ***pppuStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(param_1 + 2) != 0) {
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar13,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostVoteStart__get_CompleteTimeStamp;
  uVar20 = 0;
  ppuStack_30 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(piVar14 + 2) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar14 + 2),*piVar14 + (int)uVar13,4);
    return uVar13;
  }
  auVar26 = func_0x00f78af4();
  lVar17 = auVar26._0_8_;
  puVar4 = &stack0xffffffffffffff80;
  puStack_48 = &Core_Networking_HostVoteStart__CreateHostVoteStart;
  ppppuVar24 = &pppuStack_50;
  pppuStack_50 = &ppuStack_30;
  if (lVar17 != 0) {
    puVar25 = &UNK_01657710;
    unaff_x21 = uVar20;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    piVar14 = auVar26._0_8_;
    uVar15 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar26._8_8_;
    *(long *)(puVar4 + -0x18) = lVar17;
    *(undefined1 *****)(puVar4 + -0x10) = ppppuVar24;
    *(undefined **)(puVar4 + -8) = puVar25;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 5) {
        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar14 + 10) = uVar15;
      }
      piVar14[0xc] = 5;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar27 = func_0x00f78af4();
    pppppuVar5 = (undefined1 *****)(puVar4 + -0x30);
    ppppuVar24 = (undefined1 ****)(puVar4 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar13 = auVar26._0_8_;
  ppppuStack_90 = ppppuVar24;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_88 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar26._8_8_);
    auVar27._8_8_ = 4;
    auVar27._0_8_ = uVar13;
    pppppuVar5 = (undefined1 *****)&stack0xffffffffffffff80;
    ppppuVar24 = ppppuStack_90;
    puVar25 = puStack_88;
    goto code_r0x016ce380;
  }
  pppppuVar5 = &ppppuStack_90;
  puStack_88 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
  puVar25 = &Core_Networking_HostVoteStart__AddType2;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar5 = (undefined1 *****)&stack0xffffffffffffff60;
    puVar25 = &Core_Networking_HostVoteStart__AddMap2;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar5 = (undefined1 *****)&stack0xffffffffffffff50;
      puVar25 = &Core_Networking_HostVoteStart__AddType1;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar5 = (undefined1 *****)(apppuStack_e0 + 4);
        apppuStack_e0[5] = (undefined1 ***)&Core_Networking_HostVoteStart__AddType1;
        puVar25 = &Core_Networking_HostVoteStart__AddMap1;
        apppuStack_e0[4] = (undefined1 ***)&stack0xffffffffffffff50;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          apppuStack_e0[3] = (undefined1 ***)&Core_Networking_HostVoteStart__AddMap1;
          apppuStack_e0[2] = (undefined1 ***)(apppuStack_e0 + 4);
          lVar17 = func_0x00f78af4();
          puVar4 = &stack0xffffffffffffff10;
          apppuStack_e0[1] = (undefined1 ***)&Core_Networking_HostVoteStart__EndHostVoteStart;
          ppppuVar24 = apppuStack_e0;
          apppuStack_e0[0] = (undefined1 ***)(apppuStack_e0 + 2);
          if ((bRam0000000003eb580e & 1) == 0) {
            apppuStack_e0[0] = (undefined1 ***)(apppuStack_e0 + 2);
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar17 == 0) {
            puVar25 = &Core_Networking_HostVoteStart__StartHostVoteStart;
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
                uVar3 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) -
                        *(int *)(lVar22 + uVar20 * 4 + 0x20);
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
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
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
          puStack_128 = &FlatBuffers_FlatBufferBuilder__Required;
          pppppuVar5 = &ppppuStack_130;
          lVar17 = *(long *)(auVar28._0_8_ + 0x18);
          iStack_154 = iVar23;
          uStack_150 = unaff_x22;
          uStack_148 = unaff_x21;
          uStack_140 = uVar13;
          uStack_138 = uVar15;
          ppppuStack_130 = apppuStack_e0;
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
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_154,0);
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
          puVar6 = auStack_160;
          do {
            uVar20 = auVar26._8_8_;
            lVar21 = auVar26._0_8_;
            *(ulong *)(puVar6 + -0x20) = uVar13;
            *(long *)(puVar6 + -0x18) = lVar17;
            *(undefined1 ******)(puVar6 + -0x10) = pppppuVar5;
            *(undefined **)(puVar6 + -8) = puVar25;
            pppppuVar5 = (undefined1 *****)(puVar6 + -0x10);
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
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 2;
    }
  }
  else {
    uVar15 = 3;
  }
  uVar13 = auVar26._0_8_;
  auVar27._8_8_ = uVar15;
  auVar27._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar5 + -0x18) = piVar14;
  *(undefined1 ******)((long)pppppuVar5 + -0x10) = pppppuVar5;
  *(undefined **)((long)pppppuVar5 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar26._8_8_);
  ppppuVar24 = *(undefined1 *****)((long)pppppuVar5 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar5 + -8);
  unaff_x20 = *(long *)((long)pppppuVar5 + -0x20);
  piVar14 = *(int **)((long)pppppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
code_r0x016ce380:
  do {
    uVar16 = auVar27._8_8_;
    *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar5 + -0x18) = piVar14;
    *(undefined1 *****)((long)pppppuVar5 + -0x10) = ppppuVar24;
    *(undefined **)((long)pppppuVar5 + -8) = puVar25;
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
    *(ulong *)((long)pppppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)pppppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)pppppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppppuVar5 + -0x38) = uVar16;
    *(undefined1 **)((long)pppppuVar5 + -0x30) = (undefined1 *)((long)pppppuVar5 + -0x10);
    *(undefined **)((long)pppppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar18);
    plVar1 = (long *)((long)pppppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)pppppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)pppppuVar5 + -0x40);
    piVar14 = *(int **)((long)pppppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x48);
    pppppuVar5 = (undefined1 *****)((long)pppppuVar5 + -0x20);
    ppppuVar24 = (undefined1 ****)*plVar1;
    puVar25 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1657680 | Core.Networking.HostVoteStart.get_CompleteTimeStamp
// ============================================================

/* WARNING: Possible PIC construction at 0x0165770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165773c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01657728) */
/* WARNING: Removing unreachable block (ram,0x01657710) */
/* WARNING: Removing unreachable block (ram,0x01657740) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__get_CompleteTimeStamp
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 ***pppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_160 [4];
  undefined1 auStack_140 [12];
  int iStack_134;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  ulong uStack_c8;
  undefined8 **appuStack_c0 [6];
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_30;
  undefined *puStack_28;
  
  uVar19 = 0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar13,4);
    return uVar13;
  }
  auVar25 = func_0x00f78af4();
  lVar16 = auVar25._0_8_;
  puVar4 = &stack0xffffffffffffffa0;
  puStack_28 = &Core_Networking_HostVoteStart__CreateHostVoteStart;
  pppuVar23 = &ppuStack_30;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  if (lVar16 != 0) {
    puVar24 = &UNK_01657710;
    unaff_x21 = uVar19;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    param_1 = auVar25._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar25._8_8_;
    *(long *)(puVar4 + -0x18) = lVar16;
    *(undefined8 ****)(puVar4 + -0x10) = pppuVar23;
    *(undefined **)(puVar4 + -8) = puVar24;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 10) != 0) {
      if (*(int *)(*(long *)(param_1 + 10) + 0x18) < 5) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(param_1 + 10) = uVar14;
      }
      param_1[0xc] = 5;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      param_1[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar26 = func_0x00f78af4();
    ppppuVar5 = (undefined8 ****)(puVar4 + -0x30);
    pppuVar23 = (undefined8 ***)(puVar4 + -0x10);
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar25 = func_0x00f78af4();
  uVar13 = auVar25._0_8_;
  pppuStack_70 = pppuVar23;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_68 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
    if ((auVar25._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar25._8_8_);
    auVar26._8_8_ = 4;
    auVar26._0_8_ = uVar13;
    ppppuVar5 = (undefined8 ****)&stack0xffffffffffffffa0;
    pppuVar23 = pppuStack_70;
    puVar24 = puStack_68;
    goto code_r0x016ce380;
  }
  ppppuVar5 = &pppuStack_70;
  puStack_68 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
  puVar24 = &Core_Networking_HostVoteStart__AddType2;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    ppppuVar5 = (undefined8 ****)&stack0xffffffffffffff80;
    puVar24 = &Core_Networking_HostVoteStart__AddMap2;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppppuVar5 = (undefined8 ****)&stack0xffffffffffffff70;
      puVar24 = &Core_Networking_HostVoteStart__AddType1;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        ppppuVar5 = (undefined8 ****)(appuStack_c0 + 4);
        appuStack_c0[5] = (undefined8 **)&Core_Networking_HostVoteStart__AddType1;
        puVar24 = &Core_Networking_HostVoteStart__AddMap1;
        appuStack_c0[4] = (undefined8 **)&stack0xffffffffffffff70;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          appuStack_c0[3] = (undefined8 **)&Core_Networking_HostVoteStart__AddMap1;
          appuStack_c0[2] = appuStack_c0 + 4;
          lVar16 = func_0x00f78af4();
          puVar4 = &stack0xffffffffffffff30;
          appuStack_c0[1] = (undefined8 **)&Core_Networking_HostVoteStart__EndHostVoteStart;
          pppuVar23 = appuStack_c0;
          appuStack_c0[0] = appuStack_c0 + 2;
          if ((bRam0000000003eb580e & 1) == 0) {
            appuStack_c0[0] = appuStack_c0 + 2;
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar16 == 0) {
            puVar24 = &Core_Networking_HostVoteStart__StartHostVoteStart;
            lVar16 = func_0x00f78af4();
            auVar25._8_8_ = 0x3eb5000;
            auVar25._0_8_ = lVar16;
            if (lVar16 == 0) {
              lVar16 = func_0x00f78af4();
              return *(ulong *)(lVar16 + 8);
            }
            lVar16 = 0;
            goto code_r0x016ce2a4;
          }
          uVar13 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar16 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,0);
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
            unaff_x21 = (ulong)*(uint *)(lVar16 + 0x30);
            uVar18 = *(uint *)(lVar16 + 0x30) - 1;
            if (-2 < (int)uVar18) {
              uVar18 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar18;
            do {
              uVar3 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar3;
              iVar22 = (int)uVar13;
              if ((int)uVar3 < 0) goto code_r0x016ceb30;
              lVar20 = *(long *)(lVar16 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar3) goto code_r0x016ced88;
            } while (*(int *)(lVar20 + (ulong)uVar3 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar19 = unaff_x22 - 8;
              if (*(uint *)(lVar20 + 0x18) <= uVar19) goto code_r0x016ced88;
              iVar11 = *(int *)(lVar20 + unaff_x22 * 4);
              sVar7 = 0;
              if (iVar11 != 0) {
                sVar7 = (short)uVar13 - (short)iVar11;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)sVar7);
              lVar20 = *(long *)(lVar16 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar19) goto code_r0x016ced88;
              *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar3;
            } while (0 < (long)uVar19);
code_r0x016ceb30:
            uVar10 = *(undefined4 *)(lVar16 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)((short)uVar13 - (short)uVar10));
            uVar18 = uVar18 * 2 + 6;
            unaff_x21 = (ulong)uVar18;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)uVar18);
            unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
            if (0 < (int)*(uint *)(lVar16 + 0x40)) {
              uVar19 = 0;
              do {
                lVar20 = *(long *)(lVar16 + 0x18);
                if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                   (lVar21 = *(long *)(lVar16 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
                uVar3 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                        *(int *)(lVar21 + uVar19 * 4 + 0x20);
                unaff_x21 = (ulong)uVar3;
                uVar18 = *(uint *)(lVar16 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),unaff_x22,2);
                if (sVar7 == sVar8) {
                  if (sVar7 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar16 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                    iVar11 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                    if (iVar11 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar16 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                    *(int *)(lVar16 + 0x10) = iVar12;
                    iVar11 = iVar11 - iVar22;
                    goto code_r0x016ced3c;
                  }
                  iVar11 = 2;
                  while( true ) {
                    if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar3 + iVar11,2);
                    if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                    sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar18 + iVar11,2);
                    if (sVar8 != sVar9) break;
                    iVar11 = iVar11 + 2;
                    if (sVar7 <= iVar11) goto code_r0x016cec64;
                  }
                }
                uVar19 = uVar19 + 1;
                unaff_x22 = (ulong)*(int *)(lVar16 + 0x40);
              } while ((long)uVar19 < (long)unaff_x22);
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
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar10;
                unaff_x21 = *(ulong *)(lVar16 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
                  iVar12 = iVar12 - iVar22;
                  iVar11 = iVar11 - iVar22;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                  *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
                  return uVar13;
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
          uVar15 = func_0x00f78a24(0x3d6cea8);
          iVar22 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
          uVar15 = func_0x00f78a24(0x3d56a30);
          auVar27 = func_0x00f78ac0(uVar14,uVar15);
          puStack_108 = &FlatBuffers_FlatBufferBuilder__Required;
          ppppuVar5 = &pppuStack_110;
          lVar16 = *(long *)(auVar27._0_8_ + 0x18);
          iStack_134 = iVar22;
          uStack_130 = unaff_x22;
          uStack_128 = unaff_x21;
          uStack_120 = uVar13;
          uStack_118 = uVar14;
          pppuStack_110 = appuStack_c0;
          if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar27._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,iVar11,4);
            lVar16 = *(long *)(auVar27._0_8_ + 0x18);
            if (lVar16 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,(iVar11 - iVar12) + iVar22,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_134,0);
          uVar15 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar15 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar16);
          uVar14 = func_0x00f78a24(0x3d56a50);
          puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78ac0(uVar13,uVar14);
          puVar6 = auStack_140;
          do {
            uVar19 = auVar25._8_8_;
            lVar20 = auVar25._0_8_;
            *(ulong *)(puVar6 + -0x20) = uVar13;
            *(long *)(puVar6 + -0x18) = lVar16;
            *(undefined8 *****)(puVar6 + -0x10) = ppppuVar5;
            *(undefined **)(puVar6 + -8) = puVar24;
            ppppuVar5 = (undefined8 ****)(puVar6 + -0x10);
            if ((int)uVar15 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar19);
code_r0x016cef70:
              if (*(long *)(lVar20 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
                return uVar13;
              }
            }
            else if (lVar20 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar19);
              if ((*(long *)(lVar20 + 0x18) != 0) &&
                 (lVar16 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar16 != 0)) {
                uVar19 = (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar20 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar19);
                goto code_r0x016cef70;
              }
            }
            puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78af4();
            uVar15 = 0;
            puVar6 = puVar6 + -0x20;
            lVar16 = lVar20;
            uVar13 = uVar19;
          } while( true );
        }
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
      }
    }
    else {
      uVar14 = 2;
    }
  }
  else {
    uVar14 = 3;
  }
  uVar13 = auVar25._0_8_;
  auVar26._8_8_ = uVar14;
  auVar26._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)((long)ppppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)ppppuVar5 + -0x20) = unaff_x20;
  *(int **)((long)ppppuVar5 + -0x18) = param_1;
  *(undefined8 *****)((long)ppppuVar5 + -0x10) = ppppuVar5;
  *(undefined **)((long)ppppuVar5 + -8) = puVar24;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar25._8_8_);
  pppuVar23 = *(undefined8 ****)((long)ppppuVar5 + -0x10);
  puVar24 = *(undefined **)((long)ppppuVar5 + -8);
  unaff_x20 = *(long *)((long)ppppuVar5 + -0x20);
  param_1 = *(int **)((long)ppppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)ppppuVar5 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar26._8_8_;
    *(long *)((long)ppppuVar5 + -0x20) = unaff_x20;
    *(int **)((long)ppppuVar5 + -0x18) = param_1;
    *(undefined8 ****)((long)ppppuVar5 + -0x10) = pppuVar23;
    *(undefined **)((long)ppppuVar5 + -8) = puVar24;
    uVar18 = auVar26._8_4_;
    if ((int)uVar18 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar17 = uVar14;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar14,0);
    uVar13 = auVar26._0_8_;
    *(ulong *)((long)ppppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)ppppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)ppppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppppuVar5 + -0x38) = uVar15;
    *(undefined1 **)((long)ppppuVar5 + -0x30) = (undefined1 *)((long)ppppuVar5 + -0x10);
    *(undefined **)((long)ppppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar17 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar17);
    plVar1 = (long *)((long)ppppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)ppppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)ppppuVar5 + -0x40);
    param_1 = *(int **)((long)ppppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)ppppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)ppppuVar5 + -0x48);
    ppppuVar5 = (undefined8 ****)((long)ppppuVar5 + -0x20);
    pppuVar23 = (undefined8 ***)*plVar1;
    puVar24 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x16576d4 | Core.Networking.HostVoteStart.CreateHostVoteStart
// ============================================================

/* WARNING: Possible PIC construction at 0x0165770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165773c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01657728) */
/* WARNING: Removing unreachable block (ram,0x01657710) */
/* WARNING: Removing unreachable block (ram,0x01657740) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__CreateHostVoteStart
                (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
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
  undefined8 ***pppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_140 [4];
  undefined1 auStack_120 [12];
  int iStack_114;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 **appuStack_a0 [6];
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  puVar4 = &stack0xffffffffffffffc0;
  pppuVar23 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar24 = (undefined *)0x1657710;
    lVar15 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    uVar13 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = param_2;
    *(long *)(puVar4 + -0x18) = lVar15;
    *(undefined8 ****)(puVar4 + -0x10) = pppuVar23;
    *(undefined **)(puVar4 + -8) = puVar24;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 5) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(param_1 + 0x28) = uVar13;
      }
      *(undefined4 *)(param_1 + 0x30) = 5;
      uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar21;
      return uVar21;
    }
    auVar26 = func_0x00f78af4();
    ppppuVar5 = (undefined8 ****)(puVar4 + -0x30);
    unaff_x19 = param_1;
    pppuVar23 = (undefined8 ***)(puVar4 + -0x10);
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar21 = auVar26._0_8_;
  pppuStack_50 = pppuVar23;
  if (uVar21 != 0) {
    param_4 = 0;
    puStack_48 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar21,auVar26._8_8_);
    auVar26._8_8_ = 4;
    auVar26._0_8_ = uVar21;
    ppppuVar5 = (undefined8 ****)&stack0xffffffffffffffc0;
    pppuVar23 = pppuStack_50;
    puVar24 = puStack_48;
    goto code_r0x016ce380;
  }
  ppppuVar5 = &pppuStack_50;
  puStack_48 = &Core_Networking_HostVoteStart__AddCompleteTimeStamp;
  puVar24 = &Core_Networking_HostVoteStart__AddType2;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    ppppuVar5 = (undefined8 ****)&stack0xffffffffffffffa0;
    puVar24 = &Core_Networking_HostVoteStart__AddMap2;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppppuVar5 = (undefined8 ****)&stack0xffffffffffffff90;
      puVar24 = &Core_Networking_HostVoteStart__AddType1;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        ppppuVar5 = (undefined8 ****)(appuStack_a0 + 4);
        appuStack_a0[5] = (undefined8 **)&Core_Networking_HostVoteStart__AddType1;
        puVar24 = &Core_Networking_HostVoteStart__AddMap1;
        appuStack_a0[4] = (undefined8 **)&stack0xffffffffffffff90;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          appuStack_a0[3] = (undefined8 **)&Core_Networking_HostVoteStart__AddMap1;
          appuStack_a0[2] = appuStack_a0 + 4;
          lVar15 = func_0x00f78af4();
          puVar4 = &stack0xffffffffffffff50;
          appuStack_a0[1] = (undefined8 **)&Core_Networking_HostVoteStart__EndHostVoteStart;
          pppuVar23 = appuStack_a0;
          param_2 = 0x3eb5000;
          appuStack_a0[0] = appuStack_a0 + 2;
          if ((bRam0000000003eb580e & 1) == 0) {
            appuStack_a0[0] = appuStack_a0 + 2;
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar15 == 0) {
            puVar24 = &Core_Networking_HostVoteStart__StartHostVoteStart;
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
                uVar3 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) -
                        *(int *)(lVar19 + uVar22 * 4 + 0x20);
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
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
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
          auVar27 = func_0x00f78ac0(uVar13,uVar14);
          puStack_e8 = &FlatBuffers_FlatBufferBuilder__Required;
          ppppuVar5 = &pppuStack_f0;
          lVar15 = *(long *)(auVar27._0_8_ + 0x18);
          iStack_114 = iVar20;
          uStack_110 = unaff_x22;
          uStack_108 = unaff_x21;
          uStack_100 = uVar21;
          uStack_f8 = uVar13;
          pppuStack_f0 = appuStack_a0;
          if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar27._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar11,4);
            lVar15 = *(long *)(auVar27._0_8_ + 0x18);
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
          uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_114,0);
          uVar14 = func_0x00f78a24(0x3d6ce88);
          uVar16 = func_0x00f78a24(0x3d66338);
          lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar16,0);
          func_0x00f78a24(0x3d22a38);
          uVar21 = func_0x00f78aec();
          uVar14 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar21,lVar15);
          uVar13 = func_0x00f78a24(0x3d56a50);
          puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar26 = func_0x00f78ac0(uVar21,uVar13);
          puVar6 = auStack_120;
          do {
            uVar22 = auVar26._8_8_;
            lVar18 = auVar26._0_8_;
            *(ulong *)(puVar6 + -0x20) = uVar21;
            *(long *)(puVar6 + -0x18) = lVar15;
            *(undefined8 *****)(puVar6 + -0x10) = ppppuVar5;
            *(undefined **)(puVar6 + -8) = puVar24;
            ppppuVar5 = (undefined8 ****)(puVar6 + -0x10);
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
            auVar26 = func_0x00f78af4();
            uVar14 = 0;
            puVar6 = puVar6 + -0x20;
            lVar15 = lVar18;
            uVar21 = uVar22;
          } while( true );
        }
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 2;
    }
  }
  else {
    uVar13 = 3;
  }
  uVar21 = auVar25._0_8_;
  auVar26._8_8_ = uVar13;
  auVar26._0_8_ = uVar21;
  param_4 = 0;
  *(ulong *)((long)ppppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)ppppuVar5 + -0x20) = unaff_x20;
  *(long *)((long)ppppuVar5 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)ppppuVar5 + -0x10) = ppppuVar5;
  *(undefined **)((long)ppppuVar5 + -8) = puVar24;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
    return uVar21;
  }
  uVar13 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar21,auVar25._8_8_);
  pppuVar23 = *(undefined8 ****)((long)ppppuVar5 + -0x10);
  puVar24 = *(undefined **)((long)ppppuVar5 + -8);
  unaff_x20 = *(long *)((long)ppppuVar5 + -0x20);
  unaff_x19 = *(long *)((long)ppppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)ppppuVar5 + -0x28);
code_r0x016ce380:
  do {
    uVar14 = auVar26._8_8_;
    *(long *)((long)ppppuVar5 + -0x20) = unaff_x20;
    *(long *)((long)ppppuVar5 + -0x18) = unaff_x19;
    *(undefined8 ****)((long)ppppuVar5 + -0x10) = pppuVar23;
    *(undefined **)((long)ppppuVar5 + -8) = puVar24;
    uVar17 = auVar26._8_4_;
    if ((int)uVar17 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
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
    auVar26 = func_0x00f78ac0(uVar13,0);
    uVar21 = auVar26._0_8_;
    *(ulong *)((long)ppppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)ppppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)ppppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppppuVar5 + -0x38) = uVar14;
    *(undefined1 **)((long)ppppuVar5 + -0x30) = (undefined1 *)((long)ppppuVar5 + -0x10);
    *(undefined **)((long)ppppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar21,uVar16);
    plVar1 = (long *)((long)ppppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)ppppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)ppppuVar5 + -0x40);
    unaff_x19 = *(long *)((long)ppppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)ppppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)ppppuVar5 + -0x48);
    ppppuVar5 = (undefined8 ****)((long)ppppuVar5 + -0x20);
    pppuVar23 = (undefined8 ***)*plVar1;
    puVar24 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1657768 | Core.Networking.HostVoteStart.AddCompleteTimeStamp
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__AddCompleteTimeStamp
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  undefined8 uVar17;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  ulong auStack_100 [4];
  undefined1 auStack_e0 [12];
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *apuStack_60 [6];
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar17 = 4;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_2);
    ppuVar2 = (undefined **)register0x00000008;
    goto code_r0x016ce380;
  }
  ppuVar2 = (undefined **)&stack0xfffffffffffffff0;
  puVar21 = &Core_Networking_HostVoteStart__AddType2;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ == 0) {
    ppuVar2 = (undefined **)&stack0xffffffffffffffe0;
    puVar21 = &Core_Networking_HostVoteStart__AddMap2;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      ppuVar2 = (undefined **)&stack0xffffffffffffffd0;
      puVar21 = &Core_Networking_HostVoteStart__AddType1;
      auVar22 = func_0x00f78af4();
      if (auVar22._0_8_ == 0) {
        ppuVar2 = apuStack_60 + 4;
        apuStack_60[5] = &Core_Networking_HostVoteStart__AddType1;
        puVar21 = &Core_Networking_HostVoteStart__AddMap1;
        apuStack_60[4] = &stack0xffffffffffffffd0;
        auVar22 = func_0x00f78af4();
        if (auVar22._0_8_ == 0) {
          apuStack_60[3] = &Core_Networking_HostVoteStart__AddMap1;
          apuStack_60[2] = (undefined *)(apuStack_60 + 4);
          lVar10 = func_0x00f78af4();
          apuStack_60[1] = &Core_Networking_HostVoteStart__EndHostVoteStart;
          apuStack_60[0] = (undefined *)(apuStack_60 + 2);
          if ((bRam0000000003eb580e & 1) == 0) {
            apuStack_60[0] = (undefined *)(apuStack_60 + 2);
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar10 == 0) {
            unaff_x19 = func_0x00f78af4();
            if (unaff_x19 == 0) {
              lVar10 = func_0x00f78af4();
              return *(ulong *)(lVar10 + 8);
            }
            uVar14 = 0;
            ppuVar2 = (undefined **)&stack0xffffffffffffff60;
            unaff_x29 = &stack0xffffffffffffff80;
            unaff_x20 = 5;
            unaff_x21 = 0x3eb5000;
            if ((bRam0000000003eb5cd7 & 1) == 0) {
              func_0x00f78a20(0x3d1f100);
              bRam0000000003eb5cd7 = 1;
            }
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
                uVar17 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
                *(undefined8 *)(unaff_x19 + 0x28) = uVar17;
              }
              *(undefined4 *)(unaff_x19 + 0x30) = 5;
              uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
              *(int *)(unaff_x19 + 0x34) = (int)uVar11;
              return uVar11;
            }
            unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
            auVar22 = func_0x00f78af4();
            uVar17 = auVar22._8_8_;
            param_1 = auVar22._0_8_;
            goto code_r0x016ce380;
          }
          uVar11 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar10 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar10,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
            unaff_x21 = (ulong)*(uint *)(lVar10 + 0x30);
            uVar12 = *(uint *)(lVar10 + 0x30) - 1;
            if (-2 < (int)uVar12) {
              uVar12 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar12;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar18 = (int)uVar11;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar15 = *(long *)(lVar10 + 0x28);
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
                sVar4 = (short)uVar11 - (short)iVar8;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)sVar4);
              lVar15 = *(long *)(lVar10 + 0x28);
              if (lVar15 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
              *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar12 = uVar1;
            } while (0 < (long)uVar19);
code_r0x016ceb30:
            uVar7 = *(undefined4 *)(lVar10 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)((short)uVar11 - (short)uVar7));
            uVar12 = uVar12 * 2 + 6;
            unaff_x21 = (ulong)uVar12;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)uVar12);
            unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
            if (0 < (int)*(uint *)(lVar10 + 0x40)) {
              uVar19 = 0;
              do {
                lVar15 = *(long *)(lVar10 + 0x18);
                if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
                   (lVar16 = *(long *)(lVar10 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) -
                        *(int *)(lVar16 + uVar19 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar12 = *(uint *)(lVar10 + 0x10);
                unaff_x22 = (ulong)uVar12;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
                if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),unaff_x22,2);
                if (sVar4 == sVar5) {
                  if (sVar4 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar10 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                    iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                    if (iVar8 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar10 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                    *(int *)(lVar10 + 0x10) = iVar9;
                    iVar8 = iVar8 - iVar18;
                    goto code_r0x016ced3c;
                  }
                  iVar8 = 2;
                  while( true ) {
                    if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
                    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar1 + iVar8,2);
                    if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar12 + iVar8,2);
                    if (sVar5 != sVar6) break;
                    iVar8 = iVar8 + 2;
                    if (sVar4 <= iVar8) goto code_r0x016cec64;
                  }
                }
                uVar19 = uVar19 + 1;
                unaff_x22 = (ulong)*(int *)(lVar10 + 0x40);
              } while ((long)uVar19 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar10 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar15 = *(long *)(lVar10 + 0x38);
                if (lVar15 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
                *(ulong *)(lVar10 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
              }
              uVar12 = (uint)unaff_x22;
              *(uint *)(lVar10 + 0x40) = uVar12 + 1;
              uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar7;
                unaff_x21 = *(ulong *)(lVar10 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
                  iVar9 = iVar9 - iVar18;
                  iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
                  *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
                  return uVar11;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar17 = func_0x00f78b24();
            func_0x00f78ac0(uVar17,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar17 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6cea8);
          iVar18 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar14);
          uVar14 = func_0x00f78a24(0x3d56a30);
          auVar23 = func_0x00f78ac0(uVar17,uVar14);
          puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar20 = &ppuStack_b0;
          lVar10 = *(long *)(auVar23._0_8_ + 0x18);
          iStack_d4 = iVar18;
          uStack_d0 = unaff_x22;
          uStack_c8 = unaff_x21;
          uStack_c0 = uVar11;
          uStack_b8 = uVar17;
          ppuStack_b0 = apuStack_60;
          if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
            iVar8 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar23._8_4_;
            iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar8,4);
            lVar10 = *(long *)(auVar23._0_8_ + 0x18);
            if (lVar10 != 0) {
              uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,(iVar8 - iVar9) + iVar18,2);
              if ((uVar11 & 0xffff) != 0) {
                return uVar11;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
          uVar14 = func_0x00f78a24(0x3d6ce88);
          uVar13 = func_0x00f78a24(0x3d66338);
          lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar17,uVar13,0);
          func_0x00f78a24(0x3d22a38);
          uVar11 = func_0x00f78aec();
          uVar14 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar10);
          uVar17 = func_0x00f78a24(0x3d56a50);
          puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar22 = func_0x00f78ac0(uVar11,uVar17);
          puVar3 = auStack_e0;
          do {
            uVar19 = auVar22._8_8_;
            lVar15 = auVar22._0_8_;
            *(ulong *)(puVar3 + -0x20) = uVar11;
            *(long *)(puVar3 + -0x18) = lVar10;
            *(undefined ****)(puVar3 + -0x10) = pppuVar20;
            *(undefined **)(puVar3 + -8) = puVar21;
            pppuVar20 = (undefined ***)(puVar3 + -0x10);
            if ((int)uVar14 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
              uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
code_r0x016cef70:
              if (*(long *)(lVar15 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
                return uVar11;
              }
            }
            else if (lVar15 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
              if ((*(long *)(lVar15 + 0x18) != 0) &&
                 (lVar10 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar10 != 0)) {
                uVar19 = (ulong)(uint)(*(int *)(lVar10 + 0x18) - *(int *)(lVar15 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
                uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar19);
                goto code_r0x016cef70;
              }
            }
            puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar22 = func_0x00f78af4();
            uVar14 = 0;
            puVar3 = puVar3 + -0x20;
            lVar10 = lVar15;
            uVar11 = uVar19;
          } while( true );
        }
        uVar17 = 0;
      }
      else {
        uVar17 = 1;
      }
    }
    else {
      uVar17 = 2;
    }
  }
  else {
    uVar17 = 3;
  }
  param_1 = auVar22._0_8_;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(undefined **)((long)ppuVar2 + -8) = puVar21;
  if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,auVar22._8_8_);
  unaff_x29 = *(undefined1 **)((long)ppuVar2 + -0x10);
  unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
code_r0x016ce380:
  do {
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
    uVar12 = (uint)uVar17;
    if ((int)uVar12 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar13 = uVar14;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      uVar14 = uVar17;
      if (uVar12 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar17 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar13 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar17,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
      uVar14 = uVar17;
    }
    uVar17 = func_0x00f78b24();
    auVar22 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar22._8_8_;
    param_1 = auVar22._0_8_;
    *(ulong *)((long)ppuVar2 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x38) = uVar14;
    *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x10);
    *(undefined **)((long)ppuVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar13 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar13);
    unaff_x29 = *(undefined1 **)((long)ppuVar2 + -0x30);
    unaff_x30 = *(undefined **)((long)ppuVar2 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x40);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x48);
    ppuVar2 = (undefined **)((long)ppuVar2 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x165778c | Core.Networking.HostVoteStart.AddType2
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__AddType2
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_f0 [4];
  undefined1 auStack_d0 [12];
  int iStack_c4;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_HostVoteStart__AddMap2;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_HostVoteStart__AddMap2;
      unaff_x30 = &Core_Networking_HostVoteStart__AddType1;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        ppuVar3 = &puStack_30;
        unaff_x29 = &puStack_30;
        puStack_28 = &Core_Networking_HostVoteStart__AddType1;
        unaff_x30 = &Core_Networking_HostVoteStart__AddMap1;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar24 = func_0x00f78af4();
        if (auVar24._0_8_ == 0) {
          puStack_38 = &Core_Networking_HostVoteStart__AddMap1;
          puStack_40 = (undefined1 *)&puStack_30;
          lVar11 = func_0x00f78af4();
          puStack_48 = &Core_Networking_HostVoteStart__EndHostVoteStart;
          puStack_50 = (undefined1 *)&puStack_40;
          if ((bRam0000000003eb580e & 1) == 0) {
            puStack_50 = (undefined1 *)&puStack_40;
            func_0x00f78a20(0x3d3f138);
            bRam0000000003eb580e = 1;
          }
          if (lVar11 == 0) {
            lVar11 = func_0x00f78af4();
            if (lVar11 == 0) {
              lVar11 = func_0x00f78af4();
              return *(ulong *)(lVar11 + 8);
            }
            uVar17 = 0;
            puVar2 = &stack0xffffffffffffff70;
            puVar4 = &stack0xffffffffffffff90;
            lVar20 = 5;
            uVar15 = 0x3eb5000;
            if ((bRam0000000003eb5cd7 & 1) == 0) {
              func_0x00f78a20(0x3d1f100);
              bRam0000000003eb5cd7 = 1;
            }
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
            if (*(long *)(lVar11 + 0x28) != 0) {
              if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 5) {
                uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
                *(undefined8 *)(lVar11 + 0x28) = uVar15;
              }
              *(undefined4 *)(lVar11 + 0x30) = 5;
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              *(int *)(lVar11 + 0x34) = (int)uVar12;
              return uVar12;
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
            auVar25 = func_0x00f78af4();
            goto code_r0x016ce380;
          }
          uVar12 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar11 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
            uVar14 = *(uint *)(lVar11 + 0x30) - 1;
            if (-2 < (int)uVar14) {
              uVar14 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar14;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar19 = (int)uVar12;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar20 = *(long *)(lVar11 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar21 = unaff_x22 - 8;
              if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar12 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
              lVar20 = *(long *)(lVar11 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
              *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar14 = uVar1;
            } while (0 < (long)uVar21);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar11 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
            uVar14 = uVar14 * 2 + 6;
            unaff_x21 = (ulong)uVar14;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            if (0 < (int)*(uint *)(lVar11 + 0x40)) {
              uVar21 = 0;
              do {
                lVar20 = *(long *)(lVar11 + 0x18);
                if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                   (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                        *(int *)(lVar18 + uVar21 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar14 = *(uint *)(lVar11 + 0x10);
                unaff_x22 = (ulong)uVar14;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar11 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                    *(int *)(lVar11 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar19;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar21 = uVar21 + 1;
                unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
              } while ((long)uVar21 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar11 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar20 = *(long *)(lVar11 + 0x38);
                if (lVar20 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                *(ulong *)(lVar11 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              }
              uVar14 = (uint)unaff_x22;
              *(uint *)(lVar11 + 0x40) = uVar14 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  iVar10 = iVar10 - iVar19;
                  iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                  *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
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
          uVar17 = func_0x00f78a24(0x3d6cea8);
          iVar19 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
          uVar17 = func_0x00f78a24(0x3d56a30);
          auVar26 = func_0x00f78ac0(uVar15,uVar17);
          puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar22 = &ppuStack_a0;
          lVar11 = *(long *)(auVar26._0_8_ + 0x18);
          iStack_c4 = iVar19;
          uStack_c0 = unaff_x22;
          uStack_b8 = unaff_x21;
          uStack_b0 = uVar12;
          uStack_a8 = uVar15;
          ppuStack_a0 = &puStack_50;
          if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
            lVar11 = *(long *)(auVar26._0_8_ + 0x18);
            if (lVar11 != 0) {
              uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
              if ((uVar12 & 0xffff) != 0) {
                return uVar12;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
          uVar17 = func_0x00f78a24(0x3d6ce88);
          uVar13 = func_0x00f78a24(0x3d66338);
          lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
          func_0x00f78a24(0x3d22a38);
          uVar12 = func_0x00f78aec();
          uVar17 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar24 = func_0x00f78ac0(uVar12,uVar15);
          puVar4 = auStack_d0;
          do {
            uVar21 = auVar24._8_8_;
            lVar20 = auVar24._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar12;
            *(long *)(puVar4 + -0x18) = lVar11;
            *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
            *(undefined **)(puVar4 + -8) = puVar23;
            pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
            if ((int)uVar17 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
              if (*(long *)(lVar20 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
                return uVar12;
              }
            }
            else if (lVar20 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
              if ((*(long *)(lVar20 + 0x18) != 0) &&
                 (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
                uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                goto code_r0x016cef70;
              }
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar24 = func_0x00f78af4();
            uVar17 = 0;
            puVar4 = puVar4 + -0x20;
            lVar11 = lVar20;
            uVar12 = uVar21;
          } while( true );
        }
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 2;
    }
  }
  else {
    uVar15 = 3;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x16577b0 | Core.Networking.HostVoteStart.AddMap2
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__AddMap2
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_e0 [4];
  undefined1 auStack_c0 [12];
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_HostVoteStart__AddType1;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_HostVoteStart__AddType1;
      unaff_x30 = &Core_Networking_HostVoteStart__AddMap1;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        puStack_28 = &Core_Networking_HostVoteStart__AddMap1;
        puStack_30 = (undefined1 *)&puStack_20;
        lVar11 = func_0x00f78af4();
        puStack_38 = &Core_Networking_HostVoteStart__EndHostVoteStart;
        puStack_40 = (undefined1 *)&puStack_30;
        if ((bRam0000000003eb580e & 1) == 0) {
          puStack_40 = (undefined1 *)&puStack_30;
          func_0x00f78a20(0x3d3f138);
          bRam0000000003eb580e = 1;
        }
        if (lVar11 == 0) {
          lVar11 = func_0x00f78af4();
          if (lVar11 == 0) {
            lVar11 = func_0x00f78af4();
            return *(ulong *)(lVar11 + 8);
          }
          uVar17 = 0;
          puVar2 = &stack0xffffffffffffff80;
          puVar4 = &stack0xffffffffffffffa0;
          lVar20 = 5;
          uVar15 = 0x3eb5000;
          if ((bRam0000000003eb5cd7 & 1) == 0) {
            func_0x00f78a20(0x3d1f100);
            bRam0000000003eb5cd7 = 1;
          }
          /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
          if (*(long *)(lVar11 + 0x28) != 0) {
            if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 5) {
              uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
              *(undefined8 *)(lVar11 + 0x28) = uVar15;
            }
            *(undefined4 *)(lVar11 + 0x30) = 5;
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            *(int *)(lVar11 + 0x34) = (int)uVar12;
            return uVar12;
          }
          puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
          auVar25 = func_0x00f78af4();
          goto code_r0x016ce380;
        }
        uVar12 = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        if (-1 < *(int *)(lVar11 + 0x30)) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
          /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
          unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
          uVar14 = *(uint *)(lVar11 + 0x30) - 1;
          if (-2 < (int)uVar14) {
            uVar14 = 0xffffffff;
          }
          unaff_x22 = (ulong)uVar14;
          do {
            uVar1 = (int)unaff_x21 - 1;
            unaff_x21 = (ulong)uVar1;
            iVar19 = (int)uVar12;
            if ((int)uVar1 < 0) goto code_r0x016ceb30;
            lVar20 = *(long *)(lVar11 + 0x28);
            if (lVar20 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
          } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
          unaff_x22 = unaff_x21 + 8;
          do {
            uVar21 = unaff_x22 - 8;
            if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
            iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
            sVar5 = 0;
            if (iVar9 != 0) {
              sVar5 = (short)uVar12 - (short)iVar9;
            }
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
            lVar20 = *(long *)(lVar11 + 0x28);
            if (lVar20 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
            *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
            unaff_x22 = unaff_x22 - 1;
            uVar14 = uVar1;
          } while (0 < (long)uVar21);
code_r0x016ceb30:
          uVar8 = *(undefined4 *)(lVar11 + 0x34);
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
          uVar14 = uVar14 * 2 + 6;
          unaff_x21 = (ulong)uVar14;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
          unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
          if (0 < (int)*(uint *)(lVar11 + 0x40)) {
            uVar21 = 0;
            do {
              lVar20 = *(long *)(lVar11 + 0x18);
              if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                 (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
              uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                      *(int *)(lVar18 + uVar21 * 4 + 0x20);
              unaff_x21 = (ulong)uVar1;
              uVar14 = *(uint *)(lVar11 + 0x10);
              unaff_x22 = (ulong)uVar14;
              sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
              if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
              sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
              if (sVar5 == sVar6) {
                if (sVar5 < 3) {
code_r0x016cec64:
                  unaff_x21 = *(ulong *)(lVar11 + 0x38);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                  iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                  if (iVar9 == 0) {
                    unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                    goto code_r0x016cecac;
                  }
                  unaff_x21 = *(ulong *)(lVar11 + 0x18);
                  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                  *(int *)(lVar11 + 0x10) = iVar10;
                  iVar9 = iVar9 - iVar19;
                  goto code_r0x016ced3c;
                }
                iVar9 = 2;
                while( true ) {
                  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                  sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                  sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                  if (sVar6 != sVar7) break;
                  iVar9 = iVar9 + 2;
                  if (sVar5 <= iVar9) goto code_r0x016cec64;
                }
              }
              uVar21 = uVar21 + 1;
              unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
            } while ((long)uVar21 < (long)unaff_x22);
          }
          unaff_x21 = *(ulong *)(lVar11 + 0x38);
          if (unaff_x21 == 0) {
code_r0x016ced84:
            func_0x00f78af4();
          }
          else {
code_r0x016cecac:
            if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
              unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
              lVar20 = *(long *)(lVar11 + 0x38);
              if (lVar20 == 0) goto code_r0x016ced84;
              /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
              *(ulong *)(lVar11 + 0x38) = unaff_x21;
              unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            }
            uVar14 = (uint)unaff_x22;
            *(uint *)(lVar11 + 0x40) = uVar14 + 1;
            uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
              unaff_x21 = *(ulong *)(lVar11 + 0x18);
              if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                iVar10 = iVar10 - iVar19;
                iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
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
        uVar17 = func_0x00f78a24(0x3d6cea8);
        iVar19 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
        uVar17 = func_0x00f78a24(0x3d56a30);
        auVar26 = func_0x00f78ac0(uVar15,uVar17);
        puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
        pppuVar22 = &ppuStack_90;
        lVar11 = *(long *)(auVar26._0_8_ + 0x18);
        iStack_b4 = iVar19;
        uStack_b0 = unaff_x22;
        uStack_a8 = unaff_x21;
        uStack_a0 = uVar12;
        uStack_98 = uVar15;
        ppuStack_90 = &puStack_40;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
          iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
          lVar11 = *(long *)(auVar26._0_8_ + 0x18);
          if (lVar11 != 0) {
            uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
            if ((uVar12 & 0xffff) != 0) {
              return uVar12;
            }
            goto code_r0x016cee5c;
          }
        }
        func_0x00f78af4();
code_r0x016cee5c:
        uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
        uVar17 = func_0x00f78a24(0x3d6ce88);
        uVar13 = func_0x00f78a24(0x3d66338);
        lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
        func_0x00f78a24(0x3d22a38);
        uVar12 = func_0x00f78aec();
        uVar17 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
        uVar15 = func_0x00f78a24(0x3d56a50);
        puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar24 = func_0x00f78ac0(uVar12,uVar15);
        puVar4 = auStack_c0;
        do {
          uVar21 = auVar24._8_8_;
          lVar20 = auVar24._0_8_;
          *(ulong *)(puVar4 + -0x20) = uVar12;
          *(long *)(puVar4 + -0x18) = lVar11;
          *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
          *(undefined **)(puVar4 + -8) = puVar23;
          pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
          if ((int)uVar17 == 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
            if (*(long *)(lVar20 + 0x18) != 0) {
              *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
              return uVar12;
            }
          }
          else if (lVar20 != 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
            if ((*(long *)(lVar20 + 0x18) != 0) &&
               (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
              uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
              goto code_r0x016cef70;
            }
          }
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar24 = func_0x00f78af4();
          uVar17 = 0;
          puVar4 = puVar4 + -0x20;
          lVar11 = lVar20;
          uVar12 = uVar21;
        } while( true );
      }
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
  }
  else {
    uVar15 = 2;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x16577d4 | Core.Networking.HostVoteStart.AddType1
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__AddType1
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
    unaff_x30 = &Core_Networking_HostVoteStart__AddMap1;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      puStack_18 = &Core_Networking_HostVoteStart__AddMap1;
      puStack_20 = &stack0xfffffffffffffff0;
      lVar9 = func_0x00f78af4();
      puStack_28 = &Core_Networking_HostVoteStart__EndHostVoteStart;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb580e & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d3f138);
        bRam0000000003eb580e = 1;
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
        lVar18 = 5;
        uVar13 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
        if (*(long *)(lVar9 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 5) {
            uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
            *(undefined8 *)(lVar9 + 0x28) = uVar13;
          }
          *(undefined4 *)(lVar9 + 0x30) = 5;
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
// RVA: 0x16577f8 | Core.Networking.HostVoteStart.AddMap1
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__AddMap1
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
  if ((bRam0000000003eb580e & 1) == 0) {
    func_0x00f78a20(0x3d3f138);
    bRam0000000003eb580e = 1;
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
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 5;
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
// RVA: 0x165781c | Core.Networking.HostVoteStart.EndHostVoteStart
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostVoteStart__EndHostVoteStart
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
  
  if ((bRam0000000003eb580e & 1) == 0) {
    func_0x00f78a20(0x3d3f138);
    bRam0000000003eb580e = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 5;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 5) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 5;
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
// RVA: 0x1657868 | Core.Networking.HostVoteStart.StartHostVoteStart
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Networking_HostVoteStart__StartHostVoteStart
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
  lVar7 = 5;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 5) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 5;
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



