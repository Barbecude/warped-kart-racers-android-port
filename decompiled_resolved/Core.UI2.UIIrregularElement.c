// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIIrregularElement

// ============================================================
// RVA: 0x2f83c04 | Core.UI2.UIIrregularElement.set_FillPerc
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_UI2_UIIrregularElement__set_FillPerc(float param_1,long *param_2)

{
  if (_UNK_033f8758 < ABS(*(float *)(param_2 + 0x2c) - param_1)) {
    *(float *)(param_2 + 0x2c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x02f83c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x2f83c34 | Core.UI2.UIIrregularElement.get_FillPerc
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_FillPerc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x160);
}



// ============================================================
// RVA: 0x2f83c3c | Core.UI2.UIIrregularElement.set_TopLeftUVX
// ============================================================

void Core_UI2_UIIrregularElement__set_TopLeftUVX(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83c7c | Core.UI2.UIIrregularElement.get_TopLeftUVX
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_TopLeftUVX(long param_1)

{
  return *(undefined4 *)(param_1 + 0x120);
}



// ============================================================
// RVA: 0x2f83c84 | Core.UI2.UIIrregularElement.set_TopLeftUVY
// ============================================================

void Core_UI2_UIIrregularElement__set_TopLeftUVY(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)((long)param_2 + 0x124) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83cc4 | Core.UI2.UIIrregularElement.get_TopLeftUVY
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_TopLeftUVY(long param_1)

{
  return *(undefined4 *)(param_1 + 0x124);
}



// ============================================================
// RVA: 0x2f83ccc | Core.UI2.UIIrregularElement.set_TopRightUVX
// ============================================================

void Core_UI2_UIIrregularElement__set_TopRightUVX(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)(param_2 + 0x25) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83d0c | Core.UI2.UIIrregularElement.get_TopRightUVX
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_TopRightUVX(long param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}



// ============================================================
// RVA: 0x2f83d14 | Core.UI2.UIIrregularElement.set_TopRightUVY
// ============================================================

void Core_UI2_UIIrregularElement__set_TopRightUVY(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)((long)param_2 + 300) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83d54 | Core.UI2.UIIrregularElement.get_TopRightUVY
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_TopRightUVY(long param_1)

{
  return *(undefined4 *)(param_1 + 300);
}



// ============================================================
// RVA: 0x2f83d5c | Core.UI2.UIIrregularElement.set_BottomRightUVX
// ============================================================

void Core_UI2_UIIrregularElement__set_BottomRightUVX(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)(param_2 + 0x26) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83d9c | Core.UI2.UIIrregularElement.get_BottomRightUVX
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_BottomRightUVX(long param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}



// ============================================================
// RVA: 0x2f83da4 | Core.UI2.UIIrregularElement.set_BottomRightUVY
// ============================================================

void Core_UI2_UIIrregularElement__set_BottomRightUVY(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)((long)param_2 + 0x134) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83de4 | Core.UI2.UIIrregularElement.get_BottomRightUVY
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_BottomRightUVY(long param_1)

{
  return *(undefined4 *)(param_1 + 0x134);
}



// ============================================================
// RVA: 0x2f83dec | Core.UI2.UIIrregularElement.set_BottomLeftUVX
// ============================================================

void Core_UI2_UIIrregularElement__set_BottomLeftUVX(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)(param_2 + 0x27) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83e2c | Core.UI2.UIIrregularElement.get_BottomLeftUVX
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_BottomLeftUVX(long param_1)

{
  return *(undefined4 *)(param_1 + 0x138);
}



// ============================================================
// RVA: 0x2f83e34 | Core.UI2.UIIrregularElement.set_BottomLeftUVY
// ============================================================

void Core_UI2_UIIrregularElement__set_BottomLeftUVY(undefined4 param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(param_1,0xbf000000,0x3f000000,0);
  *(undefined4 *)((long)param_2 + 0x13c) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02f83e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  return;
}



// ============================================================
// RVA: 0x2f83e74 | Core.UI2.UIIrregularElement.get_BottomLeftUVY
// ============================================================

undefined4 Core_UI2_UIIrregularElement__get_BottomLeftUVY(long param_1)

{
  return *(undefined4 *)(param_1 + 0x13c);
}



// ============================================================
// RVA: 0x2f83e7c | Core.UI2.UIIrregularElement.get_sprite
// ============================================================

undefined8 Core_UI2_UIIrregularElement__get_sprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x2f83e84 | Core.UI2.UIIrregularElement.set_sprite
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_UI2_UIIrregularElement__set_sprite
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
  
  if ((bRam0000000003ebc62e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc62e = 1;
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
code_r0x02f84100:
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
        if (param_6 == 0) goto LAB_02f84140;
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
          if (param_6 == 0) goto LAB_02f84140;
          uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_6,0);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x02f84100;
      }
    }
  }
LAB_02f84140:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x2f84144 | Core.UI2.UIIrregularElement.CalculateLayoutInputHorizontal
// ============================================================

void Core_UI2_UIIrregularElement__CalculateLayoutInputHorizontal(void)

{
  return;
}



// ============================================================
// RVA: 0x2f84148 | Core.UI2.UIIrregularElement.CalculateLayoutInputVertical
// ============================================================

void Core_UI2_UIIrregularElement__CalculateLayoutInputVertical(void)

{
  return;
}



// ============================================================
// RVA: 0x2f8414c | Core.UI2.UIIrregularElement.get_minWidth
// ============================================================

undefined1  [16] Core_UI2_UIIrregularElement__get_minWidth(void)

{
  return ZEXT816(0);
}



// ============================================================
// RVA: 0x2f84154 | Core.UI2.UIIrregularElement.get_preferredWidth
// ============================================================

float Core_UI2_UIIrregularElement__get_preferredWidth(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000003ebc62f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc62f = 1;
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
    fVar4 = (float)/*Core.UI2.UIIrregularElement$$get_pixelsPerUnit*/ func_0x02f841f8(param_1);
    fVar3 = fVar3 / fVar4;
  }
  return fVar3;
}



// ============================================================
// RVA: 0x2f841f8 | Core.UI2.UIIrregularElement.get_pixelsPerUnit
// ============================================================

float Core_UI2_UIIrregularElement__get_pixelsPerUnit(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000003ebc632 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc632 = 1;
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
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02f842f8;
    fVar5 = (float)/*UnityEngine.Sprite$$get_pixelsPerUnit*/ func_0x03268e08(*(long *)(param_1 + 0xd0),0);
  }
  uVar4 = /*UnityEngine.UI.Graphic$$get_canvas*/ func_0x032bba74(param_1,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
  if ((uVar2 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 0x16c);
  }
  else {
    lVar3 = /*UnityEngine.UI.Graphic$$get_canvas*/ func_0x032bba74(param_1,0);
    if (lVar3 == 0) {
LAB_02f842f8:
      func_0x00f78af4();
      return -1.0;
    }
    fVar6 = (float)/*UnityEngine.Canvas$$get_referencePixelsPerUnit*/ func_0x032f3840(lVar3,0);
    *(float *)(param_1 + 0x16c) = fVar6;
  }
  return fVar5 / fVar6;
}



// ============================================================
// RVA: 0x2f842fc | Core.UI2.UIIrregularElement.get_flexibleWidth
// ============================================================

undefined1  [16] Core_UI2_UIIrregularElement__get_flexibleWidth(void)

{
  return ZEXT816(0xbf800000);
}



// ============================================================
// RVA: 0x2f84304 | Core.UI2.UIIrregularElement.get_minHeight
// ============================================================

undefined1  [16] Core_UI2_UIIrregularElement__get_minHeight(void)

{
  return ZEXT816(0);
}



// ============================================================
// RVA: 0x2f8430c | Core.UI2.UIIrregularElement.get_preferredHeight
// ============================================================

float Core_UI2_UIIrregularElement__get_preferredHeight
                (undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if ((bRam0000000003ebc630 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc630 = 1;
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
    fVar3 = (float)Core_UI2_UIIrregularElement__get_pixelsPerUnit(param_3);
    fVar3 = param_2 / fVar3;
  }
  return fVar3;
}



// ============================================================
// RVA: 0x2f843b0 | Core.UI2.UIIrregularElement.get_flexibleHeight
// ============================================================

undefined1  [16] Core_UI2_UIIrregularElement__get_flexibleHeight(void)

{
  return ZEXT816(0xbf800000);
}



// ============================================================
// RVA: 0x2f843b8 | Core.UI2.UIIrregularElement.get_layoutPriority
// ============================================================

undefined8 Core_UI2_UIIrregularElement__get_layoutPriority(void)

{
  return 0;
}



// ============================================================
// RVA: 0x2f843c0 | Core.UI2.UIIrregularElement.IsRaycastLocationValid
// ============================================================

undefined8 Core_UI2_UIIrregularElement__IsRaycastLocationValid(void)

{
  return 1;
}



// ============================================================
// RVA: 0x2f843c8 | Core.UI2.UIIrregularElement.get_mainTexture
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x2f8455c | Core.UI2.UIIrregularElement.OnPopulateMesh
// ============================================================

/* WARNING: Possible PIC construction at 0x02f84fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f85028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f84e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f84ea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f84fe8) */
/* WARNING: Removing unreachable block (ram,0x02f84ff0) */
/* WARNING: Removing unreachable block (ram,0x02f85000) */
/* WARNING: Removing unreachable block (ram,0x02f85008) */
/* WARNING: Removing unreachable block (ram,0x02f85010) */
/* WARNING: Removing unreachable block (ram,0x02f84e54) */
/* WARNING: Removing unreachable block (ram,0x02f84e6c) */
/* WARNING: Removing unreachable block (ram,0x02f84e80) */
/* WARNING: Removing unreachable block (ram,0x02f84e88) */
/* WARNING: Removing unreachable block (ram,0x02f84e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_UI2_UIIrregularElement__OnPopulateMesh
          (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
          ulong param_5,float param_6,ulong param_7,float param_8,long *param_9,ulong param_10)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  uint extraout_w1;
  uint extraout_w1_00;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar31;
  ulong uVar30;
  undefined8 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar46;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  float fVar47;
  float fVar48;
  float fStack_268;
  float fStack_264;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long *plStack_220;
  ulong uStack_218;
  long *plStack_210;
  ulong uStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  ulong uStack_1a0;
  undefined8 uStack_198;
  float fStack_184;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  float fStack_144;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uVar36 = param_4._8_8_;
  uVar11 = param_4._0_8_;
  uVar32 = param_3._8_8_;
  uVar30 = param_3._0_8_;
  uVar10 = 0;
  uVar13 = 0;
  if ((bRam0000000003ebc636 & 1) == 0) {
    func_0x00f78a20(0x3d3c790);
    func_0x00f78a20(0x3d3c798);
    func_0x00f78a20(0x3d3dd60);
    func_0x00f78a20(0x3d3c7a0);
    func_0x00f78a20(0x3d3dd68);
    func_0x00f78a20(0x3d3c7a8);
    func_0x00f78a20(0x3d3dd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d255b0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc636 = 1;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  uStack_d0 = 0;
  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar14 = (long *)0x3ebc000;
  if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
    /*System.Collections.Generic.List<Vector2>$$Clear*/ func_0x02486a6c(**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),uRam0000000003d3c798);
    lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
    plVar14 = (long *)0x3d3c798;
    if (lVar8 != 0) {
      /*System.Collections.Generic.List<Vector2>$$Clear*/ func_0x02486a6c(lVar8,uRam0000000003d3c798);
      lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        /*System.Collections.Generic.List<Vector2>$$Clear*/ func_0x02486a6c(lVar8,uRam0000000003d3c798);
        lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
        plVar14 = (long *)0x3d3c798;
        if (lVar8 != 0) {
          /*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>$$Clear*/ func_0x025bb4e0(lVar8,uRam0000000003d3dd60);
          lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x20);
          plVar14 = (long *)0x3d3dd60;
          if (lVar8 != 0) {
            /*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>$$Clear*/ func_0x025bb4e0(lVar8,uRam0000000003d3dd60);
            fVar19 = (float)/*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644((long)param_9 + 0xec,0);
            if (param_10 != 0) {
              unaff_d14 = (ulong)(uint)fVar19;
              /*UnityEngine.UI.VertexHelper$$Clear*/ func_0x032eb754(param_10,0);
              uVar26 = (ulong)(uint)*(float *)((long)param_9 + 0x104);
              uVar28 = 0;
              if (*(float *)((long)param_9 + 0x104) <= 0.0) {
                if (*(float *)(param_9 + 0x1b) != 0.0) {
                  uVar43 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),(int)param_9[0x1c],
                                           *(undefined4 *)((long)param_9 + 0xe4),(int)param_9[0x1d],
                                           0);
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar43,*(undefined8 *)
                                            (*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  fVar44 = *(float *)(param_9 + 0x1b);
                  uVar26 = (ulong)*(uint *)(param_9 + 0x1c);
                  uVar28 = 0;
                  uVar30 = (ulong)*(uint *)((long)param_9 + 0xe4);
                  uVar32 = 0;
                  uVar11 = (ulong)*(uint *)(param_9 + 0x1d);
                  uVar36 = 0;
                  uVar43 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),0);
                  uVar9 = *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
                  goto code_r0x02f848c4;
                }
                (**(code **)(*param_9 + 0x298))(param_9,*(undefined8 *)(*param_9 + 0x2a0));
                uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                uVar10 = uVar30;
                uVar43 = 0;
                if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                   (uVar43 = 0, *(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                  uVar10 = uVar30;
                  uVar43 = 0;
                }
              }
              else {
                if (*(float *)(param_9 + 0x1b) == 0.0) {
                  (**(code **)(*param_9 + 0x298))(param_9,*(undefined8 *)(*param_9 + 0x2a0));
                  uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar5 & 0xffffff,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  uVar43 = *(undefined4 *)((long)param_9 + 0x104);
                }
                else {
                  uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),(int)param_9[0x1c],
                                          *(undefined4 *)((long)param_9 + 0xe4),(int)param_9[0x1d],0
                                         );
                  fVar44 = *(float *)(param_9 + 0x1b);
                  fVar20 = *(float *)((long)param_9 + 0x104);
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar5 & 0xffffff,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  uVar6 = *(undefined4 *)((long)param_9 + 0x104);
                  uVar43 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),(int)param_9[0x1c],
                                           *(undefined4 *)((long)param_9 + 0xe4),(int)param_9[0x1d],
                                           0);
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(uVar6,uVar43,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  uVar26 = (ulong)*(uint *)(param_9 + 0x1c);
                  uVar28 = 0;
                  uVar30 = (ulong)*(uint *)((long)param_9 + 0xe4);
                  uVar32 = 0;
                  uVar11 = (ulong)*(uint *)(param_9 + 0x1d);
                  uVar36 = 0;
                  uVar43 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),0);
                  uVar9 = *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
                  fVar44 = fVar44 - fVar20;
