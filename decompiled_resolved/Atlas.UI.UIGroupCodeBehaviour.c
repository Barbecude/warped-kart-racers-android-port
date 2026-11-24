// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIGroupCodeBehaviour

// ============================================================
// RVA: 0x151ad5c | Atlas.UI.UIGroupCodeBehaviour.Init
// ============================================================

void Atlas_UI_UIGroupCodeBehaviour__Init(long param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  
  puVar1 = &stack0xffffffffffffffb0;
  puVar6 = &stack0xfffffffffffffff0;
  uVar4 = 0x3eb4000;
  if ((bRam0000000003eb4de5 & 1) == 0) {
    func_0x00f78a20(0x3d2a0a8);
    func_0x00f78a20(0x3d2a088);
    func_0x00f78a20(0x3d1b448);
    func_0x00f78a20(0x3d1b458);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5f6f8);
    func_0x00f78a20(0x3d5f700);
    func_0x00f78a20(0x3d5f708);
    func_0x00f78a20(0x3d5f710);
    bRam0000000003eb4de5 = 1;
  }
  *(long *)(param_1 + 0x40) = param_2;
  lVar5 = unaff_x22;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x28) == 0)) ||
     (lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x30), lVar5 == 0)) {
LAB_0151af80:
    func_0x00f78af4();
  }
  else {
    param_2 = *(long *)(lVar5 + 0x30);
    uVar4 = func_0x00f78aec(/*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448);
    /*System.Action<Group>$$.ctor*/ func_0x01b46100(uVar4,param_1,uRam0000000003d5f700,uRam0000000003d2a088);
    plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(param_2,uVar4,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448)) {
      *(long **)(lVar5 + 0x30) = plVar2;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         ((lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar3 != 0 &&
          (lVar5 = *(long *)(lVar3 + 0x30), lVar5 != 0)))) {
        param_2 = *(long *)(lVar5 + 0x40);
        uVar4 = func_0x00f78aec(/*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458);
        /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar4,param_1,uRam0000000003d5f708,uRam0000000003d2a0a8);
        plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(param_2,uVar4,0);
        if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458)) goto LAB_0151af84;
        *(long **)(lVar5 + 0x40) = plVar2;
        lVar3 = *(long *)(param_1 + 0x28);
        uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d5f6f8,0);
        param_2 = 0;
        if (lVar3 != 0) {
          lVar5 = 0x3d5f000;
          Atlas_UI_UIAtlasButton__add_Pressed(lVar3,uVar4);
          lVar3 = *(long *)(param_1 + 0x30);
          uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d5f710,0);
          param_2 = 0;
          if (lVar3 != 0) {
            Atlas_UI_UIAtlasButton__add_Pressed(lVar3,uVar4);
            puVar1 = (undefined1 *)register0x00000008;
            lVar5 = param_1;
            param_1 = unaff_x19;
            puVar6 = unaff_x29;
            goto code_r0x0151af88;
          }
        }
      }
      goto LAB_0151af80;
    }
  }
LAB_0151af84:
  unaff_x22 = lVar5;
  unaff_x21 = uVar4;
  unaff_x20 = param_2;
  unaff_x30 = &Atlas_UI_UIGroupCodeBehaviour__TrySetGroupCode;
  lVar5 = func_0x00f78e5c();
code_r0x0151af88:
  *(undefined8 *)(puVar1 + -0x40) = unaff_x28;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x27;
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar6;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if ((bRam0000000003eb4de7 & 1) == 0) {
    func_0x00f78a20(0x3d52258);
    bRam0000000003eb4de7 = 1;
  }
  *(undefined8 *)(puVar1 + -0x68) = 0;
  *(undefined8 *)(puVar1 + -0x70) = 0;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  *(undefined8 *)(puVar1 + -0x60) = 0;
  *(undefined8 *)(puVar1 + -0x88) = 0;
  *(undefined8 *)(puVar1 + -0x90) = 0;
  *(undefined8 *)(puVar1 + -0x78) = 0;
  *(undefined8 *)(puVar1 + -0x80) = 0;
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(long *)(puVar1 + -0x68) = lVar5;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(puVar1 + -0xd0,0);
  *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xb8);
  *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0xc0);
  *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -200);
  *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(puVar1 + -0xd0);
  *(undefined4 *)(puVar1 + -0x90) = 0xffffffff;
  *(undefined8 *)(puVar1 + -0x118) = *(undefined8 *)(puVar1 + -0x88);
  *(undefined8 *)(puVar1 + -0x120) = *(undefined8 *)(puVar1 + -0x90);
  *(undefined8 *)(puVar1 + -0x108) = *(undefined8 *)(puVar1 + -0x78);
  *(undefined8 *)(puVar1 + -0x110) = *(undefined8 *)(puVar1 + -0x80);
  *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(puVar1 + -0x68);
  *(undefined8 *)(puVar1 + -0x100) = *(undefined8 *)(puVar1 + -0x70);
  *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(puVar1 + -0x58);
  *(undefined8 *)(puVar1 + -0xf0) = *(undefined8 *)(puVar1 + -0x60);
  *(undefined8 *)(puVar1 + -0xe0) = *(undefined8 *)(puVar1 + -0x50);
  *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0x110);
  *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0x118);
  *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -0x100);
  *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0x108);
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<UIGroupCodeBehaviour.<TrySetGroupCode>d__12>*/ func_0x0182c948(puVar1 + -0xb0,puVar1 + -0x90,uRam0000000003d52258);
  return;
}



// ============================================================
// RVA: 0x151af88 | Atlas.UI.UIGroupCodeBehaviour.TrySetGroupCode
// ============================================================

void Atlas_UI_UIGroupCodeBehaviour__TrySetGroupCode(undefined8 param_1)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb4de7 & 1) == 0) {
    func_0x00f78a20(0x3d52258);
    bRam0000000003eb4de7 = 1;
  }
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_50 = 0;
  uStack_68 = param_1;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Create*/ func_0x02933ffc(&uStack_d0,0);
  uStack_70 = uStack_b8;
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  uStack_a8 = uStack_c8;
  uStack_b0 = uStack_d0;
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$Start<UIGroupCodeBehaviour.<TrySetGroupCode>d__12>*/ func_0x0182c948(&uStack_b0,&uStack_90,uRam0000000003d52258);
  return;
}



