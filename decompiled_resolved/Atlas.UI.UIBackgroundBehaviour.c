// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIBackgroundBehaviour

// ============================================================
// RVA: 0x15170dc | Atlas.UI.UIBackgroundBehaviour.set_Sprite
// ============================================================

void Atlas_UI_UIBackgroundBehaviour__set_Sprite(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  return;
}



// ============================================================
// RVA: 0x15170e4 | Atlas.UI.UIBackgroundBehaviour.CalculateLayoutInputHorizontal
// ============================================================

void Atlas_UI_UIBackgroundBehaviour__CalculateLayoutInputHorizontal(void)

{
  return;
}



// ============================================================
// RVA: 0x15170e8 | Atlas.UI.UIBackgroundBehaviour.CalculateLayoutInputVertical
// ============================================================

void Atlas_UI_UIBackgroundBehaviour__CalculateLayoutInputVertical(void)

{
  return;
}



// ============================================================
// RVA: 0x15170ec | Atlas.UI.UIBackgroundBehaviour.get_minWidth
// ============================================================

undefined1  [16] Atlas_UI_UIBackgroundBehaviour__get_minWidth(void)

{
  return ZEXT816(0);
}



// ============================================================
// RVA: 0x15170f4 | Atlas.UI.UIBackgroundBehaviour.get_preferredWidth
// ============================================================

float Atlas_UI_UIBackgroundBehaviour__get_preferredWidth(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000003eb4dbf & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dbf = 1;
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
    fVar4 = (float)/*Atlas.UI.UIBackgroundBehaviour$$get_pixelsPerUnit*/ func_0x01517198(param_1);
    fVar3 = fVar3 / fVar4;
  }
  return fVar3;
}



// ============================================================
// RVA: 0x1517198 | Atlas.UI.UIBackgroundBehaviour.get_pixelsPerUnit
// ============================================================

float Atlas_UI_UIBackgroundBehaviour__get_pixelsPerUnit(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000003eb4dc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dc2 = 1;
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
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_01517298;
    fVar5 = (float)/*UnityEngine.Sprite$$get_pixelsPerUnit*/ func_0x03268e08(*(long *)(param_1 + 0xd0),0);
  }
  uVar4 = /*UnityEngine.UI.Graphic$$get_canvas*/ func_0x032bba74(param_1,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
  if ((uVar2 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 400);
  }
  else {
    lVar3 = /*UnityEngine.UI.Graphic$$get_canvas*/ func_0x032bba74(param_1,0);
    if (lVar3 == 0) {
LAB_01517298:
      func_0x00f78af4();
      return -1.0;
    }
    fVar6 = (float)/*UnityEngine.Canvas$$get_referencePixelsPerUnit*/ func_0x032f3840(lVar3,0);
    *(float *)(param_1 + 400) = fVar6;
  }
  return fVar5 / fVar6;
}



// ============================================================
// RVA: 0x151729c | Atlas.UI.UIBackgroundBehaviour.get_flexibleWidth
// ============================================================

undefined1  [16] Atlas_UI_UIBackgroundBehaviour__get_flexibleWidth(void)

{
  return ZEXT816(0xbf800000);
}



// ============================================================
// RVA: 0x15172a4 | Atlas.UI.UIBackgroundBehaviour.get_minHeight
// ============================================================

undefined1  [16] Atlas_UI_UIBackgroundBehaviour__get_minHeight(void)

{
  return ZEXT816(0);
}



// ============================================================
// RVA: 0x15172ac | Atlas.UI.UIBackgroundBehaviour.get_preferredHeight
// ============================================================