code_r0x02f848c4:
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(fVar44,uVar43,uVar9);
                  uVar43 = (undefined4)param_9[0x1b];
                }
                (**(code **)(*param_9 + 0x298))(param_9,*(undefined8 *)(*param_9 + 0x2a0));
                uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                uVar10 = uVar30;
              }
              /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(uVar43,uVar6,
                              *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
              if (0.0 < fVar19) {
                fVar44 = *(float *)((long)param_9 + 0x104);
                uVar26 = (ulong)*(uint *)(param_9 + 0x1f);
                uVar28 = 0;
                uVar10 = (ulong)*(uint *)((long)param_9 + 0xfc);
                uVar32 = 0;
                uVar11 = (ulong)*(uint *)(param_9 + 0x20);
                uVar36 = 0;
                uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xf4),0);
                if (fVar44 <= 0.0) {
                  uVar43 = 0;
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (uVar43 = 0, *(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                    uVar43 = 0;
                  }
                }
                else {
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar5 & 0xffffff,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x20));
                  uVar43 = *(undefined4 *)((long)param_9 + 0x104);
                  uVar26 = (ulong)*(uint *)(param_9 + 0x1f);
                  uVar28 = 0;
                  uVar10 = (ulong)*(uint *)((long)param_9 + 0xfc);
                  uVar32 = 0;
                  uVar11 = (ulong)*(uint *)(param_9 + 0x20);
                  uVar36 = 0;
                  uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xf4),0);
                }
                /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(uVar43,uVar5,
                                *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x20));
              }
              auStack_e0 = /*Core.UI2.UIIrregularElement$$GetDrawingDimensions*/ func_0x02f85834(param_9,0);
              uStack_118 = auStack_e0._8_8_;
              fVar46 = *(float *)((long)param_9 + 0x124);
              unaff_d11 = (ulong)(uint)fVar46;
              param_7 = 0x3f800000;
              uStack_170 = (ulong)*(uint *)(param_9 + 0x24);
              uStack_168 = 0;
              param_5 = (ulong)*(uint *)(param_9 + 0x2c);
              uVar30 = CONCAT44((int)uVar11,(int)uVar10);
              uStack_138 = 0;
              uStack_120 = CONCAT44((int)uVar26,auStack_e0._0_4_);
              unaff_d8 = param_9[0x25];
              uStack_180 = param_9[0x27];
              uStack_178 = 0;
              uVar13 = CONCAT44(*(undefined4 *)((long)param_9 + 0x134),
                                1.0 - *(float *)(param_9 + 0x26));
              uStack_158 = 0;
              uStack_160 = uVar13;
              uStack_140 = param_5;
              uStack_130 = uVar30;
              uStack_128 = uVar32;
              uStack_110 = uVar11;
              uStack_108 = uVar36;
              uStack_100 = uVar10;
              uStack_f8 = uVar32;
              uStack_f0 = uVar26;
              uStack_e8 = uVar28;
              fVar20 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
              param_6 = (float)uVar13;
              unaff_d10 = (ulong)(uint)fVar20;
              fVar44 = (float)uVar26;
              fVar21 = (float)/*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
              unaff_d9 = (ulong)(uint)fVar21;
              unaff_d13 = (ulong)(uint)fVar44;
              plVar14 = (long *)((long)param_9 + 0x164);
              *plVar14 = param_9[0x23];
              uVar13 = param_9[0x1a];
              if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uStack_128 = 0;
              uVar10 = 0;
              uVar27 = uStack_130;
              uStack_130 = CONCAT44((float)(uStack_130 >> 0x20) - (float)(uStack_120 >> 0x20),
                                    (float)uStack_130 - (float)uStack_120);
              iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0);
              fVar45 = (float)uVar27;
              if (iVar7 == 0) {
                fVar45 = 0.0;
                fStack_144 = 1.0;
                fVar22 = 0.0;
                fVar29 = 1.0;
                fStack_1b0 = fVar21;
                fStack_1a8 = (float)uVar26;
                fStack_1a4 = fVar20;
code_r0x02f84b70:
                unaff_d14 = (ulong)(uint)fVar19;
                unaff_d9 = (ulong)(uint)fVar22;
                fVar46 = 1.0 - fVar46;
                uVar28 = NEON_fmov(0x3f800000,4);
                fVar20 = (float)uStack_170;
                fVar34 = (float)(uStack_180 >> 0x20);
                fVar35 = (float)uStack_180;
                fVar39 = (float)uStack_140;
                fVar41 = (float)uStack_130;
                fVar42 = (float)(uStack_130 >> 0x20);
                fVar37 = (float)uStack_120;
                fVar21 = fVar37 + fVar41 * fVar20;
                fVar38 = (float)(uStack_120 >> 0x20);
                fVar31 = fVar38 + fVar42 * fVar34;
                uVar30 = CONCAT44(fVar31,fVar21);
                uVar32 = 0;
                fVar47 = fVar37 + fVar41 * fVar35;
                fVar48 = fVar38 + fVar42 * fVar46;
                uVar27 = CONCAT44(fVar48,fVar47);
                uVar36 = 0;
                fVar20 = fVar37 + fVar41 * (fVar20 + (((float)uVar28 - (float)unaff_d8) - fVar20) *
                                                     fVar39);
                fVar46 = fVar38 + fVar42 * (fVar46 + (((float)((ulong)uVar28 >> 0x20) -
                                                      (float)(unaff_d8 >> 0x20)) - fVar46) * fVar39)
                ;
                uStack_140 = CONCAT44(fVar46,fVar20);
                fVar37 = fVar37 + fVar41 * (fVar35 + ((float)uStack_160 - fVar35) * fVar39);
                fVar38 = fVar38 + fVar42 * (fVar34 + ((float)(uStack_160 >> 0x20) - fVar34) * fVar39
                                           );
                uStack_120 = CONCAT44(fVar38,fVar37);
                uStack_118 = 0;
                uVar28 = NEON_fmov(0x3e800000,4);
                uStack_160 = CONCAT44((fVar38 + fVar31 + fVar48 + fVar46) *
                                      (float)((ulong)uVar28 >> 0x20),
                                      (fVar37 + fVar21 + fVar47 + fVar20) * (float)uVar28);
                uStack_158 = 0;
                uStack_138 = 0;
                uVar26 = uStack_130;
                fStack_1b4 = fVar45;
                fStack_1ac = fVar44;
                if ((char)param_9[0x21] == '\0') {
                  fVar44 = (fStack_144 + fVar22) * 0.5;
                  fVar20 = (fVar45 + fVar29) * 0.5;
                  param_7 = uStack_180;
                }
                else {
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    uStack_168 = 0;
                    uStack_1c8 = 0;
                    uStack_1d0 = uVar27;
                    uStack_170 = uVar30;
                    func_0x00f78ad0();
                    uVar30 = uStack_170;
                    uVar32 = uStack_168;
                    uVar27 = uStack_1d0;
                    uVar36 = uStack_1c8;
                  }
                  fVar20 = ((float)(uStack_160 >> 0x20) - (float)uStack_f0) /
                           (float)(uStack_130 >> 0x20);
                  fVar44 = ((float)uStack_160 - auStack_e0._0_4_) / (float)uStack_130;
                  param_7 = uStack_180;
                }
                unaff_d15 = (ulong)(uint)fVar44;
                unaff_d13 = (ulong)(uint)fVar20;
                fVar21 = (float)(uVar27 >> 0x20);
                param_2 = (float)uVar27;
                fVar46 = (float)(uVar30 >> 0x20);
                fVar45 = *(float *)(param_9 + 0x28) * (float)uStack_130;
                unaff_d8 = (ulong)(uint)fVar45;
                uVar40 = (ulong)(uint)*(float *)(param_9 + 0x2a);
                fVar31 = *(float *)(param_9 + 0x2a) * (float)uStack_130;
                unaff_d11 = (ulong)(uint)fVar31;
                if (fVar45 == 0.0) {
                  bVar1 = true;
                }
                else {
                  bVar1 = *(int *)((long)param_9 + 0x14c) < 2;
                }
                if (fVar31 == 0.0) {
                  bVar2 = true;
                }
                else {
                  bVar2 = *(int *)((long)param_9 + 0x15c) < 2;
                }
                unaff_d12 = (ulong)(uint)fVar21;
                fVar34 = (float)uStack_140 - (float)uVar30;
                fVar35 = (float)(uStack_140 >> 0x20) - fVar21;
                uVar11 = CONCAT44(fVar35,fVar34);
                unaff_d10 = (ulong)(uint)fVar46;
                param_5 = CONCAT44(fVar46 - (float)(uStack_120 >> 0x20),param_2 - (float)uStack_120)
                ;
                uStack_198 = 0;
                uStack_178 = 0;
                uStack_1a0 = uVar11;
                fStack_184 = fVar29;
                uStack_180 = param_5;
                uStack_130 = param_10;
                if (!bVar1) {
                  unaff_d11 = (ulong)(uint)fVar44;
                  unaff_d9 = (ulong)(uint)fVar20;
                  unaff_d13 = (ulong)(uint)fVar19;
                  param_7 = CONCAT44(-fVar35,-fVar34);
                  fVar19 = *(float *)((long)param_9 + 0x144);
                  unaff_d14 = (ulong)(uint)fVar19;
                  fVar44 = *(float *)(param_9 + 0x29);
                  unaff_d15 = (ulong)(uint)fVar44;
                  uVar5 = *(uint *)((long)param_9 + 0x14c);
                  uVar13 = (ulong)uVar5;
                  fStack_1bc = fVar31;
                  fStack_1b8 = fVar22;
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    uStack_1d8 = 0;
                    uStack_1e0 = param_7;
                    uStack_1d0 = uVar27;
                    uStack_1c8 = uVar36;
                    uStack_170 = uVar30;
                    uStack_168 = uVar32;
                    func_0x00f78ad0();
                    uVar30 = uStack_170;
                    param_7 = uStack_1e0;
                    uVar27 = uStack_1d0;
                  }
                  uVar10 = **(ulong **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                  fStack_1e8 = (fVar44 + fVar44) * _UNK_033f84b4;
                  param_6 = (float)(uStack_180 >> 0x20);
                  param_8 = (float)(param_7 >> 0x20);
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar27 & 0xffffffff;
                  puVar18 = &UNK_02f84e54;
                  param_5 = uStack_180;
                  fStack_1f0 = fVar45;
                  fStack_1ec = fVar19;
                  goto code_r0x02f85564;
                }
                uStack_170 = uVar30;
                uStack_168 = uVar32;
                if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                  uStack_1d0 = uVar27;
                  uStack_1c8 = uVar36;
                  func_0x00f78ad0();
                  uVar27 = uStack_1d0;
                }
                param_6 = (float)uVar40;
                param_8 = (float)uVar26;
                if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                  /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(uVar27 & 0xffffffff,**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                  uRam0000000003d3c790);
                  param_6 = (float)uVar40;
                  param_8 = (float)uVar26;
                  param_2 = fVar46;
                  if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                    /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(uStack_170,**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                    uRam0000000003d3c790);
                    fVar46 = fStack_184;
                    if ((char)param_9[0x21] == '\0') {
                      unaff_d8 = (ulong)(uint)fStack_184;
                      if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      param_6 = (float)uVar40;
                      param_8 = (float)uVar26;
                      lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                      param_2 = fVar21;
                      if (lVar8 != 0) {
                        param_2 = fStack_1a8;
                        /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fStack_1a4,lVar8,uRam0000000003d3c790);
                        param_6 = (float)uVar40;
                        param_8 = (float)uVar26;
                        lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                        if (lVar8 != 0) {
                          fVar21 = fVar46;
                          /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fVar22,lVar8,uRam0000000003d3c790);
                          goto code_r0x02f84eac;
                        }
                      }
                    }
                    else {
code_r0x02f84eac:
                      if (!bVar2) {
                        param_7 = CONCAT44(-(float)(uStack_180 >> 0x20),-(float)uStack_180);
                        fVar19 = *(float *)((long)param_9 + 0x154);
                        unaff_d8 = (ulong)(uint)fVar19;
                        fVar44 = *(float *)(param_9 + 0x2b);
                        unaff_d9 = (ulong)(uint)fVar44;
                        uVar5 = *(uint *)((long)param_9 + 0x15c);
                        uVar13 = (ulong)uVar5;
                        if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                          uStack_168 = 0;
                          uStack_170 = param_7;
                          func_0x00f78ad0();
                          param_7 = uStack_170;
                        }
                        auVar24._8_8_ = uStack_138;
                        auVar24._0_8_ = uStack_140;
                        uVar10 = **(ulong **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                        fStack_1e8 = (fVar44 + fVar44) * _UNK_033f84b4;
                        fVar46 = (float)(uStack_140 >> 0x20);
                        fVar21 = (float)(uStack_120 >> 0x20);
                        param_6 = (float)(uStack_1a0 >> 0x20);
                        param_8 = (float)(param_7 >> 0x20);
                        puVar18 = &UNK_02f84fe8;
                        uVar30 = uStack_120;
                        param_5 = uStack_1a0;
                        fStack_1f0 = fVar31;
                        fStack_1ec = fVar19;
                        goto code_r0x02f85564;
                      }
                      if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      param_6 = (float)uVar40;
                      param_8 = (float)uVar26;
                      param_2 = fVar21;
                      if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                        param_2 = (float)(uStack_140 >> 0x20);
                        /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                        uRam0000000003d3c790);
                        param_6 = (float)uVar40;
                        param_8 = (float)uVar26;
                        if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                          uVar27 = uStack_120 >> 0x20;
                          auVar24 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                                    uRam0000000003d3c790);
                          param_2 = (float)uVar27;
                          if ((char)param_9[0x21] == '\0') {
                            if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            param_6 = (float)uVar40;
                            param_8 = (float)uVar26;
                            lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                            if (lVar8 != 0) {
                              param_2 = fStack_1ac;
                              /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fStack_1b0,lVar8,uRam0000000003d3c790);
                              param_6 = (float)uVar40;
                              param_8 = (float)uVar26;
                              lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                              if (lVar8 != 0) {
                                uVar27 = (ulong)(uint)fStack_1b4;
                                auVar24 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fStack_144,lVar8,uRam0000000003d3c790);
                                goto code_r0x02f8502c;
                              }
                            }
                          }
                          else {
code_r0x02f8502c:
                            if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                              auVar24 = func_0x00f78ad0();
                            }
                            param_2 = (float)uVar27;
                            param_6 = (float)uVar40;
                            param_8 = (float)uVar26;
                            plVar12 = *(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                            if (((*plVar12 != 0) && (plVar12[3] != 0)) && (plVar12[4] != 0)) {
                              uVar5 = *(uint *)(plVar12[3] + 0x18);
                              if (0 < (int)uVar5) {
                                uVar4 = *(uint *)(*plVar12 + 0x18);
                                uVar13 = (ulong)uVar4;
                                uStack_140 = (ulong)*(uint *)(plVar12[4] + 0x18);
                                if ((uVar5 != 1) && (0 < (int)uVar4)) {
                                  uVar15 = 0;
                                  while( true ) {
                                    param_2 = (float)uVar27;
                                    if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    param_6 = (float)uVar40;
                                    param_8 = (float)uVar26;
                                    lVar8 = **(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                                    plVar14 = (long *)0x0;
                                    if (lVar8 == 0) goto code_r0x02f85560;
                                    if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                    }
                                    param_10 = 0x3d255b0;
                                    uStack_120 = *(ulong *)(*(long *)(lVar8 + 0x10) + uVar15 * 8 +
                                                           0x20);
                                    uStack_118 = 0;
                                    uVar17 = uVar4;
                                    if (uVar15 != 0) {
                                      uVar17 = 0;
                                    }
                                    uVar3 = 0;
                                    if (uVar13 <= uVar15 + 1) {
                                      uVar3 = uVar4;
                                    }
                                    if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    param_6 = (float)uVar40;
                                    param_8 = (float)uVar26;
                                    plVar14 = (long *)**(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8)
                                    ;
                                    if (plVar14 == (long *)0x0) goto code_r0x02f85560;
                                    uVar17 = ((int)uVar15 + uVar17) - 1;
                                    if (uVar17 < *(uint *)(plVar14 + 3)) {
                                      lVar8 = plVar14[2] + (long)(int)uVar17 * 8;
                                      plVar12 = plVar14;
                                    }
                                    else {
                                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                      param_6 = (float)uVar40;
                                      param_8 = (float)uVar26;
                                      plVar12 = (long *)**(undefined8 **)
                                                          (/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                                      if (plVar12 == (long *)0x0) goto code_r0x02f85560;
                                      lVar8 = plVar14[2] + (long)(int)uVar17 * 8;
                                    }
                                    uVar17 = ((int)uVar15 - uVar3) + 1;
                                    fVar46 = *(float *)(lVar8 + 0x20);
                                    unaff_d9 = (ulong)(uint)fVar46;
                                    fVar21 = *(float *)(lVar8 + 0x24);
                                    unaff_d8 = (ulong)(uint)fVar21;
                                    if (*(uint *)(plVar12 + 3) <= uVar17) {
                                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                    }
                                    fStack_c0 = (float)uStack_120 - fVar46;
                                    fStack_c4 = (float)(uStack_120 >> 0x20);
                                    fStack_bc = fStack_c4 - fVar21;
                                    uVar30 = *(ulong *)(plVar12[2] + (long)(int)uVar17 * 8 + 0x20);
                                    fStack_c8 = (float)uVar30 - (float)uStack_120;
                                    fStack_c4 = (float)(uVar30 >> 0x20) - fStack_c4;
                                    uVar11 = uStack_120;
                                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_c0,0);
                                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_c8,0);
                                    uStack_d0._0_4_ = fStack_c0 + fStack_c8;
                                    uStack_d0._4_4_ = fStack_bc + fStack_c4;
                                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&uStack_d0,0);
                                    param_6 = (float)uVar40;
                                    param_8 = (float)uVar26;
                                    param_2 = -(float)uStack_d0;
                                    uVar27 = (ulong)(uint)param_2;
                                    uStack_d0 = CONCAT44(param_2,uStack_d0._4_4_);
                                    lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x10)
                                    ;
                                    plVar14 = plVar12;
                                    if (lVar8 == 0) goto code_r0x02f85560;
                                    /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(lVar8,uRam0000000003d3c790);
                                    if (uVar13 - 1 == uVar15) break;
                                    uVar15 = uVar15 + 1;
                                    param_10 = 0x3d255b0;
                                  }
                                }
                                param_10 = uStack_130;
                                if (0.0 < fVar19) {
                                  plVar14 = (long *)/*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(uStack_130,0);
                                  uVar15 = uStack_140;
                                  iVar7 = (int)uStack_140;
                                  if (0 < iVar7) {
                                    uVar16 = 0;
                                    do {
                                      param_2 = (float)uVar27;
                                      param_6 = (float)uVar40;
                                      if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) !=
                                           0) && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                        func_0x00f78ad0();
                                      }
                                      param_8 = (float)uVar26;
                                      lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) +
                                                       0x20);
                                      if (lVar8 == 0) goto code_r0x02f85560;
                                      if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                      }
                                      uVar27 = (ulong)*(uint *)(param_9 + 0x1e);
                                      uVar10 = uVar13;
                                      uVar30 = auStack_e0._0_8_;
                                      uVar11 = uStack_f0;
                                      param_5 = uStack_100;
                                      uVar40 = uStack_110;
                                      /*Core.UI2.UIIrregularElement$$AddEdge*/ func_0x02f85b48(*(undefined4 *)((long)param_9 + 0xec),param_9,
                                                      *(undefined8 *)
                                                       (*(long *)(lVar8 + 0x10) + uVar16 * 8 + 0x20)
                                                      ,uVar13,(char)param_9[0x21],param_10);
                                      uVar16 = uVar16 + 1;
                                    } while (uVar15 != uVar16);
                                  }
                                  uVar32 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_10,0);
                                  uStack_120 = CONCAT44((float)(uStack_160 >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        ((long)param_9 + 0xec) >>
                                                               0x20),
                                                        (float)uStack_160 +
                                                        (float)*(undefined8 *)((long)param_9 + 0xec)
                                                       );
                                  uStack_118 = 0;
                                  uVar43 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xf4),
                                                           (int)param_9[0x1f],
                                                           *(undefined4 *)((long)param_9 + 0xfc),
                                                           (int)param_9[0x20],0);
                                  fVar21 = fVar44 * *(float *)((long)param_9 + 0x164);
                                  param_7 = (ulong)(uint)(fVar20 * *(float *)(param_9 + 0x2d));
                                  fVar19 = *(float *)((long)param_9 + 0x114) +
                                           fVar20 * *(float *)(param_9 + 0x2d);
                                  uVar17 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(*(float *)(param_9 + 0x22) + fVar21,0);
                                  uVar26 = param_7 & 0xffffffff;
                                  uVar27 = uStack_120 >> 0x20;
                                  uVar30 = 0;
                                  uVar11 = (ulong)uVar17;
                                  param_5 = (ulong)(uint)fVar19;
                                  uVar40 = (ulong)(uint)fVar21;
                                  param_7 = param_7 & 0xffffffff;
                                  uVar36 = /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(param_10,uVar43,0);
                                  param_10 = uStack_130;
                                  iVar7 = iVar7 + -1;
                                  plVar12 = plVar14;
                                  if (0 < iVar7) {
                                    do {
                                      plVar12 = (long *)(ulong)((int)plVar14 + uVar4);
                                      uVar36 = /*Core.UI2.UIIrregularElement$$AddStripTris*/ func_0x02f860b0(uVar36,plVar14,plVar12,uVar13,
                                                               param_10);
                                      iVar7 = iVar7 + -1;
                                      plVar14 = plVar12;
                                    } while (iVar7 != 0);
                                  }
                                  uVar10 = (ulong)((int)plVar12 + uVar4);
                                  /*Core.UI2.UIIrregularElement$$AddMiddleTris*/ func_0x02f86180(uVar36,plVar12,uVar10,uVar32);
                                }
                                plVar14 = (long *)/*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_10,0);
                                uVar15 = 0;
                                do {
                                  param_6 = (float)uVar40;
                                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0)
                                     && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                    func_0x00f78ad0();
                                  }
                                  param_8 = (float)uVar26;
                                  lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
                                  param_2 = (float)uVar27;
                                  if (lVar8 == 0) goto code_r0x02f85560;
                                  if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                  }
                                  uVar32 = *(undefined8 *)
                                            (*(long *)(lVar8 + 0x10) + uVar15 * 8 + 0x20);
                                  /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
                                  uVar10 = uVar13;
                                  uVar30 = auStack_e0._0_8_;
                                  uVar11 = uStack_f0;
                                  param_5 = uStack_100;
                                  uVar40 = uStack_110;
                                  /*Core.UI2.UIIrregularElement$$AddEdge*/ func_0x02f85b48(param_9,uVar32,uVar13,(char)param_9[0x21],param_10
                                                 );
                                  uVar15 = uVar15 + 1;
                                } while (uVar5 != uVar15);
                                uVar32 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_10,0);
                                (**(code **)(*param_9 + 0x298))
                                          (param_9,*(undefined8 *)(*param_9 + 0x2a0));
                                uVar43 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                                fVar44 = fVar44 * *(float *)((long)param_9 + 0x164);
                                fVar20 = fVar20 * *(float *)(param_9 + 0x2d);
                                fVar19 = *(float *)((long)param_9 + 0x114) + fVar20;
                                uVar6 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(*(float *)(param_9 + 0x22) + fVar44,fVar19,0
                                                       );
                                uVar36 = /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uStack_160,uStack_160 >> 0x20,0,uVar6,
                                                         fVar19,fVar44,fVar20,param_10,uVar43,0);
                                iVar7 = uVar5 - 1;
                                plVar12 = plVar14;
                                if (0 < iVar7) {
                                  do {
                                    plVar14 = (long *)(ulong)((int)plVar12 + uVar4);
                                    uVar36 = /*Core.UI2.UIIrregularElement$$AddStripTris*/ func_0x02f860b0(uVar36,plVar12,plVar14,uVar13,param_10)
                                    ;
                                    iVar7 = iVar7 + -1;
                                    plVar12 = plVar14;
                                  } while (iVar7 != 0);
                                }
                                auVar24 = /*Core.UI2.UIIrregularElement$$AddMiddleTris*/ func_0x02f86180(uVar36,plVar14,(int)plVar14 + uVar4,uVar32
                                                         );
                              }
                              return auVar24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                unaff_d12 = (ulong)(uint)fVar19;
                fVar22 = (float)/*UnityEngine.Sprites.DataUtility$$GetOuterUV*/ func_0x0322b110(param_9[0x1a],0);
                fStack_144 = (float)uVar30;
                param_2 = fVar45;
                if (param_9[0x1a] != 0) {
                  unaff_d14 = (ulong)(uint)fVar22;
                  unaff_d15 = (ulong)(uint)fVar45;
                  fVar29 = (float)uVar11;
                  unaff_d13 = uVar11 & 0xffffffff;
                  uVar43 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_9[0x1a],0);
                  uStack_b8 = CONCAT44(param_2,uVar43);
                  uStack_b0 = CONCAT44((int)uVar11,(int)uVar30);
                  uVar43 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_b8,0);
                  uVar6 = (undefined4)uVar30;
                  uVar33 = (undefined4)uVar11;
                  if (param_9[0x1a] != 0) {
                    uVar23 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_9[0x1a],0);
                    uStack_b8 = CONCAT44(param_2,uVar23);
                    uStack_b0 = CONCAT44(uVar33,uVar6);
                    uVar6 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_b8,0);
                    uVar13 = (ulong)*(uint *)((long)param_9 + 0x10c);
                    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    fVar44 = (float)(uStack_130 >> 0x20);
                    fVar20 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4(uStack_130,uStack_130 >> 0x20,uVar43,uVar6,
                                                    uVar13);
                    *plVar14 = CONCAT44(fVar44 * (float)((ulong)param_9[0x23] >> 0x20),
                                        fVar20 * (float)param_9[0x23]);
                    fStack_1b0 = fStack_144;
                    fVar44 = fVar29;
                    fStack_1a8 = fVar45;
                    fStack_1a4 = fVar22;
                    goto code_r0x02f84b70;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x02f85560:
  fVar46 = param_2;
  fVar21 = (float)uVar11;
  puVar18 = &Core_UI2_UIIrregularElement__GenerateCurvedEdge;
  auVar24 = func_0x00f78af4();
  uVar5 = extraout_w1;
