// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.TrackEditorUtils

// ============================================================
// RVA: 0x1511380 | Atlas.Geometry.TrackEditorUtils.DestroyChildOverCount
// ============================================================

/* WARNING: Possible PIC construction at 0x01511494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01511498) */

long Atlas_Geometry_TrackEditorUtils__DestroyChildOverCount
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar8 = &stack0xfffffffffffffff0;
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4d73 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d73 = 1;
  }
  if (param_1 != 0) {
    lVar3 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(param_1,0);
    if ((int)param_2 < (int)lVar3) {
      unaff_x22 = 0x3d23990;
      do {
        iVar2 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(param_1,0);
        param_3 = 0;
        lVar3 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(param_1,iVar2 + -1);
        if (lVar3 == 0) goto LAB_0151144c;
        uVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$DestroyImmediate*/ func_0x0324946c(uVar7,0);
        lVar3 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(param_1,0);
      } while ((int)param_2 < (int)lVar3);
    }
    return lVar3;
  }
LAB_0151144c:
  puVar9 = &Atlas_Geometry_TrackEditorUtils__CreateRenderablesUpToCount;
  auVar10 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  while( true ) {
    lVar3 = auVar10._0_8_;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar7;
    *(long *)(puVar1 + -0x20) = param_1;
    *(long *)(puVar1 + -0x18) = param_2;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    if (lVar3 == 0) {
      puVar9 = &Atlas_Geometry_TrackEditorUtils__AddRenderableChild;
      lVar4 = param_3;
      auVar11 = func_0x00f78af4();
      param_3 = auVar11._8_8_;
      auVar10._8_8_ = uVar7;
      auVar10._0_8_ = auVar11._0_8_;
      lVar6 = param_4;
    }
    else {
      lVar6 = param_4;
      lVar4 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar3,0);
      if (auVar10._8_4_ <= (int)lVar4) {
        return lVar4;
      }
      puVar9 = &UNK_01511498;
      lVar4 = param_4;
      param_2 = param_4;
      param_1 = param_3;
      unaff_x22 = lVar3;
    }
    param_4 = lVar6;
    uVar7 = auVar10._0_8_;
    *(undefined8 *)(puVar1 + -0x70) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x68) = unaff_x23;
    *(long *)(puVar1 + -0x60) = unaff_x22;
    *(long *)(puVar1 + -0x58) = auVar10._8_8_;
    *(long *)(puVar1 + -0x50) = param_1;
    *(long *)(puVar1 + -0x48) = param_2;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = puVar9;
    unaff_x24 = 0x3d21b60;
    unaff_x23 = 0x3d71d90;
    if ((bRam0000000003eb4d74 & 1) == 0) {
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d71d90);
      bRam0000000003eb4d74 = 1;
    }
    lVar3 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
    lVar6 = 0;
    /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar3,/*STR('Renderable')*/ uRam0000000003d71d90);
    if ((lVar3 != 0) && (lVar5 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar3,0), lVar5 != 0)) break;
    auVar10 = func_0x00f78af4();
    *(long *)(puVar1 + -0xa0) = lVar3;
    *(undefined8 *)(puVar1 + -0x98) = uVar7;
    *(long *)(puVar1 + -0x90) = param_3;
    *(long *)(puVar1 + -0x88) = lVar4;
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x40;
    *(undefined **)(puVar1 + -0x78) =
         &Atlas_Geometry_TrackEditorUtils__UpdateChildRenderablesToCount;
    Atlas_Geometry_TrackEditorUtils__DestroyChildOverCount();
    puVar8 = *(undefined1 **)(puVar1 + -0x80);
    puVar9 = *(undefined **)(puVar1 + -0x78);
    param_1 = *(long *)(puVar1 + -0x90);
    param_2 = *(long *)(puVar1 + -0x88);
    unaff_x22 = *(long *)(puVar1 + -0xa0);
    uVar7 = *(undefined8 *)(puVar1 + -0x98);
    puVar1 = puVar1 + -0x70;
    param_3 = lVar6;
  }
  /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar5,uVar7,0);
  uVar7 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar3,0);
  /*Atlas.Geometry.TrackEditorUtils$$UpdateRenderable*/ func_0x015115c4(uVar7,0,0,param_3,lVar4);
  return lVar3;
}



// ============================================================
// RVA: 0x1511450 | Atlas.Geometry.TrackEditorUtils.CreateRenderablesUpToCount
// ============================================================

/* WARNING: Possible PIC construction at 0x01511494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01511498) */

long Atlas_Geometry_TrackEditorUtils__CreateRenderablesUpToCount
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  while( true ) {
    auVar1._8_8_ = unaff_x21;
    auVar1._0_8_ = unaff_x22;
    lVar2 = auVar8._0_8_;
    auVar7._8_8_ = param_3;
    auVar7._0_8_ = lVar2;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (lVar2 == 0) {
      puVar6 = &Atlas_Geometry_TrackEditorUtils__AddRenderableChild;
      auVar7 = func_0x00f78af4();
      uVar5 = param_3;
      uVar4 = param_4;
    }
    else {
      uVar4 = param_4;
      lVar2 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar2,0);
      if (auVar8._8_4_ <= (int)lVar2) {
        return lVar2;
      }
      puVar6 = (undefined *)0x1511498;
      uVar5 = param_4;
      unaff_x19 = param_4;
      unaff_x20 = param_3;
      auVar1 = auVar8;
    }
    param_4 = uVar4;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x60) = auVar1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = puVar6;
    unaff_x24 = 0x3d21b60;
    unaff_x23 = 0x3d71d90;
    if ((bRam0000000003eb4d74 & 1) == 0) {
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d71d90);
      bRam0000000003eb4d74 = 1;
    }
    lVar2 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
    param_3 = 0;
    /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar2,/*STR('Renderable')*/ uRam0000000003d71d90);
    if ((lVar2 != 0) && (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar2,0), lVar3 != 0)) break;
    auVar8 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0xa0) = lVar2;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x98) = auVar7;
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar5;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_Geometry_TrackEditorUtils__UpdateChildRenderablesToCount;
    Atlas_Geometry_TrackEditorUtils__DestroyChildOverCount();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x98);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar3,auVar7._0_8_,0);
  uVar4 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar2,0);
  /*Atlas.Geometry.TrackEditorUtils$$UpdateRenderable*/ func_0x015115c4(uVar4,0,0,auVar7._8_8_,uVar5);
  return lVar2;
}



// ============================================================
// RVA: 0x15114b0 | Atlas.Geometry.TrackEditorUtils.AddRenderableChild
// ============================================================

long Atlas_Geometry_TrackEditorUtils__AddRenderableChild
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x24 = 0x3d21b60;
    unaff_x23 = 0x3d71d90;
    if ((bRam0000000003eb4d74 & 1) == 0) {
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d71d90);
      bRam0000000003eb4d74 = 1;
    }
    lVar1 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
    uVar3 = 0;
    /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar1,/*STR('Renderable')*/ uRam0000000003d71d90);
    if ((lVar1 != 0) && (lVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar1,0), lVar2 != 0)) break;
    auVar5 = func_0x00f78af4();
    lVar2 = auVar5._0_8_;
    *(long *)((long)register0x00000008 + -0x70) = lVar1;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x68) = auVar4;
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Geometry_TrackEditorUtils__UpdateChildRenderablesToCount;
    Atlas_Geometry_TrackEditorUtils__DestroyChildOverCount();
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if (lVar2 != 0) {
      while (lVar1 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar2,0), (int)lVar1 < auVar5._8_4_) {
        Atlas_Geometry_TrackEditorUtils__AddRenderableChild(lVar2,uVar3,param_4);
      }
      return lVar1;
    }
    unaff_x30 = Atlas_Geometry_TrackEditorUtils__AddRenderableChild;
    auVar4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_3 = uVar3;
  }
  /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar2,auVar4._0_8_,0);
  uVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar1,0);
  /*Atlas.Geometry.TrackEditorUtils$$UpdateRenderable*/ func_0x015115c4(uVar3,0,0,auVar4._8_8_,param_3);
  return lVar1;
}



