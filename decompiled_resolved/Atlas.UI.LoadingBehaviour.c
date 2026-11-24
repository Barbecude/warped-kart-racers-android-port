// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LoadingBehaviour

// ============================================================
// RVA: 0x1486f20 | Atlas.UI.LoadingBehaviour.get_FullyVisible
// ============================================================

bool Atlas_UI_LoadingBehaviour__get_FullyVisible(long param_1)

{
  return *(int *)(param_1 + 0x38) == 2;
}



// ============================================================
// RVA: 0x1486f30 | Atlas.UI.LoadingBehaviour.get_FullyInvisible
// ============================================================

bool Atlas_UI_LoadingBehaviour__get_FullyInvisible(long param_1)

{
  return *(int *)(param_1 + 0x38) == 0;
}



// ============================================================
// RVA: 0x1486f40 | Atlas.UI.LoadingBehaviour.set_Progress
// ============================================================

ulong Atlas_UI_LoadingBehaviour__set_Progress(undefined4 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *extraout_x1;
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
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (uVar2 == 0) {
    auVar13 = func_0x00f78af4();
    plVar3 = *(long **)(auVar13._0_8_ + 0x28);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x558))(plVar3,auVar13._8_8_,*(undefined8 *)(*plVar3 + 0x560));
      return uVar2;
    }
    lVar4 = func_0x00f78af4();
    return *(ulong *)(lVar4 + 0x30);
  }
  *(undefined1 *)(uVar2 + 0x90) = 1;
  *(undefined4 *)(uVar2 + 0x94) = param_1;
  *(undefined8 *)(uVar2 + 0x98) = 0;
  if (*(char *)(uVar2 + 0x3c) == '\0') {
    return uVar2;
  }
  uVar2 = *(ulong *)(uVar2 + 0xb8);
  if (uVar2 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar2,0,0);
    return uVar2;
  }
  lVar4 = func_0x00f78af4(0,0,0);
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar2 = *(ulong *)(lVar4 + 0xc0);
  if (uVar2 == 0) {
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar2,uRam0000000003d3d9e0);
    *(ulong *)(lVar4 + 0xc0) = uVar2;
    if (uVar2 == 0) {
      lVar4 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar2 = *(ulong *)(lVar4 + 0xc0);
      if (uVar2 != 0) {
        uVar8 = uVar2;
        if (0 < *(int *)(uVar2 + 0x18)) {
          uVar8 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar2 + 0x10),0,*(int *)(uVar2 + 0x18),0);
          *(undefined4 *)(uVar2 + 0x18) = 0;
        }
        *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
        return uVar8;
      }
      return 0;
    }
  }
  uVar8 = (ulong)extraout_s0;
  lVar4 = *(long *)(uVar2 + 0x10);
  puVar9 = extraout_x1;
  if (lVar4 == 0) {
code_r0x0259cf3c:
    uVar8 = unaff_x21;
    uVar2 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar4 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar2 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar2 + 0x18);
    uVar5 = uVar2;
    unaff_x20 = extraout_x1;
    if (uVar10 != *(uint *)(lVar4 + 0x18)) goto code_r0x0259cf40;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar9)(uVar2,uVar10 + 1);
    lVar4 = *(long *)(uVar2 + 0x10);
    uVar10 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar10 + 1;
    unaff_x19 = uVar2;
    unaff_x21 = uVar8;
    if (lVar4 == 0) goto code_r0x0259cf3c;
  }
  if (uVar10 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)uVar10 * 0x10;
    *(ulong *)(lVar4 + 0x20) = uVar8;
    *(undefined8 **)(lVar4 + 0x28) = unaff_x20;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar6,0);
  plVar3 = auVar13._8_8_;
  lVar4 = auVar13._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar3,0x14);
  if (lVar4 != 0) {
    pcVar12 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (plVar3 != (long *)0x0) {
      if (*(long *)(*plVar3 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar7 = (undefined8 *)func_0x00f78ae4(plVar3);
        (*pcVar12)(lVar4,*puVar7,puVar7[1],*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar4);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar3,lVar11);
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
// RVA: 0x1486f64 | Atlas.UI.LoadingBehaviour.set_BuildInfo
// ============================================================

undefined8 Atlas_UI_LoadingBehaviour__set_BuildInfo(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x558))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x560));
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  return *(undefined8 *)(lVar3 + 0x30);
}



// ============================================================
// RVA: 0x1486f8c | Atlas.UI.LoadingBehaviour.get_SupportedInputIconsRoot
// ============================================================

undefined8 Atlas_UI_LoadingBehaviour__get_SupportedInputIconsRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1486f94 | Atlas.UI.LoadingBehaviour.RequestShow
// ============================================================

/* WARNING: Possible PIC construction at 0x01486ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014870d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01487278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01486ffc) */
/* WARNING: Removing unreachable block (ram,0x01487014) */
/* WARNING: Removing unreachable block (ram,0x0148701c) */
/* WARNING: Removing unreachable block (ram,0x01487020) */
/* WARNING: Removing unreachable block (ram,0x01487024) */
/* WARNING: Removing unreachable block (ram,0x0148704c) */
/* WARNING: Removing unreachable block (ram,0x014870d4) */
/* WARNING: Removing unreachable block (ram,0x014870e4) */
/* WARNING: Removing unreachable block (ram,0x014870ec) */
/* WARNING: Removing unreachable block (ram,0x014870f0) */
/* WARNING: Removing unreachable block (ram,0x014870f4) */
/* WARNING: Removing unreachable block (ram,0x0148711c) */

void Atlas_UI_LoadingBehaviour__RequestShow(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  uVar5 = 0x3eb4000;
  if ((bRam0000000003eb4943 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb4943 = 1;
  }
  if (*(int *)(param_1 + 0x38) == 2) {
    return;
  }
  Atlas_UI_LoadingBehaviour__set_Progress(0,param_1);
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar3 == 0) {
    param_1 = func_0x00f78af4();
    puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
    puStack_38 = &Atlas_UI_LoadingBehaviour__RequestHide;
    uVar5 = 0x3eb4000;
    ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4944 & 1) == 0) {
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb4944 = 1;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      return;
    }
    lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
    if (lVar3 == 0) {
      param_1 = func_0x00f78af4();
      puVar1 = &uStack_c0;
      puStack_68 = &Atlas_UI_LoadingBehaviour__Update;
      pppuVar7 = &ppuStack_70;
      uVar5 = 0x3eb4000;
      ppuStack_70 = &ppuStack_40;
      if ((bRam0000000003eb4945 & 1) == 0) {
        func_0x00f78a20(0x3d23050);
        bRam0000000003eb4945 = 1;
      }
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_c0,*(long *)(param_1 + 0x18),0,0);
        if (*(int *)(param_1 + 0x38) != 3) {
          if (*(int *)(param_1 + 0x38) == 1) {
            iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_c0,0);
            if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (iVar2 == *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 8)) {
              *(undefined4 *)(param_1 + 0x38) = 2;
            }
          }
          return;
        }
        uVar5 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_c0,0);
        unaff_x21 = 0x3d23050;
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((int)uVar5 != *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0xc)) {
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(0,*(long *)(param_1 + 0x20),0);
          *(undefined4 *)(param_1 + 0x38) = 0;
          lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
          if (lVar3 != 0) {
            uVar4 = 0;
            puStack_c8 = &UNK_0148727c;
            goto code_r0x0322ef1c;
          }
        }
      }
      uVar4 = func_0x00f78af4();
      puStack_c8 = &Atlas_UI_LoadingBehaviour__SetSupportedInputIconsVisible;
      if ((bRam0000000003eb4946 & 1) == 0) {
        func_0x00f78a20(0x3d23050);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4946 = 1;
      }
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
      if (iVar2 == 0) {
        return;
      }
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x30), lVar3 == 0)) {
        func_0x00f78af4();
        if ((bRam0000000003eb4947 & 1) == 0) {
          func_0x00f78a20(0x3d23050);
          bRam0000000003eb4947 = 1;
        }
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar3 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
        *(undefined2 *)(lVar3 + 0x10) = 0;
        *(undefined8 *)(lVar3 + 0x38) = 0;
        return;
      }
      puVar1 = &uStack_c0;
    }
    else {
      unaff_x21 = 0x3d23050;
      uVar4 = 1;
      puStack_c8 = &UNK_014870d4;
      pppuVar7 = &ppuStack_40;
    }
  }
  else {
    uVar4 = 1;
    puStack_c8 = (undefined *)0x1486ffc;
    pppuVar7 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
code_r0x0322ef1c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar5;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar7;
  *(undefined **)((long)puVar1 + -8) = puStack_c8;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf4c0)(lVar3,uVar4);
  return;
}



