// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.KartIndicatorBehaviour

// ============================================================
// RVA: 0x15cc620 | Atlas.UI.KartIndicatorBehaviour.get_Player
// ============================================================

undefined8 Atlas_UI_KartIndicatorBehaviour__get_Player(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15cc628 | Atlas.UI.KartIndicatorBehaviour.get_CanUpdateTarget
// ============================================================

bool Atlas_UI_KartIndicatorBehaviour__get_CanUpdateTarget(long param_1)

{
  return *(float *)(param_1 + 0x88) <= 0.0;
}



// ============================================================
// RVA: 0x15cc638 | Atlas.UI.KartIndicatorBehaviour.Start
// ============================================================

void Atlas_UI_KartIndicatorBehaviour__Start(long param_1)

{
  *(float *)(param_1 + 0x60) = 1.0 / *(float *)(param_1 + 0x50);
  return;
}



// ============================================================
// RVA: 0x15cc64c | Atlas.UI.KartIndicatorBehaviour.SetActive
// ============================================================

/* WARNING: Possible PIC construction at 0x015cc70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cc710) */
/* WARNING: Removing unreachable block (ram,0x015cc724) */
/* WARNING: Removing unreachable block (ram,0x015cc72c) */
/* WARNING: Removing unreachable block (ram,0x015cc730) */
/* WARNING: Removing unreachable block (ram,0x015cc740) */
/* WARNING: Removing unreachable block (ram,0x015cc798) */
/* WARNING: Removing unreachable block (ram,0x015cc748) */
/* WARNING: Removing unreachable block (ram,0x015cc788) */
/* WARNING: Removing unreachable block (ram,0x015cc76c) */
/* WARNING: Removing unreachable block (ram,0x01598280) */
/* WARNING: Removing unreachable block (ram,0x015982cc) */
/* WARNING: Removing unreachable block (ram,0x015982f0) */
/* WARNING: Removing unreachable block (ram,0x01598304) */
/* WARNING: Removing unreachable block (ram,0x0159829c) */
/* WARNING: Removing unreachable block (ram,0x031afccc) */
/* WARNING: Removing unreachable block (ram,0x031afcf0) */
/* WARNING: Removing unreachable block (ram,0x031afce4) */
/* WARNING: Removing unreachable block (ram,0x015cc89c) */
/* WARNING: Removing unreachable block (ram,0x015cc8a4) */
/* WARNING: Removing unreachable block (ram,0x015cc8a8) */
/* WARNING: Removing unreachable block (ram,0x015cc8ac) */
/* WARNING: Removing unreachable block (ram,0x015cc8c0) */
/* WARNING: Removing unreachable block (ram,0x015cc8c8) */
/* WARNING: Removing unreachable block (ram,0x015cc8cc) */
/* WARNING: Removing unreachable block (ram,0x015cc8e0) */
/* WARNING: Removing unreachable block (ram,0x015cc934) */
/* WARNING: Removing unreachable block (ram,0x015cc8e8) */
/* WARNING: Removing unreachable block (ram,0x03254d08) */
/* WARNING: Removing unreachable block (ram,0x03254d2c) */
/* WARNING: Removing unreachable block (ram,0x03254d40) */

undefined1  [16] Atlas_UI_KartIndicatorBehaviour__SetActive(long param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 **ppuVar9;
  undefined *puVar10;
  uint uVar11;
  float fVar12;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar13 [16];
  undefined8 unaff_d8;
  float fVar14;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_2 != 0) {
    lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
    if (lVar3 == 0) goto LAB_015cc6c4;
    uVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      if (lVar3 == 0) goto LAB_015cc6c4;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,1,0);
    }
  }
  if (param_1 != 0) {
    uVar11 = 0x3f800000;
    if (param_2 == 0) {
      uVar11 = 0;
    }
    *(uint *)(param_1 + 0x68) = uVar11;
    *(undefined4 *)(param_1 + 100) = 0;
    return ZEXT416(uVar11);
  }
LAB_015cc6c4:
  auVar15 = func_0x00f78af4();
  uVar7 = auVar15._0_8_;
  puStack_28 = &Atlas_UI_KartIndicatorBehaviour__SetKartName;
  ppuVar9 = &puStack_30;
  uVar8 = 0x3eb5000;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5330 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5330 = 1;
  }
  puVar10 = &UNK_015cc710;
  puVar1 = &stack0xffffffffffffffb0;
  while( true ) {
    lVar3 = auVar15._0_8_;
    *(undefined8 *)(puVar1 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x28) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x20) = uVar7;
    *(long *)(puVar1 + -0x18) = auVar15._8_8_;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    plVar5 = *(long **)(lVar3 + 0x28);
    if (plVar5 != (long *)0x0) {
      fVar12 = (float)(**(code **)(*plVar5 + 0x678))(plVar5,*(undefined8 *)(*plVar5 + 0x680));
      fVar14 = *(float *)(lVar3 + 0x5c);
      iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(0);
      if (fVar12 <= fVar14 && iVar2 == 0) {
        fVar14 = fVar12;
      }
      iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar14,0);
      fVar12 = 0.0;
      if (iVar2 == 0 && 0.0 <= fVar14) {
        fVar12 = fVar14;
      }
      return ZEXT416((uint)fVar12);
    }
    lVar6 = func_0x00f78af4();
    auVar15._8_8_ = lVar6;
    auVar15._0_8_ = lVar6;
    *(undefined8 *)(puVar1 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x68) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x60) = 0x3d23990;
    *(undefined8 *)(puVar1 + -0x58) = uVar8;
    *(undefined8 *)(puVar1 + -0x50) = uVar7;
    *(long *)(puVar1 + -0x48) = lVar3;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_KartIndicatorBehaviour__UpdatePointsRootPosition;
    ppuVar9 = (undefined1 **)(puVar1 + -0x40);
    uVar8 = 0x3d23990;
    if ((bRam0000000003eb5331 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5331 = 1;
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((uVar4 & 1) != 0) break;
    puVar10 = &UNK_015cc89c;
    puVar1 = puVar1 + -0x70;
  }
  auVar13._4_4_ = extraout_var;
  auVar13._0_4_ = extraout_s0;
  auVar13._8_8_ = extraout_var_00;
  return auVar13;
}



// ============================================================
// RVA: 0x15cc6c8 | Atlas.UI.KartIndicatorBehaviour.SetKartName
// ============================================================

