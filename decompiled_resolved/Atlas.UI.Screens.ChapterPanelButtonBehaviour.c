// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ChapterPanelButtonBehaviour

// ============================================================
// RVA: 0x1540a70 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1540a78 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_BackgroundImage
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_BackgroundImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1540a80 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_HighlightImage
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_HighlightImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1540a88 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_OverlayImage
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_OverlayImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1540a90 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_IpImage
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_IpImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1540a98 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_FlagsBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_FlagsBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1540aa0 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_CompletedGameObjectRoot
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_CompletedGameObjectRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1540aa8 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_ComingSoonGameObject
// ============================================================

undefined8 Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_ComingSoonGameObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1540ab0 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.get_GraphicsToTransitionToColour
// ============================================================

undefined8
Atlas_UI_Screens_ChapterPanelButtonBehaviour__get_GraphicsToTransitionToColour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1540ab8 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x01540b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01540c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01540b70) */
/* WARNING: Removing unreachable block (ram,0x01540b78) */
/* WARNING: Removing unreachable block (ram,0x01540b84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_ChapterPanelButtonBehaviour__Set
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
               long param_10,undefined8 param_11,uint param_12)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int extraout_w1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined8 unaff_x22;
  undefined8 uVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined8 unaff_x30;
  undefined *puVar13;
  float extraout_s0;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  ulong extraout_d0;
  float fVar17;
  ulong unaff_d8;
  ulong unaff_d9;
  
  puVar12 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f3b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f3b = 1;
  }
  if (*(long *)(param_5 + 0x40) != 0) {
    /*Atlas.UI.UIFlagsBehaviour$$SetVisible*/ func_0x0151ab74(*(long *)(param_5 + 0x40),1,0);
    if (*(long *)(param_5 + 0x48) != 0) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_5 + 0x48),(int)param_7 <= (int)param_6,0);
      if (*(long *)(param_5 + 0x68) != 0) {
        param_12 = (uint)param_11 ^ 1 | param_12;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_5 + 0x68),param_12,0);
        if (param_12 != 0) {
          uVar7 = 0x3f800000;
          param_2 = 0.0;
          puVar13 = (undefined *)0x1540b70;
          puVar2 = &stack0xffffffffffffffa0;
          lVar9 = param_5;
          goto code_r0x01540cd4;
        }
        if ((int)param_7 <= (int)param_6) {
          plVar5 = *(long **)(param_5 + 0x50);
          if (plVar5 == (long *)0x0) goto LAB_01540cd0;
          param_3 = *(undefined4 *)(param_5 + 0x60);
          param_4 = *(undefined4 *)(param_5 + 100);
          param_2 = *(float *)(param_5 + 0x5c);
          (**(code **)(*plVar5 + 0x2a8))
                    (*(undefined4 *)(param_5 + 0x58),plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
        }
        if (*(long *)(param_5 + 0x40) != 0) {
          /*Atlas.UI.UIFlagsBehaviour$$Set*/ func_0x0151aba8(*(long *)(param_5 + 0x40),param_6,param_7,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_8,0,0);
          if (iVar4 != 0) {
            if (*(long *)(param_5 + 0x20) == 0) goto LAB_01540cd0;
            /*Core.UI2.UIIrregularElement$$set_sprite*/ func_0x02f83e84(*(long *)(param_5 + 0x20),param_8,0);
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_9,0,0);
          if ((iVar4 == 0) || ((uint)param_11 == 0)) {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_10,0,0);
            if (iVar4 == 0) {
              return;
            }
            plVar5 = *(long **)(param_5 + 0x38);
            lVar9 = param_10;
            if (plVar5 != (long *)0x0) goto code_r0x032c2184;
          }
          else {
            plVar5 = *(long **)(param_5 + 0x30);
            if (plVar5 != (long *)0x0) {
              unaff_x30 = 0x1540c5c;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
              lVar9 = param_9;
              unaff_x19 = param_10;
              unaff_x20 = param_5;
              unaff_x21 = param_9;
              unaff_x22 = param_11;
              unaff_x23 = param_8;
              unaff_x24 = param_7;
              unaff_x29 = puVar12;
code_r0x032c2184:
              *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
              *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
              *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
              *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
              if ((bRam0000000003ec2cc2 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar9,0);
                bRam0000000003ec2cc2 = 1;
              }
              *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
              lVar10 = plVar5[0x1a];
              if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
              if (iVar4 == 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
                if (iVar4 == 0) {
                  return;
                }
                if (lVar9 != 0) {
                  uVar14 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar9,0);
                  *(undefined4 *)((long)register0x00000008 + -0x60) = uVar14;
                  *(float *)((long)register0x00000008 + -0x5c) = param_2;
                  *(undefined4 *)((long)register0x00000008 + -0x58) = param_3;
                  *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
                  fVar15 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0
                                                 );
                  fVar17 = param_2;
                  fVar16 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
                  *(bool *)(plVar5 + 6) =
                       (fVar15 - fVar16) * (fVar15 - fVar16) +
                       (param_2 - fVar17) * (param_2 - fVar17) < _UNK_033f8490;
                  lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar9,0);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar11 = 0;
code_r0x032c2400:
                  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,uVar11,0);
                  *(undefined1 *)((long)plVar5 + 0x31) = uVar3;
                  plVar5[0x1a] = lVar9;
                  (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
                  puVar13 = &UNK_032c242c;
                  plVar8 = plVar5;
                  goto code_r0x032c244c;
                }
              }
              else {
                lVar10 = plVar5[0x1a];
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,lVar9,0);
                if (iVar4 == 0) {
                  return;
                }
                if (plVar5[0x1a] != 0) {
                  uVar14 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar5[0x1a],0);
                  *(undefined4 *)((long)register0x00000008 + -0x60) = uVar14;
                  *(float *)((long)register0x00000008 + -0x5c) = param_2;
                  *(undefined4 *)((long)register0x00000008 + -0x58) = param_3;
                  *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
                  fVar15 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0
                                                 );
                  fVar17 = param_2;
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
                  if ((uVar7 & 1) == 0) {
                    fVar16 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
                  }
                  else {
                    if (lVar9 == 0) goto code_r0x032c2448;
                    uVar14 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar9,0);
                    *(undefined4 *)((long)register0x00000008 + -0x60) = uVar14;
                    *(float *)((long)register0x00000008 + -0x5c) = fVar17;
                    *(undefined4 *)((long)register0x00000008 + -0x58) = param_3;
                    *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
                    fVar16 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60)
                                                    ,0);
                  }
                  *(bool *)(plVar5 + 6) = fVar15 == fVar16 && param_2 == fVar17;
                  if (plVar5[0x1a] != 0) {
                    lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar5[0x1a],0);
                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
                    uVar11 = 0;
                    if (iVar4 != 0) {
                      unaff_x22 = uVar11;
                      if (lVar9 == 0) goto code_r0x032c2448;
                      uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar9,0);
                    }
                    unaff_x22 = uVar11;
                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    goto code_r0x032c2400;
                  }
                }
              }
