// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SlantFillBar

// ============================================================
// RVA: 0x14fc95c | Atlas.UI.SlantFillBar.get_LocalPosition
// ============================================================

undefined4 Atlas_UI_SlantFillBar__get_LocalPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x14fc964 | Atlas.UI.SlantFillBar.get_Progress
// ============================================================

undefined4 Atlas_UI_SlantFillBar__get_Progress(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14fc96c | Atlas.UI.SlantFillBar.get_IsMovingToTarget
// ============================================================

undefined1 Atlas_UI_SlantFillBar__get_IsMovingToTarget(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x14fc974 | Atlas.UI.SlantFillBar.get_FillBotomRightPosition
// ============================================================

/* WARNING: Possible PIC construction at 0x014fcad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fcad8) */

undefined1  [16]
Atlas_UI_SlantFillBar__get_FillBotomRightPosition
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined1 ***pppuVar12;
  undefined *puVar13;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar14;
  undefined4 extraout_s0_01;
  uint extraout_s0_02;
  uint uVar15;
  float fVar16;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  uint extraout_s0_05;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined1 auVar17 [16];
  undefined4 extraout_var_01;
  undefined8 extraout_var_06;
  undefined1 auVar18 [16];
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 uVar20;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined1 auVar19 [16];
  ulong unaff_d8;
  float fVar21;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar22;
  ulong unaff_d11;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_5 + 0x18) != 0) {
    return ZEXT416(*(uint *)(*(long *)(param_5 + 0x18) + 0x14c));
  }
  lVar3 = func_0x00f78af4();
  puStack_18 = &Atlas_UI_SlantFillBar__Init;
  uVar14 = extraout_s0;
  uVar20 = extraout_var;
  uVar4 = extraout_var_04;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ccc & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d79108);
    bRam0000000003eb4ccc = 1;
    uVar14 = extraout_s0_00;
    uVar20 = extraout_var_00;
    uVar4 = extraout_var_05;
  }
  if (*(char *)(lVar3 + 200) != '\0') {
    auVar17._4_4_ = uVar20;
    auVar17._0_4_ = uVar14;
    auVar17._8_8_ = uVar4;
    return auVar17;
  }
  if (*(char *)(lVar3 + 0x3c) != '\0') {
    uVar4 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar4,/*STR('event:/UI/ProgressBar')*/ uRam0000000003d79108,0,0,0);
    *(undefined8 *)(lVar3 + 0xb8) = uVar4;
  }
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
  if (iVar2 == 0) {
code_r0x014fca80:
    uVar10 = *(undefined8 *)(lVar3 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
    if (iVar2 != 0) {
      plVar5 = *(long **)(lVar3 + 0x28);
      if (plVar5 == (long *)0x0) goto code_r0x014fcb00;
      uVar14 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
      *(undefined4 *)(lVar3 + 0x78) = uVar14;
      *(undefined4 *)(lVar3 + 0x7c) = param_2;
      *(undefined4 *)(lVar3 + 0x80) = param_3;
      *(undefined4 *)(lVar3 + 0x84) = param_4;
    }
    puVar13 = &UNK_014fcad8;
    lVar6 = lVar3;
  }
  else {
    plVar5 = *(long **)(lVar3 + 0x20);
    if (plVar5 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
      *(undefined4 *)(lVar3 + 0x68) = uVar14;
      *(undefined4 *)(lVar3 + 0x6c) = param_2;
      *(undefined4 *)(lVar3 + 0x70) = param_3;
      *(undefined4 *)(lVar3 + 0x74) = param_4;
      goto code_r0x014fca80;
    }
code_r0x014fcb00:
    puVar13 = &Atlas_UI_SlantFillBar__UpdateCachedLocalPosition;
    lVar6 = func_0x00f78af4();
  }
  pppuVar12 = &ppuStack_50;
  uStack_60 = uVar10;
  lStack_58 = lVar3;
  ppuStack_50 = &puStack_20;
  puStack_48 = puVar13;
  if ((bRam0000000003eb4ccd & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4ccd = 1;
  }
  plVar5 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
  }
  else if (*plVar5 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(plVar5,0);
    *(undefined4 *)(lVar6 + 0x88) = extraout_s0_01;
    *(undefined4 *)(lVar6 + 0x8c) = param_2;
    auVar18._4_4_ = extraout_var_01;
    auVar18._0_4_ = extraout_s0_01;
    auVar18._8_8_ = extraout_var_06;
    return auVar18;
  }
  puVar13 = &Atlas_UI_SlantFillBar__UpdateVisualsForProgress;
  lVar3 = func_0x00f78e5c();
  puVar1 = &uStack_60;
  uVar10 = extraout_x1;
  uVar11 = 0x3eb4000;
  uVar15 = extraout_s0_02;
  do {
    uVar8 = uVar10;
    lVar7 = lVar3;
    *(ulong *)((long)puVar1 + -0x50) = unaff_d11;
    *(ulong *)((long)puVar1 + -0x48) = unaff_d10;
    *(ulong *)((long)puVar1 + -0x40) = unaff_d9;
    *(ulong *)((long)puVar1 + -0x38) = unaff_d8;
    *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar1 + -0x28) = uVar4;
    *(undefined8 *)((long)puVar1 + -0x20) = uVar11;
    *(long *)((long)puVar1 + -0x18) = lVar6;
    *(undefined1 ****)((long)puVar1 + -0x10) = pppuVar12;
    *(undefined **)((long)puVar1 + -8) = puVar13;
    pppuVar12 = (undefined1 ***)((long)puVar1 + -0x10);
    unaff_d8 = (ulong)uVar15;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003eb4cd1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4cd1 = 1;
    }
    fVar22 = *(float *)(lVar7 + 0x34);
    unaff_d11 = (ulong)(uint)fVar22;
    fVar21 = *(float *)(lVar7 + 0x38);
    unaff_d9 = (ulong)(uint)fVar21;
    fVar16 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar21,lVar7);
    unaff_d10 = (ulong)(uint)fVar16;
    uVar4 = *(undefined8 *)(lVar7 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if (iVar2 == 0) {
code_r0x014fcc38:
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
      uVar9 = (uint)uVar8;
      if (iVar2 == 0) {
code_r0x014fccc0:
        uVar4 = *(undefined8 *)(lVar7 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
        uVar14 = extraout_s0_03;
        uVar20 = extraout_var_02;
        uVar10 = extraout_var_07;
        if (iVar2 == 0) goto code_r0x014fcd68;
        plVar5 = *(long **)(lVar7 + 0x28);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x2a8))
                    (*(undefined4 *)(lVar7 + 0x78),*(undefined4 *)(lVar7 + 0x7c),
                     *(undefined4 *)(lVar7 + 0x80),
                     *(float *)(lVar7 + 0x84) * *(float *)(lVar7 + 0xa0),plVar5,
                     *(undefined8 *)(*plVar5 + 0x2b0));
          if (*(long *)(lVar7 + 0x28) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x28),0);
            if (*(long *)(lVar7 + 0x28) != 0) {
              fVar16 = fVar16 - *(float *)(lVar7 + 0x30);
              if (fVar16 <= 0.0) {
                fVar16 = 0.0;
              }
              /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar16,*(long *)(lVar7 + 0x28),0);
              if (*(long *)(lVar7 + 0x28) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x28),fVar22 < fVar21 & uVar9,0);
                uVar14 = extraout_s0_04;
                uVar20 = extraout_var_03;
                uVar10 = extraout_var_08;
