// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartFEAnimator

// ============================================================
// RVA: 0x15c9a4c | Atlas.Gameplay.Kart.KartFEAnimator.get_ReadyToApplyAnim
// ============================================================

/* WARNING: Possible PIC construction at 0x015c9af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c9afc) */

ulong Atlas_Gameplay_Kart_KartFEAnimator__get_ReadyToApplyAnim
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb5312 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5312 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x110);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x108);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 != 0) goto code_r0x015c9b14;
    }
  }
  lVar3 = func_0x00f78af4();
code_r0x015c9b14:
  uVar2 = 0;
  uVar7 = 1;
  lVar8 = 0x20;
  while (lVar5 = *(long *)(lVar3 + 0x38), lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto code_r0x015c9b8c;
    uVar4 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar5 + lVar8,0);
    if ((uVar4 & 1) != 0) {
      return uVar7;
    }
    bVar1 = uVar2 < 6;
    uVar2 = uVar2 + 1;
    uVar7 = (ulong)bVar1;
    lVar8 = lVar8 + 4;
    if (uVar2 == 7) {
      return uVar7;
    }
  }
  func_0x00f78af4();
code_r0x015c9b8c:
  uVar6 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar6,0);
  uVar2 = auVar9._0_8_;
  *(undefined8 *)(uVar2 + 0x10) = param_3;
  *(long *)(uVar2 + 0x18) = auVar9._8_8_;
  return uVar2;
}



// ============================================================
// RVA: 0x15c9b98 | Atlas.Gameplay.Kart.KartFEAnimator.Init
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__Init(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// ============================================================
// RVA: 0x15c9ba0 | Atlas.Gameplay.Kart.KartFEAnimator.Update
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__Update(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((bRam0000000003eb5313 & 1) == 0) {
    func_0x00f78a20(0x3d32d20);
    func_0x00f78a20(0x3d32d28);
    func_0x00f78a20(0x3d32d30);
    func_0x00f78a20(0x3d3b7e8);
    func_0x00f78a20(0x3d3b7f8);
    func_0x00f78a20(0x3d3b800);
    func_0x00f78a20(0x3d3b808);
    bRam0000000003eb5313 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  iVar3 = Atlas_Gameplay_Kart_KartFEAnimator__get_ReadyToApplyAnim(param_1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x20) != -1) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = /*UnityEngine.Random$$get_value*/ func_0x03252940(0);
      }
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar4 == 0)) goto code_r0x015c9ec0;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride
                (uVar7,lVar4,*(undefined4 *)(param_1 + 0x20),0);
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x108), lVar4 == 0)) goto code_r0x015c9ec0;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride
                (uVar7,lVar4,*(undefined4 *)(param_1 + 0x20),0);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x24) != -1) {
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto code_r0x015c9ec0;
      /*UnityEngine.Animator$$SetTrigger*/ func_0x0320d82c(lVar4,*(int *)(param_1 + 0x24),0);
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x108), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto code_r0x015c9ec0;
      /*UnityEngine.Animator$$SetTrigger*/ func_0x0320d82c(lVar4,*(undefined4 *)(param_1 + 0x24),0);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) {
code_r0x015c9ec0:
      func_0x00f78af4();
code_r0x015c9ec4:
      func_0x00f78af4();
code_r0x015c9ef0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15c9ef4);
      (*pcVar2)();
    }
    if (0 < *(int *)(lVar4 + 0x18)) {
      /*System.Collections.Generic.List<PendingParam>$$GetEnumerator*/ func_0x0242fec4(&uStack_90,lVar4,uRam0000000003d3b800);
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<PendingParam>$$MoveNext*/ func_0x01f70194(&uStack_70,uRam0000000003d32d28), uVar1 = uStack_60,
            (uVar5 & 1) != 0) {
        uVar5 = uStack_58 & 0xffffffff;
        lVar4 = *(long *)(param_1 + 0x18);
        if ((uStack_58 & 0xff) == 0) {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          if (*(long *)(lVar4 + 0x108) == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x108) + 0x18);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          uVar6 = uStack_60 >> 0x20;
          /*UnityEngine.Animator$$SetInteger*/ func_0x0320d6dc(lVar4,uStack_60,uVar6,0);
          if (*(long *)(param_1 + 0x18) == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x110);
          if (lVar4 == 0) goto code_r0x015c9ec4;
          lVar4 = *(long *)(lVar4 + 0x18);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          /*UnityEngine.Animator$$SetInteger*/ func_0x0320d6dc(lVar4,uVar1,uVar6,0);
        }
        else {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          if (*(long *)(lVar4 + 0x108) == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x108) + 0x18);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          iVar3 = (int)(uStack_60 >> 0x20);
          /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(lVar4,uStack_60,0 < iVar3,0);
          if (*(long *)(param_1 + 0x18) == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x110);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          lVar4 = *(long *)(lVar4 + 0x18);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015c9ef0;
          }
          /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(lVar4,uVar1,0 < iVar3,0);
        }
        if (*(long *)(param_1 + 0x40) == 0) {
          func_0x00f78af4();
          goto code_r0x015c9ef0;
        }
        /*System.Collections.Generic.List<PendingParam>$$Add*/ func_0x0242f368(*(long *)(param_1 + 0x40),uVar1,uVar5,uRam0000000003d3b7e8);
      }
      /*System.Collections.Generic.List.Enumerator<PendingParam>$$Dispose*/ func_0x01f70190(&uStack_70,uRam0000000003d32d20);
      if (*(long *)(param_1 + 0x30) == 0) goto code_r0x015c9ec0;
      /*System.Collections.Generic.List<PendingParam>$$Clear*/ func_0x0242f668(*(long *)(param_1 + 0x30),uRam0000000003d3b7f8);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15c9f78 | Atlas.Gameplay.Kart.KartFEAnimator.DeInit
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x15c9f80 | Atlas.Gameplay.Kart.KartFEAnimator.Play
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__Play(long param_1,undefined4 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auVar2 [12];
  
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar1 + 0x10),0,*(int *)(lVar1 + 0x18),0);
      *(undefined4 *)(lVar1 + 0x18) = 0;
    }
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    return;
  }
  auVar2 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar2._8_4_) ||
     (*(int *)(auVar2._0_8_ + 0x24) == -1)) {
    *(int *)(auVar2._0_8_ + 0x24) = auVar2._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15c9ff4 | Atlas.Gameplay.Kart.KartFEAnimator.SetTrigger
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger(long param_1,int param_2)

{
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != param_2) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = param_2;
  }
  return;
}



// ============================================================
// RVA: 0x15ca080 | Atlas.Gameplay.Kart.KartFEAnimator.SetInt
// ============================================================

