// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.AtlasTweenAnimations

// ============================================================
// RVA: 0x146f484 | Atlas.UI.AtlasTweenAnimations.SpinZoom
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_AtlasTweenAnimations__SpinZoom
               (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,float param_5,
               float param_6,undefined4 param_7,float param_8,long param_9,undefined8 param_10,
               ulong param_11,undefined8 param_12)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined8 extraout_x1_00;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  uint uVar11;
  float fVar12;
  ulong extraout_d0;
  ulong extraout_d0_00;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  float unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  ulong uVar13;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar9 = &stack0xfffffffffffffff0;
  if (param_11 == 0) {
    unaff_x30 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
    param_9 = func_0x00f78af4();
    param_10 = extraout_x1;
    uVar7 = param_11;
    uVar13 = extraout_d0;
  }
  else {
    uVar11 = *(uint *)(param_11 + 0x10);
    uVar13 = (ulong)uVar11;
    param_4 = *(float *)(param_11 + 0x14);
    param_2 = (ulong)uVar11;
    param_3 = (ulong)uVar11;
    puVar1 = (undefined1 *)register0x00000008;
    uVar7 = (ulong)*(byte *)(param_11 + 0x20);
    puVar9 = unaff_x29;
    param_5 = param_4;
    param_6 = param_4;
    param_7 = *(undefined4 *)(param_11 + 0x18);
    param_8 = *(float *)(param_11 + 0x1c);
  }
  do {
    fVar17 = param_8;
    uVar16 = param_7;
    fVar15 = param_6;
    fVar12 = param_5;
    fVar14 = param_4;
    uVar8 = param_12;
    uVar6 = uVar7;
    uVar5 = param_10;
    lVar3 = param_9;
    *(ulong *)(puVar1 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
    *(ulong *)(puVar1 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
    *(ulong *)(puVar1 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
    *(ulong *)(puVar1 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
    *(ulong *)(puVar1 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
    *(ulong *)(puVar1 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
    *(ulong *)(puVar1 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
    *(ulong *)(puVar1 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    puVar9 = puVar1 + -0x10;
    unaff_00005124 = 0;
    unaff_00005104 = 0;
    unaff_00005164 = 0;
    unaff_00005184 = 0;
    unaff_000051a4 = 0;
    unaff_s10 = (undefined4)param_3;
    unaff_00005144 = 0;
    unaff_s14 = (float)param_2;
    unaff_000051c4 = 0;
    unaff_s15 = (undefined4)uVar13;
    unaff_000051e4 = 0;
    unaff_x24 = 0x3d26a48;
    uVar7 = uVar6;
    param_12 = uVar8;
    param_8 = fVar14;
    param_7 = unaff_s10;
    param_4 = unaff_s14;
    if ((bRam0000000003eb4867 & 1) == 0) {
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6e0);
      func_0x00f78a20(0x3d5e770);
      func_0x00f78a20(0x3d5e790);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d40f78);
      func_0x00f78a20(0x3d62230);
      func_0x00f78a20(0x3d62238);
      func_0x00f78a20(0x3d62240);
      func_0x00f78a20(0x3d26a48);
      bRam0000000003eb4867 = 1;
    }
    unaff_x20 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
    /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(unaff_x20,0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
      if (lVar3 != 0) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar13 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff,lVar3,0);
        if ((int)uVar6 == 0) {
          lVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(fVar14,fVar12,fVar15,fVar17 * _UNK_033f82b8,lVar3,0);
          puVar10 = &UNK_0146f6bc;
        }
        else {
          lVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(fVar14,fVar12,fVar15,fVar17,lVar3,0);
          puVar10 = &UNK_0146f60c;
        }
        uVar5 = uRam0000000003d5e7a8;
        *(long *)(puVar1 + -0xa0) = unaff_x20;
        *(long *)(puVar1 + -0x98) = lVar3;
        *(undefined1 **)(puVar1 + -0x90) = puVar9;
        *(undefined **)(puVar1 + -0x88) = puVar10;
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar4 + 0xb4) = 9;
          iVar2 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar5);
          if (iVar2 != 0) {
            fVar12 = *(float *)(lVar4 + 0xc0);
            fVar14 = -fVar12;
            if (fVar12 != INFINITY) {
              fVar14 = fVar12;
            }
            *(float *)(lVar4 + 0xc0) = (float)(int)fVar14;
          }
          *(undefined8 *)(lVar4 + 0xb8) = 0;
        }
        return lVar4;
      }
    }
    unaff_x30 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
    param_9 = func_0x00f78af4();
    param_2 = extraout_d0_00 & 0xffffffff;
    param_3 = extraout_d0_00 & 0xffffffff;
    puVar1 = puVar1 + -0x80;
    param_10 = extraout_x1_00;
    unaff_x19 = lVar3;
    unaff_x21 = uVar6;
    unaff_x22 = uVar8;
    unaff_x23 = uVar5;
    uVar13 = extraout_d0_00;
    param_5 = param_4;
    param_6 = param_4;
    unaff_s8 = uVar16;
    unaff_s9 = fVar17;
    unaff_s11 = fVar15;
    unaff_s12 = fVar12;
    unaff_s13 = fVar14;
  } while( true );
}