/* WARNING: Possible PIC construction at 0x015cc70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cc898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cc710) */
/* WARNING: Removing unreachable block (ram,0x015cc724) */
/* WARNING: Removing unreachable block (ram,0x015cc72c) */
/* WARNING: Removing unreachable block (ram,0x015cc730) */
/* WARNING: Removing unreachable block (ram,0x015cc740) */
/* WARNING: Removing unreachable block (ram,0x015cc798) */
/* WARNING: Removing unreachable block (ram,0x015cc748) */
/* WARNING: Removing unreachable block (ram,0x015cc788) */
/* WARNING: Removing unreachable block (ram,0x015cc76c) */
/* WARNING: Removing unreachable block (ram,0x01598280) */
/* WARNING: Removing unreachable block (ram,0x015982cc) */
/* WARNING: Removing unreachable block (ram,0x015982f0) */
/* WARNING: Removing unreachable block (ram,0x01598304) */
/* WARNING: Removing unreachable block (ram,0x0159829c) */
/* WARNING: Removing unreachable block (ram,0x031afccc) */
/* WARNING: Removing unreachable block (ram,0x031afcf0) */
/* WARNING: Removing unreachable block (ram,0x031afce4) */
/* WARNING: Removing unreachable block (ram,0x015cc89c) */
/* WARNING: Removing unreachable block (ram,0x015cc8a4) */
/* WARNING: Removing unreachable block (ram,0x015cc8a8) */
/* WARNING: Removing unreachable block (ram,0x015cc8ac) */
/* WARNING: Removing unreachable block (ram,0x015cc8c0) */
/* WARNING: Removing unreachable block (ram,0x015cc8c8) */
/* WARNING: Removing unreachable block (ram,0x015cc8cc) */
/* WARNING: Removing unreachable block (ram,0x015cc8e0) */
/* WARNING: Removing unreachable block (ram,0x015cc934) */
/* WARNING: Removing unreachable block (ram,0x015cc8e8) */
/* WARNING: Removing unreachable block (ram,0x03254d08) */
/* WARNING: Removing unreachable block (ram,0x03254d2c) */
/* WARNING: Removing unreachable block (ram,0x03254d40) */

undefined1  [16] Atlas_UI_KartIndicatorBehaviour__SetKartName(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  float fVar9;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar10 [16];
  undefined8 unaff_d8;
  float fVar11;
  undefined8 unaff_d9;
  
  puVar7 = &stack0xfffffffffffffff0;
  uVar6 = 0x3eb5000;
  if ((bRam0000000003eb5330 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5330 = 1;
  }
  puVar8 = (undefined *)0x15cc710;
  puVar1 = &stack0xffffffffffffffd0;
  lVar3 = param_1;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x28) = unaff_d8;
    *(long *)(puVar1 + -0x20) = param_1;
    *(long *)(puVar1 + -0x18) = param_2;
    *(undefined1 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    plVar4 = *(long **)(lVar3 + 0x28);
    if (plVar4 != (long *)0x0) {
      fVar9 = (float)(**(code **)(*plVar4 + 0x678))(plVar4,*(undefined8 *)(*plVar4 + 0x680));
      fVar11 = *(float *)(lVar3 + 0x5c);
      iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(0);
      if (fVar9 <= fVar11 && iVar2 == 0) {
        fVar11 = fVar9;
      }
      iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar11,0);
      fVar9 = 0.0;
      if (iVar2 == 0 && 0.0 <= fVar11) {
        fVar9 = fVar11;
      }
      return ZEXT416((uint)fVar9);
    }
    param_2 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x68) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x60) = 0x3d23990;
    *(undefined8 *)(puVar1 + -0x58) = uVar6;
    *(long *)(puVar1 + -0x50) = param_1;
    *(long *)(puVar1 + -0x48) = lVar3;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_KartIndicatorBehaviour__UpdatePointsRootPosition;
    puVar7 = puVar1 + -0x40;
    uVar6 = 0x3d23990;
    if ((bRam0000000003eb5331 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5331 = 1;
    }
    param_1 = *(long *)(param_2 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_1,0,0);
    if ((uVar5 & 1) != 0) break;
    puVar8 = &UNK_015cc89c;
    puVar1 = puVar1 + -0x70;
    lVar3 = param_2;
  }
  auVar10._4_4_ = extraout_var;
  auVar10._0_4_ = extraout_s0;
  auVar10._8_8_ = extraout_var_00;
  return auVar10;
}



// ============================================================
// RVA: 0x15cc79c | Atlas.UI.KartIndicatorBehaviour.GetKartNameWidth
// ============================================================

undefined1  [16] Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_var;
  undefined4 uVar10;
  undefined4 extraout_var_00;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar7 [16];
  undefined4 extraout_var_01;
  undefined8 extraout_var_05;
  undefined1 auVar8 [16];
  undefined4 extraout_var_02;
  undefined8 extraout_var_06;
  undefined1 auVar9 [16];
  float fVar11;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    fVar6 = (float)(**(code **)(*plVar2 + 0x678))(plVar2,*(undefined8 *)(*plVar2 + 0x680));
    fVar11 = *(float *)(param_1 + 0x5c);
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(0);
    if (fVar6 <= fVar11 && iVar1 == 0) {
      fVar11 = fVar6;
    }
    iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar11,0);
    fVar6 = 0.0;
    if (iVar1 == 0 && 0.0 <= fVar11) {
      fVar6 = fVar11;
    }
    return ZEXT416((uint)fVar6);
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5331 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5331 = 1;
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
  fVar11 = extraout_s0;
  uVar10 = extraout_var;
  uVar5 = extraout_var_03;
  if ((uVar4 & 1) == 0) {
    fVar6 = (float)Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(lVar3);
    fVar11 = *(float *)(lVar3 + 0x94);
    uVar10 = 0;
    uVar5 = 0;
    if (fVar11 != fVar6) {
      *(float *)(lVar3 + 0x94) = fVar6;
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      fVar11 = extraout_s0_00;
      uVar10 = extraout_var_00;
      uVar5 = extraout_var_04;
      if (iVar1 != 0) {
        lVar3 = *(long *)(lVar3 + 0x38);
        if (lVar3 != 0) {
          /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar3,0);
          if (pcRam0000000003ec07e0 == (code *)0x0) {
            pcRam0000000003ec07e0 =
                 (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                         ,0);
          }
          (*pcRam0000000003ec07e0)(lVar3,&stack0xffffffffffffffa8);
          auVar9._4_4_ = extraout_var_02;
          auVar9._0_4_ = extraout_s0_02;
          auVar9._8_8_ = extraout_var_06;
          return auVar9;
        }
        lVar3 = func_0x00f78af4();
        *(undefined4 *)(lVar3 + 0x88) = extraout_s0_01;
        auVar8._4_4_ = extraout_var_01;
        auVar8._0_4_ = extraout_s0_01;
        auVar8._8_8_ = extraout_var_05;
        return auVar8;
      }
    }
  }
  auVar7._4_4_ = uVar10;
  auVar7._0_4_ = fVar11;
  auVar7._8_8_ = uVar5;
  return auVar7;
}