ulong Atlas_Gameplay_Kart_KartFEAnimator__SetInt(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint extraout_w8;
  uint uVar11;
  long lVar12;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar13;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  code *pcVar15;
  undefined8 unaff_x24;
  undefined8 **unaff_x29;
  undefined8 ***pppuVar16;
  undefined *unaff_x30;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 *puStack_50;
  ulong uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  uVar5 = param_3;
  if ((bRam0000000003eb5316 & 1) == 0) {
    func_0x00f78a20(0x3d3b7e8);
    bRam0000000003eb5316 = 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 == 0) {
    auVar17 = func_0x00f78af4();
    uVar13 = auVar17._8_8_;
    uStack_60 = 0x3eb5000;
    puStack_38 = &Atlas_Gameplay_Kart_KartFEAnimator__SetBool;
    uStack_58 = param_1;
    puStack_50 = param_2;
    uStack_48 = param_3;
    puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5317 & 1) == 0) {
      func_0x00f78a20(0x3d3b7e8);
      bRam0000000003eb5317 = 1;
    }
    uVar4 = *(ulong *)(auVar17._0_8_ + 0x30);
    if (uVar4 == 0) {
      uVar4 = func_0x00f78af4();
      puStack_68 = &Atlas_Gameplay_Kart_KartFEAnimator__ReapplyAnimationAndTriggers;
      pppuVar16 = &ppuStack_70;
      uStack_80 = uVar5;
      uStack_78 = uVar13;
      ppuStack_70 = &puStack_40;
      if ((bRam0000000003eb5318 & 1) == 0) {
        func_0x00f78a20(0x3d3b7f0);
        func_0x00f78a20(0x3d3b7f8);
        func_0x00f78a20(0x3d3b808);
        bRam0000000003eb5318 = 1;
      }
      if (*(int *)(uVar4 + 0x20) == -1) {
        Atlas_Gameplay_Kart_KartFEAnimator__Play(uVar4,*(undefined4 *)(uVar4 + 0x38),0);
      }
      if (*(int *)(uVar4 + 0x24) == -1) {
        Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger(uVar4,*(undefined4 *)(uVar4 + 0x3c));
      }
      uVar5 = *(ulong *)(uVar4 + 0x30);
      if (uVar5 != 0) {
        if (*(int *)(uVar5 + 0x18) != 0) {
          return uVar5;
        }
        /*System.Collections.Generic.List<PendingParam>$$AddRange*/ func_0x0242f5dc(uVar5,*(undefined8 *)(uVar4 + 0x40),uRam0000000003d3b7f0);
        uVar5 = *(ulong *)(uVar4 + 0x40);
        if (uVar5 != 0) {
          puVar2 = &uStack_60;
          uVar4 = uStack_78;
          uVar13 = uStack_80;
          pppuVar16 = (undefined8 ***)ppuStack_70;
          puStack_88 = puStack_68;
          goto System_Collections_Generic_List_PendingParam___Clear;
        }
      }
      lVar12 = func_0x00f78af4();
      puStack_88 = &Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen;
      if ((bRam0000000003eb5319 & 1) == 0) {
        func_0x00f78a20(0x3d22c88);
        bRam0000000003eb5319 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8);
      if ((bRam0000000003eb5314 & 1) == 0) {
        func_0x00f78a20(0x3d3b7f8);
        bRam0000000003eb5314 = 1;
      }
      *(undefined4 *)(lVar12 + 0x20) = uVar1;
      *(undefined1 *)(lVar12 + 0x28) = 0;
      *(undefined4 *)(lVar12 + 0x3c) = 0xffffffff;
      uVar5 = *(ulong *)(lVar12 + 0x40);
      if (uVar5 == 0) {
        auVar18 = func_0x00f78af4();
        if ((bRam0000000003eb5315 & 1) == 0) {
          func_0x00f78a20(0x3d22c88);
          bRam0000000003eb5315 = 1;
        }
        uVar5 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
        if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar5 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
        }
        /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 = uVar5;
        if ((*(int *)(*(long *)(uVar5 + 0xb8) + 0x4c) != auVar18._8_4_) ||
           (*(int *)(auVar18._0_8_ + 0x24) == -1)) {
          *(int *)(auVar18._0_8_ + 0x24) = auVar18._8_4_;
        }
        return uVar5;
      }
      uVar13 = 0x3eb5000;
      puVar2 = &uStack_80;
System_Collections_Generic_List_PendingParam___Clear:
      *(ulong *)((long)puVar2 + -0x20) = uVar13;
      *(ulong *)((long)puVar2 + -0x18) = uVar4;
      *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar16;
      *(undefined **)((long)puVar2 + -8) = puStack_88;
      uVar4 = uVar5;
      if (0 < *(int *)(uVar5 + 0x18)) {
        uVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar5 + 0x10),0,*(int *)(uVar5 + 0x18),0);
        *(undefined4 *)(uVar5 + 0x18) = 0;
      }
      *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
      return uVar4;
    }
    uVar7 = 0x100000000;
    if ((int)uVar5 == 0) {
      uVar7 = 0;
    }
    uVar7 = uVar7 | uVar13 & 0xffffffff;
    puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = uStack_48;
    unaff_x20 = puStack_50;
    unaff_x21 = uStack_58;
    unaff_x22 = uStack_60;
    unaff_x29 = (undefined8 **)puStack_40;
    unaff_x30 = puStack_38;
  }
  else {
    uVar7 = (ulong)param_2 & 0xffffffff | param_3 << 0x20;
    puVar9 = (undefined8 *)0x0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar12 = *(long *)(uVar4 + 0x10);
  puVar10 = puVar9;
  if (lVar12 == 0) {
code_r0x0242f3cc:
    uVar7 = unaff_x21;
    puVar9 = unaff_x20;
    uVar4 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar11 = extraout_w8;
code_r0x0242f3d0:
    *(uint *)(uVar4 + 0x18) = uVar11 + 1;
  }
  else {
    uVar11 = *(uint *)(uVar4 + 0x18);
    uVar5 = uVar4;
    if (uVar11 != *(uint *)(lVar12 + 0x18)) goto code_r0x0242f3d0;
    puVar10 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b7e8 + 0x18) + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar10)(uVar4,uVar11 + 1);
    lVar12 = *(long *)(uVar4 + 0x10);
    uVar11 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar11 + 1;
    unaff_x19 = uVar4;
    unaff_x20 = puVar9;
    unaff_x21 = uVar7;
    if (lVar12 == 0) goto code_r0x0242f3cc;
  }
  if (uVar11 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)uVar11 * 0xc;
    *(ulong *)(lVar12 + 0x20) = uVar7;
    *(int *)(lVar12 + 0x28) = (int)puVar9;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar6,0);
  plVar8 = auVar17._8_8_;
  lVar12 = auVar17._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x58) = uVar7;
  *(undefined8 **)((long)register0x00000008 + -0x50) = puVar9;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar4;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &System_Collections_Generic_List_PendingParam___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar8,0x14);
  if (lVar12 != 0) {
    pcVar15 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
    lVar14 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (plVar8 != (long *)0x0) {
      if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar14 + 0x40)) {
        puVar9 = (undefined8 *)func_0x00f78ae4(plVar8);
        (*pcVar15)(lVar12,*puVar9,*(undefined4 *)(puVar9 + 1),
                   *(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar12);
        return (ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar8,lVar14);
      goto code_r0x0242f5c4;
    }
  }
  func_0x00f78af4();
