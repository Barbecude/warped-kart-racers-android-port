// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorVector3

// ============================================================
// RVA: 0x16834fc | Core.Services.ReplicatorVector3.get_X
// ============================================================

ulong Core_Services_ReplicatorVector3__get_X(int *param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined1 **ppuVar16;
  undefined *unaff_x30;
  code *pcVar17;
  undefined1 auVar18 [16];
  long alStack_c0 [12];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar2;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = &stack0xfffffffffffffff0;
  lVar7 = *(long *)(param_1 + 2);
  if (lVar7 == 0) {
    piVar8 = (int *)func_0x00f78af4();
    ppuVar3 = &puStack_20;
    unaff_x29 = &puStack_20;
    puStack_18 = &Core_Services_ReplicatorVector3__get_Y;
    lVar7 = *(long *)(piVar8 + 2);
    if (lVar7 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar8 = (int *)func_0x00f78af4();
      puStack_40 = (undefined1 *)&puStack_30;
      puStack_28 = &Core_Services_ReplicatorVector3__get_Z;
      lVar7 = *(long *)(piVar8 + 2);
      if (lVar7 == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        puVar9 = (uint *)func_0x00f78af4();
        pcStack_38 = Core_Services_ReplicatorQuaternion__get_X;
        lVar7 = *(long *)(puVar9 + 2);
        if (lVar7 == 0) {
          piVar8 = (int *)func_0x00f78af4();
          pcStack_48 = Core_Services_ReplicatorQuaternion__get_Y;
          lVar7 = *(long *)(piVar8 + 2);
          if (lVar7 == 0) {
            puStack_50 = (undefined1 *)&puStack_40;
            piVar8 = (int *)func_0x00f78af4();
            ppuVar16 = &puStack_60;
            pcStack_58 = Core_Services_ReplicatorQuaternion__get_Z;
            lVar7 = *(long *)(piVar8 + 2);
            if (lVar7 == 0) {
              puStack_60 = (undefined1 *)&puStack_50;
              piVar8 = (int *)func_0x00f78af4();
              lVar7 = *(long *)(piVar8 + 2);
              if (lVar7 == 0) {
                lVar7 = func_0x00f78af4();
                return *(ulong *)(lVar7 + 8);
              }
              uVar13 = (ulong)(*piVar8 + 3);
              ppuVar4 = &puStack_60;
              pcVar17 = Core_Services_ReplicatorQuaternion__get_W;
            }
            else {
              uVar13 = (ulong)(*piVar8 + 2);
              ppuVar4 = &puStack_50;
              pcVar17 = Core_Services_ReplicatorQuaternion__get_Z;
              ppuVar16 = &puStack_50;
              puStack_60 = (undefined1 *)&puStack_50;
            }
          }
          else {
            uVar13 = (ulong)(*piVar8 + 1);
            ppuVar4 = &puStack_40;
            pcVar17 = Core_Services_ReplicatorQuaternion__get_Y;
            ppuVar16 = &puStack_40;
            puStack_50 = (undefined1 *)&puStack_40;
          }
        }
        else {
          uVar13 = (ulong)*puVar9;
          ppuVar4 = &puStack_30;
          pcVar17 = Core_Services_ReplicatorQuaternion__get_X;
          ppuVar16 = &puStack_30;
          puStack_40 = (undefined1 *)&puStack_30;
        }
        *(undefined8 *)((long)ppuVar4 + -0x20) = unaff_x20;
        *(undefined8 *)((long)ppuVar4 + -0x18) = unaff_x19;
        *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar16;
        *(code **)((long)ppuVar4 + -8) = pcVar17;
        uVar14 = 1;
        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar7,uVar13,1);
        if ((*(long *)(lVar7 + 0x10) == 0) ||
           (lVar15 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar15 == 0)) {
          func_0x00f78af4();
        }
        else if ((uint)uVar13 < *(uint *)(lVar15 + 0x18)) {
          return (ulong)*(byte *)(lVar15 + (int)(uint)uVar13 + 0x20);
        }
        uVar10 = func_0x00f78b24();
        auVar18 = func_0x00f78ac0(uVar10,0);
        *(undefined8 *)((long)ppuVar4 + -0x50) = unaff_x22;
        *(undefined8 *)((long)ppuVar4 + -0x48) = unaff_x21;
        *(long *)((long)ppuVar4 + -0x40) = lVar7;
        *(ulong *)((long)ppuVar4 + -0x38) = uVar13;
        *(undefined1 **)((long)ppuVar4 + -0x30) = (undefined1 *)((long)ppuVar4 + -0x10);
        *(undefined **)((long)ppuVar4 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
        plVar11 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        lVar7 = *(long *)(auVar18._0_8_ + 0x10);
        if ((lVar7 != 0) && (plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (**(code **)(*plVar11 + 0x348))
                             (plVar11,*(undefined8 *)(lVar7 + 0x10),auVar18._8_8_,uVar14,
                              *(undefined8 *)(*plVar11 + 0x350));
          return uVar13;
        }
        auVar18 = func_0x00f78af4();
        *(undefined1 **)((long)ppuVar4 + -0x60) = (undefined1 *)((long)ppuVar4 + -0x30);
        *(undefined **)((long)ppuVar4 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar18._0_8_,auVar18._8_8_,2);
        return (ulong)(uint)(int)sVar5;
      }
      iVar12 = *piVar8 + 4;
      register0x00000008 = (BADSPACEBASE *)&puStack_20;
      unaff_x30 = &Core_Services_ReplicatorVector3__get_Z;
      puStack_30 = (undefined1 *)ppuVar3;
    }
    else {
      iVar12 = *piVar8 + 2;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Services_ReplicatorVector3__get_Y;
      unaff_x29 = (undefined1 **)puVar2;
      puStack_20 = puVar1;
    }
  }
  else {
    iVar12 = *param_1;
  }
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar7,iVar12,2);
  return (ulong)(uVar6 & 0xffff);
}