// ============================================================
// RVA: 0x146f4b8 | Atlas.UI.AtlasTweenAnimations.SpinZoom
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_AtlasTweenAnimations__SpinZoom
               (ulong param_1,ulong param_2,ulong param_3,float param_4,float param_5,float param_6,
               undefined4 param_7,float param_8,long param_9,undefined8 param_10,undefined8 param_11
               ,undefined8 param_12)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar7;
  float fVar8;
  ulong extraout_d0;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  float unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  
  do {
    fVar12 = param_8;
    uVar11 = param_7;
    fVar10 = param_6;
    fVar8 = param_5;
    fVar9 = param_4;
    uVar6 = param_12;
    uVar5 = param_11;
    uVar4 = param_10;
    lVar2 = param_9;
    *(ulong *)((long)register0x00000008 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
    *(ulong *)((long)register0x00000008 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
    *(ulong *)((long)register0x00000008 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
    *(ulong *)((long)register0x00000008 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
    *(ulong *)((long)register0x00000008 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
    *(ulong *)((long)register0x00000008 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
    *(ulong *)((long)register0x00000008 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
    *(ulong *)((long)register0x00000008 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_00005124 = 0;
    unaff_00005104 = 0;
    unaff_00005164 = 0;
    unaff_00005184 = 0;
    unaff_000051a4 = 0;
    unaff_s10 = (undefined4)param_3;
    unaff_00005144 = 0;
    unaff_s14 = (float)param_2;
    unaff_000051c4 = 0;
    unaff_s15 = (undefined4)param_1;
    unaff_000051e4 = 0;
    unaff_x24 = 0x3d26a48;
    param_11 = uVar5;
    param_12 = uVar6;
    param_8 = fVar9;
    param_7 = unaff_s10;
    param_4 = unaff_s14;
    if ((bRam0000000003eb4867 & 1) == 0) {
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6e0);
      func_0x00f78a20(0x3d5e770);
      func_0x00f78a20(0x3d5e790);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d40f78);
      func_0x00f78a20(0x3d62230);
      func_0x00f78a20(0x3d62238);
      func_0x00f78a20(0x3d62240);
      func_0x00f78a20(0x3d26a48);
      bRam0000000003eb4867 = 1;
    }
    unaff_x20 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
    /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(unaff_x20,0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
      if (lVar2 != 0) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(param_1 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff,lVar2,0);
        if ((int)uVar5 == 0) {
          lVar3 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(fVar9,fVar8,fVar10,fVar12 * _UNK_033f82b8,lVar2,0);
          puVar7 = &UNK_0146f6bc;
        }
        else {
          lVar3 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(fVar9,fVar8,fVar10,fVar12,lVar2,0);
          puVar7 = (undefined *)0x146f60c;
        }
        uVar4 = uRam0000000003d5e7a8;
        *(long *)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x98) = lVar2;
        *(undefined1 **)((long)register0x00000008 + -0x90) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -0x88) = puVar7;
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar3 + 0xb4) = 9;
          iVar1 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar4);
          if (iVar1 != 0) {
            fVar8 = *(float *)(lVar3 + 0xc0);
            fVar9 = -fVar8;
            if (fVar8 != INFINITY) {
              fVar9 = fVar8;
            }
            *(float *)(lVar3 + 0xc0) = (float)(int)fVar9;
          }
          *(undefined8 *)(lVar3 + 0xb8) = 0;
        }
        return lVar3;
      }
    }
    unaff_x30 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
    param_9 = func_0x00f78af4();
    param_2 = extraout_d0 & 0xffffffff;
    param_3 = extraout_d0 & 0xffffffff;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_10 = extraout_x1;
    unaff_x19 = lVar2;
    unaff_x21 = uVar5;
    unaff_x22 = uVar6;
    unaff_x23 = uVar4;
    param_1 = extraout_d0;
    param_5 = param_4;
    param_6 = param_4;
    unaff_s8 = uVar11;
    unaff_s9 = fVar12;
    unaff_s11 = fVar10;
    unaff_s12 = fVar8;
    unaff_s13 = fVar9;
  } while( true );
}



