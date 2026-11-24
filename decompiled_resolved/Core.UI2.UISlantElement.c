// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UISlantElement

// ============================================================
// RVA: 0x2f8afe4 | Core.UI2.UISlantElement.get_BoarderWidth
// ============================================================

undefined4 Core_UI2_UISlantElement__get_BoarderWidth(long param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// ============================================================
// RVA: 0x2f8afec | Core.UI2.UISlantElement.set_StartFillPercentage
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_UI2_UISlantElement__set_StartFillPercentage(float param_1,long *param_2)

{
  if (_UNK_033f8758 < ABS(*(float *)(param_2 + 0x28) - param_1)) {
    *(float *)(param_2 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x02f8b014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x2f8b01c | Core.UI2.UISlantElement.get_StartFillPercentage
// ============================================================

undefined4 Core_UI2_UISlantElement__get_StartFillPercentage(long param_1)

{
  return *(undefined4 *)(param_1 + 0x140);
}



// ============================================================
// RVA: 0x2f8b024 | Core.UI2.UISlantElement.set_EndfillPercentage
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_UI2_UISlantElement__set_EndfillPercentage(float param_1,long *param_2)

{
  if (_UNK_033f8758 < ABS(*(float *)((long)param_2 + 0x144) - param_1)) {
    *(float *)((long)param_2 + 0x144) = param_1;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x2f8b054 | Core.UI2.UISlantElement.get_EndfillPercentage
// ============================================================

undefined4 Core_UI2_UISlantElement__get_EndfillPercentage(long param_1)

{
  return *(undefined4 *)(param_1 + 0x144);
}



// ============================================================
// RVA: 0x2f8b05c | Core.UI2.UISlantElement.get_BottomRightPosition
// ============================================================

undefined4 Core_UI2_UISlantElement__get_BottomRightPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14c);
}



// ============================================================
// RVA: 0x2f8b068 | Core.UI2.UISlantElement.get_sprite
// ============================================================

undefined8 Core_UI2_UISlantElement__get_sprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x2f8b070 | Core.UI2.UISlantElement.set_sprite
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_UI2_UISlantElement__set_sprite
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,long param_6)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003ebc67c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc67c = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lVar5 = param_5[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
    if (iVar2 == 0) {
      return;
    }
    if (param_6 != 0) {
      uVar7 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_6,0);
      uStack_60 = CONCAT44(param_2,uVar7);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar8 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar10 = param_2;
      fVar9 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(param_5 + 6) =
           (fVar8 - fVar9) * (fVar8 - fVar9) + (param_2 - fVar10) * (param_2 - fVar10) <
           _UNK_033f8490;
      uVar4 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_6,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = 0;
code_r0x02f8b2ec:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,uVar6,0);
      *(undefined1 *)((long)param_5 + 0x31) = uVar1;
      param_5[0x1a] = param_6;
      (**(code **)(*param_5 + 0x2d8))(param_5,*(undefined8 *)(*param_5 + 0x2e0));
      return;
    }
  }
  else {
    lVar5 = param_5[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,param_6,0);
    if (iVar2 == 0) {
      return;
    }
    if (param_5[0x1a] != 0) {
      uVar7 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_5[0x1a],0);
      uStack_60 = CONCAT44(param_2,uVar7);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar8 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar10 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_6,0);
      if ((uVar3 & 1) == 0) {
        fVar9 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (param_6 == 0) goto LAB_02f8b32c;
        uVar7 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_6,0);
        uStack_60 = CONCAT44(fVar10,uVar7);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar9 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      }
      *(bool *)(param_5 + 6) = fVar8 == fVar9 && param_2 == fVar10;
      if (param_5[0x1a] != 0) {
        uVar4 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_5[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_6,0);
        uVar6 = 0;
        if (iVar2 != 0) {
          if (param_6 == 0) goto LAB_02f8b32c;
          uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_6,0);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x02f8b2ec;
      }
    }
  }
LAB_02f8b32c:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x2f8b330 | Core.UI2.UISlantElement.CalculateLayoutInputHorizontal
// ============================================================

