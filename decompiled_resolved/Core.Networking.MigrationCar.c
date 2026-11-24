// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.MigrationCar

// ============================================================
// RVA: 0x1655e7c | Core.Networking.MigrationCar.__assign
// ============================================================

undefined1  [16]
Core_Networking_MigrationCar____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1657adc | Core.Networking.MigrationCar.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_MigrationCar__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1657ae4 | Core.Networking.MigrationCar.GetRootAsMigrationCar
// ============================================================

undefined1  [16] Core_Networking_MigrationCar__GetRootAsMigrationCar(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar3._4_4_ = 0;
    auVar3._0_4_ = *(int *)(param_1 + 0x18) + iVar1;
    auVar3._8_8_ = param_1;
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  *auVar3._0_8_ = auVar3._8_4_;
  *(undefined8 *)(auVar3._0_8_ + 2) = uVar2;
  return auVar3;
}



// ============================================================
// RVA: 0x1657af0 | Core.Networking.MigrationCar.GetRootAsMigrationCar
// ============================================================

undefined1  [16]
Core_Networking_MigrationCar__GetRootAsMigrationCar(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar2._0_8_ = param_2 & 0xffffffff00000000 | (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar1);
    auVar2._8_8_ = param_1;
    return auVar2;
  }
  auVar2 = func_0x00f78af4();
  *auVar2._0_8_ = auVar2._8_4_;
  *(undefined8 *)(auVar2._0_8_ + 2) = param_3;
  return auVar2;
}



// ============================================================
// RVA: 0x1657b34 | Core.Networking.MigrationCar.__init
// ============================================================

void Core_Networking_MigrationCar____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1657b40 | Core.Networking.MigrationCar.get_SyncId
// ============================================================

void Core_Networking_MigrationCar__get_SyncId(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  ulong *extraout_x8;
  
  iVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if (iVar2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 2) != 0) {
    /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + iVar2,4);
    return;
  }
  piVar3 = (int *)func_0x00f78af4();
  if ((bRam0000000003eb5811 & 1) == 0) {
    func_0x00f78a20(0x3d3ee38);
    bRam0000000003eb5811 = 1;
  }
  iVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar3,6,0);
  if (iVar2 != 0) {
    iVar1 = *piVar3;
    uVar4 = *(ulong *)(piVar3 + 2);
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    *extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 2) = 1;
    *extraout_x8 = (ulong)(uint)(iVar1 + iVar2);
    extraout_x8[1] = uVar4;
    return;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1657b94 | Core.Networking.MigrationCar.get_Position
// ============================================================

void Core_Networking_MigrationCar__get_Position(ulong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb5811 & 1) == 0) {
    func_0x00f78a20(0x3d3ee38);
    bRam0000000003eb5811 = 1;
  }
  iVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,6,0);
  if (iVar2 != 0) {
    iVar1 = *param_2;
    uVar3 = *(ulong *)(param_2 + 2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (ulong)(uint)(iVar1 + iVar2);
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1657c40 | Core.Networking.MigrationCar.get_Rotation
// ============================================================

void Core_Networking_MigrationCar__get_Rotation(ulong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb5812 & 1) == 0) {
    func_0x00f78a20(0x3d3ee48);
    bRam0000000003eb5812 = 1;
  }
  iVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,8,0);
  if (iVar2 != 0) {
    iVar1 = *param_2;
    uVar3 = *(ulong *)(param_2 + 2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (ulong)(uint)(iVar1 + iVar2);
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x1657cec | Core.Networking.MigrationCar.get_UsableType
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1657d40 | Core.Networking.MigrationCar.get_UsableUsesLeft
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016581b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */
/* WARNING: Removing unreachable block (ram,0x01657f28) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x016581b4) */
/* WARNING: Removing unreachable block (ram,0x016581c4) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Networking_MigrationCar__get_UsableUsesLeft
                (int *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *******pppppppiVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  short sVar7;
  undefined4 uVar10;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  int *piVar16;
  int *piVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  short sVar8;
  short sVar9;
  int iVar11;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  dword *pdVar24;
  int ******ppppppiVar25;
  undefined8 uVar26;
  ulong uVar27;
  int iVar28;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar29;
  long lVar30;
  int *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar31;
  int ******unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  int *******unaff_x29;
  int *******pppppppiVar32;
  undefined1 ***pppuVar33;
  undefined *unaff_x30;
  undefined *puVar34;
  float extraout_s0;
  float extraout_s0_00;
  float fVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auStack_220 [16];
  int ******ppppppiStack_210;
  long lStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  int ******ppppppiStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  int *******pppppppiStack_140;
  undefined *puStack_138;
  int *******pppppppiStack_110;
  undefined *puStack_108;
  undefined *puStack_d8;
  int *******pppppppiStack_d0;
  undefined *puStack_c8;
  int *******pppppppiStack_b0;
  undefined *puStack_a8;
  int *******pppppppiStack_90;
  undefined *puStack_88;
  int *******pppppppiStack_70;
  undefined *puStack_68;
  int *******pppppppiStack_50;
  undefined *puStack_48;
  int *******pppppppiStack_30;
  undefined *puStack_28;
  
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)(param_1 + 2) != 0) {
    auVar38._8_4_ = *param_1 + (int)uVar14;
    auVar38._0_8_ = *(long *)(param_1 + 2);
    auVar38._12_4_ = 0;
    puVar5 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    goto code_r0x016cccfc;
  }
  puVar15 = (ulong *)func_0x00f78af4();
  puStack_28 = &Core_Networking_MigrationCar__get_BattleScore;
  pppppppiStack_30 = (int *******)&stack0xfffffffffffffff0;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(puVar15,0xe,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)((long)puVar15 + 8) != 0) {
    auVar38._8_4_ = *(int *)puVar15 + (int)uVar14;
    auVar38._0_8_ = *(long *)((long)puVar15 + 8);
    auVar38._12_4_ = 0;
    puVar5 = &stack0xffffffffffffffe0;
    unaff_x29 = pppppppiStack_30;
    unaff_x30 = puStack_28;
    goto code_r0x016cccfc;
  }
  piVar16 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_MigrationCar__get_LapsCompleted;
  pppppppiStack_50 = (int *******)&pppppppiStack_30;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar16,0x10,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)(piVar16 + 2) != 0) {
    auVar37._4_4_ = 0;
    auVar37._0_4_ = *piVar16 + (int)uVar14;
    auVar37._8_8_ = *(long *)(piVar16 + 2);
    puVar2 = &stack0xffffffffffffffc0;
    param_4 = unaff_x20;
    uVar14 = unaff_x21;
    pppppppiVar4 = pppppppiStack_50;
    puVar34 = puStack_48;
code_r0x016ccca0:
    unaff_x20 = auVar37._8_8_;
    param_1 = auVar37._0_8_;
    puVar5 = puVar2 + -0x20;
    *(long **)(puVar2 + -0x20) = param_4;
    *(ulong **)(puVar2 + -0x18) = puVar15;
    *(int ********)(puVar2 + -0x10) = pppppppiVar4;
    *(undefined **)(puVar2 + -8) = puVar34;
    unaff_x29 = (int *******)(puVar2 + -0x10);
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x20,param_1,1);
    if ((unaff_x20[2] == 0) || (lVar29 = *(long *)(unaff_x20[2] + 0x10), lVar29 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar37._0_4_ < *(uint *)(lVar29 + 0x18)) {
      return (long)*(char *)(lVar29 + (int)auVar37._0_4_ + 0x20);
    }
    uVar26 = func_0x00f78b24();
    unaff_x30 = &FlatBuffers_ByteBuffer__Get;
    auVar38 = func_0x00f78ac0(uVar26,0);
    unaff_x21 = uVar14;
code_r0x016cccfc:
    *(long **)(puVar5 + -0x20) = unaff_x20;
    *(int **)(puVar5 + -0x18) = param_1;
    *(int ********)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = unaff_x30;
    uVar26 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar38._0_8_,auVar38._8_8_,1);
    lVar29 = *(long *)(auVar38._0_8_ + 0x10);
    if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x10), lVar29 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar38._8_4_ < *(uint *)(lVar29 + 0x18)) {
      return (ulong)*(byte *)(lVar29 + (int)auVar38._8_4_ + 0x20);
    }
    uVar18 = func_0x00f78b24();
    auVar37 = func_0x00f78ac0(uVar18,0);
    *(int *******)(puVar5 + -0x50) = unaff_x22;
    *(ulong *)(puVar5 + -0x48) = unaff_x21;
    *(undefined1 (*) [16])(puVar5 + -0x40) = auVar38;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
    plVar19 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar29 = *(long *)(auVar37._0_8_ + 0x10);
    if ((lVar29 != 0) && (plVar19 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (**(code **)(*plVar19 + 0x348))
                         (plVar19,*(undefined8 *)(lVar29 + 0x10),auVar37._8_8_,uVar26,
                          *(undefined8 *)(*plVar19 + 0x350));
      return uVar14;
    }
    auVar38 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x30;
    *(undefined **)(puVar5 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar38._0_8_,auVar38._8_8_,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar17 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_MigrationCar__get_TrackCoordsX;
  pppppppiStack_70 = (int *******)&pppppppiStack_50;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar17,0x12,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  lVar29 = *(long *)(piVar17 + 2);
  if (lVar29 == 0) {
    piVar16 = (int *)func_0x00f78af4();
    puStack_88 = &Core_Networking_MigrationCar__get_TrackCoordsY;
    pppppppiStack_90 = (int *******)&pppppppiStack_70;
    uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar16,0x14,0);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    lVar29 = *(long *)(piVar16 + 2);
    if (lVar29 == 0) {
      param_1 = (int *)func_0x00f78af4();
      puVar5 = &stack0xffffffffffffff40;
      puStack_a8 = &Core_Networking_MigrationCar__get_Halfway;
      unaff_x29 = (int *******)&pppppppiStack_b0;
      uVar14 = 0;
      pppppppiStack_b0 = (int *******)&pppppppiStack_90;
      uVar27 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x16);
      if ((int)uVar27 == 0) {
        return uVar27;
      }
      if (*(long *)(param_1 + 2) != 0) {
        auVar38._8_4_ = *param_1 + (int)uVar27;
        auVar38._0_8_ = *(long *)(param_1 + 2);
        auVar38._12_4_ = 0;
        unaff_x30 = &UNK_01657f28;
        goto code_r0x016cccfc;
      }
      piVar16 = (int *)func_0x00f78af4();
      pppppppiStack_d0 = unaff_x29;
      if (piVar16 != (int *)0x0) {
        uVar26 = 0;
        pppppppiVar4 = (int *******)&stack0xffffffffffffff10;
        puStack_c8 = &Core_Networking_MigrationCar__StartMigrationCar;
        unaff_x20 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar16);
        if (*(long *)(piVar16 + 10) != 0) {
          if (*(int *)(*(long *)(piVar16 + 10) + 0x18) < 10) {
            uVar26 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,10);
            *(undefined8 *)(piVar16 + 10) = uVar26;
          }
          piVar16[0xc] = 10;
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar16);
          piVar16[0xd] = (int)uVar14;
          return uVar14;
        }
        puStack_d8 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar39 = func_0x00f78af4();
        param_1 = piVar16;
        pppppppiVar32 = (int *******)&pppppppiStack_d0;
        goto code_r0x016ce380;
      }
      puStack_c8 = &Core_Networking_MigrationCar__StartMigrationCar;
      auVar38 = func_0x00f78af4();
      uVar27 = auVar38._0_8_;
      if (uVar27 != 0) {
        param_4 = (long *)0x0;
        puStack_d8 = &Core_Networking_MigrationCar__AddSyncId;
        if ((auVar38._8_4_ == 0) && (*(char *)(uVar27 + 0x48) == '\0')) {
          return uVar27;
        }
        uVar26 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar27,4,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar27,auVar38._8_8_);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar27;
        pppppppiVar4 = (int *******)&pppppppiStack_d0;
        pppppppiVar32 = (int *******)&pppppppiStack_d0;
        goto code_r0x016ce380;
      }
      pppppppiVar4 = (int *******)&stack0xffffffffffffff20;
      puVar34 = &Core_Networking_MigrationCar__AddPosition;
      auVar38 = func_0x00f78af4();
      if (auVar38._0_8_ == 0) {
        pppppppiVar4 = (int *******)&stack0xffffffffffffff10;
        puVar34 = &Core_Networking_MigrationCar__AddRotation;
        auVar38 = func_0x00f78af4();
        if (auVar38._0_8_ == 0) {
          auVar38 = func_0x00f78af4();
          uVar27 = auVar38._0_8_;
          if (uVar27 != 0) {
            param_4 = (long *)0x0;
            puStack_108 = &Core_Networking_MigrationCar__AddUsableType;
            if ((auVar38._8_4_ == 0) && (*(char *)(uVar27 + 0x48) == '\0')) {
              return uVar27;
            }
            uVar26 = 0;
            pppppppiStack_110 = (int *******)&stack0xffffffffffffff00;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar27,2,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar27,auVar38._8_8_);
            auVar39._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            auVar39._0_8_ = uVar27;
            pppppppiVar4 = (int *******)&stack0xffffffffffffff00;
            pppppppiVar32 = pppppppiStack_110;
            puStack_d8 = puStack_108;
            goto code_r0x016ce380;
          }
          pppppppiVar4 = (int *******)&pppppppiStack_110;
          puStack_108 = &Core_Networking_MigrationCar__AddUsableType;
          puVar34 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
          pppppppiStack_110 = (int *******)&stack0xffffffffffffff00;
          auVar38 = func_0x00f78af4();
          if (auVar38._0_8_ == 0) {
            pppppppiVar4 = (int *******)&stack0xfffffffffffffee0;
            puVar34 = &Core_Networking_MigrationCar__AddBattleScore;
            auVar38 = func_0x00f78af4();
            if (auVar38._0_8_ == 0) {
              auVar38 = func_0x00f78af4();
              uVar27 = auVar38._0_8_;
              if (uVar27 != 0) {
                param_4 = (long *)0x0;
                puStack_138 = &Core_Networking_MigrationCar__AddLapsCompleted;
                if ((auVar38._8_4_ == 0) && (*(char *)(uVar27 + 0x48) == '\0')) {
                  return uVar27;
                }
                uVar26 = 0;
                pppppppiStack_140 = (int *******)&stack0xfffffffffffffed0;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar27,1,0,0,0);
                /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar27,auVar38._8_8_);
                auVar39._8_8_ = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
                auVar39._0_8_ = uVar27;
                pppppppiVar4 = (int *******)&stack0xfffffffffffffed0;
                pppppppiVar32 = pppppppiStack_140;
                puStack_d8 = puStack_138;
                goto code_r0x016ce380;
              }
              pppppppiVar4 = (int *******)&pppppppiStack_140;
              puStack_138 = &Core_Networking_MigrationCar__AddLapsCompleted;
              puVar34 = &Core_Networking_MigrationCar__AddTrackCoordsX;
              pppppppiStack_140 = (int *******)&stack0xfffffffffffffed0;
              uVar27 = func_0x00f78af4();
              if (uVar27 == 0) {
                pppppppiVar4 = (int *******)&stack0xfffffffffffffeb0;
                puVar34 = &Core_Networking_MigrationCar__AddTrackCoordsY;
                uVar27 = func_0x00f78af4();
                if (uVar27 == 0) {
                  pppppppiVar4 = (int *******)&stack0xfffffffffffffea0;
                  puVar5 = &stack0xfffffffffffffea0;
                  puVar34 = &Core_Networking_MigrationCar__AddHalfway;
                  auVar36 = func_0x00f78af4();
                  if (auVar36._0_8_ != 0) {
                    puVar6 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
                    param_4 = (long *)0x0;
                    goto code_r0x016ce420;
                  }
                  puStack_168 = &Core_Networking_MigrationCar__AddHalfway;
                  puStack_170 = &stack0xfffffffffffffea0;
                  lVar29 = func_0x00f78af4();
                  puStack_178 = &Core_Networking_MigrationCar__EndMigrationCar;
                  uVar27 = 0x3eb5000;
                  puStack_180 = (undefined1 *)&puStack_170;
                  if ((bRam0000000003eb5813 & 1) == 0) {
                    puStack_180 = (undefined1 *)&puStack_170;
                    func_0x00f78a20(0x3d3f1b8);
                    bRam0000000003eb5813 = 1;
                  }
                  if (lVar29 == 0) {
                    auVar38 = func_0x00f78af4();
                    lVar29 = auVar38._8_8_;
                    puVar15 = &uStack_1e0;
                    if (lVar29 == 0) {
                      puVar34 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                      auVar37 = func_0x00f78af4();
                      uStack_1f8 = 0;
                      puVar15 = (ulong *)extraout_x8_00;
                    }
                    else {
                      unaff_x22 = (int ******)CONCAT44(0,auVar38._0_4_ + 4);
                      auVar37._8_8_ = lVar29;
                      auVar37._0_8_ = (ulong)unaff_x22;
                      param_4 = (long *)/*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar29,auVar38._0_8_,0);
                      puVar34 = &UNK_01658158;
                      uStack_1f8 = extraout_x8;
                      uVar27 = uVar14;
                    }
                    puVar2 = auStack_220;
                    pppppppiVar4 = &ppppppiStack_1f0;
                    ppppppiStack_210 = unaff_x22;
                    lStack_208 = lVar29;
                    uStack_200 = uVar27;
                    ppppppiStack_1f0 = (int ******)&stack0xfffffffffffffe60;
                    puStack_1e8 = puVar34;
                    auStack_220 = auVar37;
                    if (auVar37._8_8_ == 0) {
                      auVar41 = func_0x00f78af4();
                      uVar14 = auVar41._0_8_;
                      uVar26 = *(undefined8 *)(uVar14 + 0x1b0);
                      uVar10 = *(undefined4 *)(uVar14 + 0x1a0);
                      *extraout_x8_01 = 0;
                      extraout_x8_01[1] = 0;
                      *(int *)extraout_x8_01 = auVar41._8_4_;
                      *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                      *(undefined4 *)(extraout_x8_01 + 1) = uVar10;
                      extraout_x8_01[2] = uVar26;
                      return uVar14;
                    }
                    puVar34 = &UNK_016581b4;
                    goto code_r0x016ccca0;
                  }
                  uVar14 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar29 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar29,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar29,0);
                    uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar29);
                    unaff_x21 = (ulong)*(uint *)(lVar29 + 0x30);
                    uVar13 = *(uint *)(lVar29 + 0x30) - 1;
                    if (-2 < (int)uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    unaff_x22 = (int ******)(ulong)uVar13;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar28 = (int)uVar14;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar29 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = (int ******)(unaff_x21 + 8);
                    do {
                      ppppppiVar25 = unaff_x22 + -1;
                      if ((int ******)(ulong)*(uint *)(lVar20 + 0x18) <= ppppppiVar25)
                      goto code_r0x016ced88;
                      iVar11 = *(int *)(lVar20 + (long)unaff_x22 * 4);
                      sVar7 = 0;
                      if (iVar11 != 0) {
                        sVar7 = (short)uVar14 - (short)iVar11;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar29,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar29,(int)sVar7);
                      lVar20 = *(long *)(lVar29 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if ((int ******)(ulong)*(uint *)(lVar20 + 0x18) <= ppppppiVar25)
                      goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + (long)unaff_x22 * 4) = 0;
                      unaff_x22 = (int ******)((long)unaff_x22 - 1);
                      uVar13 = uVar1;
                    } while (0 < (long)ppppppiVar25);
code_r0x016ceb30:
                    uVar10 = *(undefined4 *)(lVar29 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar29,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar29,(int)(short)((short)uVar14 - (short)uVar10));
                    uVar13 = uVar13 * 2 + 6;
                    unaff_x21 = (ulong)uVar13;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar29,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar29,(int)(short)uVar13);
                    unaff_x22 = (int ******)(ulong)*(uint *)(lVar29 + 0x40);
                    if (0 < (int)*(uint *)(lVar29 + 0x40)) {
                      uVar27 = 0;
                      do {
                        lVar20 = *(long *)(lVar29 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar30 = *(long *)(lVar29 + 0x38), lVar30 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar30 + 0x18) <= uVar27) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar30 + uVar27 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar13 = *(uint *)(lVar29 + 0x10);
                        unaff_x22 = (int ******)(ulong)uVar13;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar29 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar29 + 0x18),unaff_x22,2);
                        if (sVar7 == sVar8) {
                          if (sVar7 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar29 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar27) goto code_r0x016ced88;
                            iVar11 = *(int *)(unaff_x21 + uVar27 * 4 + 0x20);
                            if (iVar11 == 0) {
                              unaff_x22 = (int ******)(ulong)*(uint *)(lVar29 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar29 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar28;
                            *(int *)(lVar29 + 0x10) = iVar12;
                            iVar11 = iVar11 - iVar28;
                            goto code_r0x016ced3c;
                          }
                          iVar11 = 2;
                          while( true ) {
                            if (*(long *)(lVar29 + 0x18) == 0) goto code_r0x016ced84;
                            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar29 + 0x18),uVar1 + iVar11,2);
                            if (*(long *)(lVar29 + 0x18) == 0) goto code_r0x016ced84;
                            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar29 + 0x18),uVar13 + iVar11,2);
                            if (sVar8 != sVar9) break;
                            iVar11 = iVar11 + 2;
                            if (sVar7 <= iVar11) goto code_r0x016cec64;
                          }
                        }
                        uVar27 = uVar27 + 1;
                        unaff_x22 = (int ******)(long)*(int *)(lVar29 + 0x40);
                      } while ((long)uVar27 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar29 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar29 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar29 + 0x38) = unaff_x21;
                        unaff_x22 = (int ******)(ulong)*(uint *)(lVar29 + 0x40);
                      }
                      uVar13 = (uint)unaff_x22;
                      *(uint *)(lVar29 + 0x40) = uVar13 + 1;
                      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar29);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar10;
                        unaff_x21 = *(ulong *)(lVar29 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar29);
                          iVar12 = iVar12 - iVar28;
                          iVar11 = iVar11 - iVar28;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                          *(undefined4 *)(lVar29 + 0x30) = 0xffffffff;
                          return uVar14;
                        }
                        goto code_r0x016ced84;
                      }
                    }
code_r0x016ced88:
                    uVar26 = func_0x00f78b24();
                    func_0x00f78ac0(uVar26,0);
                  }
                  func_0x00f78a24(0x3d22a38);
                  uVar26 = func_0x00f78aec();
                  uVar18 = func_0x00f78a24(0x3d6cea8);
                  iVar28 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar26,uVar18);
                  uVar18 = func_0x00f78a24(0x3d56a30);
                  auVar41 = func_0x00f78ac0(uVar26,uVar18);
                  puStack_1c8 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppuVar33 = &ppuStack_1d0;
                  uStack_1f8 = CONCAT44(iVar28,(undefined4)uStack_1f8);
                  lVar29 = *(long *)(auVar41._0_8_ + 0x18);
                  ppppppiStack_1f0 = unaff_x22;
                  puStack_1e8 = (undefined *)unaff_x21;
                  uStack_1e0 = uVar14;
                  uStack_1d8 = uVar26;
                  ppuStack_1d0 = &puStack_180;
                  if ((lVar29 != 0) && (*(long *)(lVar29 + 0x10) != 0)) {
                    iVar11 = *(int *)(*(long *)(lVar29 + 0x10) + 0x18) - auVar41._8_4_;
                    iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar29,iVar11,4);
                    lVar29 = *(long *)(auVar41._0_8_ + 0x18);
                    if (lVar29 != 0) {
                      uVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar29,(iVar11 - iVar12) + iVar28,2);
                      if ((uVar14 & 0xffff) != 0) {
                        return uVar14;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar26 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)&uStack_1f8 + 4),0);
                  uVar18 = func_0x00f78a24(0x3d6ce88);
                  uVar22 = func_0x00f78a24(0x3d66338);
                  lVar29 = /*System.String$$Concat*/ func_0x029be39c(uVar18,uVar26,uVar22,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar14 = func_0x00f78aec();
                  uVar18 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,lVar29);
                  uVar26 = func_0x00f78a24(0x3d56a50);
                  puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar38 = func_0x00f78ac0(uVar14,uVar26);
                  puVar5 = (undefined1 *)&uStack_200;
                  do {
                    uVar27 = auVar38._8_8_;
                    lVar20 = auVar38._0_8_;
                    *(ulong *)(puVar5 + 0xffffffffffffffe0) = uVar14;
                    *(long *)(puVar5 + 0xffffffffffffffe8) = lVar29;
                    *(undefined1 ****)(puVar5 + 0xfffffffffffffff0) = pppuVar33;
                    *(undefined **)(puVar5 + 0xfffffffffffffff8) = puVar34;
                    pppuVar33 = (undefined1 ***)(puVar5 + 0xfffffffffffffff0);
                    if ((int)uVar18 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar14 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar27);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar14;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar27);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar29 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar29 != 0)) {
                        uVar27 = (ulong)(uint)(*(int *)(lVar29 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar14 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar27);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar38 = func_0x00f78af4();
                    uVar18 = 0;
                    puVar5 = puVar5 + 0xffffffffffffffe0;
                    lVar29 = lVar20;
                    uVar14 = uVar27;
                  } while( true );
                }
                pdVar24 = &MACH_HEADER.cpusubtype;
                fVar35 = extraout_s0_00;
              }
              else {
                pdVar24 = (dword *)((long)&MACH_HEADER.cputype + 3);
                fVar35 = extraout_s0;
              }
              auVar39._8_8_ = pdVar24;
              auVar39._0_8_ = uVar27;
              *(undefined8 *)((long)pppppppiVar4 + -0x30) = unaff_d9;
              *(undefined8 *)((long)pppppppiVar4 + -0x28) = unaff_d8;
              *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
              *(int **)((long)pppppppiVar4 + -0x18) = param_1;
              *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar4;
              *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
              if (fVar35 == 0.0 && *(char *)(uVar27 + 0x48) == '\0') {
                return uVar27;
              }
              uVar26 = 0;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar27,4);
              /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar35,uVar27);
              pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
              puStack_d8 = *(undefined **)((long)pppppppiVar4 + -8);
              unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
              param_1 = *(int **)((long)pppppppiVar4 + -0x18);
              goto code_r0x016ce380;
            }
            pdVar24 = (dword *)((long)&MACH_HEADER.cputype + 1);
          }
          else {
            pdVar24 = &MACH_HEADER.cputype;
          }
          uVar14 = auVar38._0_8_;
          auVar39._8_8_ = pdVar24;
          auVar39._0_8_ = uVar14;
          param_4 = (long *)0x0;
          *(int *******)((long)pppppppiVar4 + -0x30) = unaff_x22;
          *(ulong *)((long)pppppppiVar4 + -0x28) = unaff_x21;
          *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
          *(int **)((long)pppppppiVar4 + -0x18) = param_1;
          *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar4;
          *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
          if ((auVar38._8_4_ == 0) && (*(char *)(uVar14 + 0x48) == '\0')) {
            return uVar14;
          }
          uVar26 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1,0,0,0);
          /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar14,auVar38._8_8_);
          pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
          puStack_d8 = *(undefined **)((long)pppppppiVar4 + -8);
          unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
          param_1 = *(int **)((long)pppppppiVar4 + -0x18);
          unaff_x22 = *(int *******)((long)pppppppiVar4 + -0x30);
          unaff_x21 = *(ulong *)((long)pppppppiVar4 + -0x28);
          goto code_r0x016ce380;
        }
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      }
      else {
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      uVar26 = auVar38._8_8_;
      uVar14 = auVar38._0_8_;
      auVar39._8_8_ = puVar5;
      auVar39._0_8_ = uVar14;
      param_4 = (long *)0x0;
      if (auVar38._8_4_ == 0) {
        return uVar14;
      }
      *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
      *(int **)((long)pppppppiVar4 + -0x18) = param_1;
      *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar4;
      *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
      /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(uVar14,uVar26,uVar26,0,0);
      puStack_d8 = *(undefined **)((long)pppppppiVar4 + -8);
      unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
      param_1 = *(int **)((long)pppppppiVar4 + -0x18);
      pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
code_r0x016ce380:
      do {
        piVar16 = auVar39._8_8_;
        *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppiVar4 + -0x18) = param_1;
        *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar32;
        *(undefined **)((long)pppppppiVar4 + -8) = puStack_d8;
        puVar5 = (undefined1 *)((long)pppppppiVar4 + -0x10);
        uVar13 = auVar39._8_4_;
        if ((int)uVar13 < *(int *)(auVar39._0_8_ + 0x30)) {
          unaff_x20 = *(long **)(auVar39._0_8_ + 0x28);
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (long *)0x0) goto code_r0x016ce410;
          if (uVar13 < *(uint *)(unaff_x20 + 3)) {
            *(int *)((long)unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar14;
            return uVar14;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar16 = (int *)func_0x00f78aec();
          uVar18 = func_0x00f78a24(0x3d6ceb8);
          uVar26 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar16,uVar18);
          uVar18 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar16,uVar18);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar18 = func_0x00f78b24();
        puVar34 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar38 = func_0x00f78ac0(uVar18,0);
        puVar6 = auVar38._8_8_;
        auVar36._8_8_ = uVar26;
        auVar36._0_8_ = auVar38._0_8_;
        pppppppiVar4 = (int *******)((long)pppppppiVar4 + -0x20);
        param_1 = piVar16;
code_r0x016ce420:
        uVar14 = auVar36._0_8_;
        auVar39._8_8_ = puVar6;
        auVar39._0_8_ = uVar14;
        *(int *******)((long)pppppppiVar4 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppppiVar4 + -0x28) = unaff_x21;
        *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppiVar4 + -0x18) = param_1;
        *(undefined1 **)((long)pppppppiVar4 + -0x10) = puVar5;
        *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
        if ((auVar36._8_4_ == (int)param_4) && (*(char *)(uVar14 + 0x48) == '\0')) {
          return uVar14;
        }
        uVar26 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar14,auVar36._8_8_);
        puStack_d8 = *(undefined **)((long)pppppppiVar4 + -8);
        unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
        param_1 = *(int **)((long)pppppppiVar4 + -0x18);
        unaff_x22 = *(int *******)((long)pppppppiVar4 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppppiVar4 + -0x28);
        pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
      } while( true );
    }
    iVar28 = *piVar16 + (int)uVar14;
    puVar3 = &stack0xffffffffffffff80;
    pppppppiVar4 = pppppppiStack_90;
    puVar34 = puStack_88;
  }
  else {
    iVar28 = *piVar17 + (int)uVar14;
    puVar3 = &stack0xffffffffffffffa0;
    piVar17 = piVar16;
    pppppppiVar4 = pppppppiStack_70;
    puVar34 = puStack_68;
  }
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(int **)(puVar3 + -0x18) = piVar17;
  *(int ********)(puVar3 + -0x10) = pppppppiVar4;
  *(undefined **)(puVar3 + -8) = puVar34;
  puVar5 = puVar3 + -0x10;
  uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar29,iVar28,4);
  uVar14 = *(ulong *)(lVar29 + 0x30);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined4 *)(uVar14 + 0x20) = uVar10;
    uVar27 = *(ulong *)(lVar29 + 0x28);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar14;
    uVar26 = 0;
    puVar34 = &UNK_016cce74;
    puVar6 = puVar3 + -0x20;
    uVar14 = 4;
    lVar20 = lVar29;
    goto code_r0x029387b8;
  }
  uVar26 = func_0x00f78b24();
  lVar20 = func_0x00f78ac0(uVar26,0);
  *(long **)(puVar3 + -0x40) = unaff_x20;
  *(long *)(puVar3 + -0x38) = lVar29;
  *(undefined1 **)(puVar3 + -0x30) = puVar5;
  *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar5 = puVar3 + -0x30;
  pdVar24 = &MACH_HEADER.cpusubtype;
  uVar26 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar14 = *(ulong *)(lVar20 + 0x40);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined8 *)(uVar14 + 0x20) = uVar26;
    uVar27 = *(ulong *)(lVar20 + 0x38);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar14;
    uVar26 = 0;
    puVar34 = &UNK_016cceec;
    puVar6 = puVar3 + -0x40;
    uVar14 = 8;
    goto code_r0x029387b8;
  }
  uVar26 = func_0x00f78b24();
  auVar38 = func_0x00f78ac0(uVar26,0);
  lVar29 = auVar38._0_8_;
  *(int *******)(puVar3 + -0x70) = unaff_x22;
  *(ulong *)(puVar3 + -0x68) = unaff_x21;
  *(long **)(puVar3 + -0x60) = unaff_x20;
  *(long *)(puVar3 + -0x58) = lVar20;
  *(undefined1 **)(puVar3 + -0x50) = puVar5;
  *(undefined **)(puVar3 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar26 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (pdVar24 == (dword *)0x0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar22 = func_0x00f78aec();
    uVar18 = 0x3d6a458;
code_r0x016cd01c:
    uVar18 = func_0x00f78a24(uVar18);
    uVar23 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar22,uVar18);
  }
  else {
    if (*(long *)(pdVar24 + 6) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(pdVar24 + 6) < auVar38._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar22 = func_0x00f78aec();
      uVar18 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar26 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar29,0,auVar38._8_8_);
      if (*(long *)(lVar29 + 0x10) != 0) {
        uVar27 = *(ulong *)(*(long *)(lVar29 + 0x10) + 0x10);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = pdVar24;
        uVar26 = 0;
        puVar5 = *(undefined1 **)(puVar3 + -0x50);
        puVar34 = *(undefined **)(puVar3 + -0x48);
        unaff_x20 = *(long **)(puVar3 + -0x60);
        lVar20 = *(long *)(puVar3 + -0x58);
        unaff_x22 = *(int *******)(puVar3 + -0x70);
        unaff_x21 = *(ulong *)(puVar3 + -0x68);
        puVar6 = puVar3 + -0x40;
        uVar14 = auVar38._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar22 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d69698);
    uVar23 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar22,uVar18);
  }
  uVar18 = func_0x00f78a24(0x3d52cf8);
  auVar38 = func_0x00f78ac0(uVar22,uVar18);
  uVar21 = auVar38._8_8_;
  lVar20 = auVar38._0_8_;
  puVar6 = puVar3 + -0xa0;
  *(undefined8 *)(puVar3 + -0xa0) = uVar26;
  *(long *)(puVar3 + -0x98) = lVar29;
  *(dword **)(puVar3 + -0x90) = pdVar24;
  *(undefined8 *)(puVar3 + -0x88) = uVar22;
  *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
  *(undefined **)(puVar3 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar26 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar38._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar21 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d6a458);
    uVar14 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar21,uVar18);
code_r0x016cd1bc:
    uVar18 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar21,uVar18);
  }
  else {
    uVar26 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar21 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d69698);
      uVar14 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar21,uVar18);
      goto code_r0x016cd1bc;
    }
    uVar14 = uVar21;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar20,0);
    if (*(long *)(lVar20 + 0x10) != 0) {
      puVar31 = *(undefined8 **)(*(long *)(lVar20 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)(puVar3 + -0xb0) = unaff_x24;
      *(ulong *)(puVar3 + -0xa8) = unaff_x23;
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
      *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
      uVar26 = func_0x00f76cf0(*puVar31);
      uVar18 = func_0x00faf4d8(puVar31,uVar26,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)PTR_DAT_03c8cea0)(uVar18,uVar23,(int)uVar26 * auVar38._8_4_);
      return uVar14;
    }
  }
  auVar38 = func_0x00f78af4();
  uVar27 = auVar38._8_8_;
  lVar29 = auVar38._0_8_;
  *(undefined8 *)(puVar3 + -0xd0) = uVar26;
  *(long *)(puVar3 + -200) = lVar20;
  *(undefined8 *)(puVar3 + -0xc0) = uVar23;
  *(ulong *)(puVar3 + -0xb8) = uVar21;
  *(undefined1 **)(puVar3 + -0xb0) = puVar3 + -0x80;
  *(undefined **)(puVar3 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar26 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar27 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar14 <= *(int *)(uVar27 + 0x18)) {
    uVar26 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar29,0,uVar14);
    if (*(long *)(lVar29 + 0x10) != 0) {
      auVar40._8_4_ = *(undefined4 *)(lVar29 + 0x18);
      auVar40._0_8_ = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 0x10);
      auVar40._12_4_ = 0;
      uVar26 = 0;
      puVar5 = *(undefined1 **)(puVar3 + -0xb0);
      puVar34 = *(undefined **)(puVar3 + -0xa8);
      unaff_x20 = *(long **)(puVar3 + -0xc0);
      lVar20 = *(long *)(puVar3 + -0xb8);
      unaff_x22 = *(int *******)(puVar3 + -0xd0);
      unaff_x21 = *(ulong *)(puVar3 + -200);
code_r0x029387b8:
      do {
        ppppppiVar25 = auVar40._8_8_;
        lVar29 = auVar40._0_8_;
        *(ulong *)(puVar6 + -0x40) = unaff_x24;
        *(ulong *)(puVar6 + -0x38) = unaff_x23;
        *(int *******)(puVar6 + -0x30) = unaff_x22;
        *(ulong *)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = unaff_x20;
        *(long *)(puVar6 + -0x18) = lVar20;
        *(undefined1 **)(puVar6 + -0x10) = puVar5;
        *(undefined **)(puVar6 + -8) = puVar34;
        if (lVar29 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar18 = func_0x00f78aec();
          uVar26 = 0x3d7b990;
code_r0x02938884:
          uVar26 = func_0x00f78a24(uVar26);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar18,uVar26,0);
          uVar26 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar18,uVar26);
code_r0x029388b0:
          uVar26 = func_0x00f78a24(0x3d70548);
          uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar26,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar22 = func_0x00f78aec();
          uVar26 = 0x3d7b998;
