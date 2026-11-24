// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Animations.AnimLauncherBehaviour

// ============================================================
// RVA: 0x1448aa8 | Atlas.Animations.AnimLauncherBehaviour.set_AllowLaunchAnims
// ============================================================

void Atlas_Animations_AnimLauncherBehaviour__set_AllowLaunchAnims(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x1448ab0 | Atlas.Animations.AnimLauncherBehaviour.set_NextAnimationTimer
// ============================================================

void Atlas_Animations_AnimLauncherBehaviour__set_NextAnimationTimer(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}



// ============================================================
// RVA: 0x1448ab8 | Atlas.Animations.AnimLauncherBehaviour.Start
// ============================================================

void Atlas_Animations_AnimLauncherBehaviour__Start(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  long lVar4;
  undefined8 *unaff_x21;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb472a & 1) == 0) {
    func_0x00f78a20(0x3d33288);
    func_0x00f78a20(0x3d33290);
    func_0x00f78a20(0x3d33298);
    func_0x00f78a20(0x3d3cc78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb472a = 1;
  }
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Collections.Generic.List<AnimLauncherBehaviour.AnimHolder>$$GetEnumerator*/ func_0x024ab034(&uStack_70,*(long *)(param_1 + 0x18),uRam0000000003d3cc78);
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<AnimLauncherBehaviour.AnimHolder>$$MoveNext*/ func_0x01f78998(&uStack_70,uRam0000000003d33290), lVar4 = lStack_60,
          (uVar2 & 1) != 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar4 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1448bf8);
          (*pcVar1)();
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<AnimLauncherBehaviour.AnimHolder>$$Dispose*/ func_0x01f78994(&uStack_70,uRam0000000003d33288);
code_r0x01448bc8:
    /*UnityEngine.Random$$Range*/ func_0x03252854((char)*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0);
    *(uint *)(param_1 + 0x2c) =
         CONCAT13(extraout_var_03,CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
    return;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<AnimLauncherBehaviour.AnimHolder>$$Dispose*/ func_0x01f78994(&uStack_70,*unaff_x21);
    if (lVar4 == 0) goto code_r0x01448bc8;
    func_0x00f78ac0(lVar4,0);
  }
  lVar4 = __Unwind_Resume();
  /*UnityEngine.Random$$Range*/ func_0x03252854((char)*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),0);
  *(uint *)(lVar4 + 0x2c) =
       CONCAT13(extraout_var_04,CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
  return;
}



// ============================================================
// RVA: 0x1448c40 | Atlas.Animations.AnimLauncherBehaviour.SetPlayAnimationAfter
// ============================================================

void Atlas_Animations_AnimLauncherBehaviour__SetPlayAnimationAfter(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Random$$Range*/ func_0x03252854(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1448c6c | Atlas.Animations.AnimLauncherBehaviour.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x01448cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01448d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01448cf8) */
/* WARNING: Removing unreachable block (ram,0x01448d2c) */

ulong Atlas_Animations_AnimLauncherBehaviour__Update(ulong param_1)

{
  undefined4 uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  float extraout_s0;
  undefined8 uVar13;
  float fVar14;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = &uStack_60;
  uVar5 = param_1;
  if ((bRam0000000003eb472b & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d3cc88);
    bRam0000000003eb472b = 1;
  }
  uVar7 = *(uint *)(param_1 + 0x30);
  lVar8 = (long)(int)uVar7;
  if (uVar7 == 0xffffffff) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      return uVar5;
    }
    fVar14 = *(float *)(param_1 + 0x28);
    uVar5 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar14 = fVar14 + extraout_s0;
    *(float *)(param_1 + 0x28) = fVar14;
    if (fVar14 < *(float *)(param_1 + 0x2c)) {
      return uVar5;
    }
    puVar12 = &UNK_01448d2c;
code_r0x01448d5c:
    plVar2 = &lStack_c0;
    pppppppuVar11 = &ppppppuStack_70;
    lVar8 = 0x3eb4000;
    uVar5 = param_1;
    ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
    puStack_68 = puVar12;
    if ((bRam0000000003eb472c & 1) == 0) {
      func_0x00f78a20(0x3d3cc80);
      func_0x00f78a20(0x3d3cc88);
      uVar5 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb472c = 1;
    }
    unaff_x22 = *(long *)(param_1 + 0x18);
    if (unaff_x22 != 0) {
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      unaff_x21 = (ulong)uVar7;
      if ((int)uVar7 < 1) {
        return uVar5;
      }
      if (uVar7 == 1) {
        lVar9 = 0;
      }
      else {
        iVar4 = -0x31;
        do {
          lVar9 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,unaff_x21,0);
          bVar3 = iVar4 != 0;
          iVar4 = iVar4 + 1;
        } while ((int)lVar9 == *(int *)(param_1 + 0x34) && bVar3);
        unaff_x22 = *(long *)(param_1 + 0x18);
        if (unaff_x22 == 0) goto code_r0x01448ea0;
      }
      uVar7 = (uint)lVar9;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(unaff_x22 + 0x10) + (long)(int)uVar7 * 0x20;
      uStack_b8 = *(undefined8 *)(lVar8 + 0x28);
      lVar10 = *(long *)(lVar8 + 0x20);
      uStack_a8 = *(undefined8 *)(lVar8 + 0x38);
      uStack_b0 = *(undefined8 *)(lVar8 + 0x30);
      lStack_c0 = lVar10;
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
      if (iVar4 == 0) {
code_r0x01448e78:
        uVar5 = /*Atlas.Animations.AnimLauncherBehaviour.AnimHolder$$PlayAnimation*/ func_0x01531a24(&lStack_c0,0);
        *(uint *)(param_1 + 0x30) = uVar7;
        return uVar5;
      }
      unaff_x21 = 0;
      lVar8 = lVar9;
      if (lVar10 != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0);
        goto code_r0x01448e78;
      }
    }