code_r0x02f85564:
  uVar26 = (ulong)(uint)fVar46;
  uVar11 = uVar10;
  uStack_260 = unaff_d15;
  uStack_258 = unaff_d14;
  uStack_250 = unaff_d13;
  uStack_248 = unaff_d12;
  uStack_240 = unaff_d11;
  uStack_238 = unaff_d10;
  uStack_230 = unaff_d9;
  uStack_228 = unaff_d8;
  plStack_220 = plVar14;
  uStack_218 = uVar13;
  plStack_210 = param_9;
  uStack_208 = param_10;
  puStack_200 = &stack0xfffffffffffffff0;
  puStack_1f8 = puVar18;
  auVar25 = auVar24;
  if ((bRam0000000003ebc633 & 1) == 0) {
    auVar25 = func_0x00f78a20(0x3d3c790);
    bRam0000000003ebc633 = 1;
  }
  fVar44 = fStack_1e8;
  fVar19 = fStack_1f0;
  if (uVar5 < 0x7fffffff) {
    iVar7 = 0;
    fVar20 = fStack_1ec * _UNK_033f8b30;
    do {
      fVar22 = (float)iVar7 / (float)(int)uVar5;
      fVar31 = (float)param_5 * (1.0 - fVar22);
      fVar29 = param_6 * (1.0 - fVar22);
      fStack_268 = (float)param_7 * fVar22 + fVar31;
      fStack_264 = param_8 * fVar22 + fVar29;
      fVar45 = fStack_264;
      /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_268,0);
      fVar34 = (float)uVar26;
      if (uVar10 == 0) {
        auVar24 = func_0x00f78af4();
        fVar19 = auVar24._0_4_;
        fVar44 = fVar29;
        if ((bRam0000000003ebc634 & 1) == 0) {
          auVar24 = func_0x00f78a20(0x3d3c790);
          bRam0000000003ebc634 = 1;
        }
        if (extraout_w1_00 < 0x7fffffff) {
          if (uVar11 == 0) {
            fVar19 = (float)func_0x00f78af4();
            return ZEXT416((uint)(fVar44 + fVar19 * fVar34));
          }
          iVar7 = 0;
          do {
            auVar24 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fVar19 + (fVar29 - fVar19) *
                                               ((float)iVar7 / (float)(int)extraout_w1_00),
                                      fVar45 + (fVar31 - fVar45) *
                                               ((float)iVar7 / (float)(int)extraout_w1_00),uVar11,
                                      uRam0000000003d3c790);
            iVar7 = iVar7 + 1;
          } while (extraout_w1_00 + 1 != iVar7);
        }
        return auVar24;
      }
      fVar45 = (float)_sinf(fVar20 * fVar22 + fVar44);
      fVar29 = fVar46 + (fVar21 - fVar46) * fVar22 + fStack_264 * fVar45 * fVar19;
      auVar25 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(CONCAT44(fVar29,auVar24._0_4_ +
                                                ((float)uVar30 - auVar24._0_4_) * fVar22 +
                                                fStack_268 * fVar45 * fVar19),fVar29,uVar10,
                                uRam0000000003d3c790);
      iVar7 = iVar7 + 1;
    } while (uVar5 + 1 != iVar7);
  }
  return auVar25;
}



// ============================================================
// RVA: 0x2f84564 | Core.UI2.UIIrregularElement.GenerateMesh
// ============================================================

/* WARNING: Possible PIC construction at 0x02f84fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f85028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f84e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f84ea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f84fe8) */
/* WARNING: Removing unreachable block (ram,0x02f84ff0) */
/* WARNING: Removing unreachable block (ram,0x02f85000) */
/* WARNING: Removing unreachable block (ram,0x02f85008) */
/* WARNING: Removing unreachable block (ram,0x02f85010) */
/* WARNING: Removing unreachable block (ram,0x02f84e54) */
/* WARNING: Removing unreachable block (ram,0x02f84e6c) */
/* WARNING: Removing unreachable block (ram,0x02f84e80) */
/* WARNING: Removing unreachable block (ram,0x02f84e88) */
/* WARNING: Removing unreachable block (ram,0x02f84e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_UI2_UIIrregularElement__GenerateMesh
          (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
          ulong param_5,float param_6,ulong param_7,float param_8,long *param_9,ulong param_10,
          ulong param_11)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  uint extraout_w1;
  uint extraout_w1_00;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar30;
  ulong uVar29;
  undefined8 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar45;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  float fVar46;
  float fVar47;
  float fStack_268;
  float fStack_264;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long *plStack_220;
  ulong uStack_218;
  long *plStack_210;
  ulong uStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  ulong uStack_1a0;
  undefined8 uStack_198;
  float fStack_184;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  float fStack_144;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uVar35 = param_4._8_8_;
  uVar11 = param_4._0_8_;
  uVar31 = param_3._8_8_;
  uVar29 = param_3._0_8_;
  uVar10 = param_11;
  if ((bRam0000000003ebc636 & 1) == 0) {
    func_0x00f78a20(0x3d3c790);
    func_0x00f78a20(0x3d3c798);
    func_0x00f78a20(0x3d3dd60);
    func_0x00f78a20(0x3d3c7a0);
    func_0x00f78a20(0x3d3dd68);
    func_0x00f78a20(0x3d3c7a8);
    func_0x00f78a20(0x3d3dd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d255b0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc636 = 1;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  uStack_d0 = 0;
  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar13 = (long *)0x3ebc000;
  if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
    /*System.Collections.Generic.List<Vector2>$$Clear*/ func_0x02486a6c(**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),uRam0000000003d3c798);
    lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
    plVar13 = (long *)0x3d3c798;
    if (lVar8 != 0) {
      /*System.Collections.Generic.List<Vector2>$$Clear*/ func_0x02486a6c(lVar8,uRam0000000003d3c798);
      lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        /*System.Collections.Generic.List<Vector2>$$Clear*/ func_0x02486a6c(lVar8,uRam0000000003d3c798);
        lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
        plVar13 = (long *)0x3d3c798;
        if (lVar8 != 0) {
          /*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>$$Clear*/ func_0x025bb4e0(lVar8,uRam0000000003d3dd60);
          lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x20);
          plVar13 = (long *)0x3d3dd60;
          if (lVar8 != 0) {
            /*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>$$Clear*/ func_0x025bb4e0(lVar8,uRam0000000003d3dd60);
            fVar18 = (float)/*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644((long)param_9 + 0xec,0);
            if (param_10 != 0) {
              unaff_d14 = (ulong)(uint)fVar18;
              /*UnityEngine.UI.VertexHelper$$Clear*/ func_0x032eb754(param_10,0);
              uVar25 = (ulong)(uint)*(float *)((long)param_9 + 0x104);
              uVar27 = 0;
              if (*(float *)((long)param_9 + 0x104) <= 0.0) {
                if (*(float *)(param_9 + 0x1b) != 0.0) {
                  uVar42 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),(int)param_9[0x1c],
                                           *(undefined4 *)((long)param_9 + 0xe4),(int)param_9[0x1d],
                                           0);
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar42,*(undefined8 *)
                                            (*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  fVar43 = *(float *)(param_9 + 0x1b);
                  uVar25 = (ulong)*(uint *)(param_9 + 0x1c);
                  uVar27 = 0;
                  uVar29 = (ulong)*(uint *)((long)param_9 + 0xe4);
                  uVar31 = 0;
                  uVar11 = (ulong)*(uint *)(param_9 + 0x1d);
                  uVar35 = 0;
                  uVar42 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),0);
                  uVar9 = *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
                  goto code_r0x02f848c4;
                }
                (**(code **)(*param_9 + 0x298))(param_9,*(undefined8 *)(*param_9 + 0x2a0));
                uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                uVar10 = uVar29;
                uVar42 = 0;
                if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                   (uVar42 = 0, *(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                  uVar10 = uVar29;
                  uVar42 = 0;
                }
              }
              else {
                if (*(float *)(param_9 + 0x1b) == 0.0) {
                  (**(code **)(*param_9 + 0x298))(param_9,*(undefined8 *)(*param_9 + 0x2a0));
                  uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar5 & 0xffffff,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  uVar42 = *(undefined4 *)((long)param_9 + 0x104);
                }
                else {
                  uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),(int)param_9[0x1c],
                                          *(undefined4 *)((long)param_9 + 0xe4),(int)param_9[0x1d],0
                                         );
                  fVar43 = *(float *)(param_9 + 0x1b);
                  fVar19 = *(float *)((long)param_9 + 0x104);
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar5 & 0xffffff,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  uVar6 = *(undefined4 *)((long)param_9 + 0x104);
                  uVar42 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),(int)param_9[0x1c],
                                           *(undefined4 *)((long)param_9 + 0xe4),(int)param_9[0x1d],
                                           0);
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(uVar6,uVar42,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
                  uVar25 = (ulong)*(uint *)(param_9 + 0x1c);
                  uVar27 = 0;
                  uVar29 = (ulong)*(uint *)((long)param_9 + 0xe4);
                  uVar31 = 0;
                  uVar11 = (ulong)*(uint *)(param_9 + 0x1d);
                  uVar35 = 0;
                  uVar42 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xdc),0);
                  uVar9 = *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
                  fVar43 = fVar43 - fVar19;
