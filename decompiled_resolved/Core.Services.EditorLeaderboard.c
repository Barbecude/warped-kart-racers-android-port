// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.EditorLeaderboard

// ============================================================
// RVA: 0x16678c0 | Core.Services.EditorLeaderboard.get_ByteBuffer
// ============================================================

undefined8 Core_Services_EditorLeaderboard__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16678c8 | Core.Services.EditorLeaderboard.GetRootAsEditorLeaderboard
// ============================================================

undefined1  [16] Core_Services_EditorLeaderboard__GetRootAsEditorLeaderboard(long param_1)

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
// RVA: 0x16678d4 | Core.Services.EditorLeaderboard.GetRootAsEditorLeaderboard
// ============================================================

undefined1  [16]
Core_Services_EditorLeaderboard__GetRootAsEditorLeaderboard
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
// RVA: 0x1667918 | Core.Services.EditorLeaderboard.__assign
// ============================================================

undefined1  [16]
Core_Services_EditorLeaderboard____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x166792c | Core.Services.EditorLeaderboard.__init
// ============================================================

void Core_Services_EditorLeaderboard____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1667938 | Core.Services.EditorLeaderboard.get_Id
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

ulong Core_Services_EditorLeaderboard__get_Id(int *param_1)

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
// RVA: 0x1667984 | Core.Services.EditorLeaderboard.GetIdBytes
// ============================================================

void Core_Services_EditorLeaderboard__GetIdBytes(undefined8 *param_1,undefined8 param_2)

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
// RVA: 0x16679c8 | Core.Services.EditorLeaderboard.GetIdArray
// ============================================================

long Core_Services_EditorLeaderboard__GetIdArray(long param_1)

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
  
  if ((bRam0000000003eb58a3 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb58a3 = 1;
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
// RVA: 0x1667a20 | Core.Services.EditorLeaderboard.get_Duration
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x016ccdfc) */
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
/* WARNING: Type propagation algorithm not settling */

ulong Core_Services_EditorLeaderboard__get_Duration
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                dword *param_5,dword *param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *******pppppppuVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar9;
  ulong uVar10;
  dword *pdVar11;
  int *piVar12;
  undefined8 uVar13;
  dword dVar8;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
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
  undefined1 ****ppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 *puVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined1 ****ppppuVar27;
  undefined8 ******ppppppuVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  ulong auStack_270 [4];
  undefined1 auStack_250 [12];
  undefined4 uStack_244;
  dword *pdStack_240;
  dword *pdStack_238;
  dword *pdStack_230;
  undefined8 uStack_228;
  undefined8 *******pppppppuStack_220;
  undefined *puStack_218;
  undefined8 ******ppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 ******appppppuStack_1a8 [7];
  undefined8 ******ppppppuStack_150;
  undefined *puStack_148;
  undefined8 *****pppppuStack_f0;
  undefined *puStack_e8;
  undefined1 ****appppuStack_d0 [2];
  undefined1 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined1 ****ppppuStack_90;
  undefined *puStack_88;
  undefined1 ****ppppuStack_70;
  undefined *puStack_68;
  undefined1 ***pppuStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_30;
  undefined *puStack_28;
  
  iVar7 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if (iVar7 == 0) {
    return 0;
  }
  lVar19 = *(long *)(param_1 + 2);
  pdVar18 = unaff_x21;
  if (lVar19 == 0) {
    piVar9 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Services_EditorLeaderboard__get_Empty;
    ppuStack_30 = (undefined1 **)&stack0xfffffffffffffff0;
    uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar9,8,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    if (*(long *)(piVar9 + 2) != 0) {
      iVar7 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(piVar9 + 2),*piVar9 + (int)uVar10,0);
      return (ulong)(iVar7 != 0);
    }
    pdVar11 = (dword *)func_0x00f78af4();
    puStack_48 = &Core_Services_EditorLeaderboard__get_SortAscending;
    pppuStack_50 = &ppuStack_30;
    uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(pdVar11,10,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    if (*(long *)(pdVar11 + 2) != 0) {
      iVar7 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(pdVar11 + 2),*pdVar11 + (int)uVar10,0);
      return (ulong)(iVar7 != 0);
    }
    unaff_x19 = (dword *)func_0x00f78af4();
    puStack_68 = &Core_Services_EditorLeaderboard__get_RandomScoreMin;
    ppppuStack_70 = &stack0xffffffffffffffb0;
    uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(unaff_x19,0xc,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    lVar19 = *(long *)(unaff_x19 + 2);
    if (lVar19 == 0) {
      pdVar11 = (dword *)func_0x00f78af4();
      puStack_88 = &Core_Services_EditorLeaderboard__get_RandomScoreMax;
      ppppuStack_90 = (undefined1 ****)&stack0xffffffffffffff90;
      uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(pdVar11,0xe,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      lVar19 = *(long *)(pdVar11 + 2);
      if (lVar19 == 0) {
        unaff_x19 = (dword *)func_0x00f78af4();
        puStack_a8 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMin;
        ppppuStack_b0 = (undefined1 ****)&stack0xffffffffffffff70;
        uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(unaff_x19,0x10,0);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        lVar19 = *(long *)(unaff_x19 + 2);
        if (lVar19 == 0) {
          piVar9 = (int *)func_0x00f78af4();
          appppuStack_d0[1] =
               (undefined1 ****)&Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMax;
          appppuStack_d0[0] = (undefined1 ****)&stack0xffffffffffffff50;
          uVar10 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar9,0x12,0);
          if ((int)uVar10 == 0) {
            return uVar10;
          }
          lVar19 = *(long *)(piVar9 + 2);
          if (lVar19 == 0) {
            piVar12 = (int *)func_0x00f78af4();
            puVar4 = &stack0xfffffffffffffec0;
            puStack_e8 = &Core_Services_EditorLeaderboard__CreateEditorLeaderboard;
            ppppppuVar24 = &pppppuStack_f0;
            pppppuStack_f0 = (undefined8 *****)appppuStack_d0;
            if (piVar12 != (int *)0x0) {
              puVar26 = &UNK_01667cc0;
              piVar9 = piVar12;
              uVar13 = param_4;
              unaff_x21 = param_5;
              unaff_x22 = param_6;
code_r0x016ce2a4:
              uVar14 = 0;
              pppppppuVar5 = (undefined1 *******)(puVar4 + -0x30);
              *(dword **)(puVar4 + -0x30) = unaff_x22;
              *(dword **)(puVar4 + -0x28) = unaff_x21;
              *(undefined8 *)(puVar4 + -0x20) = uVar13;
              *(int **)(puVar4 + -0x18) = piVar9;
              *(undefined8 *******)(puVar4 + -0x10) = ppppppuVar24;
              *(undefined **)(puVar4 + -8) = puVar26;
              unaff_x20 = &MACH_HEADER.cpusubtype;
              unaff_x21 = (dword *)0x3eb5000;
              if ((bRam0000000003eb5cd7 & 1) == 0) {
                func_0x00f78a20(0x3d1f100);
                bRam0000000003eb5cd7 = 1;
              }
              /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar12);
              if (*(long *)(piVar12 + 10) != 0) {
                if (*(int *)(*(long *)(piVar12 + 10) + 0x18) < 8) {
                  uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                  *(undefined8 *)(piVar12 + 10) = uVar13;
                }
                piVar12[0xc] = 8;
                uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar12);
                piVar12[0xd] = (int)uVar10;
                return uVar10;
              }
              auVar31 = func_0x00f78af4();
              piVar9 = piVar12;
              ppppppuVar24 = (undefined8 ******)(puVar4 + -0x10);
              ppppppuVar28 = (undefined8 ******)&FlatBuffers_FlatBufferBuilder__Slot;
              goto code_r0x016ce380;
            }
            auVar31 = func_0x00f78af4();
            uVar10 = auVar31._0_8_;
            ppppppuStack_150 = ppppppuVar24;
            if (uVar10 != 0) {
              param_4 = 0;
              puStack_148 = &Core_Services_EditorLeaderboard__AddDuration;
              if ((auVar31._8_8_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
                return uVar10;
              }
              uVar14 = 0;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,8,0,0,0);
              /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar10,auVar31._8_8_);
              auVar31._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
              auVar31._0_8_ = uVar10;
              pppppppuVar5 = (undefined1 *******)&stack0xfffffffffffffec0;
              ppppppuVar24 = ppppppuStack_150;
              ppppppuVar28 = (undefined8 ******)puStack_148;
              goto code_r0x016ce380;
            }
            pppppppuVar5 = (undefined1 *******)&stack0xfffffffffffffeb0;
            puStack_148 = &Core_Services_EditorLeaderboard__AddDuration;
            puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
            auVar29 = func_0x00f78af4();
            if (auVar29._0_8_ == 0) {
              pppppppuVar5 = (undefined1 *******)&stack0xfffffffffffffea0;
              puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
              auVar29 = func_0x00f78af4();
              if (auVar29._0_8_ == 0) {
                pppppppuVar5 = (undefined1 *******)&stack0xfffffffffffffe90;
                puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
                auVar29 = func_0x00f78af4();
                if (auVar29._0_8_ == 0) {
                  pppppppuVar5 = (undefined1 *******)(appppppuStack_1a8 + 5);
                  appppppuStack_1a8[6] =
                       (undefined8 ******)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
                  puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
                  appppppuStack_1a8[5] = (undefined8 ******)&stack0xfffffffffffffe90;
                  auVar29 = func_0x00f78af4();
                  if (auVar29._0_8_ == 0) {
                    appppppuStack_1a8[4] =
                         (undefined8 ******)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
                    appppppuStack_1a8[3] = appppppuStack_1a8 + 5;
                    auVar31 = func_0x00f78af4();
                    uVar14 = auVar31._8_8_;
                    uVar10 = auVar31._0_8_;
                    if (uVar10 != 0) {
                      param_4 = 0;
                      appppppuStack_1a8[2] =
                           (undefined8 ******)&Core_Services_EditorLeaderboard__AddId;
                      if ((auVar31._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
                        return uVar10;
                      }
                      appppppuStack_1a8[1] = appppppuStack_1a8 + 3;
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar10,uVar14,uVar14,0,0);
                      auVar31._8_8_ = 0;
                      auVar31._0_8_ = uVar10;
                      pppppppuVar5 = (undefined1 *******)(appppppuStack_1a8 + 3);
                      ppppppuVar24 = appppppuStack_1a8[1];
                      ppppppuVar28 = appppppuStack_1a8[2];
                      goto code_r0x016ce380;
                    }
                    pppppppuVar5 = (undefined1 *******)(appppppuStack_1a8 + 1);
                    puVar25 = appppppuStack_1a8 + 1;
                    appppppuStack_1a8[2] =
                         (undefined8 ******)&Core_Services_EditorLeaderboard__AddId;
                    puVar26 = &Core_Services_EditorLeaderboard__AddSortAscending;
                    appppppuStack_1a8[1] = appppppuStack_1a8 + 3;
                    auVar29 = func_0x00f78af4();
                    if (auVar29._0_8_ != 0) {
                      puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
                      param_4 = 0;
                      goto code_r0x016ce420;
                    }
                    pppppppuVar5 = (undefined1 *******)&stack0xfffffffffffffe50;
                    puVar25 = (undefined8 *)&stack0xfffffffffffffe50;
                    puVar26 = &Core_Services_EditorLeaderboard__AddEmpty;
                    auVar29 = func_0x00f78af4();
                    if (auVar29._0_8_ != 0) {
                      puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
                      param_4 = 0;
                      goto code_r0x016ce420;
                    }
                    puStack_1b8 = &Core_Services_EditorLeaderboard__AddEmpty;
                    pppppuStack_1c0 = (undefined8 *****)&stack0xfffffffffffffe50;
                    unaff_x19 = (dword *)func_0x00f78af4();
                    puVar4 = &stack0xfffffffffffffe20;
                    puStack_1c8 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
                    ppppppuVar24 = &ppppppuStack_1d0;
                    uVar13 = 0x3eb5000;
                    ppppppuStack_1d0 = &pppppuStack_1c0;
                    if ((bRam0000000003eb58a4 & 1) == 0) {
                      ppppppuStack_1d0 = &pppppuStack_1c0;
                      func_0x00f78a20(0x3d3f058);
                      bRam0000000003eb58a4 = 1;
                    }
                    if (unaff_x19 == (dword *)0x0) {
                      puVar26 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
                      piVar12 = (int *)func_0x00f78af4();
                      if (piVar12 == (int *)0x0) {
                        lVar19 = func_0x00f78af4();
                        return *(ulong *)(lVar19 + 8);
                      }
                      piVar9 = (int *)0x0;
                      goto code_r0x016ce2a4;
                    }
                    puVar2 = &stack0xfffffffffffffdf0;
                    puVar6 = &stack0xfffffffffffffdf0;
                    pppppppuVar22 = &ppppppuStack_1d0;
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
                      uVar16 = unaff_x19[0xc] - 1;
                      if (-2 < (int)uVar16) {
                        uVar16 = 0xffffffff;
                      }
                      unaff_x22 = (dword *)(ulong)uVar16;
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
                        if ((int *)(ulong)*(uint *)(lVar19 + 0x18) <= unaff_x23)
                        goto code_r0x016ced88;
                        iVar7 = *(int *)(lVar19 + (long)unaff_x22 * 4);
                        uVar16 = 0;
                        if (iVar7 != 0) {
                          uVar16 = (int)unaff_x20 - iVar7;
                        }
                        unaff_x24 = (ulong)uVar16;
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
                        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)uVar16);
                        lVar19 = *(long *)(unaff_x19 + 10);
                        if (lVar19 == 0) goto code_r0x016ced84;
                        if ((int *)(ulong)*(uint *)(lVar19 + 0x18) <= unaff_x23)
                        goto code_r0x016ced88;
                        *(undefined4 *)(lVar19 + (long)unaff_x22 * 4) = 0;
                        unaff_x22 = (dword *)((long)unaff_x22 + -1);
                        uVar16 = uVar1;
                      } while (0 < (long)unaff_x23);
code_r0x016ceb30:
                      iVar7 = unaff_x19[0xd];
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)((short)unaff_x20 - (short)iVar7));
                      uVar16 = uVar16 * 2 + 6;
                      unaff_x21 = (dword *)(ulong)uVar16;
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(unaff_x19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(unaff_x19,(int)(short)uVar16);
                      uVar16 = unaff_x19[0x10];
                      unaff_x22 = (dword *)(ulong)uVar16;
                      if ((int)uVar16 < 1) {
                        unaff_x21 = *(dword **)(unaff_x19 + 0xe);
                        if (unaff_x21 != (dword *)0x0) {
                          if (uVar16 == unaff_x21[6]) {
                            unaff_x21 = (dword *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar16 << 1);
                            lVar19 = *(long *)(unaff_x19 + 0xe);
                            if (lVar19 == 0) goto code_r0x016ced84;
                            /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                            *(dword **)(unaff_x19 + 0xe) = unaff_x21;
                            unaff_x22 = (dword *)(ulong)unaff_x19[0x10];
                          }
                          uVar16 = (uint)unaff_x22;
                          unaff_x19[0x10] = uVar16 + 1;
                          dVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
                          if (unaff_x21 != (dword *)0x0) {
                            if (unaff_x21[6] <= uVar16) goto code_r0x016ced88;
                            unaff_x21[(long)(int)uVar16 + 8] = dVar8;
                            unaff_x21 = *(dword **)(unaff_x19 + 6);
                            if ((unaff_x21 != (dword *)0x0) && (*(long *)(unaff_x21 + 4) != 0)) {
                              iVar7 = *(int *)(*(long *)(unaff_x21 + 4) + 0x18);
                              /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
                              uVar16 = iVar7 - (int)unaff_x20;
                              uVar10 = (ulong)uVar16;
                              auVar30._8_4_ = uVar16;
                              auVar30._0_8_ = unaff_x21;
                              auVar30._12_4_ = 0;
                              pdVar11 = &MACH_HEADER.cputype;
                              puVar26 = &UNK_016ced4c;
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
                           (lVar20 = *(long *)(unaff_x19 + 0xe), lVar20 == 0))
                        goto code_r0x016ced84;
                        if (*(int *)(lVar20 + 0x18) != 0) {
                          pdVar17 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar19 + 0x10) + 0x18)
                                                          - *(int *)(lVar20 + 0x20));
                          unaff_x22 = (dword *)(ulong)unaff_x19[4];
                          pdVar11 = (dword *)((long)&MACH_HEADER.magic + 2);
                          unaff_x30 = &UNK_016cebcc;
                          pdVar18 = pdVar17;
                          unaff_x29 = pppppppuVar22;
                          goto code_r0x016cc634;
                        }
                      }
code_r0x016ced88:
                      uVar13 = func_0x00f78b24();
                      func_0x00f78ac0(uVar13,0);
                      pdVar18 = unaff_x20;
                    }
                    func_0x00f78a24(0x3d22a38);
                    uVar13 = func_0x00f78aec();
                    uVar14 = func_0x00f78a24(0x3d6cea8);
                    unaff_x19 = (dword *)0x0;
                    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                    uVar14 = func_0x00f78a24(0x3d56a30);
                    auVar32 = func_0x00f78ac0(uVar13,uVar14);
                    unaff_x20 = auVar32._0_8_;
                    puVar6 = auStack_250;
                    puStack_218 = &FlatBuffers_FlatBufferBuilder__Required;
                    unaff_x29 = &pppppppuStack_220;
                    uStack_244 = SUB84(unaff_x19,0);
                    lVar19 = *(long *)(unaff_x20 + 6);
                    pdStack_240 = unaff_x22;
                    pdStack_238 = unaff_x21;
                    pdStack_230 = pdVar18;
                    uStack_228 = uVar13;
                    pppppppuStack_220 = pppppppuVar22;
                    if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) {
                      func_0x00f78af4();
                      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_244,0);
                      uVar14 = func_0x00f78a24(0x3d6ce88);
                      uVar15 = func_0x00f78a24(0x3d66338);
                      lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                      func_0x00f78a24(0x3d22a38);
                      uVar10 = func_0x00f78aec();
                      uVar14 = 0;
                      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar19);
                      uVar13 = func_0x00f78a24(0x3d56a50);
                      puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
                      auVar31 = func_0x00f78ac0(uVar10,uVar13);
                      puVar6 = auStack_250;
                      do {
                        uVar21 = auVar31._8_8_;
                        lVar20 = auVar31._0_8_;
                        *(ulong *)(puVar6 + -0x20) = uVar10;
                        *(long *)(puVar6 + -0x18) = lVar19;
                        *(undefined8 ********)(puVar6 + -0x10) = unaff_x29;
                        *(undefined **)(puVar6 + -8) = puVar26;
                        unaff_x29 = (undefined8 *******)(puVar6 + -0x10);
                        if ((int)uVar14 == 0) {
                          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
                          if (*(long *)(lVar20 + 0x18) != 0) {
                            *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                                 *(undefined4 *)(lVar20 + 0x10);
                            return uVar10;
                          }
                        }
                        else if (lVar20 != 0) {
                          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
                          if ((*(long *)(lVar20 + 0x18) != 0) &&
                             (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                            uVar21 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10)
                                                  );
                            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                            goto code_r0x016cef70;
                          }
                        }
                        puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
                        auVar31 = func_0x00f78af4();
                        uVar14 = 0;
                        puVar6 = puVar6 + -0x20;
                        lVar19 = lVar20;
                        uVar10 = uVar21;
                      } while( true );
                    }
                    pdVar17 = (dword *)(ulong)(uint)(*(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                                                    auVar32._8_4_);
                    pdVar11 = &MACH_HEADER.cputype;
                    unaff_x30 = &UNK_016cee20;
                    pdVar18 = pdVar17;
                    goto code_r0x016cc634;
                  }
                  pdVar18 = &MACH_HEADER.cputype;
                }
                else {
                  pdVar18 = (dword *)((long)&MACH_HEADER.cputype + 1);
                }
              }
              else {
                pdVar18 = (dword *)((long)&MACH_HEADER.cputype + 2);
              }
            }
            else {
              pdVar18 = (dword *)((long)&MACH_HEADER.cputype + 3);
            }
            uVar10 = auVar29._0_8_;
            auVar31._8_8_ = pdVar18;
            auVar31._0_8_ = uVar10;
            param_4 = 0;
            pppppppuVar5[0xfffffffffffffffa] = (undefined1 ******)unaff_x22;
            pppppppuVar5[0xfffffffffffffffb] = (undefined1 ******)unaff_x21;
            pppppppuVar5[0xfffffffffffffffc] = (undefined1 ******)unaff_x20;
            pppppppuVar5[0xfffffffffffffffd] = (undefined1 ******)piVar9;
            pppppppuVar5[0xfffffffffffffffe] = (undefined1 ******)pppppppuVar5;
            pppppppuVar5[0xffffffffffffffff] = (undefined1 ******)puVar26;
            if ((auVar29._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
              return uVar10;
            }
            uVar14 = 0;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar10,auVar29._8_8_);
            ppppppuVar24 = (undefined8 ******)pppppppuVar5[0xfffffffffffffffe];
            ppppppuVar28 = (undefined8 ******)pppppppuVar5[0xffffffffffffffff];
            unaff_x20 = (dword *)pppppppuVar5[0xfffffffffffffffc];
            piVar9 = (int *)pppppppuVar5[0xfffffffffffffffd];
            unaff_x22 = (dword *)pppppppuVar5[0xfffffffffffffffa];
            unaff_x21 = (dword *)pppppppuVar5[0xfffffffffffffffb];