code_r0x0242f5c4:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x242f5c8);
  (*pcVar15)();
}



// ============================================================
// RVA: 0x15ca0f0 | Atlas.Gameplay.Kart.KartFEAnimator.SetBool
// ============================================================

ulong Atlas_Gameplay_Kart_KartFEAnimator__SetBool(long param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint extraout_w8;
  uint uVar11;
  long lVar12;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long lVar13;
  code *pcVar14;
  undefined8 ***pppuVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined *puStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5317 & 1) == 0) {
    func_0x00f78a20(0x3d3b7e8);
    bRam0000000003eb5317 = 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 == 0) {
    uVar4 = func_0x00f78af4();
    puStack_38 = &Atlas_Gameplay_Kart_KartFEAnimator__ReapplyAnimationAndTriggers;
    pppuVar15 = &ppuStack_40;
    uStack_50 = param_3;
    uStack_48 = param_2;
    ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5318 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f0);
      func_0x00f78a20(0x3d3b7f8);
      func_0x00f78a20(0x3d3b808);
      bRam0000000003eb5318 = 1;
    }
    if (*(int *)(uVar4 + 0x20) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__Play(uVar4,*(undefined4 *)(uVar4 + 0x38),0);
    }
    if (*(int *)(uVar4 + 0x24) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger(uVar4,*(undefined4 *)(uVar4 + 0x3c));
    }
    uVar8 = *(ulong *)(uVar4 + 0x30);
    if (uVar8 != 0) {
      if (*(int *)(uVar8 + 0x18) != 0) {
        return uVar8;
      }
      /*System.Collections.Generic.List<PendingParam>$$AddRange*/ func_0x0242f5dc(uVar8,*(undefined8 *)(uVar4 + 0x40),uRam0000000003d3b7f0);
      uVar8 = *(ulong *)(uVar4 + 0x40);
      if (uVar8 != 0) {
        puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
        uVar4 = uStack_48;
        uVar6 = uStack_50;
        pppuVar15 = (undefined8 ***)ppuStack_40;
        puStack_58 = puStack_38;
        goto System_Collections_Generic_List_PendingParam___Clear;
      }
    }
    lVar12 = func_0x00f78af4();
    puStack_58 = &Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen;
    if ((bRam0000000003eb5319 & 1) == 0) {
      func_0x00f78a20(0x3d22c88);
      bRam0000000003eb5319 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8);
    if ((bRam0000000003eb5314 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f8);
      bRam0000000003eb5314 = 1;
    }
    *(undefined4 *)(lVar12 + 0x20) = uVar1;
    *(undefined1 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x3c) = 0xffffffff;
    uVar8 = *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) {
      auVar17 = func_0x00f78af4();
      if ((bRam0000000003eb5315 & 1) == 0) {
        func_0x00f78a20(0x3d22c88);
        bRam0000000003eb5315 = 1;
      }
      uVar4 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar4 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
      }
      /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 = uVar4;
      if ((*(int *)(*(long *)(uVar4 + 0xb8) + 0x4c) != auVar17._8_4_) ||
         (*(int *)(auVar17._0_8_ + 0x24) == -1)) {
        *(int *)(auVar17._0_8_ + 0x24) = auVar17._8_4_;
      }
      return uVar4;
    }
    uVar6 = 0x3eb5000;
    puVar2 = &uStack_50;
System_Collections_Generic_List_PendingParam___Clear:
    *(undefined8 *)((long)puVar2 + -0x20) = uVar6;
    *(ulong *)((long)puVar2 + -0x18) = uVar4;
    *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar15;
    *(undefined **)((long)puVar2 + -8) = puStack_58;
    uVar4 = uVar8;
    if (0 < *(int *)(uVar8 + 0x18)) {
      uVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar8 + 0x10),0,*(int *)(uVar8 + 0x18),0);
      *(undefined4 *)(uVar8 + 0x18) = 0;
    }
    *(int *)(uVar8 + 0x1c) = *(int *)(uVar8 + 0x1c) + 1;
    return uVar4;
  }
  uVar8 = 0x100000000;
  if ((int)param_3 == 0) {
    uVar8 = 0;
  }
  uVar8 = uVar8 | param_2 & 0xffffffff;
  puVar10 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  lVar12 = *(long *)(uVar4 + 0x10);
  if (lVar12 == 0) {
code_r0x0242f3cc:
    uVar8 = unaff_x21;
    uVar4 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar11 = extraout_w8;
code_r0x0242f3d0:
    *(uint *)(uVar4 + 0x18) = uVar11 + 1;
  }
  else {
    unaff_x20 = 1;
    uVar11 = *(uint *)(uVar4 + 0x18);
    uVar5 = uVar4;
    if (uVar11 != *(uint *)(lVar12 + 0x18)) goto code_r0x0242f3d0;
    puVar10 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b7e8 + 0x18) + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar10)(uVar4,uVar11 + 1);
    lVar12 = *(long *)(uVar4 + 0x10);
    uVar11 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar11 + 1;
    unaff_x19 = uVar4;
    unaff_x21 = uVar8;
    if (lVar12 == 0) goto code_r0x0242f3cc;
  }
  if (uVar11 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)uVar11 * 0xc;
    *(ulong *)(lVar12 + 0x20) = uVar8;
    *(int *)(lVar12 + 0x28) = (int)unaff_x20;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar6,0);
  plVar9 = auVar16._8_8_;
  lVar12 = auVar16._0_8_;
  puStack_38 = &System_Collections_Generic_List_PendingParam___System_Collections_IList_Add;
  uStack_50 = unaff_x20;
  uStack_48 = uVar4;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar9,0x14);
  if (lVar12 != 0) {
    pcVar14 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
    lVar13 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar13 + 0x40)) {
        puVar7 = (undefined8 *)func_0x00f78ae4(plVar9);
        (*pcVar14)(lVar12,*puVar7,*(undefined4 *)(puVar7 + 1),
                   *(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar12);
        return (ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar9,lVar13);
      goto code_r0x0242f5c4;
    }
  }
  func_0x00f78af4();
code_r0x0242f5c4:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x242f5c8);
  (*pcVar14)();
}