// ============================================================
// RVA: 0x15cc824 | Atlas.UI.KartIndicatorBehaviour.UpdatePointsRootPosition
// ============================================================

void Atlas_UI_KartIndicatorBehaviour__UpdatePointsRootPosition(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb5331 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5331 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if (((uVar2 & 1) == 0) &&
     (fVar5 = (float)Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(param_1),
     *(float *)(param_1 + 0x94) != fVar5)) {
    *(float *)(param_1 + 0x94) = fVar5;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
    if (iVar1 != 0) {
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 != 0) {
        /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar4,0);
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                       ,0);
        }
        (*pcRam0000000003ec07e0)(lVar4,&stack0xffffffffffffffd8);
        return;
      }
      lVar4 = func_0x00f78af4();
      *(undefined4 *)(lVar4 + 0x88) = extraout_s0;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x15cc938 | Atlas.UI.KartIndicatorBehaviour.SetTrackTime
// ============================================================

void Atlas_UI_KartIndicatorBehaviour__SetTrackTime(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x88) = param_1;
  return;
}



// ============================================================
// RVA: 0x15cc940 | Atlas.UI.KartIndicatorBehaviour.SetTarget
// ============================================================

void Atlas_UI_KartIndicatorBehaviour__SetTarget
               (undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (*(long *)(param_2 + 0x80) != param_3) {
    if (param_3 == 0) {
      *(undefined4 *)(param_2 + 0x88) = 0xbf800000;
      *(undefined4 *)(param_2 + 100) = 0;
      *(undefined4 *)(param_2 + 0x68) = 0;
      /*Atlas.UI.KartIndicatorBehaviour$$SetBattlePointsVisible*/ func_0x015cc9e0(param_2,0);
      *(undefined4 *)(param_2 + 0x8c) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_2 + 0x88) = param_1;
      uVar1 = *(undefined4 *)(param_3 + 0xb8);
      *(undefined8 *)(param_2 + 0x6c) = *(undefined8 *)(param_3 + 0xb0);
      *(undefined4 *)(param_2 + 0x74) = uVar1;
      *(undefined4 *)(param_2 + 0x78) = 0;
      Atlas_UI_KartIndicatorBehaviour__SetKartName(param_2,*(undefined8 *)(param_3 + 0xa0));
      Atlas_UI_KartIndicatorBehaviour__SetActive(param_2,1);
      /*Atlas.UI.KartIndicatorBehaviour$$SetBattlePointsVisible*/ func_0x015cc9e0(param_2,param_4);
    }
    *(long *)(param_2 + 0x80) = param_3;
  }
  return;
}