code_r0x016ce380:
            do {
              piVar12 = auVar31._8_8_;
              pppppppuVar5[0xfffffffffffffffc] = (undefined1 ******)unaff_x20;
              pppppppuVar5[0xfffffffffffffffd] = (undefined1 ******)piVar9;
              pppppppuVar5[0xfffffffffffffffe] = (undefined1 ******)ppppppuVar24;
              pppppppuVar5[0xffffffffffffffff] = (undefined1 ******)ppppppuVar28;
              puVar25 = pppppppuVar5 + 0xfffffffffffffffe;
              uVar16 = auVar31._8_4_;
              if ((int)uVar16 < *(int *)(auVar31._0_8_ + 0x30)) {
                unaff_x20 = *(dword **)(auVar31._0_8_ + 0x28);
                uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
                if (unaff_x20 == (dword *)0x0) goto code_r0x016ce410;
                if (uVar16 < unaff_x20[6]) {
                  unaff_x20[(long)(int)uVar16 + 8] = (dword)uVar10;
                  return uVar10;
                }
              }
              else {
                func_0x00f78a24(0x3d22738);
                piVar12 = (int *)func_0x00f78aec();
                uVar13 = func_0x00f78a24(0x3d6ceb8);
                uVar14 = 0;
                /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar12,uVar13);
                uVar13 = func_0x00f78a24(0x3d56a58);
                func_0x00f78ac0(piVar12,uVar13);
code_r0x016ce410:
                func_0x00f78af4();
              }
              uVar13 = func_0x00f78b24();
              puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
              auVar31 = func_0x00f78ac0(uVar13,0);
              puVar6 = auVar31._8_8_;
              auVar29._8_8_ = uVar14;
              auVar29._0_8_ = auVar31._0_8_;
              pppppppuVar5 = pppppppuVar5 + 0xfffffffffffffffc;
              piVar9 = piVar12;
code_r0x016ce420:
              uVar10 = auVar29._0_8_;
              auVar31._8_8_ = puVar6;
              auVar31._0_8_ = uVar10;
              pppppppuVar5[0xfffffffffffffffa] = (undefined1 ******)unaff_x22;
              pppppppuVar5[0xfffffffffffffffb] = (undefined1 ******)unaff_x21;
              pppppppuVar5[0xfffffffffffffffc] = (undefined1 ******)unaff_x20;
              pppppppuVar5[0xfffffffffffffffd] = (undefined1 ******)piVar9;
              pppppppuVar5[0xfffffffffffffffe] = (undefined1 ******)puVar25;
              pppppppuVar5[0xffffffffffffffff] = (undefined1 ******)puVar26;
              if ((auVar29._8_4_ == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
                return uVar10;
              }
              uVar14 = 0;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
              /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,auVar29._8_8_);
              unaff_x20 = (dword *)pppppppuVar5[0xfffffffffffffffc];
              piVar9 = (int *)pppppppuVar5[0xfffffffffffffffd];
              unaff_x22 = (dword *)pppppppuVar5[0xfffffffffffffffa];
              unaff_x21 = (dword *)pppppppuVar5[0xfffffffffffffffb];
              ppppppuVar24 = (undefined8 ******)pppppppuVar5[0xfffffffffffffffe];
              ppppppuVar28 = (undefined8 ******)pppppppuVar5[0xffffffffffffffff];
            } while( true );
          }
          pdVar17 = (dword *)(ulong)(uint)(*piVar9 + (int)uVar10);
          puVar3 = &stack0xffffffffffffff40;
          ppppuVar23 = appppuStack_d0[0];
          ppppuVar27 = appppuStack_d0[1];
        }
        else {
          pdVar17 = (dword *)(ulong)(*unaff_x19 + (int)uVar10);
          puVar3 = &stack0xffffffffffffff60;
          unaff_x19 = pdVar11;
          ppppuVar23 = ppppuStack_b0;
          ppppuVar27 = (undefined1 ****)puStack_a8;
        }
      }
      else {
        pdVar17 = (dword *)(ulong)(*pdVar11 + (int)uVar10);
        puVar3 = &stack0xffffffffffffff80;
        ppppuVar23 = ppppuStack_90;
        ppppuVar27 = (undefined1 ****)puStack_88;
      }
    }
    else {
      pdVar17 = (dword *)(ulong)(*unaff_x19 + (int)uVar10);
      puVar3 = &stack0xffffffffffffffa0;
      unaff_x19 = pdVar11;
      ppppuVar23 = ppppuStack_70;
      ppppuVar27 = (undefined1 ****)puStack_68;
    }
    puVar6 = puVar3 + -0x10;
    *(undefined1 *****)(puVar3 + -0x10) = ppppuVar23;
    *(undefined1 *****)(puVar3 + -8) = ppppuVar27;
    pdVar11 = &MACH_HEADER.cputype;
    unaff_x30 = &UNK_016ccdfc;
    unaff_x29 = (undefined8 *******)(puVar3 + -0x10);
  }
  else {
    pdVar17 = (dword *)(ulong)(uint)(*param_1 + iVar7);
    pdVar11 = &MACH_HEADER.cpusubtype;
    puVar6 = (undefined1 *)register0x00000008;
  }
code_r0x016cc634:
  auVar30._8_8_ = pdVar17;
  auVar30._0_8_ = lVar19;
  *(ulong *)(puVar6 + -0x40) = unaff_x24;
  *(dword **)(puVar6 + -0x38) = unaff_x23;
  *(dword **)(puVar6 + -0x30) = unaff_x22;
  *(dword **)(puVar6 + -0x28) = pdVar18;
  *(dword **)(puVar6 + -0x20) = unaff_x20;
  *(dword **)(puVar6 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar6 + -0x10) = unaff_x29;
  *(undefined **)(puVar6 + -8) = unaff_x30;
  pppppppuVar22 = (undefined8 *******)(puVar6 + -0x10);
  uVar10 = 0x3d201a0;
  if ((bRam0000000003eb5cd0 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd0 = 1;
  }
  puVar26 = &UNK_016cc68c;
  puVar2 = puVar6 + -0x40;
  unaff_x19 = pdVar17;
  unaff_x20 = pdVar11;
code_r0x016cc7a4:
  do {
    uVar21 = auVar30._0_8_;
    *(dword **)(puVar2 + -0x20) = unaff_x20;
    *(dword **)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar22;
    *(undefined **)(puVar2 + -8) = puVar26;
    if (auVar30._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      unaff_x19 = (dword *)func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(unaff_x19,0);
      uVar13 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(unaff_x19,uVar13);
      pdVar18 = pdVar11;
    }
    else {
      pdVar18 = pdVar11;
      if (*(long *)(uVar21 + 0x10) != 0) {
        if (auVar30._8_4_ <= *(int *)(*(long *)(uVar21 + 0x10) + 0x18) - (int)pdVar11) {
          return uVar21;
        }
        goto code_r0x016cc7d8;
      }
    }
    auVar30 = func_0x00f78af4();
    *(ulong *)(puVar2 + -0x50) = uVar10;
    *(ulong *)(puVar2 + -0x48) = uVar21;
    *(dword **)(puVar2 + -0x40) = unaff_x20;
    *(dword **)(puVar2 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
    pppppppuVar22 = (undefined8 *******)(puVar2 + -0x30);
    pdVar11 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar26 = &UNK_016cc834;
    puVar2 = puVar2 + -0x50;
    unaff_x19 = pdVar18;
    unaff_x20 = auVar30._8_8_;
  } while( true );
}



// ============================================================
// RVA: 0x1667a78 | Core.Services.EditorLeaderboard.get_Empty
// ============================================================

/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Services_EditorLeaderboard__get_Empty
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,ulong param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int ******ppppppiVar4;
  undefined1 *puVar5;
  short sVar6;
  int iVar9;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  short sVar7;
  short sVar8;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  dword *pdVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x20;
  undefined8 uVar23;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  int ***pppiVar25;
  int ******ppppppiVar26;
  int *****pppppiVar27;
  undefined *puVar28;
  int ***pppiVar29;
  int *****pppppiVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  ulong auStack_250 [4];
  undefined1 auStack_230 [12];
  int iStack_224;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  int *****pppppiStack_200;
  undefined *puStack_1f8;
  int ****ppppiStack_1b0;
  undefined *puStack_1a8;
  int ***pppiStack_1a0;
  undefined *puStack_198;
  ulong uStack_188;
  int *****apppppiStack_180 [6];
  int *****pppppiStack_130;
  undefined *puStack_128;
  int ****ppppiStack_d0;
  undefined *puStack_c8;
  int ***apppiStack_b0 [2];
  int ***pppiStack_90;
  undefined *puStack_88;
  int ***pppiStack_70;
  undefined *puStack_68;
  int ***pppiStack_50;
  undefined *puStack_48;
  int **ppiStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar9 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar13,0);
    return (ulong)(iVar9 != 0);
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_EditorLeaderboard__get_SortAscending;
  ppiStack_30 = (int **)&stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(piVar14 + 2) != 0) {
    iVar9 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(piVar14 + 2),*piVar14 + (int)uVar13,0);
    return (ulong)(iVar9 != 0);
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Services_EditorLeaderboard__get_RandomScoreMin;
  pppiStack_50 = &ppiStack_30;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffc0;
    pppiVar25 = pppiStack_50;
    pppiVar29 = (int ***)puStack_48;