code_r0x02938954:
          auVar40._8_8_ = unaff_x22;
          auVar40._0_8_ = unaff_x23;
          uVar23 = func_0x00f78a24(uVar26);
          uVar26 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar22,uVar23,uVar18);
        }
        else {
          unaff_x21 = uVar27;
          if (uVar27 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar18 = func_0x00f78aec();
            uVar26 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = ppppppiVar25;
          if (auVar40._8_4_ < 0) goto code_r0x029388b0;
          iVar28 = (int)uVar26;
          if (iVar28 < 0) {
            uVar26 = func_0x00f78a24(0x3d70548);
            uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar26,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar22 = func_0x00f78aec();
            uVar26 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar11 = (int)uVar14;
          if (iVar11 < 0) {
            uVar26 = func_0x00f78a24(0x3d70548);
            uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar26,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar22 = func_0x00f78aec();
            uVar26 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar21 = func_0x00f836d8(lVar29,ppppppiVar25,uVar27);
          if (((uVar21 & 1) != 0) ||
             ((iVar12 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar29), auVar40._8_4_ <= iVar12 - iVar11 &&
              (uVar21 = /*System.Buffer$$ByteLength*/ func_0x0294274c(uVar27), iVar28 <= (int)uVar21 - iVar11)))) {
            return uVar21;
          }
          uVar18 = func_0x00f78a24(0x3d70ad8);
          uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar18,0);
          func_0x00f78a24(0x3d1fce8);
          uVar22 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar22,uVar18,0);
        }
        uVar23 = func_0x00f78a24(0x3d52be0);
        uVar13 = func_0x00f78ac0(uVar22,uVar23);
        *(long *)(puVar6 + -0x70) = auVar40._8_8_;
        *(ulong *)(puVar6 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar6 + -0x60) = uVar22;
        *(undefined8 *)(puVar6 + -0x58) = uVar18;
        *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar6 + -0x80) = unaff_x24;
        *(long *)(puVar6 + -0x78) = auVar40._0_8_;
        *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
        *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
        *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
        *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
        *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x50);
        *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)(puVar6 + -0x48);
        puVar5 = puVar6 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar13 >> 5;
        unaff_x23 = (ulong)(uVar13 & 0x1f);
        if ((uVar13 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar20 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar27 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = (int ******)func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        ppppppiVar25 = (int ******)0x3d20078;
        if (unaff_x20 != (long *)0x0) {
          uVar27 = *(ulong *)(*unaff_x20 + 0x1a0);
          (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
          ppppppiVar25 = unaff_x22;
          if (lVar20 != 0) {
            uVar27 = *(ulong *)(lVar20 + 0x18);
            auVar40._8_8_ = 0;
            auVar40._0_8_ = unaff_x22;
            uVar26 = 0;
            puVar34 = &UNK_02938710;
            puVar6 = puVar6 + -0x80;
            uVar14 = unaff_x21;
            goto code_r0x029387b8;
          }
        }
        unaff_x22 = ppppppiVar25;
        func_0x00f78af4();
        uVar18 = func_0x00f78b24();
        puVar34 = &System_Buffer__BlockCopy;
        auVar40 = func_0x00f78ac0(uVar18,0);
        puVar6 = puVar6 + -0x80;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)(puVar3 + -0xd4) = (int)uVar14;
  uVar18 = func_0x00f78a24(0x3d22910);
  lVar29 = func_0x00f78ae0(uVar18,puVar3 + -0xd4);
  func_0x00055e5c(uVar27);
  *(int *)(puVar3 + -0xd8) = (int)*(undefined8 *)(uVar27 + 0x18);
  uVar18 = func_0x00f78a24(0x3d22910);
  uVar18 = func_0x00f78ae0(uVar18,puVar3 + -0xd8);
  uVar22 = func_0x00f78a24(0x3d72a68);
  uVar18 = /*System.String$$Format*/ func_0x029bcac4(uVar22,lVar29,uVar18,0);
  func_0x00f78a24(0x3d1fce8);
  uVar14 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar18,0);
  uVar18 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar14,uVar18);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar18 = func_0x00f78aec();
  uVar22 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar18,uVar22,0);
  uVar22 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar18,uVar22);
  *(undefined8 *)(puVar3 + -0x140) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x138) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x130) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x128) = unaff_x25;
  *(ulong *)(puVar3 + -0x120) = unaff_x24;
  *(ulong *)(puVar3 + -0x118) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x110) = uVar26;
  *(long *)(puVar3 + -0x108) = lVar29;
  *(ulong *)(puVar3 + -0x100) = uVar14;
  *(undefined8 *)(puVar3 + -0xf8) = uVar18;
  *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xb0;
  *(undefined **)(puVar3 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar29 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar29,uRam0000000003d30160);
  uVar26 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
  if (lVar29 != 0) {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,1,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,4,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,8,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,1,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,1,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,2,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,2,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,4,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,4,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,8,uRam0000000003d30168);
    uVar26 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
    uVar14 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar26,8,uRam0000000003d30168);
    **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar29;
    return uVar14;
  }
  lVar29 = func_0x00f78af4();
  return *(ulong *)(lVar29 + 0x10);
}



// ============================================================
// RVA: 0x1657d94 | Core.Networking.MigrationCar.get_BattleScore
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016581b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */
/* WARNING: Removing unreachable block (ram,0x01657f28) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x016581b4) */
/* WARNING: Removing unreachable block (ram,0x016581c4) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Networking_MigrationCar__get_BattleScore
                (ulong *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *******pppppppiVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  short sVar7;
  undefined4 uVar10;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  short sVar8;
  short sVar9;
  int iVar11;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  dword *pdVar23;
  int *****pppppiVar24;
  undefined8 uVar25;
  ulong uVar26;
  int iVar27;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar28;
  long lVar29;
  int *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar30;
  int *****unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  int *******unaff_x29;
  int ******ppppppiVar31;
  int *******pppppppiVar32;
  undefined1 ***pppuVar33;
  undefined *unaff_x30;
  undefined *puVar34;
  float extraout_s0;
  float extraout_s0_00;
  float fVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auStack_200 [16];
  int *****pppppiStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  int *****pppppiStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  int *******pppppppiStack_120;
  undefined *puStack_118;
  int *******pppppppiStack_f0;
  undefined *puStack_e8;
  undefined *puStack_b8;
  int *******pppppppiStack_b0;
  undefined *puStack_a8;
  int *******pppppppiStack_90;
  undefined *puStack_88;
  int *******pppppppiStack_70;
  undefined *puStack_68;
  int *******pppppppiStack_50;
  undefined *puStack_48;
  int ******ppppppiStack_30;
  undefined *puStack_28;
  
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xe,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)((long)param_1 + 8) != 0) {
    auVar38._8_4_ = *(int *)param_1 + (int)uVar14;
    auVar38._0_8_ = *(long *)((long)param_1 + 8);
    auVar38._12_4_ = 0;
    puVar5 = (undefined1 *)register0x00000008;
    goto code_r0x016cccfc;
  }
  piVar15 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_MigrationCar__get_LapsCompleted;
  ppppppiStack_30 = (int ******)&stack0xfffffffffffffff0;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,0x10,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)(piVar15 + 2) != 0) {
    auVar37._4_4_ = 0;
    auVar37._0_4_ = *piVar15 + (int)uVar14;
    auVar37._8_8_ = *(long *)(piVar15 + 2);
    puVar2 = &stack0xffffffffffffffe0;
    param_4 = unaff_x20;
    uVar14 = unaff_x21;
    ppppppiVar31 = ppppppiStack_30;
    puVar34 = puStack_28;
code_r0x016ccca0:
    unaff_x20 = auVar37._8_8_;
    unaff_x19 = auVar37._0_8_;
    puVar5 = puVar2 + -0x20;
    *(long **)(puVar2 + -0x20) = param_4;
    *(ulong **)(puVar2 + -0x18) = param_1;
    *(int *******)(puVar2 + -0x10) = ppppppiVar31;
    *(undefined **)(puVar2 + -8) = puVar34;
    unaff_x29 = (int *******)(puVar2 + -0x10);
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x20,unaff_x19,1);
    if ((unaff_x20[2] == 0) || (lVar28 = *(long *)(unaff_x20[2] + 0x10), lVar28 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar37._0_4_ < *(uint *)(lVar28 + 0x18)) {
      return (long)*(char *)(lVar28 + (int)auVar37._0_4_ + 0x20);
    }
    uVar25 = func_0x00f78b24();
    unaff_x30 = &FlatBuffers_ByteBuffer__Get;
    auVar38 = func_0x00f78ac0(uVar25,0);
    unaff_x21 = uVar14;
code_r0x016cccfc:
    *(long **)(puVar5 + -0x20) = unaff_x20;
    *(int **)(puVar5 + -0x18) = unaff_x19;
    *(int ********)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = unaff_x30;
    uVar25 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar38._0_8_,auVar38._8_8_,1);
    lVar28 = *(long *)(auVar38._0_8_ + 0x10);
    if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x10), lVar28 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar38._8_4_ < *(uint *)(lVar28 + 0x18)) {
      return (ulong)*(byte *)(lVar28 + (int)auVar38._8_4_ + 0x20);
    }
    uVar17 = func_0x00f78b24();
    auVar37 = func_0x00f78ac0(uVar17,0);
    *(int ******)(puVar5 + -0x50) = unaff_x22;
    *(ulong *)(puVar5 + -0x48) = unaff_x21;
    *(undefined1 (*) [16])(puVar5 + -0x40) = auVar38;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
    plVar18 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar28 = *(long *)(auVar37._0_8_ + 0x10);
    if ((lVar28 != 0) && (plVar18 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (**(code **)(*plVar18 + 0x348))
                         (plVar18,*(undefined8 *)(lVar28 + 0x10),auVar37._8_8_,uVar25,
                          *(undefined8 *)(*plVar18 + 0x350));
      return uVar14;
    }
    auVar38 = func_0x00f78af4();
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x30;
    *(undefined **)(puVar5 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar38._0_8_,auVar38._8_8_,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar16 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_MigrationCar__get_TrackCoordsX;
  pppppppiStack_50 = &ppppppiStack_30;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar16,0x12,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  lVar28 = *(long *)(piVar16 + 2);
  if (lVar28 == 0) {
    piVar15 = (int *)func_0x00f78af4();
    puStack_68 = &Core_Networking_MigrationCar__get_TrackCoordsY;
    pppppppiStack_70 = (int *******)&pppppppiStack_50;
    uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,0x14,0);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    lVar28 = *(long *)(piVar15 + 2);
    if (lVar28 == 0) {
      unaff_x19 = (int *)func_0x00f78af4();
      puVar5 = &stack0xffffffffffffff60;
      puStack_88 = &Core_Networking_MigrationCar__get_Halfway;
      unaff_x29 = (int *******)&pppppppiStack_90;
      uVar14 = 0;
      pppppppiStack_90 = (int *******)&pppppppiStack_70;
      uVar26 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(unaff_x19,0x16);
      if ((int)uVar26 == 0) {
        return uVar26;
      }
      if (*(long *)(unaff_x19 + 2) != 0) {
        auVar38._8_4_ = *unaff_x19 + (int)uVar26;
        auVar38._0_8_ = *(long *)(unaff_x19 + 2);
        auVar38._12_4_ = 0;
        unaff_x30 = &UNK_01657f28;
        goto code_r0x016cccfc;
      }
      piVar15 = (int *)func_0x00f78af4();
      pppppppiStack_b0 = unaff_x29;
      if (piVar15 != (int *)0x0) {
        uVar25 = 0;
        pppppppiVar4 = (int *******)&stack0xffffffffffffff30;
        puStack_a8 = &Core_Networking_MigrationCar__StartMigrationCar;
        unaff_x20 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar15);
        if (*(long *)(piVar15 + 10) != 0) {
          if (*(int *)(*(long *)(piVar15 + 10) + 0x18) < 10) {
            uVar25 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,10);
            *(undefined8 *)(piVar15 + 10) = uVar25;
          }
          piVar15[0xc] = 10;
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar15);
          piVar15[0xd] = (int)uVar14;
          return uVar14;
        }
        puStack_b8 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar39 = func_0x00f78af4();
        unaff_x19 = piVar15;
        pppppppiVar32 = (int *******)&pppppppiStack_b0;
        goto code_r0x016ce380;
      }
      puStack_a8 = &Core_Networking_MigrationCar__StartMigrationCar;
      auVar38 = func_0x00f78af4();
      uVar26 = auVar38._0_8_;
      if (uVar26 != 0) {
        param_4 = (long *)0x0;
        puStack_b8 = &Core_Networking_MigrationCar__AddSyncId;
        if ((auVar38._8_4_ == 0) && (*(char *)(uVar26 + 0x48) == '\0')) {
          return uVar26;
        }
        uVar25 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar26,4,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar26,auVar38._8_8_);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar26;
        pppppppiVar4 = (int *******)&pppppppiStack_b0;
        pppppppiVar32 = (int *******)&pppppppiStack_b0;
        goto code_r0x016ce380;
      }
      pppppppiVar4 = (int *******)&stack0xffffffffffffff40;
      puVar34 = &Core_Networking_MigrationCar__AddPosition;
      auVar38 = func_0x00f78af4();
      if (auVar38._0_8_ == 0) {
        pppppppiVar4 = (int *******)&stack0xffffffffffffff30;
        puVar34 = &Core_Networking_MigrationCar__AddRotation;
        auVar38 = func_0x00f78af4();
        if (auVar38._0_8_ == 0) {
          auVar38 = func_0x00f78af4();
          uVar26 = auVar38._0_8_;
          if (uVar26 != 0) {
            param_4 = (long *)0x0;
            puStack_e8 = &Core_Networking_MigrationCar__AddUsableType;
            if ((auVar38._8_4_ == 0) && (*(char *)(uVar26 + 0x48) == '\0')) {
              return uVar26;
            }
            uVar25 = 0;
            pppppppiStack_f0 = (int *******)&stack0xffffffffffffff20;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar26,2,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar26,auVar38._8_8_);
            auVar39._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            auVar39._0_8_ = uVar26;
            pppppppiVar4 = (int *******)&stack0xffffffffffffff20;
            pppppppiVar32 = pppppppiStack_f0;
            puStack_b8 = puStack_e8;
            goto code_r0x016ce380;
          }
          pppppppiVar4 = (int *******)&pppppppiStack_f0;
          puStack_e8 = &Core_Networking_MigrationCar__AddUsableType;
          puVar34 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
          pppppppiStack_f0 = (int *******)&stack0xffffffffffffff20;
          auVar38 = func_0x00f78af4();
          if (auVar38._0_8_ == 0) {
            pppppppiVar4 = (int *******)&stack0xffffffffffffff00;
            puVar34 = &Core_Networking_MigrationCar__AddBattleScore;
            auVar38 = func_0x00f78af4();
            if (auVar38._0_8_ == 0) {
              auVar38 = func_0x00f78af4();
              uVar26 = auVar38._0_8_;
              if (uVar26 != 0) {
                param_4 = (long *)0x0;
                puStack_118 = &Core_Networking_MigrationCar__AddLapsCompleted;
                if ((auVar38._8_4_ == 0) && (*(char *)(uVar26 + 0x48) == '\0')) {
                  return uVar26;
                }
                uVar25 = 0;
                pppppppiStack_120 = (int *******)&stack0xfffffffffffffef0;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar26,1,0,0,0);
                /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar26,auVar38._8_8_);
                auVar39._8_8_ = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
                auVar39._0_8_ = uVar26;
                pppppppiVar4 = (int *******)&stack0xfffffffffffffef0;
                pppppppiVar32 = pppppppiStack_120;
                puStack_b8 = puStack_118;
                goto code_r0x016ce380;
              }
              pppppppiVar4 = (int *******)&pppppppiStack_120;
              puStack_118 = &Core_Networking_MigrationCar__AddLapsCompleted;
              puVar34 = &Core_Networking_MigrationCar__AddTrackCoordsX;
              pppppppiStack_120 = (int *******)&stack0xfffffffffffffef0;
              uVar26 = func_0x00f78af4();
              if (uVar26 == 0) {
                pppppppiVar4 = (int *******)&stack0xfffffffffffffed0;
                puVar34 = &Core_Networking_MigrationCar__AddTrackCoordsY;
                uVar26 = func_0x00f78af4();
                if (uVar26 == 0) {
                  pppppppiVar4 = (int *******)&stack0xfffffffffffffec0;
                  puVar5 = &stack0xfffffffffffffec0;
                  puVar34 = &Core_Networking_MigrationCar__AddHalfway;
                  auVar36 = func_0x00f78af4();
                  if (auVar36._0_8_ != 0) {
                    puVar6 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
                    param_4 = (long *)0x0;
                    goto code_r0x016ce420;
                  }
                  puStack_148 = &Core_Networking_MigrationCar__AddHalfway;
                  puStack_150 = &stack0xfffffffffffffec0;
                  lVar28 = func_0x00f78af4();
                  puStack_158 = &Core_Networking_MigrationCar__EndMigrationCar;
                  uVar26 = 0x3eb5000;
                  puStack_160 = (undefined1 *)&puStack_150;
                  if ((bRam0000000003eb5813 & 1) == 0) {
                    puStack_160 = (undefined1 *)&puStack_150;
                    func_0x00f78a20(0x3d3f1b8);
                    bRam0000000003eb5813 = 1;
                  }
                  if (lVar28 == 0) {
                    auVar38 = func_0x00f78af4();
                    lVar28 = auVar38._8_8_;
                    param_1 = &uStack_1c0;
                    if (lVar28 == 0) {
                      puVar34 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                      auVar37 = func_0x00f78af4();
                      uStack_1d8 = 0;
                      param_1 = (ulong *)extraout_x8_00;
                    }
                    else {
                      unaff_x22 = (int *****)CONCAT44(0,auVar38._0_4_ + 4);
                      auVar37._8_8_ = lVar28;
                      auVar37._0_8_ = (ulong)unaff_x22;
                      param_4 = (long *)/*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar28,auVar38._0_8_,0);
                      puVar34 = &UNK_01658158;
                      uStack_1d8 = extraout_x8;
                      uVar26 = uVar14;
                    }
                    puVar2 = auStack_200;
                    ppppppiVar31 = &pppppiStack_1d0;
                    pppppiStack_1f0 = unaff_x22;
                    lStack_1e8 = lVar28;
                    uStack_1e0 = uVar26;
                    pppppiStack_1d0 = (int *****)&stack0xfffffffffffffe80;
                    puStack_1c8 = puVar34;
                    auStack_200 = auVar37;
                    if (auVar37._8_8_ == 0) {
                      auVar41 = func_0x00f78af4();
                      uVar14 = auVar41._0_8_;
                      uVar25 = *(undefined8 *)(uVar14 + 0x1b0);
                      uVar10 = *(undefined4 *)(uVar14 + 0x1a0);
                      *extraout_x8_01 = 0;
                      extraout_x8_01[1] = 0;
                      *(int *)extraout_x8_01 = auVar41._8_4_;
                      *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                      *(undefined4 *)(extraout_x8_01 + 1) = uVar10;
                      extraout_x8_01[2] = uVar25;
                      return uVar14;
                    }
                    puVar34 = &UNK_016581b4;
                    goto code_r0x016ccca0;
                  }
                  uVar14 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar28 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar28,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar28,0);
                    uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar28);
                    unaff_x21 = (ulong)*(uint *)(lVar28 + 0x30);
                    uVar13 = *(uint *)(lVar28 + 0x30) - 1;
                    if (-2 < (int)uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    unaff_x22 = (int *****)(ulong)uVar13;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar27 = (int)uVar14;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar19 = *(long *)(lVar28 + 0x28);
                      if (lVar19 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = (int *****)(unaff_x21 + 8);
                    do {
                      pppppiVar24 = unaff_x22 + -1;
                      if ((int *****)(ulong)*(uint *)(lVar19 + 0x18) <= pppppiVar24)
                      goto code_r0x016ced88;
                      iVar11 = *(int *)(lVar19 + (long)unaff_x22 * 4);
                      sVar7 = 0;
                      if (iVar11 != 0) {
                        sVar7 = (short)uVar14 - (short)iVar11;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar28,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar28,(int)sVar7);
                      lVar19 = *(long *)(lVar28 + 0x28);
                      if (lVar19 == 0) goto code_r0x016ced84;
                      if ((int *****)(ulong)*(uint *)(lVar19 + 0x18) <= pppppiVar24)
                      goto code_r0x016ced88;
                      *(undefined4 *)(lVar19 + (long)unaff_x22 * 4) = 0;
                      unaff_x22 = (int *****)((long)unaff_x22 - 1);
                      uVar13 = uVar1;
                    } while (0 < (long)pppppiVar24);
code_r0x016ceb30:
                    uVar10 = *(undefined4 *)(lVar28 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar28,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar28,(int)(short)((short)uVar14 - (short)uVar10));
                    uVar13 = uVar13 * 2 + 6;
                    unaff_x21 = (ulong)uVar13;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar28,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar28,(int)(short)uVar13);
                    unaff_x22 = (int *****)(ulong)*(uint *)(lVar28 + 0x40);
                    if (0 < (int)*(uint *)(lVar28 + 0x40)) {
                      uVar26 = 0;
                      do {
                        lVar19 = *(long *)(lVar28 + 0x18);
                        if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                           (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar29 + 0x18) <= uVar26) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                                *(int *)(lVar29 + uVar26 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar13 = *(uint *)(lVar28 + 0x10);
                        unaff_x22 = (int *****)(ulong)uVar13;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                        if (*(long *)(lVar28 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar28 + 0x18),unaff_x22,2);
                        if (sVar7 == sVar8) {
                          if (sVar7 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar28 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar26) goto code_r0x016ced88;
                            iVar11 = *(int *)(unaff_x21 + uVar26 * 4 + 0x20);
                            if (iVar11 == 0) {
                              unaff_x22 = (int *****)(ulong)*(uint *)(lVar28 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar28 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar27;
                            *(int *)(lVar28 + 0x10) = iVar12;
                            iVar11 = iVar11 - iVar27;
                            goto code_r0x016ced3c;
                          }
                          iVar11 = 2;
                          while( true ) {
                            if (*(long *)(lVar28 + 0x18) == 0) goto code_r0x016ced84;
                            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar28 + 0x18),uVar1 + iVar11,2);
                            if (*(long *)(lVar28 + 0x18) == 0) goto code_r0x016ced84;
                            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar28 + 0x18),uVar13 + iVar11,2);
                            if (sVar8 != sVar9) break;
                            iVar11 = iVar11 + 2;
                            if (sVar7 <= iVar11) goto code_r0x016cec64;
                          }
                        }
                        uVar26 = uVar26 + 1;
                        unaff_x22 = (int *****)(long)*(int *)(lVar28 + 0x40);
                      } while ((long)uVar26 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar28 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar19 = *(long *)(lVar28 + 0x38);
                        if (lVar19 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                        *(ulong *)(lVar28 + 0x38) = unaff_x21;
                        unaff_x22 = (int *****)(ulong)*(uint *)(lVar28 + 0x40);
                      }
                      uVar13 = (uint)unaff_x22;
                      *(uint *)(lVar28 + 0x40) = uVar13 + 1;
                      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar28);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar10;
                        unaff_x21 = *(ulong *)(lVar28 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar28);
                          iVar12 = iVar12 - iVar27;
                          iVar11 = iVar11 - iVar27;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                          *(undefined4 *)(lVar28 + 0x30) = 0xffffffff;
                          return uVar14;
                        }
                        goto code_r0x016ced84;
                      }
                    }
code_r0x016ced88:
                    uVar25 = func_0x00f78b24();
                    func_0x00f78ac0(uVar25,0);
                  }
                  func_0x00f78a24(0x3d22a38);
                  uVar25 = func_0x00f78aec();
                  uVar17 = func_0x00f78a24(0x3d6cea8);
                  iVar27 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar25,uVar17);
                  uVar17 = func_0x00f78a24(0x3d56a30);
                  auVar41 = func_0x00f78ac0(uVar25,uVar17);
                  puStack_1a8 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppuVar33 = &ppuStack_1b0;
                  uStack_1d8 = CONCAT44(iVar27,(undefined4)uStack_1d8);
                  lVar28 = *(long *)(auVar41._0_8_ + 0x18);
                  pppppiStack_1d0 = unaff_x22;
                  puStack_1c8 = (undefined *)unaff_x21;
                  uStack_1c0 = uVar14;
                  uStack_1b8 = uVar25;
                  ppuStack_1b0 = &puStack_160;
                  if ((lVar28 != 0) && (*(long *)(lVar28 + 0x10) != 0)) {
                    iVar11 = *(int *)(*(long *)(lVar28 + 0x10) + 0x18) - auVar41._8_4_;
                    iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar28,iVar11,4);
                    lVar28 = *(long *)(auVar41._0_8_ + 0x18);
                    if (lVar28 != 0) {
                      uVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar28,(iVar11 - iVar12) + iVar27,2);
                      if ((uVar14 & 0xffff) != 0) {
                        return uVar14;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)&uStack_1d8 + 4),0);
                  uVar17 = func_0x00f78a24(0x3d6ce88);
                  uVar21 = func_0x00f78a24(0x3d66338);
                  lVar28 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar25,uVar21,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar14 = func_0x00f78aec();
                  uVar17 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,lVar28);
                  uVar25 = func_0x00f78a24(0x3d56a50);
                  puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar38 = func_0x00f78ac0(uVar14,uVar25);
                  puVar5 = (undefined1 *)&uStack_1e0;
                  do {
                    uVar26 = auVar38._8_8_;
                    lVar19 = auVar38._0_8_;
                    *(ulong *)(puVar5 + 0xffffffffffffffe0) = uVar14;
                    *(long *)(puVar5 + 0xffffffffffffffe8) = lVar28;
                    *(undefined1 ****)(puVar5 + 0xfffffffffffffff0) = pppuVar33;
                    *(undefined **)(puVar5 + 0xfffffffffffffff8) = puVar34;
                    pppuVar33 = (undefined1 ***)(puVar5 + 0xfffffffffffffff0);
                    if ((int)uVar17 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
                      uVar14 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar26);
code_r0x016cef70:
                      if (*(long *)(lVar19 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar19 + 0x10);
                        return uVar14;
                      }
                    }
                    else if (lVar19 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar26);
                      if ((*(long *)(lVar19 + 0x18) != 0) &&
                         (lVar28 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar28 != 0)) {
                        uVar26 = (ulong)(uint)(*(int *)(lVar28 + 0x18) - *(int *)(lVar19 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                        uVar14 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar26);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar34 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar38 = func_0x00f78af4();
                    uVar17 = 0;
                    puVar5 = puVar5 + 0xffffffffffffffe0;
                    lVar28 = lVar19;
                    uVar14 = uVar26;
                  } while( true );
                }
                pdVar23 = &MACH_HEADER.cpusubtype;
                fVar35 = extraout_s0_00;
              }
              else {
                pdVar23 = (dword *)((long)&MACH_HEADER.cputype + 3);
                fVar35 = extraout_s0;
              }
              auVar39._8_8_ = pdVar23;
              auVar39._0_8_ = uVar26;
              *(undefined8 *)((long)pppppppiVar4 + -0x30) = unaff_d9;
              *(undefined8 *)((long)pppppppiVar4 + -0x28) = unaff_d8;
              *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
              *(int **)((long)pppppppiVar4 + -0x18) = unaff_x19;
              *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar4;
              *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
              if (fVar35 == 0.0 && *(char *)(uVar26 + 0x48) == '\0') {
                return uVar26;
              }
              uVar25 = 0;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar26,4);
              /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar35,uVar26);
              pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
              puStack_b8 = *(undefined **)((long)pppppppiVar4 + -8);
              unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
              unaff_x19 = *(int **)((long)pppppppiVar4 + -0x18);
              goto code_r0x016ce380;
            }
            pdVar23 = (dword *)((long)&MACH_HEADER.cputype + 1);
          }
          else {
            pdVar23 = &MACH_HEADER.cputype;
          }
          uVar14 = auVar38._0_8_;
          auVar39._8_8_ = pdVar23;
          auVar39._0_8_ = uVar14;
          param_4 = (long *)0x0;
          *(int ******)((long)pppppppiVar4 + -0x30) = unaff_x22;
          *(ulong *)((long)pppppppiVar4 + -0x28) = unaff_x21;
          *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
          *(int **)((long)pppppppiVar4 + -0x18) = unaff_x19;
          *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar4;
          *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
          if ((auVar38._8_4_ == 0) && (*(char *)(uVar14 + 0x48) == '\0')) {
            return uVar14;
          }
          uVar25 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1,0,0,0);
          /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar14,auVar38._8_8_);
          pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
          puStack_b8 = *(undefined **)((long)pppppppiVar4 + -8);
          unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
          unaff_x19 = *(int **)((long)pppppppiVar4 + -0x18);
          unaff_x22 = *(int ******)((long)pppppppiVar4 + -0x30);
          unaff_x21 = *(ulong *)((long)pppppppiVar4 + -0x28);
          goto code_r0x016ce380;
        }
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      }
      else {
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      uVar25 = auVar38._8_8_;
      uVar14 = auVar38._0_8_;
      auVar39._8_8_ = puVar5;
      auVar39._0_8_ = uVar14;
      param_4 = (long *)0x0;
      if (auVar38._8_4_ == 0) {
        return uVar14;
      }
      *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
      *(int **)((long)pppppppiVar4 + -0x18) = unaff_x19;
      *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar4;
      *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
      /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(uVar14,uVar25,uVar25,0,0);
      puStack_b8 = *(undefined **)((long)pppppppiVar4 + -8);
      unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
      unaff_x19 = *(int **)((long)pppppppiVar4 + -0x18);
      pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
code_r0x016ce380:
      do {
        piVar15 = auVar39._8_8_;
        *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppiVar4 + -0x18) = unaff_x19;
        *(int ********)((long)pppppppiVar4 + -0x10) = pppppppiVar32;
        *(undefined **)((long)pppppppiVar4 + -8) = puStack_b8;
        puVar5 = (undefined1 *)((long)pppppppiVar4 + -0x10);
        uVar13 = auVar39._8_4_;
        if ((int)uVar13 < *(int *)(auVar39._0_8_ + 0x30)) {
          unaff_x20 = *(long **)(auVar39._0_8_ + 0x28);
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (long *)0x0) goto code_r0x016ce410;
          if (uVar13 < *(uint *)(unaff_x20 + 3)) {
            *(int *)((long)unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar14;
            return uVar14;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar15 = (int *)func_0x00f78aec();
          uVar17 = func_0x00f78a24(0x3d6ceb8);
          uVar25 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar15,uVar17);
          uVar17 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar15,uVar17);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar17 = func_0x00f78b24();
        puVar34 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar38 = func_0x00f78ac0(uVar17,0);
        puVar6 = auVar38._8_8_;
        auVar36._8_8_ = uVar25;
        auVar36._0_8_ = auVar38._0_8_;
        pppppppiVar4 = (int *******)((long)pppppppiVar4 + -0x20);
        unaff_x19 = piVar15;
code_r0x016ce420:
        uVar14 = auVar36._0_8_;
        auVar39._8_8_ = puVar6;
        auVar39._0_8_ = uVar14;
        *(int ******)((long)pppppppiVar4 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppppiVar4 + -0x28) = unaff_x21;
        *(long **)((long)pppppppiVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppiVar4 + -0x18) = unaff_x19;
        *(undefined1 **)((long)pppppppiVar4 + -0x10) = puVar5;
        *(undefined **)((long)pppppppiVar4 + -8) = puVar34;
        if ((auVar36._8_4_ == (int)param_4) && (*(char *)(uVar14 + 0x48) == '\0')) {
          return uVar14;
        }
        uVar25 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar14,auVar36._8_8_);
        puStack_b8 = *(undefined **)((long)pppppppiVar4 + -8);
        unaff_x20 = *(long **)((long)pppppppiVar4 + -0x20);
        unaff_x19 = *(int **)((long)pppppppiVar4 + -0x18);
        unaff_x22 = *(int ******)((long)pppppppiVar4 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppppiVar4 + -0x28);
        pppppppiVar32 = *(int ********)((long)pppppppiVar4 + -0x10);
      } while( true );
    }
    iVar27 = *piVar15 + (int)uVar14;
    puVar3 = &stack0xffffffffffffffa0;
    pppppppiVar4 = pppppppiStack_70;
    puVar34 = puStack_68;
  }
  else {
    iVar27 = *piVar16 + (int)uVar14;
    puVar3 = &stack0xffffffffffffffc0;
    piVar16 = piVar15;
    pppppppiVar4 = pppppppiStack_50;
    puVar34 = puStack_48;
  }
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(int **)(puVar3 + -0x18) = piVar16;
  *(int ********)(puVar3 + -0x10) = pppppppiVar4;
  *(undefined **)(puVar3 + -8) = puVar34;
  puVar5 = puVar3 + -0x10;
  uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar28,iVar27,4);
  uVar14 = *(ulong *)(lVar28 + 0x30);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined4 *)(uVar14 + 0x20) = uVar10;
    uVar26 = *(ulong *)(lVar28 + 0x28);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar14;
    uVar25 = 0;
    puVar34 = &UNK_016cce74;
    puVar6 = puVar3 + -0x20;
    uVar14 = 4;
    lVar19 = lVar28;
    goto code_r0x029387b8;
  }
  uVar25 = func_0x00f78b24();
  lVar19 = func_0x00f78ac0(uVar25,0);
  *(long **)(puVar3 + -0x40) = unaff_x20;
  *(long *)(puVar3 + -0x38) = lVar28;
  *(undefined1 **)(puVar3 + -0x30) = puVar5;
  *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar5 = puVar3 + -0x30;
  pdVar23 = &MACH_HEADER.cpusubtype;
  uVar25 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar14 = *(ulong *)(lVar19 + 0x40);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined8 *)(uVar14 + 0x20) = uVar25;
    uVar26 = *(ulong *)(lVar19 + 0x38);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar14;
    uVar25 = 0;
    puVar34 = &UNK_016cceec;
    puVar6 = puVar3 + -0x40;
    uVar14 = 8;
    goto code_r0x029387b8;
  }
  uVar25 = func_0x00f78b24();
  auVar38 = func_0x00f78ac0(uVar25,0);
  lVar28 = auVar38._0_8_;
  *(int ******)(puVar3 + -0x70) = unaff_x22;
  *(ulong *)(puVar3 + -0x68) = unaff_x21;
  *(long **)(puVar3 + -0x60) = unaff_x20;
  *(long *)(puVar3 + -0x58) = lVar19;
  *(undefined1 **)(puVar3 + -0x50) = puVar5;
  *(undefined **)(puVar3 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar25 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (pdVar23 == (dword *)0x0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar21 = func_0x00f78aec();
    uVar17 = 0x3d6a458;
code_r0x016cd01c:
    uVar17 = func_0x00f78a24(uVar17);
    uVar22 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar21,uVar17);
  }
  else {
    if (*(long *)(pdVar23 + 6) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(pdVar23 + 6) < auVar38._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar21 = func_0x00f78aec();
      uVar17 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar25 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar28,0,auVar38._8_8_);
      if (*(long *)(lVar28 + 0x10) != 0) {
        uVar26 = *(ulong *)(*(long *)(lVar28 + 0x10) + 0x10);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = pdVar23;
        uVar25 = 0;
        puVar5 = *(undefined1 **)(puVar3 + -0x50);
        puVar34 = *(undefined **)(puVar3 + -0x48);
        unaff_x20 = *(long **)(puVar3 + -0x60);
        lVar19 = *(long *)(puVar3 + -0x58);
        unaff_x22 = *(int ******)(puVar3 + -0x70);
        unaff_x21 = *(ulong *)(puVar3 + -0x68);
        puVar6 = puVar3 + -0x40;
        uVar14 = auVar38._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar21 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d69698);
    uVar22 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar21,uVar17);
  }
  uVar17 = func_0x00f78a24(0x3d52cf8);
  auVar38 = func_0x00f78ac0(uVar21,uVar17);
  uVar20 = auVar38._8_8_;
  lVar19 = auVar38._0_8_;
  puVar6 = puVar3 + -0xa0;
  *(undefined8 *)(puVar3 + -0xa0) = uVar25;
  *(long *)(puVar3 + -0x98) = lVar28;
  *(dword **)(puVar3 + -0x90) = pdVar23;
  *(undefined8 *)(puVar3 + -0x88) = uVar21;
  *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
  *(undefined **)(puVar3 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar25 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar38._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar20 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d6a458);
    uVar14 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar20,uVar17);
code_r0x016cd1bc:
    uVar17 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar20,uVar17);
  }
  else {
    uVar25 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar20 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d69698);
      uVar14 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar20,uVar17);
      goto code_r0x016cd1bc;
    }
    uVar14 = uVar20;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar19,0);
    if (*(long *)(lVar19 + 0x10) != 0) {
      puVar30 = *(undefined8 **)(*(long *)(lVar19 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)(puVar3 + -0xb0) = unaff_x24;
      *(ulong *)(puVar3 + -0xa8) = unaff_x23;
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
      *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
      uVar25 = func_0x00f76cf0(*puVar30);
      uVar17 = func_0x00faf4d8(puVar30,uVar25,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)PTR_DAT_03c8cea0)(uVar17,uVar22,(int)uVar25 * auVar38._8_4_);
      return uVar14;
    }
  }
  auVar38 = func_0x00f78af4();
  uVar26 = auVar38._8_8_;
  lVar28 = auVar38._0_8_;
  *(undefined8 *)(puVar3 + -0xd0) = uVar25;
  *(long *)(puVar3 + -200) = lVar19;
  *(undefined8 *)(puVar3 + -0xc0) = uVar22;
  *(ulong *)(puVar3 + -0xb8) = uVar20;
  *(undefined1 **)(puVar3 + -0xb0) = puVar3 + -0x80;
  *(undefined **)(puVar3 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar25 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar26 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar14 <= *(int *)(uVar26 + 0x18)) {
    uVar25 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar28,0,uVar14);
    if (*(long *)(lVar28 + 0x10) != 0) {
      auVar40._8_4_ = *(undefined4 *)(lVar28 + 0x18);
      auVar40._0_8_ = *(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x10);
      auVar40._12_4_ = 0;
      uVar25 = 0;
      puVar5 = *(undefined1 **)(puVar3 + -0xb0);
      puVar34 = *(undefined **)(puVar3 + -0xa8);
      unaff_x20 = *(long **)(puVar3 + -0xc0);
      lVar19 = *(long *)(puVar3 + -0xb8);
      unaff_x22 = *(int ******)(puVar3 + -0xd0);
      unaff_x21 = *(ulong *)(puVar3 + -200);
code_r0x029387b8:
      do {
        pppppiVar24 = auVar40._8_8_;
        lVar28 = auVar40._0_8_;
        *(ulong *)(puVar6 + -0x40) = unaff_x24;
        *(ulong *)(puVar6 + -0x38) = unaff_x23;
        *(int ******)(puVar6 + -0x30) = unaff_x22;
        *(ulong *)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = unaff_x20;
        *(long *)(puVar6 + -0x18) = lVar19;
        *(undefined1 **)(puVar6 + -0x10) = puVar5;
        *(undefined **)(puVar6 + -8) = puVar34;
        if (lVar28 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar17 = func_0x00f78aec();
          uVar25 = 0x3d7b990;
code_r0x02938884:
          uVar25 = func_0x00f78a24(uVar25);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar17,uVar25,0);
          uVar25 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar17,uVar25);
code_r0x029388b0:
          uVar25 = func_0x00f78a24(0x3d70548);
          uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar25,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar21 = func_0x00f78aec();
          uVar25 = 0x3d7b998;
code_r0x02938954:
          auVar40._8_8_ = unaff_x22;
          auVar40._0_8_ = unaff_x23;
          uVar22 = func_0x00f78a24(uVar25);
          uVar25 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar21,uVar22,uVar17);
        }
        else {
          unaff_x21 = uVar26;
          if (uVar26 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar17 = func_0x00f78aec();
            uVar25 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = pppppiVar24;
          if (auVar40._8_4_ < 0) goto code_r0x029388b0;
          iVar27 = (int)uVar25;
          if (iVar27 < 0) {
            uVar25 = func_0x00f78a24(0x3d70548);
            uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar25,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar21 = func_0x00f78aec();
            uVar25 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar11 = (int)uVar14;
          if (iVar11 < 0) {
            uVar25 = func_0x00f78a24(0x3d70548);
            uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar25,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar21 = func_0x00f78aec();
            uVar25 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar20 = func_0x00f836d8(lVar28,pppppiVar24,uVar26);
          if (((uVar20 & 1) != 0) ||
             ((iVar12 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar28), auVar40._8_4_ <= iVar12 - iVar11 &&
              (uVar20 = /*System.Buffer$$ByteLength*/ func_0x0294274c(uVar26), iVar27 <= (int)uVar20 - iVar11)))) {
            return uVar20;
          }
          uVar17 = func_0x00f78a24(0x3d70ad8);
          uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar17,0);
          func_0x00f78a24(0x3d1fce8);
          uVar21 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar21,uVar17,0);
        }
        uVar22 = func_0x00f78a24(0x3d52be0);
        uVar13 = func_0x00f78ac0(uVar21,uVar22);
        *(long *)(puVar6 + -0x70) = auVar40._8_8_;
        *(ulong *)(puVar6 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar6 + -0x60) = uVar21;
        *(undefined8 *)(puVar6 + -0x58) = uVar17;
        *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar6 + -0x80) = unaff_x24;
        *(long *)(puVar6 + -0x78) = auVar40._0_8_;
        *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
        *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
        *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
        *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
        *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x50);
        *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)(puVar6 + -0x48);
        puVar5 = puVar6 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar13 >> 5;
        unaff_x23 = (ulong)(uVar13 & 0x1f);
        if ((uVar13 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar19 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar26 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = (int *****)func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        pppppiVar24 = (int *****)0x3d20078;
        if (unaff_x20 != (long *)0x0) {
          uVar26 = *(ulong *)(*unaff_x20 + 0x1a0);
          (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
          pppppiVar24 = unaff_x22;
          if (lVar19 != 0) {
            uVar26 = *(ulong *)(lVar19 + 0x18);
            auVar40._8_8_ = 0;
            auVar40._0_8_ = unaff_x22;
            uVar25 = 0;
            puVar34 = &UNK_02938710;
            puVar6 = puVar6 + -0x80;
            uVar14 = unaff_x21;
            goto code_r0x029387b8;
          }
        }
        unaff_x22 = pppppiVar24;
        func_0x00f78af4();
        uVar17 = func_0x00f78b24();
        puVar34 = &System_Buffer__BlockCopy;
        auVar40 = func_0x00f78ac0(uVar17,0);
        puVar6 = puVar6 + -0x80;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)(puVar3 + -0xd4) = (int)uVar14;
  uVar17 = func_0x00f78a24(0x3d22910);
  lVar28 = func_0x00f78ae0(uVar17,puVar3 + -0xd4);
  func_0x00055e5c(uVar26);
  *(int *)(puVar3 + -0xd8) = (int)*(undefined8 *)(uVar26 + 0x18);
  uVar17 = func_0x00f78a24(0x3d22910);
  uVar17 = func_0x00f78ae0(uVar17,puVar3 + -0xd8);
  uVar21 = func_0x00f78a24(0x3d72a68);
  uVar17 = /*System.String$$Format*/ func_0x029bcac4(uVar21,lVar28,uVar17,0);
  func_0x00f78a24(0x3d1fce8);
  uVar14 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar17,0);
  uVar17 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar14,uVar17);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar17 = func_0x00f78aec();
  uVar21 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar17,uVar21,0);
  uVar21 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar17,uVar21);
  *(undefined8 *)(puVar3 + -0x140) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x138) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x130) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x128) = unaff_x25;
  *(ulong *)(puVar3 + -0x120) = unaff_x24;
  *(ulong *)(puVar3 + -0x118) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x110) = uVar25;
  *(long *)(puVar3 + -0x108) = lVar28;
  *(ulong *)(puVar3 + -0x100) = uVar14;
  *(undefined8 *)(puVar3 + -0xf8) = uVar17;
  *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xb0;
  *(undefined **)(puVar3 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar28 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar28,uRam0000000003d30160);
  uVar25 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
  if (lVar28 != 0) {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,1,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,4,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,8,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,1,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,1,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,2,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,2,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,4,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,4,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,8,uRam0000000003d30168);
    uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
    uVar14 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar28,uVar25,8,uRam0000000003d30168);
    **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar28;
    return uVar14;
  }
  lVar28 = func_0x00f78af4();
  return *(ulong *)(lVar28 + 0x10);
}



