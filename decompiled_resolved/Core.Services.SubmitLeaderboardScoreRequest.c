// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.SubmitLeaderboardScoreRequest

// ============================================================
// RVA: 0x16865f0 | Core.Services.SubmitLeaderboardScoreRequest.get_ByteBuffer
// ============================================================

undefined8 Core_Services_SubmitLeaderboardScoreRequest__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16865f8 | Core.Services.SubmitLeaderboardScoreRequest.GetRootAsSubmitLeaderboardScoreRequest
// ============================================================

undefined1  [16]
Core_Services_SubmitLeaderboardScoreRequest__GetRootAsSubmitLeaderboardScoreRequest(long param_1)

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
// RVA: 0x1686604 | Core.Services.SubmitLeaderboardScoreRequest.GetRootAsSubmitLeaderboardScoreRequest
// ============================================================

undefined1  [16]
Core_Services_SubmitLeaderboardScoreRequest__GetRootAsSubmitLeaderboardScoreRequest
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
// RVA: 0x1686648 | Core.Services.SubmitLeaderboardScoreRequest.__assign
// ============================================================

undefined1  [16]
Core_Services_SubmitLeaderboardScoreRequest____assign
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
// RVA: 0x168665c | Core.Services.SubmitLeaderboardScoreRequest.__init
// ============================================================

void Core_Services_SubmitLeaderboardScoreRequest____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1686668 | Core.Services.SubmitLeaderboardScoreRequest.get_Id
// ============================================================

/* WARNING: Possible PIC construction at 0x016cf3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cf3d0) */
/* WARNING: Removing unreachable block (ram,0x016cf444) */
/* WARNING: Removing unreachable block (ram,0x016cf464) */
/* WARNING: Removing unreachable block (ram,0x016cf474) */
/* WARNING: Removing unreachable block (ram,0x016cf480) */
/* WARNING: Removing unreachable block (ram,0x016cf4ec) */
/* WARNING: Removing unreachable block (ram,0x016cf4f0) */
/* WARNING: Removing unreachable block (ram,0x016cf5a0) */
/* WARNING: Removing unreachable block (ram,0x016cf5b4) */
/* WARNING: Removing unreachable block (ram,0x016cf6ac) */
/* WARNING: Removing unreachable block (ram,0x016cf6e0) */
/* WARNING: Removing unreachable block (ram,0x016cf6f4) */
/* WARNING: Removing unreachable block (ram,0x016cf6f8) */
/* WARNING: Removing unreachable block (ram,0x016cf720) */
/* WARNING: Removing unreachable block (ram,0x016cf73c) */
/* WARNING: Removing unreachable block (ram,0x016cf744) */
/* WARNING: Removing unreachable block (ram,0x016cf748) */
/* WARNING: Removing unreachable block (ram,0x016cf760) */
/* WARNING: Removing unreachable block (ram,0x016cf770) */
/* WARNING: Removing unreachable block (ram,0x016cf7bc) */
/* WARNING: Removing unreachable block (ram,0x016cf7c8) */
/* WARNING: Removing unreachable block (ram,0x016cf788) */
/* WARNING: Removing unreachable block (ram,0x016cf794) */
/* WARNING: Removing unreachable block (ram,0x016cf7a0) */
/* WARNING: Removing unreachable block (ram,0x016cf7a4) */
/* WARNING: Removing unreachable block (ram,0x016cf5b8) */
/* WARNING: Removing unreachable block (ram,0x016cf624) */
/* WARNING: Removing unreachable block (ram,0x016cf62c) */
/* WARNING: Removing unreachable block (ram,0x016cf630) */
/* WARNING: Removing unreachable block (ram,0x016cf648) */
/* WARNING: Removing unreachable block (ram,0x016cf65c) */
/* WARNING: Removing unreachable block (ram,0x016cf680) */
/* WARNING: Removing unreachable block (ram,0x016cf690) */
/* WARNING: Removing unreachable block (ram,0x016cf694) */
/* WARNING: Removing unreachable block (ram,0x016cf494) */
/* WARNING: Removing unreachable block (ram,0x016cf4b4) */
/* WARNING: Removing unreachable block (ram,0x016cf4cc) */
/* WARNING: Removing unreachable block (ram,0x016cf3ec) */
/* WARNING: Removing unreachable block (ram,0x02616890) */

ulong Core_Services_SubmitLeaderboardScoreRequest__get_Id(int *param_1)

{
  uint uVar1;
  int **ppiVar2;
  undefined1 *puVar3;
  short sVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  int *extraout_x8;
  int *piVar13;
  int *unaff_x20;
  int *piVar14;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  int *piStack_40;
  int *piStack_38;
  undefined1 *puVar4;
  
  iVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if (iVar6 == 0) {
    return 0;
  }
  uVar1 = *param_1 + iVar6;
  if (*(long *)(param_1 + 2) != 0) {
    iVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),(int *)(ulong)uVar1,4);
    unaff_x20 = (int *)(ulong)uVar1;
    if (*(long *)(param_1 + 2) != 0) {
      unaff_x20 = (int *)(ulong)(iVar6 + uVar1);
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),unaff_x20,4);
      lVar11 = *(long *)(param_1 + 2);
      if (lVar11 != 0) {
        plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((lVar11 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(*plVar8 + 0x348))
                            (plVar8,*(undefined8 *)(lVar11 + 0x10),iVar6 + uVar1 + 4,uVar10,
                             *(undefined8 *)(*plVar8 + 0x350));
          return uVar9;
        }
        auVar16 = func_0x00f78af4();
        piStack_38 = (int *)&FlatBuffers_ByteBuffer__GetShort;
        piStack_40 = (int *)&stack0xfffffffffffffff0;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar16._0_8_,auVar16._8_8_,2);
        return (ulong)(uint)(int)sVar5;
      }
    }
  }
  auVar18 = func_0x00f78af4();
  piVar13 = auVar18._0_8_;
  piVar14 = unaff_x20;
  piStack_40 = unaff_x20;
  piStack_38 = param_1;
  if (*(long *)(piVar13 + 2) != 0) {
    uVar1 = *piVar13 + auVar18._8_4_;
    piVar14 = (int *)(ulong)uVar1;
    iVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar13 + 2),piVar14,4);
    if (*(long *)(piVar13 + 2) != 0) {
      uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar13 + 2),uVar1 + iVar6,4);
      return uVar9;
    }
  }
  puVar15 = &FlatBuffers_Table____vector;
  auVar16 = func_0x00f78af4();
  ppiVar2 = &piStack_40;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar4 = (undefined1 *)ppiVar2;
    *(int **)(puVar4 + -0x20) = piVar14;
    *(int **)(puVar4 + -0x18) = piVar13;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x30;
    *(undefined **)(puVar4 + -8) = puVar15;
    lVar11 = *(long *)(auVar16._0_8_ + 2);
    if (lVar11 != 0) {
      iVar6 = *auVar16._0_8_ + auVar16._8_4_;
      iVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar6,4);
      return (ulong)(iVar6 + iVar7 + 4);
    }
    auVar17 = func_0x00f78af4();
    piVar12 = auVar17._0_8_;
    *(ulong *)(puVar4 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x21;
    *(int **)(puVar4 + -0x40) = piVar14;
    *(int **)(puVar4 + -0x38) = piVar13;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
    if ((bRam0000000003eb5cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3e500);
      bRam0000000003eb5cd9 = 1;
    }
    unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,auVar17._8_8_);
    auVar16._8_8_ = unaff_x22;
    auVar16._0_8_ = piVar12;
    if ((int)unaff_x22 == 0) break;
    puVar15 = &UNK_016cf3d0;
    ppiVar2 = (int **)(puVar4 + -0x50);
    piVar13 = extraout_x8;
    piVar14 = piVar12;
    unaff_x21 = auVar17._8_8_;
    puVar3 = puVar4;
  }
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  return unaff_x22;
}