FlatBuffers_ByteBuffer__GetInt:
    *(int ****)(puVar2 + -0x10) = pppiVar25;
    *(int ****)(puVar2 + -8) = pppiVar29;
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar9,4);
    return uVar13;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Services_EditorLeaderboard__get_RandomScoreMax;
  pppiStack_70 = (int ***)&stack0xffffffffffffffb0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xe,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffa0;
    pppiVar25 = pppiStack_70;
    pppiVar29 = (int ***)puStack_68;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_88 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMin;
  pppiStack_90 = (int ***)&stack0xffffffffffffff90;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0x10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffff80;
    pppiVar25 = pppiStack_90;
    pppiVar29 = (int ***)puStack_88;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar14 = (int *)func_0x00f78af4();
  apppiStack_b0[1] = (int ***)&Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMax;
  apppiStack_b0[0] = (int ***)&stack0xffffffffffffff70;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0x12,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffff60;
    pppiVar25 = apppiStack_b0[0];
    pppiVar29 = apppiStack_b0[1];
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar15 = (int *)func_0x00f78af4();
  puVar3 = &stack0xfffffffffffffee0;
  puStack_c8 = &Core_Services_EditorLeaderboard__CreateEditorLeaderboard;
  pppppiVar27 = &ppppiStack_d0;
  ppppiStack_d0 = apppiStack_b0;
  if (piVar15 != (int *)0x0) {
    puVar28 = &UNK_01667cc0;
    piVar14 = piVar15;
    uVar23 = param_4;
    unaff_x21 = param_5;
    unaff_x22 = param_6;
code_r0x016ce2a4:
    uVar16 = 0;
    ppppppiVar4 = (int ******)(puVar3 + -0x30);
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar23;
    *(int **)(puVar3 + -0x18) = piVar14;
    *(int ******)(puVar3 + -0x10) = pppppiVar27;
    *(undefined **)(puVar3 + -8) = puVar28;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar15);
    if (*(long *)(piVar15 + 10) != 0) {
      if (*(int *)(*(long *)(piVar15 + 10) + 0x18) < 8) {
        uVar23 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(piVar15 + 10) = uVar23;
      }
      piVar15[0xc] = 8;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar15);
      piVar15[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar32 = func_0x00f78af4();
    piVar14 = piVar15;
    pppppiVar27 = (int *****)(puVar3 + -0x10);
    pppppiVar30 = (int *****)&FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar32 = func_0x00f78af4();
  uVar13 = auVar32._0_8_;
  pppppiStack_130 = pppppiVar27;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_128 = &Core_Services_EditorLeaderboard__AddDuration;
    if ((auVar32._8_8_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar13,auVar32._8_8_);
    auVar32._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    auVar32._0_8_ = uVar13;
    ppppppiVar4 = (int ******)&stack0xfffffffffffffee0;
    pppppiVar27 = pppppiStack_130;
    pppppiVar30 = (int *****)puStack_128;
    goto code_r0x016ce380;
  }
  ppppppiVar4 = &stack0xfffffffffffffed0;
  puStack_128 = &Core_Services_EditorLeaderboard__AddDuration;
  puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar31 = func_0x00f78af4();
  if (auVar31._0_8_ == 0) {
    ppppppiVar4 = (int ******)&stack0xfffffffffffffec0;
    puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar31 = func_0x00f78af4();
    if (auVar31._0_8_ == 0) {
      ppppppiVar4 = (int ******)&stack0xfffffffffffffeb0;
      puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar31 = func_0x00f78af4();
      if (auVar31._0_8_ == 0) {
        ppppppiVar4 = apppppiStack_180 + 4;
        apppppiStack_180[5] = (int *****)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        apppppiStack_180[4] = (int *****)&stack0xfffffffffffffeb0;
        auVar31 = func_0x00f78af4();
        if (auVar31._0_8_ == 0) {
          apppppiStack_180[3] = (int *****)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
          apppppiStack_180[2] = (int *****)(apppppiStack_180 + 4);
          auVar32 = func_0x00f78af4();
          uVar16 = auVar32._8_8_;
          uVar13 = auVar32._0_8_;
          if (uVar13 != 0) {
            param_4 = 0;
            apppppiStack_180[1] = (int *****)&Core_Services_EditorLeaderboard__AddId;
            if ((auVar32._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
              return uVar13;
            }
            apppppiStack_180[0] = (int *****)(apppppiStack_180 + 2);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar13,uVar16,uVar16,0,0);
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar13;
            ppppppiVar4 = apppppiStack_180 + 2;
            pppppiVar27 = apppppiStack_180[0];
            pppppiVar30 = apppppiStack_180[1];
            goto code_r0x016ce380;
          }
          ppppppiVar4 = apppppiStack_180;
          ppppppiVar26 = apppppiStack_180;
          apppppiStack_180[1] = (int *****)&Core_Services_EditorLeaderboard__AddId;
          puVar28 = &Core_Services_EditorLeaderboard__AddSortAscending;
          apppppiStack_180[0] = (int *****)(apppppiStack_180 + 2);
          auVar31 = func_0x00f78af4();
          if (auVar31._0_8_ != 0) {
            puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          ppppppiVar4 = (int ******)&stack0xfffffffffffffe70;
          ppppppiVar26 = (int ******)&stack0xfffffffffffffe70;
          puVar28 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar31 = func_0x00f78af4();
          if (auVar31._0_8_ != 0) {
            puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_198 = &Core_Services_EditorLeaderboard__AddEmpty;
          pppiStack_1a0 = (int ***)&stack0xfffffffffffffe70;
          lVar20 = func_0x00f78af4();
          puVar3 = &stack0xfffffffffffffe40;
          puStack_1a8 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          pppppiVar27 = &ppppiStack_1b0;
          uVar23 = 0x3eb5000;
          ppppiStack_1b0 = &pppiStack_1a0;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            ppppiStack_1b0 = &pppiStack_1a0;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar20 == 0) {
            puVar28 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
            piVar15 = (int *)func_0x00f78af4();
            if (piVar15 == (int *)0x0) {
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 8);
            }
            piVar14 = (int *)0x0;
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
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar9 = (int)uVar13;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar21 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar24 = unaff_x22 - 8;
              if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
              iVar11 = *(int *)(lVar21 + unaff_x22 * 4);
              sVar6 = 0;
              if (iVar11 != 0) {
                sVar6 = (short)uVar13 - (short)iVar11;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar6);
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
              *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar1;
            } while (0 < (long)uVar24);
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
              uVar24 = 0;
              do {
                lVar21 = *(long *)(lVar20 + 0x18);
                if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
                   (lVar22 = *(long *)(lVar20 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar22 + 0x18) <= uVar24) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) -
                        *(int *)(lVar22 + uVar24 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar18 = *(uint *)(lVar20 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
                if (sVar6 == sVar7) {
                  if (sVar6 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar20 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar24) goto code_r0x016ced88;
                    iVar11 = *(int *)(unaff_x21 + uVar24 * 4 + 0x20);
                    if (iVar11 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar20 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar9;
                    *(int *)(lVar20 + 0x10) = iVar12;
                    iVar11 = iVar11 - iVar9;
                    goto code_r0x016ced3c;
                  }
                  iVar11 = 2;
                  while( true ) {
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar1 + iVar11,2);
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar18 + iVar11,2);
                    if (sVar7 != sVar8) break;
                    iVar11 = iVar11 + 2;
                    if (sVar6 <= iVar11) goto code_r0x016cec64;
                  }
                }
                uVar24 = uVar24 + 1;
                unaff_x22 = (ulong)*(int *)(lVar20 + 0x40);
              } while ((long)uVar24 < (long)unaff_x22);
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
                  iVar12 = iVar12 - iVar9;
                  iVar11 = iVar11 - iVar9;
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
            uVar23 = func_0x00f78b24();
            func_0x00f78ac0(uVar23,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar23 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6cea8);
          iVar9 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar23,uVar16);
          uVar16 = func_0x00f78a24(0x3d56a30);
          auVar33 = func_0x00f78ac0(uVar23,uVar16);
          puStack_1f8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppppiVar27 = (int *****)&pppppiStack_200;
          lVar20 = *(long *)(auVar33._0_8_ + 0x18);
          iStack_224 = iVar9;
          uStack_220 = unaff_x22;
          uStack_218 = unaff_x21;
          uStack_210 = uVar13;
          uStack_208 = uVar23;
          pppppiStack_200 = &ppppiStack_1b0;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar33._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar11,4);
            lVar20 = *(long *)(auVar33._0_8_ + 0x18);
            if (lVar20 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar11 - iVar12) + iVar9,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar23 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_224,0);
          uVar16 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar23,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar16 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
          uVar23 = func_0x00f78a24(0x3d56a50);
          puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar32 = func_0x00f78ac0(uVar13,uVar23);
          puVar5 = auStack_230;
          do {
            uVar24 = auVar32._8_8_;
            lVar21 = auVar32._0_8_;
            *(ulong *)(puVar5 + -0x20) = uVar13;
            *(long *)(puVar5 + -0x18) = lVar20;
            *(int ******)(puVar5 + -0x10) = pppppiVar27;
            *(undefined **)(puVar5 + -8) = puVar28;
            pppppiVar27 = (int *****)(puVar5 + -0x10);
            if ((int)uVar16 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
code_r0x016cef70:
              if (*(long *)(lVar21 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
                return uVar13;
              }
            }
            else if (lVar21 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
              if ((*(long *)(lVar21 + 0x18) != 0) &&
                 (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
                uVar24 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar24);
                goto code_r0x016cef70;
              }
            }
            puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar32 = func_0x00f78af4();
            uVar16 = 0;
            puVar5 = puVar5 + -0x20;
            lVar20 = lVar21;
            uVar13 = uVar24;
          } while( true );
        }
        pdVar19 = &MACH_HEADER.cputype;
      }
      else {
        pdVar19 = (dword *)((long)&MACH_HEADER.cputype + 1);
      }
    }
    else {
      pdVar19 = (dword *)((long)&MACH_HEADER.cputype + 2);
    }
  }
  else {
    pdVar19 = (dword *)((long)&MACH_HEADER.cputype + 3);
  }
  uVar13 = auVar31._0_8_;
  auVar32._8_8_ = pdVar19;
  auVar32._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)((long)ppppppiVar4 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppppiVar4 + -0x28) = unaff_x21;
  *(long *)((long)ppppppiVar4 + -0x20) = unaff_x20;
  *(int **)((long)ppppppiVar4 + -0x18) = piVar14;
  *(int *******)((long)ppppppiVar4 + -0x10) = ppppppiVar4;
  *(undefined **)((long)ppppppiVar4 + -8) = puVar28;
  if ((auVar31._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar16 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar31._8_8_);
  pppppiVar27 = *(int ******)((long)ppppppiVar4 + -0x10);
  pppppiVar30 = *(int ******)((long)ppppppiVar4 + -8);
  unaff_x20 = *(long *)((long)ppppppiVar4 + -0x20);
  piVar14 = *(int **)((long)ppppppiVar4 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppppiVar4 + -0x30);
  unaff_x21 = *(ulong *)((long)ppppppiVar4 + -0x28);
code_r0x016ce380:
  do {
    piVar15 = auVar32._8_8_;
    *(long *)((long)ppppppiVar4 + -0x20) = unaff_x20;
    *(int **)((long)ppppppiVar4 + -0x18) = piVar14;
    *(int ******)((long)ppppppiVar4 + -0x10) = pppppiVar27;
    *(int ******)((long)ppppppiVar4 + -8) = pppppiVar30;
    ppppppiVar26 = (int ******)((long)ppppppiVar4 + -0x10);
    uVar18 = auVar32._8_4_;
    if ((int)uVar18 < *(int *)(auVar32._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar32._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar15 = (int *)func_0x00f78aec();
      uVar23 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar15,uVar23);
      uVar23 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar15,uVar23);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar23 = func_0x00f78b24();
    puVar28 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar32 = func_0x00f78ac0(uVar23,0);
    puVar5 = auVar32._8_8_;
    auVar31._8_8_ = uVar16;
    auVar31._0_8_ = auVar32._0_8_;
    ppppppiVar4 = (int ******)((long)ppppppiVar4 + -0x20);
    piVar14 = piVar15;
code_r0x016ce420:
    uVar13 = auVar31._0_8_;
    auVar32._8_8_ = puVar5;
    auVar32._0_8_ = uVar13;
    *(ulong *)((long)ppppppiVar4 + -0x30) = unaff_x22;
    *(ulong *)((long)ppppppiVar4 + -0x28) = unaff_x21;
    *(long *)((long)ppppppiVar4 + -0x20) = unaff_x20;
    *(int **)((long)ppppppiVar4 + -0x18) = piVar14;
    *(int *******)((long)ppppppiVar4 + -0x10) = ppppppiVar26;
    *(undefined **)((long)ppppppiVar4 + -8) = puVar28;
    if ((auVar31._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar31._8_8_);
    unaff_x20 = *(long *)((long)ppppppiVar4 + -0x20);
    piVar14 = *(int **)((long)ppppppiVar4 + -0x18);
    unaff_x22 = *(ulong *)((long)ppppppiVar4 + -0x30);
    unaff_x21 = *(ulong *)((long)ppppppiVar4 + -0x28);
    pppppiVar27 = *(int ******)((long)ppppppiVar4 + -0x10);
    pppppiVar30 = (int *****)*(undefined **)((long)ppppppiVar4 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667acc | Core.Services.EditorLeaderboard.get_SortAscending
// ============================================================

/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Services_EditorLeaderboard__get_SortAscending
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,ulong param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int ******ppppppiVar4;
  undefined1 *puVar5;
  short sVar6;
  int iVar9;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  short sVar7;
  short sVar8;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  dword *pdVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x20;
  undefined8 uVar23;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  int ***pppiVar25;
  int ******ppppppiVar26;
  int *****pppppiVar27;
  undefined *puVar28;
  int ***pppiVar29;
  int *****pppppiVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  ulong auStack_230 [4];
  undefined1 auStack_210 [12];
  int iStack_204;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  int *****pppppiStack_1e0;
  undefined *puStack_1d8;
  int ****ppppiStack_190;
  undefined *puStack_188;
  int ***pppiStack_180;
  undefined *puStack_178;
  ulong uStack_168;
  int *****apppppiStack_160 [6];
  int *****pppppiStack_110;
  undefined *puStack_108;
  int ****ppppiStack_b0;
  undefined *puStack_a8;
  int ***apppiStack_90 [2];
  int ***pppiStack_70;
  undefined *puStack_68;
  int ***pppiStack_50;
  undefined *puStack_48;
  int ***pppiStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar9 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar13,0);
    return (ulong)(iVar9 != 0);
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_EditorLeaderboard__get_RandomScoreMin;
  pppiStack_30 = (int ***)&stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffe0;
    pppiVar25 = pppiStack_30;
    pppiVar29 = (int ***)puStack_28;
FlatBuffers_ByteBuffer__GetInt:
    *(int ****)(puVar2 + -0x10) = pppiVar25;
    *(int ****)(puVar2 + -8) = pppiVar29;
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar9,4);
    return uVar13;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Services_EditorLeaderboard__get_RandomScoreMax;
  pppiStack_50 = (int ***)&stack0xffffffffffffffd0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xe,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffc0;
    pppiVar25 = pppiStack_50;
    pppiVar29 = (int ***)puStack_48;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMin;
  pppiStack_70 = (int ***)&stack0xffffffffffffffb0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0x10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffa0;
    pppiVar25 = pppiStack_70;
    pppiVar29 = (int ***)puStack_68;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar14 = (int *)func_0x00f78af4();
  apppiStack_90[1] = (int ***)&Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMax;
  apppiStack_90[0] = (int ***)&stack0xffffffffffffff90;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0x12,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar20 = *(long *)(piVar14 + 2);
  if (lVar20 != 0) {
    iVar9 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffff80;
    pppiVar25 = apppiStack_90[0];
    pppiVar29 = apppiStack_90[1];
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar15 = (int *)func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff00;
  puStack_a8 = &Core_Services_EditorLeaderboard__CreateEditorLeaderboard;
  pppppiVar27 = &ppppiStack_b0;
  ppppiStack_b0 = apppiStack_90;
  if (piVar15 != (int *)0x0) {
    puVar28 = &UNK_01667cc0;
    piVar14 = piVar15;
    uVar23 = param_4;
    unaff_x21 = param_5;
    unaff_x22 = param_6;
code_r0x016ce2a4:
    uVar16 = 0;
    ppppppiVar4 = (int ******)(puVar3 + -0x30);
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar23;
    *(int **)(puVar3 + -0x18) = piVar14;
    *(int ******)(puVar3 + -0x10) = pppppiVar27;
    *(undefined **)(puVar3 + -8) = puVar28;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar15);
    if (*(long *)(piVar15 + 10) != 0) {
      if (*(int *)(*(long *)(piVar15 + 10) + 0x18) < 8) {
        uVar23 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(piVar15 + 10) = uVar23;
      }
      piVar15[0xc] = 8;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar15);
      piVar15[0xd] = (int)uVar13;
      return uVar13;
    }
    auVar32 = func_0x00f78af4();
    piVar14 = piVar15;
    pppppiVar27 = (int *****)(puVar3 + -0x10);
    pppppiVar30 = (int *****)&FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar32 = func_0x00f78af4();
  uVar13 = auVar32._0_8_;
  pppppiStack_110 = pppppiVar27;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_108 = &Core_Services_EditorLeaderboard__AddDuration;
    if ((auVar32._8_8_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar13,auVar32._8_8_);
    auVar32._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    auVar32._0_8_ = uVar13;
    ppppppiVar4 = (int ******)&stack0xffffffffffffff00;
    pppppiVar27 = pppppiStack_110;
    pppppiVar30 = (int *****)puStack_108;
    goto code_r0x016ce380;
  }
  ppppppiVar4 = &stack0xfffffffffffffef0;
  puStack_108 = &Core_Services_EditorLeaderboard__AddDuration;
  puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar31 = func_0x00f78af4();
  if (auVar31._0_8_ == 0) {
    ppppppiVar4 = (int ******)&stack0xfffffffffffffee0;
    puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar31 = func_0x00f78af4();
    if (auVar31._0_8_ == 0) {
      ppppppiVar4 = (int ******)&stack0xfffffffffffffed0;
      puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar31 = func_0x00f78af4();
      if (auVar31._0_8_ == 0) {
        ppppppiVar4 = apppppiStack_160 + 4;
        apppppiStack_160[5] = (int *****)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar28 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        apppppiStack_160[4] = (int *****)&stack0xfffffffffffffed0;
        auVar31 = func_0x00f78af4();
        if (auVar31._0_8_ == 0) {
          apppppiStack_160[3] = (int *****)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
          apppppiStack_160[2] = (int *****)(apppppiStack_160 + 4);
          auVar32 = func_0x00f78af4();
          uVar16 = auVar32._8_8_;
          uVar13 = auVar32._0_8_;
          if (uVar13 != 0) {
            param_4 = 0;
            apppppiStack_160[1] = (int *****)&Core_Services_EditorLeaderboard__AddId;
            if ((auVar32._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
              return uVar13;
            }
            apppppiStack_160[0] = (int *****)(apppppiStack_160 + 2);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar13,uVar16,uVar16,0,0);
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar13;
            ppppppiVar4 = apppppiStack_160 + 2;
            pppppiVar27 = apppppiStack_160[0];
            pppppiVar30 = apppppiStack_160[1];
            goto code_r0x016ce380;
          }
          ppppppiVar4 = apppppiStack_160;
          ppppppiVar26 = apppppiStack_160;
          apppppiStack_160[1] = (int *****)&Core_Services_EditorLeaderboard__AddId;
          puVar28 = &Core_Services_EditorLeaderboard__AddSortAscending;
          apppppiStack_160[0] = (int *****)(apppppiStack_160 + 2);
          auVar31 = func_0x00f78af4();
          if (auVar31._0_8_ != 0) {
            puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          ppppppiVar4 = (int ******)&stack0xfffffffffffffe90;
          ppppppiVar26 = (int ******)&stack0xfffffffffffffe90;
          puVar28 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar31 = func_0x00f78af4();
          if (auVar31._0_8_ != 0) {
            puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_178 = &Core_Services_EditorLeaderboard__AddEmpty;
          pppiStack_180 = (int ***)&stack0xfffffffffffffe90;
          lVar20 = func_0x00f78af4();
          puVar3 = &stack0xfffffffffffffe60;
          puStack_188 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          pppppiVar27 = &ppppiStack_190;
          uVar23 = 0x3eb5000;
          ppppiStack_190 = &pppiStack_180;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            ppppiStack_190 = &pppiStack_180;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar20 == 0) {
            puVar28 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
            piVar15 = (int *)func_0x00f78af4();
            if (piVar15 == (int *)0x0) {
              lVar20 = func_0x00f78af4();
              return *(ulong *)(lVar20 + 8);
            }
            piVar14 = (int *)0x0;
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
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar9 = (int)uVar13;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar21 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar24 = unaff_x22 - 8;
              if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
              iVar11 = *(int *)(lVar21 + unaff_x22 * 4);
              sVar6 = 0;
              if (iVar11 != 0) {
                sVar6 = (short)uVar13 - (short)iVar11;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar6);
              lVar21 = *(long *)(lVar20 + 0x28);
              if (lVar21 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x016ced88;
              *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar1;
            } while (0 < (long)uVar24);
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
              uVar24 = 0;
              do {
                lVar21 = *(long *)(lVar20 + 0x18);
                if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
                   (lVar22 = *(long *)(lVar20 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar22 + 0x18) <= uVar24) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) -
                        *(int *)(lVar22 + uVar24 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar18 = *(uint *)(lVar20 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
                if (sVar6 == sVar7) {
                  if (sVar6 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar20 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar24) goto code_r0x016ced88;
                    iVar11 = *(int *)(unaff_x21 + uVar24 * 4 + 0x20);
                    if (iVar11 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar20 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar9;
                    *(int *)(lVar20 + 0x10) = iVar12;
                    iVar11 = iVar11 - iVar9;
                    goto code_r0x016ced3c;
                  }
                  iVar11 = 2;
                  while( true ) {
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar1 + iVar11,2);
                    if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar18 + iVar11,2);
                    if (sVar7 != sVar8) break;
                    iVar11 = iVar11 + 2;
                    if (sVar6 <= iVar11) goto code_r0x016cec64;
                  }
                }
                uVar24 = uVar24 + 1;
                unaff_x22 = (ulong)*(int *)(lVar20 + 0x40);
              } while ((long)uVar24 < (long)unaff_x22);
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
                  iVar12 = iVar12 - iVar9;
                  iVar11 = iVar11 - iVar9;
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
            uVar23 = func_0x00f78b24();
            func_0x00f78ac0(uVar23,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar23 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6cea8);
          iVar9 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar23,uVar16);
          uVar16 = func_0x00f78a24(0x3d56a30);
          auVar33 = func_0x00f78ac0(uVar23,uVar16);
          puStack_1d8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppppiVar27 = (int *****)&pppppiStack_1e0;
          lVar20 = *(long *)(auVar33._0_8_ + 0x18);
          iStack_204 = iVar9;
          uStack_200 = unaff_x22;
          uStack_1f8 = unaff_x21;
          uStack_1f0 = uVar13;
          uStack_1e8 = uVar23;
          pppppiStack_1e0 = &ppppiStack_190;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar33._8_4_;
            iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar11,4);
            lVar20 = *(long *)(auVar33._0_8_ + 0x18);
            if (lVar20 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar11 - iVar12) + iVar9,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar23 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_204,0);
          uVar16 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar23,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar16 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
          uVar23 = func_0x00f78a24(0x3d56a50);
          puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar32 = func_0x00f78ac0(uVar13,uVar23);
          puVar5 = auStack_210;
          do {
            uVar24 = auVar32._8_8_;
            lVar21 = auVar32._0_8_;
            *(ulong *)(puVar5 + -0x20) = uVar13;
            *(long *)(puVar5 + -0x18) = lVar20;
            *(int ******)(puVar5 + -0x10) = pppppiVar27;
            *(undefined **)(puVar5 + -8) = puVar28;
            pppppiVar27 = (int *****)(puVar5 + -0x10);
            if ((int)uVar16 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
code_r0x016cef70:
              if (*(long *)(lVar21 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
                return uVar13;
              }
            }
            else if (lVar21 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar24);
              if ((*(long *)(lVar21 + 0x18) != 0) &&
                 (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
                uVar24 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar24);
                goto code_r0x016cef70;
              }
            }
            puVar28 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar32 = func_0x00f78af4();
            uVar16 = 0;
            puVar5 = puVar5 + -0x20;
            lVar20 = lVar21;
            uVar13 = uVar24;
          } while( true );
        }
        pdVar19 = &MACH_HEADER.cputype;
      }
      else {
        pdVar19 = (dword *)((long)&MACH_HEADER.cputype + 1);
      }
    }
    else {
      pdVar19 = (dword *)((long)&MACH_HEADER.cputype + 2);
    }
  }
  else {
    pdVar19 = (dword *)((long)&MACH_HEADER.cputype + 3);
  }
  uVar13 = auVar31._0_8_;
  auVar32._8_8_ = pdVar19;
  auVar32._0_8_ = uVar13;
  param_4 = 0;
  *(ulong *)((long)ppppppiVar4 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppppiVar4 + -0x28) = unaff_x21;
  *(long *)((long)ppppppiVar4 + -0x20) = unaff_x20;
  *(int **)((long)ppppppiVar4 + -0x18) = piVar14;
  *(int *******)((long)ppppppiVar4 + -0x10) = ppppppiVar4;
  *(undefined **)((long)ppppppiVar4 + -8) = puVar28;
  if ((auVar31._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar16 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar31._8_8_);
  pppppiVar27 = *(int ******)((long)ppppppiVar4 + -0x10);
  pppppiVar30 = *(int ******)((long)ppppppiVar4 + -8);
  unaff_x20 = *(long *)((long)ppppppiVar4 + -0x20);
  piVar14 = *(int **)((long)ppppppiVar4 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppppiVar4 + -0x30);
  unaff_x21 = *(ulong *)((long)ppppppiVar4 + -0x28);
code_r0x016ce380:
  do {
    piVar15 = auVar32._8_8_;
    *(long *)((long)ppppppiVar4 + -0x20) = unaff_x20;
    *(int **)((long)ppppppiVar4 + -0x18) = piVar14;
    *(int ******)((long)ppppppiVar4 + -0x10) = pppppiVar27;
    *(int ******)((long)ppppppiVar4 + -8) = pppppiVar30;
    ppppppiVar26 = (int ******)((long)ppppppiVar4 + -0x10);
    uVar18 = auVar32._8_4_;
    if ((int)uVar18 < *(int *)(auVar32._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar32._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar15 = (int *)func_0x00f78aec();
      uVar23 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar15,uVar23);
      uVar23 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar15,uVar23);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar23 = func_0x00f78b24();
    puVar28 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar32 = func_0x00f78ac0(uVar23,0);
    puVar5 = auVar32._8_8_;
    auVar31._8_8_ = uVar16;
    auVar31._0_8_ = auVar32._0_8_;
    ppppppiVar4 = (int ******)((long)ppppppiVar4 + -0x20);
    piVar14 = piVar15;
code_r0x016ce420:
    uVar13 = auVar31._0_8_;
    auVar32._8_8_ = puVar5;
    auVar32._0_8_ = uVar13;
    *(ulong *)((long)ppppppiVar4 + -0x30) = unaff_x22;
    *(ulong *)((long)ppppppiVar4 + -0x28) = unaff_x21;
    *(long *)((long)ppppppiVar4 + -0x20) = unaff_x20;
    *(int **)((long)ppppppiVar4 + -0x18) = piVar14;
    *(int *******)((long)ppppppiVar4 + -0x10) = ppppppiVar26;
    *(undefined **)((long)ppppppiVar4 + -8) = puVar28;
    if ((auVar31._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar16 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar31._8_8_);
    unaff_x20 = *(long *)((long)ppppppiVar4 + -0x20);
    piVar14 = *(int **)((long)ppppppiVar4 + -0x18);
    unaff_x22 = *(ulong *)((long)ppppppiVar4 + -0x30);
    unaff_x21 = *(ulong *)((long)ppppppiVar4 + -0x28);
    pppppiVar27 = *(int ******)((long)ppppppiVar4 + -0x10);
    pppppiVar30 = (int *****)*(undefined **)((long)ppppppiVar4 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667b20 | Core.Services.EditorLeaderboard.get_RandomScoreMin
// ============================================================

/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__get_RandomScoreMin
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,ulong param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  dword *pdVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long unaff_x20;
  undefined8 uVar22;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar24;
  undefined8 ****ppppuVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_210 [4];
  undefined1 auStack_1f0 [12];
  int iStack_1e4;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  ulong uStack_148;
  undefined8 ****appppuStack_140 [6];
  undefined8 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(param_1 + 2);
  if (lVar18 != 0) {
    iVar21 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetInt:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar21,4);
    return uVar11;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_EditorLeaderboard__get_RandomScoreMax;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(piVar12 + 2);
  if (lVar18 != 0) {
    iVar21 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMin;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(piVar12 + 2);
  if (lVar18 != 0) {
    iVar21 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMax;
  ppppuStack_70 = &ppppuStack_50;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(piVar12 + 2);
  if (lVar18 != 0) {
    iVar21 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 *****)ppppuStack_70;
    unaff_x30 = puStack_68;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar13 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff20;
  puStack_88 = &Core_Services_EditorLeaderboard__CreateEditorLeaderboard;
  pppppuVar24 = &ppppuStack_90;
  ppppuStack_90 = &ppppuStack_70;
  if (piVar13 != (int *)0x0) {
    puVar26 = &UNK_01667cc0;
    piVar12 = piVar13;
    uVar22 = param_4;
    unaff_x21 = param_5;
    unaff_x22 = param_6;
code_r0x016ce2a4:
    uVar14 = 0;
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar22;
    *(int **)(puVar2 + -0x18) = piVar12;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar26;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 8) {
        uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(piVar13 + 10) = uVar22;
      }
      piVar13[0xc] = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar11;
      return uVar11;
    }
    auVar28 = func_0x00f78af4();
    piVar12 = piVar13;
    pppppuVar24 = (undefined8 *****)(puVar2 + -0x10);
    ppppuVar25 = (undefined8 ****)&FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar28 = func_0x00f78af4();
  uVar11 = auVar28._0_8_;
  ppppuStack_f0 = pppppuVar24;
  if (uVar11 != 0) {
    param_4 = 0;
    puStack_e8 = &Core_Services_EditorLeaderboard__AddDuration;
    if ((auVar28._8_8_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar11,auVar28._8_8_);
    auVar28._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    auVar28._0_8_ = uVar11;
    pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff20;
    pppppuVar24 = (undefined8 *****)ppppuStack_f0;
    ppppuVar25 = (undefined8 ****)puStack_e8;
    goto code_r0x016ce380;
  }
  pppppuVar3 = &ppppuStack_f0;
  puStack_e8 = &Core_Services_EditorLeaderboard__AddDuration;
  puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff00;
    puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      pppppuVar3 = (undefined8 *****)&stack0xfffffffffffffef0;
      puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar27 = func_0x00f78af4();
      if (auVar27._0_8_ == 0) {
        pppppuVar3 = appppuStack_140 + 4;
        appppuStack_140[5] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        appppuStack_140[4] = (undefined8 ****)&stack0xfffffffffffffef0;
        auVar27 = func_0x00f78af4();
        if (auVar27._0_8_ == 0) {
          appppuStack_140[3] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
          appppuStack_140[2] = appppuStack_140 + 4;
          auVar28 = func_0x00f78af4();
          uVar14 = auVar28._8_8_;
          uVar11 = auVar28._0_8_;
          if (uVar11 != 0) {
            param_4 = 0;
            appppuStack_140[1] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddId;
            if ((auVar28._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
              return uVar11;
            }
            appppuStack_140[0] = appppuStack_140 + 2;
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar14,uVar14,0,0);
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar11;
            pppppuVar3 = appppuStack_140 + 2;
            pppppuVar24 = (undefined8 *****)appppuStack_140[0];
            ppppuVar25 = appppuStack_140[1];
            goto code_r0x016ce380;
          }
          pppppuVar3 = appppuStack_140;
          pppppuVar24 = appppuStack_140;
          appppuStack_140[1] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddId;
          puVar26 = &Core_Services_EditorLeaderboard__AddSortAscending;
          appppuStack_140[0] = appppuStack_140 + 2;
          auVar27 = func_0x00f78af4();
          if (auVar27._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          pppppuVar3 = (undefined8 *****)&stack0xfffffffffffffeb0;
          pppppuVar24 = (undefined8 *****)&stack0xfffffffffffffeb0;
          puVar26 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar27 = func_0x00f78af4();
          if (auVar27._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_158 = &Core_Services_EditorLeaderboard__AddEmpty;
          ppuStack_160 = (undefined8 **)&stack0xfffffffffffffeb0;
          lVar18 = func_0x00f78af4();
          puVar2 = &stack0xfffffffffffffe80;
          puStack_168 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          pppppuVar24 = (undefined8 *****)&pppuStack_170;
          uVar22 = 0x3eb5000;
          pppuStack_170 = &ppuStack_160;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            pppuStack_170 = &ppuStack_160;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar18 == 0) {
            puVar26 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
            piVar13 = (int *)func_0x00f78af4();
            if (piVar13 == (int *)0x0) {
              lVar18 = func_0x00f78af4();
              return *(ulong *)(lVar18 + 8);
            }
            piVar12 = (int *)0x0;
            goto code_r0x016ce2a4;
          }
          uVar11 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar18 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
            unaff_x21 = (ulong)*(uint *)(lVar18 + 0x30);
            uVar16 = *(uint *)(lVar18 + 0x30) - 1;
            if (-2 < (int)uVar16) {
              uVar16 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar16;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar21 = (int)uVar11;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar19 = *(long *)(lVar18 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar23 = unaff_x22 - 8;
              if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar11 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)sVar5);
              lVar19 = *(long *)(lVar18 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
              *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar16 = uVar1;
            } while (0 < (long)uVar23);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar18 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)((short)uVar11 - (short)uVar8));
            uVar16 = uVar16 * 2 + 6;
            unaff_x21 = (ulong)uVar16;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)uVar16);
            unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
            if (0 < (int)*(uint *)(lVar18 + 0x40)) {
              uVar23 = 0;
              do {
                lVar19 = *(long *)(lVar18 + 0x18);
                if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                   (lVar20 = *(long *)(lVar18 + 0x38), lVar20 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                        *(int *)(lVar20 + uVar23 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar16 = *(uint *)(lVar18 + 0x10);
                unaff_x22 = (ulong)uVar16;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar18 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar18 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar21;
                    *(int *)(lVar18 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar21;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar1 + iVar9,2);
                    if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar16 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar23 = uVar23 + 1;
                unaff_x22 = (ulong)*(int *)(lVar18 + 0x40);
              } while ((long)uVar23 < (long)unaff_x22);
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
                lVar19 = *(long *)(lVar18 + 0x38);
                if (lVar19 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                *(ulong *)(lVar18 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
              }
              uVar16 = (uint)unaff_x22;
              *(uint *)(lVar18 + 0x40) = uVar16 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar18 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
                  iVar10 = iVar10 - iVar21;
                  iVar9 = iVar9 - iVar21;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                  *(undefined4 *)(lVar18 + 0x30) = 0xffffffff;
                  return uVar11;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar22 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6cea8);
          iVar21 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,uVar14);
          uVar14 = func_0x00f78a24(0x3d56a30);
          auVar29 = func_0x00f78ac0(uVar22,uVar14);
          puStack_1b8 = &FlatBuffers_FlatBufferBuilder__Required;
          ppppuVar25 = &pppuStack_1c0;
          lVar18 = *(long *)(auVar29._0_8_ + 0x18);
          iStack_1e4 = iVar21;
          uStack_1e0 = unaff_x22;
          uStack_1d8 = unaff_x21;
          uStack_1d0 = uVar11;
          uStack_1c8 = uVar22;
          pppuStack_1c0 = &pppuStack_170;
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - auVar29._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar9,4);
            lVar18 = *(long *)(auVar29._0_8_ + 0x18);
            if (lVar18 != 0) {
              uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,(iVar9 - iVar10) + iVar21,2);
              if ((uVar11 & 0xffff) != 0) {
                return uVar11;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1e4,0);
          uVar14 = func_0x00f78a24(0x3d6ce88);
          uVar15 = func_0x00f78a24(0x3d66338);
          lVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar22,uVar15,0);
          func_0x00f78a24(0x3d22a38);
          uVar11 = func_0x00f78aec();
          uVar14 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar18);
          uVar22 = func_0x00f78a24(0x3d56a50);
          puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar28 = func_0x00f78ac0(uVar11,uVar22);
          puVar4 = auStack_1f0;
          do {
            uVar23 = auVar28._8_8_;
            lVar19 = auVar28._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar11;
            *(long *)(puVar4 + -0x18) = lVar18;
            *(undefined8 *****)(puVar4 + -0x10) = ppppuVar25;
            *(undefined **)(puVar4 + -8) = puVar26;
            ppppuVar25 = (undefined8 ****)(puVar4 + -0x10);
            if ((int)uVar14 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
              uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
code_r0x016cef70:
              if (*(long *)(lVar19 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
                return uVar11;
              }
            }
            else if (lVar19 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
              if ((*(long *)(lVar19 + 0x18) != 0) &&
                 (lVar18 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar18 != 0)) {
                uVar23 = (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(lVar19 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar23);
                goto code_r0x016cef70;
              }
            }
            puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar28 = func_0x00f78af4();
            uVar14 = 0;
            puVar4 = puVar4 + -0x20;
            lVar18 = lVar19;
            uVar11 = uVar23;
          } while( true );
        }
        pdVar17 = &MACH_HEADER.cputype;
      }
      else {
        pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 1);
      }
    }
    else {
      pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 2);
    }
  }
  else {
    pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 3);
  }
  uVar11 = auVar27._0_8_;
  auVar28._8_8_ = pdVar17;
  auVar28._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar3;
  *(undefined **)((long)pppppuVar3 + -8) = puVar26;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar11,auVar27._8_8_);
  pppppuVar24 = *(undefined8 ******)((long)pppppuVar3 + -0x10);
  ppppuVar25 = *(undefined8 *****)((long)pppppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppppuVar3 + -0x20);
  piVar12 = *(int **)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    piVar13 = auVar28._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar3 + -0x18) = piVar12;
    *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar24;
    *(undefined8 *****)((long)pppppuVar3 + -8) = ppppuVar25;
    pppppuVar24 = (undefined8 *****)((long)pppppuVar3 + -0x10);
    uVar16 = auVar28._8_4_;
    if ((int)uVar16 < *(int *)(auVar28._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar28._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar13 = (int *)func_0x00f78aec();
      uVar22 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar22);
      uVar22 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar13,uVar22);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar22 = func_0x00f78b24();
    puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar28 = func_0x00f78ac0(uVar22,0);
    puVar4 = auVar28._8_8_;
    auVar27._8_8_ = uVar14;
    auVar27._0_8_ = auVar28._0_8_;
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
    piVar12 = piVar13;