code_r0x032c2448:
              puVar13 = &UnityEngine_UI_Image__TrackSprite;
              plVar8 = (long *)func_0x00f78af4();
code_r0x032c244c:
              *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
              *(long *)((long)register0x00000008 + -0x88) = lVar10;
              *(long *)((long)register0x00000008 + -0x80) = lVar9;
              *(long **)((long)register0x00000008 + -0x78) = plVar5;
              *(undefined1 **)((long)register0x00000008 + -0x70) =
                   (undefined1 *)((long)register0x00000008 + -0x10);
              *(undefined **)((long)register0x00000008 + -0x68) = puVar13;
              if ((bRam0000000003ec2cd5 & 1) == 0) {
                func_0x00f78a20(0x3d226e8);
                func_0x00f78a20(0x3d23990);
                bRam0000000003ec2cd5 = 1;
              }
              uVar11 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
              if (iVar4 != 0) {
                lVar9 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar8);
                if (lVar9 == 0) {
                  lVar9 = func_0x00f78af4();
                  *(undefined2 *)(lVar9 + 0x30) = 0;
                  return;
                }
                uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar9,0);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
                if (iVar4 != 0) {
                  if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar8);
                  *(undefined1 *)((long)plVar8 + 0xfc) = 1;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_01540cd0:
  puVar13 = &Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToFromGreyscale;
  lVar9 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffa0;
  uVar7 = extraout_d0;