// ============================================================
// RVA: 0x1657de8 | Core.Networking.MigrationCar.get_LapsCompleted
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01657f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016581b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */
/* WARNING: Removing unreachable block (ram,0x01657f28) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x016581b4) */
/* WARNING: Removing unreachable block (ram,0x016581c4) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Networking_MigrationCar__get_LapsCompleted
                (int *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *******pppppppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  short sVar7;
  undefined4 uVar10;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  short sVar8;
  short sVar9;
  int iVar11;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  dword *pdVar24;
  ulong uVar25;
  int iVar26;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar27;
  long lVar28;
  ulong *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar29;
  int *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  int **unaff_x29;
  undefined8 *******pppppppuVar30;
  undefined1 ***pppuVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  float extraout_s0;
  float extraout_s0_00;
  float fVar33;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined1 auStack_1e0 [16];
  int *piStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  int *piStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x10,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)(param_1 + 2) != 0) {
    auVar36._4_4_ = 0;
    auVar36._0_4_ = *param_1 + (int)uVar14;
    auVar36._8_8_ = *(long *)(param_1 + 2);
    puVar5 = (undefined1 *)register0x00000008;
    param_4 = unaff_x20;
    uVar14 = unaff_x21;
code_r0x016ccca0:
    unaff_x20 = auVar36._8_8_;
    piVar15 = auVar36._0_8_;
    puVar2 = puVar5 + -0x20;
    *(long **)(puVar5 + -0x20) = param_4;
    *(ulong **)(puVar5 + -0x18) = unaff_x19;
    *(int ***)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = unaff_x30;
    pppppppuVar4 = (undefined8 *******)(puVar5 + -0x10);
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x20,piVar15,1);
    if ((unaff_x20[2] == 0) || (lVar27 = *(long *)(unaff_x20[2] + 0x10), lVar27 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar36._0_4_ < *(uint *)(lVar27 + 0x18)) {
      return (long)*(char *)(lVar27 + (int)auVar36._0_4_ + 0x20);
    }
    uVar17 = func_0x00f78b24();
    puVar32 = &FlatBuffers_ByteBuffer__Get;
    auVar35 = func_0x00f78ac0(uVar17,0);
    unaff_x21 = uVar14;
code_r0x016cccfc:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = piVar15;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar4;
    *(undefined **)(puVar2 + -8) = puVar32;
    uVar17 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar35._0_8_,auVar35._8_8_,1);
    lVar27 = *(long *)(auVar35._0_8_ + 0x10);
    if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x10), lVar27 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar35._8_4_ < *(uint *)(lVar27 + 0x18)) {
      return (ulong)*(byte *)(lVar27 + (int)auVar35._8_4_ + 0x20);
    }
    uVar18 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar18,0);
    *(int **)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(undefined1 (*) [16])(puVar2 + -0x40) = auVar35;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
    plVar19 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar27 = *(long *)(auVar36._0_8_ + 0x10);
    if ((lVar27 != 0) && (plVar19 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (**(code **)(*plVar19 + 0x348))
                         (plVar19,*(undefined8 *)(lVar27 + 0x10),auVar36._8_8_,uVar17,
                          *(undefined8 *)(*plVar19 + 0x350));
      return uVar14;
    }
    auVar36 = func_0x00f78af4();
    *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x30;
    *(undefined **)(puVar2 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar36._0_8_,auVar36._8_8_,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar15 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_MigrationCar__get_TrackCoordsX;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,0x12,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  lVar27 = *(long *)(piVar15 + 2);
  if (lVar27 == 0) {
    piVar16 = (int *)func_0x00f78af4();
    puStack_48 = &Core_Networking_MigrationCar__get_TrackCoordsY;
    pppppppuStack_50 = &pppppppuStack_30;
    uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar16,0x14,0);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    lVar27 = *(long *)(piVar16 + 2);
    if (lVar27 == 0) {
      piVar15 = (int *)func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff80;
      puStack_68 = &Core_Networking_MigrationCar__get_Halfway;
      pppppppuVar4 = &pppppppuStack_70;
      uVar14 = 0;
      pppppppuStack_70 = &pppppppuStack_50;
      uVar25 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,0x16);
      if ((int)uVar25 == 0) {
        return uVar25;
      }
      if (*(long *)(piVar15 + 2) != 0) {
        auVar35._8_4_ = *piVar15 + (int)uVar25;
        auVar35._0_8_ = *(long *)(piVar15 + 2);
        auVar35._12_4_ = 0;
        puVar32 = &UNK_01657f28;
        goto code_r0x016cccfc;
      }
      piVar16 = (int *)func_0x00f78af4();
      pppppppuStack_90 = pppppppuVar4;
      if (piVar16 != (int *)0x0) {
        uVar17 = 0;
        pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff50;
        puStack_88 = &Core_Networking_MigrationCar__StartMigrationCar;
        unaff_x20 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar16);
        if (*(long *)(piVar16 + 10) != 0) {
          if (*(int *)(*(long *)(piVar16 + 10) + 0x18) < 10) {
            uVar17 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,10);
            *(undefined8 *)(piVar16 + 10) = uVar17;
          }
          piVar16[0xc] = 10;
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar16);
          piVar16[0xd] = (int)uVar14;
          return uVar14;
        }
        puStack_98 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar37 = func_0x00f78af4();
        piVar15 = piVar16;
        pppppppuVar30 = &pppppppuStack_90;
        goto code_r0x016ce380;
      }
      puStack_88 = &Core_Networking_MigrationCar__StartMigrationCar;
      auVar36 = func_0x00f78af4();
      uVar25 = auVar36._0_8_;
      if (uVar25 != 0) {
        param_4 = (long *)0x0;
        puStack_98 = &Core_Networking_MigrationCar__AddSyncId;
        if ((auVar36._8_4_ == 0) && (*(char *)(uVar25 + 0x48) == '\0')) {
          return uVar25;
        }
        uVar17 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar25,4,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar25,auVar36._8_8_);
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar25;
        pppppppuVar4 = &pppppppuStack_90;
        pppppppuVar30 = &pppppppuStack_90;
        goto code_r0x016ce380;
      }
      pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff60;
      puVar32 = &Core_Networking_MigrationCar__AddPosition;
      auVar36 = func_0x00f78af4();
      if (auVar36._0_8_ == 0) {
        pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff50;
        puVar32 = &Core_Networking_MigrationCar__AddRotation;
        auVar36 = func_0x00f78af4();
        if (auVar36._0_8_ == 0) {
          auVar36 = func_0x00f78af4();
          uVar25 = auVar36._0_8_;
          if (uVar25 != 0) {
            param_4 = (long *)0x0;
            puStack_c8 = &Core_Networking_MigrationCar__AddUsableType;
            if ((auVar36._8_4_ == 0) && (*(char *)(uVar25 + 0x48) == '\0')) {
              return uVar25;
            }
            uVar17 = 0;
            pppppppuStack_d0 = (undefined8 *******)&stack0xffffffffffffff40;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar25,2,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar25,auVar36._8_8_);
            auVar37._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            auVar37._0_8_ = uVar25;
            pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff40;
            pppppppuVar30 = pppppppuStack_d0;
            puStack_98 = puStack_c8;
            goto code_r0x016ce380;
          }
          pppppppuVar4 = &pppppppuStack_d0;
          puStack_c8 = &Core_Networking_MigrationCar__AddUsableType;
          puVar32 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
          pppppppuStack_d0 = (undefined8 *******)&stack0xffffffffffffff40;
          auVar36 = func_0x00f78af4();
          if (auVar36._0_8_ == 0) {
            pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff20;
            puVar32 = &Core_Networking_MigrationCar__AddBattleScore;
            auVar36 = func_0x00f78af4();
            if (auVar36._0_8_ == 0) {
              auVar36 = func_0x00f78af4();
              uVar25 = auVar36._0_8_;
              if (uVar25 != 0) {
                param_4 = (long *)0x0;
                puStack_f8 = &Core_Networking_MigrationCar__AddLapsCompleted;
                if ((auVar36._8_4_ == 0) && (*(char *)(uVar25 + 0x48) == '\0')) {
                  return uVar25;
                }
                uVar17 = 0;
                pppppppuStack_100 = (undefined8 *******)&stack0xffffffffffffff10;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar25,1,0,0,0);
                /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar25,auVar36._8_8_);
                auVar37._8_8_ = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
                auVar37._0_8_ = uVar25;
                pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff10;
                pppppppuVar30 = pppppppuStack_100;
                puStack_98 = puStack_f8;
                goto code_r0x016ce380;
              }
              pppppppuVar4 = &pppppppuStack_100;
              puStack_f8 = &Core_Networking_MigrationCar__AddLapsCompleted;
              puVar32 = &Core_Networking_MigrationCar__AddTrackCoordsX;
              pppppppuStack_100 = (undefined8 *******)&stack0xffffffffffffff10;
              uVar25 = func_0x00f78af4();
              if (uVar25 == 0) {
                pppppppuVar4 = (undefined8 *******)&stack0xfffffffffffffef0;
                puVar32 = &Core_Networking_MigrationCar__AddTrackCoordsY;
                uVar25 = func_0x00f78af4();
                if (uVar25 == 0) {
                  pppppppuVar4 = (undefined8 *******)&stack0xfffffffffffffee0;
                  puVar5 = &stack0xfffffffffffffee0;
                  puVar32 = &Core_Networking_MigrationCar__AddHalfway;
                  auVar34 = func_0x00f78af4();
                  if (auVar34._0_8_ != 0) {
                    puVar6 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
                    param_4 = (long *)0x0;
                    goto code_r0x016ce420;
                  }
                  puStack_128 = &Core_Networking_MigrationCar__AddHalfway;
                  puStack_130 = &stack0xfffffffffffffee0;
                  lVar27 = func_0x00f78af4();
                  puStack_138 = &Core_Networking_MigrationCar__EndMigrationCar;
                  uVar25 = 0x3eb5000;
                  puStack_140 = (undefined1 *)&puStack_130;
                  if ((bRam0000000003eb5813 & 1) == 0) {
                    puStack_140 = (undefined1 *)&puStack_130;
                    func_0x00f78a20(0x3d3f1b8);
                    bRam0000000003eb5813 = 1;
                  }
                  if (lVar27 == 0) {
                    auVar35 = func_0x00f78af4();
                    lVar27 = auVar35._8_8_;
                    unaff_x19 = &uStack_1a0;
                    if (lVar27 == 0) {
                      puVar32 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                      auVar36 = func_0x00f78af4();
                      uStack_1b8 = 0;
                      unaff_x19 = (ulong *)extraout_x8_00;
                    }
                    else {
                      unaff_x22 = (int *)CONCAT44(0,auVar35._0_4_ + 4);
                      auVar36._8_8_ = lVar27;
                      auVar36._0_8_ = (ulong)unaff_x22;
                      param_4 = (long *)/*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar27,auVar35._0_8_,0);
                      puVar32 = &UNK_01658158;
                      uStack_1b8 = extraout_x8;
                      uVar25 = uVar14;
                    }
                    puVar5 = auStack_1e0;
                    unaff_x29 = &piStack_1b0;
                    piStack_1d0 = unaff_x22;
                    lStack_1c8 = lVar27;
                    uStack_1c0 = uVar25;
                    piStack_1b0 = (int *)&stack0xfffffffffffffea0;
                    puStack_1a8 = puVar32;
                    auStack_1e0 = auVar36;
                    if (auVar36._8_8_ == 0) {
                      auVar39 = func_0x00f78af4();
                      uVar14 = auVar39._0_8_;
                      uVar17 = *(undefined8 *)(uVar14 + 0x1b0);
                      uVar10 = *(undefined4 *)(uVar14 + 0x1a0);
                      *extraout_x8_01 = 0;
                      extraout_x8_01[1] = 0;
                      *(int *)extraout_x8_01 = auVar39._8_4_;
                      *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                      *(undefined4 *)(extraout_x8_01 + 1) = uVar10;
                      extraout_x8_01[2] = uVar17;
                      return uVar14;
                    }
                    unaff_x30 = &UNK_016581b4;
                    goto code_r0x016ccca0;
                  }
                  uVar14 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar27 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar27,0);
                    uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar27);
                    unaff_x21 = (ulong)*(uint *)(lVar27 + 0x30);
                    uVar13 = *(uint *)(lVar27 + 0x30) - 1;
                    if (-2 < (int)uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    unaff_x22 = (int *)(ulong)uVar13;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar26 = (int)uVar14;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar27 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = (int *)(unaff_x21 + 8);
                    do {
                      piVar15 = unaff_x22 + -2;
                      if ((int *)(ulong)*(uint *)(lVar20 + 0x18) <= piVar15) goto code_r0x016ced88;
                      iVar11 = *(int *)(lVar20 + (long)unaff_x22 * 4);
                      sVar7 = 0;
                      if (iVar11 != 0) {
                        sVar7 = (short)uVar14 - (short)iVar11;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar27,(int)sVar7);
                      lVar20 = *(long *)(lVar27 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if ((int *)(ulong)*(uint *)(lVar20 + 0x18) <= piVar15) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + (long)unaff_x22 * 4) = 0;
                      unaff_x22 = (int *)((long)unaff_x22 - 1);
                      uVar13 = uVar1;
                    } while (0 < (long)piVar15);
code_r0x016ceb30:
                    uVar10 = *(undefined4 *)(lVar27 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar27,(int)(short)((short)uVar14 - (short)uVar10));
                    uVar13 = uVar13 * 2 + 6;
                    unaff_x21 = (ulong)uVar13;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar27,(int)(short)uVar13);
                    unaff_x22 = (int *)(ulong)*(uint *)(lVar27 + 0x40);
                    if (0 < (int)*(uint *)(lVar27 + 0x40)) {
                      uVar25 = 0;
                      do {
                        lVar20 = *(long *)(lVar27 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar28 + 0x18) <= uVar25) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar28 + uVar25 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar13 = *(uint *)(lVar27 + 0x10);
                        unaff_x22 = (int *)(ulong)uVar13;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar27 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar27 + 0x18),unaff_x22,2);
                        if (sVar7 == sVar8) {
                          if (sVar7 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar27 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar25) goto code_r0x016ced88;
                            iVar11 = *(int *)(unaff_x21 + uVar25 * 4 + 0x20);
                            if (iVar11 == 0) {
                              unaff_x22 = (int *)(ulong)*(uint *)(lVar27 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar27 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar26;
                            *(int *)(lVar27 + 0x10) = iVar12;
                            iVar11 = iVar11 - iVar26;
                            goto code_r0x016ced3c;
                          }
                          iVar11 = 2;
                          while( true ) {
                            if (*(long *)(lVar27 + 0x18) == 0) goto code_r0x016ced84;
                            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar27 + 0x18),uVar1 + iVar11,2);
                            if (*(long *)(lVar27 + 0x18) == 0) goto code_r0x016ced84;
                            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar27 + 0x18),uVar13 + iVar11,2);
                            if (sVar8 != sVar9) break;
                            iVar11 = iVar11 + 2;
                            if (sVar7 <= iVar11) goto code_r0x016cec64;
                          }
                        }
                        uVar25 = uVar25 + 1;
                        unaff_x22 = (int *)(long)*(int *)(lVar27 + 0x40);
                      } while ((long)uVar25 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar27 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar27 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar27 + 0x38) = unaff_x21;
                        unaff_x22 = (int *)(ulong)*(uint *)(lVar27 + 0x40);
                      }
                      uVar13 = (uint)unaff_x22;
                      *(uint *)(lVar27 + 0x40) = uVar13 + 1;
                      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar27);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar10;
                        unaff_x21 = *(ulong *)(lVar27 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar27);
                          iVar12 = iVar12 - iVar26;
                          iVar11 = iVar11 - iVar26;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                          *(undefined4 *)(lVar27 + 0x30) = 0xffffffff;
                          return uVar14;
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
                  uVar18 = func_0x00f78a24(0x3d6cea8);
                  iVar26 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar18);
                  uVar18 = func_0x00f78a24(0x3d56a30);
                  auVar39 = func_0x00f78ac0(uVar17,uVar18);
                  puStack_188 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppuVar31 = &ppuStack_190;
                  uStack_1b8 = CONCAT44(iVar26,(undefined4)uStack_1b8);
                  lVar27 = *(long *)(auVar39._0_8_ + 0x18);
                  piStack_1b0 = unaff_x22;
                  puStack_1a8 = (undefined *)unaff_x21;
                  uStack_1a0 = uVar14;
                  uStack_198 = uVar17;
                  ppuStack_190 = &puStack_140;
                  if ((lVar27 != 0) && (*(long *)(lVar27 + 0x10) != 0)) {
                    iVar11 = *(int *)(*(long *)(lVar27 + 0x10) + 0x18) - auVar39._8_4_;
                    iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar27,iVar11,4);
                    lVar27 = *(long *)(auVar39._0_8_ + 0x18);
                    if (lVar27 != 0) {
                      uVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar27,(iVar11 - iVar12) + iVar26,2);
                      if ((uVar14 & 0xffff) != 0) {
                        return uVar14;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)&uStack_1b8 + 4),0);
                  uVar18 = func_0x00f78a24(0x3d6ce88);
                  uVar22 = func_0x00f78a24(0x3d66338);
                  lVar27 = /*System.String$$Concat*/ func_0x029be39c(uVar18,uVar17,uVar22,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar14 = func_0x00f78aec();
                  uVar18 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,lVar27);
                  uVar17 = func_0x00f78a24(0x3d56a50);
                  puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar36 = func_0x00f78ac0(uVar14,uVar17);
                  puVar5 = (undefined1 *)&uStack_1c0;
                  do {
                    uVar25 = auVar36._8_8_;
                    lVar20 = auVar36._0_8_;
                    *(ulong *)(puVar5 + 0xffffffffffffffe0) = uVar14;
                    *(long *)(puVar5 + 0xffffffffffffffe8) = lVar27;
                    *(undefined1 ****)(puVar5 + 0xfffffffffffffff0) = pppuVar31;
                    *(undefined **)(puVar5 + 0xfffffffffffffff8) = puVar32;
                    pppuVar31 = (undefined1 ***)(puVar5 + 0xfffffffffffffff0);
                    if ((int)uVar18 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar14 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar25);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar14;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar25);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar27 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar27 != 0)) {
                        uVar25 = (ulong)(uint)(*(int *)(lVar27 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar14 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar25);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar36 = func_0x00f78af4();
                    uVar18 = 0;
                    puVar5 = puVar5 + 0xffffffffffffffe0;
                    lVar27 = lVar20;
                    uVar14 = uVar25;
                  } while( true );
                }
                pdVar24 = &MACH_HEADER.cpusubtype;
                fVar33 = extraout_s0_00;
              }
              else {
                pdVar24 = (dword *)((long)&MACH_HEADER.cputype + 3);
                fVar33 = extraout_s0;
              }
              auVar37._8_8_ = pdVar24;
              auVar37._0_8_ = uVar25;
              *(undefined8 *)((long)pppppppuVar4 + -0x30) = unaff_d9;
              *(undefined8 *)((long)pppppppuVar4 + -0x28) = unaff_d8;
              *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
              *(int **)((long)pppppppuVar4 + -0x18) = piVar15;
              *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar4;
              *(undefined **)((long)pppppppuVar4 + -8) = puVar32;
              if (fVar33 == 0.0 && *(char *)(uVar25 + 0x48) == '\0') {
                return uVar25;
              }
              uVar17 = 0;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar25,4);
              /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar33,uVar25);
              pppppppuVar30 = *(undefined8 ********)((long)pppppppuVar4 + -0x10);
              puStack_98 = *(undefined **)((long)pppppppuVar4 + -8);
              unaff_x20 = *(long **)((long)pppppppuVar4 + -0x20);
              piVar15 = *(int **)((long)pppppppuVar4 + -0x18);
              goto code_r0x016ce380;
            }
            pdVar24 = (dword *)((long)&MACH_HEADER.cputype + 1);
          }
          else {
            pdVar24 = &MACH_HEADER.cputype;
          }
          uVar14 = auVar36._0_8_;
          auVar37._8_8_ = pdVar24;
          auVar37._0_8_ = uVar14;
          param_4 = (long *)0x0;
          *(int **)((long)pppppppuVar4 + -0x30) = unaff_x22;
          *(ulong *)((long)pppppppuVar4 + -0x28) = unaff_x21;
          *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
          *(int **)((long)pppppppuVar4 + -0x18) = piVar15;
          *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar4;
          *(undefined **)((long)pppppppuVar4 + -8) = puVar32;
          if ((auVar36._8_4_ == 0) && (*(char *)(uVar14 + 0x48) == '\0')) {
            return uVar14;
          }
          uVar17 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1,0,0,0);
          /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar14,auVar36._8_8_);
          pppppppuVar30 = *(undefined8 ********)((long)pppppppuVar4 + -0x10);
          puStack_98 = *(undefined **)((long)pppppppuVar4 + -8);
          unaff_x20 = *(long **)((long)pppppppuVar4 + -0x20);
          piVar15 = *(int **)((long)pppppppuVar4 + -0x18);
          unaff_x22 = *(int **)((long)pppppppuVar4 + -0x30);
          unaff_x21 = *(ulong *)((long)pppppppuVar4 + -0x28);
          goto code_r0x016ce380;
        }
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      }
      else {
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      uVar17 = auVar36._8_8_;
      uVar14 = auVar36._0_8_;
      auVar37._8_8_ = puVar5;
      auVar37._0_8_ = uVar14;
      param_4 = (long *)0x0;
      if (auVar36._8_4_ == 0) {
        return uVar14;
      }
      *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)pppppppuVar4 + -0x18) = piVar15;
      *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar4;
      *(undefined **)((long)pppppppuVar4 + -8) = puVar32;
      /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(uVar14,uVar17,uVar17,0,0);
      puStack_98 = *(undefined **)((long)pppppppuVar4 + -8);
      unaff_x20 = *(long **)((long)pppppppuVar4 + -0x20);
      piVar15 = *(int **)((long)pppppppuVar4 + -0x18);
      pppppppuVar30 = *(undefined8 ********)((long)pppppppuVar4 + -0x10);
code_r0x016ce380:
      do {
        piVar16 = auVar37._8_8_;
        *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppuVar4 + -0x18) = piVar15;
        *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar30;
        *(undefined **)((long)pppppppuVar4 + -8) = puStack_98;
        puVar5 = (undefined1 *)((long)pppppppuVar4 + -0x10);
        uVar13 = auVar37._8_4_;
        if ((int)uVar13 < *(int *)(auVar37._0_8_ + 0x30)) {
          unaff_x20 = *(long **)(auVar37._0_8_ + 0x28);
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (long *)0x0) goto code_r0x016ce410;
          if (uVar13 < *(uint *)(unaff_x20 + 3)) {
            *(int *)((long)unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar14;
            return uVar14;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar16 = (int *)func_0x00f78aec();
          uVar18 = func_0x00f78a24(0x3d6ceb8);
          uVar17 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar16,uVar18);
          uVar18 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar16,uVar18);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar18 = func_0x00f78b24();
        puVar32 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar36 = func_0x00f78ac0(uVar18,0);
        puVar6 = auVar36._8_8_;
        auVar34._8_8_ = uVar17;
        auVar34._0_8_ = auVar36._0_8_;
        pppppppuVar4 = (undefined8 *******)((long)pppppppuVar4 + -0x20);
        piVar15 = piVar16;
code_r0x016ce420:
        uVar14 = auVar34._0_8_;
        auVar37._8_8_ = puVar6;
        auVar37._0_8_ = uVar14;
        *(int **)((long)pppppppuVar4 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppppuVar4 + -0x28) = unaff_x21;
        *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppuVar4 + -0x18) = piVar15;
        *(undefined1 **)((long)pppppppuVar4 + -0x10) = puVar5;
        *(undefined **)((long)pppppppuVar4 + -8) = puVar32;
        if ((auVar34._8_4_ == (int)param_4) && (*(char *)(uVar14 + 0x48) == '\0')) {
          return uVar14;
        }
        uVar17 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar14,auVar34._8_8_);
        puStack_98 = *(undefined **)((long)pppppppuVar4 + -8);
        unaff_x20 = *(long **)((long)pppppppuVar4 + -0x20);
        piVar15 = *(int **)((long)pppppppuVar4 + -0x18);
        unaff_x22 = *(int **)((long)pppppppuVar4 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppppuVar4 + -0x28);
        pppppppuVar30 = *(undefined8 ********)((long)pppppppuVar4 + -0x10);
      } while( true );
    }
    iVar26 = *piVar16 + (int)uVar14;
    puVar3 = &stack0xffffffffffffffc0;
    pppppppuVar4 = pppppppuStack_50;
    puVar32 = puStack_48;
  }
  else {
    iVar26 = *piVar15 + (int)uVar14;
    puVar3 = &stack0xffffffffffffffe0;
    piVar15 = param_1;
    pppppppuVar4 = pppppppuStack_30;
    puVar32 = puStack_28;
  }
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(int **)(puVar3 + -0x18) = piVar15;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar4;
  *(undefined **)(puVar3 + -8) = puVar32;
  puVar5 = puVar3 + -0x10;
  uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar27,iVar26,4);
  uVar14 = *(ulong *)(lVar27 + 0x30);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined4 *)(uVar14 + 0x20) = uVar10;
    uVar25 = *(ulong *)(lVar27 + 0x28);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar14;
    uVar17 = 0;
    puVar32 = &UNK_016cce74;
    puVar6 = puVar3 + -0x20;
    uVar14 = 4;
    lVar20 = lVar27;
    goto code_r0x029387b8;
  }
  uVar17 = func_0x00f78b24();
  lVar20 = func_0x00f78ac0(uVar17,0);
  *(long **)(puVar3 + -0x40) = unaff_x20;
  *(long *)(puVar3 + -0x38) = lVar27;
  *(undefined1 **)(puVar3 + -0x30) = puVar5;
  *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar5 = puVar3 + -0x30;
  pdVar24 = &MACH_HEADER.cpusubtype;
  uVar17 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar14 = *(ulong *)(lVar20 + 0x40);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined8 *)(uVar14 + 0x20) = uVar17;
    uVar25 = *(ulong *)(lVar20 + 0x38);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar14;
    uVar17 = 0;
    puVar32 = &UNK_016cceec;
    puVar6 = puVar3 + -0x40;
    uVar14 = 8;
    goto code_r0x029387b8;
  }
  uVar17 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar17,0);
  lVar27 = auVar36._0_8_;
  *(int **)(puVar3 + -0x70) = unaff_x22;
  *(ulong *)(puVar3 + -0x68) = unaff_x21;
  *(long **)(puVar3 + -0x60) = unaff_x20;
  *(long *)(puVar3 + -0x58) = lVar20;
  *(undefined1 **)(puVar3 + -0x50) = puVar5;
  *(undefined **)(puVar3 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar17 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (pdVar24 == (dword *)0x0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar22 = func_0x00f78aec();
    uVar18 = 0x3d6a458;
code_r0x016cd01c:
    uVar18 = func_0x00f78a24(uVar18);
    uVar23 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar22,uVar18);
  }
  else {
    if (*(long *)(pdVar24 + 6) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(pdVar24 + 6) < auVar36._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar22 = func_0x00f78aec();
      uVar18 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar17 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar27,0,auVar36._8_8_);
      if (*(long *)(lVar27 + 0x10) != 0) {
        uVar25 = *(ulong *)(*(long *)(lVar27 + 0x10) + 0x10);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = pdVar24;
        uVar17 = 0;
        puVar5 = *(undefined1 **)(puVar3 + -0x50);
        puVar32 = *(undefined **)(puVar3 + -0x48);
        unaff_x20 = *(long **)(puVar3 + -0x60);
        lVar20 = *(long *)(puVar3 + -0x58);
        unaff_x22 = *(int **)(puVar3 + -0x70);
        unaff_x21 = *(ulong *)(puVar3 + -0x68);
        puVar6 = puVar3 + -0x40;
        uVar14 = auVar36._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar22 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d69698);
    uVar23 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar22,uVar18);
  }
  uVar18 = func_0x00f78a24(0x3d52cf8);
  auVar36 = func_0x00f78ac0(uVar22,uVar18);
  uVar21 = auVar36._8_8_;
  lVar20 = auVar36._0_8_;
  puVar6 = puVar3 + -0xa0;
  *(undefined8 *)(puVar3 + -0xa0) = uVar17;
  *(long *)(puVar3 + -0x98) = lVar27;
  *(dword **)(puVar3 + -0x90) = pdVar24;
  *(undefined8 *)(puVar3 + -0x88) = uVar22;
  *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
  *(undefined **)(puVar3 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar17 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar36._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar21 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d6a458);
    uVar14 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar21,uVar18);