// ============================================================
// RVA: 0x16866b4 | Core.Services.SubmitLeaderboardScoreRequest.GetIdBytes
// ============================================================

void Core_Services_SubmitLeaderboardScoreRequest__GetIdBytes(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*FlatBuffers.Table$$__vector_as_arraysegment*/ func_0x016cf374(&uStack_38,param_2,4,0);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



// ============================================================
// RVA: 0x16866f8 | Core.Services.SubmitLeaderboardScoreRequest.GetIdArray
// ============================================================

long Core_Services_SubmitLeaderboardScoreRequest__GetIdArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb5a28 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb5a28 = 1;
  }
  lVar3 = lRam0000000003d5ded0;
  uVar6 = 4;
  uVar1 = 0x3d201a0;
  if ((bRam0000000003eb6695 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb6695 = 1;
  }
  if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
    func_0x00f78a24(0x3d238d8);
    lVar3 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d6d410);
    /*System.NotSupportedException$$.ctor*/ func_0x029503bc(lVar3,uVar2,0);
    uVar2 = func_0x00f78a24(0x3d5ded0);
    func_0x00f78ac0(lVar3,uVar2);
  }
  else {
    uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
    if ((int)uVar1 == 0) {
      return 0;
    }
    uVar6 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_1,uVar1,0);
    uVar2 = /*FlatBuffers.Table$$__vector_len*/ func_0x016cf2dc(param_1,uVar1,0);
    if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018e4728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))(*(long *)(param_1 + 8),uVar6,uVar2);
      return lVar3;
    }
  }
  auVar9 = func_0x00f78af4();
  uStack_78 = auVar9._0_8_;
  puStack_48 = &System_Threading_Tasks_Task__FromCancellation_bool_;
  uStack_70 = uVar1;
  uStack_68 = uVar6;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  puStack_50 = &stack0xfffffffffffffff0;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_78,0);
  uVar2 = uStack_78;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar9._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar2);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar2 = func_0x00f78aec();
  uVar5 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar2,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d5df30);
  auVar9 = func_0x00f78ac0(uVar2,uVar5);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  puStack_88 = &System_Threading_Tasks_Task__FromCancellation_int_;
  uStack_b0 = uVar1;
  uStack_a8 = uVar6;
  lStack_a0 = param_1;
  uStack_98 = uVar2;
  ppuStack_90 = &puStack_50;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    lVar3 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar3,uVar2,0);
    uVar2 = func_0x00f78a24(0x3d5df38);
    func_0x00f78ac0(lVar3,uVar2);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    uVar6 = 0;
    param_1 = lVar8;
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar9 = func_0x00f78af4();
  uStack_e8 = auVar9._0_8_;
  puStack_b8 = &System_Threading_Tasks_Task__FromCancellation_int_;
  uStack_e0 = uVar1;
  uStack_d8 = uVar6;
  lStack_d0 = param_1;
  lStack_c8 = lVar3;
  ppuStack_c0 = &ppuStack_90;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_e8,0);
  uVar2 = uStack_e8;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar9._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar2);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar2 = func_0x00f78aec();
  uVar5 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar2,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d5df40);
  auVar9 = func_0x00f78ac0(uVar2,uVar5);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  puStack_f8 = &System_Threading_Tasks_Task__FromCancellation_object_;
  uStack_120 = uVar1;
  uStack_118 = uVar6;
  lStack_110 = param_1;
  uStack_108 = uVar2;
  ppuStack_100 = &ppuStack_c0;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar2 = func_0x00f78aec();
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = uVar2;
    uVar5 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar2,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5df48);
    func_0x00f78ac0(uVar2,uVar5);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    uVar6 = 0;
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar10 = func_0x00f78af4();
  uStack_158 = auVar10._0_8_;
  puStack_128 = &System_Threading_Tasks_Task__FromCancellation_object_;
  uStack_150 = uVar1;
  uStack_148 = uVar6;
  uStack_140 = auVar9._8_8_;
  uStack_138 = auVar9._0_8_;
  ppuStack_130 = &ppuStack_100;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_158,0);
  uVar1 = uStack_158;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar10._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar10._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar1);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar1 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar1,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d5df50);
  auVar9 = func_0x00f78ac0(uVar1,uVar6);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df58);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df60);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df68);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df70);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = **(long **)(auVar9._8_8_ + 0x30);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  lVar3 = func_0x00f78aec(lVar3);
  (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,auVar9._0_8_);
  return lVar3;
}



// ============================================================
// RVA: 0x1686750 | Core.Services.SubmitLeaderboardScoreRequest.get_Score
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168682c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01686844: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01686848) */
/* WARNING: Removing unreachable block (ram,0x01686830) */
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