code_r0x016ce420:
    uVar11 = auVar27._0_8_;
    auVar28._8_8_ = puVar4;
    auVar28._0_8_ = uVar11;
    *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar3 + -0x18) = piVar12;
    *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar24;
    *(undefined **)((long)pppppuVar3 + -8) = puVar26;
    if ((auVar27._8_4_ == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,auVar27._8_8_);
    unaff_x20 = *(long *)((long)pppppuVar3 + -0x20);
    piVar12 = *(int **)((long)pppppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppppuVar3 + -0x28);
    pppppuVar24 = *(undefined8 ******)((long)pppppuVar3 + -0x10);
    ppppuVar25 = (undefined8 ****)*(undefined **)((long)pppppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667b74 | Core.Services.EditorLeaderboard.get_RandomScoreMax
// ============================================================

/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__get_RandomScoreMax
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,ulong param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  dword *pdVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long unaff_x20;
  undefined8 uVar22;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar24;
  undefined8 ****ppppuVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_1f0 [4];
  undefined1 auStack_1d0 [12];
  int iStack_1c4;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  ulong uStack_128;
  undefined8 ****appppuStack_120 [6];
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(param_1 + 2);
  if (lVar18 != 0) {
    iVar21 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetInt:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar21,4);
    return uVar11;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMin;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(piVar12 + 2);
  if (lVar18 != 0) {
    iVar21 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMax;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(piVar12 + 2);
  if (lVar18 != 0) {
    iVar21 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar13 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff40;
  puStack_68 = &Core_Services_EditorLeaderboard__CreateEditorLeaderboard;
  pppppuVar24 = &ppppuStack_70;
  ppppuStack_70 = &ppppuStack_50;
  if (piVar13 != (int *)0x0) {
    puVar26 = &UNK_01667cc0;
    piVar12 = piVar13;
    uVar22 = param_4;
    unaff_x21 = param_5;
    unaff_x22 = param_6;
code_r0x016ce2a4:
    uVar14 = 0;
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar22;
    *(int **)(puVar2 + -0x18) = piVar12;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar26;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 8) {
        uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(piVar13 + 10) = uVar22;
      }
      piVar13[0xc] = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar11;
      return uVar11;
    }
    auVar28 = func_0x00f78af4();
    piVar12 = piVar13;
    pppppuVar24 = (undefined8 *****)(puVar2 + -0x10);
    ppppuVar25 = (undefined8 ****)&FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar28 = func_0x00f78af4();
  uVar11 = auVar28._0_8_;
  ppppuStack_d0 = pppppuVar24;
  if (uVar11 != 0) {
    param_4 = 0;
    puStack_c8 = &Core_Services_EditorLeaderboard__AddDuration;
    if ((auVar28._8_8_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar11,auVar28._8_8_);
    auVar28._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    auVar28._0_8_ = uVar11;
    pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff40;
    pppppuVar24 = (undefined8 *****)ppppuStack_d0;
    ppppuVar25 = (undefined8 ****)puStack_c8;
    goto code_r0x016ce380;
  }
  pppppuVar3 = &ppppuStack_d0;
  puStack_c8 = &Core_Services_EditorLeaderboard__AddDuration;
  puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff20;
    puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff10;
      puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar27 = func_0x00f78af4();
      if (auVar27._0_8_ == 0) {
        pppppuVar3 = appppuStack_120 + 4;
        appppuStack_120[5] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        appppuStack_120[4] = (undefined8 ****)&stack0xffffffffffffff10;
        auVar27 = func_0x00f78af4();
        if (auVar27._0_8_ == 0) {
          appppuStack_120[3] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
          appppuStack_120[2] = appppuStack_120 + 4;
          auVar28 = func_0x00f78af4();
          uVar14 = auVar28._8_8_;
          uVar11 = auVar28._0_8_;
          if (uVar11 != 0) {
            param_4 = 0;
            appppuStack_120[1] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddId;
            if ((auVar28._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
              return uVar11;
            }
            appppuStack_120[0] = appppuStack_120 + 2;
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar14,uVar14,0,0);
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar11;
            pppppuVar3 = appppuStack_120 + 2;
            pppppuVar24 = (undefined8 *****)appppuStack_120[0];
            ppppuVar25 = appppuStack_120[1];
            goto code_r0x016ce380;
          }
          pppppuVar3 = appppuStack_120;
          pppppuVar24 = appppuStack_120;
          appppuStack_120[1] = (undefined8 ****)&Core_Services_EditorLeaderboard__AddId;
          puVar26 = &Core_Services_EditorLeaderboard__AddSortAscending;
          appppuStack_120[0] = appppuStack_120 + 2;
          auVar27 = func_0x00f78af4();
          if (auVar27._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          pppppuVar3 = (undefined8 *****)&stack0xfffffffffffffed0;
          pppppuVar24 = (undefined8 *****)&stack0xfffffffffffffed0;
          puVar26 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar27 = func_0x00f78af4();
          if (auVar27._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_138 = &Core_Services_EditorLeaderboard__AddEmpty;
          ppuStack_140 = (undefined8 **)&stack0xfffffffffffffed0;
          lVar18 = func_0x00f78af4();
          puVar2 = &stack0xfffffffffffffea0;
          puStack_148 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          pppppuVar24 = (undefined8 *****)&pppuStack_150;
          uVar22 = 0x3eb5000;
          pppuStack_150 = &ppuStack_140;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            pppuStack_150 = &ppuStack_140;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar18 == 0) {
            puVar26 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
            piVar13 = (int *)func_0x00f78af4();
            if (piVar13 == (int *)0x0) {
              lVar18 = func_0x00f78af4();
              return *(ulong *)(lVar18 + 8);
            }
            piVar12 = (int *)0x0;
            goto code_r0x016ce2a4;
          }
          uVar11 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar18 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
            unaff_x21 = (ulong)*(uint *)(lVar18 + 0x30);
            uVar16 = *(uint *)(lVar18 + 0x30) - 1;
            if (-2 < (int)uVar16) {
              uVar16 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar16;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar21 = (int)uVar11;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar19 = *(long *)(lVar18 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar23 = unaff_x22 - 8;
              if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar11 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)sVar5);
              lVar19 = *(long *)(lVar18 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
              *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar16 = uVar1;
            } while (0 < (long)uVar23);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar18 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)((short)uVar11 - (short)uVar8));
            uVar16 = uVar16 * 2 + 6;
            unaff_x21 = (ulong)uVar16;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)uVar16);
            unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
            if (0 < (int)*(uint *)(lVar18 + 0x40)) {
              uVar23 = 0;
              do {
                lVar19 = *(long *)(lVar18 + 0x18);
                if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                   (lVar20 = *(long *)(lVar18 + 0x38), lVar20 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                        *(int *)(lVar20 + uVar23 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar16 = *(uint *)(lVar18 + 0x10);
                unaff_x22 = (ulong)uVar16;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar18 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar18 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar21;
                    *(int *)(lVar18 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar21;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar1 + iVar9,2);
                    if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar16 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar23 = uVar23 + 1;
                unaff_x22 = (ulong)*(int *)(lVar18 + 0x40);
              } while ((long)uVar23 < (long)unaff_x22);
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
                lVar19 = *(long *)(lVar18 + 0x38);
                if (lVar19 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                *(ulong *)(lVar18 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
              }
              uVar16 = (uint)unaff_x22;
              *(uint *)(lVar18 + 0x40) = uVar16 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar18 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
                  iVar10 = iVar10 - iVar21;
                  iVar9 = iVar9 - iVar21;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                  *(undefined4 *)(lVar18 + 0x30) = 0xffffffff;
                  return uVar11;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar22 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6cea8);
          iVar21 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,uVar14);
          uVar14 = func_0x00f78a24(0x3d56a30);
          auVar29 = func_0x00f78ac0(uVar22,uVar14);
          puStack_198 = &FlatBuffers_FlatBufferBuilder__Required;
          ppppuVar25 = &pppuStack_1a0;
          lVar18 = *(long *)(auVar29._0_8_ + 0x18);
          iStack_1c4 = iVar21;
          uStack_1c0 = unaff_x22;
          uStack_1b8 = unaff_x21;
          uStack_1b0 = uVar11;
          uStack_1a8 = uVar22;
          pppuStack_1a0 = &pppuStack_150;
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - auVar29._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar9,4);
            lVar18 = *(long *)(auVar29._0_8_ + 0x18);
            if (lVar18 != 0) {
              uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,(iVar9 - iVar10) + iVar21,2);
              if ((uVar11 & 0xffff) != 0) {
                return uVar11;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1c4,0);
          uVar14 = func_0x00f78a24(0x3d6ce88);
          uVar15 = func_0x00f78a24(0x3d66338);
          lVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar22,uVar15,0);
          func_0x00f78a24(0x3d22a38);
          uVar11 = func_0x00f78aec();
          uVar14 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar18);
          uVar22 = func_0x00f78a24(0x3d56a50);
          puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar28 = func_0x00f78ac0(uVar11,uVar22);
          puVar4 = auStack_1d0;
          do {
            uVar23 = auVar28._8_8_;
            lVar19 = auVar28._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar11;
            *(long *)(puVar4 + -0x18) = lVar18;
            *(undefined8 *****)(puVar4 + -0x10) = ppppuVar25;
            *(undefined **)(puVar4 + -8) = puVar26;
            ppppuVar25 = (undefined8 ****)(puVar4 + -0x10);
            if ((int)uVar14 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
              uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
code_r0x016cef70:
              if (*(long *)(lVar19 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
                return uVar11;
              }
            }
            else if (lVar19 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
              if ((*(long *)(lVar19 + 0x18) != 0) &&
                 (lVar18 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar18 != 0)) {
                uVar23 = (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(lVar19 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar23);
                goto code_r0x016cef70;
              }
            }
            puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar28 = func_0x00f78af4();
            uVar14 = 0;
            puVar4 = puVar4 + -0x20;
            lVar18 = lVar19;
            uVar11 = uVar23;
          } while( true );
        }
        pdVar17 = &MACH_HEADER.cputype;
      }
      else {
        pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 1);
      }
    }
    else {
      pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 2);
    }
  }
  else {
    pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 3);
  }
  uVar11 = auVar27._0_8_;
  auVar28._8_8_ = pdVar17;
  auVar28._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar3;
  *(undefined **)((long)pppppuVar3 + -8) = puVar26;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar11,auVar27._8_8_);
  pppppuVar24 = *(undefined8 ******)((long)pppppuVar3 + -0x10);
  ppppuVar25 = *(undefined8 *****)((long)pppppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppppuVar3 + -0x20);
  piVar12 = *(int **)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    piVar13 = auVar28._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar3 + -0x18) = piVar12;
    *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar24;
    *(undefined8 *****)((long)pppppuVar3 + -8) = ppppuVar25;
    pppppuVar24 = (undefined8 *****)((long)pppppuVar3 + -0x10);
    uVar16 = auVar28._8_4_;
    if ((int)uVar16 < *(int *)(auVar28._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar28._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar13 = (int *)func_0x00f78aec();
      uVar22 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar22);
      uVar22 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar13,uVar22);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar22 = func_0x00f78b24();
    puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar28 = func_0x00f78ac0(uVar22,0);
    puVar4 = auVar28._8_8_;
    auVar27._8_8_ = uVar14;
    auVar27._0_8_ = auVar28._0_8_;
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
    piVar12 = piVar13;