// ============================================================
// RVA: 0x15ca16c | Atlas.Gameplay.Kart.KartFEAnimator.ReapplyAnimationAndTriggers
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__ReapplyAnimationAndTriggers(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar4 [12];
  undefined *puStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5318 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f0);
    func_0x00f78a20(0x3d3b7f8);
    func_0x00f78a20(0x3d3b808);
    bRam0000000003eb5318 = 1;
  }
  if (*(int *)(param_1 + 0x20) == -1) {
    Atlas_Gameplay_Kart_KartFEAnimator__Play(param_1,*(undefined4 *)(param_1 + 0x38),0);
  }
  if (*(int *)(param_1 + 0x24) == -1) {
    Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger(param_1,*(undefined4 *)(param_1 + 0x3c));
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      return;
    }
    /*System.Collections.Generic.List<PendingParam>$$AddRange*/ func_0x0242f5dc(lVar3,*(undefined8 *)(param_1 + 0x40),uRam0000000003d3b7f0);
    lVar3 = *(long *)(param_1 + 0x40);
    puStack_28 = unaff_x30;
    if (lVar3 != 0) goto System_Collections_Generic_List_PendingParam___Clear;
  }
  lVar3 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen;
  if ((bRam0000000003eb5319 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5319 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  *(undefined1 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0xffffffff;
  lVar3 = *(long *)(lVar3 + 0x40);
  if (lVar3 == 0) {
    auVar4 = func_0x00f78af4();
    if ((bRam0000000003eb5315 & 1) == 0) {
      func_0x00f78a20(0x3d22c88);
      bRam0000000003eb5315 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar4._8_4_) ||
       (*(int *)(auVar4._0_8_ + 0x24) == -1)) {
      *(int *)(auVar4._0_8_ + 0x24) = auVar4._8_4_;
    }
    return;
  }
  unaff_x20 = 0x3eb5000;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  unaff_x19 = param_1;
  unaff_x29 = puVar1;
System_Collections_Generic_List_PendingParam___Clear:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_28;
  if (0 < *(int *)(lVar3 + 0x18)) {
    /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
    *(undefined4 *)(lVar3 + 0x18) = 0;
  }
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  return;
}



// ============================================================
// RVA: 0x15ca23c | Atlas.Gameplay.Kart.KartFEAnimator.PlayHomeScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb5319 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5319 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar3._8_4_) ||
     (*(int *)(auVar3._0_8_ + 0x24) == -1)) {
    *(int *)(auVar3._0_8_ + 0x24) = auVar3._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15ca2b4 | Atlas.Gameplay.Kart.KartFEAnimator.PlayCharacterSelectScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayCharacterSelectScreen(long param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb531a & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb531a = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = *(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0xc);
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar1) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



// ============================================================
// RVA: 0x15ca328 | Atlas.Gameplay.Kart.KartFEAnimator.PlayCharacterConfirmed
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayCharacterConfirmed(void)

{
  return;
}



// ============================================================
// RVA: 0x15ca32c | Atlas.Gameplay.Kart.KartFEAnimator.PlayKartSelectScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayKartSelectScreen(long param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb531b & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb531b = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = *(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x10);
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar1) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