code_r0x014fcd68:
                *(uint *)(lVar7 + 0xa4) = uVar15;
                auVar19._4_4_ = uVar20;
                auVar19._0_4_ = uVar14;
                auVar19._8_8_ = uVar10;
                return auVar19;
              }
            }
          }
        }
      }
      else {
        plVar5 = *(long **)(lVar7 + 0x20);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x2a8))
                    (*(undefined4 *)(lVar7 + 0x68),*(undefined4 *)(lVar7 + 0x6c),
                     *(undefined4 *)(lVar7 + 0x70),
                     *(float *)(lVar7 + 0x74) * *(float *)(lVar7 + 0xa0),plVar5,
                     *(undefined8 *)(*plVar5 + 0x2b0));
          if (*(long *)(lVar7 + 0x20) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x20),0);
            if (*(long *)(lVar7 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x20),fVar22 < fVar21 & uVar9,0);
              goto code_r0x014fccc0;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar7 + 0x18) != 0) {
      /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x18),0);
      if (*(long *)(lVar7 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x18),fVar22 < fVar21,0);
        goto code_r0x014fcc38;
      }
    }
    puVar13 = &Atlas_UI_SlantFillBar__SetProgress;
    lVar3 = func_0x00f78af4();
    *(uint *)(lVar3 + 0x38) = extraout_s0_05;
    puVar1 = (undefined8 *)((long)puVar1 + -0x50);
    uVar10 = 0;
    lVar6 = lVar7;
    uVar11 = uVar8;
    uVar15 = extraout_s0_05;
  } while( true );
}



// ============================================================
// RVA: 0x14fc998 | Atlas.UI.SlantFillBar.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014fcad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fcad8) */

void Atlas_UI_SlantFillBar__Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined1 **ppuVar12;
  undefined *puVar13;
  undefined4 uVar14;
  uint extraout_s0;
  uint uVar15;
  float fVar16;
  uint extraout_s0_00;
  ulong unaff_d8;
  float fVar17;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar18;
  ulong unaff_d11;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ccc & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d79108);
    bRam0000000003eb4ccc = 1;
  }
  if (*(char *)(param_5 + 200) != '\0') {
    return;
  }
  if (*(char *)(param_5 + 0x3c) != '\0') {
    uVar3 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar3,/*STR('event:/UI/ProgressBar')*/ uRam0000000003d79108,0,0,0);
    *(undefined8 *)(param_5 + 0xb8) = uVar3;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  uVar3 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
  if (iVar2 == 0) {
LAB_014fca80:
    uVar10 = *(undefined8 *)(param_5 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
    if (iVar2 != 0) {
      plVar4 = *(long **)(param_5 + 0x28);
      if (plVar4 == (long *)0x0) goto LAB_014fcb00;
      uVar14 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      *(undefined4 *)(param_5 + 0x78) = uVar14;
      *(undefined4 *)(param_5 + 0x7c) = param_2;
      *(undefined4 *)(param_5 + 0x80) = param_3;
      *(undefined4 *)(param_5 + 0x84) = param_4;
    }
    puVar13 = (undefined *)0x14fcad8;
    lVar5 = param_5;
  }
  else {
    plVar4 = *(long **)(param_5 + 0x20);
    if (plVar4 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      *(undefined4 *)(param_5 + 0x68) = uVar14;
      *(undefined4 *)(param_5 + 0x6c) = param_2;
      *(undefined4 *)(param_5 + 0x70) = param_3;
      *(undefined4 *)(param_5 + 0x74) = param_4;
      goto LAB_014fca80;
    }
LAB_014fcb00:
    puVar13 = &Atlas_UI_SlantFillBar__UpdateCachedLocalPosition;
    lVar5 = func_0x00f78af4();
  }
  ppuVar12 = &puStack_40;
  uStack_50 = uVar10;
  lStack_48 = param_5;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar13;
  if ((bRam0000000003eb4ccd & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4ccd = 1;
  }
  plVar4 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
  if (plVar4 == (long *)0x0) {
    func_0x00f78af4();
  }
  else if (*plVar4 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    uVar14 = /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(plVar4,0);
    *(undefined4 *)(lVar5 + 0x88) = uVar14;
    *(undefined4 *)(lVar5 + 0x8c) = param_2;
    return;
  }
  puVar13 = &Atlas_UI_SlantFillBar__UpdateVisualsForProgress;
  lVar6 = func_0x00f78e5c();
  puVar1 = &uStack_50;
  uVar10 = extraout_x1;
  uVar11 = 0x3eb4000;
  uVar15 = extraout_s0;
  do {
    uVar8 = uVar10;
    lVar7 = lVar6;
    *(ulong *)((long)puVar1 + -0x50) = unaff_d11;
    *(ulong *)((long)puVar1 + -0x48) = unaff_d10;
    *(ulong *)((long)puVar1 + -0x40) = unaff_d9;
    *(ulong *)((long)puVar1 + -0x38) = unaff_d8;
    *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar1 + -0x28) = uVar3;
    *(undefined8 *)((long)puVar1 + -0x20) = uVar11;
    *(long *)((long)puVar1 + -0x18) = lVar5;
    *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar12;
    *(undefined **)((long)puVar1 + -8) = puVar13;
    ppuVar12 = (undefined1 **)((long)puVar1 + -0x10);
    unaff_d8 = (ulong)uVar15;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003eb4cd1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4cd1 = 1;
    }
    fVar18 = *(float *)(lVar7 + 0x34);
    unaff_d11 = (ulong)(uint)fVar18;
    fVar17 = *(float *)(lVar7 + 0x38);
    unaff_d9 = (ulong)(uint)fVar17;
    fVar16 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar17,lVar7);
    unaff_d10 = (ulong)(uint)fVar16;
    uVar3 = *(undefined8 *)(lVar7 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
    if (iVar2 == 0) {
code_r0x014fcc38:
      uVar3 = *(undefined8 *)(lVar7 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
      uVar9 = (uint)uVar8;
      if (iVar2 == 0) {
code_r0x014fccc0:
        uVar3 = *(undefined8 *)(lVar7 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
        if (iVar2 == 0) goto code_r0x014fcd68;
        plVar4 = *(long **)(lVar7 + 0x28);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))
                    (*(undefined4 *)(lVar7 + 0x78),*(undefined4 *)(lVar7 + 0x7c),
                     *(undefined4 *)(lVar7 + 0x80),
                     *(float *)(lVar7 + 0x84) * *(float *)(lVar7 + 0xa0),plVar4,
                     *(undefined8 *)(*plVar4 + 0x2b0));
          if (*(long *)(lVar7 + 0x28) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x28),0);
            if (*(long *)(lVar7 + 0x28) != 0) {
              fVar16 = fVar16 - *(float *)(lVar7 + 0x30);
              if (fVar16 <= 0.0) {
                fVar16 = 0.0;
              }
              /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar16,*(long *)(lVar7 + 0x28),0);
              if (*(long *)(lVar7 + 0x28) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x28),fVar18 < fVar17 & uVar9,0);
code_r0x014fcd68:
                *(uint *)(lVar7 + 0xa4) = uVar15;
                return;
              }
            }
          }
        }
      }
      else {
        plVar4 = *(long **)(lVar7 + 0x20);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))
                    (*(undefined4 *)(lVar7 + 0x68),*(undefined4 *)(lVar7 + 0x6c),
                     *(undefined4 *)(lVar7 + 0x70),
                     *(float *)(lVar7 + 0x74) * *(float *)(lVar7 + 0xa0),plVar4,
                     *(undefined8 *)(*plVar4 + 0x2b0));
          if (*(long *)(lVar7 + 0x20) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x20),0);
            if (*(long *)(lVar7 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x20),fVar18 < fVar17 & uVar9,0);
              goto code_r0x014fccc0;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar7 + 0x18) != 0) {
      /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x18),0);
      if (*(long *)(lVar7 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x18),fVar18 < fVar17,0);
        goto code_r0x014fcc38;
      }
    }
    puVar13 = &Atlas_UI_SlantFillBar__SetProgress;
    lVar6 = func_0x00f78af4();
    *(uint *)(lVar6 + 0x38) = extraout_s0_00;
    puVar1 = (undefined8 *)((long)puVar1 + -0x50);
    uVar10 = 0;
    lVar5 = lVar7;
    uVar11 = uVar8;
    uVar15 = extraout_s0_00;
  } while( true );
}



