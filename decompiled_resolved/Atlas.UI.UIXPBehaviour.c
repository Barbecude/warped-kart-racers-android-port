// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIXPBehaviour

// ============================================================
// RVA: 0x151da28 | Atlas.UI.UIXPBehaviour.SetVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UIXPBehaviour__SetVisible
                (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_54;
  
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_5,0);
  if (lVar3 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000003ebf4c0)(lVar3,param_6);
    return uVar5;
  }
  auVar14 = func_0x00f78af4();
  uStack_54 = auVar14._8_4_;
  if ((bRam0000000003eb4e04 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e04 = 1;
  }
  uVar6 = *(undefined8 *)(auVar14._0_8_ + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  lVar3 = *(long *)(auVar14._0_8_ + 0x20);
  uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
  if (lVar3 != 0) {
    uVar5 = /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(lVar3,uVar6,1,0);
    return uVar5;
  }
  auVar13 = func_0x00f78af4();
  if ((bRam0000000003eb4e05 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e05 = 1;
  }
  uVar6 = *(undefined8 *)(auVar13._0_8_ + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  plVar4 = *(long **)(auVar13._0_8_ + 0x20);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151dba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar4 + 0x558))(plVar4,auVar13._8_8_,*(undefined8 *)(*plVar4 + 0x560));
    return uVar5;
  }
  auVar13 = func_0x00f78af4();
  lVar3 = auVar13._8_8_;
  if ((bRam0000000003eb4e06 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e06 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  plVar4 = *(long **)(auVar13._0_8_ + 0x18);
  if (plVar4 == (long *)0x0) {
    uVar5 = func_0x00f78af4();
    uStack_f0 = 0x3d23990;
    uStack_e8 = 0x3eb4000;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar5;
  }
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar3,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  lVar7 = plVar4[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (lVar3 != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar3,0);
      uStack_f0 = CONCAT44(param_2,uVar9);
      uStack_e8 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_f0,0);
      fVar12 = param_2;
      fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar4 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           _UNK_033f8490;
      uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar3,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = 0;
code_r0x032c2400:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,uVar8,0);
      *(undefined1 *)((long)plVar4 + 0x31) = uVar1;
      plVar4[0x1a] = lVar3;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      goto code_r0x032c244c;
    }
  }
  else {
    lVar7 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,lVar3,0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (plVar4[0x1a] != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar4[0x1a],0);
      uStack_f0 = CONCAT44(param_2,uVar9);
      uStack_e8 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_f0,0);
      fVar12 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar3,0);
      if ((uVar5 & 1) == 0) {
        fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar3 == 0) goto code_r0x032c2448;
        uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar3,0);
        uStack_f0 = CONCAT44(fVar12,uVar9);
        uStack_e8 = CONCAT44(param_4,param_3);
        fVar11 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_f0,0);
      }
      *(bool *)(plVar4 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar4[0x1a] != 0) {
        uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar4[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar3,0);
        uVar8 = 0;
        if (iVar2 != 0) {
          if (lVar3 == 0) goto code_r0x032c2448;
          uVar8 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar3,0);
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
  plVar4 = (long *)func_0x00f78af4();
code_r0x032c244c:
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar5 != 0) {
    lVar3 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
    if (lVar3 == 0) {
      uVar5 = func_0x00f78af4();
      *(undefined2 *)(uVar5 + 0x30) = 0;
      return uVar5;
    }
    uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar3,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
    if ((int)uVar5 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar4);
      *(undefined1 *)((long)plVar4 + 0xfc) = 1;
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x151da5c | Atlas.UI.UIXPBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UIXPBehaviour__Set
                (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                long param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_34;
  
  uStack_34 = param_6;
  if ((bRam0000000003eb4e04 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e04 = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar5 = *(long *)(param_5 + 0x20);
  uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  if (lVar5 != 0) {
    uVar3 = /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(lVar5,uVar6,1,0);
    return uVar3;
  }
  auVar13 = func_0x00f78af4();
  if ((bRam0000000003eb4e05 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e05 = 1;
  }
  uVar6 = *(undefined8 *)(auVar13._0_8_ + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  plVar4 = *(long **)(auVar13._0_8_ + 0x20);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151dba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar4 + 0x558))(plVar4,auVar13._8_8_,*(undefined8 *)(*plVar4 + 0x560));
    return uVar3;
  }
  auVar13 = func_0x00f78af4();
  lVar5 = auVar13._8_8_;
  if ((bRam0000000003eb4e06 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e06 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  plVar4 = *(long **)(auVar13._0_8_ + 0x18);
  if (plVar4 == (long *)0x0) {
    uVar3 = func_0x00f78af4();
    uStack_d0 = 0x3d23990;
    uStack_c8 = 0x3eb4000;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar5,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  lVar7 = plVar4[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (lVar5 != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
      uStack_d0 = CONCAT44(param_2,uVar9);
      uStack_c8 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_d0,0);
      fVar12 = param_2;
      fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar4 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           _UNK_033f8490;
      uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = 0;
code_r0x032c2400:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,uVar8,0);
      *(undefined1 *)((long)plVar4 + 0x31) = uVar1;
      plVar4[0x1a] = lVar5;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      goto code_r0x032c244c;
    }
  }
  else {
    lVar7 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,lVar5,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (plVar4[0x1a] != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar4[0x1a],0);
      uStack_d0 = CONCAT44(param_2,uVar9);
      uStack_c8 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_d0,0);
      fVar12 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
      if ((uVar3 & 1) == 0) {
        fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar5 == 0) goto code_r0x032c2448;
        uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
        uStack_d0 = CONCAT44(fVar12,uVar9);
        uStack_c8 = CONCAT44(param_4,param_3);
        fVar11 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_d0,0);
      }
      *(bool *)(plVar4 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar4[0x1a] != 0) {
        uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar4[0x1a],0);
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
  plVar4 = (long *)func_0x00f78af4();
code_r0x032c244c:
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar3 != 0) {
    lVar5 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
    if (lVar5 == 0) {
      uVar3 = func_0x00f78af4();
      *(undefined2 *)(uVar3 + 0x30) = 0;
      return uVar3;
    }
    uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
    if ((int)uVar3 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar4);
      *(undefined1 *)((long)plVar4 + 0xfc) = 1;
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x151db10 | Atlas.UI.UIXPBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UIXPBehaviour__Set
                (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                long param_5,undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb4e05 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e05 = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  plVar4 = *(long **)(param_5 + 0x20);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151dba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar4 + 0x558))(plVar4,param_6,*(undefined8 *)(*plVar4 + 0x560));
    return uVar3;
  }
  auVar13 = func_0x00f78af4();
  lVar5 = auVar13._8_8_;
  if ((bRam0000000003eb4e06 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e06 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  plVar4 = *(long **)(auVar13._0_8_ + 0x18);
  if (plVar4 == (long *)0x0) {
    uVar3 = func_0x00f78af4();
    uStack_90 = 0x3d23990;
    uStack_88 = 0x3eb4000;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar5,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lVar7 = plVar4[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (lVar5 != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
      uStack_90 = CONCAT44(param_2,uVar9);
      uStack_88 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_90,0);
      fVar12 = param_2;
      fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar4 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           _UNK_033f8490;
      uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = 0;
code_r0x032c2400:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,uVar8,0);
      *(undefined1 *)((long)plVar4 + 0x31) = uVar1;
      plVar4[0x1a] = lVar5;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      goto code_r0x032c244c;
    }
  }
  else {
    lVar7 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,lVar5,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (plVar4[0x1a] != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar4[0x1a],0);
      uStack_90 = CONCAT44(param_2,uVar9);
      uStack_88 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_90,0);
      fVar12 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
      if ((uVar3 & 1) == 0) {
        fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar5 == 0) goto code_r0x032c2448;
        uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
        uStack_90 = CONCAT44(fVar12,uVar9);
        uStack_88 = CONCAT44(param_4,param_3);
        fVar11 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_90,0);
      }
      *(bool *)(plVar4 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar4[0x1a] != 0) {
        uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar4[0x1a],0);
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
  plVar4 = (long *)func_0x00f78af4();