code_r0x01540cd4:
  do {
    lVar10 = lVar9;
    *(ulong *)(puVar2 + -0x50) = unaff_d9;
    *(ulong *)(puVar2 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x40) = param_7;
    *(undefined8 *)(puVar2 + -0x38) = param_8;
    *(undefined8 *)(puVar2 + -0x30) = param_11;
    *(long *)(puVar2 + -0x28) = param_9;
    *(long *)(puVar2 + -0x20) = param_5;
    *(long *)(puVar2 + -0x18) = param_10;
    *(undefined1 **)(puVar2 + -0x10) = puVar12;
    *(undefined **)(puVar2 + -8) = puVar13;
    puVar12 = puVar2 + -0x10;
    unaff_d8 = (ulong)(uint)param_2;
    unaff_d9 = uVar7 & 0xffffffff;
    param_9 = 0x3d23990;
    if ((bRam0000000003eb4f3c & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d77380);
      bRam0000000003eb4f3c = 1;
    }
    *(undefined8 *)(puVar2 + -0x70) = 0;
    *(undefined8 *)(puVar2 + -0x68) = 0;
    *(undefined8 *)(puVar2 + -0x60) = 0;
    *(undefined4 *)(puVar2 + -0x78) = 0;
    param_5 = *(long *)(lVar10 + 0x80);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_7 = 0x3d3b180;
    param_8 = 0x3d329d0;
    param_11 = 0x3d329c8;
    iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0,0);
    if (iVar4 != 0) {
      param_5 = *(long *)(lVar10 + 0x78);
      param_9 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(param_9,param_5,0);
      *(long *)(lVar10 + 0x80) = param_9;
      if (*(long *)(lVar10 + 0x70) == 0) goto code_r0x01540f30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x98,*(long *)(lVar10 + 0x70),uRam0000000003d3b180);
      *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x90);
      *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x98);
      *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x88);
      while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x70,uRam0000000003d329d0), (uVar6 & 1) != 0) {
        plVar5 = *(long **)(puVar2 + -0x60);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01540f2c;
        }
        (**(code **)(*plVar5 + 0x348))
                  (plVar5,*(undefined8 *)(lVar10 + 0x80),*(undefined8 *)(*plVar5 + 0x350));
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x70,uRam0000000003d329c8);
      *(undefined4 *)(puVar2 + -0x78) = 0;
    }
    do {
      if (*(long *)(lVar10 + 0x70) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x98,*(long *)(lVar10 + 0x70),uRam0000000003d3b180);
        *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x90);
        *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x98);
        *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x88);
        while( true ) {
          uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x70,uRam0000000003d329d0);
          if ((uVar6 & 1) == 0) {
            *(undefined4 *)(puVar2 + -0x80) = 0xac;
            *(int *)(puVar2 + -0x78) = *(int *)(puVar2 + -0x78) + 1;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x70,uRam0000000003d329c8);
            return;
          }
          plVar5 = *(long **)(puVar2 + -0x60);
          if (plVar5 == (long *)0x0) break;
          uVar11 = (**(code **)(*plVar5 + 0x358))(plVar5,*(undefined8 *)(*plVar5 + 0x360));
          *(undefined8 *)(puVar2 + -0x98) = 0;
          *(undefined8 *)(puVar2 + -0x90) = 0;
          /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(uVar7 & 0xffffffff,0x3f800000,0x3f800000,0x3f800000,puVar2 + -0x98,0);
          /*DG.Tweening.ShortcutExtensions$$DOVector*/ func_0x016b1f34(*(undefined4 *)(puVar2 + -0x98),*(undefined4 *)(puVar2 + -0x94),
                          *(undefined4 *)(puVar2 + -0x90),*(undefined4 *)(puVar2 + -0x8c),param_2,
                          uVar11,/*STR('_Params')*/ uRam0000000003d77380,0);
        }
        func_0x00f78af4();