// ============================================================
// RVA: 0x1487074 | Atlas.UI.LoadingBehaviour.RequestHide
// ============================================================

/* WARNING: Possible PIC construction at 0x014870d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01487278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014870d4) */
/* WARNING: Removing unreachable block (ram,0x014870e4) */
/* WARNING: Removing unreachable block (ram,0x014870ec) */
/* WARNING: Removing unreachable block (ram,0x014870f0) */
/* WARNING: Removing unreachable block (ram,0x014870f4) */
/* WARNING: Removing unreachable block (ram,0x0148711c) */

void Atlas_UI_LoadingBehaviour__RequestHide(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
  uVar5 = 0x3eb4000;
  if ((bRam0000000003eb4944 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb4944 = 1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar3 == 0) {
    param_1 = func_0x00f78af4();
    puVar1 = &uStack_90;
    puStack_38 = &Atlas_UI_LoadingBehaviour__Update;
    pppuVar7 = &ppuStack_40;
    uVar5 = 0x3eb4000;
    ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4945 & 1) == 0) {
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb4945 = 1;
    }
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_90,*(long *)(param_1 + 0x18),0,0);
      if (*(int *)(param_1 + 0x38) != 3) {
        if (*(int *)(param_1 + 0x38) == 1) {
          iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_90,0);
          if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (iVar2 == *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 8)) {
            *(undefined4 *)(param_1 + 0x38) = 2;
          }
        }
        return;
      }
      uVar5 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_90,0);
      unaff_x21 = 0x3d23050;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((int)uVar5 != *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0xc)) {
        return;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(0,*(long *)(param_1 + 0x20),0);
        *(undefined4 *)(param_1 + 0x38) = 0;
        lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
        if (lVar3 != 0) {
          uVar4 = 0;
          puStack_98 = &UNK_0148727c;
          goto code_r0x0322ef1c;
        }
      }
    }
    uVar4 = func_0x00f78af4();
    puStack_98 = &Atlas_UI_LoadingBehaviour__SetSupportedInputIconsVisible;
    if ((bRam0000000003eb4946 & 1) == 0) {
      func_0x00f78a20(0x3d23050);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4946 = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if (iVar2 == 0) {
      return;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x30), lVar3 == 0)) {
      func_0x00f78af4();
      if ((bRam0000000003eb4947 & 1) == 0) {
        func_0x00f78a20(0x3d23050);
        bRam0000000003eb4947 = 1;
      }
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
      *(undefined2 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      return;
    }
    puVar1 = &uStack_90;
  }
  else {
    unaff_x21 = 0x3d23050;
    uVar4 = 1;
    puStack_98 = (undefined *)0x14870d4;
    pppuVar7 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
code_r0x0322ef1c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar5;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar7;
  *(undefined **)((long)puVar1 + -8) = puStack_98;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf4c0)(lVar3,uVar4);
  return;
}



// ============================================================
// RVA: 0x1487144 | Atlas.UI.LoadingBehaviour.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x01487278: Changing call to branch */

void Atlas_UI_LoadingBehaviour__Update(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000003eb4945 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb4945 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_60,*(long *)(param_1 + 0x18),0,0);
    if (*(int *)(param_1 + 0x38) != 3) {
      if (*(int *)(param_1 + 0x38) == 1) {
        iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_60,0);
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (iVar1 == *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 8)) {
          *(undefined4 *)(param_1 + 0x38) = 2;
        }
      }
      return;
    }
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_60,0);
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (iVar1 != *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0xc)) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(0,*(long *)(param_1 + 0x20),0);
      *(undefined4 *)(param_1 + 0x38) = 0;
      lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      if (lVar2 != 0) {
        uVar3 = 0;
        goto code_r0x0322ef1c;
      }
    }
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4946 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4946 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar1 == 0) {
    return;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) {
    func_0x00f78af4();
    if ((bRam0000000003eb4947 & 1) == 0) {
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb4947 = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    *(undefined2 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    return;
  }
code_r0x0322ef1c:
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf4c0)(lVar2,uVar3);
  return;
}



// ============================================================
// RVA: 0x1487294 | Atlas.UI.LoadingBehaviour.SetSupportedInputIconsVisible
// ============================================================

void Atlas_UI_LoadingBehaviour__SetSupportedInputIconsVisible(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4946 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4946 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 == 0) {
    return;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar2,param_1);
    return;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4947 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb4947 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x1487390 | Atlas.UI.LoadingBehaviour.Init
// ============================================================

void Atlas_UI_LoadingBehaviour__Init(void)