// ============================================================
// RVA: 0x14fcb04 | Atlas.UI.SlantFillBar.UpdateCachedLocalPosition
// ============================================================

void Atlas_UI_SlantFillBar__UpdateCachedLocalPosition
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar12;
  undefined4 uVar13;
  uint extraout_s0;
  uint uVar14;
  float fVar15;
  uint extraout_s0_00;
  ulong unaff_d8;
  float fVar16;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar17;
  ulong unaff_d11;
  undefined1 *puVar4;
  
  if ((bRam0000000003eb4ccd & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4ccd = 1;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_3,0);
  if (plVar6 == (long *)0x0) {
    func_0x00f78af4();
  }
  else if (*plVar6 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    uVar13 = /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(plVar6,0);
    *(undefined4 *)(param_3 + 0x88) = uVar13;
    *(undefined4 *)(param_3 + 0x8c) = param_2;
    return;
  }
  puVar12 = &Atlas_UI_SlantFillBar__UpdateVisualsForProgress;
  lVar7 = func_0x00f78e5c();
  puVar1 = &stack0xffffffffffffffe0;
  uVar2 = extraout_x1;
  uVar11 = 0x3eb4000;
  uVar14 = extraout_s0;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    uVar9 = uVar2;
    lVar8 = lVar7;
    puVar4 = puVar1;
    *(ulong *)(puVar4 + -0x50) = unaff_d11;
    *(ulong *)(puVar4 + -0x48) = unaff_d10;
    *(ulong *)(puVar4 + -0x40) = unaff_d9;
    *(ulong *)(puVar4 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = uVar11;
    *(long *)(puVar4 + -0x18) = param_3;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(undefined **)(puVar4 + -8) = puVar12;
    unaff_d8 = (ulong)uVar14;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003eb4cd1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4cd1 = 1;
    }
    fVar17 = *(float *)(lVar8 + 0x34);
    unaff_d11 = (ulong)(uint)fVar17;
    fVar16 = *(float *)(lVar8 + 0x38);
    unaff_d9 = (ulong)(uint)fVar16;
    fVar15 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar16,lVar8);
    unaff_d10 = (ulong)(uint)fVar15;
    unaff_x21 = *(undefined8 *)(lVar8 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if (iVar5 == 0) {
code_r0x014fcc38:
      unaff_x21 = *(undefined8 *)(lVar8 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
      uVar10 = (uint)uVar9;
      if (iVar5 == 0) {
code_r0x014fccc0:
        unaff_x21 = *(undefined8 *)(lVar8 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
        if (iVar5 == 0) goto code_r0x014fcd68;
        plVar6 = *(long **)(lVar8 + 0x28);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x2a8))
                    (*(undefined4 *)(lVar8 + 0x78),*(undefined4 *)(lVar8 + 0x7c),
                     *(undefined4 *)(lVar8 + 0x80),
                     *(float *)(lVar8 + 0x84) * *(float *)(lVar8 + 0xa0),plVar6,
                     *(undefined8 *)(*plVar6 + 0x2b0));
          if (*(long *)(lVar8 + 0x28) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar15,*(long *)(lVar8 + 0x28),0);
            if (*(long *)(lVar8 + 0x28) != 0) {
              fVar15 = fVar15 - *(float *)(lVar8 + 0x30);
              if (fVar15 <= 0.0) {
                fVar15 = 0.0;
              }
              /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar15,*(long *)(lVar8 + 0x28),0);
              if (*(long *)(lVar8 + 0x28) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar8 + 0x28),fVar17 < fVar16 & uVar10,0);
code_r0x014fcd68:
                *(uint *)(lVar8 + 0xa4) = uVar14;
                return;
              }
            }
          }
        }
      }
      else {
        plVar6 = *(long **)(lVar8 + 0x20);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x2a8))
                    (*(undefined4 *)(lVar8 + 0x68),*(undefined4 *)(lVar8 + 0x6c),
                     *(undefined4 *)(lVar8 + 0x70),
                     *(float *)(lVar8 + 0x74) * *(float *)(lVar8 + 0xa0),plVar6,
                     *(undefined8 *)(*plVar6 + 0x2b0));
          if (*(long *)(lVar8 + 0x20) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar15,*(long *)(lVar8 + 0x20),0);
            if (*(long *)(lVar8 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar8 + 0x20),fVar17 < fVar16 & uVar10,0);
              goto code_r0x014fccc0;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar8 + 0x18) != 0) {
      /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar15,*(long *)(lVar8 + 0x18),0);
      if (*(long *)(lVar8 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar8 + 0x18),fVar17 < fVar16,0);
        goto code_r0x014fcc38;
      }
    }
    puVar12 = &Atlas_UI_SlantFillBar__SetProgress;
    lVar7 = func_0x00f78af4();
    *(uint *)(lVar7 + 0x38) = extraout_s0_00;
    puVar1 = puVar4 + -0x50;
    uVar2 = 0;
    param_3 = lVar8;
    uVar11 = uVar9;
    uVar14 = extraout_s0_00;
    puVar3 = puVar4;
  } while( true );
}



// ============================================================
// RVA: 0x14fcb7c | Atlas.UI.SlantFillBar.UpdateVisualsForProgress
// ============================================================

void Atlas_UI_SlantFillBar__UpdateVisualsForProgress(uint param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar6;
  uint extraout_s0;
  ulong unaff_d8;
  float fVar7;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar8;
  ulong unaff_d11;
  
  do {
    uVar4 = param_3;
    lVar2 = param_2;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_d8 = (ulong)param_1;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003eb4cd1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4cd1 = 1;
    }
    fVar8 = *(float *)(lVar2 + 0x34);
    unaff_d11 = (ulong)(uint)fVar8;
    fVar7 = *(float *)(lVar2 + 0x38);
    unaff_d9 = (ulong)(uint)fVar7;
    fVar6 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar7,lVar2);
    unaff_d10 = (ulong)(uint)fVar6;
    unaff_x21 = *(undefined8 *)(lVar2 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if (iVar1 == 0) {
LAB_014fcc38:
      unaff_x21 = *(undefined8 *)(lVar2 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
      uVar5 = (uint)uVar4;
      if (iVar1 == 0) {
LAB_014fccc0:
        unaff_x21 = *(undefined8 *)(lVar2 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
        if (iVar1 == 0) goto LAB_014fcd68;
        plVar3 = *(long **)(lVar2 + 0x28);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x2a8))
                    (*(undefined4 *)(lVar2 + 0x78),*(undefined4 *)(lVar2 + 0x7c),
                     *(undefined4 *)(lVar2 + 0x80),
                     *(float *)(lVar2 + 0x84) * *(float *)(lVar2 + 0xa0),plVar3,
                     *(undefined8 *)(*plVar3 + 0x2b0));
          if (*(long *)(lVar2 + 0x28) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar6,*(long *)(lVar2 + 0x28),0);
            if (*(long *)(lVar2 + 0x28) != 0) {
              fVar6 = fVar6 - *(float *)(lVar2 + 0x30);
              if (fVar6 <= 0.0) {
                fVar6 = 0.0;
              }
              /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar6,*(long *)(lVar2 + 0x28),0);
              if (*(long *)(lVar2 + 0x28) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar2 + 0x28),fVar8 < fVar7 & uVar5,0);
LAB_014fcd68:
                *(uint *)(lVar2 + 0xa4) = param_1;
                return;
              }
            }
          }
        }
      }
      else {
        plVar3 = *(long **)(lVar2 + 0x20);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x2a8))
                    (*(undefined4 *)(lVar2 + 0x68),*(undefined4 *)(lVar2 + 0x6c),
                     *(undefined4 *)(lVar2 + 0x70),
                     *(float *)(lVar2 + 0x74) * *(float *)(lVar2 + 0xa0),plVar3,
                     *(undefined8 *)(*plVar3 + 0x2b0));
          if (*(long *)(lVar2 + 0x20) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar6,*(long *)(lVar2 + 0x20),0);
            if (*(long *)(lVar2 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar2 + 0x20),fVar8 < fVar7 & uVar5,0);
              goto LAB_014fccc0;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar2 + 0x18) != 0) {
      /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar6,*(long *)(lVar2 + 0x18),0);
      if (*(long *)(lVar2 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar2 + 0x18),fVar8 < fVar7,0);
        goto LAB_014fcc38;
      }
    }
    unaff_x30 = &Atlas_UI_SlantFillBar__SetProgress;
    param_2 = func_0x00f78af4();
    *(uint *)(param_2 + 0x38) = extraout_s0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_3 = 0;
    unaff_x19 = lVar2;
    unaff_x20 = uVar4;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x14fcd88 | Atlas.UI.SlantFillBar.SetProgress