// ============================================================
// RVA: 0x1511580 | Atlas.Geometry.TrackEditorUtils.UpdateChildRenderablesToCount
// ============================================================

long Atlas_Geometry_TrackEditorUtils__UpdateChildRenderablesToCount
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  auVar8._8_8_ = unaff_x20;
  auVar8._0_8_ = unaff_x21;
  while( true ) {
    uVar7 = param_3;
    lVar5 = auVar9._0_8_;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x28) = auVar8;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    Atlas_Geometry_TrackEditorUtils__DestroyChildOverCount();
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar2 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar1 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x30) = uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x28) = uVar3;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if (lVar5 != 0) {
      while (lVar4 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(lVar5,0), (int)lVar4 < auVar9._8_4_) {
        Atlas_Geometry_TrackEditorUtils__AddRenderableChild(lVar5,uVar7,param_4);
      }
      return lVar4;
    }
    auVar8 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar3;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar2;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) =
         Atlas_Geometry_TrackEditorUtils__AddRenderableChild;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    unaff_x24 = 0x3d21b60;
    unaff_x23 = 0x3d71d90;
    if ((bRam0000000003eb4d74 & 1) == 0) {
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d71d90);
      bRam0000000003eb4d74 = 1;
    }
    unaff_x22 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
    param_3 = 0;
    /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(unaff_x22,/*STR('Renderable')*/ uRam0000000003d71d90);
    if ((unaff_x22 != 0) && (lVar5 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(unaff_x22,0), lVar5 != 0)) break;
    unaff_x30 = Atlas_Geometry_TrackEditorUtils__UpdateChildRenderablesToCount;
    auVar9 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = uVar7;
  }
  /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar5,auVar8._0_8_,0);
  uVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(unaff_x22,0);
  /*Atlas.Geometry.TrackEditorUtils$$UpdateRenderable*/ func_0x015115c4(uVar6,0,0,auVar8._8_8_,uVar7);
  return unaff_x22;
}



// ============================================================
// RVA: 0x15115c4 | Atlas.Geometry.TrackEditorUtils.UpdateRenderable
// ============================================================

/* WARNING: Possible PIC construction at 0x015116f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01511774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01511800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0185d69c) */
/* WARNING: Removing unreachable block (ram,0x0185d6b0) */
/* WARNING: Removing unreachable block (ram,0x0185d6b8) */
/* WARNING: Removing unreachable block (ram,0x0185d6bc) */
/* WARNING: Removing unreachable block (ram,0x0185d6cc) */
/* WARNING: Removing unreachable block (ram,0x0185d6d8) */
/* WARNING: Removing unreachable block (ram,0x0185d6dc) */
/* WARNING: Removing unreachable block (ram,0x0185d4d4) */
/* WARNING: Removing unreachable block (ram,0x0185d4e8) */
/* WARNING: Removing unreachable block (ram,0x0185d4f0) */
/* WARNING: Removing unreachable block (ram,0x0185d4f4) */
/* WARNING: Removing unreachable block (ram,0x0185d504) */
/* WARNING: Removing unreachable block (ram,0x0185d510) */
/* WARNING: Removing unreachable block (ram,0x0185d514) */
/* WARNING: Removing unreachable block (ram,0x01511804) */
/* WARNING: Removing unreachable block (ram,0x01511808) */
/* WARNING: Removing unreachable block (ram,0x01511778) */
/* WARNING: Removing unreachable block (ram,0x0151177c) */
/* WARNING: Removing unreachable block (ram,0x015116fc) */
/* WARNING: Removing unreachable block (ram,0x0185d89c) */
/* WARNING: Removing unreachable block (ram,0x0185d8b0) */
/* WARNING: Removing unreachable block (ram,0x0185d8b8) */
/* WARNING: Removing unreachable block (ram,0x0185d8bc) */
/* WARNING: Removing unreachable block (ram,0x0185d8cc) */
/* WARNING: Removing unreachable block (ram,0x0185d8d8) */
/* WARNING: Removing unreachable block (ram,0x0185d8dc) */