{
  long lVar1;
  
  if ((bRam0000000003eb4947 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb4947 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
  *(undefined2 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x14873f8 | Atlas.UI.LoadingBehaviour.RequestLoad
// ============================================================

void Atlas_UI_LoadingBehaviour__RequestLoad(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar5;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4948 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d66ef8);
    func_0x00f78a20(0x3d65f30);
    bRam0000000003eb4948 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x10) == '\0') {
    uVar2 = /*UnityEngine.Application$$get_version*/ func_0x03218798(0);
    if (param_1 == 0) {
      unaff_x30 = &Atlas_UI_LoadingBehaviour__RequestLoad;
      uVar2 = func_0x00f78af4();
      unaff_x19 = 0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = 0x3eb4000;
      unaff_x21 = 0x3d23050;
      unaff_x29 = puVar1;
    }
    else {
      uVar3 = /*ElectricSquare.Build.TeamCityBuildInfo$$get_DisplayChangelist*/ func_0x016cbb64(param_1,0);
      uVar2 = /*System.String$$Concat*/ func_0x029be818(uVar2,/*STR(' (')*/ uRam0000000003d65f30,uVar3,/*STR(')')*/ uRam0000000003d66ef8,0);
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb4949 & 1) == 0) {
      func_0x00f78a20(0x3d29f08);
      func_0x00f78a20(0x3d1b390);
      func_0x00f78a20(0x3d433a0);
      func_0x00f78a20(0x3d1fae0);
      func_0x00f78a20(0x3d2bee8);
      func_0x00f78a20(0x3d5a0d8);
      func_0x00f78a20(0x3d23050);
      func_0x00f78a20(0x3d70f60);
      bRam0000000003eb4949 = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar4 + 0x10) == '\0') {
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
      }
      *(undefined8 *)(lVar4 + 0x40) = uVar2;
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c((undefined1 *)((long)register0x00000008 + -0x50),/*STR('P_Loading')*/ uRam0000000003d70f60,
                      uRam0000000003d433a0);
      lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x50);
      uVar3 = *(undefined8 *)((long)register0x00000008 + -0x38);
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0x40);
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)((long)register0x00000008 + -0x48);
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      *(undefined8 *)(lVar4 + 0x30) = uVar3;
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
      uVar2 = func_0x00f78aec(/*System.Action<AsyncOperationHandle<GameObject>>_TypeInfo*/ uRam0000000003d1b390);
      /*System.Action<AsyncOperationHandle<TextAsset>>$$.ctor*/ func_0x01b3e29c(uVar2,0,uRam0000000003d5a0d8,uRam0000000003d29f08);
      /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$add_Completed*/ func_0x01b565f0(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x18,uVar2,uRam0000000003d2bee8);
      *(undefined1 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x10) = 1;
    }
    return;
  }
  return;
}



// ============================================================
// RVA: 0x14874fc | Atlas.UI.LoadingBehaviour.RequestLoad
// ============================================================

void Atlas_UI_LoadingBehaviour__RequestLoad(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4949 & 1) == 0) {
    func_0x00f78a20(0x3d29f08);
    func_0x00f78a20(0x3d1b390);
    func_0x00f78a20(0x3d433a0);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2bee8);
    func_0x00f78a20(0x3d5a0d8);
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d70f60);
    bRam0000000003eb4949 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar2 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_50,/*STR('P_Loading')*/ uRam0000000003d70f60,uRam0000000003d433a0);
    lVar2 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    *(undefined8 *)(lVar2 + 0x20) = uStack_48;
    *(undefined8 *)(lVar2 + 0x18) = uStack_50;
    *(undefined8 *)(lVar2 + 0x30) = uStack_38;
    *(undefined8 *)(lVar2 + 0x28) = uStack_40;
    uVar1 = func_0x00f78aec(/*System.Action<AsyncOperationHandle<GameObject>>_TypeInfo*/ uRam0000000003d1b390);
    /*System.Action<AsyncOperationHandle<TextAsset>>$$.ctor*/ func_0x01b3e29c(uVar1,0,uRam0000000003d5a0d8,uRam0000000003d29f08);
    /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$add_Completed*/ func_0x01b565f0(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x18,uVar1,uRam0000000003d2bee8);
    *(undefined1 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x10) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x14876a4 | Atlas.UI.LoadingBehaviour.FinishedLoading
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LoadingBehaviour__FinishedLoading(undefined8 param_1)