// ============================================================

void Atlas_UI_SlantFillBar__SetProgress(uint param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar4;
  uint extraout_s0;
  ulong unaff_d8;
  float fVar5;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar6;
  ulong unaff_d11;
  
  do {
    lVar3 = param_2;
    *(uint *)(lVar3 + 0x38) = param_1;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0;
    unaff_d8 = (ulong)param_1;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003eb4cd1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4cd1 = 1;
    }
    fVar6 = *(float *)(lVar3 + 0x34);
    unaff_d11 = (ulong)(uint)fVar6;
    fVar5 = *(float *)(lVar3 + 0x38);
    unaff_d9 = (ulong)(uint)fVar5;
    fVar4 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar5,lVar3);
    unaff_d10 = (ulong)(uint)fVar4;
    unaff_x21 = *(undefined8 *)(lVar3 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if (iVar1 == 0) {
LAB_014fcc38:
      unaff_x21 = *(undefined8 *)(lVar3 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
      if (iVar1 == 0) {
LAB_014fccc0:
        unaff_x21 = *(undefined8 *)(lVar3 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
        if (iVar1 == 0) goto LAB_014fcd68;
        plVar2 = *(long **)(lVar3 + 0x28);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),
                     *(undefined4 *)(lVar3 + 0x80),
                     *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0xa0),plVar2,
                     *(undefined8 *)(*plVar2 + 0x2b0));
          if (*(long *)(lVar3 + 0x28) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar4,*(long *)(lVar3 + 0x28),0);
            if (*(long *)(lVar3 + 0x28) != 0) {
              fVar4 = fVar4 - *(float *)(lVar3 + 0x30);
              if (fVar4 <= 0.0) {
                fVar4 = 0.0;
              }
              /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar4,*(long *)(lVar3 + 0x28),0);
              if (*(long *)(lVar3 + 0x28) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x28),0,0);
LAB_014fcd68:
                *(uint *)(lVar3 + 0xa4) = param_1;
                return;
              }
            }
          }
        }
      }
      else {
        plVar2 = *(long **)(lVar3 + 0x20);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x68),*(undefined4 *)(lVar3 + 0x6c),
                     *(undefined4 *)(lVar3 + 0x70),
                     *(float *)(lVar3 + 0x74) * *(float *)(lVar3 + 0xa0),plVar2,
                     *(undefined8 *)(*plVar2 + 0x2b0));
          if (*(long *)(lVar3 + 0x20) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar4,*(long *)(lVar3 + 0x20),0);
            if (*(long *)(lVar3 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x20),0,0);
              goto LAB_014fccc0;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar3 + 0x18) != 0) {
      /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar4,*(long *)(lVar3 + 0x18),0);
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x18),fVar6 < fVar5,0);
        goto LAB_014fcc38;
      }
    }
    unaff_x30 = Atlas_UI_SlantFillBar__SetProgress;
    param_2 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = lVar3;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x14fcd94 | Atlas.UI.SlantFillBar.SetProgress
// ============================================================

void Atlas_UI_SlantFillBar__SetProgress(float param_1,float param_2,float param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar5;
  uint extraout_s0;
  uint uVar6;
  ulong unaff_d8;
  float fVar7;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar8;
  ulong unaff_d11;
  
  uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((param_1 - param_2) / (param_3 - param_2),0);
  *(uint *)(param_4 + 0x38) = uVar6;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    lVar3 = param_4;
    *(ulong *)(puVar1 + -0x50) = unaff_d11;
    *(ulong *)(puVar1 + -0x48) = unaff_d10;
    *(ulong *)(puVar1 + -0x40) = unaff_d9;
    *(ulong *)(puVar1 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    unaff_x20 = 0;
    unaff_d8 = (ulong)uVar6;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003eb4cd1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4cd1 = 1;
    }
    fVar8 = *(float *)(lVar3 + 0x34);
    unaff_d11 = (ulong)(uint)fVar8;
    fVar7 = *(float *)(lVar3 + 0x38);
    unaff_d9 = (ulong)(uint)fVar7;
    fVar5 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar7,lVar3);
    unaff_d10 = (ulong)(uint)fVar5;
    unaff_x21 = *(undefined8 *)(lVar3 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if (iVar2 == 0) {
LAB_014fcc38:
      unaff_x21 = *(undefined8 *)(lVar3 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
      if (iVar2 == 0) {
LAB_014fccc0:
        unaff_x21 = *(undefined8 *)(lVar3 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
        if (iVar2 == 0) goto LAB_014fcd68;
        plVar4 = *(long **)(lVar3 + 0x28);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),
                     *(undefined4 *)(lVar3 + 0x80),
                     *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0xa0),plVar4,
                     *(undefined8 *)(*plVar4 + 0x2b0));
          if (*(long *)(lVar3 + 0x28) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar5,*(long *)(lVar3 + 0x28),0);
            if (*(long *)(lVar3 + 0x28) != 0) {
              fVar5 = fVar5 - *(float *)(lVar3 + 0x30);
              if (fVar5 <= 0.0) {
                fVar5 = 0.0;
              }
              /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar5,*(long *)(lVar3 + 0x28),0);
              if (*(long *)(lVar3 + 0x28) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x28),0,0);
LAB_014fcd68:
                *(uint *)(lVar3 + 0xa4) = uVar6;
                return;
              }
            }
          }
        }
      }
      else {
        plVar4 = *(long **)(lVar3 + 0x20);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x68),*(undefined4 *)(lVar3 + 0x6c),
                     *(undefined4 *)(lVar3 + 0x70),
                     *(float *)(lVar3 + 0x74) * *(float *)(lVar3 + 0xa0),plVar4,
                     *(undefined8 *)(*plVar4 + 0x2b0));
          if (*(long *)(lVar3 + 0x20) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar5,*(long *)(lVar3 + 0x20),0);
            if (*(long *)(lVar3 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x20),0,0);
              goto LAB_014fccc0;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar3 + 0x18) != 0) {
      /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar5,*(long *)(lVar3 + 0x18),0);
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x18),fVar8 < fVar7,0);
        goto LAB_014fcc38;
      }
    }
    unaff_x30 = Atlas_UI_SlantFillBar__SetProgress;
    param_4 = func_0x00f78af4();
    *(uint *)(param_4 + 0x38) = extraout_s0;
    puVar1 = puVar1 + -0x50;
    unaff_x19 = lVar3;
    uVar6 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x14fcdd0 | Atlas.UI.SlantFillBar.CalculateProgress
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0323d344) */