// ============================================================
// RVA: 0x15cc9e0 | Atlas.UI.KartIndicatorBehaviour.SetBattlePointsVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x015ccf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ccda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ccda4) */
/* WARNING: Removing unreachable block (ram,0x015ccdac) */
/* WARNING: Removing unreachable block (ram,0x015ccdcc) */
/* WARNING: Removing unreachable block (ram,0x015ccddc) */
/* WARNING: Removing unreachable block (ram,0x015ccde8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_KartIndicatorBehaviour__SetBattlePointsVisible
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
                float *param_6,long param_7)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar9;
  long *plVar10;
  int iVar12;
  undefined8 unaff_x19;
  float *unaff_x20;
  float *pfVar13;
  ulong unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar15;
  undefined *unaff_x30;
  undefined *puVar16;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  float *pfStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  float *pfStack_f0;
  long lStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [12];
  float afStack_c4 [5];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  long lVar8;
  float *pfVar11;
  
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = unaff_x19;
  if ((bRam0000000003eb5334 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5334 = 1;
  }
  uVar14 = *(undefined8 *)((long)param_6 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  *(char *)((long)param_6 + 0x90) = (char)param_7;
  if ((*(long *)((long)param_6 + 0x38) != 0) &&
     (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)((long)param_6 + 0x38),0), lVar5 != 0)) {
    uVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar5,0);
    if ((int)uVar4 == (int)param_7) {
      return uVar4;
    }
    if ((*(long *)((long)param_6 + 0x38) != 0) &&
       (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)((long)param_6 + 0x38),0),
       puVar2 = (ulong *)register0x00000008, lVar5 != 0)) goto code_r0x0322ef1c;
  }
  lVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_KartIndicatorBehaviour__SetScreenPos;
  uVar22 = (ulong)(uint)param_5;
  uVar4 = (ulong)(uint)param_4;
  fVar19 = param_2;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5332 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5332 = 1;
  }
  Atlas_UI_KartIndicatorBehaviour__SetActive(lVar5,0.0 < param_3);
  uVar14 = *(undefined8 *)(lVar5 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  lVar7 = *(long *)(lVar5 + 0x18);
  if (lVar7 == 0) {
    auVar25 = func_0x00f78af4();
    afStack_c4[0] = auVar25._8_4_;
    lVar7 = auVar25._0_8_;
    afStack_c4[1] = 1.2355906e-36;
    afStack_c4[2] = 0.0;
    afStack_c4[3] = 1.2355906e-36;
    afStack_c4[4] = 0.0;
    puStack_98 = &Atlas_UI_KartIndicatorBehaviour__SetBattlePoint;
    uStack_b0 = uVar14;
    lStack_a8 = lVar5;
    pppppppuStack_a0 = &pppppppuStack_40;
    if ((bRam0000000003eb5333 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5333 = 1;
    }
    uVar14 = *(undefined8 *)(lVar7 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar12 = 0;
    uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    pfVar13 = *(float **)(lVar7 + 0x30);
    uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(afStack_c4,0);
    if (pfVar13 != (float *)0x0) {
      uVar4 = (**(code **)(*(long *)pfVar13 + 0x558))
                        (pfVar13,uVar14,*(undefined8 *)(*(long *)pfVar13 + 0x560));
      *(float *)(lVar7 + 0x8c) = afStack_c4[0];
      return uVar4;
    }
    auVar24 = func_0x00f78af4();
    pfVar11 = auVar24._8_8_;
    lVar8 = auVar24._0_8_;
    puVar2 = (ulong *)auStack_d0;
    uStack_100 = 0x3d23990;
    uStack_f8 = 0x3d23990;
    puStack_d8 = &Atlas_UI_KartIndicatorBehaviour__SetCrownIconVisible;
    uStack_110 = uVar22;
    uStack_108 = uVar4;
    pfStack_f0 = pfVar13;
    lStack_e8 = lVar7;
    pppppppuStack_e0 = &pppppppuStack_a0;
    if ((bRam0000000003eb5335 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5335 = 1;
    }
    if (iVar12 == 0) {
      unaff_x21 = *(ulong *)(lVar8 + 0x48);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      uVar6 = unaff_x21;
      if ((*(long *)(lVar8 + 0x48) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x48),0), lVar5 != 0)) {
        uVar9 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar5,0);
        if ((int)uVar9 == auVar24._8_4_) {
          return uVar9;
        }
        if ((*(long *)(lVar8 + 0x48) != 0) &&
           (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x48),0), lVar5 != 0)) {
          unaff_x30 = &UNK_015ccda4;
          puVar2 = &uStack_110;
          unaff_x20 = pfVar11;
          unaff_x22 = 0x3eb5000;
          unaff_x29 = &pppppppuStack_e0;
          auVar1 = auVar24;
          goto code_r0x0322ef1c;
        }
      }
    }
    else {
      uVar6 = *(ulong *)(lVar8 + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      if ((*(long *)(lVar8 + 0x40) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x40),0), lVar5 != 0)) {
        uVar9 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar5,0);
        if ((int)uVar9 == auVar24._8_4_) {
          return uVar9;
        }
        if (*(long *)(lVar8 + 0x40) != 0) {
          lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x40),0);
          auVar1._8_8_ = pfVar11;
          auVar1._0_8_ = lStack_e8;
          unaff_x20 = pfStack_f0;
          unaff_x21 = uStack_f8;
          unaff_x22 = uStack_100;
          unaff_x29 = pppppppuStack_e0;
          unaff_x30 = puStack_d8;
          if (lVar5 != 0) goto code_r0x0322ef1c;
        }
      }
    }
    unaff_x21 = uVar6;
    uVar6 = func_0x00f78af4();
    puStack_118 = &Atlas_UI_KartIndicatorBehaviour__Update;
    fVar20 = *(float *)(uVar6 + 0x88);
    uStack_150 = (ulong)(uint)param_2;
    uStack_148 = (ulong)(uint)extraout_s0_01;
    uStack_140 = uVar22;
    uStack_138 = uVar4;
    pppppppuStack_120 = &pppppppuStack_e0;
    if (0.0 < fVar20) {
      pfStack_130 = pfVar11;
      lStack_128 = lVar8;
      fVar17 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      auVar24._8_8_ = pfStack_130;
      auVar24._0_8_ = lStack_128;
      *(float *)(uVar6 + 0x88) = fVar20 - fVar17;
    }
    pfStack_130 = auVar24._8_8_;
    lStack_128 = auVar24._0_8_;
    unaff_x20 = (float *)(uVar6 + 0x78);
    uVar4 = /*System.Single$$Equals*/ func_0x029ba868(*(undefined4 *)(uVar6 + 0x68),unaff_x20,0);
    if ((uVar4 & 1) == 0) {
      fVar17 = *(float *)(uVar6 + 0x68);
      fVar21 = *(float *)(uVar6 + 0x78);
      fVar23 = *(float *)(uVar6 + 0x60);
      fVar20 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      fVar19 = -(fVar23 * fVar20);
      if (fVar21 <= fVar17) {
        fVar19 = fVar23 * fVar20;
      }
      uVar18 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar21 + fVar19,0);
      *(undefined4 *)(uVar6 + 0x78) = uVar18;
      plVar10 = *(long **)(uVar6 + 0x20);
      if (plVar10 == (long *)0x0) goto code_r0x015ccf54;
      (**(code **)(*plVar10 + 0x2a8))
                (*(undefined4 *)(uVar6 + 0x6c),*(undefined4 *)(uVar6 + 0x70),
                 *(undefined4 *)(uVar6 + 0x74),uVar18,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
      plVar10 = *(long **)(uVar6 + 0x28);
      if (plVar10 == (long *)0x0) goto code_r0x015ccf54;
      fVar19 = *(float *)(uVar6 + 0x70);
      (**(code **)(*plVar10 + 0x2a8))
                (*(undefined4 *)(uVar6 + 0x6c),fVar19,*(undefined4 *)(uVar6 + 0x74),
                 *(undefined4 *)(uVar6 + 0x78),plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
    }
    if (*unaff_x20 <= 0.0) {
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar6,0);
      if (lVar5 != 0) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar6;
        unaff_x30 = &UNK_015ccf14;
        puVar2 = &uStack_150;
        unaff_x22 = 0x3eb5000;
        unaff_x29 = &pppppppuStack_120;
code_r0x0322ef1c:
        *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
        *(ulong *)((long)puVar2 + -0x28) = unaff_x21;
        *(float **)((long)puVar2 + -0x20) = unaff_x20;
        *(long *)((long)puVar2 + -0x18) = auVar1._0_8_;
        *(undefined8 ********)((long)puVar2 + -0x10) = unaff_x29;
        *(undefined **)((long)puVar2 + -8) = unaff_x30;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000003ebf4c0)(lVar5,auVar1._8_8_);
        return uVar4;
      }