float Atlas_UI_UIBackgroundBehaviour__get_preferredHeight
                (undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if ((bRam0000000003eb4dc0 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dc0 = 1;
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
    fVar3 = (float)Atlas_UI_UIBackgroundBehaviour__get_pixelsPerUnit(param_3);
    fVar3 = param_2 / fVar3;
  }
  return fVar3;
}



// ============================================================
// RVA: 0x1517350 | Atlas.UI.UIBackgroundBehaviour.get_flexibleHeight
// ============================================================

undefined1  [16] Atlas_UI_UIBackgroundBehaviour__get_flexibleHeight(void)

{
  return ZEXT816(0xbf800000);
}



// ============================================================
// RVA: 0x1517358 | Atlas.UI.UIBackgroundBehaviour.get_layoutPriority
// ============================================================

undefined8 Atlas_UI_UIBackgroundBehaviour__get_layoutPriority(void)

{
  return 0;
}



// ============================================================
// RVA: 0x1517360 | Atlas.UI.UIBackgroundBehaviour.IsRaycastLocationValid
// ============================================================

undefined8 Atlas_UI_UIBackgroundBehaviour__IsRaycastLocationValid(void)

{
  return 1;
}



// ============================================================
// RVA: 0x1517368 | Atlas.UI.UIBackgroundBehaviour.get_mainTexture
// ============================================================

/* WARNING: Possible PIC construction at 0x01517440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01517444) */
/* WARNING: Removing unreachable block (ram,0x01517454) */
/* WARNING: Removing unreachable block (ram,0x0151745c) */
/* WARNING: Removing unreachable block (ram,0x01517460) */
/* WARNING: Removing unreachable block (ram,0x01517474) */
/* WARNING: Removing unreachable block (ram,0x0151748c) */

undefined8 Atlas_UI_UIBackgroundBehaviour__get_mainTexture(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float extraout_s0;
  float fVar5;
  undefined4 auStack_80 [2];
  undefined4 auStack_78 [2];
  
  if ((bRam0000000003eb4dc1 & 1) == 0) {
    func_0x00f78a20(0x3d21c38);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dc1 = 1;
  }
  lVar4 = param_1[0x1a];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,0,0);
  if (iVar1 == 0) {
    lVar4 = param_1[0x1a];
    if (lVar4 != 0) {
      if (pcRam0000000003ec1088 == (code *)0x0) {
        pcRam0000000003ec1088 = (code *)func_0x00f789d4("UnityEngine.Sprite::get_texture()");
      }
                    /* WARNING: Could not recover jumptable at 0x03268db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ec1088)(lVar4);
      return uVar2;
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
    if (iVar1 == 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return *(undefined8 *)(*(long *)(/*UnityEngine.UI.Graphic_TypeInfo*/ lRam0000000003d21c38 + 0xb8) + 8);
    }
    lVar4 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    if (lVar4 != 0) {
      if ((bRam0000000003ebfb4a & 1) == 0) {
        func_0x00f78a20(0x3d772d0,0);
        bRam0000000003ebfb4a = 1;
      }
      if (pcRam0000000003ebfb50 == (code *)0x0) {
        pcRam0000000003ebfb50 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Material::GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags)"
                                    );
      }
      uVar2 = (*pcRam0000000003ebfb50)(lVar4,0x80);
      if ((int)uVar2 < 0) {
        uVar2 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_MainTex')*/ uRam0000000003d772d0,0);
        if (pcRam0000000003ebfc90 == (code *)0x0) {
          pcRam0000000003ebfc90 =
               (code *)func_0x00f789d4("UnityEngine.Material::GetTextureImpl(System.Int32)");
        }
                    /* WARNING: Could not recover jumptable at 0x03238104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*pcRam0000000003ebfc90)(lVar4,uVar2);
        return uVar2;
      }
      if (pcRam0000000003ebfc90 == (code *)0x0) {
        pcRam0000000003ebfc90 =
             (code *)func_0x00f789d4("UnityEngine.Material::GetTextureImpl(System.Int32)");
      }
                    /* WARNING: Could not recover jumptable at 0x03238038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ebfc90)(lVar4,uVar2);
      return uVar2;
    }
  }
  plVar3 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4dc3 & 1) == 0) {
    func_0x00f78a20(0x3d40098);
    bRam0000000003eb4dc3 = 1;
  }
  uVar2 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
  if ((((int)uVar2 != 0) && (plVar3[0x24] != 0)) && (*(int *)(plVar3[0x24] + 0x18) != 0)) {
    fVar5 = *(float *)(plVar3 + 0x25);
    uVar2 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar5 = fVar5 + extraout_s0;
    *(float *)(plVar3 + 0x25) = fVar5;
    if (fVar5 <= *(float *)((long)plVar3 + 0x104)) {
      if (*(char *)((long)plVar3 + 0x134) == '\0') {
        return uVar2;
      }
    }
    else if (*(char *)((long)plVar3 + 0x134) == '\0') {
      /*Atlas.UI.UIBackgroundBehaviour$$UpdateDots*/ func_0x01517690(plVar3);
      *(undefined1 *)((long)plVar3 + 0x134) = 1;
      *(undefined4 *)(plVar3 + 0x25) = 0;
      fVar5 = 0.0;
    }
    fVar5 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar5 / *(float *)(plVar3 + 0x20),0);
    auStack_78[0] = 0;
    /*UnityEngine.Color32$$.ctor*/ func_0x03223744(auStack_78,0xff,0xff,0xff,(int)(fVar5 * 255.0) & 0xff,0);
    *(undefined4 *)((long)plVar3 + 300) = auStack_78[0];
    auStack_80[0] = 0;
    /*UnityEngine.Color32$$.ctor*/ func_0x03223744(auStack_80,0xff,0xff,0xff,(int)((1.0 - fVar5) * 255.0) & 0xff,0);
    *(undefined4 *)(plVar3 + 0x26) = auStack_80[0];
    if (1.0 <= fVar5) {
      /*Core.Containers.ReorderArray<int>$$CopyToAndClear*/ func_0x0284f8d0(plVar3 + 0x30,plVar3 + 0x2a,uRam0000000003d40098);
      /*Core.Containers.ReorderArray<int>$$CopyToAndClear*/ func_0x0284f8d0(plVar3 + 0x2e,plVar3 + 0x2c,uRam0000000003d40098);
      *(undefined1 *)((long)plVar3 + 0x134) = 0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15174fc | Atlas.UI.UIBackgroundBehaviour.Update
// ============================================================

void Atlas_UI_UIBackgroundBehaviour__Update(long *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 auStack_50 [2];
  undefined4 auStack_48 [2];
  
  if ((bRam0000000003eb4dc3 & 1) == 0) {
    func_0x00f78a20(0x3d40098);
    bRam0000000003eb4dc3 = 1;
  }
  iVar1 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
  if (((iVar1 != 0) && (param_1[0x24] != 0)) && (*(int *)(param_1[0x24] + 0x18) != 0)) {
    fVar3 = *(float *)(param_1 + 0x25);
    fVar2 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar3 = fVar3 + fVar2;
    *(float *)(param_1 + 0x25) = fVar3;
    if (fVar3 <= *(float *)((long)param_1 + 0x104)) {
      if (*(char *)((long)param_1 + 0x134) == '\0') {
        return;
      }
    }
    else if (*(char *)((long)param_1 + 0x134) == '\0') {
      /*Atlas.UI.UIBackgroundBehaviour$$UpdateDots*/ func_0x01517690(param_1);
      *(undefined1 *)((long)param_1 + 0x134) = 1;
      *(undefined4 *)(param_1 + 0x25) = 0;
      fVar3 = 0.0;
    }
    fVar2 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(fVar3 / *(float *)(param_1 + 0x20),0);
    auStack_48[0] = 0;
    /*UnityEngine.Color32$$.ctor*/ func_0x03223744(auStack_48,0xff,0xff,0xff,(int)(fVar2 * 255.0) & 0xff,0);
    *(undefined4 *)((long)param_1 + 300) = auStack_48[0];
    auStack_50[0] = 0;
    /*UnityEngine.Color32$$.ctor*/ func_0x03223744(auStack_50,0xff,0xff,0xff,(int)((1.0 - fVar2) * 255.0) & 0xff,0);
    *(undefined4 *)(param_1 + 0x26) = auStack_50[0];
    if (1.0 <= fVar2) {
      /*Core.Containers.ReorderArray<int>$$CopyToAndClear*/ func_0x0284f8d0(param_1 + 0x30,param_1 + 0x2a,uRam0000000003d40098);
      /*Core.Containers.ReorderArray<int>$$CopyToAndClear*/ func_0x0284f8d0(param_1 + 0x2e,param_1 + 0x2c,uRam0000000003d40098);
      *(undefined1 *)((long)param_1 + 0x134) = 0;
    }
    (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  }
  return;
}



// ============================================================
// RVA: 0x1517690 | Atlas.UI.UIBackgroundBehaviour.UpdateDots
// ============================================================

void Atlas_UI_UIBackgroundBehaviour__UpdateDots(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((bRam0000000003eb4dc5 & 1) == 0) {
    func_0x00f78a20(0x3d40090);
    func_0x00f78a20(0x3d400a8);
    func_0x00f78a20(0x3d5f6c0);
    bRam0000000003eb4dc5 = 1;
  }
  iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xf4),0);
  iVar6 = *(int *)(param_1 + 0x158);
  if (1 < iVar6) {
    iVar5 = *(int *)(param_1 + 0xfc);
    if (iVar6 <= *(int *)(param_1 + 0xfc)) {
      iVar5 = iVar6;
    }
    iVar7 = iVar6;
    if (iVar5 <= *(int *)(param_1 + 0x168)) {
      iVar7 = iVar5;
    }
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
    if (0 < iVar7) {
      do {
        uVar3 = /*Atlas.UI.UIBackgroundBehaviour$$RemoveRandomElement<int>*/ func_0x01a3907c(param_1,param_1 + 0x150,uRam0000000003d5f6c0);
        uVar4 = /*Atlas.UI.UIBackgroundBehaviour$$RemoveRandomElement<int>*/ func_0x01a3907c(param_1,param_1 + 0x160,uRam0000000003d5f6c0);
        /*Core.Containers.ReorderArray<int>$$Add*/ func_0x0284f618(param_1 + 0x170,uVar3,uRam0000000003d40090);
        /*Core.Containers.ReorderArray<int>$$Add*/ func_0x0284f618(param_1 + 0x180,uVar4,uRam0000000003d40090);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  iVar5 = iVar2 - iVar6;
  if (*(int *)(param_1 + 0x168) <= iVar2 - iVar6) {
    iVar5 = *(int *)(param_1 + 0x168);
  }
  if (0 < -iVar5) {
    iVar6 = iVar5;
    do {
      uVar3 = /*Atlas.UI.UIBackgroundBehaviour$$RemoveRandomElement<int>*/ func_0x01a3907c(param_1,param_1 + 0x150,uRam0000000003d5f6c0);
      /*Core.Containers.ReorderArray<int>$$Add*/ func_0x0284f618(param_1 + 0x170,uVar3,uRam0000000003d40090);
      bVar1 = iVar6 != -1;
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  if (0 < iVar5) {
    do {
      uVar3 = /*Atlas.UI.UIBackgroundBehaviour$$RemoveRandomElement<int>*/ func_0x01a3907c(param_1,param_1 + 0x160,uRam0000000003d5f6c0);
      /*Core.Containers.ReorderArray<int>$$Add*/ func_0x0284f618(param_1 + 0x180,uVar3,uRam0000000003d40090);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// ============================================================
// RVA: 0x1517844 | Atlas.UI.UIBackgroundBehaviour.InitDotIndices
// ============================================================

/* WARNING: Possible PIC construction at 0x01517cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01517cdc) */
/* WARNING: Removing unreachable block (ram,0x01517ce4) */
/* WARNING: Removing unreachable block (ram,0x01517cf0) */
/* WARNING: Removing unreachable block (ram,0x01517d10) */
/* WARNING: Removing unreachable block (ram,0x01517d1c) */
/* WARNING: Removing unreachable block (ram,0x01517c18) */
/* WARNING: Removing unreachable block (ram,0x01517c20) */
/* WARNING: Removing unreachable block (ram,0x01517c2c) */
/* WARNING: Removing unreachable block (ram,0x01517c30) */
/* WARNING: Removing unreachable block (ram,0x01517c38) */
/* WARNING: Removing unreachable block (ram,0x01517c3c) */
/* WARNING: Removing unreachable block (ram,0x01517c40) */
/* WARNING: Removing unreachable block (ram,0x01517c50) */

void Atlas_UI_UIBackgroundBehaviour__InitDotIndices
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float *extraout_x8;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined1 extraout_q0 [16];
  ulong uVar17;
  undefined1 extraout_q0_00 [16];
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  if ((bRam0000000003eb4dc4 & 1) == 0) {
    func_0x00f78a20(0x3d40090);
    func_0x00f78a20(0x3d400a0);
    func_0x00f78a20(0x3d5f6c0);
    bRam0000000003eb4dc4 = 1;
  }
  if (*(long *)(param_9 + 0x120) != 0) {
    iVar3 = *(int *)(*(long *)(param_9 + 0x120) + 0x18);
    iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(*(undefined4 *)(param_9 + 0xf8),*(undefined4 *)(param_9 + 0xf4),0);
    /*Core.Containers.ReorderArray<int>$$Init*/ func_0x0284f5a4(param_9 + 0x150,iVar3,uRam0000000003d400a0);
    lVar8 = param_9 + 0x160;
    /*Core.Containers.ReorderArray<int>$$Init*/ func_0x0284f5a4(lVar8,iVar3,uRam0000000003d400a0);
    /*Core.Containers.ReorderArray<int>$$Init*/ func_0x0284f5a4(param_9 + 0x170,iVar3,uRam0000000003d400a0);
    /*Core.Containers.ReorderArray<int>$$Init*/ func_0x0284f5a4(param_9 + 0x180,iVar3,uRam0000000003d400a0);
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        /*Core.Containers.ReorderArray<int>$$Add*/ func_0x0284f618(lVar8,iVar5,uRam0000000003d40090);
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
    if (0 < iVar4) {
      do {
        uVar7 = /*Atlas.UI.UIBackgroundBehaviour$$RemoveRandomElement<int>*/ func_0x01a3907c(param_9,lVar8,uRam0000000003d5f6c0);
        /*Core.Containers.ReorderArray<int>$$Add*/ func_0x0284f618(param_9 + 0x150,uVar7,uRam0000000003d40090);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    return;
  }
  lVar8 = func_0x00f78af4();
  fVar23 = extraout_q0._0_4_;
  fVar24 = param_4;
  if ((bRam0000000003eb4dc6 & 1) == 0) {
    func_0x00f78a20(0x3d506d8);
    func_0x00f78a20(0x3d506e0);
    func_0x00f78a20(0x3d1f8e0);
    func_0x00f78a20(0x3d1f8e8);
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb4dc6 = 1;
  }
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  fVar15 = (float)*(undefined8 *)(lVar8 + 0xe4);
  fVar14 = (float)((ulong)*(undefined8 *)(lVar8 + 0xe4) >> 0x20);
  dVar19 = (double)(fVar15 + fVar15);
  dVar21 = (double)(fVar14 + fVar14);
  fVar22 = SUB84(-dVar19,0);
  uVar16 = (ulong)(double)((ulong)dVar19 ^
                          ((ulong)dVar19 ^ (ulong)-dVar19) &
                          (long)(int)-(uint)(fVar15 + fVar15 == INFINITY));
  uVar17 = (ulong)(double)((ulong)dVar21 ^
                          ((ulong)dVar21 ^ (ulong)-dVar21) &
                          (long)(int)-(uint)(fVar14 + fVar14 == INFINITY));
  iVar3 = (int)uVar17 * (int)uVar16;
  if (iVar3 < *(int *)(lVar8 + 0x108)) {
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    *(int *)(lVar8 + 0x108) = iVar3 >> 1;
  }
  uVar7 = func_0x00f78a34(/*Atlas.UI.UIBackgroundBehaviour.Dot[]_TypeInfo*/ uRam0000000003d1f8e0);
  *(undefined8 *)(lVar8 + 0x120) = uVar7;
  uVar7 = func_0x00f78a34(/*Atlas.UI.UIBackgroundBehaviour.FilledLocation[]_TypeInfo*/ uRam0000000003d1f8e8,*(undefined4 *)(lVar8 + 0x108));
  *(undefined8 *)(lVar8 + 0x118) = uVar7;
  fVar11 = (float)/*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  uVar7 = *(undefined8 *)(lVar8 + 0xe4);
  fVar18 = SUB84(dVar19,0);
  lVar9 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,2);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      fVar11 = (fVar11 / (float)uVar7) * 0.5;
      fVar20 = (SUB84(dVar19,0) / (float)((ulong)uVar7 >> 0x20)) * 0.5;
      *(ulong *)(lVar9 + 0x20) = CONCAT44(fVar20 * 0.07,fVar11 * 0.07);
      fVar18 = fVar11;
      if (*(int *)(lVar9 + 0x18) != 1) {
        *(ulong *)(lVar9 + 0x28) = CONCAT44(fVar20 * 0.0,fVar11 * 0.0);
        iVar3 = *(int *)(lVar8 + 0x108);
        do {
          if (iVar3 < 1) {
            /*System.Array$$Resize<UIBackgroundBehaviour.Dot>*/ func_0x017dcfac(lVar8 + 0x120,iVar3,uRam0000000003d506d8);
            /*System.Array$$Resize<UIBackgroundBehaviour.FilledLocation>*/ func_0x017dd0c4(lVar8 + 0x118,iVar3,uRam0000000003d506e0);
            return;
          }
          iVar4 = 0;
          do {
            iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar16 & 0xffffffff,0);
            iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar17 & 0xffffffff,0);
            if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uStack_100 = CONCAT44(fVar14 - (*(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x34
                                                      ) + (float)iVar6),
                                  fVar15 - (*(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x30
                                                      ) + (float)iVar5));
            /*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_100,0);
            fVar18 = *(float *)(lVar8 + 0x10c);
            fVar22 = *(float *)(lVar8 + 0x110);
            fVar12 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
            fVar13 = (float)/*UnityEngine.Random$$get_value*/ func_0x03252940(0);
            if (fVar13 < fVar12) {
              uVar1 = iVar6 + iVar5 & 1;
              uVar2 = -uVar1;
              if (-1 < iVar6 + iVar5) {
                uVar2 = uVar1;
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar2) goto code_r0x01517da0;
              fVar12 = fVar20 * (float)iVar6;
              fVar14 = fVar11 * (float)iVar5;
              lVar9 = lVar9 + (ulong)uVar2 * 8;
              fVar22 = *(float *)(lVar9 + 0x20);
              fVar24 = *(float *)(lVar9 + 0x24);
              fVar15 = fVar14 + fVar22;
              fVar18 = fVar12 + fVar24;
              fVar22 = (fVar11 + fVar14) - fVar22;
              fVar24 = (fVar20 + fVar12) - fVar24;
              pfVar10 = (float *)&uStack_140;
              goto code_r0x01517db0;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0x15);
          iVar3 = iVar3 + -1;
        } while( true );
      }
    }
code_r0x01517da0:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  param_4 = param_8;
  param_3 = param_7;
  param_2 = param_6;
  fVar23 = param_5;
  lVar8 = func_0x00f78af4();
  fVar15 = extraout_q0_00._0_4_;
  pfVar10 = extraout_x8;
code_r0x01517db0:
  if ((bRam0000000003eb4dc9 & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    bRam0000000003eb4dc9 = 1;
  }
  if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar14 = *(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x34);
  fVar20 = fVar23 + fVar15 * param_3;
  fVar11 = (fVar18 - fVar14) * *(float *)(lVar8 + 0xd8);
  fVar12 = param_2 + fVar18 * param_4;
  fVar14 = (fVar24 - fVar14) * *(float *)(lVar8 + 0xd8);
  param_2 = param_2 + fVar24 * param_4;
  *pfVar10 = fVar20 + fVar11;
  pfVar10[1] = fVar12;
  pfVar10[2] = fVar20 + fVar14;
  pfVar10[3] = param_2;
  fVar23 = fVar23 + fVar22 * param_3;
  pfVar10[4] = fVar23 + fVar14;
  pfVar10[5] = param_2;
  pfVar10[6] = fVar23 + fVar11;
  pfVar10[7] = fVar12;
  pfVar10[8] = fVar15;
  pfVar10[9] = fVar18;
  pfVar10[10] = fVar15;
  pfVar10[0xb] = fVar24;
  pfVar10[0xc] = fVar22;
  pfVar10[0xd] = fVar24;
  pfVar10[0xe] = fVar22;
  pfVar10[0xf] = fVar18;
  return;
}



// ============================================================
// RVA: 0x1517988 | Atlas.UI.UIBackgroundBehaviour.GenerateDots
// ============================================================

/* WARNING: Possible PIC construction at 0x01517cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01517cdc) */
/* WARNING: Removing unreachable block (ram,0x01517ce4) */
/* WARNING: Removing unreachable block (ram,0x01517cf0) */
/* WARNING: Removing unreachable block (ram,0x01517d10) */
/* WARNING: Removing unreachable block (ram,0x01517d1c) */
/* WARNING: Removing unreachable block (ram,0x01517c18) */
/* WARNING: Removing unreachable block (ram,0x01517c20) */
/* WARNING: Removing unreachable block (ram,0x01517c2c) */
/* WARNING: Removing unreachable block (ram,0x01517c30) */
/* WARNING: Removing unreachable block (ram,0x01517c38) */
/* WARNING: Removing unreachable block (ram,0x01517c3c) */
/* WARNING: Removing unreachable block (ram,0x01517c40) */
/* WARNING: Removing unreachable block (ram,0x01517c50) */

void Atlas_UI_UIBackgroundBehaviour__GenerateDots
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  float *extraout_x8;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 extraout_q0 [16];
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  fVar22 = param_4;
  if ((bRam0000000003eb4dc6 & 1) == 0) {
    func_0x00f78a20(0x3d506d8);
    func_0x00f78a20(0x3d506e0);
    func_0x00f78a20(0x3d1f8e0);
    func_0x00f78a20(0x3d1f8e8);
    func_0x00f78a20(0x3d232c8);
    func_0x00f78a20(0x3d1f5d8);
    bRam0000000003eb4dc6 = 1;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  fVar14 = (float)*(undefined8 *)(param_9 + 0xe4);
  fVar13 = (float)((ulong)*(undefined8 *)(param_9 + 0xe4) >> 0x20);
  dVar18 = (double)(fVar14 + fVar14);
  dVar20 = (double)(fVar13 + fVar13);
  fVar21 = SUB84(-dVar18,0);
  uVar15 = (ulong)(double)((ulong)dVar18 ^
                          ((ulong)dVar18 ^ (ulong)-dVar18) &
                          (long)(int)-(uint)(fVar14 + fVar14 == INFINITY));
  uVar16 = (ulong)(double)((ulong)dVar20 ^
                          ((ulong)dVar20 ^ (ulong)-dVar20) &
                          (long)(int)-(uint)(fVar13 + fVar13 == INFINITY));
  iVar3 = (int)uVar16 * (int)uVar15;
  if (iVar3 < *(int *)(param_9 + 0x108)) {
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_9 + 0x108) = iVar3 >> 1;
  }
  uVar6 = func_0x00f78a34(/*Atlas.UI.UIBackgroundBehaviour.Dot[]_TypeInfo*/ uRam0000000003d1f8e0);
  *(undefined8 *)(param_9 + 0x120) = uVar6;
  uVar6 = func_0x00f78a34(/*Atlas.UI.UIBackgroundBehaviour.FilledLocation[]_TypeInfo*/ uRam0000000003d1f8e8,*(undefined4 *)(param_9 + 0x108));
  *(undefined8 *)(param_9 + 0x118) = uVar6;
  fVar10 = (float)/*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  uVar6 = *(undefined8 *)(param_9 + 0xe4);
  fVar17 = SUB84(dVar18,0);
  lVar7 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,2);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      fVar10 = (fVar10 / (float)uVar6) * 0.5;
      fVar19 = (SUB84(dVar18,0) / (float)((ulong)uVar6 >> 0x20)) * 0.5;
      *(ulong *)(lVar7 + 0x20) = CONCAT44(fVar19 * 0.07,fVar10 * 0.07);
      fVar17 = fVar10;
      if (*(int *)(lVar7 + 0x18) != 1) {
        *(ulong *)(lVar7 + 0x28) = CONCAT44(fVar19 * 0.0,fVar10 * 0.0);
        iVar3 = *(int *)(param_9 + 0x108);
        do {
          if (iVar3 < 1) {
            /*System.Array$$Resize<UIBackgroundBehaviour.Dot>*/ func_0x017dcfac(param_9 + 0x120,iVar3,uRam0000000003d506d8);
            /*System.Array$$Resize<UIBackgroundBehaviour.FilledLocation>*/ func_0x017dd0c4(param_9 + 0x118,iVar3,uRam0000000003d506e0);
            return;
          }
          iVar9 = 0;
          do {
            iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar15 & 0xffffffff,0);
            iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar16 & 0xffffffff,0);
            if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uStack_b0 = CONCAT44(fVar13 - (*(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x34)
                                          + (float)iVar5),
                                 fVar14 - (*(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x30)
                                          + (float)iVar4));
            /*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_b0,0);
            fVar17 = *(float *)(param_9 + 0x10c);
            fVar21 = *(float *)(param_9 + 0x110);
            fVar11 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
            fVar12 = (float)/*UnityEngine.Random$$get_value*/ func_0x03252940(0);
            if (fVar12 < fVar11) {
              uVar1 = iVar5 + iVar4 & 1;
              uVar2 = -uVar1;
              if (-1 < iVar5 + iVar4) {
                uVar2 = uVar1;
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_01517da0;
              fVar11 = fVar19 * (float)iVar5;
              fVar13 = fVar10 * (float)iVar4;
              lVar7 = lVar7 + (ulong)uVar2 * 8;
              fVar21 = *(float *)(lVar7 + 0x20);
              fVar22 = *(float *)(lVar7 + 0x24);
              fVar14 = fVar13 + fVar21;
              fVar17 = fVar11 + fVar22;
              fVar21 = (fVar10 + fVar13) - fVar21;
              fVar22 = (fVar19 + fVar11) - fVar22;
              pfVar8 = (float *)&uStack_f0;
              goto code_r0x01517db0;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != 0x15);
          iVar3 = iVar3 + -1;
        } while( true );
      }
    }
LAB_01517da0:
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
  }
  param_4 = param_8;
  param_3 = param_7;
  param_2 = param_6;
  param_1 = param_5;
  param_9 = func_0x00f78af4();
  fVar14 = extraout_q0._0_4_;
  pfVar8 = extraout_x8;