code_r0x016ce420:
    uVar11 = auVar27._0_8_;
    auVar28._8_8_ = puVar4;
    auVar28._0_8_ = uVar11;
    *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppppuVar3 + -0x18) = piVar12;
    *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar24;
    *(undefined **)((long)pppppuVar3 + -8) = puVar26;
    if ((auVar27._8_4_ == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,auVar27._8_8_);
    unaff_x20 = *(long *)((long)pppppuVar3 + -0x20);
    piVar12 = *(int **)((long)pppppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppppuVar3 + -0x28);
    pppppuVar24 = *(undefined8 ******)((long)pppppuVar3 + -0x10);
    ppppuVar25 = (undefined8 ****)*(undefined **)((long)pppppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667bc8 | Core.Services.EditorLeaderboard.get_RandomScoreEnrtryCountMin
// ============================================================

/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMin
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,ulong param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ****ppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  dword *pdVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long unaff_x20;
  undefined8 uVar22;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar24;
  undefined1 ****ppppuVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined1 ***pppuVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  ulong auStack_1d0 [4];
  undefined1 auStack_1b0 [12];
  int iStack_1a4;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  ulong uStack_108;
  undefined1 ***apppuStack_100 [6];
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(param_1 + 2);
  if (lVar18 != 0) {
    iVar21 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetInt:
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar21,4);
    return uVar11;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMax;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar18 = *(long *)(piVar12 + 2);
  if (lVar18 != 0) {
    iVar21 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar13 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff60;
  puStack_48 = &Core_Services_EditorLeaderboard__CreateEditorLeaderboard;
  pppuVar24 = &ppuStack_50;
  ppuStack_50 = &puStack_30;
  if (piVar13 != (int *)0x0) {
    puVar26 = &UNK_01667cc0;
    piVar12 = piVar13;
    uVar22 = param_4;
    unaff_x21 = param_5;
    unaff_x22 = param_6;
code_r0x016ce2a4:
    uVar14 = 0;
    ppppuVar3 = (undefined1 ****)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar22;
    *(int **)(puVar2 + -0x18) = piVar12;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar24;
    *(undefined **)(puVar2 + -8) = puVar26;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 8) {
        uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(piVar13 + 10) = uVar22;
      }
      piVar13[0xc] = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar11;
      return uVar11;
    }
    auVar29 = func_0x00f78af4();
    piVar12 = piVar13;
    pppuVar24 = (undefined1 ***)(puVar2 + -0x10);
    pppuVar27 = (undefined1 ***)&FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar29 = func_0x00f78af4();
  uVar11 = auVar29._0_8_;
  pppuStack_b0 = pppuVar24;
  if (uVar11 != 0) {
    param_4 = 0;
    puStack_a8 = &Core_Services_EditorLeaderboard__AddDuration;
    if ((auVar29._8_8_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar11,auVar29._8_8_);
    auVar29._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    auVar29._0_8_ = uVar11;
    ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff60;
    pppuVar24 = pppuStack_b0;
    pppuVar27 = (undefined1 ***)puStack_a8;
    goto code_r0x016ce380;
  }
  ppppuVar3 = &pppuStack_b0;
  puStack_a8 = &Core_Services_EditorLeaderboard__AddDuration;
  puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar28 = func_0x00f78af4();
  if (auVar28._0_8_ == 0) {
    ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff40;
    puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar28 = func_0x00f78af4();
    if (auVar28._0_8_ == 0) {
      ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff30;
      puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar28 = func_0x00f78af4();
      if (auVar28._0_8_ == 0) {
        ppppuVar3 = apppuStack_100 + 4;
        apppuStack_100[5] = (undefined1 ***)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        apppuStack_100[4] = (undefined1 ***)&stack0xffffffffffffff30;
        auVar28 = func_0x00f78af4();
        if (auVar28._0_8_ == 0) {
          apppuStack_100[3] = (undefined1 ***)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
          apppuStack_100[2] = (undefined1 ***)(apppuStack_100 + 4);
          auVar29 = func_0x00f78af4();
          uVar14 = auVar29._8_8_;
          uVar11 = auVar29._0_8_;
          if (uVar11 != 0) {
            param_4 = 0;
            apppuStack_100[1] = (undefined1 ***)&Core_Services_EditorLeaderboard__AddId;
            if ((auVar29._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
              return uVar11;
            }
            apppuStack_100[0] = (undefined1 ***)(apppuStack_100 + 2);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar14,uVar14,0,0);
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar11;
            ppppuVar3 = apppuStack_100 + 2;
            pppuVar24 = apppuStack_100[0];
            pppuVar27 = apppuStack_100[1];
            goto code_r0x016ce380;
          }
          ppppuVar3 = apppuStack_100;
          ppppuVar25 = apppuStack_100;
          apppuStack_100[1] = (undefined1 ***)&Core_Services_EditorLeaderboard__AddId;
          puVar26 = &Core_Services_EditorLeaderboard__AddSortAscending;
          apppuStack_100[0] = (undefined1 ***)(apppuStack_100 + 2);
          auVar28 = func_0x00f78af4();
          if (auVar28._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          ppppuVar3 = (undefined1 ****)&stack0xfffffffffffffef0;
          ppppuVar25 = (undefined1 ****)&stack0xfffffffffffffef0;
          puVar26 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar28 = func_0x00f78af4();
          if (auVar28._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_118 = &Core_Services_EditorLeaderboard__AddEmpty;
          puStack_120 = &stack0xfffffffffffffef0;
          lVar18 = func_0x00f78af4();
          puVar2 = &stack0xfffffffffffffec0;
          puStack_128 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          pppuVar24 = &ppuStack_130;
          uVar22 = 0x3eb5000;
          ppuStack_130 = &puStack_120;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            ppuStack_130 = &puStack_120;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar18 == 0) {
            puVar26 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
            piVar13 = (int *)func_0x00f78af4();
            if (piVar13 == (int *)0x0) {
              lVar18 = func_0x00f78af4();
              return *(ulong *)(lVar18 + 8);
            }
            piVar12 = (int *)0x0;
            goto code_r0x016ce2a4;
          }
          uVar11 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar18 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
            unaff_x21 = (ulong)*(uint *)(lVar18 + 0x30);
            uVar16 = *(uint *)(lVar18 + 0x30) - 1;
            if (-2 < (int)uVar16) {
              uVar16 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar16;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar21 = (int)uVar11;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar19 = *(long *)(lVar18 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar23 = unaff_x22 - 8;
              if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar11 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)sVar5);
              lVar19 = *(long *)(lVar18 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
              *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar16 = uVar1;
            } while (0 < (long)uVar23);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar18 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)((short)uVar11 - (short)uVar8));
            uVar16 = uVar16 * 2 + 6;
            unaff_x21 = (ulong)uVar16;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)uVar16);
            unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
            if (0 < (int)*(uint *)(lVar18 + 0x40)) {
              uVar23 = 0;
              do {
                lVar19 = *(long *)(lVar18 + 0x18);
                if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                   (lVar20 = *(long *)(lVar18 + 0x38), lVar20 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                        *(int *)(lVar20 + uVar23 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar16 = *(uint *)(lVar18 + 0x10);
                unaff_x22 = (ulong)uVar16;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar18 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar18 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar21;
                    *(int *)(lVar18 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar21;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar1 + iVar9,2);
                    if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar16 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar23 = uVar23 + 1;
                unaff_x22 = (ulong)*(int *)(lVar18 + 0x40);
              } while ((long)uVar23 < (long)unaff_x22);
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
                lVar19 = *(long *)(lVar18 + 0x38);
                if (lVar19 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                *(ulong *)(lVar18 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
              }
              uVar16 = (uint)unaff_x22;
              *(uint *)(lVar18 + 0x40) = uVar16 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar18 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
                  iVar10 = iVar10 - iVar21;
                  iVar9 = iVar9 - iVar21;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                  *(undefined4 *)(lVar18 + 0x30) = 0xffffffff;
                  return uVar11;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar22 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d6cea8);
          iVar21 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,uVar14);
          uVar14 = func_0x00f78a24(0x3d56a30);
          auVar30 = func_0x00f78ac0(uVar22,uVar14);
          puStack_178 = &FlatBuffers_FlatBufferBuilder__Required;
          ppppuVar3 = &pppuStack_180;
          lVar18 = *(long *)(auVar30._0_8_ + 0x18);
          iStack_1a4 = iVar21;
          uStack_1a0 = unaff_x22;
          uStack_198 = unaff_x21;
          uStack_190 = uVar11;
          uStack_188 = uVar22;
          pppuStack_180 = &ppuStack_130;
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - auVar30._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar9,4);
            lVar18 = *(long *)(auVar30._0_8_ + 0x18);
            if (lVar18 != 0) {
              uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,(iVar9 - iVar10) + iVar21,2);
              if ((uVar11 & 0xffff) != 0) {
                return uVar11;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1a4,0);
          uVar14 = func_0x00f78a24(0x3d6ce88);
          uVar15 = func_0x00f78a24(0x3d66338);
          lVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar22,uVar15,0);
          func_0x00f78a24(0x3d22a38);
          uVar11 = func_0x00f78aec();
          uVar14 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar18);
          uVar22 = func_0x00f78a24(0x3d56a50);
          puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar29 = func_0x00f78ac0(uVar11,uVar22);
          puVar4 = auStack_1b0;
          do {
            uVar23 = auVar29._8_8_;
            lVar19 = auVar29._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar11;
            *(long *)(puVar4 + -0x18) = lVar18;
            *(undefined1 *****)(puVar4 + -0x10) = ppppuVar3;
            *(undefined **)(puVar4 + -8) = puVar26;
            ppppuVar3 = (undefined1 ****)(puVar4 + -0x10);
            if ((int)uVar14 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
              uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
code_r0x016cef70:
              if (*(long *)(lVar19 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
                return uVar11;
              }
            }
            else if (lVar19 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar23);
              if ((*(long *)(lVar19 + 0x18) != 0) &&
                 (lVar18 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar18 != 0)) {
                uVar23 = (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(lVar19 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar23);
                goto code_r0x016cef70;
              }
            }
            puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar29 = func_0x00f78af4();
            uVar14 = 0;
            puVar4 = puVar4 + -0x20;
            lVar18 = lVar19;
            uVar11 = uVar23;
          } while( true );
        }
        pdVar17 = &MACH_HEADER.cputype;
      }
      else {
        pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 1);
      }
    }
    else {
      pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 2);
    }
  }
  else {
    pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 3);
  }
  uVar11 = auVar28._0_8_;
  auVar29._8_8_ = pdVar17;
  auVar29._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)ppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)ppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)ppppuVar3 + -0x18) = piVar12;
  *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar3;
  *(undefined **)((long)ppppuVar3 + -8) = puVar26;
  if ((auVar28._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar11,auVar28._8_8_);
  pppuVar24 = *(undefined1 ****)((long)ppppuVar3 + -0x10);
  pppuVar27 = *(undefined1 ****)((long)ppppuVar3 + -8);
  unaff_x20 = *(long *)((long)ppppuVar3 + -0x20);
  piVar12 = *(int **)((long)ppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)ppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    piVar13 = auVar29._8_8_;
    *(long *)((long)ppppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)ppppuVar3 + -0x18) = piVar12;
    *(undefined1 ****)((long)ppppuVar3 + -0x10) = pppuVar24;
    *(undefined1 ****)((long)ppppuVar3 + -8) = pppuVar27;
    ppppuVar25 = (undefined1 ****)((long)ppppuVar3 + -0x10);
    uVar16 = auVar29._8_4_;
    if ((int)uVar16 < *(int *)(auVar29._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar29._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar13 = (int *)func_0x00f78aec();
      uVar22 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar22);
      uVar22 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar13,uVar22);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar22 = func_0x00f78b24();
    puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar29 = func_0x00f78ac0(uVar22,0);
    puVar4 = auVar29._8_8_;
    auVar28._8_8_ = uVar14;
    auVar28._0_8_ = auVar29._0_8_;
    ppppuVar3 = (undefined1 ****)((long)ppppuVar3 + -0x20);
    piVar12 = piVar13;