// ============================================================
// RVA: 0x151b050 | Atlas.UI.UIGroupCodeBehaviour.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x0151b2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151b2b0) */
/* WARNING: Removing unreachable block (ram,0x0151b2c0) */

ulong Atlas_UI_UIGroupCodeBehaviour__DeInit(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long extraout_x1;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4de6 & 1) == 0) {
    func_0x00f78a20(0x3d2a0a8);
    func_0x00f78a20(0x3d2a088);
    func_0x00f78a20(0x3d1b448);
    func_0x00f78a20(0x3d1b458);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5f6f8);
    func_0x00f78a20(0x3d5f700);
    func_0x00f78a20(0x3d5f708);
    func_0x00f78a20(0x3d5f710);
    bRam0000000003eb4de6 = 1;
  }
  if (((*(long *)(param_1 + 0x40) != 0) &&
      (lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar9 != 0)) &&
     (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
    uVar11 = *(undefined8 *)(lVar9 + 0x30);
    uVar4 = func_0x00f78aec(/*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448);
    /*System.Action<Group>$$.ctor*/ func_0x01b46100(uVar4,param_1,uRam0000000003d5f700,uRam0000000003d2a088);
    param_3 = 0;
    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar4);
    if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448)) goto LAB_0151b26c;
    *(long **)(lVar9 + 0x30) = plVar5;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       ((lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x28), lVar9 != 0 &&
        (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)))) {
      uVar11 = *(undefined8 *)(lVar9 + 0x40);
      uVar4 = func_0x00f78aec(/*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458);
      /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar4,param_1,uRam0000000003d5f708,uRam0000000003d2a0a8);
      param_3 = 0;
      plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar4);
      if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458)) goto LAB_0151b26c;
      *(long **)(lVar9 + 0x40) = plVar5;
      lVar9 = *(long *)(param_1 + 0x28);
      uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      param_3 = uRam0000000003d5f6f8;
      /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d5f6f8,0);
      uVar11 = 0;
      if (lVar9 != 0) {
        Atlas_UI_UIAtlasButton__remove_Pressed(lVar9,uVar4);
        lVar9 = *(long *)(param_1 + 0x30);
        uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
        param_3 = uRam0000000003d5f710;
        /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d5f710,0);
        uVar11 = 0;
        if (lVar9 != 0) {
          if ((bRam0000000003eb4d96 & 1) == 0) {
            func_0x00f78a20(0x3d1fa78);
            bRam0000000003eb4d96 = 1;
          }
          uVar8 = *(ulong *)(lVar9 + 0x158);
          while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,uVar4,0), plVar5 == (long *)0x0 ||
                 (*plVar5 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
            uVar3 = func_0x00ff0f44(lVar9 + 0x158,plVar5,uVar8);
            bVar2 = uVar8 == uVar3;
            uVar8 = uVar3;
            if (bVar2) {
              return uVar3;
            }
          }
          auVar13 = func_0x00f78e5c(plVar5);
          uVar11 = auVar13._8_8_;
          puStack_60 = (undefined1 *)0x3d1fa78;
          puStack_58 = (undefined *)uVar8;
          if ((bRam0000000003eb4d97 & 1) == 0) {
            func_0x00f78a20(0x3d1fa78);
            bRam0000000003eb4d97 = 1;
          }
          lVar9 = auVar13._0_8_ + 0x160;
          uVar8 = *(ulong *)(auVar13._0_8_ + 0x160);
          while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar11,0), plVar5 == (long *)0x0 ||
                 (*plVar5 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
            uVar3 = func_0x00ff0f44(lVar9,plVar5,uVar8);
            bVar2 = uVar8 == uVar3;
            uVar8 = uVar3;
            if (bVar2) {
              return uVar3;
            }
          }
          auVar13 = func_0x00f78e5c(plVar5);
          pcStack_68 = Atlas_UI_UIAtlasButton__remove_SelectedOrPressed;
          lStack_80 = lVar9;
          uStack_78 = uVar11;
          puStack_70 = &stack0xffffffffffffffc0;
          if ((bRam0000000003eb4d98 & 1) == 0) {
            func_0x00f78a20(0x3d1fa78);
            bRam0000000003eb4d98 = 1;
          }
          uVar8 = *(ulong *)(auVar13._0_8_ + 0x160);
          while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,auVar13._8_8_,0), plVar5 == (long *)0x0 ||
                 (*plVar5 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
            uVar3 = func_0x00ff0f44(auVar13._0_8_ + 0x160,plVar5,uVar8);
            bVar2 = uVar8 == uVar3;
            uVar8 = uVar3;
            if (bVar2) {
              return uVar3;
            }
          }
          lVar9 = func_0x00f78e5c(plVar5);
          return (ulong)*(byte *)(lVar9 + 0x168);
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0151b26c:
  auVar13 = func_0x00f78e5c();
  lStack_80 = auVar13._8_8_;
  puStack_58 = &Atlas_UI_UIGroupCodeBehaviour__OnGroupJoined;
  uStack_78 = param_3;
  puStack_70 = (undefined1 *)uVar11;
  pcStack_68 = (code *)param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  uVar11 = /*Core.Services.Group$$get_Id*/ func_0x01668d2c(&lStack_80,0);
  *(undefined8 *)(auVar13._0_8_ + 0x48) = uVar11;
  lVar9 = *(long *)(auVar13._0_8_ + 0x18);
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4();
    lVar9 = *(long *)(lVar9 + 0x18);
    if (lVar9 == 0) {
      func_0x00f78af4();
      if ((bRam0000000003eb4de9 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d65ed8);
        bRam0000000003eb4de9 = 1;
      }
      uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(extraout_x1,0);
      if ((uVar8 & 1) == 0) {
        if (extraout_x1 == 0) {
          lVar9 = func_0x00f78af4();
          uVar11 = *(undefined8 *)(lVar9 + 0x48);
          if ((bRam0000000003ebc6b7 & 1) == 0) {
            func_0x00f78a20(0x3d21ef8,0);
            bRam0000000003ebc6b7 = 1;
          }
          plVar5 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
          if (plVar5 != (long *)0x0) {
            lVar9 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto code_r0x02f91c40;
                }
                piVar10 = piVar10 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (*(code *)*puVar7)(plVar5,uVar11,puVar7[1]);
            return uVar8;
          }
          func_0x00f78af4();
          if ((bRam0000000003ebc6b8 & 1) == 0) {
            func_0x00f78a20(0x3d21ef8);
            bRam0000000003ebc6b8 = 1;
          }
          plVar5 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
          if (plVar5 == (long *)0x0) {
            uVar8 = func_0x00f78af4();
            return uVar8;
          }
          lVar9 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto code_r0x02f91cec;
              }
              piVar10 = piVar10 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar5,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          return uVar8;
        }
        if (1 < (int)*(uint *)(extraout_x1 + 0x10)) {
          uVar1 = *(uint *)(extraout_x1 + 0x10) >> 1;
          lVar6 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar1,0);
          lVar9 = /*System.String$$Substring*/ func_0x029cbd54(extraout_x1,uVar1,0);
          lVar12 = /*STR(' ')*/ lRam0000000003d65ed8;
          if ((bRam0000000003eb9468 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar9,0);
            bRam0000000003eb9468 = 1;
          }
          if (((lVar6 == 0) && (lVar12 == 0)) && (lVar9 == 0)) {
            uVar8 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          else {
            if (lVar6 == 0) {
              lVar6 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar12 == 0) {
              lVar12 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar9 == 0) {
              lVar9 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (((lVar6 == 0) || (lVar12 == 0)) || (lVar9 == 0)) {
              uVar8 = func_0x00f78af4();
              return uVar8;
            }
            uVar8 = func_0x00f834ac(*(int *)(lVar12 + 0x10) + *(int *)(lVar6 + 0x10) +
                                    *(int *)(lVar9 + 0x10));
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar8,0,lVar6);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar8,*(undefined4 *)(lVar6 + 0x10),lVar12);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar8,*(int *)(lVar12 + 0x10) + *(int *)(lVar6 + 0x10),lVar9);
          }
          return uVar8;
        }
      }
      return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*pcRam0000000003ebf4c0)(lVar9,uVar11);
  return uVar8;
}