code_r0x01517db0:
  if ((bRam0000000003eb4dc9 & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    bRam0000000003eb4dc9 = 1;
  }
  if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar13 = *(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x34);
  fVar19 = param_1 + fVar14 * param_3;
  fVar10 = (fVar17 - fVar13) * *(float *)(param_9 + 0xd8);
  fVar11 = param_2 + fVar17 * param_4;
  fVar13 = (fVar22 - fVar13) * *(float *)(param_9 + 0xd8);
  param_2 = param_2 + fVar22 * param_4;
  *pfVar8 = fVar19 + fVar10;
  pfVar8[1] = fVar11;
  pfVar8[2] = fVar19 + fVar13;
  pfVar8[3] = param_2;
  param_1 = param_1 + fVar21 * param_3;
  pfVar8[4] = param_1 + fVar13;
  pfVar8[5] = param_2;
  pfVar8[6] = param_1 + fVar10;
  pfVar8[7] = fVar11;
  pfVar8[8] = fVar14;
  pfVar8[9] = fVar17;
  pfVar8[10] = fVar14;
  pfVar8[0xb] = fVar22;
  pfVar8[0xc] = fVar21;
  pfVar8[0xd] = fVar22;
  pfVar8[0xe] = fVar21;
  pfVar8[0xf] = fVar17;
  return;
}



// ============================================================
// RVA: 0x1517db0 | Atlas.UI.UIBackgroundBehaviour.CreateDot
// ============================================================

void Atlas_UI_UIBackgroundBehaviour__CreateDot
               (float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6
               ,float param_7,float param_8,float param_9,long param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000003eb4dc9 & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    bRam0000000003eb4dc9 = 1;
  }
  if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar1 = *(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x34);
  fVar3 = param_6 + param_2 * param_8;
  fVar2 = (param_3 - fVar1) * *(float *)(param_10 + 0xd8);
  fVar4 = param_7 + param_3 * param_9;
  fVar1 = (param_5 - fVar1) * *(float *)(param_10 + 0xd8);
  param_7 = param_7 + param_5 * param_9;
  *param_1 = fVar3 + fVar2;
  param_1[1] = fVar4;
  param_1[2] = fVar3 + fVar1;
  param_1[3] = param_7;
  param_6 = param_6 + param_4 * param_8;
  param_1[4] = param_6 + fVar1;
  param_1[5] = param_7;
  param_1[6] = param_6 + fVar2;
  param_1[7] = fVar4;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = param_2;
  param_1[0xb] = param_5;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  param_1[0xe] = param_4;
  param_1[0xf] = param_3;
  return;
}



// ============================================================
// RVA: 0x1517ec8 | Atlas.UI.UIBackgroundBehaviour.OnPopulateMesh
// ============================================================