ulong Atlas_Geometry_TrackEditorUtils__UpdateRenderable
                (long param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6
                )

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar13;
  undefined8 unaff_x25;
  undefined8 uVar14;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined1 *puVar15;
  undefined8 unaff_x30;
  undefined8 uVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar13 = 0x3eb4000;
    lVar8 = param_3;
    lVar9 = param_4;
    lVar11 = param_5;
    if ((bRam0000000003eb4d75 & 1) == 0) {
      func_0x00f78a20(0x3d534f8);
      func_0x00f78a20(0x3d53500);
      func_0x00f78a20(0x3d53508);
      func_0x00f78a20(0x3d53510);
      func_0x00f78a20(0x3d576f8);
      func_0x00f78a20(0x3d57700);
      func_0x00f78a20(0x3d57708);
      func_0x00f78a20(0x3d57710);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d75 = 1;
    }
    lVar12 = param_5;
    uVar16 = param_2;
    if ((param_1 != 0) && (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0), lVar3 != 0)) {
      uVar5 = 0x3d23990;
      uVar14 = 0x3d23990;
      /*UnityEngine.GameObject$$set_isStatic*/ func_0x0322f07c(lVar3,1,0);
      lVar13 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53500);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar8 = 0;
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar13,0);
      unaff_x25 = uVar5;
      if (iVar2 == 0) {
        if (lVar13 != 0) {
          unaff_x26 = 0x3d53000;
          /*UnityEngine.MeshFilter$$set_sharedMesh*/ func_0x0324765c(lVar13,param_2,0);
          param_2 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53508);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar8 = 0;
          iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_2,0);
          uVar16 = param_2;
          unaff_x25 = uVar14;
          if (iVar2 == 0) {
            if ((int)param_5 == 0) {
LAB_0151182c:
              param_3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53510);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar8 = 0;
              uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_3,0);
              if ((int)uVar4 == 0) {
                return uVar4;
              }
              lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
              if (lVar3 != 0) {
                puVar15 = *(undefined1 **)((long)register0x00000008 + -0x10);
                uVar16 = *(undefined8 *)((long)register0x00000008 + -8);
                param_3 = *(long *)((long)register0x00000008 + -0x20);
                param_1 = *(long *)((long)register0x00000008 + -0x18);
                param_4 = *(long *)((long)register0x00000008 + -0x30);
                param_5 = *(long *)((long)register0x00000008 + -0x28);
                lVar13 = *(long *)((long)register0x00000008 + -0x40);
                param_2 = *(undefined8 *)((long)register0x00000008 + -0x38);
                unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
                uVar14 = *(undefined8 *)((long)register0x00000008 + -0x48);
                lVar11 = lRam0000000003d57710;
code_r0x0185d080:
                *(long *)((long)register0x00000008 + -0x30) = param_4;
                *(long *)((long)register0x00000008 + -0x28) = param_5;
                *(long *)((long)register0x00000008 + -0x20) = param_3;
                *(long *)((long)register0x00000008 + -0x18) = param_1;
                *(undefined1 **)((long)register0x00000008 + -0x10) = puVar15;
                *(undefined8 *)((long)register0x00000008 + -8) = uVar16;
                if ((bRam0000000003eb64dd & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64dd = 1;
                }
                uVar16 = **(undefined8 **)(lVar11 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
                if (lVar3 != 0) {
                  uVar16 = /*UnityEngine.GameObject$$AddComponent*/ func_0x0322ed6c(lVar3,uVar5,0);
                  lVar13 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
                  if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar13);
                  }
                  lVar13 = func_0x00f78adc(uVar16,lVar13);
                  lVar8 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  if (lVar13 != 0) {
                    uVar4 = func_0x00f78adc(lVar13,lVar8);
                    if (uVar4 != 0) {
                      return uVar4;
                    }
                    func_0x00f78e5c(lVar13,lVar8);
                  }
                  return 0;
                }
                auVar18 = func_0x00f78af4();
                *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d25458;
                *(undefined8 *)((long)register0x00000008 + -0x58) = uVar16;
                *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
                *(long *)((long)register0x00000008 + -0x48) = lVar11;
                *(undefined1 **)((long)register0x00000008 + -0x40) =
                     (undefined1 *)((long)register0x00000008 + -0x10);
                *(undefined **)((long)register0x00000008 + -0x38) =
                     &UnityEngine_GameObject__GetComponent_VirtualCamera_;
                if ((bRam0000000003eb64de & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64de = 1;
                }
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
                uVar16 = **(undefined8 **)(auVar18._8_8_ + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
                if (auVar18._0_8_ != 0) {
                  /*UnityEngine.GameObject$$GetComponentFastPath*/ func_0x0322e3dc(auVar18._0_8_,uVar5,
                                  (undefined1 *)((long)register0x00000008 + -0x68),0);
                  return *(ulong *)((long)register0x00000008 + -0x70);
                }
                auVar18 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0x80) =
                     (undefined1 *)((long)register0x00000008 + -0x40);
                *(undefined **)((long)register0x00000008 + -0x78) =
                     &UnityEngine_GameObject__GetComponentInChildren_TMP_Dropdown_DropdownItem_;
                if (auVar18._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar4 = (**(code **)**(undefined8 **)(auVar18._8_8_ + 0x30))(auVar18._0_8_,0);
                  return uVar4;
                }
                auVar18 = func_0x00f78af4();
                *(long *)((long)register0x00000008 + -0xc0) = lVar13;
                *(undefined8 *)((long)register0x00000008 + -0xb8) = param_2;
                *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3eb6000;
                *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3d25458;
                *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar16;
                *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
                *(undefined1 **)((long)register0x00000008 + -0x90) =
                     (undefined1 *)((long)register0x00000008 + -0x80);
                *(undefined **)((long)register0x00000008 + -0x88) =
                     &UnityEngine_GameObject__GetComponentInChildren_object_;
                lVar11 = lVar8;
                if ((bRam0000000003eb64df & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64df = 1;
                }
                uVar16 = **(undefined8 **)(lVar8 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
                if (auVar18._0_8_ != 0) {
                  lVar13 = /*UnityEngine.GameObject$$GetComponentInChildren*/ func_0x03227bec(auVar18._0_8_,uVar5,auVar18._8_8_,0);
                  lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  if (lVar13 != 0) {
                    uVar4 = func_0x00f78adc(lVar13,lVar8);
                    if (uVar4 != 0) {
                      return uVar4;
                    }
                    func_0x00f78e5c(lVar13,lVar8);
                  }
                  return 0;
                }
                auVar19 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0xd0) =
                     (undefined1 *)((long)register0x00000008 + -0x90);
                *(undefined **)((long)register0x00000008 + -200) =
                     &UnityEngine_GameObject__GetComponentInParent_object_;
                if (auVar19._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar4 = (**(code **)**(undefined8 **)(auVar19._8_8_ + 0x30))(auVar19._0_8_,0);
                  return uVar4;
                }
                auVar19 = func_0x00f78af4();
                *(long *)((long)register0x00000008 + -0x110) = lVar13;
                *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d25458;
                *(undefined8 *)((long)register0x00000008 + -0x100) = uVar16;
                *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
                *(long *)((long)register0x00000008 + -0xf0) = auVar18._8_8_;
                *(long *)((long)register0x00000008 + -0xe8) = lVar8;
                *(undefined1 **)((long)register0x00000008 + -0xe0) =
                     (undefined1 *)((long)register0x00000008 + -0xd0);
                *(undefined **)((long)register0x00000008 + -0xd8) =
                     &UnityEngine_GameObject__GetComponentInParent_UITweenGroup_;
                uVar16 = 0x3d25458;
                lVar8 = lVar11;
                if ((bRam0000000003eb64e0 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e0 = 1;
                }
                uVar5 = **(undefined8 **)(lVar11 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                if (auVar19._0_8_ != 0) {
                  lVar13 = /*UnityEngine.GameObject$$GetComponentInParent*/ func_0x0322e528(auVar19._0_8_,uVar6,auVar19._8_8_,0);
                  lVar8 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
                  if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar8);
                  }
                  if (lVar13 != 0) {
                    uVar4 = func_0x00f78adc(lVar13,lVar8);
                    if (uVar4 != 0) {
                      return uVar4;
                    }
                    func_0x00f78e5c(lVar13,lVar8);
                  }
                  return 0;
                }
                auVar18 = func_0x00f78af4();
                lVar12 = auVar18._0_8_;
                puVar1 = (undefined1 *)((long)register0x00000008 + -0x140);
                *(undefined8 *)((long)register0x00000008 + -0x140) = uVar5;
                *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
                *(long *)((long)register0x00000008 + -0x130) = auVar19._8_8_;
                *(long *)((long)register0x00000008 + -0x128) = lVar11;
                *(undefined1 **)((long)register0x00000008 + -0x120) =
                     (undefined1 *)((long)register0x00000008 + -0xe0);
                *(undefined **)((long)register0x00000008 + -0x118) =
                     &UnityEngine_GameObject__GetComponents_object_;
                puVar15 = (undefined1 *)((long)register0x00000008 + -0x120);
                uVar5 = 0x3d25458;
                if ((bRam0000000003eb64e1 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e1 = 1;
                }
                uVar6 = **(undefined8 **)(auVar18._8_8_ + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar6,0);
                if (lVar12 == 0) {
                  auVar19 = func_0x00f78af4();
                  lVar11 = auVar19._8_8_;
                  *(long *)((long)register0x00000008 + -0x180) = lVar13;
                  *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3d25458;
                  *(undefined8 *)((long)register0x00000008 + -0x170) = 0x3d25458;
                  *(undefined8 *)((long)register0x00000008 + -0x168) = uVar6;
                  *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
                  *(long *)((long)register0x00000008 + -0x158) = auVar18._8_8_;
                  *(undefined1 **)((long)register0x00000008 + -0x150) = puVar15;
                  *(undefined **)((long)register0x00000008 + -0x148) =
                       &UnityEngine_GameObject__GetComponents_Volume_;
                  lVar3 = lVar8;
                  if ((bRam0000000003eb64e2 & 1) == 0) {
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb64e2 = 1;
                  }
                  uVar16 = **(undefined8 **)(lVar8 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
                  if (auVar19._0_8_ == 0) {
                    auVar18 = func_0x00f78af4();
                    *(undefined1 **)((long)register0x00000008 + -400) =
                         (undefined1 *)((long)register0x00000008 + -0x150);
                    *(undefined **)((long)register0x00000008 + -0x188) =
                         &UnityEngine_GameObject__GetComponentsInChildren_RectTransform_;
                    if (auVar18._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar4 = (**(code **)**(undefined8 **)(auVar18._8_8_ + 0x30))(auVar18._0_8_,0);
                      return uVar4;
                    }
                    auVar19 = func_0x00f78af4();
                    lVar12 = auVar19._8_8_;
                    auVar18._8_8_ = lVar3;
                    auVar18._0_8_ = auVar19._0_8_;
                    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1d0);
                    *(long *)((long)register0x00000008 + -0x1d0) = lVar13;
                    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0x3eb6000;
                    *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x3d25458;
                    *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar16;
                    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
                    *(long *)((long)register0x00000008 + -0x1a8) = lVar11;
                    *(undefined1 **)((long)register0x00000008 + -0x1a0) =
                         (undefined1 *)((long)register0x00000008 + -400);
                    *(undefined **)((long)register0x00000008 + -0x198) =
                         &UnityEngine_GameObject__GetComponentsInChildren_object_;
                    puVar15 = (undefined1 *)((long)register0x00000008 + -0x1a0);
                    uVar16 = 0x3d25458;
                    lVar11 = lVar3;
                    if ((bRam0000000003eb64e3 & 1) == 0) {
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb64e3 = 1;
                    }
                    uVar5 = **(undefined8 **)(lVar3 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                    if (auVar19._0_8_ == 0) {
                      auVar18 = func_0x00f78af4();
                      *(undefined1 **)((long)register0x00000008 + -0x1e0) = puVar15;
                      *(undefined **)((long)register0x00000008 + -0x1d8) =
                           &UnityEngine_GameObject__GetComponentsInChildren_object_;
                      if (auVar18._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar4 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                          (auVar18._0_8_,0,auVar18._8_8_);
                        return uVar4;
                      }
                      auVar20 = func_0x00f78af4();
                      *(long *)((long)register0x00000008 + -0x220) = lVar13;
                      *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3d25458;
                      *(undefined8 *)((long)register0x00000008 + -0x210) = uVar5;
                      *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
                      *(long *)((long)register0x00000008 + -0x200) = lVar12;
                      *(long *)((long)register0x00000008 + -0x1f8) = lVar3;
                      *(undefined1 **)((long)register0x00000008 + -0x1f0) =
                           (undefined1 *)((long)register0x00000008 + -0x1e0);
                      *(undefined **)((long)register0x00000008 + -0x1e8) =
                           &UnityEngine_GameObject__GetComponentsInChildren_Renderer_;
                      lVar13 = 0x3eb6000;
                      lVar8 = lVar11;
                      lVar3 = lVar9;
                      if ((bRam0000000003eb64e4 & 1) == 0) {
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb64e4 = 1;
                      }
                      uVar16 = **(undefined8 **)(lVar9 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
                      if (auVar20._0_8_ == 0) {
                        auVar18 = func_0x00f78af4();
                        *(undefined1 **)((long)register0x00000008 + -0x230) =
                             (undefined1 *)((long)register0x00000008 + -0x1f0);
                        *(undefined **)((long)register0x00000008 + -0x228) =
                             &UnityEngine_GameObject__GetComponentsInParent_object_;
                        if (auVar18._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar4 = (**(code **)**(undefined8 **)(auVar18._8_8_ + 0x30))
                                            (auVar18._0_8_,0);
                          return uVar4;
                        }
                        auVar19 = func_0x00f78af4();
                        lVar12 = auVar19._8_8_;
                        auVar18._8_8_ = lVar8;
                        auVar18._0_8_ = auVar19._0_8_;
                        puVar1 = (undefined1 *)((long)register0x00000008 + -0x270);
                        *(undefined8 *)((long)register0x00000008 + -0x270) = 0x3eb6000;
                        *(undefined8 *)((long)register0x00000008 + -0x268) = 0x3d25458;
                        *(undefined8 *)((long)register0x00000008 + -0x260) = uVar16;
                        *(undefined8 *)((long)register0x00000008 + -600) = 0;
                        *(long *)((long)register0x00000008 + -0x250) = auVar20._8_8_;
                        *(long *)((long)register0x00000008 + -0x248) = lVar11;
                        *(undefined1 **)((long)register0x00000008 + -0x240) =
                             (undefined1 *)((long)register0x00000008 + -0x230);
                        *(undefined **)((long)register0x00000008 + -0x238) =
                             &UnityEngine_GameObject__GetComponentsInParent_object_;
                        puVar15 = (undefined1 *)((long)register0x00000008 + -0x240);
                        uVar16 = 0x3d25458;
                        lVar11 = lVar8;
                        if ((bRam0000000003eb64e5 & 1) == 0) {
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb64e5 = 1;
                        }
                        uVar5 = **(undefined8 **)(lVar8 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
                        if (auVar19._0_8_ == 0) {
                          auVar19 = func_0x00f78af4();
                          *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0x3eb6000;
                          *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0x3d25458;
                          *(undefined8 *)((long)register0x00000008 + -0x2a0) = uVar5;
                          *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
                          *(long *)((long)register0x00000008 + -0x290) = lVar12;
                          *(long *)((long)register0x00000008 + -0x288) = lVar8;
                          *(undefined1 **)((long)register0x00000008 + -0x280) = puVar15;
                          *(undefined **)((long)register0x00000008 + -0x278) =
                               &UnityEngine_GameObject__GetComponentsInParent_RectMask2D_;
                          lVar13 = lVar11;
                          if ((bRam0000000003eb64e6 & 1) == 0) {
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb64e6 = 1;
                          }
                          uVar16 = **(undefined8 **)(lVar3 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
                          if (auVar19._0_8_ == 0) {
                            auVar18 = func_0x00f78af4();
                            *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0x3eb6000;
                            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0x3d25458;
                            *(undefined8 *)((long)register0x00000008 + -0x2e0) = uVar16;
                            *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
                            *(long *)((long)register0x00000008 + -0x2d0) = auVar19._8_8_;
                            *(long *)((long)register0x00000008 + -0x2c8) = lVar11;
                            *(undefined1 **)((long)register0x00000008 + -0x2c0) =
                                 (undefined1 *)((long)register0x00000008 + -0x280);
                            *(undefined **)((long)register0x00000008 + -0x2b8) =
                                 &
                                 UnityEngine_GameObject__TryGetComponent_UniversalAdditionalLightData_
                            ;
                            if ((bRam0000000003eb64e7 & 1) == 0) {
                              func_0x00f78a20(0x3d25458);
                              bRam0000000003eb64e7 = 1;
                            }
                            *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
                            *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                            uVar16 = **(undefined8 **)(lVar13 + 0x30);
                            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
                            if (auVar18._0_8_ == 0) {
                              auVar19 = func_0x00f78af4();
                              *(undefined8 *)((long)register0x00000008 + -0x330) = 0x3d25458;
                              *(undefined8 *)((long)register0x00000008 + -0x328) = uVar16;
                              *(undefined8 *)((long)register0x00000008 + -800) = 0;
                              *(long **)((long)register0x00000008 + -0x318) = auVar18._8_8_;
                              *(undefined1 **)((long)register0x00000008 + -0x310) =
                                   (undefined1 *)((long)register0x00000008 + -0x2c0);
                              *(undefined **)((long)register0x00000008 + -0x308) =
                                   &Core_Networking_HostUpdateHolder__Update_HostCarUpdate_;
                              uVar4 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar19._0_8_,6,0);
                              if ((int)uVar4 == 0) {
                                *extraout_x8 = 0;
                                extraout_x8[1] = 0;
                                extraout_x8[2] = 0;
                              }
                              else {
                                auVar18 = /*FlatBuffers.Table$$__union<HostCarUpdate>*/ func_0x018e3e90(auVar19._0_8_,uVar4,
                                                          **(undefined8 **)(auVar19._8_8_ + 0x30));
                                *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
                                uVar4 = /*System.Nullable<HostCarUpdate>$$.ctor*/ func_0x02652304((undefined1 *)
                                                        ((long)register0x00000008 + -0x348),
                                                        auVar18._0_8_,auVar18._8_8_,
                                                        *(undefined8 *)
                                                         (*(long *)(auVar19._8_8_ + 0x30) + 0x10));
                                uVar16 = *(undefined8 *)((long)register0x00000008 + -0x348);
                                extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x340);
                                *extraout_x8 = uVar16;
                                extraout_x8[2] = *(undefined8 *)((long)register0x00000008 + -0x338);
                              }
                              return uVar4;
                            }
                            /*UnityEngine.GameObject$$TryGetComponentFastPath*/ func_0x0322e9a8(auVar18._0_8_,uVar5,
                                            (undefined1 *)((long)register0x00000008 + -0x2f8),0);
                            lVar13 = *(long *)((long)register0x00000008 + -0x300);
                            *auVar18._8_8_ = lVar13;
                            return (ulong)(lVar13 != 0);
                          }
                          uVar10 = 1;
                          uVar6 = 1;
                          puVar15 = *(undefined1 **)((long)register0x00000008 + -0x280);
                          puVar17 = *(undefined **)((long)register0x00000008 + -0x278);
                          lVar12 = *(long *)((long)register0x00000008 + -0x290);
                          auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x288);
                          auVar18._0_8_ = auVar19._0_8_;
                          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
                          auVar19._8_8_ = auVar19._8_8_;
                          auVar19._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x298);
                          puVar1 = (undefined1 *)((long)register0x00000008 + -0x270);
                          lVar13 = *(long *)((long)register0x00000008 + -0x2b0);
                          uVar16 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
                        }
                        else {
                          uVar10 = 1;
                          uVar6 = 1;
                          lVar11 = 0;
                          puVar17 = &UNK_0185d89c;
                        }
                      }
                      else {
                        uVar10 = 1;
                        uVar6 = 0;
                        puVar15 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
                        puVar17 = *(undefined **)((long)register0x00000008 + -0x1e8);
                        lVar12 = *(long *)((long)register0x00000008 + -0x200);
                        auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x1f8);
                        auVar18._0_8_ = auVar20._0_8_;
                        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x210);
                        auVar19._8_8_ = auVar20._8_8_;
                        auVar19._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x208);
                        puVar1 = (undefined1 *)((long)register0x00000008 + -0x1e0);
                        lVar13 = *(long *)((long)register0x00000008 + -0x220);
                        uVar16 = *(undefined8 *)((long)register0x00000008 + -0x218);
                      }
                    }
                    else {
                      uVar10 = 1;
                      uVar6 = 0;
                      lVar11 = 0;
                      puVar17 = &UNK_0185d69c;
                    }
                  }
                  else {
                    uVar10 = 0;
                    uVar6 = 0;
                    puVar15 = *(undefined1 **)((long)register0x00000008 + -0x150);
                    puVar17 = *(undefined **)((long)register0x00000008 + -0x148);
                    lVar12 = *(long *)((long)register0x00000008 + -0x160);
                    auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x158);
                    auVar18._0_8_ = auVar19._0_8_;
                    uVar5 = *(undefined8 *)((long)register0x00000008 + -0x170);
                    auVar19._8_8_ = 1;
                    auVar19._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x168);
                    puVar1 = (undefined1 *)((long)register0x00000008 + -0x140);
                    lVar13 = *(long *)((long)register0x00000008 + -0x180);
                    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x178);
                  }
                }
                else {
                  uVar10 = 0;
                  auVar19._8_8_ = 1;
                  auVar19._0_8_ = uVar6;
                  uVar6 = 0;
                  lVar11 = 0;
                  puVar17 = &UNK_0185d4d4;
                }
                *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar1 + -0x48) = uVar14;
                *(long *)(puVar1 + -0x40) = lVar13;
                *(undefined8 *)(puVar1 + -0x38) = uVar16;
                *(undefined8 *)(puVar1 + -0x30) = uVar5;
                *(long *)(puVar1 + -0x28) = auVar19._0_8_;
                *(long *)(puVar1 + -0x20) = lVar12;
                *(long *)(puVar1 + -0x18) = auVar18._8_8_;
                *(undefined1 **)(puVar1 + -0x10) = puVar15;
                *(undefined **)(puVar1 + -8) = puVar17;
                if (pcRam0000000003ebf468 == (code *)0x0) {
                  pcRam0000000003ebf468 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x0322e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar4 = (*pcRam0000000003ebf468)
                                  (auVar18._0_8_,uVar7,1,uVar10,auVar19._8_8_,uVar6,lVar11);
                return uVar4;
              }
            }
            else {
              param_5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d534f8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar8 = 0;
              iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0);
              lVar12 = param_5;
              if (iVar2 == 0) {
                if (param_5 != 0) {
                  /*UnityEngine.MeshCollider$$set_sharedMesh*/ func_0x0329f108(param_5,param_3,0);
                  goto LAB_0151182c;
                }
              }
              else {
                lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
                if (lVar3 != 0) {
                  uVar16 = 0x1511804;
                  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
                  lVar11 = lRam0000000003d576f8;
                  goto code_r0x0185d080;
                }
              }
            }
          }
          else {
            lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
            if (lVar3 != 0) {
              uVar16 = 0x1511778;
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
              lVar11 = lRam0000000003d57708;
              uVar14 = uVar5;
              goto code_r0x0185d080;
            }
          }
        }
      }
      else {
        lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
        if (lVar3 != 0) {
          uVar16 = 0x15116fc;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
          lVar11 = lRam0000000003d57700;
          uVar14 = uVar5;
          goto code_r0x0185d080;
        }
      }
    }
    param_5 = param_6;
    auVar18 = func_0x00f78af4();
    param_2 = auVar18._8_8_;
    lVar3 = auVar18._0_8_;
    *(long *)((long)register0x00000008 + -0x90) = lVar13;
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar16;
    *(long *)((long)register0x00000008 + -0x80) = param_4;
    *(long *)((long)register0x00000008 + -0x78) = lVar12;
    *(long *)((long)register0x00000008 + -0x70) = param_3;
    *(long *)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar15;
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_Geometry_TrackEditorUtils__CreateOrUpdateChildRenderable;
    param_6 = param_5;
    Atlas_Geometry_TrackEditorUtils__CreateRenderablesUpToCount(lVar3,(int)lVar9 + 1,lVar11,param_5)
    ;
    if (lVar3 == 0) {
      uVar4 = func_0x00f78af4();
      return uVar4;
    }
    param_1 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar3,lVar9,0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_3 = lVar8;
    param_4 = lVar11;
  } while( true );
}