undefined8 Atlas_UI_SlantFillBar__CalculateProgress(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14fcde4 | Atlas.UI.SlantFillBar.SetProgress
// ============================================================

void Atlas_UI_SlantFillBar__SetProgress(long param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar5;
  uint extraout_s0;
  uint uVar6;
  ulong unaff_d8;
  float fVar7;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar8;
  ulong unaff_d11;
  
  uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(((float)param_2 - (float)param_3) / ((float)param_4 - (float)param_3),0);
  *(uint *)(param_1 + 0x38) = uVar6;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    lVar3 = param_1;
    *(ulong *)(puVar1 + -0x50) = unaff_d11;
    *(ulong *)(puVar1 + -0x48) = unaff_d10;
    *(ulong *)(puVar1 + -0x40) = unaff_d9;
    *(ulong *)(puVar1 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    unaff_x20 = 0;
    unaff_d8 = (ulong)uVar6;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003eb4cd1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4cd1 = 1;
    }
    fVar8 = *(float *)(lVar3 + 0x34);
    unaff_d11 = (ulong)(uint)fVar8;
    fVar7 = *(float *)(lVar3 + 0x38);
    unaff_d9 = (ulong)(uint)fVar7;
    fVar5 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar7,lVar3);
    unaff_d10 = (ulong)(uint)fVar5;
    unaff_x21 = *(undefined8 *)(lVar3 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if (iVar2 == 0) {
LAB_014fcc38:
      unaff_x21 = *(undefined8 *)(lVar3 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
      if (iVar2 == 0) {
LAB_014fccc0:
        unaff_x21 = *(undefined8 *)(lVar3 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
        if (iVar2 == 0) goto LAB_014fcd68;
        plVar4 = *(long **)(lVar3 + 0x28);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),
                     *(undefined4 *)(lVar3 + 0x80),
                     *(float *)(lVar3 + 0x84) * *(float *)(lVar3 + 0xa0),plVar4,
                     *(undefined8 *)(*plVar4 + 0x2b0));
          if (*(long *)(lVar3 + 0x28) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar5,*(long *)(lVar3 + 0x28),0);
            if (*(long *)(lVar3 + 0x28) != 0) {
              fVar5 = fVar5 - *(float *)(lVar3 + 0x30);
              if (fVar5 <= 0.0) {
                fVar5 = 0.0;
              }
              /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar5,*(long *)(lVar3 + 0x28),0);
              if (*(long *)(lVar3 + 0x28) != 0) {
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x28),0,0);
LAB_014fcd68:
                *(uint *)(lVar3 + 0xa4) = uVar6;
                return;
              }
            }
          }
        }
      }
      else {
        plVar4 = *(long **)(lVar3 + 0x20);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))
                    (*(undefined4 *)(lVar3 + 0x68),*(undefined4 *)(lVar3 + 0x6c),
                     *(undefined4 *)(lVar3 + 0x70),
                     *(float *)(lVar3 + 0x74) * *(float *)(lVar3 + 0xa0),plVar4,
                     *(undefined8 *)(*plVar4 + 0x2b0));
          if (*(long *)(lVar3 + 0x20) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar5,*(long *)(lVar3 + 0x20),0);
            if (*(long *)(lVar3 + 0x20) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x20),0,0);
              goto LAB_014fccc0;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar3 + 0x18) != 0) {
      /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar5,*(long *)(lVar3 + 0x18),0);
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x18),fVar8 < fVar7,0);
        goto LAB_014fcc38;
      }
    }
    unaff_x30 = Atlas_UI_SlantFillBar__SetProgress;
    param_1 = func_0x00f78af4();
    *(uint *)(param_1 + 0x38) = extraout_s0;
    puVar1 = puVar1 + -0x50;
    unaff_x19 = lVar3;
    uVar6 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x14fce2c | Atlas.UI.SlantFillBar.CalculateProgress
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0323d344) */

undefined8 Atlas_UI_SlantFillBar__CalculateProgress(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14fce4c | Atlas.UI.SlantFillBar.SetTargetProgress
// ============================================================

ulong Atlas_UI_SlantFillBar__SetTargetProgress(undefined4 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *extraout_x1;
  long *plVar8;
  undefined8 *puVar9;
  uint extraout_w8;
  uint uVar10;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long lVar11;
  code *pcVar12;
  uint extraout_s0;
  undefined1 auVar13 [16];
  
  *(undefined1 *)(param_2 + 0x90) = 1;
  *(undefined4 *)(param_2 + 0x94) = param_1;
  *(undefined8 *)(param_2 + 0x98) = param_3;
  if (*(char *)(param_2 + 0x3c) == '\0') {
    return param_2;
  }
  uVar2 = *(ulong *)(param_2 + 0xb8);
  if (uVar2 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar2,0,0);
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar2 = *(ulong *)(lVar3 + 0xc0);
  if (uVar2 == 0) {
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar2,uRam0000000003d3d9e0);
    *(ulong *)(lVar3 + 0xc0) = uVar2;
    if (uVar2 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar2 = *(ulong *)(lVar3 + 0xc0);
      if (uVar2 != 0) {
        uVar7 = uVar2;
        if (0 < *(int *)(uVar2 + 0x18)) {
          uVar7 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar2 + 0x10),0,*(int *)(uVar2 + 0x18),0);
          *(undefined4 *)(uVar2 + 0x18) = 0;
        }
        *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
        return uVar7;
      }
      return 0;
    }
  }
  uVar7 = (ulong)extraout_s0;
  lVar3 = *(long *)(uVar2 + 0x10);
  puVar9 = extraout_x1;
  if (lVar3 == 0) {
code_r0x0259cf3c:
    uVar7 = unaff_x21;
    uVar2 = unaff_x19;
    uVar4 = func_0x00f78af4();
    lVar3 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar2 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar2 + 0x18);
    uVar4 = uVar2;
    unaff_x20 = extraout_x1;
    if (uVar10 != *(uint *)(lVar3 + 0x18)) goto code_r0x0259cf40;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar4 = (*(code *)*puVar9)(uVar2,uVar10 + 1);
    lVar3 = *(long *)(uVar2 + 0x10);
    uVar10 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar10 + 1;
    unaff_x19 = uVar2;
    unaff_x21 = uVar7;
    if (lVar3 == 0) goto code_r0x0259cf3c;
  }
  if (uVar10 < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)(int)uVar10 * 0x10;
    *(ulong *)(lVar3 + 0x20) = uVar7;
    *(undefined8 **)(lVar3 + 0x28) = unaff_x20;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar4;
  }
  uVar5 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar5,0);
  plVar8 = auVar13._8_8_;
  lVar3 = auVar13._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar8,0x14);
  if (lVar3 != 0) {
    pcVar12 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (plVar8 != (long *)0x0) {
      if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar6 = (undefined8 *)func_0x00f78ae4(plVar8);
        (*pcVar12)(lVar3,*puVar6,puVar6[1],*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar3);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar8,lVar11);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar12)();
}



// ============================================================
// RVA: 0x14fce8c | Atlas.UI.SlantFillBar.AddThresholdEvent
// ============================================================

ulong Atlas_UI_SlantFillBar__AddThresholdEvent(uint param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar10 = *(ulong *)(param_2 + 0xc0);
  if (uVar10 == 0) {
    uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar10,uRam0000000003d3d9e0);
    *(ulong *)(param_2 + 0xc0) = uVar10;
    if (uVar10 == 0) {
      lVar9 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar10 = *(ulong *)(lVar9 + 0xc0);
      if (uVar10 != 0) {
        uVar5 = uVar10;
        if (0 < *(int *)(uVar10 + 0x18)) {
          uVar5 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar10 + 0x10),0,*(int *)(uVar10 + 0x18),0);
          *(undefined4 *)(uVar10 + 0x18) = 0;
        }
        *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
        return uVar5;
      }
      return 0;
    }
  }
  uVar5 = (ulong)param_1;
  lVar9 = *(long *)(uVar10 + 0x10);
  puVar7 = param_3;
  if (lVar9 == 0) {
code_r0x0259cf3c:
    uVar5 = unaff_x21;
    param_3 = unaff_x20;
    uVar10 = unaff_x19;
    uVar2 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar10 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar10 + 0x18);
    uVar2 = uVar10;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x0259cf40;
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar2 = (*(code *)*puVar7)(uVar10,uVar8 + 1);
    lVar9 = *(long *)(uVar10 + 0x10);
    uVar8 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar10;
    unaff_x20 = param_3;
    unaff_x21 = uVar5;
    if (lVar9 == 0) goto code_r0x0259cf3c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    lVar9 = lVar9 + (long)(int)uVar8 * 0x10;
    *(ulong *)(lVar9 + 0x20) = uVar5;
    *(undefined8 **)(lVar9 + 0x28) = param_3;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar2;
  }
  uVar3 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar3,0);
  plVar6 = auVar13._8_8_;
  lVar9 = auVar13._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(plVar6,0x14);
  if (lVar9 != 0) {
    pcVar12 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (plVar6 != (long *)0x0) {
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar4 = (undefined8 *)func_0x00f78ae4(plVar6);
        (*pcVar12)(lVar9,*puVar4,puVar4[1],*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar9);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar6,lVar11);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar12)();
}



