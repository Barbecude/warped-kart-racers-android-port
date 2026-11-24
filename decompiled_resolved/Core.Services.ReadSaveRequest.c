// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReadSaveRequest

// ============================================================
// RVA: 0x167eccc | Core.Services.ReadSaveRequest.get_ByteBuffer
// ============================================================

undefined8 Core_Services_ReadSaveRequest__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x167ecd4 | Core.Services.ReadSaveRequest.GetRootAsReadSaveRequest
// ============================================================

undefined1  [16] Core_Services_ReadSaveRequest__GetRootAsReadSaveRequest(long param_1)

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
// RVA: 0x167ece0 | Core.Services.ReadSaveRequest.GetRootAsReadSaveRequest
// ============================================================

undefined1  [16]
Core_Services_ReadSaveRequest__GetRootAsReadSaveRequest
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
// RVA: 0x167ed24 | Core.Services.ReadSaveRequest.__assign
// ============================================================

undefined1  [16]
Core_Services_ReadSaveRequest____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x167ed38 | Core.Services.ReadSaveRequest.__init
// ============================================================

void Core_Services_ReadSaveRequest____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x167ed44 | Core.Services.ReadSaveRequest.get_Index
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ced4c) */
/* WARNING: Removing unreachable block (ram,0x016cec14) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebcc) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x0167ef00) */
/* WARNING: Removing unreachable block (ram,0x0167eee8) */
/* WARNING: Removing unreachable block (ram,0x0167eed0) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cce14) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__get_Index
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                dword *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *******pppppppuVar4;
  int iVar5;
  dword dVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  dword *pdVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  dword *pdVar17;
  dword *pdVar18;
  long lVar19;
  long lVar20;
  dword *unaff_x19;
  dword *unaff_x20;
  ulong uVar21;
  dword *unaff_x21;
  dword *unaff_x22;
  dword *unaff_x23;
  ulong unaff_x24;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_1b0 [4];
  undefined1 auStack_190 [12];
  undefined4 uStack_184;
  dword *pdStack_180;
  dword *pdStack_178;
  dword *pdStack_170;
  undefined8 uStack_168;
  undefined8 ******ppppppuStack_160;
  undefined *puStack_158;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  undefined8 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  uVar7 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  lVar19 = *(long *)(param_1 + 2);
  pdVar18 = unaff_x21;
  if (lVar19 == 0) {
    unaff_x19 = (dword *)func_0x00f78af4();
    puStack_28 = &Core_Services_ReadSaveRequest__get_Conflict;
    pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
    uVar7 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(unaff_x19,6,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(unaff_x19 + 2) != 0) {
      iVar5 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(unaff_x19 + 2),*unaff_x19 + (int)uVar7,0);
      return (ulong)(iVar5 != 0);
    }
    pdVar14 = (dword *)func_0x00f78af4();
    puStack_48 = &Core_Services_ReadSaveRequest__get_ToAddress;
    ppppppuStack_50 = &pppppuStack_30;
    iVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(pdVar14,8,0);
    if (iVar5 == 0) {
      return 0;
    }
    lVar19 = *(long *)(pdVar14 + 2);
    if (lVar19 == 0) {
      piVar8 = (int *)func_0x00f78af4();
      puStack_68 = &Core_Services_ReadSaveRequest__get_Size;
      uVar10 = 0;
      ppppppuStack_70 = &ppppppuStack_50;
      uVar7 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar8,10);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      lVar19 = *(long *)(piVar8 + 2);
      if (lVar19 != 0) {
        uVar13 = *piVar8 + (int)uVar7;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x19 = pdVar14;
        unaff_x29 = (undefined8 *******)ppppppuStack_70;
        unaff_x30 = puStack_68;
        goto FlatBuffers_ByteBuffer__GetUint;
      }
      auVar24 = func_0x00f78af4();
      piVar9 = auVar24._0_8_;
      puVar3 = &stack0xffffffffffffff40;
      puStack_88 = &Core_Services_ReadSaveRequest__CreateReadSaveRequest;
      pppppppuVar22 = &ppppppuStack_90;
      ppppppuStack_90 = &ppppppuStack_70;
      if (piVar9 != (int *)0x0) {
        puVar23 = &UNK_0167eed0;
        piVar8 = piVar9;
        unaff_x21 = auVar24._8_8_;
        unaff_x22 = param_5;
code_r0x016ce2a4:
        uVar11 = 0;
        pppppppuVar4 = (undefined8 *******)(puVar3 + -0x30);
        *(dword **)(puVar3 + -0x30) = unaff_x22;
        *(dword **)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = uVar10;
        *(int **)(puVar3 + -0x18) = piVar8;
        *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar22;
        *(undefined **)(puVar3 + -8) = puVar23;
        unaff_x20 = &MACH_HEADER.cputype;
        unaff_x21 = (dword *)0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar9);
        if (*(long *)(piVar9 + 10) != 0) {
          if (*(int *)(*(long *)(piVar9 + 10) + 0x18) < 4) {
            uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
            *(undefined8 *)(piVar9 + 10) = uVar10;
          }
          piVar9[0xc] = 4;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar9);
          piVar9[0xd] = (int)uVar7;
          return uVar7;
        }
        auVar24 = func_0x00f78af4();
        piVar8 = piVar9;
        pppppppuVar22 = (undefined8 *******)(puVar3 + -0x10);
        puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
        goto code_r0x016ce380;
      }
      auVar24 = func_0x00f78af4();
      uVar7 = auVar24._0_8_;
      ppppppuStack_d0 = pppppppuVar22;
      if (uVar7 != 0) {
        param_4 = 0;
        puStack_c8 = &Core_Services_ReadSaveRequest__AddToAddress;
        if ((auVar24._8_8_ == 0) && (*(char *)(uVar7 + 0x48) == '\0')) {
          return uVar7;
        }
        uVar11 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar7,8,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar7,auVar24._8_8_);
        auVar24._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        auVar24._0_8_ = uVar7;
        pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff40;
        pppppppuVar22 = (undefined8 *******)ppppppuStack_d0;
        puVar23 = puStack_c8;
        goto code_r0x016ce380;
      }
      pppppppuVar4 = &ppppppuStack_d0;
      puStack_c8 = &Core_Services_ReadSaveRequest__AddToAddress;
      puVar23 = &Core_Services_ReadSaveRequest__AddSize;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff20;
        puVar23 = &Core_Services_ReadSaveRequest__AddIndex;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff10;
          puVar15 = &stack0xffffffffffffff10;
          puVar23 = &Core_Services_ReadSaveRequest__AddConflict;
          auVar25 = func_0x00f78af4();
          if (auVar25._0_8_ != 0) {
            puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_f8 = &Core_Services_ReadSaveRequest__AddConflict;
          ppppuStack_100 = (undefined8 ****)&stack0xffffffffffffff10;
          unaff_x19 = (dword *)func_0x00f78af4();
          puVar3 = &stack0xfffffffffffffee0;
          puStack_108 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
          pppppppuVar22 = (undefined8 *******)&pppppuStack_110;
          uVar10 = 0x3eb5000;
          pppppuStack_110 = &ppppuStack_100;
          if ((bRam0000000003eb59ee & 1) == 0) {
            pppppuStack_110 = &ppppuStack_100;
            func_0x00f78a20(0x3d3f1d8);
            bRam0000000003eb59ee = 1;
          }
          if (unaff_x19 == (dword *)0x0) {
            puVar23 = &Core_Services_ReadSaveRequest__StartReadSaveRequest;
            piVar9 = (int *)func_0x00f78af4();
            if (piVar9 == (int *)0x0) {
              lVar19 = func_0x00f78af4();
              return *(ulong *)(lVar19 + 0x28);
            }
            piVar8 = (int *)0x0;
            goto code_r0x016ce2a4;
          }
          puVar15 = &stack0xfffffffffffffeb0;
          puVar2 = &stack0xfffffffffffffeb0;
          pppppppuVar4 = (undefined8 *******)&pppppuStack_110;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          pdVar18 = (dword *)0x3eb5000;
          if (-1 < (int)unaff_x19[0xc]) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(unaff_x19,0);
            unaff_x20 = (dword *)/*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
            unaff_x21 = (dword *)(ulong)unaff_x19[0xc];
            uVar13 = unaff_x19[0xc] - 1;
            if (-2 < (int)uVar13) {
              uVar13 = 0xffffffff;
            }
            unaff_x22 = (dword *)(ulong)uVar13;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (dword *)(ulong)uVar1;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar19 = *(long *)(unaff_x19 + 10);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 2;
            do {
              unaff_x23 = unaff_x22 + -2;
              if ((int *)(ulong)*(uint *)(lVar19 + 0x18) <= unaff_x23) goto code_r0x016ced88;
              iVar5 = *(int *)(lVar19 + (long)unaff_x22 * 4);
              uVar13 = 0;
              if (iVar5 != 0) {
                uVar13 = (int)unaff_x20 - iVar5;
              }
              unaff_x24 = (ulong)uVar13;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)uVar13);
              lVar19 = *(long *)(unaff_x19 + 10);
              if (lVar19 == 0) goto code_r0x016ced84;
              if ((int *)(ulong)*(uint *)(lVar19 + 0x18) <= unaff_x23) goto code_r0x016ced88;
              *(undefined4 *)(lVar19 + (long)unaff_x22 * 4) = 0;
              unaff_x22 = (dword *)((long)unaff_x22 + -1);
              uVar13 = uVar1;
            } while (0 < (long)unaff_x23);
code_r0x016ceb30:
            iVar5 = unaff_x19[0xd];
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)((short)unaff_x20 - (short)iVar5));
            uVar13 = uVar13 * 2 + 6;
            unaff_x21 = (dword *)(ulong)uVar13;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)uVar13);
            uVar13 = unaff_x19[0x10];
            unaff_x22 = (dword *)(ulong)uVar13;
            if ((int)uVar13 < 1) {
              unaff_x21 = *(dword **)(unaff_x19 + 0xe);
              if (unaff_x21 != (dword *)0x0) {
                if (uVar13 == unaff_x21[6]) {
                  unaff_x21 = (dword *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar13 << 1);
                  lVar19 = *(long *)(unaff_x19 + 0xe);
                  if (lVar19 == 0) goto code_r0x016ced84;
                  /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                  *(dword **)(unaff_x19 + 0xe) = unaff_x21;
                  unaff_x22 = (dword *)(ulong)unaff_x19[0x10];
                }
                uVar13 = (uint)unaff_x22;
                unaff_x19[0x10] = uVar13 + 1;
                dVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
                if (unaff_x21 != (dword *)0x0) {
                  if (unaff_x21[6] <= uVar13) goto code_r0x016ced88;
                  unaff_x21[(long)(int)uVar13 + 8] = dVar6;
                  unaff_x21 = *(dword **)(unaff_x19 + 6);
                  if ((unaff_x21 != (dword *)0x0) && (*(long *)(unaff_x21 + 4) != 0)) {
                    iVar5 = *(int *)(*(long *)(unaff_x21 + 4) + 0x18);
                    /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
                    uVar13 = iVar5 - (int)unaff_x20;
                    uVar7 = (ulong)uVar13;
                    auVar26._8_4_ = uVar13;
                    auVar26._0_8_ = unaff_x21;
                    auVar26._12_4_ = 0;
                    pdVar17 = &MACH_HEADER.cputype;
                    puVar23 = &UNK_016ced4c;
                    goto code_r0x016cc7a4;
                  }
                }
              }
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
              unaff_x24 = 0;
              lVar19 = *(long *)(unaff_x19 + 6);
              if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                 (lVar20 = *(long *)(unaff_x19 + 0xe), lVar20 == 0)) goto code_r0x016ced84;
              if (*(int *)(lVar20 + 0x18) != 0) {
                pdVar14 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                                                *(int *)(lVar20 + 0x20));
                unaff_x22 = (dword *)(ulong)unaff_x19[4];
                pdVar17 = (dword *)((long)&MACH_HEADER.magic + 2);
                puVar23 = &UNK_016cebcc;
                pdVar18 = pdVar14;
                pppppppuVar22 = pppppppuVar4;
                goto code_r0x016cc634;
              }
            }
code_r0x016ced88:
            uVar10 = func_0x00f78b24();
            func_0x00f78ac0(uVar10,0);
            pdVar18 = unaff_x20;
          }
          func_0x00f78a24(0x3d22a38);
          uVar10 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d6cea8);
          unaff_x19 = (dword *)0x0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
          uVar11 = func_0x00f78a24(0x3d56a30);
          auVar27 = func_0x00f78ac0(uVar10,uVar11);
          unaff_x20 = auVar27._0_8_;
          puVar2 = auStack_190;
          puStack_158 = &FlatBuffers_FlatBufferBuilder__Required;
          pppppppuVar22 = &ppppppuStack_160;
          uStack_184 = SUB84(unaff_x19,0);
          lVar19 = *(long *)(unaff_x20 + 6);
          pdStack_180 = unaff_x22;
          pdStack_178 = unaff_x21;
          pdStack_170 = pdVar18;
          uStack_168 = uVar10;
          ppppppuStack_160 = pppppppuVar4;
          if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) {
            func_0x00f78af4();
            uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_184,0);
            uVar11 = func_0x00f78a24(0x3d6ce88);
            uVar12 = func_0x00f78a24(0x3d66338);
            lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar10,uVar12,0);
            func_0x00f78a24(0x3d22a38);
            uVar7 = func_0x00f78aec();
            uVar11 = 0;
            /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar7,lVar19);
            uVar10 = func_0x00f78a24(0x3d56a50);
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar24 = func_0x00f78ac0(uVar7,uVar10);
            puVar15 = auStack_190;
            do {
              uVar21 = auVar24._8_8_;
              lVar20 = auVar24._0_8_;
              *(ulong *)(puVar15 + -0x20) = uVar7;
              *(long *)(puVar15 + -0x18) = lVar19;
              *(undefined8 ********)(puVar15 + -0x10) = pppppppuVar22;
              *(undefined **)(puVar15 + -8) = puVar23;
              pppppppuVar22 = (undefined8 *******)(puVar15 + -0x10);
              if ((int)uVar11 == 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                uVar7 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
                if (*(long *)(lVar20 + 0x18) != 0) {
                  *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
                  return uVar7;
                }
              }
              else if (lVar20 != 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
                if ((*(long *)(lVar20 + 0x18) != 0) &&
                   (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                  uVar21 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                  uVar7 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                  goto code_r0x016cef70;
                }
              }
              puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar24 = func_0x00f78af4();
              uVar11 = 0;
              puVar15 = puVar15 + -0x20;
              lVar19 = lVar20;
              uVar7 = uVar21;
            } while( true );
          }
          pdVar14 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar27._8_4_
                                          );
          pdVar17 = &MACH_HEADER.cputype;
          puVar23 = &UNK_016cee20;
          pdVar18 = pdVar14;
          goto code_r0x016cc634;
        }
        puVar15 = (undefined1 *)0x0;
      }
      else {
        puVar15 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      }
      uVar7 = auVar25._0_8_;
      auVar24._8_8_ = puVar15;
      auVar24._0_8_ = uVar7;
      param_4 = 0;
      *(dword **)((long)pppppppuVar4 + -0x30) = unaff_x22;
      *(dword **)((long)pppppppuVar4 + -0x28) = unaff_x21;
      *(dword **)((long)pppppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)pppppppuVar4 + -0x18) = piVar8;
      *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar4;
      *(undefined **)((long)pppppppuVar4 + -8) = puVar23;
      if ((auVar25._8_4_ == 0) && (*(char *)(uVar7 + 0x48) == '\0')) {
        return uVar7;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar7,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar7,auVar25._8_8_);
      pppppppuVar22 = *(undefined8 ********)((long)pppppppuVar4 + -0x10);
      puVar23 = *(undefined **)((long)pppppppuVar4 + -8);
      unaff_x20 = *(dword **)((long)pppppppuVar4 + -0x20);
      piVar8 = *(int **)((long)pppppppuVar4 + -0x18);
      unaff_x22 = *(dword **)((long)pppppppuVar4 + -0x30);
      unaff_x21 = *(dword **)((long)pppppppuVar4 + -0x28);
code_r0x016ce380:
      do {
        piVar9 = auVar24._8_8_;
        *(dword **)((long)pppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppuVar4 + -0x18) = piVar8;
        *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar22;
        *(undefined **)((long)pppppppuVar4 + -8) = puVar23;
        puVar15 = (undefined1 *)((long)pppppppuVar4 + -0x10);
        uVar13 = auVar24._8_4_;
        if ((int)uVar13 < *(int *)(auVar24._0_8_ + 0x30)) {
          unaff_x20 = *(dword **)(auVar24._0_8_ + 0x28);
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (dword *)0x0) goto code_r0x016ce410;
          if (uVar13 < unaff_x20[6]) {
            unaff_x20[(long)(int)uVar13 + 8] = (dword)uVar7;
            return uVar7;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar9 = (int *)func_0x00f78aec();
          uVar10 = func_0x00f78a24(0x3d6ceb8);
          uVar11 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar9,uVar10);
          uVar10 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar9,uVar10);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar10 = func_0x00f78b24();
        puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar24 = func_0x00f78ac0(uVar10,0);
        puVar16 = auVar24._8_8_;
        auVar25._8_8_ = uVar11;
        auVar25._0_8_ = auVar24._0_8_;
        pppppppuVar4 = (undefined8 *******)((long)pppppppuVar4 + -0x20);
        piVar8 = piVar9;
code_r0x016ce420:
        uVar7 = auVar25._0_8_;
        auVar24._8_8_ = puVar16;
        auVar24._0_8_ = uVar7;
        *(dword **)((long)pppppppuVar4 + -0x30) = unaff_x22;
        *(dword **)((long)pppppppuVar4 + -0x28) = unaff_x21;
        *(dword **)((long)pppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppuVar4 + -0x18) = piVar8;
        *(undefined1 **)((long)pppppppuVar4 + -0x10) = puVar15;
        *(undefined **)((long)pppppppuVar4 + -8) = puVar23;
        if ((auVar25._8_4_ == (int)param_4) && (*(char *)(uVar7 + 0x48) == '\0')) {
          return uVar7;
        }
        uVar11 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar7,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar7,auVar25._8_8_);
        unaff_x20 = *(dword **)((long)pppppppuVar4 + -0x20);
        piVar8 = *(int **)((long)pppppppuVar4 + -0x18);
        unaff_x22 = *(dword **)((long)pppppppuVar4 + -0x30);
        unaff_x21 = *(dword **)((long)pppppppuVar4 + -0x28);
        pppppppuVar22 = *(undefined8 ********)((long)pppppppuVar4 + -0x10);
        puVar23 = *(undefined **)((long)pppppppuVar4 + -8);
      } while( true );
    }
    pdVar14 = (dword *)(ulong)(*pdVar14 + iVar5);
    puVar2 = &stack0xffffffffffffffc0;
    pdVar17 = &MACH_HEADER.cpusubtype;
    pppppppuVar22 = (undefined8 *******)ppppppuStack_50;
    puVar23 = puStack_48;
  }
  else {
    uVar13 = *param_1 + (int)uVar7;
FlatBuffers_ByteBuffer__GetUint:
    pdVar14 = (dword *)(ulong)uVar13;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    pdVar17 = &MACH_HEADER.cputype;
    pppppppuVar22 = (undefined8 *******)((long)register0x00000008 + -0x10);
    puVar23 = &UNK_016cce14;
  }
code_r0x016cc634:
  auVar26._8_8_ = pdVar14;
  auVar26._0_8_ = lVar19;
  *(ulong *)(puVar2 + -0x40) = unaff_x24;
  *(dword **)(puVar2 + -0x38) = unaff_x23;
  *(dword **)(puVar2 + -0x30) = unaff_x22;
  *(dword **)(puVar2 + -0x28) = pdVar18;
  *(dword **)(puVar2 + -0x20) = unaff_x20;
  *(dword **)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar22;
  *(undefined **)(puVar2 + -8) = puVar23;
  pppppppuVar4 = (undefined8 *******)(puVar2 + -0x10);
  uVar7 = 0x3d201a0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar23 = &UNK_016cc68c;
  puVar15 = puVar2 + -0x40;
  unaff_x19 = pdVar14;
  unaff_x20 = pdVar17;
code_r0x016cc7a4:
  do {
    uVar21 = auVar26._0_8_;
    *(dword **)(puVar15 + -0x20) = unaff_x20;
    *(dword **)(puVar15 + -0x18) = unaff_x19;
    *(undefined8 ********)(puVar15 + -0x10) = pppppppuVar4;
    *(undefined **)(puVar15 + -8) = puVar23;
    if (auVar26._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      unaff_x19 = (dword *)func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(unaff_x19,0);
      uVar10 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(unaff_x19,uVar10);
      pdVar18 = pdVar17;
    }
    else {
      pdVar18 = pdVar17;
      if (*(long *)(uVar21 + 0x10) != 0) {
        if (auVar26._8_4_ <= *(int *)(*(long *)(uVar21 + 0x10) + 0x18) - (int)pdVar17) {
          return uVar21;
        }
        goto code_r0x016cc7d8;
      }
    }
    auVar26 = func_0x00f78af4();
    *(ulong *)(puVar15 + -0x50) = uVar7;
    *(ulong *)(puVar15 + -0x48) = uVar21;
    *(dword **)(puVar15 + -0x40) = unaff_x20;
    *(dword **)(puVar15 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar15 + -0x30) = puVar15 + -0x10;
    *(undefined **)(puVar15 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    pppppppuVar4 = (undefined8 *******)(puVar15 + -0x30);
    pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar23 = &UNK_016cc834;
    puVar15 = puVar15 + -0x50;
    unaff_x19 = pdVar18;
    unaff_x20 = auVar26._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x167ed98 | Core.Services.ReadSaveRequest.get_Conflict
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cce10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ced4c) */
/* WARNING: Removing unreachable block (ram,0x016cec14) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebcc) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x0167ef00) */
/* WARNING: Removing unreachable block (ram,0x0167eee8) */
/* WARNING: Removing unreachable block (ram,0x0167eed0) */
/* WARNING: Removing unreachable block (ram,0x016cce14) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__get_Conflict
                (dword *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                dword *param_5)

{
  uint uVar1;
  undefined8 ******ppppppuVar2;
  undefined1 *puVar3;
  undefined8 ******ppppppuVar4;
  int iVar5;
  dword dVar6;
  ulong uVar7;
  dword *pdVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  dword *pdVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  dword *pdVar18;
  dword *pdVar19;
  long lVar20;
  long lVar21;
  dword *unaff_x20;
  ulong uVar22;
  dword *unaff_x21;
  dword *unaff_x22;
  dword *unaff_x23;
  ulong unaff_x24;
  undefined8 ******ppppppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_190 [4];
  undefined1 auStack_170 [12];
  undefined4 uStack_164;
  dword *pdStack_160;
  dword *pdStack_158;
  dword *pdStack_150;
  undefined8 uStack_148;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  undefined8 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  uVar7 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar5 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar7,0);
    return (ulong)(iVar5 != 0);
  }
  pdVar8 = (dword *)func_0x00f78af4();
  puStack_28 = &Core_Services_ReadSaveRequest__get_ToAddress;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  iVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(pdVar8,8,0);
  if (iVar5 == 0) {
    return 0;
  }
  lVar20 = *(long *)(pdVar8 + 2);
  pdVar19 = unaff_x21;
  if (lVar20 == 0) {
    piVar9 = (int *)func_0x00f78af4();
    puStack_48 = &Core_Services_ReadSaveRequest__get_Size;
    uVar11 = 0;
    pppppuStack_50 = &pppppuStack_30;
    uVar7 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar9,10);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    lVar20 = *(long *)(piVar9 + 2);
    if (lVar20 == 0) {
      auVar25 = func_0x00f78af4();
      piVar10 = auVar25._0_8_;
      puVar3 = &stack0xffffffffffffff60;
      puStack_68 = &Core_Services_ReadSaveRequest__CreateReadSaveRequest;
      ppppppuVar23 = &pppppuStack_70;
      pppppuStack_70 = &pppppuStack_50;
      if (piVar10 != (int *)0x0) {
        puVar24 = &UNK_0167eed0;
        piVar9 = piVar10;
        unaff_x21 = auVar25._8_8_;
        unaff_x22 = param_5;
code_r0x016ce2a4:
        uVar12 = 0;
        ppppppuVar4 = (undefined8 ******)(puVar3 + -0x30);
        *(dword **)(puVar3 + -0x30) = unaff_x22;
        *(dword **)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = uVar11;
        *(int **)(puVar3 + -0x18) = piVar9;
        *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar23;
        *(undefined **)(puVar3 + -8) = puVar24;
        unaff_x20 = &MACH_HEADER.cputype;
        unaff_x21 = (dword *)0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar10);
        if (*(long *)(piVar10 + 10) != 0) {
          if (*(int *)(*(long *)(piVar10 + 10) + 0x18) < 4) {
            uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
            *(undefined8 *)(piVar10 + 10) = uVar11;
          }
          piVar10[0xc] = 4;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar10);
          piVar10[0xd] = (int)uVar7;
          return uVar7;
        }
        auVar25 = func_0x00f78af4();
        piVar9 = piVar10;
        ppppppuVar23 = (undefined8 ******)(puVar3 + -0x10);
        puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
        goto code_r0x016ce380;
      }
      auVar25 = func_0x00f78af4();
      uVar7 = auVar25._0_8_;
      pppppuStack_b0 = ppppppuVar23;
      if (uVar7 != 0) {
        param_4 = 0;
        puStack_a8 = &Core_Services_ReadSaveRequest__AddToAddress;
        if ((auVar25._8_8_ == 0) && (*(char *)(uVar7 + 0x48) == '\0')) {
          return uVar7;
        }
        uVar12 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar7,8,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar7,auVar25._8_8_);
        auVar25._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        auVar25._0_8_ = uVar7;
        ppppppuVar4 = (undefined8 ******)&stack0xffffffffffffff60;
        ppppppuVar23 = (undefined8 ******)pppppuStack_b0;
        puVar24 = puStack_a8;
        goto code_r0x016ce380;
      }
      ppppppuVar4 = &pppppuStack_b0;
      puStack_a8 = &Core_Services_ReadSaveRequest__AddToAddress;
      puVar24 = &Core_Services_ReadSaveRequest__AddSize;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        ppppppuVar4 = (undefined8 ******)&stack0xffffffffffffff40;
        puVar24 = &Core_Services_ReadSaveRequest__AddIndex;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          ppppppuVar4 = (undefined8 ******)&stack0xffffffffffffff30;
          puVar16 = &stack0xffffffffffffff30;
          puVar24 = &Core_Services_ReadSaveRequest__AddConflict;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ != 0) {
            puVar17 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_d8 = &Core_Services_ReadSaveRequest__AddConflict;
          pppuStack_e0 = (undefined8 ***)&stack0xffffffffffffff30;
          pdVar8 = (dword *)func_0x00f78af4();
          puVar3 = &stack0xffffffffffffff00;
          puStack_e8 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
          ppppppuVar23 = (undefined8 ******)&ppppuStack_f0;
          uVar11 = 0x3eb5000;
          ppppuStack_f0 = &pppuStack_e0;
          if ((bRam0000000003eb59ee & 1) == 0) {
            ppppuStack_f0 = &pppuStack_e0;
            func_0x00f78a20(0x3d3f1d8);
            bRam0000000003eb59ee = 1;
          }
          if (pdVar8 == (dword *)0x0) {
            puVar24 = &Core_Services_ReadSaveRequest__StartReadSaveRequest;
            piVar10 = (int *)func_0x00f78af4();
            if (piVar10 == (int *)0x0) {
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 0x28);
            }
            piVar9 = (int *)0x0;
            goto code_r0x016ce2a4;
          }
          puVar16 = &stack0xfffffffffffffed0;
          ppppppuVar2 = (undefined8 ******)&stack0xfffffffffffffed0;
          ppppppuVar23 = (undefined8 ******)&ppppuStack_f0;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          pdVar19 = (dword *)0x3eb5000;
          if (-1 < (int)pdVar8[0xc]) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(pdVar8,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(pdVar8,0);
            unaff_x20 = (dword *)/*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(pdVar8);
            unaff_x21 = (dword *)(ulong)pdVar8[0xc];
            uVar14 = pdVar8[0xc] - 1;
            if (-2 < (int)uVar14) {
              uVar14 = 0xffffffff;
            }
            unaff_x22 = (dword *)(ulong)uVar14;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (dword *)(ulong)uVar1;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar20 = *(long *)(pdVar8 + 10);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 2;
            do {
              unaff_x23 = unaff_x22 + -2;
              if ((int *)(ulong)*(uint *)(lVar20 + 0x18) <= unaff_x23) goto code_r0x016ced88;
              iVar5 = *(int *)(lVar20 + (long)unaff_x22 * 4);
              uVar14 = 0;
              if (iVar5 != 0) {
                uVar14 = (int)unaff_x20 - iVar5;
              }
              unaff_x24 = (ulong)uVar14;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(pdVar8,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(pdVar8,(int)(short)uVar14);
              lVar20 = *(long *)(pdVar8 + 10);
              if (lVar20 == 0) goto code_r0x016ced84;
              if ((int *)(ulong)*(uint *)(lVar20 + 0x18) <= unaff_x23) goto code_r0x016ced88;
              *(undefined4 *)(lVar20 + (long)unaff_x22 * 4) = 0;
              unaff_x22 = (dword *)((long)unaff_x22 + -1);
              uVar14 = uVar1;
            } while (0 < (long)unaff_x23);
code_r0x016ceb30:
            iVar5 = pdVar8[0xd];
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(pdVar8,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(pdVar8,(int)(short)((short)unaff_x20 - (short)iVar5));
            uVar14 = uVar14 * 2 + 6;
            unaff_x21 = (dword *)(ulong)uVar14;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(pdVar8,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(pdVar8,(int)(short)uVar14);
            uVar14 = pdVar8[0x10];
            unaff_x22 = (dword *)(ulong)uVar14;
            if ((int)uVar14 < 1) {
              unaff_x21 = *(dword **)(pdVar8 + 0xe);
              if (unaff_x21 != (dword *)0x0) {
                if (uVar14 == unaff_x21[6]) {
                  unaff_x21 = (dword *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar14 << 1);
                  lVar20 = *(long *)(pdVar8 + 0xe);
                  if (lVar20 == 0) goto code_r0x016ced84;
                  /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                  *(dword **)(pdVar8 + 0xe) = unaff_x21;
                  unaff_x22 = (dword *)(ulong)pdVar8[0x10];
                }
                uVar14 = (uint)unaff_x22;
                pdVar8[0x10] = uVar14 + 1;
                dVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(pdVar8);
                if (unaff_x21 != (dword *)0x0) {
                  if (unaff_x21[6] <= uVar14) goto code_r0x016ced88;
                  unaff_x21[(long)(int)uVar14 + 8] = dVar6;
                  unaff_x21 = *(dword **)(pdVar8 + 6);
                  if ((unaff_x21 != (dword *)0x0) && (*(long *)(unaff_x21 + 4) != 0)) {
                    iVar5 = *(int *)(*(long *)(unaff_x21 + 4) + 0x18);
                    /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(pdVar8);
                    uVar14 = iVar5 - (int)unaff_x20;
                    uVar7 = (ulong)uVar14;
                    auVar27._8_4_ = uVar14;
                    auVar27._0_8_ = unaff_x21;
                    auVar27._12_4_ = 0;
                    pdVar18 = &MACH_HEADER.cputype;
                    puVar24 = &UNK_016ced4c;
                    goto code_r0x016cc7a4;
                  }
                }
              }
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
              unaff_x24 = 0;
              lVar20 = *(long *)(pdVar8 + 6);
              if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                 (lVar21 = *(long *)(pdVar8 + 0xe), lVar21 == 0)) goto code_r0x016ced84;
              if (*(int *)(lVar21 + 0x18) != 0) {
                pdVar15 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                                *(int *)(lVar21 + 0x20));
                unaff_x22 = (dword *)(ulong)pdVar8[4];
                pdVar18 = (dword *)((long)&MACH_HEADER.magic + 2);
                puVar24 = &UNK_016cebcc;
                pdVar19 = pdVar15;
                ppppppuVar4 = ppppppuVar23;
                goto code_r0x016cc634;
              }
            }
code_r0x016ced88:
            uVar11 = func_0x00f78b24();
            func_0x00f78ac0(uVar11,0);
            pdVar19 = unaff_x20;
          }
          func_0x00f78a24(0x3d22a38);
          uVar11 = func_0x00f78aec();
          uVar12 = func_0x00f78a24(0x3d6cea8);
          pdVar8 = (dword *)0x0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
          uVar12 = func_0x00f78a24(0x3d56a30);
          auVar28 = func_0x00f78ac0(uVar11,uVar12);
          unaff_x20 = auVar28._0_8_;
          ppppppuVar2 = (undefined8 ******)auStack_170;
          puStack_138 = &FlatBuffers_FlatBufferBuilder__Required;
          ppppppuVar4 = &pppppuStack_140;
          uStack_164 = SUB84(pdVar8,0);
          lVar20 = *(long *)(unaff_x20 + 6);
          pdStack_160 = unaff_x22;
          pdStack_158 = unaff_x21;
          pdStack_150 = pdVar19;
          uStack_148 = uVar11;
          pppppuStack_140 = ppppppuVar23;
          if ((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) {
            func_0x00f78af4();
            uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_164,0);
            uVar12 = func_0x00f78a24(0x3d6ce88);
            uVar13 = func_0x00f78a24(0x3d66338);
            lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar13,0);
            func_0x00f78a24(0x3d22a38);
            uVar7 = func_0x00f78aec();
            uVar12 = 0;
            /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar7,lVar20);
            uVar11 = func_0x00f78a24(0x3d56a50);
            puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78ac0(uVar7,uVar11);
            puVar16 = auStack_170;
            do {
              uVar22 = auVar25._8_8_;
              lVar21 = auVar25._0_8_;
              *(ulong *)(puVar16 + -0x20) = uVar7;
              *(long *)(puVar16 + -0x18) = lVar20;
              *(undefined8 *******)(puVar16 + -0x10) = ppppppuVar4;
              *(undefined **)(puVar16 + -8) = puVar24;
              ppppppuVar4 = (undefined8 ******)(puVar16 + -0x10);
              if ((int)uVar12 == 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
                uVar7 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar22);
code_r0x016cef70:
                if (*(long *)(lVar21 + 0x18) != 0) {
                  *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
                  return uVar7;
                }
              }
              else if (lVar21 != 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
                /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar22);
                if ((*(long *)(lVar21 + 0x18) != 0) &&
                   (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
                  uVar22 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
                  uVar7 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar22);
                  goto code_r0x016cef70;
                }
              }
              puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar25 = func_0x00f78af4();
              uVar12 = 0;
              puVar16 = puVar16 + -0x20;
              lVar20 = lVar21;
              uVar7 = uVar22;
            } while( true );
          }
          pdVar15 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar28._8_4_
                                          );
          pdVar18 = &MACH_HEADER.cputype;
          puVar24 = &UNK_016cee20;
          pdVar19 = pdVar15;
          goto code_r0x016cc634;
        }
        puVar16 = (undefined1 *)0x0;
      }
      else {
        puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      }
      uVar7 = auVar26._0_8_;
      auVar25._8_8_ = puVar16;
      auVar25._0_8_ = uVar7;
      param_4 = 0;
      *(dword **)((long)ppppppuVar4 + -0x30) = unaff_x22;
      *(dword **)((long)ppppppuVar4 + -0x28) = unaff_x21;
      *(dword **)((long)ppppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)ppppppuVar4 + -0x18) = piVar9;
      *(undefined8 *******)((long)ppppppuVar4 + -0x10) = ppppppuVar4;
      *(undefined **)((long)ppppppuVar4 + -8) = puVar24;
      if ((auVar26._8_4_ == 0) && (*(char *)(uVar7 + 0x48) == '\0')) {
        return uVar7;
      }
      uVar12 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar7,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar7,auVar26._8_8_);
      ppppppuVar23 = *(undefined8 *******)((long)ppppppuVar4 + -0x10);
      puVar24 = *(undefined **)((long)ppppppuVar4 + -8);
      unaff_x20 = *(dword **)((long)ppppppuVar4 + -0x20);
      piVar9 = *(int **)((long)ppppppuVar4 + -0x18);
      unaff_x22 = *(dword **)((long)ppppppuVar4 + -0x30);
      unaff_x21 = *(dword **)((long)ppppppuVar4 + -0x28);
code_r0x016ce380:
      do {
        piVar10 = auVar25._8_8_;
        *(dword **)((long)ppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)ppppppuVar4 + -0x18) = piVar9;
        *(undefined8 *******)((long)ppppppuVar4 + -0x10) = ppppppuVar23;
        *(undefined **)((long)ppppppuVar4 + -8) = puVar24;
        puVar16 = (undefined1 *)((long)ppppppuVar4 + -0x10);
        uVar14 = auVar25._8_4_;
        if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
          unaff_x20 = *(dword **)(auVar25._0_8_ + 0x28);
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (dword *)0x0) goto code_r0x016ce410;
          if (uVar14 < unaff_x20[6]) {
            unaff_x20[(long)(int)uVar14 + 8] = (dword)uVar7;
            return uVar7;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar10 = (int *)func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d6ceb8);
          uVar12 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar10,uVar11);
          uVar11 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar10,uVar11);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar11 = func_0x00f78b24();
        puVar24 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar25 = func_0x00f78ac0(uVar11,0);
        puVar17 = auVar25._8_8_;
        auVar26._8_8_ = uVar12;
        auVar26._0_8_ = auVar25._0_8_;
        ppppppuVar4 = (undefined8 ******)((long)ppppppuVar4 + -0x20);
        piVar9 = piVar10;
code_r0x016ce420:
        uVar7 = auVar26._0_8_;
        auVar25._8_8_ = puVar17;
        auVar25._0_8_ = uVar7;
        *(dword **)((long)ppppppuVar4 + -0x30) = unaff_x22;
        *(dword **)((long)ppppppuVar4 + -0x28) = unaff_x21;
        *(dword **)((long)ppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)ppppppuVar4 + -0x18) = piVar9;
        *(undefined1 **)((long)ppppppuVar4 + -0x10) = puVar16;
        *(undefined **)((long)ppppppuVar4 + -8) = puVar24;
        if ((auVar26._8_4_ == (int)param_4) && (*(char *)(uVar7 + 0x48) == '\0')) {
          return uVar7;
        }
        uVar12 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar7,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar7,auVar26._8_8_);
        unaff_x20 = *(dword **)((long)ppppppuVar4 + -0x20);
        piVar9 = *(int **)((long)ppppppuVar4 + -0x18);
        unaff_x22 = *(dword **)((long)ppppppuVar4 + -0x30);
        unaff_x21 = *(dword **)((long)ppppppuVar4 + -0x28);
        ppppppuVar23 = *(undefined8 *******)((long)ppppppuVar4 + -0x10);
        puVar24 = *(undefined **)((long)ppppppuVar4 + -8);
      } while( true );
    }
    pdVar15 = (dword *)(ulong)(uint)(*piVar9 + (int)uVar7);
    ppppppuVar2 = &pppppuStack_50;
    pdVar18 = &MACH_HEADER.cputype;
    puVar24 = &UNK_016cce14;
    ppppppuVar4 = &pppppuStack_50;
  }
  else {
    pdVar15 = (dword *)(ulong)(*pdVar8 + iVar5);
    ppppppuVar2 = (undefined8 ******)&stack0xffffffffffffffe0;
    pdVar18 = &MACH_HEADER.cpusubtype;
    pdVar8 = param_1;
    ppppppuVar4 = (undefined8 ******)pppppuStack_30;
    puVar24 = puStack_28;
  }
code_r0x016cc634:
  auVar27._8_8_ = pdVar15;
  auVar27._0_8_ = lVar20;
  *(ulong *)((long)ppppppuVar2 + -0x40) = unaff_x24;
  *(dword **)((long)ppppppuVar2 + -0x38) = unaff_x23;
  *(dword **)((long)ppppppuVar2 + -0x30) = unaff_x22;
  *(dword **)((long)ppppppuVar2 + -0x28) = pdVar19;
  *(dword **)((long)ppppppuVar2 + -0x20) = unaff_x20;
  *(dword **)((long)ppppppuVar2 + -0x18) = pdVar8;
  *(undefined8 *******)((long)ppppppuVar2 + -0x10) = ppppppuVar4;
  *(undefined **)((long)ppppppuVar2 + -8) = puVar24;
  ppppppuVar23 = (undefined8 ******)((long)ppppppuVar2 + -0x10);
  uVar7 = 0x3d201a0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar24 = &UNK_016cc68c;
  puVar16 = (undefined1 *)((long)ppppppuVar2 + -0x40);
  pdVar8 = pdVar15;
  unaff_x20 = pdVar18;
code_r0x016cc7a4:
  do {
    uVar22 = auVar27._0_8_;
    *(dword **)(puVar16 + -0x20) = unaff_x20;
    *(dword **)(puVar16 + -0x18) = pdVar8;
    *(undefined8 *******)(puVar16 + -0x10) = ppppppuVar23;
    *(undefined **)(puVar16 + -8) = puVar24;
    if (auVar27._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      pdVar8 = (dword *)func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(pdVar8,0);
      uVar11 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(pdVar8,uVar11);
      pdVar19 = pdVar18;
    }
    else {
      pdVar19 = pdVar18;
      if (*(long *)(uVar22 + 0x10) != 0) {
        if (auVar27._8_4_ <= *(int *)(*(long *)(uVar22 + 0x10) + 0x18) - (int)pdVar18) {
          return uVar22;
        }
        goto code_r0x016cc7d8;
      }
    }
    auVar27 = func_0x00f78af4();
    *(ulong *)(puVar16 + -0x50) = uVar7;
    *(ulong *)(puVar16 + -0x48) = uVar22;
    *(dword **)(puVar16 + -0x40) = unaff_x20;
    *(dword **)(puVar16 + -0x38) = pdVar8;
    *(undefined1 **)(puVar16 + -0x30) = puVar16 + -0x10;
    *(undefined **)(puVar16 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    ppppppuVar23 = (undefined8 ******)(puVar16 + -0x30);
    pdVar18 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar24 = &UNK_016cc834;
    puVar16 = puVar16 + -0x50;
    pdVar8 = pdVar19;
    unaff_x20 = auVar27._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x167edec | Core.Services.ReadSaveRequest.get_ToAddress
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cce10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ced4c) */
/* WARNING: Removing unreachable block (ram,0x016cec14) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebcc) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x0167ef00) */
/* WARNING: Removing unreachable block (ram,0x0167eee8) */
/* WARNING: Removing unreachable block (ram,0x0167eed0) */
/* WARNING: Removing unreachable block (ram,0x016cce14) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_ReadSaveRequest__get_ToAddress
               (dword *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               dword *param_5)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined1 *puVar3;
  undefined1 ****ppppuVar4;
  int iVar5;
  dword dVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  dword *pdVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  dword *pdVar18;
  dword *pdVar19;
  long lVar20;
  dword *unaff_x19;
  dword *unaff_x20;
  ulong uVar21;
  dword *unaff_x21;
  dword *unaff_x22;
  dword *unaff_x23;
  ulong unaff_x24;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_170 [4];
  undefined1 auStack_150 [12];
  undefined4 uStack_144;
  dword *pdStack_140;
  dword *pdStack_138;
  dword *pdStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined8 **ppuStack_30;
  undefined *puStack_28;
  
  iVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if (iVar5 == 0) {
    return 0;
  }
  lVar20 = *(long *)(param_1 + 2);
  pdVar19 = unaff_x21;
  if (lVar20 == 0) {
    piVar7 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Services_ReadSaveRequest__get_Size;
    uVar10 = 0;
    ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
    lVar8 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar7,10);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    lVar20 = *(long *)(piVar7 + 2);
    if (lVar20 == 0) {
      auVar24 = func_0x00f78af4();
      piVar9 = auVar24._0_8_;
      puVar3 = &stack0xffffffffffffff80;
      puStack_48 = &Core_Services_ReadSaveRequest__CreateReadSaveRequest;
      pppuVar2 = &ppuStack_50;
      ppuStack_50 = &ppuStack_30;
      if (piVar9 != (int *)0x0) {
        puVar23 = &UNK_0167eed0;
        piVar7 = piVar9;
        unaff_x21 = auVar24._8_8_;
        unaff_x22 = param_5;
code_r0x016ce2a4:
        uVar11 = 0;
        ppppuVar4 = (undefined1 ****)(puVar3 + -0x30);
        *(dword **)(puVar3 + -0x30) = unaff_x22;
        *(dword **)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = uVar10;
        *(int **)(puVar3 + -0x18) = piVar7;
        *(undefined8 ****)(puVar3 + -0x10) = pppuVar2;
        *(undefined **)(puVar3 + -8) = puVar23;
        unaff_x20 = &MACH_HEADER.cputype;
        unaff_x21 = (dword *)0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar9);
        if (*(long *)(piVar9 + 10) != 0) {
          if (*(int *)(*(long *)(piVar9 + 10) + 0x18) < 4) {
            uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
            *(undefined8 *)(piVar9 + 10) = uVar10;
          }
          piVar9[0xc] = 4;
          lVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar9);
          piVar9[0xd] = (int)lVar20;
          return lVar20;
        }
        auVar24 = func_0x00f78af4();
        piVar7 = piVar9;
        pppuVar2 = (undefined8 ***)(puVar3 + -0x10);
        puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
        goto code_r0x016ce380;
      }
      auVar24 = func_0x00f78af4();
      lVar20 = auVar24._0_8_;
      pppuStack_90 = (undefined1 ***)pppuVar2;
      if (lVar20 != 0) {
        param_4 = 0;
        puStack_88 = &Core_Services_ReadSaveRequest__AddToAddress;
        if ((auVar24._8_8_ == 0) && (*(char *)(lVar20 + 0x48) == '\0')) {
          return lVar20;
        }
        uVar11 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,8,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(lVar20,auVar24._8_8_);
        auVar24._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        auVar24._0_8_ = lVar20;
        ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff80;
        pppuVar2 = (undefined8 ***)pppuStack_90;
        puVar23 = puStack_88;
        goto code_r0x016ce380;
      }
      ppppuVar4 = &pppuStack_90;
      puStack_88 = &Core_Services_ReadSaveRequest__AddToAddress;
      puVar23 = &Core_Services_ReadSaveRequest__AddSize;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff60;
        puVar23 = &Core_Services_ReadSaveRequest__AddIndex;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff50;
          puVar16 = &stack0xffffffffffffff50;
          puVar23 = &Core_Services_ReadSaveRequest__AddConflict;
          auVar25 = func_0x00f78af4();
          if (auVar25._0_8_ != 0) {
            puVar17 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_b8 = &Core_Services_ReadSaveRequest__AddConflict;
          puStack_c0 = (undefined8 *)&stack0xffffffffffffff50;
          param_1 = (dword *)func_0x00f78af4();
          puVar3 = &stack0xffffffffffffff20;
          puStack_c8 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
          pppuVar2 = &ppuStack_d0;
          uVar10 = 0x3eb5000;
          ppuStack_d0 = &puStack_c0;
          if ((bRam0000000003eb59ee & 1) == 0) {
            ppuStack_d0 = &puStack_c0;
            func_0x00f78a20(0x3d3f1d8);
            bRam0000000003eb59ee = 1;
          }
          if (param_1 == (dword *)0x0) {
            puVar23 = &Core_Services_ReadSaveRequest__StartReadSaveRequest;
            piVar9 = (int *)func_0x00f78af4();
            if (piVar9 == (int *)0x0) {
              lVar20 = func_0x00f78af4();
              return *(long *)(lVar20 + 0x28);
            }
            piVar7 = (int *)0x0;
            goto code_r0x016ce2a4;
          }
          puVar16 = &stack0xfffffffffffffef0;
          pppuVar2 = (undefined8 ***)&stack0xfffffffffffffef0;
          ppppuVar22 = (undefined8 ****)&ppuStack_d0;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          pdVar19 = (dword *)0x3eb5000;
          if (-1 < (int)param_1[0xc]) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
            unaff_x20 = (dword *)/*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
            unaff_x21 = (dword *)(ulong)param_1[0xc];
            uVar14 = param_1[0xc] - 1;
            if (-2 < (int)uVar14) {
              uVar14 = 0xffffffff;
            }
            unaff_x22 = (dword *)(ulong)uVar14;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (dword *)(ulong)uVar1;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar20 = *(long *)(param_1 + 10);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 2;
            do {
              unaff_x23 = unaff_x22 + -2;
              if ((int *)(ulong)*(uint *)(lVar20 + 0x18) <= unaff_x23) goto code_r0x016ced88;
              iVar5 = *(int *)(lVar20 + (long)unaff_x22 * 4);
              uVar14 = 0;
              if (iVar5 != 0) {
                uVar14 = (int)unaff_x20 - iVar5;
              }
              unaff_x24 = (ulong)uVar14;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar14);
              lVar20 = *(long *)(param_1 + 10);
              if (lVar20 == 0) goto code_r0x016ced84;
              if ((int *)(ulong)*(uint *)(lVar20 + 0x18) <= unaff_x23) goto code_r0x016ced88;
              *(undefined4 *)(lVar20 + (long)unaff_x22 * 4) = 0;
              unaff_x22 = (dword *)((long)unaff_x22 + -1);
              uVar14 = uVar1;
            } while (0 < (long)unaff_x23);
code_r0x016ceb30:
            iVar5 = param_1[0xd];
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)unaff_x20 - (short)iVar5));
            uVar14 = uVar14 * 2 + 6;
            unaff_x21 = (dword *)(ulong)uVar14;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar14);
            uVar14 = param_1[0x10];
            unaff_x22 = (dword *)(ulong)uVar14;
            if ((int)uVar14 < 1) {
              unaff_x21 = *(dword **)(param_1 + 0xe);
              if (unaff_x21 != (dword *)0x0) {
                if (uVar14 == unaff_x21[6]) {
                  unaff_x21 = (dword *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar14 << 1);
                  lVar20 = *(long *)(param_1 + 0xe);
                  if (lVar20 == 0) goto code_r0x016ced84;
                  /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                  *(dword **)(param_1 + 0xe) = unaff_x21;
                  unaff_x22 = (dword *)(ulong)param_1[0x10];
                }
                uVar14 = (uint)unaff_x22;
                param_1[0x10] = uVar14 + 1;
                dVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
                if (unaff_x21 != (dword *)0x0) {
                  if (unaff_x21[6] <= uVar14) goto code_r0x016ced88;
                  unaff_x21[(long)(int)uVar14 + 8] = dVar6;
                  unaff_x21 = *(dword **)(param_1 + 6);
                  if ((unaff_x21 != (dword *)0x0) && (*(long *)(unaff_x21 + 4) != 0)) {
                    iVar5 = *(int *)(*(long *)(unaff_x21 + 4) + 0x18);
                    /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
                    uVar14 = iVar5 - (int)unaff_x20;
                    uVar13 = (ulong)uVar14;
                    auVar26._8_4_ = uVar14;
                    auVar26._0_8_ = unaff_x21;
                    auVar26._12_4_ = 0;
                    pdVar18 = &MACH_HEADER.cputype;
                    puVar23 = &UNK_016ced4c;
                    goto code_r0x016cc7a4;
                  }
                }
              }
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
              unaff_x24 = 0;
              lVar20 = *(long *)(param_1 + 6);
              if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                 (lVar8 = *(long *)(param_1 + 0xe), lVar8 == 0)) goto code_r0x016ced84;
              if (*(int *)(lVar8 + 0x18) != 0) {
                pdVar15 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                                *(int *)(lVar8 + 0x20));
                unaff_x22 = (dword *)(ulong)param_1[4];
                pdVar18 = (dword *)((long)&MACH_HEADER.magic + 2);
                unaff_x30 = &UNK_016cebcc;
                pdVar19 = pdVar15;
                unaff_x29 = ppppuVar22;
                goto code_r0x016cc634;
              }
            }
code_r0x016ced88:
            uVar10 = func_0x00f78b24();
            func_0x00f78ac0(uVar10,0);
            pdVar19 = unaff_x20;
          }
          func_0x00f78a24(0x3d22a38);
          uVar10 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d6cea8);
          param_1 = (dword *)0x0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
          uVar11 = func_0x00f78a24(0x3d56a30);
          auVar27 = func_0x00f78ac0(uVar10,uVar11);
          unaff_x20 = auVar27._0_8_;
          pppuVar2 = (undefined8 ***)auStack_150;
          puStack_118 = &FlatBuffers_FlatBufferBuilder__Required;
          unaff_x29 = &pppuStack_120;
          uStack_144 = SUB84(param_1,0);
          lVar20 = *(long *)(unaff_x20 + 6);
          pdStack_140 = unaff_x22;
          pdStack_138 = unaff_x21;
          pdStack_130 = pdVar19;
          uStack_128 = uVar10;
          pppuStack_120 = ppppuVar22;
          if ((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) {
            func_0x00f78af4();
            uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_144,0);
            uVar11 = func_0x00f78a24(0x3d6ce88);
            uVar12 = func_0x00f78a24(0x3d66338);
            lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar10,uVar12,0);
            func_0x00f78a24(0x3d22a38);
            uVar13 = func_0x00f78aec();
            uVar11 = 0;
            /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
            uVar10 = func_0x00f78a24(0x3d56a50);
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar24 = func_0x00f78ac0(uVar13,uVar10);
            puVar16 = auStack_150;
            do {
              uVar21 = auVar24._8_8_;
              lVar8 = auVar24._0_8_;
              *(ulong *)(puVar16 + -0x20) = uVar13;
              *(long *)(puVar16 + -0x18) = lVar20;
              *(undefined8 *****)(puVar16 + -0x10) = unaff_x29;
              *(undefined **)(puVar16 + -8) = puVar23;
              unaff_x29 = (undefined8 ****)(puVar16 + -0x10);
              if ((int)uVar11 == 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar8,*(undefined4 *)(lVar8 + 0x20),4);
                lVar20 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar8,uVar21);
code_r0x016cef70:
                if (*(long *)(lVar8 + 0x18) != 0) {
                  *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x18) = *(undefined4 *)(lVar8 + 0x10);
                  return lVar20;
                }
              }
              else if (lVar8 != 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar8,*(undefined4 *)(lVar8 + 0x20),8);
                /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar8,uVar21);
                if ((*(long *)(lVar8 + 0x18) != 0) &&
                   (lVar20 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar20 != 0)) {
                  uVar21 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar8 + 0x10));
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar8,4,0);
                  lVar20 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar8,uVar21);
                  goto code_r0x016cef70;
                }
              }
              puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar24 = func_0x00f78af4();
              uVar11 = 0;
              puVar16 = puVar16 + -0x20;
              lVar20 = lVar8;
              uVar13 = uVar21;
            } while( true );
          }
          pdVar15 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar27._8_4_
                                          );
          pdVar18 = &MACH_HEADER.cputype;
          unaff_x30 = &UNK_016cee20;
          pdVar19 = pdVar15;
          goto code_r0x016cc634;
        }
        puVar16 = (undefined1 *)0x0;
      }
      else {
        puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      }
      lVar20 = auVar25._0_8_;
      auVar24._8_8_ = puVar16;
      auVar24._0_8_ = lVar20;
      param_4 = 0;
      *(dword **)((long)ppppuVar4 + -0x30) = unaff_x22;
      *(dword **)((long)ppppuVar4 + -0x28) = unaff_x21;
      *(dword **)((long)ppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar4 + -0x18) = piVar7;
      *(undefined1 *****)((long)ppppuVar4 + -0x10) = ppppuVar4;
      *(undefined **)((long)ppppuVar4 + -8) = puVar23;
      if ((auVar25._8_4_ == 0) && (*(char *)(lVar20 + 0x48) == '\0')) {
        return lVar20;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(lVar20,auVar25._8_8_);
      pppuVar2 = *(undefined8 ****)((long)ppppuVar4 + -0x10);
      puVar23 = *(undefined **)((long)ppppuVar4 + -8);
      unaff_x20 = *(dword **)((long)ppppuVar4 + -0x20);
      piVar7 = *(int **)((long)ppppuVar4 + -0x18);
      unaff_x22 = *(dword **)((long)ppppuVar4 + -0x30);
      unaff_x21 = *(dword **)((long)ppppuVar4 + -0x28);
code_r0x016ce380:
      do {
        piVar9 = auVar24._8_8_;
        *(dword **)((long)ppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)ppppuVar4 + -0x18) = piVar7;
        *(undefined8 ****)((long)ppppuVar4 + -0x10) = pppuVar2;
        *(undefined **)((long)ppppuVar4 + -8) = puVar23;
        puVar16 = (undefined1 *)((long)ppppuVar4 + -0x10);
        uVar14 = auVar24._8_4_;
        if ((int)uVar14 < *(int *)(auVar24._0_8_ + 0x30)) {
          unaff_x20 = *(dword **)(auVar24._0_8_ + 0x28);
          lVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (dword *)0x0) goto code_r0x016ce410;
          if (uVar14 < unaff_x20[6]) {
            unaff_x20[(long)(int)uVar14 + 8] = (dword)lVar20;
            return lVar20;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar9 = (int *)func_0x00f78aec();
          uVar10 = func_0x00f78a24(0x3d6ceb8);
          uVar11 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar9,uVar10);
          uVar10 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar9,uVar10);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar10 = func_0x00f78b24();
        puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar24 = func_0x00f78ac0(uVar10,0);
        puVar17 = auVar24._8_8_;
        auVar25._8_8_ = uVar11;
        auVar25._0_8_ = auVar24._0_8_;
        ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x20);
        piVar7 = piVar9;
code_r0x016ce420:
        lVar20 = auVar25._0_8_;
        auVar24._8_8_ = puVar17;
        auVar24._0_8_ = lVar20;
        *(dword **)((long)ppppuVar4 + -0x30) = unaff_x22;
        *(dword **)((long)ppppuVar4 + -0x28) = unaff_x21;
        *(dword **)((long)ppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)ppppuVar4 + -0x18) = piVar7;
        *(undefined1 **)((long)ppppuVar4 + -0x10) = puVar16;
        *(undefined **)((long)ppppuVar4 + -8) = puVar23;
        if ((auVar25._8_4_ == (int)param_4) && (*(char *)(lVar20 + 0x48) == '\0')) {
          return lVar20;
        }
        uVar11 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(lVar20,auVar25._8_8_);
        unaff_x20 = *(dword **)((long)ppppuVar4 + -0x20);
        piVar7 = *(int **)((long)ppppuVar4 + -0x18);
        unaff_x22 = *(dword **)((long)ppppuVar4 + -0x30);
        unaff_x21 = *(dword **)((long)ppppuVar4 + -0x28);
        pppuVar2 = *(undefined8 ****)((long)ppppuVar4 + -0x10);
        puVar23 = *(undefined **)((long)ppppuVar4 + -8);
      } while( true );
    }
    pdVar15 = (dword *)(ulong)(uint)(*piVar7 + (int)lVar8);
    pppuVar2 = &ppuStack_30;
    pdVar18 = &MACH_HEADER.cputype;
    unaff_x30 = &UNK_016cce14;
    unaff_x29 = (undefined8 ****)&ppuStack_30;
  }
  else {
    pdVar15 = (dword *)(ulong)(*param_1 + iVar5);
    pdVar18 = &MACH_HEADER.cpusubtype;
    pppuVar2 = (undefined8 ***)register0x00000008;
    param_1 = unaff_x19;
  }
code_r0x016cc634:
  auVar26._8_8_ = pdVar15;
  auVar26._0_8_ = lVar20;
  *(ulong *)((long)pppuVar2 + -0x40) = unaff_x24;
  *(dword **)((long)pppuVar2 + -0x38) = unaff_x23;
  *(dword **)((long)pppuVar2 + -0x30) = unaff_x22;
  *(dword **)((long)pppuVar2 + -0x28) = pdVar19;
  *(dword **)((long)pppuVar2 + -0x20) = unaff_x20;
  *(dword **)((long)pppuVar2 + -0x18) = param_1;
  *(undefined8 *****)((long)pppuVar2 + -0x10) = unaff_x29;
  *(undefined **)((long)pppuVar2 + -8) = unaff_x30;
  ppppuVar22 = (undefined8 ****)((long)pppuVar2 + -0x10);
  uVar13 = 0x3d201a0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar23 = &UNK_016cc68c;
  puVar16 = (undefined1 *)((long)pppuVar2 + -0x40);
  param_1 = pdVar15;
  unaff_x20 = pdVar18;
code_r0x016cc7a4:
  do {
    lVar20 = auVar26._0_8_;
    *(dword **)(puVar16 + -0x20) = unaff_x20;
    *(dword **)(puVar16 + -0x18) = param_1;
    *(undefined8 *****)(puVar16 + -0x10) = ppppuVar22;
    *(undefined **)(puVar16 + -8) = puVar23;
    if (auVar26._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      param_1 = (dword *)func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(param_1,0);
      uVar10 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(param_1,uVar10);
      pdVar19 = pdVar18;
    }
    else {
      pdVar19 = pdVar18;
      if (*(long *)(lVar20 + 0x10) != 0) {
        if (auVar26._8_4_ <= *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - (int)pdVar18) {
          return lVar20;
        }
        goto code_r0x016cc7d8;
      }
    }
    auVar26 = func_0x00f78af4();
    *(ulong *)(puVar16 + -0x50) = uVar13;
    *(long *)(puVar16 + -0x48) = lVar20;
    *(dword **)(puVar16 + -0x40) = unaff_x20;
    *(dword **)(puVar16 + -0x38) = param_1;
    *(undefined1 **)(puVar16 + -0x30) = puVar16 + -0x10;
    *(undefined **)(puVar16 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    ppppuVar22 = (undefined8 ****)(puVar16 + -0x30);
    pdVar18 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar23 = &UNK_016cc834;
    puVar16 = puVar16 + -0x50;
    param_1 = pdVar19;
    unaff_x20 = auVar26._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x167ee44 | Core.Services.ReadSaveRequest.get_Size
// ============================================================

/* WARNING: Possible PIC construction at 0x0167eecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eefc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0167eee8) */
/* WARNING: Removing unreachable block (ram,0x0167eed0) */
/* WARNING: Removing unreachable block (ram,0x0167ef00) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__get_Size
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                )

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  int iVar22;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined1 **ppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_150 [4];
  undefined1 auStack_130 [12];
  int iStack_124;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar18 = 0;
  uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar10,4);
    return uVar10;
  }
  auVar26 = func_0x00f78af4();
  piVar11 = auVar26._0_8_;
  puVar2 = &stack0xffffffffffffffa0;
  puStack_28 = &Core_Services_ReadSaveRequest__CreateReadSaveRequest;
  ppuVar24 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar11 != (int *)0x0) {
    puVar25 = &UNK_0167eed0;
    piVar21 = piVar11;
    unaff_x21 = auVar26._8_8_;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar12 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar18;
    *(int **)(puVar2 + -0x18) = piVar21;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar11);
    if (*(long *)(piVar11 + 10) != 0) {
      if (*(int *)(*(long *)(piVar11 + 10) + 0x18) < 4) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(piVar11 + 10) = uVar18;
      }
      piVar11[0xc] = 4;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar11);
      piVar11[0xd] = (int)uVar10;
      return uVar10;
    }
    auVar26 = func_0x00f78af4();
    param_1 = piVar11;
    ppuVar24 = (undefined1 **)(puVar2 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar10 = auVar26._0_8_;
  ppuStack_70 = ppuVar24;
  if (uVar10 != 0) {
    param_4 = 0;
    puStack_68 = &Core_Services_ReadSaveRequest__AddToAddress;
    if ((auVar26._8_8_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar12 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar10,auVar26._8_8_);
    auVar26._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    auVar26._0_8_ = uVar10;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffa0;
    ppuVar24 = ppuStack_70;
    puVar25 = puStack_68;
    goto code_r0x016ce380;
  }
  pppuVar3 = &ppuStack_70;
  puStack_68 = &Core_Services_ReadSaveRequest__AddToAddress;
  puVar25 = &Core_Services_ReadSaveRequest__AddSize;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff80;
    puVar25 = &Core_Services_ReadSaveRequest__AddIndex;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff70;
      puVar16 = &stack0xffffffffffffff70;
      puVar25 = &Core_Services_ReadSaveRequest__AddConflict;
      auVar27 = func_0x00f78af4();
      if (auVar27._0_8_ != 0) {
        puVar17 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_98 = &Core_Services_ReadSaveRequest__AddConflict;
      puStack_a0 = &stack0xffffffffffffff70;
      lVar13 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff40;
      puStack_a8 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
      ppuVar24 = &puStack_b0;
      uVar18 = 0x3eb5000;
      puStack_b0 = (undefined1 *)&puStack_a0;
      if ((bRam0000000003eb59ee & 1) == 0) {
        puStack_b0 = (undefined1 *)&puStack_a0;
        func_0x00f78a20(0x3d3f1d8);
        bRam0000000003eb59ee = 1;
      }
      if (lVar13 == 0) {
        puVar25 = &Core_Services_ReadSaveRequest__StartReadSaveRequest;
        piVar11 = (int *)func_0x00f78af4();
        if (piVar11 == (int *)0x0) {
          lVar13 = func_0x00f78af4();
          return *(ulong *)(lVar13 + 0x28);
        }
        piVar21 = (int *)0x0;
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
          iVar22 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar19 = *(long *)(lVar13 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar23 = unaff_x22 - 8;
          if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
          iVar8 = *(int *)(lVar19 + unaff_x22 * 4);
          sVar4 = 0;
          if (iVar8 != 0) {
            sVar4 = (short)uVar10 - (short)iVar8;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar4);
          lVar19 = *(long *)(lVar13 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
          *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar15 = uVar1;
        } while (0 < (long)uVar23);
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
          uVar23 = 0;
          do {
            lVar19 = *(long *)(lVar13 + 0x18);
            if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
               (lVar20 = *(long *)(lVar13 + 0x38), lVar20 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar20 + uVar23 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar15 = *(uint *)(lVar13 + 0x10);
            unaff_x22 = (ulong)uVar15;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
            if (sVar4 == sVar5) {
              if (sVar4 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar13 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
                iVar8 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
                if (iVar8 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar13 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                *(int *)(lVar13 + 0x10) = iVar9;
                iVar8 = iVar8 - iVar22;
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
            uVar23 = uVar23 + 1;
            unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
          } while ((long)uVar23 < (long)unaff_x22);
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
            lVar19 = *(long *)(lVar13 + 0x38);
            if (lVar19 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
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
              iVar9 = iVar9 - iVar22;
              iVar8 = iVar8 - iVar22;
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
        uVar18 = func_0x00f78b24();
        func_0x00f78ac0(uVar18,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar18 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6cea8);
      iVar22 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar28 = func_0x00f78ac0(uVar18,uVar12);
      puStack_f8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar3 = &ppuStack_100;
      lVar13 = *(long *)(auVar28._0_8_ + 0x18);
      iStack_124 = iVar22;
      uStack_120 = unaff_x22;
      uStack_118 = unaff_x21;
      uStack_110 = uVar10;
      uStack_108 = uVar18;
      ppuStack_100 = &puStack_b0;
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar28._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar8,4);
        lVar13 = *(long *)(auVar28._0_8_ + 0x18);
        if (lVar13 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar8 - iVar9) + iVar22,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_124,0);
      uVar12 = func_0x00f78a24(0x3d6ce88);
      uVar14 = func_0x00f78a24(0x3d66338);
      lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar18,uVar14,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar12 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar13);
      uVar18 = func_0x00f78a24(0x3d56a50);
      puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar26 = func_0x00f78ac0(uVar10,uVar18);
      puVar16 = auStack_130;
      do {
        uVar23 = auVar26._8_8_;
        lVar19 = auVar26._0_8_;
        *(ulong *)(puVar16 + -0x20) = uVar10;
        *(long *)(puVar16 + -0x18) = lVar13;
        *(undefined1 ****)(puVar16 + -0x10) = pppuVar3;
        *(undefined **)(puVar16 + -8) = puVar25;
        pppuVar3 = (undefined1 ***)(puVar16 + -0x10);
        if ((int)uVar12 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
code_r0x016cef70:
          if (*(long *)(lVar19 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
            return uVar10;
          }
        }
        else if (lVar19 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
          if ((*(long *)(lVar19 + 0x18) != 0) &&
             (lVar13 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar13 != 0)) {
            uVar23 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar19 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar23);
            goto code_r0x016cef70;
          }
        }
        puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar26 = func_0x00f78af4();
        uVar12 = 0;
        puVar16 = puVar16 + -0x20;
        lVar13 = lVar19;
        uVar10 = uVar23;
      } while( true );
    }
    puVar16 = (undefined1 *)0x0;
  }
  else {
    puVar16 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
  }
  uVar10 = auVar27._0_8_;
  auVar26._8_8_ = puVar16;
  auVar26._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = param_1;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar25;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar12 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar10,auVar27._8_8_);
  ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  param_1 = *(int **)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    piVar11 = auVar26._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar24;
    *(undefined **)((long)pppuVar3 + -8) = puVar25;
    puVar16 = (undefined1 *)((long)pppuVar3 + -0x10);
    uVar15 = auVar26._8_4_;
    if ((int)uVar15 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar11 = (int *)func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6ceb8);
      uVar12 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar11,uVar18);
      uVar18 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar11,uVar18);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar18 = func_0x00f78b24();
    puVar25 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar18,0);
    puVar17 = auVar26._8_8_;
    auVar27._8_8_ = uVar12;
    auVar27._0_8_ = auVar26._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    param_1 = piVar11;
code_r0x016ce420:
    uVar10 = auVar27._0_8_;
    auVar26._8_8_ = puVar17;
    auVar26._0_8_ = uVar10;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar16;
    *(undefined **)((long)pppuVar3 + -8) = puVar25;
    if ((auVar27._8_4_ == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar12 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,auVar27._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    param_1 = *(int **)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -0x10);
    puVar25 = *(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x167ee98 | Core.Services.ReadSaveRequest.CreateReadSaveRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x0167eecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167eefc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0167eee8) */