// ============================================================
// RVA: 0x146f82c | Atlas.UI.AtlasTweenAnimations.SpinZoom
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_AtlasTweenAnimations__SpinZoom
               (ulong param_1,ulong param_2,ulong param_3,float param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *puVar7;
  code *unaff_x30;
  undefined4 uVar8;
  float fVar9;
  ulong extraout_d0;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  
  do {
    uVar5 = param_7;
    uVar4 = param_6;
    lVar3 = param_5;
    uVar11 = (undefined4)param_3;
    fVar9 = (float)param_2;
    uVar8 = (undefined4)param_1;
    uVar10 = param_1 & 0xffffffff;
    param_3 = param_1 & 0xffffffff;
    *(ulong *)((long)register0x00000008 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
    *(ulong *)((long)register0x00000008 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
    *(ulong *)((long)register0x00000008 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
    *(ulong *)((long)register0x00000008 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
    *(ulong *)((long)register0x00000008 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
    *(ulong *)((long)register0x00000008 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
    *(ulong *)((long)register0x00000008 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
    *(ulong *)((long)register0x00000008 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_00005124 = 0;
    unaff_00005104 = 0;
    unaff_00005164 = 0;
    unaff_00005184 = 0;
    unaff_000051a4 = 0;
    unaff_00005144 = 0;
    unaff_000051c4 = 0;
    unaff_000051e4 = 0;
    unaff_x24 = 0x3d26a48;
    param_7 = uVar5;
    uVar6 = param_8;
    fVar12 = fVar9;
    if ((bRam0000000003eb4867 & 1) == 0) {
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6e0);
      func_0x00f78a20(0x3d5e770);
      func_0x00f78a20(0x3d5e790);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d40f78);
      func_0x00f78a20(0x3d62230);
      func_0x00f78a20(0x3d62238);
      func_0x00f78a20(0x3d62240);
      func_0x00f78a20(0x3d26a48);
      bRam0000000003eb4867 = 1;
    }
    unaff_x20 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
    /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(unaff_x20,0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
      *(undefined8 *)(unaff_x20 + 0x18) = param_8;
      if (lVar3 != 0) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(param_1 & 0xffffffff,param_1 & 0xffffffff,param_1 & 0xffffffff,lVar3,0);
        if ((int)uVar5 == 0) {
          lVar2 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(param_2 & 0xffffffff,param_2 & 0xffffffff,param_2 & 0xffffffff,
                                  param_4 * _UNK_033f82b8,lVar3,0);
          puVar7 = &UNK_0146f6bc;
        }
        else {
          lVar2 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(param_2 & 0xffffffff,param_2 & 0xffffffff,param_2 & 0xffffffff,
                                  param_4,lVar3,0);
          puVar7 = (undefined *)0x146f60c;
        }
        uVar6 = uRam0000000003d5e7a8;
        *(long *)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x98) = lVar3;
        *(undefined1 **)((long)register0x00000008 + -0x90) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -0x88) = puVar7;
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar2 + 0xb4) = 9;
          iVar1 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar6);
          if (iVar1 != 0) {
            fVar9 = *(float *)(lVar2 + 0xc0);
            fVar12 = -fVar9;
            if (fVar9 != INFINITY) {
              fVar12 = fVar9;
            }
            *(float *)(lVar2 + 0xc0) = (float)(int)fVar12;
          }
          *(undefined8 *)(lVar2 + 0xb8) = 0;
        }
        return lVar2;
      }
    }
    unaff_x30 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
    param_5 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_6 = extraout_x1;
    param_8 = uVar6;
    unaff_x19 = lVar3;
    unaff_x21 = uVar5;
    unaff_x22 = param_8;
    unaff_x23 = uVar4;
    param_1 = extraout_d0;
    param_2 = uVar10;
    param_4 = fVar12;
    unaff_s8 = uVar11;
    unaff_s9 = param_4;
    unaff_s10 = uVar8;
    unaff_s11 = fVar9;
    unaff_s12 = fVar9;
    unaff_s13 = fVar9;
    unaff_s14 = uVar8;
    unaff_s15 = uVar8;
  } while( true );
}