{
  ulong uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *extraout_x1;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  uint extraout_w8;
  uint uVar17;
  long extraout_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 unaff_x21;
  long lVar20;
  undefined8 unaff_x22;
  long lVar21;
  undefined8 unaff_x23;
  code *pcVar22;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined *unaff_x30;
  float fVar24;
  float extraout_s0;
  float fVar25;
  undefined4 uVar26;
  uint extraout_s0_00;
  undefined8 unaff_d8;
  undefined8 uVar27;
  undefined8 unaff_d9;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  
  puVar3 = &stack0xffffffffffffffd0;
  puVar23 = &stack0xfffffffffffffff0;
  uVar19 = 0x3d2bf18;
  if ((bRam0000000003eb494a & 1) == 0) {
    func_0x00f78a20(0x3d2bf18);
    func_0x00f78a20(0x3d57888);
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494a = 1;
  }
  uVar11 = 0x3d5b098;
  uVar5 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(param_1,uRam0000000003d2bf18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(uVar5,uRam0000000003d5b098);
  /*UnityEngine.Object$$DontDestroyOnLoad*/ func_0x032495d4(lVar6,0);
  lVar7 = 0;
  uVar5 = 0x3d23990;
  if (lVar6 == 0) {
LAB_01487854:
    unaff_x20 = uVar5;
    unaff_x19 = lVar7;
    unaff_x30 = &Atlas_UI_LoadingBehaviour__SetProgress;
    uVar5 = func_0x00f78af4();
    fVar24 = extraout_s0;
  }
  else {
    uVar18 = 0x3d23050;
    lVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar6,uRam0000000003d57888);
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38) = lVar7;
    uVar5 = 0x3d23050;
    if ((lVar7 == 0) || (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), uVar5 = uVar18, lVar6 == 0))
    goto LAB_01487854;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,0,0);
    lVar6 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
    if ((lVar6 == 0) || (plVar8 = *(long **)(lVar6 + 0x28), plVar8 == (long *)0x0))
    goto LAB_01487854;
    (**(code **)(*plVar8 + 0x558))
              (plVar8,*(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x40),
               *(undefined8 *)(*plVar8 + 0x560));
    lVar6 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar6 + 0x11) == '\0') {
      return /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar6 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
    }
    if (*(long *)(lVar6 + 0x38) == 0) goto LAB_01487854;
    Atlas_UI_LoadingBehaviour__RequestShow();
    fVar24 = 0.0;
    uVar5 = 0;
    puVar3 = (undefined1 *)register0x00000008;
    uVar19 = unaff_x21;
    uVar11 = unaff_x22;
    puVar23 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x30) = uVar11;
  *(undefined8 *)(puVar3 + -0x28) = uVar19;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar19,0,0);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  fVar25 = fVar24 * _UNK_033f83ec;
  if ((int)uVar5 != 0) {
    fVar25 = fVar24 * _UNK_033f83e8 + _UNK_033f83ec;
  }
  uVar26 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar25 * _UNK_033f83f0 + _UNK_033f83f4,0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar7 == 0) {
    func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x60) = uVar19;
    *(undefined8 *)(puVar3 + -0x58) = uVar5;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = &Atlas_UI_LoadingBehaviour__HasFinishedLoading;
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar7 + 0x10) != '\0') {
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar7 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
      }
      lVar6 = lRam0000000003d2bf00;
      *(undefined8 *)(puVar3 + -0x70) = 0x3d23990;
      *(undefined8 *)(puVar3 + -0x68) = 0x3d23050;
      *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
      *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
      *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
      *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
      lVar20 = *(long *)(lRam0000000003d2bf00 + 0x18);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      lVar15 = *(long *)(*(long *)(lVar20 + 0xc0) + 0x58);
      *(undefined8 *)(puVar3 + -0xc0) = unaff_x24;
      *(undefined8 *)(puVar3 + -0xb8) = unaff_x23;
      *(undefined8 *)(puVar3 + -0xb0) = 0x3d23990;
      *(long *)(puVar3 + -0xa8) = lVar20;
      *(long **)(puVar3 + -0xa0) = (long *)(lVar7 + 0x18);
      *(long *)(puVar3 + -0x98) = lVar6;
      *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x50;
      *(undefined **)(puVar3 + -0x88) = &UNK_01b570c0;
      lVar6 = *(long *)(lVar7 + 0x18);
      if (lVar6 == 0) {
        uVar9 = 0;
      }
      else {
        lVar21 = *(long *)(lVar15 + 0x18);
        uVar2 = *(ushort *)(lVar21 + 0x132);
        lVar20 = lVar21;
        if ((uVar2 & 1) == 0) {
          func_0x00fac028(lVar21);
          lVar20 = *(long *)(lVar15 + 0x18);
          uVar2 = *(ushort *)(lVar20 + 0x132);
        }
        pcVar22 = *(code **)**(undefined8 **)(lVar21 + 0xc0);
        if ((uVar2 & 1) == 0) {
          func_0x00fac028(lVar20);
        }
        iVar4 = (*pcVar22)(lVar6,**(undefined8 **)(lVar20 + 0xc0));
        uVar9 = (ulong)(iVar4 == *(int *)(lVar7 + 0x20));
      }
      return uVar9;
    }
    return 0;
  }
  uVar19 = *(undefined8 *)(puVar3 + -0x20);
  uVar5 = *(undefined8 *)(puVar3 + -0x18);
  uVar11 = *(undefined8 *)(puVar3 + -0x30);
  uVar18 = *(undefined8 *)(puVar3 + -0x28);
  uVar28 = *(undefined8 *)(puVar3 + -0x40);
  uVar27 = *(undefined8 *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  uVar9 = *(ulong *)(lVar7 + 0x20);
  if (uVar9 == 0) {
    auVar29 = func_0x00f78af4();
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x18) = Atlas_UI_LoadingBehaviour__set_BuildInfo;
    plVar8 = *(long **)(auVar29._0_8_ + 0x28);
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar8 + 0x558))(plVar8,auVar29._8_8_,*(undefined8 *)(*plVar8 + 0x560));
      return uVar9;
    }
    lVar7 = func_0x00f78af4();
    return *(ulong *)(lVar7 + 0x30);
  }
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  *(undefined1 *)(uVar9 + 0x90) = 1;
  *(undefined4 *)(uVar9 + 0x94) = uVar26;
  *(undefined8 *)(uVar9 + 0x98) = 0;
  if (*(char *)(uVar9 + 0x3c) == '\0') {
    return uVar9;
  }
  uVar9 = *(ulong *)(uVar9 + 0xb8);
  if (uVar9 != 0) {
    *(undefined8 *)(puVar3 + -0x20) = uVar19;
    *(undefined8 *)(puVar3 + -0x18) = uVar5;
    *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,0,0);
    return uVar9;
  }
  lVar7 = func_0x00f78af4(0,0,0);
  *(undefined8 *)(puVar3 + -0x50) = uVar28;
  *(undefined8 *)(puVar3 + -0x48) = uVar27;
  *(undefined8 *)(puVar3 + -0x40) = uVar11;
  *(undefined8 *)(puVar3 + -0x38) = uVar18;
  *(undefined8 *)(puVar3 + -0x30) = uVar19;
  *(undefined8 *)(puVar3 + -0x28) = uVar5;
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x18) = &Atlas_UI_SlantFillBar__AddThresholdEvent;
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar9 = *(ulong *)(lVar7 + 0xc0);
  if (uVar9 == 0) {
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar9,uRam0000000003d3d9e0);
    *(ulong *)(lVar7 + 0xc0) = uVar9;
    if (uVar9 == 0) {
      lVar6 = func_0x00f78af4();
      *(long *)(puVar3 + -0x70) = lVar7;
      *(undefined8 **)(puVar3 + -0x68) = extraout_x1;
      *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x20;
      *(undefined **)(puVar3 + -0x58) = &Atlas_UI_SlantFillBar__ClearThresholdEvents;
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar9 = *(ulong *)(lVar6 + 0xc0);
      if (uVar9 != 0) {
        *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
        *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
        *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
        *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
        uVar13 = uVar9;
        if (0 < *(int *)(uVar9 + 0x18)) {
          uVar13 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar9 + 0x10),0,*(int *)(uVar9 + 0x18),0);
          *(undefined4 *)(uVar9 + 0x18) = 0;
        }
        *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
        return uVar13;
      }
      return 0;
    }
  }
  uVar14 = (ulong)extraout_s0_00;
  puVar12 = *(undefined8 **)(puVar3 + -0x30);
  uVar13 = *(ulong *)(puVar3 + -0x28);
  uVar19 = *(undefined8 *)(puVar3 + -0x40);
  uVar1 = *(ulong *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x40) = uVar19;
  *(ulong *)(puVar3 + -0x38) = uVar1;
  *(undefined8 **)(puVar3 + -0x30) = puVar12;
  *(ulong *)(puVar3 + -0x28) = uVar13;
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  lVar7 = *(long *)(uVar9 + 0x10);
  puVar16 = extraout_x1;
  if (lVar7 == 0) {
code_r0x0259cf3c:
    uVar14 = uVar1;
    uVar9 = uVar13;
    uVar10 = func_0x00f78af4();
    lVar7 = extraout_x9;
    uVar17 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar9 + 0x18) = uVar17 + 1;
  }
  else {
    uVar17 = *(uint *)(uVar9 + 0x18);
    uVar10 = uVar9;
    puVar12 = extraout_x1;
    if (uVar17 != *(uint *)(lVar7 + 0x18)) goto code_r0x0259cf40;
    puVar16 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar10 = (*(code *)*puVar16)(uVar9,uVar17 + 1);
    lVar7 = *(long *)(uVar9 + 0x10);
    uVar17 = *(uint *)(uVar9 + 0x18);
    *(uint *)(uVar9 + 0x18) = uVar17 + 1;
    uVar13 = uVar9;
    uVar1 = uVar14;
    if (lVar7 == 0) goto code_r0x0259cf3c;
  }
  if (uVar17 < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)uVar17 * 0x10;
    *(ulong *)(lVar7 + 0x20) = uVar14;
    *(undefined8 **)(lVar7 + 0x28) = puVar12;
    *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
    return uVar10;
  }
  uVar11 = func_0x00f78b24();
  auVar29 = func_0x00f78ac0(uVar11,0);
  plVar8 = auVar29._8_8_;
  lVar7 = auVar29._0_8_;
  *(undefined8 *)(puVar3 + -0x80) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x78) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x70) = uVar19;
  *(ulong *)(puVar3 + -0x68) = uVar14;
  *(undefined8 **)(puVar3 + -0x60) = puVar12;
  *(ulong *)(puVar3 + -0x58) = uVar9;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x20;
  *(undefined **)(puVar3 + -0x48) =
       &System_Collections_Generic_List_SlantFillBar_ThresholdEvent___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x48))(plVar8,0x14);
  if (lVar7 != 0) {
    pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x28);
    lVar6 = *(long *)(*(long *)(puVar16[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (plVar8 != (long *)0x0) {
      if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar6 + 0x40)) {
        puVar12 = (undefined8 *)func_0x00f78ae4(plVar8);
        (*pcVar22)(lVar7,*puVar12,puVar12[1],*(undefined8 *)(*(long *)(puVar16[3] + 0xc0) + 0x28));
        iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x68))(lVar7);
        return (ulong)(iVar4 - 1);
      }
      func_0x00f78e5c(plVar8,lVar6);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar22)();
}