void Core_UI2_UISlantElement__CalculateLayoutInputHorizontal(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8b334 | Core.UI2.UISlantElement.CalculateLayoutInputVertical
// ============================================================

void Core_UI2_UISlantElement__CalculateLayoutInputVertical(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8b338 | Core.UI2.UISlantElement.get_minWidth
// ============================================================

undefined1  [16] Core_UI2_UISlantElement__get_minWidth(void)

{
  return ZEXT816(0);
}



// ============================================================
// RVA: 0x2f8b340 | Core.UI2.UISlantElement.get_preferredWidth
// ============================================================

float Core_UI2_UISlantElement__get_preferredWidth(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000003ebc67d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc67d = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
  fVar3 = 0.0;
  if ((uVar1 & 1) == 0) {
    fVar3 = (float)/*UnityEngine.Sprites.DataUtility$$GetMinSize*/ func_0x0322b140(0,*(undefined8 *)(param_1 + 0xd0),0);
    fVar4 = (float)/*Core.UI2.UISlantElement$$get_pixelsPerUnit*/ func_0x02f8b3e4(param_1);
    fVar3 = fVar3 / fVar4;
  }
  return fVar3;
}



// ============================================================
// RVA: 0x2f8b3e4 | Core.UI2.UISlantElement.get_pixelsPerUnit
// ============================================================

float Core_UI2_UISlantElement__get_pixelsPerUnit(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000003ebc680 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc680 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
  if (iVar1 == 0) {
    fVar5 = 100.0;
  }
  else {
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02f8b4e4;
    fVar5 = (float)/*UnityEngine.Sprite$$get_pixelsPerUnit*/ func_0x03268e08(*(long *)(param_1 + 0xd0),0);
  }
  uVar4 = /*UnityEngine.UI.Graphic$$get_canvas*/ func_0x032bba74(param_1,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
  if ((uVar2 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 0x15c);
  }
  else {
    lVar3 = /*UnityEngine.UI.Graphic$$get_canvas*/ func_0x032bba74(param_1,0);
    if (lVar3 == 0) {
LAB_02f8b4e4:
      func_0x00f78af4();
      return -1.0;
    }
    fVar6 = (float)/*UnityEngine.Canvas$$get_referencePixelsPerUnit*/ func_0x032f3840(lVar3,0);
    *(float *)(param_1 + 0x15c) = fVar6;
  }
  return fVar5 / fVar6;
}



// ============================================================
// RVA: 0x2f8b4e8 | Core.UI2.UISlantElement.get_flexibleWidth
// ============================================================

undefined1  [16] Core_UI2_UISlantElement__get_flexibleWidth(void)

{
  return ZEXT816(0xbf800000);
}



// ============================================================
// RVA: 0x2f8b4f0 | Core.UI2.UISlantElement.get_minHeight
// ============================================================

undefined1  [16] Core_UI2_UISlantElement__get_minHeight(void)

{
  return ZEXT816(0);
}



// ============================================================
// RVA: 0x2f8b4f8 | Core.UI2.UISlantElement.get_preferredHeight
// ============================================================

float Core_UI2_UISlantElement__get_preferredHeight
                (undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if ((bRam0000000003ebc67e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc67e = 1;
  }
  uVar2 = *(undefined8 *)(param_3 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
  fVar3 = 0.0;
  if ((uVar1 & 1) == 0) {
    /*UnityEngine.Sprites.DataUtility$$GetMinSize*/ func_0x0322b140(0,*(undefined8 *)(param_3 + 0xd0),0);
    fVar3 = (float)Core_UI2_UISlantElement__get_pixelsPerUnit(param_3);
    fVar3 = param_2 / fVar3;
  }
  return fVar3;
}



// ============================================================
// RVA: 0x2f8b59c | Core.UI2.UISlantElement.get_flexibleHeight
// ============================================================

undefined1  [16] Core_UI2_UISlantElement__get_flexibleHeight(void)

{
  return ZEXT816(0xbf800000);
}



// ============================================================
// RVA: 0x2f8b5a4 | Core.UI2.UISlantElement.get_layoutPriority
// ============================================================

undefined8 Core_UI2_UISlantElement__get_layoutPriority(void)

{
  return 0;
}



// ============================================================
// RVA: 0x2f8b5ac | Core.UI2.UISlantElement.IsRaycastLocationValid
// ============================================================

undefined8 Core_UI2_UISlantElement__IsRaycastLocationValid(void)

{
  return 1;
}



// ============================================================
// RVA: 0x2f8b5b4 | Core.UI2.UISlantElement.get_mainTexture
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x2f8b748 | Core.UI2.UISlantElement.OnPopulateMesh
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8ba18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8bb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8bbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8bcc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8bbfc) */
/* WARNING: Removing unreachable block (ram,0x02f8bb14) */
/* WARNING: Removing unreachable block (ram,0x02f8ba1c) */
/* WARNING: Removing unreachable block (ram,0x02f8ba60) */
/* WARNING: Removing unreachable block (ram,0x02f8ba84) */
/* WARNING: Removing unreachable block (ram,0x02f8ba88) */
/* WARNING: Removing unreachable block (ram,0x02f8bb18) */
/* WARNING: Removing unreachable block (ram,0x02f8bb2c) */
/* WARNING: Removing unreachable block (ram,0x02f8bb30) */
/* WARNING: Removing unreachable block (ram,0x02f8bc00) */
/* WARNING: Removing unreachable block (ram,0x02f8bc08) */
/* WARNING: Removing unreachable block (ram,0x02f8bb44) */
/* WARNING: Removing unreachable block (ram,0x02f8ba9c) */
/* WARNING: Removing unreachable block (ram,0x02f8bccc) */
/* WARNING: Removing unreachable block (ram,0x02f8bcd8) */
/* WARNING: Removing unreachable block (ram,0x02f8bce0) */
/* WARNING: Removing unreachable block (ram,0x02f8bce8) */
/* WARNING: Removing unreachable block (ram,0x02f8bcf4) */
/* WARNING: Removing unreachable block (ram,0x02f8bd04) */
/* WARNING: Removing unreachable block (ram,0x02f8bd0c) */

undefined1  [16]
Core_UI2_UISlantElement__OnPopulateMesh
          (undefined1 param_1 [16],ulong param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,long param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int extraout_w1;
  long lVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  uint extraout_s0;
  float fVar26;
  undefined4 extraout_s0_00;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  ulong uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  ulong uVar42;
  float fVar43;
  ulong uVar44;
  float fVar45;
  ulong uVar46;
  float fVar47;
  undefined4 uVar48;
  ulong uVar49;
  float fVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined4 uStack_1f0;
  float fStack_1ec;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  ulong uStack_a0;
  undefined8 uStack_98;
  
  uVar14 = 0x3d23990;
  if ((bRam0000000003ebc681 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d255e8);
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc681 = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  uVar18 = /*UnityEngine.Vector4$$get_zero*/ func_0x03269f94(0);
  uVar12 = param_2;
  fVar24 = param_4;
  fVar21 = param_3;
  uVar19 = /*UnityEngine.Vector4$$get_zero*/ func_0x03269f94(0);
  uStack_d4 = (undefined4)uVar12;
  uVar42 = (ulong)(uint)fVar21;
  fStack_d8 = fVar24;
  uStack_f4 = /*UnityEngine.Vector4$$get_zero*/ func_0x03269f94(0);
  uStack_f8 = (undefined4)uVar12;
  uVar16 = (ulong)(uint)fVar21;
  uVar44 = (ulong)(uint)fVar24;
  fStack_b0 = (float)/*UnityEngine.Vector4$$get_zero*/ func_0x03269f94(0);
  fStack_ac = (float)uVar12;
  *(undefined8 *)(param_9 + 0x154) = *(undefined8 *)(param_9 + 0x118);
  fStack_a8 = fVar21;
  fStack_a4 = fVar24;
  fStack_c0 = (float)/*UnityEngine.UI.Graphic$$GetPixelAdjustedRect*/ func_0x032be1fc(param_9,0);
  fStack_bc = (float)uVar12;
  uVar13 = *(ulong *)(param_9 + 0xd0);
  fStack_b8 = fVar21;
  fStack_b4 = fVar24;
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = 0;
  iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0);
  if (iVar5 == 0) {
    param_2 = param_2 & 0xffffffff;
    uVar13 = 0;
    fStack_fc = param_4;
    fStack_ec = param_3;
    uStack_e8 = uVar18;
    uStack_e4 = uVar19;
LAB_02f8b9d0:
    fVar24 = fStack_a4;
    fVar26 = fStack_a8;
    fVar20 = fStack_ac;
    fVar21 = fStack_b0;
    uVar46 = (ulong)(uint)fStack_b0;
    uVar49 = (ulong)(uint)fStack_ac;
    fVar25 = (float)Core_UI2_UISlantElement__get_pixelsPerUnit(param_9);
    uStack_a0 = 0;
    uStack_98 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar21 / fVar25,fVar20 / fVar25,fVar26 / fVar25,fVar24 / fVar25,&uStack_a0,0);
    uStack_1c0 = (uint)uStack_a0;
    uVar33 = uStack_a0 >> 0x20;
    puStack_178 = &UNK_02f8ba1c;
    lVar7 = param_9;
    fVar25 = uStack_98._4_4_;
    param_5 = fStack_c0;
    param_6 = fStack_bc;
    param_7 = fStack_b8;
    param_8 = fStack_b4;
    fVar27 = (float)uStack_98;
  }
  else {
    uVar18 = /*UnityEngine.Sprites.DataUtility$$GetOuterUV*/ func_0x0322b110(*(undefined8 *)(param_9 + 0xd0),0);
    uVar46 = (ulong)uVar18;
    fVar26 = (float)uVar12;
    param_2 = (ulong)(uint)fVar21;
    uVar33 = uVar12;
    fVar20 = fVar24;
    fVar27 = fVar21;
    uStack_e4 = /*UnityEngine.Sprites.DataUtility$$GetInnerUV*/ func_0x0322b0f8(*(undefined8 *)(param_9 + 0xd0),0);
    uStack_d4 = (undefined4)uVar33;
    uVar42 = (ulong)(uint)fVar27;
    uVar49 = (ulong)(uint)fVar20;
    fVar25 = fVar20;
    uStack_f4 = /*UnityEngine.Sprites.DataUtility$$GetPadding*/ func_0x0322b128(*(undefined8 *)(param_9 + 0xd0),0);
    uStack_f8 = (undefined4)uVar33;
    if (*(long *)(param_9 + 0xd0) != 0) {
      uVar16 = (ulong)(uint)fVar27;
      uVar44 = (ulong)(uint)fVar25;
      fStack_d8 = fVar20;
      fStack_b0 = (float)/*UnityEngine.Sprite$$get_border*/ func_0x03268ccc(*(long *)(param_9 + 0xd0),0);
      fStack_ac = (float)uVar33;
      fStack_a8 = fVar27;
      fStack_a4 = fVar25;
      fVar20 = (float)/*UnityEngine.Vector4$$get_sqrMagnitude*/ func_0x0327cf08(&fStack_b0,0);
      uVar13 = (ulong)(0.0 < fVar20);
      fStack_fc = fVar24;
      fStack_ec = fVar21;
      uStack_e8 = uVar18;
      if (*(char *)(param_9 + 0x108) == '\0') {
        param_2 = uVar12 & 0xffffffff;
        goto LAB_02f8b9d0;
      }
      uVar18 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&fStack_c0,0);
      uVar46 = (ulong)uVar18;
      fVar21 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&fStack_c0,0);
      if (*(long *)(param_9 + 0xd0) != 0) {
        uVar49 = (ulong)(uint)fVar21;
        param_2 = uVar12 & 0xffffffff;
        uVar19 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(*(long *)(param_9 + 0xd0),0);
        uStack_d0 = CONCAT44((int)uVar33,uVar19);
        uStack_c8 = CONCAT44(fVar25,fVar27);
        uVar19 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_d0,0);
        uVar23 = (undefined4)uVar33;
        if (*(long *)(param_9 + 0xd0) != 0) {
          uVar22 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(*(long *)(param_9 + 0xd0),0);
          uStack_d0 = CONCAT44(uVar23,uVar22);
          uStack_c8 = CONCAT44(fVar25,fVar27);
          uVar23 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_d0,0);
          uVar14 = (ulong)*(uint *)(param_9 + 0x10c);
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar24 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4(uVar18,fVar21,uVar19,uVar23,uVar14);
          *(ulong *)(param_9 + 0x154) =
               CONCAT44(fVar21 * (float)((ulong)*(undefined8 *)(param_9 + 0x118) >> 0x20),
                        fVar24 * (float)*(undefined8 *)(param_9 + 0x118));
          goto LAB_02f8b9d0;
        }
      }
    }
    func_0x00f78af4();
    uVar6 = func_0x00f78b24();
    puStack_178 = &Core_UI2_UISlantElement__GetAdjustedBorders;
    lVar7 = func_0x00f78ac0(uVar6,0);
    uStack_1c0 = extraout_s0;
  }
  uStack_1bc = (undefined4)uVar33;
  uStack_1e8 = 0;
  fStack_1d0 = param_5;
  fStack_1cc = param_6;
  fStack_1c8 = param_7;
  fStack_1c4 = param_8;
  fStack_1b8 = fVar27;
  fStack_1b4 = fVar25;
  uStack_1b0 = uVar16;
  uStack_1a8 = param_2;
  uStack_1a0 = uVar14;
  uStack_198 = uVar13;
  lStack_190 = param_9;
  uStack_188 = param_10;
  puStack_180 = &stack0xfffffffffffffff0;
  lVar7 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(lVar7,0);
  fVar21 = (float)uVar33;
  if (lVar7 != 0) {
    fStack_1e0 = (float)/*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar7,0);
    uVar18 = 0;
    fStack_1dc = (float)uVar33;
    fStack_1d8 = fVar27;
    fStack_1d4 = fVar25;
    bVar4 = true;
    do {
      bVar9 = bVar4;
      uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_1e0,0);
      uStack_1e8 = CONCAT44((int)uVar33,uVar19);
      fVar24 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_1e8,uVar18,0);
      if (fVar24 != 0.0) {
        uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_1d0,0);
        uStack_1e8 = CONCAT44((int)uVar33,uVar19);
        fVar24 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_1e8,uVar18,0);
        uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_1e0,0);
        uStack_1e8 = CONCAT44((int)uVar33,uVar19);
        fVar21 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_1e8,uVar18,0);
        fVar26 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_1c0,uVar18,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4(fVar26 * (fVar24 / fVar21),&uStack_1c0,uVar18,0);
        fVar26 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_1c0,uVar18 | 2,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4((fVar24 / fVar21) * fVar26,&uStack_1c0,uVar18 | 2,0);
      }
      uVar51 = uVar18 | 2;
      fVar24 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_1c0,uVar18,0);
      fVar21 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_1c0,uVar51,0);
      fVar24 = fVar24 + fVar21;
      uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_1d0,0);
      uStack_1e8 = CONCAT44((int)uVar33,uVar19);
      fVar21 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_1e8,uVar18,0);
      if ((fVar24 != 0.0) && (fVar21 < fVar24)) {
        uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_1d0,0);
        uStack_1e8 = CONCAT44((int)uVar33,uVar19);
        fVar21 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_1e8,uVar18,0);
        fVar26 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_1c0,uVar18,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4(fVar26 * (fVar21 / fVar24),&uStack_1c0,uVar18,0);
        fVar26 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_1c0,uVar51,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4((fVar21 / fVar24) * fVar26,&uStack_1c0,uVar51,0);
      }
      uVar18 = 1;
      bVar4 = false;
    } while (bVar9);
    return ZEXT416(uStack_1c0);
  }
  lVar7 = func_0x00f78af4();
  fVar34 = uStack_1b0._4_4_;
  fVar39 = (float)uStack_1a8;
  fVar20 = (float)uStack_1b0;
  uStack_2a0 = extraout_s0_00;
  fStack_29c = fVar21;
  fStack_298 = fVar27;
  fStack_294 = fVar25;
  uStack_290 = (ulong)(uint)fVar24;
  uStack_288 = (ulong)(uint)fVar26;
  uStack_280 = uVar49;
  uStack_278 = uVar46;
  uStack_270 = uVar44;
  uStack_268 = uVar42;
  uStack_260 = uVar16;
  uStack_258 = param_2;
  if ((bRam0000000003ebc682 & 1) == 0) {
    func_0x00f78a20(0x3d255e8);
    bRam0000000003ebc682 = 1;
  }
  fVar21 = fStack_1c8;
  fVar24 = fStack_1d0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  fStack_2c0 = 0.0;
  fStack_2bc = 0.0;
  fStack_2b8 = 0.0;
  fStack_2b4 = 0.0;
  fVar26 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_2a0,0);
  fVar25 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_2a0,0);
  fVar27 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_2a0,0);
  fVar28 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_2a0,0);
  fVar41 = fVar34 + (fVar25 - fStack_1d8) + *(float *)(lVar7 + 0x128) + fVar20;
  fVar43 = fVar39 + (fVar27 - fStack_1d4) + *(float *)(lVar7 + 300) + fVar20;
  fVar27 = (fStack_1e0 + fVar34) - (*(float *)(lVar7 + 0x120) + fVar20);
  fStack_2c4 = fVar39 + (fVar26 - fStack_1d4) + *(float *)(lVar7 + 0x124) + fVar20;
  fVar45 = (fStack_1e0 + fVar34) - (*(float *)(lVar7 + 0x138) + fVar20);
  fVar52 = (fStack_1dc + fVar39) - (*(float *)(lVar7 + 0x13c) + fVar20);
  fVar47 = fVar34 + (fVar28 - fStack_1d8) + *(float *)(lVar7 + 0x130) + fVar20;
  fVar50 = (fStack_1dc + fVar39) - (*(float *)(lVar7 + 0x134) + fVar20);
  uStack_2a8._0_4_ = fVar41 - fVar27;
  uStack_2a8._4_4_ = fVar43 - fStack_2c4;
  uStack_2b0._0_4_ = fVar47 - fVar45;
  uStack_2b0._4_4_ = fVar50 - fVar52;
  fVar26 = fStack_2c4;
  fVar20 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_2a8,0);
  fVar25 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_2b0,0);
  fVar39 = (float)uStack_2a8 / fVar20;
  fVar28 = uStack_2a8._4_4_ / fVar20;
  fVar53 = (float)uStack_2b0 / fVar25;
  fVar34 = *(float *)(lVar7 + 0x140);
  fVar54 = uStack_2b0._4_4_ / fVar25;
  if ((0.0 < fVar34) || (*(float *)(lVar7 + 0x144) < 1.0)) {
    fVar36 = fVar24 + fVar21 + *(float *)(lVar7 + 0x148);
    fVar26 = fVar20 - fVar36;
    fVar25 = fVar25 - fVar36;
    fVar27 = fVar27 + fVar39 * fVar34 * fVar26;
    fStack_2c4 = fStack_2c4 + fVar28 * fVar34 * fVar26;
    fVar34 = fVar34 * fVar25;
    fVar45 = fVar45 + fVar53 * fVar34;
    fVar52 = fVar52 + fVar54 * fVar34;
    fVar20 = 1.0 - *(float *)(lVar7 + 0x144);
    fVar34 = fVar26 * fVar20;
    fVar41 = fVar41 - fVar39 * fVar34;
    fVar43 = fVar43 - fVar28 * fVar34;
    fVar25 = fVar25 * fVar20;
    fVar47 = fVar47 - fVar53 * fVar25;
    fVar50 = fVar50 - fVar54 * fVar25;
  }
  if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar25 = fStack_1b4;
  fVar20 = fStack_1b8;
  uVar19 = uStack_1bc;
  uVar18 = uStack_1c0;
  lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
  fVar34 = param_5;
  if (lVar10 == 0) goto code_r0x02f8d194;
  if ((**(int **)(lVar10 + 0x10) != 0) && ((*(int **)(lVar10 + 0x10))[4] != 0)) {
    *(float *)(lVar10 + 0x20) = fVar45;
    *(float *)(lVar10 + 0x24) = fVar52;
    *(undefined4 *)(lVar10 + 0x28) = 0;
    lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
    if (lVar10 == 0) goto code_r0x02f8d194;
    if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
       (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4), (int)lVar11 != 0)) {
      lVar10 = lVar10 + lVar11 * 0x24;
      *(float *)(lVar10 + 0x20) = fVar47;
      *(float *)(lVar10 + 0x24) = fVar50;
      *(undefined4 *)(lVar10 + 0x28) = 0;
      lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
      if (lVar10 == 0) goto code_r0x02f8d194;
      if ((**(int **)(lVar10 + 0x10) != 0) && (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffcU) != 0))
      {
        *(float *)(lVar10 + 0x44) = fVar27;
        *(float *)(lVar10 + 0x48) = fStack_2c4;
        *(undefined4 *)(lVar10 + 0x4c) = 0;
        lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
        fVar26 = fStack_2c4;
        if (lVar10 == 0) goto code_r0x02f8d194;
        if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
           (uVar14 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4), (uVar14 & 0xfffffffc) != 0)) {
          lVar10 = lVar10 + uVar14 * 0x24;
          *(float *)(lVar10 + 0x44) = fVar41;
          *(float *)(lVar10 + 0x48) = fVar43;
          *(undefined4 *)(lVar10 + 0x4c) = 0;
          lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
          if (lVar10 == 0) goto code_r0x02f8d194;
          if ((**(int **)(lVar10 + 0x10) != 0) && ((*(int **)(lVar10 + 0x10))[4] != 0)) {
            *(float *)(lVar10 + 0x20) = param_5;
            *(float *)(lVar10 + 0x24) = param_6;
            lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
            if (lVar10 == 0) goto code_r0x02f8d194;
            if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
               (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4), (int)lVar11 != 0)) {
              lVar10 = lVar10 + lVar11 * 0x18;
              *(float *)(lVar10 + 0x20) = param_7;
              *(float *)(lVar10 + 0x24) = param_6;
              lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
              if (lVar10 == 0) goto code_r0x02f8d194;
              if ((**(int **)(lVar10 + 0x10) != 0) &&
                 (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffcU) != 0)) {
                *(float *)(lVar10 + 0x38) = param_5;
                *(float *)(lVar10 + 0x3c) = param_8;
                lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                if (lVar10 == 0) goto code_r0x02f8d194;
                if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                   (uVar14 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4), (uVar14 & 0xfffffffc) != 0))
                {
                  lVar10 = lVar10 + uVar14 * 0x18;
                  *(float *)(lVar10 + 0x38) = param_7;
                  *(float *)(lVar10 + 0x3c) = param_8;
                  if (lVar8 == 0) goto code_r0x02f8d194;
                  uVar14 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(lVar8,0);
                  if (extraout_w1 == 0) {
                    if (*(char *)(lVar7 + 0x108) == '\0') {
code_r0x02f8c5e0:
                      if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar10 == 0) goto code_r0x02f8d194;
                      if ((**(int **)(lVar10 + 0x10) != 0) && ((*(int **)(lVar10 + 0x10))[4] != 0))
                      {
                        uVar22 = *(undefined4 *)(lVar10 + 0x20);
                        uVar48 = *(undefined4 *)(lVar10 + 0x24);
                        fVar21 = *(float *)(lVar10 + 0x28);
                        fVar24 = fVar25;
                        fVar34 = fVar20;
                        uVar23 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar18,uVar19,fVar20,fVar25,0);
                        lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                        if (lVar10 == 0) goto code_r0x02f8d194;
                        if ((**(int **)(lVar10 + 0x10) != 0) && ((*(int **)(lVar10 + 0x10))[4] != 0)
                           ) {
                          puVar1 = (undefined8 *)(lVar7 + 0x154);
                          uVar6 = *puVar1;
                          fVar26 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20) *
                                   (float)((ulong)uVar6 >> 0x20);
                          uVar30 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar26,(float)*(undefined8 *)
                                                                           (lVar7 + 0x110) +
                                                                   (float)*(undefined8 *)
                                                                           (lVar10 + 0x20) *
                                                                   (float)uVar6),fVar26,0);
                          fVar34 = fVar21;
                          /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar22,uVar48,fVar21,uVar30,fVar26,(int)uVar6,fVar24,lVar8
                                          ,uVar23,0);
                          lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          if (lVar10 == 0) goto code_r0x02f8d194;
                          if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                             (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4), (int)lVar11 != 0))
                          {
                            lVar10 = lVar10 + lVar11 * 0x24;
                            uVar22 = *(undefined4 *)(lVar10 + 0x20);
                            uVar48 = *(undefined4 *)(lVar10 + 0x24);
                            fVar21 = *(float *)(lVar10 + 0x28);
                            fVar24 = fVar25;
                            fVar34 = fVar20;
                            uVar23 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar18,uVar19,fVar20,fVar25,0);
                            lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                            if (lVar10 == 0) goto code_r0x02f8d194;
                            if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                               (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4), (int)lVar11 != 0)
                               ) {
                              uVar6 = *(undefined8 *)(lVar10 + lVar11 * 0x18 + 0x20);
                              uVar35 = *puVar1;
                              fVar26 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20) +
                                       (float)((ulong)uVar6 >> 0x20) *
                                       (float)((ulong)uVar35 >> 0x20);
                              uVar30 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar26,(float)*(undefined8 *)
                                                                               (lVar7 + 0x110) +
                                                                       (float)uVar6 * (float)uVar35)
                                                       ,fVar26,0);
                              fVar34 = fVar21;
                              /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar22,uVar48,fVar21,uVar30,fVar26,(int)uVar35,fVar24,
                                              lVar8,uVar23,0);
                              lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar10 == 0) goto code_r0x02f8d194;
                              if ((**(int **)(lVar10 + 0x10) != 0) &&
                                 (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                uVar22 = *(undefined4 *)(lVar10 + 0x44);
                                uVar48 = *(undefined4 *)(lVar10 + 0x48);
                                fVar21 = *(float *)(lVar10 + 0x4c);
                                fVar24 = fVar25;
                                fVar34 = fVar20;
                                uVar23 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar18,uVar19,fVar20,fVar25,0);
                                lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                if (lVar10 == 0) goto code_r0x02f8d194;
                                if ((**(int **)(lVar10 + 0x10) != 0) &&
                                   (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                  uVar6 = *puVar1;
                                  fVar26 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(lVar10 + 0x38) >> 0x20) *
                                           (float)((ulong)uVar6 >> 0x20);
                                  uVar30 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar26,(float)*(undefined8 *)
                                                                                   (lVar7 + 0x110) +
                                                                           (float)*(undefined8 *)
                                                                                   (lVar10 + 0x38) *
                                                                           (float)uVar6),fVar26,0);
                                  fVar34 = fVar21;
                                  /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar22,uVar48,fVar21,uVar30,fVar26,(int)uVar6,
                                                  fVar24,lVar8,uVar23,0);
                                  lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                                     (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                                     (uVar12 & 0xfffffffc) != 0)) {
                                    lVar10 = lVar10 + uVar12 * 0x24;
                                    uVar23 = *(undefined4 *)(lVar10 + 0x44);
                                    uVar22 = *(undefined4 *)(lVar10 + 0x48);
                                    uVar48 = *(undefined4 *)(lVar10 + 0x4c);
                                    fVar34 = fVar20;
                                    uVar19 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar18,uVar19,fVar20,fVar25,0);
                                    lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                    if (lVar10 == 0) goto code_r0x02f8d194;
                                    if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                                       (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                                       (uVar12 & 0xfffffffc) != 0)) {
                                      uVar6 = *(undefined8 *)(lVar10 + uVar12 * 0x18 + 0x38);
                                      uVar35 = *puVar1;
                                      fVar24 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20
                                                      ) +
                                               (float)((ulong)uVar6 >> 0x20) *
                                               (float)((ulong)uVar35 >> 0x20);
                                      uVar30 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar24,(float)*(undefined8 *
                                                                                       )(lVar7 + 
                                                  0x110) + (float)uVar6 * (float)uVar35),fVar24,0);
                                      /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar23,uVar22,uVar48,uVar30,fVar24,(int)uVar35
                                                      ,fVar25,lVar8,uVar19,0);
                                      iVar5 = (int)uVar14;
                                      /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(lVar8,uVar14,iVar5 + 2,iVar5 + 3,0);
                                      auVar31 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(lVar8,iVar5 + 3,iVar5 + 1,uVar14,0);
                                      return auVar31;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar10 == 0) goto code_r0x02f8d194;
                      if ((**(int **)(lVar10 + 0x10) != 0) && ((*(int **)(lVar10 + 0x10))[4] != 0))
                      {
                        lVar11 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                        uVar22 = *(undefined4 *)(lVar10 + 0x24);
                        fVar34 = *(float *)(lVar10 + 0x28);
                        fVar26 = fStack_29c;
                        uVar23 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar10 + 0x20),uVar22,fVar34,
                                                 uStack_2a0,fStack_29c,fStack_298,fStack_294);
                        if (lVar11 == 0) goto code_r0x02f8d194;
                        if ((**(int **)(lVar11 + 0x10) != 0) && ((*(int **)(lVar11 + 0x10))[4] != 0)
                           ) {
                          *(undefined4 *)(lVar11 + 0x20) = uVar23;
                          *(undefined4 *)(lVar11 + 0x24) = uVar22;
                          lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          if (lVar10 == 0) goto code_r0x02f8d194;
                          if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                             (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4), (int)lVar11 != 0))
                          {
                            lVar15 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                            lVar10 = lVar10 + lVar11 * 0x24;
                            uVar22 = *(undefined4 *)(lVar10 + 0x24);
                            fVar34 = *(float *)(lVar10 + 0x28);
                            fVar26 = fStack_29c;
                            uVar23 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar10 + 0x20),uVar22,fVar34,
                                                     uStack_2a0,fStack_29c,fStack_298,fStack_294);
                            if (lVar15 == 0) goto code_r0x02f8d194;
                            if (((**(uint **)(lVar15 + 0x10) & 0xfffffffc) != 0) &&
                               (lVar10 = *(long *)(*(uint **)(lVar15 + 0x10) + 4), (int)lVar10 != 0)
                               ) {
                              lVar15 = lVar15 + lVar10 * 0x18;
                              *(undefined4 *)(lVar15 + 0x20) = uVar23;
                              *(undefined4 *)(lVar15 + 0x24) = uVar22;
                              lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar10 == 0) goto code_r0x02f8d194;
                              if ((**(int **)(lVar10 + 0x10) != 0) &&
                                 (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                lVar11 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                                uVar22 = *(undefined4 *)(lVar10 + 0x48);
                                fVar34 = *(float *)(lVar10 + 0x4c);
                                fVar26 = fStack_29c;
                                uVar23 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar10 + 0x44),uVar22,
                                                         fVar34,uStack_2a0,fStack_29c,fStack_298,
                                                         fStack_294);
                                if (lVar11 == 0) goto code_r0x02f8d194;
                                if ((**(int **)(lVar11 + 0x10) != 0) &&
                                   (((*(int **)(lVar11 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                  *(undefined4 *)(lVar11 + 0x38) = uVar23;
                                  *(undefined4 *)(lVar11 + 0x3c) = uVar22;
                                  lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                                     (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                                     (uVar12 & 0xfffffffc) != 0)) {
                                    lVar11 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                                    lVar10 = lVar10 + uVar12 * 0x24;
                                    uVar22 = *(undefined4 *)(lVar10 + 0x48);
                                    fVar34 = *(float *)(lVar10 + 0x4c);
                                    fVar26 = fStack_29c;
                                    uVar23 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar10 + 0x44),uVar22,
                                                             fVar34,uStack_2a0,fStack_29c,fStack_298
                                                             ,fStack_294);
                                    if (lVar11 == 0) goto code_r0x02f8d194;
                                    if (((**(uint **)(lVar11 + 0x10) & 0xfffffffc) != 0) &&
                                       (uVar12 = *(ulong *)(*(uint **)(lVar11 + 0x10) + 4),
                                       (uVar12 & 0xfffffffc) != 0)) {
                                      lVar11 = lVar11 + uVar12 * 0x18;
                                      *(undefined4 *)(lVar11 + 0x38) = uVar23;
                                      *(undefined4 *)(lVar11 + 0x3c) = uVar22;
                                      goto code_r0x02f8c5e0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    fStack_2b8 = fVar45 - fVar27;
                    fStack_2b4 = fVar52 - fStack_2c4;
                    fStack_2c0 = fVar47 - fVar41;
                    fStack_2bc = fVar50 - fVar43;
                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_2b8,0);
                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_2c0,0);
                    fVar3 = fStack_2b4;
                    fVar37 = fStack_2b8;
                    fVar38 = fStack_2bc;
                    fVar36 = fStack_2c0;
                    if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                    fVar26 = fVar54;
                    fVar34 = fVar53;
                    if (lVar10 == 0) goto code_r0x02f8d194;
                    if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) != 0) &&
                       (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4), (int)lVar11 != 0)) {
                      fVar29 = fVar24 * fVar53 + fVar45;
                      fVar32 = fVar24 * fVar54 + fVar52;
                      lVar10 = lVar10 + lVar11 * 0xc;
                      *(float *)(lVar10 + 0x20) = fVar29;
                      *(float *)(lVar10 + 0x24) = fVar32;
                      *(undefined4 *)(lVar10 + 0x28) = 0;
                      lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar10 == 0) goto code_r0x02f8d194;
                      if ((2 < **(uint **)(lVar10 + 0x10)) &&
                         (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4), (int)lVar11 != 0)) {
                        fVar34 = fVar47 - fVar21 * fVar53;
                        fVar53 = fVar50 - fVar21 * fVar54;
                        lVar10 = lVar10 + lVar11 * 0x18;
                        *(float *)(lVar10 + 0x20) = fVar34;
                        *(float *)(lVar10 + 0x24) = fVar53;
                        *(undefined4 *)(lVar10 + 0x28) = 0;
                        lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                        if (lVar10 == 0) goto code_r0x02f8d194;
                        if ((**(int **)(lVar10 + 0x10) != 0) &&
                           (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffeU) != 0)) {
                          fVar54 = fStack_1cc * fVar37;
                          fVar40 = fStack_1cc * fVar3;
                          *(float *)(lVar10 + 0x2c) = fVar45 - fVar54;
                          *(float *)(lVar10 + 0x30) = fVar52 - fVar40;
                          *(undefined4 *)(lVar10 + 0x34) = 0;
                          lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          fVar26 = fStack_1cc;
                          if (lVar10 == 0) goto code_r0x02f8d194;
                          fVar26 = fStack_1cc;
                          if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) != 0) &&
                             (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                             fVar26 = fStack_1cc, (uVar12 & 0xfffffffe) != 0)) {
                            lVar10 = lVar10 + uVar12 * 0xc;
                            *(float *)(lVar10 + 0x2c) = fVar29 - fVar54;
                            *(float *)(lVar10 + 0x30) = fVar32 - fVar40;
                            *(undefined4 *)(lVar10 + 0x34) = 0;
                            lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                            fVar26 = fStack_1cc;
                            if (lVar10 == 0) goto code_r0x02f8d194;
                            fVar26 = fStack_1cc;
                            if ((2 < **(uint **)(lVar10 + 0x10)) &&
                               (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                               fVar26 = fStack_1cc, (uVar12 & 0xfffffffe) != 0)) {
                              fVar45 = fStack_1cc * fVar36;
                              fVar52 = fStack_1cc * fVar38;
                              fVar34 = fVar34 - fVar45;
                              lVar10 = lVar10 + (uVar12 << 1 | 1) * 0xc;
                              *(float *)(lVar10 + 0x20) = fVar34;
                              *(float *)(lVar10 + 0x24) = fVar53 - fVar52;
                              *(undefined4 *)(lVar10 + 0x28) = 0;
                              lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              fVar26 = fStack_1cc;
                              if (lVar10 == 0) goto code_r0x02f8d194;
                              fVar26 = fStack_1cc;
                              if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                                 (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                                 fVar26 = fStack_1cc, (uVar12 & 0xfffffffe) != 0)) {
                                lVar10 = lVar10 + uVar12 * 0x24;
                                *(float *)(lVar10 + 0x2c) = fVar47 - fVar45;
                                *(float *)(lVar10 + 0x30) = fVar50 - fVar52;
                                *(undefined4 *)(lVar10 + 0x34) = 0;
                                lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                fVar26 = fStack_1cc;
                                if (lVar10 == 0) goto code_r0x02f8d194;
                                fVar26 = fStack_1cc;
                                if ((**(int **)(lVar10 + 0x10) != 0) &&
                                   (fVar26 = fStack_1cc, 2 < (uint)(*(int **)(lVar10 + 0x10))[4])) {
                                  fVar37 = fStack_1c4 * fVar37;
                                  fVar26 = fStack_1c4 * fVar3;
                                  *(float *)(lVar10 + 0x38) = fVar27 + fVar37;
                                  *(float *)(lVar10 + 0x3c) = fStack_2c4 + fVar26;
                                  *(undefined4 *)(lVar10 + 0x40) = 0;
                                  lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  fVar34 = fStack_1c4;
                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) != 0) &&
                                     (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4),
                                     2 < (uint)lVar11)) {
                                    fVar27 = fVar24 * fVar39 + fVar27;
                                    fStack_2c4 = fVar24 * fVar28 + fStack_2c4;
                                    fVar26 = fStack_2c4 + fVar26;
                                    lVar10 = lVar10 + lVar11 * 0xc;
                                    *(float *)(lVar10 + 0x38) = fVar27 + fVar37;
                                    *(float *)(lVar10 + 0x3c) = fVar26;
                                    *(undefined4 *)(lVar10 + 0x40) = 0;
                                    lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                    if (lVar10 == 0) goto code_r0x02f8d194;
                                    if ((2 < **(uint **)(lVar10 + 0x10)) &&
                                       (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4),
                                       2 < (uint)lVar11)) {
                                      fVar26 = fStack_1c4 * fVar36;
                                      fVar38 = fStack_1c4 * fVar38;
                                      fVar34 = fVar41 - fVar21 * fVar39;
                                      fVar24 = fVar43 - fVar21 * fVar28;
                                      lVar10 = lVar10 + lVar11 * 0x18;
                                      *(float *)(lVar10 + 0x38) = fVar34 + fVar26;
                                      *(float *)(lVar10 + 0x3c) = fVar24 + fVar38;
                                      *(undefined4 *)(lVar10 + 0x40) = 0;
                                      lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                      if (lVar10 == 0) goto code_r0x02f8d194;
                                      if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                                         (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4),
                                         2 < (uint)lVar11)) {
                                        lVar10 = lVar10 + lVar11 * 0x24;
                                        *(float *)(lVar10 + 0x38) = fVar41 + fVar26;
                                        *(float *)(lVar10 + 0x3c) = fVar43 + fVar38;
                                        *(undefined4 *)(lVar10 + 0x40) = 0;
                                        lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                        fVar26 = fVar41 + fVar26;
                                        if (lVar10 == 0) goto code_r0x02f8d194;
                                        fVar26 = param_5;
                                        if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) != 0) &&
                                           (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                                           (uVar12 & 0xfffffffc) != 0)) {
                                          lVar10 = lVar10 + uVar12 * 0xc;
                                          *(float *)(lVar10 + 0x44) = fVar27;
                                          *(float *)(lVar10 + 0x48) = fStack_2c4;
                                          *(undefined4 *)(lVar10 + 0x4c) = 0;
                                          lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                          if (lVar10 == 0) goto code_r0x02f8d194;
                                          if ((2 < **(uint **)(lVar10 + 0x10)) &&
                                             (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                                             (uVar12 & 0xfffffffc) != 0)) {
                                            lVar10 = lVar10 + uVar12 * 0x18;
                                            *(float *)(lVar10 + 0x44) = fVar34;
                                            *(float *)(lVar10 + 0x48) = fVar24;
                                            *(undefined4 *)(lVar10 + 0x4c) = 0;
                                            lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8
                                                                        ) + 8);
                                            if (lVar10 == 0) goto code_r0x02f8d194;
                                            if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) != 0) &&
                                               (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4),
                                               (int)lVar11 != 0)) {
                                              lVar10 = lVar10 + lVar11 * 8;
                                              *(undefined4 *)(lVar10 + 0x20) = uStack_1f0;
                                              *(float *)(lVar10 + 0x24) = param_6;
                                              lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                          0xb8) + 8);
                                              if (lVar10 == 0) goto code_r0x02f8d194;
                                              if ((2 < **(uint **)(lVar10 + 0x10)) &&
                                                 (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) + 4),
                                                 (int)lVar11 != 0)) {
                                                lVar10 = lVar10 + lVar11 * 0x10;
                                                *(undefined4 *)(lVar10 + 0x20) =
                                                     (undefined4)uStack_1e8;
                                                *(float *)(lVar10 + 0x24) = param_6;
                                                lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                            0xb8) + 8);
                                                if (lVar10 == 0) goto code_r0x02f8d194;
                                                if ((**(int **)(lVar10 + 0x10) != 0) &&
                                                   (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffeU) !=
                                                    0)) {
                                                  *(float *)(lVar10 + 0x28) = param_5;
                                                  *(float *)(lVar10 + 0x2c) = fStack_1ec;
                                                  lVar10 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                              + 0xb8) + 8);
                                                  fVar34 = fStack_1ec;
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) !=
                                                       0) && (uVar12 = *(ulong *)(*(uint **)(lVar10 
                                                  + 0x10) + 4), (uVar12 & 0xfffffffe) != 0)) {
                                                    lVar10 = lVar10 + uVar12 * 8;
                                                    *(undefined4 *)(lVar10 + 0x28) = uStack_1f0;
                                                    *(float *)(lVar10 + 0x2c) = fStack_1ec;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if ((2 < **(uint **)(lVar10 + 0x10)) &&
                                                     (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10)
                                                                         + 4),
                                                     (uVar12 & 0xfffffffe) != 0)) {
                                                    lVar10 = lVar10 + uVar12 * 0x10;
                                                    *(undefined4 *)(lVar10 + 0x28) =
                                                         (undefined4)uStack_1e8;
                                                    *(float *)(lVar10 + 0x2c) = fStack_1ec;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) !=
                                                       0) && (uVar12 = *(ulong *)(*(uint **)(lVar10 
                                                  + 0x10) + 4), (uVar12 & 0xfffffffe) != 0)) {
                                                    lVar10 = lVar10 + uVar12 * 0x18;
                                                    *(float *)(lVar10 + 0x28) = param_7;
                                                    *(float *)(lVar10 + 0x2c) = fStack_1ec;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if ((**(int **)(lVar10 + 0x10) != 0) &&
                                                     (2 < (uint)(*(int **)(lVar10 + 0x10))[4])) {
                                                    uVar12 = (ulong)(uint)uStack_1e8._4_4_;
                                                    *(float *)(lVar10 + 0x30) = param_5;
                                                    *(float *)(lVar10 + 0x34) = uStack_1e8._4_4_;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  fVar34 = uStack_1e8._4_4_;
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) !=
                                                       0) && (lVar11 = *(long *)(*(uint **)(lVar10 +
                                                                                           0x10) + 4
                                                                                ), 2 < (uint)lVar11)
                                                     ) {
                                                    lVar10 = lVar10 + lVar11 * 8;
                                                    *(undefined4 *)(lVar10 + 0x30) = uStack_1f0;
                                                    *(float *)(lVar10 + 0x34) = uStack_1e8._4_4_;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if ((2 < **(uint **)(lVar10 + 0x10)) &&
                                                     (lVar11 = *(long *)(*(uint **)(lVar10 + 0x10) +
                                                                        4), 2 < (uint)lVar11)) {
                                                    lVar10 = lVar10 + lVar11 * 0x10;
                                                    *(undefined4 *)(lVar10 + 0x30) =
                                                         (undefined4)uStack_1e8;
                                                    *(float *)(lVar10 + 0x34) = uStack_1e8._4_4_;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) !=
                                                       0) && (lVar11 = *(long *)(*(uint **)(lVar10 +
                                                                                           0x10) + 4
                                                                                ), 2 < (uint)lVar11)
                                                     ) {
                                                    lVar10 = lVar10 + lVar11 * 0x18;
                                                    *(float *)(lVar10 + 0x30) = param_7;
                                                    *(float *)(lVar10 + 0x34) = uStack_1e8._4_4_;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar10 + 0x10) & 0xfffffffe) !=
                                                       0) && (uVar13 = *(ulong *)(*(uint **)(lVar10 
                                                  + 0x10) + 4), (uVar13 & 0xfffffffc) != 0)) {
                                                    lVar10 = lVar10 + uVar13 * 8;
                                                    *(undefined4 *)(lVar10 + 0x38) = uStack_1f0;
                                                    *(float *)(lVar10 + 0x3c) = param_8;
                                                    lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if ((2 < **(uint **)(lVar10 + 0x10)) &&
                                                     (uVar13 = *(ulong *)(*(uint **)(lVar10 + 0x10)
                                                                         + 4),
                                                     (uVar13 & 0xfffffffc) != 0)) {
                                                    uVar16 = 0;
                                                    lVar10 = lVar10 + uVar13 * 0x10;
                                                    *(undefined4 *)(lVar10 + 0x38) =
                                                         (undefined4)uStack_1e8;
                                                    *(float *)(lVar10 + 0x3c) = param_8;
                                                    do {
                                                      uVar13 = 0;
                                                      do {
                                                        fVar34 = (float)uVar12;
                                                        fVar26 = param_5;
                                                        if (((*(ushort *)
                                                               (/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10
                                                             & 1) != 0) &&
                                                           (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) ==
                                                            0)) {
                                                          func_0x00f78ad0();
                                                          fVar26 = param_5;
                                                        }
                                                        lVar10 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                            0xb8);
                                                        if (lVar10 == 0) goto code_r0x02f8d194;
                                                        if ((**(uint **)(lVar10 + 0x10) <= uVar13)
                                                           || (uVar12 = *(ulong *)(*(uint **)(lVar10
                                                                                             + 0x10)
                                                                                  + 4),
                                                              (uVar12 & 0xffffffff) <= uVar16))
                                                        goto code_r0x02f8d188;
                                                        lVar10 = lVar10 + (uVar16 + uVar12 * uVar13)
                                                                          * 0xc;
                                                        uVar22 = *(undefined4 *)(lVar10 + 0x20);
                                                        uVar48 = *(undefined4 *)(lVar10 + 0x24);
                                                        uVar51 = *(uint *)(lVar10 + 0x28);
                                                        fVar24 = fVar25;
                                                        fVar34 = fVar20;
                                                        uVar23 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar18,uVar19,
                                                                                 fVar20,fVar25,0);
                                                        lVar10 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto code_r0x02f8d194;
                                                  if ((**(uint **)(lVar10 + 0x10) <= uVar13) ||
                                                     (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10)
                                                                         + 4),
                                                     (uVar12 & 0xffffffff) <= uVar16))
                                                  goto code_r0x02f8d188;
                                                  uVar6 = *(undefined8 *)
                                                           (lVar10 + (uVar16 + uVar12 * uVar13) * 8
                                                           + 0x20);
                                                  uVar35 = *(undefined8 *)(lVar7 + 0x154);
                                                  param_5 = (float)((ulong)*(undefined8 *)
                                                                            (lVar7 + 0x110) >> 0x20)
                                                            + (float)((ulong)uVar6 >> 0x20) *
                                                              (float)((ulong)uVar35 >> 0x20);
                                                  uVar30 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(param_5,(float)*
                                                  (undefined8 *)(lVar7 + 0x110) +
                                                  (float)uVar6 * (float)uVar35),param_5,0);
                                                  uVar12 = (ulong)uVar51;
                                                  /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar22,uVar48,uVar12,uVar30,
                                                                  param_5,(int)uVar35,fVar24,lVar8,
                                                                  uVar23,0);
                                                  uVar13 = uVar13 + 1;
                                                  } while (uVar13 != 4);
                                                  uVar16 = uVar16 + 1;
                                                  if (uVar16 == 4) {
                                                    iVar5 = 0;
                                                    do {
                                                      iVar17 = 0;
                                                      do {
                                                        iVar2 = (int)uVar14 + iVar17;
                                                        /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(lVar8,iVar2,iVar2 + 4,
                                                                        iVar2 + 5,0);
                                                        auVar31 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(lVar8,iVar2 + 5,
                                                                                  iVar2 + 1,iVar2,0)
                                                        ;
                                                        iVar17 = iVar17 + 1;
                                                      } while (iVar17 != 3);
                                                      iVar5 = iVar5 + 1;
                                                      uVar14 = (ulong)((int)uVar14 + 4);
                                                    } while (iVar5 != 3);
                                                    return auVar31;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x02f8d188:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
code_r0x02f8d194:
  fVar24 = (float)func_0x00f78af4();
  return ZEXT416((uint)(fVar34 + fVar24 * fVar26));
}



// ============================================================
// RVA: 0x2f8bd58 | Core.UI2.UISlantElement.GetAdjustedBorders
// ============================================================

undefined1  [16]
Core_UI2_UISlantElement__GetAdjustedBorders
          (uint param_1,undefined8 param_2,float param_3,undefined4 param_4,float param_5,
          float param_6,float param_7,float param_8,undefined8 param_9,undefined8 param_10,
          long param_11)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  int extraout_w1;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 extraout_s0;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float unaff_s8;
  undefined8 unaff_d9;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 uStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  uStack_4c = (undefined4)param_2;
  uStack_78 = 0;
  fStack_60 = param_5;
  fStack_5c = param_6;
  fStack_58 = param_7;
  fStack_54 = param_8;
  uStack_50 = param_1;
  fStack_48 = param_3;
  uStack_44 = param_4;
  lVar7 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(param_9,0);
  fVar20 = (float)param_2;
  if (lVar7 != 0) {
    fStack_70 = (float)/*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar7,0);
    uVar14 = 0;
    fStack_6c = (float)param_2;
    fStack_68 = param_3;
    fStack_64 = (float)param_4;
    bVar5 = true;
    do {
      bVar8 = bVar5;
      uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_70,0);
      uStack_78 = CONCAT44((int)param_2,uVar19);
      fVar20 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_78,uVar14,0);
      if (fVar20 != 0.0) {
        uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_60,0);
        uStack_78 = CONCAT44((int)param_2,uVar19);
        fVar20 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_78,uVar14,0);
        uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_70,0);
        uStack_78 = CONCAT44((int)param_2,uVar19);
        fVar21 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_78,uVar14,0);
        fVar22 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_50,uVar14,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4(fVar22 * (fVar20 / fVar21),&uStack_50,uVar14,0);
        fVar22 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_50,uVar14 | 2,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4((fVar20 / fVar21) * fVar22,&uStack_50,uVar14 | 2,0);
      }
      uVar46 = uVar14 | 2;
      fVar20 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_50,uVar14,0);
      fVar21 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_50,uVar46,0);
      fVar20 = fVar20 + fVar21;
      uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_60,0);
      uStack_78 = CONCAT44((int)param_2,uVar19);
      fVar21 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_78,uVar14,0);
      if ((fVar20 != 0.0) && (fVar21 < fVar20)) {
        uVar19 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&fStack_60,0);
        uStack_78 = CONCAT44((int)param_2,uVar19);
        fVar21 = (float)/*UnityEngine.Vector2$$get_Item*/ func_0x0327a0e4(&uStack_78,uVar14,0);
        fVar22 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_50,uVar14,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4(fVar22 * (fVar21 / fVar20),&uStack_50,uVar14,0);
        fVar22 = (float)/*UnityEngine.Vector4$$get_Item*/ func_0x0327ca08(&uStack_50,uVar46,0);
        /*UnityEngine.Vector4$$set_Item*/ func_0x0327caa4((fVar21 / fVar20) * fVar22,&uStack_50,uVar46,0);
      }
      uVar14 = 1;
      bVar5 = false;
    } while (bVar8);
    return ZEXT416(uStack_50);
  }
  lVar7 = func_0x00f78af4();
  fVar22 = (float)((ulong)unaff_d9 >> 0x20);
  fVar21 = (float)unaff_d9;
  uStack_130 = extraout_s0;
  fStack_12c = fVar20;
  fStack_128 = param_3;
  uStack_124 = param_4;
  if ((bRam0000000003ebc682 & 1) == 0) {
    func_0x00f78a20(0x3d255e8);
    bRam0000000003ebc682 = 1;
  }
  fVar4 = fStack_58;
  fVar20 = fStack_60;
  uStack_140 = 0;
  uStack_138 = 0;
  fStack_150 = 0.0;
  fStack_14c = 0.0;
  fStack_148 = 0.0;
  fStack_144 = 0.0;
  fVar23 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_130,0);
  fVar24 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_130,0);
  fVar25 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_130,0);
  fVar26 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_130,0);
  fVar39 = fVar22 + (fVar24 - fStack_68) + *(float *)(lVar7 + 0x128) + fVar21;
  fVar40 = unaff_s8 + (fVar25 - fStack_64) + *(float *)(lVar7 + 300) + fVar21;
  fVar24 = (fStack_70 + fVar22) - (*(float *)(lVar7 + 0x120) + fVar21);
  fStack_154 = unaff_s8 + (fVar23 - fStack_64) + *(float *)(lVar7 + 0x124) + fVar21;
  fVar41 = (fStack_70 + fVar22) - (*(float *)(lVar7 + 0x138) + fVar21);
  fVar47 = (fStack_6c + unaff_s8) - (*(float *)(lVar7 + 0x13c) + fVar21);
  fVar43 = fVar22 + (fVar26 - fStack_68) + *(float *)(lVar7 + 0x130) + fVar21;
  fVar45 = (fStack_6c + unaff_s8) - (*(float *)(lVar7 + 0x134) + fVar21);
  uStack_138._0_4_ = fVar39 - fVar24;
  uStack_138._4_4_ = fVar40 - fStack_154;
  uStack_140._0_4_ = fVar43 - fVar41;
  uStack_140._4_4_ = fVar45 - fVar47;
  fVar21 = fStack_154;
  fVar22 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_138,0);
  fVar23 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_140,0);
  fVar26 = (float)uStack_138 / fVar22;
  fVar38 = uStack_138._4_4_ / fVar22;
  fVar48 = (float)uStack_140 / fVar23;
  fVar25 = *(float *)(lVar7 + 0x140);
  fVar49 = uStack_140._4_4_ / fVar23;
  if ((0.0 < fVar25) || (*(float *)(lVar7 + 0x144) < 1.0)) {
    fVar34 = fVar20 + fVar4 + *(float *)(lVar7 + 0x148);
    fVar21 = fVar22 - fVar34;
    fVar23 = fVar23 - fVar34;
    fVar24 = fVar24 + fVar26 * fVar25 * fVar21;
    fStack_154 = fStack_154 + fVar38 * fVar25 * fVar21;
    fVar25 = fVar25 * fVar23;
    fVar41 = fVar41 + fVar48 * fVar25;
    fVar47 = fVar47 + fVar49 * fVar25;
    fVar22 = 1.0 - *(float *)(lVar7 + 0x144);
    fVar25 = fVar21 * fVar22;
    fVar39 = fVar39 - fVar26 * fVar25;
    fVar40 = fVar40 - fVar38 * fVar25;
    fVar23 = fVar23 * fVar22;
    fVar43 = fVar43 - fVar48 * fVar23;
    fVar45 = fVar45 - fVar49 * fVar23;
  }
  if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar35 = uStack_44;
  fVar22 = fStack_48;
  uVar19 = uStack_4c;
  uVar14 = uStack_50;
  lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
  fVar23 = param_5;
  if (lVar9 == 0) goto code_r0x02f8d194;
  if ((**(int **)(lVar9 + 0x10) != 0) && ((*(int **)(lVar9 + 0x10))[4] != 0)) {
    *(float *)(lVar9 + 0x20) = fVar41;
    *(float *)(lVar9 + 0x24) = fVar47;
    *(undefined4 *)(lVar9 + 0x28) = 0;
    lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
    if (lVar9 == 0) goto code_r0x02f8d194;
    if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
       (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (int)lVar10 != 0)) {
      lVar9 = lVar9 + lVar10 * 0x24;
      *(float *)(lVar9 + 0x20) = fVar43;
      *(float *)(lVar9 + 0x24) = fVar45;
      *(undefined4 *)(lVar9 + 0x28) = 0;
      lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
      if (lVar9 == 0) goto code_r0x02f8d194;
      if ((**(int **)(lVar9 + 0x10) != 0) && (((*(int **)(lVar9 + 0x10))[4] & 0xfffffffcU) != 0)) {
        *(float *)(lVar9 + 0x44) = fVar24;
        *(float *)(lVar9 + 0x48) = fStack_154;
        *(undefined4 *)(lVar9 + 0x4c) = 0;
        lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
        fVar21 = fStack_154;
        if (lVar9 == 0) goto code_r0x02f8d194;
        if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
           (uVar11 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4), (uVar11 & 0xfffffffc) != 0)) {
          lVar9 = lVar9 + uVar11 * 0x24;
          *(float *)(lVar9 + 0x44) = fVar39;
          *(float *)(lVar9 + 0x48) = fVar40;
          *(undefined4 *)(lVar9 + 0x4c) = 0;
          lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
          if (lVar9 == 0) goto code_r0x02f8d194;
          if ((**(int **)(lVar9 + 0x10) != 0) && ((*(int **)(lVar9 + 0x10))[4] != 0)) {
            *(float *)(lVar9 + 0x20) = param_5;
            *(float *)(lVar9 + 0x24) = param_6;
            lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
            if (lVar9 == 0) goto code_r0x02f8d194;
            if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
               (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (int)lVar10 != 0)) {
              lVar9 = lVar9 + lVar10 * 0x18;
              *(float *)(lVar9 + 0x20) = param_7;
              *(float *)(lVar9 + 0x24) = param_6;
              lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
              if (lVar9 == 0) goto code_r0x02f8d194;
              if ((**(int **)(lVar9 + 0x10) != 0) &&
                 (((*(int **)(lVar9 + 0x10))[4] & 0xfffffffcU) != 0)) {
                *(float *)(lVar9 + 0x38) = param_5;
                *(float *)(lVar9 + 0x3c) = param_8;
                lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                if (lVar9 == 0) goto code_r0x02f8d194;
                if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                   (uVar11 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4), (uVar11 & 0xfffffffc) != 0))
                {
                  lVar9 = lVar9 + uVar11 * 0x18;
                  *(float *)(lVar9 + 0x38) = param_7;
                  *(float *)(lVar9 + 0x3c) = param_8;
                  if (param_11 == 0) goto code_r0x02f8d194;
                  uVar11 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_11,0);
                  if (extraout_w1 == 0) {
                    if (*(char *)(lVar7 + 0x108) == '\0') {
code_r0x02f8c5e0:
                      if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar9 == 0) goto code_r0x02f8d194;
                      if ((**(int **)(lVar9 + 0x10) != 0) && ((*(int **)(lVar9 + 0x10))[4] != 0)) {
                        uVar42 = *(undefined4 *)(lVar9 + 0x20);
                        uVar44 = *(undefined4 *)(lVar9 + 0x24);
                        fVar20 = *(float *)(lVar9 + 0x28);
                        uVar27 = uVar35;
                        fVar23 = fVar22;
                        uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar14,uVar19,fVar22,uVar35,0);
                        lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                        if (lVar9 == 0) goto code_r0x02f8d194;
                        if ((**(int **)(lVar9 + 0x10) != 0) && ((*(int **)(lVar9 + 0x10))[4] != 0))
                        {
                          puVar1 = (undefined8 *)(lVar7 + 0x154);
                          uVar30 = *puVar1;
                          fVar21 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) *
                                   (float)((ulong)uVar30 >> 0x20);
                          uVar29 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar21,(float)*(undefined8 *)
                                                                           (lVar7 + 0x110) +
                                                                   (float)*(undefined8 *)
                                                                           (lVar9 + 0x20) *
                                                                   (float)uVar30),fVar21,0);
                          fVar23 = fVar20;
                          /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar42,uVar44,fVar20,uVar29,fVar21,(int)uVar30,uVar27,
                                          param_11,uVar6,0);
                          lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          if (lVar9 == 0) goto code_r0x02f8d194;
                          if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                             (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (int)lVar10 != 0)) {
                            lVar9 = lVar9 + lVar10 * 0x24;
                            uVar42 = *(undefined4 *)(lVar9 + 0x20);
                            uVar44 = *(undefined4 *)(lVar9 + 0x24);
                            fVar20 = *(float *)(lVar9 + 0x28);
                            uVar27 = uVar35;
                            fVar23 = fVar22;
                            uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar14,uVar19,fVar22,uVar35,0);
                            lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                            if (lVar9 == 0) goto code_r0x02f8d194;
                            if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                               (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (int)lVar10 != 0))
                            {
                              uVar30 = *(undefined8 *)(lVar9 + lVar10 * 0x18 + 0x20);
                              uVar33 = *puVar1;
                              fVar21 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20) +
                                       (float)((ulong)uVar30 >> 0x20) *
                                       (float)((ulong)uVar33 >> 0x20);
                              uVar29 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar21,(float)*(undefined8 *)
                                                                               (lVar7 + 0x110) +
                                                                       (float)uVar30 * (float)uVar33
                                                               ),fVar21,0);
                              fVar23 = fVar20;
                              /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar42,uVar44,fVar20,uVar29,fVar21,(int)uVar33,uVar27,
                                              param_11,uVar6,0);
                              lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar9 == 0) goto code_r0x02f8d194;
                              if ((**(int **)(lVar9 + 0x10) != 0) &&
                                 (((*(int **)(lVar9 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                uVar42 = *(undefined4 *)(lVar9 + 0x44);
                                uVar44 = *(undefined4 *)(lVar9 + 0x48);
                                fVar20 = *(float *)(lVar9 + 0x4c);
                                uVar27 = uVar35;
                                fVar23 = fVar22;
                                uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar14,uVar19,fVar22,uVar35,0);
                                lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                if (lVar9 == 0) goto code_r0x02f8d194;
                                if ((**(int **)(lVar9 + 0x10) != 0) &&
                                   (((*(int **)(lVar9 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                  uVar30 = *puVar1;
                                  fVar21 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20) *
                                           (float)((ulong)uVar30 >> 0x20);
                                  uVar29 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar21,(float)*(undefined8 *)
                                                                                   (lVar7 + 0x110) +
                                                                           (float)*(undefined8 *)
                                                                                   (lVar9 + 0x38) *
                                                                           (float)uVar30),fVar21,0);
                                  fVar23 = fVar20;
                                  /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar42,uVar44,fVar20,uVar29,fVar21,(int)uVar30,
                                                  uVar27,param_11,uVar6,0);
                                  lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                  if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                                     (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                                     (uVar12 & 0xfffffffc) != 0)) {
                                    lVar9 = lVar9 + uVar12 * 0x24;
                                    uVar27 = *(undefined4 *)(lVar9 + 0x44);
                                    uVar6 = *(undefined4 *)(lVar9 + 0x48);
                                    uVar42 = *(undefined4 *)(lVar9 + 0x4c);
                                    fVar23 = fVar22;
                                    uVar19 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar14,uVar19,fVar22,uVar35,0);
                                    lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                    if (lVar9 == 0) goto code_r0x02f8d194;
                                    if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                                       (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                                       (uVar12 & 0xfffffffc) != 0)) {
                                      uVar30 = *(undefined8 *)(lVar9 + uVar12 * 0x18 + 0x38);
                                      uVar33 = *puVar1;
                                      fVar20 = (float)((ulong)*(undefined8 *)(lVar7 + 0x110) >> 0x20
                                                      ) +
                                               (float)((ulong)uVar30 >> 0x20) *
                                               (float)((ulong)uVar33 >> 0x20);
                                      uVar44 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar20,(float)*(undefined8 *
                                                                                       )(lVar7 + 
                                                  0x110) + (float)uVar30 * (float)uVar33),fVar20,0);
                                      /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar27,uVar6,uVar42,uVar44,fVar20,(int)uVar33,
                                                      uVar35,param_11,uVar19,0);
                                      iVar15 = (int)uVar11;
                                      /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,uVar11,iVar15 + 2,iVar15 + 3,0);
                                      auVar31 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,iVar15 + 3,iVar15 + 1,
                                                                uVar11,0);
                                      return auVar31;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar9 == 0) goto code_r0x02f8d194;
                      if ((**(int **)(lVar9 + 0x10) != 0) && ((*(int **)(lVar9 + 0x10))[4] != 0)) {
                        lVar10 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                        uVar6 = *(undefined4 *)(lVar9 + 0x24);
                        fVar23 = *(float *)(lVar9 + 0x28);
                        fVar21 = fStack_12c;
                        uVar27 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar9 + 0x20),uVar6,fVar23,
                                                 uStack_130,fStack_12c,fStack_128,uStack_124);
                        if (lVar10 == 0) goto code_r0x02f8d194;
                        if ((**(int **)(lVar10 + 0x10) != 0) && ((*(int **)(lVar10 + 0x10))[4] != 0)
                           ) {
                          *(undefined4 *)(lVar10 + 0x20) = uVar27;
                          *(undefined4 *)(lVar10 + 0x24) = uVar6;
                          lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          if (lVar9 == 0) goto code_r0x02f8d194;
                          if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                             (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (int)lVar10 != 0)) {
                            lVar16 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                            lVar9 = lVar9 + lVar10 * 0x24;
                            uVar6 = *(undefined4 *)(lVar9 + 0x24);
                            fVar23 = *(float *)(lVar9 + 0x28);
                            fVar21 = fStack_12c;
                            uVar27 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar9 + 0x20),uVar6,fVar23,
                                                     uStack_130,fStack_12c,fStack_128,uStack_124);
                            if (lVar16 == 0) goto code_r0x02f8d194;
                            if (((**(uint **)(lVar16 + 0x10) & 0xfffffffc) != 0) &&
                               (lVar9 = *(long *)(*(uint **)(lVar16 + 0x10) + 4), (int)lVar9 != 0))
                            {
                              lVar16 = lVar16 + lVar9 * 0x18;
                              *(undefined4 *)(lVar16 + 0x20) = uVar27;
                              *(undefined4 *)(lVar16 + 0x24) = uVar6;
                              lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar9 == 0) goto code_r0x02f8d194;
                              if ((**(int **)(lVar9 + 0x10) != 0) &&
                                 (((*(int **)(lVar9 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                lVar10 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                                uVar6 = *(undefined4 *)(lVar9 + 0x48);
                                fVar23 = *(float *)(lVar9 + 0x4c);
                                fVar21 = fStack_12c;
                                uVar27 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar9 + 0x44),uVar6,fVar23,
                                                         uStack_130,fStack_12c,fStack_128,uStack_124
                                                        );
                                if (lVar10 == 0) goto code_r0x02f8d194;
                                if ((**(int **)(lVar10 + 0x10) != 0) &&
                                   (((*(int **)(lVar10 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                  *(undefined4 *)(lVar10 + 0x38) = uVar27;
                                  *(undefined4 *)(lVar10 + 0x3c) = uVar6;
                                  lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                  if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                                     (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                                     (uVar12 & 0xfffffffc) != 0)) {
                                    lVar10 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                                    lVar9 = lVar9 + uVar12 * 0x24;
                                    uVar6 = *(undefined4 *)(lVar9 + 0x48);
                                    fVar23 = *(float *)(lVar9 + 0x4c);
                                    fVar21 = fStack_12c;
                                    uVar27 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar9 + 0x44),uVar6,
                                                             fVar23,uStack_130,fStack_12c,fStack_128
                                                             ,uStack_124);
                                    if (lVar10 == 0) goto code_r0x02f8d194;
                                    if (((**(uint **)(lVar10 + 0x10) & 0xfffffffc) != 0) &&
                                       (uVar12 = *(ulong *)(*(uint **)(lVar10 + 0x10) + 4),
                                       (uVar12 & 0xfffffffc) != 0)) {
                                      lVar10 = lVar10 + uVar12 * 0x18;
                                      *(undefined4 *)(lVar10 + 0x38) = uVar27;
                                      *(undefined4 *)(lVar10 + 0x3c) = uVar6;
                                      goto code_r0x02f8c5e0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    fStack_148 = fVar41 - fVar24;
                    fStack_144 = fVar47 - fStack_154;
                    fStack_150 = fVar43 - fVar39;
                    fStack_14c = fVar45 - fVar40;
                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_148,0);
                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_150,0);
                    fVar3 = fStack_144;
                    fVar36 = fStack_148;
                    fVar34 = fStack_14c;
                    fVar25 = fStack_150;
                    if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                    fVar21 = fVar49;
                    fVar23 = fVar48;
                    if (lVar9 == 0) goto code_r0x02f8d194;
                    if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) != 0) &&
                       (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (int)lVar10 != 0)) {
                      fVar28 = fVar20 * fVar48 + fVar41;
                      fVar32 = fVar20 * fVar49 + fVar47;
                      lVar9 = lVar9 + lVar10 * 0xc;
                      *(float *)(lVar9 + 0x20) = fVar28;
                      *(float *)(lVar9 + 0x24) = fVar32;
                      *(undefined4 *)(lVar9 + 0x28) = 0;
                      lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar9 == 0) goto code_r0x02f8d194;
                      if ((2 < **(uint **)(lVar9 + 0x10)) &&
                         (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (int)lVar10 != 0)) {
                        fVar23 = fVar43 - fVar4 * fVar48;
                        fVar48 = fVar45 - fVar4 * fVar49;
                        lVar9 = lVar9 + lVar10 * 0x18;
                        *(float *)(lVar9 + 0x20) = fVar23;
                        *(float *)(lVar9 + 0x24) = fVar48;
                        *(undefined4 *)(lVar9 + 0x28) = 0;
                        lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                        if (lVar9 == 0) goto code_r0x02f8d194;
                        if ((**(int **)(lVar9 + 0x10) != 0) &&
                           (((*(int **)(lVar9 + 0x10))[4] & 0xfffffffeU) != 0)) {
                          fVar49 = fStack_5c * fVar36;
                          fVar37 = fStack_5c * fVar3;
                          *(float *)(lVar9 + 0x2c) = fVar41 - fVar49;
                          *(float *)(lVar9 + 0x30) = fVar47 - fVar37;
                          *(undefined4 *)(lVar9 + 0x34) = 0;
                          lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          fVar21 = fStack_5c;
                          if (lVar9 == 0) goto code_r0x02f8d194;
                          if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) != 0) &&
                             (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                             (uVar12 & 0xfffffffe) != 0)) {
                            lVar9 = lVar9 + uVar12 * 0xc;
                            *(float *)(lVar9 + 0x2c) = fVar28 - fVar49;
                            *(float *)(lVar9 + 0x30) = fVar32 - fVar37;
                            *(undefined4 *)(lVar9 + 0x34) = 0;
                            lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                            if (lVar9 == 0) goto code_r0x02f8d194;
                            if ((2 < **(uint **)(lVar9 + 0x10)) &&
                               (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                               (uVar12 & 0xfffffffe) != 0)) {
                              fVar41 = fStack_5c * fVar25;
                              fVar47 = fStack_5c * fVar34;
                              fVar23 = fVar23 - fVar41;
                              lVar9 = lVar9 + (uVar12 << 1 | 1) * 0xc;
                              *(float *)(lVar9 + 0x20) = fVar23;
                              *(float *)(lVar9 + 0x24) = fVar48 - fVar47;
                              *(undefined4 *)(lVar9 + 0x28) = 0;
                              lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar9 == 0) goto code_r0x02f8d194;
                              if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                                 (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                                 (uVar12 & 0xfffffffe) != 0)) {
                                lVar9 = lVar9 + uVar12 * 0x24;
                                *(float *)(lVar9 + 0x2c) = fVar43 - fVar41;
                                *(float *)(lVar9 + 0x30) = fVar45 - fVar47;
                                *(undefined4 *)(lVar9 + 0x34) = 0;
                                lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                if (lVar9 == 0) goto code_r0x02f8d194;
                                if ((**(int **)(lVar9 + 0x10) != 0) &&
                                   (2 < (uint)(*(int **)(lVar9 + 0x10))[4])) {
                                  fVar36 = fStack_54 * fVar36;
                                  fVar21 = fStack_54 * fVar3;
                                  *(float *)(lVar9 + 0x38) = fVar24 + fVar36;
                                  *(float *)(lVar9 + 0x3c) = fStack_154 + fVar21;
                                  *(undefined4 *)(lVar9 + 0x40) = 0;
                                  lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  fVar23 = fStack_54;
                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                  if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) != 0) &&
                                     (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4),
                                     2 < (uint)lVar10)) {
                                    fVar24 = fVar20 * fVar26 + fVar24;
                                    fStack_154 = fVar20 * fVar38 + fStack_154;
                                    fVar21 = fStack_154 + fVar21;
                                    lVar9 = lVar9 + lVar10 * 0xc;
                                    *(float *)(lVar9 + 0x38) = fVar24 + fVar36;
                                    *(float *)(lVar9 + 0x3c) = fVar21;
                                    *(undefined4 *)(lVar9 + 0x40) = 0;
                                    lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                    if (lVar9 == 0) goto code_r0x02f8d194;
                                    if ((2 < **(uint **)(lVar9 + 0x10)) &&
                                       (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4),
                                       2 < (uint)lVar10)) {
                                      fVar21 = fStack_54 * fVar25;
                                      fVar34 = fStack_54 * fVar34;
                                      fVar23 = fVar39 - fVar4 * fVar26;
                                      fVar20 = fVar40 - fVar4 * fVar38;
                                      lVar9 = lVar9 + lVar10 * 0x18;
                                      *(float *)(lVar9 + 0x38) = fVar23 + fVar21;
                                      *(float *)(lVar9 + 0x3c) = fVar20 + fVar34;
                                      *(undefined4 *)(lVar9 + 0x40) = 0;
                                      lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                      if (lVar9 == 0) goto code_r0x02f8d194;
                                      if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0) &&
                                         (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4),
                                         2 < (uint)lVar10)) {
                                        fVar21 = fVar39 + fVar21;
                                        lVar9 = lVar9 + lVar10 * 0x24;
                                        *(float *)(lVar9 + 0x38) = fVar21;
                                        *(float *)(lVar9 + 0x3c) = fVar40 + fVar34;
                                        *(undefined4 *)(lVar9 + 0x40) = 0;
                                        lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                        if (lVar9 == 0) goto code_r0x02f8d194;
                                        fVar21 = param_5;
                                        if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) != 0) &&
                                           (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                                           (uVar12 & 0xfffffffc) != 0)) {
                                          lVar9 = lVar9 + uVar12 * 0xc;
                                          *(float *)(lVar9 + 0x44) = fVar24;
                                          *(float *)(lVar9 + 0x48) = fStack_154;
                                          *(undefined4 *)(lVar9 + 0x4c) = 0;
                                          lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                          if (lVar9 == 0) goto code_r0x02f8d194;
                                          if ((2 < **(uint **)(lVar9 + 0x10)) &&
                                             (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) + 4),
                                             (uVar12 & 0xfffffffc) != 0)) {
                                            lVar9 = lVar9 + uVar12 * 0x18;
                                            *(float *)(lVar9 + 0x44) = fVar23;
                                            *(float *)(lVar9 + 0x48) = fVar20;
                                            *(undefined4 *)(lVar9 + 0x4c) = 0;
                                            lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8)
                                                             + 8);
                                            if (lVar9 == 0) goto code_r0x02f8d194;
                                            if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) != 0) &&
                                               (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4),
                                               (int)lVar10 != 0)) {
                                              lVar9 = lVar9 + lVar10 * 8;
                                              *(undefined4 *)(lVar9 + 0x20) = uStack_80;
                                              *(float *)(lVar9 + 0x24) = param_6;
                                              lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                         0xb8) + 8);
                                              if (lVar9 == 0) goto code_r0x02f8d194;
                                              if ((2 < **(uint **)(lVar9 + 0x10)) &&
                                                 (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4),
                                                 (int)lVar10 != 0)) {
                                                lVar9 = lVar9 + lVar10 * 0x10;
                                                *(undefined4 *)(lVar9 + 0x20) =
                                                     (undefined4)uStack_78;
                                                *(float *)(lVar9 + 0x24) = param_6;
                                                lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                           0xb8) + 8);
                                                if (lVar9 == 0) goto code_r0x02f8d194;
                                                if ((**(int **)(lVar9 + 0x10) != 0) &&
                                                   (((*(int **)(lVar9 + 0x10))[4] & 0xfffffffeU) !=
                                                    0)) {
                                                  *(float *)(lVar9 + 0x28) = param_5;
                                                  *(float *)(lVar9 + 0x2c) = fStack_7c;
                                                  lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                             0xb8) + 8);
                                                  fVar23 = fStack_7c;
                                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) != 0
                                                      ) && (uVar12 = *(ulong *)(*(uint **)(lVar9 + 
                                                  0x10) + 4), (uVar12 & 0xfffffffe) != 0)) {
                                                    lVar9 = lVar9 + uVar12 * 8;
                                                    *(undefined4 *)(lVar9 + 0x28) = uStack_80;
                                                    *(float *)(lVar9 + 0x2c) = fStack_7c;
                                                    lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar9 == 0) goto code_r0x02f8d194;
                                                    if ((2 < **(uint **)(lVar9 + 0x10)) &&
                                                       (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10)
                                                                           + 4),
                                                       (uVar12 & 0xfffffffe) != 0)) {
                                                      lVar9 = lVar9 + uVar12 * 0x10;
                                                      *(undefined4 *)(lVar9 + 0x28) =
                                                           (undefined4)uStack_78;
                                                      *(float *)(lVar9 + 0x2c) = fStack_7c;
                                                      lVar9 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0
                                                      ) && (uVar12 = *(ulong *)(*(uint **)(lVar9 + 
                                                  0x10) + 4), (uVar12 & 0xfffffffe) != 0)) {
                                                    lVar9 = lVar9 + uVar12 * 0x18;
                                                    *(float *)(lVar9 + 0x28) = param_7;
                                                    *(float *)(lVar9 + 0x2c) = fStack_7c;
                                                    lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar9 == 0) goto code_r0x02f8d194;
                                                    if ((**(int **)(lVar9 + 0x10) != 0) &&
                                                       (2 < (uint)(*(int **)(lVar9 + 0x10))[4])) {
                                                      uVar12 = (ulong)(uint)uStack_78._4_4_;
                                                      *(float *)(lVar9 + 0x30) = param_5;
                                                      *(float *)(lVar9 + 0x34) = uStack_78._4_4_;
                                                      lVar9 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  fVar23 = uStack_78._4_4_;
                                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) != 0
                                                      ) && (lVar10 = *(long *)(*(uint **)(lVar9 + 
                                                  0x10) + 4), 2 < (uint)lVar10)) {
                                                    lVar9 = lVar9 + lVar10 * 8;
                                                    *(undefined4 *)(lVar9 + 0x30) = uStack_80;
                                                    *(float *)(lVar9 + 0x34) = uStack_78._4_4_;
                                                    lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar9 == 0) goto code_r0x02f8d194;
                                                    if ((2 < **(uint **)(lVar9 + 0x10)) &&
                                                       (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10)
                                                                          + 4), 2 < (uint)lVar10)) {
                                                      lVar9 = lVar9 + lVar10 * 0x10;
                                                      *(undefined4 *)(lVar9 + 0x30) =
                                                           (undefined4)uStack_78;
                                                      *(float *)(lVar9 + 0x34) = uStack_78._4_4_;
                                                      lVar9 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                                  if (((**(uint **)(lVar9 + 0x10) & 0xfffffffc) != 0
                                                      ) && (lVar10 = *(long *)(*(uint **)(lVar9 + 
                                                  0x10) + 4), 2 < (uint)lVar10)) {
                                                    lVar9 = lVar9 + lVar10 * 0x18;
                                                    *(float *)(lVar9 + 0x30) = param_7;
                                                    *(float *)(lVar9 + 0x34) = uStack_78._4_4_;
                                                    lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar9 == 0) goto code_r0x02f8d194;
                                                    if (((**(uint **)(lVar9 + 0x10) & 0xfffffffe) !=
                                                         0) && (uVar13 = *(ulong *)(*(uint **)(lVar9
                                                                                              + 0x10
                                                  ) + 4), (uVar13 & 0xfffffffc) != 0)) {
                                                    lVar9 = lVar9 + uVar13 * 8;
                                                    *(undefined4 *)(lVar9 + 0x38) = uStack_80;
                                                    *(float *)(lVar9 + 0x3c) = param_8;
                                                    lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar9 == 0) goto code_r0x02f8d194;
                                                    if ((2 < **(uint **)(lVar9 + 0x10)) &&
                                                       (uVar13 = *(ulong *)(*(uint **)(lVar9 + 0x10)
                                                                           + 4),
                                                       (uVar13 & 0xfffffffc) != 0)) {
                                                      uVar17 = 0;
                                                      lVar9 = lVar9 + uVar13 * 0x10;
                                                      *(undefined4 *)(lVar9 + 0x38) =
                                                           (undefined4)uStack_78;
                                                      *(float *)(lVar9 + 0x3c) = param_8;
                                                      do {
                                                        uVar13 = 0;
                                                        do {
                                                          fVar23 = (float)uVar12;
                                                          fVar21 = param_5;
                                                          if (((*(ushort *)
                                                                 (/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >>
                                                                10 & 1) != 0) &&
                                                             (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0)
                                                              == 0)) {
                                                            func_0x00f78ad0();
                                                            fVar21 = param_5;
                                                          }
                                                          lVar9 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                             0xb8);
                                                          if (lVar9 == 0) goto code_r0x02f8d194;
                                                          if ((**(uint **)(lVar9 + 0x10) <= uVar13)
                                                             || (uVar12 = *(ulong *)(*(uint **)(
                                                  lVar9 + 0x10) + 4),
                                                  (uVar12 & 0xffffffff) <= uVar17))
                                                  goto code_r0x02f8d188;
                                                  lVar9 = lVar9 + (uVar17 + uVar12 * uVar13) * 0xc;
                                                  uVar42 = *(undefined4 *)(lVar9 + 0x20);
                                                  uVar44 = *(undefined4 *)(lVar9 + 0x24);
                                                  uVar46 = *(uint *)(lVar9 + 0x28);
                                                  uVar27 = uVar35;
                                                  fVar23 = fVar22;
                                                  uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uVar14,uVar19,fVar22,
                                                                          uVar35,0);
                                                  lVar9 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                             0xb8) + 8);
                                                  if (lVar9 == 0) goto code_r0x02f8d194;
                                                  if ((**(uint **)(lVar9 + 0x10) <= uVar13) ||
                                                     (uVar12 = *(ulong *)(*(uint **)(lVar9 + 0x10) +
                                                                         4),
                                                     (uVar12 & 0xffffffff) <= uVar17))
                                                  goto code_r0x02f8d188;
                                                  uVar30 = *(undefined8 *)
                                                            (lVar9 + (uVar17 + uVar12 * uVar13) * 8
                                                            + 0x20);
                                                  uVar33 = *(undefined8 *)(lVar7 + 0x154);
                                                  param_5 = (float)((ulong)*(undefined8 *)
                                                                            (lVar7 + 0x110) >> 0x20)
                                                            + (float)((ulong)uVar30 >> 0x20) *
                                                              (float)((ulong)uVar33 >> 0x20);
                                                  uVar29 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(param_5,(float)*
                                                  (undefined8 *)(lVar7 + 0x110) +
                                                  (float)uVar30 * (float)uVar33),param_5,0);
                                                  uVar12 = (ulong)uVar46;
                                                  /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar42,uVar44,uVar12,uVar29,
                                                                  param_5,(int)uVar33,uVar27,
                                                                  param_11,uVar6,0);
                                                  uVar13 = uVar13 + 1;
                                                  } while (uVar13 != 4);
                                                  uVar17 = uVar17 + 1;
                                                  if (uVar17 == 4) {
                                                    iVar15 = 0;
                                                    do {
                                                      iVar18 = 0;
                                                      do {
                                                        iVar2 = (int)uVar11 + iVar18;
                                                        /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,iVar2,iVar2 + 4,
                                                                        iVar2 + 5,0);
                                                        auVar31 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,iVar2 + 5
                                                                                  ,iVar2 + 1,iVar2,0
                                                                                 );
                                                        iVar18 = iVar18 + 1;
                                                      } while (iVar18 != 3);
                                                      iVar15 = iVar15 + 1;
                                                      uVar11 = (ulong)((int)uVar11 + 4);
                                                    } while (iVar15 != 3);
                                                    return auVar31;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x02f8d188:
  uVar30 = func_0x00f78b24();
  func_0x00f78ac0(uVar30,0);