/* WARNING: Possible PIC construction at 0x015180c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015180f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151809c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032eeea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151849c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015186e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01518548) */
/* WARNING: Removing unreachable block (ram,0x015184a0) */
/* WARNING: Removing unreachable block (ram,0x032eeeac) */
/* WARNING: Removing unreachable block (ram,0x032eeeb4) */
/* WARNING: Removing unreachable block (ram,0x032eeec8) */
/* WARNING: Removing unreachable block (ram,0x0151839c) */
/* WARNING: Removing unreachable block (ram,0x015180fc) */
/* WARNING: Removing unreachable block (ram,0x015180cc) */
/* WARNING: Removing unreachable block (ram,0x015186ec) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_UI_UIBackgroundBehaviour__OnPopulateMesh
                 (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long *param_9,long *param_10,
                 long *param_11,long *param_12,ulong param_13,long *param_14)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined4 *puVar25;
  ulong extraout_x1;
  ulong uVar26;
  undefined8 *puVar27;
  uint extraout_w8;
  long lVar28;
  long extraout_x9;
  ulong uVar29;
  long lVar30;
  undefined8 unaff_x23;
  code *pcVar31;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar32;
  undefined8 *******pppppppuVar33;
  undefined *puVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float extraout_s0;
  undefined4 uVar39;
  int iVar40;
  float fVar41;
  long lVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_100 [4];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  puVar10 = &uStack_70;
  uStack_70 = /*UnityEngine.UI.Graphic$$GetPixelAdjustedRect*/ func_0x032be1fc(param_9,0);
  fStack_6c = param_2;
  fStack_68 = param_3;
  fStack_64 = param_4;
  fVar35 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_70,0);
  fVar41 = param_2;
  fVar36 = (float)/*UnityEngine.Rect$$get_min*/ func_0x0325351c(&uStack_70,0);
  fVar37 = fVar41;
  (**(code **)(*param_9 + 0x298))(param_9,*(undefined8 *)(*param_9 + 0x2a0));
  uVar19 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(0);
  if (param_10 == (long *)0x0) {
    puVar34 = &Atlas_UI_UIBackgroundBehaviour__AddQuad;
    plVar21 = (long *)func_0x00f78af4();
    uVar29 = extraout_x1;
    fVar38 = extraout_s0;
code_r0x01518138:
    puVar10 = (undefined4 *)auStack_100;
    puVar12 = auStack_100;
    pppppppuVar33 = &pppppppuStack_80;
    unaff_x23 = 0x3eb4000;
    uVar19 = 0x3d232c8;
    plVar20 = param_11;
    param_10 = param_14;
    pppppppuStack_80 = (undefined8 *******)&stack0xfffffffffffffff0;
    puStack_78 = puVar34;
    if ((bRam0000000003eb4dc8 & 1) == 0) {
      func_0x00f78a20(0x3d232c8);
      bRam0000000003eb4dc8 = 1;
      param_10 = param_14;
    }
    if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (param_11 == (long *)0x0) {
      puVar34 = &Atlas_UI_UIBackgroundBehaviour__AddDotsToVertexHelper;
      auVar51 = func_0x00f78af4();
      lVar28 = auVar51._8_8_;
      param_9 = auVar51._0_8_;
      plVar23 = (long *)0x0;
      goto code_r0x015183dc;
    }
    fStack_f8 = param_5 + param_3 * param_7;
    fVar41 = *(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x34);
    fVar36 = (fVar37 - fVar41) * *(float *)(plVar21 + 0x1b);
    fStack_f4 = fStack_f8 + fVar36;
    fVar35 = (param_4 - fVar41) * *(float *)(plVar21 + 0x1b);
    fStack_f8 = fStack_f8 + fVar35;
    fVar48 = param_6 + param_4 * param_8;
    param_5 = param_5 + fVar38 * param_7;
    param_6 = param_6 + fVar37 * param_8;
    fStack_fc = param_3;
    plVar22 = (long *)/*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_11,0);
    uVar45 = *(undefined4 *)((long)plVar21 + 0xdc);
    uVar46 = (undefined4)plVar21[0x1c];
    fVar41 = fVar37;
    uVar39 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(fVar38,fVar37,uVar45,uVar46,*(undefined4 *)((long)plVar21 + 0xe4),
                             (int)plVar21[0x1d]);
    uVar29 = uVar29 & 0xffffffff;
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(param_5 + fVar36,param_6,0,uVar39,fVar41,uVar45,uVar46,param_11,uVar29,0);
    uVar45 = *(undefined4 *)((long)plVar21 + 0xdc);
    uVar46 = (undefined4)plVar21[0x1c];
    fVar41 = param_4;
    uVar39 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(fVar38,param_4,uVar45,uVar46,*(undefined4 *)((long)plVar21 + 0xe4),
                             (int)plVar21[0x1d]);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(param_5 + fVar35,fVar48,0,uVar39,fVar41,uVar45,uVar46,param_11,uVar29,0);
    fVar41 = fStack_fc;
    uVar45 = *(undefined4 *)((long)plVar21 + 0xdc);
    uVar46 = (undefined4)plVar21[0x1c];
    uVar39 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(fStack_fc,param_4,uVar45,uVar46,*(undefined4 *)((long)plVar21 + 0xe4),
                             (int)plVar21[0x1d]);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(fStack_f8,fVar48,0,uVar39,param_4,uVar45,uVar46,param_11,uVar29,0);
    uVar45 = *(undefined4 *)((long)plVar21 + 0xdc);
    uVar46 = (undefined4)plVar21[0x1c];
    uVar39 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(fVar41,fVar37,uVar45,uVar46,*(undefined4 *)((long)plVar21 + 0xe4),
                             (int)plVar21[0x1d]);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(fStack_f4,param_6,0,uVar39,fVar37,uVar45,uVar46,param_11,uVar29,0);
    iVar15 = (int)plVar22;
    plVar21 = (long *)(ulong)(iVar15 + 2);
    puVar34 = &UNK_0151839c;
    plVar20 = plVar21;
    plVar23 = plVar22;
  }
  else {
    /*UnityEngine.UI.VertexHelper$$Clear*/ func_0x032eb754(param_10,0);
    iVar15 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
    bVar13 = *(float *)((long)param_9 + 0x13c) != (float)iVar15;
    iVar15 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
    fVar37 = *(float *)(param_9 + 0x28);
    bVar14 = *(int *)((long)param_9 + 0xec) != (int)param_9[0x29];
    uVar18 = (uint)((bVar13 || fVar37 != (float)iVar15) || bVar14);
    uVar29 = (ulong)uVar18;
    if (uVar18 == 1) {
      iVar16 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      iVar40 = *(int *)((long)param_9 + 0xec);
      iVar17 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      *(float *)((long)param_9 + 0xe4) = (float)iVar17 / ((float)iVar16 / (float)iVar40);
      *(float *)(param_9 + 0x1d) = (float)*(int *)((long)param_9 + 0xec);
      iVar16 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      *(float *)((long)param_9 + 0x13c) = (float)iVar16;
      iVar16 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      *(float *)(param_9 + 0x28) = (float)iVar16;
      *(undefined4 *)(param_9 + 0x29) = *(undefined4 *)((long)param_9 + 0xec);
    }
    plVar21 = param_9;
    if ((char)param_9[0x1e] == '\0') {
      uVar29 = uVar19 & 0xffffffff;
      fVar38 = 0.0;
      fVar37 = 0.0;
      param_3 = 1.0;
      param_4 = 1.0;
      puVar34 = &LAB_015180a0;
      param_11 = param_10;
      param_5 = fVar36;
      param_6 = fVar41;
      param_7 = fVar35;
      param_8 = param_2;
      goto code_r0x01518138;
    }
    plVar20 = (long *)(ulong)*(uint *)((long)param_9 + 0x114);
    if (((bVar13 || fVar37 != (float)iVar15) || bVar14) ||
        (*(uint *)((long)param_9 + 0x114) != *(uint *)(param_9 + 0x27) ||
        (int)param_9[0x21] != *(int *)((long)param_9 + 0x144))) {
      /*UnityEngine.Random$$InitState*/ func_0x032526cc(plVar20,0);
      Atlas_UI_UIBackgroundBehaviour__GenerateDots(fVar36,fVar41,fVar35,param_2,param_9);
      plVar20 = (long *)Atlas_UI_UIBackgroundBehaviour__InitDotIndices(param_9);
      *(undefined4 *)(param_9 + 0x27) = *(undefined4 *)((long)param_9 + 0x114);
      *(int *)((long)param_9 + 0x144) = (int)param_9[0x21];
    }
    if (param_9[0x24] == 0) {
      return plVar20;
    }
    iVar15 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if (iVar15 == 0) {
      plVar21 = (long *)/*Atlas.UI.UIBackgroundBehaviour$$AddDotsToVertexHelper*/ func_0x015184d8(param_9,param_9[0x24],uVar19 & 0xffffffff,param_10);
      return plVar21;
    }
    lVar28 = param_9[0x30];
    plVar20 = (long *)param_9[0x31];
    param_12 = (long *)param_9[0x24];
    param_13 = (ulong)*(uint *)((long)param_9 + 300);
    puVar34 = &UNK_015180cc;
    plVar23 = param_10;
    pppppppuVar33 = (undefined8 *******)&stack0xfffffffffffffff0;
    fVar37 = param_2;
    param_5 = fVar35;
code_r0x015183dc:
    auVar51._8_8_ = param_12;
    auVar51._0_8_ = plVar20;
    auVar50._8_8_ = (undefined1 *)((long)puVar10 + -0xa0);
    auVar50._0_8_ = param_9;
    *(undefined8 *)((long)puVar10 + -0x50) = unaff_x26;
    *(undefined8 *)((long)puVar10 + -0x48) = unaff_x25;
    *(long **)((long)puVar10 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar10 + -0x38) = unaff_x23;
    *(ulong *)((long)puVar10 + -0x30) = uVar29;
    *(ulong *)((long)puVar10 + -0x28) = uVar19;
    *(long **)((long)puVar10 + -0x20) = plVar21;
    *(long **)((long)puVar10 + -0x18) = plVar23;
    *(undefined8 ********)((long)puVar10 + -0x10) = pppppppuVar33;
    *(undefined **)((long)puVar10 + -8) = puVar34;
    puVar32 = (undefined1 *)((long)puVar10 + -0x10);
    *(long *)((long)puVar10 + -0x60) = lVar28;
    *(long **)((long)puVar10 + -0x58) = plVar20;
    plVar21 = param_9;
    plVar23 = param_12;
    if ((bRam0000000003eb4dc7 & 1) == 0) {
      func_0x00f78a20(0x3d400a8);
      plVar21 = (long *)func_0x00f78a20(0x3d400b0);
      bRam0000000003eb4dc7 = 1;
    }
    if ((int)plVar20 < 1) {
      return plVar21;
    }
    unaff_x24 = (long *)(param_13 & 0xffffffff);
    plVar21 = plRam0000000003d400b0;
    uVar18 = /*Core.Containers.ReorderArray<int>$$get_Item*/ func_0x0284f52c((undefined1 *)((long)puVar10 + -0x60),0);
    if (param_12 == (long *)0x0) {
      func_0x00f78af4();
code_r0x015184cc:
      uVar24 = func_0x00f78b24();
      auVar49 = func_0x00f78ac0(uVar24,0);
      lVar28 = auVar49._8_8_;
      puVar11 = (undefined1 *)((long)puVar10 + -0x120);
      auVar50._8_8_ = (undefined1 *)((long)puVar10 + -0x120);
      auVar50._0_8_ = auVar49._0_8_;
      *(long **)((long)puVar10 + -0xe0) = unaff_x24;
      *(undefined8 *)((long)puVar10 + -0xd8) = 0;
      *(long **)((long)puVar10 + -0xd0) = param_9;
      *(long **)((long)puVar10 + -200) = plVar20;
      *(long **)((long)puVar10 + -0xc0) = param_12;
      *(long **)((long)puVar10 + -0xb8) = param_10;
      *(undefined1 **)((long)puVar10 + -0xb0) = puVar32;
      *(undefined **)((long)puVar10 + -0xa8) =
           &Atlas_UI_UIBackgroundBehaviour__AddDotsToVertexHelper;
      puVar32 = (undefined1 *)((long)puVar10 + -0xb0);
      param_11 = plVar23;
      if (lVar28 != 0) {
        if ((int)*(ulong *)(lVar28 + 0x18) < 1) {
          return auVar49._0_8_;
        }
        param_9 = (long *)((ulong)plVar21 & 0xffffffff);
        unaff_x24 = (long *)(lVar28 + 0x20);
        auVar51 = auVar49;
        if ((*(ulong *)(lVar28 + 0x18) & 0xffffffff) != 0) {
          lVar30 = *unaff_x24;
          uVar43 = *(undefined8 *)(lVar28 + 0x38);
          uVar24 = *(undefined8 *)(lVar28 + 0x30);
          *(undefined8 *)((long)puVar10 + -0x118) = *(undefined8 *)(lVar28 + 0x28);
          *(long *)((long)puVar10 + -0x120) = lVar30;
          *(undefined8 *)((long)puVar10 + -0x108) = uVar43;
          *(undefined8 *)((long)puVar10 + -0x110) = uVar24;
          uVar24 = *(undefined8 *)(lVar28 + 0x40);
          uVar44 = *(undefined8 *)(lVar28 + 0x58);
          uVar43 = *(undefined8 *)(lVar28 + 0x50);
          *(undefined8 *)((long)puVar10 + -0xf8) = *(undefined8 *)(lVar28 + 0x48);
          *(undefined8 *)((long)puVar10 + -0x100) = uVar24;
          *(undefined8 *)((long)puVar10 + -0xe8) = uVar44;
          *(undefined8 *)((long)puVar10 + -0xf0) = uVar43;
          puVar34 = &UNK_01518548;
          puVar11 = (undefined1 *)((long)puVar10 + -0x120);
          plVar21 = param_9;
          goto code_r0x01518584;
        }
        uVar24 = func_0x00f78b24();
        func_0x00f78ac0(uVar24,0);
        param_10 = plVar23;
      }
      plVar23 = param_10;
      puVar34 = &Atlas_UI_UIBackgroundBehaviour__AddDotToVertexHelper;
      auVar50 = func_0x00f78af4();
    }
    else {
      if (*(uint *)(param_12 + 3) <= uVar18) goto code_r0x015184cc;
      lVar28 = param_12[(long)(int)uVar18 * 8 + 4];
      lVar42 = param_12[(long)(int)uVar18 * 8 + 7];
      lVar30 = param_12[(long)(int)uVar18 * 8 + 6];
      *(long *)((long)puVar10 + -0x98) = param_12[(long)(int)uVar18 * 8 + 5];
      *(long *)((long)puVar10 + -0xa0) = lVar28;
      *(long *)((long)puVar10 + -0x88) = lVar42;
      *(long *)((long)puVar10 + -0x90) = lVar30;
      lVar28 = param_12[(long)(int)uVar18 * 8 + 8];
      lVar42 = param_12[(long)(int)uVar18 * 8 + 0xb];
      lVar30 = param_12[(long)(int)uVar18 * 8 + 10];
      *(long *)((long)puVar10 + -0x78) = param_12[(long)(int)uVar18 * 8 + 9];
      *(long *)((long)puVar10 + -0x80) = lVar28;
      *(long *)((long)puVar10 + -0x68) = lVar42;
      *(long *)((long)puVar10 + -0x70) = lVar30;
      puVar34 = &UNK_015184a0;
      puVar11 = (undefined1 *)((long)puVar10 + -0xa0);
      plVar21 = unaff_x24;
      param_11 = param_10;
      plVar23 = param_10;
    }
code_r0x01518584:
    puVar25 = auVar50._8_8_;
    unaff_x23 = 0;
    puVar12 = puVar11 + -0x50;
    *(ulong *)(puVar11 + -0x40) = (ulong)(uint)param_5;
    *(ulong *)(puVar11 + -0x38) = (ulong)(uint)fVar37;
    *(long **)(puVar11 + -0x30) = param_9;
    *(undefined1 (*) [16])(puVar11 + -0x28) = auVar51;
    *(long **)(puVar11 + -0x18) = plVar23;
    *(undefined1 **)(puVar11 + -0x10) = puVar32;
    *(undefined **)(puVar11 + -8) = puVar34;
    pppppppuVar33 = (undefined8 *******)(puVar11 + -0x10);
    if (param_11 == (long *)0x0) {
      func_0x00f78af4(auVar50._0_8_);
      *(undefined8 ********)(puVar11 + -0x60) = pppppppuVar33;
      *(undefined **)(puVar11 + -0x58) = &Atlas_UI_UIBackgroundBehaviour__CreateVector4;
      *(undefined8 *)(puVar11 + -0x70) = 0;
      *(undefined8 *)(puVar11 + -0x68) = 0;
      plVar21 = (long *)/*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(puVar11 + -0x70,0);
      return plVar21;
    }
    plVar22 = (long *)/*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_11,0);
    uVar46 = *puVar25;
    uVar47 = puVar25[1];
    uVar39 = puVar25[8];
    uVar45 = puVar25[9];
    *(undefined8 *)(puVar11 + -0x50) = 0;
    *(undefined8 *)(puVar11 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0,uVar39,uVar45,puVar11 + -0x50,0);
    uVar29 = (ulong)plVar21 & 0xffffffff;
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar46,uVar47,0,*(undefined4 *)(puVar11 + -0x50),
                    *(undefined4 *)(puVar11 + -0x4c),*(undefined4 *)(puVar11 + -0x48),
                    *(undefined4 *)(puVar11 + -0x44),param_11,uVar29,0);
    uVar46 = puVar25[2];
    uVar47 = puVar25[3];
    uVar39 = puVar25[10];
    uVar45 = puVar25[0xb];
    *(undefined8 *)(puVar11 + -0x50) = 0;
    *(undefined8 *)(puVar11 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,uVar39,uVar45,puVar11 + -0x50,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar46,uVar47,0,*(undefined4 *)(puVar11 + -0x50),
                    *(undefined4 *)(puVar11 + -0x4c),*(undefined4 *)(puVar11 + -0x48),
                    *(undefined4 *)(puVar11 + -0x44),param_11,uVar29,0);
    uVar46 = puVar25[4];
    uVar47 = puVar25[5];
    uVar39 = puVar25[0xc];
    uVar45 = puVar25[0xd];
    *(undefined8 *)(puVar11 + -0x50) = 0;
    *(undefined8 *)(puVar11 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0x3f800000,uVar39,uVar45,puVar11 + -0x50,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar46,uVar47,0,*(undefined4 *)(puVar11 + -0x50),
                    *(undefined4 *)(puVar11 + -0x4c),*(undefined4 *)(puVar11 + -0x48),
                    *(undefined4 *)(puVar11 + -0x44),param_11,uVar29,0);
    uVar46 = puVar25[6];
    uVar47 = puVar25[7];
    uVar39 = puVar25[0xe];
    uVar45 = puVar25[0xf];
    *(undefined8 *)(puVar11 + -0x50) = 0;
    *(undefined8 *)(puVar11 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,uVar39,uVar45,puVar11 + -0x50,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar46,uVar47,0,*(undefined4 *)(puVar11 + -0x50),
                    *(undefined4 *)(puVar11 + -0x4c),*(undefined4 *)(puVar11 + -0x48),
                    *(undefined4 *)(puVar11 + -0x44),param_11,uVar29,0);
    iVar15 = (int)plVar22;
    plVar21 = (long *)(ulong)(iVar15 + 2);
    puVar34 = &UNK_015186ec;
    plVar20 = plVar22;
    plVar23 = plVar21;
  }
  uVar26 = (ulong)(iVar15 + 1);
  *(long **)(puVar12 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar12 + -0x38) = unaff_x23;
  *(ulong *)(puVar12 + -0x30) = uVar29;
  *(long **)(puVar12 + -0x28) = plVar23;
  *(long **)(puVar12 + -0x20) = plVar20;
  *(long **)(puVar12 + -0x18) = param_11;
  *(undefined8 ********)(puVar12 + -0x10) = pppppppuVar33;
  *(undefined **)(puVar12 + -8) = puVar34;
  uVar19 = uVar26;
  if ((bRam0000000003ec2e2a & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    bRam0000000003ec2e2a = 1;
  }
  /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(param_11);
  plVar20 = (long *)param_11[10];
  if (plVar20 == (long *)0x0) {
    auVar51 = func_0x00f78af4();
    lVar28 = auVar51._0_8_;
    *(long **)(puVar12 + -0x70) = plVar22;
    *(ulong *)(puVar12 + -0x68) = uVar26;
    *(long **)(puVar12 + -0x60) = param_11;
    *(long **)(puVar12 + -0x58) = plVar21;
    *(undefined1 **)(puVar12 + -0x50) = puVar12 + -0x10;
    *(undefined **)(puVar12 + -0x48) = &UnityEngine_UI_VertexHelper__AddUIVertexStream;
    if ((bRam0000000003ec2e2b & 1) == 0) {
      func_0x00f78a20(0x3d3ac98);
      bRam0000000003ec2e2b = 1;
    }
    plVar21 = (long *)/*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(lVar28);
    if (auVar51._8_8_ != 0) {
      uVar24 = *(undefined8 *)(lVar28 + 0x10);
      uVar3 = *(undefined8 *)(lVar28 + 0x18);
      uVar43 = *(undefined8 *)(lVar28 + 0x20);
      uVar4 = *(undefined8 *)(lVar28 + 0x28);
      uVar44 = *(undefined8 *)(lVar28 + 0x30);
      uVar5 = *(undefined8 *)(lVar28 + 0x38);
      uVar1 = *(undefined8 *)(lVar28 + 0x40);
      *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(lVar28 + 0x48);
      *(undefined8 *)(puVar12 + -0x78) = 0;
      plVar21 = (long *)/*UnityEngine.CanvasRenderer$$AddUIVertexStream*/ func_0x032f5948(auVar51._8_8_,uVar24,uVar3,uVar43,uVar4,uVar44,uVar5,uVar1);
    }
    if (uVar19 == 0) {
      return plVar21;
    }
    lVar30 = *(long *)(lVar28 + 0x50);
    if (lVar30 == 0) {
      auVar51 = func_0x00f78af4();
      plVar21 = auVar51._0_8_;
      if (auVar51._8_8_ != 0) {
        *(long *)(puVar12 + -0xa0) = lVar28;
        *(ulong *)(puVar12 + -0x98) = uVar19;
        *(undefined1 **)(puVar12 + -0x90) = puVar12 + -0x50;
        *(undefined **)(puVar12 + -0x88) = &UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream;
        /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0();
        lVar28 = plVar21[2];
        lVar6 = plVar21[3];
        lVar30 = plVar21[4];
        lVar7 = plVar21[5];
        lVar42 = plVar21[6];
        lVar8 = plVar21[7];
        lVar2 = plVar21[8];
        lVar9 = plVar21[9];
        *(long *)(puVar12 + -0xb8) = plVar21[10];
        *(undefined8 *)(puVar12 + -0xb0) = 0;
        *(long *)(puVar12 + -0xc0) = lVar9;
        plVar21 = (long *)/*UnityEngine.CanvasRenderer$$SplitUIVertexStreams*/ func_0x032f5420(auVar51._8_8_,lVar28,lVar6,lVar30,lVar7,lVar42,lVar8,lVar2
                                         );
      }
      return plVar21;
    }
                    /* WARNING: Could not recover jumptable at 0x023dbf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar21 = (long *)(*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(lRam0000000003d3ac98 + 0x18) + 0xc0) + 0x70))
                                (lVar30,*(undefined4 *)(lVar30 + 0x18),uVar19);
    return plVar21;
  }
  *(long **)(puVar12 + -0x60) = param_11;
  *(long **)(puVar12 + -0x58) = plVar21;
  *(undefined1 **)(puVar12 + -0x50) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x48) = &UNK_032eeeac;
  lVar28 = plVar20[2];
  puVar27 = puRam0000000003d3ac90;
  if (lVar28 == 0) {
code_r0x023dbd28:
    plVar20 = plVar21;
    plVar23 = (long *)func_0x00f78af4();
    lVar28 = extraout_x9;
    uVar18 = extraout_w8;
code_r0x023dbd2c:
    *(uint *)(plVar20 + 3) = uVar18 + 1;
  }
  else {
    uVar18 = *(uint *)(plVar20 + 3);
    plVar23 = plVar20;
    param_11 = plVar22;
    if (uVar18 != *(uint *)(lVar28 + 0x18)) goto code_r0x023dbd2c;
    puVar27 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
    plVar23 = (long *)(*(code *)*puVar27)(plVar20,uVar18 + 1);
    lVar28 = plVar20[2];
    uVar18 = *(uint *)(plVar20 + 3);
    *(uint *)(plVar20 + 3) = uVar18 + 1;
    plVar21 = plVar20;
    if (lVar28 == 0) goto code_r0x023dbd28;
  }
  if (uVar18 < *(uint *)(lVar28 + 0x18)) {
    *(int *)(lVar28 + (long)(int)uVar18 * 4 + 0x20) = (int)param_11;
    *(int *)((long)plVar20 + 0x1c) = *(int *)((long)plVar20 + 0x1c) + 1;
    return plVar23;
  }
  uVar24 = func_0x00f78b24();
  auVar51 = func_0x00f78ac0(uVar24,0);
  plVar21 = auVar51._8_8_;
  lVar28 = auVar51._0_8_;
  *(long **)(puVar12 + -0xa0) = unaff_x24;
  *(undefined8 *)(puVar12 + -0x98) = 0x3d3ac90;
  *(long **)(puVar12 + -0x90) = plVar22;
  *(ulong *)(puVar12 + -0x88) = uVar26;
  *(long **)(puVar12 + -0x80) = param_11;
  *(long **)(puVar12 + -0x78) = plVar20;
  *(undefined1 **)(puVar12 + -0x70) = puVar12 + -0x50;
  *(undefined **)(puVar12 + -0x68) =
       &System_Collections_Generic_List_int___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar27[3] + 0xc0) + 0x48))(plVar21,0x14);
  if (lVar28 != 0) {
    pcVar31 = (code *)**(undefined8 **)(*(long *)(puVar27[3] + 0xc0) + 0x28);
    lVar30 = *(long *)(*(long *)(puVar27[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar30);
    }
    if (plVar21 != (long *)0x0) {
      if (*(long *)(*plVar21 + 0x40) == *(long *)(lVar30 + 0x40)) {
        puVar25 = (undefined4 *)func_0x00f78ae4(plVar21);
        (*pcVar31)(lVar28,*puVar25,*(undefined8 *)(*(long *)(puVar27[3] + 0xc0) + 0x28));
        iVar15 = (*(code *)**(undefined8 **)(*(long *)(puVar27[3] + 0xc0) + 0x68))(lVar28);
        return (long *)(ulong)(iVar15 - 1);
      }
      func_0x00f78e5c(plVar21,lVar30);
      goto code_r0x023dbf10;
    }
  }
  func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
  pcVar31 = (code *)SoftwareBreakpoint(1,0x23dbf14);
  (*pcVar31)();
}



// ============================================================
// RVA: 0x1518138 | Atlas.UI.UIBackgroundBehaviour.AddQuad
// ============================================================

/* WARNING: Possible PIC construction at 0x01518398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032eeea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151849c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015186e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01518548) */
/* WARNING: Removing unreachable block (ram,0x015184a0) */
/* WARNING: Removing unreachable block (ram,0x032eeeac) */
/* WARNING: Removing unreachable block (ram,0x032eeeb4) */
/* WARNING: Removing unreachable block (ram,0x032eeec8) */
/* WARNING: Removing unreachable block (ram,0x0151839c) */
/* WARNING: Removing unreachable block (ram,0x015186ec) */

ulong Atlas_UI_UIBackgroundBehaviour__AddQuad
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8,long param_9,ulong param_10,ulong param_11,
                ulong param_12,ulong param_13,ulong param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint extraout_w8;
  long lVar21;
  long extraout_x9;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 *unaff_x24;
  undefined8 *puVar26;
  undefined8 ****ppppuVar27;
  undefined8 ***pppuVar28;
  undefined *puVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [4];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long *plVar17;
  
  puVar10 = auStack_90;
  pppuVar28 = (undefined8 ***)&stack0xfffffffffffffff0;
  uVar24 = 0x3eb4000;
  uVar22 = param_11;
  if ((bRam0000000003eb4dc8 & 1) == 0) {
    func_0x00f78a20(0x3d232c8);
    bRam0000000003eb4dc8 = 1;
  }
  if (((*(ushort *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (param_11 == 0) {
    auVar39 = func_0x00f78af4();
    auVar8._8_8_ = param_12;
    auVar8._0_8_ = uVar22;
    uStack_f0 = auVar39._8_8_;
    puVar20 = auVar39._0_8_;
    auVar38._8_8_ = &uStack_130;
    auVar38._0_8_ = puVar20;
    puStack_98 = &Atlas_UI_UIBackgroundBehaviour__AddDotsToVertexHelper;
    uVar14 = param_12;
    uStack_e8 = uVar22;
    ppuStack_a0 = pppuVar28;
    if ((bRam0000000003eb4dc7 & 1) == 0) {
      func_0x00f78a20(0x3d400a8);
      uVar24 = func_0x00f78a20(0x3d400b0);
      auVar39._8_8_ = uStack_f0;
      auVar39._0_8_ = uVar24;
      bRam0000000003eb4dc7 = 1;
    }
    uStack_f0 = auVar39._8_8_;
    if ((int)uVar22 < 1) {
      return auVar39._0_8_;
    }
    puVar26 = (undefined8 *)(param_13 & 0xffffffff);
    puVar19 = puRam0000000003d400b0;
    uVar11 = /*Core.Containers.ReorderArray<int>$$get_Item*/ func_0x0284f52c(&uStack_f0,0);
    unaff_x24 = puVar26;
    if (param_12 == 0) {
      func_0x00f78af4();
code_r0x015184cc:
      uVar24 = func_0x00f78b24();
      auVar39 = func_0x00f78ac0(uVar24,0);
      lVar21 = auVar39._8_8_;
      puVar9 = &uStack_1b0;
      auVar38._8_8_ = &uStack_1b0;
      auVar38._0_8_ = auVar39._0_8_;
      uStack_168 = 0;
      puStack_138 = &Atlas_UI_UIBackgroundBehaviour__AddDotsToVertexHelper;
      ppppuVar27 = &pppuStack_140;
      param_11 = uVar14;
      puStack_170 = puVar26;
      puStack_160 = puVar20;
      uStack_158 = uVar22;
      uStack_150 = param_12;
      uStack_148 = param_14;
      pppuStack_140 = &ppuStack_a0;
      if (lVar21 != 0) {
        if ((int)*(ulong *)(lVar21 + 0x18) < 1) {
          return auVar39._0_8_;
        }
        puVar20 = (undefined8 *)((ulong)puVar19 & 0xffffffff);
        unaff_x24 = (undefined8 *)(lVar21 + 0x20);
        auVar8 = auVar39;
        if ((*(ulong *)(lVar21 + 0x18) & 0xffffffff) != 0) {
          uStack_1a8 = *(undefined8 *)(lVar21 + 0x28);
          uStack_1b0 = *unaff_x24;
          uStack_198 = *(undefined8 *)(lVar21 + 0x38);
          uStack_1a0 = *(undefined8 *)(lVar21 + 0x30);
          uStack_188 = *(undefined8 *)(lVar21 + 0x48);
          uStack_190 = *(undefined8 *)(lVar21 + 0x40);
          uStack_178 = *(undefined8 *)(lVar21 + 0x58);
          uStack_180 = *(undefined8 *)(lVar21 + 0x50);
          puVar29 = &UNK_01518548;
          puVar9 = &uStack_1b0;
          puVar19 = puVar20;
          goto code_r0x01518584;
        }
        uVar24 = func_0x00f78b24();
        func_0x00f78ac0(uVar24,0);
        param_14 = uVar14;
      }
      uVar14 = param_14;
      puVar29 = &Atlas_UI_UIBackgroundBehaviour__AddDotToVertexHelper;
      auVar38 = func_0x00f78af4();
    }
    else {
      if (*(uint *)(param_12 + 0x18) <= uVar11) goto code_r0x015184cc;
      uStack_128 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 5) * 8);
      uStack_130 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 4) * 8);
      uStack_118 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 7) * 8);
      uStack_120 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 6) * 8);
      uStack_108 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 9) * 8);
      uStack_110 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 8) * 8);
      uStack_f8 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 0xb) * 8);
      uStack_100 = *(undefined8 *)(param_12 + ((long)(int)uVar11 * 8 + 10) * 8);
      puVar29 = &UNK_015184a0;
      puVar9 = &uStack_130;
      puVar19 = puVar26;
      param_11 = param_14;
      uVar14 = param_14;
      ppppuVar27 = (undefined8 ****)&ppuStack_a0;
    }
