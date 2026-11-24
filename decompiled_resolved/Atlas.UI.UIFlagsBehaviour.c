// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIFlagsBehaviour

// ============================================================
// RVA: 0x151ab74 | Atlas.UI.UIFlagsBehaviour.SetVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIFlagsBehaviour__SetVisible
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar10;
  undefined8 unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined *puStack_68;
  
  auVar20._8_8_ = unaff_x21;
  auVar20._0_8_ = param_6;
  lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_5,0);
  if (lVar4 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*pcRam0000000003ebf4c0)(lVar4,param_6);
    return lVar4;
  }
  auVar19 = func_0x00f78af4();
  lVar4 = auVar19._0_8_;
  puVar13 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4de3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d7cfe8);
    bRam0000000003eb4de3 = 1;
  }
  uVar11 = *(undefined8 *)(lVar4 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar9 = 0;
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar3 == 0) {
code_r0x0151ac50:
    plVar5 = *(long **)(lVar4 + 0x18);
    if (plVar5 == (long *)0x0) goto code_r0x0151ac84;
    lVar10 = 0x28;
    if ((int)param_7 <= auVar19._8_4_) {
      lVar10 = 0x30;
    }
    lVar4 = *(long *)(lVar4 + lVar10);
    puStack_68 = &Atlas_UI_UIFlagsBehaviour__Set;
    puVar1 = &stack0xffffffffffffffe0;
    param_7 = unaff_x20;
    uVar11 = unaff_x22;
    puVar13 = &stack0xfffffffffffffff0;
    auVar19 = auVar20;
  }
  else {
    if (*(long *)(lVar4 + 0x20) != 0) {
      param_2 = (float)(int)param_7;
      iVar9 = 0;
      /*TMPro.TMP_Text$$SetText*/ func_0x031b40a4((float)auVar19._8_4_,*(long *)(lVar4 + 0x20),/*STR('{0}<size=90%>/{1}')*/ uRam0000000003d7cfe8);
      goto code_r0x0151ac50;
    }
code_r0x0151ac84:
    auVar20 = func_0x00f78af4();
    lVar4 = auVar20._0_8_;
    puStack_68 = &Atlas_UI_UIFlagsBehaviour__Set;
    if ((bRam0000000003eb4de4 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4de4 = 1;
    }
    uVar12 = *(undefined8 *)(lVar4 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
    if (iVar3 != 0) {
      plVar5 = *(long **)(lVar4 + 0x20);
      if (plVar5 == (long *)0x0) goto code_r0x0151ad50;
      (**(code **)(*plVar5 + 0x558))(plVar5,auVar20._8_8_,*(undefined8 *)(*plVar5 + 0x560));
    }
    plVar5 = *(long **)(lVar4 + 0x18);
    if (plVar5 == (long *)0x0) {
code_r0x0151ad50:
      lVar4 = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return lVar4;
    }
    lVar10 = 0x30;
    if (iVar9 == 0) {
      lVar10 = 0x28;
    }
    lVar4 = *(long *)(lVar4 + lVar10);
    puVar1 = &stack0xffffffffffffffa0;
    unaff_x23 = 0x3d23990;
  }
  *(undefined8 *)(puVar1 + -0x50) = unaff_d9;
  *(undefined8 *)(puVar1 + -0x48) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = uVar11;
  *(long *)(puVar1 + -0x28) = auVar19._8_8_;
  *(undefined8 *)(puVar1 + -0x20) = param_7;
  *(long *)(puVar1 + -0x18) = auVar19._0_8_;
  *(undefined1 **)(puVar1 + -0x10) = puVar13;
  *(undefined **)(puVar1 + -8) = puStack_68;
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar4,0);
    bRam0000000003ec2cc2 = 1;
  }
  *(undefined8 *)(puVar1 + -0x60) = 0;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  lVar10 = plVar5[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
  if (iVar3 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (lVar4 != 0) {
      uVar15 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar4,0);
      *(undefined4 *)(puVar1 + -0x60) = uVar15;
      *(float *)(puVar1 + -0x5c) = param_2;
      *(undefined4 *)(puVar1 + -0x58) = param_3;
      *(undefined4 *)(puVar1 + -0x54) = param_4;
      fVar16 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x60,0);
      fVar18 = param_2;
      fVar17 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar5 + 6) =
           (fVar16 - fVar17) * (fVar16 - fVar17) + (param_2 - fVar18) * (param_2 - fVar18) <
           _UNK_033f8490;
      lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar4,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = 0;