// ============================================================
// RVA: 0x151b270 | Atlas.UI.UIGroupCodeBehaviour.OnGroupJoined
// ============================================================

/* WARNING: Possible PIC construction at 0x0151b2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151b2b0) */
/* WARNING: Removing unreachable block (ram,0x0151b2c0) */

undefined8
Atlas_UI_UIGroupCodeBehaviour__OnGroupJoined(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long extraout_x1;
  int *piVar8;
  long lVar9;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  uVar2 = /*Core.Services.Group$$get_Id*/ func_0x01668d2c(&uStack_30,0);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      func_0x00f78af4();
      if ((bRam0000000003eb4de9 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d65ed8);
        bRam0000000003eb4de9 = 1;
      }
      uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(extraout_x1,0);
      if ((uVar4 & 1) == 0) {
        if (extraout_x1 == 0) {
          lVar3 = func_0x00f78af4();
          uVar2 = *(undefined8 *)(lVar3 + 0x48);
          if ((bRam0000000003ebc6b7 & 1) == 0) {
            func_0x00f78a20(0x3d21ef8,0);
            bRam0000000003ebc6b7 = 1;
          }
          plVar6 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto code_r0x02f91c40;
                }
                piVar8 = piVar8 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (*(code *)*puVar7)(plVar6,uVar2,puVar7[1]);
            return uVar2;
          }
          func_0x00f78af4();
          if ((bRam0000000003ebc6b8 & 1) == 0) {
            func_0x00f78a20(0x3d21ef8);
            bRam0000000003ebc6b8 = 1;
          }
          plVar6 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
          if (plVar6 == (long *)0x0) {
            uVar2 = func_0x00f78af4();
            return uVar2;
          }
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                puVar7 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto code_r0x02f91cec;
              }
              piVar8 = piVar8 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          return uVar2;
        }
        if (1 < (int)*(uint *)(extraout_x1 + 0x10)) {
          uVar1 = *(uint *)(extraout_x1 + 0x10) >> 1;
          lVar5 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar1,0);
          lVar3 = /*System.String$$Substring*/ func_0x029cbd54(extraout_x1,uVar1,0);
          lVar9 = /*STR(' ')*/ lRam0000000003d65ed8;
          if ((bRam0000000003eb9468 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar3,0);
            bRam0000000003eb9468 = 1;
          }
          if (((lVar5 == 0) && (lVar9 == 0)) && (lVar3 == 0)) {
            uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          else {
            if (lVar5 == 0) {
              lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar9 == 0) {
              lVar9 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar3 == 0) {
              lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (((lVar5 == 0) || (lVar9 == 0)) || (lVar3 == 0)) {
              uVar2 = func_0x00f78af4();
              return uVar2;
            }
            uVar2 = func_0x00f834ac(*(int *)(lVar9 + 0x10) + *(int *)(lVar5 + 0x10) +
                                    *(int *)(lVar3 + 0x10));
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar2,0,lVar5);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar2,*(undefined4 *)(lVar5 + 0x10),lVar9);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar2,*(int *)(lVar9 + 0x10) + *(int *)(lVar5 + 0x10),lVar3);
          }
          return uVar2;
        }
      }
      return **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000003ebf4c0)(lVar3,uVar2);
  return uVar2;
}