// ============================================================
// RVA: 0x14fcf48 | Atlas.UI.SlantFillBar.ClearThresholdEvents
// ============================================================

void Atlas_UI_SlantFillBar__ClearThresholdEvents(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4ccf & 1) == 0) {
    func_0x00f78a20(0x3d3d9f0);
    bRam0000000003eb4ccf = 1;
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar1 + 0x10),0,*(int *)(lVar1 + 0x18),0);
      *(undefined4 *)(lVar1 + 0x18) = 0;
    }
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    return;
  }
  return;
}



// ============================================================
// RVA: 0x14fcfa4 | Atlas.UI.SlantFillBar.CalculateValue
// ============================================================

undefined8 Atlas_UI_SlantFillBar__CalculateValue(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14fcfb8 | Atlas.UI.SlantFillBar.CalculateValue
// ============================================================

undefined8 Atlas_UI_SlantFillBar__CalculateValue(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14fcfd8 | Atlas.UI.SlantFillBar.Awake
// ============================================================

void Atlas_UI_SlantFillBar__Awake
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined1 **ppuVar12;
  code *pcVar13;
  undefined4 uVar14;
  uint extraout_s0;
  uint uVar15;
  float fVar16;
  uint extraout_s0_00;
  ulong unaff_d8;
  float fVar17;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar18;
  ulong unaff_d11;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4ccc & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d79108);
    bRam0000000003eb4ccc = 1;
  }
  if (*(char *)(param_5 + 200) == '\0') {
    if (*(char *)(param_5 + 0x3c) != '\0') {
      uVar3 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
      /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar3,/*STR('event:/UI/ProgressBar')*/ uRam0000000003d79108,0,0,0);
      *(undefined8 *)(param_5 + 0xb8) = uVar3;
    }
    uVar10 = *(undefined8 *)(param_5 + 0x20);
    uVar3 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
    if (iVar2 != 0) {
      plVar4 = *(long **)(param_5 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_014fcb00;
      uVar14 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      *(undefined4 *)(param_5 + 0x68) = uVar14;
      *(undefined4 *)(param_5 + 0x6c) = param_2;
      *(undefined4 *)(param_5 + 0x70) = param_3;
      *(undefined4 *)(param_5 + 0x74) = param_4;
    }
    uVar10 = *(undefined8 *)(param_5 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
    if (iVar2 != 0) {
      plVar4 = *(long **)(param_5 + 0x28);
      if (plVar4 == (long *)0x0) {
LAB_014fcb00:
        lVar5 = func_0x00f78af4();
        pcStack_38 = Atlas_UI_SlantFillBar__UpdateCachedLocalPosition;
        ppuVar12 = &puStack_40;
        uStack_50 = uVar10;
        lStack_48 = param_5;
        puStack_40 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb4ccd & 1) == 0) {
          func_0x00f78a20(0x3d24188);
          bRam0000000003eb4ccd = 1;
        }
        plVar4 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
        }
        else if (*plVar4 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
          uVar14 = /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(plVar4,0);
          *(undefined4 *)(lVar5 + 0x88) = uVar14;
          *(undefined4 *)(lVar5 + 0x8c) = param_2;
          return;
        }
        pcVar13 = Atlas_UI_SlantFillBar__UpdateVisualsForProgress;
        lVar6 = func_0x00f78e5c();
        puVar1 = &uStack_50;
        uVar10 = extraout_x1;
        uVar11 = 0x3eb4000;
        uVar15 = extraout_s0;
        do {
          uVar8 = uVar10;
          lVar7 = lVar6;
          *(ulong *)((long)puVar1 + -0x50) = unaff_d11;
          *(ulong *)((long)puVar1 + -0x48) = unaff_d10;
          *(ulong *)((long)puVar1 + -0x40) = unaff_d9;
          *(ulong *)((long)puVar1 + -0x38) = unaff_d8;
          *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)((long)puVar1 + -0x28) = uVar3;
          *(undefined8 *)((long)puVar1 + -0x20) = uVar11;
          *(long *)((long)puVar1 + -0x18) = lVar5;
          *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar12;
          *(code **)((long)puVar1 + -8) = pcVar13;
          ppuVar12 = (undefined1 **)((long)puVar1 + -0x10);
          unaff_d8 = (ulong)uVar15;
          unaff_x22 = 0x3d23990;
          if ((bRam0000000003eb4cd1 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4cd1 = 1;
          }
          fVar18 = *(float *)(lVar7 + 0x34);
          unaff_d11 = (ulong)(uint)fVar18;
          fVar17 = *(float *)(lVar7 + 0x38);
          unaff_d9 = (ulong)(uint)fVar17;
          fVar16 = (float)/*Atlas.UI.SlantFillBar$$CalculateProgressRespectingGaps*/ func_0x014fd344(fVar17,lVar7);
          unaff_d10 = (ulong)(uint)fVar16;
          uVar3 = *(undefined8 *)(lVar7 + 0x18);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
          if (iVar2 == 0) {
LAB_014fcc38:
            uVar3 = *(undefined8 *)(lVar7 + 0x20);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
            uVar9 = (uint)uVar8;
            if (iVar2 == 0) {
LAB_014fccc0:
              uVar3 = *(undefined8 *)(lVar7 + 0x28);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
              if (iVar2 == 0) goto LAB_014fcd68;
              plVar4 = *(long **)(lVar7 + 0x28);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x2a8))
                          (*(undefined4 *)(lVar7 + 0x78),*(undefined4 *)(lVar7 + 0x7c),
                           *(undefined4 *)(lVar7 + 0x80),
                           *(float *)(lVar7 + 0x84) * *(float *)(lVar7 + 0xa0),plVar4,
                           *(undefined8 *)(*plVar4 + 0x2b0));
                if (*(long *)(lVar7 + 0x28) != 0) {
                  /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x28),0);
                  if (*(long *)(lVar7 + 0x28) != 0) {
                    fVar16 = fVar16 - *(float *)(lVar7 + 0x30);
                    if (fVar16 <= 0.0) {
                      fVar16 = 0.0;
                    }
                    /*Core.UI2.UISlantElement$$set_StartFillPercentage*/ func_0x02f8afec(fVar16,*(long *)(lVar7 + 0x28),0);
                    if (*(long *)(lVar7 + 0x28) != 0) {
                      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x28),fVar18 < fVar17 & uVar9,0);
LAB_014fcd68:
                      *(uint *)(lVar7 + 0xa4) = uVar15;
                      return;
                    }
                  }
                }
              }
            }
            else {
              plVar4 = *(long **)(lVar7 + 0x20);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x2a8))
                          (*(undefined4 *)(lVar7 + 0x68),*(undefined4 *)(lVar7 + 0x6c),
                           *(undefined4 *)(lVar7 + 0x70),
                           *(float *)(lVar7 + 0x74) * *(float *)(lVar7 + 0xa0),plVar4,
                           *(undefined8 *)(*plVar4 + 0x2b0));
                if (*(long *)(lVar7 + 0x20) != 0) {
                  /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x20),0);
                  if (*(long *)(lVar7 + 0x20) != 0) {
                    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x20),fVar18 < fVar17 & uVar9,0);
                    goto LAB_014fccc0;
                  }
                }
              }
            }
          }
          else if (*(long *)(lVar7 + 0x18) != 0) {
            /*Core.UI2.UISlantElement$$set_EndfillPercentage*/ func_0x02f8b024(fVar16,*(long *)(lVar7 + 0x18),0);
            if (*(long *)(lVar7 + 0x18) != 0) {
              /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar7 + 0x18),fVar18 < fVar17,0);
              goto LAB_014fcc38;
            }
          }
          pcVar13 = Atlas_UI_SlantFillBar__SetProgress;
          lVar6 = func_0x00f78af4();
          *(uint *)(lVar6 + 0x38) = extraout_s0_00;
          puVar1 = (undefined8 *)((long)puVar1 + -0x50);
          uVar10 = 0;
          lVar5 = lVar7;
          uVar11 = uVar8;
          uVar15 = extraout_s0_00;
        } while( true );
      }
      uVar14 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      *(undefined4 *)(param_5 + 0x78) = uVar14;
      *(undefined4 *)(param_5 + 0x7c) = param_2;
      *(undefined4 *)(param_5 + 0x80) = param_3;
      *(undefined4 *)(param_5 + 0x84) = param_4;
    }
    Atlas_UI_SlantFillBar__UpdateCachedLocalPosition(param_5);
    Atlas_UI_SlantFillBar__UpdateVisualsForProgress(*(undefined4 *)(param_5 + 0x38),param_5,0);
    *(undefined1 *)(param_5 + 200) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x14fcfdc | Atlas.UI.SlantFillBar.OnDestroy