code_r0x01540f2c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1540f30);
        (*pcVar1)();
      }
code_r0x01540f30:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01540fa8;
      plVar5 = (long *)___cxa_begin_catch();
      param_5 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x70,uRam0000000003d329c8);
    } while (param_5 == 0);
    func_0x00f78ac0(param_5,0);
code_r0x01540fa8:
    puVar13 = &Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToColour;
    lVar9 = __Unwind_Resume();
    uVar7 = 0;
    puVar2 = puVar2 + -0xa0;
    param_10 = lVar10;
    param_2 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x1540cd4 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.TransitionToFromGreyscale
// ============================================================

void Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToFromGreyscale
               (uint param_1,uint param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  uint extraout_s0;
  ulong unaff_d8;
  ulong unaff_d9;
  
  do {
    lVar3 = param_3;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_d8 = (ulong)param_2;
    unaff_d9 = (ulong)param_1;
    unaff_x21 = 0x3d23990;
    if ((bRam0000000003eb4f3c & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d77380);
      bRam0000000003eb4f3c = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x78) = 0;
    unaff_x20 = *(long *)(lVar3 + 0x80);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d3b180;
    unaff_x23 = 0x3d329d0;
    unaff_x22 = 0x3d329c8;
    iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x20,0,0);
    if (iVar2 != 0) {
      unaff_x20 = *(long *)(lVar3 + 0x78);
      unaff_x21 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x21,unaff_x20,0);
      *(undefined8 *)(lVar3 + 0x80) = unaff_x21;
      if (*(long *)(lVar3 + 0x70) == 0) goto LAB_01540f30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x98),*(long *)(lVar3 + 0x70),
                      uRam0000000003d3b180);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x70),
                                     uRam0000000003d329d0), (uVar4 & 1) != 0) {
        plVar5 = *(long **)((long)register0x00000008 + -0x60);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01540f2c;
        }
        (**(code **)(*plVar5 + 0x348))
                  (plVar5,*(undefined8 *)(lVar3 + 0x80),*(undefined8 *)(*plVar5 + 0x350));
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x70),uRam0000000003d329c8);
      *(undefined4 *)((long)register0x00000008 + -0x78) = 0;
    }
    do {
      if (*(long *)(lVar3 + 0x70) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x98),*(long *)(lVar3 + 0x70),
                        uRam0000000003d3b180);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        while( true ) {
          uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x70),
                                  uRam0000000003d329d0);
          if ((uVar4 & 1) == 0) {
            *(undefined4 *)((long)register0x00000008 + -0x80) = 0xac;
            *(int *)((long)register0x00000008 + -0x78) =
                 *(int *)((long)register0x00000008 + -0x78) + 1;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x70),uRam0000000003d329c8);
            return;
          }
          plVar5 = *(long **)((long)register0x00000008 + -0x60);
          if (plVar5 == (long *)0x0) break;
          uVar6 = (**(code **)(*plVar5 + 0x358))(plVar5,*(undefined8 *)(*plVar5 + 0x360));
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(param_1,0x3f800000,0x3f800000,0x3f800000,
                          (undefined1 *)((long)register0x00000008 + -0x98),0);
          /*DG.Tweening.ShortcutExtensions$$DOVector*/ func_0x016b1f34(*(undefined4 *)((long)register0x00000008 + -0x98),
                          *(undefined4 *)((long)register0x00000008 + -0x94),
                          *(undefined4 *)((long)register0x00000008 + -0x90),
                          *(undefined4 *)((long)register0x00000008 + -0x8c),param_2,uVar6,
                          /*STR('_Params')*/ uRam0000000003d77380,0);
        }
        func_0x00f78af4();
code_r0x01540f2c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1540f30);
        (*pcVar1)();
      }
LAB_01540f30:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01540fa8;
      plVar5 = (long *)___cxa_begin_catch();
      unaff_x20 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x70),uRam0000000003d329c8);
    } while (unaff_x20 == 0);
    func_0x00f78ac0(unaff_x20,0);
code_r0x01540fa8:
    unaff_x30 = &Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToColour;
    param_3 = __Unwind_Resume();
    param_1 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = lVar3;
    param_2 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x1540fac | Atlas.UI.Screens.ChapterPanelButtonBehaviour.TransitionToColour