// ============================================================
// RVA: 0x151b274 | Atlas.UI.UIGroupCodeBehaviour.SetCode
// ============================================================

/* WARNING: Possible PIC construction at 0x0151b2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151b2b0) */
/* WARNING: Removing unreachable block (ram,0x0151b2c0) */

undefined8
Atlas_UI_UIGroupCodeBehaviour__SetCode(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long extraout_x1;
  int *piVar8;
  long lVar9;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  uVar2 = /*Core.Services.Group$$get_Id*/ func_0x01668d2c(&uStack_30,0);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      func_0x00f78af4();
      if ((bRam0000000003eb4de9 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d65ed8);
        bRam0000000003eb4de9 = 1;
      }
      uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(extraout_x1,0);
      if ((uVar4 & 1) == 0) {
        if (extraout_x1 == 0) {
          lVar3 = func_0x00f78af4();
          uVar2 = *(undefined8 *)(lVar3 + 0x48);
          if ((bRam0000000003ebc6b7 & 1) == 0) {
            func_0x00f78a20(0x3d21ef8,0);
            bRam0000000003ebc6b7 = 1;
          }
          plVar6 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto code_r0x02f91c40;
                }
                piVar8 = piVar8 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar2 = (*(code *)*puVar7)(plVar6,uVar2,puVar7[1]);
            return uVar2;
          }
          func_0x00f78af4();
          if ((bRam0000000003ebc6b8 & 1) == 0) {
            func_0x00f78a20(0x3d21ef8);
            bRam0000000003ebc6b8 = 1;
          }
          plVar6 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
          if (plVar6 == (long *)0x0) {
            uVar2 = func_0x00f78af4();
            return uVar2;
          }
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                puVar7 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto code_r0x02f91cec;
              }
              piVar8 = piVar8 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          return uVar2;
        }
        if (1 < (int)*(uint *)(extraout_x1 + 0x10)) {
          uVar1 = *(uint *)(extraout_x1 + 0x10) >> 1;
          lVar5 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar1,0);
          lVar3 = /*System.String$$Substring*/ func_0x029cbd54(extraout_x1,uVar1,0);
          lVar9 = /*STR(' ')*/ lRam0000000003d65ed8;
          if ((bRam0000000003eb9468 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar3,0);
            bRam0000000003eb9468 = 1;
          }
          if (((lVar5 == 0) && (lVar9 == 0)) && (lVar3 == 0)) {
            uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          else {
            if (lVar5 == 0) {
              lVar5 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar9 == 0) {
              lVar9 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (lVar3 == 0) {
              lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            if (((lVar5 == 0) || (lVar9 == 0)) || (lVar3 == 0)) {
              uVar2 = func_0x00f78af4();
              return uVar2;
            }
            uVar2 = func_0x00f834ac(*(int *)(lVar9 + 0x10) + *(int *)(lVar5 + 0x10) +
                                    *(int *)(lVar3 + 0x10));
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar2,0,lVar5);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar2,*(undefined4 *)(lVar5 + 0x10),lVar9);
            /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar2,*(int *)(lVar9 + 0x10) + *(int *)(lVar5 + 0x10),lVar3);
          }
          return uVar2;
        }
      }
      return **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000003ebf4c0)(lVar3,uVar2);
  return uVar2;
}