code_r0x016cd1bc:
    uVar18 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar21,uVar18);
  }
  else {
    uVar17 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar21 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d69698);
      uVar14 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar21,uVar18);
      goto code_r0x016cd1bc;
    }
    uVar14 = uVar21;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar20,0);
    if (*(long *)(lVar20 + 0x10) != 0) {
      puVar29 = *(undefined8 **)(*(long *)(lVar20 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)(puVar3 + -0xb0) = unaff_x24;
      *(ulong *)(puVar3 + -0xa8) = unaff_x23;
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
      *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
      *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
      *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x90);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
      *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
      uVar17 = func_0x00f76cf0(*puVar29);
      uVar18 = func_0x00faf4d8(puVar29,uVar17,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)PTR_DAT_03c8cea0)(uVar18,uVar23,(int)uVar17 * auVar36._8_4_);
      return uVar14;
    }
  }
  auVar36 = func_0x00f78af4();
  uVar25 = auVar36._8_8_;
  lVar27 = auVar36._0_8_;
  *(undefined8 *)(puVar3 + -0xd0) = uVar17;
  *(long *)(puVar3 + -200) = lVar20;
  *(undefined8 *)(puVar3 + -0xc0) = uVar23;
  *(ulong *)(puVar3 + -0xb8) = uVar21;
  *(undefined1 **)(puVar3 + -0xb0) = puVar3 + -0x80;
  *(undefined **)(puVar3 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar17 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar25 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar14 <= *(int *)(uVar25 + 0x18)) {
    uVar17 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar27,0,uVar14);
    if (*(long *)(lVar27 + 0x10) != 0) {
      auVar38._8_4_ = *(undefined4 *)(lVar27 + 0x18);
      auVar38._0_8_ = *(undefined8 *)(*(long *)(lVar27 + 0x10) + 0x10);
      auVar38._12_4_ = 0;
      uVar17 = 0;
      puVar5 = *(undefined1 **)(puVar3 + -0xb0);
      puVar32 = *(undefined **)(puVar3 + -0xa8);
      unaff_x20 = *(long **)(puVar3 + -0xc0);
      lVar20 = *(long *)(puVar3 + -0xb8);
      unaff_x22 = *(int **)(puVar3 + -0xd0);
      unaff_x21 = *(ulong *)(puVar3 + -200);
code_r0x029387b8:
      do {
        piVar15 = auVar38._8_8_;
        lVar27 = auVar38._0_8_;
        *(ulong *)(puVar6 + -0x40) = unaff_x24;
        *(ulong *)(puVar6 + -0x38) = unaff_x23;
        *(int **)(puVar6 + -0x30) = unaff_x22;
        *(ulong *)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = unaff_x20;
        *(long *)(puVar6 + -0x18) = lVar20;
        *(undefined1 **)(puVar6 + -0x10) = puVar5;
        *(undefined **)(puVar6 + -8) = puVar32;
        if (lVar27 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar18 = func_0x00f78aec();
          uVar17 = 0x3d7b990;
code_r0x02938884:
          uVar17 = func_0x00f78a24(uVar17);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar18,uVar17,0);
          uVar17 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar18,uVar17);
code_r0x029388b0:
          uVar17 = func_0x00f78a24(0x3d70548);
          uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar17,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar22 = func_0x00f78aec();
          uVar17 = 0x3d7b998;
code_r0x02938954:
          auVar38._8_8_ = unaff_x22;
          auVar38._0_8_ = unaff_x23;
          uVar23 = func_0x00f78a24(uVar17);
          uVar17 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar22,uVar23,uVar18);
        }
        else {
          unaff_x21 = uVar25;
          if (uVar25 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar18 = func_0x00f78aec();
            uVar17 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = piVar15;
          if (auVar38._8_4_ < 0) goto code_r0x029388b0;
          iVar26 = (int)uVar17;
          if (iVar26 < 0) {
            uVar17 = func_0x00f78a24(0x3d70548);
            uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar17,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar22 = func_0x00f78aec();
            uVar17 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar11 = (int)uVar14;
          if (iVar11 < 0) {
            uVar17 = func_0x00f78a24(0x3d70548);
            uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar17,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar22 = func_0x00f78aec();
            uVar17 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar21 = func_0x00f836d8(lVar27,piVar15,uVar25);
          if (((uVar21 & 1) != 0) ||
             ((iVar12 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar27), auVar38._8_4_ <= iVar12 - iVar11 &&
              (uVar21 = /*System.Buffer$$ByteLength*/ func_0x0294274c(uVar25), iVar26 <= (int)uVar21 - iVar11)))) {
            return uVar21;
          }
          uVar18 = func_0x00f78a24(0x3d70ad8);
          uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar18,0);
          func_0x00f78a24(0x3d1fce8);
          uVar22 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar22,uVar18,0);
        }
        uVar23 = func_0x00f78a24(0x3d52be0);
        uVar13 = func_0x00f78ac0(uVar22,uVar23);
        *(long *)(puVar6 + -0x70) = auVar38._8_8_;
        *(ulong *)(puVar6 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar6 + -0x60) = uVar22;
        *(undefined8 *)(puVar6 + -0x58) = uVar18;
        *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar6 + -0x80) = unaff_x24;
        *(long *)(puVar6 + -0x78) = auVar38._0_8_;
        *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
        *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
        *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
        *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
        *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x50);
        *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)(puVar6 + -0x48);
        puVar5 = puVar6 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar13 >> 5;
        unaff_x23 = (ulong)(uVar13 & 0x1f);
        if ((uVar13 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar20 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar25 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = (int *)func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        piVar15 = (int *)0x3d20078;
        if (unaff_x20 != (long *)0x0) {
          uVar25 = *(ulong *)(*unaff_x20 + 0x1a0);
          (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
          piVar15 = unaff_x22;
          if (lVar20 != 0) {
            uVar25 = *(ulong *)(lVar20 + 0x18);
            auVar38._8_8_ = 0;
            auVar38._0_8_ = unaff_x22;
            uVar17 = 0;
            puVar32 = &UNK_02938710;
            puVar6 = puVar6 + -0x80;
            uVar14 = unaff_x21;
            goto code_r0x029387b8;
          }
        }
        unaff_x22 = piVar15;
        func_0x00f78af4();
        uVar18 = func_0x00f78b24();
        puVar32 = &System_Buffer__BlockCopy;
        auVar38 = func_0x00f78ac0(uVar18,0);
        puVar6 = puVar6 + -0x80;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)(puVar3 + -0xd4) = (int)uVar14;
  uVar18 = func_0x00f78a24(0x3d22910);
  lVar27 = func_0x00f78ae0(uVar18,puVar3 + -0xd4);
  func_0x00055e5c(uVar25);
  *(int *)(puVar3 + -0xd8) = (int)*(undefined8 *)(uVar25 + 0x18);
  uVar18 = func_0x00f78a24(0x3d22910);
  uVar18 = func_0x00f78ae0(uVar18,puVar3 + -0xd8);
  uVar22 = func_0x00f78a24(0x3d72a68);
  uVar18 = /*System.String$$Format*/ func_0x029bcac4(uVar22,lVar27,uVar18,0);
  func_0x00f78a24(0x3d1fce8);
  uVar14 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar18,0);
  uVar18 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar14,uVar18);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar18 = func_0x00f78aec();
  uVar22 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar18,uVar22,0);
  uVar22 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar18,uVar22);
  *(undefined8 *)(puVar3 + -0x140) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x138) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x130) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x128) = unaff_x25;
  *(ulong *)(puVar3 + -0x120) = unaff_x24;
  *(ulong *)(puVar3 + -0x118) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x110) = uVar17;
  *(long *)(puVar3 + -0x108) = lVar27;
  *(ulong *)(puVar3 + -0x100) = uVar14;
  *(undefined8 *)(puVar3 + -0xf8) = uVar18;
  *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xb0;
  *(undefined **)(puVar3 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar27 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar27,uRam0000000003d30160);
  uVar17 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
  if (lVar27 != 0) {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,1,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,4,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,8,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,1,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,1,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,2,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,2,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,4,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,4,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,8,uRam0000000003d30168);
    uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
    uVar14 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar27,uVar17,8,uRam0000000003d30168);
    **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar27;
    return uVar14;
  }
  lVar27 = func_0x00f78af4();
  return *(ulong *)(lVar27 + 0x10);
}



// ============================================================
// RVA: 0x1657e3c | Core.Networking.MigrationCar.get_TrackCoordsX
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x01658158) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_MigrationCar__get_TrackCoordsX
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *****pppppuVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar10;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uVar11;
  long lVar18;
  long lVar19;
  short sVar8;
  short sVar9;
  int iVar12;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  dword *pdVar24;
  undefined1 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar30;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 ****ppppuVar31;
  undefined1 ***pppuVar32;
  undefined *unaff_x30;
  undefined *puVar33;
  float extraout_s0;
  float extraout_s0_00;
  float fVar34;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auStack_1c0 [16];
  ulong auStack_1b0 [3];
  undefined4 uStack_198;
  int iStack_194;
  undefined1 *puStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  undefined *puStack_168;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 ****ppppuStack_e0;
  undefined *puStack_d8;
  undefined1 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_78;
  undefined1 ***pppuStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar15 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x12,0);
  if ((int)uVar15 == 0) {
    return uVar15;
  }
  lVar29 = *(long *)(param_1 + 2);
  if (lVar29 == 0) {
    piVar16 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Networking_MigrationCar__get_TrackCoordsY;
    puStack_30 = &stack0xfffffffffffffff0;
    uVar15 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar16,0x14,0);
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    lVar29 = *(long *)(piVar16 + 2);
    if (lVar29 == 0) {
      piVar16 = (int *)func_0x00f78af4();
      puStack_48 = &Core_Networking_MigrationCar__get_Halfway;
      lVar29 = 0;
      ppuStack_50 = &puStack_30;
      uVar15 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar16,0x16);
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      if (*(long *)(piVar16 + 2) != 0) {
        iVar10 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(piVar16 + 2),*piVar16 + (int)uVar15,0);
        return (ulong)(iVar10 != 0);
      }
      piVar17 = (int *)func_0x00f78af4();
      pppuStack_70 = &ppuStack_50;
      if (piVar17 != (int *)0x0) {
        uVar28 = 0;
        pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff70;
        puStack_68 = &Core_Networking_MigrationCar__StartMigrationCar;
        unaff_x20 = (long *)((long)&MACH_HEADER.cpusubtype + 2);
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar17);
        if (*(long *)(piVar17 + 10) != 0) {
          if (*(int *)(*(long *)(piVar17 + 10) + 0x18) < 10) {
            uVar28 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,10);
            *(undefined8 *)(piVar17 + 10) = uVar28;
          }
          piVar17[0xc] = 10;
          uVar15 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar17);
          piVar17[0xd] = (int)uVar15;
          return uVar15;
        }
        puStack_78 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar36 = func_0x00f78af4();
        piVar16 = piVar17;
        ppppuVar31 = &pppuStack_70;
        goto code_r0x016ce380;
      }
      puStack_68 = &Core_Networking_MigrationCar__StartMigrationCar;
      auVar36 = func_0x00f78af4();
      uVar15 = auVar36._0_8_;
      if (uVar15 != 0) {
        param_4 = 0;
        puStack_78 = &Core_Networking_MigrationCar__AddSyncId;
        if ((auVar36._8_4_ == 0) && (*(char *)(uVar15 + 0x48) == '\0')) {
          return uVar15;
        }
        uVar28 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,4,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar15,auVar36._8_8_);
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar15;
        pppppuVar3 = (undefined1 *****)&pppuStack_70;
        ppppuVar31 = &pppuStack_70;
        goto code_r0x016ce380;
      }
      pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff80;
      puVar33 = &Core_Networking_MigrationCar__AddPosition;
      auVar35 = func_0x00f78af4();
      if (auVar35._0_8_ == 0) {
        pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff70;
        puVar33 = &Core_Networking_MigrationCar__AddRotation;
        auVar35 = func_0x00f78af4();
        if (auVar35._0_8_ == 0) {
          auVar36 = func_0x00f78af4();
          uVar15 = auVar36._0_8_;
          if (uVar15 != 0) {
            param_4 = 0;
            puStack_a8 = &Core_Networking_MigrationCar__AddUsableType;
            if ((auVar36._8_4_ == 0) && (*(char *)(uVar15 + 0x48) == '\0')) {
              return uVar15;
            }
            uVar28 = 0;
            ppppuStack_b0 = (undefined1 ****)&stack0xffffffffffffff60;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,2,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar15,auVar36._8_8_);
            auVar36._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            auVar36._0_8_ = uVar15;
            pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff60;
            ppppuVar31 = ppppuStack_b0;
            puStack_78 = puStack_a8;
            goto code_r0x016ce380;
          }
          pppppuVar3 = &ppppuStack_b0;
          puStack_a8 = &Core_Networking_MigrationCar__AddUsableType;
          puVar33 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
          ppppuStack_b0 = (undefined1 ****)&stack0xffffffffffffff60;
          auVar35 = func_0x00f78af4();
          if (auVar35._0_8_ == 0) {
            pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff40;
            puVar33 = &Core_Networking_MigrationCar__AddBattleScore;
            auVar35 = func_0x00f78af4();
            if (auVar35._0_8_ == 0) {
              auVar36 = func_0x00f78af4();
              uVar15 = auVar36._0_8_;
              if (uVar15 != 0) {
                param_4 = 0;
                puStack_d8 = &Core_Networking_MigrationCar__AddLapsCompleted;
                if ((auVar36._8_4_ == 0) && (*(char *)(uVar15 + 0x48) == '\0')) {
                  return uVar15;
                }
                uVar28 = 0;
                ppppuStack_e0 = (undefined1 ****)&stack0xffffffffffffff30;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,1,0,0,0);
                /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar15,auVar36._8_8_);
                auVar36._8_8_ = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
                auVar36._0_8_ = uVar15;
                pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff30;
                ppppuVar31 = ppppuStack_e0;
                puStack_78 = puStack_d8;
                goto code_r0x016ce380;
              }
              pppppuVar3 = &ppppuStack_e0;
              puStack_d8 = &Core_Networking_MigrationCar__AddLapsCompleted;
              puVar33 = &Core_Networking_MigrationCar__AddTrackCoordsX;
              ppppuStack_e0 = (undefined1 ****)&stack0xffffffffffffff30;
              uVar15 = func_0x00f78af4();
              if (uVar15 == 0) {
                pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff10;
                puVar33 = &Core_Networking_MigrationCar__AddTrackCoordsY;
                uVar15 = func_0x00f78af4();
                uVar11 = (undefined4)param_4;
                if (uVar15 == 0) {
                  pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff00;
                  puVar25 = &stack0xffffffffffffff00;
                  puVar33 = &Core_Networking_MigrationCar__AddHalfway;
                  auVar35 = func_0x00f78af4();
                  if (auVar35._0_8_ != 0) {
                    puVar5 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
                    param_4 = 0;
                    goto code_r0x016ce420;
                  }
                  puStack_108 = &Core_Networking_MigrationCar__AddHalfway;
                  puStack_110 = &stack0xffffffffffffff00;
                  lVar18 = func_0x00f78af4();
                  puStack_118 = &Core_Networking_MigrationCar__EndMigrationCar;
                  lVar19 = 0x3eb5000;
                  puStack_120 = (undefined1 *)&puStack_110;
                  if ((bRam0000000003eb5813 & 1) == 0) {
                    puStack_120 = (undefined1 *)&puStack_110;
                    func_0x00f78a20(0x3d3f1b8);
                    bRam0000000003eb5813 = 1;
                  }
                  if (lVar18 == 0) {
                    auVar36 = func_0x00f78af4();
                    lVar18 = auVar36._8_8_;
                    puVar4 = &uStack_180;
                    if (lVar18 == 0) {
                      puVar33 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                      auStack_1c0 = func_0x00f78af4();
                      _uStack_198 = 0;
                      puVar4 = (ulong *)extraout_x8_00;
                    }
                    else {
                      unaff_x22 = CONCAT44(0,auVar36._0_4_ + 4);
                      auStack_1c0._8_8_ = lVar18;
                      auStack_1c0._0_8_ = unaff_x22;
                      uVar11 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar18,auVar36._0_8_,0);
                      puVar33 = &UNK_01658158;
                      _uStack_198 = extraout_x8;
                      lVar19 = lVar29;
                    }
                    auStack_1b0[0] = unaff_x22;
                    auStack_1b0[1] = lVar18;
                    auStack_1b0[2] = lVar19;
                    puStack_190 = &stack0xfffffffffffffec0;
                    puStack_188 = puVar33;
                    if (auStack_1c0._8_8_ != 0) {
                      uVar6 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_1c0._8_8_,auStack_1c0._0_8_,0);
                      uVar15 = Core_Networking_CarBase__get_LastHitTime(auStack_1c0);
                      if (lVar29 != 0) {
                        uVar28 = *(undefined8 *)(lVar29 + 0x1b0);
                        uVar2 = *(undefined4 *)(lVar29 + 0x1a0);
                        *(undefined4 *)puVar4 = uVar11;
                        *(undefined1 *)((long)puVar4 + 4) = 0;
                        *(undefined1 *)((long)puVar4 + 5) = uVar6;
                        *(undefined2 *)((long)puVar4 + 6) = 0;
                        *(int *)((long)puVar4 + 8) = (int)uVar15;
                        *(undefined1 *)((long)puVar4 + 0xc) = 1;
                        *(undefined2 *)((long)puVar4 + 0xd) = 0;
                        *(undefined1 *)((long)puVar4 + 0xf) = 0;
                        *(undefined4 *)((long)puVar4 + 0x10) = uVar2;
                        *(undefined4 *)((long)puVar4 + 0x14) = 0;
                        *(undefined8 *)((long)puVar4 + 0x18) = uVar28;
                        return uVar15;
                      }
                    }
                    auVar38 = func_0x00f78af4();
                    uVar15 = auVar38._0_8_;
                    uVar28 = *(undefined8 *)(uVar15 + 0x1b0);
                    uVar11 = *(undefined4 *)(uVar15 + 0x1a0);
                    *extraout_x8_01 = 0;
                    extraout_x8_01[1] = 0;
                    *(int *)extraout_x8_01 = auVar38._8_4_;
                    *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                    *(undefined4 *)(extraout_x8_01 + 1) = uVar11;
                    extraout_x8_01[2] = uVar28;
                    return uVar15;
                  }
                  uVar15 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar18 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,0);
                    uVar15 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
                    unaff_x21 = (ulong)*(uint *)(lVar18 + 0x30);
                    uVar14 = *(uint *)(lVar18 + 0x30) - 1;
                    if (-2 < (int)uVar14) {
                      uVar14 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar14;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar10 = (int)uVar15;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar29 = *(long *)(lVar18 + 0x28);
                      if (lVar29 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar29 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar29 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar26 = unaff_x22 - 8;
                      if (*(uint *)(lVar29 + 0x18) <= uVar26) goto code_r0x016ced88;
                      iVar12 = *(int *)(lVar29 + unaff_x22 * 4);
                      sVar7 = 0;
                      if (iVar12 != 0) {
                        sVar7 = (short)uVar15 - (short)iVar12;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)sVar7);
                      lVar29 = *(long *)(lVar18 + 0x28);
                      if (lVar29 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar29 + 0x18) <= uVar26) goto code_r0x016ced88;
                      *(undefined4 *)(lVar29 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar14 = uVar1;
                    } while (0 < (long)uVar26);
code_r0x016ceb30:
                    uVar11 = *(undefined4 *)(lVar18 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)((short)uVar15 - (short)uVar11));
                    uVar14 = uVar14 * 2 + 6;
                    unaff_x21 = (ulong)uVar14;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar18,(int)(short)uVar14);
                    unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
                    if (0 < (int)*(uint *)(lVar18 + 0x40)) {
                      uVar26 = 0;
                      do {
                        lVar29 = *(long *)(lVar18 + 0x18);
                        if (((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) ||
                           (lVar19 = *(long *)(lVar18 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar29 + 0x10) + 0x18) -
                                *(int *)(lVar19 + uVar26 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar14 = *(uint *)(lVar18 + 0x10);
                        unaff_x22 = (ulong)uVar14;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar29,unaff_x21,2);
                        if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),unaff_x22,2);
                        if (sVar7 == sVar8) {
                          if (sVar7 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar18 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar26) goto code_r0x016ced88;
                            iVar12 = *(int *)(unaff_x21 + uVar26 * 4 + 0x20);
                            if (iVar12 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar18 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar13 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar10;
                            *(int *)(lVar18 + 0x10) = iVar13;
                            iVar12 = iVar12 - iVar10;
                            goto code_r0x016ced3c;
                          }
                          iVar12 = 2;
                          while( true ) {
                            if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar1 + iVar12,2);
                            if (*(long *)(lVar18 + 0x18) == 0) goto code_r0x016ced84;
                            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x18),uVar14 + iVar12,2);
                            if (sVar8 != sVar9) break;
                            iVar12 = iVar12 + 2;
                            if (sVar7 <= iVar12) goto code_r0x016cec64;
                          }
                        }
                        uVar26 = uVar26 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar18 + 0x40);
                      } while ((long)uVar26 < (long)unaff_x22);
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
                        lVar29 = *(long *)(lVar18 + 0x38);
                        if (lVar29 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar29,unaff_x21,*(undefined4 *)(lVar29 + 0x18),0);
                        *(ulong *)(lVar18 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar18 + 0x40);
                      }
                      uVar14 = (uint)unaff_x22;
                      *(uint *)(lVar18 + 0x40) = uVar14 + 1;
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar11;
                        unaff_x21 = *(ulong *)(lVar18 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar13 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar18);
                          iVar13 = iVar13 - iVar10;
                          iVar12 = iVar12 - iVar10;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar13,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar13,4,(long)iVar12);
                          *(undefined4 *)(lVar18 + 0x30) = 0xffffffff;
                          return uVar15;
                        }
                        goto code_r0x016ced84;
                      }
                    }
code_r0x016ced88:
                    uVar28 = func_0x00f78b24();
                    func_0x00f78ac0(uVar28,0);
                  }
                  func_0x00f78a24(0x3d22a38);
                  uVar28 = func_0x00f78aec();
                  uVar21 = func_0x00f78a24(0x3d6cea8);
                  iVar10 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar28,uVar21);
                  uVar21 = func_0x00f78a24(0x3d56a30);
                  auVar38 = func_0x00f78ac0(uVar28,uVar21);
                  puStack_168 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppuVar32 = &ppuStack_170;
                  _uStack_198 = CONCAT44(iVar10,uStack_198);
                  lVar29 = *(long *)(auVar38._0_8_ + 0x18);
                  puStack_190 = (undefined1 *)unaff_x22;
                  puStack_188 = (undefined *)unaff_x21;
                  uStack_180 = uVar15;
                  uStack_178 = uVar28;
                  ppuStack_170 = &puStack_120;
                  if ((lVar29 != 0) && (*(long *)(lVar29 + 0x10) != 0)) {
                    iVar12 = *(int *)(*(long *)(lVar29 + 0x10) + 0x18) - auVar38._8_4_;
                    iVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar29,iVar12,4);
                    lVar29 = *(long *)(auVar38._0_8_ + 0x18);
                    if (lVar29 != 0) {
                      uVar15 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar29,(iVar12 - iVar13) + iVar10,2);
                      if ((uVar15 & 0xffff) != 0) {
                        return uVar15;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar28 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_194,0);
                  uVar21 = func_0x00f78a24(0x3d6ce88);
                  uVar22 = func_0x00f78a24(0x3d66338);
                  lVar29 = /*System.String$$Concat*/ func_0x029be39c(uVar21,uVar28,uVar22,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar15 = func_0x00f78aec();
                  uVar21 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,lVar29);
                  uVar28 = func_0x00f78a24(0x3d56a50);
                  puVar33 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar36 = func_0x00f78ac0(uVar15,uVar28);
                  puVar4 = auStack_1b0 + 2;
                  do {
                    uVar26 = auVar36._8_8_;
                    lVar19 = auVar36._0_8_;
                    *(ulong *)((long)puVar4 + -0x20) = uVar15;
                    *(long *)((long)puVar4 + -0x18) = lVar29;
                    *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar32;
                    *(undefined **)((long)puVar4 + -8) = puVar33;
                    pppuVar32 = (undefined1 ***)((long)puVar4 + -0x10);
                    if ((int)uVar21 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
                      uVar15 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar26);
code_r0x016cef70:
                      if (*(long *)(lVar19 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar19 + 0x10);
                        return uVar15;
                      }
                    }
                    else if (lVar19 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar26);
                      if ((*(long *)(lVar19 + 0x18) != 0) &&
                         (lVar29 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar29 != 0)) {
                        uVar26 = (ulong)(uint)(*(int *)(lVar29 + 0x18) - *(int *)(lVar19 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                        uVar15 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar26);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar33 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar36 = func_0x00f78af4();
                    uVar21 = 0;
                    puVar4 = (ulong *)((long)puVar4 + -0x20);
                    lVar29 = lVar19;
                    uVar15 = uVar26;
                  } while( true );
                }
                pdVar24 = &MACH_HEADER.cpusubtype;
                fVar34 = extraout_s0_00;
              }
              else {
                pdVar24 = (dword *)((long)&MACH_HEADER.cputype + 3);
                fVar34 = extraout_s0;
              }
              auVar36._8_8_ = pdVar24;
              auVar36._0_8_ = uVar15;
              *(undefined8 *)((long)pppppuVar3 + -0x30) = unaff_d9;
              *(undefined8 *)((long)pppppuVar3 + -0x28) = unaff_d8;
              *(long **)((long)pppppuVar3 + -0x20) = unaff_x20;
              *(int **)((long)pppppuVar3 + -0x18) = piVar16;
              *(undefined1 ******)((long)pppppuVar3 + -0x10) = pppppuVar3;
              *(undefined **)((long)pppppuVar3 + -8) = puVar33;
              if (fVar34 == 0.0 && *(char *)(uVar15 + 0x48) == '\0') {
                return uVar15;
              }
              uVar28 = 0;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,4);
              /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar34,uVar15);
              ppppuVar31 = *(undefined1 *****)((long)pppppuVar3 + -0x10);
              puStack_78 = *(undefined **)((long)pppppuVar3 + -8);
              unaff_x20 = *(long **)((long)pppppuVar3 + -0x20);
              piVar16 = *(int **)((long)pppppuVar3 + -0x18);
              goto code_r0x016ce380;
            }
            pdVar24 = (dword *)((long)&MACH_HEADER.cputype + 1);
          }
          else {
            pdVar24 = &MACH_HEADER.cputype;
          }
          uVar15 = auVar35._0_8_;
          auVar36._8_8_ = pdVar24;
          auVar36._0_8_ = uVar15;
          param_4 = 0;
          *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
          *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
          *(long **)((long)pppppuVar3 + -0x20) = unaff_x20;
          *(int **)((long)pppppuVar3 + -0x18) = piVar16;
          *(undefined1 ******)((long)pppppuVar3 + -0x10) = pppppuVar3;
          *(undefined **)((long)pppppuVar3 + -8) = puVar33;
          if ((auVar35._8_4_ == 0) && (*(char *)(uVar15 + 0x48) == '\0')) {
            return uVar15;
          }
          uVar28 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,1,0,0,0);
          /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar15,auVar35._8_8_);
          ppppuVar31 = *(undefined1 *****)((long)pppppuVar3 + -0x10);
          puStack_78 = *(undefined **)((long)pppppuVar3 + -8);
          unaff_x20 = *(long **)((long)pppppuVar3 + -0x20);
          piVar16 = *(int **)((long)pppppuVar3 + -0x18);
          unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
          unaff_x21 = *(ulong *)((long)pppppuVar3 + -0x28);
          goto code_r0x016ce380;
        }
        puVar25 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      }
      else {
        puVar25 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      uVar28 = auVar35._8_8_;
      uVar15 = auVar35._0_8_;
      auVar36._8_8_ = puVar25;
      auVar36._0_8_ = uVar15;
      param_4 = 0;
      if (auVar35._8_4_ == 0) {
        return uVar15;
      }
      *(long **)((long)pppppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)pppppuVar3 + -0x18) = piVar16;
      *(undefined1 ******)((long)pppppuVar3 + -0x10) = pppppuVar3;
      *(undefined **)((long)pppppuVar3 + -8) = puVar33;
      /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(uVar15,uVar28,uVar28,0,0);
      puStack_78 = *(undefined **)((long)pppppuVar3 + -8);
      unaff_x20 = *(long **)((long)pppppuVar3 + -0x20);
      piVar16 = *(int **)((long)pppppuVar3 + -0x18);
      ppppuVar31 = *(undefined1 *****)((long)pppppuVar3 + -0x10);
code_r0x016ce380:
      do {
        piVar17 = auVar36._8_8_;
        *(long **)((long)pppppuVar3 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar3 + -0x18) = piVar16;
        *(undefined1 *****)((long)pppppuVar3 + -0x10) = ppppuVar31;
        *(undefined **)((long)pppppuVar3 + -8) = puStack_78;
        puVar25 = (undefined1 *)((long)pppppuVar3 + -0x10);
        uVar14 = auVar36._8_4_;
        if ((int)uVar14 < *(int *)(auVar36._0_8_ + 0x30)) {
          unaff_x20 = *(long **)(auVar36._0_8_ + 0x28);
          uVar15 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (long *)0x0) goto code_r0x016ce410;
          if (uVar14 < *(uint *)(unaff_x20 + 3)) {
            *(int *)((long)unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar15;
            return uVar15;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar17 = (int *)func_0x00f78aec();
          uVar21 = func_0x00f78a24(0x3d6ceb8);
          uVar28 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar17,uVar21);
          uVar21 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar17,uVar21);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar21 = func_0x00f78b24();
        puVar33 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar36 = func_0x00f78ac0(uVar21,0);
        puVar5 = auVar36._8_8_;
        auVar35._8_8_ = uVar28;
        auVar35._0_8_ = auVar36._0_8_;
        pppppuVar3 = (undefined1 *****)((long)pppppuVar3 + -0x20);
        piVar16 = piVar17;
code_r0x016ce420:
        uVar15 = auVar35._0_8_;
        auVar36._8_8_ = puVar5;
        auVar36._0_8_ = uVar15;
        *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
        *(long **)((long)pppppuVar3 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar3 + -0x18) = piVar16;
        *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar25;
        *(undefined **)((long)pppppuVar3 + -8) = puVar33;
        if ((auVar35._8_4_ == (int)param_4) && (*(char *)(uVar15 + 0x48) == '\0')) {
          return uVar15;
        }
        uVar28 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar15,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar15,auVar35._8_8_);
        puStack_78 = *(undefined **)((long)pppppuVar3 + -8);
        unaff_x20 = *(long **)((long)pppppuVar3 + -0x20);
        piVar16 = *(int **)((long)pppppuVar3 + -0x18);
        unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppuVar3 + -0x28);
        ppppuVar31 = *(undefined1 *****)((long)pppppuVar3 + -0x10);
      } while( true );
    }
    iVar10 = *piVar16 + (int)uVar15;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puStack_30;
    unaff_x30 = puStack_28;
  }
  else {
    iVar10 = *param_1 + (int)uVar15;
    param_1 = unaff_x19;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar29,iVar10,4);
  uVar15 = *(ulong *)(lVar29 + 0x30);
  if (uVar15 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar15 + 0x18) != 0) {
    *(undefined4 *)(uVar15 + 0x20) = uVar11;
    uVar26 = *(ulong *)(lVar29 + 0x28);
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar15;
    uVar28 = 0;
    puVar33 = &UNK_016cce74;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x20);
    uVar15 = 4;
    lVar19 = lVar29;
    goto code_r0x029387b8;
  }
  uVar28 = func_0x00f78b24();
  lVar19 = func_0x00f78ac0(uVar28,0);
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar29;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar25;
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x30);
  uVar27 = 8;
  uVar28 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar15 = *(ulong *)(lVar19 + 0x40);
  if (uVar15 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar15 + 0x18) != 0) {
    *(undefined8 *)(uVar15 + 0x20) = uVar28;
    uVar26 = *(ulong *)(lVar19 + 0x38);
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar15;
    uVar28 = 0;
    puVar33 = &UNK_016cceec;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar15 = 8;
    goto code_r0x029387b8;
  }
  uVar28 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar28,0);
  lVar29 = auVar36._0_8_;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar19;
  *(undefined1 **)((long)register0x00000008 + -0x50) = puVar25;
  *(undefined **)((long)register0x00000008 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar28 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar27 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar22 = func_0x00f78aec();
    uVar21 = 0x3d6a458;
code_r0x016cd01c:
    uVar21 = func_0x00f78a24(uVar21);
    uVar23 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar22,uVar21);
  }
  else {
    if (*(long *)(uVar27 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar27 + 0x18) < auVar36._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar22 = func_0x00f78aec();
      uVar21 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar28 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar29,0,auVar36._8_8_);
      if (*(long *)(lVar29 + 0x10) != 0) {
        uVar26 = *(ulong *)(*(long *)(lVar29 + 0x10) + 0x10);
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar27;
        uVar28 = 0;
        puVar25 = *(undefined1 **)((long)register0x00000008 + -0x50);
        puVar33 = *(undefined **)((long)register0x00000008 + -0x48);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x60);
        lVar19 = *(long *)((long)register0x00000008 + -0x58);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0x70);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x68);
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x40);
        uVar15 = auVar36._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar22 = func_0x00f78aec();
    uVar21 = func_0x00f78a24(0x3d69698);
    uVar23 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar22,uVar21);
  }
  uVar21 = func_0x00f78a24(0x3d52cf8);
  auVar36 = func_0x00f78ac0(uVar22,uVar21);
  uVar20 = auVar36._8_8_;
  lVar19 = auVar36._0_8_;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar28;
  *(long *)((long)register0x00000008 + -0x98) = lVar29;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar27;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar22;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar28 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar36._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar20 = func_0x00f78aec();
    uVar21 = func_0x00f78a24(0x3d6a458);
    uVar15 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar20,uVar21);
code_r0x016cd1bc:
    uVar21 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar20,uVar21);
  }
  else {
    uVar28 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar20 = func_0x00f78aec();
      uVar21 = func_0x00f78a24(0x3d69698);
      uVar15 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar20,uVar21);
      goto code_r0x016cd1bc;
    }
    uVar15 = uVar20;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar19,0);
    if (*(long *)(lVar19 + 0x10) != 0) {
      puVar30 = *(undefined8 **)(*(long *)(lVar19 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar28 = func_0x00f76cf0(*puVar30);
      uVar21 = func_0x00faf4d8(puVar30,uVar28,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*(code *)PTR_DAT_03c8cea0)(uVar21,uVar23,(int)uVar28 * auVar36._8_4_);
      return uVar15;
    }
  }
  auVar36 = func_0x00f78af4();
  uVar26 = auVar36._8_8_;
  lVar29 = auVar36._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar28;
  *(long *)((long)register0x00000008 + -200) = lVar19;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar23;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar20;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar28 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar26 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar15 <= *(int *)(uVar26 + 0x18)) {
    uVar28 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar29,0,uVar15);
    if (*(long *)(lVar29 + 0x10) != 0) {
      auVar37._8_4_ = *(undefined4 *)(lVar29 + 0x18);
      auVar37._0_8_ = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 0x10);
      auVar37._12_4_ = 0;
      uVar28 = 0;
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar33 = *(undefined **)((long)register0x00000008 + -0xa8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
      lVar19 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -200);
code_r0x029387b8:
      do {
        uVar27 = auVar37._8_8_;
        lVar29 = auVar37._0_8_;
        *(ulong *)(puVar5 + -0x40) = unaff_x24;
        *(ulong *)(puVar5 + -0x38) = unaff_x23;
        *(ulong *)(puVar5 + -0x30) = unaff_x22;
        *(ulong *)(puVar5 + -0x28) = unaff_x21;
        *(long **)(puVar5 + -0x20) = unaff_x20;
        *(long *)(puVar5 + -0x18) = lVar19;
        *(undefined1 **)(puVar5 + -0x10) = puVar25;
        *(undefined **)(puVar5 + -8) = puVar33;
        if (lVar29 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar21 = func_0x00f78aec();
          uVar28 = 0x3d7b990;
code_r0x02938884:
          uVar28 = func_0x00f78a24(uVar28);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar21,uVar28,0);
          uVar28 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar21,uVar28);
code_r0x029388b0:
          uVar28 = func_0x00f78a24(0x3d70548);
          uVar21 = /*Locale$$GetText*/ func_0x02af42b4(uVar28,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar22 = func_0x00f78aec();
          uVar28 = 0x3d7b998;
code_r0x02938954:
          auVar37._8_8_ = unaff_x22;
          auVar37._0_8_ = unaff_x23;
          uVar23 = func_0x00f78a24(uVar28);
          uVar28 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar22,uVar23,uVar21);
        }
        else {
          unaff_x21 = uVar26;
          if (uVar26 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar21 = func_0x00f78aec();
            uVar28 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar27;
          if (auVar37._8_4_ < 0) goto code_r0x029388b0;
          iVar10 = (int)uVar28;
          if (iVar10 < 0) {
            uVar28 = func_0x00f78a24(0x3d70548);
            uVar21 = /*Locale$$GetText*/ func_0x02af42b4(uVar28,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar22 = func_0x00f78aec();
            uVar28 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar12 = (int)uVar15;
          if (iVar12 < 0) {
            uVar28 = func_0x00f78a24(0x3d70548);
            uVar21 = /*Locale$$GetText*/ func_0x02af42b4(uVar28,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar22 = func_0x00f78aec();
            uVar28 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar27 = func_0x00f836d8(lVar29,uVar27,uVar26);
          if (((uVar27 & 1) != 0) ||
             ((iVar13 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar29), auVar37._8_4_ <= iVar13 - iVar12 &&
              (uVar27 = /*System.Buffer$$ByteLength*/ func_0x0294274c(uVar26), iVar10 <= (int)uVar27 - iVar12)))) {
            return uVar27;
          }
          uVar21 = func_0x00f78a24(0x3d70ad8);
          uVar21 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
          func_0x00f78a24(0x3d1fce8);
          uVar22 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar22,uVar21,0);
        }
        uVar23 = func_0x00f78a24(0x3d52be0);
        uVar14 = func_0x00f78ac0(uVar22,uVar23);
        *(long *)(puVar5 + -0x70) = auVar37._8_8_;
        *(ulong *)(puVar5 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar5 + -0x60) = uVar22;
        *(undefined8 *)(puVar5 + -0x58) = uVar21;
        *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar5 + -0x80) = unaff_x24;
        *(long *)(puVar5 + -0x78) = auVar37._0_8_;
        *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
        *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
        *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x60);
        *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x58);
        *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x50);
        *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
        puVar25 = puVar5 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar14 >> 5;
        unaff_x23 = (ulong)(uVar14 & 0x1f);
        if ((uVar14 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar19 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar26 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar27 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar27;
          func_0x00f78af4();
          uVar21 = func_0x00f78b24();
          puVar33 = &System_Buffer__BlockCopy;
          auVar37 = func_0x00f78ac0(uVar21,0);
          puVar5 = puVar5 + -0x80;
          goto code_r0x029387b8;
        }
        uVar26 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar27 = unaff_x22;
        if (lVar19 == 0) goto code_r0x029387a8;
        uVar26 = *(ulong *)(lVar19 + 0x18);
        auVar37._8_8_ = 0;
        auVar37._0_8_ = unaff_x22;
        uVar28 = 0;
        puVar33 = &UNK_02938710;
        puVar5 = puVar5 + -0x80;
        uVar15 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)register0x00000008 + -0xd4) = (int)uVar15;
  uVar21 = func_0x00f78a24(0x3d22910);
  lVar29 = func_0x00f78ae0(uVar21,(undefined1 *)((long)register0x00000008 + -0xd4));
  func_0x00055e5c(uVar26);
  *(int *)((long)register0x00000008 + -0xd8) = (int)*(undefined8 *)(uVar26 + 0x18);
  uVar21 = func_0x00f78a24(0x3d22910);
  uVar21 = func_0x00f78ae0(uVar21,(undefined1 *)((long)register0x00000008 + -0xd8));
  uVar22 = func_0x00f78a24(0x3d72a68);
  uVar21 = /*System.String$$Format*/ func_0x029bcac4(uVar22,lVar29,uVar21,0);
  func_0x00f78a24(0x3d1fce8);
  uVar15 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar15,uVar21,0);
  uVar21 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar15,uVar21);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar21 = func_0x00f78aec();
  uVar22 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar21,uVar22,0);
  uVar22 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar21,uVar22);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar28;
  *(long *)((long)register0x00000008 + -0x108) = lVar29;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar21;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar29 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar29,uRam0000000003d30160);
  uVar28 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
  if (lVar29 == 0) {
    lVar29 = func_0x00f78af4();
    return *(ulong *)(lVar29 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,1,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,4,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,8,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,1,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,1,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,2,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,2,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,4,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,4,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,8,uRam0000000003d30168);
  uVar28 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  uVar15 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar29,uVar28,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar29;
  return uVar15;
}