// ============================================================
// RVA: 0x146f84c | Atlas.UI.AtlasTweenAnimations.JumpZoom
// ============================================================

/* WARNING: Possible PIC construction at 0x0146ff80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146ff84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_AtlasTweenAnimations__JumpZoom
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               undefined4 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  uVar2 = param_9;
  fVar10 = param_2;
  fVar11 = param_3;
  if ((bRam0000000003eb4868 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e718);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d62248);
    func_0x00f78a20(0x3d62250);
    func_0x00f78a20(0x3d26a50);
    bRam0000000003eb4868 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass5_0_TypeInfo*/ uRam0000000003d26a50);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass5_0$$.ctor*/ func_0x0154704c(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_9;
    *(undefined8 *)(lVar1 + 0x18) = param_8;
    if (param_7 != 0) {
      fVar8 = (float)/*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(param_7,0);
      fVar9 = fVar10;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_7,0);
      fVar12 = fVar9;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_7,0);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_4 = param_4 * 0.5;
      uVar2 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(param_5,uVar2,0);
      uVar3 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(fVar8 * param_1,fVar10 * param_1,fVar11,param_4,param_7,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,9,uRam0000000003d5e7a8);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar2,uVar3,0);
      uVar3 = /*DG.Tweening.ShortcutExtensions$$DOMoveY*/ func_0x016b2ad8(fVar12 + param_3,param_4,param_7,0,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,9,uRam0000000003d5e7a8);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar2,uVar3,0);
      uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,lVar1,uRam0000000003d62248,0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$OnStart<Tweener>*/ func_0x018ee320(uVar2,uVar3,uRam0000000003d5e718);
      uVar3 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(fVar8 * param_2,fVar10 * param_2,fVar11,param_4,param_7,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,8,uRam0000000003d5e7a8);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar2,uVar3,0);
      uVar3 = /*DG.Tweening.ShortcutExtensions$$DOMoveY*/ func_0x016b2ad8(fVar9,param_4,param_7,0,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,8,uRam0000000003d5e7a8);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar2,uVar3,0);
      lVar4 = /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(param_6,uVar2,0);
      uVar2 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar2,lVar1,uRam0000000003d62250,0);
      goto code_r0x018ee2bc;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4869 & 1) == 0) {
    func_0x00f78a20(0x3d5e7c0);
    func_0x00f78a20(0x3d5e7c8);
    func_0x00f78a20(0x3d5e800);
    bRam0000000003eb4869 = 1;
  }
  if (plVar5 != (long *)0x0) {
    lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(plVar5,0);
    fVar9 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    fVar10 = fVar10 * -30.0;
    fVar11 = fVar11 * -30.0;
    /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar9 * -30.0,fVar10,fVar11,0);
    if (lVar1 != 0) {
      /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar1,0);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(lVar1,0,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f82bc,uVar2,0x1b,uRam0000000003d5e7c0);
      fVar9 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(fVar9 * 4.0,fVar10 * 4.0,fVar11 * 4.0,lVar1,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar2 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar1,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f8140,uVar2,0x1b,uRam0000000003d5e7c8);
      uStack_100 = 0;
      uStack_f8 = 0;
      /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,0,&uStack_100,0);
      (**(code **)(*plVar5 + 0x2a8))
                ((undefined4)uStack_100,uStack_100._4_4_,(undefined4)uStack_f8,uStack_f8._4_4_,
                 plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
      uVar2 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,_UNK_033f82b8,plVar5,0);
      lVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,lVar1,uRam0000000003d5e800);
      return lVar1;
    }
  }
  auVar13 = func_0x00f78af4();
  lVar1 = auVar13._8_8_;
  uVar3 = auVar13._0_8_;
  if ((bRam0000000003eb486a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d62258);
    func_0x00f78a20(0x3d26a58);
    bRam0000000003eb486a = 1;
  }
  lVar6 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0_TypeInfo*/ uRam0000000003d26a58);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0$$.ctor*/ func_0x0154707c(lVar6,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = uVar2;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    fVar9 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (lVar1 != 0) {
      fVar12 = *(float *)(lVar1 + 0x20);
      fVar10 = fVar10 * fVar12;
      fVar11 = fVar11 * fVar12;
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar9 * fVar12,fVar10,fVar11,*(undefined4 *)(lVar1 + 0x10),
                              *(undefined4 *)(lVar1 + 0x1c),uVar3,*(undefined4 *)(lVar1 + 0x18),0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar2,uVar7,0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar2,uRam0000000003d5e778);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,uVar3,uRam0000000003d5e860);
      fVar9 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
      fVar12 = *(float *)(lVar1 + 0x24);
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar9 * fVar12,fVar10 * fVar12,fVar11 * fVar12,
                              *(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x1c),uVar3,
                              *(undefined4 *)(lVar1 + 0x18),0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar2,uVar7,0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar2,uRam0000000003d5e778);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,uVar3,uRam0000000003d5e860);
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                              *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x10),
                              *(undefined4 *)(lVar1 + 0x1c),uVar3,*(undefined4 *)(lVar1 + 0x18),0,0)
      ;
      uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar7,uRam0000000003d5e780);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,uVar3,uRam0000000003d5e868);
      lVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar2,uVar3,0);
      uVar2 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar2,lVar6,uRam0000000003d62258,0);