// ============================================================
// RVA: 0x151b2ec | Atlas.UI.UIGroupCodeBehaviour.OnGroupLeft
// ============================================================

undefined8 Atlas_UI_UIGroupCodeBehaviour__OnGroupLeft(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x1;
  int *piVar8;
  long lVar9;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*pcRam0000000003ebf4c0)(lVar2,0);
    return uVar7;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4de9 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d65ed8);
    bRam0000000003eb4de9 = 1;
  }
  uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(extraout_x1,0);
  if ((uVar3 & 1) == 0) {
    if (extraout_x1 == 0) {
      lVar2 = func_0x00f78af4();
      uVar7 = *(undefined8 *)(lVar2 + 0x48);
      if ((bRam0000000003ebc6b7 & 1) == 0) {
        func_0x00f78a20(0x3d21ef8,0);
        bRam0000000003ebc6b7 = 1;
      }
      plVar5 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
              puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x02f91c40;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)*puVar6)(plVar5,uVar7,puVar6[1]);
        return uVar7;
      }
      func_0x00f78af4();
      if ((bRam0000000003ebc6b8 & 1) == 0) {
        func_0x00f78a20(0x3d21ef8);
        bRam0000000003ebc6b8 = 1;
      }
      plVar5 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
      if (plVar5 == (long *)0x0) {
        uVar7 = func_0x00f78af4();
        return uVar7;
      }
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
            puVar6 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto code_r0x02f91cec;
          }
          piVar8 = piVar8 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      return uVar7;
    }
    if (1 < (int)*(uint *)(extraout_x1 + 0x10)) {
      uVar1 = *(uint *)(extraout_x1 + 0x10) >> 1;
      lVar4 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar1,0);
      lVar2 = /*System.String$$Substring*/ func_0x029cbd54(extraout_x1,uVar1,0);
      lVar9 = /*STR(' ')*/ lRam0000000003d65ed8;
      if ((bRam0000000003eb9468 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar2,0);
        bRam0000000003eb9468 = 1;
      }
      if (((lVar4 == 0) && (lVar9 == 0)) && (lVar2 == 0)) {
        uVar7 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      else {
        if (lVar4 == 0) {
          lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar9 == 0) {
          lVar9 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar2 == 0) {
          lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (((lVar4 == 0) || (lVar9 == 0)) || (lVar2 == 0)) {
          uVar7 = func_0x00f78af4();
          return uVar7;
        }
        uVar7 = func_0x00f834ac(*(int *)(lVar9 + 0x10) + *(int *)(lVar4 + 0x10) +
                                *(int *)(lVar2 + 0x10));
        /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar7,0,lVar4);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar7,*(undefined4 *)(lVar4 + 0x10),lVar9);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar7,*(int *)(lVar9 + 0x10) + *(int *)(lVar4 + 0x10),lVar2);
      }
      return uVar7;
    }
  }
  return **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
}



// ============================================================
// RVA: 0x151b310 | Atlas.UI.UIGroupCodeBehaviour.AddGapInMiddleOfString
// ============================================================