// ============================================================
// RVA: 0x1487858 | Atlas.UI.LoadingBehaviour.SetProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LoadingBehaviour__SetProgress(float param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *extraout_x1;
  undefined8 *puVar9;
  uint extraout_w8;
  uint uVar10;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  float fVar17;
  undefined4 uVar18;
  uint extraout_s0;
  undefined1 auVar19 [16];
  
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  fVar17 = param_1 * _UNK_033f83ec;
  if (param_2 != 0) {
    fVar17 = param_1 * _UNK_033f83e8 + _UNK_033f83ec;
  }
  uVar18 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar17 * _UNK_033f83f0 + _UNK_033f83f4,0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar5 == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar5 + 0x10) != '\0') {
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar5 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
      }
      lVar15 = *(long *)(lRam0000000003d2bf00 + 0x18);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x58);
      lVar12 = *(long *)(lVar5 + 0x18);
      if (lVar12 == 0) {
        uVar4 = 0;
      }
      else {
        lVar14 = *(long *)(lVar15 + 0x18);
        uVar1 = *(ushort *)(lVar14 + 0x132);
        lVar13 = lVar14;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar13 = *(long *)(lVar15 + 0x18);
          uVar1 = *(ushort *)(lVar13 + 0x132);
        }
        pcVar16 = *(code **)**(undefined8 **)(lVar14 + 0xc0);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        iVar2 = (*pcVar16)(lVar12,**(undefined8 **)(lVar13 + 0xc0));
        uVar4 = (ulong)(iVar2 == *(int *)(lVar5 + 0x20));
      }
      return uVar4;
    }
    return 0;
  }
  uVar4 = *(ulong *)(lVar5 + 0x20);
  if (uVar4 == 0) {
    auVar19 = func_0x00f78af4();
    plVar3 = *(long **)(auVar19._0_8_ + 0x28);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar3 + 0x558))(plVar3,auVar19._8_8_,*(undefined8 *)(*plVar3 + 0x560));
      return uVar4;
    }
    lVar5 = func_0x00f78af4();
    return *(ulong *)(lVar5 + 0x30);
  }
  *(undefined1 *)(uVar4 + 0x90) = 1;
  *(undefined4 *)(uVar4 + 0x94) = uVar18;
  *(undefined8 *)(uVar4 + 0x98) = 0;
  if (*(char *)(uVar4 + 0x3c) == '\0') {
    return uVar4;
  }
  uVar4 = *(ulong *)(uVar4 + 0xb8);
  if (uVar4 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar4,0,0);
    return uVar4;
  }
  lVar5 = func_0x00f78af4(0,0,0);
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar4 = *(ulong *)(lVar5 + 0xc0);
  if (uVar4 == 0) {
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar4,uRam0000000003d3d9e0);
    *(ulong *)(lVar5 + 0xc0) = uVar4;
    if (uVar4 == 0) {
      lVar5 = func_0x00f78af4();
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar4 = *(ulong *)(lVar5 + 0xc0);
      if (uVar4 != 0) {
        uVar8 = uVar4;
        if (0 < *(int *)(uVar4 + 0x18)) {
          uVar8 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar4 + 0x10),0,*(int *)(uVar4 + 0x18),0);
          *(undefined4 *)(uVar4 + 0x18) = 0;
        }
        *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
        return uVar8;
      }
      return 0;
    }
  }
  uVar8 = (ulong)extraout_s0;
  lVar5 = *(long *)(uVar4 + 0x10);
  puVar9 = extraout_x1;
  if (lVar5 == 0) {
code_r0x0259cf3c:
    uVar8 = unaff_x21;
    uVar4 = unaff_x19;
    uVar6 = func_0x00f78af4();
    lVar5 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar4 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar4 + 0x18);
    uVar6 = uVar4;
    unaff_x20 = extraout_x1;
    if (uVar10 != *(uint *)(lVar5 + 0x18)) goto code_r0x0259cf40;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar6 = (*(code *)*puVar9)(uVar4,uVar10 + 1);
    lVar5 = *(long *)(uVar4 + 0x10);
    uVar10 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar10 + 1;
    unaff_x19 = uVar4;
    unaff_x21 = uVar8;
    if (lVar5 == 0) goto code_r0x0259cf3c;
  }
  if (uVar10 < *(uint *)(lVar5 + 0x18)) {
    lVar5 = lVar5 + (long)(int)uVar10 * 0x10;
    *(ulong *)(lVar5 + 0x20) = uVar8;
    *(undefined8 **)(lVar5 + 0x28) = unaff_x20;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar6;
  }
  uVar11 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar11,0);
  plVar3 = auVar19._8_8_;
  lVar5 = auVar19._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar3,0x14);
  if (lVar5 != 0) {
    pcVar16 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar15 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    if (plVar3 != (long *)0x0) {
      if (*(long *)(*plVar3 + 0x40) == *(long *)(lVar15 + 0x40)) {
        puVar7 = (undefined8 *)func_0x00f78ae4(plVar3);
        (*pcVar16)(lVar5,*puVar7,puVar7[1],*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar5);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar3,lVar15);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar16)();
}



// ============================================================
// RVA: 0x14879a0 | Atlas.UI.LoadingBehaviour.HasFinishedLoading
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */

bool Atlas_UI_LoadingBehaviour__HasFinishedLoading(void)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  if ((bRam0000000003eb494b & 1) == 0) {
    func_0x00f78a20(0x3d2bf00);
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb494b = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
  if (*(char *)(lVar4 + 0x10) != '\0') {
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar4 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
    }
    lVar6 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x58);
    lVar5 = *(long *)(lVar4 + 0x18);
    if (lVar5 == 0) {
      bVar2 = false;
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x18);
      uVar1 = *(ushort *)(lVar8 + 0x132);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar8);
        lVar7 = *(long *)(lVar6 + 0x18);
        uVar1 = *(ushort *)(lVar7 + 0x132);
      }
      pcVar9 = *(code **)**(undefined8 **)(lVar8 + 0xc0);
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      iVar3 = (*pcVar9)(lVar5,**(undefined8 **)(lVar7 + 0xc0));
      bVar2 = iVar3 == *(int *)(lVar4 + 0x20);
    }
    return bVar2;
  }
  return false;
}