code_r0x015ccf54:
      uVar4 = func_0x00f78af4();
      *(undefined4 *)(uVar4 + 0x8c) = 0xffffffff;
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
    if (((*(long *)(uVar6 + 0x80) != 0) && (*(char *)(uVar6 + 0x90) != '\0')) &&
       (*(int *)(uVar6 + 0x8c) != *(int *)(*(long *)(uVar6 + 0x80) + 0x78))) {
      /*Atlas.UI.KartIndicatorBehaviour$$SetBattlePoint*/ func_0x015ccba0(uVar6);
    }
    uStack_150 = uStack_140;
    uStack_148 = uStack_138;
    uStack_140 = 0x3eb5000;
    uStack_138 = unaff_x21;
    if ((bRam0000000003eb5331 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5331 = 1;
    }
    uVar14 = *(undefined8 *)(uVar6 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,0,0);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(uVar6),
       *(float *)(uVar6 + 0x94) != extraout_s0)) {
      *(float *)(uVar6 + 0x94) = extraout_s0;
      uVar14 = *(undefined8 *)(uVar6 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
      if ((int)uVar4 != 0) {
        lVar7 = *(long *)(uVar6 + 0x38);
        if (lVar7 == 0) {
          uVar4 = func_0x00f78af4();
          *(undefined4 *)(uVar4 + 0x88) = extraout_s0_00;
          return uVar4;
        }
        param_4 = *(float *)(uVar6 + 0x54);
        /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar7,0);
        param_4 = extraout_s0 * 0.5 + param_4;
        puVar3 = &uStack_110;
        param_7 = lStack_128;
        param_6 = pfStack_130;
        pppppppuVar15 = pppppppuStack_120;
        puVar16 = puStack_118;
        goto UnityEngine_RectTransform__set_anchoredPosition;
      }
    }
    return uVar4;
  }
  fVar19 = param_2 * param_5;
  param_4 = extraout_s0_01 * param_4;
  puVar3 = (ulong *)&stack0xffffffffffffffd0;
  pppppppuVar15 = pppppppuStack_40;
  puVar16 = puStack_38;
UnityEngine_RectTransform__set_anchoredPosition:
  *(float **)((long)puVar3 + -0x20) = param_6;
  *(long *)((long)puVar3 + -0x18) = param_7;
  *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar15;
  *(undefined **)((long)puVar3 + -8) = puVar16;
  *(float *)((long)puVar3 + -0x28) = param_4;
  *(float *)((long)puVar3 + -0x24) = fVar19;
  if (pcRam0000000003ec07e0 == (code *)0x0) {
    pcRam0000000003ec07e0 =
         (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                 ,0);
  }
  uVar4 = (*pcRam0000000003ec07e0)(lVar7,(undefined1 *)((long)puVar3 + -0x28));
  return uVar4;
}



// ============================================================
// RVA: 0x15ccab8 | Atlas.UI.KartIndicatorBehaviour.SetScreenPos
// ============================================================