code_r0x032c2400:
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,uVar12,0);
      *(undefined1 *)((long)plVar5 + 0x31) = uVar2;
      plVar5[0x1a] = lVar4;
      (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
      puVar14 = &UNK_032c242c;
      plVar8 = plVar5;
      goto code_r0x032c244c;
    }
  }
  else {
    lVar10 = plVar5[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,lVar4,0);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (plVar5[0x1a] != 0) {
      uVar15 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar5[0x1a],0);
      *(undefined4 *)(puVar1 + -0x60) = uVar15;
      *(float *)(puVar1 + -0x5c) = param_2;
      *(undefined4 *)(puVar1 + -0x58) = param_3;
      *(undefined4 *)(puVar1 + -0x54) = param_4;
      fVar16 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x60,0);
      fVar18 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
      if ((uVar7 & 1) == 0) {
        fVar17 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar4 == 0) goto code_r0x032c2448;
        uVar15 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar4,0);
        *(undefined4 *)(puVar1 + -0x60) = uVar15;
        *(float *)(puVar1 + -0x5c) = fVar18;
        *(undefined4 *)(puVar1 + -0x58) = param_3;
        *(undefined4 *)(puVar1 + -0x54) = param_4;
        fVar17 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x60,0);
      }
      *(bool *)(plVar5 + 6) = fVar16 == fVar17 && param_2 == fVar18;
      if (plVar5[0x1a] != 0) {
        lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar5[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
        uVar12 = 0;
        if (iVar3 != 0) {
          uVar11 = uVar12;
          if (lVar4 == 0) goto code_r0x032c2448;
          uVar12 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar4,0);
        }
        uVar11 = uVar12;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  puVar14 = &UnityEngine_UI_Image__TrackSprite;
  plVar8 = (long *)func_0x00f78af4();
code_r0x032c244c:
  *(undefined8 *)(puVar1 + -0x90) = uVar11;
  *(long *)(puVar1 + -0x88) = lVar10;
  *(long *)(puVar1 + -0x80) = lVar4;
  *(long **)(puVar1 + -0x78) = plVar5;
  *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x68) = puVar14;
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar11 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
  if ((int)lVar4 != 0) {
    lVar4 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar8);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      *(undefined2 *)(lVar4 + 0x30) = 0;
      return lVar4;
    }
    uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar4,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
    if ((int)lVar4 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar8);
      *(undefined1 *)((long)plVar8 + 0xfc) = 1;
    }
  }
  return lVar4;
}



// ============================================================
// RVA: 0x151aba8 | Atlas.UI.UIFlagsBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIFlagsBehaviour__Set
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  undefined *puVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  undefined *puStack_48;
  
  puVar12 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4de3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d7cfe8);
    bRam0000000003eb4de3 = 1;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar8 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0);
  if (iVar2 == 0) {
LAB_0151ac50:
    plVar3 = *(long **)(param_5 + 0x18);
    if (plVar3 == (long *)0x0) goto LAB_0151ac84;
    lVar7 = 0x28;
    if ((int)param_7 <= (int)param_6) {
      lVar7 = 0x30;
    }
    lVar7 = *(long *)(param_5 + lVar7);
    param_5 = unaff_x19;
    param_7 = unaff_x20;
    param_6 = unaff_x21;
    uVar10 = unaff_x22;
    puVar12 = unaff_x29;
  }
  else {
    if (*(long *)(param_5 + 0x20) != 0) {
      param_2 = (float)(int)param_7;
      iVar8 = 0;
      /*TMPro.TMP_Text$$SetText*/ func_0x031b40a4((float)(int)param_6,*(long *)(param_5 + 0x20),/*STR('{0}<size=90%>/{1}')*/ uRam0000000003d7cfe8);
      goto LAB_0151ac50;
    }
LAB_0151ac84:
    auVar18 = func_0x00f78af4();
    lVar7 = auVar18._0_8_;
    puStack_48 = &Atlas_UI_UIFlagsBehaviour__Set;
    if ((bRam0000000003eb4de4 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4de4 = 1;
    }
    uVar11 = *(undefined8 *)(lVar7 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
    if (iVar2 != 0) {
      plVar3 = *(long **)(lVar7 + 0x20);
      if (plVar3 == (long *)0x0) goto code_r0x0151ad50;
      (**(code **)(*plVar3 + 0x558))(plVar3,auVar18._8_8_,*(undefined8 *)(*plVar3 + 0x560));
    }
    plVar3 = *(long **)(lVar7 + 0x18);
    if (plVar3 == (long *)0x0) {
code_r0x0151ad50:
      lVar7 = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return lVar7;
    }
    lVar9 = 0x30;
    if (iVar8 == 0) {
      lVar9 = 0x28;
    }
    lVar7 = *(long *)(lVar7 + lVar9);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x23 = 0x3d23990;
    unaff_x30 = puStack_48;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0x28) = param_6;
  *(undefined8 *)((long)register0x00000008 + -0x20) = param_7;
  *(long *)((long)register0x00000008 + -0x18) = param_5;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar12;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar7,0);
    bRam0000000003ec2cc2 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  lVar9 = plVar3[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (lVar7 != 0) {
      uVar14 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
      *(undefined4 *)((long)register0x00000008 + -0x60) = uVar14;
      *(float *)((long)register0x00000008 + -0x5c) = param_2;
      *(undefined4 *)((long)register0x00000008 + -0x58) = param_3;
      *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
      fVar15 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0);
      fVar17 = param_2;
      fVar16 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar3 + 6) =
           (fVar15 - fVar16) * (fVar15 - fVar16) + (param_2 - fVar17) * (param_2 - fVar17) <
           _UNK_033f8490;
      lVar9 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = 0;
code_r0x032c2400:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,uVar11,0);
      *(undefined1 *)((long)plVar3 + 0x31) = uVar1;
      plVar3[0x1a] = lVar7;
      (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
      puVar13 = &UNK_032c242c;
      plVar6 = plVar3;
      goto code_r0x032c244c;
    }
  }
  else {
    lVar9 = plVar3[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,lVar7,0);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (plVar3[0x1a] != 0) {
      uVar14 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar3[0x1a],0);
      *(undefined4 *)((long)register0x00000008 + -0x60) = uVar14;
      *(float *)((long)register0x00000008 + -0x5c) = param_2;
      *(undefined4 *)((long)register0x00000008 + -0x58) = param_3;
      *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
      fVar15 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0);
      fVar17 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
      if ((uVar5 & 1) == 0) {
        fVar16 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar7 == 0) goto code_r0x032c2448;
        uVar14 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
        *(undefined4 *)((long)register0x00000008 + -0x60) = uVar14;
        *(float *)((long)register0x00000008 + -0x5c) = fVar17;
        *(undefined4 *)((long)register0x00000008 + -0x58) = param_3;
        *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
        fVar16 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0);
      }
      *(bool *)(plVar3 + 6) = fVar15 == fVar16 && param_2 == fVar17;
      if (plVar3[0x1a] != 0) {
        lVar9 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar3[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
        uVar11 = 0;
        if (iVar2 != 0) {
          uVar10 = uVar11;
          if (lVar7 == 0) goto code_r0x032c2448;
          uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
        }
        uVar10 = uVar11;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  puVar13 = &UnityEngine_UI_Image__TrackSprite;
  plVar6 = (long *)func_0x00f78af4();
code_r0x032c244c:
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar10;
  *(long *)((long)register0x00000008 + -0x88) = lVar9;
  *(long *)((long)register0x00000008 + -0x80) = lVar7;
  *(long **)((long)register0x00000008 + -0x78) = plVar3;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x68) = puVar13;
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar10 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar6);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
  if ((int)lVar7 != 0) {
    lVar7 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar6);
    if (lVar7 == 0) {
      lVar7 = func_0x00f78af4();
      *(undefined2 *)(lVar7 + 0x30) = 0;
      return lVar7;
    }
    uVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
    if ((int)lVar7 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar6);
      *(undefined1 *)((long)plVar6 + 0xfc) = 1;
    }
  }
  return lVar7;
}



