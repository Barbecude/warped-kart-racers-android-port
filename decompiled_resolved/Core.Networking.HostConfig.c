// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.HostConfig

// ============================================================
// RVA: 0x1655094 | Core.Networking.HostConfig.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_HostConfig__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x165509c | Core.Networking.HostConfig.GetRootAsHostConfig
// ============================================================

undefined1  [16] Core_Networking_HostConfig__GetRootAsHostConfig(long param_1)

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
// RVA: 0x16550a8 | Core.Networking.HostConfig.GetRootAsHostConfig
// ============================================================

undefined1  [16]
Core_Networking_HostConfig__GetRootAsHostConfig(long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x16550ec | Core.Networking.HostConfig.__assign
// ============================================================

undefined1  [16]
Core_Networking_HostConfig____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1655100 | Core.Networking.HostConfig.__init
// ============================================================

void Core_Networking_HostConfig____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x165510c | Core.Networking.HostConfig.get_SessionId
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

ulong Core_Networking_HostConfig__get_SessionId(int *param_1)

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
// RVA: 0x1655158 | Core.Networking.HostConfig.GetSessionIdBytes
// ============================================================

void Core_Networking_HostConfig__GetSessionIdBytes(undefined8 *param_1,undefined8 param_2)

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
// RVA: 0x165519c | Core.Networking.HostConfig.GetSessionIdArray
// ============================================================

long Core_Networking_HostConfig__GetSessionIdArray(long param_1)

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
  
  if ((bRam0000000003eb57f5 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb57f5 = 1;
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
// RVA: 0x16551f4 | Core.Networking.HostConfig.get_MapKey
// ============================================================

/* WARNING: Possible PIC construction at 0x0165537c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016553ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01655398) */
/* WARNING: Removing unreachable block (ram,0x01655380) */
/* WARNING: Removing unreachable block (ram,0x016553b0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__get_MapKey
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,undefined8 param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
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
  undefined1 **unaff_x29;
  undefined8 ****ppppuVar24;
  undefined1 **ppuVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_1c0 [4];
  undefined1 auStack_1a0 [12];
  int iStack_194;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 ***pppuStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(param_1 + 2) != 0) {
    auVar27._8_4_ = *param_1 + (int)uVar11;
    auVar27._0_8_ = *(long *)(param_1 + 2);
    auVar27._12_4_ = 0;
    puVar4 = (undefined1 *)register0x00000008;
code_r0x016ccdb4:
    *(undefined1 ***)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar27._0_8_,auVar27._8_8_,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostConfig__get_TimeLimit;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,8,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(piVar12 + 2) != 0) {
    uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar12 + 2),*piVar12 + (int)uVar11,4);
    return uVar11;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_HostConfig__get_NumberOfLaps;
  ppuStack_50 = &puStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(piVar12 + 2) != 0) {
    auVar27._8_4_ = *piVar12 + (int)uVar11;
    auVar27._0_8_ = *(long *)(piVar12 + 2);
    auVar27._12_4_ = 0;
    puVar4 = &stack0xffffffffffffffc0;
    unaff_x29 = ppuStack_50;
    unaff_x30 = puStack_48;
    goto code_r0x016ccdb4;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_HostConfig__get_NumberOfAi;
  uVar19 = 0;
  pppuStack_70 = &ppuStack_50;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xc);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar20 = *(long *)(piVar12 + 2);
  if (lVar20 != 0) {
    uVar18 = *piVar12 + (int)uVar11;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar20,uVar18,1);
    if ((*(long *)(lVar20 + 0x10) == 0) ||
       (lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar18 < *(uint *)(lVar20 + 0x18)) {
      return (long)*(char *)(lVar20 + (int)uVar18 + 0x20);
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    puStack_88 = &FlatBuffers_ByteBuffer__Get;
    uVar14 = 1;
    pppuStack_90 = &pppuStack_70;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar27._0_8_,auVar27._8_8_,1);
    lVar20 = *(long *)(auVar27._0_8_ + 0x10);
    if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar27._8_4_ < *(uint *)(lVar20 + 0x18)) {
      return (ulong)*(byte *)(lVar20 + (int)auVar27._8_4_ + 0x20);
    }
    uVar15 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar15,0);
    puVar4 = &stack0xffffffffffffff30;
    unaff_x29 = (undefined1 **)&stack0xffffffffffffff50;
    plVar16 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar20 = *(long *)(auVar27._0_8_ + 0x10);
    if ((lVar20 != 0) && (plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (**(code **)(*plVar16 + 0x348))
                         (plVar16,*(undefined8 *)(lVar20 + 0x10),auVar27._8_8_,uVar14,
                          *(undefined8 *)(*plVar16 + 0x350));
      return uVar11;
    }
    unaff_x30 = &FlatBuffers_ByteBuffer__GetShort;
    auVar27 = func_0x00f78af4();
    goto code_r0x016ccdb4;
  }
  piVar13 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff40;
  puStack_88 = &Core_Networking_HostConfig__CreateHostConfig;
  ppppuVar24 = &pppuStack_90;
  pppuStack_90 = &pppuStack_70;
  if (piVar13 != (int *)0x0) {
    puVar26 = &UNK_01655380;
    piVar12 = piVar13;
    unaff_x21 = uVar19;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = piVar12;
    *(undefined8 *)(puVar2 + -0x18) = param_6;
    *(undefined8 *****)(puVar2 + -0x10) = ppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar26;
    ppppuVar24 = (undefined8 ****)(puVar2 + -0x10);
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 5) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar13 + 10) = uVar14;
      }
      piVar13[0xc] = 5;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar11;
      return uVar11;
    }
    puStack_108 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar28 = func_0x00f78af4();
    pppuVar3 = (undefined8 ***)(puVar2 + -0x30);
    piVar12 = piVar13;
    goto code_r0x016ce380;
  }
  auVar27 = func_0x00f78af4();
  uVar11 = auVar27._0_8_;
  if (uVar11 != 0) {
    param_4 = 0;
    puStack_108 = &Core_Networking_HostConfig__AddTimeLimit;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar11,auVar27._8_8_);
    auVar28._8_8_ = 2;
    auVar28._0_8_ = uVar11;
    pppuVar3 = (undefined8 ***)&stack0xffffffffffffff40;
    goto code_r0x016ce380;
  }
  ppppuVar24 = (undefined8 ****)&stack0xffffffffffffff30;
  auVar27 = func_0x00f78af4();
  uVar14 = auVar27._8_8_;
  uVar11 = auVar27._0_8_;
  if (uVar11 != 0) {
    param_4 = 0;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar14,uVar14,0,0);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar11;
    puStack_108 = &Core_Networking_HostConfig__AddSessionId;
    pppuVar3 = (undefined8 ***)&stack0xffffffffffffff30;
    goto code_r0x016ce380;
  }
  pppuVar3 = (undefined8 ***)&stack0xffffffffffffff20;
  puVar26 = &Core_Networking_HostConfig__AddNumberOfLaps;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    pppuVar3 = (undefined8 ***)&stack0xffffffffffffff10;
    puVar26 = &Core_Networking_HostConfig__AddMapKey;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      ppppuVar24 = (undefined8 ****)&ppuStack_100;
      puStack_f8 = &Core_Networking_HostConfig__AddMapKey;
      ppuStack_100 = (undefined8 **)&stack0xffffffffffffff10;
      auVar27 = func_0x00f78af4();
      uVar11 = auVar27._0_8_;
      if (uVar11 != 0) {
        param_4 = 0;
        puStack_108 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
          return uVar11;
        }
        uVar14 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar11,auVar27._8_8_);
        auVar28._8_8_ = 4;
        auVar28._0_8_ = uVar11;
        pppuVar3 = &ppuStack_100;
        goto code_r0x016ce380;
      }
      lVar20 = func_0x00f78af4();
      puVar2 = &stack0xfffffffffffffed0;
      ppppuVar24 = (undefined8 ****)&stack0xfffffffffffffee0;
      piVar12 = (int *)0x3eb5000;
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
      }
      if (lVar20 == 0) {
        puVar26 = &Core_Networking_HostConfig__StartHostConfig;
        piVar13 = (int *)func_0x00f78af4();
        if (piVar13 == (int *)0x0) {
          lVar20 = func_0x00f78af4();
          return *(ulong *)(lVar20 + 8);
        }
        param_6 = 0;
        goto code_r0x016ce2a4;
      }
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar20 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,0);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
        unaff_x21 = (ulong)*(uint *)(lVar20 + 0x30);
        uVar18 = *(uint *)(lVar20 + 0x30) - 1;
        if (-2 < (int)uVar18) {
          uVar18 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar18;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar23 = (int)uVar11;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar21 = *(long *)(lVar20 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar21 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar21 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar11 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar5);
          lVar21 = *(long *)(lVar20 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar18 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar20 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)((short)uVar11 - (short)uVar8));
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
            uVar1 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - *(int *)(lVar22 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar18 = *(uint *)(lVar20 + 0x10);
            unaff_x22 = (ulong)uVar18;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
            if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar20 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar20 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
                *(int *)(lVar20 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar23;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar1 + iVar9,2);
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar18 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
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
          uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar8;
            unaff_x21 = *(ulong *)(lVar20 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
              iVar10 = iVar10 - iVar23;
              iVar9 = iVar9 - iVar23;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
              *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
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
      iVar23 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar29 = func_0x00f78ac0(uVar14,uVar15);
      puStack_168 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar25 = &puStack_170;
      lVar20 = *(long *)(auVar29._0_8_ + 0x18);
      iStack_194 = iVar23;
      uStack_190 = unaff_x22;
      uStack_188 = unaff_x21;
      uStack_180 = uVar11;
      uStack_178 = uVar14;
      puStack_170 = &stack0xfffffffffffffee0;
      if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar29._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar9,4);
        lVar20 = *(long *)(auVar29._0_8_ + 0x18);
        if (lVar20 != 0) {
          uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar9 - iVar10) + iVar23,2);
          if ((uVar11 & 0xffff) != 0) {
            return uVar11;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_194,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar17 = func_0x00f78a24(0x3d66338);
      lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar17,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar20);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar27 = func_0x00f78ac0(uVar11,uVar14);
      puVar4 = auStack_1a0;
      do {
        uVar19 = auVar27._8_8_;
        lVar21 = auVar27._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar11;
        *(long *)(puVar4 + -0x18) = lVar20;
        *(undefined1 ***)(puVar4 + -0x10) = ppuVar25;
        *(undefined **)(puVar4 + -8) = puVar26;
        ppuVar25 = (undefined1 **)(puVar4 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar21 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
            return uVar11;
          }
        }
        else if (lVar21 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
          if ((*(long *)(lVar21 + 0x18) != 0) &&
             (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar27 = func_0x00f78af4();
        uVar15 = 0;
        puVar4 = puVar4 + -0x20;
        lVar20 = lVar21;
        uVar11 = uVar19;
      } while( true );
    }
    uVar14 = 1;
  }
  else {
    uVar14 = 3;
  }
  uVar11 = auVar27._0_8_;
  auVar28._8_8_ = uVar14;
  auVar28._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = piVar12;
  *(undefined8 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar26;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar27._8_8_);
  ppppuVar24 = *(undefined8 *****)((long)pppuVar3 + -0x10);
  puStack_108 = *(undefined **)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  piVar12 = *(int **)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar28._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = piVar12;
    *(undefined8 *****)((long)pppuVar3 + -0x10) = ppppuVar24;
    *(undefined **)((long)pppuVar3 + -8) = puStack_108;
    uVar18 = auVar28._8_4_;
    if ((int)uVar18 < *(int *)(auVar28._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar28._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar17 = uVar14;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar11;
        return uVar11;
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
    auVar28 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar28._0_8_;
    *(ulong *)((long)pppuVar3 + -0x50) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x48) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x10);
    *(undefined **)((long)pppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar17 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar17);
    ppppuVar24 = *(undefined8 *****)((long)pppuVar3 + -0x30);
    puStack_108 = *(undefined **)((long)pppuVar3 + -0x28);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x40);
    piVar12 = *(int **)((long)pppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x50);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x48);
    pppuVar3 = (undefined8 ***)((long)pppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1655248 | Core.Networking.HostConfig.get_TimeLimit
// ============================================================

/* WARNING: Possible PIC construction at 0x0165537c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016553ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01655398) */
/* WARNING: Removing unreachable block (ram,0x01655380) */
/* WARNING: Removing unreachable block (ram,0x016553b0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__get_TimeLimit
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,undefined8 param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 ****ppppuVar25;
  undefined1 **ppuVar26;
  undefined *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  ulong auStack_1a0 [4];
  undefined1 auStack_180 [12];
  int iStack_174;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 ***pppuStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar12,4);
    return uVar12;
  }
  piVar13 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostConfig__get_NumberOfLaps;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar13,10,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(piVar13 + 2) != 0) {
    auVar28._8_4_ = *piVar13 + (int)uVar12;
    auVar28._0_8_ = *(long *)(piVar13 + 2);
    auVar28._12_4_ = 0;
    puVar2 = &stack0xffffffffffffffe0;
    puVar5 = puStack_30;
    puVar27 = puStack_28;
code_r0x016ccdb4:
    *(undefined1 **)(puVar2 + -0x10) = puVar5;
    *(undefined **)(puVar2 + -8) = puVar27;
    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar28._0_8_,auVar28._8_8_,2);
    return (ulong)(uint)(int)sVar6;
  }
  piVar13 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_HostConfig__get_NumberOfAi;
  uVar20 = 0;
  ppuStack_50 = &puStack_30;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar13,0xc);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  lVar21 = *(long *)(piVar13 + 2);
  if (lVar21 != 0) {
    uVar19 = *piVar13 + (int)uVar12;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar21,uVar19,1);
    if ((*(long *)(lVar21 + 0x10) == 0) ||
       (lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + 0x10), lVar21 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar19 < *(uint *)(lVar21 + 0x18)) {
      return (long)*(char *)(lVar21 + (int)uVar19 + 0x20);
    }
    uVar15 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar15,0);
    puStack_68 = &FlatBuffers_ByteBuffer__Get;
    uVar15 = 1;
    pppuStack_70 = &ppuStack_50;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar28._0_8_,auVar28._8_8_,1);
    lVar21 = *(long *)(auVar28._0_8_ + 0x10);
    if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x10), lVar21 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar28._8_4_ < *(uint *)(lVar21 + 0x18)) {
      return (ulong)*(byte *)(lVar21 + (int)auVar28._8_4_ + 0x20);
    }
    uVar16 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar16,0);
    puVar2 = &stack0xffffffffffffff50;
    puVar5 = &stack0xffffffffffffff70;
    plVar17 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar21 = *(long *)(auVar28._0_8_ + 0x10);
    if ((lVar21 != 0) && (plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*plVar17 + 0x348))
                         (plVar17,*(undefined8 *)(lVar21 + 0x10),auVar28._8_8_,uVar15,
                          *(undefined8 *)(*plVar17 + 0x350));
      return uVar12;
    }
    puVar27 = &FlatBuffers_ByteBuffer__GetShort;
    auVar28 = func_0x00f78af4();
    goto code_r0x016ccdb4;
  }
  piVar14 = (int *)func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff60;
  puStack_68 = &Core_Networking_HostConfig__CreateHostConfig;
  ppppuVar25 = &pppuStack_70;
  pppuStack_70 = &ppuStack_50;
  if (piVar14 != (int *)0x0) {
    puVar27 = &UNK_01655380;
    piVar13 = piVar14;
    unaff_x21 = uVar20;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar15 = 0;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(int **)(puVar3 + -0x20) = piVar13;
    *(undefined8 *)(puVar3 + -0x18) = param_6;
    *(undefined1 *****)(puVar3 + -0x10) = ppppuVar25;
    *(undefined **)(puVar3 + -8) = puVar27;
    ppppuVar25 = (undefined1 ****)(puVar3 + -0x10);
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
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar12;
      return uVar12;
    }
    puStack_e8 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar29 = func_0x00f78af4();
    pppuVar4 = (undefined8 ***)(puVar3 + -0x30);
    piVar13 = piVar14;
    goto code_r0x016ce380;
  }
  auVar28 = func_0x00f78af4();
  uVar12 = auVar28._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    puStack_e8 = &Core_Networking_HostConfig__AddTimeLimit;
    if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar28._8_8_);
    auVar29._8_8_ = 2;
    auVar29._0_8_ = uVar12;
    pppuVar4 = (undefined8 ***)&stack0xffffffffffffff60;
    goto code_r0x016ce380;
  }
  ppppuVar25 = (undefined1 ****)&stack0xffffffffffffff50;
  auVar28 = func_0x00f78af4();
  uVar15 = auVar28._8_8_;
  uVar12 = auVar28._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar15,uVar15,0,0);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar12;
    puStack_e8 = &Core_Networking_HostConfig__AddSessionId;
    pppuVar4 = (undefined8 ***)&stack0xffffffffffffff50;
    goto code_r0x016ce380;
  }
  pppuVar4 = (undefined8 ***)&stack0xffffffffffffff40;
  puVar27 = &Core_Networking_HostConfig__AddNumberOfLaps;
  auVar28 = func_0x00f78af4();
  if (auVar28._0_8_ == 0) {
    pppuVar4 = (undefined8 ***)&stack0xffffffffffffff30;
    puVar27 = &Core_Networking_HostConfig__AddMapKey;
    auVar28 = func_0x00f78af4();
    if (auVar28._0_8_ == 0) {
      ppppuVar25 = (undefined1 ****)&ppuStack_e0;
      puStack_d8 = &Core_Networking_HostConfig__AddMapKey;
      ppuStack_e0 = (undefined8 **)&stack0xffffffffffffff30;
      auVar28 = func_0x00f78af4();
      uVar12 = auVar28._0_8_;
      if (uVar12 != 0) {
        param_4 = 0;
        puStack_e8 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
          return uVar12;
        }
        uVar15 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,auVar28._8_8_);
        auVar29._8_8_ = 4;
        auVar29._0_8_ = uVar12;
        pppuVar4 = &ppuStack_e0;
        goto code_r0x016ce380;
      }
      lVar21 = func_0x00f78af4();
      puVar3 = &stack0xfffffffffffffef0;
      ppppuVar25 = (undefined1 ****)&stack0xffffffffffffff00;
      piVar13 = (int *)0x3eb5000;
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
      }
      if (lVar21 == 0) {
        puVar27 = &Core_Networking_HostConfig__StartHostConfig;
        piVar14 = (int *)func_0x00f78af4();
        if (piVar14 == (int *)0x0) {
          lVar21 = func_0x00f78af4();
          return *(ulong *)(lVar21 + 8);
        }
        param_6 = 0;
        goto code_r0x016ce2a4;
      }
      uVar12 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar21 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
        unaff_x21 = (ulong)*(uint *)(lVar21 + 0x30);
        uVar19 = *(uint *)(lVar21 + 0x30) - 1;
        if (-2 < (int)uVar19) {
          uVar19 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar19;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar24 = (int)uVar12;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar22 = *(long *)(lVar21 + 0x28);
          if (lVar22 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar22 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar22 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar20 = unaff_x22 - 8;
          if (*(uint *)(lVar22 + 0x18) <= uVar20) goto code_r0x016ced88;
          iVar10 = *(int *)(lVar22 + unaff_x22 * 4);
          sVar6 = 0;
          if (iVar10 != 0) {
            sVar6 = (short)uVar12 - (short)iVar10;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)sVar6);
          lVar22 = *(long *)(lVar21 + 0x28);
          if (lVar22 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar22 + 0x18) <= uVar20) goto code_r0x016ced88;
          *(undefined4 *)(lVar22 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar19 = uVar1;
        } while (0 < (long)uVar20);
code_r0x016ceb30:
        uVar9 = *(undefined4 *)(lVar21 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)(short)((short)uVar12 - (short)uVar9));
        uVar19 = uVar19 * 2 + 6;
        unaff_x21 = (ulong)uVar19;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)(short)uVar19);
        unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
        if (0 < (int)*(uint *)(lVar21 + 0x40)) {
          uVar20 = 0;
          do {
            lVar22 = *(long *)(lVar21 + 0x18);
            if (((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) ||
               (lVar23 = *(long *)(lVar21 + 0x38), lVar23 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar23 + 0x18) <= uVar20) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) - *(int *)(lVar23 + uVar20 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar19 = *(uint *)(lVar21 + 0x10);
            unaff_x22 = (ulong)uVar19;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,unaff_x21,2);
            if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),unaff_x22,2);
            if (sVar6 == sVar7) {
              if (sVar6 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar21 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                iVar10 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                if (iVar10 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar21 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar24;
                *(int *)(lVar21 + 0x10) = iVar11;
                iVar10 = iVar10 - iVar24;
                goto code_r0x016ced3c;
              }
              iVar10 = 2;
              while( true ) {
                if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),uVar1 + iVar10,2);
                if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),uVar19 + iVar10,2);
                if (sVar7 != sVar8) break;
                iVar10 = iVar10 + 2;
                if (sVar6 <= iVar10) goto code_r0x016cec64;
              }
            }
            uVar20 = uVar20 + 1;
            unaff_x22 = (ulong)*(int *)(lVar21 + 0x40);
          } while ((long)uVar20 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar21 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar22 = *(long *)(lVar21 + 0x38);
            if (lVar22 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar22,unaff_x21,*(undefined4 *)(lVar22 + 0x18),0);
            *(ulong *)(lVar21 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
          }
          uVar19 = (uint)unaff_x22;
          *(uint *)(lVar21 + 0x40) = uVar19 + 1;
          uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar19 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar19 * 4 + 0x20) = uVar9;
            unaff_x21 = *(ulong *)(lVar21 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
              iVar11 = iVar11 - iVar24;
              iVar10 = iVar10 - iVar24;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
              *(undefined4 *)(lVar21 + 0x30) = 0xffffffff;
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
      uVar16 = func_0x00f78a24(0x3d6cea8);
      iVar24 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar16);
      uVar16 = func_0x00f78a24(0x3d56a30);
      auVar30 = func_0x00f78ac0(uVar15,uVar16);
      puStack_148 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar26 = &puStack_150;
      lVar21 = *(long *)(auVar30._0_8_ + 0x18);
      iStack_174 = iVar24;
      uStack_170 = unaff_x22;
      uStack_168 = unaff_x21;
      uStack_160 = uVar12;
      uStack_158 = uVar15;
      puStack_150 = &stack0xffffffffffffff00;
      if ((lVar21 != 0) && (*(long *)(lVar21 + 0x10) != 0)) {
        iVar10 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - auVar30._8_4_;
        iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,iVar10,4);
        lVar21 = *(long *)(auVar30._0_8_ + 0x18);
        if (lVar21 != 0) {
          uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,(iVar10 - iVar11) + iVar24,2);
          if ((uVar12 & 0xffff) != 0) {
            return uVar12;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_174,0);
      uVar16 = func_0x00f78a24(0x3d6ce88);
      uVar18 = func_0x00f78a24(0x3d66338);
      lVar21 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar18,0);
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      uVar16 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar21);
      uVar15 = func_0x00f78a24(0x3d56a50);
      puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar28 = func_0x00f78ac0(uVar12,uVar15);
      puVar5 = auStack_180;
      do {
        uVar20 = auVar28._8_8_;
        lVar22 = auVar28._0_8_;
        *(ulong *)(puVar5 + -0x20) = uVar12;
        *(long *)(puVar5 + -0x18) = lVar21;
        *(undefined1 ***)(puVar5 + -0x10) = ppuVar26;
        *(undefined **)(puVar5 + -8) = puVar27;
        ppuVar26 = (undefined1 **)(puVar5 + -0x10);
        if ((int)uVar16 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,*(undefined4 *)(lVar22 + 0x20),4);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar22,uVar20);
code_r0x016cef70:
          if (*(long *)(lVar22 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar22 + 0x18) + 0x18) = *(undefined4 *)(lVar22 + 0x10);
            return uVar12;
          }
        }
        else if (lVar22 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,*(undefined4 *)(lVar22 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar22,uVar20);
          if ((*(long *)(lVar22 + 0x18) != 0) &&
             (lVar21 = *(long *)(*(long *)(lVar22 + 0x18) + 0x10), lVar21 != 0)) {
            uVar20 = (ulong)(uint)(*(int *)(lVar21 + 0x18) - *(int *)(lVar22 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,4,0);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar22,uVar20);
            goto code_r0x016cef70;
          }
        }
        puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar28 = func_0x00f78af4();
        uVar16 = 0;
        puVar5 = puVar5 + -0x20;
        lVar21 = lVar22;
        uVar12 = uVar20;
      } while( true );
    }
    uVar15 = 1;
  }
  else {
    uVar15 = 3;
  }
  uVar12 = auVar28._0_8_;
  auVar29._8_8_ = uVar15;
  auVar29._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)pppuVar4 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar4 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar4 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar4 + -0x18) = piVar13;
  *(undefined8 ****)((long)pppuVar4 + -0x10) = pppuVar4;
  *(undefined **)((long)pppuVar4 + -8) = puVar27;
  if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar28._8_8_);
  ppppuVar25 = *(undefined1 *****)((long)pppuVar4 + -0x10);
  puStack_e8 = *(undefined **)((long)pppuVar4 + -8);
  unaff_x20 = *(long *)((long)pppuVar4 + -0x20);
  piVar13 = *(int **)((long)pppuVar4 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar4 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar4 + -0x28);
code_r0x016ce380:
  do {
    uVar16 = auVar29._8_8_;
    *(long *)((long)pppuVar4 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar4 + -0x18) = piVar13;
    *(undefined1 *****)((long)pppuVar4 + -0x10) = ppppuVar25;
    *(undefined **)((long)pppuVar4 + -8) = puStack_e8;
    uVar19 = auVar29._8_4_;
    if ((int)uVar19 < *(int *)(auVar29._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar29._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar15;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar19 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar19 * 4 + 0x20) = (int)uVar12;
        return uVar12;
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
    auVar29 = func_0x00f78ac0(uVar15,0);
    uVar12 = auVar29._0_8_;
    *(ulong *)((long)pppuVar4 + -0x50) = unaff_x22;
    *(ulong *)((long)pppuVar4 + -0x48) = unaff_x21;
    *(long *)((long)pppuVar4 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppuVar4 + -0x38) = uVar16;
    *(undefined1 **)((long)pppuVar4 + -0x30) = (undefined1 *)((long)pppuVar4 + -0x10);
    *(undefined **)((long)pppuVar4 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar18);
    ppppuVar25 = *(undefined1 *****)((long)pppuVar4 + -0x30);
    puStack_e8 = *(undefined **)((long)pppuVar4 + -0x28);
    unaff_x20 = *(long *)((long)pppuVar4 + -0x40);
    piVar13 = *(int **)((long)pppuVar4 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar4 + -0x50);
    unaff_x21 = *(ulong *)((long)pppuVar4 + -0x48);
    pppuVar4 = (undefined8 ***)((long)pppuVar4 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x165529c | Core.Networking.HostConfig.get_NumberOfLaps
// ============================================================

/* WARNING: Possible PIC construction at 0x0165537c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016553ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01655398) */
/* WARNING: Removing unreachable block (ram,0x01655380) */
/* WARNING: Removing unreachable block (ram,0x016553b0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__get_NumberOfLaps
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,undefined8 param_6)

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
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
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
  undefined1 ***pppuVar24;
  undefined1 **ppuVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_180 [4];
  undefined1 auStack_160 [12];
  int iStack_154;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined *puStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(param_1 + 2) != 0) {
    auVar27._8_4_ = *param_1 + (int)uVar11;
    auVar27._0_8_ = *(long *)(param_1 + 2);
    auVar27._12_4_ = 0;
    puVar4 = (undefined1 *)register0x00000008;
code_r0x016ccdb4:
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined **)(puVar4 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar27._0_8_,auVar27._8_8_,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_HostConfig__get_NumberOfAi;
  uVar19 = 0;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xc);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar20 = *(long *)(piVar12 + 2);
  if (lVar20 != 0) {
    uVar18 = *piVar12 + (int)uVar11;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar20,uVar18,1);
    if ((*(long *)(lVar20 + 0x10) == 0) ||
       (lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar18 < *(uint *)(lVar20 + 0x18)) {
      return (long)*(char *)(lVar20 + (int)uVar18 + 0x20);
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    puStack_48 = &FlatBuffers_ByteBuffer__Get;
    uVar14 = 1;
    ppuStack_50 = &puStack_30;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar27._0_8_,auVar27._8_8_,1);
    lVar20 = *(long *)(auVar27._0_8_ + 0x10);
    if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar27._8_4_ < *(uint *)(lVar20 + 0x18)) {
      return (ulong)*(byte *)(lVar20 + (int)auVar27._8_4_ + 0x20);
    }
    uVar15 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar15,0);
    puVar4 = &stack0xffffffffffffff70;
    unaff_x29 = &stack0xffffffffffffff90;
    plVar16 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar20 = *(long *)(auVar27._0_8_ + 0x10);
    if ((lVar20 != 0) && (plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (**(code **)(*plVar16 + 0x348))
                         (plVar16,*(undefined8 *)(lVar20 + 0x10),auVar27._8_8_,uVar14,
                          *(undefined8 *)(*plVar16 + 0x350));
      return uVar11;
    }
    unaff_x30 = &FlatBuffers_ByteBuffer__GetShort;
    auVar27 = func_0x00f78af4();
    goto code_r0x016ccdb4;
  }
  piVar13 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff80;
  puStack_48 = &Core_Networking_HostConfig__CreateHostConfig;
  pppuVar24 = &ppuStack_50;
  ppuStack_50 = &puStack_30;
  if (piVar13 != (int *)0x0) {
    puVar26 = &UNK_01655380;
    piVar12 = piVar13;
    unaff_x21 = uVar19;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = piVar12;
    *(undefined8 *)(puVar2 + -0x18) = param_6;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar24;
    *(undefined **)(puVar2 + -8) = puVar26;
    pppuVar24 = (undefined1 ***)(puVar2 + -0x10);
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 5) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar13 + 10) = uVar14;
      }
      piVar13[0xc] = 5;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar11;
      return uVar11;
    }
    puStack_c8 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar28 = func_0x00f78af4();
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    piVar12 = piVar13;
    goto code_r0x016ce380;
  }
  auVar27 = func_0x00f78af4();
  uVar11 = auVar27._0_8_;
  if (uVar11 != 0) {
    param_4 = 0;
    puStack_c8 = &Core_Networking_HostConfig__AddTimeLimit;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar11,auVar27._8_8_);
    auVar28._8_8_ = 2;
    auVar28._0_8_ = uVar11;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff80;
    goto code_r0x016ce380;
  }
  pppuVar24 = (undefined1 ***)&stack0xffffffffffffff70;
  auVar27 = func_0x00f78af4();
  uVar14 = auVar27._8_8_;
  uVar11 = auVar27._0_8_;
  if (uVar11 != 0) {
    param_4 = 0;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar14,uVar14,0,0);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar11;
    puStack_c8 = &Core_Networking_HostConfig__AddSessionId;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff70;
    goto code_r0x016ce380;
  }
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffff60;
  puVar26 = &Core_Networking_HostConfig__AddNumberOfLaps;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff50;
    puVar26 = &Core_Networking_HostConfig__AddMapKey;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      pppuVar24 = &ppuStack_c0;
      puStack_b8 = &Core_Networking_HostConfig__AddMapKey;
      ppuStack_c0 = (undefined1 **)&stack0xffffffffffffff50;
      auVar27 = func_0x00f78af4();
      uVar11 = auVar27._0_8_;
      if (uVar11 != 0) {
        param_4 = 0;
        puStack_c8 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
          return uVar11;
        }
        uVar14 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar11,auVar27._8_8_);
        auVar28._8_8_ = 4;
        auVar28._0_8_ = uVar11;
        pppuVar3 = &ppuStack_c0;
        goto code_r0x016ce380;
      }
      lVar20 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff10;
      pppuVar24 = (undefined1 ***)&stack0xffffffffffffff20;
      piVar12 = (int *)0x3eb5000;
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
      }
      if (lVar20 == 0) {
        puVar26 = &Core_Networking_HostConfig__StartHostConfig;
        piVar13 = (int *)func_0x00f78af4();
        if (piVar13 == (int *)0x0) {
          lVar20 = func_0x00f78af4();
          return *(ulong *)(lVar20 + 8);
        }
        param_6 = 0;
        goto code_r0x016ce2a4;
      }
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar20 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,0);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
        unaff_x21 = (ulong)*(uint *)(lVar20 + 0x30);
        uVar18 = *(uint *)(lVar20 + 0x30) - 1;
        if (-2 < (int)uVar18) {
          uVar18 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar18;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar23 = (int)uVar11;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar21 = *(long *)(lVar20 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar21 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar21 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar11 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)sVar5);
          lVar21 = *(long *)(lVar20 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar18 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar20 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar20,(int)(short)((short)uVar11 - (short)uVar8));
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
            uVar1 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - *(int *)(lVar22 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar18 = *(uint *)(lVar20 + 0x10);
            unaff_x22 = (ulong)uVar18;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
            if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar20 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar20 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar20 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
                *(int *)(lVar20 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar23;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar1 + iVar9,2);
                if (*(long *)(lVar20 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar20 + 0x18),uVar18 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
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
          uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar8;
            unaff_x21 = *(ulong *)(lVar20 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
              iVar10 = iVar10 - iVar23;
              iVar9 = iVar9 - iVar23;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
              *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
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
      iVar23 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar29 = func_0x00f78ac0(uVar14,uVar15);
      puStack_128 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar25 = &puStack_130;
      lVar20 = *(long *)(auVar29._0_8_ + 0x18);
      iStack_154 = iVar23;
      uStack_150 = unaff_x22;
      uStack_148 = unaff_x21;
      uStack_140 = uVar11;
      uStack_138 = uVar14;
      puStack_130 = &stack0xffffffffffffff20;
      if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar29._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar9,4);
        lVar20 = *(long *)(auVar29._0_8_ + 0x18);
        if (lVar20 != 0) {
          uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar9 - iVar10) + iVar23,2);
          if ((uVar11 & 0xffff) != 0) {
            return uVar11;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_154,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar17 = func_0x00f78a24(0x3d66338);
      lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar17,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar20);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar27 = func_0x00f78ac0(uVar11,uVar14);
      puVar4 = auStack_160;
      do {
        uVar19 = auVar27._8_8_;
        lVar21 = auVar27._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar11;
        *(long *)(puVar4 + -0x18) = lVar20;
        *(undefined1 ***)(puVar4 + -0x10) = ppuVar25;
        *(undefined **)(puVar4 + -8) = puVar26;
        ppuVar25 = (undefined1 **)(puVar4 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar21 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
            return uVar11;
          }
        }
        else if (lVar21 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar19);
          if ((*(long *)(lVar21 + 0x18) != 0) &&
             (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar21 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar27 = func_0x00f78af4();
        uVar15 = 0;
        puVar4 = puVar4 + -0x20;
        lVar20 = lVar21;
        uVar11 = uVar19;
      } while( true );
    }
    uVar14 = 1;
  }
  else {
    uVar14 = 3;
  }
  uVar11 = auVar27._0_8_;
  auVar28._8_8_ = uVar14;
  auVar28._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = piVar12;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar26;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar27._8_8_);
  pppuVar24 = *(undefined1 ****)((long)pppuVar3 + -0x10);
  puStack_c8 = *(undefined **)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  piVar12 = *(int **)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar28._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = piVar12;
    *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar24;
    *(undefined **)((long)pppuVar3 + -8) = puStack_c8;
    uVar18 = auVar28._8_4_;
    if ((int)uVar18 < *(int *)(auVar28._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar28._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar17 = uVar14;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar11;
        return uVar11;
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
    auVar28 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar28._0_8_;
    *(ulong *)((long)pppuVar3 + -0x50) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x48) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x40) = unaff_x20;
    *(undefined8 *)((long)pppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppuVar3 + -0x30) = (undefined1 *)((long)pppuVar3 + -0x10);
    *(undefined **)((long)pppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar17 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar17);
    pppuVar24 = *(undefined1 ****)((long)pppuVar3 + -0x30);
    puStack_c8 = *(undefined **)((long)pppuVar3 + -0x28);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x40);
    piVar12 = *(int **)((long)pppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x50);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x48);
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x16552f0 | Core.Networking.HostConfig.get_NumberOfAi
// ============================================================

/* WARNING: Possible PIC construction at 0x0165537c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016553ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01655398) */
/* WARNING: Removing unreachable block (ram,0x01655380) */
/* WARNING: Removing unreachable block (ram,0x016553b0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__get_NumberOfAi
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                ,undefined8 param_6)

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
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long unaff_x20;
  int *piVar23;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 **ppuVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_160 [4];
  undefined1 auStack_140 [12];
  int iStack_134;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar18 = 0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    uVar17 = *param_1 + (int)uVar11;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar19,uVar17,1);
    if ((*(long *)(lVar19 + 0x10) == 0) ||
       (lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + 0x10), lVar19 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar17 < *(uint *)(lVar19 + 0x18)) {
      return (long)*(char *)(lVar19 + (int)uVar17 + 0x20);
    }
    uVar13 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar13,0);
    puStack_28 = &FlatBuffers_ByteBuffer__Get;
    uVar13 = 1;
    puStack_30 = &stack0xfffffffffffffff0;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar27._0_8_,auVar27._8_8_,1);
    lVar19 = *(long *)(auVar27._0_8_ + 0x10);
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x10), lVar19 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar27._8_4_ < *(uint *)(lVar19 + 0x18)) {
      return (ulong)*(byte *)(lVar19 + (int)auVar27._8_4_ + 0x20);
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    plVar15 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar19 = *(long *)(auVar27._0_8_ + 0x10);
    if ((lVar19 != 0) && (plVar15 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (**(code **)(*plVar15 + 0x348))
                         (plVar15,*(undefined8 *)(lVar19 + 0x10),auVar27._8_8_,uVar13,
                          *(undefined8 *)(*plVar15 + 0x350));
      return uVar11;
    }
    auVar27 = func_0x00f78af4();
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar27._0_8_,auVar27._8_8_,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffa0;
  puStack_28 = &Core_Networking_HostConfig__CreateHostConfig;
  ppuVar24 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar12 != (int *)0x0) {
    puVar25 = &UNK_01655380;
    piVar23 = piVar12;
    unaff_x21 = uVar18;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar13 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = piVar23;
    *(undefined8 *)(puVar2 + -0x18) = param_6;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    ppuVar24 = (undefined1 **)(puVar2 + -0x10);
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar12);
    if (*(long *)(piVar12 + 10) != 0) {
      if (*(int *)(*(long *)(piVar12 + 10) + 0x18) < 5) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar12 + 10) = uVar13;
      }
      piVar12[0xc] = 5;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar12);
      piVar12[0xd] = (int)uVar11;
      return uVar11;
    }
    puStack_a8 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    ppuVar3 = (undefined1 **)(puVar2 + -0x30);
    param_1 = piVar12;
    goto code_r0x016ce380;
  }
  auVar27 = func_0x00f78af4();
  uVar11 = auVar27._0_8_;
  if (uVar11 != 0) {
    param_4 = 0;
    puStack_a8 = &Core_Networking_HostConfig__AddTimeLimit;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar11,auVar27._8_8_);
    auVar27._8_8_ = 2;
    auVar27._0_8_ = uVar11;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffffa0;
    goto code_r0x016ce380;
  }
  ppuVar24 = (undefined1 **)&stack0xffffffffffffff90;
  auVar27 = func_0x00f78af4();
  uVar13 = auVar27._8_8_;
  uVar11 = auVar27._0_8_;
  if (uVar11 != 0) {
    param_4 = 0;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar13,uVar13,0,0);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar11;
    puStack_a8 = &Core_Networking_HostConfig__AddSessionId;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffff90;
    goto code_r0x016ce380;
  }
  ppuVar3 = (undefined1 **)&stack0xffffffffffffff80;
  puVar25 = &Core_Networking_HostConfig__AddNumberOfLaps;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    ppuVar3 = (undefined1 **)&stack0xffffffffffffff70;
    puVar25 = &Core_Networking_HostConfig__AddMapKey;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      ppuVar24 = &puStack_a0;
      puStack_98 = &Core_Networking_HostConfig__AddMapKey;
      puStack_a0 = &stack0xffffffffffffff70;
      auVar27 = func_0x00f78af4();
      uVar11 = auVar27._0_8_;
      if (uVar11 != 0) {
        param_4 = 0;
        puStack_a8 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
          return uVar11;
        }
        uVar13 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar11,auVar27._8_8_);
        auVar27._8_8_ = 4;
        auVar27._0_8_ = uVar11;
        ppuVar3 = &puStack_a0;
        goto code_r0x016ce380;
      }
      lVar19 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff30;
      ppuVar24 = (undefined1 **)&stack0xffffffffffffff40;
      piVar23 = (int *)0x3eb5000;
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
      }
      if (lVar19 == 0) {
        puVar25 = &Core_Networking_HostConfig__StartHostConfig;
        piVar12 = (int *)func_0x00f78af4();
        if (piVar12 == (int *)0x0) {
          lVar19 = func_0x00f78af4();
          return *(ulong *)(lVar19 + 8);
        }
        param_6 = 0;
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
        uVar17 = *(uint *)(lVar19 + 0x30) - 1;
        if (-2 < (int)uVar17) {
          uVar17 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar17;
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
          uVar18 = unaff_x22 - 8;
          if (*(uint *)(lVar20 + 0x18) <= uVar18) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar11 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
          lVar20 = *(long *)(lVar19 + 0x28);
          if (lVar20 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar20 + 0x18) <= uVar18) goto code_r0x016ced88;
          *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar17 = uVar1;
        } while (0 < (long)uVar18);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar19 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
        uVar17 = uVar17 * 2 + 6;
        unaff_x21 = (ulong)uVar17;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar17);
        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
        if (0 < (int)*(uint *)(lVar19 + 0x40)) {
          uVar18 = 0;
          do {
            lVar20 = *(long *)(lVar19 + 0x18);
            if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
               (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar21 + 0x18) <= uVar18) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - *(int *)(lVar21 + uVar18 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar17 = *(uint *)(lVar19 + 0x10);
            unaff_x22 = (ulong)uVar17;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar19 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
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
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar17 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
          } while ((long)uVar18 < (long)unaff_x22);
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
          uVar17 = (uint)unaff_x22;
          *(uint *)(lVar19 + 0x40) = uVar17 + 1;
          uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar8;
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
      auVar28 = func_0x00f78ac0(uVar13,uVar14);
      puStack_108 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar24 = &puStack_110;
      lVar19 = *(long *)(auVar28._0_8_ + 0x18);
      iStack_134 = iVar22;
      uStack_130 = unaff_x22;
      uStack_128 = unaff_x21;
      uStack_120 = uVar11;
      uStack_118 = uVar13;
      puStack_110 = &stack0xffffffffffffff40;
      if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
        lVar19 = *(long *)(auVar28._0_8_ + 0x18);
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
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_134,0);
      uVar14 = func_0x00f78a24(0x3d6ce88);
      uVar16 = func_0x00f78a24(0x3d66338);
      lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar16,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar14 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar27 = func_0x00f78ac0(uVar11,uVar13);
      puVar4 = auStack_140;
      do {
        uVar18 = auVar27._8_8_;
        lVar20 = auVar27._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar11;
        *(long *)(puVar4 + -0x18) = lVar19;
        *(undefined1 ***)(puVar4 + -0x10) = ppuVar24;
        *(undefined **)(puVar4 + -8) = puVar25;
        ppuVar24 = (undefined1 **)(puVar4 + -0x10);
        if ((int)uVar14 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar18);
code_r0x016cef70:
          if (*(long *)(lVar20 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
            return uVar11;
          }
        }
        else if (lVar20 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar18);
          if ((*(long *)(lVar20 + 0x18) != 0) &&
             (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
            uVar18 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar18);
            goto code_r0x016cef70;
          }
        }
        puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar27 = func_0x00f78af4();
        uVar14 = 0;
        puVar4 = puVar4 + -0x20;
        lVar19 = lVar20;
        uVar11 = uVar18;
      } while( true );
    }
    uVar13 = 1;
  }
  else {
    uVar13 = 3;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)ppuVar3 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar3;
  *(undefined **)((long)ppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar13 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  ppuVar24 = *(undefined1 ***)((long)ppuVar3 + -0x10);
  puStack_a8 = *(undefined **)((long)ppuVar3 + -8);
  unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
  param_1 = *(int **)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar14 = auVar27._8_8_;
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)ppuVar3 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar24;
    *(undefined **)((long)ppuVar3 + -8) = puStack_a8;
    uVar17 = auVar27._8_4_;
    if ((int)uVar17 < *(int *)(auVar27._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar13;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar11;
        return uVar11;
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
    auVar27 = func_0x00f78ac0(uVar13,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)ppuVar3 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar3 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar3 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar3 + -0x38) = uVar14;
    *(undefined1 **)((long)ppuVar3 + -0x30) = (undefined1 *)((long)ppuVar3 + -0x10);
    *(undefined **)((long)ppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar16);
    ppuVar24 = *(undefined1 ***)((long)ppuVar3 + -0x30);
    puStack_a8 = *(undefined **)((long)ppuVar3 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar3 + -0x40);
    param_1 = *(int **)((long)ppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar3 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar3 + -0x48);
    ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1655344 | Core.Networking.HostConfig.CreateHostConfig
// ============================================================

/* WARNING: Possible PIC construction at 0x0165537c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01655394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016553ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01655398) */
/* WARNING: Removing unreachable block (ram,0x01655380) */
/* WARNING: Removing unreachable block (ram,0x016553b0) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__CreateHostConfig
                (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                undefined8 param_6)

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
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long unaff_x19;
  int iVar19;
  long unaff_x20;
  long lVar20;
  ulong uVar21;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar22;
  undefined1 **ppuVar23;
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
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar4 = &stack0xffffffffffffffc0;
  puVar6 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar24 = (undefined *)0x1655380;
    lVar20 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_5;
code_r0x016ce2a4:
    uVar14 = 0;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(ulong *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = lVar20;
    *(undefined8 *)(puVar4 + -0x18) = param_6;
    *(undefined1 **)(puVar4 + -0x10) = puVar6;
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
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(param_1 + 0x28) = uVar14;
      }
      *(undefined4 *)(param_1 + 0x30) = 5;
      uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar21;
      return uVar21;
    }
    auVar26 = func_0x00f78af4();
    ppuVar5 = (undefined1 **)(puVar4 + -0x30);
    unaff_x19 = param_1;
    ppuVar23 = (undefined1 **)(puVar4 + -0x10);
    puStack_88 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar26 = func_0x00f78af4();
  uVar21 = auVar26._0_8_;
  puStack_50 = puVar6;
  if (uVar21 != 0) {
    param_4 = 0;
    puStack_48 = &Core_Networking_HostConfig__AddTimeLimit;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar21,auVar26._8_8_);
    auVar26._8_8_ = 2;
    auVar26._0_8_ = uVar21;
    ppuVar5 = (undefined1 **)&stack0xffffffffffffffc0;
    ppuVar23 = (undefined1 **)puStack_50;
    puStack_88 = puStack_48;
    goto code_r0x016ce380;
  }
  ppuVar23 = &puStack_50;
  puStack_48 = &Core_Networking_HostConfig__AddTimeLimit;
  auVar26 = func_0x00f78af4();
  uVar14 = auVar26._8_8_;
  uVar21 = auVar26._0_8_;
  if (uVar21 != 0) {
    param_4 = 0;
    if ((auVar26._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar21,uVar14,uVar14,0,0);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar21;
    puStack_88 = &Core_Networking_HostConfig__AddSessionId;
    ppuVar5 = &puStack_50;
    goto code_r0x016ce380;
  }
  ppuVar5 = (undefined1 **)&stack0xffffffffffffffa0;
  puVar24 = &Core_Networking_HostConfig__AddNumberOfLaps;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    ppuVar5 = (undefined1 **)&stack0xffffffffffffff90;
    puVar24 = &Core_Networking_HostConfig__AddMapKey;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppuVar23 = &puStack_80;
      puStack_78 = &Core_Networking_HostConfig__AddMapKey;
      puStack_80 = &stack0xffffffffffffff90;
      auVar26 = func_0x00f78af4();
      uVar21 = auVar26._0_8_;
      if (uVar21 != 0) {
        param_4 = 0;
        puStack_88 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar26._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
          return uVar21;
        }
        uVar14 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar21,auVar26._8_8_);
        auVar26._8_8_ = 4;
        auVar26._0_8_ = uVar21;
        ppuVar5 = &puStack_80;
        goto code_r0x016ce380;
      }
      lVar13 = func_0x00f78af4();
      puVar4 = &stack0xffffffffffffff50;
      puVar6 = &stack0xffffffffffffff60;
      lVar20 = 0x3eb5000;
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
      }
      if (lVar13 == 0) {
        puVar24 = &Core_Networking_HostConfig__StartHostConfig;
        param_1 = func_0x00f78af4();
        if (param_1 == 0) {
          lVar20 = func_0x00f78af4();
          return *(ulong *)(lVar20 + 8);
        }
        param_6 = 0;
        goto code_r0x016ce2a4;
      }
      uVar21 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar13 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
        uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
        unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
        uVar17 = *(uint *)(lVar13 + 0x30) - 1;
        if (-2 < (int)uVar17) {
          uVar17 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar17;
        do {
          uVar3 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar3;
          iVar19 = (int)uVar21;
          if ((int)uVar3 < 0) goto code_r0x016ceb30;
          lVar20 = *(long *)(lVar13 + 0x28);
          if (lVar20 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar20 + 0x18) <= uVar3) goto code_r0x016ced88;
        } while (*(int *)(lVar20 + (ulong)uVar3 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar22 = unaff_x22 - 8;
          if (*(uint *)(lVar20 + 0x18) <= uVar22) goto code_r0x016ced88;
          iVar11 = *(int *)(lVar20 + unaff_x22 * 4);
          sVar7 = 0;
          if (iVar11 != 0) {
            sVar7 = (short)uVar21 - (short)iVar11;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar7);
          lVar20 = *(long *)(lVar13 + 0x28);
          if (lVar20 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar20 + 0x18) <= uVar22) goto code_r0x016ced88;
          *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar17 = uVar3;
        } while (0 < (long)uVar22);
code_r0x016ceb30:
        uVar10 = *(undefined4 *)(lVar13 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar21 - (short)uVar10));
        uVar17 = uVar17 * 2 + 6;
        unaff_x21 = (ulong)uVar17;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar17);
        unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
        if (0 < (int)*(uint *)(lVar13 + 0x40)) {
          uVar22 = 0;
          do {
            lVar20 = *(long *)(lVar13 + 0x18);
            if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
               (lVar18 = *(long *)(lVar13 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar18 + 0x18) <= uVar22) goto code_r0x016ced88;
            uVar3 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - *(int *)(lVar18 + uVar22 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar3;
            uVar17 = *(uint *)(lVar13 + 0x10);
            unaff_x22 = (ulong)uVar17;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
            if (sVar7 == sVar8) {
              if (sVar7 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar13 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar22) goto code_r0x016ced88;
                iVar11 = *(int *)(unaff_x21 + uVar22 * 4 + 0x20);
                if (iVar11 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar13 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                *(int *)(lVar13 + 0x10) = iVar12;
                iVar11 = iVar11 - iVar19;
                goto code_r0x016ced3c;
              }
              iVar11 = 2;
              while( true ) {
                if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
                sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar3 + iVar11,2);
                if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
                sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar17 + iVar11,2);
                if (sVar8 != sVar9) break;
                iVar11 = iVar11 + 2;
                if (sVar7 <= iVar11) goto code_r0x016cec64;
              }
            }
            uVar22 = uVar22 + 1;
            unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
          } while ((long)uVar22 < (long)unaff_x22);
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
            lVar20 = *(long *)(lVar13 + 0x38);
            if (lVar20 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
            *(ulong *)(lVar13 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
          }
          uVar17 = (uint)unaff_x22;
          *(uint *)(lVar13 + 0x40) = uVar17 + 1;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar10;
            unaff_x21 = *(ulong *)(lVar13 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
              iVar12 = iVar12 - iVar19;
              iVar11 = iVar11 - iVar19;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
              *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
              return uVar21;
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
      iVar19 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar27 = func_0x00f78ac0(uVar14,uVar15);
      puStack_e8 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar23 = &puStack_f0;
      lVar20 = *(long *)(auVar27._0_8_ + 0x18);
      iStack_114 = iVar19;
      uStack_110 = unaff_x22;
      uStack_108 = unaff_x21;
      uStack_100 = uVar21;
      uStack_f8 = uVar14;
      puStack_f0 = &stack0xffffffffffffff60;
      if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
        iVar11 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar27._8_4_;
        iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar11,4);
        lVar20 = *(long *)(auVar27._0_8_ + 0x18);
        if (lVar20 != 0) {
          uVar21 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar11 - iVar12) + iVar19,2);
          if ((uVar21 & 0xffff) != 0) {
            return uVar21;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_114,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar16 = func_0x00f78a24(0x3d66338);
      lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar16,0);
      func_0x00f78a24(0x3d22a38);
      uVar21 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar21,lVar20);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar26 = func_0x00f78ac0(uVar21,uVar14);
      puVar6 = auStack_120;
      do {
        uVar22 = auVar26._8_8_;
        lVar13 = auVar26._0_8_;
        *(ulong *)(puVar6 + -0x20) = uVar21;
        *(long *)(puVar6 + -0x18) = lVar20;
        *(undefined1 ***)(puVar6 + -0x10) = ppuVar23;
        *(undefined **)(puVar6 + -8) = puVar24;
        ppuVar23 = (undefined1 **)(puVar6 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),4);
          uVar21 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar22);
code_r0x016cef70:
          if (*(long *)(lVar13 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x18) = *(undefined4 *)(lVar13 + 0x10);
            return uVar21;
          }
        }
        else if (lVar13 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar22);
          if ((*(long *)(lVar13 + 0x18) != 0) &&
             (lVar20 = *(long *)(*(long *)(lVar13 + 0x18) + 0x10), lVar20 != 0)) {
            uVar22 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar13 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
            uVar21 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,uVar22);
            goto code_r0x016cef70;
          }
        }
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar26 = func_0x00f78af4();
        uVar15 = 0;
        puVar6 = puVar6 + -0x20;
        lVar20 = lVar13;
        uVar21 = uVar22;
      } while( true );
    }
    uVar14 = 1;
  }
  else {
    uVar14 = 3;
  }
  uVar21 = auVar25._0_8_;
  auVar26._8_8_ = uVar14;
  auVar26._0_8_ = uVar21;
  param_4 = 0;
  *(ulong *)((long)ppuVar5 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar5 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar5 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar5 + -0x10) = ppuVar5;
  *(undefined **)((long)ppuVar5 + -8) = puVar24;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar21 + 0x48) == '\0')) {
    return uVar21;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar21,auVar25._8_8_);
  ppuVar23 = *(undefined1 ***)((long)ppuVar5 + -0x10);
  puStack_88 = *(undefined **)((long)ppuVar5 + -8);
  unaff_x20 = *(long *)((long)ppuVar5 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar5 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar5 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar5 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar26._8_8_;
    *(long *)((long)ppuVar5 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar5 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar5 + -0x10) = ppuVar23;
    *(undefined **)((long)ppuVar5 + -8) = puStack_88;
    uVar17 = auVar26._8_4_;
    if ((int)uVar17 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
      uVar21 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar14;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar21;
        return uVar21;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar14,0);
    uVar21 = auVar26._0_8_;
    *(ulong *)((long)ppuVar5 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar5 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar5 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar5 + -0x38) = uVar15;
    *(undefined1 **)((long)ppuVar5 + -0x30) = (undefined1 *)((long)ppuVar5 + -0x10);
    *(undefined **)((long)ppuVar5 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar21,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar21,uVar16);
    plVar1 = (long *)((long)ppuVar5 + -0x30);
    puVar2 = (undefined8 *)((long)ppuVar5 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar5 + -0x40);
    unaff_x19 = *(long *)((long)ppuVar5 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar5 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar5 + -0x48);
    ppuVar5 = (undefined1 **)((long)ppuVar5 + -0x20);
    ppuVar23 = (undefined1 **)*plVar1;
    puStack_88 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x16553d8 | Core.Networking.HostConfig.AddTimeLimit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__AddTimeLimit
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_100 [4];
  undefined1 auStack_e0 [12];
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar17 = 2;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_2);
    ppuVar2 = (undefined1 **)register0x00000008;
    goto code_r0x016ce380;
  }
  unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
  auVar21 = func_0x00f78af4();
  uVar14 = auVar21._8_8_;
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,uVar14,uVar14,0,0);
    uVar17 = 0;
    unaff_x30 = &Core_Networking_HostConfig__AddSessionId;
    ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  ppuVar2 = (undefined1 **)&stack0xffffffffffffffe0;
  puVar20 = &Core_Networking_HostConfig__AddNumberOfLaps;
  auVar21 = func_0x00f78af4();
  if (auVar21._0_8_ == 0) {
    ppuVar2 = (undefined1 **)&stack0xffffffffffffffd0;
    puVar20 = &Core_Networking_HostConfig__AddMapKey;
    auVar21 = func_0x00f78af4();
    if (auVar21._0_8_ == 0) {
      unaff_x29 = &puStack_40;
      puStack_38 = &Core_Networking_HostConfig__AddMapKey;
      puStack_40 = &stack0xffffffffffffffd0;
      auVar21 = func_0x00f78af4();
      param_1 = auVar21._0_8_;
      if (param_1 != 0) {
        param_4 = 0;
        puStack_48 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
          return param_1;
        }
        uVar14 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar21._8_8_);
        uVar17 = 4;
        ppuVar2 = &puStack_40;
        unaff_x30 = puStack_48;
        goto code_r0x016ce380;
      }
      lVar10 = func_0x00f78af4();
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
      }
      if (lVar10 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar10 = func_0x00f78af4();
          return *(ulong *)(lVar10 + 8);
        }
        uVar14 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff60;
        unaff_x29 = (undefined1 **)&stack0xffffffffffffff80;
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
        auVar21 = func_0x00f78af4();
        uVar17 = auVar21._8_8_;
        param_1 = auVar21._0_8_;
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
            uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20)
            ;
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
      auVar22 = func_0x00f78ac0(uVar17,uVar14);
      puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar2 = &puStack_b0;
      lVar10 = *(long *)(auVar22._0_8_ + 0x18);
      iStack_d4 = iVar18;
      uStack_d0 = unaff_x22;
      uStack_c8 = unaff_x21;
      uStack_c0 = uVar11;
      uStack_b8 = uVar17;
      puStack_b0 = &stack0xffffffffffffffa0;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar22._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar8,4);
        lVar10 = *(long *)(auVar22._0_8_ + 0x18);
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
      puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar21 = func_0x00f78ac0(uVar11,uVar17);
      puVar3 = auStack_e0;
      do {
        uVar19 = auVar21._8_8_;
        lVar15 = auVar21._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar11;
        *(long *)(puVar3 + -0x18) = lVar10;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar2;
        *(undefined **)(puVar3 + -8) = puVar20;
        ppuVar2 = (undefined1 **)(puVar3 + -0x10);
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
        puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar21 = func_0x00f78af4();
        uVar14 = 0;
        puVar3 = puVar3 + -0x20;
        lVar10 = lVar15;
        uVar11 = uVar19;
      } while( true );
    }
    uVar17 = 1;
  }
  else {
    uVar17 = 3;
  }
  param_1 = auVar21._0_8_;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(undefined **)((long)ppuVar2 + -8) = puVar20;
  if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,auVar21._8_8_);
  unaff_x29 = *(undefined1 ***)((long)ppuVar2 + -0x10);
  unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
code_r0x016ce380:
  do {
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = unaff_x29;
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
    auVar21 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
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
    unaff_x29 = *(undefined1 ***)((long)ppuVar2 + -0x30);
    unaff_x30 = *(undefined **)((long)ppuVar2 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x40);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x48);
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x16553fc | Core.Networking.HostConfig.AddSessionId
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__AddSessionId
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar15;
  long lVar16;
  long unaff_x19;
  undefined8 uVar17;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_f0 [4];
  undefined1 auStack_d0 [12];
  int iStack_c4;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar17 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    ppuVar2 = (undefined1 **)register0x00000008;
    goto code_r0x016ce380;
  }
  ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar20 = &Core_Networking_HostConfig__AddNumberOfLaps;
  auVar21 = func_0x00f78af4();
  if (auVar21._0_8_ == 0) {
    ppuVar2 = (undefined1 **)&stack0xffffffffffffffe0;
    puVar20 = &Core_Networking_HostConfig__AddMapKey;
    auVar21 = func_0x00f78af4();
    if (auVar21._0_8_ == 0) {
      unaff_x29 = &puStack_30;
      puStack_28 = &Core_Networking_HostConfig__AddMapKey;
      puStack_30 = &stack0xffffffffffffffe0;
      auVar21 = func_0x00f78af4();
      param_1 = auVar21._0_8_;
      if (param_1 != 0) {
        param_4 = 0;
        puStack_38 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
          return param_1;
        }
        param_2 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar21._8_8_);
        uVar17 = 4;
        ppuVar2 = &puStack_30;
        unaff_x30 = puStack_38;
        goto code_r0x016ce380;
      }
      lVar10 = func_0x00f78af4();
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
      }
      if (lVar10 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar10 = func_0x00f78af4();
          return *(ulong *)(lVar10 + 8);
        }
        param_2 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff70;
        unaff_x29 = (undefined1 **)&stack0xffffffffffffff90;
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
        auVar21 = func_0x00f78af4();
        uVar17 = auVar21._8_8_;
        param_1 = auVar21._0_8_;
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
            lVar15 = *(long *)(lVar10 + 0x18);
            if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar10 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar13 = *(uint *)(lVar10 + 0x10);
            unaff_x22 = (ulong)uVar13;
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
            lVar15 = *(long *)(lVar10 + 0x38);
            if (lVar15 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
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
        uVar17 = func_0x00f78b24();
        func_0x00f78ac0(uVar17,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar17 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a30);
      auVar22 = func_0x00f78ac0(uVar17,uVar14);
      puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
      ppuVar2 = &puStack_a0;
      lVar10 = *(long *)(auVar22._0_8_ + 0x18);
      iStack_c4 = iVar18;
      uStack_c0 = unaff_x22;
      uStack_b8 = unaff_x21;
      uStack_b0 = uVar11;
      uStack_a8 = uVar17;
      puStack_a0 = &stack0xffffffffffffffb0;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar22._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar8,4);
        lVar10 = *(long *)(auVar22._0_8_ + 0x18);
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
      uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
      uVar14 = func_0x00f78a24(0x3d6ce88);
      uVar12 = func_0x00f78a24(0x3d66338);
      lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar17,uVar12,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar14 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar10);
      uVar17 = func_0x00f78a24(0x3d56a50);
      puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar21 = func_0x00f78ac0(uVar11,uVar17);
      puVar3 = auStack_d0;
      do {
        uVar19 = auVar21._8_8_;
        lVar15 = auVar21._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar11;
        *(long *)(puVar3 + -0x18) = lVar10;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar2;
        *(undefined **)(puVar3 + -8) = puVar20;
        ppuVar2 = (undefined1 **)(puVar3 + -0x10);
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
        puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar21 = func_0x00f78af4();
        uVar14 = 0;
        puVar3 = puVar3 + -0x20;
        lVar10 = lVar15;
        uVar11 = uVar19;
      } while( true );
    }
    uVar17 = 1;
  }
  else {
    uVar17 = 3;
  }
  param_1 = auVar21._0_8_;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(undefined **)((long)ppuVar2 + -8) = puVar20;
  if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  param_2 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,auVar21._8_8_);
  unaff_x29 = *(undefined1 ***)((long)ppuVar2 + -0x10);
  unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
code_r0x016ce380:
  do {
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
    uVar13 = (uint)uVar17;
    if ((int)uVar13 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar14 = param_2;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      uVar12 = uVar17;
      if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar17 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar17,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
      uVar12 = uVar17;
    }
    uVar17 = func_0x00f78b24();
    auVar21 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    *(ulong *)((long)ppuVar2 + -0x50) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x48) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x40) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x38) = uVar12;
    *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x10);
    *(undefined **)((long)ppuVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar14 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    param_2 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar14);
    unaff_x29 = *(undefined1 ***)((long)ppuVar2 + -0x30);
    unaff_x30 = *(undefined **)((long)ppuVar2 + -0x28);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x40);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x38);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x50);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x48);
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1655420 | Core.Networking.HostConfig.AddNumberOfLaps
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__AddNumberOfLaps
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
    unaff_x30 = &Core_Networking_HostConfig__AddMapKey;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      ppuVar20 = &puStack_20;
      puStack_18 = &Core_Networking_HostConfig__AddMapKey;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar22 = func_0x00f78af4();
      uVar11 = auVar22._0_8_;
      if (uVar11 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Networking_HostConfig__AddNumberOfAi;
        if ((auVar22._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
          return uVar11;
        }
        uVar14 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar11,auVar22._8_8_);
        auVar23._8_8_ = 4;
        auVar23._0_8_ = uVar11;
        ppuVar2 = &puStack_20;
        goto code_r0x016ce380;
      }
      lVar10 = func_0x00f78af4();
      if ((bRam0000000003eb57f6 & 1) == 0) {
        func_0x00f78a20(0x3d3f0e0);
        bRam0000000003eb57f6 = 1;
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
        unaff_x20 = 5;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
            uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 5;
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
    uVar14 = 3;
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
  if ((auVar22._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar22._8_8_);
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
// RVA: 0x1655444 | Core.Networking.HostConfig.AddMapKey
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__AddMapKey
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
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar21 = func_0x00f78af4();
  param_1 = auVar21._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar21._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar21._8_8_);
    uVar16 = 4;
    unaff_x30 = &Core_Networking_HostConfig__AddNumberOfAi;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb57f6 & 1) == 0) {
    func_0x00f78a20(0x3d3f0e0);
    bRam0000000003eb57f6 = 1;
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
// RVA: 0x1655468 | Core.Networking.HostConfig.AddNumberOfAi
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__AddNumberOfAi
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
    uVar16 = 4;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_2);
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
  if ((bRam0000000003eb57f6 & 1) == 0) {
    func_0x00f78a20(0x3d3f0e0);
    bRam0000000003eb57f6 = 1;
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
// RVA: 0x165548c | Core.Networking.HostConfig.EndHostConfig
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_HostConfig__EndHostConfig
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
  
  if ((bRam0000000003eb57f6 & 1) == 0) {
    func_0x00f78a20(0x3d3f0e0);
    bRam0000000003eb57f6 = 1;
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
// RVA: 0x16554d8 | Core.Networking.HostConfig.StartHostConfig
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Networking_HostConfig__StartHostConfig
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