/* WARNING: Possible PIC construction at 0x015ccf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ccda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ccda4) */
/* WARNING: Removing unreachable block (ram,0x015ccdac) */
/* WARNING: Removing unreachable block (ram,0x015ccdcc) */
/* WARNING: Removing unreachable block (ram,0x015ccddc) */
/* WARNING: Removing unreachable block (ram,0x015ccde8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_KartIndicatorBehaviour__SetScreenPos
                (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6)

{
  float *pfVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  
  uVar20 = (ulong)(uint)param_5;
  uVar8 = (ulong)(uint)param_4;
  fVar17 = param_2;
  if ((bRam0000000003eb5332 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5332 = 1;
  }
  Atlas_UI_KartIndicatorBehaviour__SetActive(param_6,0.0 < param_3);
  uVar11 = *(undefined8 *)(param_6 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = *(long *)(param_6 + 0x18);
  if (lVar4 == 0) {
    auVar23 = func_0x00f78af4();
    uStack_94 = auVar23._8_4_;
    uVar3 = auVar23._0_8_;
    puStack_68 = &Atlas_UI_KartIndicatorBehaviour__SetBattlePoint;
    ppppppuStack_70 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5333 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5333 = 1;
    }
    uVar11 = *(undefined8 *)(uVar3 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar10 = 0;
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    plVar12 = *(long **)(uVar3 + 0x30);
    uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_94,0);
    if (plVar12 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar12 + 0x558))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x560));
      *(undefined4 *)(uVar3 + 0x8c) = uStack_94;
      return uVar8;
    }
    auVar22 = func_0x00f78af4();
    uVar9 = auVar22._8_8_;
    lVar4 = auVar22._0_8_;
    puVar2 = &uStack_e0;
    puStack_a8 = &Atlas_UI_KartIndicatorBehaviour__SetCrownIconVisible;
    pppppppuVar13 = &pppppppuStack_b0;
    uVar11 = 0x3eb5000;
    uStack_e0 = uVar20;
    uStack_d8 = uVar8;
    pppppppuStack_b0 = &ppppppuStack_70;
    if ((bRam0000000003eb5335 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5335 = 1;
    }
    if (iVar10 == 0) {
      uVar5 = *(ulong *)(lVar4 + 0x48);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if ((*(long *)(lVar4 + 0x48) != 0) &&
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x48),0), lVar7 != 0)) {
        uVar3 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar7,0);
        if ((int)uVar3 == auVar22._8_4_) {
          return uVar3;
        }
        if ((*(long *)(lVar4 + 0x48) != 0) &&
           (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x48),0), lVar7 != 0)) {
          puVar14 = &UNK_015ccda4;
          goto code_r0x0322ef1c;
        }
      }
    }
    else {
      uVar5 = *(ulong *)(lVar4 + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      if ((*(long *)(lVar4 + 0x40) != 0) &&
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x40),0), lVar7 != 0)) {
        uVar6 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar7,0);
        if ((int)uVar6 == auVar22._8_4_) {
          return uVar6;
        }
        if ((*(long *)(lVar4 + 0x40) != 0) &&
           (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x40),0), lVar7 != 0)) {
          uVar5 = 0x3d23990;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar3;
          puVar2 = (ulong *)auStack_a0;
          uVar11 = unaff_x22;
          pppppppuVar13 = pppppppuStack_b0;
          puVar14 = puStack_a8;
          goto code_r0x0322ef1c;
        }
      }
    }
    lVar7 = func_0x00f78af4();
    puVar2 = &uStack_120;
    puStack_e8 = &Atlas_UI_KartIndicatorBehaviour__Update;
    fVar18 = *(float *)(lVar7 + 0x88);
    uStack_120 = (ulong)(uint)param_2;
    uStack_118 = (ulong)(uint)param_1;
    uStack_110 = uVar20;
    uStack_108 = uVar8;
    pppppppuStack_f0 = pppppppuVar13;
    if (0.0 < fVar18) {
      uStack_100 = uVar9;
      lStack_f8 = lVar4;
      fVar15 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      auVar22._8_8_ = uStack_100;
      auVar22._0_8_ = lStack_f8;
      *(float *)(lVar7 + 0x88) = fVar18 - fVar15;
    }
    uStack_100 = auVar22._8_8_;
    lStack_f8 = auVar22._0_8_;
    pfVar1 = (float *)(lVar7 + 0x78);
    auVar22._8_8_ = pfVar1;
    auVar22._0_8_ = lVar7;
    uVar8 = /*System.Single$$Equals*/ func_0x029ba868(*(undefined4 *)(lVar7 + 0x68),pfVar1,0);
    if ((uVar8 & 1) == 0) {
      fVar15 = *(float *)(lVar7 + 0x68);
      fVar19 = *(float *)(lVar7 + 0x78);
      fVar21 = *(float *)(lVar7 + 0x60);
      fVar18 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      fVar17 = -(fVar21 * fVar18);
      if (fVar19 <= fVar15) {
        fVar17 = fVar21 * fVar18;
      }
      uVar16 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar19 + fVar17,0);
      *(undefined4 *)(lVar7 + 0x78) = uVar16;
      plVar12 = *(long **)(lVar7 + 0x20);
      if (plVar12 == (long *)0x0) goto code_r0x015ccf54;
      (**(code **)(*plVar12 + 0x2a8))
                (*(undefined4 *)(lVar7 + 0x6c),*(undefined4 *)(lVar7 + 0x70),
                 *(undefined4 *)(lVar7 + 0x74),uVar16,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
      plVar12 = *(long **)(lVar7 + 0x28);
      if (plVar12 == (long *)0x0) goto code_r0x015ccf54;
      fVar17 = *(float *)(lVar7 + 0x70);
      (**(code **)(*plVar12 + 0x2a8))
                (*(undefined4 *)(lVar7 + 0x6c),fVar17,*(undefined4 *)(lVar7 + 0x74),
                 *(undefined4 *)(lVar7 + 0x78),plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
    }
    if (*pfVar1 <= 0.0) {
      lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
      if (lVar7 != 0) {
        uVar9 = 0;
        puVar14 = &UNK_015ccf14;
        pppppppuVar13 = &pppppppuStack_f0;
code_r0x0322ef1c:
        *(undefined8 *)((long)puVar2 + -0x30) = uVar11;
        *(ulong *)((long)puVar2 + -0x28) = uVar5;
        *(long *)((long)puVar2 + -0x20) = auVar22._8_8_;
        *(long *)((long)puVar2 + -0x18) = auVar22._0_8_;
        *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar13;
        *(undefined **)((long)puVar2 + -8) = puVar14;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*pcRam0000000003ebf4c0)(lVar7,uVar9);
        return uVar8;
      }
code_r0x015ccf54:
      uVar8 = func_0x00f78af4();
      *(undefined4 *)(uVar8 + 0x8c) = 0xffffffff;
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
    if (((*(long *)(lVar7 + 0x80) != 0) && (*(char *)(lVar7 + 0x90) != '\0')) &&
       (*(int *)(lVar7 + 0x8c) != *(int *)(*(long *)(lVar7 + 0x80) + 0x78))) {
      /*Atlas.UI.KartIndicatorBehaviour$$SetBattlePoint*/ func_0x015ccba0(lVar7);
    }
    uStack_120 = uStack_110;
    uStack_118 = uStack_108;
    uStack_110 = 0x3eb5000;
    uStack_108 = uVar5;
    if ((bRam0000000003eb5331 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5331 = 1;
    }
    uVar11 = *(undefined8 *)(lVar7 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
    if (((uVar8 & 1) == 0) &&
       (uVar8 = Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(lVar7),
       *(float *)(lVar7 + 0x94) != extraout_s0)) {
      *(float *)(lVar7 + 0x94) = extraout_s0;
      uVar11 = *(undefined8 *)(lVar7 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
      if ((int)uVar8 != 0) {
        lVar4 = *(long *)(lVar7 + 0x38);
        if (lVar4 == 0) {
          uVar8 = func_0x00f78af4();
          *(undefined4 *)(uVar8 + 0x88) = extraout_s0_00;
          return uVar8;
        }
        param_1 = *(float *)(lVar7 + 0x54);
        /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar4,0);
        param_1 = extraout_s0 * 0.5 + param_1;
        register0x00000008 = (BADSPACEBASE *)&uStack_e0;
        unaff_x19 = lStack_f8;
        unaff_x20 = uStack_100;
        unaff_x29 = pppppppuStack_f0;
        unaff_x30 = puStack_e8;
        goto UnityEngine_RectTransform__set_anchoredPosition;
      }
    }
    return uVar8;
  }
  fVar17 = param_2 * param_5;
  param_1 = param_1 * param_4;
UnityEngine_RectTransform__set_anchoredPosition:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(float *)((long)register0x00000008 + -0x28) = param_1;
  *(float *)((long)register0x00000008 + -0x24) = fVar17;
  if (pcRam0000000003ec07e0 == (code *)0x0) {
    pcRam0000000003ec07e0 =
         (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                 ,0);
  }
  uVar8 = (*pcRam0000000003ec07e0)(lVar4,(undefined1 *)((long)register0x00000008 + -0x28));
  return uVar8;
}



// ============================================================
// RVA: 0x15ccba0 | Atlas.UI.KartIndicatorBehaviour.SetBattlePoint
// ============================================================

/* WARNING: Possible PIC construction at 0x015ccf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ccda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ccda4) */
/* WARNING: Removing unreachable block (ram,0x015ccdac) */
/* WARNING: Removing unreachable block (ram,0x015ccdcc) */
/* WARNING: Removing unreachable block (ram,0x015ccddc) */
/* WARNING: Removing unreachable block (ram,0x015ccde8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_KartIndicatorBehaviour__SetBattlePoint(long param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  if ((bRam0000000003eb5333 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5333 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = 0;
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  plVar8 = *(long **)(param_1 + 0x30);
  uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  if (plVar8 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
    *(undefined4 *)(param_1 + 0x8c) = uStack_34;
    return uVar2;
  }
  auVar19 = func_0x00f78af4();
  pfVar5 = auVar19._8_8_;
  lVar4 = auVar19._0_8_;
  puVar1 = &stack0xffffffffffffff80;
  puStack_48 = &Atlas_UI_KartIndicatorBehaviour__SetCrownIconVisible;
  pppppppuVar11 = &pppppppuStack_50;
  uVar7 = 0x3eb5000;
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5335 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5335 = 1;
  }
  if (iVar6 == 0) {
    uVar10 = *(undefined8 *)(lVar4 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((*(long *)(lVar4 + 0x48) != 0) &&
       (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x48),0), lVar3 != 0)) {
      uVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
      if ((int)uVar2 == auVar19._8_4_) {
        return uVar2;
      }
      if ((*(long *)(lVar4 + 0x48) != 0) &&
         (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x48),0), lVar3 != 0)) {
        puVar12 = &UNK_015ccda4;
        pfVar9 = pfVar5;
        goto code_r0x0322ef1c;
      }
    }
  }
  else {
    uVar10 = *(undefined8 *)(lVar4 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((*(long *)(lVar4 + 0x40) != 0) &&
       (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x40),0), lVar3 != 0)) {
      uVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
      if ((int)uVar2 == auVar19._8_4_) {
        return uVar2;
      }
      if ((*(long *)(lVar4 + 0x40) != 0) &&
         (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x40),0), lVar3 != 0)) {
        uVar10 = 0x3d23990;
        puVar1 = auStack_40;
        lVar4 = param_1;
        pfVar9 = (float *)0x0;
        uVar7 = unaff_x22;
        pppppppuVar11 = pppppppuStack_50;
        puVar12 = puStack_48;
        goto code_r0x0322ef1c;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffff40;
  puStack_88 = &Atlas_UI_KartIndicatorBehaviour__Update;
  fVar15 = *(float *)(lVar4 + 0x88);
  pppppppuStack_90 = pppppppuVar11;
  if (0.0 < fVar15) {
    fVar13 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    *(float *)(lVar4 + 0x88) = fVar15 - fVar13;
  }
  pfVar9 = (float *)(lVar4 + 0x78);
  uVar2 = /*System.Single$$Equals*/ func_0x029ba868(*(undefined4 *)(lVar4 + 0x68),pfVar9,0);
  if ((uVar2 & 1) == 0) {
    fVar16 = *(float *)(lVar4 + 0x68);
    fVar17 = *(float *)(lVar4 + 0x78);
    fVar18 = *(float *)(lVar4 + 0x60);
    fVar13 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar15 = -(fVar18 * fVar13);
    if (fVar17 <= fVar16) {
      fVar15 = fVar18 * fVar13;
    }
    uVar14 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar17 + fVar15,0);
    *(undefined4 *)(lVar4 + 0x78) = uVar14;
    plVar8 = *(long **)(lVar4 + 0x20);
    if (plVar8 == (long *)0x0) goto code_r0x015ccf54;
    (**(code **)(*plVar8 + 0x2a8))
              (*(undefined4 *)(lVar4 + 0x6c),*(undefined4 *)(lVar4 + 0x70),
               *(undefined4 *)(lVar4 + 0x74),uVar14,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    plVar8 = *(long **)(lVar4 + 0x28);
    if (plVar8 == (long *)0x0) goto code_r0x015ccf54;
    (**(code **)(*plVar8 + 0x2a8))
              (*(undefined4 *)(lVar4 + 0x6c),*(undefined4 *)(lVar4 + 0x70),
               *(undefined4 *)(lVar4 + 0x74),*(undefined4 *)(lVar4 + 0x78),plVar8,
               *(undefined8 *)(*plVar8 + 0x2b0));
  }
  if (0.0 < *pfVar9) {
    if (((*(long *)(lVar4 + 0x80) != 0) && (*(char *)(lVar4 + 0x90) != '\0')) &&
       (*(int *)(lVar4 + 0x8c) != *(int *)(*(long *)(lVar4 + 0x80) + 0x78))) {
      Atlas_UI_KartIndicatorBehaviour__SetBattlePoint(lVar4);
    }
    if ((bRam0000000003eb5331 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5331 = 1;
    }
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(lVar4),
       *(float *)(lVar4 + 0x94) != extraout_s0)) {
      *(float *)(lVar4 + 0x94) = extraout_s0;
      uVar7 = *(undefined8 *)(lVar4 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
      if ((int)uVar2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x38);
        if (lVar4 == 0) {
          uVar2 = func_0x00f78af4();
          *(undefined4 *)(uVar2 + 0x88) = extraout_s0_00;
          return uVar2;
        }
        /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar4,0);
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                       ,0);
        }
        uVar2 = (*pcRam0000000003ec07e0)(lVar4,&stack0xffffffffffffff58);
        return uVar2;
      }
    }
    return uVar2;
  }
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
  if (lVar3 != 0) {
    pfVar5 = (float *)0x0;
    puVar12 = &UNK_015ccf14;
    pppppppuVar11 = &pppppppuStack_90;
code_r0x0322ef1c:
    *(undefined8 *)(puVar1 + -0x30) = uVar7;
    *(undefined8 *)(puVar1 + -0x28) = uVar10;
    *(float **)(puVar1 + -0x20) = pfVar9;
    *(long *)(puVar1 + -0x18) = lVar4;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebf4c0)(lVar3,pfVar5);
    return uVar2;
  }