// ============================================================
// RVA: 0x151ac88 | Atlas.UI.UIFlagsBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIFlagsBehaviour__Set
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4de4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4de4 = 1;
  }
  uVar7 = *(undefined8 *)(param_5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  if (iVar2 != 0) {
    plVar3 = *(long **)(param_5 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_0151ad50;
    (**(code **)(*plVar3 + 0x558))(plVar3,param_6,*(undefined8 *)(*plVar3 + 0x560));
  }
  plVar3 = *(long **)(param_5 + 0x18);
  if (plVar3 == (long *)0x0) {
LAB_0151ad50:
    lVar5 = func_0x00f78af4();
    uStack_60 = param_7;
    uStack_58 = param_5;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar5;
  }
  lVar5 = 0x30;
  if ((int)param_7 == 0) {
    lVar5 = 0x28;
  }
  lVar5 = *(long *)(param_5 + lVar5);
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar5,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lVar6 = plVar3[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (lVar5 != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar12 = param_2;
      fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar3 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           _UNK_033f8490;
      uVar7 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = 0;
code_r0x032c2400:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,uVar8,0);
      *(undefined1 *)((long)plVar3 + 0x31) = uVar1;
      plVar3[0x1a] = lVar5;
      (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
      goto code_r0x032c244c;
    }
  }
  else {
    lVar6 = plVar3[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,lVar5,0);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (plVar3[0x1a] != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar3[0x1a],0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar12 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
      if ((uVar4 & 1) == 0) {
        fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar5 == 0) goto code_r0x032c2448;
        uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
        uStack_60 = CONCAT44(fVar12,uVar9);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar11 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      }
      *(bool *)(plVar3 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar3[0x1a] != 0) {
        uVar7 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar3[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
        uVar8 = 0;
        if (iVar2 != 0) {
          if (lVar5 == 0) goto code_r0x032c2448;
          uVar8 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  plVar3 = (long *)func_0x00f78af4();
code_r0x032c244c:
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar7 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar3);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  if ((int)lVar5 != 0) {
    lVar5 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar3);
    if (lVar5 == 0) {
      lVar5 = func_0x00f78af4();
      *(undefined2 *)(lVar5 + 0x30) = 0;
      return lVar5;
    }
    uVar7 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((int)lVar5 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar3);
      *(undefined1 *)((long)plVar3 + 0xfc) = 1;
    }
  }
  return lVar5;
}



// ============================================================
// RVA: 0x151ad54 | Atlas.UI.UIFlagsBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIFlagsBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