ulong Core_Services_SubmitLeaderboardScoreRequest__get_Score
                (dword *param_1,undefined8 param_2,undefined8 param_3,dword *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  int iVar6;
  dword dVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  dword *pdVar14;
  dword *pdVar15;
  dword *pdVar16;
  long lVar17;
  long lVar18;
  dword *unaff_x19;
  dword *unaff_x20;
  ulong uVar19;
  dword *unaff_x21;
  dword *unaff_x22;
  dword *unaff_x23;
  ulong unaff_x24;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar20;
  undefined1 **ppuVar21;
  undefined8 ****ppppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_150 [4];
  undefined1 auStack_130 [12];
  undefined4 uStack_124;
  dword *pdStack_120;
  dword *pdStack_118;
  dword *pdStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  iVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if (iVar6 == 0) {
    return 0;
  }
  lVar17 = *(long *)(param_1 + 2);
  if (lVar17 == 0) {
    piVar8 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Services_SubmitLeaderboardScoreRequest__get_OccurrenceStartDate;
    pdVar15 = (dword *)0x0;
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    iVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar8,8);
    if (iVar6 == 0) {
      return 0;
    }
    lVar17 = *(long *)(piVar8 + 2);
    if (lVar17 != 0) {
      uVar13 = *piVar8 + iVar6;
      puVar5 = &stack0xffffffffffffffe0;
      unaff_x29 = (undefined8 ****)pppuStack_30;
      unaff_x30 = puStack_28;
      goto FlatBuffers_ByteBuffer__GetLong;
    }
    auVar24 = func_0x00f78af4();
    lVar17 = auVar24._0_8_;
    ppppuVar4 = (undefined8 ****)&stack0xffffffffffffff90;
    puVar3 = &stack0xffffffffffffff90;
    puStack_48 = &Core_Services_SubmitLeaderboardScoreRequest__CreateSubmitLeaderboardScoreRequest;
    ppppuVar20 = &pppuStack_50;
    pppuStack_50 = &pppuStack_30;
    if (lVar17 != 0) {
      puVar23 = &UNK_01686830;
      unaff_x21 = pdVar15;
      unaff_x22 = param_4;
code_r0x016ce2a4:
      piVar8 = auVar24._0_8_;
      uVar9 = 0;
      *(dword **)(puVar3 + -0x30) = unaff_x22;
      *(dword **)(puVar3 + -0x28) = unaff_x21;
      *(long *)(puVar3 + -0x20) = auVar24._8_8_;
      *(long *)(puVar3 + -0x18) = lVar17;
      *(undefined8 *****)(puVar3 + -0x10) = ppppuVar20;
      *(undefined **)(puVar3 + -8) = puVar23;
      ppuVar21 = (undefined1 **)(puVar3 + -0x10);
      unaff_x20 = (dword *)((long)&MACH_HEADER.magic + 3);
      unaff_x21 = (dword *)0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar8);
      if (*(long *)(piVar8 + 10) != 0) {
        if (*(int *)(*(long *)(piVar8 + 10) + 0x18) < 3) {
          uVar9 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
          *(undefined8 *)(piVar8 + 10) = uVar9;
        }
        piVar8[0xc] = 3;
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar8);
        piVar8[0xd] = (int)uVar12;
        return uVar12;
      }
      puStack_98 = &FlatBuffers_FlatBufferBuilder__Slot;
      auVar26 = func_0x00f78af4();
      ppppuVar4 = (undefined8 ****)(puVar3 + -0x30);
      goto code_r0x016ce380;
    }
    puVar23 = &Core_Services_SubmitLeaderboardScoreRequest__AddOccurrenceStartDate;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ != 0) {
      uVar9 = 2;
      ppppuVar22 = ppppuVar20;
FlatBuffers_FlatBufferBuilder__AddLong:
      uVar12 = auVar24._0_8_;
      auVar26._8_8_ = uVar9;
      auVar26._0_8_ = uVar12;
      param_4 = (dword *)0x0;
      *(dword **)((long)ppppuVar4 + -0x30) = unaff_x22;
      *(dword **)((long)ppppuVar4 + -0x28) = unaff_x21;
      *(dword **)((long)ppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar4 + -0x18) = piVar8;
      *(undefined8 *****)((long)ppppuVar4 + -0x10) = ppppuVar22;
      *(undefined **)((long)ppppuVar4 + -8) = puVar23;
      if ((auVar24._8_8_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar9 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,8,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar12,auVar24._8_8_);
      ppuVar21 = *(undefined1 ***)((long)ppppuVar4 + -0x10);
      puStack_98 = *(undefined **)((long)ppppuVar4 + -8);
      unaff_x20 = *(dword **)((long)ppppuVar4 + -0x20);
      piVar8 = *(int **)((long)ppppuVar4 + -0x18);
      unaff_x22 = *(dword **)((long)ppppuVar4 + -0x30);
      unaff_x21 = *(dword **)((long)ppppuVar4 + -0x28);
code_r0x016ce380:
      do {
        uVar10 = auVar26._8_8_;
        *(dword **)((long)ppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)ppppuVar4 + -0x18) = piVar8;
        *(undefined1 ***)((long)ppppuVar4 + -0x10) = ppuVar21;
        *(undefined **)((long)ppppuVar4 + -8) = puStack_98;
        uVar13 = auVar26._8_4_;
        if ((int)uVar13 < *(int *)(auVar26._0_8_ + 0x30)) {
          unaff_x20 = *(dword **)(auVar26._0_8_ + 0x28);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          uVar11 = uVar9;
          if (unaff_x20 == (dword *)0x0) goto code_r0x016ce410;
          if (uVar13 < unaff_x20[6]) {
            unaff_x20[(long)(int)uVar13 + 8] = (dword)uVar12;
            return uVar12;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          uVar10 = func_0x00f78aec();
          uVar9 = func_0x00f78a24(0x3d6ceb8);
          uVar11 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar10,uVar9);
          uVar9 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar10,uVar9);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar9 = func_0x00f78b24();
        auVar26 = func_0x00f78ac0(uVar9,0);
        uVar12 = auVar26._0_8_;
        *(dword **)((long)ppppuVar4 + -0x50) = unaff_x22;
        *(dword **)((long)ppppuVar4 + -0x48) = unaff_x21;
        *(dword **)((long)ppppuVar4 + -0x40) = unaff_x20;
        *(undefined8 *)((long)ppppuVar4 + -0x38) = uVar10;
        *(undefined1 **)((long)ppppuVar4 + -0x30) = (undefined1 *)((long)ppppuVar4 + -0x10);
        *(undefined **)((long)ppppuVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
        if (((int)uVar11 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
          return uVar12;
        }
        uVar9 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar11);
        ppuVar21 = *(undefined1 ***)((long)ppppuVar4 + -0x30);
        puStack_98 = *(undefined **)((long)ppppuVar4 + -0x28);
        unaff_x20 = *(dword **)((long)ppppuVar4 + -0x40);
        piVar8 = *(int **)((long)ppppuVar4 + -0x38);
        unaff_x22 = *(dword **)((long)ppppuVar4 + -0x50);
        unaff_x21 = *(dword **)((long)ppppuVar4 + -0x48);
        ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + -0x20);
      } while( true );
    }
    ppppuVar4 = &pppuStack_80;
    ppppuVar22 = &pppuStack_80;
    puStack_78 = &Core_Services_SubmitLeaderboardScoreRequest__AddOccurrenceStartDate;
    puVar23 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
    pppuStack_80 = ppppuVar20;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ != 0) {
      uVar9 = 1;
      goto FlatBuffers_FlatBufferBuilder__AddLong;
    }
    ppuVar21 = &puStack_90;
    puStack_88 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
    puStack_90 = (undefined1 *)&pppuStack_80;
    auVar24 = func_0x00f78af4();
    uVar9 = auVar24._8_8_;
    uVar12 = auVar24._0_8_;
    if (uVar12 != 0) {
      param_4 = (dword *)0x0;
      puStack_98 = &Core_Services_SubmitLeaderboardScoreRequest__AddId;
      if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar9,uVar9,0,0);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar12;
      ppppuVar4 = (undefined8 ****)&puStack_90;
      goto code_r0x016ce380;
    }
    param_1 = (dword *)func_0x00f78af4();
    puVar3 = &stack0xffffffffffffff40;
    ppppuVar20 = (undefined8 ****)&stack0xffffffffffffff50;
    if ((bRam0000000003eb5a29 & 1) == 0) {
      func_0x00f78a20(0x3d3f258);
      bRam0000000003eb5a29 = 1;
    }
    if (param_1 == (dword *)0x0) {
      puVar23 = &Core_Services_SubmitLeaderboardScoreRequest__StartSubmitLeaderboardScoreRequest;
      lVar17 = func_0x00f78af4();
      auVar24._8_8_ = 0x3eb5000;
      auVar24._0_8_ = lVar17;
      if (lVar17 == 0) {
        lVar17 = func_0x00f78af4();
        return *(ulong *)(lVar17 + 8);
      }
      lVar17 = 0;
      goto code_r0x016ce2a4;
    }
    puVar2 = &stack0xffffffffffffff10;
    puVar5 = &stack0xffffffffffffff10;
    ppppuVar20 = (undefined8 ****)&stack0xffffffffffffff50;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    pdVar15 = (dword *)0x3eb5000;
    if ((int)param_1[0xc] < 0) {
code_r0x016ced94:
      func_0x00f78a24(0x3d22a38);
      uVar9 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6cea8);
      param_1 = (dword *)0x0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar9,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a30);
      auVar27 = func_0x00f78ac0(uVar9,uVar10);
      unaff_x20 = auVar27._0_8_;
      puVar5 = auStack_130;
      puStack_f8 = &FlatBuffers_FlatBufferBuilder__Required;
      unaff_x29 = &pppuStack_100;
      uStack_124 = SUB84(param_1,0);
      lVar17 = *(long *)(unaff_x20 + 6);
      pdStack_120 = unaff_x22;
      pdStack_118 = unaff_x21;
      pdStack_110 = pdVar15;
      uStack_108 = uVar9;
      pppuStack_100 = ppppuVar20;
      if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) {
        func_0x00f78af4();
        uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_124,0);
        uVar10 = func_0x00f78a24(0x3d6ce88);
        uVar11 = func_0x00f78a24(0x3d66338);
        lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar10,uVar9,uVar11,0);
        func_0x00f78a24(0x3d22a38);
        uVar12 = func_0x00f78aec();
        uVar10 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar17);
        uVar9 = func_0x00f78a24(0x3d56a50);
        puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar24 = func_0x00f78ac0(uVar12,uVar9);
        puVar5 = auStack_130;
        do {
          uVar19 = auVar24._8_8_;
          lVar18 = auVar24._0_8_;
          *(ulong *)(puVar5 + -0x20) = uVar12;
          *(long *)(puVar5 + -0x18) = lVar17;
          *(undefined8 *****)(puVar5 + -0x10) = unaff_x29;
          *(undefined **)(puVar5 + -8) = puVar23;
          unaff_x29 = (undefined8 ****)(puVar5 + -0x10);
          if ((int)uVar10 == 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
code_r0x016cef70:
            if (*(long *)(lVar18 + 0x18) != 0) {
              *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
              return uVar12;
            }
          }
          else if (lVar18 != 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
            if ((*(long *)(lVar18 + 0x18) != 0) &&
               (lVar17 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar17 != 0)) {
              uVar19 = (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar18 + 0x10));
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar19);
              goto code_r0x016cef70;
            }
          }
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar24 = func_0x00f78af4();
          uVar10 = 0;
          puVar5 = puVar5 + -0x20;
          lVar17 = lVar18;
          uVar12 = uVar19;
        } while( true );
      }
      pdVar14 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar27._8_4_);
      pdVar15 = &MACH_HEADER.cputype;
      unaff_x30 = &UNK_016cee20;
      pdVar16 = pdVar14;
    }
    else {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
      unaff_x20 = (dword *)/*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      unaff_x21 = (dword *)(ulong)param_1[0xc];
      uVar13 = param_1[0xc] - 1;
      if (-2 < (int)uVar13) {
        uVar13 = 0xffffffff;
      }
      unaff_x22 = (dword *)(ulong)uVar13;
      do {
        uVar1 = (int)unaff_x21 - 1;
        unaff_x21 = (dword *)(ulong)uVar1;
        if ((int)uVar1 < 0) goto code_r0x016ceb30;
        lVar17 = *(long *)(param_1 + 10);
        if (lVar17 == 0) goto code_r0x016ced84;
        if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x016ced88;
      } while (*(int *)(lVar17 + (ulong)uVar1 * 4 + 0x20) == 0);
      unaff_x22 = unaff_x21 + 2;
      do {
        unaff_x23 = unaff_x22 + -2;
        if ((int *)(ulong)*(uint *)(lVar17 + 0x18) <= unaff_x23) goto code_r0x016ced88;
        iVar6 = *(int *)(lVar17 + (long)unaff_x22 * 4);
        uVar13 = 0;
        if (iVar6 != 0) {
          uVar13 = (int)unaff_x20 - iVar6;
        }
        unaff_x24 = (ulong)uVar13;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar13);
        lVar17 = *(long *)(param_1 + 10);
        if (lVar17 == 0) goto code_r0x016ced84;
        if ((int *)(ulong)*(uint *)(lVar17 + 0x18) <= unaff_x23) goto code_r0x016ced88;
        *(undefined4 *)(lVar17 + (long)unaff_x22 * 4) = 0;
        unaff_x22 = (dword *)((long)unaff_x22 + -1);
        uVar13 = uVar1;
      } while (0 < (long)unaff_x23);
code_r0x016ceb30:
      iVar6 = param_1[0xd];
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)unaff_x20 - (short)iVar6));
      uVar13 = uVar13 * 2 + 6;
      unaff_x21 = (dword *)(ulong)uVar13;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar13);
      uVar13 = param_1[0x10];
      unaff_x22 = (dword *)(ulong)uVar13;
      if ((int)uVar13 < 1) {
        unaff_x21 = *(dword **)(param_1 + 0xe);
        if (unaff_x21 != (dword *)0x0) {
          if (uVar13 == unaff_x21[6]) {
            unaff_x21 = (dword *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar13 << 1);
            lVar17 = *(long *)(param_1 + 0xe);
            if (lVar17 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar17,unaff_x21,*(undefined4 *)(lVar17 + 0x18),0);
            *(dword **)(param_1 + 0xe) = unaff_x21;
            unaff_x22 = (dword *)(ulong)param_1[0x10];
          }
          uVar13 = (uint)unaff_x22;
          param_1[0x10] = uVar13 + 1;
          dVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
          if (unaff_x21 != (dword *)0x0) {
            if (unaff_x21[6] <= uVar13) goto code_r0x016ced88;
            unaff_x21[(long)(int)uVar13 + 8] = dVar7;
            unaff_x21 = *(dword **)(param_1 + 6);
            if ((unaff_x21 != (dword *)0x0) && (*(long *)(unaff_x21 + 4) != 0)) {
              iVar6 = *(int *)(*(long *)(unaff_x21 + 4) + 0x18);
              /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
              uVar13 = iVar6 - (int)unaff_x20;
              uVar12 = (ulong)uVar13;
              auVar25._8_4_ = uVar13;
              auVar25._0_8_ = unaff_x21;
              auVar25._12_4_ = 0;
              pdVar15 = &MACH_HEADER.cputype;
              puVar23 = &UNK_016ced4c;
              goto code_r0x016cc7a4;
            }
          }
        }
code_r0x016ced84:
        func_0x00f78af4();
code_r0x016ced88:
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        pdVar15 = unaff_x20;
        goto code_r0x016ced94;
      }
      unaff_x24 = 0;
      lVar17 = *(long *)(param_1 + 6);
      if (((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) ||
         (lVar18 = *(long *)(param_1 + 0xe), lVar18 == 0)) goto code_r0x016ced84;
      if (*(int *)(lVar18 + 0x18) == 0) goto code_r0x016ced88;
      pdVar14 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar17 + 0x10) + 0x18) -
                                      *(int *)(lVar18 + 0x20));
      unaff_x22 = (dword *)(ulong)param_1[4];
      pdVar15 = (dword *)((long)&MACH_HEADER.magic + 2);
      unaff_x30 = &UNK_016cebcc;
      pdVar16 = pdVar14;
      unaff_x29 = ppppuVar20;
    }
  }
  else {
    uVar13 = *param_1 + iVar6;
    puVar5 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
FlatBuffers_ByteBuffer__GetLong:
    pdVar14 = (dword *)(ulong)uVar13;
    pdVar15 = &MACH_HEADER.cpusubtype;
    pdVar16 = unaff_x21;
  }
  auVar25._8_8_ = pdVar14;
  auVar25._0_8_ = lVar17;
  *(ulong *)(puVar5 + -0x40) = unaff_x24;
  *(dword **)(puVar5 + -0x38) = unaff_x23;
  *(dword **)(puVar5 + -0x30) = unaff_x22;
  *(dword **)(puVar5 + -0x28) = pdVar16;
  *(dword **)(puVar5 + -0x20) = unaff_x20;
  *(dword **)(puVar5 + -0x18) = param_1;
  *(undefined8 *****)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  ppppuVar20 = (undefined8 ****)(puVar5 + -0x10);
  uVar12 = 0x3d201a0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar23 = &UNK_016cc68c;
  puVar2 = puVar5 + -0x40;
  param_1 = pdVar14;
  unaff_x20 = pdVar15;
code_r0x016cc7a4:
  do {
    uVar19 = auVar25._0_8_;
    *(dword **)(puVar2 + -0x20) = unaff_x20;
    *(dword **)(puVar2 + -0x18) = param_1;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar20;
    *(undefined **)(puVar2 + -8) = puVar23;
    if (auVar25._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      param_1 = (dword *)func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(param_1,0);
      uVar9 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(param_1,uVar9);
      pdVar16 = pdVar15;
    }
    else {
      pdVar16 = pdVar15;
      if (*(long *)(uVar19 + 0x10) != 0) {
        if (auVar25._8_4_ <= *(int *)(*(long *)(uVar19 + 0x10) + 0x18) - (int)pdVar15) {
          return uVar19;
        }
        goto code_r0x016cc7d8;
      }
    }
    auVar25 = func_0x00f78af4();
    *(ulong *)(puVar2 + -0x50) = uVar12;
    *(ulong *)(puVar2 + -0x48) = uVar19;
    *(dword **)(puVar2 + -0x40) = unaff_x20;
    *(dword **)(puVar2 + -0x38) = param_1;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    ppppuVar20 = (undefined8 ****)(puVar2 + -0x30);
    pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar23 = &UNK_016cc834;
    puVar2 = puVar2 + -0x50;
    param_1 = pdVar16;
    unaff_x20 = auVar25._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x16867a8 | Core.Services.SubmitLeaderboardScoreRequest.get_OccurrenceStartDate
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168682c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01686844: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01686848) */
/* WARNING: Removing unreachable block (ram,0x01686830) */
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

ulong Core_Services_SubmitLeaderboardScoreRequest__get_OccurrenceStartDate
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar18;
  undefined1 **ppuVar19;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong auStack_130 [4];
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar13 = 0;
  iVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8);
  if (iVar6 == 0) {
    return 0;
  }
  lVar16 = *(long *)(param_1 + 2);
  if (lVar16 == 0) {
    auVar22 = func_0x00f78af4();
    lVar16 = auVar22._0_8_;
    pppuVar4 = (undefined1 ***)&stack0xffffffffffffffb0;
    puVar3 = &stack0xffffffffffffffb0;
    puStack_28 = &Core_Services_SubmitLeaderboardScoreRequest__CreateSubmitLeaderboardScoreRequest;
    ppuVar19 = &puStack_30;
    puStack_30 = &stack0xfffffffffffffff0;
    if (lVar16 != 0) {
      puVar21 = &UNK_01686830;
      unaff_x21 = uVar13;
      unaff_x22 = param_4;
code_r0x016ce2a4:
      param_1 = auVar22._0_8_;
      uVar8 = 0;
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = unaff_x21;
      *(long *)(puVar3 + -0x20) = auVar22._8_8_;
      *(long *)(puVar3 + -0x18) = lVar16;
      *(undefined1 ***)(puVar3 + -0x10) = ppuVar19;
      *(undefined **)(puVar3 + -8) = puVar21;
      ppuVar19 = (undefined1 **)(puVar3 + -0x10);
      unaff_x20 = 3;
      unaff_x21 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
      if (*(long *)(param_1 + 10) != 0) {
        if (*(int *)(*(long *)(param_1 + 10) + 0x18) < 3) {
          uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
          *(undefined8 *)(param_1 + 10) = uVar8;
        }
        param_1[0xc] = 3;
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
        param_1[0xd] = (int)uVar13;
        return uVar13;
      }
      puStack_78 = &FlatBuffers_FlatBufferBuilder__Slot;
      auVar24 = func_0x00f78af4();
      pppuVar4 = (undefined1 ***)(puVar3 + -0x30);
      goto code_r0x016ce380;
    }
    puVar21 = &Core_Services_SubmitLeaderboardScoreRequest__AddOccurrenceStartDate;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      pppuVar4 = &ppuStack_60;
      pppuVar20 = &ppuStack_60;
      puStack_58 = &Core_Services_SubmitLeaderboardScoreRequest__AddOccurrenceStartDate;
      puVar21 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
      ppuStack_60 = ppuVar19;
      auVar22 = func_0x00f78af4();
      if (auVar22._0_8_ == 0) {
        ppuVar19 = &puStack_70;
        puStack_68 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
        puStack_70 = (undefined1 *)&ppuStack_60;
        auVar22 = func_0x00f78af4();
        uVar8 = auVar22._8_8_;
        uVar13 = auVar22._0_8_;
        if (uVar13 != 0) {
          param_4 = 0;
          puStack_78 = &Core_Services_SubmitLeaderboardScoreRequest__AddId;
          if ((auVar22._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
            return uVar13;
          }
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar13,uVar8,uVar8,0,0);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar13;
          pppuVar4 = (undefined1 ***)&puStack_70;
          goto code_r0x016ce380;
        }
        unaff_x19 = func_0x00f78af4();
        puVar3 = &stack0xffffffffffffff60;
        ppuVar19 = (undefined1 **)&stack0xffffffffffffff70;
        if ((bRam0000000003eb5a29 & 1) == 0) {
          func_0x00f78a20(0x3d3f258);
          bRam0000000003eb5a29 = 1;
        }
        if (unaff_x19 == 0) {
          puVar21 = &Core_Services_SubmitLeaderboardScoreRequest__StartSubmitLeaderboardScoreRequest
          ;
          lVar16 = func_0x00f78af4();
          auVar22._8_8_ = 0x3eb5000;
          auVar22._0_8_ = lVar16;
          if (lVar16 == 0) {
            lVar16 = func_0x00f78af4();
            return *(ulong *)(lVar16 + 8);
          }
          lVar16 = 0;
          goto code_r0x016ce2a4;
        }
        puVar2 = &stack0xffffffffffffff30;
        puVar5 = &stack0xffffffffffffff30;
        ppppuVar18 = (undefined8 ****)&stack0xffffffffffffff70;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        uVar13 = 0x3eb5000;
        if (-1 < *(int *)(unaff_x19 + 0x30)) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,4,0);
          /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(unaff_x19,0);
          unaff_x20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          unaff_x21 = (ulong)*(uint *)(unaff_x19 + 0x30);
          uVar11 = *(uint *)(unaff_x19 + 0x30) - 1;
          if (-2 < (int)uVar11) {
            uVar11 = 0xffffffff;
          }
          unaff_x22 = (ulong)uVar11;
          do {
            uVar1 = (int)unaff_x21 - 1;
            unaff_x21 = (ulong)uVar1;
            if ((int)uVar1 < 0) goto code_r0x016ceb30;
            lVar16 = *(long *)(unaff_x19 + 0x28);
            if (lVar16 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar1) goto code_r0x016ced88;
          } while (*(int *)(lVar16 + (ulong)uVar1 * 4 + 0x20) == 0);
          unaff_x22 = unaff_x21 + 8;
          do {
            unaff_x23 = unaff_x22 - 8;
            if (*(uint *)(lVar16 + 0x18) <= unaff_x23) goto code_r0x016ced88;
            iVar6 = *(int *)(lVar16 + unaff_x22 * 4);
            uVar11 = 0;
            if (iVar6 != 0) {
              uVar11 = (int)unaff_x20 - iVar6;
            }
            unaff_x24 = (ulong)uVar11;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)uVar11);
            lVar16 = *(long *)(unaff_x19 + 0x28);
            if (lVar16 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= unaff_x23) goto code_r0x016ced88;
            *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
            unaff_x22 = unaff_x22 - 1;
            uVar11 = uVar1;
          } while (0 < (long)unaff_x23);