// ============================================================
// RVA: 0x15ca3a0 | Atlas.Gameplay.Kart.KartFEAnimator.PlayPostEventScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayPostEventScreen(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb531c & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb531c = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x14);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar3._8_4_) ||
     (*(int *)(auVar3._0_8_ + 0x24) == -1)) {
    *(int *)(auVar3._0_8_ + 0x24) = auVar3._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15ca418 | Atlas.Gameplay.Kart.KartFEAnimator.TriggerFEGainXP
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(long param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb531d & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb531d = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = *(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x18);
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar1) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



// ============================================================
// RVA: 0x15ca48c | Atlas.Gameplay.Kart.KartFEAnimator.TriggerFERankUp
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__TriggerFERankUp(long param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb531e & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb531e = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = *(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x1c);
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar1) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



// ============================================================
// RVA: 0x15ca500 | Atlas.Gameplay.Kart.KartFEAnimator.PlayRewardScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayRewardScreen(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb531f & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb531f = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x20);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar3._8_4_) ||
     (*(int *)(auVar3._0_8_ + 0x24) == -1)) {
    *(int *)(auVar3._0_8_ + 0x24) = auVar3._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15ca578 | Atlas.Gameplay.Kart.KartFEAnimator.TriggerFEUnlockCharacter
// ============================================================

ulong Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEUnlockCharacter(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint extraout_w8;
  int *piVar12;
  undefined4 *puVar13;
  long lVar14;
  long extraout_x9;
  uint uVar15;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar16;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long lVar17;
  code *pcVar18;
  undefined8 ***unaff_x29;
  undefined8 ***pppuVar19;
  code *unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5320 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5320 = 1;
  }
  if ((param_2 & 1) == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    piVar12 = (int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x24);
  }
  else {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    piVar12 = (int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x28);
  }
  if (param_1 != 0) {
    iVar3 = *piVar12;
    puVar7 = (undefined8 *)register0x00000008;
code_r0x015c9ff4:
    *(undefined8 *)((long)puVar7 + -0x30) = unaff_x22;
    *(ulong *)((long)puVar7 + -0x28) = unaff_x21;
    *(undefined8 *)((long)puVar7 + -0x20) = unaff_x20;
    *(long *)((long)puVar7 + -0x18) = unaff_x19;
    *(undefined8 ****)((long)puVar7 + -0x10) = unaff_x29;
    *(code **)((long)puVar7 + -8) = unaff_x30;
    if ((bRam0000000003eb5315 & 1) == 0) {
      func_0x00f78a20(0x3d22c88);
      bRam0000000003eb5315 = 1;
    }
    uVar9 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
      uVar9 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
    }
    /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 = uVar9;
    if ((*(int *)(*(long *)(uVar9 + 0xb8) + 0x4c) != iVar3) || (*(int *)(param_1 + 0x24) == -1)) {
      *(int *)(param_1 + 0x24) = iVar3;
    }
    return uVar9;
  }
  auVar20 = func_0x00f78af4();
  lVar14 = auVar20._0_8_;
  ppuVar2 = &puStack_60;
  puStack_60 = (undefined8 **)0x3eb5000;
  uStack_58 = 0x3d22c88;
  puStack_38 = &Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen;
  uStack_50 = param_2;
  uStack_48 = param_1;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5321 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5321 = 1;
  }
  uVar15 = auVar20._8_4_;
  if (uVar15 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = (undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x30);
  }
  else {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = (undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x2c);
  }
  Atlas_Gameplay_Kart_KartFEAnimator__Play(lVar14,*puVar13,uVar15 ^ 1);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = (ulong)*(uint *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x34);
  if ((bRam0000000003eb5317 & 1) == 0) {
    func_0x00f78a20(0x3d3b7e8);
    bRam0000000003eb5317 = 1;
  }
  puVar7 = puStack_60;
  uVar4 = *(ulong *)(lVar14 + 0x30);
  if (uVar4 == 0) {
    uVar4 = func_0x00f78af4();
    pcStack_68 = Atlas_Gameplay_Kart_KartFEAnimator__ReapplyAnimationAndTriggers;
    uStack_80 = auVar20._8_8_;
    uStack_78 = uVar9;
    ppuStack_70 = &puStack_40;
    if ((bRam0000000003eb5318 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f0);
      func_0x00f78a20(0x3d3b7f8);
      func_0x00f78a20(0x3d3b808);
      bRam0000000003eb5318 = 1;
    }
    if (*(int *)(uVar4 + 0x20) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__Play(uVar4,*(undefined4 *)(uVar4 + 0x38),0);
    }
    if (*(int *)(uVar4 + 0x24) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger(uVar4,*(undefined4 *)(uVar4 + 0x3c));
    }
    uVar9 = *(ulong *)(uVar4 + 0x30);
    if (uVar9 != 0) {
      if (*(int *)(uVar9 + 0x18) != 0) {
        return uVar9;
      }
      /*System.Collections.Generic.List<PendingParam>$$AddRange*/ func_0x0242f5dc(uVar9,*(undefined8 *)(uVar4 + 0x40),uRam0000000003d3b7f0);
      uVar16 = *(ulong *)(uVar4 + 0x40);
      uVar9 = uStack_78;
      uVar8 = uStack_80;
      pppuVar19 = (undefined8 ***)ppuStack_70;
      pcVar18 = pcStack_68;
      if (uVar16 != 0) goto System_Collections_Generic_List_PendingParam___Clear;
    }
    unaff_x19 = func_0x00f78af4();
    puVar7 = &uStack_b0;
    uStack_b0 = 0x3eb5000;
    pcStack_88 = Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen;
    lStack_a8 = lVar14;
    ppuStack_90 = &ppuStack_70;
    if ((bRam0000000003eb5319 & 1) == 0) {
      func_0x00f78a20(0x3d22c88);
      bRam0000000003eb5319 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = **(uint **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8);
    unaff_x21 = (ulong)uVar15;
    unaff_x29 = &ppuStack_90;
    unaff_x20 = 0;
    unaff_x22 = 0x3eb5000;
    if ((bRam0000000003eb5314 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f8);
      bRam0000000003eb5314 = 1;
    }
    *(uint *)(unaff_x19 + 0x20) = uVar15;
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
    *(undefined4 *)(unaff_x19 + 0x3c) = 0xffffffff;
    uVar16 = *(ulong *)(unaff_x19 + 0x40);
    if (uVar16 != 0) {
      ppuVar2 = (undefined8 **)&uStack_80;
      uVar9 = uVar4;
      uVar8 = 0x3eb5000;
      pppuVar19 = (undefined8 ***)ppuStack_90;
      pcVar18 = pcStack_88;
System_Collections_Generic_List_PendingParam___Clear:
      *(ulong *)((long)ppuVar2 + -0x20) = uVar8;
      *(ulong *)((long)ppuVar2 + -0x18) = uVar9;
      *(undefined8 ****)((long)ppuVar2 + -0x10) = pppuVar19;
      *(code **)((long)ppuVar2 + -8) = pcVar18;
      uVar9 = uVar16;
      if (0 < *(int *)(uVar16 + 0x18)) {
        uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar16 + 0x10),0,*(int *)(uVar16 + 0x18),0);
        *(undefined4 *)(uVar16 + 0x18) = 0;
      }
      *(int *)(uVar16 + 0x1c) = *(int *)(uVar16 + 0x1c) + 1;
      return uVar9;
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger;
    auVar21 = func_0x00f78af4();
    iVar3 = auVar21._8_4_;
    param_1 = auVar21._0_8_;
    goto code_r0x015c9ff4;
  }
  uVar8 = 0x100000000;
  if (uVar15 == 0) {
    uVar8 = 0;
  }
  uVar8 = uVar8 | uVar9;
  puVar11 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  lVar14 = *(long *)(uVar4 + 0x10);
  uVar9 = uStack_48;
  uVar16 = uStack_50;
  uVar1 = uStack_58;
  if (lVar14 == 0) {
code_r0x0242f3cc:
    uVar8 = uVar1;
    uVar4 = uVar9;
    uVar5 = func_0x00f78af4();
    lVar14 = extraout_x9;
    uVar15 = extraout_w8;
code_r0x0242f3d0:
    *(uint *)(uVar4 + 0x18) = uVar15 + 1;
  }
  else {
    uVar16 = 1;
    uVar15 = *(uint *)(uVar4 + 0x18);
    uVar5 = uVar4;
    if (uVar15 != *(uint *)(lVar14 + 0x18)) goto code_r0x0242f3d0;
    puVar11 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b7e8 + 0x18) + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar11)(uVar4,uVar15 + 1);
    lVar14 = *(long *)(uVar4 + 0x10);
    uVar15 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar15 + 1;
    uVar9 = uVar4;
    uVar1 = uVar8;
    if (lVar14 == 0) goto code_r0x0242f3cc;
  }
  if (uVar15 < *(uint *)(lVar14 + 0x18)) {
    lVar14 = lVar14 + (long)(int)uVar15 * 0xc;
    *(ulong *)(lVar14 + 0x20) = uVar8;
    *(int *)(lVar14 + 0x28) = (int)uVar16;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar6,0);
  plVar10 = auVar20._8_8_;
  lVar14 = auVar20._0_8_;
  ppuStack_90 = (undefined8 **)puVar7;
  pcStack_68 = (code *)&System_Collections_Generic_List_PendingParam___System_Collections_IList_Add;
  pcStack_88 = (code *)uVar8;
  uStack_80 = uVar16;
  uStack_78 = uVar4;
  ppuStack_70 = &puStack_40;
  (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(plVar10,0x14);
  if (lVar14 != 0) {
    pcVar18 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
    lVar17 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    if (plVar10 != (long *)0x0) {
      if (*(long *)(*plVar10 + 0x40) == *(long *)(lVar17 + 0x40)) {
        puVar7 = (undefined8 *)func_0x00f78ae4(plVar10);
        (*pcVar18)(lVar14,*puVar7,*(undefined4 *)(puVar7 + 1),
                   *(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar14);
        return (ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar10,lVar17);
      goto code_r0x0242f5c4;
    }
  }
  func_0x00f78af4();
code_r0x0242f5c4:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x242f5c8);
  (*pcVar18)();
}



// ============================================================
// RVA: 0x15ca620 | Atlas.Gameplay.Kart.KartFEAnimator.PlayCeremonyScreen
// ============================================================

ulong Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint extraout_w8;
  undefined4 *puVar11;
  long lVar12;
  long extraout_x9;
  uint uVar13;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long lVar14;
  code *pcVar15;
  undefined8 ***pppuVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  code *pcStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 **ppuStack_40;
  code *pcStack_38;
  
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb5321 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5321 = 1;
  }
  uVar13 = (uint)param_2;
  if (uVar13 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = (undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x30);
  }
  else {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = (undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x2c);
  }
  Atlas_Gameplay_Kart_KartFEAnimator__Play(param_1,*puVar11,uVar13 ^ 1);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = (ulong)*(uint *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x34);
  if ((bRam0000000003eb5317 & 1) == 0) {
    func_0x00f78a20(0x3d3b7e8);
    bRam0000000003eb5317 = 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 == 0) {
    uVar4 = func_0x00f78af4();
    pcStack_38 = Atlas_Gameplay_Kart_KartFEAnimator__ReapplyAnimationAndTriggers;
    uStack_50 = param_2;
    uStack_48 = uVar8;
    ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5318 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f0);
      func_0x00f78a20(0x3d3b7f8);
      func_0x00f78a20(0x3d3b808);
      bRam0000000003eb5318 = 1;
    }
    if (*(int *)(uVar4 + 0x20) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__Play(uVar4,*(undefined4 *)(uVar4 + 0x38),0);
    }
    if (*(int *)(uVar4 + 0x24) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger(uVar4,*(undefined4 *)(uVar4 + 0x3c));
    }
    uVar8 = *(ulong *)(uVar4 + 0x30);
    if (uVar8 != 0) {
      if (*(int *)(uVar8 + 0x18) != 0) {
        return uVar8;
      }
      /*System.Collections.Generic.List<PendingParam>$$AddRange*/ func_0x0242f5dc(uVar8,*(undefined8 *)(uVar4 + 0x40),uRam0000000003d3b7f0);
      uVar7 = *(ulong *)(uVar4 + 0x40);
      uVar8 = uStack_48;
      uVar5 = uStack_50;
      pppuVar16 = (undefined8 ***)ppuStack_40;
      pcStack_58 = pcStack_38;
      if (uVar7 != 0) goto System_Collections_Generic_List_PendingParam___Clear;
    }
    lVar12 = func_0x00f78af4();
    pcStack_58 = Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen;
    if ((bRam0000000003eb5319 & 1) == 0) {
      func_0x00f78a20(0x3d22c88);
      bRam0000000003eb5319 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8);
    if ((bRam0000000003eb5314 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f8);
      bRam0000000003eb5314 = 1;
    }
    *(undefined4 *)(lVar12 + 0x20) = uVar1;
    *(undefined1 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x3c) = 0xffffffff;
    uVar7 = *(ulong *)(lVar12 + 0x40);
    if (uVar7 == 0) {
      auVar18 = func_0x00f78af4();
      if ((bRam0000000003eb5315 & 1) == 0) {
        func_0x00f78a20(0x3d22c88);
        bRam0000000003eb5315 = 1;
      }
      uVar8 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar8 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
      }
      /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 = uVar8;
      if ((*(int *)(*(long *)(uVar8 + 0xb8) + 0x4c) != auVar18._8_4_) ||
         (*(int *)(auVar18._0_8_ + 0x24) == -1)) {
        *(int *)(auVar18._0_8_ + 0x24) = auVar18._8_4_;
      }
      return uVar8;
    }
    puVar2 = &uStack_50;
    uVar8 = uVar4;
    uVar5 = 0x3eb5000;
    pppuVar16 = &ppuStack_40;