// ============================================================

void Atlas_UI_SlantFillBar__OnDestroy(long param_1)

{
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_1 + 0xb8),0,0);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



// ============================================================
// RVA: 0x14fd018 | Atlas.UI.SlantFillBar.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014fd078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fd07c) */
/* WARNING: Removing unreachable block (ram,0x014fd0a0) */
/* WARNING: Removing unreachable block (ram,0x014fd0a4) */
/* WARNING: Removing unreachable block (ram,0x014fd0a8) */
/* WARNING: Removing unreachable block (ram,0x014fd0c0) */
/* WARNING: Removing unreachable block (ram,0x014fd0c4) */
/* WARNING: Removing unreachable block (ram,0x014fd0c8) */
/* WARNING: Removing unreachable block (ram,0x014fd178) */
/* WARNING: Removing unreachable block (ram,0x014fd0f8) */
/* WARNING: Removing unreachable block (ram,0x014fd17c) */
/* WARNING: Removing unreachable block (ram,0x014fd110) */
/* WARNING: Removing unreachable block (ram,0x014fd138) */
/* WARNING: Removing unreachable block (ram,0x014fd13c) */
/* WARNING: Removing unreachable block (ram,0x014fcb7c) */
/* WARNING: Removing unreachable block (ram,0x014fcbb4) */
/* WARNING: Removing unreachable block (ram,0x014fcbc8) */
/* WARNING: Removing unreachable block (ram,0x014fcbec) */
/* WARNING: Removing unreachable block (ram,0x014fcbf4) */
/* WARNING: Removing unreachable block (ram,0x014fcbf8) */
/* WARNING: Removing unreachable block (ram,0x014fcc0c) */
/* WARNING: Removing unreachable block (ram,0x014fcc14) */
/* WARNING: Removing unreachable block (ram,0x014fcc28) */
/* WARNING: Removing unreachable block (ram,0x014fcc2c) */
/* WARNING: Removing unreachable block (ram,0x014fcc38) */
/* WARNING: Removing unreachable block (ram,0x014fcc48) */
/* WARNING: Removing unreachable block (ram,0x014fcc50) */
/* WARNING: Removing unreachable block (ram,0x014fcc54) */
/* WARNING: Removing unreachable block (ram,0x014fcc68) */
/* WARNING: Removing unreachable block (ram,0x014fcc70) */
/* WARNING: Removing unreachable block (ram,0x014fcc98) */
/* WARNING: Removing unreachable block (ram,0x014fccac) */
/* WARNING: Removing unreachable block (ram,0x014fccb0) */
/* WARNING: Removing unreachable block (ram,0x014fccc0) */
/* WARNING: Removing unreachable block (ram,0x014fccd0) */
/* WARNING: Removing unreachable block (ram,0x014fccd8) */
/* WARNING: Removing unreachable block (ram,0x014fccdc) */
/* WARNING: Removing unreachable block (ram,0x014fccf0) */
/* WARNING: Removing unreachable block (ram,0x014fccf8) */
/* WARNING: Removing unreachable block (ram,0x014fcd20) */
/* WARNING: Removing unreachable block (ram,0x014fcd34) */
/* WARNING: Removing unreachable block (ram,0x014fcd40) */
/* WARNING: Removing unreachable block (ram,0x014fcd44) */
/* WARNING: Removing unreachable block (ram,0x014fcd84) */
/* WARNING: Removing unreachable block (ram,0x014fcd54) */
/* WARNING: Removing unreachable block (ram,0x014fcd58) */
/* WARNING: Removing unreachable block (ram,0x014fcd68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_SlantFillBar__Update(long param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000003eb4cd0 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4cd0 = 1;
  }
  if ((*(float *)(param_1 + 0xa4) == *(float *)(param_1 + 0x38)) &&
     (*(char *)(param_1 + 0x90) == '\0')) {
    return;
  }
  fVar5 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  if ((bRam0000000003eb4cd2 & 1) == 0) {
    func_0x00f78a20(0x3d3d9f8);
    func_0x00f78a20(0x3d3da00);
    func_0x00f78a20(0x3d3da08);
    func_0x00f78a20(0x3d7aec0);
    bRam0000000003eb4cd2 = 1;
  }
  fVar2 = _UNK_033f85c4;
  fVar1 = _UNK_033f85c0;
  if (*(char *)(param_1 + 0x90) == '\0') {
    return;
  }
  fVar7 = *(float *)(param_1 + 0x38);
  for (; 0.0 < fVar5; fVar5 = fVar5 + fVar2) {
    fVar6 = fVar5;
    if (fVar1 < fVar5) {
      fVar6 = fVar1;
    }
    /*Atlas.UI.SlantFillBar$$AnimateProgressToTarget*/ func_0x014fd488(fVar6,param_1);
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if (*(long *)(param_1 + 0xb8) == 0) goto code_r0x014fd328;
    /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8(*(undefined4 *)(param_1 + 0x38),*(long *)(param_1 + 0xb8),/*STR('parameter:/ProgressPitch')*/ uRam0000000003d7aec0,0
                    ,0);
  }
  if (ABS(*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x38)) <= _UNK_033f85c8) {
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (*(char *)(param_1 + 0x3c) != '\0') {
      if (*(long *)(param_1 + 0xb8) == 0) goto code_r0x014fd328;
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_1 + 0xb8),0,0);
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
    if (*(long *)(param_1 + 0x98) != 0) {
      /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(*(long *)(param_1 + 0x98),0);
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    return;
  }
  uVar3 = 0;
  do {
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar3) {
      return;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar4 = *(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 0x10;
    fVar5 = *(float *)(lVar4 + 0x20);
    if ((fVar7 < fVar5) && (fVar5 <= *(float *)(param_1 + 0x38))) {
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) break;
      /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar4,0);
      if (*(long *)(param_1 + 0xc0) == 0) break;
      /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$RemoveAt*/ func_0x0259e71c(*(long *)(param_1 + 0xc0),uVar3,uRam0000000003d3d9f8);
      uVar3 = uVar3 - 1;
    }
    uVar3 = uVar3 + 1;
    lVar4 = *(long *)(param_1 + 0xc0);
  } while (lVar4 != 0);