// ============================================================
// RVA: 0x1487a50 | Atlas.UI.LoadingBehaviour.Show
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014870d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01487278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */
/* WARNING: Removing unreachable block (ram,0x014870d4) */
/* WARNING: Removing unreachable block (ram,0x014870e4) */
/* WARNING: Removing unreachable block (ram,0x014870ec) */
/* WARNING: Removing unreachable block (ram,0x014870f0) */
/* WARNING: Removing unreachable block (ram,0x014870f4) */
/* WARNING: Removing unreachable block (ram,0x0148711c) */
/* WARNING: Removing unreachable block (ram,0x01487934) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LoadingBehaviour__Show(void)

{
  long ******pppppplVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint extraout_w8;
  uint uVar11;
  long lVar12;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *unaff_x20;
  long *****ppppplVar15;
  ulong unaff_x21;
  long lVar16;
  undefined8 uVar17;
  undefined8 unaff_x22;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long *******ppppppplVar21;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 auVar22 [16];
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long ******pppppplStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  if ((bRam0000000003eb494c & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494c = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
  *(undefined1 *)(lVar12 + 0x11) = 1;
  uVar13 = *(undefined8 *)(lVar12 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38) == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb494e & 1) == 0) {
      func_0x00f78a20(0x3d23050);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb494e = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
      if (lVar12 == 0) {
        func_0x00f78af4();
        uStack_88 = 0x3d23990;
        uStack_68 = &Atlas_UI_LoadingBehaviour__Hide;
        auStack_70 = (undefined1  [8])&stack0xffffffffffffffc0;
        if ((bRam0000000003eb494f & 1) == 0) {
          func_0x00f78a20(0x3d23050);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb494f = 1;
        }
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
        *(undefined1 *)(lVar12 + 0x11) = 0;
        uVar13 = *(undefined8 *)(lVar12 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = *(ulong *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
        if (uVar5 == 0) {
          uVar5 = func_0x00f78af4();
          pcStack_98 = (code *)&Atlas_UI_LoadingBehaviour___ctor;
          pppppplStack_a0 = (long ******)auStack_70;
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
        uVar13 = 0x3eb4000;
        uVar8 = uVar5;
        if ((bRam0000000003eb4944 & 1) == 0) {
          uVar8 = func_0x00f78a20(0x3d23050);
          bRam0000000003eb4944 = 1;
        }
        if (*(int *)(uVar5 + 0x38) == 0) {
          return uVar8;
        }
        lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar5,0);
        if (lVar12 == 0) {
          uVar5 = func_0x00f78af4();
          puVar7 = &uStack_f0;
          pcStack_98 = Atlas_UI_LoadingBehaviour__Update;
          ppppppplVar21 = &pppppplStack_a0;
          uVar13 = 0x3eb4000;
          pppppplStack_a0 = (long ******)auStack_70;
          if ((bRam0000000003eb4945 & 1) == 0) {
            func_0x00f78a20(0x3d23050);
            bRam0000000003eb4945 = 1;
          }
          uStack_d0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          if (*(long *)(uVar5 + 0x18) != 0) {
            uVar8 = /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_f0,*(long *)(uVar5 + 0x18),0,0);
            if (*(int *)(uVar5 + 0x38) != 3) {
              if (*(int *)(uVar5 + 0x38) == 1) {
                iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_f0,0);
                if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar8 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
                if (iVar3 == *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 8)) {
                  *(undefined4 *)(uVar5 + 0x38) = 2;
                }
              }
              return uVar8;
            }
            uVar13 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_f0,0);
            uVar17 = 0x3d23050;
            if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((int)uVar13 != *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0xc)) {
              return /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
            }
            uStack_88 = uVar17;
            if (*(long *)(uVar5 + 0x20) != 0) {
              /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(0,*(long *)(uVar5 + 0x20),0);
              *(undefined4 *)(uVar5 + 0x38) = 0;
              lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar5,0);
              uStack_88 = 0x3d23050;
              if (lVar12 != 0) {
                uVar9 = 0;
                pcStack_f8 = (code *)&LAB_0148727c;
                puVar7 = &uStack_f0;
                goto code_r0x0322ef1c;
              }
            }
          }
          uVar17 = uStack_88;
          uVar9 = func_0x00f78af4();
          pcStack_f8 = Atlas_UI_LoadingBehaviour__SetSupportedInputIconsVisible;
          if ((bRam0000000003eb4946 & 1) == 0) {
            func_0x00f78a20(0x3d23050);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4946 = 1;
          }
          if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
          if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
          if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x30), lVar12 == 0)) {
            func_0x00f78af4();
            if ((bRam0000000003eb4947 & 1) == 0) {
              func_0x00f78a20(0x3d23050);
              bRam0000000003eb4947 = 1;
            }
            uVar5 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
            if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
              func_0x00f78ad0();
              uVar5 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
            }
            lVar12 = *(long *)(uVar5 + 0xb8);
            /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 = uVar5;
            *(undefined2 *)(lVar12 + 0x10) = 0;
            *(undefined8 *)(lVar12 + 0x38) = 0;
            return uVar5;
          }
        }
        else {
          uVar17 = 0x3d23050;
          uVar9 = 1;
          pcStack_f8 = (code *)0x14870d4;
          puVar7 = (undefined8 *)&stack0xffffffffffffff70;
          ppppppplVar21 = (long *******)auStack_70;
        }
code_r0x0322ef1c:
        *(undefined8 *)((long)puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)((long)puVar7 + -0x28) = uVar17;
        *(undefined8 *)((long)puVar7 + -0x20) = uVar13;
        *(ulong *)((long)puVar7 + -0x18) = uVar5;
        *(long ********)((long)puVar7 + -0x10) = ppppppplVar21;
        *(code **)((long)puVar7 + -8) = pcStack_f8;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*pcRam0000000003ebf4c0)(lVar12,uVar9);
        return uVar5;
      }
      uVar5 = (ulong)(*(int *)(lVar12 + 0x38) == 2);
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  Atlas_UI_LoadingBehaviour__RequestShow();
  if ((bRam0000000003eb494d & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494d = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(SUB41(_UNK_033f83ec * 0.0 * _UNK_033f83f0 + _UNK_033f83f4,0),0);
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar12 == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb494b & 1) == 0) {
      func_0x00f78a20(0x3d2bf00);
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb494b = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar12 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
    if (*(char *)(lVar12 + 0x10) == '\0') {
      return 0;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar12 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
    }
    lVar19 = lRam0000000003d2bf00;
    pppppplVar1 = (long ******)(lVar12 + 0x18);
    auStack_70 = (undefined1  [8])0x3d23990;
    uStack_68 = (undefined *)0x3d23050;
    lVar16 = *(long *)(lRam0000000003d2bf00 + 0x18);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x58);
    pcStack_98 = (code *)lVar19;
    ppppplVar15 = *pppppplVar1;
    if (ppppplVar15 == (long *****)0x0) {
      uVar5 = 0;
    }
    else {
      lVar18 = *(long *)(lVar16 + 0x18);
      uVar2 = *(ushort *)(lVar18 + 0x132);
      lVar19 = lVar18;
      pppppplStack_a0 = pppppplVar1;
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar18);
        lVar19 = *(long *)(lVar16 + 0x18);
        uVar2 = *(ushort *)(lVar19 + 0x132);
      }
      pcVar20 = *(code **)**(undefined8 **)(lVar18 + 0xc0);
      if ((uVar2 & 1) == 0) {
        func_0x00fac028(lVar19);
      }
      iVar3 = (*pcVar20)(ppppplVar15,**(undefined8 **)(lVar19 + 0xc0));
      uVar5 = (ulong)(iVar3 == *(int *)(lVar12 + 0x20));
    }
    return uVar5;
  }
  uVar5 = *(ulong *)(lVar12 + 0x20);
  if (uVar5 == 0) {
    auVar22 = func_0x00f78af4();
    plVar4 = *(long **)(auVar22._0_8_ + 0x28);
    if (plVar4 == (long *)0x0) {
      lVar12 = func_0x00f78af4();
      return *(ulong *)(lVar12 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x01486f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar4 + 0x558))(plVar4,auVar22._8_8_,*(undefined8 *)(*plVar4 + 0x560));
    return uVar5;
  }
  *(undefined1 *)(uVar5 + 0x90) = 1;
  *(uint *)(uVar5 + 0x94) =
       CONCAT13(extraout_var_03,CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  *(undefined8 *)(uVar5 + 0x98) = 0;
  if (*(char *)(uVar5 + 0x3c) == '\0') {
    return uVar5;
  }
  uVar5 = *(ulong *)(uVar5 + 0xb8);
  if (uVar5 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar5,0,0);
    return uVar5;
  }
  auVar22 = func_0x00f78af4(0,0,0);
  puVar7 = auVar22._8_8_;
  if ((bRam0000000003eb4cce & 1) == 0) {
    func_0x00f78a20(0x3d3d9e8);
    func_0x00f78a20(0x3d3d9e0);
    func_0x00f78a20(0x3d1e310);
    bRam0000000003eb4cce = 1;
  }
  uVar5 = *(ulong *)(auVar22._0_8_ + 0xc0);
  if (uVar5 == 0) {
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>_TypeInfo*/ uRam0000000003d1e310);
    /*System.Collections.Generic.List<SlantFillBar.ThresholdEvent>$$.ctor*/ func_0x0259c210(uVar5,uRam0000000003d3d9e0);
    *(ulong *)(auVar22._0_8_ + 0xc0) = uVar5;
    if (uVar5 == 0) {
      lVar12 = func_0x00f78af4();
      _auStack_70 = auVar22;
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0);
        bRam0000000003eb4ccf = 1;
      }
      uVar5 = *(ulong *)(lVar12 + 0xc0);
      if (uVar5 == 0) {
        return 0;
      }
      uVar8 = uVar5;
      if (0 < *(int *)(uVar5 + 0x18)) {
        uVar8 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar5 + 0x10),0,*(int *)(uVar5 + 0x18),0);
        *(undefined4 *)(uVar5 + 0x18) = 0;
      }
      *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
      return uVar8;
    }
  }
  uVar8 = (ulong)CONCAT13(extraout_var_04,
                          CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
  lVar12 = *(long *)(uVar5 + 0x10);
  puVar10 = puVar7;
  if (lVar12 == 0) {
code_r0x0259cf3c:
    uVar8 = unaff_x21;
    puVar7 = unaff_x20;
    uVar5 = unaff_x19;
    uVar6 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar11 = extraout_w8;
code_r0x0259cf40:
    *(uint *)(uVar5 + 0x18) = uVar11 + 1;
  }
  else {
    uVar11 = *(uint *)(uVar5 + 0x18);
    uVar6 = uVar5;
    if (uVar11 != *(uint *)(lVar12 + 0x18)) goto code_r0x0259cf40;
    puVar10 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3d9e8 + 0x18) + 0xc0) + 0x60);
    uVar6 = (*(code *)*puVar10)(uVar5,uVar11 + 1);
    lVar12 = *(long *)(uVar5 + 0x10);
    uVar11 = *(uint *)(uVar5 + 0x18);
    *(uint *)(uVar5 + 0x18) = uVar11 + 1;
    unaff_x19 = uVar5;
    unaff_x20 = puVar7;
    unaff_x21 = uVar8;
    if (lVar12 == 0) goto code_r0x0259cf3c;
  }
  if (uVar11 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)uVar11 * 0x10;
    *(ulong *)(lVar12 + 0x20) = uVar8;
    *(undefined8 **)(lVar12 + 0x28) = puVar7;
    *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
    return uVar6;
  }
  uVar13 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar13,0);
  plVar4 = auVar22._8_8_;
  lVar12 = auVar22._0_8_;
  uStack_68 = (undefined *)uVar8;
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar4,0x14);
  if (lVar12 != 0) {
    pcVar20 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
    lVar19 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar19);
    }
    if (plVar4 != (long *)0x0) {
      if (*(long *)(*plVar4 + 0x40) == *(long *)(lVar19 + 0x40)) {
        puVar7 = (undefined8 *)func_0x00f78ae4(plVar4);
        (*pcVar20)(lVar12,*puVar7,puVar7[1],*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar12);
        return (ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar4,lVar19);
      goto code_r0x0259d128;
    }
  }
  func_0x00f78af4();