System_Collections_Generic_List_PendingParam___Clear:
    *(undefined8 *)((long)puVar2 + -0x20) = uVar5;
    *(ulong *)((long)puVar2 + -0x18) = uVar8;
    *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar16;
    *(code **)((long)puVar2 + -8) = pcStack_58;
    uVar8 = uVar7;
    if (0 < *(int *)(uVar7 + 0x18)) {
      uVar8 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar7 + 0x10),0,*(int *)(uVar7 + 0x18),0);
      *(undefined4 *)(uVar7 + 0x18) = 0;
    }
    *(int *)(uVar7 + 0x1c) = *(int *)(uVar7 + 0x1c) + 1;
    return uVar8;
  }
  uVar7 = 0x100000000;
  if (uVar13 == 0) {
    uVar7 = 0;
  }
  uVar7 = uVar7 | uVar8;
  puVar10 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  lVar12 = *(long *)(uVar4 + 0x10);
  if (lVar12 == 0) {
code_r0x0242f3cc:
    uVar7 = unaff_x21;
    uVar4 = unaff_x19;
    uVar8 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar13 = extraout_w8;
code_r0x0242f3d0:
    *(uint *)(uVar4 + 0x18) = uVar13 + 1;
  }
  else {
    unaff_x20 = 1;
    uVar13 = *(uint *)(uVar4 + 0x18);
    uVar8 = uVar4;
    if (uVar13 != *(uint *)(lVar12 + 0x18)) goto code_r0x0242f3d0;
    puVar10 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b7e8 + 0x18) + 0xc0) + 0x60);
    uVar8 = (*(code *)*puVar10)(uVar4,uVar13 + 1);
    lVar12 = *(long *)(uVar4 + 0x10);
    uVar13 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar13 + 1;
    unaff_x19 = uVar4;
    unaff_x21 = uVar7;
    if (lVar12 == 0) goto code_r0x0242f3cc;
  }
  if (uVar13 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)uVar13 * 0xc;
    *(ulong *)(lVar12 + 0x20) = uVar7;
    *(int *)(lVar12 + 0x28) = (int)unaff_x20;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar8;
  }
  uVar5 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar5,0);
  plVar9 = auVar17._8_8_;
  lVar12 = auVar17._0_8_;
  pcStack_38 = (code *)&System_Collections_Generic_List_PendingParam___System_Collections_IList_Add;
  uStack_50 = unaff_x20;
  uStack_48 = uVar4;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar9,0x14);
  if (lVar12 != 0) {
    pcVar15 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
    lVar14 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) == *(long *)(lVar14 + 0x40)) {
        puVar6 = (undefined8 *)func_0x00f78ae4(plVar9);
        (*pcVar15)(lVar12,*puVar6,*(undefined4 *)(puVar6 + 1),
                   *(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar12);
        return (ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar9,lVar14);
      goto code_r0x0242f5c4;
    }
  }
  func_0x00f78af4();
code_r0x0242f5c4:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x242f5c8);
  (*pcVar15)();
}



// ============================================================
// RVA: 0x15ca6f4 | Atlas.Gameplay.Kart.KartFEAnimator.PlayCeremonyScreen
// ============================================================