// ============================================================
// RVA: 0x1657e94 | Core.Networking.MigrationCar.get_TrackCoordsY
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1657eec | Core.Networking.MigrationCar.get_Halfway
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_MigrationCar__get_Halfway
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 ***pppuVar3;
  ulong *puVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  dword *pdVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long unaff_x20;
  long lVar24;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar25;
  undefined1 **ppuVar26;
  undefined *puVar27;
  float extraout_s0;
  float extraout_s0_00;
  float fVar28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined1 auStack_180 [16];
  ulong auStack_170 [3];
  undefined4 uStack_158;
  int iStack_154;
  undefined1 *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  lVar22 = 0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x16);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar9 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar13,0);
    return (ulong)(iVar9 != 0);
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar14 != (int *)0x0) {
    uVar23 = 0;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffb0;
    puStack_28 = &Core_Networking_MigrationCar__StartMigrationCar;
    unaff_x20 = 10;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
    if (*(long *)(piVar14 + 10) != 0) {
      if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 10) {
        uVar23 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,10);
        *(undefined8 *)(piVar14 + 10) = uVar23;
      }
      piVar14[0xc] = 10;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
      piVar14[0xd] = (int)uVar13;
      return uVar13;
    }
    puStack_38 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar30 = func_0x00f78af4();
    param_1 = piVar14;
    ppuVar26 = &puStack_30;
    goto code_r0x016ce380;
  }
  puStack_28 = &Core_Networking_MigrationCar__StartMigrationCar;
  auVar30 = func_0x00f78af4();
  uVar13 = auVar30._0_8_;
  if (uVar13 != 0) {
    param_4 = 0;
    puStack_38 = &Core_Networking_MigrationCar__AddSyncId;
    if ((auVar30._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar23 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar13,auVar30._8_8_);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar13;
    pppuVar3 = (undefined1 ***)&puStack_30;
    ppuVar26 = &puStack_30;
    goto code_r0x016ce380;
  }
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffffc0;
  puVar27 = &Core_Networking_MigrationCar__AddPosition;
  auVar29 = func_0x00f78af4();
  if (auVar29._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffb0;
    puVar27 = &Core_Networking_MigrationCar__AddRotation;
    auVar29 = func_0x00f78af4();
    if (auVar29._0_8_ == 0) {
      auVar30 = func_0x00f78af4();
      uVar13 = auVar30._0_8_;
      if (uVar13 != 0) {
        param_4 = 0;
        puStack_68 = &Core_Networking_MigrationCar__AddUsableType;
        if ((auVar30._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar23 = 0;
        ppuStack_70 = (undefined1 **)&stack0xffffffffffffffa0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar30._8_8_);
        auVar30._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
        auVar30._0_8_ = uVar13;
        pppuVar3 = (undefined1 ***)&stack0xffffffffffffffa0;
        ppuVar26 = ppuStack_70;
        puStack_38 = puStack_68;
        goto code_r0x016ce380;
      }
      pppuVar3 = &ppuStack_70;
      puStack_68 = &Core_Networking_MigrationCar__AddUsableType;
      puVar27 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
      ppuStack_70 = (undefined1 **)&stack0xffffffffffffffa0;
      auVar29 = func_0x00f78af4();
      if (auVar29._0_8_ == 0) {
        pppuVar3 = (undefined1 ***)&stack0xffffffffffffff80;
        puVar27 = &Core_Networking_MigrationCar__AddBattleScore;
        auVar29 = func_0x00f78af4();
        if (auVar29._0_8_ == 0) {
          auVar30 = func_0x00f78af4();
          uVar13 = auVar30._0_8_;
          if (uVar13 != 0) {
            param_4 = 0;
            puStack_98 = &Core_Networking_MigrationCar__AddLapsCompleted;
            if ((auVar30._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
              return uVar13;
            }
            uVar23 = 0;
            ppuStack_a0 = (undefined1 **)&stack0xffffffffffffff70;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar13,auVar30._8_8_);
            auVar30._8_8_ = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
            auVar30._0_8_ = uVar13;
            pppuVar3 = (undefined1 ***)&stack0xffffffffffffff70;
            ppuVar26 = ppuStack_a0;
            puStack_38 = puStack_98;
            goto code_r0x016ce380;
          }
          pppuVar3 = &ppuStack_a0;
          puStack_98 = &Core_Networking_MigrationCar__AddLapsCompleted;
          puVar27 = &Core_Networking_MigrationCar__AddTrackCoordsX;
          ppuStack_a0 = (undefined1 **)&stack0xffffffffffffff70;
          uVar13 = func_0x00f78af4();
          if (uVar13 == 0) {
            pppuVar3 = (undefined1 ***)&stack0xffffffffffffff50;
            puVar27 = &Core_Networking_MigrationCar__AddTrackCoordsY;
            uVar13 = func_0x00f78af4();
            uVar10 = (undefined4)param_4;
            if (uVar13 == 0) {
              pppuVar3 = (undefined1 ***)&stack0xffffffffffffff40;
              puVar21 = &stack0xffffffffffffff40;
              puVar27 = &Core_Networking_MigrationCar__AddHalfway;
              auVar29 = func_0x00f78af4();
              if (auVar29._0_8_ != 0) {
                puVar19 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1);
                param_4 = 0;
                goto code_r0x016ce420;
              }
              puStack_c8 = &Core_Networking_MigrationCar__AddHalfway;
              puStack_d0 = &stack0xffffffffffffff40;
              lVar15 = func_0x00f78af4();
              puStack_d8 = &Core_Networking_MigrationCar__EndMigrationCar;
              lVar24 = 0x3eb5000;
              puStack_e0 = (undefined1 *)&puStack_d0;
              if ((bRam0000000003eb5813 & 1) == 0) {
                puStack_e0 = (undefined1 *)&puStack_d0;
                func_0x00f78a20(0x3d3f1b8);
                bRam0000000003eb5813 = 1;
              }
              if (lVar15 == 0) {
                auVar30 = func_0x00f78af4();
                lVar15 = auVar30._8_8_;
                puVar4 = &uStack_140;
                if (lVar15 == 0) {
                  puVar27 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                  auStack_180 = func_0x00f78af4();
                  _uStack_158 = 0;
                  puVar4 = (ulong *)extraout_x8_00;
                }
                else {
                  unaff_x22 = CONCAT44(0,auVar30._0_4_ + 4);
                  auStack_180._8_8_ = lVar15;
                  auStack_180._0_8_ = unaff_x22;
                  uVar10 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar15,auVar30._0_8_,0);
                  puVar27 = &UNK_01658158;
                  _uStack_158 = extraout_x8;
                  lVar24 = lVar22;
                }
                auStack_170[0] = unaff_x22;
                auStack_170[1] = lVar15;
                auStack_170[2] = lVar24;
                puStack_150 = &stack0xffffffffffffff00;
                puStack_148 = puVar27;
                if (auStack_180._8_8_ != 0) {
                  uVar5 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_180._8_8_,auStack_180._0_8_,0);
                  uVar13 = Core_Networking_CarBase__get_LastHitTime(auStack_180);
                  if (lVar22 != 0) {
                    uVar23 = *(undefined8 *)(lVar22 + 0x1b0);
                    uVar1 = *(undefined4 *)(lVar22 + 0x1a0);
                    *(undefined4 *)puVar4 = uVar10;
                    *(undefined1 *)((long)puVar4 + 4) = 0;
                    *(undefined1 *)((long)puVar4 + 5) = uVar5;
                    *(undefined2 *)((long)puVar4 + 6) = 0;
                    *(int *)((long)puVar4 + 8) = (int)uVar13;
                    *(undefined1 *)((long)puVar4 + 0xc) = 1;
                    *(undefined2 *)((long)puVar4 + 0xd) = 0;
                    *(undefined1 *)((long)puVar4 + 0xf) = 0;
                    *(undefined4 *)((long)puVar4 + 0x10) = uVar1;
                    *(undefined4 *)((long)puVar4 + 0x14) = 0;
                    *(undefined8 *)((long)puVar4 + 0x18) = uVar23;
                    return uVar13;
                  }
                }
                auVar31 = func_0x00f78af4();
                uVar13 = auVar31._0_8_;
                uVar23 = *(undefined8 *)(uVar13 + 0x1b0);
                uVar10 = *(undefined4 *)(uVar13 + 0x1a0);
                *extraout_x8_01 = 0;
                extraout_x8_01[1] = 0;
                *(int *)extraout_x8_01 = auVar31._8_4_;
                *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                *(undefined4 *)(extraout_x8_01 + 1) = uVar10;
                extraout_x8_01[2] = uVar23;
                return uVar13;
              }
              uVar13 = 0x3eb5000;
              if ((bRam0000000003eb5cd8 & 1) == 0) {
                func_0x00f78a20(0x3d1f100,0);
                bRam0000000003eb5cd8 = 1;
              }
              if (-1 < *(int *)(lVar15 + 0x30)) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
                /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
                unaff_x21 = (ulong)*(uint *)(lVar15 + 0x30);
                uVar18 = *(uint *)(lVar15 + 0x30) - 1;
                if (-2 < (int)uVar18) {
                  uVar18 = 0xffffffff;
                }
                unaff_x22 = (ulong)uVar18;
                do {
                  uVar2 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar2;
                  iVar9 = (int)uVar13;
                  if ((int)uVar2 < 0) goto code_r0x016ceb30;
                  lVar22 = *(long *)(lVar15 + 0x28);
                  if (lVar22 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar22 + 0x18) <= uVar2) goto code_r0x016ced88;
                } while (*(int *)(lVar22 + (ulong)uVar2 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar25 = unaff_x22 - 8;
                  if (*(uint *)(lVar22 + 0x18) <= uVar25) goto code_r0x016ced88;
                  iVar11 = *(int *)(lVar22 + unaff_x22 * 4);
                  sVar6 = 0;
                  if (iVar11 != 0) {
                    sVar6 = (short)uVar13 - (short)iVar11;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar6);
                  lVar22 = *(long *)(lVar15 + 0x28);
                  if (lVar22 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar22 + 0x18) <= uVar25) goto code_r0x016ced88;
                  *(undefined4 *)(lVar22 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar18 = uVar2;
                } while (0 < (long)uVar25);
code_r0x016ceb30:
                uVar10 = *(undefined4 *)(lVar15 + 0x34);
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar13 - (short)uVar10));
                uVar18 = uVar18 * 2 + 6;
                unaff_x21 = (ulong)uVar18;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)uVar18);
                unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
                if (0 < (int)*(uint *)(lVar15 + 0x40)) {
                  uVar25 = 0;
                  do {
                    lVar22 = *(long *)(lVar15 + 0x18);
                    if (((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) ||
                       (lVar24 = *(long *)(lVar15 + 0x38), lVar24 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar24 + 0x18) <= uVar25) goto code_r0x016ced88;
                    uVar2 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) -
                            *(int *)(lVar24 + uVar25 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar2;
                    uVar18 = *(uint *)(lVar15 + 0x10);
                    unaff_x22 = (ulong)uVar18;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,unaff_x21,2);
                    if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),unaff_x22,2);
                    if (sVar6 == sVar7) {
                      if (sVar6 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar15 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar25) goto code_r0x016ced88;
                        iVar11 = *(int *)(unaff_x21 + uVar25 * 4 + 0x20);
                        if (iVar11 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar15 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar9;
                        *(int *)(lVar15 + 0x10) = iVar12;
                        iVar11 = iVar11 - iVar9;
                        goto code_r0x016ced3c;
                      }
                      iVar11 = 2;
                      while( true ) {
                        if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar2 + iVar11,2);
                        if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar18 + iVar11,2);
                        if (sVar7 != sVar8) break;
                        iVar11 = iVar11 + 2;
                        if (sVar6 <= iVar11) goto code_r0x016cec64;
                      }
                    }
                    uVar25 = uVar25 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar15 + 0x40);
                  } while ((long)uVar25 < (long)unaff_x22);
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
                    lVar22 = *(long *)(lVar15 + 0x38);
                    if (lVar22 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar22,unaff_x21,*(undefined4 *)(lVar22 + 0x18),0);
                    *(ulong *)(lVar15 + 0x38) = unaff_x21;
                    unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
                  }
                  uVar18 = (uint)unaff_x22;
                  *(uint *)(lVar15 + 0x40) = uVar18 + 1;
                  uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar10;
                    unaff_x21 = *(ulong *)(lVar15 + 0x18);
                    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                      iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                      iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
                      iVar12 = iVar12 - iVar9;
                      iVar11 = iVar11 - iVar9;
code_r0x016ced3c:
                      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                      /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                      *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
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
              auVar31 = func_0x00f78ac0(uVar23,uVar16);
              puStack_128 = &FlatBuffers_FlatBufferBuilder__Required;
              pppuVar3 = &ppuStack_130;
              _uStack_158 = CONCAT44(iVar9,uStack_158);
              lVar22 = *(long *)(auVar31._0_8_ + 0x18);
              puStack_150 = (undefined1 *)unaff_x22;
              puStack_148 = (undefined *)unaff_x21;
              uStack_140 = uVar13;
              uStack_138 = uVar23;
              ppuStack_130 = &puStack_e0;
              if ((lVar22 != 0) && (*(long *)(lVar22 + 0x10) != 0)) {
                iVar11 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) - auVar31._8_4_;
                iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,iVar11,4);
                lVar22 = *(long *)(auVar31._0_8_ + 0x18);
                if (lVar22 != 0) {
                  uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,(iVar11 - iVar12) + iVar9,2);
                  if ((uVar13 & 0xffff) != 0) {
                    return uVar13;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar23 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_154,0);
              uVar16 = func_0x00f78a24(0x3d6ce88);
              uVar17 = func_0x00f78a24(0x3d66338);
              lVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar23,uVar17,0);
              func_0x00f78a24(0x3d22a38);
              uVar13 = func_0x00f78aec();
              uVar16 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar22);
              uVar23 = func_0x00f78a24(0x3d56a50);
              puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar30 = func_0x00f78ac0(uVar13,uVar23);
              puVar4 = auStack_170 + 2;
              do {
                uVar25 = auVar30._8_8_;
                lVar24 = auVar30._0_8_;
                *(ulong *)((long)puVar4 + -0x20) = uVar13;
                *(long *)((long)puVar4 + -0x18) = lVar22;
                *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar3;
                *(undefined **)((long)puVar4 + -8) = puVar27;
                pppuVar3 = (undefined1 ***)((long)puVar4 + -0x10);
                if ((int)uVar16 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar24,*(undefined4 *)(lVar24 + 0x20),4);
                  uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar24,uVar25);
code_r0x016cef70:
                  if (*(long *)(lVar24 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar24 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar24 + 0x10);
                    return uVar13;
                  }
                }
                else if (lVar24 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar24,*(undefined4 *)(lVar24 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar24,uVar25);
                  if ((*(long *)(lVar24 + 0x18) != 0) &&
                     (lVar22 = *(long *)(*(long *)(lVar24 + 0x18) + 0x10), lVar22 != 0)) {
                    uVar25 = (ulong)(uint)(*(int *)(lVar22 + 0x18) - *(int *)(lVar24 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar24,4,0);
                    uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar24,uVar25);
                    goto code_r0x016cef70;
                  }
                }
                puVar27 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar30 = func_0x00f78af4();
                uVar16 = 0;
                puVar4 = (ulong *)((long)puVar4 + -0x20);
                lVar22 = lVar24;
                uVar13 = uVar25;
              } while( true );
            }
            pdVar20 = &MACH_HEADER.cpusubtype;
            fVar28 = extraout_s0_00;
          }
          else {
            pdVar20 = (dword *)((long)&MACH_HEADER.cputype + 3);
            fVar28 = extraout_s0;
          }
          auVar30._8_8_ = pdVar20;
          auVar30._0_8_ = uVar13;
          *(undefined8 *)((long)pppuVar3 + -0x30) = unaff_d9;
          *(undefined8 *)((long)pppuVar3 + -0x28) = unaff_d8;
          *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
          *(int **)((long)pppuVar3 + -0x18) = param_1;
          *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
          *(undefined **)((long)pppuVar3 + -8) = puVar27;
          if (fVar28 == 0.0 && *(char *)(uVar13 + 0x48) == '\0') {
            return uVar13;
          }
          uVar23 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar28,uVar13);
          ppuVar26 = *(undefined1 ***)((long)pppuVar3 + -0x10);
          puStack_38 = *(undefined **)((long)pppuVar3 + -8);
          unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
          param_1 = *(int **)((long)pppuVar3 + -0x18);
          goto code_r0x016ce380;
        }
        pdVar20 = (dword *)((long)&MACH_HEADER.cputype + 1);
      }
      else {
        pdVar20 = &MACH_HEADER.cputype;
      }
      uVar13 = auVar29._0_8_;
      auVar30._8_8_ = pdVar20;
      auVar30._0_8_ = uVar13;
      param_4 = 0;
      *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar3 + -0x18) = param_1;
      *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
      *(undefined **)((long)pppuVar3 + -8) = puVar27;
      if ((auVar29._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar23 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar13,auVar29._8_8_);
      ppuVar26 = *(undefined1 ***)((long)pppuVar3 + -0x10);
      puStack_38 = *(undefined **)((long)pppuVar3 + -8);
      unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
      param_1 = *(int **)((long)pppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
      goto code_r0x016ce380;
    }
    puVar21 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  else {
    puVar21 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  uVar23 = auVar29._8_8_;
  uVar13 = auVar29._0_8_;
  auVar30._8_8_ = puVar21;
  auVar30._0_8_ = uVar13;
  param_4 = 0;
  if (auVar29._8_4_ == 0) {
    return uVar13;
  }
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = param_1;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar27;
  /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(uVar13,uVar23,uVar23,0,0);
  puStack_38 = *(undefined **)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  param_1 = *(int **)((long)pppuVar3 + -0x18);
  ppuVar26 = *(undefined1 ***)((long)pppuVar3 + -0x10);
code_r0x016ce380:
  do {
    piVar14 = auVar30._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar26;
    *(undefined **)((long)pppuVar3 + -8) = puStack_38;
    puVar21 = (undefined1 *)((long)pppuVar3 + -0x10);
    uVar18 = auVar30._8_4_;
    if ((int)uVar18 < *(int *)(auVar30._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar30._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar14 = (int *)func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d6ceb8);
      uVar23 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar14,uVar16);
      uVar16 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar14,uVar16);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar16 = func_0x00f78b24();
    puVar27 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar30 = func_0x00f78ac0(uVar16,0);
    puVar19 = auVar30._8_8_;
    auVar29._8_8_ = uVar23;
    auVar29._0_8_ = auVar30._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    param_1 = piVar14;
code_r0x016ce420:
    uVar13 = auVar29._0_8_;
    auVar30._8_8_ = puVar19;
    auVar30._0_8_ = uVar13;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar21;
    *(undefined **)((long)pppuVar3 + -8) = puVar27;
    if ((auVar29._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar23 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar29._8_8_);
    puStack_38 = *(undefined **)((long)pppuVar3 + -8);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    param_1 = *(int **)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    ppuVar26 = *(undefined1 ***)((long)pppuVar3 + -0x10);
  } while( true );
}



// ============================================================
// RVA: 0x1657f40 | Core.Networking.MigrationCar.StartMigrationCar
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_MigrationCar__StartMigrationCar
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  ulong *puVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar19;
  long unaff_x19;
  int iVar20;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 ***pppuVar23;
  undefined *puVar24;
  float extraout_s0;
  float extraout_s0_00;
  float fVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auStack_160 [16];
  ulong auStack_150 [3];
  undefined4 uStack_138;
  int iStack_134;
  undefined1 *puStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    uVar18 = 0;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffffd0;
    unaff_x20 = 10;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 10) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,10);
        *(undefined8 *)(param_1 + 0x28) = uVar18;
      }
      *(undefined4 *)(param_1 + 0x30) = 10;
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar13;
      return uVar13;
    }
    auVar27 = func_0x00f78af4();
    unaff_x19 = param_1;
    puVar22 = &stack0xfffffffffffffff0;
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar27 = func_0x00f78af4();
  uVar13 = auVar27._0_8_;
  if (uVar13 != 0) {
    param_4 = 0;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar18 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar13,auVar27._8_8_);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar13;
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    puVar22 = &stack0xfffffffffffffff0;
    puVar24 = &Core_Networking_MigrationCar__AddSyncId;
    goto code_r0x016ce380;
  }
  ppuVar3 = (undefined1 **)&stack0xffffffffffffffe0;
  puVar24 = &Core_Networking_MigrationCar__AddPosition;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    ppuVar3 = (undefined1 **)&stack0xffffffffffffffd0;
    puVar24 = &Core_Networking_MigrationCar__AddRotation;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._0_8_;
      if (uVar13 != 0) {
        param_4 = 0;
        puStack_48 = &Core_Networking_MigrationCar__AddUsableType;
        if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar18 = 0;
        puStack_50 = &stack0xffffffffffffffc0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar27._8_8_);
        auVar27._8_8_ = 3;
        auVar27._0_8_ = uVar13;
        ppuVar3 = (undefined1 **)&stack0xffffffffffffffc0;
        puVar22 = puStack_50;
        puVar24 = puStack_48;
        goto code_r0x016ce380;
      }
      ppuVar3 = &puStack_50;
      puStack_48 = &Core_Networking_MigrationCar__AddUsableType;
      puVar24 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
      puStack_50 = &stack0xffffffffffffffc0;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        ppuVar3 = (undefined1 **)&stack0xffffffffffffffa0;
        puVar24 = &Core_Networking_MigrationCar__AddBattleScore;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          auVar27 = func_0x00f78af4();
          uVar13 = auVar27._0_8_;
          if (uVar13 != 0) {
            param_4 = 0;
            puStack_78 = &Core_Networking_MigrationCar__AddLapsCompleted;
            if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
              return uVar13;
            }
            uVar18 = 0;
            puStack_80 = &stack0xffffffffffffff90;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar13,auVar27._8_8_);
            auVar27._8_8_ = 6;
            auVar27._0_8_ = uVar13;
            ppuVar3 = (undefined1 **)&stack0xffffffffffffff90;
            puVar22 = puStack_80;
            puVar24 = puStack_78;
            goto code_r0x016ce380;
          }
          ppuVar3 = &puStack_80;
          puStack_78 = &Core_Networking_MigrationCar__AddLapsCompleted;
          puVar24 = &Core_Networking_MigrationCar__AddTrackCoordsX;
          puStack_80 = &stack0xffffffffffffff90;
          uVar13 = func_0x00f78af4();
          if (uVar13 == 0) {
            ppuVar3 = (undefined1 **)&stack0xffffffffffffff70;
            puVar24 = &Core_Networking_MigrationCar__AddTrackCoordsY;
            uVar13 = func_0x00f78af4();
            uVar9 = (undefined4)param_4;
            if (uVar13 == 0) {
              ppuVar3 = (undefined1 **)&stack0xffffffffffffff60;
              puVar22 = &stack0xffffffffffffff60;
              puVar24 = &Core_Networking_MigrationCar__AddHalfway;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ != 0) {
                uVar15 = 9;
                param_4 = 0;
                goto code_r0x016ce420;
              }
              puStack_a8 = &Core_Networking_MigrationCar__AddHalfway;
              puStack_b0 = &stack0xffffffffffffff60;
              lVar12 = func_0x00f78af4();
              puStack_b8 = &Core_Networking_MigrationCar__EndMigrationCar;
              lVar14 = 0x3eb5000;
              puStack_c0 = (undefined1 *)&puStack_b0;
              if ((bRam0000000003eb5813 & 1) == 0) {
                puStack_c0 = (undefined1 *)&puStack_b0;
                func_0x00f78a20(0x3d3f1b8);
                bRam0000000003eb5813 = 1;
              }
              if (lVar12 == 0) {
                auVar27 = func_0x00f78af4();
                lVar12 = auVar27._8_8_;
                puVar4 = &uStack_120;
                if (lVar12 == 0) {
                  puVar24 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                  auStack_160 = func_0x00f78af4();
                  _uStack_138 = 0;
                  puVar4 = (ulong *)extraout_x8_00;
                }
                else {
                  unaff_x22 = CONCAT44(0,auVar27._0_4_ + 4);
                  auStack_160._8_8_ = lVar12;
                  auStack_160._0_8_ = unaff_x22;
                  uVar9 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar12,auVar27._0_8_,0);
                  puVar24 = &UNK_01658158;
                  _uStack_138 = extraout_x8;
                  lVar14 = param_3;
                }
                auStack_150[0] = unaff_x22;
                auStack_150[1] = lVar12;
                auStack_150[2] = lVar14;
                puStack_130 = &stack0xffffffffffffff20;
                puStack_128 = puVar24;
                if (auStack_160._8_8_ != 0) {
                  uVar5 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_160._8_8_,auStack_160._0_8_,0);
                  uVar13 = Core_Networking_CarBase__get_LastHitTime(auStack_160);
                  if (param_3 != 0) {
                    uVar18 = *(undefined8 *)(param_3 + 0x1b0);
                    uVar1 = *(undefined4 *)(param_3 + 0x1a0);
                    *(undefined4 *)puVar4 = uVar9;
                    *(undefined1 *)((long)puVar4 + 4) = 0;
                    *(undefined1 *)((long)puVar4 + 5) = uVar5;
                    *(undefined2 *)((long)puVar4 + 6) = 0;
                    *(int *)((long)puVar4 + 8) = (int)uVar13;
                    *(undefined1 *)((long)puVar4 + 0xc) = 1;
                    *(undefined2 *)((long)puVar4 + 0xd) = 0;
                    *(undefined1 *)((long)puVar4 + 0xf) = 0;
                    *(undefined4 *)((long)puVar4 + 0x10) = uVar1;
                    *(undefined4 *)((long)puVar4 + 0x14) = 0;
                    *(undefined8 *)((long)puVar4 + 0x18) = uVar18;
                    return uVar13;
                  }
                }
                auVar28 = func_0x00f78af4();
                uVar13 = auVar28._0_8_;
                uVar18 = *(undefined8 *)(uVar13 + 0x1b0);
                uVar9 = *(undefined4 *)(uVar13 + 0x1a0);
                *extraout_x8_01 = 0;
                extraout_x8_01[1] = 0;
                *(int *)extraout_x8_01 = auVar28._8_4_;
                *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                *(undefined4 *)(extraout_x8_01 + 1) = uVar9;
                extraout_x8_01[2] = uVar18;
                return uVar13;
              }
              uVar13 = 0x3eb5000;
              if ((bRam0000000003eb5cd8 & 1) == 0) {
                func_0x00f78a20(0x3d1f100,0);
                bRam0000000003eb5cd8 = 1;
              }
              if (-1 < *(int *)(lVar12 + 0x30)) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
                /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                unaff_x21 = (ulong)*(uint *)(lVar12 + 0x30);
                uVar17 = *(uint *)(lVar12 + 0x30) - 1;
                if (-2 < (int)uVar17) {
                  uVar17 = 0xffffffff;
                }
                unaff_x22 = (ulong)uVar17;
                do {
                  uVar2 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar2;
                  iVar20 = (int)uVar13;
                  if ((int)uVar2 < 0) goto code_r0x016ceb30;
                  lVar14 = *(long *)(lVar12 + 0x28);
                  if (lVar14 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar14 + 0x18) <= uVar2) goto code_r0x016ced88;
                } while (*(int *)(lVar14 + (ulong)uVar2 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar21 = unaff_x22 - 8;
                  if (*(uint *)(lVar14 + 0x18) <= uVar21) goto code_r0x016ced88;
                  iVar10 = *(int *)(lVar14 + unaff_x22 * 4);
                  sVar6 = 0;
                  if (iVar10 != 0) {
                    sVar6 = (short)uVar13 - (short)iVar10;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)sVar6);
                  lVar14 = *(long *)(lVar12 + 0x28);
                  if (lVar14 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar14 + 0x18) <= uVar21) goto code_r0x016ced88;
                  *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar17 = uVar2;
                } while (0 < (long)uVar21);
code_r0x016ceb30:
                uVar9 = *(undefined4 *)(lVar12 + 0x34);
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)((short)uVar13 - (short)uVar9));
                uVar17 = uVar17 * 2 + 6;
                unaff_x21 = (ulong)uVar17;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)uVar17);
                unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                if (0 < (int)*(uint *)(lVar12 + 0x40)) {
                  uVar21 = 0;
                  do {
                    lVar14 = *(long *)(lVar12 + 0x18);
                    if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
                       (lVar19 = *(long *)(lVar12 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar19 + 0x18) <= uVar21) goto code_r0x016ced88;
                    uVar2 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) -
                            *(int *)(lVar19 + uVar21 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar2;
                    uVar17 = *(uint *)(lVar12 + 0x10);
                    unaff_x22 = (ulong)uVar17;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),unaff_x22,2);
                    if (sVar6 == sVar7) {
                      if (sVar6 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar12 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                        iVar10 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                        if (iVar10 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar12 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar20;
                        *(int *)(lVar12 + 0x10) = iVar11;
                        iVar10 = iVar10 - iVar20;
                        goto code_r0x016ced3c;
                      }
                      iVar10 = 2;
                      while( true ) {
                        if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar2 + iVar10,2);
                        if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar17 + iVar10,2);
                        if (sVar7 != sVar8) break;
                        iVar10 = iVar10 + 2;
                        if (sVar6 <= iVar10) goto code_r0x016cec64;
                      }
                    }
                    uVar21 = uVar21 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar12 + 0x40);
                  } while ((long)uVar21 < (long)unaff_x22);
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
                    lVar14 = *(long *)(lVar12 + 0x38);
                    if (lVar14 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
                    *(ulong *)(lVar12 + 0x38) = unaff_x21;
                    unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                  }
                  uVar17 = (uint)unaff_x22;
                  *(uint *)(lVar12 + 0x40) = uVar17 + 1;
                  uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar9;
                    unaff_x21 = *(ulong *)(lVar12 + 0x18);
                    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                      iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                      iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                      iVar11 = iVar11 - iVar20;
                      iVar10 = iVar10 - iVar20;
code_r0x016ced3c:
                      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
                      /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
                      *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
                      return uVar13;
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
              uVar15 = func_0x00f78a24(0x3d6cea8);
              iVar20 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar15);
              uVar15 = func_0x00f78a24(0x3d56a30);
              auVar28 = func_0x00f78ac0(uVar18,uVar15);
              puStack_108 = &FlatBuffers_FlatBufferBuilder__Required;
              pppuVar23 = &ppuStack_110;
              _uStack_138 = CONCAT44(iVar20,uStack_138);
              lVar14 = *(long *)(auVar28._0_8_ + 0x18);
              puStack_130 = (undefined1 *)unaff_x22;
              puStack_128 = (undefined *)unaff_x21;
              uStack_120 = uVar13;
              uStack_118 = uVar18;
              ppuStack_110 = &puStack_c0;
              if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
                iVar10 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - auVar28._8_4_;
                iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,iVar10,4);
                lVar14 = *(long *)(auVar28._0_8_ + 0x18);
                if (lVar14 != 0) {
                  uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,(iVar10 - iVar11) + iVar20,2);
                  if ((uVar13 & 0xffff) != 0) {
                    return uVar13;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_134,0);
              uVar15 = func_0x00f78a24(0x3d6ce88);
              uVar16 = func_0x00f78a24(0x3d66338);
              lVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar18,uVar16,0);
              func_0x00f78a24(0x3d22a38);
              uVar13 = func_0x00f78aec();
              uVar15 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar14);
              uVar18 = func_0x00f78a24(0x3d56a50);
              puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar27 = func_0x00f78ac0(uVar13,uVar18);
              puVar4 = auStack_150 + 2;
              do {
                uVar21 = auVar27._8_8_;
                lVar12 = auVar27._0_8_;
                *(ulong *)((long)puVar4 + -0x20) = uVar13;
                *(long *)((long)puVar4 + -0x18) = lVar14;
                *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar23;
                *(undefined **)((long)puVar4 + -8) = puVar24;
                pppuVar23 = (undefined1 ***)((long)puVar4 + -0x10);
                if ((int)uVar15 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),4);
                  uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar21);
code_r0x016cef70:
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar12 + 0x10);
                    return uVar13;
                  }
                }
                else if (lVar12 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar21);
                  if ((*(long *)(lVar12 + 0x18) != 0) &&
                     (lVar14 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar14 != 0)) {
                    uVar21 = (ulong)(uint)(*(int *)(lVar14 + 0x18) - *(int *)(lVar12 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
                    uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,uVar21);
                    goto code_r0x016cef70;
                  }
                }
                puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar27 = func_0x00f78af4();
                uVar15 = 0;
                puVar4 = (ulong *)((long)puVar4 + -0x20);
                lVar14 = lVar12;
                uVar13 = uVar21;
              } while( true );
            }
            uVar18 = 8;
            fVar25 = extraout_s0_00;
          }
          else {
            uVar18 = 7;
            fVar25 = extraout_s0;
          }
          auVar27._8_8_ = uVar18;
          auVar27._0_8_ = uVar13;
          *(undefined8 *)((long)ppuVar3 + -0x30) = unaff_d9;
          *(undefined8 *)((long)ppuVar3 + -0x28) = unaff_d8;
          *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
          *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
          *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar3;
          *(undefined **)((long)ppuVar3 + -8) = puVar24;
          if (fVar25 == 0.0 && *(char *)(uVar13 + 0x48) == '\0') {
            return uVar13;
          }
          uVar18 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar25,uVar13);
          puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
          puVar24 = *(undefined **)((long)ppuVar3 + -8);
          unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
          unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
          goto code_r0x016ce380;
        }
        uVar18 = 5;
      }
      else {
        uVar18 = 4;
      }
      uVar13 = auVar26._0_8_;
      auVar27._8_8_ = uVar18;
      auVar27._0_8_ = uVar13;
      param_4 = 0;
      *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar3;
      *(undefined **)((long)ppuVar3 + -8) = puVar24;
      if ((auVar26._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar18 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar13,auVar26._8_8_);
      puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar24 = *(undefined **)((long)ppuVar3 + -8);
      unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
      unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
      goto code_r0x016ce380;
    }
    uVar15 = 2;
  }
  else {
    uVar15 = 1;
  }
  uVar18 = auVar26._8_8_;
  uVar13 = auVar26._0_8_;
  auVar27._8_8_ = uVar15;
  auVar27._0_8_ = uVar13;
  param_4 = 0;
  if (auVar26._8_4_ == 0) {
    return uVar13;
  }
  *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar3;
  *(undefined **)((long)ppuVar3 + -8) = puVar24;
  /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(uVar13,uVar18,uVar18,0,0);
  unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
  puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)ppuVar3 + -8);