code_r0x018ee2bc:
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
        *(undefined8 *)(lVar4 + 0x80) = uVar2;
      }
      return lVar4;
    }
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x10);
}



// ============================================================
// RVA: 0x146fb74 | Atlas.UI.AtlasTweenAnimations.StampImageDown
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_UI_AtlasTweenAnimations__StampImageDown
          (undefined1 param_1 [16],float param_2,float param_3,long *param_4,undefined8 param_5,
          undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4869 & 1) == 0) {
    func_0x00f78a20(0x3d5e7c0);
    func_0x00f78a20(0x3d5e7c8);
    func_0x00f78a20(0x3d5e800);
    bRam0000000003eb4869 = 1;
  }
  if (param_4 != (long *)0x0) {
    lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(param_4,0);
    fVar7 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
    param_2 = param_2 * -30.0;
    param_3 = param_3 * -30.0;
    /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(fVar7 * -30.0,param_2,param_3,0);
    if (lVar1 != 0) {
      /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar1,0);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(lVar1,0,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f82bc,uVar2,0x1b,uRam0000000003d5e7c0);
      fVar7 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(fVar7 * 4.0,param_2 * 4.0,param_3 * 4.0,lVar1,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar2 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(lVar1,0);
      /*DG.Tweening.TweenSettingsExtensions$$SetEase<object>*/ func_0x018ee96c(_UNK_033f8140,uVar2,0x1b,uRam0000000003d5e7c8);
      uStack_50 = 0;
      uStack_48 = 0;
      /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0x3f800000,0,&uStack_50,0);
      (**(code **)(*param_4 + 0x2a8))
                ((undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,uStack_48._4_4_,param_4
                 ,*(undefined8 *)(*param_4 + 0x2b0));
      uVar2 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(0x3f800000,_UNK_033f82b8,param_4,0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,lVar1,uRam0000000003d5e800);
      return uVar2;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar1 = auVar9._8_8_;
  uVar2 = auVar9._0_8_;
  if ((bRam0000000003eb486a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d62258);
    func_0x00f78a20(0x3d26a58);
    bRam0000000003eb486a = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0_TypeInfo*/ uRam0000000003d26a58);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0$$.ctor*/ func_0x0154707c(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_6;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    fVar7 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (lVar1 != 0) {
      fVar8 = *(float *)(lVar1 + 0x20);
      param_2 = param_2 * fVar8;
      param_3 = param_3 * fVar8;
      uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar7 * fVar8,param_2,param_3,*(undefined4 *)(lVar1 + 0x10),
                              *(undefined4 *)(lVar1 + 0x1c),uVar2,*(undefined4 *)(lVar1 + 0x18),0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar4,uVar5,0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar5,uRam0000000003d5e778);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,uVar2,uRam0000000003d5e860);
      fVar7 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
      fVar8 = *(float *)(lVar1 + 0x24);
      uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar7 * fVar8,param_2 * fVar8,param_3 * fVar8,
                              *(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x1c),uVar2,
                              *(undefined4 *)(lVar1 + 0x18),0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar5,uVar6,0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar5,uRam0000000003d5e778);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,uVar2,uRam0000000003d5e860);
      uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                              *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x10),
                              *(undefined4 *)(lVar1 + 0x1c),uVar2,*(undefined4 *)(lVar1 + 0x18),0,0)
      ;
      uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(lVar1 + 0x14),uVar6,uRam0000000003d5e780);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar6,uVar2,uRam0000000003d5e868);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar5,uVar2,0);
      uVar5 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar5,lVar3,uRam0000000003d62258,0);
      /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar2,uVar5,uRam0000000003d5e6f0);
      return uVar4;
    }
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x10);
}