// ============================================================
// RVA: 0x15118c0 | Atlas.Geometry.TrackEditorUtils.CreateOrUpdateChildRenderable
// ============================================================

/* WARNING: Possible PIC construction at 0x015116f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01511774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01511800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0185d898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0185d69c) */
/* WARNING: Removing unreachable block (ram,0x0185d6b0) */
/* WARNING: Removing unreachable block (ram,0x0185d6b8) */
/* WARNING: Removing unreachable block (ram,0x0185d6bc) */
/* WARNING: Removing unreachable block (ram,0x0185d6cc) */
/* WARNING: Removing unreachable block (ram,0x0185d6d8) */
/* WARNING: Removing unreachable block (ram,0x0185d6dc) */
/* WARNING: Removing unreachable block (ram,0x0185d4d4) */
/* WARNING: Removing unreachable block (ram,0x0185d4e8) */
/* WARNING: Removing unreachable block (ram,0x0185d4f0) */
/* WARNING: Removing unreachable block (ram,0x0185d4f4) */
/* WARNING: Removing unreachable block (ram,0x0185d504) */
/* WARNING: Removing unreachable block (ram,0x0185d510) */
/* WARNING: Removing unreachable block (ram,0x0185d514) */
/* WARNING: Removing unreachable block (ram,0x01511804) */
/* WARNING: Removing unreachable block (ram,0x01511808) */
/* WARNING: Removing unreachable block (ram,0x01511778) */
/* WARNING: Removing unreachable block (ram,0x0151177c) */
/* WARNING: Removing unreachable block (ram,0x015116fc) */
/* WARNING: Removing unreachable block (ram,0x0185d89c) */
/* WARNING: Removing unreachable block (ram,0x0185d8b0) */
/* WARNING: Removing unreachable block (ram,0x0185d8b8) */
/* WARNING: Removing unreachable block (ram,0x0185d8bc) */
/* WARNING: Removing unreachable block (ram,0x0185d8cc) */
/* WARNING: Removing unreachable block (ram,0x0185d8d8) */
/* WARNING: Removing unreachable block (ram,0x0185d8dc) */