ulong Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint extraout_w8;
  uint uVar10;
  long lVar11;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  ulong unaff_x21;
  long lVar13;
  code *pcVar14;
  undefined8 ****ppppuVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  code *pcStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb5322 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5322 = 1;
  }
  if (param_2 == 2) {
    /*Atlas.Gameplay.Kart.KartFEAnimator$$PlayerLoserCeremonyScreen*/ func_0x015ca84c(param_1);
    if ((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) {
      iVar3 = *(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0);
      uVar12 = 1;
      goto joined_r0x015ca7cc;
    }
    uVar12 = 1;
  }
  else {
    if (param_2 == 1) {
      /*Atlas.Gameplay.Kart.KartFEAnimator$$PlayWinnerCeremonyScreen*/ func_0x015ca7d4();
    }
    else {
      /*Atlas.Gameplay.Kart.KartFEAnimator$$PlayerNeutralCerremonyScreen*/ func_0x015ca8c4();
    }
    if ((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar3 = *(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0);
joined_r0x015ca7cc:
      if (iVar3 == 0) {
        func_0x00f78ad0();
      }
    }
  }
  uVar7 = (ulong)*(uint *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8) + 0x34);
  if ((bRam0000000003eb5317 & 1) == 0) {
    func_0x00f78a20(0x3d3b7e8);
    bRam0000000003eb5317 = 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 == 0) {
    uVar4 = func_0x00f78af4();
    pcStack_38 = Atlas_Gameplay_Kart_KartFEAnimator__ReapplyAnimationAndTriggers;
    uStack_50 = uVar12;
    uStack_48 = uVar7;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5318 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f0);
      func_0x00f78a20(0x3d3b7f8);
      func_0x00f78a20(0x3d3b808);
      bRam0000000003eb5318 = 1;
    }
    if (*(int *)(uVar4 + 0x20) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__Play(uVar4,*(undefined4 *)(uVar4 + 0x38),0);
    }
    if (*(int *)(uVar4 + 0x24) == -1) {
      Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger(uVar4,*(undefined4 *)(uVar4 + 0x3c));
    }
    uVar7 = *(ulong *)(uVar4 + 0x30);
    if (uVar7 != 0) {
      if (*(int *)(uVar7 + 0x18) != 0) {
        return uVar7;
      }
      /*System.Collections.Generic.List<PendingParam>$$AddRange*/ func_0x0242f5dc(uVar7,*(undefined8 *)(uVar4 + 0x40),uRam0000000003d3b7f0);
      uVar6 = *(ulong *)(uVar4 + 0x40);
      uVar7 = uStack_48;
      uVar12 = uStack_50;
      ppppuVar15 = (undefined8 ****)pppuStack_40;
      pcStack_58 = pcStack_38;
      if (uVar6 != 0) goto System_Collections_Generic_List_PendingParam___Clear;
    }
    lVar11 = func_0x00f78af4();
    pcStack_58 = Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen;
    if ((bRam0000000003eb5319 & 1) == 0) {
      func_0x00f78a20(0x3d22c88);
      bRam0000000003eb5319 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xb8);
    if ((bRam0000000003eb5314 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f8);
      bRam0000000003eb5314 = 1;
    }
    *(undefined4 *)(lVar11 + 0x20) = uVar1;
    *(undefined1 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x3c) = 0xffffffff;
    uVar6 = *(ulong *)(lVar11 + 0x40);
    if (uVar6 == 0) {
      auVar17 = func_0x00f78af4();
      if ((bRam0000000003eb5315 & 1) == 0) {
        func_0x00f78a20(0x3d22c88);
        bRam0000000003eb5315 = 1;
      }
      uVar7 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar7 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88;
      }
      /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ uRam0000000003d22c88 = uVar7;
      if ((*(int *)(*(long *)(uVar7 + 0xb8) + 0x4c) != auVar17._8_4_) ||
         (*(int *)(auVar17._0_8_ + 0x24) == -1)) {
        *(int *)(auVar17._0_8_ + 0x24) = auVar17._8_4_;
      }
      return uVar7;
    }
    puVar2 = &uStack_50;
    uVar7 = uVar4;
    uVar12 = 0x3eb5000;
    ppppuVar15 = &pppuStack_40;
System_Collections_Generic_List_PendingParam___Clear:
    *(undefined8 *)((long)puVar2 + -0x20) = uVar12;
    *(ulong *)((long)puVar2 + -0x18) = uVar7;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar15;
    *(code **)((long)puVar2 + -8) = pcStack_58;
    uVar7 = uVar6;
    if (0 < *(int *)(uVar6 + 0x18)) {
      uVar7 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),0,*(int *)(uVar6 + 0x18),0);
      *(undefined4 *)(uVar6 + 0x18) = 0;
    }
    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
    return uVar7;
  }
  uVar6 = 0x100000000;
  if ((int)uVar12 == 0) {
    uVar6 = 0;
  }
  uVar6 = uVar6 | uVar7;
  puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  lVar11 = *(long *)(uVar4 + 0x10);
  if (lVar11 == 0) {
code_r0x0242f3cc:
    uVar6 = unaff_x21;
    uVar4 = unaff_x19;
    uVar7 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x0242f3d0:
    *(uint *)(uVar4 + 0x18) = uVar10 + 1;
  }
  else {
    unaff_x20 = 1;
    uVar10 = *(uint *)(uVar4 + 0x18);
    uVar7 = uVar4;
    if (uVar10 != *(uint *)(lVar11 + 0x18)) goto code_r0x0242f3d0;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b7e8 + 0x18) + 0xc0) + 0x60);
    uVar7 = (*(code *)*puVar9)(uVar4,uVar10 + 1);
    lVar11 = *(long *)(uVar4 + 0x10);
    uVar10 = *(uint *)(uVar4 + 0x18);
    *(uint *)(uVar4 + 0x18) = uVar10 + 1;
    unaff_x19 = uVar4;
    unaff_x21 = uVar6;
    if (lVar11 == 0) goto code_r0x0242f3cc;
  }
  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + (long)(int)uVar10 * 0xc;
    *(ulong *)(lVar11 + 0x20) = uVar6;
    *(int *)(lVar11 + 0x28) = (int)unaff_x20;
    *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
    return uVar7;
  }
  uVar12 = func_0x00f78b24();
  auVar16 = func_0x00f78ac0(uVar12,0);
  plVar8 = auVar16._8_8_;
  lVar11 = auVar16._0_8_;
  pcStack_38 = (code *)&System_Collections_Generic_List_PendingParam___System_Collections_IList_Add;
  uStack_50 = unaff_x20;
  uStack_48 = uVar4;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar8,0x14);
  if (lVar11 != 0) {
    pcVar14 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar13 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    if (plVar8 != (long *)0x0) {
      if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar13 + 0x40)) {
        puVar5 = (undefined8 *)func_0x00f78ae4(plVar8);
        (*pcVar14)(lVar11,*puVar5,*(undefined4 *)(puVar5 + 1),
                   *(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar11);
        return (ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar8,lVar13);
      goto code_r0x0242f5c4;
    }
  }
  func_0x00f78af4();
code_r0x0242f5c4:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x242f5c8);
  (*pcVar14)();
}