code_r0x016ce380:
  do {
    lVar14 = auVar27._8_8_;
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
    *(undefined **)((long)ppuVar3 + -8) = puVar24;
    puVar22 = (undefined1 *)((long)ppuVar3 + -0x10);
    uVar17 = auVar27._8_4_;
    if ((int)uVar17 < *(int *)(auVar27._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar14 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar14,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar14,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    puVar24 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar27 = func_0x00f78ac0(uVar15,0);
    uVar15 = auVar27._8_8_;
    auVar26._8_8_ = uVar18;
    auVar26._0_8_ = auVar27._0_8_;
    ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
    unaff_x19 = lVar14;
code_r0x016ce420:
    uVar13 = auVar26._0_8_;
    auVar27._8_8_ = uVar15;
    auVar27._0_8_ = uVar13;
    *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
    *(undefined **)((long)ppuVar3 + -8) = puVar24;
    if ((auVar26._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar18 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar26._8_8_);
    unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
    puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
    puVar24 = *(undefined **)((long)ppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1657f5c | Core.Networking.MigrationCar.AddSyncId
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddSyncId
                (ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 uVar4;
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
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar16;
  undefined8 unaff_x19;
  undefined8 uVar17;
  int iVar18;
  long unaff_x20;
  long lVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  float extraout_s0;
  float extraout_s0_00;
  float fVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_150 [16];
  ulong auStack_140 [3];
  undefined4 uStack_128;
  int iStack_124;
  undefined1 *puStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar17 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_2);
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  puVar23 = &Core_Networking_MigrationCar__AddPosition;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    puVar23 = &Core_Networking_MigrationCar__AddRotation;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      auVar25 = func_0x00f78af4();
      param_1 = auVar25._0_8_;
      if (param_1 != 0) {
        param_4 = 0;
        puStack_38 = &Core_Networking_MigrationCar__AddUsableType;
        if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
          return param_1;
        }
        uVar15 = 0;
        puStack_40 = &stack0xffffffffffffffd0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,auVar25._8_8_);
        uVar17 = 3;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x29 = puStack_40;
        unaff_x30 = puStack_38;
        goto FlatBuffers_FlatBufferBuilder__Slot;
      }
      puStack_38 = &Core_Networking_MigrationCar__AddUsableType;
      puVar23 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
      puStack_40 = &stack0xffffffffffffffd0;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        puVar23 = &Core_Networking_MigrationCar__AddBattleScore;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          auVar25 = func_0x00f78af4();
          param_1 = auVar25._0_8_;
          if (param_1 != 0) {
            param_4 = 0;
            puStack_68 = &Core_Networking_MigrationCar__AddLapsCompleted;
            if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
              return param_1;
            }
            uVar15 = 0;
            puStack_70 = &stack0xffffffffffffffa0;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar25._8_8_);
            uVar17 = 6;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
            unaff_x29 = puStack_70;
            unaff_x30 = puStack_68;
            goto FlatBuffers_FlatBufferBuilder__Slot;
          }
          puStack_68 = &Core_Networking_MigrationCar__AddLapsCompleted;
          puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsX;
          puStack_70 = &stack0xffffffffffffffa0;
          param_1 = func_0x00f78af4();
          if (param_1 == 0) {
            puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsY;
            param_1 = func_0x00f78af4();
            uVar8 = (undefined4)param_4;
            if (param_1 == 0) {
              puVar21 = &stack0xffffffffffffff70;
              puVar23 = &Core_Networking_MigrationCar__AddHalfway;
              auVar25 = func_0x00f78af4();
              if (auVar25._0_8_ != 0) {
                uVar17 = 9;
                param_4 = 0;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
                goto code_r0x016ce420;
              }
              puStack_98 = &Core_Networking_MigrationCar__AddHalfway;
              puStack_a0 = &stack0xffffffffffffff70;
              lVar11 = func_0x00f78af4();
              puStack_a8 = &Core_Networking_MigrationCar__EndMigrationCar;
              lVar19 = 0x3eb5000;
              puStack_b0 = (undefined1 *)&puStack_a0;
              if ((bRam0000000003eb5813 & 1) == 0) {
                puStack_b0 = (undefined1 *)&puStack_a0;
                func_0x00f78a20(0x3d3f1b8);
                bRam0000000003eb5813 = 1;
              }
              if (lVar11 == 0) {
                auVar25 = func_0x00f78af4();
                lVar11 = auVar25._8_8_;
                puVar3 = &uStack_110;
                if (lVar11 == 0) {
                  puVar23 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                  auStack_150 = func_0x00f78af4();
                  _uStack_128 = 0;
                  puVar3 = (ulong *)extraout_x8_00;
                }
                else {
                  unaff_x22 = CONCAT44(0,auVar25._0_4_ + 4);
                  auStack_150._8_8_ = lVar11;
                  auStack_150._0_8_ = unaff_x22;
                  uVar8 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar11,auVar25._0_8_,0);
                  puVar23 = &UNK_01658158;
                  _uStack_128 = extraout_x8;
                  lVar19 = param_3;
                }
                auStack_140[0] = unaff_x22;
                auStack_140[1] = lVar11;
                auStack_140[2] = lVar19;
                puStack_120 = &stack0xffffffffffffff30;
                puStack_118 = puVar23;
                if (auStack_150._8_8_ != 0) {
                  uVar4 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_150._8_8_,auStack_150._0_8_,0);
                  uVar12 = Core_Networking_CarBase__get_LastHitTime(auStack_150);
                  if (param_3 != 0) {
                    uVar17 = *(undefined8 *)(param_3 + 0x1b0);
                    uVar1 = *(undefined4 *)(param_3 + 0x1a0);
                    *(undefined4 *)puVar3 = uVar8;
                    *(undefined1 *)((long)puVar3 + 4) = 0;
                    *(undefined1 *)((long)puVar3 + 5) = uVar4;
                    *(undefined2 *)((long)puVar3 + 6) = 0;
                    *(int *)((long)puVar3 + 8) = (int)uVar12;
                    *(undefined1 *)((long)puVar3 + 0xc) = 1;
                    *(undefined2 *)((long)puVar3 + 0xd) = 0;
                    *(undefined1 *)((long)puVar3 + 0xf) = 0;
                    *(undefined4 *)((long)puVar3 + 0x10) = uVar1;
                    *(undefined4 *)((long)puVar3 + 0x14) = 0;
                    *(undefined8 *)((long)puVar3 + 0x18) = uVar17;
                    return uVar12;
                  }
                }
                auVar27 = func_0x00f78af4();
                uVar12 = auVar27._0_8_;
                uVar17 = *(undefined8 *)(uVar12 + 0x1b0);
                uVar8 = *(undefined4 *)(uVar12 + 0x1a0);
                *extraout_x8_01 = 0;
                extraout_x8_01[1] = 0;
                *(int *)extraout_x8_01 = auVar27._8_4_;
                *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                *(undefined4 *)(extraout_x8_01 + 1) = uVar8;
                extraout_x8_01[2] = uVar17;
                return uVar12;
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
                  uVar2 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar2;
                  iVar18 = (int)uVar12;
                  if ((int)uVar2 < 0) goto code_r0x016ceb30;
                  lVar19 = *(long *)(lVar11 + 0x28);
                  if (lVar19 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar19 + 0x18) <= uVar2) goto code_r0x016ced88;
                } while (*(int *)(lVar19 + (ulong)uVar2 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar20 = unaff_x22 - 8;
                  if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
                  iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
                  sVar5 = 0;
                  if (iVar9 != 0) {
                    sVar5 = (short)uVar12 - (short)iVar9;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
                  lVar19 = *(long *)(lVar11 + 0x28);
                  if (lVar19 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
                  *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar14 = uVar2;
                } while (0 < (long)uVar20);
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
                  uVar20 = 0;
                  do {
                    lVar19 = *(long *)(lVar11 + 0x18);
                    if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                       (lVar16 = *(long *)(lVar11 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
                    uVar2 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                            *(int *)(lVar16 + uVar20 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar2;
                    uVar14 = *(uint *)(lVar11 + 0x10);
                    unaff_x22 = (ulong)uVar14;
                    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                    if (sVar5 == sVar6) {
                      if (sVar5 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar11 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                        iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                        if (iVar9 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar11 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                        *(int *)(lVar11 + 0x10) = iVar10;
                        iVar9 = iVar9 - iVar18;
                        goto code_r0x016ced3c;
                      }
                      iVar9 = 2;
                      while( true ) {
                        if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar2 + iVar9,2);
                        if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                        if (sVar6 != sVar7) break;
                        iVar9 = iVar9 + 2;
                        if (sVar5 <= iVar9) goto code_r0x016cec64;
                      }
                    }
                    uVar20 = uVar20 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
                  } while ((long)uVar20 < (long)unaff_x22);
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
                    lVar19 = *(long *)(lVar11 + 0x38);
                    if (lVar19 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
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
                      iVar10 = iVar10 - iVar18;
                      iVar9 = iVar9 - iVar18;
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
                uVar17 = func_0x00f78b24();
                func_0x00f78ac0(uVar17,0);
              }
              func_0x00f78a24(0x3d22a38);
              uVar17 = func_0x00f78aec();
              uVar15 = func_0x00f78a24(0x3d6cea8);
              iVar18 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar15);
              uVar15 = func_0x00f78a24(0x3d56a30);
              auVar27 = func_0x00f78ac0(uVar17,uVar15);
              puStack_f8 = &FlatBuffers_FlatBufferBuilder__Required;
              pppuVar22 = &ppuStack_100;
              _uStack_128 = CONCAT44(iVar18,uStack_128);
              lVar19 = *(long *)(auVar27._0_8_ + 0x18);
              puStack_120 = (undefined1 *)unaff_x22;
              puStack_118 = (undefined *)unaff_x21;
              uStack_110 = uVar12;
              uStack_108 = uVar17;
              ppuStack_100 = &puStack_b0;
              if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar27._8_4_;
                iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                lVar19 = *(long *)(auVar27._0_8_ + 0x18);
                if (lVar19 != 0) {
                  uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar18,2);
                  if ((uVar12 & 0xffff) != 0) {
                    return uVar12;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_124,0);
              uVar15 = func_0x00f78a24(0x3d6ce88);
              uVar13 = func_0x00f78a24(0x3d66338);
              lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar17,uVar13,0);
              func_0x00f78a24(0x3d22a38);
              uVar12 = func_0x00f78aec();
              uVar15 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar19);
              uVar17 = func_0x00f78a24(0x3d56a50);
              puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar25 = func_0x00f78ac0(uVar12,uVar17);
              puVar3 = auStack_140 + 2;
              do {
                uVar20 = auVar25._8_8_;
                lVar11 = auVar25._0_8_;
                *(ulong *)((long)puVar3 + -0x20) = uVar12;
                *(long *)((long)puVar3 + -0x18) = lVar19;
                *(undefined1 ****)((long)puVar3 + -0x10) = pppuVar22;
                *(undefined **)((long)puVar3 + -8) = puVar23;
                pppuVar22 = (undefined1 ***)((long)puVar3 + -0x10);
                if ((int)uVar15 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),4);
                  uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
code_r0x016cef70:
                  if (*(long *)(lVar11 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar11 + 0x10);
                    return uVar12;
                  }
                }
                else if (lVar11 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
                  if ((*(long *)(lVar11 + 0x18) != 0) &&
                     (lVar19 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10), lVar19 != 0)) {
                    uVar20 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar11 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
                    uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,uVar20);
                    goto code_r0x016cef70;
                  }
                }
                puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar25 = func_0x00f78af4();
                uVar15 = 0;
                puVar3 = (ulong *)((long)puVar3 + -0x20);
                lVar19 = lVar11;
                uVar12 = uVar20;
              } while( true );
            }
            uVar17 = 8;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
            fVar24 = extraout_s0_00;
          }
          else {
            uVar17 = 7;
            register0x00000008 = (BADSPACEBASE *)&puStack_70;
            fVar24 = extraout_s0;
          }
          *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
          *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
          *(undefined **)((long)register0x00000008 + -8) = puVar23;
          if (fVar24 == 0.0 && *(char *)(param_1 + 0x48) == '\0') {
            return param_1;
          }
          uVar15 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar24,param_1);
          unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
          unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
          unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
          unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
          goto FlatBuffers_FlatBufferBuilder__Slot;
        }
        uVar17 = 5;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      }
      else {
        uVar17 = 4;
        register0x00000008 = (BADSPACEBASE *)&puStack_40;
      }
      param_1 = auVar25._0_8_;
      param_4 = 0;
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
      *(undefined **)((long)register0x00000008 + -8) = puVar23;
      if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar25._8_8_);
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
      goto FlatBuffers_FlatBufferBuilder__Slot;
    }
    uVar17 = 2;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  }
  else {
    uVar17 = 1;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  uVar15 = auVar25._8_8_;
  param_1 = auVar25._0_8_;
  param_4 = 0;
  if (auVar25._8_4_ == 0) {
    return param_1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
  *(undefined **)((long)register0x00000008 + -8) = puVar23;
  /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(param_1,uVar15,uVar15,0,0);
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
FlatBuffers_FlatBufferBuilder__Slot:
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar14 = (uint)uVar17;
    if ((int)uVar14 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = uVar17;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar17 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar17,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = uVar17;
    }
    uVar17 = func_0x00f78b24();
    puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar26._8_8_;
    auVar25._8_8_ = uVar15;
    auVar25._0_8_ = auVar26._0_8_;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
code_r0x016ce420:
    param_1 = auVar25._0_8_;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar21;
    *(undefined **)((long)register0x00000008 + -8) = puVar23;
    if ((auVar25._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar25._8_8_);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1657f80 | Core.Networking.MigrationCar.AddPosition
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddPosition
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  ulong *puVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  long unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined1 ***pppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  float extraout_s0;
  float extraout_s0_00;
  float fVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auStack_140 [16];
  ulong auStack_130 [3];
  undefined4 uStack_118;
  int iStack_114;
  undefined1 *puStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_MigrationCar__AddRotation;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      puStack_18 = &Core_Networking_MigrationCar__AddRotation;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._0_8_;
      if (uVar13 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Networking_MigrationCar__AddUsableType;
        if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar17 = 0;
        puStack_30 = (undefined1 *)&puStack_20;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,2,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar13,auVar27._8_8_);
        uVar16 = 3;
        ppuVar3 = &puStack_20;
        puVar22 = puStack_30;
        puVar24 = puStack_28;
        goto FlatBuffers_FlatBufferBuilder__Slot;
      }
      ppuVar3 = &puStack_30;
      puStack_28 = &Core_Networking_MigrationCar__AddUsableType;
      puVar24 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
      puStack_30 = (undefined1 *)&puStack_20;
      auVar27 = func_0x00f78af4();
      if (auVar27._0_8_ == 0) {
        ppuVar3 = (undefined1 **)&stack0xffffffffffffffc0;
        puVar24 = &Core_Networking_MigrationCar__AddBattleScore;
        auVar27 = func_0x00f78af4();
        if (auVar27._0_8_ == 0) {
          auVar27 = func_0x00f78af4();
          uVar13 = auVar27._0_8_;
          if (uVar13 != 0) {
            param_4 = 0;
            puStack_58 = &Core_Networking_MigrationCar__AddLapsCompleted;
            if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
              return uVar13;
            }
            uVar17 = 0;
            puStack_60 = &stack0xffffffffffffffb0;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
            /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar13,auVar27._8_8_);
            uVar16 = 6;
            ppuVar3 = (undefined1 **)&stack0xffffffffffffffb0;
            puVar22 = puStack_60;
            puVar24 = puStack_58;
            goto FlatBuffers_FlatBufferBuilder__Slot;
          }
          ppuVar3 = &puStack_60;
          puStack_58 = &Core_Networking_MigrationCar__AddLapsCompleted;
          puVar24 = &Core_Networking_MigrationCar__AddTrackCoordsX;
          puStack_60 = &stack0xffffffffffffffb0;
          uVar13 = func_0x00f78af4();
          if (uVar13 == 0) {
            ppuVar3 = (undefined1 **)&stack0xffffffffffffff90;
            puVar24 = &Core_Networking_MigrationCar__AddTrackCoordsY;
            uVar13 = func_0x00f78af4();
            uVar9 = (undefined4)param_4;
            if (uVar13 == 0) {
              ppuVar3 = (undefined1 **)&stack0xffffffffffffff80;
              puVar22 = &stack0xffffffffffffff80;
              puVar24 = &Core_Networking_MigrationCar__AddHalfway;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ != 0) {
                uVar16 = 9;
                param_4 = 0;
                goto code_r0x016ce420;
              }
              puStack_88 = &Core_Networking_MigrationCar__AddHalfway;
              puStack_90 = &stack0xffffffffffffff80;
              lVar12 = func_0x00f78af4();
              puStack_98 = &Core_Networking_MigrationCar__EndMigrationCar;
              lVar20 = 0x3eb5000;
              puStack_a0 = (undefined1 *)&puStack_90;
              if ((bRam0000000003eb5813 & 1) == 0) {
                puStack_a0 = (undefined1 *)&puStack_90;
                func_0x00f78a20(0x3d3f1b8);
                bRam0000000003eb5813 = 1;
              }
              if (lVar12 == 0) {
                auVar27 = func_0x00f78af4();
                lVar12 = auVar27._8_8_;
                puVar4 = &uStack_100;
                if (lVar12 == 0) {
                  puVar24 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
                  auStack_140 = func_0x00f78af4();
                  _uStack_118 = 0;
                  puVar4 = (ulong *)extraout_x8_00;
                }
                else {
                  unaff_x22 = CONCAT44(0,auVar27._0_4_ + 4);
                  auStack_140._8_8_ = lVar12;
                  auStack_140._0_8_ = unaff_x22;
                  uVar9 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar12,auVar27._0_8_,0);
                  puVar24 = &UNK_01658158;
                  _uStack_118 = extraout_x8;
                  lVar20 = param_3;
                }
                auStack_130[0] = unaff_x22;
                auStack_130[1] = lVar12;
                auStack_130[2] = lVar20;
                puStack_110 = &stack0xffffffffffffff40;
                puStack_108 = puVar24;
                if (auStack_140._8_8_ != 0) {
                  uVar5 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_140._8_8_,auStack_140._0_8_,0);
                  uVar13 = Core_Networking_CarBase__get_LastHitTime(auStack_140);
                  if (param_3 != 0) {
                    uVar16 = *(undefined8 *)(param_3 + 0x1b0);
                    uVar1 = *(undefined4 *)(param_3 + 0x1a0);
                    *(undefined4 *)puVar4 = uVar9;
                    *(undefined1 *)((long)puVar4 + 4) = 0;
                    *(undefined1 *)((long)puVar4 + 5) = uVar5;
                    *(undefined2 *)((long)puVar4 + 6) = 0;
                    *(int *)((long)puVar4 + 8) = (int)uVar13;
                    *(undefined1 *)((long)puVar4 + 0xc) = 1;
                    *(undefined2 *)((long)puVar4 + 0xd) = 0;
                    *(undefined1 *)((long)puVar4 + 0xf) = 0;
                    *(undefined4 *)((long)puVar4 + 0x10) = uVar1;
                    *(undefined4 *)((long)puVar4 + 0x14) = 0;
                    *(undefined8 *)((long)puVar4 + 0x18) = uVar16;
                    return uVar13;
                  }
                }
                auVar28 = func_0x00f78af4();
                uVar13 = auVar28._0_8_;
                uVar16 = *(undefined8 *)(uVar13 + 0x1b0);
                uVar9 = *(undefined4 *)(uVar13 + 0x1a0);
                *extraout_x8_01 = 0;
                extraout_x8_01[1] = 0;
                *(int *)extraout_x8_01 = auVar28._8_4_;
                *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
                *(undefined4 *)(extraout_x8_01 + 1) = uVar9;
                extraout_x8_01[2] = uVar16;
                return uVar13;
              }
              uVar13 = 0x3eb5000;
              if ((bRam0000000003eb5cd8 & 1) == 0) {
                func_0x00f78a20(0x3d1f100,0);
                bRam0000000003eb5cd8 = 1;
              }
              if (-1 < *(int *)(lVar12 + 0x30)) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
                /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                unaff_x21 = (ulong)*(uint *)(lVar12 + 0x30);
                uVar15 = *(uint *)(lVar12 + 0x30) - 1;
                if (-2 < (int)uVar15) {
                  uVar15 = 0xffffffff;
                }
                unaff_x22 = (ulong)uVar15;
                do {
                  uVar2 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar2;
                  iVar19 = (int)uVar13;
                  if ((int)uVar2 < 0) goto code_r0x016ceb30;
                  lVar20 = *(long *)(lVar12 + 0x28);
                  if (lVar20 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar20 + 0x18) <= uVar2) goto code_r0x016ced88;
                } while (*(int *)(lVar20 + (ulong)uVar2 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar21 = unaff_x22 - 8;
                  if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                  iVar10 = *(int *)(lVar20 + unaff_x22 * 4);
                  sVar6 = 0;
                  if (iVar10 != 0) {
                    sVar6 = (short)uVar13 - (short)iVar10;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)sVar6);
                  lVar20 = *(long *)(lVar12 + 0x28);
                  if (lVar20 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                  *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar15 = uVar2;
                } while (0 < (long)uVar21);
code_r0x016ceb30:
                uVar9 = *(undefined4 *)(lVar12 + 0x34);
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)((short)uVar13 - (short)uVar9));
                uVar15 = uVar15 * 2 + 6;
                unaff_x21 = (ulong)uVar15;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)uVar15);
                unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                if (0 < (int)*(uint *)(lVar12 + 0x40)) {
                  uVar21 = 0;
                  do {
                    lVar20 = *(long *)(lVar12 + 0x18);
                    if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                       (lVar18 = *(long *)(lVar12 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                    uVar2 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                            *(int *)(lVar18 + uVar21 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar2;
                    uVar15 = *(uint *)(lVar12 + 0x10);
                    unaff_x22 = (ulong)uVar15;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),unaff_x22,2);
                    if (sVar6 == sVar7) {
                      if (sVar6 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar12 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                        iVar10 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                        if (iVar10 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar12 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                        *(int *)(lVar12 + 0x10) = iVar11;
                        iVar10 = iVar10 - iVar19;
                        goto code_r0x016ced3c;
                      }
                      iVar10 = 2;
                      while( true ) {
                        if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar2 + iVar10,2);
                        if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar15 + iVar10,2);
                        if (sVar7 != sVar8) break;
                        iVar10 = iVar10 + 2;
                        if (sVar6 <= iVar10) goto code_r0x016cec64;
                      }
                    }
                    uVar21 = uVar21 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar12 + 0x40);
                  } while ((long)uVar21 < (long)unaff_x22);
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
                    lVar20 = *(long *)(lVar12 + 0x38);
                    if (lVar20 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                    *(ulong *)(lVar12 + 0x38) = unaff_x21;
                    unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                  }
                  uVar15 = (uint)unaff_x22;
                  *(uint *)(lVar12 + 0x40) = uVar15 + 1;
                  uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar9;
                    unaff_x21 = *(ulong *)(lVar12 + 0x18);
                    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                      iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                      iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                      iVar11 = iVar11 - iVar19;
                      iVar10 = iVar10 - iVar19;
code_r0x016ced3c:
                      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
                      /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
                      *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
                      return uVar13;
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
              uVar17 = func_0x00f78a24(0x3d6cea8);
              iVar19 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar17);
              uVar17 = func_0x00f78a24(0x3d56a30);
              auVar28 = func_0x00f78ac0(uVar16,uVar17);
              puStack_e8 = &FlatBuffers_FlatBufferBuilder__Required;
              pppuVar23 = &ppuStack_f0;
              _uStack_118 = CONCAT44(iVar19,uStack_118);
              lVar20 = *(long *)(auVar28._0_8_ + 0x18);
              puStack_110 = (undefined1 *)unaff_x22;
              puStack_108 = (undefined *)unaff_x21;
              uStack_100 = uVar13;
              uStack_f8 = uVar16;
              ppuStack_f0 = &puStack_a0;
              if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
                iVar10 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar28._8_4_;
                iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar10,4);
                lVar20 = *(long *)(auVar28._0_8_ + 0x18);
                if (lVar20 != 0) {
                  uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar10 - iVar11) + iVar19,2);
                  if ((uVar13 & 0xffff) != 0) {
                    return uVar13;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_114,0);
              uVar17 = func_0x00f78a24(0x3d6ce88);
              uVar14 = func_0x00f78a24(0x3d66338);
              lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar16,uVar14,0);
              func_0x00f78a24(0x3d22a38);
              uVar13 = func_0x00f78aec();
              uVar17 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
              uVar16 = func_0x00f78a24(0x3d56a50);
              puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar27 = func_0x00f78ac0(uVar13,uVar16);
              puVar4 = auStack_130 + 2;
              do {
                uVar21 = auVar27._8_8_;
                lVar12 = auVar27._0_8_;
                *(ulong *)((long)puVar4 + -0x20) = uVar13;
                *(long *)((long)puVar4 + -0x18) = lVar20;
                *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar23;
                *(undefined **)((long)puVar4 + -8) = puVar24;
                pppuVar23 = (undefined1 ***)((long)puVar4 + -0x10);
                if ((int)uVar17 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),4);
                  uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar21);
code_r0x016cef70:
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar12 + 0x10);
                    return uVar13;
                  }
                }
                else if (lVar12 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar21);
                  if ((*(long *)(lVar12 + 0x18) != 0) &&
                     (lVar20 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar20 != 0)) {
                    uVar21 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar12 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
                    uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,uVar21);
                    goto code_r0x016cef70;
                  }
                }
                puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar27 = func_0x00f78af4();
                uVar17 = 0;
                puVar4 = (ulong *)((long)puVar4 + -0x20);
                lVar20 = lVar12;
                uVar13 = uVar21;
              } while( true );
            }
            uVar16 = 8;
            fVar25 = extraout_s0_00;
          }
          else {
            uVar16 = 7;
            fVar25 = extraout_s0;
          }
          *(undefined8 *)((long)ppuVar3 + -0x30) = unaff_d9;
          *(undefined8 *)((long)ppuVar3 + -0x28) = unaff_d8;
          *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
          *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
          *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar3;
          *(undefined **)((long)ppuVar3 + -8) = puVar24;
          if (fVar25 == 0.0 && *(char *)(uVar13 + 0x48) == '\0') {
            return uVar13;
          }
          uVar17 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4);
          /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar25,uVar13);
          puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
          puVar24 = *(undefined **)((long)ppuVar3 + -8);
          unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
          unaff_x19 = *(undefined8 *)((long)ppuVar3 + -0x18);
          goto FlatBuffers_FlatBufferBuilder__Slot;
        }
        uVar16 = 5;
      }
      else {
        uVar16 = 4;
      }
      uVar13 = auVar27._0_8_;
      param_4 = 0;
      *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar3;
      *(undefined **)((long)ppuVar3 + -8) = puVar24;
      if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar17 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar13,auVar27._8_8_);
      puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar24 = *(undefined **)((long)ppuVar3 + -8);
      unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
      unaff_x19 = *(undefined8 *)((long)ppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
      goto FlatBuffers_FlatBufferBuilder__Slot;
    }
    uVar16 = 2;
  }
  else {
    uVar16 = 1;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar17 = auVar27._8_8_;
  uVar13 = auVar27._0_8_;
  param_4 = 0;
  if (auVar27._8_4_ == 0) {
    return uVar13;
  }
  *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(uVar13,uVar17,uVar17,0,0);
  unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
  unaff_x19 = *(undefined8 *)((long)ppuVar3 + -0x18);
  puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)ppuVar3 + -8);
FlatBuffers_FlatBufferBuilder__Slot:
  do {
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
    *(undefined **)((long)ppuVar3 + -8) = puVar24;
    puVar22 = (undefined1 *)((long)ppuVar3 + -0x10);
    uVar15 = (uint)uVar16;
    if ((int)uVar15 < *(int *)(uVar13 + 0x30)) {
      unaff_x20 = *(long *)(uVar13 + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = uVar16;
      if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = uVar16;
    }
    uVar16 = func_0x00f78b24();
    puVar24 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar27 = func_0x00f78ac0(uVar16,0);
    uVar16 = auVar27._8_8_;
    auVar26._8_8_ = uVar17;
    auVar26._0_8_ = auVar27._0_8_;
    ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
code_r0x016ce420:
    uVar13 = auVar26._0_8_;
    *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
    *(undefined **)((long)ppuVar3 + -8) = puVar24;
    if ((auVar26._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar26._8_8_);
    unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
    unaff_x19 = *(undefined8 *)((long)ppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
    puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
    puVar24 = *(undefined **)((long)ppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1657fa4 | Core.Networking.MigrationCar.AddRotation
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddRotation
                (ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar16;
  undefined8 unaff_x19;
  undefined8 uVar17;
  int iVar18;
  long unaff_x20;
  long lVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  float extraout_s0;
  float extraout_s0_00;
  float fVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_130 [16];
  ulong auStack_120 [3];
  undefined4 uStack_108;
  int iStack_104;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    param_4 = 0;
    if ((int)param_2 == 0) {
      return param_1;
    }
    uVar17 = 2;
    /*FlatBuffers.FlatBufferBuilder$$Nested*/ func_0x016ce234(param_1,param_2,param_2,0,0);
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar25 = func_0x00f78af4();
  param_1 = auVar25._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    param_2 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,auVar25._8_8_);
    uVar17 = 3;
    unaff_x30 = &Core_Networking_MigrationCar__AddUsableType;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  puVar23 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    puVar23 = &Core_Networking_MigrationCar__AddBattleScore;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      auVar25 = func_0x00f78af4();
      param_1 = auVar25._0_8_;
      if (param_1 != 0) {
        param_4 = 0;
        puStack_48 = &Core_Networking_MigrationCar__AddLapsCompleted;
        if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
          return param_1;
        }
        param_2 = 0;
        puStack_50 = &stack0xffffffffffffffc0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar25._8_8_);
        uVar17 = 6;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x29 = puStack_50;
        unaff_x30 = puStack_48;
        goto FlatBuffers_FlatBufferBuilder__Slot;
      }
      puStack_48 = &Core_Networking_MigrationCar__AddLapsCompleted;
      puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsX;
      puStack_50 = &stack0xffffffffffffffc0;
      param_1 = func_0x00f78af4();
      if (param_1 == 0) {
        puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsY;
        param_1 = func_0x00f78af4();
        uVar8 = (undefined4)param_4;
        if (param_1 == 0) {
          puVar21 = &stack0xffffffffffffff90;
          puVar23 = &Core_Networking_MigrationCar__AddHalfway;
          auVar25 = func_0x00f78af4();
          if (auVar25._0_8_ != 0) {
            uVar17 = 9;
            param_4 = 0;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
            goto code_r0x016ce420;
          }
          puStack_78 = &Core_Networking_MigrationCar__AddHalfway;
          puStack_80 = &stack0xffffffffffffff90;
          lVar11 = func_0x00f78af4();
          puStack_88 = &Core_Networking_MigrationCar__EndMigrationCar;
          lVar19 = 0x3eb5000;
          puStack_90 = (undefined1 *)&puStack_80;
          if ((bRam0000000003eb5813 & 1) == 0) {
            puStack_90 = (undefined1 *)&puStack_80;
            func_0x00f78a20(0x3d3f1b8);
            bRam0000000003eb5813 = 1;
          }
          if (lVar11 == 0) {
            auVar25 = func_0x00f78af4();
            lVar11 = auVar25._8_8_;
            puVar3 = &uStack_f0;
            if (lVar11 == 0) {
              puVar23 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
              auStack_130 = func_0x00f78af4();
              _uStack_108 = 0;
              puVar3 = (ulong *)extraout_x8_00;
            }
            else {
              unaff_x22 = CONCAT44(0,auVar25._0_4_ + 4);
              auStack_130._8_8_ = lVar11;
              auStack_130._0_8_ = unaff_x22;
              uVar8 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar11,auVar25._0_8_,0);
              puVar23 = &UNK_01658158;
              _uStack_108 = extraout_x8;
              lVar19 = param_3;
            }
            auStack_120[0] = unaff_x22;
            auStack_120[1] = lVar11;
            auStack_120[2] = lVar19;
            puStack_100 = &stack0xffffffffffffff50;
            puStack_f8 = puVar23;
            if (auStack_130._8_8_ != 0) {
              uVar4 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_130._8_8_,auStack_130._0_8_,0);
              uVar12 = Core_Networking_CarBase__get_LastHitTime(auStack_130);
              if (param_3 != 0) {
                uVar17 = *(undefined8 *)(param_3 + 0x1b0);
                uVar1 = *(undefined4 *)(param_3 + 0x1a0);
                *(undefined4 *)puVar3 = uVar8;
                *(undefined1 *)((long)puVar3 + 4) = 0;
                *(undefined1 *)((long)puVar3 + 5) = uVar4;
                *(undefined2 *)((long)puVar3 + 6) = 0;
                *(int *)((long)puVar3 + 8) = (int)uVar12;
                *(undefined1 *)((long)puVar3 + 0xc) = 1;
                *(undefined2 *)((long)puVar3 + 0xd) = 0;
                *(undefined1 *)((long)puVar3 + 0xf) = 0;
                *(undefined4 *)((long)puVar3 + 0x10) = uVar1;
                *(undefined4 *)((long)puVar3 + 0x14) = 0;
                *(undefined8 *)((long)puVar3 + 0x18) = uVar17;
                return uVar12;
              }
            }
            auVar27 = func_0x00f78af4();
            uVar12 = auVar27._0_8_;
            uVar17 = *(undefined8 *)(uVar12 + 0x1b0);
            uVar8 = *(undefined4 *)(uVar12 + 0x1a0);
            *extraout_x8_01 = 0;
            extraout_x8_01[1] = 0;
            *(int *)extraout_x8_01 = auVar27._8_4_;
            *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
            *(undefined4 *)(extraout_x8_01 + 1) = uVar8;
            extraout_x8_01[2] = uVar17;
            return uVar12;
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
            uVar15 = *(uint *)(lVar11 + 0x30) - 1;
            if (-2 < (int)uVar15) {
              uVar15 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar15;
            do {
              uVar2 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar2;
              iVar18 = (int)uVar12;
              if ((int)uVar2 < 0) goto code_r0x016ceb30;
              lVar19 = *(long *)(lVar11 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar2) goto code_r0x016ced88;
            } while (*(int *)(lVar19 + (ulong)uVar2 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar20 = unaff_x22 - 8;
              if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar12 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
              lVar19 = *(long *)(lVar11 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
              *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar15 = uVar2;
            } while (0 < (long)uVar20);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar11 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
            uVar15 = uVar15 * 2 + 6;
            unaff_x21 = (ulong)uVar15;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar15);
            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            if (0 < (int)*(uint *)(lVar11 + 0x40)) {
              uVar20 = 0;
              do {
                lVar19 = *(long *)(lVar11 + 0x18);
                if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                   (lVar16 = *(long *)(lVar11 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
                uVar2 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                        *(int *)(lVar16 + uVar20 * 4 + 0x20);
                unaff_x21 = (ulong)uVar2;
                uVar15 = *(uint *)(lVar11 + 0x10);
                unaff_x22 = (ulong)uVar15;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar11 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                    *(int *)(lVar11 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar18;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar2 + iVar9,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar15 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar20 = uVar20 + 1;
                unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
              } while ((long)uVar20 < (long)unaff_x22);
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
                lVar19 = *(long *)(lVar11 + 0x38);
                if (lVar19 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                *(ulong *)(lVar11 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              }
              uVar15 = (uint)unaff_x22;
              *(uint *)(lVar11 + 0x40) = uVar15 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  iVar10 = iVar10 - iVar18;
                  iVar9 = iVar9 - iVar18;
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
            uVar17 = func_0x00f78b24();
            func_0x00f78ac0(uVar17,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar17 = func_0x00f78aec();
          uVar13 = func_0x00f78a24(0x3d6cea8);
          iVar18 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar13);
          uVar13 = func_0x00f78a24(0x3d56a30);
          auVar27 = func_0x00f78ac0(uVar17,uVar13);
          puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar22 = &ppuStack_e0;
          _uStack_108 = CONCAT44(iVar18,uStack_108);
          lVar19 = *(long *)(auVar27._0_8_ + 0x18);
          puStack_100 = (undefined1 *)unaff_x22;
          puStack_f8 = (undefined *)unaff_x21;
          uStack_f0 = uVar12;
          uStack_e8 = uVar17;
          ppuStack_e0 = &puStack_90;
          if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar27._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
            lVar19 = *(long *)(auVar27._0_8_ + 0x18);
            if (lVar19 != 0) {
              uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar18,2);
              if ((uVar12 & 0xffff) != 0) {
                return uVar12;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_104,0);
          uVar13 = func_0x00f78a24(0x3d6ce88);
          uVar14 = func_0x00f78a24(0x3d66338);
          lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar17,uVar14,0);
          func_0x00f78a24(0x3d22a38);
          uVar12 = func_0x00f78aec();
          uVar13 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar19);
          uVar17 = func_0x00f78a24(0x3d56a50);
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78ac0(uVar12,uVar17);
          puVar3 = auStack_120 + 2;
          do {
            uVar20 = auVar25._8_8_;
            lVar11 = auVar25._0_8_;
            *(ulong *)((long)puVar3 + -0x20) = uVar12;
            *(long *)((long)puVar3 + -0x18) = lVar19;
            *(undefined1 ****)((long)puVar3 + -0x10) = pppuVar22;
            *(undefined **)((long)puVar3 + -8) = puVar23;
            pppuVar22 = (undefined1 ***)((long)puVar3 + -0x10);
            if ((int)uVar13 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),4);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
code_r0x016cef70:
              if (*(long *)(lVar11 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18) = *(undefined4 *)(lVar11 + 0x10);
                return uVar12;
              }
            }
            else if (lVar11 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
              if ((*(long *)(lVar11 + 0x18) != 0) &&
                 (lVar19 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10), lVar19 != 0)) {
                uVar20 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar11 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,uVar20);
                goto code_r0x016cef70;
              }
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78af4();
            uVar13 = 0;
            puVar3 = (ulong *)((long)puVar3 + -0x20);
            lVar19 = lVar11;
            uVar12 = uVar20;
          } while( true );
        }
        uVar17 = 8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        fVar24 = extraout_s0_00;
      }
      else {
        uVar17 = 7;
        register0x00000008 = (BADSPACEBASE *)&puStack_50;
        fVar24 = extraout_s0;
      }
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
      *(undefined **)((long)register0x00000008 + -8) = puVar23;
      if (fVar24 == 0.0 && *(char *)(param_1 + 0x48) == '\0') {
        return param_1;
      }
      param_2 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4);
      /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar24,param_1);
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto FlatBuffers_FlatBufferBuilder__Slot;
    }
    uVar17 = 5;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  }
  else {
    uVar17 = 4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  }
  param_1 = auVar25._0_8_;
  param_4 = 0;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
  *(undefined **)((long)register0x00000008 + -8) = puVar23;
  if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  param_2 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar25._8_8_);
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
  unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