// ============================================================
// RVA: 0x1683524 | Core.Services.ReplicatorVector3.get_Y
// ============================================================

ulong Core_Services_ReplicatorVector3__get_Y(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 **ppuVar14;
  undefined1 *puVar15;
  undefined *unaff_x30;
  code *pcVar16;
  undefined1 auVar17 [16];
  long alStack_b0 [12];
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar15 = &stack0xfffffffffffffff0;
  lVar6 = *(long *)(param_1 + 2);
  if (lVar6 == 0) {
    piVar7 = (int *)func_0x00f78af4();
    puStack_30 = (undefined1 *)&puStack_20;
    puStack_18 = &Core_Services_ReplicatorVector3__get_Z;
    lVar6 = *(long *)(piVar7 + 2);
    if (lVar6 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      puVar8 = (uint *)func_0x00f78af4();
      pcStack_28 = Core_Services_ReplicatorQuaternion__get_X;
      lVar6 = *(long *)(puVar8 + 2);
      if (lVar6 == 0) {
        piVar7 = (int *)func_0x00f78af4();
        pcStack_38 = Core_Services_ReplicatorQuaternion__get_Y;
        lVar6 = *(long *)(piVar7 + 2);
        if (lVar6 == 0) {
          puStack_40 = (undefined1 *)&puStack_30;
          piVar7 = (int *)func_0x00f78af4();
          ppuVar14 = &puStack_50;
          pcStack_48 = Core_Services_ReplicatorQuaternion__get_Z;
          lVar6 = *(long *)(piVar7 + 2);
          if (lVar6 == 0) {
            puStack_50 = (undefined1 *)&puStack_40;
            piVar7 = (int *)func_0x00f78af4();
            lVar6 = *(long *)(piVar7 + 2);
            if (lVar6 == 0) {
              lVar6 = func_0x00f78af4();
              return *(ulong *)(lVar6 + 8);
            }
            uVar11 = (ulong)(*piVar7 + 3);
            ppuVar3 = &puStack_50;
            pcVar16 = Core_Services_ReplicatorQuaternion__get_W;
          }
          else {
            uVar11 = (ulong)(*piVar7 + 2);
            ppuVar3 = &puStack_40;
            pcVar16 = Core_Services_ReplicatorQuaternion__get_Z;
            ppuVar14 = &puStack_40;
            puStack_50 = (undefined1 *)&puStack_40;
          }
        }
        else {
          uVar11 = (ulong)(*piVar7 + 1);
          ppuVar3 = &puStack_30;
          pcVar16 = Core_Services_ReplicatorQuaternion__get_Y;
          ppuVar14 = &puStack_30;
          puStack_40 = (undefined1 *)&puStack_30;
        }
      }
      else {
        uVar11 = (ulong)*puVar8;
        ppuVar3 = &puStack_20;
        pcVar16 = Core_Services_ReplicatorQuaternion__get_X;
        ppuVar14 = &puStack_20;
        puStack_30 = (undefined1 *)&puStack_20;
      }
      *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar14;
      *(code **)((long)ppuVar3 + -8) = pcVar16;
      uVar12 = 1;
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar6,uVar11,1);
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar13 == 0)) {
        func_0x00f78af4();
      }
      else if ((uint)uVar11 < *(uint *)(lVar13 + 0x18)) {
        return (ulong)*(byte *)(lVar13 + (int)(uint)uVar11 + 0x20);
      }
      uVar9 = func_0x00f78b24();
      auVar17 = func_0x00f78ac0(uVar9,0);
      *(undefined8 *)((long)ppuVar3 + -0x50) = unaff_x22;
      *(undefined8 *)((long)ppuVar3 + -0x48) = unaff_x21;
      *(long *)((long)ppuVar3 + -0x40) = lVar6;
      *(ulong *)((long)ppuVar3 + -0x38) = uVar11;
      *(undefined1 **)((long)ppuVar3 + -0x30) = (undefined1 *)((long)ppuVar3 + -0x10);
      *(undefined **)((long)ppuVar3 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
      plVar10 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      lVar6 = *(long *)(auVar17._0_8_ + 0x10);
      if ((lVar6 != 0) && (plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(*plVar10 + 0x348))
                           (plVar10,*(undefined8 *)(lVar6 + 0x10),auVar17._8_8_,uVar12,
                            *(undefined8 *)(*plVar10 + 0x350));
        return uVar11;
      }
      auVar17 = func_0x00f78af4();
      *(undefined1 **)((long)ppuVar3 + -0x60) = (undefined1 *)((long)ppuVar3 + -0x30);
      *(undefined **)((long)ppuVar3 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
      sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar17._0_8_,auVar17._8_8_,2);
      return (ulong)(uint)(int)sVar4;
    }
    iVar1 = *piVar7 + 4;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_ReplicatorVector3__get_Z;
    puStack_20 = puVar2;
  }
  else {
    iVar1 = *param_1 + 2;
    puVar15 = unaff_x29;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar15;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar6,iVar1,2);
  return (ulong)(uVar5 & 0xffff);
}