code_r0x02f8d194:
  fVar20 = (float)func_0x00f78af4();
  return ZEXT416((uint)(fVar23 + fVar20 * fVar21));
}



// ============================================================
// RVA: 0x2f8bf64 | Core.UI2.UISlantElement.AddLayer
// ============================================================

undefined1  [16]
Core_UI2_UISlantElement__AddLayer
          (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9,int param_10,
          long param_11)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uStack0000000000000000;
  float fStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  uStack_b0 = param_1;
  fStack_ac = param_2;
  uStack_a8 = param_3;
  uStack_a4 = param_4;
  if ((bRam0000000003ebc682 & 1) == 0) {
    func_0x00f78a20(0x3d255e8);
    bRam0000000003ebc682 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  fVar14 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_b0,0);
  fVar15 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_b0,0);
  fVar16 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_b0,0);
  fVar17 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_b0,0);
  fVar30 = fStack0000000000000044 + (fVar15 - fStack0000000000000018) +
           *(float *)(param_9 + 0x128) + fStack0000000000000040;
  fVar31 = in_stack_00000048 + (fVar16 - fStack000000000000001c) +
           *(float *)(param_9 + 300) + fStack0000000000000040;
  fVar25 = (fStack0000000000000010 + fStack0000000000000044) -
           (*(float *)(param_9 + 0x120) + fStack0000000000000040);
  fStack_d4 = in_stack_00000048 + (fVar14 - fStack000000000000001c) +
              *(float *)(param_9 + 0x124) + fStack0000000000000040;
  fVar32 = (fStack0000000000000010 + fStack0000000000000044) -
           (*(float *)(param_9 + 0x138) + fStack0000000000000040);
  fVar38 = (fStack0000000000000014 + in_stack_00000048) -
           (*(float *)(param_9 + 0x13c) + fStack0000000000000040);
  fVar34 = fStack0000000000000044 + (fVar17 - fStack0000000000000018) +
           *(float *)(param_9 + 0x130) + fStack0000000000000040;
  fVar36 = (fStack0000000000000014 + in_stack_00000048) -
           (*(float *)(param_9 + 0x134) + fStack0000000000000040);
  uStack_b8._0_4_ = fVar30 - fVar25;
  uStack_b8._4_4_ = fVar31 - fStack_d4;
  uStack_c0._0_4_ = fVar34 - fVar32;
  uStack_c0._4_4_ = fVar36 - fVar38;
  fVar14 = fStack_d4;
  fVar15 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_b8,0);
  fVar16 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_c0,0);
  fVar27 = (float)uStack_b8 / fVar15;
  fVar29 = uStack_b8._4_4_ / fVar15;
  fVar39 = (float)uStack_c0 / fVar16;
  fVar17 = *(float *)(param_9 + 0x140);
  fVar40 = uStack_c0._4_4_ / fVar16;
  if ((0.0 < fVar17) || (*(float *)(param_9 + 0x144) < 1.0)) {
    fVar26 = fStack0000000000000020 + fStack0000000000000028 + *(float *)(param_9 + 0x148);
    fVar14 = fVar15 - fVar26;
    fVar16 = fVar16 - fVar26;
    fVar25 = fVar25 + fVar27 * fVar17 * fVar14;
    fStack_d4 = fStack_d4 + fVar29 * fVar17 * fVar14;
    fVar17 = fVar17 * fVar16;
    fVar32 = fVar32 + fVar39 * fVar17;
    fVar38 = fVar38 + fVar40 * fVar17;
    fVar15 = 1.0 - *(float *)(param_9 + 0x144);
    fVar17 = fVar14 * fVar15;
    fVar30 = fVar30 - fVar27 * fVar17;
    fVar31 = fVar31 - fVar29 * fVar17;
    fVar16 = fVar16 * fVar15;
    fVar34 = fVar34 - fVar39 * fVar16;
    fVar36 = fVar36 - fVar40 * fVar16;
  }
  if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
  fVar15 = param_5;
  if (lVar5 == 0) goto LAB_02f8d194;
  if ((**(int **)(lVar5 + 0x10) != 0) && ((*(int **)(lVar5 + 0x10))[4] != 0)) {
    *(float *)(lVar5 + 0x20) = fVar32;
    *(float *)(lVar5 + 0x24) = fVar38;
    *(undefined4 *)(lVar5 + 0x28) = 0;
    lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
    if (lVar5 == 0) goto LAB_02f8d194;
    if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
       (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 != 0)) {
      lVar5 = lVar5 + lVar6 * 0x24;
      *(float *)(lVar5 + 0x20) = fVar34;
      *(float *)(lVar5 + 0x24) = fVar36;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
      if (lVar5 == 0) goto LAB_02f8d194;
      if ((**(int **)(lVar5 + 0x10) != 0) && (((*(int **)(lVar5 + 0x10))[4] & 0xfffffffcU) != 0)) {
        *(float *)(lVar5 + 0x44) = fVar25;
        *(float *)(lVar5 + 0x48) = fStack_d4;
        *(undefined4 *)(lVar5 + 0x4c) = 0;
        lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
        fVar14 = fStack_d4;
        if (lVar5 == 0) goto LAB_02f8d194;
        if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
           (uVar7 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4), (uVar7 & 0xfffffffc) != 0)) {
          lVar5 = lVar5 + uVar7 * 0x24;
          *(float *)(lVar5 + 0x44) = fVar30;
          *(float *)(lVar5 + 0x48) = fVar31;
          *(undefined4 *)(lVar5 + 0x4c) = 0;
          lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
          if (lVar5 == 0) goto LAB_02f8d194;
          if ((**(int **)(lVar5 + 0x10) != 0) && ((*(int **)(lVar5 + 0x10))[4] != 0)) {
            *(float *)(lVar5 + 0x20) = param_5;
            *(undefined4 *)(lVar5 + 0x24) = param_6;
            lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
            if (lVar5 == 0) goto LAB_02f8d194;
            if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
               (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 != 0)) {
              lVar5 = lVar5 + lVar6 * 0x18;
              *(undefined4 *)(lVar5 + 0x20) = param_7;
              *(undefined4 *)(lVar5 + 0x24) = param_6;
              lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
              if (lVar5 == 0) goto LAB_02f8d194;
              if ((**(int **)(lVar5 + 0x10) != 0) &&
                 (((*(int **)(lVar5 + 0x10))[4] & 0xfffffffcU) != 0)) {
                *(float *)(lVar5 + 0x38) = param_5;
                *(undefined4 *)(lVar5 + 0x3c) = param_8;
                lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                if (lVar5 == 0) goto LAB_02f8d194;
                if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                   (uVar7 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4), (uVar7 & 0xfffffffc) != 0)) {
                  lVar5 = lVar5 + uVar7 * 0x18;
                  *(undefined4 *)(lVar5 + 0x38) = param_7;
                  *(undefined4 *)(lVar5 + 0x3c) = param_8;
                  if (param_11 == 0) goto LAB_02f8d194;
                  uVar7 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_11,0);
                  if (param_10 == 0) {
                    if (*(char *)(param_9 + 0x108) == '\0') {
code_r0x02f8c5e0:
                      if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar5 == 0) goto LAB_02f8d194;
                      if ((**(int **)(lVar5 + 0x10) != 0) && ((*(int **)(lVar5 + 0x10))[4] != 0)) {
                        uVar33 = *(undefined4 *)(lVar5 + 0x20);
                        uVar35 = *(undefined4 *)(lVar5 + 0x24);
                        fVar16 = *(float *)(lVar5 + 0x28);
                        uVar18 = uStack000000000000003c;
                        fVar15 = fStack0000000000000038;
                        uVar4 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uStack0000000000000030,uStack0000000000000034,
                                                fStack0000000000000038,uStack000000000000003c,0);
                        lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                        if (lVar5 == 0) goto LAB_02f8d194;
                        if ((**(int **)(lVar5 + 0x10) != 0) && ((*(int **)(lVar5 + 0x10))[4] != 0))
                        {
                          puVar1 = (undefined8 *)(param_9 + 0x154);
                          uVar21 = *puVar1;
                          fVar14 = (float)((ulong)*(undefined8 *)(param_9 + 0x110) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) *
                                   (float)((ulong)uVar21 >> 0x20);
                          uVar20 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar14,(float)*(undefined8 *)
                                                                           (param_9 + 0x110) +
                                                                   (float)*(undefined8 *)
                                                                           (lVar5 + 0x20) *
                                                                   (float)uVar21),fVar14,0);
                          fVar15 = fVar16;
                          /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar33,uVar35,fVar16,uVar20,fVar14,(int)uVar21,uVar18,
                                          param_11,uVar4,0);
                          lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          if (lVar5 == 0) goto LAB_02f8d194;
                          if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                             (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 != 0)) {
                            lVar5 = lVar5 + lVar6 * 0x24;
                            uVar33 = *(undefined4 *)(lVar5 + 0x20);
                            uVar35 = *(undefined4 *)(lVar5 + 0x24);
                            fVar16 = *(float *)(lVar5 + 0x28);
                            uVar18 = uStack000000000000003c;
                            fVar15 = fStack0000000000000038;
                            uVar4 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uStack0000000000000030,uStack0000000000000034,
                                                    fStack0000000000000038,uStack000000000000003c,0)
                            ;
                            lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                            if (lVar5 == 0) goto LAB_02f8d194;
                            if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                               (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 != 0)) {
                              uVar21 = *(undefined8 *)(lVar5 + lVar6 * 0x18 + 0x20);
                              uVar24 = *puVar1;
                              fVar14 = (float)((ulong)*(undefined8 *)(param_9 + 0x110) >> 0x20) +
                                       (float)((ulong)uVar21 >> 0x20) *
                                       (float)((ulong)uVar24 >> 0x20);
                              uVar20 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar14,(float)*(undefined8 *)
                                                                               (param_9 + 0x110) +
                                                                       (float)uVar21 * (float)uVar24
                                                               ),fVar14,0);
                              fVar15 = fVar16;
                              /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar33,uVar35,fVar16,uVar20,fVar14,(int)uVar24,uVar18,
                                              param_11,uVar4,0);
                              lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar5 == 0) goto LAB_02f8d194;
                              if ((**(int **)(lVar5 + 0x10) != 0) &&
                                 (((*(int **)(lVar5 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                uVar33 = *(undefined4 *)(lVar5 + 0x44);
                                uVar35 = *(undefined4 *)(lVar5 + 0x48);
                                fVar16 = *(float *)(lVar5 + 0x4c);
                                uVar18 = uStack000000000000003c;
                                fVar15 = fStack0000000000000038;
                                uVar4 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uStack0000000000000030,
                                                        uStack0000000000000034,
                                                        fStack0000000000000038,
                                                        uStack000000000000003c,0);
                                lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                if (lVar5 == 0) goto LAB_02f8d194;
                                if ((**(int **)(lVar5 + 0x10) != 0) &&
                                   (((*(int **)(lVar5 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                  uVar21 = *puVar1;
                                  fVar14 = (float)((ulong)*(undefined8 *)(param_9 + 0x110) >> 0x20)
                                           + (float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20) *
                                             (float)((ulong)uVar21 >> 0x20);
                                  uVar20 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar14,(float)*(undefined8 *)
                                                                                   (param_9 + 0x110)
                                                                           + (float)*(undefined8 *)
                                                                                     (lVar5 + 0x38)
                                                                             * (float)uVar21),fVar14
                                                           ,0);
                                  fVar15 = fVar16;
                                  /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar33,uVar35,fVar16,uVar20,fVar14,(int)uVar21,
                                                  uVar18,param_11,uVar4,0);
                                  lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  if (lVar5 == 0) goto LAB_02f8d194;
                                  if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                                     (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                                     (uVar8 & 0xfffffffc) != 0)) {
                                    lVar5 = lVar5 + uVar8 * 0x24;
                                    uVar4 = *(undefined4 *)(lVar5 + 0x44);
                                    uVar33 = *(undefined4 *)(lVar5 + 0x48);
                                    uVar35 = *(undefined4 *)(lVar5 + 0x4c);
                                    fVar15 = fStack0000000000000038;
                                    uVar18 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uStack0000000000000030,
                                                             uStack0000000000000034,
                                                             fStack0000000000000038,
                                                             uStack000000000000003c,0);
                                    lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                    if (lVar5 == 0) goto LAB_02f8d194;
                                    if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                                       (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                                       (uVar8 & 0xfffffffc) != 0)) {
                                      uVar21 = *(undefined8 *)(lVar5 + uVar8 * 0x18 + 0x38);
                                      uVar24 = *puVar1;
                                      fVar14 = (float)((ulong)*(undefined8 *)(param_9 + 0x110) >>
                                                      0x20) +
                                               (float)((ulong)uVar21 >> 0x20) *
                                               (float)((ulong)uVar24 >> 0x20);
                                      uVar20 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(fVar14,(float)*(undefined8 *
                                                                                       )(param_9 +
                                                                                        0x110) +
                                                                               (float)uVar21 *
                                                                               (float)uVar24),fVar14
                                                               ,0);
                                      /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar4,uVar33,uVar35,uVar20,fVar14,(int)uVar24,
                                                      uStack000000000000003c,param_11,uVar18,0);
                                      iVar10 = (int)uVar7;
                                      /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,uVar7,iVar10 + 2,iVar10 + 3,0);
                                      auVar22 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,iVar10 + 3,iVar10 + 1,uVar7
                                                                ,0);
                                      return auVar22;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar5 == 0) goto LAB_02f8d194;
                      if ((**(int **)(lVar5 + 0x10) != 0) && ((*(int **)(lVar5 + 0x10))[4] != 0)) {
                        lVar6 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                        uVar4 = *(undefined4 *)(lVar5 + 0x24);
                        fVar15 = *(float *)(lVar5 + 0x28);
                        fVar14 = fStack_ac;
                        uVar18 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar5 + 0x20),uVar4,fVar15,
                                                 uStack_b0,fStack_ac,uStack_a8,uStack_a4);
                        if (lVar6 == 0) goto LAB_02f8d194;
                        if ((**(int **)(lVar6 + 0x10) != 0) && ((*(int **)(lVar6 + 0x10))[4] != 0))
                        {
                          *(undefined4 *)(lVar6 + 0x20) = uVar18;
                          *(undefined4 *)(lVar6 + 0x24) = uVar4;
                          lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          if (lVar5 == 0) goto LAB_02f8d194;
                          if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                             (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 != 0)) {
                            lVar11 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                            lVar5 = lVar5 + lVar6 * 0x24;
                            uVar4 = *(undefined4 *)(lVar5 + 0x24);
                            fVar15 = *(float *)(lVar5 + 0x28);
                            fVar14 = fStack_ac;
                            uVar18 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar5 + 0x20),uVar4,fVar15,
                                                     uStack_b0,fStack_ac,uStack_a8,uStack_a4);
                            if (lVar11 == 0) goto LAB_02f8d194;
                            if (((**(uint **)(lVar11 + 0x10) & 0xfffffffc) != 0) &&
                               (lVar5 = *(long *)(*(uint **)(lVar11 + 0x10) + 4), (int)lVar5 != 0))
                            {
                              lVar11 = lVar11 + lVar5 * 0x18;
                              *(undefined4 *)(lVar11 + 0x20) = uVar18;
                              *(undefined4 *)(lVar11 + 0x24) = uVar4;
                              lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar5 == 0) goto LAB_02f8d194;
                              if ((**(int **)(lVar5 + 0x10) != 0) &&
                                 (((*(int **)(lVar5 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                lVar6 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                                uVar4 = *(undefined4 *)(lVar5 + 0x48);
                                fVar15 = *(float *)(lVar5 + 0x4c);
                                fVar14 = fStack_ac;
                                uVar18 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar5 + 0x44),uVar4,fVar15,
                                                         uStack_b0,fStack_ac,uStack_a8,uStack_a4);
                                if (lVar6 == 0) goto LAB_02f8d194;
                                if ((**(int **)(lVar6 + 0x10) != 0) &&
                                   (((*(int **)(lVar6 + 0x10))[4] & 0xfffffffcU) != 0)) {
                                  *(undefined4 *)(lVar6 + 0x38) = uVar18;
                                  *(undefined4 *)(lVar6 + 0x3c) = uVar4;
                                  lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  if (lVar5 == 0) goto LAB_02f8d194;
                                  if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                                     (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                                     (uVar8 & 0xfffffffc) != 0)) {
                                    lVar6 = (*(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8))[1];
                                    lVar5 = lVar5 + uVar8 * 0x24;
                                    uVar4 = *(undefined4 *)(lVar5 + 0x48);
                                    fVar15 = *(float *)(lVar5 + 0x4c);
                                    fVar14 = fStack_ac;
                                    uVar18 = /*Core.UI2.UISlantElement$$CalculateUV*/ func_0x02f8d1ac(*(undefined4 *)(lVar5 + 0x44),uVar4,
                                                             fVar15,uStack_b0,fStack_ac,uStack_a8,
                                                             uStack_a4);
                                    if (lVar6 == 0) goto LAB_02f8d194;
                                    if (((**(uint **)(lVar6 + 0x10) & 0xfffffffc) != 0) &&
                                       (uVar8 = *(ulong *)(*(uint **)(lVar6 + 0x10) + 4),
                                       (uVar8 & 0xfffffffc) != 0)) {
                                      lVar6 = lVar6 + uVar8 * 0x18;
                                      *(undefined4 *)(lVar6 + 0x38) = uVar18;
                                      *(undefined4 *)(lVar6 + 0x3c) = uVar4;
                                      goto code_r0x02f8c5e0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    fStack_c8 = fVar32 - fVar25;
                    fStack_c4 = fVar38 - fStack_d4;
                    fStack_d0 = fVar34 - fVar30;
                    fStack_cc = fVar36 - fVar31;
                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_c8,0);
                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_d0,0);
                    fVar3 = fStack_c4;
                    fVar26 = fStack_c8;
                    fVar17 = fStack_cc;
                    fVar16 = fStack_d0;
                    if (((*(ushort *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                    fVar14 = fVar40;
                    fVar15 = fVar39;
                    if (lVar5 == 0) goto LAB_02f8d194;
                    if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) != 0) &&
                       (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 != 0)) {
                      fVar19 = fStack0000000000000020 * fVar39 + fVar32;
                      fVar23 = fStack0000000000000020 * fVar40 + fVar38;
                      lVar5 = lVar5 + lVar6 * 0xc;
                      *(float *)(lVar5 + 0x20) = fVar19;
                      *(float *)(lVar5 + 0x24) = fVar23;
                      *(undefined4 *)(lVar5 + 0x28) = 0;
                      lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                      if (lVar5 == 0) goto LAB_02f8d194;
                      if ((2 < **(uint **)(lVar5 + 0x10)) &&
                         (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 != 0)) {
                        fVar15 = fVar34 - fStack0000000000000028 * fVar39;
                        fVar39 = fVar36 - fStack0000000000000028 * fVar40;
                        lVar5 = lVar5 + lVar6 * 0x18;
                        *(float *)(lVar5 + 0x20) = fVar15;
                        *(float *)(lVar5 + 0x24) = fVar39;
                        *(undefined4 *)(lVar5 + 0x28) = 0;
                        lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                        if (lVar5 == 0) goto LAB_02f8d194;
                        if ((**(int **)(lVar5 + 0x10) != 0) &&
                           (((*(int **)(lVar5 + 0x10))[4] & 0xfffffffeU) != 0)) {
                          fVar40 = fStack0000000000000024 * fVar26;
                          fVar28 = fStack0000000000000024 * fVar3;
                          *(float *)(lVar5 + 0x2c) = fVar32 - fVar40;
                          *(float *)(lVar5 + 0x30) = fVar38 - fVar28;
                          *(undefined4 *)(lVar5 + 0x34) = 0;
                          lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                          fVar14 = fStack0000000000000024;
                          if (lVar5 == 0) goto LAB_02f8d194;
                          if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) != 0) &&
                             (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                             (uVar8 & 0xfffffffe) != 0)) {
                            lVar5 = lVar5 + uVar8 * 0xc;
                            *(float *)(lVar5 + 0x2c) = fVar19 - fVar40;
                            *(float *)(lVar5 + 0x30) = fVar23 - fVar28;
                            *(undefined4 *)(lVar5 + 0x34) = 0;
                            lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                            if (lVar5 == 0) goto LAB_02f8d194;
                            if ((2 < **(uint **)(lVar5 + 0x10)) &&
                               (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                               (uVar8 & 0xfffffffe) != 0)) {
                              fVar32 = fStack0000000000000024 * fVar16;
                              fStack0000000000000024 = fStack0000000000000024 * fVar17;
                              fVar15 = fVar15 - fVar32;
                              lVar5 = lVar5 + (uVar8 << 1 | 1) * 0xc;
                              *(float *)(lVar5 + 0x20) = fVar15;
                              *(float *)(lVar5 + 0x24) = fVar39 - fStack0000000000000024;
                              *(undefined4 *)(lVar5 + 0x28) = 0;
                              lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                              if (lVar5 == 0) goto LAB_02f8d194;
                              if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                                 (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                                 (uVar8 & 0xfffffffe) != 0)) {
                                lVar5 = lVar5 + uVar8 * 0x24;
                                *(float *)(lVar5 + 0x2c) = fVar34 - fVar32;
                                *(float *)(lVar5 + 0x30) = fVar36 - fStack0000000000000024;
                                *(undefined4 *)(lVar5 + 0x34) = 0;
                                lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                if (lVar5 == 0) goto LAB_02f8d194;
                                if ((**(int **)(lVar5 + 0x10) != 0) &&
                                   (2 < (uint)(*(int **)(lVar5 + 0x10))[4])) {
                                  fVar26 = fStack000000000000002c * fVar26;
                                  fVar14 = fStack000000000000002c * fVar3;
                                  *(float *)(lVar5 + 0x38) = fVar25 + fVar26;
                                  *(float *)(lVar5 + 0x3c) = fStack_d4 + fVar14;
                                  *(undefined4 *)(lVar5 + 0x40) = 0;
                                  lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                  fVar15 = fStack000000000000002c;
                                  if (lVar5 == 0) goto LAB_02f8d194;
                                  if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) != 0) &&
                                     (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4),
                                     2 < (uint)lVar6)) {
                                    fVar25 = fStack0000000000000020 * fVar27 + fVar25;
                                    fStack_d4 = fStack0000000000000020 * fVar29 + fStack_d4;
                                    fVar14 = fStack_d4 + fVar14;
                                    lVar5 = lVar5 + lVar6 * 0xc;
                                    *(float *)(lVar5 + 0x38) = fVar25 + fVar26;
                                    *(float *)(lVar5 + 0x3c) = fVar14;
                                    *(undefined4 *)(lVar5 + 0x40) = 0;
                                    lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                    if (lVar5 == 0) goto LAB_02f8d194;
                                    if ((2 < **(uint **)(lVar5 + 0x10)) &&
                                       (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4),
                                       2 < (uint)lVar6)) {
                                      fVar14 = fStack000000000000002c * fVar16;
                                      fStack000000000000002c = fStack000000000000002c * fVar17;
                                      fVar15 = fVar30 - fStack0000000000000028 * fVar27;
                                      fVar16 = fVar31 - fStack0000000000000028 * fVar29;
                                      lVar5 = lVar5 + lVar6 * 0x18;
                                      *(float *)(lVar5 + 0x38) = fVar15 + fVar14;
                                      *(float *)(lVar5 + 0x3c) = fVar16 + fStack000000000000002c;
                                      *(undefined4 *)(lVar5 + 0x40) = 0;
                                      lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                      if (lVar5 == 0) goto LAB_02f8d194;
                                      if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0) &&
                                         (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4),
                                         2 < (uint)lVar6)) {
                                        fVar14 = fVar30 + fVar14;
                                        lVar5 = lVar5 + lVar6 * 0x24;
                                        *(float *)(lVar5 + 0x38) = fVar14;
                                        *(float *)(lVar5 + 0x3c) = fVar31 + fStack000000000000002c;
                                        *(undefined4 *)(lVar5 + 0x40) = 0;
                                        lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                        if (lVar5 == 0) goto LAB_02f8d194;
                                        fVar14 = param_5;
                                        if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) != 0) &&
                                           (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                                           (uVar8 & 0xfffffffc) != 0)) {
                                          lVar5 = lVar5 + uVar8 * 0xc;
                                          *(float *)(lVar5 + 0x44) = fVar25;
                                          *(float *)(lVar5 + 0x48) = fStack_d4;
                                          *(undefined4 *)(lVar5 + 0x4c) = 0;
                                          lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8);
                                          if (lVar5 == 0) goto LAB_02f8d194;
                                          if ((2 < **(uint **)(lVar5 + 0x10)) &&
                                             (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) + 4),
                                             (uVar8 & 0xfffffffc) != 0)) {
                                            lVar5 = lVar5 + uVar8 * 0x18;
                                            *(float *)(lVar5 + 0x44) = fVar15;
                                            *(float *)(lVar5 + 0x48) = fVar16;
                                            *(undefined4 *)(lVar5 + 0x4c) = 0;
                                            lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8)
                                                             + 8);
                                            if (lVar5 == 0) goto LAB_02f8d194;
                                            if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) != 0) &&
                                               (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4),
                                               (int)lVar6 != 0)) {
                                              lVar5 = lVar5 + lVar6 * 8;
                                              *(undefined4 *)(lVar5 + 0x20) = uStack0000000000000000
                                              ;
                                              *(undefined4 *)(lVar5 + 0x24) = param_6;
                                              lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                         0xb8) + 8);
                                              if (lVar5 == 0) goto LAB_02f8d194;
                                              if ((2 < **(uint **)(lVar5 + 0x10)) &&
                                                 (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4),
                                                 (int)lVar6 != 0)) {
                                                lVar5 = lVar5 + lVar6 * 0x10;
                                                *(undefined4 *)(lVar5 + 0x20) =
                                                     uStack0000000000000008;
                                                *(undefined4 *)(lVar5 + 0x24) = param_6;
                                                lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                           0xb8) + 8);
                                                if (lVar5 == 0) goto LAB_02f8d194;
                                                if ((**(int **)(lVar5 + 0x10) != 0) &&
                                                   (((*(int **)(lVar5 + 0x10))[4] & 0xfffffffeU) !=
                                                    0)) {
                                                  *(float *)(lVar5 + 0x28) = param_5;
                                                  *(float *)(lVar5 + 0x2c) = fStack0000000000000004;
                                                  lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                             0xb8) + 8);
                                                  fVar15 = fStack0000000000000004;
                                                  if (lVar5 == 0) goto LAB_02f8d194;
                                                  if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) != 0
                                                      ) && (uVar8 = *(ulong *)(*(uint **)(lVar5 + 
                                                  0x10) + 4), (uVar8 & 0xfffffffe) != 0)) {
                                                    lVar5 = lVar5 + uVar8 * 8;
                                                    *(undefined4 *)(lVar5 + 0x28) =
                                                         uStack0000000000000000;
                                                    *(float *)(lVar5 + 0x2c) =
                                                         fStack0000000000000004;
                                                    lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar5 == 0) goto LAB_02f8d194;
                                                    if ((2 < **(uint **)(lVar5 + 0x10)) &&
                                                       (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10)
                                                                          + 4),
                                                       (uVar8 & 0xfffffffe) != 0)) {
                                                      lVar5 = lVar5 + uVar8 * 0x10;
                                                      *(undefined4 *)(lVar5 + 0x28) =
                                                           uStack0000000000000008;
                                                      *(float *)(lVar5 + 0x2c) =
                                                           fStack0000000000000004;
                                                      lVar5 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar5 == 0) goto LAB_02f8d194;
                                                  if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0
                                                      ) && (uVar8 = *(ulong *)(*(uint **)(lVar5 + 
                                                  0x10) + 4), (uVar8 & 0xfffffffe) != 0)) {
                                                    lVar5 = lVar5 + uVar8 * 0x18;
                                                    *(undefined4 *)(lVar5 + 0x28) = param_7;
                                                    *(float *)(lVar5 + 0x2c) =
                                                         fStack0000000000000004;
                                                    lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar5 == 0) goto LAB_02f8d194;
                                                    if ((**(int **)(lVar5 + 0x10) != 0) &&
                                                       (2 < (uint)(*(int **)(lVar5 + 0x10))[4])) {
                                                      uVar8 = (ulong)(uint)fStack000000000000000c;
                                                      *(float *)(lVar5 + 0x30) = param_5;
                                                      *(float *)(lVar5 + 0x34) =
                                                           fStack000000000000000c;
                                                      lVar5 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  fVar15 = fStack000000000000000c;
                                                  if (lVar5 == 0) goto LAB_02f8d194;
                                                  if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) != 0
                                                      ) && (lVar6 = *(long *)(*(uint **)(lVar5 + 
                                                  0x10) + 4), 2 < (uint)lVar6)) {
                                                    lVar5 = lVar5 + lVar6 * 8;
                                                    *(undefined4 *)(lVar5 + 0x30) =
                                                         uStack0000000000000000;
                                                    *(float *)(lVar5 + 0x34) =
                                                         fStack000000000000000c;
                                                    lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar5 == 0) goto LAB_02f8d194;
                                                    if ((2 < **(uint **)(lVar5 + 0x10)) &&
                                                       (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) +
                                                                         4), 2 < (uint)lVar6)) {
                                                      lVar5 = lVar5 + lVar6 * 0x10;
                                                      *(undefined4 *)(lVar5 + 0x30) =
                                                           uStack0000000000000008;
                                                      *(float *)(lVar5 + 0x34) =
                                                           fStack000000000000000c;
                                                      lVar5 = *(long *)(*(long *)(
                                                  /*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8);
                                                  if (lVar5 == 0) goto LAB_02f8d194;
                                                  if (((**(uint **)(lVar5 + 0x10) & 0xfffffffc) != 0
                                                      ) && (lVar6 = *(long *)(*(uint **)(lVar5 + 
                                                  0x10) + 4), 2 < (uint)lVar6)) {
                                                    lVar5 = lVar5 + lVar6 * 0x18;
                                                    *(undefined4 *)(lVar5 + 0x30) = param_7;
                                                    *(float *)(lVar5 + 0x34) =
                                                         fStack000000000000000c;
                                                    lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar5 == 0) goto LAB_02f8d194;
                                                    if (((**(uint **)(lVar5 + 0x10) & 0xfffffffe) !=
                                                         0) && (uVar9 = *(ulong *)(*(uint **)(lVar5 
                                                  + 0x10) + 4), (uVar9 & 0xfffffffc) != 0)) {
                                                    lVar5 = lVar5 + uVar9 * 8;
                                                    *(undefined4 *)(lVar5 + 0x38) =
                                                         uStack0000000000000000;
                                                    *(undefined4 *)(lVar5 + 0x3c) = param_8;
                                                    lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8
                                                                               + 0xb8) + 8);
                                                    if (lVar5 == 0) goto LAB_02f8d194;
                                                    if ((2 < **(uint **)(lVar5 + 0x10)) &&
                                                       (uVar9 = *(ulong *)(*(uint **)(lVar5 + 0x10)
                                                                          + 4),
                                                       (uVar9 & 0xfffffffc) != 0)) {
                                                      uVar12 = 0;
                                                      lVar5 = lVar5 + uVar9 * 0x10;
                                                      *(undefined4 *)(lVar5 + 0x38) =
                                                           uStack0000000000000008;
                                                      *(undefined4 *)(lVar5 + 0x3c) = param_8;
                                                      do {
                                                        uVar9 = 0;
                                                        do {
                                                          fVar15 = (float)uVar8;
                                                          fVar14 = param_5;
                                                          if (((*(ushort *)
                                                                 (/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0x132) >>
                                                                10 & 1) != 0) &&
                                                             (*(int *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xe0)
                                                              == 0)) {
                                                            func_0x00f78ad0();
                                                            fVar14 = param_5;
                                                          }
                                                          lVar5 = **(long **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                             0xb8);
                                                          if (lVar5 == 0) goto LAB_02f8d194;
                                                          if ((**(uint **)(lVar5 + 0x10) <= uVar9)
                                                             || (uVar8 = *(ulong *)(*(uint **)(lVar5
                                                                                              + 0x10
                                                  ) + 4), (uVar8 & 0xffffffff) <= uVar12))
                                                  goto LAB_02f8d188;
                                                  lVar5 = lVar5 + (uVar12 + uVar8 * uVar9) * 0xc;
                                                  uVar33 = *(undefined4 *)(lVar5 + 0x20);
                                                  uVar35 = *(undefined4 *)(lVar5 + 0x24);
                                                  uVar37 = *(uint *)(lVar5 + 0x28);
                                                  uVar18 = uStack000000000000003c;
                                                  fVar15 = fStack0000000000000038;
                                                  uVar4 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(uStack0000000000000030,
                                                                          uStack0000000000000034,
                                                                          fStack0000000000000038,
                                                                          uStack000000000000003c,0);
                                                  lVar5 = *(long *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 +
                                                                             0xb8) + 8);
                                                  if (lVar5 == 0) goto LAB_02f8d194;
                                                  if ((**(uint **)(lVar5 + 0x10) <= uVar9) ||
                                                     (uVar8 = *(ulong *)(*(uint **)(lVar5 + 0x10) +
                                                                        4),
                                                     (uVar8 & 0xffffffff) <= uVar12))
                                                  goto LAB_02f8d188;
                                                  uVar21 = *(undefined8 *)
                                                            (lVar5 + (uVar12 + uVar8 * uVar9) * 8 +
                                                            0x20);
                                                  uVar24 = *(undefined8 *)(param_9 + 0x154);
                                                  param_5 = (float)((ulong)*(undefined8 *)
                                                                            (param_9 + 0x110) >>
                                                                   0x20) +
                                                            (float)((ulong)uVar21 >> 0x20) *
                                                            (float)((ulong)uVar24 >> 0x20);
                                                  uVar20 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(CONCAT44(param_5,(float)*
                                                  (undefined8 *)(param_9 + 0x110) +
                                                  (float)uVar21 * (float)uVar24),param_5,0);
                                                  uVar8 = (ulong)uVar37;
                                                  /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar33,uVar35,uVar8,uVar20,param_5
                                                                  ,(int)uVar24,uVar18,param_11,uVar4
                                                                  ,0);
                                                  uVar9 = uVar9 + 1;
                                                  } while (uVar9 != 4);
                                                  uVar12 = uVar12 + 1;
                                                  if (uVar12 == 4) {
                                                    iVar10 = 0;
                                                    do {
                                                      iVar13 = 0;
                                                      do {
                                                        iVar2 = (int)uVar7 + iVar13;
                                                        /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,iVar2,iVar2 + 4,
                                                                        iVar2 + 5,0);
                                                        auVar22 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_11,iVar2 + 5
                                                                                  ,iVar2 + 1,iVar2,0
                                                                                 );
                                                        iVar13 = iVar13 + 1;
                                                      } while (iVar13 != 3);
                                                      iVar10 = iVar10 + 1;
                                                      uVar7 = (ulong)((int)uVar7 + 4);
                                                    } while (iVar10 != 3);
                                                    return auVar22;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02f8d188:
  uVar21 = func_0x00f78b24();
  func_0x00f78ac0(uVar21,0);
LAB_02f8d194:
  fVar16 = (float)func_0x00f78af4();
  return ZEXT416((uint)(fVar15 + fVar16 * fVar14));
}



// ============================================================
// RVA: 0x2f8d198 | Core.UI2.UISlantElement.AdjustUVs
// ============================================================

float Core_UI2_UISlantElement__AdjustUVs
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                float param_5)

{
  return param_3 + param_1 * param_5;
}



// ============================================================
// RVA: 0x2f8d1ac | Core.UI2.UISlantElement.CalculateUV
// ============================================================

float Core_UI2_UISlantElement__CalculateUV
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_60 = param_4;
  uStack_5c = param_5;
  uStack_58 = param_6;
  uStack_54 = param_7;
  fVar1 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(&uStack_60,0);
  fVar2 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_60,0);
  fVar3 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(&uStack_60,0);
  /*UnityEngine.Rect$$get_y*/ func_0x032534c8(&uStack_60,0);
  /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_60,0);
  /*UnityEngine.Rect$$get_y*/ func_0x032534c8(&uStack_60,0);
  return (param_1 - fVar1) / (fVar2 - fVar3);
}



// ============================================================
// RVA: 0x2f8d268 | Core.UI2.UISlantElement.PreserveSpriteAspectRatio
// ============================================================

void Core_UI2_UISlantElement__PreserveSpriteAspectRatio
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
               ,float *param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  param_1 = param_1 / param_2;
  fVar5 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(param_6,0);
  fVar6 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(param_6,0);
  if (param_1 <= fVar5 / fVar6) {
    fVar5 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(param_6,0);
    fVar6 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(param_6,0);
    /*UnityEngine.Rect$$set_width*/ func_0x0325356c(param_1 * fVar6,param_6,0);
    fVar6 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(param_6,0);
    fVar7 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(param_6,0);
    lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(param_5,0);
    if (lVar1 != 0) {
      fVar8 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar1,0);
      *param_6 = fVar6 + (fVar5 - fVar7) * fVar8;
      return;
    }
  }
  else {
    fVar5 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574();
    fVar6 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(param_6,0);
    param_2 = 1.0 / param_1;
    /*UnityEngine.Rect$$set_height*/ func_0x0325357c(param_2 * fVar6,param_6,0);
    fVar6 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(param_6,0);
    fVar7 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(param_6,0);
    lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(param_5,0);
    if (lVar1 != 0) {
      /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar1,0);
      param_6[1] = fVar6 + (fVar5 - fVar7) * param_2;
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  uVar9 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(lVar1 + 0xe0) = uVar9;
  *(float *)(lVar1 + 0xe4) = param_2;
  *(undefined4 *)(lVar1 + 0xe8) = param_3;
  *(undefined4 *)(lVar1 + 0xec) = param_4;
  uVar9 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(lVar1 + 0xf0) = uVar9;
  *(float *)(lVar1 + 0xf4) = param_2;
  uVar9 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(lVar1 + 0xf8) = uVar9;
  *(float *)(lVar1 + 0xfc) = param_2;
  *(undefined4 *)(lVar1 + 0x100) = param_3;
  *(undefined4 *)(lVar1 + 0x104) = param_4;
  uVar9 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(lVar1 + 0x110) = uVar9;
  *(float *)(lVar1 + 0x114) = param_2;
  uVar9 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(lVar1 + 0x118) = uVar9;
  *(float *)(lVar1 + 0x11c) = param_2;
  *(undefined4 *)(lVar1 + 0x144) = 0x3f800000;
  uVar9 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(lVar1 + 0x14c) = uVar9;
  *(float *)(lVar1 + 0x150) = param_2;
  uVar9 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(lVar1 + 0x154) = uVar9;
  *(float *)(lVar1 + 0x158) = param_2;
  *(undefined4 *)(lVar1 + 0x15c) = 0x42c80000;
  if ((bRam0000000003ec2d65 & 1) == 0) {
    func_0x00f78a20(0x3d280a0,0);
    func_0x00f78a20(0x3d21c38);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003ec2d65 = 1;
  }
  *(undefined1 *)(lVar1 + 0x99) = 1;
  *(undefined1 *)(lVar1 + 0xb0) = 1;
  uVar3 = func_0x00f78aec(/*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent_TypeInfo*/ uRam0000000003d280a0);
  /*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent$$.ctor*/ func_0x032f0fd4(uVar3,0);
  *(undefined8 *)(lVar1 + 0xb8) = uVar3;
  *(undefined1 *)(lVar1 + 0xc0) = 1;
  uVar3 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
  *(undefined8 *)(lVar1 + 200) = uVar3;
  if (((*(ushort *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec2c7a & 1) == 0) {
    func_0x00f78a20(0x3d40f40,0);
    func_0x00f78a20(0x3d40f38);
    func_0x00f78a20(0x3d1ea38);
    bRam0000000003ec2c7a = 1;
  }
  uVar9 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(lVar1 + 0x20) = uVar9;
  *(float *)(lVar1 + 0x24) = param_2;
  *(undefined4 *)(lVar1 + 0x28) = param_3;
  *(undefined4 *)(lVar1 + 0x2c) = param_4;
  *(undefined1 *)(lVar1 + 0x32) = 1;
  /*UnityEngine.EventSystems.UIBehaviour$$.ctor*/ func_0x032eca9c(lVar1,0);
  lVar4 = *(long *)(lVar1 + 0x90);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78aec(/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>_TypeInfo*/ uRam0000000003d1ea38);
    /*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>$$.ctor*/ func_0x0288f40c(lVar4,uRam0000000003d40f38);
    *(long *)(lVar1 + 0x90) = lVar4;
    if (lVar4 == 0) {
      plVar2 = (long *)func_0x00f78af4();
      if ((char)plVar2[6] == '\0') {
        (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
      }
      else {
        *(undefined1 *)(plVar2 + 6) = 0;
      }
      if (*(char *)((long)plVar2 + 0x31) == '\0') {
        (**(code **)(*plVar2 + 0x308))(plVar2,*(undefined8 *)(*plVar2 + 0x310));
      }
      else {
        *(undefined1 *)((long)plVar2 + 0x31) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x032bc00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
      return;
    }
  }
  *(long *)(lVar4 + 0x10) = lVar1;
  *(undefined1 *)(lVar1 + 0x98) = 1;
  return;
}



// ============================================================
// RVA: 0x2f8d3cc | Core.UI2.UISlantElement..ctor
// ============================================================

void Core_UI2_UISlantElement___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(param_5 + 0xe0) = uVar4;
  *(undefined4 *)(param_5 + 0xe4) = param_2;
  *(undefined4 *)(param_5 + 0xe8) = param_3;
  *(undefined4 *)(param_5 + 0xec) = param_4;
  uVar4 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_5 + 0xf0) = uVar4;
  *(undefined4 *)(param_5 + 0xf4) = param_2;
  uVar4 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(param_5 + 0xf8) = uVar4;
  *(undefined4 *)(param_5 + 0xfc) = param_2;
  *(undefined4 *)(param_5 + 0x100) = param_3;
  *(undefined4 *)(param_5 + 0x104) = param_4;
  uVar4 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_5 + 0x110) = uVar4;
  *(undefined4 *)(param_5 + 0x114) = param_2;
  uVar4 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(param_5 + 0x118) = uVar4;
  *(undefined4 *)(param_5 + 0x11c) = param_2;
  *(undefined4 *)(param_5 + 0x144) = 0x3f800000;
  uVar4 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_5 + 0x14c) = uVar4;
  *(undefined4 *)(param_5 + 0x150) = param_2;
  uVar4 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(param_5 + 0x154) = uVar4;
  *(undefined4 *)(param_5 + 0x158) = param_2;
  *(undefined4 *)(param_5 + 0x15c) = 0x42c80000;
  if ((bRam0000000003ec2d65 & 1) == 0) {
    func_0x00f78a20(0x3d280a0,0);
    func_0x00f78a20(0x3d21c38);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003ec2d65 = 1;
  }
  *(undefined1 *)(param_5 + 0x99) = 1;
  *(undefined1 *)(param_5 + 0xb0) = 1;
  uVar2 = func_0x00f78aec(/*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent_TypeInfo*/ uRam0000000003d280a0);
  /*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent$$.ctor*/ func_0x032f0fd4(uVar2,0);
  *(undefined8 *)(param_5 + 0xb8) = uVar2;
  *(undefined1 *)(param_5 + 0xc0) = 1;
  uVar2 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
  *(undefined8 *)(param_5 + 200) = uVar2;
  if (((*(ushort *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec2c7a & 1) == 0) {
    func_0x00f78a20(0x3d40f40,0);
    func_0x00f78a20(0x3d40f38);
    func_0x00f78a20(0x3d1ea38);
    bRam0000000003ec2c7a = 1;
  }
  uVar4 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x20) = uVar4;
  *(undefined4 *)(param_5 + 0x24) = param_2;
  *(undefined4 *)(param_5 + 0x28) = param_3;
  *(undefined4 *)(param_5 + 0x2c) = param_4;
  *(undefined1 *)(param_5 + 0x32) = 1;
  /*UnityEngine.EventSystems.UIBehaviour$$.ctor*/ func_0x032eca9c(param_5,0);
  lVar3 = *(long *)(param_5 + 0x90);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78aec(/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>_TypeInfo*/ uRam0000000003d1ea38);
    /*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>$$.ctor*/ func_0x0288f40c(lVar3,uRam0000000003d40f38);
    *(long *)(param_5 + 0x90) = lVar3;
    if (lVar3 == 0) {
      plVar1 = (long *)func_0x00f78af4();
      if ((char)plVar1[6] == '\0') {
        (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(*plVar1 + 0x2f0));
      }
      else {
        *(undefined1 *)(plVar1 + 6) = 0;
      }
      if (*(char *)((long)plVar1 + 0x31) == '\0') {
        (**(code **)(*plVar1 + 0x308))(plVar1,*(undefined8 *)(*plVar1 + 0x310));
      }
      else {
        *(undefined1 *)((long)plVar1 + 0x31) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x032bc00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
      return;
    }
  }
  *(long *)(lVar3 + 0x10) = param_5;
  *(undefined1 *)(param_5 + 0x98) = 1;
  return;
}