undefined8 Atlas_UI_UIGroupCodeBehaviour__AddGapInMiddleOfString(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  
  if ((bRam0000000003eb4de9 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d65ed8);
    bRam0000000003eb4de9 = 1;
  }
  uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      lVar4 = func_0x00f78af4();
      uVar5 = *(undefined8 *)(lVar4 + 0x48);
      if ((bRam0000000003ebc6b7 & 1) == 0) {
        func_0x00f78a20(0x3d21ef8,0);
        bRam0000000003ebc6b7 = 1;
      }
      plVar6 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x02f91c40;
            }
            piVar8 = piVar8 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)*puVar7)(plVar6,uVar5,puVar7[1]);
        return uVar5;
      }
      func_0x00f78af4();
      if ((bRam0000000003ebc6b8 & 1) == 0) {
        func_0x00f78a20(0x3d21ef8);
        bRam0000000003ebc6b8 = 1;
      }
      plVar6 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
      if (plVar6 == (long *)0x0) {
        uVar5 = func_0x00f78af4();
        return uVar5;
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto code_r0x02f91cec;
          }
          piVar8 = piVar8 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      return uVar5;
    }
    if (1 < (int)*(uint *)(param_2 + 0x10)) {
      uVar1 = *(uint *)(param_2 + 0x10) >> 1;
      lVar3 = /*System.String$$Substring*/ func_0x029cbbf0(param_2,0,uVar1,0);
      lVar4 = /*System.String$$Substring*/ func_0x029cbd54(param_2,uVar1,0);
      lVar9 = /*STR(' ')*/ lRam0000000003d65ed8;
      if ((bRam0000000003eb9468 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar4,0);
        bRam0000000003eb9468 = 1;
      }
      if (((lVar3 == 0) && (lVar9 == 0)) && (lVar4 == 0)) {
        uVar5 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      else {
        if (lVar3 == 0) {
          lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar9 == 0) {
          lVar9 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (lVar4 == 0) {
          lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        if (((lVar3 == 0) || (lVar9 == 0)) || (lVar4 == 0)) {
          uVar5 = func_0x00f78af4();
          return uVar5;
        }
        uVar5 = func_0x00f834ac(*(int *)(lVar9 + 0x10) + *(int *)(lVar3 + 0x10) +
                                *(int *)(lVar4 + 0x10));
        /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar5,0,lVar3);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar5,*(undefined4 *)(lVar3 + 0x10),lVar9);
        /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar5,*(int *)(lVar9 + 0x10) + *(int *)(lVar3 + 0x10),lVar4);
      }
      return uVar5;
    }
  }
  return **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
}



// ============================================================
// RVA: 0x151b3ec | Atlas.UI.UIGroupCodeBehaviour.OnCopyCodeButton
// ============================================================

void Atlas_UI_UIGroupCodeBehaviour__OnCopyCodeButton(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if ((bRam0000000003ebc6b7 & 1) == 0) {
    func_0x00f78a20(0x3d21ef8,0);
    bRam0000000003ebc6b7 = 1;
  }
  plVar2 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
  if (plVar2 == (long *)0x0) {
    func_0x00f78af4();
    if ((bRam0000000003ebc6b8 & 1) == 0) {
      func_0x00f78a20(0x3d21ef8);
      bRam0000000003ebc6b8 = 1;
    }
    plVar2 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      return;
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto code_r0x02f91cec;
        }
        piVar6 = piVar6 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    return;
  }
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto code_r0x02f91c40;
      }
      piVar6 = piVar6 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar2,uVar1,puVar3[1]);
  return;
}



// ============================================================
// RVA: 0x151b3f8 | Atlas.UI.UIGroupCodeBehaviour.OnShareButtonPressed
// ============================================================