code_r0x02f848c4:
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(fVar43,uVar42,uVar9);
                  uVar42 = (undefined4)param_9[0x1b];
                }
                (**(code **)(*param_9 + 0x298))(param_9,*(undefined8 *)(*param_9 + 0x2a0));
                uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                uVar10 = uVar29;
              }
              /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(uVar42,uVar6,
                              *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18));
              if (0.0 < fVar18) {
                fVar43 = *(float *)((long)param_9 + 0x104);
                uVar25 = (ulong)*(uint *)(param_9 + 0x1f);
                uVar27 = 0;
                uVar10 = (ulong)*(uint *)((long)param_9 + 0xfc);
                uVar31 = 0;
                uVar11 = (ulong)*(uint *)(param_9 + 0x20);
                uVar35 = 0;
                uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xf4),0);
                if (fVar43 <= 0.0) {
                  uVar42 = 0;
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (uVar42 = 0, *(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                    uVar42 = 0;
                  }
                }
                else {
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(0,uVar5 & 0xffffff,
                                  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x20));
                  uVar42 = *(undefined4 *)((long)param_9 + 0x104);
                  uVar25 = (ulong)*(uint *)(param_9 + 0x1f);
                  uVar27 = 0;
                  uVar10 = (ulong)*(uint *)((long)param_9 + 0xfc);
                  uVar31 = 0;
                  uVar11 = (ulong)*(uint *)(param_9 + 0x20);
                  uVar35 = 0;
                  uVar5 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xf4),0);
                }
                /*Core.UI2.UIIrregularElement$$AddEdgeDetail*/ func_0x02f857c0(uVar42,uVar5,
                                *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x20));
              }
              auStack_e0 = /*Core.UI2.UIIrregularElement$$GetDrawingDimensions*/ func_0x02f85834(param_9,param_11);
              uStack_118 = auStack_e0._8_8_;
              fVar45 = *(float *)((long)param_9 + 0x124);
              unaff_d11 = (ulong)(uint)fVar45;
              param_7 = 0x3f800000;
              uStack_170 = (ulong)*(uint *)(param_9 + 0x24);
              uStack_168 = 0;
              param_5 = (ulong)*(uint *)(param_9 + 0x2c);
              uVar29 = CONCAT44((int)uVar11,(int)uVar10);
              uStack_138 = 0;
              uStack_120 = CONCAT44((int)uVar25,auStack_e0._0_4_);
              unaff_d8 = param_9[0x25];
              uStack_180 = param_9[0x27];
              uStack_178 = 0;
              uVar26 = CONCAT44(*(undefined4 *)((long)param_9 + 0x134),
                                1.0 - *(float *)(param_9 + 0x26));
              uStack_158 = 0;
              uStack_160 = uVar26;
              uStack_140 = param_5;
              uStack_130 = uVar29;
              uStack_128 = uVar31;
              uStack_110 = uVar11;
              uStack_108 = uVar35;
              uStack_100 = uVar10;
              uStack_f8 = uVar31;
              uStack_f0 = uVar25;
              uStack_e8 = uVar27;
              fVar19 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
              param_6 = (float)uVar26;
              unaff_d10 = (ulong)(uint)fVar19;
              fVar43 = (float)uVar25;
              fVar20 = (float)/*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
              unaff_d9 = (ulong)(uint)fVar20;
              unaff_d13 = (ulong)(uint)fVar43;
              plVar13 = (long *)((long)param_9 + 0x164);
              *plVar13 = param_9[0x23];
              param_11 = param_9[0x1a];
              if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uStack_128 = 0;
              uVar10 = 0;
              uVar26 = uStack_130;
              uStack_130 = CONCAT44((float)(uStack_130 >> 0x20) - (float)(uStack_120 >> 0x20),
                                    (float)uStack_130 - (float)uStack_120);
              iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_11,0);
              fVar44 = (float)uVar26;
              if (iVar7 == 0) {
                fVar44 = 0.0;
                fStack_144 = 1.0;
                fVar21 = 0.0;
                fVar28 = 1.0;
                fStack_1b0 = fVar20;
                fStack_1a8 = (float)uVar25;
                fStack_1a4 = fVar19;
code_r0x02f84b70:
                unaff_d14 = (ulong)(uint)fVar18;
                unaff_d9 = (ulong)(uint)fVar21;
                fVar45 = 1.0 - fVar45;
                uVar27 = NEON_fmov(0x3f800000,4);
                fVar19 = (float)uStack_170;
                fVar33 = (float)(uStack_180 >> 0x20);
                fVar34 = (float)uStack_180;
                fVar38 = (float)uStack_140;
                fVar40 = (float)uStack_130;
                fVar41 = (float)(uStack_130 >> 0x20);
                fVar36 = (float)uStack_120;
                fVar20 = fVar36 + fVar40 * fVar19;
                fVar37 = (float)(uStack_120 >> 0x20);
                fVar30 = fVar37 + fVar41 * fVar33;
                uVar29 = CONCAT44(fVar30,fVar20);
                uVar31 = 0;
                fVar46 = fVar36 + fVar40 * fVar34;
                fVar47 = fVar37 + fVar41 * fVar45;
                uVar26 = CONCAT44(fVar47,fVar46);
                uVar35 = 0;
                fVar19 = fVar36 + fVar40 * (fVar19 + (((float)uVar27 - (float)unaff_d8) - fVar19) *
                                                     fVar38);
                fVar45 = fVar37 + fVar41 * (fVar45 + (((float)((ulong)uVar27 >> 0x20) -
                                                      (float)(unaff_d8 >> 0x20)) - fVar45) * fVar38)
                ;
                uStack_140 = CONCAT44(fVar45,fVar19);
                fVar36 = fVar36 + fVar40 * (fVar34 + ((float)uStack_160 - fVar34) * fVar38);
                fVar37 = fVar37 + fVar41 * (fVar33 + ((float)(uStack_160 >> 0x20) - fVar33) * fVar38
                                           );
                uStack_120 = CONCAT44(fVar37,fVar36);
                uStack_118 = 0;
                uVar27 = NEON_fmov(0x3e800000,4);
                uStack_160 = CONCAT44((fVar37 + fVar30 + fVar47 + fVar45) *
                                      (float)((ulong)uVar27 >> 0x20),
                                      (fVar36 + fVar20 + fVar46 + fVar19) * (float)uVar27);
                uStack_158 = 0;
                uStack_138 = 0;
                uVar25 = uStack_130;
                fStack_1b4 = fVar44;
                fStack_1ac = fVar43;
                if ((char)param_9[0x21] == '\0') {
                  fVar43 = (fStack_144 + fVar21) * 0.5;
                  fVar19 = (fVar44 + fVar28) * 0.5;
                  param_7 = uStack_180;
                }
                else {
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    uStack_168 = 0;
                    uStack_1c8 = 0;
                    uStack_1d0 = uVar26;
                    uStack_170 = uVar29;
                    func_0x00f78ad0();
                    uVar29 = uStack_170;
                    uVar31 = uStack_168;
                    uVar26 = uStack_1d0;
                    uVar35 = uStack_1c8;
                  }
                  fVar19 = ((float)(uStack_160 >> 0x20) - (float)uStack_f0) /
                           (float)(uStack_130 >> 0x20);
                  fVar43 = ((float)uStack_160 - auStack_e0._0_4_) / (float)uStack_130;
                  param_7 = uStack_180;
                }
                unaff_d15 = (ulong)(uint)fVar43;
                unaff_d13 = (ulong)(uint)fVar19;
                fVar20 = (float)(uVar26 >> 0x20);
                param_2 = (float)uVar26;
                fVar45 = (float)(uVar29 >> 0x20);
                fVar44 = *(float *)(param_9 + 0x28) * (float)uStack_130;
                unaff_d8 = (ulong)(uint)fVar44;
                uVar39 = (ulong)(uint)*(float *)(param_9 + 0x2a);
                fVar30 = *(float *)(param_9 + 0x2a) * (float)uStack_130;
                unaff_d11 = (ulong)(uint)fVar30;
                if (fVar44 == 0.0) {
                  bVar1 = true;
                }
                else {
                  bVar1 = *(int *)((long)param_9 + 0x14c) < 2;
                }
                if (fVar30 == 0.0) {
                  bVar2 = true;
                }
                else {
                  bVar2 = *(int *)((long)param_9 + 0x15c) < 2;
                }
                unaff_d12 = (ulong)(uint)fVar20;
                fVar33 = (float)uStack_140 - (float)uVar29;
                fVar34 = (float)(uStack_140 >> 0x20) - fVar20;
                uVar11 = CONCAT44(fVar34,fVar33);
                unaff_d10 = (ulong)(uint)fVar45;
                param_5 = CONCAT44(fVar45 - (float)(uStack_120 >> 0x20),param_2 - (float)uStack_120)
                ;
                uStack_198 = 0;
                uStack_178 = 0;
                uStack_1a0 = uVar11;
                fStack_184 = fVar28;
                uStack_180 = param_5;
                uStack_130 = param_10;
                if (!bVar1) {
                  unaff_d11 = (ulong)(uint)fVar43;
                  unaff_d9 = (ulong)(uint)fVar19;
                  unaff_d13 = (ulong)(uint)fVar18;
                  param_7 = CONCAT44(-fVar34,-fVar33);
                  fVar18 = *(float *)((long)param_9 + 0x144);
                  unaff_d14 = (ulong)(uint)fVar18;
                  fVar43 = *(float *)(param_9 + 0x29);
                  unaff_d15 = (ulong)(uint)fVar43;
                  uVar5 = *(uint *)((long)param_9 + 0x14c);
                  param_11 = (ulong)uVar5;
                  fStack_1bc = fVar30;
                  fStack_1b8 = fVar21;
                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                    uStack_1d8 = 0;
                    uStack_1e0 = param_7;
                    uStack_1d0 = uVar26;
                    uStack_1c8 = uVar35;
                    uStack_170 = uVar29;
                    uStack_168 = uVar31;
                    func_0x00f78ad0();
                    uVar29 = uStack_170;
                    param_7 = uStack_1e0;
                    uVar26 = uStack_1d0;
                  }
                  uVar10 = **(ulong **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                  fStack_1e8 = (fVar43 + fVar43) * _UNK_033f84b4;
                  param_6 = (float)(uStack_180 >> 0x20);
                  param_8 = (float)(param_7 >> 0x20);
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar26 & 0xffffffff;
                  puVar17 = &UNK_02f84e54;
                  param_5 = uStack_180;
                  fStack_1f0 = fVar44;
                  fStack_1ec = fVar18;
                  goto code_r0x02f85564;
                }
                uStack_170 = uVar29;
                uStack_168 = uVar31;
                if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                  uStack_1d0 = uVar26;
                  uStack_1c8 = uVar35;
                  func_0x00f78ad0();
                  uVar26 = uStack_1d0;
                }
                param_6 = (float)uVar39;
                param_8 = (float)uVar25;
                if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                  /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(uVar26 & 0xffffffff,**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                  uRam0000000003d3c790);
                  param_6 = (float)uVar39;
                  param_8 = (float)uVar25;
                  param_2 = fVar45;
                  if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                    /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(uStack_170,**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                    uRam0000000003d3c790);
                    fVar45 = fStack_184;
                    if ((char)param_9[0x21] == '\0') {
                      unaff_d8 = (ulong)(uint)fStack_184;
                      if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      param_6 = (float)uVar39;
                      param_8 = (float)uVar25;
                      lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                      param_2 = fVar20;
                      if (lVar8 != 0) {
                        param_2 = fStack_1a8;
                        /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fStack_1a4,lVar8,uRam0000000003d3c790);
                        param_6 = (float)uVar39;
                        param_8 = (float)uVar25;
                        lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                        if (lVar8 != 0) {
                          fVar20 = fVar45;
                          /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fVar21,lVar8,uRam0000000003d3c790);
                          goto code_r0x02f84eac;
                        }
                      }
                    }
                    else {
code_r0x02f84eac:
                      if (!bVar2) {
                        param_7 = CONCAT44(-(float)(uStack_180 >> 0x20),-(float)uStack_180);
                        fVar18 = *(float *)((long)param_9 + 0x154);
                        unaff_d8 = (ulong)(uint)fVar18;
                        fVar43 = *(float *)(param_9 + 0x2b);
                        unaff_d9 = (ulong)(uint)fVar43;
                        uVar5 = *(uint *)((long)param_9 + 0x15c);
                        param_11 = (ulong)uVar5;
                        if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                          uStack_168 = 0;
                          uStack_170 = param_7;
                          func_0x00f78ad0();
                          param_7 = uStack_170;
                        }
                        auVar23._8_8_ = uStack_138;
                        auVar23._0_8_ = uStack_140;
                        uVar10 = **(ulong **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                        fStack_1e8 = (fVar43 + fVar43) * _UNK_033f84b4;
                        fVar45 = (float)(uStack_140 >> 0x20);
                        fVar20 = (float)(uStack_120 >> 0x20);
                        param_6 = (float)(uStack_1a0 >> 0x20);
                        param_8 = (float)(param_7 >> 0x20);
                        puVar17 = &UNK_02f84fe8;
                        uVar29 = uStack_120;
                        param_5 = uStack_1a0;
                        fStack_1f0 = fVar30;
                        fStack_1ec = fVar18;
                        goto code_r0x02f85564;
                      }
                      if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      param_6 = (float)uVar39;
                      param_8 = (float)uVar25;
                      param_2 = fVar20;
                      if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                        param_2 = (float)(uStack_140 >> 0x20);
                        /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                        uRam0000000003d3c790);
                        param_6 = (float)uVar39;
                        param_8 = (float)uVar25;
                        if (**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) != 0) {
                          uVar26 = uStack_120 >> 0x20;
                          auVar23 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(**(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8),
                                                    uRam0000000003d3c790);
                          param_2 = (float)uVar26;
                          if ((char)param_9[0x21] == '\0') {
                            if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            param_6 = (float)uVar39;
                            param_8 = (float)uVar25;
                            lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                            if (lVar8 != 0) {
                              param_2 = fStack_1ac;
                              /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fStack_1b0,lVar8,uRam0000000003d3c790);
                              param_6 = (float)uVar39;
                              param_8 = (float)uVar25;
                              lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8);
                              if (lVar8 != 0) {
                                uVar26 = (ulong)(uint)fStack_1b4;
                                auVar23 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fStack_144,lVar8,uRam0000000003d3c790);
                                goto code_r0x02f8502c;
                              }
                            }
                          }
                          else {
code_r0x02f8502c:
                            if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                              auVar23 = func_0x00f78ad0();
                            }
                            param_2 = (float)uVar26;
                            param_6 = (float)uVar39;
                            param_8 = (float)uVar25;
                            plVar12 = *(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                            if (((*plVar12 != 0) && (plVar12[3] != 0)) && (plVar12[4] != 0)) {
                              uVar5 = *(uint *)(plVar12[3] + 0x18);
                              if (0 < (int)uVar5) {
                                uVar4 = *(uint *)(*plVar12 + 0x18);
                                param_11 = (ulong)uVar4;
                                uStack_140 = (ulong)*(uint *)(plVar12[4] + 0x18);
                                if ((uVar5 != 1) && (0 < (int)uVar4)) {
                                  uVar14 = 0;
                                  while( true ) {
                                    param_2 = (float)uVar26;
                                    if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    param_6 = (float)uVar39;
                                    param_8 = (float)uVar25;
                                    lVar8 = **(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                                    plVar13 = (long *)0x0;
                                    if (lVar8 == 0) goto LAB_02f85560;
                                    if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                    }
                                    param_10 = 0x3d255b0;
                                    uStack_120 = *(ulong *)(*(long *)(lVar8 + 0x10) + uVar14 * 8 +
                                                           0x20);
                                    uStack_118 = 0;
                                    uVar16 = uVar4;
                                    if (uVar14 != 0) {
                                      uVar16 = 0;
                                    }
                                    uVar3 = 0;
                                    if (param_11 <= uVar14 + 1) {
                                      uVar3 = uVar4;
                                    }
                                    if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    param_6 = (float)uVar39;
                                    param_8 = (float)uVar25;
                                    plVar13 = (long *)**(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8)
                                    ;
                                    if (plVar13 == (long *)0x0) goto LAB_02f85560;
                                    uVar16 = ((int)uVar14 + uVar16) - 1;
                                    if (uVar16 < *(uint *)(plVar13 + 3)) {
                                      lVar8 = plVar13[2] + (long)(int)uVar16 * 8;
                                      plVar12 = plVar13;
                                    }
                                    else {
                                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                      param_6 = (float)uVar39;
                                      param_8 = (float)uVar25;
                                      plVar12 = (long *)**(undefined8 **)
                                                          (/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
                                      if (plVar12 == (long *)0x0) goto LAB_02f85560;
                                      lVar8 = plVar13[2] + (long)(int)uVar16 * 8;
                                    }
                                    uVar16 = ((int)uVar14 - uVar3) + 1;
                                    fVar45 = *(float *)(lVar8 + 0x20);
                                    unaff_d9 = (ulong)(uint)fVar45;
                                    fVar20 = *(float *)(lVar8 + 0x24);
                                    unaff_d8 = (ulong)(uint)fVar20;
                                    if (*(uint *)(plVar12 + 3) <= uVar16) {
                                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                    }
                                    fStack_c0 = (float)uStack_120 - fVar45;
                                    fStack_c4 = (float)(uStack_120 >> 0x20);
                                    fStack_bc = fStack_c4 - fVar20;
                                    uVar29 = *(ulong *)(plVar12[2] + (long)(int)uVar16 * 8 + 0x20);
                                    fStack_c8 = (float)uVar29 - (float)uStack_120;
                                    fStack_c4 = (float)(uVar29 >> 0x20) - fStack_c4;
                                    uVar11 = uStack_120;
                                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_c0,0);
                                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_c8,0);
                                    uStack_d0._0_4_ = fStack_c0 + fStack_c8;
                                    uStack_d0._4_4_ = fStack_bc + fStack_c4;
                                    /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&uStack_d0,0);
                                    param_6 = (float)uVar39;
                                    param_8 = (float)uVar25;
                                    param_2 = -(float)uStack_d0;
                                    uVar26 = (ulong)(uint)param_2;
                                    uStack_d0 = CONCAT44(param_2,uStack_d0._4_4_);
                                    lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x10)
                                    ;
                                    plVar13 = plVar12;
                                    if (lVar8 == 0) goto LAB_02f85560;
                                    /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(lVar8,uRam0000000003d3c790);
                                    if (param_11 - 1 == uVar14) break;
                                    uVar14 = uVar14 + 1;
                                    param_10 = 0x3d255b0;
                                  }
                                }
                                param_10 = uStack_130;
                                if (0.0 < fVar18) {
                                  plVar13 = (long *)/*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(uStack_130,0);
                                  uVar14 = uStack_140;
                                  iVar7 = (int)uStack_140;
                                  if (0 < iVar7) {
                                    uVar15 = 0;
                                    do {
                                      param_2 = (float)uVar26;
                                      param_6 = (float)uVar39;
                                      if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) !=
                                           0) && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                        func_0x00f78ad0();
                                      }
                                      param_8 = (float)uVar25;
                                      lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) +
                                                       0x20);
                                      if (lVar8 == 0) goto LAB_02f85560;
                                      if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                      }
                                      uVar26 = (ulong)*(uint *)(param_9 + 0x1e);
                                      uVar10 = param_11;
                                      uVar29 = auStack_e0._0_8_;
                                      uVar11 = uStack_f0;
                                      param_5 = uStack_100;
                                      uVar39 = uStack_110;
                                      /*Core.UI2.UIIrregularElement$$AddEdge*/ func_0x02f85b48(*(undefined4 *)((long)param_9 + 0xec),param_9,
                                                      *(undefined8 *)
                                                       (*(long *)(lVar8 + 0x10) + uVar15 * 8 + 0x20)
                                                      ,param_11,(char)param_9[0x21],param_10);
                                      uVar15 = uVar15 + 1;
                                    } while (uVar14 != uVar15);
                                  }
                                  uVar31 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_10,0);
                                  uStack_120 = CONCAT44((float)(uStack_160 >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        ((long)param_9 + 0xec) >>
                                                               0x20),
                                                        (float)uStack_160 +
                                                        (float)*(undefined8 *)((long)param_9 + 0xec)
                                                       );
                                  uStack_118 = 0;
                                  uVar42 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)((long)param_9 + 0xf4),
                                                           (int)param_9[0x1f],
                                                           *(undefined4 *)((long)param_9 + 0xfc),
                                                           (int)param_9[0x20],0);
                                  fVar20 = fVar43 * *(float *)((long)param_9 + 0x164);
                                  param_7 = (ulong)(uint)(fVar19 * *(float *)(param_9 + 0x2d));
                                  fVar18 = *(float *)((long)param_9 + 0x114) +
                                           fVar19 * *(float *)(param_9 + 0x2d);
                                  uVar16 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(*(float *)(param_9 + 0x22) + fVar20,0);
                                  uVar25 = param_7 & 0xffffffff;
                                  uVar26 = uStack_120 >> 0x20;
                                  uVar29 = 0;
                                  uVar11 = (ulong)uVar16;
                                  param_5 = (ulong)(uint)fVar18;
                                  uVar39 = (ulong)(uint)fVar20;
                                  param_7 = param_7 & 0xffffffff;
                                  uVar35 = /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(param_10,uVar42,0);
                                  param_10 = uStack_130;
                                  iVar7 = iVar7 + -1;
                                  plVar12 = plVar13;
                                  if (0 < iVar7) {
                                    do {
                                      plVar12 = (long *)(ulong)((int)plVar13 + uVar4);
                                      uVar35 = /*Core.UI2.UIIrregularElement$$AddStripTris*/ func_0x02f860b0(uVar35,plVar13,plVar12,param_11,
                                                               param_10);
                                      iVar7 = iVar7 + -1;
                                      plVar13 = plVar12;
                                    } while (iVar7 != 0);
                                  }
                                  uVar10 = (ulong)((int)plVar12 + uVar4);
                                  /*Core.UI2.UIIrregularElement$$AddMiddleTris*/ func_0x02f86180(uVar35,plVar12,uVar10,uVar31);
                                }
                                plVar13 = (long *)/*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_10,0);
                                uVar14 = 0;
                                do {
                                  param_6 = (float)uVar39;
                                  if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0)
                                     && (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
                                    func_0x00f78ad0();
                                  }
                                  param_8 = (float)uVar25;
                                  lVar8 = *(long *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18);
                                  param_2 = (float)uVar26;
                                  if (lVar8 == 0) goto LAB_02f85560;
                                  if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                  }
                                  uVar31 = *(undefined8 *)
                                            (*(long *)(lVar8 + 0x10) + uVar14 * 8 + 0x20);
                                  /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
                                  uVar10 = param_11;
                                  uVar29 = auStack_e0._0_8_;
                                  uVar11 = uStack_f0;
                                  param_5 = uStack_100;
                                  uVar39 = uStack_110;
                                  /*Core.UI2.UIIrregularElement$$AddEdge*/ func_0x02f85b48(param_9,uVar31,param_11,(char)param_9[0x21],
                                                  param_10);
                                  uVar14 = uVar14 + 1;
                                } while (uVar5 != uVar14);
                                uVar31 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_10,0);
                                (**(code **)(*param_9 + 0x298))
                                          (param_9,*(undefined8 *)(*param_9 + 0x2a0));
                                uVar42 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
                                fVar43 = fVar43 * *(float *)((long)param_9 + 0x164);
                                fVar19 = fVar19 * *(float *)(param_9 + 0x2d);
                                fVar18 = *(float *)((long)param_9 + 0x114) + fVar19;
                                uVar6 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(*(float *)(param_9 + 0x22) + fVar43,fVar18,0
                                                       );
                                uVar35 = /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uStack_160,uStack_160 >> 0x20,0,uVar6,
                                                         fVar18,fVar43,fVar19,param_10,uVar42,0);
                                iVar7 = uVar5 - 1;
                                plVar12 = plVar13;
                                if (0 < iVar7) {
                                  do {
                                    plVar13 = (long *)(ulong)((int)plVar12 + uVar4);
                                    uVar35 = /*Core.UI2.UIIrregularElement$$AddStripTris*/ func_0x02f860b0(uVar35,plVar12,plVar13,param_11,
                                                             param_10);
                                    iVar7 = iVar7 + -1;
                                    plVar12 = plVar13;
                                  } while (iVar7 != 0);
                                }
                                auVar23 = /*Core.UI2.UIIrregularElement$$AddMiddleTris*/ func_0x02f86180(uVar35,plVar13,(int)plVar13 + uVar4,uVar31
                                                         );
                              }
                              return auVar23;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                unaff_d12 = (ulong)(uint)fVar18;
                fVar21 = (float)/*UnityEngine.Sprites.DataUtility$$GetOuterUV*/ func_0x0322b110(param_9[0x1a],0);
                fStack_144 = (float)uVar29;
                param_2 = fVar44;
                if (param_9[0x1a] != 0) {
                  unaff_d14 = (ulong)(uint)fVar21;
                  unaff_d15 = (ulong)(uint)fVar44;
                  fVar28 = (float)uVar11;
                  unaff_d13 = uVar11 & 0xffffffff;
                  uVar42 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_9[0x1a],0);
                  uStack_b8 = CONCAT44(param_2,uVar42);
                  uStack_b0 = CONCAT44((int)uVar11,(int)uVar29);
                  uVar42 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_b8,0);
                  uVar6 = (undefined4)uVar29;
                  uVar32 = (undefined4)uVar11;
                  if (param_9[0x1a] != 0) {
                    uVar22 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_9[0x1a],0);
                    uStack_b8 = CONCAT44(param_2,uVar22);
                    uStack_b0 = CONCAT44(uVar32,uVar6);
                    uVar6 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_b8,0);
                    param_11 = (ulong)*(uint *)((long)param_9 + 0x10c);
                    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    fVar43 = (float)(uStack_130 >> 0x20);
                    fVar19 = (float)/*Core.UI2.UIUtils$$CalculatePreserveAspectRatioScale*/ func_0x02f85ac4(uStack_130,uStack_130 >> 0x20,uVar42,uVar6,
                                                    param_11);
                    *plVar13 = CONCAT44(fVar43 * (float)((ulong)param_9[0x23] >> 0x20),
                                        fVar19 * (float)param_9[0x23]);
                    fStack_1b0 = fStack_144;
                    fVar43 = fVar28;
                    fStack_1a8 = fVar44;
                    fStack_1a4 = fVar21;
                    goto code_r0x02f84b70;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02f85560:
  fVar45 = param_2;
  fVar20 = (float)uVar11;
  puVar17 = &Core_UI2_UIIrregularElement__GenerateCurvedEdge;
  auVar23 = func_0x00f78af4();
  uVar5 = extraout_w1;
code_r0x02f85564:
  uVar25 = (ulong)(uint)fVar45;
  uVar11 = uVar10;
  uStack_260 = unaff_d15;
  uStack_258 = unaff_d14;
  uStack_250 = unaff_d13;
  uStack_248 = unaff_d12;
  uStack_240 = unaff_d11;
  uStack_238 = unaff_d10;
  uStack_230 = unaff_d9;
  uStack_228 = unaff_d8;
  plStack_220 = plVar13;
  uStack_218 = param_11;
  plStack_210 = param_9;
  uStack_208 = param_10;
  puStack_200 = &stack0xfffffffffffffff0;
  puStack_1f8 = puVar17;
  auVar24 = auVar23;
  if ((bRam0000000003ebc633 & 1) == 0) {
    auVar24 = func_0x00f78a20(0x3d3c790);
    bRam0000000003ebc633 = 1;
  }
  fVar43 = fStack_1e8;
  fVar18 = fStack_1f0;
  if (uVar5 < 0x7fffffff) {
    iVar7 = 0;
    fVar19 = fStack_1ec * _UNK_033f8b30;
    do {
      fVar21 = (float)iVar7 / (float)(int)uVar5;
      fVar30 = (float)param_5 * (1.0 - fVar21);
      fVar28 = param_6 * (1.0 - fVar21);
      fStack_268 = (float)param_7 * fVar21 + fVar30;
      fStack_264 = param_8 * fVar21 + fVar28;
      fVar44 = fStack_264;
      /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_268,0);
      fVar33 = (float)uVar25;
      if (uVar10 == 0) {
        auVar23 = func_0x00f78af4();
        fVar18 = auVar23._0_4_;
        fVar43 = fVar28;
        if ((bRam0000000003ebc634 & 1) == 0) {
          auVar23 = func_0x00f78a20(0x3d3c790);
          bRam0000000003ebc634 = 1;
        }
        if (extraout_w1_00 < 0x7fffffff) {
          if (uVar11 == 0) {
            fVar18 = (float)func_0x00f78af4();
            return ZEXT416((uint)(fVar43 + fVar18 * fVar33));
          }
          iVar7 = 0;
          do {
            auVar23 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fVar18 + (fVar28 - fVar18) *
                                               ((float)iVar7 / (float)(int)extraout_w1_00),
                                      fVar44 + (fVar30 - fVar44) *
                                               ((float)iVar7 / (float)(int)extraout_w1_00),uVar11,
                                      uRam0000000003d3c790);
            iVar7 = iVar7 + 1;
          } while (extraout_w1_00 + 1 != iVar7);
        }
        return auVar23;
      }
      fVar44 = (float)_sinf(fVar19 * fVar21 + fVar43);
      fVar28 = fVar45 + (fVar20 - fVar45) * fVar21 + fStack_264 * fVar44 * fVar18;
      auVar24 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(CONCAT44(fVar28,auVar23._0_4_ +
                                                ((float)uVar29 - auVar23._0_4_) * fVar21 +
                                                fStack_268 * fVar44 * fVar18),fVar28,uVar10,
                                uRam0000000003d3c790);
      iVar7 = iVar7 + 1;
    } while (uVar5 + 1 != iVar7);
  }
  return auVar24;
}