code_r0x016ce420:
    uVar11 = auVar28._0_8_;
    auVar29._8_8_ = puVar4;
    auVar29._0_8_ = uVar11;
    *(ulong *)((long)ppppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)ppppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)ppppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)ppppuVar3 + -0x18) = piVar12;
    *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar25;
    *(undefined **)((long)ppppuVar3 + -8) = puVar26;
    if ((auVar28._8_4_ == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,auVar28._8_8_);
    unaff_x20 = *(long *)((long)ppppuVar3 + -0x20);
    piVar12 = *(int **)((long)ppppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)ppppuVar3 + -0x28);
    pppuVar24 = *(undefined1 ****)((long)ppppuVar3 + -0x10);
    pppuVar27 = (undefined1 ***)*(undefined **)((long)ppppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667c1c | Core.Services.EditorLeaderboard.get_RandomScoreEnrtryCountMax
// ============================================================

/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__get_RandomScoreEnrtryCountMax
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,ulong param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  ulong uVar11;
  int *piVar12;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  dword *pdVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  long unaff_x20;
  undefined8 uVar22;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined1 **ppuVar24;
  undefined1 ***pppuVar25;
  undefined *puVar26;
  undefined1 **ppuVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  ulong auStack_1b0 [4];
  undefined1 auStack_190 [12];
  int iStack_184;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 **ppuStack_160;
  undefined *puStack_158;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  ulong uStack_e8;
  undefined1 **appuStack_e0 [6];
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x12,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar11,4);
    return uVar11;
  }
  piVar12 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff80;
  puStack_28 = &Core_Services_EditorLeaderboard__CreateEditorLeaderboard;
  ppuVar24 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar12 != (int *)0x0) {
    puVar26 = &UNK_01667cc0;
    piVar20 = piVar12;
    uVar22 = param_4;
    unaff_x21 = param_5;
    unaff_x22 = param_6;
code_r0x016ce2a4:
    uVar13 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar22;
    *(int **)(puVar2 + -0x18) = piVar20;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar24;
    *(undefined **)(puVar2 + -8) = puVar26;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar12);
    if (*(long *)(piVar12 + 10) != 0) {
      if (*(int *)(*(long *)(piVar12 + 10) + 0x18) < 8) {
        uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(piVar12 + 10) = uVar22;
      }
      piVar12[0xc] = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar12);
      piVar12[0xd] = (int)uVar11;
      return uVar11;
    }
    auVar29 = func_0x00f78af4();
    param_1 = piVar12;
    ppuVar24 = (undefined1 **)(puVar2 + -0x10);
    ppuVar27 = (undefined1 **)&FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar29 = func_0x00f78af4();
  uVar11 = auVar29._0_8_;
  ppuStack_90 = ppuVar24;
  if (uVar11 != 0) {
    param_4 = 0;
    puStack_88 = &Core_Services_EditorLeaderboard__AddDuration;
    if ((auVar29._8_8_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar11,auVar29._8_8_);
    auVar29._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    auVar29._0_8_ = uVar11;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff80;
    ppuVar24 = ppuStack_90;
    ppuVar27 = (undefined1 **)puStack_88;
    goto code_r0x016ce380;
  }
  pppuVar3 = &ppuStack_90;
  puStack_88 = &Core_Services_EditorLeaderboard__AddDuration;
  puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar28 = func_0x00f78af4();
  if (auVar28._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff60;
    puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar28 = func_0x00f78af4();
    if (auVar28._0_8_ == 0) {
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff50;
      puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar28 = func_0x00f78af4();
      if (auVar28._0_8_ == 0) {
        pppuVar3 = appuStack_e0 + 4;
        appuStack_e0[5] = (undefined1 **)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar26 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        appuStack_e0[4] = (undefined1 **)&stack0xffffffffffffff50;
        auVar28 = func_0x00f78af4();
        if (auVar28._0_8_ == 0) {
          appuStack_e0[3] = (undefined1 **)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
          appuStack_e0[2] = (undefined1 **)(appuStack_e0 + 4);
          auVar29 = func_0x00f78af4();
          uVar13 = auVar29._8_8_;
          uVar11 = auVar29._0_8_;
          if (uVar11 != 0) {
            param_4 = 0;
            appuStack_e0[1] = (undefined1 **)&Core_Services_EditorLeaderboard__AddId;
            if ((auVar29._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
              return uVar11;
            }
            appuStack_e0[0] = (undefined1 **)(appuStack_e0 + 2);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar13,uVar13,0,0);
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar11;
            pppuVar3 = appuStack_e0 + 2;
            ppuVar24 = appuStack_e0[0];
            ppuVar27 = appuStack_e0[1];
            goto code_r0x016ce380;
          }
          pppuVar3 = appuStack_e0;
          pppuVar25 = appuStack_e0;
          appuStack_e0[1] = (undefined1 **)&Core_Services_EditorLeaderboard__AddId;
          puVar26 = &Core_Services_EditorLeaderboard__AddSortAscending;
          appuStack_e0[0] = (undefined1 **)(appuStack_e0 + 2);
          auVar28 = func_0x00f78af4();
          if (auVar28._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          pppuVar3 = (undefined1 ***)&stack0xffffffffffffff10;
          pppuVar25 = (undefined1 ***)&stack0xffffffffffffff10;
          puVar26 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar28 = func_0x00f78af4();
          if (auVar28._0_8_ != 0) {
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_f8 = &Core_Services_EditorLeaderboard__AddEmpty;
          puStack_100 = &stack0xffffffffffffff10;
          lVar14 = func_0x00f78af4();
          puVar2 = &stack0xfffffffffffffee0;
          puStack_108 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          ppuVar24 = &puStack_110;
          uVar22 = 0x3eb5000;
          puStack_110 = (undefined1 *)&puStack_100;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            puStack_110 = (undefined1 *)&puStack_100;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar14 == 0) {
            puVar26 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
            piVar12 = (int *)func_0x00f78af4();
            if (piVar12 == (int *)0x0) {
              lVar14 = func_0x00f78af4();
              return *(ulong *)(lVar14 + 8);
            }
            piVar20 = (int *)0x0;
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
              lVar18 = *(long *)(lVar14 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar18 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar23 = unaff_x22 - 8;
              if (*(uint *)(lVar18 + 0x18) <= uVar23) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar18 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar11 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar14,(int)sVar5);
              lVar18 = *(long *)(lVar14 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar23) goto code_r0x016ced88;
              *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar16 = uVar1;
            } while (0 < (long)uVar23);
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
              uVar23 = 0;
              do {
                lVar18 = *(long *)(lVar14 + 0x18);
                if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
                   (lVar19 = *(long *)(lVar14 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) -
                        *(int *)(lVar19 + uVar23 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar16 = *(uint *)(lVar14 + 0x10);
                unaff_x22 = (ulong)uVar16;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
                if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar14 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar14 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar14 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar14 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
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
                uVar23 = uVar23 + 1;
                unaff_x22 = (ulong)*(int *)(lVar14 + 0x40);
              } while ((long)uVar23 < (long)unaff_x22);
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
                lVar18 = *(long *)(lVar14 + 0x38);
                if (lVar18 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
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
            uVar22 = func_0x00f78b24();
            func_0x00f78ac0(uVar22,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar22 = func_0x00f78aec();
          uVar13 = func_0x00f78a24(0x3d6cea8);
          iVar21 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,uVar13);
          uVar13 = func_0x00f78a24(0x3d56a30);
          auVar30 = func_0x00f78ac0(uVar22,uVar13);
          puStack_158 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar3 = &ppuStack_160;
          lVar14 = *(long *)(auVar30._0_8_ + 0x18);
          iStack_184 = iVar21;
          uStack_180 = unaff_x22;
          uStack_178 = unaff_x21;
          uStack_170 = uVar11;
          uStack_168 = uVar22;
          ppuStack_160 = &puStack_110;
          if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - auVar30._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,iVar9,4);
            lVar14 = *(long *)(auVar30._0_8_ + 0x18);
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
          uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_184,0);
          uVar13 = func_0x00f78a24(0x3d6ce88);
          uVar15 = func_0x00f78a24(0x3d66338);
          lVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar22,uVar15,0);
          func_0x00f78a24(0x3d22a38);
          uVar11 = func_0x00f78aec();
          uVar13 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar14);
          uVar22 = func_0x00f78a24(0x3d56a50);
          puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar29 = func_0x00f78ac0(uVar11,uVar22);
          puVar4 = auStack_190;
          do {
            uVar23 = auVar29._8_8_;
            lVar18 = auVar29._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar11;
            *(long *)(puVar4 + -0x18) = lVar14;
            *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
            *(undefined **)(puVar4 + -8) = puVar26;
            pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
            if ((int)uVar13 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
              uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar23);
code_r0x016cef70:
              if (*(long *)(lVar18 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
                return uVar11;
              }
            }
            else if (lVar18 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar23);
              if ((*(long *)(lVar18 + 0x18) != 0) &&
                 (lVar14 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar14 != 0)) {
                uVar23 = (ulong)(uint)(*(int *)(lVar14 + 0x18) - *(int *)(lVar18 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
                uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar23);
                goto code_r0x016cef70;
              }
            }
            puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar29 = func_0x00f78af4();
            uVar13 = 0;
            puVar4 = puVar4 + -0x20;
            lVar14 = lVar18;
            uVar11 = uVar23;
          } while( true );
        }
        pdVar17 = &MACH_HEADER.cputype;
      }
      else {
        pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 1);
      }
    }
    else {
      pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 2);
    }
  }
  else {
    pdVar17 = (dword *)((long)&MACH_HEADER.cputype + 3);
  }
  uVar11 = auVar28._0_8_;
  auVar29._8_8_ = pdVar17;
  auVar29._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = param_1;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar26;
  if ((auVar28._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar13 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar11,auVar28._8_8_);
  ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -0x10);
  ppuVar27 = *(undefined1 ***)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  param_1 = *(int **)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    piVar12 = auVar29._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar24;
    *(undefined1 ***)((long)pppuVar3 + -8) = ppuVar27;
    pppuVar25 = (undefined1 ***)((long)pppuVar3 + -0x10);
    uVar16 = auVar29._8_4_;
    if ((int)uVar16 < *(int *)(auVar29._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar29._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar12 = (int *)func_0x00f78aec();
      uVar22 = func_0x00f78a24(0x3d6ceb8);
      uVar13 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar12,uVar22);
      uVar22 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar12,uVar22);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar22 = func_0x00f78b24();
    puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar29 = func_0x00f78ac0(uVar22,0);
    puVar4 = auVar29._8_8_;
    auVar28._8_8_ = uVar13;
    auVar28._0_8_ = auVar29._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    param_1 = piVar12;