code_r0x0259d128:
                    /* WARNING: Does not return */
  pcVar20 = (code *)SoftwareBreakpoint(1,0x259d12c);
  (*pcVar20)();
}



// ============================================================
// RVA: 0x1487b4c | Atlas.UI.LoadingBehaviour.IsFullyVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x014870d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01487278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014870d4) */
/* WARNING: Removing unreachable block (ram,0x014870e4) */
/* WARNING: Removing unreachable block (ram,0x014870ec) */
/* WARNING: Removing unreachable block (ram,0x014870f0) */
/* WARNING: Removing unreachable block (ram,0x014870f4) */
/* WARNING: Removing unreachable block (ram,0x0148711c) */

ulong Atlas_UI_LoadingBehaviour__IsFullyVisible(void)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar10;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 ****ppppuStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb494e & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494e = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
    if (lVar6 == 0) {
      func_0x00f78af4();
      uStack_58 = 0x3d23990;
      puStack_38 = &Atlas_UI_LoadingBehaviour__Hide;
      pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb494f & 1) == 0) {
        func_0x00f78a20(0x3d23050);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb494f = 1;
      }
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8);
      *(undefined1 *)(lVar6 + 0x11) = 0;
      uVar7 = *(undefined8 *)(lVar6 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = *(ulong *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
      if (uVar4 == 0) {
        uVar4 = func_0x00f78af4();
        pcStack_68 = (code *)&Atlas_UI_LoadingBehaviour___ctor;
        ppppuStack_70 = &pppuStack_40;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar4;
      }
      uVar7 = 0x3eb4000;
      uVar3 = uVar4;
      if ((bRam0000000003eb4944 & 1) == 0) {
        uVar3 = func_0x00f78a20(0x3d23050);
        bRam0000000003eb4944 = 1;
      }
      if (*(int *)(uVar4 + 0x38) == 0) {
        return uVar3;
      }
      lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar4,0);
      if (lVar6 == 0) {
        uVar4 = func_0x00f78af4();
        puVar1 = &uStack_c0;
        pcStack_68 = Atlas_UI_LoadingBehaviour__Update;
        pppppuVar10 = &ppppuStack_70;
        uVar7 = 0x3eb4000;
        ppppuStack_70 = &pppuStack_40;
        if ((bRam0000000003eb4945 & 1) == 0) {
          func_0x00f78a20(0x3d23050);
          bRam0000000003eb4945 = 1;
        }
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (*(long *)(uVar4 + 0x18) != 0) {
          uVar3 = /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_c0,*(long *)(uVar4 + 0x18),0,0);
          if (*(int *)(uVar4 + 0x38) != 3) {
            if (*(int *)(uVar4 + 0x38) == 1) {
              iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_c0,0);
              if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar3 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
              if (iVar2 == *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 8)) {
                *(undefined4 *)(uVar4 + 0x38) = 2;
              }
            }
            return uVar3;
          }
          uVar7 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_c0,0);
          uVar9 = 0x3d23050;
          if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if ((int)uVar7 != *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0xc)) {
            return /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
          }
          uStack_58 = uVar9;
          if (*(long *)(uVar4 + 0x20) != 0) {
            /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(0,*(long *)(uVar4 + 0x20),0);
            *(undefined4 *)(uVar4 + 0x38) = 0;
            lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar4,0);
            uStack_58 = 0x3d23050;
            if (lVar6 != 0) {
              uVar5 = 0;
              pcStack_c8 = (code *)&LAB_0148727c;
              puVar1 = &uStack_c0;
              goto code_r0x0322ef1c;
            }
          }
        }
        uVar9 = uStack_58;
        uVar5 = func_0x00f78af4();
        pcStack_c8 = Atlas_UI_LoadingBehaviour__SetSupportedInputIconsVisible;
        if ((bRam0000000003eb4946 & 1) == 0) {
          func_0x00f78a20(0x3d23050);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4946 = 1;
        }
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xb8) + 0x38);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) {
          func_0x00f78af4();
          if ((bRam0000000003eb4947 & 1) == 0) {
            func_0x00f78a20(0x3d23050);
            bRam0000000003eb4947 = 1;
          }
          uVar4 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
          if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 + 0xe0) == 0)) {
            func_0x00f78ad0();
            uVar4 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050;
          }
          lVar6 = *(long *)(uVar4 + 0xb8);
          /*Atlas.UI.LoadingBehaviour_TypeInfo*/ uRam0000000003d23050 = uVar4;
          *(undefined2 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          return uVar4;
        }
      }
      else {
        uVar9 = 0x3d23050;
        uVar5 = 1;
        pcStack_c8 = (code *)0x14870d4;
        puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
        pppppuVar10 = (undefined8 *****)&pppuStack_40;
      }