// ============================================================
// RVA: 0x2f85564 | Core.UI2.UIIrregularElement.GenerateCurvedEdge
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_UI2_UIIrregularElement__GenerateCurvedEdge
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,undefined8 param_9,uint param_10,long param_11)

{
  uint extraout_w1;
  long lVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack_78;
  float fStack_74;
  
  uVar10 = (ulong)(uint)param_2;
  lVar1 = param_11;
  auVar4 = param_1;
  if ((bRam0000000003ebc633 & 1) == 0) {
    auVar4 = func_0x00f78a20(0x3d3c790);
    bRam0000000003ebc633 = 1;
  }
  if (param_10 < 0x7fffffff) {
    iVar2 = 0;
    fStack0000000000000004 = fStack0000000000000004 * _UNK_033f8b30;
    do {
      fVar7 = (float)iVar2 / (float)(int)param_10;
      fVar8 = param_5 * (1.0 - fVar7);
      fVar5 = param_6 * (1.0 - fVar7);
      fStack_78 = param_7 * fVar7 + fVar8;
      fStack_74 = param_8 * fVar7 + fVar5;
      fVar3 = fStack_74;
      /*UnityEngine.Vector2$$Normalize*/ func_0x0327a238(&fStack_78,0);
      fVar9 = (float)uVar10;
      if (param_11 == 0) {
        auVar4 = func_0x00f78af4();
        fVar7 = auVar4._0_4_;
        fVar6 = fVar5;
        if ((bRam0000000003ebc634 & 1) == 0) {
          auVar4 = func_0x00f78a20(0x3d3c790);
          bRam0000000003ebc634 = 1;
        }
        if (extraout_w1 < 0x7fffffff) {
          if (lVar1 == 0) {
            fVar3 = (float)func_0x00f78af4();
            return ZEXT416((uint)(fVar6 + fVar3 * fVar9));
          }
          iVar2 = 0;
          do {
            auVar4 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fVar7 + (fVar5 - fVar7) *
                                             ((float)iVar2 / (float)(int)extraout_w1),
                                     fVar3 + (fVar8 - fVar3) *
                                             ((float)iVar2 / (float)(int)extraout_w1),lVar1,
                                     uRam0000000003d3c790);
            iVar2 = iVar2 + 1;
          } while (extraout_w1 + 1 != iVar2);
        }
        return auVar4;
      }
      fVar3 = (float)_sinf(fStack0000000000000004 * fVar7 + in_stack_00000008);
      fVar5 = param_2 + (param_4 - param_2) * fVar7 + fStack_74 * fVar3 * fStack0000000000000000;
      auVar4 = /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(CONCAT44(fVar5,param_1._0_4_ + (param_3 - param_1._0_4_) * fVar7 +
                                              fStack_78 * fVar3 * fStack0000000000000000),fVar5,
                               param_11,uRam0000000003d3c790);
      iVar2 = iVar2 + 1;
    } while (param_10 + 1 != iVar2);
  }
  return auVar4;
}



// ============================================================
// RVA: 0x2f856dc | Core.UI2.UIIrregularElement.GenerateCurvedEdgeUVs
// ============================================================

undefined1  [16]
Core_UI2_UIIrregularElement__GenerateCurvedEdgeUVs
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
          undefined8 param_6,uint param_7,long param_8)

{
  int iVar1;
  float fVar2;
  float extraout_s0;
  float extraout_s0_00;
  float fVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar5;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 uVar6;
  undefined1 auVar4 [16];
  float fVar7;
  
  uVar6 = param_1._8_8_;
  uVar5 = param_1._4_4_;
  fVar2 = param_1._0_4_;
  fVar3 = fVar2;
  fVar7 = param_3;
  if ((bRam0000000003ebc634 & 1) == 0) {
    func_0x00f78a20(0x3d3c790);
    bRam0000000003ebc634 = 1;
    fVar3 = extraout_s0;
    uVar5 = extraout_var;
    uVar6 = extraout_var_01;
  }
  if (param_7 < 0x7fffffff) {
    if (param_8 == 0) {
      fVar3 = (float)func_0x00f78af4();
      return ZEXT416((uint)(fVar7 + fVar3 * param_5));
    }
    iVar1 = 0;
    do {
      /*System.Collections.Generic.List<Vector2>$$Add*/ func_0x02486778(fVar2 + (param_3 - fVar2) * ((float)iVar1 / (float)(int)param_7),
                      param_2 + (param_4 - param_2) * ((float)iVar1 / (float)(int)param_7),param_8,
                      uRam0000000003d3c790);
      iVar1 = iVar1 + 1;
      fVar3 = extraout_s0_00;
      uVar5 = extraout_var_00;
      uVar6 = extraout_var_02;
    } while (param_7 + 1 != iVar1);
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = fVar3;
  auVar4._8_8_ = uVar6;
  return auVar4;
}



// ============================================================
// RVA: 0x2f857ac | Core.UI2.UIIrregularElement.AdjustUVs
// ============================================================

float Core_UI2_UIIrregularElement__AdjustUVs
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                float param_5)

{
  return param_3 + param_1 * param_5;
}



// ============================================================
// RVA: 0x2f857c0 | Core.UI2.UIIrregularElement.AddEdgeDetail
// ============================================================

ulong Core_UI2_UIIrregularElement__AddEdgeDetail
                (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
                ulong param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  uint uVar9;
  long lVar10;
  long extraout_x9;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar11;
  code *pcVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float extraout_s0;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  if ((bRam0000000003ebc635 & 1) == 0) {
    func_0x00f78a20(0x3d3dd58);
    bRam0000000003ebc635 = 1;
  }
  if (param_6 == 0) {
    auVar26 = func_0x00f78af4();
    lVar10 = auVar26._0_8_;
    if ((bRam0000000003ebc638 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ebc638 = 1;
    }
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e8 = 0;
    uStack_c0 = /*UnityEngine.UI.Graphic$$GetPixelAdjustedRect*/ func_0x032be1fc(lVar10,0);
    fVar21 = 0.0;
    fVar22 = 1.0;
    fVar24 = 1.0;
    uStack_bc = param_2;
    uStack_b8 = param_3;
    uStack_b4 = param_4;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,&uStack_d0,0);
    uVar4 = *(undefined8 *)(lVar10 + 0xd0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if (iVar1 != 0) {
      fVar13 = (float)/*UnityEngine.Sprites.DataUtility$$GetPadding*/ func_0x0322b128(*(undefined8 *)(lVar10 + 0xd0),0);
      fVar23 = fVar21;
      fVar25 = fVar22;
      fVar16 = fVar24;
      if (*(long *)(lVar10 + 0xd0) != 0) {
        uVar14 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(*(long *)(lVar10 + 0xd0),0);
        uStack_e8 = CONCAT44(fVar23,uVar14);
        uStack_e0 = CONCAT44(fVar16,fVar25);
        uVar14 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_e8,0);
        if (*(long *)(lVar10 + 0xd0) != 0) {
          uVar15 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(*(long *)(lVar10 + 0xd0),0);
          uStack_e8 = CONCAT44(fVar23,uVar15);
          uStack_e0 = CONCAT44(fVar16,fVar25);
          uVar15 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_e8,0);
          uStack_d8 = uVar14;
          uStack_d4 = uVar15;
          iVar1 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(uVar14,0);
          iVar2 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(uVar15,0);
          fVar23 = (float)iVar1;
          fVar25 = (float)iVar2;
          /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar13 / fVar23,fVar21 / fVar25,(fVar23 - fVar22) / fVar23,
                          (fVar25 - fVar24) / fVar25,&uStack_d0,0);
          if ((auVar26._8_4_ != 0) && (fVar21 = (float)/*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644(&uStack_d8,0), 0.0 < fVar21))
          {
            /*Core.UI2.UIIrregularElement$$PreserveSpriteAspectRatio*/ func_0x02f86208(uStack_d8,uStack_d4,lVar10,&uStack_c0);
          }
          goto code_r0x02f859d4;
        }
      }
      uVar6 = func_0x00f78af4();
      iVar1 = (int)uVar6;
      if (iVar1 == 0) {
        uVar6 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
        return uVar6;
      }
      fVar21 = 1.0 / ((fVar25 / fVar16) / (extraout_s0 / fVar23));
      if (((iVar1 != 1) || (fVar21 <= 1.0)) && ((iVar1 != 2 || (1.0 <= fVar21)))) {
        return uVar6;
      }
      return uVar6;
    }
code_r0x02f859d4:
    fVar23 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(&uStack_c0,0);
    fVar25 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_c0,0);
    fVar21 = (float)uStack_d0;
    fVar16 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(&uStack_c0,0);
    fVar13 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_c0,0);
    fVar22 = uStack_d0._4_4_;
    fVar17 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(&uStack_c0,0);
    fVar18 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_c0,0);
    fVar24 = (float)uStack_c8;
    fVar19 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(&uStack_c0,0);
    fVar20 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_c0,0);
    uVar6 = /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar23 + fVar25 * fVar21,fVar16 + fVar13 * fVar22,
                            fVar17 + fVar18 * fVar24,fVar19 + fVar20 * uStack_c8._4_4_,&uStack_d0,0)
    ;
    return uVar6;
  }
  uVar6 = (ulong)param_1 | param_5 << 0x20;
  lVar10 = *(long *)(param_6 + 0x10);
  puVar8 = puRam0000000003d3dd58;
  if (lVar10 == 0) {
code_r0x025bb254:
    uVar6 = unaff_x20;
    param_6 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar10 = extraout_x9;
    uVar9 = extraout_w8;
code_r0x025bb258:
    *(uint *)(param_6 + 0x18) = uVar9 + 1;
  }
  else {
    uVar9 = *(uint *)(param_6 + 0x18);
    uVar3 = param_6;
    if (uVar9 != *(uint *)(lVar10 + 0x18)) goto code_r0x025bb258;
    puVar8 = *(undefined8 **)(*(long *)(puRam0000000003d3dd58[3] + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar8)(param_6,uVar9 + 1);
    lVar10 = *(long *)(param_6 + 0x10);
    uVar9 = *(uint *)(param_6 + 0x18);
    *(uint *)(param_6 + 0x18) = uVar9 + 1;
    unaff_x19 = param_6;
    unaff_x20 = uVar6;
    if (lVar10 == 0) goto code_r0x025bb254;
  }
  if (uVar9 < *(uint *)(lVar10 + 0x18)) {
    *(ulong *)(lVar10 + (long)(int)uVar9 * 8 + 0x20) = uVar6;
    *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
    return uVar3;
  }
  uVar4 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar4,0);
  plVar7 = auVar27._8_8_;
  lVar10 = auVar27._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))(plVar7,0x14);
  if (lVar10 != 0) {
    pcVar12 = (code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar8[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (plVar7 != (long *)0x0) {
      if (*(long *)(*plVar7 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar5 = (undefined8 *)func_0x00f78ae4(plVar7);
        (*pcVar12)(lVar10,*puVar5,*(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x68))(lVar10);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar7,lVar11);
      goto code_r0x025bb43c;
    }
  }
  func_0x00f78af4();
code_r0x025bb43c:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x25bb440);
  (*pcVar12)();
}



// ============================================================
// RVA: 0x2f85834 | Core.UI2.UIIrregularElement.GetDrawingDimensions
// ============================================================

undefined1  [16]
Core_UI2_UIIrregularElement__GetDrawingDimensions
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000003ebc638 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc638 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a8 = 0;
  uStack_80 = /*UnityEngine.UI.Graphic$$GetPixelAdjustedRect*/ func_0x032be1fc(param_5,0);
  fVar13 = 0.0;
  fVar14 = 1.0;
  fVar16 = 1.0;
  uStack_7c = param_2;
  uStack_78 = param_3;
  uStack_74 = param_4;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,&uStack_90,0);
  uVar3 = *(undefined8 *)(param_5 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 != 0) {
    fVar4 = (float)/*UnityEngine.Sprites.DataUtility$$GetPadding*/ func_0x0322b128(*(undefined8 *)(param_5 + 0xd0),0);
    fVar15 = fVar13;
    fVar17 = fVar14;
    fVar7 = fVar16;
    if (*(long *)(param_5 + 0xd0) != 0) {
      uVar5 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(*(long *)(param_5 + 0xd0),0);
      uStack_a8 = CONCAT44(fVar15,uVar5);
      uStack_a0 = CONCAT44(fVar7,fVar17);
      uVar5 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_a8,0);
      if (*(long *)(param_5 + 0xd0) != 0) {
        uVar6 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(*(long *)(param_5 + 0xd0),0);
        uStack_a8 = CONCAT44(fVar15,uVar6);
        uStack_a0 = CONCAT44(fVar7,fVar17);
        uVar6 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_a8,0);
        uStack_98 = uVar5;
        uStack_94 = uVar6;
        iVar1 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(uVar5,0);
        iVar2 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(uVar6,0);
        fVar15 = (float)iVar1;
        fVar17 = (float)iVar2;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar4 / fVar15,fVar13 / fVar17,(fVar15 - fVar14) / fVar15,
                        (fVar17 - fVar16) / fVar17,&uStack_90,0);
        if ((param_6 != 0) && (fVar13 = (float)/*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644(&uStack_98,0), 0.0 < fVar13)) {
          /*Core.UI2.UIIrregularElement$$PreserveSpriteAspectRatio*/ func_0x02f86208(uStack_98,uStack_94,param_5,&uStack_80);
        }
        goto LAB_02f859d4;
      }
    }
    iVar1 = func_0x00f78af4();
    if (iVar1 == 0) {
      /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
      auVar12._4_4_ = extraout_var;
      auVar12._0_4_ = extraout_s0_00;
      auVar12._8_8_ = extraout_var_00;
      return auVar12;
    }
    fVar13 = 1.0 / ((fVar17 / fVar7) / (extraout_s0 / fVar15));
    if (((iVar1 != 1) || (fVar13 <= 1.0)) && ((iVar1 != 2 || (1.0 <= fVar13)))) {
      return ZEXT416((uint)fVar13);
    }
    return ZEXT816(0x3f800000);
  }
LAB_02f859d4:
  fVar15 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(&uStack_80,0);
  fVar17 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_80,0);
  fVar13 = (float)uStack_90;
  fVar7 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(&uStack_80,0);
  fVar4 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_80,0);
  fVar14 = uStack_90._4_4_;
  fVar8 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(&uStack_80,0);
  fVar9 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_80,0);
  fVar16 = (float)uStack_88;
  fVar10 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(&uStack_80,0);
  fVar11 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_80,0);
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar15 + fVar17 * fVar13,fVar7 + fVar4 * fVar14,fVar8 + fVar9 * fVar16,
                  fVar10 + fVar11 * uStack_88._4_4_,&uStack_90,0);
  return ZEXT416((uint)(float)uStack_90);
}



// ============================================================
// RVA: 0x2f85b2c | Core.UI2.UIIrregularElement.CalculateUV
// ============================================================

float Core_UI2_UIIrregularElement__CalculateUV
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                float param_5)

{
  return (param_1 - param_3) / (param_5 - param_3);
}



// ============================================================
// RVA: 0x2f85b48 | Core.UI2.UIIrregularElement.AddEdge
// ============================================================

/* WARNING: Possible PIC construction at 0x02f86104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8614c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032eeea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f861c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032eeeac) */
/* WARNING: Removing unreachable block (ram,0x032eeeb4) */
/* WARNING: Removing unreachable block (ram,0x032eeec8) */
/* WARNING: Removing unreachable block (ram,0x02f86150) */
/* WARNING: Removing unreachable block (ram,0x02f86108) */
/* WARNING: Removing unreachable block (ram,0x02f861cc) */

segment_command *
Core_UI2_UIIrregularElement__AddEdge
          (undefined8 param_1,ulong param_2,undefined8 param_3,float param_4,float param_5,
          float param_6,segment_command *param_7,ulong param_8,ulong param_9,
          segment_command *param_10,segment_command *param_11,segment_command *param_12)