code_r0x01518584:
    puVar15 = auVar38._8_8_;
    uVar24 = 0;
    puVar10 = (undefined1 *)((long)puVar9 + -0x50);
    *(ulong *)((long)puVar9 + -0x40) = (ulong)(uint)param_5;
    *(ulong *)((long)puVar9 + -0x38) = (ulong)(uint)param_2;
    *(undefined8 **)((long)puVar9 + -0x30) = puVar20;
    *(undefined1 (*) [16])((long)puVar9 + -0x28) = auVar8;
    *(ulong *)((long)puVar9 + -0x18) = uVar14;
    *(undefined8 *****)((long)puVar9 + -0x10) = ppppuVar27;
    *(undefined **)((long)puVar9 + -8) = puVar29;
    pppuVar28 = (undefined8 ***)((long)puVar9 + -0x10);
    if (param_11 == 0) {
      func_0x00f78af4(auVar38._0_8_);
      *(undefined8 ****)((long)puVar9 + -0x60) = pppuVar28;
      *(undefined **)((long)puVar9 + -0x58) = &Atlas_UI_UIBackgroundBehaviour__CreateVector4;
      *(undefined8 *)((long)puVar9 + -0x70) = 0;
      *(undefined8 *)((long)puVar9 + -0x68) = 0;
      uVar22 = /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40((undefined1 *)((long)puVar9 + -0x70),0);
      return uVar22;
    }
    uVar13 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_11,0);
    uVar35 = *puVar15;
    uVar36 = puVar15[1];
    uVar30 = puVar15[8];
    uVar34 = puVar15[9];
    *(undefined8 *)((long)puVar9 + -0x50) = 0;
    *(undefined8 *)((long)puVar9 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0,uVar30,uVar34,(undefined1 *)((long)puVar9 + -0x50),0);
    param_10 = (ulong)puVar19 & 0xffffffff;
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar35,uVar36,0,*(undefined4 *)((long)puVar9 + -0x50),
                    *(undefined4 *)((long)puVar9 + -0x4c),*(undefined4 *)((long)puVar9 + -0x48),
                    *(undefined4 *)((long)puVar9 + -0x44),param_11,param_10,0);
    uVar35 = puVar15[2];
    uVar36 = puVar15[3];
    uVar30 = puVar15[10];
    uVar34 = puVar15[0xb];
    *(undefined8 *)((long)puVar9 + -0x50) = 0;
    *(undefined8 *)((long)puVar9 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,uVar30,uVar34,(undefined1 *)((long)puVar9 + -0x50),0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar35,uVar36,0,*(undefined4 *)((long)puVar9 + -0x50),
                    *(undefined4 *)((long)puVar9 + -0x4c),*(undefined4 *)((long)puVar9 + -0x48),
                    *(undefined4 *)((long)puVar9 + -0x44),param_11,param_10,0);
    uVar35 = puVar15[4];
    uVar36 = puVar15[5];
    uVar30 = puVar15[0xc];
    uVar34 = puVar15[0xd];
    *(undefined8 *)((long)puVar9 + -0x50) = 0;
    *(undefined8 *)((long)puVar9 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0x3f800000,uVar30,uVar34,(undefined1 *)((long)puVar9 + -0x50),0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar35,uVar36,0,*(undefined4 *)((long)puVar9 + -0x50),
                    *(undefined4 *)((long)puVar9 + -0x4c),*(undefined4 *)((long)puVar9 + -0x48),
                    *(undefined4 *)((long)puVar9 + -0x44),param_11,param_10,0);
    uVar35 = puVar15[6];
    uVar36 = puVar15[7];
    uVar30 = puVar15[0xe];
    uVar34 = puVar15[0xf];
    *(undefined8 *)((long)puVar9 + -0x50) = 0;
    *(undefined8 *)((long)puVar9 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,uVar30,uVar34,(undefined1 *)((long)puVar9 + -0x50),0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar35,uVar36,0,*(undefined4 *)((long)puVar9 + -0x50),
                    *(undefined4 *)((long)puVar9 + -0x4c),*(undefined4 *)((long)puVar9 + -0x48),
                    *(undefined4 *)((long)puVar9 + -0x44),param_11,param_10,0);
    iVar12 = (int)uVar13;
    uVar22 = (ulong)(iVar12 + 2);
    puVar29 = &UNK_015186ec;
    uVar14 = uVar13;
    uVar16 = uVar22;
  }
  else {
    fStack_88 = param_5 + param_3 * param_7;
    fVar31 = *(float *)(*(long *)(/*Atlas.Maths.Math2d_TypeInfo*/ lRam0000000003d232c8 + 0xb8) + 0x34);
    fVar33 = (param_2 - fVar31) * *(float *)(param_9 + 0xd8);
    fStack_84 = fStack_88 + fVar33;
    fVar32 = (param_4 - fVar31) * *(float *)(param_9 + 0xd8);
    fStack_88 = fStack_88 + fVar32;
    fVar37 = param_6 + param_4 * param_8;
    param_5 = param_5 + param_1 * param_7;
    param_6 = param_6 + param_2 * param_8;
    fStack_8c = param_3;
    uVar13 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_11,0);
    uVar34 = *(undefined4 *)(param_9 + 0xdc);
    uVar35 = *(undefined4 *)(param_9 + 0xe0);
    fVar31 = param_2;
    uVar30 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(param_1,param_2,uVar34,uVar35,*(undefined4 *)(param_9 + 0xe4),
                             *(undefined4 *)(param_9 + 0xe8));
    param_10 = param_10 & 0xffffffff;
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(param_5 + fVar33,param_6,0,uVar30,fVar31,uVar34,uVar35,param_11,param_10,0);
    uVar34 = *(undefined4 *)(param_9 + 0xdc);
    uVar35 = *(undefined4 *)(param_9 + 0xe0);
    fVar31 = param_4;
    uVar30 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(param_1,param_4,uVar34,uVar35,*(undefined4 *)(param_9 + 0xe4),
                             *(undefined4 *)(param_9 + 0xe8));
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(param_5 + fVar32,fVar37,0,uVar30,fVar31,uVar34,uVar35,param_11,param_10,0);
    fVar31 = fStack_8c;
    uVar34 = *(undefined4 *)(param_9 + 0xdc);
    uVar35 = *(undefined4 *)(param_9 + 0xe0);
    uVar30 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(fStack_8c,param_4,uVar34,uVar35,*(undefined4 *)(param_9 + 0xe4),
                             *(undefined4 *)(param_9 + 0xe8));
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(fStack_88,fVar37,0,uVar30,param_4,uVar34,uVar35,param_11,param_10,0);
    uVar34 = *(undefined4 *)(param_9 + 0xdc);
    uVar35 = *(undefined4 *)(param_9 + 0xe0);
    uVar30 = /*Atlas.UI.UIBackgroundBehaviour$$AdjustUVs*/ func_0x01518750(fVar31,param_2,uVar34,uVar35,*(undefined4 *)(param_9 + 0xe4),
                             *(undefined4 *)(param_9 + 0xe8));
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(fStack_84,param_6,0,uVar30,param_2,uVar34,uVar35,param_11,param_10,0);
    iVar12 = (int)uVar13;
    uVar22 = (ulong)(iVar12 + 2);
    puVar29 = (undefined *)0x151839c;
    uVar14 = uVar22;
    uVar16 = uVar13;
  }
  uVar18 = (ulong)(iVar12 + 1);
  *(undefined8 **)(puVar10 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x38) = uVar24;
  *(ulong *)(puVar10 + -0x30) = param_10;
  *(ulong *)(puVar10 + -0x28) = uVar16;
  *(ulong *)(puVar10 + -0x20) = uVar14;
  *(ulong *)(puVar10 + -0x18) = param_11;
  *(undefined8 ****)(puVar10 + -0x10) = pppuVar28;
  *(undefined **)(puVar10 + -8) = puVar29;
  uVar14 = uVar18;
  if ((bRam0000000003ec2e2a & 1) == 0) {
    func_0x00f78a20(0x3d3ac90);
    bRam0000000003ec2e2a = 1;
  }
  /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(param_11);
  uVar16 = *(ulong *)(param_11 + 0x50);
  if (uVar16 == 0) {
    auVar39 = func_0x00f78af4();
    lVar21 = auVar39._0_8_;
    *(ulong *)(puVar10 + -0x70) = uVar13;
    *(ulong *)(puVar10 + -0x68) = uVar18;
    *(ulong *)(puVar10 + -0x60) = param_11;
    *(ulong *)(puVar10 + -0x58) = uVar22;
    *(undefined1 **)(puVar10 + -0x50) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x48) = &UnityEngine_UI_VertexHelper__AddUIVertexStream;
    if ((bRam0000000003ec2e2b & 1) == 0) {
      func_0x00f78a20(0x3d3ac98);
      bRam0000000003ec2e2b = 1;
    }
    uVar22 = /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0(lVar21);
    if (auVar39._8_8_ != 0) {
      uVar24 = *(undefined8 *)(lVar21 + 0x10);
      uVar4 = *(undefined8 *)(lVar21 + 0x18);
      uVar1 = *(undefined8 *)(lVar21 + 0x20);
      uVar5 = *(undefined8 *)(lVar21 + 0x28);
      uVar2 = *(undefined8 *)(lVar21 + 0x30);
      uVar6 = *(undefined8 *)(lVar21 + 0x38);
      uVar3 = *(undefined8 *)(lVar21 + 0x40);
      *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(lVar21 + 0x48);
      *(undefined8 *)(puVar10 + -0x78) = 0;
      uVar22 = /*UnityEngine.CanvasRenderer$$AddUIVertexStream*/ func_0x032f5948(auVar39._8_8_,uVar24,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3);
    }
    if (uVar14 != 0) {
      lVar23 = *(long *)(lVar21 + 0x50);
      if (lVar23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023dbf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar22 = (*(code *)**(undefined8 **)
                             (*(long *)(*(long *)(lRam0000000003d3ac98 + 0x18) + 0xc0) + 0x70))
                           (lVar23,*(undefined4 *)(lVar23 + 0x18),uVar14);
        return uVar22;
      }
      auVar39 = func_0x00f78af4();
      uVar22 = auVar39._0_8_;
      if (auVar39._8_8_ != 0) {
        *(long *)(puVar10 + -0xa0) = lVar21;
        *(ulong *)(puVar10 + -0x98) = uVar14;
        *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x50;
        *(undefined **)(puVar10 + -0x88) = &UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream;
        /*UnityEngine.UI.VertexHelper$$InitializeListIfRequired*/ func_0x032ee0a0();
        uVar24 = *(undefined8 *)(uVar22 + 0x10);
        uVar4 = *(undefined8 *)(uVar22 + 0x18);
        uVar1 = *(undefined8 *)(uVar22 + 0x20);
        uVar5 = *(undefined8 *)(uVar22 + 0x28);
        uVar2 = *(undefined8 *)(uVar22 + 0x30);
        uVar6 = *(undefined8 *)(uVar22 + 0x38);
        uVar3 = *(undefined8 *)(uVar22 + 0x40);
        uVar7 = *(undefined8 *)(uVar22 + 0x48);
        *(undefined8 *)(puVar10 + -0xb8) = *(undefined8 *)(uVar22 + 0x50);
        *(undefined8 *)(puVar10 + -0xb0) = 0;
        *(undefined8 *)(puVar10 + -0xc0) = uVar7;
        uVar22 = /*UnityEngine.CanvasRenderer$$SplitUIVertexStreams*/ func_0x032f5420(auVar39._8_8_,uVar24,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3);
      }
      return uVar22;
    }
    return uVar22;
  }
  *(ulong *)(puVar10 + -0x60) = param_11;
  *(ulong *)(puVar10 + -0x58) = uVar22;
  *(undefined1 **)(puVar10 + -0x50) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x48) = &UNK_032eeeac;
  lVar21 = *(long *)(uVar16 + 0x10);
  puVar20 = puRam0000000003d3ac90;
  if (lVar21 == 0) {
code_r0x023dbd28:
    uVar16 = uVar22;
    uVar14 = func_0x00f78af4();
    lVar21 = extraout_x9;
    uVar11 = extraout_w8;
code_r0x023dbd2c:
    *(uint *)(uVar16 + 0x18) = uVar11 + 1;
  }
  else {
    uVar11 = *(uint *)(uVar16 + 0x18);
    uVar14 = uVar16;
    param_11 = uVar13;
    if (uVar11 != *(uint *)(lVar21 + 0x18)) goto code_r0x023dbd2c;
    puVar20 = *(undefined8 **)(*(long *)(puRam0000000003d3ac90[3] + 0xc0) + 0x60);
    uVar14 = (*(code *)*puVar20)(uVar16,uVar11 + 1);
    lVar21 = *(long *)(uVar16 + 0x10);
    uVar11 = *(uint *)(uVar16 + 0x18);
    *(uint *)(uVar16 + 0x18) = uVar11 + 1;
    uVar22 = uVar16;
    if (lVar21 == 0) goto code_r0x023dbd28;
  }
  if (uVar11 < *(uint *)(lVar21 + 0x18)) {
    *(int *)(lVar21 + (long)(int)uVar11 * 4 + 0x20) = (int)param_11;
    *(int *)(uVar16 + 0x1c) = *(int *)(uVar16 + 0x1c) + 1;
    return uVar14;
  }
  uVar24 = func_0x00f78b24();
  auVar39 = func_0x00f78ac0(uVar24,0);
  plVar17 = auVar39._8_8_;
  lVar21 = auVar39._0_8_;
  *(undefined8 **)(puVar10 + -0xa0) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x98) = 0x3d3ac90;
  *(ulong *)(puVar10 + -0x90) = uVar13;
  *(ulong *)(puVar10 + -0x88) = uVar18;
  *(ulong *)(puVar10 + -0x80) = param_11;
  *(ulong *)(puVar10 + -0x78) = uVar16;
  *(undefined1 **)(puVar10 + -0x70) = puVar10 + -0x50;
  *(undefined **)(puVar10 + -0x68) =
       &System_Collections_Generic_List_int___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x48))(plVar17,0x14);
  if (lVar21 != 0) {
    pcVar25 = (code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x28);
    lVar23 = *(long *)(*(long *)(puVar20[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (plVar17 != (long *)0x0) {
      if (*(long *)(*plVar17 + 0x40) == *(long *)(lVar23 + 0x40)) {
        puVar15 = (undefined4 *)func_0x00f78ae4(plVar17);
        (*pcVar25)(lVar21,*puVar15,*(undefined8 *)(*(long *)(puVar20[3] + 0xc0) + 0x28));
        iVar12 = (*(code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x68))(lVar21);
        return (ulong)(iVar12 - 1);
      }
      func_0x00f78e5c(plVar17,lVar23);
      goto code_r0x023dbf10;
    }
  }
  func_0x00f78af4();
code_r0x023dbf10:
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x23dbf14);
  (*pcVar25)();
}



// ============================================================
// RVA: 0x15183dc | Atlas.UI.UIBackgroundBehaviour.AddDotsToVertexHelper
// ============================================================

/* WARNING: Possible PIC construction at 0x0151849c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015184a0) */
/* WARNING: Removing unreachable block (ram,0x01518548) */

undefined1  [16]
Atlas_UI_UIBackgroundBehaviour__AddDotsToVertexHelper
          (undefined1 param_1 [16],ulong param_2,undefined8 param_3,ulong param_4,long param_5,
          ulong param_6,long param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x1;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 ***pppuVar11;
  undefined *puVar12;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 unaff_d8;
  undefined4 uVar16;
  undefined8 unaff_d9;
  undefined1 auVar17 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  puVar5 = &uStack_a0;
  lVar6 = param_5;
  uStack_60 = param_3;
  uStack_58 = param_4;
  if ((bRam0000000003eb4dc7 & 1) == 0) {
    func_0x00f78a20(0x3d400a8);
    param_1 = func_0x00f78a20(0x3d400b0);
    bRam0000000003eb4dc7 = 1;
  }
  if ((int)param_4 < 1) {
    return param_1;
  }
  param_6 = param_6 & 0xffffffff;
  uVar10 = uRam0000000003d400b0;
  uVar2 = /*Core.Containers.ReorderArray<int>$$get_Item*/ func_0x0284f52c(&uStack_60,0);
  lVar9 = param_5;
  if (param_5 == 0) {
    func_0x00f78af4();
  }
  else if (uVar2 < *(uint *)(param_5 + 0x18)) {
    param_5 = param_5 + (long)(int)uVar2 * 0x40;
    uStack_98 = *(undefined8 *)(param_5 + 0x28);
    uStack_a0 = *(undefined8 *)(param_5 + 0x20);
    uStack_88 = *(undefined8 *)(param_5 + 0x38);
    uStack_90 = *(undefined8 *)(param_5 + 0x30);
    uStack_78 = *(undefined8 *)(param_5 + 0x48);
    uStack_80 = *(undefined8 *)(param_5 + 0x40);
    uStack_68 = *(undefined8 *)(param_5 + 0x58);
    uStack_70 = *(undefined8 *)(param_5 + 0x50);
    puVar12 = (undefined *)0x15184a0;
    puVar1 = &uStack_a0;
    uVar4 = param_2;
    uVar10 = param_6;
    lVar7 = param_7;
    lVar6 = param_7;
    pppuVar11 = (undefined8 ***)&stack0xfffffffffffffff0;
    goto code_r0x01518584;
  }
  uVar3 = func_0x00f78b24();
  uVar4 = func_0x00f78ac0(uVar3,0);
  puVar1 = &uStack_120;
  puVar5 = &uStack_120;
  uStack_d8 = 0;
  puStack_a8 = &Atlas_UI_UIBackgroundBehaviour__AddDotsToVertexHelper;
  pppuVar11 = &ppuStack_b0;
  lVar7 = lVar6;
  uStack_e0 = param_6;
  uStack_d0 = param_2;
  uStack_c8 = param_4;
  lStack_c0 = param_5;
  lStack_b8 = param_7;
  ppuStack_b0 = (undefined8 **)&stack0xfffffffffffffff0;
  if (extraout_x1 != 0) {
    if ((int)*(ulong *)(extraout_x1 + 0x18) < 1) {
      auVar17._8_8_ = extraout_var;
      auVar17._0_8_ = extraout_d0;
      return auVar17;
    }
    param_2 = uVar10 & 0xffffffff;
    lVar9 = extraout_x1;
    param_4 = uVar4;
    if ((*(ulong *)(extraout_x1 + 0x18) & 0xffffffff) != 0) {
      uStack_118 = *(undefined8 *)(extraout_x1 + 0x28);
      uStack_120 = *(undefined8 *)(extraout_x1 + 0x20);
      uStack_108 = *(undefined8 *)(extraout_x1 + 0x38);
      uStack_110 = *(undefined8 *)(extraout_x1 + 0x30);
      uStack_f8 = *(undefined8 *)(extraout_x1 + 0x48);
      uStack_100 = *(undefined8 *)(extraout_x1 + 0x40);
      uStack_e8 = *(undefined8 *)(extraout_x1 + 0x58);
      uStack_f0 = *(undefined8 *)(extraout_x1 + 0x50);
      puVar12 = &UNK_01518548;
      puVar1 = &uStack_120;
      uVar10 = param_2;
      goto code_r0x01518584;
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
    param_7 = lVar6;
  }
  lVar6 = param_7;
  puVar12 = &Atlas_UI_UIBackgroundBehaviour__AddDotToVertexHelper;
  auVar17 = func_0x00f78af4();
  puVar5 = auVar17._8_8_;
  uVar4 = auVar17._0_8_;
code_r0x01518584:
  *(undefined8 *)((long)puVar1 + -0x40) = unaff_d9;
  *(undefined8 *)((long)puVar1 + -0x38) = unaff_d8;
  *(ulong *)((long)puVar1 + -0x30) = param_2;
  *(ulong *)((long)puVar1 + -0x28) = param_4;
  *(long *)((long)puVar1 + -0x20) = lVar9;
  *(long *)((long)puVar1 + -0x18) = lVar6;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar11;
  *(undefined **)((long)puVar1 + -8) = puVar12;
  if (lVar7 != 0) {
    uVar3 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(lVar7,0);
    uVar15 = *(undefined4 *)puVar5;
    uVar16 = *(undefined4 *)((long)puVar5 + 4);
    uVar13 = *(undefined4 *)((long)puVar5 + 0x20);
    uVar14 = *(undefined4 *)((long)puVar5 + 0x24);
    *(undefined8 *)((long)puVar1 + -0x50) = 0;
    *(undefined8 *)((long)puVar1 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0,uVar13,uVar14,(undefined1 *)((long)puVar1 + -0x50),0);
    uVar10 = uVar10 & 0xffffffff;
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar15,uVar16,0,*(undefined4 *)((long)puVar1 + -0x50),
                    *(undefined4 *)((long)puVar1 + -0x4c),*(undefined4 *)((long)puVar1 + -0x48),
                    *(undefined4 *)((long)puVar1 + -0x44),lVar7,uVar10,0);
    uVar15 = *(undefined4 *)((long)puVar5 + 8);
    uVar16 = *(undefined4 *)((long)puVar5 + 0xc);
    uVar13 = *(undefined4 *)((long)puVar5 + 0x28);
    uVar14 = *(undefined4 *)((long)puVar5 + 0x2c);
    *(undefined8 *)((long)puVar1 + -0x50) = 0;
    *(undefined8 *)((long)puVar1 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,uVar13,uVar14,(undefined1 *)((long)puVar1 + -0x50),0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar15,uVar16,0,*(undefined4 *)((long)puVar1 + -0x50),
                    *(undefined4 *)((long)puVar1 + -0x4c),*(undefined4 *)((long)puVar1 + -0x48),
                    *(undefined4 *)((long)puVar1 + -0x44),lVar7,uVar10,0);
    uVar15 = *(undefined4 *)((long)puVar5 + 0x10);
    uVar16 = *(undefined4 *)((long)puVar5 + 0x14);
    uVar13 = *(undefined4 *)((long)puVar5 + 0x30);
    uVar14 = *(undefined4 *)((long)puVar5 + 0x34);
    *(undefined8 *)((long)puVar1 + -0x50) = 0;
    *(undefined8 *)((long)puVar1 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0x3f800000,uVar13,uVar14,(undefined1 *)((long)puVar1 + -0x50),0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar15,uVar16,0,*(undefined4 *)((long)puVar1 + -0x50),
                    *(undefined4 *)((long)puVar1 + -0x4c),*(undefined4 *)((long)puVar1 + -0x48),
                    *(undefined4 *)((long)puVar1 + -0x44),lVar7,uVar10,0);
    uVar15 = *(undefined4 *)((long)puVar5 + 0x18);
    uVar16 = *(undefined4 *)((long)puVar5 + 0x1c);
    uVar13 = *(undefined4 *)((long)puVar5 + 0x38);
    uVar14 = *(undefined4 *)((long)puVar5 + 0x3c);
    *(undefined8 *)((long)puVar1 + -0x50) = 0;
    *(undefined8 *)((long)puVar1 + -0x48) = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,uVar13,uVar14,(undefined1 *)((long)puVar1 + -0x50),0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar15,uVar16,0,*(undefined4 *)((long)puVar1 + -0x50),
                    *(undefined4 *)((long)puVar1 + -0x4c),*(undefined4 *)((long)puVar1 + -0x48),
                    *(undefined4 *)((long)puVar1 + -0x44),lVar7,uVar10,0);
    iVar8 = (int)uVar3;
    /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(lVar7,uVar3,iVar8 + 1,iVar8 + 2,0);
    auVar17 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(lVar7,iVar8 + 2,iVar8 + 3,uVar3,0);
    return auVar17;
  }
  func_0x00f78af4(uVar4);
  *(undefined1 **)((long)puVar1 + -0x60) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x58) = &Atlas_UI_UIBackgroundBehaviour__CreateVector4;
  *(undefined8 *)((long)puVar1 + -0x70) = 0;
  *(undefined8 *)((long)puVar1 + -0x68) = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40((undefined1 *)((long)puVar1 + -0x70),0);
  return ZEXT416(*(uint *)((long)puVar1 + -0x70));
}