/* WARNING: Removing unreachable block (ram,0x0167eed0) */
/* WARNING: Removing unreachable block (ram,0x0167ef00) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__CreateReadSaveRequest
                (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
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
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  
  puVar2 = &stack0xffffffffffffffc0;
  ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar22 = (undefined *)0x167eed0;
    lVar13 = param_1;
    unaff_x21 = param_2;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar11 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_3;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar21;
    *(undefined **)(puVar2 + -8) = puVar22;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 4) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x30) = 4;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    auVar24 = func_0x00f78af4();
    unaff_x19 = param_1;
    ppuVar21 = (undefined1 **)(puVar2 + -0x10);
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar24 = func_0x00f78af4();
  uVar19 = auVar24._0_8_;
  ppuStack_50 = ppuVar21;
  if (uVar19 != 0) {
    param_4 = 0;
    puStack_48 = &Core_Services_ReadSaveRequest__AddToAddress;
    if ((auVar24._8_8_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar19,auVar24._8_8_);
    auVar24._8_8_ = 2;
    auVar24._0_8_ = uVar19;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffc0;
    ppuVar21 = ppuStack_50;
    puVar22 = puStack_48;
    goto code_r0x016ce380;
  }
  pppuVar3 = &ppuStack_50;
  puStack_48 = &Core_Services_ReadSaveRequest__AddToAddress;
  puVar22 = &Core_Services_ReadSaveRequest__AddSize;
  auVar23 = func_0x00f78af4();
  if (auVar23._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffa0;
    puVar22 = &Core_Services_ReadSaveRequest__AddIndex;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff90;
      puVar4 = &stack0xffffffffffffff90;
      puVar22 = &Core_Services_ReadSaveRequest__AddConflict;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ != 0) {
        uVar12 = 1;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_78 = &Core_Services_ReadSaveRequest__AddConflict;
      puStack_80 = &stack0xffffffffffffff90;
      lVar13 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff60;
      puStack_88 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
      ppuVar21 = &puStack_90;
      param_3 = 0x3eb5000;
      puStack_90 = (undefined1 *)&puStack_80;
      if ((bRam0000000003eb59ee & 1) == 0) {
        puStack_90 = (undefined1 *)&puStack_80;
        func_0x00f78a20(0x3d3f1d8);
        bRam0000000003eb59ee = 1;
      }
      if (lVar13 == 0) {
        puVar22 = &Core_Services_ReadSaveRequest__StartReadSaveRequest;
        param_1 = func_0x00f78af4();
        if (param_1 == 0) {
          lVar13 = func_0x00f78af4();
          return *(ulong *)(lVar13 + 0x28);
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
            uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - *(int *)(lVar17 + uVar20 * 4 + 0x20)
            ;
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
      puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar3 = &ppuStack_e0;
      lVar13 = *(long *)(auVar25._0_8_ + 0x18);
      iStack_104 = iVar18;
      uStack_100 = unaff_x22;
      uStack_f8 = unaff_x21;
      uStack_f0 = uVar19;
      uStack_e8 = uVar11;
      ppuStack_e0 = &puStack_90;
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
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_104,0);
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
      puVar4 = auStack_110;
      do {
        uVar20 = auVar24._8_8_;
        lVar16 = auVar24._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar19;
        *(long *)(puVar4 + -0x18) = lVar13;
        *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
        *(undefined **)(puVar4 + -8) = puVar22;
        pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
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
    uVar11 = 0;
  }
  else {
    uVar11 = 3;
  }
  uVar19 = auVar23._0_8_;
  auVar24._8_8_ = uVar11;
  auVar24._0_8_ = uVar19;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar22;
  if ((auVar23._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
    return uVar19;
  }
  uVar11 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar19,auVar23._8_8_);
  ppuVar21 = *(undefined1 ***)((long)pppuVar3 + -0x10);
  puVar22 = *(undefined **)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    lVar13 = auVar24._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)pppuVar3 + -8) = puVar22;
    puVar4 = (undefined1 *)((long)pppuVar3 + -0x10);
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
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    unaff_x19 = lVar13;
code_r0x016ce420:
    uVar19 = auVar23._0_8_;
    auVar24._8_8_ = uVar12;
    auVar24._0_8_ = uVar19;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppuVar3 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,auVar23._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    ppuVar21 = *(undefined1 ***)((long)pppuVar3 + -0x10);
    puVar22 = *(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x167ef1c | Core.Services.ReadSaveRequest.AddToAddress
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__AddToAddress
                (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long lVar16;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
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
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar16 = 2;
    if ((param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce380;
  }
  puVar2 = &stack0xfffffffffffffff0;
  puVar21 = &Core_Services_ReadSaveRequest__AddSize;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ == 0) {
    puVar2 = &stack0xffffffffffffffe0;
    puVar21 = &Core_Services_ReadSaveRequest__AddIndex;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      puVar2 = &stack0xffffffffffffffd0;
      puVar19 = &stack0xffffffffffffffd0;
      puVar21 = &Core_Services_ReadSaveRequest__AddConflict;
      auVar22 = func_0x00f78af4();
      if (auVar22._0_8_ != 0) {
        lVar16 = 1;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_38 = &Core_Services_ReadSaveRequest__AddConflict;
      puStack_40 = &stack0xffffffffffffffd0;
      lVar16 = func_0x00f78af4();
      puStack_48 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
      puStack_50 = (undefined1 *)&puStack_40;
      if ((bRam0000000003eb59ee & 1) == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        func_0x00f78a20(0x3d3f1d8);
        bRam0000000003eb59ee = 1;
      }
      if (lVar16 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar16 = func_0x00f78af4();
          return *(ulong *)(lVar16 + 0x28);
        }
        uVar13 = 0;
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
            uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar13;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 4;
          uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar9;
          return uVar9;
        }
        unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar22 = func_0x00f78af4();
        lVar16 = auVar22._8_8_;
        param_1 = auVar22._0_8_;
        goto code_r0x016ce380;
      }
      uVar9 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar16 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,0);
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
        unaff_x21 = (ulong)*(uint *)(lVar16 + 0x30);
        uVar12 = *(uint *)(lVar16 + 0x30) - 1;
        if (-2 < (int)uVar12) {
          uVar12 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar12;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar17 = (int)uVar9;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar14 = *(long *)(lVar16 + 0x28);
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
            sVar3 = (short)uVar9 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)sVar3);
          lVar14 = *(long *)(lVar16 + 0x28);
          if (lVar14 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
          *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar12 = uVar1;
        } while (0 < (long)uVar18);
code_r0x016ceb30:
        uVar6 = *(undefined4 *)(lVar16 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)((short)uVar9 - (short)uVar6));
        uVar12 = uVar12 * 2 + 6;
        unaff_x21 = (ulong)uVar12;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)uVar12);
        unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
        if (0 < (int)*(uint *)(lVar16 + 0x40)) {
          uVar18 = 0;
          do {
            lVar14 = *(long *)(lVar16 + 0x18);
            if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
               (lVar15 = *(long *)(lVar16 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar12 = *(uint *)(lVar16 + 0x10);
            unaff_x22 = (ulong)uVar12;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
            if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar16 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
                if (iVar7 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar16 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
                *(int *)(lVar16 + 0x10) = iVar8;
                iVar7 = iVar7 - iVar17;
                goto code_r0x016ced3c;
              }
              iVar7 = 2;
              while( true ) {
                if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar1 + iVar7,2);
                if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar12 + iVar7,2);
                if (sVar4 != sVar5) break;
                iVar7 = iVar7 + 2;
                if (sVar3 <= iVar7) goto code_r0x016cec64;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x22 = (ulong)*(int *)(lVar16 + 0x40);
          } while ((long)uVar18 < (long)unaff_x22);
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
            lVar14 = *(long *)(lVar16 + 0x38);
            if (lVar14 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
            *(ulong *)(lVar16 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
          }
          uVar12 = (uint)unaff_x22;
          *(uint *)(lVar16 + 0x40) = uVar12 + 1;
          uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
            unaff_x21 = *(ulong *)(lVar16 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
              iVar8 = iVar8 - iVar17;
              iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
              *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
              return uVar9;
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
      uVar10 = func_0x00f78a24(0x3d6cea8);
      iVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar13,uVar10);
      puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar20 = &ppuStack_a0;
      lVar16 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_c4 = iVar17;
      uStack_c0 = unaff_x22;
      uStack_b8 = unaff_x21;
      uStack_b0 = uVar9;
      uStack_a8 = uVar13;
      ppuStack_a0 = &puStack_50;
      if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar24._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,iVar7,4);
        lVar16 = *(long *)(auVar24._0_8_ + 0x18);
        if (lVar16 != 0) {
          uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,(iVar7 - iVar8) + iVar17,2);
          if ((uVar9 & 0xffff) != 0) {
            return uVar9;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
      uVar10 = func_0x00f78a24(0x3d6ce88);
      uVar11 = func_0x00f78a24(0x3d66338);
      lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar10,uVar13,uVar11,0);
      func_0x00f78a24(0x3d22a38);
      uVar9 = func_0x00f78aec();
      uVar10 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar9,lVar16);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar9,uVar13);
      puVar2 = auStack_d0;
      do {
        uVar18 = auVar22._8_8_;
        lVar14 = auVar22._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar9;
        *(long *)(puVar2 + -0x18) = lVar16;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
        *(undefined **)(puVar2 + -8) = puVar21;
        pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar10 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
          uVar9 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
          if (*(long *)(lVar14 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
            return uVar9;
          }
        }
        else if (lVar14 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
          if ((*(long *)(lVar14 + 0x18) != 0) &&
             (lVar16 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar16 != 0)) {
            uVar18 = (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar14 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
            uVar9 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
            goto code_r0x016cef70;
          }
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar22 = func_0x00f78af4();
        uVar10 = 0;
        puVar2 = puVar2 + -0x20;
        lVar16 = lVar14;
        uVar9 = uVar18;
      } while( true );
    }
    lVar16 = 0;
  }
  else {
    lVar16 = 3;
  }
  param_1 = auVar22._0_8_;
  param_4 = 0;
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(ulong *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar2;
  *(undefined **)(puVar2 + -8) = puVar21;
  if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar13 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,auVar22._8_8_);
  unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
  unaff_x30 = *(undefined **)(puVar2 + -8);
  unaff_x20 = *(long *)(puVar2 + -0x20);
  unaff_x19 = *(long *)(puVar2 + -0x18);
  unaff_x22 = *(ulong *)(puVar2 + -0x30);
  unaff_x21 = *(ulong *)(puVar2 + -0x28);
code_r0x016ce380:
  do {
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar19 = puVar2 + -0x10;
    uVar12 = (uint)lVar16;
    if ((int)uVar12 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = lVar16;
      if (uVar12 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar9;
        return uVar9;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar16 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6ceb8);
      uVar13 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar16,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar16,uVar10);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = lVar16;
    }
    uVar10 = func_0x00f78b24();
    puVar21 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar23 = func_0x00f78ac0(uVar10,0);
    lVar16 = auVar23._8_8_;
    auVar22._8_8_ = uVar13;
    auVar22._0_8_ = auVar23._0_8_;
    puVar2 = puVar2 + -0x20;
code_r0x016ce420:
    param_1 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar21;
    if ((auVar22._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar22._8_8_);
    unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
    unaff_x30 = *(undefined **)(puVar2 + -8);
    unaff_x20 = *(long *)(puVar2 + -0x20);
    unaff_x19 = *(long *)(puVar2 + -0x18);
    unaff_x22 = *(ulong *)(puVar2 + -0x30);
    unaff_x21 = *(ulong *)(puVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x167ef40 | Core.Services.ReadSaveRequest.AddSize
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__AddSize
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x19;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 **ppuVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
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
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_ReadSaveRequest__AddIndex;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppuVar2 = &puStack_20;
      ppuVar20 = &puStack_20;
      puStack_18 = &Core_Services_ReadSaveRequest__AddIndex;
      puVar22 = &Core_Services_ReadSaveRequest__AddConflict;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ != 0) {
        uVar14 = 1;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_28 = &Core_Services_ReadSaveRequest__AddConflict;
      puStack_30 = (undefined1 *)&puStack_20;
      lVar10 = func_0x00f78af4();
      puStack_38 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
      puStack_40 = (undefined1 *)&puStack_30;
      if ((bRam0000000003eb59ee & 1) == 0) {
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78a20(0x3d3f1d8);
        bRam0000000003eb59ee = 1;
      }
      if (lVar10 == 0) {
        lVar10 = func_0x00f78af4();
        if (lVar10 == 0) {
          lVar10 = func_0x00f78af4();
          return *(ulong *)(lVar10 + 0x28);
        }
        uVar15 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff80;
        puVar3 = &stack0xffffffffffffffa0;
        unaff_x20 = 4;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar10);
        if (*(long *)(lVar10 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar10 + 0x28) + 0x18) < 4) {
            uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
            *(undefined8 *)(lVar10 + 0x28) = uVar14;
          }
          *(undefined4 *)(lVar10 + 0x30) = 4;
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
          *(int *)(lVar10 + 0x34) = (int)uVar11;
          return uVar11;
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar24 = func_0x00f78af4();
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
        uVar13 = *(uint *)(lVar10 + 0x30) - 1;
        if (-2 < (int)uVar13) {
          uVar13 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar13;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar18 = (int)uVar11;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar16 = *(long *)(lVar10 + 0x28);
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
            sVar4 = (short)uVar11 - (short)iVar8;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)sVar4);
          lVar16 = *(long *)(lVar10 + 0x28);
          if (lVar16 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar13 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar7 = *(undefined4 *)(lVar10 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)((short)uVar11 - (short)uVar7));
        uVar13 = uVar13 * 2 + 6;
        unaff_x21 = (ulong)uVar13;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)uVar13);
        unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
        if (0 < (int)*(uint *)(lVar10 + 0x40)) {
          uVar19 = 0;
          do {
            lVar16 = *(long *)(lVar10 + 0x18);
            if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
               (lVar17 = *(long *)(lVar10 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - *(int *)(lVar17 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar13 = *(uint *)(lVar10 + 0x10);
            unaff_x22 = (ulong)uVar13;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
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
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
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
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar13 + iVar8,2);
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
            lVar16 = *(long *)(lVar10 + 0x38);
            if (lVar16 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
            *(ulong *)(lVar10 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
          }
          uVar13 = (uint)unaff_x22;
          *(uint *)(lVar10 + 0x40) = uVar13 + 1;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
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
        uVar14 = func_0x00f78b24();
        func_0x00f78ac0(uVar14,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar14 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar26 = func_0x00f78ac0(uVar14,uVar15);
      puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar21 = &ppuStack_90;
      lVar10 = *(long *)(auVar26._0_8_ + 0x18);
      iStack_b4 = iVar18;
      uStack_b0 = unaff_x22;
      uStack_a8 = unaff_x21;
      uStack_a0 = uVar11;
      uStack_98 = uVar14;
      ppuStack_90 = &puStack_40;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar26._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar8,4);
        lVar10 = *(long *)(auVar26._0_8_ + 0x18);
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
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar12 = func_0x00f78a24(0x3d66338);
      lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar12,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar10);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar25 = func_0x00f78ac0(uVar11,uVar14);
      puVar3 = auStack_c0;
      do {
        uVar19 = auVar25._8_8_;
        lVar16 = auVar25._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar11;
        *(long *)(puVar3 + -0x18) = lVar10;
        *(undefined1 ****)(puVar3 + -0x10) = pppuVar21;
        *(undefined **)(puVar3 + -8) = puVar22;
        pppuVar21 = (undefined1 ***)(puVar3 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar16 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
            return uVar11;
          }
        }
        else if (lVar16 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
          if ((*(long *)(lVar16 + 0x18) != 0) &&
             (lVar10 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar10 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar10 + 0x18) - *(int *)(lVar16 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar25 = func_0x00f78af4();
        uVar15 = 0;
        puVar3 = puVar3 + -0x20;
        lVar10 = lVar16;
        uVar11 = uVar19;
      } while( true );
    }
    uVar14 = 0;
  }
  else {
    uVar14 = 3;
    ppuVar2 = (undefined1 **)register0x00000008;
  }
  uVar11 = auVar25._0_8_;
  auVar24._8_8_ = uVar14;
  auVar24._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar11,auVar25._8_8_);
  puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
  puVar22 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  lVar10 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
code_r0x016ce380:
  do {
    unaff_x19 = auVar24._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = lVar10;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    ppuVar20 = (undefined1 **)((long)ppuVar2 + -0x10);
    uVar13 = auVar24._8_4_;
    if ((int)uVar13 < *(int *)(auVar24._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      unaff_x19 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(unaff_x19,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar25 = func_0x00f78ac0(uVar14,0);
    uVar14 = auVar25._8_8_;
    auVar23._8_8_ = uVar15;
    auVar23._0_8_ = auVar25._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
code_r0x016ce420:
    uVar11 = auVar23._0_8_;
    auVar24._8_8_ = uVar14;
    auVar24._0_8_ = uVar11;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,auVar23._8_8_);
    puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
    puVar22 = *(undefined **)((long)ppuVar2 + -8);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    lVar10 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x167ef64 | Core.Services.ReadSaveRequest.AddIndex
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__AddIndex
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
  puVar21 = &Core_Services_ReadSaveRequest__AddConflict;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar17 = 1;
    param_4 = 0;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce420;
  }
  lVar17 = func_0x00f78af4();
  if ((bRam0000000003eb59ee & 1) == 0) {
    func_0x00f78a20(0x3d3f1d8);
    bRam0000000003eb59ee = 1;
  }
  if (lVar17 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar17 = func_0x00f78af4();
      return *(ulong *)(lVar17 + 0x28);
    }
    uVar14 = 0;
    puVar3 = &stack0xffffffffffffff90;
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
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 4;
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
// RVA: 0x167ef88 | Core.Services.ReadSaveRequest.AddConflict
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__AddConflict
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
  puStack_18 = &Core_Services_ReadSaveRequest__EndReadSaveRequest;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb59ee & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d3f1d8);
    bRam0000000003eb59ee = 1;
  }
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4();
    if (lVar9 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 0x28);
    }
    uVar14 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    puVar19 = &stack0xffffffffffffffc0;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
    if (*(long *)(lVar9 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 4) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(lVar9 + 0x28) = uVar14;
      }
      *(undefined4 *)(lVar9 + 0x30) = 4;
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
// RVA: 0x167efac | Core.Services.ReadSaveRequest.EndReadSaveRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_ReadSaveRequest__EndReadSaveRequest
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
  
  if ((bRam0000000003eb59ee & 1) == 0) {
    func_0x00f78a20(0x3d3f1d8);
    bRam0000000003eb59ee = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 0x28);
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
// RVA: 0x167eff8 | Core.Services.ReadSaveRequest.StartReadSaveRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_ReadSaveRequest__StartReadSaveRequest
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
    return *(long *)(lVar7 + 0x28);
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