// ============================================================

void Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToColour(ulong param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w1;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong extraout_d0;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  do {
    lVar6 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_d8 = param_1 & 0xffffffff;
    unaff_d9 = 0;
    unaff_x21 = 0x3d23990;
    if ((bRam0000000003eb4f3c & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d77380);
      bRam0000000003eb4f3c = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x78) = 0;
    unaff_x20 = *(long *)(lVar6 + 0x80);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d3b180;
    unaff_x23 = 0x3d329d0;
    unaff_x22 = 0x3d329c8;
    iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x20,0,0);
    if (iVar2 != 0) {
      unaff_x20 = *(long *)(lVar6 + 0x78);
      unaff_x21 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x21,unaff_x20,0);
      *(undefined8 *)(lVar6 + 0x80) = unaff_x21;
      if (*(long *)(lVar6 + 0x70) == 0) goto LAB_01540f30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x98),*(long *)(lVar6 + 0x70),
                      uRam0000000003d3b180);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x70),
                                     uRam0000000003d329d0), (uVar3 & 1) != 0) {
        plVar4 = *(long **)((long)register0x00000008 + -0x60);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01540f2c;
        }
        (**(code **)(*plVar4 + 0x348))
                  (plVar4,*(undefined8 *)(lVar6 + 0x80),*(undefined8 *)(*plVar4 + 0x350));
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x70),uRam0000000003d329c8);
      *(undefined4 *)((long)register0x00000008 + -0x78) = 0;
    }
    do {
      if (*(long *)(lVar6 + 0x70) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x98),*(long *)(lVar6 + 0x70),
                        uRam0000000003d3b180);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        while( true ) {
          uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x70),
                                  uRam0000000003d329d0);
          if ((uVar3 & 1) == 0) {
            *(undefined4 *)((long)register0x00000008 + -0x80) = 0xac;
            *(int *)((long)register0x00000008 + -0x78) =
                 *(int *)((long)register0x00000008 + -0x78) + 1;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x70),uRam0000000003d329c8);
            return;
          }
          plVar4 = *(long **)((long)register0x00000008 + -0x60);
          if (plVar4 == (long *)0x0) break;
          uVar5 = (**(code **)(*plVar4 + 0x358))(plVar4,*(undefined8 *)(*plVar4 + 0x360));
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,0x3f800000,0x3f800000,
                          (undefined1 *)((long)register0x00000008 + -0x98),0);
          /*DG.Tweening.ShortcutExtensions$$DOVector*/ func_0x016b1f34(*(undefined4 *)((long)register0x00000008 + -0x98),
                          *(undefined4 *)((long)register0x00000008 + -0x94),
                          *(undefined4 *)((long)register0x00000008 + -0x90),
                          *(undefined4 *)((long)register0x00000008 + -0x8c),(int)param_1,uVar5,
                          /*STR('_Params')*/ uRam0000000003d77380,0);
        }
        func_0x00f78af4();
code_r0x01540f2c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1540f30);
        (*pcVar1)();
      }
LAB_01540f30:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01540fa8;
      plVar4 = (long *)___cxa_begin_catch();
      unaff_x20 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x70),uRam0000000003d329c8);
    } while (unaff_x20 == 0);
    func_0x00f78ac0(unaff_x20,0);
code_r0x01540fa8:
    unaff_x30 = Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToColour;
    param_2 = __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = lVar6;
    param_1 = extraout_d0;
  } while( true );
}



// ============================================================
// RVA: 0x1540fb8 | Atlas.UI.Screens.ChapterPanelButtonBehaviour.TransitionToGreyscale
// ============================================================

void Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToGreyscale(uint param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  int extraout_w1;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint extraout_s0;
  uint uVar8;
  ulong uVar9;
  ulong unaff_d8;
  ulong unaff_d9;
  
  uVar8 = 0x3f800000;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    lVar4 = param_2;
    uVar9 = (ulong)uVar8;
    *(ulong *)(puVar2 + -0x50) = unaff_d9;
    *(ulong *)(puVar2 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_d8 = (ulong)param_1;
    unaff_x21 = 0x3d23990;
    if ((bRam0000000003eb4f3c & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d77380);
      bRam0000000003eb4f3c = 1;
    }
    *(undefined8 *)(puVar2 + -0x70) = 0;
    *(undefined8 *)(puVar2 + -0x68) = 0;
    *(undefined8 *)(puVar2 + -0x60) = 0;
    *(undefined4 *)(puVar2 + -0x78) = 0;
    unaff_x20 = *(long *)(lVar4 + 0x80);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = 0x3d3b180;
    unaff_x23 = 0x3d329d0;
    unaff_x22 = 0x3d329c8;
    iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x20,0,0);
    if (iVar3 != 0) {
      unaff_x20 = *(long *)(lVar4 + 0x78);
      unaff_x21 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x21,unaff_x20,0);
      *(undefined8 *)(lVar4 + 0x80) = unaff_x21;
      if (*(long *)(lVar4 + 0x70) == 0) goto LAB_01540f30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x98,*(long *)(lVar4 + 0x70),uRam0000000003d3b180);
      *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x90);
      *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x98);
      *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x88);
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x70,uRam0000000003d329d0), (uVar5 & 1) != 0) {
        plVar6 = *(long **)(puVar2 + -0x60);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01540f2c;
        }
        (**(code **)(*plVar6 + 0x348))
                  (plVar6,*(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(*plVar6 + 0x350));
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x70,uRam0000000003d329c8);
      *(undefined4 *)(puVar2 + -0x78) = 0;
    }
    do {
      if (*(long *)(lVar4 + 0x70) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x98,*(long *)(lVar4 + 0x70),uRam0000000003d3b180);
        *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x90);
        *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x98);
        *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x88);
        while( true ) {
          uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x70,uRam0000000003d329d0);
          if ((uVar5 & 1) == 0) {
            *(undefined4 *)(puVar2 + -0x80) = 0xac;
            *(int *)(puVar2 + -0x78) = *(int *)(puVar2 + -0x78) + 1;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x70,uRam0000000003d329c8);
            return;
          }
          plVar6 = *(long **)(puVar2 + -0x60);
          if (plVar6 == (long *)0x0) break;
          uVar7 = (**(code **)(*plVar6 + 0x358))(plVar6,*(undefined8 *)(*plVar6 + 0x360));
          *(undefined8 *)(puVar2 + -0x98) = 0;
          *(undefined8 *)(puVar2 + -0x90) = 0;
          /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(uVar9,0x3f800000,0x3f800000,0x3f800000,puVar2 + -0x98,0);
          /*DG.Tweening.ShortcutExtensions$$DOVector*/ func_0x016b1f34(*(undefined4 *)(puVar2 + -0x98),*(undefined4 *)(puVar2 + -0x94),
                          *(undefined4 *)(puVar2 + -0x90),*(undefined4 *)(puVar2 + -0x8c),param_1,
                          uVar7,/*STR('_Params')*/ uRam0000000003d77380,0);
        }
        func_0x00f78af4();
code_r0x01540f2c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1540f30);
        (*pcVar1)();
      }
LAB_01540f30:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01540fa8;
      plVar6 = (long *)___cxa_begin_catch();
      unaff_x20 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x70,uRam0000000003d329c8);
    } while (unaff_x20 == 0);
    func_0x00f78ac0(unaff_x20,0);
code_r0x01540fa8:
    unaff_x30 = Atlas_UI_Screens_ChapterPanelButtonBehaviour__TransitionToColour;
    param_2 = __Unwind_Resume();
    uVar8 = 0;
    puVar2 = puVar2 + -0xa0;
    unaff_x19 = lVar4;
    param_1 = extraout_s0;
    unaff_d9 = uVar9;
  } while( true );
}



// ============================================================
// RVA: 0x1540fc4 | Atlas.UI.Screens.ChapterPanelButtonBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_ChapterPanelButtonBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4f3d & 1) == 0) {
    func_0x00f78a20(0x3d3b178);
    func_0x00f78a20(0x3d1dba0);
    bRam0000000003eb4f3d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<MaskableGraphic>_TypeInfo*/ uRam0000000003d1dba0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b178);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