code_r0x016ceb30:
          uVar7 = *(undefined4 *)(unaff_x19 + 0x34);
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)((short)unaff_x20 - (short)uVar7));
          uVar11 = uVar11 * 2 + 6;
          unaff_x21 = (ulong)uVar11;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)uVar11);
          uVar11 = *(uint *)(unaff_x19 + 0x40);
          unaff_x22 = (ulong)uVar11;
          if ((int)uVar11 < 1) {
            unaff_x21 = *(ulong *)(unaff_x19 + 0x38);
            if (unaff_x21 != 0) {
              if (uVar11 == *(uint *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar11 << 1);
                lVar16 = *(long *)(unaff_x19 + 0x38);
                if (lVar16 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
                *(ulong *)(unaff_x19 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(unaff_x19 + 0x40);
              }
              uVar11 = (uint)unaff_x22;
              *(uint *)(unaff_x19 + 0x40) = uVar11 + 1;
              uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
              if (unaff_x21 != 0) {
                if (*(uint *)(unaff_x21 + 0x18) <= uVar11) goto code_r0x016ced88;
                *(undefined4 *)(unaff_x21 + (long)(int)uVar11 * 4 + 0x20) = uVar7;
                unaff_x21 = *(ulong *)(unaff_x19 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar6 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
                  uVar11 = iVar6 - (int)unaff_x20;
                  uVar13 = (ulong)uVar11;
                  auVar23._8_4_ = uVar11;
                  auVar23._0_8_ = unaff_x21;
                  auVar23._12_4_ = 0;
                  uVar15 = 4;
                  puVar21 = &UNK_016ced4c;
                  goto code_r0x016cc7a4;
                }
              }
            }
code_r0x016ced84:
            func_0x00f78af4();
          }
          else {
            unaff_x24 = 0;
            lVar16 = *(long *)(unaff_x19 + 0x18);
            if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
               (lVar17 = *(long *)(unaff_x19 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
            if (*(int *)(lVar17 + 0x18) != 0) {
              uVar12 = (ulong)(uint)(*(int *)(*(long *)(lVar16 + 0x10) + 0x18) -
                                    *(int *)(lVar17 + 0x20));
              unaff_x22 = (ulong)*(uint *)(unaff_x19 + 0x10);
              uVar15 = 2;
              unaff_x30 = &UNK_016cebcc;
              uVar13 = uVar12;
              unaff_x29 = ppppuVar18;
              goto code_r0x016cc634;
            }
          }
code_r0x016ced88:
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          uVar13 = unaff_x20;
        }
        func_0x00f78a24(0x3d22a38);
        uVar8 = func_0x00f78aec();
        uVar9 = func_0x00f78a24(0x3d6cea8);
        unaff_x19 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar8,uVar9);
        uVar9 = func_0x00f78a24(0x3d56a30);
        auVar25 = func_0x00f78ac0(uVar8,uVar9);
        unaff_x20 = auVar25._0_8_;
        puVar5 = auStack_110;
        puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
        unaff_x29 = &pppuStack_e0;
        uStack_104 = (undefined4)unaff_x19;
        lVar16 = *(long *)(unaff_x20 + 0x18);
        uStack_100 = unaff_x22;
        uStack_f8 = unaff_x21;
        uStack_f0 = uVar13;
        uStack_e8 = uVar8;
        pppuStack_e0 = ppppuVar18;
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) {
          func_0x00f78af4();
          uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_104,0);
          uVar9 = func_0x00f78a24(0x3d6ce88);
          uVar10 = func_0x00f78a24(0x3d66338);
          lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar9,uVar8,uVar10,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar9 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar16);
          uVar8 = func_0x00f78a24(0x3d56a50);
          puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar22 = func_0x00f78ac0(uVar13,uVar8);
          puVar5 = auStack_110;
          do {
            uVar12 = auVar22._8_8_;
            lVar17 = auVar22._0_8_;
            *(ulong *)(puVar5 + -0x20) = uVar13;
            *(long *)(puVar5 + -0x18) = lVar16;
            *(undefined8 *****)(puVar5 + -0x10) = unaff_x29;
            *(undefined **)(puVar5 + -8) = puVar21;
            unaff_x29 = (undefined8 ****)(puVar5 + -0x10);
            if ((int)uVar9 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar12);
code_r0x016cef70:
              if (*(long *)(lVar17 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x18) = *(undefined4 *)(lVar17 + 0x10);
                return uVar13;
              }
            }
            else if (lVar17 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar12);
              if ((*(long *)(lVar17 + 0x18) != 0) &&
                 (lVar16 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10), lVar16 != 0)) {
                uVar12 = (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar17 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,uVar12);
                goto code_r0x016cef70;
              }
            }
            puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar22 = func_0x00f78af4();
            uVar9 = 0;
            puVar5 = puVar5 + -0x20;
            lVar16 = lVar17;
            uVar13 = uVar12;
          } while( true );
        }
        uVar12 = (ulong)(uint)(*(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar25._8_4_);
        uVar15 = 4;
        unaff_x30 = &UNK_016cee20;
        uVar13 = uVar12;
        goto code_r0x016cc634;
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
      pppuVar20 = (undefined1 ***)ppuVar19;
    }
    uVar13 = auVar22._0_8_;
    auVar24._8_8_ = uVar8;
    auVar24._0_8_ = uVar13;
    param_4 = 0;
    *(ulong *)((long)pppuVar4 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar4 + -0x28) = unaff_x21;
    *(ulong *)((long)pppuVar4 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar4 + -0x18) = param_1;
    *(undefined1 ****)((long)pppuVar4 + -0x10) = pppuVar20;
    *(undefined **)((long)pppuVar4 + -8) = puVar21;
    if ((auVar22._8_8_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar8 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar13,auVar22._8_8_);
    ppuVar19 = *(undefined1 ***)((long)pppuVar4 + -0x10);
    puStack_78 = *(undefined **)((long)pppuVar4 + -8);
    unaff_x20 = *(ulong *)((long)pppuVar4 + -0x20);
    param_1 = *(int **)((long)pppuVar4 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar4 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar4 + -0x28);
code_r0x016ce380:
    do {
      uVar9 = auVar24._8_8_;
      *(ulong *)((long)pppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar4 + -0x18) = param_1;
      *(undefined1 ***)((long)pppuVar4 + -0x10) = ppuVar19;
      *(undefined **)((long)pppuVar4 + -8) = puStack_78;
      uVar11 = auVar24._8_4_;
      if ((int)uVar11 < *(int *)(auVar24._0_8_ + 0x30)) {
        unaff_x20 = *(ulong *)(auVar24._0_8_ + 0x28);
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar10 = uVar8;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar11 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar13;
          return uVar13;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar9 = func_0x00f78aec();
        uVar8 = func_0x00f78a24(0x3d6ceb8);
        uVar10 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar9,uVar8);
        uVar8 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar9,uVar8);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar8 = func_0x00f78b24();
      auVar24 = func_0x00f78ac0(uVar8,0);
      uVar13 = auVar24._0_8_;
      *(ulong *)((long)pppuVar4 + -0x50) = unaff_x22;
      *(ulong *)((long)pppuVar4 + -0x48) = unaff_x21;
      *(ulong *)((long)pppuVar4 + -0x40) = unaff_x20;
      *(undefined8 *)((long)pppuVar4 + -0x38) = uVar9;
      *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x10);
      *(undefined **)((long)pppuVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar10 == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar8 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,uVar10);
      ppuVar19 = *(undefined1 ***)((long)pppuVar4 + -0x30);
      puStack_78 = *(undefined **)((long)pppuVar4 + -0x28);
      unaff_x20 = *(ulong *)((long)pppuVar4 + -0x40);
      param_1 = *(int **)((long)pppuVar4 + -0x38);
      unaff_x22 = *(ulong *)((long)pppuVar4 + -0x50);
      unaff_x21 = *(ulong *)((long)pppuVar4 + -0x48);
      pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x20);
    } while( true );
  }
  uVar12 = (ulong)(uint)(*param_1 + iVar6);
  uVar15 = 8;
  puVar5 = (undefined1 *)register0x00000008;
  uVar13 = unaff_x21;