code_r0x032c244c:
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar3 != 0) {
    lVar5 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
    if (lVar5 == 0) {
      uVar3 = func_0x00f78af4();
      *(undefined2 *)(uVar3 + 0x30) = 0;
      return uVar3;
    }
    uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
    if ((int)uVar3 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar4);
      *(undefined1 *)((long)plVar4 + 0xfc) = 1;
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x151dbbc | Atlas.UI.UIXPBehaviour.SetImage
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UIXPBehaviour__SetImage
                (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                long param_5,long param_6)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4e06 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e06 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_6,0,0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  plVar4 = *(long **)(param_5 + 0x18);
  if (plVar4 == (long *)0x0) {
    uVar3 = func_0x00f78af4();
    uStack_60 = 0x3d23990;
    uStack_58 = 0x3eb4000;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,param_6,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lVar6 = plVar4[0x1a];
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
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (param_6 != 0) {
      uVar8 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_6,0);
      uStack_60 = CONCAT44(param_2,uVar8);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar9 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar11 = param_2;
      fVar10 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar4 + 6) =
           (fVar9 - fVar10) * (fVar9 - fVar10) + (param_2 - fVar11) * (param_2 - fVar11) <
           _UNK_033f8490;
      uVar5 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_6,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
code_r0x032c2400:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,uVar7,0);
      *(undefined1 *)((long)plVar4 + 0x31) = uVar1;
      plVar4[0x1a] = param_6;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      goto code_r0x032c244c;
    }
  }
  else {
    lVar6 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,param_6,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (plVar4[0x1a] != 0) {
      uVar8 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar4[0x1a],0);
      uStack_60 = CONCAT44(param_2,uVar8);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar9 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar11 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_6,0);
      if ((uVar3 & 1) == 0) {
        fVar10 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (param_6 == 0) goto code_r0x032c2448;
        uVar8 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_6,0);
        uStack_60 = CONCAT44(fVar11,uVar8);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      }
      *(bool *)(plVar4 + 6) = fVar9 == fVar10 && param_2 == fVar11;
      if (plVar4[0x1a] != 0) {
        uVar5 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar4[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_6,0);
        uVar7 = 0;
        if (iVar2 != 0) {
          if (param_6 == 0) goto code_r0x032c2448;
          uVar7 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_6,0);
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
  plVar4 = (long *)func_0x00f78af4();
code_r0x032c244c:
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar5 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if ((int)uVar3 != 0) {
    lVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar4);
    if (lVar6 == 0) {
      uVar3 = func_0x00f78af4();
      *(undefined2 *)(uVar3 + 0x30) = 0;
      return uVar3;
    }
    uVar5 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar6,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
    if ((int)uVar3 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar4);
      *(undefined1 *)((long)plVar4 + 0xfc) = 1;
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x151dc5c | Atlas.UI.UIXPBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIXPBehaviour___ctor(ulong param_1)

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