code_r0x015ccf54:
  uVar2 = func_0x00f78af4();
  *(undefined4 *)(uVar2 + 0x8c) = 0xffffffff;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15ccc60 | Atlas.UI.KartIndicatorBehaviour.SetCrownIconVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x015ccf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ccda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ccda4) */
/* WARNING: Removing unreachable block (ram,0x015ccdac) */
/* WARNING: Removing unreachable block (ram,0x015ccdcc) */
/* WARNING: Removing unreachable block (ram,0x015ccddc) */
/* WARNING: Removing unreachable block (ram,0x015ccde8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_KartIndicatorBehaviour__SetCrownIconVisible(long param_1,float *param_2,int param_3)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  float *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar5;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  pppppppuVar1 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5335 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5335 = 1;
  }
  if (param_3 == 0) {
    unaff_x21 = *(undefined8 *)(param_1 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar5 = unaff_x21;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x48),0), lVar3 != 0)) {
      uVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
      if ((int)uVar2 == (int)param_2) {
        return uVar2;
      }
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x48),0), lVar3 != 0)) {
        unaff_x30 = &UNK_015ccda4;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_1;
        unaff_x20 = param_2;
        unaff_x22 = 0x3eb5000;
        unaff_x29 = pppppppuVar1;
        goto code_r0x0322ef1c;
      }
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x40),0), lVar3 != 0)) {
      uVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
      if ((int)uVar2 == (int)param_2) {
        return uVar2;
      }
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x40),0), lVar3 != 0)) goto code_r0x0322ef1c;
    }
  }
  unaff_x21 = uVar5;
  unaff_x19 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_KartIndicatorBehaviour__Update;
  unaff_x29 = &pppppppuStack_50;
  fVar8 = *(float *)(unaff_x19 + 0x88);
  pppppppuStack_50 = pppppppuVar1;
  if (0.0 < fVar8) {
    fVar6 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    *(float *)(unaff_x19 + 0x88) = fVar8 - fVar6;
  }
  unaff_x20 = (float *)(unaff_x19 + 0x78);
  uVar2 = /*System.Single$$Equals*/ func_0x029ba868(*(undefined4 *)(unaff_x19 + 0x68),unaff_x20,0);
  if ((uVar2 & 1) == 0) {
    fVar9 = *(float *)(unaff_x19 + 0x68);
    fVar10 = *(float *)(unaff_x19 + 0x78);
    fVar11 = *(float *)(unaff_x19 + 0x60);
    fVar6 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar8 = -(fVar11 * fVar6);
    if (fVar10 <= fVar9) {
      fVar8 = fVar11 * fVar6;
    }
    uVar7 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar10 + fVar8,0);
    *(undefined4 *)(unaff_x19 + 0x78) = uVar7;
    plVar4 = *(long **)(unaff_x19 + 0x20);
    if (plVar4 == (long *)0x0) goto code_r0x015ccf54;
    (**(code **)(*plVar4 + 0x2a8))
              (*(undefined4 *)(unaff_x19 + 0x6c),*(undefined4 *)(unaff_x19 + 0x70),
               *(undefined4 *)(unaff_x19 + 0x74),uVar7,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
    plVar4 = *(long **)(unaff_x19 + 0x28);
    if (plVar4 == (long *)0x0) goto code_r0x015ccf54;
    (**(code **)(*plVar4 + 0x2a8))
              (*(undefined4 *)(unaff_x19 + 0x6c),*(undefined4 *)(unaff_x19 + 0x70),
               *(undefined4 *)(unaff_x19 + 0x74),*(undefined4 *)(unaff_x19 + 0x78),plVar4,
               *(undefined8 *)(*plVar4 + 0x2b0));
  }
  if (0.0 < *unaff_x20) {
    if (((*(long *)(unaff_x19 + 0x80) != 0) && (*(char *)(unaff_x19 + 0x90) != '\0')) &&
       (*(int *)(unaff_x19 + 0x8c) != *(int *)(*(long *)(unaff_x19 + 0x80) + 0x78))) {
      Atlas_UI_KartIndicatorBehaviour__SetBattlePoint(unaff_x19);
    }
    if ((bRam0000000003eb5331 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5331 = 1;
    }
    uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(unaff_x19),
       *(float *)(unaff_x19 + 0x94) != extraout_s0)) {
      *(float *)(unaff_x19 + 0x94) = extraout_s0;
      uVar5 = *(undefined8 *)(unaff_x19 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      if ((int)uVar2 != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x38);
        if (lVar3 == 0) {
          uVar2 = func_0x00f78af4();
          *(undefined4 *)(uVar2 + 0x88) = extraout_s0_00;
          return uVar2;
        }
        /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar3,0);
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                       ,0);
        }
        uVar2 = (*pcRam0000000003ec07e0)(lVar3,&stack0xffffffffffffff98);
        return uVar2;
      }
    }
    return uVar2;
  }
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
  if (lVar3 != 0) {
    param_2 = (float *)0x0;
    unaff_x30 = &UNK_015ccf14;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
    unaff_x22 = 0x3eb5000;
code_r0x0322ef1c:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebf4c0)(lVar3,param_2);
    return uVar2;
  }