// ============================================================
// RVA: 0x15184d8 | Atlas.UI.UIBackgroundBehaviour.AddDotsToVertexHelper
// ============================================================

/* WARNING: Possible PIC construction at 0x01518544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01518548) */

undefined1  [16]
Atlas_UI_UIBackgroundBehaviour__AddDotsToVertexHelper
          (undefined1 param_1 [16],undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_80;
  if (param_3 != 0) {
    if ((int)*(ulong *)(param_3 + 0x18) < 1) {
      return param_1;
    }
    if ((*(ulong *)(param_3 + 0x18) & 0xffffffff) != 0) {
      uStack_78 = *(undefined8 *)(param_3 + 0x28);
      uStack_80 = *(undefined8 *)(param_3 + 0x20);
      uStack_68 = *(undefined8 *)(param_3 + 0x38);
      uStack_70 = *(undefined8 *)(param_3 + 0x30);
      uStack_58 = *(undefined8 *)(param_3 + 0x48);
      uStack_60 = *(undefined8 *)(param_3 + 0x40);
      uStack_48 = *(undefined8 *)(param_3 + 0x58);
      uStack_50 = *(undefined8 *)(param_3 + 0x50);
      puVar4 = (undefined *)0x1518548;
      param_4 = param_4 & 0xffffffff;
      goto code_r0x01518584;
    }
    uVar1 = func_0x00f78b24();
    func_0x00f78ac0(uVar1,0);
  }
  puVar4 = &Atlas_UI_UIBackgroundBehaviour__AddDotToVertexHelper;
  auVar7 = func_0x00f78af4();
  puVar2 = auVar7._8_8_;
  param_2 = auVar7._0_8_;
code_r0x01518584:
  puStack_90 = &stack0xfffffffffffffff0;
  puStack_88 = puVar4;
  if (param_5 != 0) {
    uVar1 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_5,0);
    uVar5 = *(undefined4 *)puVar2;
    uVar6 = *(undefined4 *)((long)puVar2 + 4);
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0,*(undefined4 *)((long)puVar2 + 0x20),*(undefined4 *)((long)puVar2 + 0x24),
                    &uStack_d0,0);
    param_4 = param_4 & 0xffffffff;
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar5,uVar6,0,(undefined4)uStack_d0,uStack_d0._4_4_,(undefined4)uStack_c8,
                    uStack_c8._4_4_,param_5,param_4,0);
    uVar5 = *(undefined4 *)((long)puVar2 + 8);
    uVar6 = *(undefined4 *)((long)puVar2 + 0xc);
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,*(undefined4 *)((long)puVar2 + 0x28),
                    *(undefined4 *)((long)puVar2 + 0x2c),&uStack_d0,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar5,uVar6,0,(undefined4)uStack_d0,uStack_d0._4_4_,(undefined4)uStack_c8,
                    uStack_c8._4_4_,param_5,param_4,0);
    uVar5 = *(undefined4 *)((long)puVar2 + 0x10);
    uVar6 = *(undefined4 *)((long)puVar2 + 0x14);
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0x3f800000,*(undefined4 *)((long)puVar2 + 0x30),
                    *(undefined4 *)((long)puVar2 + 0x34),&uStack_d0,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar5,uVar6,0,(undefined4)uStack_d0,uStack_d0._4_4_,(undefined4)uStack_c8,
                    uStack_c8._4_4_,param_5,param_4,0);
    uVar5 = *(undefined4 *)((long)puVar2 + 0x18);
    uVar6 = *(undefined4 *)((long)puVar2 + 0x1c);
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,*(undefined4 *)((long)puVar2 + 0x38),
                    *(undefined4 *)((long)puVar2 + 0x3c),&uStack_d0,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar5,uVar6,0,(undefined4)uStack_d0,uStack_d0._4_4_,(undefined4)uStack_c8,
                    uStack_c8._4_4_,param_5,param_4,0);
    iVar3 = (int)uVar1;
    /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_5,uVar1,iVar3 + 1,iVar3 + 2,0);
    auVar7 = /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_5,iVar3 + 2,iVar3 + 3,uVar1,0);
    return auVar7;
  }
  func_0x00f78af4(param_2);
  puStack_d8 = &Atlas_UI_UIBackgroundBehaviour__CreateVector4;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuStack_e0 = &puStack_90;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(&uStack_f0,0);
  return ZEXT416((uint)uStack_f0);
}