{
  float *pfVar1;
  undefined8 uVar2;
  qword qVar3;
  qword qVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  qword qVar8;
  qword qVar9;
  uint uVar10;
  segment_command **ppsVar11;
  int iVar12;
  segment_command *psVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  segment_command *psVar16;
  long *plVar17;
  segment_command *psVar18;
  int iVar19;
  segment_command *extraout_x1;
  segment_command *extraout_x1_00;
  segment_command *extraout_x1_01;
  ulong uVar20;
  dword extraout_w8;
  dword dVar21;
  undefined8 *puVar22;
  long extraout_x9;
  segment_command *psVar23;
  ulong uVar24;
  segment_command *psVar25;
  int iVar26;
  long lVar27;
  segment_command *psVar28;
  code *pcVar29;
  segment_command *psVar30;
  segment_command *psVar31;
  segment_command *psVar32;
  mach_header *unaff_x26;
  long lVar33;
  undefined8 *****pppppuVar34;
  undefined *puVar35;
  float fVar36;
  float extraout_s0;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  ulong uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  segment_command *psStack_160;
  segment_command *psStack_158;
  segment_command *psStack_150;
  segment_command *psStack_148;
  segment_command *psStack_140;
  segment_command *psStack_138;
  undefined8 ****ppppuStack_130;
  undefined *puStack_128;
  mach_header *pmStack_120;
  undefined8 uStack_118;
  segment_command *psStack_110;
  segment_command *psStack_108;
  segment_command *psStack_100;
  ulong uStack_f8;
  segment_command *psStack_f0;
  segment_command *psStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  
  fVar37 = (float)param_3;
  psVar16 = param_7;
  uVar20 = param_9;
  psVar13 = param_10;
  psVar18 = param_11;
  fVar36 = param_4;
  uStack_c0 = param_2;
  uStack_b0 = param_1;
  if ((bRam0000000003ebc637 & 1) == 0) {
    func_0x00f78a20(0x3d3c7a8);
    psVar16 = (segment_command *)func_0x00f78a20(0x3d255b0);
    bRam0000000003ebc637 = 1;
  }
  uStack_d0 = param_8 & 0xffffffff;
  uVar24 = param_8 >> 0x20;
  uStack_c8 = 0;
  iVar12 = (int)param_9;
  if ((float)param_8 <= 0.0) {
    if (((ulong)param_10 & 1) == 0) {
      if (0 < iVar12) {
        psVar30 = (segment_command *)0x0;
        psVar31 = (segment_command *)&param_7[4].flags;
        psVar28 = (segment_command *)(param_9 & 0xffffffff);
        do {
          fVar40 = (float)param_2;
          fVar43 = (float)param_3;
          iVar12 = (int)uVar20;
          fVar44 = fVar36;
          if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
            func_0x00f78ad0();
            fVar44 = fVar36;
          }
          puVar22 = *(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
          unaff_x26 = (mach_header *)*puVar22;
          if (unaff_x26 == (mach_header *)0x0) goto LAB_02f860ac;
          if ((segment_command *)(ulong)unaff_x26->flags <= psVar30) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            puVar22 = *(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
          }
          lVar33 = puVar22[1];
          if (lVar33 == 0) goto LAB_02f860ac;
          lVar27 = *(long *)&unaff_x26->ncmds + (long)psVar30 * 8;
          fVar37 = *(float *)(lVar27 + 0x20);
          fVar47 = *(float *)(lVar27 + 0x24);
          if ((segment_command *)(ulong)*(uint *)(lVar33 + 0x18) <= psVar30) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar42 = param_7[3].initprot;
          uVar14 = *(undefined8 *)psVar31;
          fVar40 = (float)uVar42 +
                   (float)((ulong)*(undefined8 *)
                                   (*(long *)(lVar33 + 0x10) + (long)psVar30 * 8 + 0x20) >> 0x20) *
                   (float)((ulong)uVar14 >> 0x20);
          fVar36 = (float)/*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(0);
          fVar43 = (float)uVar14;
          if (param_11 == (segment_command *)0x0) goto LAB_02f860ac;
          param_2 = (ulong)(uint)((float)uStack_c0 + fVar47);
          param_3 = 0;
          uVar20 = 0;
          psVar16 = (segment_command *)/*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94((float)uStack_b0 + fVar37,param_11,uVar24);
          psVar30 = (segment_command *)((long)&psVar30->cmd + 1);
        } while (psVar30 != psVar28);
      }
    }
    else if (0 < iVar12) {
      psVar30 = (segment_command *)0x0;
      psVar31 = &segment_command_00000020;
      psVar28 = (segment_command *)(param_9 & 0xffffffff);
      do {
        fVar40 = (float)param_2;
        fVar43 = (float)param_3;
        iVar12 = (int)uVar20;
        fVar44 = fVar36;
        if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
          func_0x00f78ad0();
          fVar44 = fVar36;
        }
        unaff_x26 = (mach_header *)**(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
        if (unaff_x26 == (mach_header *)0x0) goto LAB_02f860ac;
        if ((segment_command *)(ulong)unaff_x26->flags <= psVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        pfVar1 = (float *)((long)psVar31->segname + *(long *)&unaff_x26->ncmds + -8);
        fVar47 = (float)uStack_b0 + *pfVar1;
        fVar48 = (float)uStack_c0 + pfVar1[1];
        fVar43 = (float)param_7[3].maxprot;
        fVar44 = (float)param_7[3].initprot;
        fVar40 = fVar44 + ((fVar48 - param_4) / (param_6 - param_4)) * (float)param_7[5].cmd;
        fVar36 = (float)/*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(fVar43 + ((fVar47 - fVar37) / (param_5 - fVar37)) *
                                                 (float)param_7[4].flags,0);
        if (param_11 == (segment_command *)0x0) goto LAB_02f860ac;
        param_3 = 0;
        param_2 = (ulong)(uint)fVar48;
        uVar20 = 0;
        psVar16 = (segment_command *)/*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(fVar47,param_11,uVar24);
        psVar30 = (segment_command *)((long)&psVar30->cmd + 1);
        psVar31 = (segment_command *)psVar31->segname;
      } while (psVar28 != psVar30);
    }
  }
  else if (((ulong)param_10 & 1) == 0) {
    if (0 < iVar12) {
      psVar30 = (segment_command *)&param_7[4].flags;
      uStack_b0 = CONCAT44((int)uStack_c0,(int)uStack_b0);
      psVar28 = (segment_command *)-(param_9 & 0xffffffff);
      psVar31 = (segment_command *)&MACH_HEADER.cputype;
      uVar41 = uStack_c0;
      do {
        fVar43 = (float)param_3;
        fVar40 = (float)uVar41;
        iVar12 = (int)uVar20;
        fVar44 = fVar36;
        if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
          func_0x00f78ad0();
          fVar44 = fVar36;
        }
        plVar17 = *(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
        lVar33 = *plVar17;
        if (lVar33 == 0) goto LAB_02f860ac;
        unaff_x26 = (mach_header *)&psVar31[-1].flags;
        if ((undefined1 *)(ulong)*(uint *)(lVar33 + 0x18) <= unaff_x26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          plVar17 = *(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
        }
        lVar27 = plVar17[1];
        if (lVar27 == 0) goto LAB_02f860ac;
        uVar14 = *(undefined8 *)(*(long *)(lVar33 + 0x10) + (long)psVar31 * 8);
        if ((undefined1 *)(ulong)*(uint *)(lVar27 + 0x18) <= unaff_x26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          plVar17 = *(long **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
        }
        lVar33 = plVar17[2];
        if (lVar33 == 0) goto LAB_02f860ac;
        uVar46 = *(undefined8 *)(*(long *)(lVar27 + 0x10) + (long)psVar31 * 8);
        if ((undefined1 *)(ulong)*(uint *)(lVar33 + 0x18) <= unaff_x26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar45 = *(undefined8 *)(*(long *)(lVar33 + 0x10) + (long)psVar31 * 8);
        uVar39 = param_7[3].initprot;
        fVar40 = (float)uVar39 +
                 (float)((ulong)uVar46 >> 0x20) * (float)((ulong)*(undefined8 *)psVar30 >> 0x20);
        fVar36 = (float)/*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(0);
        if (param_11 == (segment_command *)0x0) goto LAB_02f860ac;
        uVar41 = (ulong)(uint)((float)((ulong)uStack_b0 >> 0x20) + (float)((ulong)uVar14 >> 0x20) +
                              (float)((ulong)uVar45 >> 0x20) * (float)uStack_d0);
        param_3 = 0;
        uVar20 = 0;
        psVar16 = (segment_command *)/*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(param_11,uVar24);
        psVar31 = (segment_command *)((long)&psVar31->cmd + 1);
      } while ((undefined1 *)((long)psVar31->segname + (long)(psVar28->segname + -0x10)) !=
               (undefined1 *)0x4);
    }
  }
  else if (0 < iVar12) {
    psVar30 = (segment_command *)0x0;
    psVar31 = &segment_command_00000020;
    psVar28 = (segment_command *)(param_9 & 0xffffffff);
    do {
      fVar40 = (float)param_2;
      fVar43 = (float)param_3;
      iVar12 = (int)uVar20;
      fVar44 = fVar36;
      if (((*(ushort *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xe0) == 0)) {
        func_0x00f78ad0();
        fVar44 = fVar36;
      }
      puVar22 = *(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
      unaff_x26 = (mach_header *)*puVar22;
      if (unaff_x26 == (mach_header *)0x0) goto LAB_02f860ac;
      if ((segment_command *)(ulong)unaff_x26->flags <= psVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        puVar22 = *(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8);
      }
      lVar33 = puVar22[2];
      if (lVar33 == 0) goto LAB_02f860ac;
      pfVar1 = (float *)((long)psVar31->segname + *(long *)&unaff_x26->ncmds + -8);
      fVar47 = *pfVar1;
      fVar48 = pfVar1[1];
      if ((segment_command *)(ulong)*(uint *)(lVar33 + 0x18) <= psVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      fVar47 = (float)uStack_b0 + fVar47;
      fVar48 = (float)uStack_c0 + fVar48;
      pfVar1 = (float *)((long)psVar31->segname + *(long *)(lVar33 + 0x10) + -8);
      fVar49 = *pfVar1;
      fVar50 = pfVar1[1];
      fVar43 = (float)param_7[3].maxprot;
      fVar44 = (float)param_7[3].initprot;
      fVar40 = fVar44 + ((fVar48 - param_4) / (param_6 - param_4)) * (float)param_7[5].cmd;
      fVar36 = (float)/*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d088(fVar43 + ((fVar47 - fVar37) / (param_5 - fVar37)) *
                                               (float)param_7[4].flags,0);
      if (param_11 == (segment_command *)0x0) goto LAB_02f860ac;
      param_2 = (ulong)(uint)(fVar48 + fVar50 * (float)uStack_d0);
      param_3 = 0;
      uVar20 = 0;
      psVar16 = (segment_command *)
                /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(fVar47 + fVar49 * (float)uStack_d0,param_11,uVar24);
      psVar30 = (segment_command *)((long)&psVar30->cmd + 1);
      psVar31 = (segment_command *)psVar31->segname;
    } while (psVar28 != psVar30);
  }
  return psVar16;
LAB_02f860ac:
  func_0x00f78af4();
  ppsVar11 = (segment_command **)&pmStack_120;
  uStack_118 = 0x3d255b0;
  puStack_d8 = &Core_UI2_UIIrregularElement__AddStripTris;
  uVar10 = iVar12 - 1;
  psVar16 = (segment_command *)(ulong)uVar10;
  iVar19 = (int)extraout_x1;
  iVar26 = (int)psVar13;
  psVar25 = psVar16;
  pppppuVar34 = (undefined8 *****)&pppuStack_e0;
  pmStack_120 = unaff_x26;
  psStack_110 = psVar31;
  psStack_108 = psVar30;
  psStack_100 = psVar28;
  uStack_f8 = uVar24;
  psStack_f0 = param_7;
  psStack_e8 = param_11;
  pppuStack_e0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (iVar19 < (int)uVar10) {
    if (psVar18 == (segment_command *)0x0) {
code_r0x02f8617c:
      psVar32 = psVar13;
      func_0x00f78af4();
      ppsVar11 = &psStack_160;
      puStack_128 = &Core_UI2_UIIrregularElement__AddMiddleTris;
      uVar10 = iVar12 - 1;
      psStack_160 = psVar31;
      psStack_158 = psVar30;
      psStack_150 = psVar13;
      psStack_148 = psVar16;
      psStack_140 = extraout_x1;
      psStack_138 = psVar18;
      ppppuStack_130 = &pppuStack_e0;
      if ((int)extraout_x1_00 < (int)uVar10) {
        if (param_12 == (segment_command *)0x0) {
code_r0x02f86204:
          uVar14 = func_0x00f78af4();
          fVar47 = extraout_s0 / fVar40;
          fVar37 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_01,0);
          fVar36 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1_01,0);
          if (fVar47 <= fVar37 / fVar36) {
            fVar37 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_01,0);
            fVar36 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1_01,0);
            /*UnityEngine.Rect$$set_width*/ func_0x0325356c(fVar47 * fVar36,extraout_x1_01,0);
            fVar36 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(extraout_x1_01,0);
            fVar47 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_01,0);
            lVar33 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(uVar14,0);
            if (lVar33 != 0) {
              fVar44 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar33,0);
              extraout_x1_01->cmd = (dword)(fVar36 + (fVar37 - fVar47) * fVar44);
              return extraout_x1_01;
            }
          }
          else {
            fVar37 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574();
            fVar36 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_01,0);
            fVar40 = 1.0 / fVar47;
            /*UnityEngine.Rect$$set_height*/ func_0x0325357c(fVar40 * fVar36,extraout_x1_01,0);
            fVar36 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(extraout_x1_01,0);
            fVar47 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1_01,0);
            lVar33 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(uVar14,0);
            if (lVar33 != 0) {
              /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar33,0);
              extraout_x1_01->cmdsize = (dword)(fVar36 + (fVar37 - fVar47) * fVar40);
              return extraout_x1_01;
            }
          }
          lVar33 = func_0x00f78af4();
          uVar38 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
          *(undefined4 *)(lVar33 + 0xdc) = uVar38;
          *(float *)(lVar33 + 0xe0) = fVar40;
          *(float *)(lVar33 + 0xe4) = fVar43;
          *(float *)(lVar33 + 0xe8) = fVar44;
          uVar38 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(undefined4 *)(lVar33 + 0xec) = uVar38;
          *(float *)(lVar33 + 0xf0) = fVar40;
          uVar38 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
          *(undefined4 *)(lVar33 + 0xf4) = uVar38;
          *(float *)(lVar33 + 0xf8) = fVar40;
          *(float *)(lVar33 + 0xfc) = fVar43;
          *(float *)(lVar33 + 0x100) = fVar44;
          *(undefined4 *)(lVar33 + 0x104) = 0x40000000;
          uVar38 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(undefined4 *)(lVar33 + 0x110) = uVar38;
          *(float *)(lVar33 + 0x114) = fVar40;
          uVar38 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          *(undefined4 *)(lVar33 + 0x118) = uVar38;
          *(float *)(lVar33 + 0x11c) = fVar40;
          *(undefined4 *)(lVar33 + 0x144) = 0x3f000000;
          *(undefined4 *)(lVar33 + 0x14c) = 1;
          *(undefined4 *)(lVar33 + 0x154) = 0x3f000000;
          *(undefined8 *)(lVar33 + 0x15c) = 0x3f80000000000001;
          uVar38 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          *(undefined4 *)(lVar33 + 0x164) = uVar38;
          *(float *)(lVar33 + 0x168) = fVar40;
          *(undefined4 *)(lVar33 + 0x16c) = 0x42c80000;
          if ((bRam0000000003ec2d65 & 1) == 0) {
            func_0x00f78a20(0x3d280a0,0);
            func_0x00f78a20(0x3d21c38);
            func_0x00f78a20(0x3d1f5e0);
            bRam0000000003ec2d65 = 1;
          }
          *(undefined1 *)(lVar33 + 0x99) = 1;
          *(undefined1 *)(lVar33 + 0xb0) = 1;
          uVar14 = func_0x00f78aec(/*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent_TypeInfo*/ uRam0000000003d280a0);
          /*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent$$.ctor*/ func_0x032f0fd4(uVar14,0);
          *(undefined8 *)(lVar33 + 0xb8) = uVar14;
          *(undefined1 *)(lVar33 + 0xc0) = 1;
          uVar14 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
          *(undefined8 *)(lVar33 + 200) = uVar14;
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
          uVar38 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
          *(undefined4 *)(lVar33 + 0x20) = uVar38;
          *(float *)(lVar33 + 0x24) = fVar40;
          *(float *)(lVar33 + 0x28) = fVar43;
          *(float *)(lVar33 + 0x2c) = fVar44;
          *(undefined1 *)(lVar33 + 0x32) = 1;
          psVar16 = (segment_command *)/*UnityEngine.EventSystems.UIBehaviour$$.ctor*/ func_0x032eca9c(lVar33,0);
          lVar27 = *(long *)(lVar33 + 0x90);
          if (lVar27 == 0) {
            lVar27 = func_0x00f78aec(/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>_TypeInfo*/ uRam0000000003d1ea38);
            psVar16 = (segment_command *)/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>$$.ctor*/ func_0x0288f40c(lVar27,uRam0000000003d40f38);
            *(long *)(lVar33 + 0x90) = lVar27;
            if (lVar27 == 0) {
              plVar17 = (long *)func_0x00f78af4();
              if ((char)plVar17[6] == '\0') {
                (**(code **)(*plVar17 + 0x2e8))(plVar17,*(undefined8 *)(*plVar17 + 0x2f0));
              }
              else {
                *(undefined1 *)(plVar17 + 6) = 0;
              }
              if (*(char *)((long)plVar17 + 0x31) == '\0') {
                (**(code **)(*plVar17 + 0x308))(plVar17,*(undefined8 *)(*plVar17 + 0x310));
              }
              else {
                *(undefined1 *)((long)plVar17 + 0x31) = 0;
              }
                    /* WARNING: Could not recover jumptable at 0x032bc00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              psVar16 = (segment_command *)
                        (**(code **)(*plVar17 + 0x2f8))(plVar17,*(undefined8 *)(*plVar17 + 0x300));
              return psVar16;
            }
          }
          *(long *)(lVar27 + 0x10) = lVar33;
          *(undefined1 *)(lVar33 + 0x98) = 1;
          return psVar16;
        }
        psVar28 = (segment_command *)(ulong)((int)extraout_x1_00 + 1);
        puVar35 = &UNK_02f861cc;
        psVar16 = extraout_x1_00;
        psVar18 = psVar32;
        psVar23 = param_12;
        psVar25 = extraout_x1_00;
        psVar13 = (segment_command *)(ulong)uVar10;
        psVar30 = psVar28;
        pppppuVar34 = &ppppuStack_130;
      }
      else {
        if (param_12 == (segment_command *)0x0) goto code_r0x02f86204;
        puVar35 = &Core_UI2_UIIrregularElement__AddMiddleTris;
        ppsVar11 = (segment_command **)&pmStack_120;
        psVar16 = (segment_command *)(ulong)uVar10;
        psVar28 = extraout_x1_00;
        psVar23 = extraout_x1;
      }
    }
    else {
      psVar28 = (segment_command *)(ulong)(iVar19 + 1);
      psVar32 = (segment_command *)(ulong)(uint)(iVar26 + iVar19);
      puVar35 = &UNK_02f86108;
      ppsVar11 = (segment_command **)&pmStack_120;
      param_12 = psVar18;
      psVar16 = extraout_x1;
      psVar23 = extraout_x1;
      psVar30 = psVar28;
      psVar31 = psVar32;
    }
  }
  else {
    if (psVar18 == (segment_command *)0x0) goto code_r0x02f8617c;
    psVar32 = (segment_command *)(ulong)(uVar10 + iVar26);
    puVar35 = &UNK_02f86150;
    param_12 = psVar18;
    psVar28 = extraout_x1;
    psVar23 = extraout_x1;
    psVar13 = psVar32;
    psVar30 = (segment_command *)(ulong)(uint)(iVar26 + iVar19);
  }
  *(segment_command **)((long)ppsVar11 + -0x40) = psVar31;
  *(segment_command **)((long)ppsVar11 + -0x38) = psVar30;
  *(segment_command **)((long)ppsVar11 + -0x30) = psVar13;
  *(segment_command **)((long)ppsVar11 + -0x28) = psVar25;
  *(segment_command **)((long)ppsVar11 + -0x20) = psVar23;
  *(segment_command **)((long)ppsVar11 + -0x18) = psVar18;
  *(undefined8 ******)((long)ppsVar11 + -0x10) = pppppuVar34;
  *(undefined **)((long)ppsVar11 + -8) = puVar35;
  psVar13 = psVar28;
  if ((bRam0000000003ec2e2a & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    bRam0000000003ec2e2a = 1;
  }
  /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(param_12);
  psVar18 = *(segment_command **)param_12[1].segname;
  if (psVar18 == (segment_command *)0x0) {
    auVar51 = func_0x00f78af4();
    lVar33 = auVar51._0_8_;
    *(segment_command **)((long)ppsVar11 + -0x70) = psVar16;
    *(segment_command **)((long)ppsVar11 + -0x68) = psVar28;
    *(segment_command **)((long)ppsVar11 + -0x60) = param_12;
    *(segment_command **)((long)ppsVar11 + -0x58) = psVar32;
    *(undefined1 **)((long)ppsVar11 + -0x50) = (undefined1 *)((long)ppsVar11 + -0x10);
    *(undefined **)((long)ppsVar11 + -0x48) = &UnityEngine_UI_VertexHelper__AddUIVertexStream;
    if ((bRam0000000003ec2e2b & 1) == 0) {
      func_0x00f78a20(0x3d3ac98);
      bRam0000000003ec2e2b = 1;
    }
    psVar16 = (segment_command *)/*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(lVar33);
    if (auVar51._8_8_ != 0) {
      uVar14 = *(undefined8 *)(lVar33 + 0x10);
      uVar5 = *(undefined8 *)(lVar33 + 0x18);
      uVar46 = *(undefined8 *)(lVar33 + 0x20);
      uVar6 = *(undefined8 *)(lVar33 + 0x28);
      uVar45 = *(undefined8 *)(lVar33 + 0x30);
      uVar7 = *(undefined8 *)(lVar33 + 0x38);
      uVar2 = *(undefined8 *)(lVar33 + 0x40);
      *(undefined8 *)((long)ppsVar11 + -0x80) = *(undefined8 *)(lVar33 + 0x48);
      *(undefined8 *)((long)ppsVar11 + -0x78) = 0;
      psVar16 = (segment_command *)
                /*UnityEngine.CanvasRenderer$$AddUIVertexStream*/ func_0x032f5948(auVar51._8_8_,uVar14,uVar5,uVar46,uVar6,uVar45,uVar7,uVar2);
    }
    if (psVar13 != (segment_command *)0x0) {
      lVar27 = *(long *)(lVar33 + 0x50);
      if (lVar27 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023dbf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        psVar16 = (segment_command *)
                  (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(lRam0000000003d3ac98 + 0x18) + 0xc0) + 0x70))
                            (lVar27,*(undefined4 *)(lVar27 + 0x18),psVar13);
        return psVar16;
      }
      auVar51 = func_0x00f78af4();
      psVar16 = auVar51._0_8_;
      if (auVar51._8_8_ != 0) {
        *(long *)((long)ppsVar11 + -0xa0) = lVar33;
        *(segment_command **)((long)ppsVar11 + -0x98) = psVar13;
        *(undefined1 **)((long)ppsVar11 + -0x90) = (undefined1 *)((long)ppsVar11 + -0x50);
        *(undefined **)((long)ppsVar11 + -0x88) =
             &UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream;
        /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0();
        uVar14 = *(undefined8 *)(psVar16->segname + 8);
        qVar8 = psVar16->vmaddr;
        qVar3 = psVar16->vmsize;
        qVar9 = psVar16->fileoff;
        qVar4 = psVar16->filesize;
        uVar45._0_4_ = psVar16->maxprot;
        uVar45._4_4_ = psVar16->initprot;
        uVar46._0_4_ = psVar16->nsects;
        uVar46._4_4_ = psVar16->flags;
        uVar2 = *(undefined8 *)(psVar16 + 1);
        *(undefined8 *)((long)ppsVar11 + -0xb8) = *(undefined8 *)psVar16[1].segname;
        *(undefined8 *)((long)ppsVar11 + -0xb0) = 0;
        *(undefined8 *)((long)ppsVar11 + -0xc0) = uVar2;
        psVar16 = (segment_command *)
                  /*UnityEngine.CanvasRenderer$$SplitUIVertexStreams*/ func_0x032f5420(auVar51._8_8_,uVar14,qVar8,qVar3,qVar9,qVar4,uVar45,uVar46);
      }
      return psVar16;
    }
    return psVar16;
  }
  *(segment_command **)((long)ppsVar11 + -0x60) = param_12;
  *(segment_command **)((long)ppsVar11 + -0x58) = psVar32;
  *(undefined1 **)((long)ppsVar11 + -0x50) = (undefined1 *)((long)ppsVar11 + -0x10);
  *(undefined **)((long)ppsVar11 + -0x48) = &UNK_032eeeac;
  lVar33 = *(long *)((long)psVar18->segname + 8);
  puVar22 = puRam0000000003d3ac90;
  if (lVar33 == 0) {
code_r0x023dbd28:
    psVar18 = psVar32;
    psVar13 = (segment_command *)func_0x00f78af4();
    lVar33 = extraout_x9;
    dVar21 = extraout_w8;
code_r0x023dbd2c:
    *(dword *)&psVar18->vmaddr = dVar21 + 1;
  }
  else {
    dVar21 = (dword)psVar18->vmaddr;
    psVar13 = psVar18;
    param_12 = psVar16;
    if (dVar21 != *(dword *)(lVar33 + 0x18)) goto code_r0x023dbd2c;
    puVar22 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
    psVar13 = (segment_command *)(*(code *)*puVar22)(psVar18,dVar21 + 1);
    lVar33 = *(long *)((long)psVar18->segname + 8);
    dVar21 = (dword)psVar18->vmaddr;
    *(dword *)&psVar18->vmaddr = dVar21 + 1;
    psVar32 = psVar18;
    if (lVar33 == 0) goto code_r0x023dbd28;
  }
  if (dVar21 < *(uint *)(lVar33 + 0x18)) {
    *(int *)(lVar33 + (long)(int)dVar21 * 4 + 0x20) = (int)param_12;
    *(int *)((long)&psVar18->vmaddr + 4) = *(int *)((long)&psVar18->vmaddr + 4) + 1;
    return psVar13;
  }
  uVar14 = func_0x00f78b24();
  auVar51 = func_0x00f78ac0(uVar14,0);
  plVar17 = auVar51._8_8_;
  lVar33 = auVar51._0_8_;
  *(segment_command **)((long)ppsVar11 + -0xa0) = psVar31;
  *(undefined8 *)((long)ppsVar11 + -0x98) = 0x3d3ac90;
  *(segment_command **)((long)ppsVar11 + -0x90) = psVar16;
  *(segment_command **)((long)ppsVar11 + -0x88) = psVar28;
  *(segment_command **)((long)ppsVar11 + -0x80) = param_12;
  *(segment_command **)((long)ppsVar11 + -0x78) = psVar18;
  *(undefined1 **)((long)ppsVar11 + -0x70) = (undefined1 *)((long)ppsVar11 + -0x50);
  *(undefined **)((long)ppsVar11 + -0x68) =
       &System_Collections_Generic_List_int___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar22[3] + 0xc0) + 0x48))(plVar17,0x14);
  if (lVar33 != 0) {
    pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar22[3] + 0xc0) + 0x28);
    lVar27 = *(long *)(*(long *)(puVar22[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    if (plVar17 != (long *)0x0) {
      if (*(long *)(*plVar17 + 0x40) == *(long *)(lVar27 + 0x40)) {
        puVar15 = (undefined4 *)func_0x00f78ae4(plVar17);
        (*pcVar29)(lVar33,*puVar15,*(undefined8 *)(*(long *)(puVar22[3] + 0xc0) + 0x28));
        iVar12 = (*(code *)**(undefined8 **)(*(long *)(puVar22[3] + 0xc0) + 0x68))(lVar33);
        return (segment_command *)(ulong)(iVar12 - 1);
      }
      func_0x00f78e5c(plVar17,lVar27);
      goto code_r0x023dbf10;
    }
  }
  func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x23dbf14);
  (*pcVar29)();
}