FlatBuffers_FlatBufferBuilder__Slot:
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar15 = (uint)uVar17;
    if ((int)uVar15 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = uVar17;
      if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar17 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      param_2 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar17,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = uVar17;
    }
    uVar17 = func_0x00f78b24();
    puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar26._8_8_;
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = auVar26._0_8_;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
code_r0x016ce420:
    param_1 = auVar25._0_8_;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar21;
    *(undefined **)((long)register0x00000008 + -8) = puVar23;
    if ((auVar25._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    param_2 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar25._8_8_);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1657fc8 | Core.Networking.MigrationCar.AddUsableType
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddUsableType
                (ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 uVar4;
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
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar16;
  undefined8 unaff_x19;
  undefined8 uVar17;
  int iVar18;
  long unaff_x20;
  long lVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  float extraout_s0;
  float extraout_s0_00;
  float fVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_120 [16];
  ulong auStack_110 [3];
  undefined4 uStack_f8;
  int iStack_f4;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar17 = 3;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,param_2);
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  puVar23 = &Core_Networking_MigrationCar__AddUsableUsesLeft;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    puVar23 = &Core_Networking_MigrationCar__AddBattleScore;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      auVar25 = func_0x00f78af4();
      param_1 = auVar25._0_8_;
      if (param_1 != 0) {
        param_4 = 0;
        puStack_38 = &Core_Networking_MigrationCar__AddLapsCompleted;
        if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
          return param_1;
        }
        uVar15 = 0;
        puStack_40 = &stack0xffffffffffffffd0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar25._8_8_);
        uVar17 = 6;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x29 = puStack_40;
        unaff_x30 = puStack_38;
        goto FlatBuffers_FlatBufferBuilder__Slot;
      }
      puStack_38 = &Core_Networking_MigrationCar__AddLapsCompleted;
      puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsX;
      puStack_40 = &stack0xffffffffffffffd0;
      param_1 = func_0x00f78af4();
      if (param_1 == 0) {
        puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsY;
        param_1 = func_0x00f78af4();
        uVar8 = (undefined4)param_4;
        if (param_1 == 0) {
          puVar21 = &stack0xffffffffffffffa0;
          puVar23 = &Core_Networking_MigrationCar__AddHalfway;
          auVar25 = func_0x00f78af4();
          if (auVar25._0_8_ != 0) {
            uVar17 = 9;
            param_4 = 0;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
            goto code_r0x016ce420;
          }
          puStack_68 = &Core_Networking_MigrationCar__AddHalfway;
          puStack_70 = &stack0xffffffffffffffa0;
          lVar11 = func_0x00f78af4();
          puStack_78 = &Core_Networking_MigrationCar__EndMigrationCar;
          lVar19 = 0x3eb5000;
          puStack_80 = (undefined1 *)&puStack_70;
          if ((bRam0000000003eb5813 & 1) == 0) {
            puStack_80 = (undefined1 *)&puStack_70;
            func_0x00f78a20(0x3d3f1b8);
            bRam0000000003eb5813 = 1;
          }
          if (lVar11 == 0) {
            auVar25 = func_0x00f78af4();
            lVar11 = auVar25._8_8_;
            puVar3 = &uStack_e0;
            if (lVar11 == 0) {
              puVar23 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
              auStack_120 = func_0x00f78af4();
              _uStack_f8 = 0;
              puVar3 = (ulong *)extraout_x8_00;
            }
            else {
              unaff_x22 = CONCAT44(0,auVar25._0_4_ + 4);
              auStack_120._8_8_ = lVar11;
              auStack_120._0_8_ = unaff_x22;
              uVar8 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar11,auVar25._0_8_,0);
              puVar23 = &UNK_01658158;
              _uStack_f8 = extraout_x8;
              lVar19 = param_3;
            }
            auStack_110[0] = unaff_x22;
            auStack_110[1] = lVar11;
            auStack_110[2] = lVar19;
            puStack_f0 = &stack0xffffffffffffff60;
            puStack_e8 = puVar23;
            if (auStack_120._8_8_ != 0) {
              uVar4 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_120._8_8_,auStack_120._0_8_,0);
              uVar12 = Core_Networking_CarBase__get_LastHitTime(auStack_120);
              if (param_3 != 0) {
                uVar17 = *(undefined8 *)(param_3 + 0x1b0);
                uVar1 = *(undefined4 *)(param_3 + 0x1a0);
                *(undefined4 *)puVar3 = uVar8;
                *(undefined1 *)((long)puVar3 + 4) = 0;
                *(undefined1 *)((long)puVar3 + 5) = uVar4;
                *(undefined2 *)((long)puVar3 + 6) = 0;
                *(int *)((long)puVar3 + 8) = (int)uVar12;
                *(undefined1 *)((long)puVar3 + 0xc) = 1;
                *(undefined2 *)((long)puVar3 + 0xd) = 0;
                *(undefined1 *)((long)puVar3 + 0xf) = 0;
                *(undefined4 *)((long)puVar3 + 0x10) = uVar1;
                *(undefined4 *)((long)puVar3 + 0x14) = 0;
                *(undefined8 *)((long)puVar3 + 0x18) = uVar17;
                return uVar12;
              }
            }
            auVar27 = func_0x00f78af4();
            uVar12 = auVar27._0_8_;
            uVar17 = *(undefined8 *)(uVar12 + 0x1b0);
            uVar8 = *(undefined4 *)(uVar12 + 0x1a0);
            *extraout_x8_01 = 0;
            extraout_x8_01[1] = 0;
            *(int *)extraout_x8_01 = auVar27._8_4_;
            *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
            *(undefined4 *)(extraout_x8_01 + 1) = uVar8;
            extraout_x8_01[2] = uVar17;
            return uVar12;
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
              uVar2 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar2;
              iVar18 = (int)uVar12;
              if ((int)uVar2 < 0) goto code_r0x016ceb30;
              lVar19 = *(long *)(lVar11 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar2) goto code_r0x016ced88;
            } while (*(int *)(lVar19 + (ulong)uVar2 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar20 = unaff_x22 - 8;
              if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar12 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
              lVar19 = *(long *)(lVar11 + 0x28);
              if (lVar19 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
              *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar14 = uVar2;
            } while (0 < (long)uVar20);
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
              uVar20 = 0;
              do {
                lVar19 = *(long *)(lVar11 + 0x18);
                if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                   (lVar16 = *(long *)(lVar11 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
                uVar2 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                        *(int *)(lVar16 + uVar20 * 4 + 0x20);
                unaff_x21 = (ulong)uVar2;
                uVar14 = *(uint *)(lVar11 + 0x10);
                unaff_x22 = (ulong)uVar14;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar11 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                    *(int *)(lVar11 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar18;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar2 + iVar9,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar20 = uVar20 + 1;
                unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
              } while ((long)uVar20 < (long)unaff_x22);
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
                lVar19 = *(long *)(lVar11 + 0x38);
                if (lVar19 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
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
                  iVar10 = iVar10 - iVar18;
                  iVar9 = iVar9 - iVar18;
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
            uVar17 = func_0x00f78b24();
            func_0x00f78ac0(uVar17,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar17 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6cea8);
          iVar18 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar15);
          uVar15 = func_0x00f78a24(0x3d56a30);
          auVar27 = func_0x00f78ac0(uVar17,uVar15);
          puStack_c8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar22 = &ppuStack_d0;
          _uStack_f8 = CONCAT44(iVar18,uStack_f8);
          lVar19 = *(long *)(auVar27._0_8_ + 0x18);
          puStack_f0 = (undefined1 *)unaff_x22;
          puStack_e8 = (undefined *)unaff_x21;
          uStack_e0 = uVar12;
          uStack_d8 = uVar17;
          ppuStack_d0 = &puStack_80;
          if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar27._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
            lVar19 = *(long *)(auVar27._0_8_ + 0x18);
            if (lVar19 != 0) {
              uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar18,2);
              if ((uVar12 & 0xffff) != 0) {
                return uVar12;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_f4,0);
          uVar15 = func_0x00f78a24(0x3d6ce88);
          uVar13 = func_0x00f78a24(0x3d66338);
          lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar17,uVar13,0);
          func_0x00f78a24(0x3d22a38);
          uVar12 = func_0x00f78aec();
          uVar15 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar19);
          uVar17 = func_0x00f78a24(0x3d56a50);
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78ac0(uVar12,uVar17);
          puVar3 = auStack_110 + 2;
          do {
            uVar20 = auVar25._8_8_;
            lVar11 = auVar25._0_8_;
            *(ulong *)((long)puVar3 + -0x20) = uVar12;
            *(long *)((long)puVar3 + -0x18) = lVar19;
            *(undefined1 ****)((long)puVar3 + -0x10) = pppuVar22;
            *(undefined **)((long)puVar3 + -8) = puVar23;
            pppuVar22 = (undefined1 ***)((long)puVar3 + -0x10);
            if ((int)uVar15 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),4);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
code_r0x016cef70:
              if (*(long *)(lVar11 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18) = *(undefined4 *)(lVar11 + 0x10);
                return uVar12;
              }
            }
            else if (lVar11 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
              if ((*(long *)(lVar11 + 0x18) != 0) &&
                 (lVar19 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10), lVar19 != 0)) {
                uVar20 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar11 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,uVar20);
                goto code_r0x016cef70;
              }
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78af4();
            uVar15 = 0;
            puVar3 = (ulong *)((long)puVar3 + -0x20);
            lVar19 = lVar11;
            uVar12 = uVar20;
          } while( true );
        }
        uVar17 = 8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        fVar24 = extraout_s0_00;
      }
      else {
        uVar17 = 7;
        register0x00000008 = (BADSPACEBASE *)&puStack_40;
        fVar24 = extraout_s0;
      }
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
      *(undefined **)((long)register0x00000008 + -8) = puVar23;
      if (fVar24 == 0.0 && *(char *)(param_1 + 0x48) == '\0') {
        return param_1;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4);
      /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar24,param_1);
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto FlatBuffers_FlatBufferBuilder__Slot;
    }
    uVar17 = 5;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  }
  else {
    uVar17 = 4;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  param_1 = auVar25._0_8_;
  param_4 = 0;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
  *(undefined **)((long)register0x00000008 + -8) = puVar23;
  if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar25._8_8_);
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
  unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
FlatBuffers_FlatBufferBuilder__Slot:
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar14 = (uint)uVar17;
    if ((int)uVar14 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = uVar17;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar17 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar17,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = uVar17;
    }
    uVar17 = func_0x00f78b24();
    puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar26._8_8_;
    auVar25._8_8_ = uVar15;
    auVar25._0_8_ = auVar26._0_8_;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
code_r0x016ce420:
    param_1 = auVar25._0_8_;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar21;
    *(undefined **)((long)register0x00000008 + -8) = puVar23;
    if ((auVar25._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar25._8_8_);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1657fec | Core.Networking.MigrationCar.AddUsableUsesLeft
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddUsableUsesLeft
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  ulong *puVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  long unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined1 ***pppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  float extraout_s0;
  float extraout_s0_00;
  float fVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auStack_110 [16];
  ulong auStack_100 [3];
  undefined4 uStack_e8;
  int iStack_e4;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_MigrationCar__AddBattleScore;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      puStack_18 = &Core_Networking_MigrationCar__AddBattleScore;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar27 = func_0x00f78af4();
      uVar13 = auVar27._0_8_;
      if (uVar13 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Networking_MigrationCar__AddLapsCompleted;
        if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar17 = 0;
        puStack_30 = (undefined1 *)&puStack_20;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
        /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar13,auVar27._8_8_);
        uVar16 = 6;
        ppuVar3 = &puStack_20;
        puVar22 = puStack_30;
        puVar24 = puStack_28;
        goto FlatBuffers_FlatBufferBuilder__Slot;
      }
      ppuVar3 = &puStack_30;
      puStack_28 = &Core_Networking_MigrationCar__AddLapsCompleted;
      puVar24 = &Core_Networking_MigrationCar__AddTrackCoordsX;
      puStack_30 = (undefined1 *)&puStack_20;
      uVar13 = func_0x00f78af4();
      if (uVar13 == 0) {
        ppuVar3 = (undefined1 **)&stack0xffffffffffffffc0;
        puVar24 = &Core_Networking_MigrationCar__AddTrackCoordsY;
        uVar13 = func_0x00f78af4();
        uVar9 = (undefined4)param_4;
        if (uVar13 == 0) {
          ppuVar3 = (undefined1 **)&stack0xffffffffffffffb0;
          puVar22 = &stack0xffffffffffffffb0;
          puVar24 = &Core_Networking_MigrationCar__AddHalfway;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ != 0) {
            uVar16 = 9;
            param_4 = 0;
            goto code_r0x016ce420;
          }
          puStack_58 = &Core_Networking_MigrationCar__AddHalfway;
          puStack_60 = &stack0xffffffffffffffb0;
          lVar12 = func_0x00f78af4();
          puStack_68 = &Core_Networking_MigrationCar__EndMigrationCar;
          lVar20 = 0x3eb5000;
          puStack_70 = (undefined1 *)&puStack_60;
          if ((bRam0000000003eb5813 & 1) == 0) {
            puStack_70 = (undefined1 *)&puStack_60;
            func_0x00f78a20(0x3d3f1b8);
            bRam0000000003eb5813 = 1;
          }
          if (lVar12 == 0) {
            auVar27 = func_0x00f78af4();
            lVar12 = auVar27._8_8_;
            puVar4 = &uStack_d0;
            if (lVar12 == 0) {
              puVar24 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
              auStack_110 = func_0x00f78af4();
              _uStack_e8 = 0;
              puVar4 = (ulong *)extraout_x8_00;
            }
            else {
              unaff_x22 = CONCAT44(0,auVar27._0_4_ + 4);
              auStack_110._8_8_ = lVar12;
              auStack_110._0_8_ = unaff_x22;
              uVar9 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar12,auVar27._0_8_,0);
              puVar24 = &UNK_01658158;
              _uStack_e8 = extraout_x8;
              lVar20 = param_3;
            }
            auStack_100[0] = unaff_x22;
            auStack_100[1] = lVar12;
            auStack_100[2] = lVar20;
            puStack_e0 = &stack0xffffffffffffff70;
            puStack_d8 = puVar24;
            if (auStack_110._8_8_ != 0) {
              uVar5 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_110._8_8_,auStack_110._0_8_,0);
              uVar13 = Core_Networking_CarBase__get_LastHitTime(auStack_110);
              if (param_3 != 0) {
                uVar16 = *(undefined8 *)(param_3 + 0x1b0);
                uVar1 = *(undefined4 *)(param_3 + 0x1a0);
                *(undefined4 *)puVar4 = uVar9;
                *(undefined1 *)((long)puVar4 + 4) = 0;
                *(undefined1 *)((long)puVar4 + 5) = uVar5;
                *(undefined2 *)((long)puVar4 + 6) = 0;
                *(int *)((long)puVar4 + 8) = (int)uVar13;
                *(undefined1 *)((long)puVar4 + 0xc) = 1;
                *(undefined2 *)((long)puVar4 + 0xd) = 0;
                *(undefined1 *)((long)puVar4 + 0xf) = 0;
                *(undefined4 *)((long)puVar4 + 0x10) = uVar1;
                *(undefined4 *)((long)puVar4 + 0x14) = 0;
                *(undefined8 *)((long)puVar4 + 0x18) = uVar16;
                return uVar13;
              }
            }
            auVar28 = func_0x00f78af4();
            uVar13 = auVar28._0_8_;
            uVar16 = *(undefined8 *)(uVar13 + 0x1b0);
            uVar9 = *(undefined4 *)(uVar13 + 0x1a0);
            *extraout_x8_01 = 0;
            extraout_x8_01[1] = 0;
            *(int *)extraout_x8_01 = auVar28._8_4_;
            *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
            *(undefined4 *)(extraout_x8_01 + 1) = uVar9;
            extraout_x8_01[2] = uVar16;
            return uVar13;
          }
          uVar13 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar12 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,0);
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
            unaff_x21 = (ulong)*(uint *)(lVar12 + 0x30);
            uVar15 = *(uint *)(lVar12 + 0x30) - 1;
            if (-2 < (int)uVar15) {
              uVar15 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar15;
            do {
              uVar2 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar2;
              iVar19 = (int)uVar13;
              if ((int)uVar2 < 0) goto code_r0x016ceb30;
              lVar20 = *(long *)(lVar12 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar2) goto code_r0x016ced88;
            } while (*(int *)(lVar20 + (ulong)uVar2 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar21 = unaff_x22 - 8;
              if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
              iVar10 = *(int *)(lVar20 + unaff_x22 * 4);
              sVar6 = 0;
              if (iVar10 != 0) {
                sVar6 = (short)uVar13 - (short)iVar10;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)sVar6);
              lVar20 = *(long *)(lVar12 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
              *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar15 = uVar2;
            } while (0 < (long)uVar21);
code_r0x016ceb30:
            uVar9 = *(undefined4 *)(lVar12 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)((short)uVar13 - (short)uVar9));
            uVar15 = uVar15 * 2 + 6;
            unaff_x21 = (ulong)uVar15;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)uVar15);
            unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
            if (0 < (int)*(uint *)(lVar12 + 0x40)) {
              uVar21 = 0;
              do {
                lVar20 = *(long *)(lVar12 + 0x18);
                if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                   (lVar18 = *(long *)(lVar12 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                uVar2 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                        *(int *)(lVar18 + uVar21 * 4 + 0x20);
                unaff_x21 = (ulong)uVar2;
                uVar15 = *(uint *)(lVar12 + 0x10);
                unaff_x22 = (ulong)uVar15;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),unaff_x22,2);
                if (sVar6 == sVar7) {
                  if (sVar6 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar12 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                    iVar10 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                    if (iVar10 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar12 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                    *(int *)(lVar12 + 0x10) = iVar11;
                    iVar10 = iVar10 - iVar19;
                    goto code_r0x016ced3c;
                  }
                  iVar10 = 2;
                  while( true ) {
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar2 + iVar10,2);
                    if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar15 + iVar10,2);
                    if (sVar7 != sVar8) break;
                    iVar10 = iVar10 + 2;
                    if (sVar6 <= iVar10) goto code_r0x016cec64;
                  }
                }
                uVar21 = uVar21 + 1;
                unaff_x22 = (ulong)*(int *)(lVar12 + 0x40);
              } while ((long)uVar21 < (long)unaff_x22);
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
                lVar20 = *(long *)(lVar12 + 0x38);
                if (lVar20 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                *(ulong *)(lVar12 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
              }
              uVar15 = (uint)unaff_x22;
              *(uint *)(lVar12 + 0x40) = uVar15 + 1;
              uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar9;
                unaff_x21 = *(ulong *)(lVar12 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
                  iVar11 = iVar11 - iVar19;
                  iVar10 = iVar10 - iVar19;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
                  *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
                  return uVar13;
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
          uVar17 = func_0x00f78a24(0x3d6cea8);
          iVar19 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar17);
          uVar17 = func_0x00f78a24(0x3d56a30);
          auVar28 = func_0x00f78ac0(uVar16,uVar17);
          puStack_b8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar23 = &ppuStack_c0;
          _uStack_e8 = CONCAT44(iVar19,uStack_e8);
          lVar20 = *(long *)(auVar28._0_8_ + 0x18);
          puStack_e0 = (undefined1 *)unaff_x22;
          puStack_d8 = (undefined *)unaff_x21;
          uStack_d0 = uVar13;
          uStack_c8 = uVar16;
          ppuStack_c0 = &puStack_70;
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            iVar10 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - auVar28._8_4_;
            iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,iVar10,4);
            lVar20 = *(long *)(auVar28._0_8_ + 0x18);
            if (lVar20 != 0) {
              uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,(iVar10 - iVar11) + iVar19,2);
              if ((uVar13 & 0xffff) != 0) {
                return uVar13;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e4,0);
          uVar17 = func_0x00f78a24(0x3d6ce88);
          uVar14 = func_0x00f78a24(0x3d66338);
          lVar20 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar16,uVar14,0);
          func_0x00f78a24(0x3d22a38);
          uVar13 = func_0x00f78aec();
          uVar17 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar20);
          uVar16 = func_0x00f78a24(0x3d56a50);
          puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar27 = func_0x00f78ac0(uVar13,uVar16);
          puVar4 = auStack_100 + 2;
          do {
            uVar21 = auVar27._8_8_;
            lVar12 = auVar27._0_8_;
            *(ulong *)((long)puVar4 + -0x20) = uVar13;
            *(long *)((long)puVar4 + -0x18) = lVar20;
            *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar23;
            *(undefined **)((long)puVar4 + -8) = puVar24;
            pppuVar23 = (undefined1 ***)((long)puVar4 + -0x10);
            if ((int)uVar17 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),4);
              uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar21);
code_r0x016cef70:
              if (*(long *)(lVar12 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x18) = *(undefined4 *)(lVar12 + 0x10);
                return uVar13;
              }
            }
            else if (lVar12 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar21);
              if ((*(long *)(lVar12 + 0x18) != 0) &&
                 (lVar20 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar20 != 0)) {
                uVar21 = (ulong)(uint)(*(int *)(lVar20 + 0x18) - *(int *)(lVar12 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,uVar21);
                goto code_r0x016cef70;
              }
            }
            puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar27 = func_0x00f78af4();
            uVar17 = 0;
            puVar4 = (ulong *)((long)puVar4 + -0x20);
            lVar20 = lVar12;
            uVar13 = uVar21;
          } while( true );
        }
        uVar16 = 8;
        fVar25 = extraout_s0_00;
      }
      else {
        uVar16 = 7;
        fVar25 = extraout_s0;
      }
      *(undefined8 *)((long)ppuVar3 + -0x30) = unaff_d9;
      *(undefined8 *)((long)ppuVar3 + -0x28) = unaff_d8;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar3;
      *(undefined **)((long)ppuVar3 + -8) = puVar24;
      if (fVar25 == 0.0 && *(char *)(uVar13 + 0x48) == '\0') {
        return uVar13;
      }
      uVar17 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4);
      /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar25,uVar13);
      puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
      puVar24 = *(undefined **)((long)ppuVar3 + -8);
      unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
      unaff_x19 = *(undefined8 *)((long)ppuVar3 + -0x18);
      goto FlatBuffers_FlatBufferBuilder__Slot;
    }
    uVar16 = 5;
  }
  else {
    uVar16 = 4;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar13 = auVar27._0_8_;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
    return uVar13;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar13,auVar27._8_8_);
  unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
  unaff_x19 = *(undefined8 *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
  puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)ppuVar3 + -8);
FlatBuffers_FlatBufferBuilder__Slot:
  do {
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
    *(undefined **)((long)ppuVar3 + -8) = puVar24;
    puVar22 = (undefined1 *)((long)ppuVar3 + -0x10);
    uVar15 = (uint)uVar16;
    if ((int)uVar15 < *(int *)(uVar13 + 0x30)) {
      unaff_x20 = *(long *)(uVar13 + 0x28);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = uVar16;
      if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar13;
        return uVar13;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar16 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar17 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar16,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = uVar16;
    }
    uVar16 = func_0x00f78b24();
    puVar24 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar27 = func_0x00f78ac0(uVar16,0);
    uVar16 = auVar27._8_8_;
    auVar26._8_8_ = uVar17;
    auVar26._0_8_ = auVar27._0_8_;
    ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
code_r0x016ce420:
    uVar13 = auVar26._0_8_;
    *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
    *(undefined **)((long)ppuVar3 + -8) = puVar24;
    if ((auVar26._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
      return uVar13;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar26._8_8_);
    unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
    unaff_x19 = *(undefined8 *)((long)ppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
    puVar22 = *(undefined1 **)((long)ppuVar3 + -0x10);
    puVar24 = *(undefined **)((long)ppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1658010 | Core.Networking.MigrationCar.AddBattleScore
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddBattleScore
                (ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 uVar4;
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
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar16;
  undefined8 unaff_x19;
  undefined8 uVar17;
  int iVar18;
  long unaff_x20;
  long lVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  float extraout_s0;
  float extraout_s0_00;
  float fVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_100 [16];
  ulong auStack_f0 [3];
  undefined4 uStack_d8;
  int iStack_d4;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar17 = 5;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_2);
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar25 = func_0x00f78af4();
  param_1 = auVar25._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar25._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar25._8_8_);
    uVar17 = 6;
    unaff_x30 = &Core_Networking_MigrationCar__AddLapsCompleted;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsX;
  param_1 = func_0x00f78af4();
  if (param_1 == 0) {
    puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsY;
    param_1 = func_0x00f78af4();
    uVar8 = (undefined4)param_4;
    if (param_1 == 0) {
      puVar21 = &stack0xffffffffffffffc0;
      puVar23 = &Core_Networking_MigrationCar__AddHalfway;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ != 0) {
        uVar17 = 9;
        param_4 = 0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        goto code_r0x016ce420;
      }
      puStack_48 = &Core_Networking_MigrationCar__AddHalfway;
      puStack_50 = &stack0xffffffffffffffc0;
      lVar11 = func_0x00f78af4();
      puStack_58 = &Core_Networking_MigrationCar__EndMigrationCar;
      lVar19 = 0x3eb5000;
      puStack_60 = (undefined1 *)&puStack_50;
      if ((bRam0000000003eb5813 & 1) == 0) {
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x00f78a20(0x3d3f1b8);
        bRam0000000003eb5813 = 1;
      }
      if (lVar11 == 0) {
        auVar25 = func_0x00f78af4();
        lVar11 = auVar25._8_8_;
        puVar3 = &uStack_c0;
        if (lVar11 == 0) {
          puVar23 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
          auStack_100 = func_0x00f78af4();
          _uStack_d8 = 0;
          puVar3 = (ulong *)extraout_x8_00;
        }
        else {
          unaff_x22 = CONCAT44(0,auVar25._0_4_ + 4);
          auStack_100._8_8_ = lVar11;
          auStack_100._0_8_ = unaff_x22;
          uVar8 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar11,auVar25._0_8_,0);
          puVar23 = &UNK_01658158;
          _uStack_d8 = extraout_x8;
          lVar19 = param_3;
        }
        auStack_f0[0] = unaff_x22;
        auStack_f0[1] = lVar11;
        auStack_f0[2] = lVar19;
        puStack_d0 = &stack0xffffffffffffff80;
        puStack_c8 = puVar23;
        if (auStack_100._8_8_ != 0) {
          uVar4 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_100._8_8_,auStack_100._0_8_,0);
          uVar12 = Core_Networking_CarBase__get_LastHitTime(auStack_100);
          if (param_3 != 0) {
            uVar17 = *(undefined8 *)(param_3 + 0x1b0);
            uVar1 = *(undefined4 *)(param_3 + 0x1a0);
            *(undefined4 *)puVar3 = uVar8;
            *(undefined1 *)((long)puVar3 + 4) = 0;
            *(undefined1 *)((long)puVar3 + 5) = uVar4;
            *(undefined2 *)((long)puVar3 + 6) = 0;
            *(int *)((long)puVar3 + 8) = (int)uVar12;
            *(undefined1 *)((long)puVar3 + 0xc) = 1;
            *(undefined2 *)((long)puVar3 + 0xd) = 0;
            *(undefined1 *)((long)puVar3 + 0xf) = 0;
            *(undefined4 *)((long)puVar3 + 0x10) = uVar1;
            *(undefined4 *)((long)puVar3 + 0x14) = 0;
            *(undefined8 *)((long)puVar3 + 0x18) = uVar17;
            return uVar12;
          }
        }
        auVar27 = func_0x00f78af4();
        uVar12 = auVar27._0_8_;
        uVar17 = *(undefined8 *)(uVar12 + 0x1b0);
        uVar8 = *(undefined4 *)(uVar12 + 0x1a0);
        *extraout_x8_01 = 0;
        extraout_x8_01[1] = 0;
        *(int *)extraout_x8_01 = auVar27._8_4_;
        *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
        *(undefined4 *)(extraout_x8_01 + 1) = uVar8;
        extraout_x8_01[2] = uVar17;
        return uVar12;
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
          uVar2 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar2;
          iVar18 = (int)uVar12;
          if ((int)uVar2 < 0) goto code_r0x016ceb30;
          lVar19 = *(long *)(lVar11 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar2) goto code_r0x016ced88;
        } while (*(int *)(lVar19 + (ulong)uVar2 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar20 = unaff_x22 - 8;
          if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar12 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
          lVar19 = *(long *)(lVar11 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
          *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar14 = uVar2;
        } while (0 < (long)uVar20);
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
          uVar20 = 0;
          do {
            lVar19 = *(long *)(lVar11 + 0x18);
            if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar11 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
            uVar2 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar16 + uVar20 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar2;
            uVar14 = *(uint *)(lVar11 + 0x10);
            unaff_x22 = (ulong)uVar14;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar11 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                *(int *)(lVar11 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar18;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar2 + iVar9,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
              }
            }
            uVar20 = uVar20 + 1;
            unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
          } while ((long)uVar20 < (long)unaff_x22);
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
            lVar19 = *(long *)(lVar11 + 0x38);
            if (lVar19 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
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
              iVar10 = iVar10 - iVar18;
              iVar9 = iVar9 - iVar18;
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
        uVar17 = func_0x00f78b24();
        func_0x00f78ac0(uVar17,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar17 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar27 = func_0x00f78ac0(uVar17,uVar15);
      puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar22 = &ppuStack_b0;
      _uStack_d8 = CONCAT44(iVar18,uStack_d8);
      lVar19 = *(long *)(auVar27._0_8_ + 0x18);
      puStack_d0 = (undefined1 *)unaff_x22;
      puStack_c8 = (undefined *)unaff_x21;
      uStack_c0 = uVar12;
      uStack_b8 = uVar17;
      ppuStack_b0 = &puStack_60;
      if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar27._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
        lVar19 = *(long *)(auVar27._0_8_ + 0x18);
        if (lVar19 != 0) {
          uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar18,2);
          if ((uVar12 & 0xffff) != 0) {
            return uVar12;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar13 = func_0x00f78a24(0x3d66338);
      lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar17,uVar13,0);
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar19);
      uVar17 = func_0x00f78a24(0x3d56a50);
      puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar25 = func_0x00f78ac0(uVar12,uVar17);
      puVar3 = auStack_f0 + 2;
      do {
        uVar20 = auVar25._8_8_;
        lVar11 = auVar25._0_8_;
        *(ulong *)((long)puVar3 + -0x20) = uVar12;
        *(long *)((long)puVar3 + -0x18) = lVar19;
        *(undefined1 ****)((long)puVar3 + -0x10) = pppuVar22;
        *(undefined **)((long)puVar3 + -8) = puVar23;
        pppuVar22 = (undefined1 ***)((long)puVar3 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),4);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
code_r0x016cef70:
          if (*(long *)(lVar11 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18) = *(undefined4 *)(lVar11 + 0x10);
            return uVar12;
          }
        }
        else if (lVar11 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
          if ((*(long *)(lVar11 + 0x18) != 0) &&
             (lVar19 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10), lVar19 != 0)) {
            uVar20 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar11 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,uVar20);
            goto code_r0x016cef70;
          }
        }
        puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar25 = func_0x00f78af4();
        uVar15 = 0;
        puVar3 = (ulong *)((long)puVar3 + -0x20);
        lVar19 = lVar11;
        uVar12 = uVar20;
      } while( true );
    }
    uVar17 = 8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    fVar24 = extraout_s0_00;
  }
  else {
    uVar17 = 7;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    fVar24 = extraout_s0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
  *(undefined **)((long)register0x00000008 + -8) = puVar23;
  if (fVar24 == 0.0 && *(char *)(param_1 + 0x48) == '\0') {
    return param_1;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar24,param_1);
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
FlatBuffers_FlatBufferBuilder__Slot:
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar14 = (uint)uVar17;
    if ((int)uVar14 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = uVar17;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar17 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar17,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = uVar17;
    }
    uVar17 = func_0x00f78b24();
    puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar26._8_8_;
    auVar25._8_8_ = uVar15;
    auVar25._0_8_ = auVar26._0_8_;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
code_r0x016ce420:
    param_1 = auVar25._0_8_;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar21;
    *(undefined **)((long)register0x00000008 + -8) = puVar23;
    if ((auVar25._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar25._8_8_);
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1658034 | Core.Networking.MigrationCar.AddLapsCompleted
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddLapsCompleted
                (ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 uVar4;
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
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar16;
  undefined8 unaff_x19;
  undefined8 uVar17;
  int iVar18;
  long unaff_x20;
  long lVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined8 unaff_x29;
  undefined1 *puVar21;
  undefined1 ***pppuVar22;
  undefined8 unaff_x30;
  undefined *puVar23;
  float extraout_s0;
  float extraout_s0_00;
  float fVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_f0 [16];
  ulong auStack_e0 [3];
  undefined4 uStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
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
    uVar17 = 6;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_2);
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsX;
  param_1 = func_0x00f78af4();
  if (param_1 == 0) {
    puVar23 = &Core_Networking_MigrationCar__AddTrackCoordsY;
    param_1 = func_0x00f78af4();
    uVar8 = (undefined4)param_4;
    if (param_1 == 0) {
      puVar21 = &stack0xffffffffffffffd0;
      puVar23 = &Core_Networking_MigrationCar__AddHalfway;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ != 0) {
        uVar17 = 9;
        param_4 = 0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        goto code_r0x016ce420;
      }
      puStack_38 = &Core_Networking_MigrationCar__AddHalfway;
      puStack_40 = &stack0xffffffffffffffd0;
      lVar11 = func_0x00f78af4();
      puStack_48 = &Core_Networking_MigrationCar__EndMigrationCar;
      lVar19 = 0x3eb5000;
      puStack_50 = (undefined1 *)&puStack_40;
      if ((bRam0000000003eb5813 & 1) == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        func_0x00f78a20(0x3d3f1b8);
        bRam0000000003eb5813 = 1;
      }
      if (lVar11 == 0) {
        auVar25 = func_0x00f78af4();
        lVar11 = auVar25._8_8_;
        puVar3 = &uStack_b0;
        if (lVar11 == 0) {
          puVar23 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
          auStack_f0 = func_0x00f78af4();
          _uStack_c8 = 0;
          puVar3 = (ulong *)extraout_x8_00;
        }
        else {
          unaff_x22 = CONCAT44(0,auVar25._0_4_ + 4);
          auStack_f0._8_8_ = lVar11;
          auStack_f0._0_8_ = unaff_x22;
          uVar8 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar11,auVar25._0_8_,0);
          puVar23 = &UNK_01658158;
          _uStack_c8 = extraout_x8;
          lVar19 = param_3;
        }
        auStack_e0[0] = unaff_x22;
        auStack_e0[1] = lVar11;
        auStack_e0[2] = lVar19;
        puStack_c0 = &stack0xffffffffffffff90;
        puStack_b8 = puVar23;
        if (auStack_f0._8_8_ != 0) {
          uVar4 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_f0._8_8_,auStack_f0._0_8_,0);
          uVar12 = Core_Networking_CarBase__get_LastHitTime(auStack_f0);
          if (param_3 != 0) {
            uVar17 = *(undefined8 *)(param_3 + 0x1b0);
            uVar1 = *(undefined4 *)(param_3 + 0x1a0);
            *(undefined4 *)puVar3 = uVar8;
            *(undefined1 *)((long)puVar3 + 4) = 0;
            *(undefined1 *)((long)puVar3 + 5) = uVar4;
            *(undefined2 *)((long)puVar3 + 6) = 0;
            *(int *)((long)puVar3 + 8) = (int)uVar12;
            *(undefined1 *)((long)puVar3 + 0xc) = 1;
            *(undefined2 *)((long)puVar3 + 0xd) = 0;
            *(undefined1 *)((long)puVar3 + 0xf) = 0;
            *(undefined4 *)((long)puVar3 + 0x10) = uVar1;
            *(undefined4 *)((long)puVar3 + 0x14) = 0;
            *(undefined8 *)((long)puVar3 + 0x18) = uVar17;
            return uVar12;
          }
        }
        auVar27 = func_0x00f78af4();
        uVar12 = auVar27._0_8_;
        uVar17 = *(undefined8 *)(uVar12 + 0x1b0);
        uVar8 = *(undefined4 *)(uVar12 + 0x1a0);
        *extraout_x8_01 = 0;
        extraout_x8_01[1] = 0;
        *(int *)extraout_x8_01 = auVar27._8_4_;
        *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
        *(undefined4 *)(extraout_x8_01 + 1) = uVar8;
        extraout_x8_01[2] = uVar17;
        return uVar12;
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
          uVar2 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar2;
          iVar18 = (int)uVar12;
          if ((int)uVar2 < 0) goto code_r0x016ceb30;
          lVar19 = *(long *)(lVar11 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar2) goto code_r0x016ced88;
        } while (*(int *)(lVar19 + (ulong)uVar2 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar20 = unaff_x22 - 8;
          if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
          sVar5 = 0;
          if (iVar9 != 0) {
            sVar5 = (short)uVar12 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
          lVar19 = *(long *)(lVar11 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
          *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar14 = uVar2;
        } while (0 < (long)uVar20);
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
          uVar20 = 0;
          do {
            lVar19 = *(long *)(lVar11 + 0x18);
            if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar11 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
            uVar2 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar16 + uVar20 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar2;
            uVar14 = *(uint *)(lVar11 + 0x10);
            unaff_x22 = (ulong)uVar14;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
            if (sVar5 == sVar6) {
              if (sVar5 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar11 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                *(int *)(lVar11 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar18;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar2 + iVar9,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                if (sVar6 != sVar7) break;
                iVar9 = iVar9 + 2;
                if (sVar5 <= iVar9) goto code_r0x016cec64;
              }
            }
            uVar20 = uVar20 + 1;
            unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
          } while ((long)uVar20 < (long)unaff_x22);
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
            lVar19 = *(long *)(lVar11 + 0x38);
            if (lVar19 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
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
              iVar10 = iVar10 - iVar18;
              iVar9 = iVar9 - iVar18;
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
        uVar17 = func_0x00f78b24();
        func_0x00f78ac0(uVar17,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar17 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar27 = func_0x00f78ac0(uVar17,uVar15);
      puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar22 = &ppuStack_a0;
      _uStack_c8 = CONCAT44(iVar18,uStack_c8);
      lVar19 = *(long *)(auVar27._0_8_ + 0x18);
      puStack_c0 = (undefined1 *)unaff_x22;
      puStack_b8 = (undefined *)unaff_x21;
      uStack_b0 = uVar12;
      uStack_a8 = uVar17;
      ppuStack_a0 = &puStack_50;
      if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar27._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
        lVar19 = *(long *)(auVar27._0_8_ + 0x18);
        if (lVar19 != 0) {
          uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar18,2);
          if ((uVar12 & 0xffff) != 0) {
            return uVar12;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar13 = func_0x00f78a24(0x3d66338);
      lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar17,uVar13,0);
      func_0x00f78a24(0x3d22a38);
      uVar12 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar19);
      uVar17 = func_0x00f78a24(0x3d56a50);
      puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar25 = func_0x00f78ac0(uVar12,uVar17);
      puVar3 = auStack_e0 + 2;
      do {
        uVar20 = auVar25._8_8_;
        lVar11 = auVar25._0_8_;
        *(ulong *)((long)puVar3 + -0x20) = uVar12;
        *(long *)((long)puVar3 + -0x18) = lVar19;
        *(undefined1 ****)((long)puVar3 + -0x10) = pppuVar22;
        *(undefined **)((long)puVar3 + -8) = puVar23;
        pppuVar22 = (undefined1 ***)((long)puVar3 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),4);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
code_r0x016cef70:
          if (*(long *)(lVar11 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18) = *(undefined4 *)(lVar11 + 0x10);
            return uVar12;
          }
        }
        else if (lVar11 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
          if ((*(long *)(lVar11 + 0x18) != 0) &&
             (lVar19 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10), lVar19 != 0)) {
            uVar20 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar11 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,uVar20);
            goto code_r0x016cef70;
          }
        }
        puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar25 = func_0x00f78af4();
        uVar15 = 0;
        puVar3 = (ulong *)((long)puVar3 + -0x20);
        lVar19 = lVar11;
        uVar12 = uVar20;
      } while( true );
    }
    uVar17 = 8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    fVar24 = extraout_s0_00;
  }
  else {
    uVar17 = 7;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    fVar24 = extraout_s0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x10) = register0x00000008;
  *(undefined **)((long)register0x00000008 + -8) = puVar23;
  if (fVar24 == 0.0 && *(char *)(param_1 + 0x48) == '\0') {
    return param_1;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(fVar24,param_1);
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
  unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
FlatBuffers_FlatBufferBuilder__Slot:
  do {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar14 = (uint)uVar17;
    if ((int)uVar14 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = uVar17;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar17 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar17,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = uVar17;
    }
    uVar17 = func_0x00f78b24();
    puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar17,0);
    uVar17 = auVar26._8_8_;
    auVar25._8_8_ = uVar15;
    auVar25._0_8_ = auVar26._0_8_;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
code_r0x016ce420:
    param_1 = auVar25._0_8_;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar21;
    *(undefined **)((long)register0x00000008 + -8) = puVar23;
    if ((auVar25._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar25._8_8_);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1658058 | Core.Networking.MigrationCar.AddTrackCoordsX
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddTrackCoordsX
                (float param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  ulong *puVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar19;
  undefined8 unaff_x19;
  undefined8 uVar20;
  int iVar21;
  long unaff_x20;
  long lVar22;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined1 *unaff_x29;
  undefined1 **ppuVar24;
  undefined1 ***pppuVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  float extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 auStack_e0 [16];
  ulong auStack_d0 [3];
  undefined4 uStack_b8;
  int iStack_b4;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
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
  
  if (param_2 != 0) {
    uVar17 = 7;
    ppuVar3 = (undefined1 **)register0x00000008;
FlatBuffers_FlatBufferBuilder__AddFloat:
    *(undefined8 *)((long)ppuVar3 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppuVar3 + -0x28) = unaff_d8;
    *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar3 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
    if (param_1 == 0.0 && *(char *)(param_2 + 0x48) == '\0') {
      return param_2;
    }
    uVar18 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_2);
    uVar14 = *(undefined8 *)((long)ppuVar3 + -0x10);
    uVar15 = *(undefined8 *)((long)ppuVar3 + -8);
    unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
    uVar20 = *(undefined8 *)((long)ppuVar3 + -0x18);
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
  unaff_x29 = &stack0xfffffffffffffff0;
  unaff_x30 = &Core_Networking_MigrationCar__AddTrackCoordsY;
  param_2 = func_0x00f78af4();
  uVar9 = (undefined4)param_5;
  if (param_2 != 0) {
    uVar17 = 8;
    param_1 = extraout_s0;
    goto FlatBuffers_FlatBufferBuilder__AddFloat;
  }
  ppuVar3 = &puStack_20;
  ppuVar24 = &puStack_20;
  puStack_18 = &Core_Networking_MigrationCar__AddTrackCoordsY;
  puVar26 = &Core_Networking_MigrationCar__AddHalfway;
  puStack_20 = &stack0xfffffffffffffff0;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ != 0) {
    uVar17 = 9;
    param_5 = 0;
    do {
      param_2 = auVar27._0_8_;
      *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar24;
      *(undefined **)((long)ppuVar3 + -8) = puVar26;
      if ((auVar27._8_4_ == (int)param_5) && (*(char *)(param_2 + 0x48) == '\0')) {
        return param_2;
      }
      uVar18 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_2,auVar27._8_8_);
      uVar14 = *(undefined8 *)((long)ppuVar3 + -0x10);
      uVar15 = *(undefined8 *)((long)ppuVar3 + -8);
      unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
      uVar20 = *(undefined8 *)((long)ppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
FlatBuffers_FlatBufferBuilder__Slot:
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(undefined8 *)((long)ppuVar3 + -0x18) = uVar20;
      *(undefined8 *)((long)ppuVar3 + -0x10) = uVar14;
      *(undefined8 *)((long)ppuVar3 + -8) = uVar15;
      ppuVar24 = (undefined1 **)((long)ppuVar3 + -0x10);
      uVar16 = (uint)uVar17;
      if ((int)uVar16 < *(int *)(param_2 + 0x30)) {
        unaff_x20 = *(long *)(param_2 + 0x28);
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        unaff_x19 = uVar17;
        if (uVar16 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar13;
          return uVar13;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar17 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d6ceb8);
        uVar18 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar17,uVar14);
        uVar14 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar17,uVar14);
code_r0x016ce410:
        func_0x00f78af4();
        unaff_x19 = uVar17;
      }
      uVar17 = func_0x00f78b24();
      puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar28 = func_0x00f78ac0(uVar17,0);
      uVar17 = auVar28._8_8_;
      auVar27._8_8_ = uVar18;
      auVar27._0_8_ = auVar28._0_8_;
      ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
    } while( true );
  }
  puStack_28 = &Core_Networking_MigrationCar__AddHalfway;
  puStack_30 = (undefined1 *)&puStack_20;
  lVar12 = func_0x00f78af4();
  puStack_38 = &Core_Networking_MigrationCar__EndMigrationCar;
  lVar22 = 0x3eb5000;
  puStack_40 = (undefined1 *)&puStack_30;
  if ((bRam0000000003eb5813 & 1) == 0) {
    puStack_40 = (undefined1 *)&puStack_30;
    func_0x00f78a20(0x3d3f1b8);
    bRam0000000003eb5813 = 1;
  }
  if (lVar12 == 0) {
    auVar27 = func_0x00f78af4();
    lVar12 = auVar27._8_8_;
    puVar4 = &uStack_a0;
    if (lVar12 == 0) {
      puVar26 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
      auStack_e0 = func_0x00f78af4();
      _uStack_b8 = 0;
      puVar4 = (ulong *)extraout_x8_00;
    }
    else {
      unaff_x22 = CONCAT44(0,auVar27._0_4_ + 4);
      auStack_e0._8_8_ = lVar12;
      auStack_e0._0_8_ = unaff_x22;
      uVar9 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar12,auVar27._0_8_,0);
      puVar26 = &UNK_01658158;
      _uStack_b8 = extraout_x8;
      lVar22 = param_4;
    }
    auStack_d0[0] = unaff_x22;
    auStack_d0[1] = lVar12;
    auStack_d0[2] = lVar22;
    puStack_b0 = &stack0xffffffffffffffa0;
    puStack_a8 = puVar26;
    if (auStack_e0._8_8_ != 0) {
      uVar5 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_e0._8_8_,auStack_e0._0_8_,0);
      uVar13 = Core_Networking_CarBase__get_LastHitTime(auStack_e0);
      if (param_4 != 0) {
        uVar17 = *(undefined8 *)(param_4 + 0x1b0);
        uVar1 = *(undefined4 *)(param_4 + 0x1a0);
        *(undefined4 *)puVar4 = uVar9;
        *(undefined1 *)((long)puVar4 + 4) = 0;
        *(undefined1 *)((long)puVar4 + 5) = uVar5;
        *(undefined2 *)((long)puVar4 + 6) = 0;
        *(int *)((long)puVar4 + 8) = (int)uVar13;
        *(undefined1 *)((long)puVar4 + 0xc) = 1;
        *(undefined2 *)((long)puVar4 + 0xd) = 0;
        *(undefined1 *)((long)puVar4 + 0xf) = 0;
        *(undefined4 *)((long)puVar4 + 0x10) = uVar1;
        *(undefined4 *)((long)puVar4 + 0x14) = 0;
        *(undefined8 *)((long)puVar4 + 0x18) = uVar17;
        return uVar13;
      }
    }
    auVar29 = func_0x00f78af4();
    uVar13 = auVar29._0_8_;
    uVar17 = *(undefined8 *)(uVar13 + 0x1b0);
    uVar9 = *(undefined4 *)(uVar13 + 0x1a0);
    *extraout_x8_01 = 0;
    extraout_x8_01[1] = 0;
    *(int *)extraout_x8_01 = auVar29._8_4_;
    *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
    *(undefined4 *)(extraout_x8_01 + 1) = uVar9;
    extraout_x8_01[2] = uVar17;
    return uVar13;
  }
  uVar13 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar12 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,0);
    uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
    unaff_x21 = (ulong)*(uint *)(lVar12 + 0x30);
    uVar16 = *(uint *)(lVar12 + 0x30) - 1;
    if (-2 < (int)uVar16) {
      uVar16 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar16;
    do {
      uVar2 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar2;
      iVar21 = (int)uVar13;
      if ((int)uVar2 < 0) goto code_r0x016ceb30;
      lVar22 = *(long *)(lVar12 + 0x28);
      if (lVar22 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar22 + 0x18) <= uVar2) goto code_r0x016ced88;
    } while (*(int *)(lVar22 + (ulong)uVar2 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar23 = unaff_x22 - 8;
      if (*(uint *)(lVar22 + 0x18) <= uVar23) goto code_r0x016ced88;
      iVar10 = *(int *)(lVar22 + unaff_x22 * 4);
      sVar6 = 0;
      if (iVar10 != 0) {
        sVar6 = (short)uVar13 - (short)iVar10;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)sVar6);
      lVar22 = *(long *)(lVar12 + 0x28);
      if (lVar22 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar22 + 0x18) <= uVar23) goto code_r0x016ced88;
      *(undefined4 *)(lVar22 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar16 = uVar2;
    } while (0 < (long)uVar23);