// ============================================================
// RVA: 0x1518584 | Atlas.UI.UIBackgroundBehaviour.AddDotToVertexHelper
// ============================================================

undefined1  [16]
Atlas_UI_UIBackgroundBehaviour__AddDotToVertexHelper
          (undefined8 param_1,undefined4 *param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_4 != 0) {
    uVar1 = /*UnityEngine.UI.VertexHelper$$get_currentVertCount*/ func_0x032ee434(param_4,0);
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uStack_50 = 0;
    uStack_48 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0,param_2[8],param_2[9],&uStack_50,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar4,uVar5,0,(undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,
                    uStack_48._4_4_,param_4,param_3,0);
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uStack_50 = 0;
    uStack_48 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,param_2[10],param_2[0xb],&uStack_50,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar4,uVar5,0,(undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,
                    uStack_48._4_4_,param_4,param_3,0);
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uStack_50 = 0;
    uStack_48 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0x3f800000,param_2[0xc],param_2[0xd],&uStack_50,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar4,uVar5,0,(undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,
                    uStack_48._4_4_,param_4,param_3,0);
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    uStack_50 = 0;
    uStack_48 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0x3f800000,0,param_2[0xe],param_2[0xf],&uStack_50,0);
    /*UnityEngine.UI.VertexHelper$$AddVert*/ func_0x032eec94(uVar4,uVar5,0,(undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,
                    uStack_48._4_4_,param_4,param_3,0);
    iVar2 = (int)uVar1;
    /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_4,uVar1,iVar2 + 1,iVar2 + 2,0);
    /*UnityEngine.UI.VertexHelper$$AddTriangle*/ func_0x032eee44(param_4,iVar2 + 2,iVar2 + 3,uVar1,0);
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  func_0x00f78af4();
  puStack_58 = &Atlas_UI_UIBackgroundBehaviour__CreateVector4;
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_60 = &stack0xfffffffffffffff0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(&uStack_70,0);
  return ZEXT416((uint)uStack_70);
}