// ============================================================
// RVA: 0x15ca7d4 | Atlas.Gameplay.Kart.KartFEAnimator.PlayWinnerCeremonyScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayWinnerCeremonyScreen(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb5328 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5328 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x30);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar3._8_4_) ||
     (*(int *)(auVar3._0_8_ + 0x24) == -1)) {
    *(int *)(auVar3._0_8_ + 0x24) = auVar3._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15ca84c | Atlas.Gameplay.Kart.KartFEAnimator.PlayerLoserCeremonyScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayerLoserCeremonyScreen(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb5327 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5327 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x2c);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar3._8_4_) ||
     (*(int *)(auVar3._0_8_ + 0x24) == -1)) {
    *(int *)(auVar3._0_8_ + 0x24) = auVar3._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15ca8c4 | Atlas.Gameplay.Kart.KartFEAnimator.PlayerNeutralCerremonyScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayerNeutralCerremonyScreen(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb5329 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5329 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar3._8_4_) ||
     (*(int *)(auVar3._0_8_ + 0x24) == -1)) {
    *(int *)(auVar3._0_8_ + 0x24) = auVar3._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15ca93c | Atlas.Gameplay.Kart.KartFEAnimator.TriggerFEPodiumStart
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEPodiumStart(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((bRam0000000003eb5323 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5323 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Atlas_Gameplay_Kart_KartFEAnimator__SetInt
            (param_1,*(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x3c),param_2);
  iVar1 = *(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x38);
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar1) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



// ============================================================
// RVA: 0x15ca9cc | Atlas.Gameplay.Kart.KartFEAnimator.TriggerFELobbyScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__TriggerFELobbyScreen(long param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  code *unaff_x30;
  undefined1 auVar6 [12];
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5324 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5324 = 1;
  }
  if ((param_2 & 1) == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    piVar5 = (int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    piVar5 = (int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x40);
  }
  if (param_1 == 0) {
    unaff_x19 = func_0x00f78af4();
    puVar2 = &uStack_60;
    uStack_60 = 0x3eb5000;
    uStack_58 = 0x3d22c88;
    puStack_38 = &Atlas_Gameplay_Kart_KartFEAnimator__PlayCreditsScreen;
    uStack_50 = param_2;
    lStack_48 = param_1;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5325 & 1) == 0) {
      func_0x00f78a20(0x3d22c88);
      bRam0000000003eb5325 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = *(uint *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x48);
    unaff_x21 = (ulong)uVar1;
    unaff_x29 = &puStack_40;
    unaff_x20 = 0;
    unaff_x22 = 0x3eb5000;
    if ((bRam0000000003eb5314 & 1) == 0) {
      func_0x00f78a20(0x3d3b7f8);
      bRam0000000003eb5314 = 1;
    }
    *(uint *)(unaff_x19 + 0x20) = uVar1;
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
    *(undefined4 *)(unaff_x19 + 0x3c) = 0xffffffff;
    lVar3 = *(long *)(unaff_x19 + 0x40);
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
        *(undefined4 *)(lVar3 + 0x18) = 0;
      }
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      return;
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger;
    auVar6 = func_0x00f78af4();
    iVar4 = auVar6._8_4_;
    param_1 = auVar6._0_8_;
  }
  else {
    iVar4 = *piVar5;
    puVar2 = (undefined8 *)register0x00000008;
  }
  *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar2 + -0x20) = unaff_x20;
  *(long *)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)puVar2 + -0x10) = unaff_x29;
  *(code **)((long)puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar4) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = iVar4;
  }
  return;
}



// ============================================================
// RVA: 0x15caa74 | Atlas.Gameplay.Kart.KartFEAnimator.PlayCreditsScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__PlayCreditsScreen(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb5325 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5325 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x48);
  if ((bRam0000000003eb5314 & 1) == 0) {
    func_0x00f78a20(0x3d3b7f8);
    bRam0000000003eb5314 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar3._8_4_) ||
     (*(int *)(auVar3._0_8_ + 0x24) == -1)) {
    *(int *)(auVar3._0_8_ + 0x24) = auVar3._8_4_;
  }
  return;
}



// ============================================================
// RVA: 0x15caaec | Atlas.Gameplay.Kart.KartFEAnimator.ExitFEScreen
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(long param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb5326 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5326 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = *(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c);
  if ((bRam0000000003eb5315 & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    bRam0000000003eb5315 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar1) ||
     (*(int *)(param_1 + 0x24) == -1)) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



// ============================================================
// RVA: 0x15cab60 | Atlas.Gameplay.Kart.KartFEAnimator..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_KartFEAnimator___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb532a & 1) == 0) {
    func_0x00f78a20(0x3d3b7e0);
    func_0x00f78a20(0x3d1dca0);
    bRam0000000003eb532a = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<PendingParam>_TypeInfo*/ uRam0000000003d1dca0);
  /*System.Collections.Generic.List<PendingParam>$$.ctor*/ func_0x0242e750(uVar1,8,uRam0000000003d3b7e0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<PendingParam>_TypeInfo*/ uRam0000000003d1dca0);
  /*System.Collections.Generic.List<PendingParam>$$.ctor*/ func_0x0242e750(uVar1,8,uRam0000000003d3b7e0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x15cac10 | Atlas.Gameplay.Kart.KartFEAnimator..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartFEAnimator___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb532b & 1) == 0) {
    func_0x00f78a20(0x3d22c88);
    func_0x00f78a20(0x3d6ca08);
    func_0x00f78a20(0x3d713d8);
    func_0x00f78a20(0x3d6c9e8);
    func_0x00f78a20(0x3d6b2f8);
    func_0x00f78a20(0x3d6a838);
    func_0x00f78a20(0x3d71f88);
    func_0x00f78a20(0x3d6ca30);
    func_0x00f78a20(0x3d72600);
    func_0x00f78a20(0x3d6c9d8);
    func_0x00f78a20(0x3d6ca28);
    func_0x00f78a20(0x3d6c9f0);
    func_0x00f78a20(0x3d6d848);
    func_0x00f78a20(0x3d6c9f8);
    func_0x00f78a20(0x3d6ca10);
    func_0x00f78a20(0x3d6ca20);
    func_0x00f78a20(0x3d6ca18);
    func_0x00f78a20(0x3d6ca00);
    func_0x00f78a20(0x3d6c9e0);
    func_0x00f78a20(0x3d6a830);
    func_0x00f78a20(0x3d725f8);
    bRam0000000003eb532b = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('HomeScreen')*/ uRam0000000003d6d848,0);
  **(undefined4 **)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Select_Char_Reaction')*/ uRam0000000003d725f8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Select_Kart_Reaction')*/ uRam0000000003d72600,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_CharSelect')*/ uRam0000000003d6c9d8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0xc) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_KartSelect')*/ uRam0000000003d6c9f8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('PostEventScreen')*/ uRam0000000003d713d8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x14) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_GainXP')*/ uRam0000000003d6c9e8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x18) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_RankUp')*/ uRam0000000003d6ca20,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x1c) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('RewardScreen')*/ uRam0000000003d71f88,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x20) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_UnlockCharacter')*/ uRam0000000003d6ca28,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x24) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_UnlockSkin')*/ uRam0000000003d6ca30,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x28) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('CeremonyScreen')*/ uRam0000000003d6a830,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x2c) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Ceremony_Waving')*/ uRam0000000003d6a838,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x30) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_Losers')*/ uRam0000000003d6ca10,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x34) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_PodiumStart')*/ uRam0000000003d6ca18,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x38) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_Index')*/ uRam0000000003d6c9f0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x3c) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_LobbyScreen_Player')*/ uRam0000000003d6ca08,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x40) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_LobbyScreen_NPC')*/ uRam0000000003d6ca00,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x44) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('CreditsScreen')*/ uRam0000000003d6b2f8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x48) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('FE_Exit')*/ uRam0000000003d6c9e0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) = uVar1;
  return;
}