code_r0x01448ea0:
    puVar12 = &Atlas_Animations_AnimLauncherBehaviour__HideLastPlayerAnimationAndReset;
    uVar5 = func_0x00f78af4();
  }
  else {
    unaff_x21 = *(ulong *)(param_1 + 0x18);
    if (unaff_x21 == 0) {
      puVar12 = &Atlas_Animations_AnimLauncherBehaviour__PlayRandomAnimation;
      param_1 = func_0x00f78af4();
      goto code_r0x01448d5c;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(unaff_x21 + 0x10) + lVar8 * 0x20;
    uStack_58 = *(undefined8 *)(lVar9 + 0x28);
    uStack_60 = *(undefined8 *)(lVar9 + 0x20);
    uStack_48 = *(undefined8 *)(lVar9 + 0x38);
    uStack_50 = *(undefined8 *)(lVar9 + 0x30);
    uVar5 = /*Atlas.Animations.AnimLauncherBehaviour.AnimHolder$$IsPlayingAnimation*/ func_0x01531af4(&uStack_60,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    puVar12 = (undefined *)0x1448cf8;
    uVar5 = param_1;
    pppppppuVar11 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  *(long *)((long)plVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)plVar2 + -0x28) = unaff_x21;
  *(long *)((long)plVar2 + -0x20) = lVar8;
  *(ulong *)((long)plVar2 + -0x18) = param_1;
  *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar11;
  *(undefined **)((long)plVar2 + -8) = puVar12;
  uVar6 = uVar5;
  if ((bRam0000000003eb472d & 1) == 0) {
    func_0x00f78a20(0x3d3cc88);
    uVar6 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb472d = 1;
  }
  uVar7 = *(uint *)(uVar5 + 0x30);
  lVar8 = (long)(int)uVar7;
  if (uVar7 != 0xffffffff) {
    lVar9 = *(long *)(uVar5 + 0x18);
    if (lVar9 == 0) {
code_r0x01448f7c:
      uVar6 = func_0x00f78af4();
      uVar13 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(uVar6 + 0x20) = uVar13;
      *(undefined8 *)(uVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined1 *)(uVar6 + 0x38) = 1;
      *(long *)((long)plVar2 + -0x60) = unaff_x22;
      *(long *)((long)plVar2 + -0x58) = lVar9;
      *(long *)((long)plVar2 + -0x50) = lVar8;
      *(ulong *)((long)plVar2 + -0x48) = uVar5;
      *(undefined1 **)((long)plVar2 + -0x40) = (undefined1 *)((long)plVar2 + -0x10);
      *(undefined **)((long)plVar2 + -0x38) = &Atlas_Animations_AnimLauncherBehaviour___ctor;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar6;
    }
    unaff_x22 = 0x3d23990;
    if (*(uint *)(lVar9 + 0x18) <= uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar10 = *(long *)(*(long *)(lVar9 + 0x10) + lVar8 * 0x20 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
    if ((int)uVar6 != 0) {
      lVar8 = 0;
      if (lVar10 == 0) goto code_r0x01448f7c;
      uVar6 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0,0);
    }
    uVar1 = *(undefined4 *)(uVar5 + 0x30);
    *(undefined4 *)(uVar5 + 0x30) = 0xffffffff;
    *(undefined4 *)(uVar5 + 0x34) = uVar1;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1448d5c | Atlas.Animations.AnimLauncherBehaviour.PlayRandomAnimation
// ============================================================

long Atlas_Animations_AnimLauncherBehaviour__PlayRandomAnimation(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_1;
  if ((bRam0000000003eb472c & 1) == 0) {
    func_0x00f78a20(0x3d3cc80);
    func_0x00f78a20(0x3d3cc88);
    lVar5 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb472c = 1;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    iVar4 = *(int *)(lVar8 + 0x18);
    if (iVar4 < 1) {
      return lVar5;
    }
    if (iVar4 == 1) {
      uVar3 = 0;
    }
    else {
      iVar7 = -0x31;
      do {
        uVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,iVar4,0);
        bVar2 = iVar7 != 0;
        iVar7 = iVar7 + 1;
      } while (uVar3 == *(uint *)(param_1 + 0x34) && bVar2);
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) goto LAB_01448ea0;
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar5 = *(long *)(lVar8 + 0x10) + (long)(int)uVar3 * 0x20;
    uStack_58 = *(undefined8 *)(lVar5 + 0x28);
    lVar8 = *(long *)(lVar5 + 0x20);
    uStack_48 = *(undefined8 *)(lVar5 + 0x38);
    uStack_50 = *(undefined8 *)(lVar5 + 0x30);
    lStack_60 = lVar8;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if (iVar4 == 0) {
code_r0x01448e78:
      lVar5 = /*Atlas.Animations.AnimLauncherBehaviour.AnimHolder$$PlayAnimation*/ func_0x01531a24(&lStack_60,0);
      *(uint *)(param_1 + 0x30) = uVar3;
      return lVar5;
    }
    if (lVar8 != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
      goto code_r0x01448e78;
    }
  }
LAB_01448ea0:
  lVar8 = func_0x00f78af4();
  lVar5 = lVar8;
  if ((bRam0000000003eb472d & 1) == 0) {
    func_0x00f78a20(0x3d3cc88);
    lVar5 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb472d = 1;
  }
  uVar3 = *(uint *)(lVar8 + 0x30);
  if (uVar3 != 0xffffffff) {
    lVar5 = *(long *)(lVar8 + 0x18);
    if (lVar5 == 0) {
code_r0x01448f7c:
      lVar5 = func_0x00f78af4();
      uVar9 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(lVar5 + 0x20) = uVar9;
      *(undefined8 *)(lVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined1 *)(lVar5 + 0x38) = 1;
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
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 0x20 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
    if ((int)lVar5 != 0) {
      if (lVar6 == 0) goto code_r0x01448f7c;
      lVar5 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,0,0);
    }
    uVar1 = *(undefined4 *)(lVar8 + 0x30);
    *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0x34) = uVar1;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x1448ea4 | Atlas.Animations.AnimLauncherBehaviour.HideLastPlayerAnimationAndReset
// ============================================================

long Atlas_Animations_AnimLauncherBehaviour__HideLastPlayerAnimationAndReset(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = param_1;
  if ((bRam0000000003eb472d & 1) == 0) {
    func_0x00f78a20(0x3d3cc88);
    lVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb472d = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0xffffffff) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
LAB_01448f7c:
      lVar3 = func_0x00f78af4();
      uVar5 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      *(undefined8 *)(lVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined1 *)(lVar3 + 0x38) = 1;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return lVar3;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x20 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
    if ((int)lVar3 != 0) {
      if (lVar4 == 0) goto LAB_01448f7c;
      lVar3 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = uVar1;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1448f80 | Atlas.Animations.AnimLauncherBehaviour..ctor
// ============================================================

long Atlas_Animations_AnimLauncherBehaviour___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x38) = 1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