code_r0x016ce420:
    uVar11 = auVar28._0_8_;
    auVar29._8_8_ = puVar4;
    auVar29._0_8_ = uVar11;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar25;
    *(undefined **)((long)pppuVar3 + -8) = puVar26;
    if ((auVar28._8_4_ == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,auVar28._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    param_1 = *(int **)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -0x10);
    ppuVar27 = (undefined1 **)*(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667c70 | Core.Services.EditorLeaderboard.CreateEditorLeaderboard
// ============================================================

/* WARNING: Possible PIC construction at 0x01667cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01667d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01667d08) */
/* WARNING: Removing unreachable block (ram,0x01667cf0) */
/* WARNING: Removing unreachable block (ram,0x01667cd8) */
/* WARNING: Removing unreachable block (ram,0x01667cc0) */
/* WARNING: Removing unreachable block (ram,0x01667d20) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__CreateEditorLeaderboard
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,ulong param_6)

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
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  int iVar17;
  long unaff_x20;
  undefined8 uVar18;
  ulong uVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 **ppuVar21;
  undefined1 ***pppuVar22;
  undefined *puVar23;
  undefined1 **ppuVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_190 [4];
  undefined1 auStack_170 [12];
  int iStack_164;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 **ppuStack_140;
  undefined *puStack_138;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 **appuStack_c0 [6];
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  
  puVar2 = &stack0xffffffffffffffa0;
  ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar23 = (undefined *)0x1667cc0;
    lVar12 = param_1;
    uVar18 = param_4;
    unaff_x21 = param_5;
    unaff_x22 = param_6;
code_r0x016ce2a4:
    uVar11 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar18;
    *(long *)(puVar2 + -0x18) = lVar12;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar21;
    *(undefined **)(puVar2 + -8) = puVar23;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 8) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(param_1 + 0x28) = uVar18;
      }
      *(undefined4 *)(param_1 + 0x30) = 8;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    auVar26 = func_0x00f78af4();
    unaff_x19 = param_1;
    ppuVar21 = (undefined1 **)(puVar2 + -0x10);
    ppuVar24 = (undefined1 **)&FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar19 = auVar26._0_8_;
  ppuStack_70 = ppuVar21;
  if (uVar19 != 0) {
    param_4 = 0;
    puStack_68 = &Core_Services_EditorLeaderboard__AddDuration;
    if ((auVar26._8_8_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(uVar19,auVar26._8_8_);
    auVar26._8_8_ = 1;
    auVar26._0_8_ = uVar19;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffa0;
    ppuVar21 = ppuStack_70;
    ppuVar24 = (undefined1 **)puStack_68;
    goto code_r0x016ce380;
  }
  pppuVar3 = &ppuStack_70;
  puStack_68 = &Core_Services_EditorLeaderboard__AddDuration;
  puVar23 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff80;
    puVar23 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff70;
      puVar23 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        pppuVar3 = appuStack_c0 + 4;
        appuStack_c0[5] = (undefined1 **)&Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar23 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        appuStack_c0[4] = (undefined1 **)&stack0xffffffffffffff70;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          appuStack_c0[3] = (undefined1 **)&Core_Services_EditorLeaderboard__AddRandomScoreMin;
          appuStack_c0[2] = (undefined1 **)(appuStack_c0 + 4);
          auVar26 = func_0x00f78af4();
          uVar11 = auVar26._8_8_;
          uVar19 = auVar26._0_8_;
          if (uVar19 != 0) {
            param_4 = 0;
            appuStack_c0[1] = (undefined1 **)&Core_Services_EditorLeaderboard__AddId;
            if ((auVar26._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
              return uVar19;
            }
            appuStack_c0[0] = (undefined1 **)(appuStack_c0 + 2);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar19,uVar11,uVar11,0,0);
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar19;
            pppuVar3 = appuStack_c0 + 2;
            ppuVar21 = appuStack_c0[0];
            ppuVar24 = appuStack_c0[1];
            goto code_r0x016ce380;
          }
          pppuVar3 = appuStack_c0;
          pppuVar22 = appuStack_c0;
          appuStack_c0[1] = (undefined1 **)&Core_Services_EditorLeaderboard__AddId;
          puVar23 = &Core_Services_EditorLeaderboard__AddSortAscending;
          appuStack_c0[0] = (undefined1 **)(appuStack_c0 + 2);
          auVar25 = func_0x00f78af4();
          if (auVar25._0_8_ != 0) {
            uVar18 = 3;
            param_4 = 0;
            goto code_r0x016ce420;
          }
          pppuVar3 = (undefined1 ***)&stack0xffffffffffffff30;
          pppuVar22 = (undefined1 ***)&stack0xffffffffffffff30;
          puVar23 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar25 = func_0x00f78af4();
          if (auVar25._0_8_ != 0) {
            uVar18 = 2;
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_d8 = &Core_Services_EditorLeaderboard__AddEmpty;
          puStack_e0 = &stack0xffffffffffffff30;
          lVar12 = func_0x00f78af4();
          puVar2 = &stack0xffffffffffffff00;
          puStack_e8 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          ppuVar21 = &puStack_f0;
          uVar18 = 0x3eb5000;
          puStack_f0 = (undefined1 *)&puStack_e0;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            puStack_f0 = (undefined1 *)&puStack_e0;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar12 == 0) {
            puVar23 = &Core_Services_EditorLeaderboard__StartEditorLeaderboard;
            param_1 = func_0x00f78af4();
            if (param_1 == 0) {
              lVar12 = func_0x00f78af4();
              return *(ulong *)(lVar12 + 8);
            }
            lVar12 = 0;
            goto code_r0x016ce2a4;
          }
          uVar19 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar12 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,0);
            uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
            unaff_x21 = (ulong)*(uint *)(lVar12 + 0x30);
            uVar14 = *(uint *)(lVar12 + 0x30) - 1;
            if (-2 < (int)uVar14) {
              uVar14 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar14;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar17 = (int)uVar19;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar15 = *(long *)(lVar12 + 0x28);
              if (lVar15 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar20 = unaff_x22 - 8;
              if (*(uint *)(lVar15 + 0x18) <= uVar20) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar15 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar19 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)sVar5);
              lVar15 = *(long *)(lVar12 + 0x28);
              if (lVar15 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar15 + 0x18) <= uVar20) goto code_r0x016ced88;
              *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar14 = uVar1;
            } while (0 < (long)uVar20);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar12 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)((short)uVar19 - (short)uVar8));
            uVar14 = uVar14 * 2 + 6;
            unaff_x21 = (ulong)uVar14;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)uVar14);
            unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
            if (0 < (int)*(uint *)(lVar12 + 0x40)) {
              uVar20 = 0;
              do {
                lVar15 = *(long *)(lVar12 + 0x18);
                if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
                   (lVar16 = *(long *)(lVar12 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) -
                        *(int *)(lVar16 + uVar20 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar14 = *(uint *)(lVar12 + 0x10);
                unaff_x22 = (ulong)uVar14;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
                if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar12 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar12 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
                    *(int *)(lVar12 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar17;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar1 + iVar9,2);
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar14 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar20 = uVar20 + 1;
                unaff_x22 = (ulong)*(int *)(lVar12 + 0x40);
              } while ((long)uVar20 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar12 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar15 = *(long *)(lVar12 + 0x38);
                if (lVar15 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
                *(ulong *)(lVar12 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
              }
              uVar14 = (uint)unaff_x22;
              *(uint *)(lVar12 + 0x40) = uVar14 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar12 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                  iVar10 = iVar10 - iVar17;
                  iVar9 = iVar9 - iVar17;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                  *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
                  return uVar19;
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
          uVar11 = func_0x00f78a24(0x3d6cea8);
          iVar17 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar11);
          uVar11 = func_0x00f78a24(0x3d56a30);
          auVar27 = func_0x00f78ac0(uVar18,uVar11);
          puStack_138 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar3 = &ppuStack_140;
          lVar12 = *(long *)(auVar27._0_8_ + 0x18);
          iStack_164 = iVar17;
          uStack_160 = unaff_x22;
          uStack_158 = unaff_x21;
          uStack_150 = uVar19;
          uStack_148 = uVar18;
          ppuStack_140 = &puStack_f0;
          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18) - auVar27._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,iVar9,4);
            lVar12 = *(long *)(auVar27._0_8_ + 0x18);
            if (lVar12 != 0) {
              uVar19 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,(iVar9 - iVar10) + iVar17,2);
              if ((uVar19 & 0xffff) != 0) {
                return uVar19;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_164,0);
          uVar11 = func_0x00f78a24(0x3d6ce88);
          uVar13 = func_0x00f78a24(0x3d66338);
          lVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar18,uVar13,0);
          func_0x00f78a24(0x3d22a38);
          uVar19 = func_0x00f78aec();
          uVar11 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar12);
          uVar18 = func_0x00f78a24(0x3d56a50);
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar26 = func_0x00f78ac0(uVar19,uVar18);
          puVar4 = auStack_170;
          do {
            uVar20 = auVar26._8_8_;
            lVar15 = auVar26._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar19;
            *(long *)(puVar4 + -0x18) = lVar12;
            *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
            *(undefined **)(puVar4 + -8) = puVar23;
            pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
            if ((int)uVar11 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
              uVar19 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar20);
code_r0x016cef70:
              if (*(long *)(lVar15 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
                return uVar19;
              }
            }
            else if (lVar15 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar20);
              if ((*(long *)(lVar15 + 0x18) != 0) &&
                 (lVar12 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar12 != 0)) {
                uVar20 = (ulong)(uint)(*(int *)(lVar12 + 0x18) - *(int *)(lVar15 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
                uVar19 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar20);
                goto code_r0x016cef70;
              }
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar26 = func_0x00f78af4();
            uVar11 = 0;
            puVar4 = puVar4 + -0x20;
            lVar12 = lVar15;
            uVar19 = uVar20;
          } while( true );
        }
        uVar18 = 4;
      }
      else {
        uVar18 = 5;
      }
    }
    else {
      uVar18 = 6;
    }
  }
  else {
    uVar18 = 7;
  }
  uVar19 = auVar25._0_8_;
  auVar26._8_8_ = uVar18;
  auVar26._0_8_ = uVar19;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar23;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
    return uVar19;
  }
  uVar11 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar19,auVar25._8_8_);
  ppuVar21 = *(undefined1 ***)((long)pppuVar3 + -0x10);
  ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    lVar12 = auVar26._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar21;
    *(undefined1 ***)((long)pppuVar3 + -8) = ppuVar24;
    pppuVar22 = (undefined1 ***)((long)pppuVar3 + -0x10);
    uVar14 = auVar26._8_4_;
    if ((int)uVar14 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar19;
        return uVar19;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar12 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6ceb8);
      uVar11 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar12,uVar18);
      uVar18 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar12,uVar18);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar18 = func_0x00f78b24();
    puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar18,0);
    uVar18 = auVar26._8_8_;
    auVar25._8_8_ = uVar11;
    auVar25._0_8_ = auVar26._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    unaff_x19 = lVar12;
code_r0x016ce420:
    uVar19 = auVar25._0_8_;
    auVar26._8_8_ = uVar18;
    auVar26._0_8_ = uVar19;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar22;
    *(undefined **)((long)pppuVar3 + -8) = puVar23;
    if ((auVar25._8_4_ == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,auVar25._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    ppuVar21 = *(undefined1 ***)((long)pppuVar3 + -0x10);
    ppuVar24 = (undefined1 **)*(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667d44 | Core.Services.EditorLeaderboard.AddDuration
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddDuration
                (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  undefined **ppuVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
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
  undefined *apuStack_60 [6];
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar17 = 1;
    if ((param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,8,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutLong*/ func_0x016cdd6c(param_1,param_2);
    ppuVar2 = (undefined **)register0x00000008;
    goto code_r0x016ce380;
  }
  ppuVar2 = (undefined **)&stack0xfffffffffffffff0;
  puVar22 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax;
  auVar23 = func_0x00f78af4();
  if (auVar23._0_8_ == 0) {
    ppuVar2 = (undefined **)&stack0xffffffffffffffe0;
    puVar22 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      ppuVar2 = (undefined **)&stack0xffffffffffffffd0;
      puVar22 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ == 0) {
        ppuVar2 = apuStack_60 + 4;
        apuStack_60[5] = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
        puVar22 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        apuStack_60[4] = &stack0xffffffffffffffd0;
        auVar23 = func_0x00f78af4();
        if (auVar23._0_8_ == 0) {
          apuStack_60[3] = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
          apuStack_60[2] = (undefined *)(apuStack_60 + 4);
          auVar23 = func_0x00f78af4();
          uVar14 = auVar23._8_8_;
          param_1 = auVar23._0_8_;
          if (param_1 != 0) {
            param_4 = 0;
            apuStack_60[1] = &Core_Services_EditorLeaderboard__AddId;
            if ((auVar23._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
              return param_1;
            }
            apuStack_60[0] = (undefined *)(apuStack_60 + 2);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,uVar14,uVar14,0,0);
            lVar17 = 0;
            ppuVar2 = apuStack_60 + 2;
            unaff_x29 = apuStack_60[0];
            unaff_x30 = apuStack_60[1];
            goto code_r0x016ce380;
          }
          ppuVar2 = apuStack_60;
          ppuVar20 = apuStack_60;
          apuStack_60[1] = &Core_Services_EditorLeaderboard__AddId;
          puVar22 = &Core_Services_EditorLeaderboard__AddSortAscending;
          apuStack_60[0] = (undefined *)(apuStack_60 + 2);
          auVar23 = func_0x00f78af4();
          if (auVar23._0_8_ != 0) {
            lVar17 = 3;
            param_4 = 0;
            goto code_r0x016ce420;
          }
          ppuVar2 = (undefined **)&stack0xffffffffffffff90;
          ppuVar20 = (undefined **)&stack0xffffffffffffff90;
          puVar22 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar23 = func_0x00f78af4();
          if (auVar23._0_8_ != 0) {
            lVar17 = 2;
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_78 = &Core_Services_EditorLeaderboard__AddEmpty;
          puStack_80 = &stack0xffffffffffffff90;
          lVar17 = func_0x00f78af4();
          puStack_88 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          puStack_90 = (undefined1 *)&puStack_80;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            puStack_90 = (undefined1 *)&puStack_80;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar17 == 0) {
            unaff_x19 = func_0x00f78af4();
            if (unaff_x19 == 0) {
              lVar17 = func_0x00f78af4();
              return *(ulong *)(lVar17 + 8);
            }
            uVar14 = 0;
            ppuVar2 = (undefined **)&stack0xffffffffffffff30;
            unaff_x29 = &stack0xffffffffffffff50;
            unaff_x20 = 8;
            unaff_x21 = 0x3eb5000;
            if ((bRam0000000003eb5cd7 & 1) == 0) {
              func_0x00f78a20(0x3d1f100);
              bRam0000000003eb5cd7 = 1;
            }
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 8) {
                uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
              }
              *(undefined4 *)(unaff_x19 + 0x30) = 8;
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
              *(int *)(unaff_x19 + 0x34) = (int)uVar10;
              return uVar10;
            }
            unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
            auVar23 = func_0x00f78af4();
            lVar17 = auVar23._8_8_;
            param_1 = auVar23._0_8_;
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
                uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) -
                        *(int *)(lVar16 + uVar19 * 4 + 0x20);
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
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
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
          auVar25 = func_0x00f78ac0(uVar14,uVar11);
          puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar21 = &ppuStack_e0;
          lVar17 = *(long *)(auVar25._0_8_ + 0x18);
          iStack_104 = iVar18;
          uStack_100 = unaff_x22;
          uStack_f8 = unaff_x21;
          uStack_f0 = uVar10;
          uStack_e8 = uVar14;
          ppuStack_e0 = &puStack_90;
          if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
            iVar8 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar25._8_4_;
            iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,iVar8,4);
            lVar17 = *(long *)(auVar25._0_8_ + 0x18);
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
          uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_104,0);
          uVar11 = func_0x00f78a24(0x3d6ce88);
          uVar12 = func_0x00f78a24(0x3d66338);
          lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar14,uVar12,0);
          func_0x00f78a24(0x3d22a38);
          uVar10 = func_0x00f78aec();
          uVar11 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar17);
          uVar14 = func_0x00f78a24(0x3d56a50);
          puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar23 = func_0x00f78ac0(uVar10,uVar14);
          puVar3 = auStack_110;
          do {
            uVar19 = auVar23._8_8_;
            lVar15 = auVar23._0_8_;
            *(ulong *)(puVar3 + -0x20) = uVar10;
            *(long *)(puVar3 + -0x18) = lVar17;
            *(undefined1 ****)(puVar3 + -0x10) = pppuVar21;
            *(undefined **)(puVar3 + -8) = puVar22;
            pppuVar21 = (undefined1 ***)(puVar3 + -0x10);
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
            puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar23 = func_0x00f78af4();
            uVar11 = 0;
            puVar3 = puVar3 + -0x20;
            lVar17 = lVar15;
            uVar10 = uVar19;
          } while( true );
        }
        lVar17 = 4;
      }
      else {
        lVar17 = 5;
      }
    }
    else {
      lVar17 = 6;
    }
  }
  else {
    lVar17 = 7;
  }
  param_1 = auVar23._0_8_;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(undefined **)((long)ppuVar2 + -8) = puVar22;
  if ((auVar23._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,auVar23._8_8_);
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
    ppuVar20 = (undefined **)((long)ppuVar2 + -0x10);
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
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar24 = func_0x00f78ac0(uVar11,0);
    lVar17 = auVar24._8_8_;
    auVar23._8_8_ = uVar14;
    auVar23._0_8_ = auVar24._0_8_;
    ppuVar2 = (undefined **)((long)ppuVar2 + -0x20);
code_r0x016ce420:
    param_1 = auVar23._0_8_;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar23._8_8_);
    unaff_x29 = *(undefined1 **)((long)ppuVar2 + -0x10);
    unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1667d68 | Core.Services.EditorLeaderboard.AddRandomScoreEnrtryCountMax
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMax
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
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 **unaff_x29;
  undefined1 **ppuVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
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
  undefined1 *puStack_50;
  undefined *puStack_48;
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
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppuVar2 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin;
      unaff_x30 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        ppuVar2 = &puStack_30;
        unaff_x29 = &puStack_30;
        puStack_28 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
        unaff_x30 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          puStack_38 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
          puStack_40 = (undefined1 *)&puStack_30;
          auVar25 = func_0x00f78af4();
          uVar15 = auVar25._8_8_;
          uVar10 = auVar25._0_8_;
          if (uVar10 != 0) {
            param_4 = 0;
            puStack_48 = &Core_Services_EditorLeaderboard__AddId;
            if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
              return uVar10;
            }
            puStack_50 = (undefined1 *)&puStack_40;
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar10,uVar15,uVar15,0,0);
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar10;
            ppuVar2 = &puStack_40;
            puVar3 = puStack_50;
            puVar22 = puStack_48;
            goto code_r0x016ce380;
          }
          ppuVar2 = &puStack_50;
          ppuVar20 = &puStack_50;
          puStack_48 = &Core_Services_EditorLeaderboard__AddId;
          puVar22 = &Core_Services_EditorLeaderboard__AddSortAscending;
          puStack_50 = (undefined1 *)&puStack_40;
          auVar23 = func_0x00f78af4();
          if (auVar23._0_8_ != 0) {
            uVar12 = 3;
            param_4 = 0;
            goto code_r0x016ce420;
          }
          ppuVar2 = (undefined1 **)&stack0xffffffffffffffa0;
          ppuVar20 = (undefined1 **)&stack0xffffffffffffffa0;
          puVar22 = &Core_Services_EditorLeaderboard__AddEmpty;
          auVar23 = func_0x00f78af4();
          if (auVar23._0_8_ != 0) {
            uVar12 = 2;
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_68 = &Core_Services_EditorLeaderboard__AddEmpty;
          puStack_70 = &stack0xffffffffffffffa0;
          lVar11 = func_0x00f78af4();
          puStack_78 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
          puStack_80 = (undefined1 *)&puStack_70;
          if ((bRam0000000003eb58a4 & 1) == 0) {
            puStack_80 = (undefined1 *)&puStack_70;
            func_0x00f78a20(0x3d3f058);
            bRam0000000003eb58a4 = 1;
          }
          if (lVar11 == 0) {
            unaff_x19 = func_0x00f78af4();
            if (unaff_x19 == 0) {
              lVar11 = func_0x00f78af4();
              return *(ulong *)(lVar11 + 8);
            }
            uVar15 = 0;
            ppuVar2 = (undefined1 **)&stack0xffffffffffffff40;
            puVar3 = &stack0xffffffffffffff60;
            unaff_x20 = 8;
            unaff_x21 = 0x3eb5000;
            if ((bRam0000000003eb5cd7 & 1) == 0) {
              func_0x00f78a20(0x3d1f100);
              bRam0000000003eb5cd7 = 1;
            }
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 8) {
                uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                *(undefined8 *)(unaff_x19 + 0x28) = uVar15;
              }
              *(undefined4 *)(unaff_x19 + 0x30) = 8;
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
              *(int *)(unaff_x19 + 0x34) = (int)uVar10;
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
          if (-1 < *(int *)(lVar11 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
            uVar14 = *(uint *)(lVar11 + 0x30) - 1;
            if (-2 < (int)uVar14) {
              uVar14 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar14;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar18 = (int)uVar10;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar16 = *(long *)(lVar11 + 0x28);
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
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar4);
              lVar16 = *(long *)(lVar11 + 0x28);
              if (lVar16 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
              *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar14 = uVar1;
            } while (0 < (long)uVar19);
code_r0x016ceb30:
            uVar7 = *(undefined4 *)(lVar11 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar10 - (short)uVar7));
            uVar14 = uVar14 * 2 + 6;
            unaff_x21 = (ulong)uVar14;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            if (0 < (int)*(uint *)(lVar11 + 0x40)) {
              uVar19 = 0;
              do {
                lVar16 = *(long *)(lVar11 + 0x18);
                if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
                   (lVar17 = *(long *)(lVar11 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) -
                        *(int *)(lVar17 + uVar19 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar14 = *(uint *)(lVar11 + 0x10);
                unaff_x22 = (ulong)uVar14;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                if (sVar4 == sVar5) {
                  if (sVar4 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar11 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                    iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                    if (iVar8 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                    *(int *)(lVar11 + 0x10) = iVar9;
                    iVar8 = iVar8 - iVar18;
                    goto code_r0x016ced3c;
                  }
                  iVar8 = 2;
                  while( true ) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar8,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar8,2);
                    if (sVar5 != sVar6) break;
                    iVar8 = iVar8 + 2;
                    if (sVar4 <= iVar8) goto code_r0x016cec64;
                  }
                }
                uVar19 = uVar19 + 1;
                unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
              } while ((long)uVar19 < (long)unaff_x22);
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
                lVar16 = *(long *)(lVar11 + 0x38);
                if (lVar16 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
                *(ulong *)(lVar11 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              }
              uVar14 = (uint)unaff_x22;
              *(uint *)(lVar11 + 0x40) = uVar14 + 1;
              uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar7;
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  iVar9 = iVar9 - iVar18;
                  iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
                  *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                  return uVar10;
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
          uVar12 = func_0x00f78a24(0x3d6cea8);
          iVar18 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar12);
          uVar12 = func_0x00f78a24(0x3d56a30);
          auVar26 = func_0x00f78ac0(uVar15,uVar12);
          puStack_c8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar21 = &ppuStack_d0;
          lVar11 = *(long *)(auVar26._0_8_ + 0x18);
          iStack_f4 = iVar18;
          uStack_f0 = unaff_x22;
          uStack_e8 = unaff_x21;
          uStack_e0 = uVar10;
          uStack_d8 = uVar15;
          ppuStack_d0 = &puStack_80;
          if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
            iVar8 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
            iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar8,4);
            lVar11 = *(long *)(auVar26._0_8_ + 0x18);
            if (lVar11 != 0) {
              uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar8 - iVar9) + iVar18,2);
              if ((uVar10 & 0xffff) != 0) {
                return uVar10;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_f4,0);
          uVar12 = func_0x00f78a24(0x3d6ce88);
          uVar13 = func_0x00f78a24(0x3d66338);
          lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar15,uVar13,0);
          func_0x00f78a24(0x3d22a38);
          uVar10 = func_0x00f78aec();
          uVar12 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar11);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78ac0(uVar10,uVar15);
          puVar3 = auStack_100;
          do {
            uVar19 = auVar25._8_8_;
            lVar16 = auVar25._0_8_;
            *(ulong *)(puVar3 + -0x20) = uVar10;
            *(long *)(puVar3 + -0x18) = lVar11;
            *(undefined1 ****)(puVar3 + -0x10) = pppuVar21;
            *(undefined **)(puVar3 + -8) = puVar22;
            pppuVar21 = (undefined1 ***)(puVar3 + -0x10);
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
                 (lVar11 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar11 != 0)) {
                uVar19 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar16 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
                uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
                goto code_r0x016cef70;
              }
            }
            puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78af4();
            uVar12 = 0;
            puVar3 = puVar3 + -0x20;
            lVar11 = lVar16;
            uVar10 = uVar19;
          } while( true );
        }
        uVar15 = 4;
      }
      else {
        uVar15 = 5;
      }
    }
    else {
      uVar15 = 6;
    }
  }
  else {
    uVar15 = 7;
    ppuVar2 = (undefined1 **)register0x00000008;
  }
  uVar10 = auVar25._0_8_;
  auVar24._8_8_ = uVar15;
  auVar24._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar10,auVar25._8_8_);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
  puVar22 = *(undefined **)((long)ppuVar2 + -8);
code_r0x016ce380:
  do {
    lVar11 = auVar24._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    ppuVar20 = (undefined1 **)((long)ppuVar2 + -0x10);
    uVar14 = auVar24._8_4_;
    if ((int)uVar14 < *(int *)(auVar24._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar11,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar25 = func_0x00f78ac0(uVar12,0);
    uVar12 = auVar25._8_8_;
    auVar23._8_8_ = uVar15;
    auVar23._0_8_ = auVar25._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
    unaff_x19 = lVar11;
code_r0x016ce420:
    uVar10 = auVar23._0_8_;
    auVar24._8_8_ = uVar12;
    auVar24._0_8_ = uVar10;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,auVar23._8_8_);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
    puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
    puVar22 = *(undefined **)((long)ppuVar2 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667d8c | Core.Services.EditorLeaderboard.AddRandomScoreEnrtryCountMin
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddRandomScoreEnrtryCountMin
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
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 **unaff_x29;
  undefined1 **ppuVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_110 [4];
  undefined1 auStack_f0 [12];
  int iStack_e4;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
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
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppuVar2 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Services_EditorLeaderboard__AddRandomScoreMax;
      unaff_x30 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        puStack_28 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar25 = func_0x00f78af4();
        uVar15 = auVar25._8_8_;
        uVar10 = auVar25._0_8_;
        if (uVar10 != 0) {
          param_4 = 0;
          puStack_38 = &Core_Services_EditorLeaderboard__AddId;
          if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
            return uVar10;
          }
          puStack_40 = (undefined1 *)&puStack_30;
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar10,uVar15,uVar15,0,0);
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar10;
          ppuVar2 = &puStack_30;
          puVar3 = puStack_40;
          puVar22 = puStack_38;
          goto code_r0x016ce380;
        }
        ppuVar2 = &puStack_40;
        ppuVar20 = &puStack_40;
        puStack_38 = &Core_Services_EditorLeaderboard__AddId;
        puVar22 = &Core_Services_EditorLeaderboard__AddSortAscending;
        puStack_40 = (undefined1 *)&puStack_30;
        auVar23 = func_0x00f78af4();
        if (auVar23._0_8_ != 0) {
          uVar12 = 3;
          param_4 = 0;
          goto code_r0x016ce420;
        }
        ppuVar2 = (undefined1 **)&stack0xffffffffffffffb0;
        ppuVar20 = (undefined1 **)&stack0xffffffffffffffb0;
        puVar22 = &Core_Services_EditorLeaderboard__AddEmpty;
        auVar23 = func_0x00f78af4();
        if (auVar23._0_8_ != 0) {
          uVar12 = 2;
          param_4 = 0;
          goto code_r0x016ce420;
        }
        puStack_58 = &Core_Services_EditorLeaderboard__AddEmpty;
        puStack_60 = &stack0xffffffffffffffb0;
        lVar11 = func_0x00f78af4();
        puStack_68 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
        puStack_70 = (undefined1 *)&puStack_60;
        if ((bRam0000000003eb58a4 & 1) == 0) {
          puStack_70 = (undefined1 *)&puStack_60;
          func_0x00f78a20(0x3d3f058);
          bRam0000000003eb58a4 = 1;
        }
        if (lVar11 == 0) {
          unaff_x19 = func_0x00f78af4();
          if (unaff_x19 == 0) {
            lVar11 = func_0x00f78af4();
            return *(ulong *)(lVar11 + 8);
          }
          uVar15 = 0;
          ppuVar2 = (undefined1 **)&stack0xffffffffffffff50;
          puVar3 = &stack0xffffffffffffff70;
          unaff_x20 = 8;
          unaff_x21 = 0x3eb5000;
          if ((bRam0000000003eb5cd7 & 1) == 0) {
            func_0x00f78a20(0x3d1f100);
            bRam0000000003eb5cd7 = 1;
          }
          /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 8) {
              uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
              *(undefined8 *)(unaff_x19 + 0x28) = uVar15;
            }
            *(undefined4 *)(unaff_x19 + 0x30) = 8;
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
            *(int *)(unaff_x19 + 0x34) = (int)uVar10;
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
        if (-1 < *(int *)(lVar11 + 0x30)) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
          /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
          unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
          uVar14 = *(uint *)(lVar11 + 0x30) - 1;
          if (-2 < (int)uVar14) {
            uVar14 = 0xffffffff;
          }
          unaff_x22 = (ulong)uVar14;
          do {
            uVar1 = (int)unaff_x21 - 1;
            unaff_x21 = (ulong)uVar1;
            iVar18 = (int)uVar10;
            if ((int)uVar1 < 0) goto code_r0x016ceb30;
            lVar16 = *(long *)(lVar11 + 0x28);
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
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar4);
            lVar16 = *(long *)(lVar11 + 0x28);
            if (lVar16 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
            *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
            unaff_x22 = unaff_x22 - 1;
            uVar14 = uVar1;
          } while (0 < (long)uVar19);
code_r0x016ceb30:
          uVar7 = *(undefined4 *)(lVar11 + 0x34);
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar10 - (short)uVar7));
          uVar14 = uVar14 * 2 + 6;
          unaff_x21 = (ulong)uVar14;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
          unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
          if (0 < (int)*(uint *)(lVar11 + 0x40)) {
            uVar19 = 0;
            do {
              lVar16 = *(long *)(lVar11 + 0x18);
              if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
                 (lVar17 = *(long *)(lVar11 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
              if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x016ced88;
              uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) -
                      *(int *)(lVar17 + uVar19 * 4 + 0x20);
              unaff_x21 = (ulong)uVar1;
              uVar14 = *(uint *)(lVar11 + 0x10);
              unaff_x22 = (ulong)uVar14;
              sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
              if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
              sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
              if (sVar4 == sVar5) {
                if (sVar4 < 3) {
code_r0x016cec64:
                  unaff_x21 = *(ulong *)(lVar11 + 0x38);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                  iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                  if (iVar8 == 0) {
                    unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                    goto code_r0x016cecac;
                  }
                  unaff_x21 = *(ulong *)(lVar11 + 0x18);
                  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                  iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                  *(int *)(lVar11 + 0x10) = iVar9;
                  iVar8 = iVar8 - iVar18;
                  goto code_r0x016ced3c;
                }
                iVar8 = 2;
                while( true ) {
                  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                  sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar8,2);
                  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                  sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar8,2);
                  if (sVar5 != sVar6) break;
                  iVar8 = iVar8 + 2;
                  if (sVar4 <= iVar8) goto code_r0x016cec64;
                }
              }
              uVar19 = uVar19 + 1;
              unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
            } while ((long)uVar19 < (long)unaff_x22);
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
              lVar16 = *(long *)(lVar11 + 0x38);
              if (lVar16 == 0) goto code_r0x016ced84;
              /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
              *(ulong *)(lVar11 + 0x38) = unaff_x21;
              unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            }
            uVar14 = (uint)unaff_x22;
            *(uint *)(lVar11 + 0x40) = uVar14 + 1;
            uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar7;
              unaff_x21 = *(ulong *)(lVar11 + 0x18);
              if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                iVar9 = iVar9 - iVar18;
                iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
                /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
                /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
                *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                return uVar10;
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
        uVar12 = func_0x00f78a24(0x3d6cea8);
        iVar18 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar12);
        uVar12 = func_0x00f78a24(0x3d56a30);
        auVar26 = func_0x00f78ac0(uVar15,uVar12);
        puStack_b8 = &FlatBuffers_FlatBufferBuilder__Required;
        pppuVar21 = &ppuStack_c0;
        lVar11 = *(long *)(auVar26._0_8_ + 0x18);
        iStack_e4 = iVar18;
        uStack_e0 = unaff_x22;
        uStack_d8 = unaff_x21;
        uStack_d0 = uVar10;
        uStack_c8 = uVar15;
        ppuStack_c0 = &puStack_70;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
          iVar8 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
          iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar8,4);
          lVar11 = *(long *)(auVar26._0_8_ + 0x18);
          if (lVar11 != 0) {
            uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar8 - iVar9) + iVar18,2);
            if ((uVar10 & 0xffff) != 0) {
              return uVar10;
            }
            goto code_r0x016cee5c;
          }
        }
        func_0x00f78af4();