ulong Atlas_Geometry_TrackEditorUtils__CreateOrUpdateChildRenderable
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                long param_6)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long unaff_x19;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined8 uVar14;
  code *unaff_x30;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  do {
    lVar11 = param_5;
    uVar4 = auVar16._8_8_;
    lVar7 = auVar16._0_8_;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar9 = param_6;
    Atlas_Geometry_TrackEditorUtils__CreateRenderablesUpToCount
              (lVar7,(int)param_4 + 1,lVar11,param_6);
    if (lVar7 == 0) {
      uVar5 = func_0x00f78af4();
      return uVar5;
    }
    unaff_x19 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar7,param_4,0);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x24 = 0x3eb4000;
    lVar7 = param_3;
    param_4 = lVar11;
    param_5 = param_6;
    if ((bRam0000000003eb4d75 & 1) == 0) {
      func_0x00f78a20(0x3d534f8);
      func_0x00f78a20(0x3d53500);
      func_0x00f78a20(0x3d53508);
      func_0x00f78a20(0x3d53510);
      func_0x00f78a20(0x3d576f8);
      func_0x00f78a20(0x3d57700);
      func_0x00f78a20(0x3d57708);
      func_0x00f78a20(0x3d57710);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d75 = 1;
    }
    unaff_x20 = param_3;
    unaff_x21 = param_6;
    if ((unaff_x19 != 0) && (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar3 != 0)) {
      uVar10 = 0x3d23990;
      uVar12 = 0x3d23990;
      /*UnityEngine.GameObject$$set_isStatic*/ func_0x0322f07c(lVar3,1,0);
      unaff_x24 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(unaff_x19,uRam0000000003d53500);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = 0;
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x24,0);
      unaff_x25 = uVar10;
      if (iVar2 == 0) {
        if (unaff_x24 != 0) {
          unaff_x26 = 0x3d53000;
          /*UnityEngine.MeshFilter$$set_sharedMesh*/ func_0x0324765c(unaff_x24,uVar4,0);
          uVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(unaff_x19,uRam0000000003d53508);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar7 = 0;
          iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0);
          unaff_x25 = uVar12;
          if (iVar2 == 0) {
            if ((int)param_6 == 0) {
LAB_0151182c:
              unaff_x20 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(unaff_x19,uRam0000000003d53510);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar7 = 0;
              uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x20,0);
              if ((int)uVar5 == 0) {
                return uVar5;
              }
              lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
              if (lVar3 != 0) {
                unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
                uVar14 = *(undefined8 *)((long)register0x00000008 + -8);
                param_3 = *(long *)((long)register0x00000008 + -0x20);
                unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
                lVar11 = *(long *)((long)register0x00000008 + -0x30);
                param_6 = *(long *)((long)register0x00000008 + -0x28);
                unaff_x24 = *(long *)((long)register0x00000008 + -0x40);
                uVar4 = *(undefined8 *)((long)register0x00000008 + -0x38);
                unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
                uVar12 = *(undefined8 *)((long)register0x00000008 + -0x48);
                lVar9 = lRam0000000003d57710;
code_r0x0185d080:
                *(long *)((long)register0x00000008 + -0x30) = lVar11;
                *(long *)((long)register0x00000008 + -0x28) = param_6;
                *(long *)((long)register0x00000008 + -0x20) = param_3;
                *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
                *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                *(undefined8 *)((long)register0x00000008 + -8) = uVar14;
                if ((bRam0000000003eb64dd & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64dd = 1;
                }
                uVar10 = **(undefined8 **)(lVar9 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
                if (lVar3 != 0) {
                  uVar4 = /*UnityEngine.GameObject$$AddComponent*/ func_0x0322ed6c(lVar3,uVar14,0);
                  lVar11 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
                  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar11);
                  }
                  lVar11 = func_0x00f78adc(uVar4,lVar11);
                  lVar9 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
                  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar9);
                  }
                  if (lVar11 != 0) {
                    uVar5 = func_0x00f78adc(lVar11,lVar9);
                    if (uVar5 != 0) {
                      return uVar5;
                    }
                    func_0x00f78e5c(lVar11,lVar9);
                  }
                  return 0;
                }
                auVar16 = func_0x00f78af4();
                *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d25458;
                *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
                *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
                *(long *)((long)register0x00000008 + -0x48) = lVar9;
                *(undefined1 **)((long)register0x00000008 + -0x40) =
                     (undefined1 *)((long)register0x00000008 + -0x10);
                *(undefined **)((long)register0x00000008 + -0x38) =
                     &UnityEngine_GameObject__GetComponent_VirtualCamera_;
                if ((bRam0000000003eb64de & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64de = 1;
                }
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
                uVar10 = **(undefined8 **)(auVar16._8_8_ + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
                if (auVar16._0_8_ != 0) {
                  /*UnityEngine.GameObject$$GetComponentFastPath*/ func_0x0322e3dc(auVar16._0_8_,uVar14,
                                  (undefined1 *)((long)register0x00000008 + -0x68),0);
                  return *(ulong *)((long)register0x00000008 + -0x70);
                }
                auVar16 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0x80) =
                     (undefined1 *)((long)register0x00000008 + -0x40);
                *(undefined **)((long)register0x00000008 + -0x78) =
                     &UnityEngine_GameObject__GetComponentInChildren_TMP_Dropdown_DropdownItem_;
                if (auVar16._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar5 = (**(code **)**(undefined8 **)(auVar16._8_8_ + 0x30))(auVar16._0_8_,0);
                  return uVar5;
                }
                auVar16 = func_0x00f78af4();
                *(long *)((long)register0x00000008 + -0xc0) = unaff_x24;
                *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar4;
                *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3eb6000;
                *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3d25458;
                *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar10;
                *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
                *(undefined1 **)((long)register0x00000008 + -0x90) =
                     (undefined1 *)((long)register0x00000008 + -0x80);
                *(undefined **)((long)register0x00000008 + -0x88) =
                     &UnityEngine_GameObject__GetComponentInChildren_object_;
                lVar11 = lVar7;
                if ((bRam0000000003eb64df & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64df = 1;
                }
                uVar4 = **(undefined8 **)(lVar7 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
                if (auVar16._0_8_ != 0) {
                  lVar11 = /*UnityEngine.GameObject$$GetComponentInChildren*/ func_0x03227bec(auVar16._0_8_,uVar10,auVar16._8_8_,0);
                  lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
                  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar9);
                  }
                  if (lVar11 != 0) {
                    uVar5 = func_0x00f78adc(lVar11,lVar9);
                    if (uVar5 != 0) {
                      return uVar5;
                    }
                    func_0x00f78e5c(lVar11,lVar9);
                  }
                  return 0;
                }
                auVar17 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0xd0) =
                     (undefined1 *)((long)register0x00000008 + -0x90);
                *(undefined **)((long)register0x00000008 + -200) =
                     &UnityEngine_GameObject__GetComponentInParent_object_;
                if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar5 = (**(code **)**(undefined8 **)(auVar17._8_8_ + 0x30))(auVar17._0_8_,0);
                  return uVar5;
                }
                auVar17 = func_0x00f78af4();
                *(long *)((long)register0x00000008 + -0x110) = unaff_x24;
                *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d25458;
                *(undefined8 *)((long)register0x00000008 + -0x100) = uVar4;
                *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
                *(long *)((long)register0x00000008 + -0xf0) = auVar16._8_8_;
                *(long *)((long)register0x00000008 + -0xe8) = lVar7;
                *(undefined1 **)((long)register0x00000008 + -0xe0) =
                     (undefined1 *)((long)register0x00000008 + -0xd0);
                *(undefined **)((long)register0x00000008 + -0xd8) =
                     &UnityEngine_GameObject__GetComponentInParent_UITweenGroup_;
                uVar4 = 0x3d25458;
                lVar9 = lVar11;
                if ((bRam0000000003eb64e0 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e0 = 1;
                }
                uVar10 = **(undefined8 **)(lVar11 + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
                if (auVar17._0_8_ != 0) {
                  lVar9 = /*UnityEngine.GameObject$$GetComponentInParent*/ func_0x0322e528(auVar17._0_8_,uVar14,auVar17._8_8_,0);
                  lVar11 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
                  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
                    func_0x00fac028(lVar11);
                  }
                  if (lVar9 != 0) {
                    uVar5 = func_0x00f78adc(lVar9,lVar11);
                    if (uVar5 != 0) {
                      return uVar5;
                    }
                    func_0x00f78e5c(lVar9,lVar11);
                  }
                  return 0;
                }
                auVar18 = func_0x00f78af4();
                lVar7 = auVar18._0_8_;
                puVar1 = (undefined1 *)((long)register0x00000008 + -0x140);
                *(undefined8 *)((long)register0x00000008 + -0x140) = uVar10;
                *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
                *(long *)((long)register0x00000008 + -0x130) = auVar17._8_8_;
                *(long *)((long)register0x00000008 + -0x128) = lVar11;
                *(undefined1 **)((long)register0x00000008 + -0x120) =
                     (undefined1 *)((long)register0x00000008 + -0xe0);
                *(undefined **)((long)register0x00000008 + -0x118) =
                     &UnityEngine_GameObject__GetComponents_object_;
                puVar13 = (undefined1 *)((long)register0x00000008 + -0x120);
                uVar10 = 0x3d25458;
                if ((bRam0000000003eb64e1 & 1) == 0) {
                  func_0x00f78a20(0x3d25458);
                  bRam0000000003eb64e1 = 1;
                }
                uVar14 = **(undefined8 **)(auVar18._8_8_ + 0x30);
                if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
                if (lVar7 == 0) {
                  auVar16 = func_0x00f78af4();
                  lVar11 = auVar16._8_8_;
                  *(long *)((long)register0x00000008 + -0x180) = unaff_x24;
                  *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3d25458;
                  *(undefined8 *)((long)register0x00000008 + -0x170) = 0x3d25458;
                  *(undefined8 *)((long)register0x00000008 + -0x168) = uVar14;
                  *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
                  *(long *)((long)register0x00000008 + -0x158) = auVar18._8_8_;
                  *(undefined1 **)((long)register0x00000008 + -0x150) = puVar13;
                  *(undefined **)((long)register0x00000008 + -0x148) =
                       &UnityEngine_GameObject__GetComponents_Volume_;
                  lVar3 = lVar9;
                  if ((bRam0000000003eb64e2 & 1) == 0) {
                    func_0x00f78a20(0x3d25458);
                    bRam0000000003eb64e2 = 1;
                  }
                  uVar4 = **(undefined8 **)(lVar9 + 0x30);
                  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
                  if (auVar16._0_8_ == 0) {
                    auVar16 = func_0x00f78af4();
                    *(undefined1 **)((long)register0x00000008 + -400) =
                         (undefined1 *)((long)register0x00000008 + -0x150);
                    *(undefined **)((long)register0x00000008 + -0x188) =
                         &UnityEngine_GameObject__GetComponentsInChildren_RectTransform_;
                    if (auVar16._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar5 = (**(code **)**(undefined8 **)(auVar16._8_8_ + 0x30))(auVar16._0_8_,0);
                      return uVar5;
                    }
                    auVar17 = func_0x00f78af4();
                    lVar7 = auVar17._8_8_;
                    auVar18._8_8_ = lVar3;
                    auVar18._0_8_ = auVar17._0_8_;
                    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1d0);
                    *(long *)((long)register0x00000008 + -0x1d0) = unaff_x24;
                    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0x3eb6000;
                    *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x3d25458;
                    *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar4;
                    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
                    *(long *)((long)register0x00000008 + -0x1a8) = lVar11;
                    *(undefined1 **)((long)register0x00000008 + -0x1a0) =
                         (undefined1 *)((long)register0x00000008 + -400);
                    *(undefined **)((long)register0x00000008 + -0x198) =
                         &UnityEngine_GameObject__GetComponentsInChildren_object_;
                    puVar13 = (undefined1 *)((long)register0x00000008 + -0x1a0);
                    uVar4 = 0x3d25458;
                    lVar11 = lVar3;
                    if ((bRam0000000003eb64e3 & 1) == 0) {
                      func_0x00f78a20(0x3d25458);
                      bRam0000000003eb64e3 = 1;
                    }
                    uVar10 = **(undefined8 **)(lVar3 + 0x30);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
                    if (auVar17._0_8_ == 0) {
                      auVar16 = func_0x00f78af4();
                      *(undefined1 **)((long)register0x00000008 + -0x1e0) = puVar13;
                      *(undefined **)((long)register0x00000008 + -0x1d8) =
                           &UnityEngine_GameObject__GetComponentsInChildren_object_;
                      if (auVar16._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x30))
                                          (auVar16._0_8_,0,auVar16._8_8_);
                        return uVar5;
                      }
                      auVar16 = func_0x00f78af4();
                      *(long *)((long)register0x00000008 + -0x220) = unaff_x24;
                      *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3d25458;
                      *(undefined8 *)((long)register0x00000008 + -0x210) = uVar10;
                      *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
                      *(long *)((long)register0x00000008 + -0x200) = lVar7;
                      *(long *)((long)register0x00000008 + -0x1f8) = lVar3;
                      *(undefined1 **)((long)register0x00000008 + -0x1f0) =
                           (undefined1 *)((long)register0x00000008 + -0x1e0);
                      *(undefined **)((long)register0x00000008 + -0x1e8) =
                           &UnityEngine_GameObject__GetComponentsInChildren_Renderer_;
                      unaff_x24 = 0x3eb6000;
                      lVar9 = lVar11;
                      lVar3 = param_4;
                      if ((bRam0000000003eb64e4 & 1) == 0) {
                        func_0x00f78a20(0x3d25458);
                        bRam0000000003eb64e4 = 1;
                      }
                      uVar4 = **(undefined8 **)(param_4 + 0x30);
                      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
                      if (auVar16._0_8_ == 0) {
                        auVar17 = func_0x00f78af4();
                        *(undefined1 **)((long)register0x00000008 + -0x230) =
                             (undefined1 *)((long)register0x00000008 + -0x1f0);
                        *(undefined **)((long)register0x00000008 + -0x228) =
                             &UnityEngine_GameObject__GetComponentsInParent_object_;
                        if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0185d7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar5 = (**(code **)**(undefined8 **)(auVar17._8_8_ + 0x30))
                                            (auVar17._0_8_,0);
                          return uVar5;
                        }
                        auVar17 = func_0x00f78af4();
                        lVar7 = auVar17._8_8_;
                        auVar18._8_8_ = lVar9;
                        auVar18._0_8_ = auVar17._0_8_;
                        puVar1 = (undefined1 *)((long)register0x00000008 + -0x270);
                        *(undefined8 *)((long)register0x00000008 + -0x270) = 0x3eb6000;
                        *(undefined8 *)((long)register0x00000008 + -0x268) = 0x3d25458;
                        *(undefined8 *)((long)register0x00000008 + -0x260) = uVar4;
                        *(undefined8 *)((long)register0x00000008 + -600) = 0;
                        *(long *)((long)register0x00000008 + -0x250) = auVar16._8_8_;
                        *(long *)((long)register0x00000008 + -0x248) = lVar11;
                        *(undefined1 **)((long)register0x00000008 + -0x240) =
                             (undefined1 *)((long)register0x00000008 + -0x230);
                        *(undefined **)((long)register0x00000008 + -0x238) =
                             &UnityEngine_GameObject__GetComponentsInParent_object_;
                        puVar13 = (undefined1 *)((long)register0x00000008 + -0x240);
                        uVar4 = 0x3d25458;
                        lVar11 = lVar9;
                        if ((bRam0000000003eb64e5 & 1) == 0) {
                          func_0x00f78a20(0x3d25458);
                          bRam0000000003eb64e5 = 1;
                        }
                        uVar10 = **(undefined8 **)(lVar9 + 0x30);
                        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
                        if (auVar17._0_8_ == 0) {
                          auVar16 = func_0x00f78af4();
                          *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0x3eb6000;
                          *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0x3d25458;
                          *(undefined8 *)((long)register0x00000008 + -0x2a0) = uVar10;
                          *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
                          *(long *)((long)register0x00000008 + -0x290) = lVar7;
                          *(long *)((long)register0x00000008 + -0x288) = lVar9;
                          *(undefined1 **)((long)register0x00000008 + -0x280) = puVar13;
                          *(undefined **)((long)register0x00000008 + -0x278) =
                               &UnityEngine_GameObject__GetComponentsInParent_RectMask2D_;
                          lVar9 = lVar11;
                          if ((bRam0000000003eb64e6 & 1) == 0) {
                            func_0x00f78a20(0x3d25458);
                            bRam0000000003eb64e6 = 1;
                          }
                          uVar4 = **(undefined8 **)(lVar3 + 0x30);
                          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
                          if (auVar16._0_8_ == 0) {
                            auVar17 = func_0x00f78af4();
                            *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0x3eb6000;
                            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0x3d25458;
                            *(undefined8 *)((long)register0x00000008 + -0x2e0) = uVar4;
                            *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
                            *(long *)((long)register0x00000008 + -0x2d0) = auVar16._8_8_;
                            *(long *)((long)register0x00000008 + -0x2c8) = lVar11;
                            *(undefined1 **)((long)register0x00000008 + -0x2c0) =
                                 (undefined1 *)((long)register0x00000008 + -0x280);
                            *(undefined **)((long)register0x00000008 + -0x2b8) =
                                 &
                                 UnityEngine_GameObject__TryGetComponent_UniversalAdditionalLightData_
                            ;
                            if ((bRam0000000003eb64e7 & 1) == 0) {
                              func_0x00f78a20(0x3d25458);
                              bRam0000000003eb64e7 = 1;
                            }
                            *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
                            *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
                            uVar4 = **(undefined8 **)(lVar9 + 0x30);
                            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
                            if (auVar17._0_8_ == 0) {
                              auVar16 = func_0x00f78af4();
                              *(undefined8 *)((long)register0x00000008 + -0x330) = 0x3d25458;
                              *(undefined8 *)((long)register0x00000008 + -0x328) = uVar4;
                              *(undefined8 *)((long)register0x00000008 + -800) = 0;
                              *(long **)((long)register0x00000008 + -0x318) = auVar17._8_8_;
                              *(undefined1 **)((long)register0x00000008 + -0x310) =
                                   (undefined1 *)((long)register0x00000008 + -0x2c0);
                              *(undefined **)((long)register0x00000008 + -0x308) =
                                   &Core_Networking_HostUpdateHolder__Update_HostCarUpdate_;
                              uVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(auVar16._0_8_,6,0);
                              if ((int)uVar5 == 0) {
                                *extraout_x8 = 0;
                                extraout_x8[1] = 0;
                                extraout_x8[2] = 0;
                              }
                              else {
                                auVar17 = /*FlatBuffers.Table$$__union<HostCarUpdate>*/ func_0x018e3e90(auVar16._0_8_,uVar5,
                                                          **(undefined8 **)(auVar16._8_8_ + 0x30));
                                *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
                                *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
                                uVar5 = /*System.Nullable<HostCarUpdate>$$.ctor*/ func_0x02652304((undefined1 *)
                                                        ((long)register0x00000008 + -0x348),
                                                        auVar17._0_8_,auVar17._8_8_,
                                                        *(undefined8 *)
                                                         (*(long *)(auVar16._8_8_ + 0x30) + 0x10));
                                uVar4 = *(undefined8 *)((long)register0x00000008 + -0x348);
                                extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x340);
                                *extraout_x8 = uVar4;
                                extraout_x8[2] = *(undefined8 *)((long)register0x00000008 + -0x338);
                              }
                              return uVar5;
                            }
                            /*UnityEngine.GameObject$$TryGetComponentFastPath*/ func_0x0322e9a8(auVar17._0_8_,uVar10,
                                            (undefined1 *)((long)register0x00000008 + -0x2f8),0);
                            lVar11 = *(long *)((long)register0x00000008 + -0x300);
                            *auVar17._8_8_ = lVar11;
                            return (ulong)(lVar11 != 0);
                          }
                          uVar8 = 1;
                          uVar14 = 1;
                          puVar13 = *(undefined1 **)((long)register0x00000008 + -0x280);
                          puVar15 = *(undefined **)((long)register0x00000008 + -0x278);
                          lVar7 = *(long *)((long)register0x00000008 + -0x290);
                          auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x288);
                          auVar18._0_8_ = auVar16._0_8_;
                          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
                          auVar17._8_8_ = auVar16._8_8_;
                          auVar17._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x298);
                          puVar1 = (undefined1 *)((long)register0x00000008 + -0x270);
                          unaff_x24 = *(long *)((long)register0x00000008 + -0x2b0);
                          uVar4 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
                        }
                        else {
                          uVar8 = 1;
                          uVar14 = 1;
                          lVar11 = 0;
                          puVar15 = &UNK_0185d89c;
                        }
                      }
                      else {
                        uVar8 = 1;
                        uVar14 = 0;
                        puVar13 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
                        puVar15 = *(undefined **)((long)register0x00000008 + -0x1e8);
                        lVar7 = *(long *)((long)register0x00000008 + -0x200);
                        auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x1f8);
                        auVar18._0_8_ = auVar16._0_8_;
                        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x210);
                        auVar17._8_8_ = auVar16._8_8_;
                        auVar17._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x208);
                        puVar1 = (undefined1 *)((long)register0x00000008 + -0x1e0);
                        unaff_x24 = *(long *)((long)register0x00000008 + -0x220);
                        uVar4 = *(undefined8 *)((long)register0x00000008 + -0x218);
                      }
                    }
                    else {
                      uVar8 = 1;
                      uVar14 = 0;
                      lVar11 = 0;
                      puVar15 = &UNK_0185d69c;
                    }
                  }
                  else {
                    uVar8 = 0;
                    uVar14 = 0;
                    puVar13 = *(undefined1 **)((long)register0x00000008 + -0x150);
                    puVar15 = *(undefined **)((long)register0x00000008 + -0x148);
                    lVar7 = *(long *)((long)register0x00000008 + -0x160);
                    auVar18._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x158);
                    auVar18._0_8_ = auVar16._0_8_;
                    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x170);
                    auVar17._8_8_ = 1;
                    auVar17._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x168);
                    puVar1 = (undefined1 *)((long)register0x00000008 + -0x140);
                    unaff_x24 = *(long *)((long)register0x00000008 + -0x180);
                    uVar4 = *(undefined8 *)((long)register0x00000008 + -0x178);
                  }
                }
                else {
                  uVar8 = 0;
                  auVar17._8_8_ = 1;
                  auVar17._0_8_ = uVar14;
                  uVar14 = 0;
                  lVar11 = 0;
                  puVar15 = &UNK_0185d4d4;
                }
                *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar1 + -0x48) = uVar12;
                *(long *)(puVar1 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar1 + -0x38) = uVar4;
                *(undefined8 *)(puVar1 + -0x30) = uVar10;
                *(long *)(puVar1 + -0x28) = auVar17._0_8_;
                *(long *)(puVar1 + -0x20) = lVar7;
                *(long *)(puVar1 + -0x18) = auVar18._8_8_;
                *(undefined1 **)(puVar1 + -0x10) = puVar13;
                *(undefined **)(puVar1 + -8) = puVar15;
                if (pcRam0000000003ebf468 == (code *)0x0) {
                  pcRam0000000003ebf468 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x0322e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (*pcRam0000000003ebf468)
                                  (auVar18._0_8_,uVar6,1,uVar8,auVar17._8_8_,uVar14,lVar11);
                return uVar5;
              }
            }
            else {
              param_6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(unaff_x19,uRam0000000003d534f8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar7 = 0;
              iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_6,0);
              unaff_x21 = param_6;
              if (iVar2 == 0) {
                if (param_6 != 0) {
                  /*UnityEngine.MeshCollider$$set_sharedMesh*/ func_0x0329f108(param_6,param_3,0);
                  goto LAB_0151182c;
                }
              }
              else {
                lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
                if (lVar3 != 0) {
                  uVar14 = 0x1511804;
                  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
                  lVar9 = lRam0000000003d576f8;
                  goto code_r0x0185d080;
                }
              }
            }
          }
          else {
            lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
            if (lVar3 != 0) {
              uVar14 = 0x1511778;
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
              lVar9 = lRam0000000003d57708;
              uVar12 = uVar10;
              goto code_r0x0185d080;
            }
          }
        }
      }
      else {
        lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
        if (lVar3 != 0) {
          uVar14 = 0x15116fc;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
          lVar9 = lRam0000000003d57700;
          uVar12 = uVar10;
          goto code_r0x0185d080;
        }
      }
    }
    unaff_x30 = Atlas_Geometry_TrackEditorUtils__CreateOrUpdateChildRenderable;
    auVar16 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_3 = lVar7;
    param_6 = lVar9;
    unaff_x22 = lVar11;
    unaff_x23 = uVar4;
  } while( true );
}



// ============================================================
// RVA: 0x1511938 | Atlas.Geometry.TrackEditorUtils.SetMeshIsReadable
// ============================================================

void Atlas_Geometry_TrackEditorUtils__SetMeshIsReadable(void)

{
  return;
}