// ============================================================
// RVA: 0x1683550 | Core.Services.ReplicatorVector3.get_Z
// ============================================================

ulong Core_Services_ReplicatorVector3__get_Z(int *param_1)

{
  undefined1 **ppuVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  long alStack_a0 [12];
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + 4,2);
    return (ulong)(uVar3 & 0xffff);
  }
  puVar4 = (uint *)func_0x00f78af4();
  pcStack_18 = Core_Services_ReplicatorQuaternion__get_X;
  lVar5 = *(long *)(puVar4 + 2);
  if (lVar5 == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    piVar6 = (int *)func_0x00f78af4();
    pcStack_28 = Core_Services_ReplicatorQuaternion__get_Y;
    lVar5 = *(long *)(piVar6 + 2);
    if (lVar5 == 0) {
      puStack_30 = (undefined1 *)&puStack_20;
      piVar6 = (int *)func_0x00f78af4();
      ppuVar12 = &puStack_40;
      pcStack_38 = Core_Services_ReplicatorQuaternion__get_Z;
      lVar5 = *(long *)(piVar6 + 2);
      if (lVar5 == 0) {
        puStack_40 = (undefined1 *)&puStack_30;
        piVar6 = (int *)func_0x00f78af4();
        lVar5 = *(long *)(piVar6 + 2);
        if (lVar5 == 0) {
          lVar5 = func_0x00f78af4();
          return *(ulong *)(lVar5 + 8);
        }
        uVar9 = (ulong)(*piVar6 + 3);
        ppuVar1 = &puStack_40;
        pcVar13 = Core_Services_ReplicatorQuaternion__get_W;
      }
      else {
        uVar9 = (ulong)(*piVar6 + 2);
        ppuVar1 = &puStack_30;
        pcVar13 = Core_Services_ReplicatorQuaternion__get_Z;
        ppuVar12 = &puStack_30;
        puStack_40 = (undefined1 *)&puStack_30;
      }
    }
    else {
      uVar9 = (ulong)(*piVar6 + 1);
      ppuVar1 = &puStack_20;
      pcVar13 = Core_Services_ReplicatorQuaternion__get_Y;
      ppuVar12 = &puStack_20;
      puStack_30 = (undefined1 *)&puStack_20;
    }
  }
  else {
    uVar9 = (ulong)*puVar4;
    ppuVar1 = (undefined1 **)&stack0xfffffffffffffff0;
    pcVar13 = Core_Services_ReplicatorQuaternion__get_X;
    ppuVar12 = (undefined1 **)&stack0xfffffffffffffff0;
    puStack_20 = &stack0xfffffffffffffff0;
  }
  *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar12;
  *(code **)((long)ppuVar1 + -8) = pcVar13;
  uVar10 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar5,uVar9,1);
  if ((*(long *)(lVar5 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10), lVar11 == 0)) {
    func_0x00f78af4();
  }
  else if ((uint)uVar9 < *(uint *)(lVar11 + 0x18)) {
    return (ulong)*(byte *)(lVar11 + (int)(uint)uVar9 + 0x20);
  }
  uVar7 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar7,0);
  *(undefined8 *)((long)ppuVar1 + -0x50) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x48) = unaff_x21;
  *(long *)((long)ppuVar1 + -0x40) = lVar5;
  *(ulong *)((long)ppuVar1 + -0x38) = uVar9;
  *(undefined1 **)((long)ppuVar1 + -0x30) = (undefined1 *)((long)ppuVar1 + -0x10);
  *(undefined **)((long)ppuVar1 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar5 = *(long *)(auVar14._0_8_ + 0x10);
  if ((lVar5 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*plVar8 + 0x348))
                      (plVar8,*(undefined8 *)(lVar5 + 0x10),auVar14._8_8_,uVar10,
                       *(undefined8 *)(*plVar8 + 0x350));
    return uVar9;
  }
  auVar14 = func_0x00f78af4();
  *(undefined1 **)((long)ppuVar1 + -0x60) = (undefined1 *)((long)ppuVar1 + -0x30);
  *(undefined **)((long)ppuVar1 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar14._0_8_,auVar14._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x168377c | Core.Services.ReplicatorVector3.__assign
// ============================================================

undefined1  [16]
Core_Services_ReplicatorVector3____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1683790 | Core.Services.ReplicatorVector3.get_ByteBuffer
// ============================================================

undefined8 Core_Services_ReplicatorVector3__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1683798 | Core.Services.ReplicatorVector3.__init
// ============================================================

void Core_Services_ReplicatorVector3____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x16837a4 | Core.Services.ReplicatorVector3.CreateReplicatorVector3
// ============================================================

ulong Core_Services_ReplicatorVector3__CreateReplicatorVector3
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar3 = param_3;
  uVar4 = param_4;
  if ((bRam0000000003eb5a08 & 1) == 0) {
    func_0x00f78a20(0x3d3f200);
    bRam0000000003eb5a08 = 1;
  }
  if (param_1 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,6,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUshort*/ func_0x016cdc58(param_1,param_2,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar5 != 0)) {
      return (ulong)(uint)(*(int *)(lVar5 + 0x18) - *(int *)(param_1 + 0x10));
    }
    lVar5 = func_0x00f78af4(param_1,0);
    return (ulong)*(byte *)(lVar5 + 0x48);
  }
  auStack_70 = func_0x00f78af4();
  puStack_48 = &Core_Services_ReplicatorViewId__Create;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  uStack_60 = param_2;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  lVar5 = Core_Services_ReplicatorStream__get_SyncInstanceId(&uStack_80);
  uVar1 = Core_Services_ReplicatorStream__get_SyncIdAndCategory(&uStack_80);
  uVar2 = (ulong)((uint)uVar1 & 0xf);
  if ((uVar1 & 0xf) == 0) {
    uVar2 = Core_Services_ReplicatorData__get_SyncId(auStack_70);
  }
  return uVar2 & 0xffffffff | lVar5 << 0x20 | (uVar1 >> 4) << 0x30;
}