// ============================================================
// RVA: 0x2f8d470 | Core.UI2.UISlantElement..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Core_UI2_UISlantElement___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar5 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR_03a5d648;
  if ((bRam0000000003ebc683 & 1) == 0) {
    func_0x00f78a20(0x3d255e8);
    func_0x00f78a20(0x3d1fa08);
    func_0x00f78a20(0x3d1fa10);
    bRam0000000003ebc683 = 1;
  }
  uVar1 = _UNK_037235b8;
  uVar3 = _UNK_037235b0;
  uStack_48 = _UNK_037235b8;
  uStack_50 = _UNK_037235b0;
  uVar2 = func_0x00f78a3c(/*UnityEngine.Vector3[,]_TypeInfo*/ uRam0000000003d1fa10,&uStack_50);
  **(undefined8 **)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) = uVar2;
  uStack_58 = uVar1;
  uStack_60 = uVar3;
  uVar3 = func_0x00f78a3c(/*UnityEngine.Vector2[,]_TypeInfo*/ uRam0000000003d1fa08,&uStack_60);
  *(undefined8 *)(*(long *)(/*Core.UI2.UISlantElement_TypeInfo*/ lRam0000000003d255e8 + 0xb8) + 8) = uVar3;
  if (*(long *)PTR_03a5d648 == lStack_38) {
    auVar5._8_8_ = extraout_var;
    auVar5._0_8_ = extraout_d0;
    return auVar5;
  }
  lVar4 = ___stack_chk_fail();
  return ZEXT416(*(uint *)(lVar4 + 0x18));
}