code_r0x016cee5c:
        uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e4,0);
        uVar12 = func_0x00f78a24(0x3d6ce88);
        uVar13 = func_0x00f78a24(0x3d66338);
        lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar15,uVar13,0);
        func_0x00f78a24(0x3d22a38);
        uVar10 = func_0x00f78aec();
        uVar12 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar11);
        uVar15 = func_0x00f78a24(0x3d56a50);
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar25 = func_0x00f78ac0(uVar10,uVar15);
        puVar3 = auStack_f0;
        do {
          uVar19 = auVar25._8_8_;
          lVar16 = auVar25._0_8_;
          *(ulong *)(puVar3 + -0x20) = uVar10;
          *(long *)(puVar3 + -0x18) = lVar11;
          *(undefined1 ****)(puVar3 + -0x10) = pppuVar21;
          *(undefined **)(puVar3 + -8) = puVar22;
          pppuVar21 = (undefined1 ***)(puVar3 + -0x10);
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
               (lVar11 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar11 != 0)) {
              uVar19 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar16 + 0x10));
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
              goto code_r0x016cef70;
            }
          }
          puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78af4();
          uVar12 = 0;
          puVar3 = puVar3 + -0x20;
          lVar11 = lVar16;
          uVar10 = uVar19;
        } while( true );
      }
      uVar15 = 4;
    }
    else {
      uVar15 = 5;
    }
  }
  else {
    uVar15 = 6;
    ppuVar2 = (undefined1 **)register0x00000008;
  }
  uVar10 = auVar25._0_8_;
  auVar24._8_8_ = uVar15;
  auVar24._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar10,auVar25._8_8_);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
  puVar22 = *(undefined **)((long)ppuVar2 + -8);
code_r0x016ce380:
  do {
    lVar11 = auVar24._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    ppuVar20 = (undefined1 **)((long)ppuVar2 + -0x10);
    uVar14 = auVar24._8_4_;
    if ((int)uVar14 < *(int *)(auVar24._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar11,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar25 = func_0x00f78ac0(uVar12,0);
    uVar12 = auVar25._8_8_;
    auVar23._8_8_ = uVar15;
    auVar23._0_8_ = auVar25._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
    unaff_x19 = lVar11;
code_r0x016ce420:
    uVar10 = auVar23._0_8_;
    auVar24._8_8_ = uVar12;
    auVar24._0_8_ = uVar10;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,auVar23._8_8_);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
    puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
    puVar22 = *(undefined **)((long)ppuVar2 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667db0 | Core.Services.EditorLeaderboard.AddRandomScoreMax
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddRandomScoreMax
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
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
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
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
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
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      puStack_18 = &Core_Services_EditorLeaderboard__AddRandomScoreMin;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar25 = func_0x00f78af4();
      uVar15 = auVar25._8_8_;
      uVar10 = auVar25._0_8_;
      if (uVar10 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Services_EditorLeaderboard__AddId;
        if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
          return uVar10;
        }
        puStack_30 = (undefined1 *)&puStack_20;
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar10,uVar15,uVar15,0,0);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar10;
        ppuVar2 = &puStack_20;
        puVar3 = puStack_30;
        puVar22 = puStack_28;
        goto code_r0x016ce380;
      }
      ppuVar2 = &puStack_30;
      ppuVar20 = &puStack_30;
      puStack_28 = &Core_Services_EditorLeaderboard__AddId;
      puVar22 = &Core_Services_EditorLeaderboard__AddSortAscending;
      puStack_30 = (undefined1 *)&puStack_20;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ != 0) {
        uVar12 = 3;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      ppuVar2 = (undefined1 **)&stack0xffffffffffffffc0;
      ppuVar20 = (undefined1 **)&stack0xffffffffffffffc0;
      puVar22 = &Core_Services_EditorLeaderboard__AddEmpty;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ != 0) {
        uVar12 = 2;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_48 = &Core_Services_EditorLeaderboard__AddEmpty;
      puStack_50 = &stack0xffffffffffffffc0;
      lVar11 = func_0x00f78af4();
      puStack_58 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
      puStack_60 = (undefined1 *)&puStack_50;
      if ((bRam0000000003eb58a4 & 1) == 0) {
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x00f78a20(0x3d3f058);
        bRam0000000003eb58a4 = 1;
      }
      if (lVar11 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar11 = func_0x00f78af4();
          return *(ulong *)(lVar11 + 8);
        }
        uVar15 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff60;
        puVar3 = &stack0xffffffffffffff80;
        unaff_x20 = 8;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 8) {
            uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar15;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 8;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar10;
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
      if (-1 < *(int *)(lVar11 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
        unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
        uVar14 = *(uint *)(lVar11 + 0x30) - 1;
        if (-2 < (int)uVar14) {
          uVar14 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar14;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar18 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar16 = *(long *)(lVar11 + 0x28);
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
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar4);
          lVar16 = *(long *)(lVar11 + 0x28);
          if (lVar16 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar14 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar7 = *(undefined4 *)(lVar11 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar10 - (short)uVar7));
        uVar14 = uVar14 * 2 + 6;
        unaff_x21 = (ulong)uVar14;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
        unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
        if (0 < (int)*(uint *)(lVar11 + 0x40)) {
          uVar19 = 0;
          do {
            lVar16 = *(long *)(lVar11 + 0x18);
            if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
               (lVar17 = *(long *)(lVar11 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - *(int *)(lVar17 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar14 = *(uint *)(lVar11 + 0x10);
            unaff_x22 = (ulong)uVar14;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
            if (sVar4 == sVar5) {
              if (sVar4 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar11 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                if (iVar8 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                *(int *)(lVar11 + 0x10) = iVar9;
                iVar8 = iVar8 - iVar18;
                goto code_r0x016ced3c;
              }
              iVar8 = 2;
              while( true ) {
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar8,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar8,2);
                if (sVar5 != sVar6) break;
                iVar8 = iVar8 + 2;
                if (sVar4 <= iVar8) goto code_r0x016cec64;
              }
            }
            uVar19 = uVar19 + 1;
            unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
          } while ((long)uVar19 < (long)unaff_x22);
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
            lVar16 = *(long *)(lVar11 + 0x38);
            if (lVar16 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
            *(ulong *)(lVar11 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
          }
          uVar14 = (uint)unaff_x22;
          *(uint *)(lVar11 + 0x40) = uVar14 + 1;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar7;
            unaff_x21 = *(ulong *)(lVar11 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              iVar9 = iVar9 - iVar18;
              iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
              *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
              return uVar10;
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
      uVar12 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar26 = func_0x00f78ac0(uVar15,uVar12);
      puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar21 = &ppuStack_b0;
      lVar11 = *(long *)(auVar26._0_8_ + 0x18);
      iStack_d4 = iVar18;
      uStack_d0 = unaff_x22;
      uStack_c8 = unaff_x21;
      uStack_c0 = uVar10;
      uStack_b8 = uVar15;
      ppuStack_b0 = &puStack_60;
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar8,4);
        lVar11 = *(long *)(auVar26._0_8_ + 0x18);
        if (lVar11 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar8 - iVar9) + iVar18,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
      uVar12 = func_0x00f78a24(0x3d6ce88);
      uVar13 = func_0x00f78a24(0x3d66338);
      lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar15,uVar13,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar12 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar11);
      uVar15 = func_0x00f78a24(0x3d56a50);
      puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar25 = func_0x00f78ac0(uVar10,uVar15);
      puVar3 = auStack_e0;
      do {
        uVar19 = auVar25._8_8_;
        lVar16 = auVar25._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar10;
        *(long *)(puVar3 + -0x18) = lVar11;
        *(undefined1 ****)(puVar3 + -0x10) = pppuVar21;
        *(undefined **)(puVar3 + -8) = puVar22;
        pppuVar21 = (undefined1 ***)(puVar3 + -0x10);
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
             (lVar11 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar11 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar16 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar25 = func_0x00f78af4();
        uVar12 = 0;
        puVar3 = puVar3 + -0x20;
        lVar11 = lVar16;
        uVar10 = uVar19;
      } while( true );
    }
    uVar15 = 4;
  }
  else {
    uVar15 = 5;
    ppuVar2 = (undefined1 **)register0x00000008;
  }
  uVar10 = auVar25._0_8_;
  auVar24._8_8_ = uVar15;
  auVar24._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar10,auVar25._8_8_);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
  puVar22 = *(undefined **)((long)ppuVar2 + -8);
code_r0x016ce380:
  do {
    lVar11 = auVar24._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    ppuVar20 = (undefined1 **)((long)ppuVar2 + -0x10);
    uVar14 = auVar24._8_4_;
    if ((int)uVar14 < *(int *)(auVar24._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar11,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar25 = func_0x00f78ac0(uVar12,0);
    uVar12 = auVar25._8_8_;
    auVar23._8_8_ = uVar15;
    auVar23._0_8_ = auVar25._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
    unaff_x19 = lVar11;
code_r0x016ce420:
    uVar10 = auVar23._0_8_;
    auVar24._8_8_ = uVar12;
    auVar24._0_8_ = uVar10;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,auVar23._8_8_);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
    puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
    puVar22 = *(undefined **)((long)ppuVar2 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1667dd4 | Core.Services.EditorLeaderboard.AddRandomScoreMin
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddRandomScoreMin
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
    lVar16 = 4;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
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
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar22 = func_0x00f78af4();
  uVar13 = auVar22._8_8_;
  param_1 = auVar22._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,uVar13,uVar13,0,0);
    lVar16 = 0;
    unaff_x30 = &Core_Services_EditorLeaderboard__AddId;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar19 = &stack0xffffffffffffffe0;
  puVar21 = &Core_Services_EditorLeaderboard__AddSortAscending;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar16 = 3;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  puVar2 = &stack0xffffffffffffffd0;
  puVar19 = &stack0xffffffffffffffd0;
  puVar21 = &Core_Services_EditorLeaderboard__AddEmpty;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar16 = 2;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  puStack_38 = &Core_Services_EditorLeaderboard__AddEmpty;
  puStack_40 = &stack0xffffffffffffffd0;
  lVar16 = func_0x00f78af4();
  puStack_48 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
  puStack_50 = (undefined1 *)&puStack_40;
  if ((bRam0000000003eb58a4 & 1) == 0) {
    puStack_50 = (undefined1 *)&puStack_40;
    func_0x00f78a20(0x3d3f058);
    bRam0000000003eb58a4 = 1;
  }
  if (lVar16 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar16 = func_0x00f78af4();
      return *(ulong *)(lVar16 + 8);
    }
    uVar13 = 0;
    puVar2 = &stack0xffffffffffffff70;
    unaff_x29 = &stack0xffffffffffffff90;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar13;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 8;
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
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
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



// ============================================================
// RVA: 0x1667df8 | Core.Services.EditorLeaderboard.AddId
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddId
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
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
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
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar16 = 0;
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
      puVar19 = puVar2 + -0x10;
      uVar13 = (uint)lVar16;
      if ((int)uVar13 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        unaff_x19 = lVar16;
        if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar9;
          return uVar9;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        lVar16 = func_0x00f78aec();
        uVar10 = func_0x00f78a24(0x3d6ceb8);
        param_2 = 0;
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
      auVar22._8_8_ = param_2;
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
      param_2 = 0;
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
  puVar2 = &stack0xfffffffffffffff0;
  puVar19 = &stack0xfffffffffffffff0;
  puVar21 = &Core_Services_EditorLeaderboard__AddSortAscending;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar16 = 3;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar19 = &stack0xffffffffffffffe0;
  puVar21 = &Core_Services_EditorLeaderboard__AddEmpty;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar16 = 2;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  puStack_28 = &Core_Services_EditorLeaderboard__AddEmpty;
  puStack_30 = &stack0xffffffffffffffe0;
  lVar16 = func_0x00f78af4();
  puStack_38 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
  puStack_40 = (undefined1 *)&puStack_30;
  if ((bRam0000000003eb58a4 & 1) == 0) {
    puStack_40 = (undefined1 *)&puStack_30;
    func_0x00f78a20(0x3d3f058);
    bRam0000000003eb58a4 = 1;
  }
  if (lVar16 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar16 = func_0x00f78af4();
      return *(ulong *)(lVar16 + 8);
    }
    param_2 = 0;
    puVar2 = &stack0xffffffffffffff80;
    unaff_x29 = &stack0xffffffffffffffa0;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 8) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar10;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 8;
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
    uVar13 = *(uint *)(lVar16 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
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
      uVar13 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar16 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)((short)uVar9 - (short)uVar6));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
    if (0 < (int)*(uint *)(lVar16 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar16 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar16 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(lVar16 + 0x10);
        unaff_x22 = (ulong)uVar13;
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
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar13 + iVar7,2);
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
      uVar13 = (uint)unaff_x22;
      *(uint *)(lVar16 + 0x40) = uVar13 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar6;
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
  puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
  pppuVar20 = &ppuStack_90;
  lVar16 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_b4 = iVar17;
  uStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  uStack_a0 = uVar9;
  uStack_98 = uVar10;
  ppuStack_90 = &puStack_40;
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
  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar10,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar9 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar9,lVar16);
  uVar10 = func_0x00f78a24(0x3d56a50);
  puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar22 = func_0x00f78ac0(uVar9,uVar10);
  puVar2 = auStack_c0;
  do {
    uVar18 = auVar22._8_8_;
    lVar14 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar9;
    *(long *)(puVar2 + -0x18) = lVar16;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
    if ((int)uVar11 == 0) {
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
    uVar11 = 0;
    puVar2 = puVar2 + -0x20;
    lVar16 = lVar14;
    uVar9 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x1667e1c | Core.Services.EditorLeaderboard.AddSortAscending
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddSortAscending
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
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
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = param_1;
  if (param_1 != 0) {
    uVar13 = 3;
    param_4 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce420;
  }
  puVar2 = &stack0xfffffffffffffff0;
  unaff_x29 = &stack0xfffffffffffffff0;
  unaff_x30 = &Core_Services_EditorLeaderboard__AddEmpty;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    uVar13 = 2;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  puStack_18 = &Core_Services_EditorLeaderboard__AddEmpty;
  puStack_20 = &stack0xfffffffffffffff0;
  lVar9 = func_0x00f78af4();
  puStack_28 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
  puStack_30 = (undefined1 *)&puStack_20;
  if ((bRam0000000003eb58a4 & 1) == 0) {
    puStack_30 = (undefined1 *)&puStack_20;
    func_0x00f78a20(0x3d3f058);
    bRam0000000003eb58a4 = 1;
  }
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4();
    if (lVar9 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar14 = 0;
    puVar2 = &stack0xffffffffffffff90;
    puVar19 = &stack0xffffffffffffffb0;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
    if (*(long *)(lVar9 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar9 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar9 + 0x30) = 8;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      *(int *)(lVar9 + 0x34) = (int)uVar10;
      return uVar10;
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    do {
      unaff_x19 = auVar23._8_8_;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = lVar9;
      *(undefined1 **)(puVar2 + -0x10) = puVar19;
      *(undefined **)(puVar2 + -8) = puVar21;
      unaff_x29 = puVar2 + -0x10;
      uVar12 = auVar23._8_4_;
      if ((int)uVar12 < *(int *)(auVar23._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar23._0_8_ + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar12 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        unaff_x19 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar13);
        uVar13 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(unaff_x19,uVar13);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar13 = func_0x00f78b24();
      unaff_x30 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar23 = func_0x00f78ac0(uVar13,0);
      uVar13 = auVar23._8_8_;
      auVar22._8_8_ = uVar14;
      auVar22._0_8_ = auVar23._0_8_;
      puVar2 = puVar2 + -0x20;
code_r0x016ce420:
      uVar10 = auVar22._0_8_;
      auVar23._8_8_ = uVar13;
      auVar23._0_8_ = uVar10;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      if ((auVar22._8_4_ == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
        return uVar10;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,auVar22._8_8_);
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
        lVar15 = *(long *)(lVar9 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(lVar9 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar12 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar12;
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
        lVar15 = *(long *)(lVar9 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
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
  uVar14 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
  uVar14 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar13,uVar14);
  puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
  pppuVar20 = &ppuStack_80;
  lVar9 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_a4 = iVar17;
  uStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  uStack_90 = uVar10;
  uStack_88 = uVar13;
  ppuStack_80 = &puStack_30;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar24._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar24._0_8_ + 0x18);
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
  uVar14 = func_0x00f78a24(0x3d6ce88);
  uVar11 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar11,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar13 = func_0x00f78a24(0x3d56a50);
  puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar22 = func_0x00f78ac0(uVar10,uVar13);
  puVar2 = auStack_b0;
  do {
    uVar18 = auVar22._8_8_;
    lVar15 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
    if ((int)uVar14 == 0) {
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
    uVar14 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar15;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x1667e40 | Core.Services.EditorLeaderboard.AddEmpty
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__AddEmpty
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
    uVar14 = 2;
    param_4 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce420;
  }
  lVar9 = func_0x00f78af4();
  puStack_18 = &Core_Services_EditorLeaderboard__EndEditorLeaderboard;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb58a4 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d3f058);
    bRam0000000003eb58a4 = 1;
  }
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4();
    if (lVar9 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar14 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    puVar19 = &stack0xffffffffffffffc0;
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
    if (*(long *)(lVar9 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 8) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar9 + 0x28) = uVar14;
      }
      *(undefined4 *)(lVar9 + 0x30) = 8;
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
// RVA: 0x1667e64 | Core.Services.EditorLeaderboard.EndEditorLeaderboard
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_EditorLeaderboard__EndEditorLeaderboard
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
  
  if ((bRam0000000003eb58a4 & 1) == 0) {
    func_0x00f78a20(0x3d3f058);
    bRam0000000003eb58a4 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 8;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 8) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 8;
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
// RVA: 0x1667eb0 | Core.Services.EditorLeaderboard.StartEditorLeaderboard
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_EditorLeaderboard__StartEditorLeaderboard
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
  lVar7 = 8;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 8) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 8;
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