code_r0x016ceb30:
    uVar9 = *(undefined4 *)(lVar12 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)((short)uVar13 - (short)uVar9));
    uVar16 = uVar16 * 2 + 6;
    unaff_x21 = (ulong)uVar16;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar12,(int)(short)uVar16);
    unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
    if (0 < (int)*(uint *)(lVar12 + 0x40)) {
      uVar23 = 0;
      do {
        lVar22 = *(long *)(lVar12 + 0x18);
        if (((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) ||
           (lVar19 = *(long *)(lVar12 + 0x38), lVar19 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar19 + 0x18) <= uVar23) goto code_r0x016ced88;
        uVar2 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) - *(int *)(lVar19 + uVar23 * 4 + 0x20);
        unaff_x21 = (ulong)uVar2;
        uVar16 = *(uint *)(lVar12 + 0x10);
        unaff_x22 = (ulong)uVar16;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,unaff_x21,2);
        if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),unaff_x22,2);
        if (sVar6 == sVar7) {
          if (sVar6 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar12 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
            iVar10 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
            if (iVar10 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar12 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar21;
            *(int *)(lVar12 + 0x10) = iVar11;
            iVar10 = iVar10 - iVar21;
            goto code_r0x016ced3c;
          }
          iVar10 = 2;
          while( true ) {
            if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar2 + iVar10,2);
            if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar12 + 0x18),uVar16 + iVar10,2);
            if (sVar7 != sVar8) break;
            iVar10 = iVar10 + 2;
            if (sVar6 <= iVar10) goto code_r0x016cec64;
          }
        }
        uVar23 = uVar23 + 1;
        unaff_x22 = (ulong)*(int *)(lVar12 + 0x40);
      } while ((long)uVar23 < (long)unaff_x22);
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
        lVar22 = *(long *)(lVar12 + 0x38);
        if (lVar22 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar22,unaff_x21,*(undefined4 *)(lVar22 + 0x18),0);
        *(ulong *)(lVar12 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar12 + 0x40);
      }
      uVar16 = (uint)unaff_x22;
      *(uint *)(lVar12 + 0x40) = uVar16 + 1;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar9;
        unaff_x21 = *(ulong *)(lVar12 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar12);
          iVar11 = iVar11 - iVar21;
          iVar10 = iVar10 - iVar21;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
          *(undefined4 *)(lVar12 + 0x30) = 0xffffffff;
          return uVar13;
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
  iVar21 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar14);
  uVar14 = func_0x00f78a24(0x3d56a30);
  auVar29 = func_0x00f78ac0(uVar17,uVar14);
  puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
  pppuVar25 = &ppuStack_90;
  _uStack_b8 = CONCAT44(iVar21,uStack_b8);
  lVar22 = *(long *)(auVar29._0_8_ + 0x18);
  puStack_b0 = (undefined1 *)unaff_x22;
  puStack_a8 = (undefined *)unaff_x21;
  uStack_a0 = uVar13;
  uStack_98 = uVar17;
  ppuStack_90 = &puStack_40;
  if ((lVar22 != 0) && (*(long *)(lVar22 + 0x10) != 0)) {
    iVar10 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) - auVar29._8_4_;
    iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,iVar10,4);
    lVar22 = *(long *)(auVar29._0_8_ + 0x18);
    if (lVar22 != 0) {
      uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,(iVar10 - iVar11) + iVar21,2);
      if ((uVar13 & 0xffff) != 0) {
        return uVar13;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
  uVar14 = func_0x00f78a24(0x3d6ce88);
  uVar15 = func_0x00f78a24(0x3d66338);
  lVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar17,uVar15,0);
  func_0x00f78a24(0x3d22a38);
  uVar13 = func_0x00f78aec();
  uVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar22);
  uVar17 = func_0x00f78a24(0x3d56a50);
  puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar27 = func_0x00f78ac0(uVar13,uVar17);
  puVar4 = auStack_d0 + 2;
  do {
    uVar23 = auVar27._8_8_;
    lVar12 = auVar27._0_8_;
    *(ulong *)((long)puVar4 + -0x20) = uVar13;
    *(long *)((long)puVar4 + -0x18) = lVar22;
    *(undefined1 ****)((long)puVar4 + -0x10) = pppuVar25;
    *(undefined **)((long)puVar4 + -8) = puVar26;
    pppuVar25 = (undefined1 ***)((long)puVar4 + -0x10);
    if ((int)uVar14 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),4);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar23);
code_r0x016cef70:
      if (*(long *)(lVar12 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x18) = *(undefined4 *)(lVar12 + 0x10);
        return uVar13;
      }
    }
    else if (lVar12 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,*(undefined4 *)(lVar12 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar12,uVar23);
      if ((*(long *)(lVar12 + 0x18) != 0) &&
         (lVar22 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10), lVar22 != 0)) {
        uVar23 = (ulong)(uint)(*(int *)(lVar22 + 0x18) - *(int *)(lVar12 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar12,4,0);
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar12,uVar23);
        goto code_r0x016cef70;
      }
    }
    puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar27 = func_0x00f78af4();
    uVar14 = 0;
    puVar4 = (ulong *)((long)puVar4 + -0x20);
    lVar22 = lVar12;
    uVar13 = uVar23;
  } while( true );
}



// ============================================================
// RVA: 0x1658078 | Core.Networking.MigrationCar.AddTrackCoordsY
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddTrackCoordsY
                (float param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined1 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar18;
  undefined8 unaff_x19;
  undefined8 uVar19;
  int iVar20;
  long unaff_x20;
  long lVar21;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar22;
  undefined8 unaff_x29;
  undefined1 **ppuVar23;
  undefined8 unaff_x30;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined1 auStack_d0 [16];
  ulong auStack_c0 [3];
  undefined4 uStack_a8;
  int iStack_a4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  uVar10 = (undefined4)param_5;
  if (param_2 != 0) {
    if (param_1 == 0.0 && *(char *)(param_2 + 0x48) == '\0') {
      return param_2;
    }
    uVar19 = 8;
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_2);
    goto FlatBuffers_FlatBufferBuilder__Slot;
  }
  puVar24 = &Core_Networking_MigrationCar__AddHalfway;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ != 0) {
    uVar19 = 9;
    param_5 = 0;
    puVar3 = &stack0xfffffffffffffff0;
    puVar4 = (undefined1 *)register0x00000008;
    do {
      register0x00000008 = (BADSPACEBASE *)puVar3;
      param_2 = auVar25._0_8_;
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = puVar4 + -0x10;
      *(undefined **)((long)register0x00000008 + -8) = puVar24;
      if ((auVar25._8_4_ == (int)param_5) && (*(char *)(param_2 + 0x48) == '\0')) {
        return param_2;
      }
      uVar17 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_2,auVar25._8_8_);
      unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
      unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -0x28);
FlatBuffers_FlatBufferBuilder__Slot:
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar16 = (uint)uVar19;
      if ((int)uVar16 < *(int *)(param_2 + 0x30)) {
        unaff_x20 = *(long *)(param_2 + 0x28);
        uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        unaff_x19 = uVar19;
        if (uVar16 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar14;
          return uVar14;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar19 = func_0x00f78aec();
        uVar15 = func_0x00f78a24(0x3d6ceb8);
        uVar17 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar19,uVar15);
        uVar15 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar19,uVar15);
code_r0x016ce410:
        func_0x00f78af4();
        unaff_x19 = uVar19;
      }
      uVar19 = func_0x00f78b24();
      puVar24 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar26 = func_0x00f78ac0(uVar19,0);
      uVar19 = auVar26._8_8_;
      auVar25._8_8_ = uVar17;
      auVar25._0_8_ = auVar26._0_8_;
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
      puVar4 = (undefined1 *)register0x00000008;
    } while( true );
  }
  lVar13 = func_0x00f78af4();
  lVar21 = 0x3eb5000;
  if ((bRam0000000003eb5813 & 1) == 0) {
    func_0x00f78a20(0x3d3f1b8);
    bRam0000000003eb5813 = 1;
  }
  if (lVar13 == 0) {
    auVar25 = func_0x00f78af4();
    lVar13 = auVar25._8_8_;
    puVar5 = &uStack_90;
    if (lVar13 == 0) {
      puVar24 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
      auStack_d0 = func_0x00f78af4();
      _uStack_a8 = 0;
      puVar5 = (ulong *)extraout_x8_00;
    }
    else {
      unaff_x22 = CONCAT44(0,auVar25._0_4_ + 4);
      auStack_d0._8_8_ = lVar13;
      auStack_d0._0_8_ = unaff_x22;
      uVar10 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar13,auVar25._0_8_,0);
      puVar24 = &UNK_01658158;
      _uStack_a8 = extraout_x8;
      lVar21 = param_4;
    }
    auStack_c0[0] = unaff_x22;
    auStack_c0[1] = lVar13;
    auStack_c0[2] = lVar21;
    puStack_a0 = &stack0xffffffffffffffb0;
    puStack_98 = puVar24;
    if (auStack_d0._8_8_ != 0) {
      uVar6 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_d0._8_8_,auStack_d0._0_8_,0);
      uVar14 = Core_Networking_CarBase__get_LastHitTime(auStack_d0);
      if (param_4 != 0) {
        uVar19 = *(undefined8 *)(param_4 + 0x1b0);
        uVar1 = *(undefined4 *)(param_4 + 0x1a0);
        *(undefined4 *)puVar5 = uVar10;
        *(undefined1 *)((long)puVar5 + 4) = 0;
        *(undefined1 *)((long)puVar5 + 5) = uVar6;
        *(undefined2 *)((long)puVar5 + 6) = 0;
        *(int *)((long)puVar5 + 8) = (int)uVar14;
        *(undefined1 *)((long)puVar5 + 0xc) = 1;
        *(undefined2 *)((long)puVar5 + 0xd) = 0;
        *(undefined1 *)((long)puVar5 + 0xf) = 0;
        *(undefined4 *)((long)puVar5 + 0x10) = uVar1;
        *(undefined4 *)((long)puVar5 + 0x14) = 0;
        *(undefined8 *)((long)puVar5 + 0x18) = uVar19;
        return uVar14;
      }
    }
    auVar27 = func_0x00f78af4();
    uVar14 = auVar27._0_8_;
    uVar19 = *(undefined8 *)(uVar14 + 0x1b0);
    uVar10 = *(undefined4 *)(uVar14 + 0x1a0);
    *extraout_x8_01 = 0;
    extraout_x8_01[1] = 0;
    *(int *)extraout_x8_01 = auVar27._8_4_;
    *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
    *(undefined4 *)(extraout_x8_01 + 1) = uVar10;
    extraout_x8_01[2] = uVar19;
    return uVar14;
  }
  uVar14 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar13 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
    uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
    unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
    uVar16 = *(uint *)(lVar13 + 0x30) - 1;
    if (-2 < (int)uVar16) {
      uVar16 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar16;
    do {
      uVar2 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar2;
      iVar20 = (int)uVar14;
      if ((int)uVar2 < 0) goto code_r0x016ceb30;
      lVar21 = *(long *)(lVar13 + 0x28);
      if (lVar21 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar21 + 0x18) <= uVar2) goto code_r0x016ced88;
    } while (*(int *)(lVar21 + (ulong)uVar2 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar22 = unaff_x22 - 8;
      if (*(uint *)(lVar21 + 0x18) <= uVar22) goto code_r0x016ced88;
      iVar11 = *(int *)(lVar21 + unaff_x22 * 4);
      sVar7 = 0;
      if (iVar11 != 0) {
        sVar7 = (short)uVar14 - (short)iVar11;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar7);
      lVar21 = *(long *)(lVar13 + 0x28);
      if (lVar21 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar21 + 0x18) <= uVar22) goto code_r0x016ced88;
      *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar16 = uVar2;
    } while (0 < (long)uVar22);
code_r0x016ceb30:
    uVar10 = *(undefined4 *)(lVar13 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar14 - (short)uVar10));
    uVar16 = uVar16 * 2 + 6;
    unaff_x21 = (ulong)uVar16;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar16);
    unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
    if (0 < (int)*(uint *)(lVar13 + 0x40)) {
      uVar22 = 0;
      do {
        lVar21 = *(long *)(lVar13 + 0x18);
        if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
           (lVar18 = *(long *)(lVar13 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar18 + 0x18) <= uVar22) goto code_r0x016ced88;
        uVar2 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - *(int *)(lVar18 + uVar22 * 4 + 0x20);
        unaff_x21 = (ulong)uVar2;
        uVar16 = *(uint *)(lVar13 + 0x10);
        unaff_x22 = (ulong)uVar16;
        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
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
            iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar20;
            *(int *)(lVar13 + 0x10) = iVar12;
            iVar11 = iVar11 - iVar20;
            goto code_r0x016ced3c;
          }
          iVar11 = 2;
          while( true ) {
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar2 + iVar11,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar16 + iVar11,2);
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
        lVar21 = *(long *)(lVar13 + 0x38);
        if (lVar21 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar21,unaff_x21,*(undefined4 *)(lVar21 + 0x18),0);
        *(ulong *)(lVar13 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
      }
      uVar16 = (uint)unaff_x22;
      *(uint *)(lVar13 + 0x40) = uVar16 + 1;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar10;
        unaff_x21 = *(ulong *)(lVar13 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
          iVar12 = iVar12 - iVar20;
          iVar11 = iVar11 - iVar20;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
          *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
          return uVar14;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar19 = func_0x00f78aec();
  uVar17 = func_0x00f78a24(0x3d6cea8);
  iVar20 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,uVar17);
  uVar17 = func_0x00f78a24(0x3d56a30);
  auVar27 = func_0x00f78ac0(uVar19,uVar17);
  puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar23 = &puStack_80;
  _uStack_a8 = CONCAT44(iVar20,uStack_a8);
  lVar21 = *(long *)(auVar27._0_8_ + 0x18);
  puStack_a0 = (undefined1 *)unaff_x22;
  puStack_98 = (undefined *)unaff_x21;
  uStack_90 = uVar14;
  uStack_88 = uVar19;
  puStack_80 = &stack0xffffffffffffffd0;
  if ((lVar21 != 0) && (*(long *)(lVar21 + 0x10) != 0)) {
    iVar11 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - auVar27._8_4_;
    iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,iVar11,4);
    lVar21 = *(long *)(auVar27._0_8_ + 0x18);
    if (lVar21 != 0) {
      uVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,(iVar11 - iVar12) + iVar20,2);
      if ((uVar14 & 0xffff) != 0) {
        return uVar14;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
  uVar17 = func_0x00f78a24(0x3d6ce88);
  uVar15 = func_0x00f78a24(0x3d66338);
  lVar21 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar19,uVar15,0);
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,lVar21);
  uVar19 = func_0x00f78a24(0x3d56a50);
  puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar25 = func_0x00f78ac0(uVar14,uVar19);
  puVar5 = auStack_c0 + 2;
  do {
    uVar22 = auVar25._8_8_;
    lVar13 = auVar25._0_8_;
    *(ulong *)((long)puVar5 + -0x20) = uVar14;
    *(long *)((long)puVar5 + -0x18) = lVar21;
    *(undefined1 ***)((long)puVar5 + -0x10) = ppuVar23;
    *(undefined **)((long)puVar5 + -8) = puVar24;
    ppuVar23 = (undefined1 **)((long)puVar5 + -0x10);
    if ((int)uVar17 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),4);
      uVar14 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar22);
code_r0x016cef70:
      if (*(long *)(lVar13 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x18) = *(undefined4 *)(lVar13 + 0x10);
        return uVar14;
      }
    }
    else if (lVar13 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar22);
      if ((*(long *)(lVar13 + 0x18) != 0) &&
         (lVar21 = *(long *)(*(long *)(lVar13 + 0x18) + 0x10), lVar21 != 0)) {
        uVar22 = (ulong)(uint)(*(int *)(lVar21 + 0x18) - *(int *)(lVar13 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
        uVar14 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,uVar22);
        goto code_r0x016cef70;
      }
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar25 = func_0x00f78af4();
    uVar17 = 0;
    puVar5 = (ulong *)((long)puVar5 + -0x20);
    lVar21 = lVar13;
    uVar14 = uVar22;
  } while( true );
}



// ============================================================
// RVA: 0x1658098 | Core.Networking.MigrationCar.AddHalfway
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__AddHalfway
                (ulong param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar17;
  undefined8 unaff_x19;
  int iVar18;
  long unaff_x20;
  long lVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auStack_c0 [16];
  ulong auStack_b0 [3];
  undefined4 uStack_98;
  int iStack_94;
  undefined1 *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
    uVar14 = 9;
    uVar16 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    do {
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      if (((int)param_2 == (int)uVar16) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,param_2);
      unaff_x20 = *(long *)(puVar2 + -0x20);
      unaff_x22 = *(ulong *)(puVar2 + -0x30);
      unaff_x21 = *(ulong *)(puVar2 + -0x28);
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      unaff_x29 = puVar2 + -0x10;
      uVar13 = (uint)uVar14;
      if ((int)uVar13 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        param_2 = uVar15;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        unaff_x19 = uVar14;
        if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar14 = func_0x00f78aec();
        uVar15 = func_0x00f78a24(0x3d6ceb8);
        param_2 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar15);
        uVar15 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar14,uVar15);
code_r0x016ce410:
        func_0x00f78af4();
        unaff_x19 = uVar14;
      }
      uVar14 = func_0x00f78b24();
      unaff_x30 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar23 = func_0x00f78ac0(uVar14,0);
      uVar14 = auVar23._8_8_;
      param_1 = auVar23._0_8_;
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  lVar11 = func_0x00f78af4();
  puStack_18 = &Core_Networking_MigrationCar__EndMigrationCar;
  lVar19 = 0x3eb5000;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5813 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d3f1b8);
    bRam0000000003eb5813 = 1;
  }
  if (lVar11 == 0) {
    auVar23 = func_0x00f78af4();
    lVar11 = auVar23._8_8_;
    puVar3 = &uStack_80;
    if (lVar11 == 0) {
      puVar22 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
      auStack_c0 = func_0x00f78af4();
      _uStack_98 = 0;
      puVar3 = (ulong *)extraout_x8_00;
    }
    else {
      unaff_x22 = CONCAT44(0,auVar23._0_4_ + 4);
      auStack_c0._8_8_ = lVar11;
      auStack_c0._0_8_ = unaff_x22;
      param_4 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar11,auVar23._0_8_,0);
      puVar22 = &UNK_01658158;
      _uStack_98 = extraout_x8;
      lVar19 = param_3;
    }
    auStack_b0[0] = unaff_x22;
    auStack_b0[1] = lVar11;
    auStack_b0[2] = lVar19;
    puStack_90 = &stack0xffffffffffffffc0;
    puStack_88 = puVar22;
    if (auStack_c0._8_8_ != 0) {
      uVar4 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_c0._8_8_,auStack_c0._0_8_,0);
      uVar12 = Core_Networking_CarBase__get_LastHitTime(auStack_c0);
      if (param_3 != 0) {
        uVar14 = *(undefined8 *)(param_3 + 0x1b0);
        uVar8 = *(undefined4 *)(param_3 + 0x1a0);
        *(undefined4 *)puVar3 = param_4;
        *(undefined1 *)((long)puVar3 + 4) = 0;
        *(undefined1 *)((long)puVar3 + 5) = uVar4;
        *(undefined2 *)((long)puVar3 + 6) = 0;
        *(int *)((long)puVar3 + 8) = (int)uVar12;
        *(undefined1 *)((long)puVar3 + 0xc) = 1;
        *(undefined2 *)((long)puVar3 + 0xd) = 0;
        *(undefined1 *)((long)puVar3 + 0xf) = 0;
        *(undefined4 *)((long)puVar3 + 0x10) = uVar8;
        *(undefined4 *)((long)puVar3 + 0x14) = 0;
        *(undefined8 *)((long)puVar3 + 0x18) = uVar14;
        return uVar12;
      }
    }
    auVar24 = func_0x00f78af4();
    uVar12 = auVar24._0_8_;
    uVar14 = *(undefined8 *)(uVar12 + 0x1b0);
    uVar8 = *(undefined4 *)(uVar12 + 0x1a0);
    *extraout_x8_01 = 0;
    extraout_x8_01[1] = 0;
    *(int *)extraout_x8_01 = auVar24._8_4_;
    *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
    *(undefined4 *)(extraout_x8_01 + 1) = uVar8;
    extraout_x8_01[2] = uVar14;
    return uVar12;
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
    uVar13 = *(uint *)(lVar11 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar18 = (int)uVar12;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar19 = *(long *)(lVar11 + 0x28);
      if (lVar19 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar20 = unaff_x22 - 8;
      if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
      iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
      sVar5 = 0;
      if (iVar9 != 0) {
        sVar5 = (short)uVar12 - (short)iVar9;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
      lVar19 = *(long *)(lVar11 + 0x28);
      if (lVar19 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar19 + 0x18) <= uVar20) goto code_r0x016ced88;
      *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar20);
code_r0x016ceb30:
    uVar8 = *(undefined4 *)(lVar11 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
    if (0 < (int)*(uint *)(lVar11 + 0x40)) {
      uVar20 = 0;
      do {
        lVar19 = *(long *)(lVar11 + 0x18);
        if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
           (lVar17 = *(long *)(lVar11 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar17 + 0x18) <= uVar20) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar17 + uVar20 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(lVar11 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
        if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
        if (sVar5 == sVar6) {
          if (sVar5 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar11 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
            iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
            if (iVar9 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar11 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
            *(int *)(lVar11 + 0x10) = iVar10;
            iVar9 = iVar9 - iVar18;
            goto code_r0x016ced3c;
          }
          iVar9 = 2;
          while( true ) {
            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar13 + iVar9,2);
            if (sVar6 != sVar7) break;
            iVar9 = iVar9 + 2;
            if (sVar5 <= iVar9) goto code_r0x016cec64;
          }
        }
        uVar20 = uVar20 + 1;
        unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
      } while ((long)uVar20 < (long)unaff_x22);
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
        lVar19 = *(long *)(lVar11 + 0x38);
        if (lVar19 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
        *(ulong *)(lVar11 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(lVar11 + 0x40) = uVar13 + 1;
      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar8;
        unaff_x21 = *(ulong *)(lVar11 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
          iVar10 = iVar10 - iVar18;
          iVar9 = iVar9 - iVar18;
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
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar16 = func_0x00f78a24(0x3d6cea8);
  iVar18 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar16);
  uVar16 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar14,uVar16);
  puStack_68 = &FlatBuffers_FlatBufferBuilder__Required;
  pppuVar21 = &ppuStack_70;
  _uStack_98 = CONCAT44(iVar18,uStack_98);
  lVar19 = *(long *)(auVar24._0_8_ + 0x18);
  puStack_90 = (undefined1 *)unaff_x22;
  puStack_88 = (undefined *)unaff_x21;
  uStack_80 = uVar12;
  uStack_78 = uVar14;
  ppuStack_70 = &puStack_20;
  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar24._8_4_;
    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
    lVar19 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar19 != 0) {
      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar18,2);
      if ((uVar12 & 0xffff) != 0) {
        return uVar12;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar16 = func_0x00f78a24(0x3d6ce88);
  uVar15 = func_0x00f78a24(0x3d66338);
  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar14,uVar15,0);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar16 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar19);
  uVar14 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar23 = func_0x00f78ac0(uVar12,uVar14);
  puVar3 = auStack_b0 + 2;
  do {
    uVar20 = auVar23._8_8_;
    lVar11 = auVar23._0_8_;
    *(ulong *)((long)puVar3 + -0x20) = uVar12;
    *(long *)((long)puVar3 + -0x18) = lVar19;
    *(undefined1 ****)((long)puVar3 + -0x10) = pppuVar21;
    *(undefined **)((long)puVar3 + -8) = puVar22;
    pppuVar21 = (undefined1 ***)((long)puVar3 + -0x10);
    if ((int)uVar16 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),4);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
code_r0x016cef70:
      if (*(long *)(lVar11 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18) = *(undefined4 *)(lVar11 + 0x10);
        return uVar12;
      }
    }
    else if (lVar11 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
      if ((*(long *)(lVar11 + 0x18) != 0) &&
         (lVar19 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10), lVar19 != 0)) {
        uVar20 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar11 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,uVar20);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar23 = func_0x00f78af4();
    uVar16 = 0;
    puVar3 = (ulong *)((long)puVar3 + -0x20);
    lVar19 = lVar11;
    uVar12 = uVar20;
  } while( true );
}



// ============================================================
// RVA: 0x16580bc | Core.Networking.MigrationCar.EndMigrationCar
// ============================================================

/* WARNING: Possible PIC construction at 0x01658154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01658158) */

ulong Core_Networking_MigrationCar__EndMigrationCar
                (long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong unaff_x21;
  uint uVar17;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 **ppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auStack_b0 [16];
  ulong auStack_a0 [3];
  undefined4 uStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar15 = 0x3eb5000;
  if ((bRam0000000003eb5813 & 1) == 0) {
    func_0x00f78a20(0x3d3f1b8);
    bRam0000000003eb5813 = 1;
  }
  if (param_1 == 0) {
    auVar21 = func_0x00f78af4();
    lVar13 = auVar21._8_8_;
    puVar2 = &uStack_70;
    if (lVar13 == 0) {
      puVar20 = &Core_Networking_NetworkCar__FlatBufferToNetworkCar;
      auStack_b0 = func_0x00f78af4();
      _uStack_88 = 0;
      puVar2 = (ulong *)extraout_x8_00;
    }
    else {
      unaff_x22 = CONCAT44(0,auVar21._0_4_ + 4);
      auStack_b0._8_8_ = lVar13;
      auStack_b0._0_8_ = unaff_x22;
      param_4 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(lVar13,auVar21._0_8_,0);
      puVar20 = &UNK_01658158;
      _uStack_88 = extraout_x8;
      lVar15 = param_3;
    }
    auStack_a0[0] = unaff_x22;
    auStack_a0[1] = lVar13;
    auStack_a0[2] = lVar15;
    puStack_80 = &stack0xffffffffffffffd0;
    puStack_78 = puVar20;
    if (auStack_b0._8_8_ != 0) {
      uVar3 = /*FlatBuffers.ByteBuffer$$GetSbyte*/ func_0x016ccca0(auStack_b0._8_8_,auStack_b0._0_8_,0);
      uVar16 = Core_Networking_CarBase__get_LastHitTime(auStack_b0);
      if (param_3 != 0) {
        uVar10 = *(undefined8 *)(param_3 + 0x1b0);
        uVar7 = *(undefined4 *)(param_3 + 0x1a0);
        *(undefined4 *)puVar2 = param_4;
        *(undefined1 *)((long)puVar2 + 4) = 0;
        *(undefined1 *)((long)puVar2 + 5) = uVar3;
        *(undefined2 *)((long)puVar2 + 6) = 0;
        *(int *)((long)puVar2 + 8) = (int)uVar16;
        *(undefined1 *)((long)puVar2 + 0xc) = 1;
        *(undefined2 *)((long)puVar2 + 0xd) = 0;
        *(undefined1 *)((long)puVar2 + 0xf) = 0;
        *(undefined4 *)((long)puVar2 + 0x10) = uVar7;
        *(undefined4 *)((long)puVar2 + 0x14) = 0;
        *(undefined8 *)((long)puVar2 + 0x18) = uVar10;
        return uVar16;
      }
    }
    auVar22 = func_0x00f78af4();
    uVar16 = auVar22._0_8_;
    uVar10 = *(undefined8 *)(uVar16 + 0x1b0);
    uVar7 = *(undefined4 *)(uVar16 + 0x1a0);
    *extraout_x8_01 = 0;
    extraout_x8_01[1] = 0;
    *(int *)extraout_x8_01 = auVar22._8_4_;
    *(undefined1 *)((long)extraout_x8_01 + 4) = 1;
    *(undefined4 *)(extraout_x8_01 + 1) = uVar7;
    extraout_x8_01[2] = uVar10;
    return uVar16;
  }
  uVar16 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
    uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x30);
    uVar17 = *(uint *)(param_1 + 0x30) - 1;
    if (-2 < (int)uVar17) {
      uVar17 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar17;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar14 = (int)uVar16;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar16 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)sVar4);
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar17 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)uVar16 - (short)uVar7));
    uVar17 = uVar17 * 2 + 6;
    unaff_x21 = (ulong)uVar17;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar17);
    unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      uVar18 = 0;
      do {
        lVar15 = *(long *)(param_1 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar13 = *(long *)(param_1 + 0x38), lVar13 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar13 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar13 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar17 = *(uint *)(param_1 + 0x10);
        unaff_x22 = (ulong)uVar17;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(param_1 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(param_1 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar14;
            *(int *)(param_1 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar14;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar17 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar18 = uVar18 + 1;
        unaff_x22 = (ulong)*(int *)(param_1 + 0x40);
      } while ((long)uVar18 < (long)unaff_x22);
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
      uVar17 = (uint)unaff_x22;
      *(uint *)(param_1 + 0x40) = uVar17 + 1;
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(param_1 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
          iVar9 = iVar9 - iVar14;
          iVar8 = iVar8 - iVar14;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
          return uVar16;
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
  iVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar10,uVar11);
  puStack_58 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_60;
  _uStack_88 = CONCAT44(iVar14,uStack_88);
  lVar15 = *(long *)(auVar22._0_8_ + 0x18);
  puStack_80 = (undefined1 *)unaff_x22;
  puStack_78 = (undefined *)unaff_x21;
  uStack_70 = uVar16;
  uStack_68 = uVar10;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar22._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar8,4);
    lVar15 = *(long *)(auVar22._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar16 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar8 - iVar9) + iVar14,2);
      if ((uVar16 & 0xffff) != 0) {
        return uVar16;
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
  uVar16 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,lVar15);
  uVar10 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar16,uVar10);
  puVar2 = auStack_a0 + 2;
  do {
    uVar18 = auVar21._8_8_;
    lVar13 = auVar21._0_8_;
    *(ulong *)((long)puVar2 + -0x20) = uVar16;
    *(long *)((long)puVar2 + -0x18) = lVar15;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar19;
    *(undefined **)((long)puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)((long)puVar2 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),4);
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar13 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x18) = *(undefined4 *)(lVar13 + 0x10);
        return uVar16;
      }
    }
    else if (lVar13 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,*(undefined4 *)(lVar13 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar13,uVar18);
      if ((*(long *)(lVar13 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar13 + 0x18) + 0x10), lVar15 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar13 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
        uVar16 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar11 = 0;
    puVar2 = (ulong *)((long)puVar2 + -0x20);
    lVar15 = lVar13;
    uVar16 = uVar18;
  } while( true );
}