code_r0x015ccf54:
  uVar2 = func_0x00f78af4();
  *(undefined4 *)(uVar2 + 0x8c) = 0xffffffff;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15cce28 | Atlas.UI.KartIndicatorBehaviour.Update
// ============================================================

ulong Atlas_UI_KartIndicatorBehaviour__Update(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = *(float *)(param_1 + 0x88);
  if (0.0 < fVar7) {
    fVar5 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    *(float *)(param_1 + 0x88) = fVar7 - fVar5;
  }
  uVar1 = /*System.Single$$Equals*/ func_0x029ba868(*(undefined4 *)(param_1 + 0x68),(float *)(param_1 + 0x78),0);
  if ((uVar1 & 1) == 0) {
    fVar8 = *(float *)(param_1 + 0x68);
    fVar9 = *(float *)(param_1 + 0x78);
    fVar10 = *(float *)(param_1 + 0x60);
    fVar5 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar7 = -(fVar10 * fVar5);
    if (fVar9 <= fVar8) {
      fVar7 = fVar10 * fVar5;
    }
    uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar9 + fVar7,0);
    *(undefined4 *)(param_1 + 0x78) = uVar6;
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_015ccf54;
    (**(code **)(*plVar2 + 0x2a8))
              (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74),uVar6,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 == (long *)0x0) goto LAB_015ccf54;
    (**(code **)(*plVar2 + 0x2a8))
              (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),plVar2,
               *(undefined8 *)(*plVar2 + 0x2b0));
  }
  if (*(float *)(param_1 + 0x78) <= 0.0) {
    lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
    if (lVar3 == 0) {
LAB_015ccf54:
      uVar1 = func_0x00f78af4();
      *(undefined4 *)(uVar1 + 0x8c) = 0xffffffff;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar1;
    }
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
  }
  if (((*(long *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x90) != '\0')) &&
     (*(int *)(param_1 + 0x8c) != *(int *)(*(long *)(param_1 + 0x80) + 0x78))) {
    Atlas_UI_KartIndicatorBehaviour__SetBattlePoint(param_1);
  }
  if ((bRam0000000003eb5331 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5331 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = Atlas_UI_KartIndicatorBehaviour__GetKartNameWidth(param_1),
     *(float *)(param_1 + 0x94) != extraout_s0)) {
    *(float *)(param_1 + 0x94) = extraout_s0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if ((int)uVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar3,0);
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                       ,0);
        }
        uVar1 = (*pcRam0000000003ec07e0)(lVar3,&stack0xffffffffffffffd8);
        return uVar1;
      }
      uVar1 = func_0x00f78af4();
      *(undefined4 *)(uVar1 + 0x88) = extraout_s0_00;
      return uVar1;
    }
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15ccf58 | Atlas.UI.KartIndicatorBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_KartIndicatorBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
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