code_r0x014fd328:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14fd180 | Atlas.UI.SlantFillBar.UpdateAnimateProgressToTarget
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_SlantFillBar__UpdateAnimateProgressToTarget(float param_1,long param_2)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000003eb4cd2 & 1) == 0) {
    func_0x00f78a20(0x3d3d9f8);
    func_0x00f78a20(0x3d3da00);
    func_0x00f78a20(0x3d3da08);
    func_0x00f78a20(0x3d7aec0);
    bRam0000000003eb4cd2 = 1;
  }
  fVar1 = _UNK_033f85c4;
  fVar5 = _UNK_033f85c0;
  if (*(char *)(param_2 + 0x90) == '\0') {
    return;
  }
  fVar6 = *(float *)(param_2 + 0x38);
  for (; 0.0 < param_1; param_1 = param_1 + fVar1) {
    fVar4 = param_1;
    if (fVar5 < param_1) {
      fVar4 = fVar5;
    }
    /*Atlas.UI.SlantFillBar$$AnimateProgressToTarget*/ func_0x014fd488(fVar4,param_2);
  }
  if (*(char *)(param_2 + 0x3c) != '\0') {
    if (*(long *)(param_2 + 0xb8) == 0) goto LAB_014fd328;
    /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8(*(undefined4 *)(param_2 + 0x38),*(long *)(param_2 + 0xb8),/*STR('parameter:/ProgressPitch')*/ uRam0000000003d7aec0,0
                    ,0);
  }
  if (ABS(*(float *)(param_2 + 0x94) - *(float *)(param_2 + 0x38)) <= _UNK_033f85c8) {
    *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x94);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    if (*(char *)(param_2 + 0x3c) != '\0') {
      if (*(long *)(param_2 + 0xb8) == 0) goto LAB_014fd328;
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_2 + 0xb8),0,0);
    }
    *(undefined1 *)(param_2 + 0x90) = 0;
    if (*(long *)(param_2 + 0x98) != 0) {
      /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(*(long *)(param_2 + 0x98),0);
      *(undefined8 *)(param_2 + 0x98) = 0;
    }
  }
  lVar3 = *(long *)(param_2 + 0xc0);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = 0;
  do {
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x10;
    fVar5 = *(float *)(lVar3 + 0x20);
    if ((fVar6 < fVar5) && (fVar5 <= *(float *)(param_2 + 0x38))) {
      lVar3 = *(long *)(lVar3 + 0x28);
      if (lVar3 == 0) break;
      /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar3,0);
      if (*(long *)(param_2 + 0xc0) == 0) break;
      /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$RemoveAt*/ func_0x0259e71c(*(long *)(param_2 + 0xc0),uVar2,uRam0000000003d3d9f8);
      uVar2 = uVar2 - 1;
    }
    uVar2 = uVar2 + 1;
    lVar3 = *(long *)(param_2 + 0xc0);
  } while (lVar3 != 0);
LAB_014fd328:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14fd344 | Atlas.UI.SlantFillBar.CalculateProgressRespectingGaps
// ============================================================

float Atlas_UI_SlantFillBar__CalculateProgressRespectingGaps
                (float param_1,float param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = *(long *)(param_3 + 0x58);
  if (lVar2 == 0) {
    return param_1;
  }
  uVar4 = *(ulong *)(lVar2 + 0x18);
  if (uVar4 == 0) {
    return param_1;
  }
  iVar3 = (int)uVar4;
  if (iVar3 < 1) {
    fVar10 = 0.0;
  }
  else {
    uVar6 = uVar4 & 0xffffffff;
    param_2 = 0.0;
    fVar10 = 0.0;
    pfVar8 = (float *)(lVar2 + 0x24);
    do {
      fVar9 = pfVar8[-1] - param_2;
      param_2 = *pfVar8;
      fVar10 = fVar10 + fVar9;
      uVar6 = uVar6 - 1;
      pfVar8 = pfVar8 + 4;
    } while (uVar6 != 0);
  }
  if (iVar3 == 0) {
    uVar1 = func_0x00f78b24();
    param_1 = (float)func_0x00f78ac0(uVar1,0);
  }
  else {
    param_2 = 1.0;
    fVar10 = (fVar10 + (1.0 - *(float *)(lVar2 + ((long)((uVar4 << 0x20) + -0x100000000) >> 0x1c) +
                                        0x24))) * param_1;
    if (0 < iVar3) {
      fVar9 = *(float *)(lVar2 + 0x20);
      fVar12 = fVar10 / fVar9;
      lVar7 = 0;
      if (fVar12 <= 1.0) {
        fVar10 = 0.0;
      }
      else {
        fVar11 = 0.0;
        pfVar8 = (float *)(lVar2 + 0x30);
        do {
          pfVar5 = pfVar8;
          fVar12 = pfVar5[-3];
          fVar11 = fVar11 + fVar9;
          if ((uVar4 & 0xffffffff) - 1 == lVar7) {
            fVar9 = pfVar5[-1];
            goto code_r0x014fd45c;
          }
          fVar9 = *pfVar5 - fVar12;
          fVar12 = (fVar10 - fVar11) / fVar9;
          lVar7 = lVar7 + 1;
          pfVar8 = pfVar5 + 4;
        } while (1.0 < fVar12);
        fVar10 = pfVar5[-1];
      }
      return fVar10 + fVar12 * (*(float *)(lVar2 + lVar7 * 0x10 + 0x28) - fVar10);
    }
  }
  fVar11 = 0.0;
  fVar9 = 0.0;
  fVar12 = 0.0;
code_r0x014fd45c:
  fVar10 = (fVar10 - fVar11) / (param_2 - fVar12);
  if (fVar10 <= param_2) {
    param_1 = fVar9 + (1.0 - fVar9) * fVar10;
  }
  return param_1;
}



// ============================================================
// RVA: 0x14fd488 | Atlas.UI.SlantFillBar.AnimateProgressToTarget
// ============================================================

void Atlas_UI_SlantFillBar__AnimateProgressToTarget(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0xa8);
  fVar1 = *(float *)(param_2 + 0x38) +
          fVar3 * param_1 + param_1 * 0.5 * param_1 * *(float *)(param_2 + 0xac);
  *(float *)(param_2 + 0x38) = fVar1;
  fVar1 = fVar3 * -*(float *)(param_2 + 0x50) -
          *(float *)(param_2 + 0x4c) * (fVar1 - *(float *)(param_2 + 0x94));
  fVar3 = fVar3 + param_1 * 0.5 * (*(float *)(param_2 + 0xac) + fVar1);
  *(float *)(param_2 + 0xa8) = fVar3;
  fVar2 = *(float *)(param_2 + 0x54);
  if ((fVar2 < fVar3) || (fVar2 = -fVar2, fVar3 < fVar2)) {
    *(float *)(param_2 + 0xa8) = fVar2;
  }
  *(float *)(param_2 + 0xac) = fVar1;
  return;
}



// ============================================================
// RVA: 0x14fd500 | Atlas.UI.SlantFillBar..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_UI_SlantFillBar___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  *(undefined8 *)(param_5 + 0x30) = _UNK_033f85f8;
  uVar1 = _UNK_033f8640;
  *(undefined8 *)(param_5 + 0x48) = _UNK_033f8648;
  *(undefined8 *)(param_5 + 0x40) = uVar1;
  *(undefined8 *)(param_5 + 0x50) = _UNK_033f8600;
  uVar2 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x68) = uVar2;
  *(undefined4 *)(param_5 + 0x6c) = param_2;
  *(undefined4 *)(param_5 + 0x70) = param_3;
  *(undefined4 *)(param_5 + 0x74) = param_4;
  uVar2 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x78) = uVar2;
  *(undefined4 *)(param_5 + 0x7c) = param_2;
  *(undefined4 *)(param_5 + 0x80) = param_3;
  *(undefined4 *)(param_5 + 0x84) = param_4;
  uVar2 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_5 + 0x88) = uVar2;
  *(undefined4 *)(param_5 + 0x8c) = param_2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_5;
  return auVar3;
}