ulong Atlas_UI_UIGroupCodeBehaviour__OnShareButtonPressed(long param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  code *pcVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  ulong uStack_4a8;
  undefined1 auStack_448 [512];
  undefined1 auStack_248 [504];
  
  if ((bRam0000000003eb4de8 & 1) == 0) {
    func_0x00f78a20(0x3d6b3f0);
    bRam0000000003eb4de8 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x40);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x88) == 0)) {
LAB_0151b470:
    uVar8 = func_0x00f78af4();
    if ((bRam0000000003eb4dea & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb4dea = 1;
    }
    *(undefined8 *)(uVar8 + 0x48) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar8;
  }
  lVar17 = *(long *)(lVar13 + 0x28);
  uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar13 + 0x88),/*STR('DEEPLINK_INVITEMESSAGE')*/ uRam0000000003d6b3f0,0);
  if (lVar17 == 0) goto LAB_0151b470;
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  lVar13 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb5a1f & 1) == 0) {
    func_0x00f78a20(0x3d798b8,uVar7,uVar12,0);
    bRam0000000003eb5a1f = 1;
  }
  plVar16 = *(long **)(lVar17 + 0x30);
  uVar7 = /*System.String$$Concat*/ func_0x029be39c(uVar7,/*STR('https://electricsquare.com/games/warped-kart-racers/?partycode=')*/ uRam0000000003d798b8,uVar12,0);
  /*Unity.Collections.FixedString512Bytes$$op_Implicit*/ func_0x02fd81bc(auStack_448,uVar7,0);
  if (plVar16 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar17 = *plVar16;
    pcVar18 = *(code **)(lVar17 + 0x538);
    _memcpy(auStack_248,auStack_448,0x200);
    uVar8 = (*pcVar18)(plVar16,auStack_248,0,0,*(undefined8 *)(lVar17 + 0x540));
    if (*(long *)PTR_03a5d648 == lVar13) {
      return uVar8;
    }
  }
  auVar20 = ___stack_chk_fail();
  uVar8 = auVar20._8_8_;
  lVar13 = auVar20._0_8_;
  if ((bRam0000000003eb5a21 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d24218);
    func_0x00f78a20(0x3d25830);
    func_0x00f78a20(0x3d76a78);
    func_0x00f78a20(0x3d67468);
    bRam0000000003eb5a21 = 1;
  }
  lVar17 = func_0x00f78aec(/*System.Uri_TypeInfo*/ uRam0000000003d25830);
  /*System.Uri$$.ctor*/ func_0x02f1e5e0(lVar17,uVar8,0);
  if (lVar17 != 0) {
    uVar7 = /*System.Uri$$get_LocalPath*/ func_0x02f3b4ec(lVar17,0);
    uVar8 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar7,/*STR('/games/warped-kart-racers/')*/ uRam0000000003d67468,0);
    if ((uVar8 & 1) != 0) {
      return uVar8;
    }
    uVar8 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar17,0);
    if (((*(ushort *)(/*System.Text.RegularExpressions.Regex_TypeInfo*/ lRam0000000003d24218 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Text.RegularExpressions.Regex_TypeInfo*/ lRam0000000003d24218 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar9 = /*System.Text.RegularExpressions.Regex$$Match*/ func_0x02f0473c(uVar8,/*STR('\\?partycode=[0-9][0-9][0-9][0-9][0-9][0-9]')*/ uRam0000000003d76a78,0);
    if (lVar9 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x1c);
      uVar8 = (ulong)uVar2;
      uVar10 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar17,0);
      if (uVar10 != 0) {
        if (uVar2 != *(uint *)(uVar10 + 0x10)) {
          return uVar10;
        }
        lVar17 = /*System.Uri$$get_Query*/ func_0x02f3c7cc(lVar17,0);
        lVar9 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x01685ee4;
          *(undefined2 *)(lVar9 + 0x20) = 0x3d;
          if ((lVar17 != 0) && (lVar17 = /*System.String$$Split*/ func_0x029cb2ac(lVar17,lVar9,0), lVar17 != 0)) {
            if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto code_r0x01685ee4;
            plVar16 = *(long **)(lVar17 + 0x28);
            *(long **)(lVar13 + 0x20) = plVar16;
            *(undefined4 *)(lVar13 + 0x28) = 0;
            uVar10 = *(ulong *)(lVar13 + 0x48);
            if (uVar10 != 0) {
              uStack_4a8 = uVar10;
              lVar13 = *(long *)(uVar10 + 0x68);
              if (lVar13 == 0) {
                puVar19 = &uStack_4a8;
                lVar17 = 1;
              }
              else {
                lVar17 = *(long *)(lVar13 + 0x18);
                if (lVar17 == 0) {
                  return uVar10;
                }
                puVar19 = (ulong *)(lVar13 + 0x20);
              }
              lVar13 = 0;
              do {
                uVar8 = puVar19[lVar13];
                pcVar18 = *(code **)(uVar8 + 0x10);
                plVar1 = *(long **)(uVar8 + 0x20);
                lVar9 = *(long *)(uVar8 + 0x28);
                if (*(short *)(lVar9 + 0x48) == -1) {
                  func_0x00f78ad8(lVar9);
                }
                iVar5 = func_0x00f78a4c(lVar9);
                bVar4 = *(char *)(lVar9 + 0x4a) == '\x01';
                if (iVar5 == 0) {
                  if (bVar4) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
                      uVar8 = (*pcVar18)(plVar16,lVar9);
                    }
                    else {
                      if (((*(short *)(lVar9 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                         (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01e47fc0;
                      iVar5 = func_0x00f78a44(lVar9);
                      iVar6 = func_0x00f78ec0(lVar9);
                      if (iVar5 == 0) {
                        uVar3 = *(ushort *)(lVar9 + 0x48);
                        if (iVar6 == 0) {
                          lVar9 = *plVar1 + (ulong)uVar3 * 0x10;
                          uVar8 = (**(code **)(lVar9 + 0x138))
                                            (plVar1,plVar16,*(undefined8 *)(lVar9 + 0x140));
                          goto code_r0x01e480d4;
                        }
                        lVar9 = func_0x00f78a48(lVar9);
                        lVar14 = *plVar1;
                        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar8 != 0) {
                          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == lVar9) {
                              puVar11 = (undefined8 *)
                                        (lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e48260;
                            }
                            piVar15 = piVar15 + 4;
                            uVar8 = uVar8 - 1;
                          } while (uVar8 != 0);
                        }
                        puVar11 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar3);
code_r0x01e48260:
                        pcVar18 = (code *)*puVar11;
                        puVar11 = (undefined8 *)puVar11[1];
                      }
                      else {
                        if (iVar6 == 0) {
                          uVar7 = *(undefined8 *)
                                   (*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar14 = *plVar1;
                          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
                          if (uVar8 != 0) {
                            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar15 + -2) == *(long *)(lVar9 + 0x18)) {
                                lVar14 = lVar14 + (long)(int)(*piVar15 +
                                                             (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                                         + 0x138;
                                goto code_r0x01e48238;
                              }
                              piVar15 = piVar15 + 4;
                              uVar8 = uVar8 - 1;
                            } while (uVar8 != 0);
                          }
                          lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                          uVar7 = *(undefined8 *)(lVar14 + 8);
                        }
                        puVar11 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
                        pcVar18 = (code *)*puVar11;
                      }
                      uVar8 = (*pcVar18)(plVar1,plVar16,puVar11);
                    }
                  }
                  else {
                    if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(uVar10 + 0x18) == 0))
                    goto code_r0x01e480c8;
                    iVar5 = func_0x00f78a44(lVar9);
                    iVar6 = func_0x00f78ec0(lVar9);
                    if (iVar5 == 0) {
                      uVar3 = *(ushort *)(lVar9 + 0x48);
                      if (iVar6 == 0) {
                        lVar9 = *plVar16 + (ulong)uVar3 * 0x10;
                        uVar8 = (**(code **)(lVar9 + 0x138))(plVar16,*(undefined8 *)(lVar9 + 0x140))
                        ;
                        goto code_r0x01e480d4;
                      }
                      lVar9 = func_0x00f78a48(lVar9);
                      lVar14 = *plVar16;
                      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar8 != 0) {
                        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == lVar9) {
                            puVar11 = (undefined8 *)
                                      (lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e481fc;
                          }
                          piVar15 = piVar15 + 4;
                          uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                      }
                      puVar11 = (undefined8 *)func_0x00fac1f0(plVar16,lVar9,(ulong)uVar3);
code_r0x01e481fc:
                      pcVar18 = (code *)*puVar11;
                      puVar11 = (undefined8 *)puVar11[1];
                    }
                    else {
                      if (iVar6 == 0) {
                        uVar7 = *(undefined8 *)
                                 (*plVar16 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar14 = *plVar16;
                        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar8 != 0) {
                          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)(lVar9 + 0x18)) {
                              lVar14 = lVar14 + (long)(int)(*piVar15 +
                                                           (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                                       0x138;
                              goto code_r0x01e481d4;
                            }
                            piVar15 = piVar15 + 4;
                            uVar8 = uVar8 - 1;
                          } while (uVar8 != 0);
                        }
                        lVar14 = func_0x00fac1f0(plVar16);
code_r0x01e481d4:
                        uVar7 = *(undefined8 *)(lVar14 + 8);
                      }
                      puVar11 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
                      pcVar18 = (code *)*puVar11;
                    }
                    uVar8 = (*pcVar18)(plVar16,puVar11);
                  }
                }
                else {
                  if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
                  uVar8 = (*pcVar18)(plVar1,plVar16,lVar9);
                }
code_r0x01e480d4:
                lVar13 = lVar13 + 1;
                if (lVar13 == lVar17) {
                  return uVar8;
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x01685ee4:
  uVar7 = func_0x00f78b24();
  uVar10 = func_0x00f78ac0(uVar7,0);
  uStack_4a8 = uVar8;
  if ((bRam0000000003eb5a23 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d29fc0);
    func_0x00f78a20(0x3d1b3e8);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25238);
    func_0x00f78a20(0x3d63d50);
    func_0x00f78a20(0x3d63d58);
    func_0x00f78a20(0x3d28c00);
    bRam0000000003eb5a23 = 1;
  }
  uVar7 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(uVar10 + 0x18) = uVar7;
  *(undefined8 *)(uVar10 + 0x20) = uVar7;
  if (((*(byte *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.TimeSpan$$FromSeconds*/ func_0x029f0a04(0x4034000000000000,0);
  *(undefined8 *)(uVar10 + 0x38) = uVar7;
  if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar11 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
  lVar17 = puVar11[4];
  lVar13 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  if (lVar17 == 0) {
    if (((*(ushort *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar11 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar7 = *puVar11;
    lVar17 = func_0x00f78aec(/*System.Action<Client>_TypeInfo*/ uRam0000000003d1b3e8);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar17,uVar7,uRam0000000003d63d50,uRam0000000003d29fc0);
    lVar13 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x20) = lVar17;
  }
  *(long *)(uVar10 + 0x40) = lVar17;
  if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar13 = /*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00;
  }
  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
  lVar17 = puVar11[5];
  if (lVar17 == 0) {
    if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar11 = *(undefined8 **)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8);
    }
    uVar7 = *puVar11;
    lVar17 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar17,uVar7,uRam0000000003d63d58,uRam0000000003d2a320);
    *(long *)(*(long *)(/*Core.Services.ServicesManager.<>c_TypeInfo*/ lRam0000000003d28c00 + 0xb8) + 0x28) = lVar17;
  }
  *(long *)(uVar10 + 0x48) = lVar17;
  return uVar10;
}



// ============================================================
// RVA: 0x151b474 | Atlas.UI.UIGroupCodeBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIGroupCodeBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4dea & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4dea = 1;
  }
  *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
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