// ============================================================
// RVA: 0x1518720 | Atlas.UI.UIBackgroundBehaviour.CreateVector4
// ============================================================

undefined4 Atlas_UI_UIBackgroundBehaviour__CreateVector4(void)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(&uStack_20,0);
  return (undefined4)uStack_20;
}



// ============================================================
// RVA: 0x1518750 | Atlas.UI.UIBackgroundBehaviour.AdjustUVs
// ============================================================

undefined4
Atlas_UI_UIBackgroundBehaviour__AdjustUVs
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(param_3 + param_1 * param_5,param_4 + param_2 * param_6,param_1,param_2,&uStack_20
                  ,0);
  return (undefined4)uStack_20;
}



// ============================================================
// RVA: 0x15187a0 | Atlas.UI.UIBackgroundBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_UIBackgroundBehaviour___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar4 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_5 + 0xdc) = uVar4;
  *(undefined4 *)(param_5 + 0xe0) = param_2;
  uVar4 = /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
  *(undefined4 *)(param_5 + 0xe4) = uVar4;
  *(undefined4 *)(param_5 + 0xe8) = param_2;
  *(undefined4 *)(param_5 + 0xec) = 8;
  *(undefined1 *)(param_5 + 0xf0) = 1;
  *(undefined8 *)(param_5 + 0xf4) = _UNK_033f8708;
  *(undefined4 *)(param_5 + 0xfc) = 5;
  uVar2 = _UNK_033f8700;
  *(undefined4 *)(param_5 + 0x108) = 100;
  uVar6 = NEON_fmov(0x40a00000,4);
  *(undefined8 *)(param_5 + 0x10c) = uVar6;
  *(undefined4 *)(param_5 + 0x114) = 0x2711;
  *(undefined4 *)(param_5 + 0x138) = 0xffffffff;
  *(undefined8 *)(param_5 + 0x100) = uVar2;
  *(undefined4 *)(param_5 + 400) = 0x42c80000;
  if ((bRam0000000003ec2d65 & 1) == 0) {
    func_0x00f78a20(0x3d280a0,0);
    func_0x00f78a20(0x3d21c38);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003ec2d65 = 1;
  }
  uVar4 = (undefined4)uVar6;
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
  uVar5 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x20) = uVar5;
  *(undefined4 *)(param_5 + 0x24) = uVar4;
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
// RVA: 0x1a3907c | Atlas.UI.UIBackgroundBehaviour.RemoveRandomElement<int>
// ============================================================

undefined8
Atlas_UI_UIBackgroundBehaviour__RemoveRandomElement_int_
          (undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(param_2 + 8),0);
  uVar2 = /*Core.Containers.ReorderArray<int>$$get_Item*/ func_0x0284f52c(param_2,uVar1,*(undefined8 *)(*(long *)(param_3 + 0x30) + 8));
  /*Core.Containers.ReorderArray<int>$$RemoveAt*/ func_0x0284f76c(param_2,uVar1,*(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
  return uVar2;
}



// ============================================================
// RVA: 0x1a390e8 | Atlas.UI.UIBackgroundBehaviour.RemoveRandomElement<object>
// ============================================================

undefined8
Atlas_UI_UIBackgroundBehaviour__RemoveRandomElement_object_
          (undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(param_2 + 8),0);
  uVar2 = /*Core.Containers.ReorderArray<object>$$get_Item*/ func_0x0284f9ac(param_2,uVar1,*(undefined8 *)(*(long *)(param_3 + 0x30) + 8));
  /*Core.Containers.ReorderArray<object>$$RemoveAt*/ func_0x0284fbe8(param_2,uVar1,*(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10));
  return uVar2;
}



