// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.<>c__DisplayClass424_0

// ============================================================
// RVA: 0x16885a0 | Core.Services.Internal.<>c__DisplayClass424_0..ctor
// ============================================================

void Core_Services_Internal___c__DisplayClass424_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x16885a8 | Core.Services.Internal.<>c__DisplayClass424_0.<CreateStringOffsets>b__0
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */

ulong Core_Services_Internal___c__DisplayClass424_0___CreateStringOffsets_b__0
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  undefined *unaff_x30;
  undefined1 auVar11 [16];
  long alStack_80 [8];
  undefined *puVar12;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    auVar11 = func_0x00f78af4();
    if ((bRam0000000003eb5a38 & 1) == 0) {
      func_0x00f78a20(0x3d1eda0);
      bRam0000000003eb5a38 = 1;
    }
    /*System.Object$$.ctor*/ func_0x0294d018(auVar11._0_8_,0);
    uVar4 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,auVar11._8_8_);
    *(ulong *)(auVar11._0_8_ + 0x10) = uVar4;
    return uVar4;
  }
  puVar10 = &stack0xfffffffffffffff0;
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar3,param_2,0);
  uVar8 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar3,1);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(lVar3,0);
  plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  if (plVar6 != (long *)0x0) {
    unaff_x21 = (**(code **)(*plVar6 + 0x1d8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x1e0));
    param_4 = 1;
    uVar8 = unaff_x21;
    /*FlatBuffers.FlatBufferBuilder$$StartVector*/ func_0x016ce14c(lVar3,1);
    iVar1 = *(int *)(lVar3 + 0x10) - (int)unaff_x21;
    *(int *)(lVar3 + 0x10) = iVar1;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*FlatBuffers.ByteBuffer$$PutStringUTF8*/ func_0x016cc978(*(long *)(lVar3 + 0x18),iVar1,param_2);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar3,*(undefined4 *)(lVar3 + 0x44));
      goto code_r0x016cda04;
    }
  }
  auVar11 = func_0x00f78af4();
  if ((int)uVar8 == (int)param_4) {
    return auVar11._0_8_;
  }
  puVar12 = &FlatBuffers_FlatBufferBuilder__AddStruct;
  /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(auVar11._0_8_,uVar8);
  puVar2 = &stack0xffffffffffffffd0;
  lVar9 = lVar3;
  while( true ) {
    lVar3 = auVar11._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x20) = param_2;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 **)(puVar2 + -0x10) = puVar10;
    *(undefined **)(puVar2 + -8) = puVar12;
    unaff_x29 = puVar2 + -0x10;
    if (auVar11._8_4_ < *(int *)(lVar3 + 0x30)) break;
    func_0x00f78a24(0x3d22738);
    uVar8 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d6ceb8);
    uVar7 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar8,uVar5);
    uVar5 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar8,uVar5);
    func_0x00f78af4();
    uVar5 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar5,0);
    uVar4 = auVar11._0_8_;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x40) = param_2;
    *(undefined8 *)(puVar2 + -0x38) = uVar8;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x29;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar7 == (int)param_4) && (*(char *)(uVar4 + 0x48) == '\0')) {
      return uVar4;
    }
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar4,1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar4,uVar7);
    puVar10 = *(undefined1 **)(puVar2 + -0x30);
    puVar12 = *(undefined **)(puVar2 + -0x28);
    param_2 = *(undefined8 *)(puVar2 + -0x40);
    lVar9 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(undefined8 *)(puVar2 + -0x50);
    unaff_x21 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  }
  unaff_x30 = &UNK_016ce3a4;
code_r0x016cda04:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((*(long *)(lVar3 + 0x18) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar9 != 0)) {
    return (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar3 + 0x10));
  }
  lVar3 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar3 + 0x48);
}