// ============================================================
// RVA: 0x2f860b0 | Core.UI2.UIIrregularElement.AddStripTris
// ============================================================

/* WARNING: Possible PIC construction at 0x02f86104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8614c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032eeea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f861c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032eeeac) */
/* WARNING: Removing unreachable block (ram,0x032eeeb4) */
/* WARNING: Removing unreachable block (ram,0x032eeec8) */
/* WARNING: Removing unreachable block (ram,0x02f86150) */
/* WARNING: Removing unreachable block (ram,0x02f86108) */
/* WARNING: Removing unreachable block (ram,0x02f861cc) */

float * Core_UI2_UIIrregularElement__AddStripTris
                  (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,float *param_6,int param_7,float *param_8,float *param_9,
                  float *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long *plVar13;
  float *pfVar14;
  float *pfVar15;
  float *extraout_x1;
  float *extraout_x1_00;
  undefined8 *puVar16;
  float extraout_w8;
  long lVar17;
  long extraout_x9;
  float *pfVar18;
  int iVar19;
  long lVar20;
  code *pcVar21;
  float *unaff_x23;
  float *pfVar22;
  float *unaff_x24;
  float *pfVar23;
  undefined8 *****pppppuVar24;
  undefined *puVar25;
  float extraout_s0;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 ****ppppuStack_60;
  undefined *puStack_58;
  
  puVar9 = &stack0xffffffffffffffb0;
  uVar8 = param_7 - 1;
  pfVar18 = (float *)(ulong)uVar8;
  iVar10 = (int)param_6;
  iVar19 = (int)param_8;
  pppppuVar24 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (iVar10 < (int)uVar8) {
    if (param_9 == (float *)0x0) {
LAB_02f8617c:
      pfVar23 = param_8;
      func_0x00f78af4();
      puVar9 = &stack0xffffffffffffff70;
      puStack_58 = &Core_UI2_UIIrregularElement__AddMiddleTris;
      uVar8 = param_7 - 1;
      ppppuStack_60 = (undefined8 ****)&stack0xfffffffffffffff0;
      if ((int)extraout_x1 < (int)uVar8) {
        if (param_10 == (float *)0x0) {
code_r0x02f86204:
          uVar11 = func_0x00f78af4();
          fVar30 = extraout_s0 / param_2;
          fVar26 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_00,0);
          fVar27 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1_00,0);
          if (fVar30 <= fVar26 / fVar27) {
            fVar26 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_00,0);
            fVar27 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1_00,0);
            /*UnityEngine.Rect$$set_width*/ func_0x0325356c(fVar30 * fVar27,extraout_x1_00,0);
            fVar27 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(extraout_x1_00,0);
            fVar30 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_00,0);
            lVar17 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(uVar11,0);
            if (lVar17 != 0) {
              fVar28 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar17,0);
              *extraout_x1_00 = fVar27 + (fVar26 - fVar30) * fVar28;
              return extraout_x1_00;
            }
          }
          else {
            fVar26 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574();
            fVar27 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1_00,0);
            param_2 = 1.0 / fVar30;
            /*UnityEngine.Rect$$set_height*/ func_0x0325357c(param_2 * fVar27,extraout_x1_00,0);
            fVar27 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(extraout_x1_00,0);
            fVar30 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1_00,0);
            lVar17 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(uVar11,0);
            if (lVar17 != 0) {
              /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar17,0);
              extraout_x1_00[1] = fVar27 + (fVar26 - fVar30) * param_2;
              return extraout_x1_00;
            }
          }
          lVar17 = func_0x00f78af4();
          uVar29 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
          *(undefined4 *)(lVar17 + 0xdc) = uVar29;
          *(float *)(lVar17 + 0xe0) = param_2;
          *(undefined4 *)(lVar17 + 0xe4) = param_3;
          *(undefined4 *)(lVar17 + 0xe8) = param_4;
          uVar29 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(undefined4 *)(lVar17 + 0xec) = uVar29;
          *(float *)(lVar17 + 0xf0) = param_2;
          uVar29 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
          *(undefined4 *)(lVar17 + 0xf4) = uVar29;
          *(float *)(lVar17 + 0xf8) = param_2;
          *(undefined4 *)(lVar17 + 0xfc) = param_3;
          *(undefined4 *)(lVar17 + 0x100) = param_4;
          *(undefined4 *)(lVar17 + 0x104) = 0x40000000;
          uVar29 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(undefined4 *)(lVar17 + 0x110) = uVar29;
          *(float *)(lVar17 + 0x114) = param_2;
          uVar29 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          *(undefined4 *)(lVar17 + 0x118) = uVar29;
          *(float *)(lVar17 + 0x11c) = param_2;
          *(undefined4 *)(lVar17 + 0x144) = 0x3f000000;
          *(undefined4 *)(lVar17 + 0x14c) = 1;
          *(undefined4 *)(lVar17 + 0x154) = 0x3f000000;
          *(undefined8 *)(lVar17 + 0x15c) = 0x3f80000000000001;
          uVar29 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          *(undefined4 *)(lVar17 + 0x164) = uVar29;
          *(float *)(lVar17 + 0x168) = param_2;
          *(undefined4 *)(lVar17 + 0x16c) = 0x42c80000;
          if ((bRam0000000003ec2d65 & 1) == 0) {
            func_0x00f78a20(0x3d280a0,0);
            func_0x00f78a20(0x3d21c38);
            func_0x00f78a20(0x3d1f5e0);
            bRam0000000003ec2d65 = 1;
          }
          *(undefined1 *)(lVar17 + 0x99) = 1;
          *(undefined1 *)(lVar17 + 0xb0) = 1;
          uVar11 = func_0x00f78aec(/*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent_TypeInfo*/ uRam0000000003d280a0);
          /*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent$$.ctor*/ func_0x032f0fd4(uVar11,0);
          *(undefined8 *)(lVar17 + 0xb8) = uVar11;
          *(undefined1 *)(lVar17 + 0xc0) = 1;
          uVar11 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
          *(undefined8 *)(lVar17 + 200) = uVar11;
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
          uVar29 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
          *(undefined4 *)(lVar17 + 0x20) = uVar29;
          *(float *)(lVar17 + 0x24) = param_2;
          *(undefined4 *)(lVar17 + 0x28) = param_3;
          *(undefined4 *)(lVar17 + 0x2c) = param_4;
          *(undefined1 *)(lVar17 + 0x32) = 1;
          pfVar18 = (float *)/*UnityEngine.EventSystems.UIBehaviour$$.ctor*/ func_0x032eca9c(lVar17,0);
          lVar20 = *(long *)(lVar17 + 0x90);
          if (lVar20 == 0) {
            lVar20 = func_0x00f78aec(/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>_TypeInfo*/ uRam0000000003d1ea38);
            pfVar18 = (float *)/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>$$.ctor*/ func_0x0288f40c(lVar20,uRam0000000003d40f38);
            *(long *)(lVar17 + 0x90) = lVar20;
            if (lVar20 == 0) {
              plVar13 = (long *)func_0x00f78af4();
              if ((char)plVar13[6] == '\0') {
                (**(code **)(*plVar13 + 0x2e8))(plVar13,*(undefined8 *)(*plVar13 + 0x2f0));
              }
              else {
                *(undefined1 *)(plVar13 + 6) = 0;
              }
              if (*(char *)((long)plVar13 + 0x31) == '\0') {
                (**(code **)(*plVar13 + 0x308))(plVar13,*(undefined8 *)(*plVar13 + 0x310));
              }
              else {
                *(undefined1 *)((long)plVar13 + 0x31) = 0;
              }
                    /* WARNING: Could not recover jumptable at 0x032bc00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pfVar18 = (float *)(**(code **)(*plVar13 + 0x2f8))
                                           (plVar13,*(undefined8 *)(*plVar13 + 0x300));
              return pfVar18;
            }
          }
          *(long *)(lVar20 + 0x10) = lVar17;
          *(undefined1 *)(lVar17 + 0x98) = 1;
          return pfVar18;
        }
        pfVar22 = (float *)(ulong)((int)extraout_x1 + 1);
        puVar25 = &UNK_02f861cc;
        pfVar15 = extraout_x1;
        param_9 = pfVar23;
        param_6 = param_10;
        pfVar18 = extraout_x1;
        param_8 = (float *)(ulong)uVar8;
        unaff_x23 = pfVar22;
        pppppuVar24 = &ppppuStack_60;
      }
      else {
        if (param_10 == (float *)0x0) goto code_r0x02f86204;
        puVar25 = &Core_UI2_UIIrregularElement__AddMiddleTris;
        puVar9 = &stack0xffffffffffffffb0;
        pfVar15 = (float *)(ulong)uVar8;
        pfVar22 = extraout_x1;
      }
    }
    else {
      pfVar23 = (float *)(ulong)(uint)(iVar19 + iVar10);
      puVar25 = (undefined *)0x2f86108;
      puVar9 = &stack0xffffffffffffffb0;
      param_10 = param_9;
      pfVar15 = param_6;
      pfVar22 = (float *)(ulong)(iVar10 + 1);
      unaff_x23 = (float *)(ulong)(iVar10 + 1);
      unaff_x24 = pfVar23;
    }
  }
  else {
    if (param_9 == (float *)0x0) goto LAB_02f8617c;
    pfVar23 = (float *)(ulong)(uVar8 + iVar19);
    puVar25 = (undefined *)0x2f86150;
    param_10 = param_9;
    pfVar15 = pfVar18;
    pfVar22 = param_6;
    param_8 = pfVar23;
    unaff_x23 = (float *)(ulong)(uint)(iVar19 + iVar10);
  }
  *(float **)(puVar9 + -0x40) = unaff_x24;
  *(float **)(puVar9 + -0x38) = unaff_x23;
  *(float **)(puVar9 + -0x30) = param_8;
  *(float **)(puVar9 + -0x28) = pfVar18;
  *(float **)(puVar9 + -0x20) = param_6;
  *(float **)(puVar9 + -0x18) = param_9;
  *(undefined8 ******)(puVar9 + -0x10) = pppppuVar24;
  *(undefined **)(puVar9 + -8) = puVar25;
  pfVar18 = pfVar22;
  if ((bRam0000000003ec2e2a & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    bRam0000000003ec2e2a = 1;
  }
  /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(param_10);
  pfVar14 = *(float **)(param_10 + 0x14);
  if (pfVar14 == (float *)0x0) {
    auVar31 = func_0x00f78af4();
    lVar17 = auVar31._0_8_;
    *(float **)(puVar9 + -0x70) = pfVar15;
    *(float **)(puVar9 + -0x68) = pfVar22;
    *(float **)(puVar9 + -0x60) = param_10;
    *(float **)(puVar9 + -0x58) = pfVar23;
    *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x48) = &UnityEngine_UI_VertexHelper__AddUIVertexStream;
    if ((bRam0000000003ec2e2b & 1) == 0) {
      func_0x00f78a20(0x3d3ac98);
      bRam0000000003ec2e2b = 1;
    }
    pfVar15 = (float *)/*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(lVar17);
    if (auVar31._8_8_ != 0) {
      uVar11 = *(undefined8 *)(lVar17 + 0x10);
      uVar4 = *(undefined8 *)(lVar17 + 0x18);
      uVar1 = *(undefined8 *)(lVar17 + 0x20);
      uVar5 = *(undefined8 *)(lVar17 + 0x28);
      uVar2 = *(undefined8 *)(lVar17 + 0x30);
      uVar6 = *(undefined8 *)(lVar17 + 0x38);
      uVar3 = *(undefined8 *)(lVar17 + 0x40);
      *(undefined8 *)(puVar9 + -0x80) = *(undefined8 *)(lVar17 + 0x48);
      *(undefined8 *)(puVar9 + -0x78) = 0;
      pfVar15 = (float *)/*UnityEngine.CanvasRenderer$$AddUIVertexStream*/ func_0x032f5948(auVar31._8_8_,uVar11,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3);
    }
    if (pfVar18 != (float *)0x0) {
      lVar20 = *(long *)(lVar17 + 0x50);
      if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023dbf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar18 = (float *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(lRam0000000003d3ac98 + 0x18) + 0xc0) +
                                       0x70))(lVar20,*(undefined4 *)(lVar20 + 0x18),pfVar18);
        return pfVar18;
      }
      auVar31 = func_0x00f78af4();
      pfVar15 = auVar31._0_8_;
      if (auVar31._8_8_ != 0) {
        *(long *)(puVar9 + -0xa0) = lVar17;
        *(float **)(puVar9 + -0x98) = pfVar18;
        *(undefined1 **)(puVar9 + -0x90) = puVar9 + -0x50;
        *(undefined **)(puVar9 + -0x88) = &UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream;
        /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0();
        uVar11 = *(undefined8 *)(pfVar15 + 4);
        uVar4 = *(undefined8 *)(pfVar15 + 6);
        uVar1 = *(undefined8 *)(pfVar15 + 8);
        uVar5 = *(undefined8 *)(pfVar15 + 10);
        uVar2 = *(undefined8 *)(pfVar15 + 0xc);
        uVar6 = *(undefined8 *)(pfVar15 + 0xe);
        uVar3 = *(undefined8 *)(pfVar15 + 0x10);
        uVar7 = *(undefined8 *)(pfVar15 + 0x12);
        *(undefined8 *)(puVar9 + -0xb8) = *(undefined8 *)(pfVar15 + 0x14);
        *(undefined8 *)(puVar9 + -0xb0) = 0;
        *(undefined8 *)(puVar9 + -0xc0) = uVar7;
        pfVar15 = (float *)/*UnityEngine.CanvasRenderer$$SplitUIVertexStreams*/ func_0x032f5420(auVar31._8_8_,uVar11,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3)
        ;
      }
      return pfVar15;
    }
    return pfVar15;
  }
  *(float **)(puVar9 + -0x60) = param_10;
  *(float **)(puVar9 + -0x58) = pfVar23;
  *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -0x48) = &UNK_032eeeac;
  lVar17 = *(long *)(pfVar14 + 4);
  puVar16 = puRam0000000003d3ac90;
  if (lVar17 == 0) {
code_r0x023dbd28:
    pfVar14 = pfVar23;
    pfVar18 = (float *)func_0x00f78af4();
    lVar17 = extraout_x9;
    fVar26 = extraout_w8;
code_r0x023dbd2c:
    pfVar14[6] = (float)((int)fVar26 + 1);
  }
  else {
    fVar26 = pfVar14[6];
    pfVar18 = pfVar14;
    param_10 = pfVar15;
    if (fVar26 != *(float *)(lVar17 + 0x18)) goto code_r0x023dbd2c;
    puVar16 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
    pfVar18 = (float *)(*(code *)*puVar16)(pfVar14,(int)fVar26 + 1);
    lVar17 = *(long *)(pfVar14 + 4);
    fVar26 = pfVar14[6];
    pfVar14[6] = (float)((int)fVar26 + 1);
    pfVar23 = pfVar14;
    if (lVar17 == 0) goto code_r0x023dbd28;
  }
  if ((uint)fVar26 < (uint)*(float *)(lVar17 + 0x18)) {
    *(int *)(lVar17 + (long)(int)fVar26 * 4 + 0x20) = (int)param_10;
    pfVar14[7] = (float)((int)pfVar14[7] + 1);
    return pfVar18;
  }
  uVar11 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar11,0);
  plVar13 = auVar31._8_8_;
  lVar17 = auVar31._0_8_;
  *(float **)(puVar9 + -0xa0) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x98) = 0x3d3ac90;
  *(float **)(puVar9 + -0x90) = pfVar15;
  *(float **)(puVar9 + -0x88) = pfVar22;
  *(float **)(puVar9 + -0x80) = param_10;
  *(float **)(puVar9 + -0x78) = pfVar14;
  *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x50;
  *(undefined **)(puVar9 + -0x68) =
       &System_Collections_Generic_List_int___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x48))(plVar13,0x14);
  if (lVar17 != 0) {
    pcVar21 = (code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x28);
    lVar20 = *(long *)(*(long *)(puVar16[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
    }
    if (plVar13 != (long *)0x0) {
      if (*(long *)(*plVar13 + 0x40) == *(long *)(lVar20 + 0x40)) {
        puVar12 = (undefined4 *)func_0x00f78ae4(plVar13);
        (*pcVar21)(lVar17,*puVar12,*(undefined8 *)(*(long *)(puVar16[3] + 0xc0) + 0x28));
        iVar10 = (*(code *)**(undefined8 **)(*(long *)(puVar16[3] + 0xc0) + 0x68))(lVar17);
        return (float *)(ulong)(iVar10 - 1);
      }
      func_0x00f78e5c(plVar13,lVar20);
      goto code_r0x023dbf10;
    }
  }
  func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x23dbf14);
  (*pcVar21)();
}