// ============================================================
// RVA: 0x146fd20 | Atlas.UI.AtlasTweenAnimations.Wiggle
// ============================================================

undefined8
Atlas_UI_AtlasTweenAnimations__Wiggle
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,long param_5,
          undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000003eb486a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e778);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d62258);
    func_0x00f78a20(0x3d26a58);
    bRam0000000003eb486a = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0_TypeInfo*/ uRam0000000003d26a58);
  /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass8_0$$.ctor*/ func_0x0154707c(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_6;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    fVar5 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (param_5 != 0) {
      fVar6 = *(float *)(param_5 + 0x20);
      param_2 = param_2 * fVar6;
      param_3 = param_3 * fVar6;
      uVar3 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar5 * fVar6,param_2,param_3,*(undefined4 *)(param_5 + 0x10),
                              *(undefined4 *)(param_5 + 0x1c),param_4,
                              *(undefined4 *)(param_5 + 0x18),0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar2,uVar3,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(param_5 + 0x14),uVar3,uRam0000000003d5e778);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,param_4,uRam0000000003d5e860);
      fVar5 = (float)/*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
      fVar6 = *(float *)(param_5 + 0x24);
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchRotation*/ func_0x016b4de8(fVar5 * fVar6,param_2 * fVar6,param_3 * fVar6,
                              *(undefined4 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 0x1c),
                              param_4,*(undefined4 *)(param_5 + 0x18),0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(param_5 + 0x14),uVar3,uRam0000000003d5e778);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,param_4,uRam0000000003d5e860);
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchPosition*/ func_0x016b48f4(*(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c),
                              *(undefined4 *)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x10),
                              *(undefined4 *)(param_5 + 0x1c),param_4,
                              *(undefined4 *)(param_5 + 0x18),0,0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(param_5 + 0x14),uVar4,uRam0000000003d5e780);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,param_4,uRam0000000003d5e868);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
      uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar1,uRam0000000003d62258,0);
      /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar3,uVar4,uRam0000000003d5e6f0);
      return uVar2;
    }
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x10);
}