code_r0x0322ef1c:
      *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)((long)puVar1 + -0x28) = uVar9;
      *(undefined8 *)((long)puVar1 + -0x20) = uVar7;
      *(ulong *)((long)puVar1 + -0x18) = uVar4;
      *(undefined8 ******)((long)puVar1 + -0x10) = pppppuVar10;
      *(code **)((long)puVar1 + -8) = pcStack_c8;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ebf4c0)(lVar6,uVar5);
      return uVar4;
    }
    uVar4 = (ulong)(*(int *)(lVar6 + 0x38) == 2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1487c38 | Atlas.UI.LoadingBehaviour.Hide
// ============================================================

/* WARNING: Possible PIC construction at 0x014870d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01487278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014870d4) */
/* WARNING: Removing unreachable block (ram,0x014870e4) */
/* WARNING: Removing unreachable block (ram,0x014870ec) */
/* WARNING: Removing unreachable block (ram,0x014870f0) */
/* WARNING: Removing unreachable block (ram,0x014870f4) */
/* WARNING: Removing unreachable block (ram,0x0148711c) */

long Atlas_UI_LoadingBehaviour__Hide(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 *****pppppuVar9;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 ****ppppuStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb494f & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb494f = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
  *(undefined1 *)(lVar5 + 0x11) = 0;
  uVar6 = *(undefined8 *)(lVar5 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)lVar5 == 0) {
    return lVar5;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    pcStack_38 = (code *)&Atlas_UI_LoadingBehaviour___ctor;
    ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
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
  uVar6 = 0x3eb4000;
  lVar3 = lVar5;
  if ((bRam0000000003eb4944 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d23050);
    bRam0000000003eb4944 = 1;
  }
  if (*(int *)(lVar5 + 0x38) == 0) {
    return lVar3;
  }
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
  if (lVar3 == 0) {
    lVar5 = func_0x00f78af4();
    puVar1 = &uStack_90;
    pcStack_38 = Atlas_UI_LoadingBehaviour__Update;
    pppppuVar9 = &ppppuStack_40;
    uVar6 = 0x3eb4000;
    ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4945 & 1) == 0) {
      func_0x00f78a20(0x3d23050);
      bRam0000000003eb4945 = 1;
    }
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar3 = /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_90,*(long *)(lVar5 + 0x18),0,0);
      if (*(int *)(lVar5 + 0x38) != 3) {
        if (*(int *)(lVar5 + 0x38) == 1) {
          iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_90,0);
          if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050;
          if (iVar2 == *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 8)) {
            *(undefined4 *)(lVar5 + 0x38) = 2;
          }
        }
        return lVar3;
      }
      uVar6 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_90,0);
      uVar8 = 0x3d23050;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((int)uVar6 != *(int *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0xc)) {
        return /*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050;
      }
      unaff_x21 = uVar8;
      if (*(long *)(lVar5 + 0x20) != 0) {
        /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88(0,*(long *)(lVar5 + 0x20),0);
        *(undefined4 *)(lVar5 + 0x38) = 0;
        lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
        unaff_x21 = 0x3d23050;
        if (lVar3 != 0) {
          uVar4 = 0;
          pcStack_98 = (code *)&LAB_0148727c;
          puVar1 = &uStack_90;
          goto code_r0x0322ef1c;
        }
      }
    }
    uVar8 = unaff_x21;
    uVar4 = func_0x00f78af4();
    pcStack_98 = Atlas_UI_LoadingBehaviour__SetSupportedInputIconsVisible;
    if ((bRam0000000003eb4946 & 1) == 0) {
      func_0x00f78a20(0x3d23050);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4946 = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = *(undefined8 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = *(long *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 0x38);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x30), lVar3 == 0)) {
      func_0x00f78af4();
      if ((bRam0000000003eb4947 & 1) == 0) {
        func_0x00f78a20(0x3d23050);
        bRam0000000003eb4947 = 1;
      }
      lVar5 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar5 = /*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050;
      }
      lVar3 = *(long *)(lVar5 + 0xb8);
      /*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 = lVar5;
      *(undefined2 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      return lVar5;
    }
  }
  else {
    uVar8 = 0x3d23050;
    uVar4 = 1;
    pcStack_98 = (code *)0x14870d4;
    puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
    pppppuVar9 = (undefined8 *****)&stack0xfffffffffffffff0;
  }
code_r0x0322ef1c:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = uVar8;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar6;
  *(long *)((long)puVar1 + -0x18) = lVar5;
  *(undefined8 ******)((long)puVar1 + -0x10) = pppppuVar9;
  *(code **)((long)puVar1 + -8) = pcStack_98;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar5 = (*pcRam0000000003ebf4c0)(lVar3,uVar4);
  return lVar5;
}



// ============================================================
// RVA: 0x1487d24 | Atlas.UI.LoadingBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_LoadingBehaviour___ctor(ulong param_1)

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



// ============================================================
// RVA: 0x1487d2c | Atlas.UI.LoadingBehaviour..cctor
// ============================================================

void Atlas_UI_LoadingBehaviour___cctor(void)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4950 & 1) == 0) {
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d6c710);
    func_0x00f78a20(0x3d6ce30);
    func_0x00f78a20(0x3d6ce38);
    func_0x00f78a20(0x3d6c2a0);
    bRam0000000003eb4950 = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Enter')*/ uRam0000000003d6c2a0,0);
  **(undefined4 **)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Exit')*/ uRam0000000003d6c710,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FinishedEnter')*/ uRam0000000003d6ce30,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8) + 8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FinishedExit')*/ uRam0000000003d6ce38,0);
  lVar2 = *(long *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xb8);
  *(undefined4 *)(lVar2 + 0xc) = uVar1;
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  return;
}



