// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.SessionInfo

// ============================================================
// RVA: 0x1661d04 | Core.Networking.SessionInfo.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_SessionInfo__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1661d0c | Core.Networking.SessionInfo.GetRootAsSessionInfo
// ============================================================

undefined1  [16] Core_Networking_SessionInfo__GetRootAsSessionInfo(long param_1)

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
// RVA: 0x1661d18 | Core.Networking.SessionInfo.GetRootAsSessionInfo
// ============================================================

undefined1  [16]
Core_Networking_SessionInfo__GetRootAsSessionInfo(long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x1661d5c | Core.Networking.SessionInfo.__assign
// ============================================================

undefined1  [16]
Core_Networking_SessionInfo____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1661d70 | Core.Networking.SessionInfo.__init
// ============================================================

void Core_Networking_SessionInfo____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1661d7c | Core.Networking.SessionInfo.get_GameType
// ============================================================

ulong * Core_Networking_SessionInfo__get_GameType(int *param_1)

{
  uint uVar1;
  short sVar2;
  ulong *puVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong *extraout_x8;
  undefined1 auVar11 [16];
  
  puVar3 = (ulong *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)puVar3 == 0) {
    return puVar3;
  }
  lVar10 = *(long *)(param_1 + 2);
  if (lVar10 == 0) {
    piVar4 = (int *)func_0x00f78af4();
    if ((bRam0000000003eb5866 & 1) == 0) {
      func_0x00f78a20(0x3d3e650);
      bRam0000000003eb5866 = 1;
    }
    puVar3 = (ulong *)/*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar4,6,0);
    if ((int)puVar3 != 0) {
      uVar5 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(piVar4,*piVar4 + (int)puVar3,0);
      uVar8 = *(ulong *)(piVar4 + 2);
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      *extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 2) = 1;
      *extraout_x8 = uVar5 & 0xffffffff;
      extraout_x8[1] = uVar8;
      return extraout_x8;
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    return puVar3;
  }
  uVar1 = *param_1 + (int)puVar3;
  uVar9 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar10,uVar1,1);
  if ((*(long *)(lVar10 + 0x10) == 0) ||
     (lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x10), lVar10 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar10 + 0x18)) {
    return (ulong *)(ulong)*(byte *)(lVar10 + (int)uVar1 + 0x20);
  }
  uVar6 = func_0x00f78b24();
  auVar11 = func_0x00f78ac0(uVar6,0);
  plVar7 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar10 = *(long *)(auVar11._0_8_ + 0x10);
  if ((lVar10 != 0) && (plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (ulong *)(**(code **)(*plVar7 + 0x348))
                                (plVar7,*(undefined8 *)(lVar10 + 0x10),auVar11._8_8_,uVar9,
                                 *(undefined8 *)(*plVar7 + 0x350));
    return puVar3;
  }
  auVar11 = func_0x00f78af4();
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar11._0_8_,auVar11._8_8_,2);
  return (ulong *)(ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x1661dd0 | Core.Networking.SessionInfo.get_ClientInfo
// ============================================================

void Core_Networking_SessionInfo__get_ClientInfo(ulong *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb5866 & 1) == 0) {
    func_0x00f78a20(0x3d3e650);
    bRam0000000003eb5866 = 1;
  }
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,6,0);
  if (iVar1 != 0) {
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,*param_2 + iVar1,0);
    uVar3 = *(ulong *)(param_2 + 2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = uVar2 & 0xffffffff;
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1661e78 | Core.Networking.SessionInfo.get_HostInfo
// ============================================================

void Core_Networking_SessionInfo__get_HostInfo(ulong *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb5867 & 1) == 0) {
    func_0x00f78a20(0x3d3e8d8);
    bRam0000000003eb5867 = 1;
  }
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,8,0);
  if (iVar1 != 0) {
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,*param_2 + iVar1,0);
    uVar3 = *(ulong *)(param_2 + 2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = uVar2 & 0xffffffff;
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1661f20 | Core.Networking.SessionInfo.CreateSessionInfo
// ============================================================

/* WARNING: Possible PIC construction at 0x01661f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661f50) */
/* WARNING: Removing unreachable block (ram,0x01661f68) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionInfo__CreateSessionInfo
                (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

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
  ulong auStack_110 [4];
  undefined1 auStack_f0 [12];
  int iStack_e4;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = (undefined1 **)&stack0xffffffffffffffd0;
  puVar2 = &stack0xffffffffffffffd0;
  puVar4 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar22 = (undefined *)0x1661f50;
    lVar13 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    uVar11 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_2;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar22;
    ppuVar21 = (undefined1 **)(puVar2 + -0x10);
    unaff_x20 = 3;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 3) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x30) = 3;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    puStack_58 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    ppuVar3 = (undefined1 **)(puVar2 + -0x30);
    unaff_x19 = param_1;
    goto code_r0x016ce380;
  }
  puVar22 = &Core_Networking_SessionInfo__AddHostInfo;
  auVar24 = func_0x00f78af4();
  if (auVar24._0_8_ == 0) {
    ppuVar3 = &puStack_40;
    ppuVar21 = &puStack_40;
    puStack_38 = &Core_Networking_SessionInfo__AddHostInfo;
    puVar22 = &Core_Networking_SessionInfo__AddClientInfo;
    puStack_40 = puVar4;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar21 = &puStack_50;
      puStack_48 = &Core_Networking_SessionInfo__AddClientInfo;
      puStack_50 = (undefined1 *)&puStack_40;
      auVar24 = func_0x00f78af4();
      uVar19 = auVar24._0_8_;
      if (uVar19 != 0) {
        param_4 = 0;
        puStack_58 = &Core_Networking_SessionInfo__AddGameType;
        if ((auVar24._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
          return uVar19;
        }
        uVar11 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar19,auVar24._8_8_);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar19;
        ppuVar3 = &puStack_50;
        goto code_r0x016ce380;
      }
      lVar13 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff80;
      puVar4 = &stack0xffffffffffffff90;
      param_2 = 0x3eb5000;
      if ((bRam0000000003eb5868 & 1) == 0) {
        func_0x00f78a20(0x3d3f240);
        bRam0000000003eb5868 = 1;
      }
      if (lVar13 == 0) {
        puVar22 = &Core_Networking_SessionInfo__StartSessionInfo;
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
      puStack_b8 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar3 = &puStack_c0;
      lVar13 = *(long *)(auVar25._0_8_ + 0x18);
      iStack_e4 = iVar18;
      uStack_e0 = unaff_x22;
      uStack_d8 = unaff_x21;
      uStack_d0 = uVar19;
      uStack_c8 = uVar11;
      puStack_c0 = &stack0xffffffffffffff90;
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
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e4,0);
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
      puVar4 = auStack_f0;
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
    uVar12 = 1;
  }
  else {
    uVar12 = 2;
    ppuVar21 = (undefined1 **)puVar4;
  }
  uVar11 = auVar24._8_8_;
  uVar19 = auVar24._0_8_;
  auVar23._8_8_ = uVar12;
  auVar23._0_8_ = uVar19;
  param_4 = 0;
  *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
  *(undefined **)((long)ppuVar3 + -8) = puVar22;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
    return uVar19;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar19,uVar11,uVar11,0,0);
  ppuVar21 = *(undefined1 ***)((long)ppuVar3 + -0x10);
  puStack_58 = *(undefined **)((long)ppuVar3 + -8);
  unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
code_r0x016ce380:
  do {
    uVar12 = auVar23._8_8_;
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)ppuVar3 + -8) = puStack_58;
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
    *(ulong *)((long)ppuVar3 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar3 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar3 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar3 + -0x38) = uVar12;
    *(undefined1 **)((long)ppuVar3 + -0x30) = (undefined1 *)((long)ppuVar3 + -0x10);
    *(undefined **)((long)ppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar14 == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,uVar14);
    ppuVar21 = *(undefined1 ***)((long)ppuVar3 + -0x30);
    puStack_58 = *(undefined **)((long)ppuVar3 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar3 + -0x40);
    unaff_x19 = *(long *)((long)ppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar3 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar3 + -0x48);
    ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1661f8c | Core.Networking.SessionInfo.AddHostInfo
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionInfo__AddHostInfo
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
  long unaff_x19;
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
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  if (param_1 == 0) {
    puVar3 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_SessionInfo__AddClientInfo;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      ppuVar20 = &puStack_20;
      puStack_18 = &Core_Networking_SessionInfo__AddClientInfo;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar22 = func_0x00f78af4();
      uVar11 = auVar22._0_8_;
      if (uVar11 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Networking_SessionInfo__AddGameType;
        if ((auVar22._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
          return uVar11;
        }
        uVar12 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar11,auVar22._8_8_);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar11;
        ppuVar2 = &puStack_20;
        goto code_r0x016ce380;
      }
      lVar10 = func_0x00f78af4();
      if ((bRam0000000003eb5868 & 1) == 0) {
        func_0x00f78a20(0x3d3f240);
        bRam0000000003eb5868 = 1;
      }
      if (lVar10 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar10 = func_0x00f78af4();
          return *(ulong *)(lVar10 + 8);
        }
        uVar12 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff80;
        ppuVar20 = (undefined1 **)&stack0xffffffffffffffa0;
        unaff_x20 = 3;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 3) {
            uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar12;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 3;
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar11;
          return uVar11;
        }
        puStack_28 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar23 = func_0x00f78af4();
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
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar12,uVar14);
      puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar20 = &puStack_90;
      lVar10 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_b4 = iVar18;
      uStack_b0 = unaff_x22;
      uStack_a8 = unaff_x21;
      uStack_a0 = uVar11;
      uStack_98 = uVar12;
      puStack_90 = &stack0xffffffffffffffc0;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar24._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar8,4);
        lVar10 = *(long *)(auVar24._0_8_ + 0x18);
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
      uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
      uVar14 = func_0x00f78a24(0x3d6ce88);
      uVar15 = func_0x00f78a24(0x3d66338);
      lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar12,uVar15,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar14 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar10);
      uVar12 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar11,uVar12);
      puVar3 = auStack_c0;
      do {
        uVar19 = auVar22._8_8_;
        lVar16 = auVar22._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar11;
        *(long *)(puVar3 + -0x18) = lVar10;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar20;
        *(undefined **)(puVar3 + -8) = puVar21;
        ppuVar20 = (undefined1 **)(puVar3 + -0x10);
        if ((int)uVar14 == 0) {
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
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar22 = func_0x00f78af4();
        uVar14 = 0;
        puVar3 = puVar3 + -0x20;
        lVar10 = lVar16;
        uVar11 = uVar19;
      } while( true );
    }
    uVar14 = 1;
  }
  else {
    uVar14 = 2;
    puVar3 = (undefined1 *)register0x00000008;
  }
  uVar12 = auVar22._8_8_;
  uVar11 = auVar22._0_8_;
  auVar23._8_8_ = uVar14;
  auVar23._0_8_ = uVar11;
  param_4 = 0;
  *(long *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  if ((auVar22._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar12,uVar12,0,0);
  ppuVar20 = *(undefined1 ***)(puVar3 + -0x10);
  puStack_28 = *(undefined **)(puVar3 + -8);
  unaff_x20 = *(long *)(puVar3 + -0x20);
  unaff_x19 = *(long *)(puVar3 + -0x18);
  ppuVar2 = (undefined1 **)puVar3;
code_r0x016ce380:
  do {
    uVar14 = auVar23._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puStack_28;
    uVar13 = auVar23._8_4_;
    if ((int)uVar13 < *(int *)(auVar23._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar23._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar15 = uVar12;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar14 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar14,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar12,0);
    uVar11 = auVar23._0_8_;
    *(ulong *)((long)ppuVar2 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x38) = uVar14;
    *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x10);
    *(undefined **)((long)ppuVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar15 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar12 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar15);
    ppuVar20 = *(undefined1 ***)((long)ppuVar2 + -0x30);
    puStack_28 = *(undefined **)((long)ppuVar2 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x40);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x48);
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1661fb0 | Core.Networking.SessionInfo.AddClientInfo
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionInfo__AddClientInfo
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
    uVar16 = 1;
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
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar21._8_8_);
    uVar16 = 0;
    unaff_x30 = &Core_Networking_SessionInfo__AddGameType;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5868 & 1) == 0) {
    func_0x00f78a20(0x3d3f240);
    bRam0000000003eb5868 = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    param_2 = 0;
    puVar2 = &stack0xffffffffffffff90;
    unaff_x29 = &stack0xffffffffffffffb0;
    unaff_x20 = 3;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 3) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 3;
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
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar11,0);
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
// RVA: 0x1661fd4 | Core.Networking.SessionInfo.AddGameType
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionInfo__AddGameType
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
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5868 & 1) == 0) {
    func_0x00f78a20(0x3d3f240);
    bRam0000000003eb5868 = 1;
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
    unaff_x20 = 3;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 3) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 3;
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
// RVA: 0x1661ff8 | Core.Networking.SessionInfo.EndSessionInfo
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionInfo__EndSessionInfo
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
  
  if ((bRam0000000003eb5868 & 1) == 0) {
    func_0x00f78a20(0x3d3f240);
    bRam0000000003eb5868 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 3;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 3) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 3;
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
// RVA: 0x1662044 | Core.Networking.SessionInfo.StartSessionInfo
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Networking_SessionInfo__StartSessionInfo
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
  lVar7 = 3;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 3) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 3;
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