// ============================================================
// RVA: 0x2f86180 | Core.UI2.UIIrregularElement.AddMiddleTris
// ============================================================

/* WARNING: Possible PIC construction at 0x02f861c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032eeea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f861cc) */
/* WARNING: Removing unreachable block (ram,0x032eeeac) */
/* WARNING: Removing unreachable block (ram,0x032eeeb4) */
/* WARNING: Removing unreachable block (ram,0x032eeec8) */

float * Core_UI2_UIIrregularElement__AddMiddleTris
                  (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,ulong param_6,int param_7,float *param_8,undefined8 param_9,
                  ulong param_10)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *plVar14;
  float *pfVar15;
  float *extraout_x1;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  float extraout_w8;
  long lVar20;
  long extraout_x9;
  float *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar21;
  ulong unaff_x22;
  code *pcVar22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float extraout_s0;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar9 = param_7 - 1;
  if ((int)param_6 < (int)uVar9) {
    if (param_10 == 0) {
LAB_02f86204:
      uVar12 = func_0x00f78af4();
      fVar27 = extraout_s0 / param_2;
      fVar23 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1,0);
      fVar24 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1,0);
      if (fVar27 <= fVar23 / fVar24) {
        fVar23 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1,0);
        fVar24 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1,0);
        /*UnityEngine.Rect$$set_width*/ func_0x0325356c(fVar27 * fVar24,extraout_x1,0);
        fVar24 = (float)/*UnityEngine.Rect$$get_x*/ func_0x032534b8(extraout_x1,0);
        fVar27 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1,0);
        lVar20 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(uVar12,0);
        if (lVar20 != 0) {
          fVar25 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar20,0);
          *extraout_x1 = fVar24 + (fVar23 - fVar27) * fVar25;
          return extraout_x1;
        }
      }
      else {
        fVar23 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574();
        fVar24 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(extraout_x1,0);
        param_2 = 1.0 / fVar27;
        /*UnityEngine.Rect$$set_height*/ func_0x0325357c(param_2 * fVar24,extraout_x1,0);
        fVar24 = (float)/*UnityEngine.Rect$$get_y*/ func_0x032534c8(extraout_x1,0);
        fVar27 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(extraout_x1,0);
        lVar20 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(uVar12,0);
        if (lVar20 != 0) {
          /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar20,0);
          extraout_x1[1] = fVar24 + (fVar23 - fVar27) * param_2;
          return extraout_x1;
        }
      }
      lVar20 = func_0x00f78af4();
      uVar26 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
      *(undefined4 *)(lVar20 + 0xdc) = uVar26;
      *(float *)(lVar20 + 0xe0) = param_2;
      *(undefined4 *)(lVar20 + 0xe4) = param_3;
      *(undefined4 *)(lVar20 + 0xe8) = param_4;
      uVar26 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(undefined4 *)(lVar20 + 0xec) = uVar26;
      *(float *)(lVar20 + 0xf0) = param_2;
      uVar26 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
      *(undefined4 *)(lVar20 + 0xf4) = uVar26;
      *(float *)(lVar20 + 0xf8) = param_2;
      *(undefined4 *)(lVar20 + 0xfc) = param_3;
      *(undefined4 *)(lVar20 + 0x100) = param_4;
      *(undefined4 *)(lVar20 + 0x104) = 0x40000000;
      uVar26 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(undefined4 *)(lVar20 + 0x110) = uVar26;
      *(float *)(lVar20 + 0x114) = param_2;
      uVar26 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
      *(undefined4 *)(lVar20 + 0x118) = uVar26;
      *(float *)(lVar20 + 0x11c) = param_2;
      *(undefined4 *)(lVar20 + 0x144) = 0x3f000000;
      *(undefined4 *)(lVar20 + 0x14c) = 1;
      *(undefined4 *)(lVar20 + 0x154) = 0x3f000000;
      *(undefined8 *)(lVar20 + 0x15c) = 0x3f80000000000001;
      uVar26 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
      *(undefined4 *)(lVar20 + 0x164) = uVar26;
      *(float *)(lVar20 + 0x168) = param_2;
      *(undefined4 *)(lVar20 + 0x16c) = 0x42c80000;
      if ((bRam0000000003ec2d65 & 1) == 0) {
        func_0x00f78a20(0x3d280a0,0);
        func_0x00f78a20(0x3d21c38);
        func_0x00f78a20(0x3d1f5e0);
        bRam0000000003ec2d65 = 1;
      }
      *(undefined1 *)(lVar20 + 0x99) = 1;
      *(undefined1 *)(lVar20 + 0xb0) = 1;
      uVar12 = func_0x00f78aec(/*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent_TypeInfo*/ uRam0000000003d280a0);
      /*UnityEngine.UI.MaskableGraphic.CullStateChangedEvent$$.ctor*/ func_0x032f0fd4(uVar12,0);
      *(undefined8 *)(lVar20 + 0xb8) = uVar12;
      *(undefined1 *)(lVar20 + 0xc0) = 1;
      uVar12 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
      *(undefined8 *)(lVar20 + 200) = uVar12;
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
      uVar26 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
      *(undefined4 *)(lVar20 + 0x20) = uVar26;
      *(float *)(lVar20 + 0x24) = param_2;
      *(undefined4 *)(lVar20 + 0x28) = param_3;
      *(undefined4 *)(lVar20 + 0x2c) = param_4;
      *(undefined1 *)(lVar20 + 0x32) = 1;
      pfVar15 = (float *)/*UnityEngine.EventSystems.UIBehaviour$$.ctor*/ func_0x032eca9c(lVar20,0);
      lVar21 = *(long *)(lVar20 + 0x90);
      if (lVar21 == 0) {
        lVar21 = func_0x00f78aec(/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>_TypeInfo*/ uRam0000000003d1ea38);
        pfVar15 = (float *)/*UnityEngine.UI.CoroutineTween.TweenRunner<ColorTween>$$.ctor*/ func_0x0288f40c(lVar21,uRam0000000003d40f38);
        *(long *)(lVar20 + 0x90) = lVar21;
        if (lVar21 == 0) {
          plVar14 = (long *)func_0x00f78af4();
          if ((char)plVar14[6] == '\0') {
            (**(code **)(*plVar14 + 0x2e8))(plVar14,*(undefined8 *)(*plVar14 + 0x2f0));
          }
          else {
            *(undefined1 *)(plVar14 + 6) = 0;
          }
          if (*(char *)((long)plVar14 + 0x31) == '\0') {
            (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
          }
          else {
            *(undefined1 *)((long)plVar14 + 0x31) = 0;
          }
                    /* WARNING: Could not recover jumptable at 0x032bc00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pfVar15 = (float *)(**(code **)(*plVar14 + 0x2f8))
                                       (plVar14,*(undefined8 *)(*plVar14 + 0x300));
          return pfVar15;
        }
      }
      *(long *)(lVar21 + 0x10) = lVar20;
      *(undefined1 *)(lVar20 + 0x98) = 1;
      return pfVar15;
    }
    unaff_x23 = (ulong)((int)param_6 + 1);
    unaff_x30 = 0x2f861cc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    uVar16 = param_6;
    uVar18 = unaff_x23;
    unaff_x19 = param_8;
    unaff_x20 = param_10;
    unaff_x21 = param_6;
    unaff_x22 = (ulong)uVar9;
    unaff_x29 = puVar1;
  }
  else {
    uVar16 = (ulong)uVar9;
    uVar18 = param_6;
    if (param_10 == 0) goto LAB_02f86204;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar19 = uVar18;
  if ((bRam0000000003ec2e2a & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    bRam0000000003ec2e2a = 1;
  }
  /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(param_10);
  pfVar15 = *(float **)(param_10 + 0x50);
  if (pfVar15 == (float *)0x0) {
    auVar28 = func_0x00f78af4();
    lVar20 = auVar28._0_8_;
    *(ulong *)((long)register0x00000008 + -0x70) = uVar16;
    *(ulong *)((long)register0x00000008 + -0x68) = uVar18;
    *(ulong *)((long)register0x00000008 + -0x60) = param_10;
    *(float **)((long)register0x00000008 + -0x58) = param_8;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &UnityEngine_UI_VertexHelper__AddUIVertexStream;
    if ((bRam0000000003ec2e2b & 1) == 0) {
      func_0x00f78a20(0x3d3ac98);
      bRam0000000003ec2e2b = 1;
    }
    pfVar15 = (float *)/*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(lVar20);
    if (auVar28._8_8_ != 0) {
      uVar12 = *(undefined8 *)(lVar20 + 0x10);
      uVar5 = *(undefined8 *)(lVar20 + 0x18);
      uVar2 = *(undefined8 *)(lVar20 + 0x20);
      uVar6 = *(undefined8 *)(lVar20 + 0x28);
      uVar3 = *(undefined8 *)(lVar20 + 0x30);
      uVar7 = *(undefined8 *)(lVar20 + 0x38);
      uVar4 = *(undefined8 *)(lVar20 + 0x40);
      *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(lVar20 + 0x48);
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      pfVar15 = (float *)/*UnityEngine.CanvasRenderer$$AddUIVertexStream*/ func_0x032f5948(auVar28._8_8_,uVar12,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4);
    }
    if (uVar19 != 0) {
      lVar21 = *(long *)(lVar20 + 0x50);
      if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023dbf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar15 = (float *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(lRam0000000003d3ac98 + 0x18) + 0xc0) +
                                       0x70))(lVar21,*(undefined4 *)(lVar21 + 0x18),uVar19);
        return pfVar15;
      }
      auVar28 = func_0x00f78af4();
      pfVar15 = auVar28._0_8_;
      if (auVar28._8_8_ != 0) {
        *(long *)((long)register0x00000008 + -0xa0) = lVar20;
        *(ulong *)((long)register0x00000008 + -0x98) = uVar19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x50);
        *(undefined **)((long)register0x00000008 + -0x88) =
             &UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream;
        /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0();
        uVar12 = *(undefined8 *)(pfVar15 + 4);
        uVar5 = *(undefined8 *)(pfVar15 + 6);
        uVar2 = *(undefined8 *)(pfVar15 + 8);
        uVar6 = *(undefined8 *)(pfVar15 + 10);
        uVar3 = *(undefined8 *)(pfVar15 + 0xc);
        uVar7 = *(undefined8 *)(pfVar15 + 0xe);
        uVar4 = *(undefined8 *)(pfVar15 + 0x10);
        uVar8 = *(undefined8 *)(pfVar15 + 0x12);
        *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(pfVar15 + 0x14);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar8;
        pfVar15 = (float *)/*UnityEngine.CanvasRenderer$$SplitUIVertexStreams*/ func_0x032f5420(auVar28._8_8_,uVar12,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4)
        ;
      }
      return pfVar15;
    }
    return pfVar15;
  }
  *(ulong *)((long)register0x00000008 + -0x60) = param_10;
  *(float **)((long)register0x00000008 + -0x58) = param_8;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &UNK_032eeeac;
  lVar20 = *(long *)(pfVar15 + 4);
  puVar17 = puRam0000000003d3ac90;
  if (lVar20 == 0) {
code_r0x023dbd28:
    pfVar15 = param_8;
    pfVar11 = (float *)func_0x00f78af4();
    lVar20 = extraout_x9;
    fVar23 = extraout_w8;
code_r0x023dbd2c:
    pfVar15[6] = (float)((int)fVar23 + 1);
  }
  else {
    fVar23 = pfVar15[6];
    pfVar11 = pfVar15;
    param_10 = uVar16;
    if (fVar23 != *(float *)(lVar20 + 0x18)) goto code_r0x023dbd2c;
    puVar17 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
    pfVar11 = (float *)(*(code *)*puVar17)(pfVar15,(int)fVar23 + 1);
    lVar20 = *(long *)(pfVar15 + 4);
    fVar23 = pfVar15[6];
    pfVar15[6] = (float)((int)fVar23 + 1);
    param_8 = pfVar15;
    if (lVar20 == 0) goto code_r0x023dbd28;
  }
  if ((uint)fVar23 < (uint)*(float *)(lVar20 + 0x18)) {
    *(int *)(lVar20 + (long)(int)fVar23 * 4 + 0x20) = (int)param_10;
    pfVar15[7] = (float)((int)pfVar15[7] + 1);
    return pfVar11;
  }
  uVar12 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar12,0);
  plVar14 = auVar28._8_8_;
  lVar20 = auVar28._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3d3ac90;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar16;
  *(ulong *)((long)register0x00000008 + -0x88) = uVar18;
  *(ulong *)((long)register0x00000008 + -0x80) = param_10;
  *(float **)((long)register0x00000008 + -0x78) = pfVar15;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &System_Collections_Generic_List_int___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(plVar14,0x14);
  if (lVar20 != 0) {
    pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
    lVar21 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar21);
    }
    if (plVar14 != (long *)0x0) {
      if (*(long *)(*plVar14 + 0x40) == *(long *)(lVar21 + 0x40)) {
        puVar13 = (undefined4 *)func_0x00f78ae4(plVar14);
        (*pcVar22)(lVar20,*puVar13,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
        iVar10 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar20);
        return (float *)(ulong)(iVar10 - 1);
      }
      func_0x00f78e5c(plVar14,lVar21);
      goto code_r0x023dbf10;
    }
  }
  func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x23dbf14);
  (*pcVar22)();
}



// ============================================================
// RVA: 0x2f86208 | Core.UI2.UIIrregularElement.PreserveSpriteAspectRatio
// ============================================================

void Core_UI2_UIIrregularElement__PreserveSpriteAspectRatio
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
  *(undefined4 *)(lVar1 + 0xdc) = uVar9;
  *(float *)(lVar1 + 0xe0) = param_2;
  *(undefined4 *)(lVar1 + 0xe4) = param_3;
  *(undefined4 *)(lVar1 + 0xe8) = param_4;
  uVar9 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(lVar1 + 0xec) = uVar9;
  *(float *)(lVar1 + 0xf0) = param_2;
  uVar9 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(lVar1 + 0xf4) = uVar9;
  *(float *)(lVar1 + 0xf8) = param_2;
  *(undefined4 *)(lVar1 + 0xfc) = param_3;
  *(undefined4 *)(lVar1 + 0x100) = param_4;
  *(undefined4 *)(lVar1 + 0x104) = 0x40000000;
  uVar9 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(lVar1 + 0x110) = uVar9;
  *(float *)(lVar1 + 0x114) = param_2;
  uVar9 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(lVar1 + 0x118) = uVar9;
  *(float *)(lVar1 + 0x11c) = param_2;
  *(undefined4 *)(lVar1 + 0x144) = 0x3f000000;
  *(undefined4 *)(lVar1 + 0x14c) = 1;
  *(undefined4 *)(lVar1 + 0x154) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x15c) = 0x3f80000000000001;
  uVar9 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(lVar1 + 0x164) = uVar9;
  *(float *)(lVar1 + 0x168) = param_2;
  *(undefined4 *)(lVar1 + 0x16c) = 0x42c80000;
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
// RVA: 0x2f8636c | Core.UI2.UIIrregularElement..ctor
// ============================================================

void Core_UI2_UIIrregularElement___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(param_5 + 0xdc) = uVar4;
  *(undefined4 *)(param_5 + 0xe0) = param_2;
  *(undefined4 *)(param_5 + 0xe4) = param_3;
  *(undefined4 *)(param_5 + 0xe8) = param_4;
  uVar4 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_5 + 0xec) = uVar4;
  *(undefined4 *)(param_5 + 0xf0) = param_2;
  uVar4 = /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
  *(undefined4 *)(param_5 + 0xf4) = uVar4;
  *(undefined4 *)(param_5 + 0xf8) = param_2;
  *(undefined4 *)(param_5 + 0xfc) = param_3;
  *(undefined4 *)(param_5 + 0x100) = param_4;
  *(undefined4 *)(param_5 + 0x104) = 0x40000000;
  uVar4 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_5 + 0x110) = uVar4;
  *(undefined4 *)(param_5 + 0x114) = param_2;
  uVar4 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(param_5 + 0x118) = uVar4;
  *(undefined4 *)(param_5 + 0x11c) = param_2;
  *(undefined4 *)(param_5 + 0x144) = 0x3f000000;
  *(undefined4 *)(param_5 + 0x14c) = 1;
  *(undefined4 *)(param_5 + 0x154) = 0x3f000000;
  *(undefined8 *)(param_5 + 0x15c) = 0x3f80000000000001;
  uVar4 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(param_5 + 0x164) = uVar4;
  *(undefined4 *)(param_5 + 0x168) = param_2;
  *(undefined4 *)(param_5 + 0x16c) = 0x42c80000;
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
// RVA: 0x2f86420 | Core.UI2.UIIrregularElement..cctor
// ============================================================

void Core_UI2_UIIrregularElement___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003ebc639 & 1) == 0) {
    func_0x00f78a20(0x3d3c788);
    func_0x00f78a20(0x3d3dd50);
    func_0x00f78a20(0x3d1dfa0);
    func_0x00f78a20(0x3d1e3a8);
    func_0x00f78a20(0x3d255b0);
    bRam0000000003ebc639 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<Vector2>_TypeInfo*/ uRam0000000003d1dfa0);
  /*System.Collections.Generic.List<Vector2>$$.ctor*/ func_0x02485ac0(uVar1,uRam0000000003d3c788);
  **(undefined8 **)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<Vector2>_TypeInfo*/ uRam0000000003d1dfa0);
  /*System.Collections.Generic.List<Vector2>$$.ctor*/ func_0x02485ac0(uVar1,uRam0000000003d3c788);
  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<Vector2>_TypeInfo*/ uRam0000000003d1dfa0);
  /*System.Collections.Generic.List<Vector2>$$.ctor*/ func_0x02485ac0(uVar1,uRam0000000003d3c788);
  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x10) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>_TypeInfo*/ uRam0000000003d1e3a8);
  /*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>$$.ctor*/ func_0x025ba540(uVar1,uRam0000000003d3dd50);
  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x18) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>_TypeInfo*/ uRam0000000003d1e3a8);
  /*System.Collections.Generic.List<UIIrregularElement.EdgeDetails>$$.ctor*/ func_0x025ba540(uVar1,uRam0000000003d3dd50);
  *(undefined8 *)(*(long *)(/*Core.UI2.UIIrregularElement_TypeInfo*/ lRam0000000003d255b0 + 0xb8) + 0x20) = uVar1;
  return;
}