code_r0x016cc634:
  auVar23._8_8_ = uVar12;
  auVar23._0_8_ = lVar16;
  *(ulong *)(puVar5 + -0x40) = unaff_x24;
  *(ulong *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = unaff_x22;
  *(ulong *)(puVar5 + -0x28) = uVar13;
  *(ulong *)(puVar5 + -0x20) = unaff_x20;
  *(ulong *)(puVar5 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  ppppuVar18 = (undefined8 ****)(puVar5 + -0x10);
  uVar13 = 0x3d201a0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar21 = &UNK_016cc68c;
  puVar2 = puVar5 + -0x40;
  unaff_x19 = uVar12;
  unaff_x20 = uVar15;
code_r0x016cc7a4:
  do {
    uVar12 = auVar23._0_8_;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar18;
    *(undefined **)(puVar2 + -8) = puVar21;
    if (auVar23._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      unaff_x19 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(unaff_x19,0);
      uVar8 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(unaff_x19,uVar8);
      uVar14 = uVar15;
    }
    else {
      uVar14 = uVar15;
      if (*(long *)(uVar12 + 0x10) != 0) {
        if (auVar23._8_4_ <= *(int *)(*(long *)(uVar12 + 0x10) + 0x18) - (int)uVar15) {
          return uVar12;
        }
        goto code_r0x016cc7d8;
      }
    }
    auVar23 = func_0x00f78af4();
    *(ulong *)(puVar2 + -0x50) = uVar13;
    *(ulong *)(puVar2 + -0x48) = uVar12;
    *(ulong *)(puVar2 + -0x40) = unaff_x20;
    *(ulong *)(puVar2 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    ppppuVar18 = (undefined8 ****)(puVar2 + -0x30);
    uVar15 = 1;
    puVar21 = &UNK_016cc834;
    puVar2 = puVar2 + -0x50;
    unaff_x19 = uVar14;
    unaff_x20 = auVar23._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x1686800 | Core.Services.SubmitLeaderboardScoreRequest.CreateSubmitLeaderboardScoreRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x0168682c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01686844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01686830) */
/* WARNING: Removing unreachable block (ram,0x01686848) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_SubmitLeaderboardScoreRequest__CreateSubmitLeaderboardScoreRequest
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
    puVar22 = (undefined *)0x1686830;
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
  puVar22 = &Core_Services_SubmitLeaderboardScoreRequest__AddOccurrenceStartDate;
  auVar24 = func_0x00f78af4();
  if (auVar24._0_8_ == 0) {
    ppuVar3 = &puStack_40;
    ppuVar21 = &puStack_40;
    puStack_38 = &Core_Services_SubmitLeaderboardScoreRequest__AddOccurrenceStartDate;
    puVar22 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
    puStack_40 = puVar4;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar21 = &puStack_50;
      puStack_48 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
      puStack_50 = (undefined1 *)&puStack_40;
      auVar24 = func_0x00f78af4();
      uVar11 = auVar24._8_8_;
      uVar19 = auVar24._0_8_;
      if (uVar19 != 0) {
        param_4 = 0;
        puStack_58 = &Core_Services_SubmitLeaderboardScoreRequest__AddId;
        if ((auVar24._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
          return uVar19;
        }
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar19,uVar11,uVar11,0,0);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar19;
        ppuVar3 = &puStack_50;
        goto code_r0x016ce380;
      }
      lVar13 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff80;
      puVar4 = &stack0xffffffffffffff90;
      param_2 = 0x3eb5000;
      if ((bRam0000000003eb5a29 & 1) == 0) {
        func_0x00f78a20(0x3d3f258);
        bRam0000000003eb5a29 = 1;
      }
      if (lVar13 == 0) {
        puVar22 = &Core_Services_SubmitLeaderboardScoreRequest__StartSubmitLeaderboardScoreRequest;
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
    uVar11 = 1;
  }
  else {
    uVar11 = 2;
    ppuVar21 = (undefined1 **)puVar4;
  }
  uVar19 = auVar24._0_8_;
  auVar23._8_8_ = uVar11;
  auVar23._0_8_ = uVar19;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
  *(undefined **)((long)ppuVar3 + -8) = puVar22;
  if ((auVar24._8_8_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
    return uVar19;
  }
  uVar11 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,8,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar19,auVar24._8_8_);
  ppuVar21 = *(undefined1 ***)((long)ppuVar3 + -0x10);
  puStack_58 = *(undefined **)((long)ppuVar3 + -8);
  unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
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
// RVA: 0x168686c | Core.Services.SubmitLeaderboardScoreRequest.AddOccurrenceStartDate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_SubmitLeaderboardScoreRequest__AddOccurrenceStartDate
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
    unaff_x30 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      ppuVar20 = &puStack_20;
      puStack_18 = &Core_Services_SubmitLeaderboardScoreRequest__AddScore;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar22 = func_0x00f78af4();
      uVar14 = auVar22._8_8_;
      uVar11 = auVar22._0_8_;
      if (uVar11 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Services_SubmitLeaderboardScoreRequest__AddId;
        if ((auVar22._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
          return uVar11;
        }
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar14,uVar14,0,0);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar11;
        ppuVar2 = &puStack_20;
        goto code_r0x016ce380;
      }
      lVar10 = func_0x00f78af4();
      if ((bRam0000000003eb5a29 & 1) == 0) {
        func_0x00f78a20(0x3d3f258);
        bRam0000000003eb5a29 = 1;
      }
      if (lVar10 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar10 = func_0x00f78af4();
          return *(ulong *)(lVar10 + 8);
        }
        uVar14 = 0;
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
            uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
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
        uVar14 = func_0x00f78b24();
        func_0x00f78ac0(uVar14,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar14 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar14,uVar12);
      puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar20 = &puStack_90;
      lVar10 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_b4 = iVar18;
      uStack_b0 = unaff_x22;
      uStack_a8 = unaff_x21;
      uStack_a0 = uVar11;
      uStack_98 = uVar14;
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
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
      uVar12 = func_0x00f78a24(0x3d6ce88);
      uVar15 = func_0x00f78a24(0x3d66338);
      lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar14,uVar15,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar12 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar10);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar11,uVar14);
      puVar3 = auStack_c0;
      do {
        uVar19 = auVar22._8_8_;
        lVar16 = auVar22._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar11;
        *(long *)(puVar3 + -0x18) = lVar10;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar20;
        *(undefined **)(puVar3 + -8) = puVar21;
        ppuVar20 = (undefined1 **)(puVar3 + -0x10);
        if ((int)uVar12 == 0) {
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
        uVar12 = 0;
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
  uVar11 = auVar22._0_8_;
  auVar23._8_8_ = uVar14;
  auVar23._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)(puVar3 + -0x30) = unaff_x22;
  *(ulong *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  if ((auVar22._8_8_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,8,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar11,auVar22._8_8_);
  ppuVar20 = *(undefined1 ***)(puVar3 + -0x10);
  puStack_28 = *(undefined **)(puVar3 + -8);
  unaff_x20 = *(long *)(puVar3 + -0x20);
  unaff_x19 = *(long *)(puVar3 + -0x18);
  unaff_x22 = *(ulong *)(puVar3 + -0x30);
  unaff_x21 = *(ulong *)(puVar3 + -0x28);
  ppuVar2 = (undefined1 **)puVar3;
code_r0x016ce380:
  do {
    uVar12 = auVar23._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puStack_28;
    uVar13 = auVar23._8_4_;
    if ((int)uVar13 < *(int *)(auVar23._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar23._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar15 = uVar14;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar12 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar12,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar23._0_8_;
    *(ulong *)((long)ppuVar2 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x38) = uVar12;
    *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x10);
    *(undefined **)((long)ppuVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar15 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
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
// RVA: 0x1686890 | Core.Services.SubmitLeaderboardScoreRequest.AddScore
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_SubmitLeaderboardScoreRequest__AddScore
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
    uVar16 = 1;
    if ((param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(param_1,param_2);
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
  uVar13 = auVar21._8_8_;
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,uVar13,uVar13,0,0);
    uVar16 = 0;
    unaff_x30 = &Core_Services_SubmitLeaderboardScoreRequest__AddId;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5a29 & 1) == 0) {
    func_0x00f78a20(0x3d3f258);
    bRam0000000003eb5a29 = 1;
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
// RVA: 0x16868b4 | Core.Services.SubmitLeaderboardScoreRequest.AddId
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_SubmitLeaderboardScoreRequest__AddId
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
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb5a29 & 1) == 0) {
    func_0x00f78a20(0x3d3f258);
    bRam0000000003eb5a29 = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    param_2 = 0;
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
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar11,0);
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
// RVA: 0x16868d8 | Core.Services.SubmitLeaderboardScoreRequest.EndSubmitLeaderboardScoreRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_SubmitLeaderboardScoreRequest__EndSubmitLeaderboardScoreRequest
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
  
  if ((bRam0000000003eb5a29 & 1) == 0) {
    func_0x00f78a20(0x3d3f258);
    bRam0000000003eb5a29 = 1;
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
// RVA: 0x1686924 | Core.Services.SubmitLeaderboardScoreRequest.StartSubmitLeaderboardScoreRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_SubmitLeaderboardScoreRequest__StartSubmitLeaderboardScoreRequest
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



