// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UILobbyInfoPanelBehaviour

// ============================================================
// RVA: 0x151c484 | Atlas.UI.UILobbyInfoPanelBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151b2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0151cb4c) */
/* WARNING: Removing unreachable block (ram,0x0151cb54) */
/* WARNING: Removing unreachable block (ram,0x0151cbac) */
/* WARNING: Removing unreachable block (ram,0x0151cbb0) */
/* WARNING: Removing unreachable block (ram,0x0151cb5c) */
/* WARNING: Removing unreachable block (ram,0x0151cb60) */
/* WARNING: Removing unreachable block (ram,0x0151cbb4) */
/* WARNING: Removing unreachable block (ram,0x0151cbc0) */
/* WARNING: Removing unreachable block (ram,0x0151cc54) */
/* WARNING: Removing unreachable block (ram,0x0151cc70) */
/* WARNING: Removing unreachable block (ram,0x0151cc88) */
/* WARNING: Removing unreachable block (ram,0x0151cc90) */
/* WARNING: Removing unreachable block (ram,0x0151cc94) */
/* WARNING: Removing unreachable block (ram,0x0151ccbc) */
/* WARNING: Removing unreachable block (ram,0x0151cca8) */
/* WARNING: Removing unreachable block (ram,0x0151ccb0) */
/* WARNING: Removing unreachable block (ram,0x0151b2b0) */
/* WARNING: Removing unreachable block (ram,0x0151b2c0) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILobbyInfoPanelBehaviour__Init
                (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                ulong param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long extraout_x1;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  ulong uVar19;
  undefined8 unaff_x23;
  undefined8 uVar20;
  undefined8 unaff_x24;
  undefined8 uVar21;
  undefined8 unaff_x25;
  undefined8 uVar22;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  ulong extraout_d0;
  double dVar30;
  double dVar31;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  puVar23 = &stack0xfffffffffffffff0;
  uVar17 = 0x3eb4000;
  if ((bRam0000000003eb4df9 & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d2a430);
    func_0x00f78a20(0x3d1b620);
    func_0x00f78a20(0x3d5f718);
    func_0x00f78a20(0x3d5f720);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4df9 = 1;
  }
  *(undefined8 *)(param_5 + 0x68) = param_6;
  lVar18 = unaff_x22;
  uVar20 = unaff_x23;
  uVar21 = unaff_x24;
  uVar22 = unaff_x25;
  if (*(long *)(param_5 + 0x50) == 0) {
LAB_0151c66c:
    func_0x00f78af4();
    uVar10 = uVar20;
LAB_0151c670:
    unaff_x25 = uVar22;
    unaff_x24 = uVar21;
    unaff_x23 = uVar10;
    unaff_x22 = lVar18;
    unaff_x21 = uVar17;
    unaff_x20 = param_6;
    unaff_x30 = &Atlas_UI_UILobbyInfoPanelBehaviour__SetIcon;
    auVar32 = func_0x00f78e5c();
    uVar13 = auVar32._8_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    uVar11 = auVar32._0_8_;
    uVar10 = param_7;
    unaff_x19 = param_5;
    unaff_x29 = puVar23;
  }
  else {
    Atlas_UI_UIGroupCodeBehaviour__Init(*(long *)(param_5 + 0x50),param_6);
    if ((*(long *)(param_5 + 0x68) == 0) ||
       (lVar18 = *(long *)(*(long *)(param_5 + 0x68) + 200), lVar18 == 0)) goto LAB_0151c66c;
    uVar10 = 0x3d1b620;
    uVar21 = 0x3d5f000;
    uVar22 = 0x3d2a000;
    param_6 = *(undefined8 *)(lVar18 + 0x20);
    uVar17 = func_0x00f78aec(/*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620);
    /*System.Action<RESULT, string>$$.ctor*/ func_0x01e6ca08(uVar17,param_5,uRam0000000003d5f720,uRam0000000003d2a430);
    param_7 = 0;
    plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(param_6,uVar17);
    if ((plVar7 != (long *)0x0) && (*plVar7 != /*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620)) goto LAB_0151c670;
    *(long **)(lVar18 + 0x20) = plVar7;
    uVar20 = uVar10;
    if (((*(long *)(param_5 + 0x68) == 0) ||
        (lVar14 = *(long *)(*(long *)(param_5 + 0x68) + 0x28), lVar14 == 0)) ||
       (lVar18 = *(long *)(lVar14 + 0x30), uVar20 = 0x3d1b620, lVar18 == 0)) goto LAB_0151c66c;
    uVar20 = 0x3d1b548;
    uVar21 = 0x3d5f000;
    uVar22 = 0x3d2a000;
    param_6 = *(undefined8 *)(lVar18 + 0x58);
    uVar17 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
    /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar17,param_5,uRam0000000003d5f718,uRam0000000003d2a290);
    param_7 = 0;
    plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(param_6,uVar17);
    if ((plVar7 != (long *)0x0) && (uVar10 = 0x3d1b548, *plVar7 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548))
    goto LAB_0151c670;
    *(long **)(lVar18 + 0x58) = plVar7;
    lVar14 = *(long *)(param_5 + 0x68);
    if ((lVar14 == 0) ||
       ((*(long *)(lVar14 + 0x30) == 0 ||
        (lVar15 = *(long *)(*(long *)(lVar14 + 0x30) + 0x28), lVar15 == 0)))) goto LAB_0151c66c;
    uVar5 = *(uint *)(lVar15 + 0x9c);
    uVar13 = (ulong)uVar5;
    uVar11 = param_5;
    uVar10 = /*STR('')*/ uRam0000000003d65d08;
    if (uVar5 == 0) {
      if (*(long *)(lVar14 + 200) == 0) goto LAB_0151c66c;
      lVar18 = *(long *)(*(long *)(lVar14 + 200) + 0xb0);
      if (lVar18 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (ulong)*(uint *)(lVar18 + 0x10);
      }
    }
  }
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar19 = 0x3eb4000;
  uVar8 = uVar11;
  if ((bRam0000000003eb4dfc & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21b30);
    func_0x00f78a20(0x3d57288);
    uVar8 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dfc = 1;
  }
  if ((int)uVar13 == 1) {
    uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar10,0);
    if ((uVar8 & 1) == 0) {
      if ((*(long *)(uVar11 + 0x68) != 0) &&
         (lVar18 = *(long *)(*(long *)(uVar11 + 0x68) + 0x20), lVar18 != 0)) {
        uVar13 = *(ulong *)(lVar18 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar10,0);
        if (uVar13 != 0) {
          uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(uVar13,uVar17,uRam0000000003d57288);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
          if (*(long *)(uVar11 + 0x68) != 0) {
            uVar19 = *(ulong *)(*(long *)(uVar11 + 0x68) + 0x88);
            uVar13 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
            Atlas_UI_GameContextMetagameData___ctor(uVar13,uVar10,uVar19,0,0);
            plVar7 = *(long **)(uVar11 + 0x30);
            if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151c80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (**(code **)(*plVar7 + 0x188))(plVar7,uVar13,*(undefined8 *)(*plVar7 + 400));
              return uVar11;
            }
          }
        }
      }
    }
    else {
      plVar7 = *(long **)(uVar11 + 0x38);
      if (plVar7 != (long *)0x0) {
        lVar18 = *(long *)(uVar11 + 0x48);
        goto code_r0x0151c710;
      }
    }
  }
  else {
    if ((int)uVar13 != 2) {
      return uVar8;
    }
    plVar7 = *(long **)(uVar11 + 0x38);
    if (plVar7 != (long *)0x0) {
      lVar18 = *(long *)(uVar11 + 0x40);
code_r0x0151c710:
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)((long)register0x00000008 + -0x28);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if ((bRam0000000003ec2cc2 & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar18,0);
        bRam0000000003ec2cc2 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      lVar14 = plVar7[0x1a];
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
      if (iVar6 == 0) {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        if (lVar18 != 0) {
          uVar26 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar18,0);
          *(undefined4 *)((long)register0x00000008 + -0x60) = uVar26;
          *(float *)((long)register0x00000008 + -0x5c) = param_2;
          *(float *)((long)register0x00000008 + -0x58) = param_3;
          *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
          fVar27 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0);
          fVar25 = param_2;
          fVar28 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(bool *)(plVar7 + 6) =
               (fVar27 - fVar28) * (fVar27 - fVar28) + (param_2 - fVar25) * (param_2 - fVar25) <
               _UNK_033f8490;
          lVar14 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar18,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar20 = 0;
code_r0x032c2400:
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar14,uVar20,0);
          *(undefined1 *)((long)plVar7 + 0x31) = uVar4;
          plVar7[0x1a] = lVar18;
          (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
          puVar24 = &UNK_032c242c;
          plVar12 = plVar7;
          goto code_r0x032c244c;
        }
      }
      else {
        lVar14 = plVar7[0x1a];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,lVar18,0);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        if (plVar7[0x1a] != 0) {
          uVar26 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar7[0x1a],0);
          *(undefined4 *)((long)register0x00000008 + -0x60) = uVar26;
          *(float *)((long)register0x00000008 + -0x5c) = param_2;
          *(float *)((long)register0x00000008 + -0x58) = param_3;
          *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
          fVar27 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0);
          fVar25 = param_2;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar18,0);
          if ((uVar11 & 1) == 0) {
            fVar28 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          }
          else {
            if (lVar18 == 0) goto code_r0x032c2448;
            uVar26 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar18,0);
            *(undefined4 *)((long)register0x00000008 + -0x60) = uVar26;
            *(float *)((long)register0x00000008 + -0x5c) = fVar25;
            *(float *)((long)register0x00000008 + -0x58) = param_3;
            *(undefined4 *)((long)register0x00000008 + -0x54) = param_4;
            fVar28 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)register0x00000008 + -0x60),0);
          }
          *(bool *)(plVar7 + 6) = fVar27 == fVar28 && param_2 == fVar25;
          if (plVar7[0x1a] != 0) {
            lVar14 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar7[0x1a],0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar18,0);
            uVar20 = 0;
            if (iVar6 != 0) {
              uVar17 = uVar20;
              if (lVar18 == 0) goto code_r0x032c2448;
              uVar20 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar18,0);
            }
            uVar17 = uVar20;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            goto code_r0x032c2400;
          }
        }
      }
code_r0x032c2448:
      puVar24 = &UnityEngine_UI_Image__TrackSprite;
      plVar12 = (long *)func_0x00f78af4();
code_r0x032c244c:
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
      *(long *)((long)register0x00000008 + -0x88) = lVar14;
      *(long *)((long)register0x00000008 + -0x80) = lVar18;
      *(long **)((long)register0x00000008 + -0x78) = plVar7;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x68) = puVar24;
      if ((bRam0000000003ec2cd5 & 1) == 0) {
        func_0x00f78a20(0x3d226e8);
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec2cd5 = 1;
      }
      uVar17 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar12);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
      if ((int)uVar11 != 0) {
        lVar18 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar12);
        if (lVar18 == 0) {
          uVar11 = func_0x00f78af4();
          *(undefined2 *)(uVar11 + 0x30) = 0;
          return uVar11;
        }
        uVar17 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar18,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
        if ((int)uVar11 != 0) {
          if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar12);
          *(undefined1 *)((long)plVar12 + 0xfc) = 1;
        }
      }
      return uVar11;
    }
  }
  lVar18 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x60) = uVar19;
  *(ulong *)((long)register0x00000008 + -0x58) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar10;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar11;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_UILobbyInfoPanelBehaviour__DeInit;
  uVar17 = 0x3eb4000;
  if ((bRam0000000003eb4dfa & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d2a430);
    func_0x00f78a20(0x3d1b620);
    func_0x00f78a20(0x3d5f718);
    func_0x00f78a20(0x3d5f720);
    bRam0000000003eb4dfa = 1;
  }
  if ((*(long *)(lVar18 + 0x68) == 0) ||
     (uVar19 = *(ulong *)(*(long *)(lVar18 + 0x68) + 200), uVar19 == 0)) {
code_r0x0151c9a4:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = 0x3d1b620;
    unaff_x24 = 0x3d5f000;
    uVar17 = *(undefined8 *)(uVar19 + 0x20);
    uVar13 = func_0x00f78aec(/*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620);
    /*System.Action<RESULT, string>$$.ctor*/ func_0x01e6ca08(uVar13,lVar18,uRam0000000003d5f720,uRam0000000003d2a430);
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar13,0);
    if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620)) {
      *(long **)(uVar19 + 0x20) = plVar7;
      if (((*(long *)(lVar18 + 0x68) == 0) ||
          (lVar14 = *(long *)(*(long *)(lVar18 + 0x68) + 0x28), lVar14 == 0)) ||
         (uVar19 = *(ulong *)(lVar14 + 0x30), unaff_x23 = 0x3d1b620, uVar19 == 0))
      goto code_r0x0151c9a4;
      unaff_x23 = 0x3d1b548;
      unaff_x24 = 0x3d5f000;
      uVar17 = *(undefined8 *)(uVar19 + 0x58);
      uVar13 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar13,lVar18,uRam0000000003d5f718,uRam0000000003d2a290);
      uVar20 = 0;
      plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar13);
      if ((plVar7 != (long *)0x0) && (*plVar7 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0151c9a8;
      *(long **)(uVar19 + 0x58) = plVar7;
      lVar14 = *(long *)(lVar18 + 0x50);
      unaff_x23 = 0x3d1b548;
      if (lVar14 == 0) goto code_r0x0151c9a4;
      lVar18 = *(long *)((long)register0x00000008 + -0x60);
      uVar11 = *(ulong *)((long)register0x00000008 + -0x58);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      *(long *)((long)register0x00000008 + -0x60) = lVar18;
      *(ulong *)((long)register0x00000008 + -0x58) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x50) =
           *(undefined8 *)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0x48) =
           *(undefined8 *)((long)register0x00000008 + -0x48);
      *(undefined8 *)((long)register0x00000008 + -0x40) =
           *(undefined8 *)((long)register0x00000008 + -0x40);
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x38);
      uVar17 = 0x3eb4000;
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
      if (((*(long *)(lVar14 + 0x40) == 0) ||
          (lVar15 = *(long *)(*(long *)(lVar14 + 0x40) + 0x28), lVar15 == 0)) ||
         (lVar18 = *(long *)(lVar15 + 0x30), lVar18 == 0)) {
LAB_0151b268:
        func_0x00f78af4();
      }
      else {
        uVar17 = *(undefined8 *)(lVar18 + 0x30);
        uVar11 = func_0x00f78aec(/*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448);
        /*System.Action<Group>$$.ctor*/ func_0x01b46100(uVar11,lVar14,uRam0000000003d5f700,uRam0000000003d2a088);
        uVar20 = 0;
        plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar11);
        if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448)) {
          *(long **)(lVar18 + 0x30) = plVar7;
          if ((*(long *)(lVar14 + 0x40) != 0) &&
             ((lVar15 = *(long *)(*(long *)(lVar14 + 0x40) + 0x28), lVar15 != 0 &&
              (lVar18 = *(long *)(lVar15 + 0x30), lVar18 != 0)))) {
            uVar17 = *(undefined8 *)(lVar18 + 0x40);
            uVar11 = func_0x00f78aec(/*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar11,lVar14,uRam0000000003d5f708,uRam0000000003d2a0a8);
            uVar20 = 0;
            plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar11);
            if ((plVar7 != (long *)0x0) && (*plVar7 != /*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458)) goto LAB_0151b26c;
            *(long **)(lVar18 + 0x40) = plVar7;
            lVar15 = *(long *)(lVar14 + 0x28);
            uVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
            uVar20 = uRam0000000003d5f6f8;
            /*System.Action$$.ctor*/ func_0x02924c80(uVar11,lVar14,uRam0000000003d5f6f8,0);
            uVar17 = 0;
            if (lVar15 != 0) {
              lVar18 = 0x3d5f000;
              Atlas_UI_UIAtlasButton__remove_Pressed(lVar15,uVar11);
              lVar15 = *(long *)(lVar14 + 0x30);
              uVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
              uVar20 = uRam0000000003d5f710;
              /*System.Action$$.ctor*/ func_0x02924c80(uVar11,lVar14,uRam0000000003d5f710,0);
              uVar17 = 0;
              if (lVar15 != 0) {
                *(undefined8 *)((long)register0x00000008 + -0x60) =
                     *(undefined8 *)((long)register0x00000008 + -0x60);
                *(undefined8 *)((long)register0x00000008 + -0x58) =
                     *(undefined8 *)((long)register0x00000008 + -0x58);
                *(undefined8 *)((long)register0x00000008 + -0x50) =
                     *(undefined8 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)((long)register0x00000008 + -0x48);
                *(undefined8 *)((long)register0x00000008 + -0x40) =
                     *(undefined8 *)((long)register0x00000008 + -0x40);
                *(undefined8 *)((long)register0x00000008 + -0x38) =
                     *(undefined8 *)((long)register0x00000008 + -0x38);
                if ((bRam0000000003eb4d96 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d96 = 1;
                }
                uVar13 = *(ulong *)(lVar15 + 0x158);
                while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar13,uVar11,0), plVar7 == (long *)0x0 ||
                       (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar8 = func_0x00ff0f44(lVar15 + 0x158,plVar7,uVar13);
                  bVar3 = uVar13 == uVar8;
                  uVar13 = uVar8;
                  if (bVar3) {
                    return uVar8;
                  }
                }
                auVar32 = func_0x00f78e5c(plVar7);
                *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3d1fa78;
                *(ulong *)((long)register0x00000008 + -0x88) = uVar13;
                *(long *)((long)register0x00000008 + -0x80) = lVar15 + 0x158;
                *(ulong *)((long)register0x00000008 + -0x78) = uVar11;
                *(undefined1 **)((long)register0x00000008 + -0x70) =
                     (undefined1 *)((long)register0x00000008 + -0x40);
                *(code **)((long)register0x00000008 + -0x68) =
                     Atlas_UI_UIAtlasButton__add_SelectedOrPressed;
                if ((bRam0000000003eb4d97 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d97 = 1;
                }
                lVar18 = auVar32._0_8_ + 0x160;
                uVar11 = *(ulong *)(auVar32._0_8_ + 0x160);
                while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,auVar32._8_8_,0),
                       plVar7 == (long *)0x0 || (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar13 = func_0x00ff0f44(lVar18,plVar7,uVar11);
                  bVar3 = uVar11 == uVar13;
                  uVar11 = uVar13;
                  if (bVar3) {
                    return uVar13;
                  }
                }
                auVar33 = func_0x00f78e5c(plVar7);
                *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d1fa78;
                *(ulong *)((long)register0x00000008 + -0xb8) = uVar11;
                *(long *)((long)register0x00000008 + -0xb0) = lVar18;
                *(long *)((long)register0x00000008 + -0xa8) = auVar32._8_8_;
                *(undefined1 **)((long)register0x00000008 + -0xa0) =
                     (undefined1 *)((long)register0x00000008 + -0x70);
                *(code **)((long)register0x00000008 + -0x98) =
                     Atlas_UI_UIAtlasButton__remove_SelectedOrPressed;
                if ((bRam0000000003eb4d98 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d98 = 1;
                }
                uVar11 = *(ulong *)(auVar33._0_8_ + 0x160);
                while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,auVar33._8_8_,0),
                       plVar7 == (long *)0x0 || (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar13 = func_0x00ff0f44(auVar33._0_8_ + 0x160,plVar7,uVar11);
                  bVar3 = uVar11 == uVar13;
                  uVar11 = uVar13;
                  if (bVar3) {
                    return uVar13;
                  }
                }
                lVar18 = func_0x00f78e5c(plVar7);
                return (ulong)*(byte *)(lVar18 + 0x168);
              }
            }
          }
          goto LAB_0151b268;
        }
      }
LAB_0151b26c:
      auVar32 = func_0x00f78e5c();
      lVar15 = auVar32._0_8_;
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar17;
      *(long *)((long)register0x00000008 + -0x98) = lVar14;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(code **)((long)register0x00000008 + -0x88) = Atlas_UI_UIGroupCodeBehaviour__OnGroupJoined;
      puVar23 = (undefined1 *)((long)register0x00000008 + -0x90);
      *(long *)((long)register0x00000008 + -0xb0) = auVar32._8_8_;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar20;
      uVar20 = /*Core.Services.Group$$get_Id*/ func_0x01668d2c((undefined1 *)((long)register0x00000008 + -0xb0),0);
      *(undefined8 *)(lVar15 + 0x48) = uVar20;
      lVar14 = *(long *)(lVar15 + 0x18);
      if (lVar14 == 0) {
        lVar14 = func_0x00f78af4();
        *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar23;
        *(code **)((long)register0x00000008 + -0xb8) = Atlas_UI_UIGroupCodeBehaviour__OnGroupLeft;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 == 0) {
          func_0x00f78af4();
          *(long *)((long)register0x00000008 + -0xf0) = lVar18;
          *(ulong *)((long)register0x00000008 + -0xe8) = uVar11;
          *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar17;
          *(long *)((long)register0x00000008 + -0xd8) = lVar15;
          *(undefined1 **)((long)register0x00000008 + -0xd0) =
               (undefined1 *)((long)register0x00000008 + -0xc0);
          *(code **)((long)register0x00000008 + -200) =
               Atlas_UI_UIGroupCodeBehaviour__AddGapInMiddleOfString;
          if ((bRam0000000003eb4de9 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            func_0x00f78a20(0x3d65ed8);
            bRam0000000003eb4de9 = 1;
          }
          uVar11 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(extraout_x1,0);
          if ((uVar11 & 1) == 0) {
            if (extraout_x1 == 0) {
              lVar18 = func_0x00f78af4();
              uVar17 = *(undefined8 *)(lVar18 + 0x48);
              *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3eb4000;
              *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
              *(undefined1 **)((long)register0x00000008 + -0x100) =
                   (undefined1 *)((long)register0x00000008 + -0xd0);
              *(code **)((long)register0x00000008 + -0xf8) =
                   Atlas_UI_UIGroupCodeBehaviour__OnCopyCodeButton;
              if ((bRam0000000003ebc6b7 & 1) == 0) {
                func_0x00f78a20(0x3d21ef8,0);
                bRam0000000003ebc6b7 = 1;
              }
              plVar7 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
              if (plVar7 != (long *)0x0) {
                lVar18 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar11 != 0) {
                  piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                      puVar9 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                      goto code_r0x02f91c40;
                    }
                    piVar16 = piVar16 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar7,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar11 = (*(code *)*puVar9)(plVar7,uVar17,puVar9[1]);
                return uVar11;
              }
              func_0x00f78af4();
              *(undefined8 *)((long)register0x00000008 + -0x130) = 0x3ebc000;
              *(undefined8 *)((long)register0x00000008 + -0x128) = uVar17;
              *(undefined1 **)((long)register0x00000008 + -0x120) =
                   (undefined1 *)((long)register0x00000008 + -0x100);
              *(undefined **)((long)register0x00000008 + -0x118) = &UniClipboard__GetText;
              if ((bRam0000000003ebc6b8 & 1) == 0) {
                func_0x00f78a20(0x3d21ef8);
                bRam0000000003ebc6b8 = 1;
              }
              plVar7 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
              if (plVar7 == (long *)0x0) {
                uVar11 = func_0x00f78af4();
                return uVar11;
              }
              lVar18 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                    puVar9 = (undefined8 *)(lVar18 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto code_r0x02f91cec;
                  }
                  piVar16 = piVar16 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar9 = (undefined8 *)func_0x00fac1f0(plVar7,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (*(code *)*puVar9)(plVar7,puVar9[1]);
              return uVar11;
            }
            if (1 < (int)*(uint *)(extraout_x1 + 0x10)) {
              uVar5 = *(uint *)(extraout_x1 + 0x10) >> 1;
              lVar15 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar5,0);
              lVar18 = /*System.String$$Substring*/ func_0x029cbd54(extraout_x1,uVar5,0);
              lVar14 = /*STR(' ')*/ lRam0000000003d65ed8;
              *(undefined8 *)((long)register0x00000008 + -0xf0) =
                   *(undefined8 *)((long)register0x00000008 + -0xf0);
              *(undefined8 *)((long)register0x00000008 + -0xe8) =
                   *(undefined8 *)((long)register0x00000008 + -0xe8);
              *(undefined8 *)((long)register0x00000008 + -0xe0) =
                   *(undefined8 *)((long)register0x00000008 + -0xe0);
              *(undefined8 *)((long)register0x00000008 + -0xd8) =
                   *(undefined8 *)((long)register0x00000008 + -0xd8);
              *(undefined8 *)((long)register0x00000008 + -0xd0) =
                   *(undefined8 *)((long)register0x00000008 + -0xd0);
              *(undefined8 *)((long)register0x00000008 + -200) =
                   *(undefined8 *)((long)register0x00000008 + -200);
              if ((bRam0000000003eb9468 & 1) == 0) {
                func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar18,0);
                bRam0000000003eb9468 = 1;
              }
              if (((lVar15 == 0) && (lVar14 == 0)) && (lVar18 == 0)) {
                uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
              }
              else {
                if (lVar15 == 0) {
                  lVar15 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (lVar14 == 0) {
                  lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (lVar18 == 0) {
                  lVar18 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (((lVar15 == 0) || (lVar14 == 0)) || (lVar18 == 0)) {
                  uVar11 = func_0x00f78af4();
                  return uVar11;
                }
                uVar11 = func_0x00f834ac(*(int *)(lVar14 + 0x10) + *(int *)(lVar15 + 0x10) +
                                         *(int *)(lVar18 + 0x10));
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar11,0,lVar15);
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar11,*(undefined4 *)(lVar15 + 0x10),lVar14);
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar11,*(int *)(lVar14 + 0x10) + *(int *)(lVar15 + 0x10),lVar18);
              }
              return uVar11;
            }
          }
          return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        uVar21 = 0;
        puVar23 = *(undefined1 **)((long)register0x00000008 + -0xc0);
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      }
      else {
        uVar21 = 1;
        uVar20 = 0x151b2b0;
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
      }
      goto code_r0x0322ef1c;
    }
  }
code_r0x0151c9a8:
  lVar14 = func_0x00f78e5c();
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar19;
  *(ulong *)((long)register0x00000008 + -0xa8) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar17;
  *(long *)((long)register0x00000008 + -0x98) = lVar18;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x88) = &Atlas_UI_UILobbyInfoPanelBehaviour__Update;
  *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)PTR_03a5d648;
  uVar17 = 0x3eb4000;
  if ((bRam0000000003eb4dfb & 1) == 0) {
    func_0x00f78a20(0x3d56850);
    func_0x00f78a20(0x3d56848);
    func_0x00f78a20(0x3d56840);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d68488);
    func_0x00f78a20(0x3d67c78);
    bRam0000000003eb4dfb = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  lVar18 = *(long *)(lVar14 + 0x68);
  if (lVar18 == 0) goto code_r0x0151ccc4;
  if ((*(long *)(lVar18 + 0x30) == 0) || (*(long *)(lVar18 + 0x28) == 0)) {
code_r0x0151cb68:
    if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x0151ccc4;
    uVar8 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar14 + 0x28),0,0);
    uVar20 = uVar17;
    uVar11 = uVar13;
    if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -200)) {
      return uVar8;
    }
code_r0x0151ccc8:
    puVar24 = &Atlas_UI_UITimer__SetTimeLeft;
    lVar15 = ___stack_chk_fail();
    uVar13 = extraout_d0;
  }
  else {
    if (*(long *)(lVar18 + 200) == 0) {
code_r0x0151ccc4:
      func_0x00f78af4();
      uVar20 = uVar17;
      uVar11 = uVar13;
      goto code_r0x0151ccc8;
    }
    uVar20 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar18 + 200),0);
    if ((*(long *)(lVar14 + 0x68) == 0) ||
       (lVar18 = *(long *)(*(long *)(lVar14 + 0x68) + 200), uVar17 = uVar20, lVar18 == 0))
    goto code_r0x0151ccc4;
    uVar11 = /*Atlas.Networking.MatchMakingManager$$IsGroupLeader*/ func_0x0149048c(lVar18,0);
    if ((*(long *)(lVar14 + 0x68) == 0) ||
       (lVar18 = *(long *)(*(long *)(lVar14 + 0x68) + 200), uVar13 = uVar11, lVar18 == 0))
    goto code_r0x0151ccc4;
    uVar5 = /*Atlas.Networking.MatchMakingManager$$IsMatchMaking*/ func_0x014903d8(lVar18,0);
    if (((uint)uVar20 | uVar5) != 1) goto code_r0x0151cb68;
    if (((*(long *)(lVar14 + 0x68) == 0) ||
        (lVar18 = *(long *)(*(long *)(lVar14 + 0x68) + 0x28), lVar18 == 0)) ||
       (plVar7 = *(long **)(lVar18 + 0x30), plVar7 == (long *)0x0)) goto code_r0x0151ccc4;
    (**(code **)(*plVar7 + 0x658))(plVar7,*(undefined8 *)(*plVar7 + 0x660));
    lVar18 = *(long *)(lVar14 + 0x68);
    if ((((lVar18 == 0) || (*(long *)(lVar18 + 0x30) == 0)) ||
        ((lVar15 = *(long *)(*(long *)(lVar18 + 0x30) + 0x28), lVar15 == 0 ||
         ((lVar15 = *(long *)(lVar15 + 0xd0), lVar15 == 0 || (*(long *)(lVar18 + 0x28) == 0)))))) ||
       (plVar7 = *(long **)(*(long *)(lVar18 + 0x28) + 0x30), plVar7 == (long *)0x0))
    goto code_r0x0151ccc4;
    uVar5 = *(uint *)(lVar15 + 0x18);
    uVar19 = (ulong)uVar5;
    uVar21 = (**(code **)(*plVar7 + 0x668))(plVar7,*(undefined8 *)(*plVar7 + 0x670));
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar21;
    dVar29 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8((undefined1 *)((long)register0x00000008 + -0xf8),0);
    lVar15 = *(long *)(lVar14 + 0x18);
    if (lVar15 == 0) goto code_r0x0151ccc4;
    uVar19 = (ulong)(uVar5 + 1);
    uVar13 = (ulong)(uint)(float)dVar29;
    puVar24 = &UNK_0151cb4c;
  }
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_d8;
  *(ulong *)((long)register0x00000008 + -0x130) = uVar19;
  *(ulong *)((long)register0x00000008 + -0x128) = uVar11;
  *(undefined8 *)((long)register0x00000008 + -0x120) = uVar20;
  *(long *)((long)register0x00000008 + -0x118) = lVar14;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x108) = puVar24;
  if ((bRam0000000003eb4e03 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d7cca8);
    func_0x00f78a20(0x3d6d120);
    func_0x00f78a20(0x3d78fa8);
    bRam0000000003eb4e03 = 1;
  }
  iVar6 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar13 & 0xffffffff,0);
  if ((0 < *(int *)(lVar15 + 0x24) && iVar6 <= *(int *)(lVar15 + 0x24)) &&
     (iVar6 != *(int *)(lVar15 + 0x28))) {
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/ClockTick')*/ uRam0000000003d78fa8);
  }
  lVar18 = 0x3d22910;
  *(int *)(lVar15 + 0x28) = iVar6;
  if (*(char *)(lVar15 + 0x20) == '\0') {
    dVar30 = (double)(float)uVar13;
    dVar31 = -dVar30;
    param_3 = INFINITY;
    dVar29 = dVar31;
    if ((float)uVar13 != INFINITY) {
      dVar29 = dVar30;
    }
    uVar5 = (int)dVar29 % 0x3c;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    uVar11 = (ulong)uVar5;
    plVar7 = *(long **)(lVar15 + 0x18);
    *(int *)((long)register0x00000008 + -0x148) = (int)dVar29 / 0x3c;
    uVar17 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(undefined1 *)((long)register0x00000008 + -0x148))
    ;
    param_2 = SUB84(dVar31,0);
    *(uint *)((long)register0x00000008 + -0x14c) = uVar5;
    uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(undefined1 *)((long)register0x00000008 + -0x14c))
    ;
    uVar20 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,uVar17,uVar20,0);
joined_r0x0151cec8:
    lVar15 = 0;
    if (plVar7 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar7 + 0x558))(plVar7,uVar20,*(undefined8 *)(*plVar7 + 0x560));
      return uVar11;
    }
  }
  else {
    uVar11 = 0x3d230e0;
    uVar17 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar13 & 0xffffffff,0);
    if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
      uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),/*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,0);
      plVar7 = *(long **)(lVar15 + 0x18);
      *(int *)((long)register0x00000008 + -0x144) = (int)uVar17;
      uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,
                               (undefined1 *)((long)register0x00000008 + -0x144));
      uVar20 = /*System.String$$Format*/ func_0x029bc688(uVar11,uVar20,0);
      goto joined_r0x0151cec8;
    }
  }
  uVar20 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(undefined **)((long)register0x00000008 + -0x158) = &Atlas_UI_UITimer__Show;
  lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar20,0);
  if (lVar14 == 0) {
    uVar20 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0x160);
    *(undefined **)((long)register0x00000008 + -0x168) = &Atlas_UI_UITimer__Hide;
    lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar20,0);
    if (lVar14 == 0) {
      lVar18 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0x3d22910;
      *(ulong *)((long)register0x00000008 + -0x198) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -400) = uVar17;
      *(long *)((long)register0x00000008 + -0x188) = lVar15;
      *(undefined1 **)((long)register0x00000008 + -0x180) =
           (undefined1 *)((long)register0x00000008 + -0x170);
      *(undefined **)((long)register0x00000008 + -0x178) =
           &Atlas_UI_UILobbyInfoPanelBehaviour__OnGroupLeaderChangedJoined;
      if ((bRam0000000003eb4dfd & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4dfd = 1;
      }
      if (((*(long *)(lVar18 + 0x68) == 0) ||
          (lVar14 = *(long *)(*(long *)(lVar18 + 0x68) + 0x28), lVar14 == 0)) ||
         (plVar7 = *(long **)(lVar14 + 0x30), plVar7 == (long *)0x0)) {
code_r0x0151d010:
        uVar13 = func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0x3d22910;
        *(ulong *)((long)register0x00000008 + -0x1c8) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x3eb4000;
        *(long *)((long)register0x00000008 + -0x1b8) = lVar18;
        *(undefined1 **)((long)register0x00000008 + -0x1b0) =
             (undefined1 *)((long)register0x00000008 + -0x180);
        *(undefined **)((long)register0x00000008 + -0x1a8) =
             &Atlas_UI_UILobbyInfoPanelBehaviour___ctor;
        if ((bRam0000000003eb4dfe & 1) == 0) {
          func_0x00f78a20(0x3d79000);
          bRam0000000003eb4dfe = 1;
        }
        *(undefined8 *)(uVar13 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
        *(undefined4 *)(uVar13 + 0x70) = 0xffffffff;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) =
             *(undefined8 *)((long)register0x00000008 + -0x1d0);
        *(undefined8 *)((long)register0x00000008 + -0x1c8) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        *(undefined8 *)((long)register0x00000008 + -0x1c0) =
             *(undefined8 *)((long)register0x00000008 + -0x1c0);
        *(undefined8 *)((long)register0x00000008 + -0x1b8) =
             *(undefined8 *)((long)register0x00000008 + -0x1b8);
        *(undefined8 *)((long)register0x00000008 + -0x1b0) =
             *(undefined8 *)((long)register0x00000008 + -0x1b0);
        *(undefined8 *)((long)register0x00000008 + -0x1a8) =
             *(undefined8 *)((long)register0x00000008 + -0x1a8);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar13;
      }
      iVar6 = (**(code **)(*plVar7 + 0x848))(plVar7,*(undefined8 *)(*plVar7 + 0x850));
      if (iVar6 == 0) {
        uVar5 = 0;
      }
      else {
        if (((*(long *)(lVar18 + 0x68) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar18 + 0x68) + 0x28), lVar14 == 0)) ||
           (plVar7 = *(long **)(lVar14 + 0x30), plVar7 == (long *)0x0)) goto code_r0x0151d010;
        uVar5 = (**(code **)(*plVar7 + 0x858))(plVar7,*(undefined8 *)(*plVar7 + 0x860));
      }
      uVar17 = *(undefined8 *)(lVar18 + 0x58);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
      if ((uVar5 & (uint)uVar11) == 0) {
        return uVar11;
      }
      uVar8 = *(ulong *)(lVar18 + 0x60);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x198) =
           *(undefined8 *)((long)register0x00000008 + -0x198);
      *(undefined8 *)((long)register0x00000008 + -400) =
           *(undefined8 *)((long)register0x00000008 + -400);
      *(undefined8 *)((long)register0x00000008 + -0x188) =
           *(undefined8 *)((long)register0x00000008 + -0x188);
      *(undefined8 *)((long)register0x00000008 + -0x180) =
           *(undefined8 *)((long)register0x00000008 + -0x180);
      *(undefined8 *)((long)register0x00000008 + -0x178) =
           *(undefined8 *)((long)register0x00000008 + -0x178);
      uVar20 = 0x3eb4000;
      uVar11 = uVar8;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        uVar11 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return uVar11;
      }
      lVar18 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar18 != 0) {
        uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar18,uVar8,uRam0000000003d2faf8);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar18 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar18 != 0)) &&
           (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar18,uVar8,uRam0000000003d2fb00), uVar11 != 0)) {
          *(undefined8 *)((long)register0x00000008 + -400) =
               *(undefined8 *)((long)register0x00000008 + -400);
          *(undefined8 *)((long)register0x00000008 + -0x188) =
               *(undefined8 *)((long)register0x00000008 + -0x188);
          *(undefined8 *)((long)register0x00000008 + -0x180) =
               *(undefined8 *)((long)register0x00000008 + -0x180);
          *(undefined8 *)((long)register0x00000008 + -0x178) =
               *(undefined8 *)((long)register0x00000008 + -0x178);
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,0,0);
          return uVar11;
        }
      }
      plVar7 = (long *)func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x1d8) = uVar13 & 0xffffffff;
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0x3eb4000;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x3d25580;
      *(ulong *)((long)register0x00000008 + -0x1b8) = uVar8;
      *(undefined1 **)((long)register0x00000008 + -0x1b0) =
           (undefined1 *)((long)register0x00000008 + -0x180);
      *(code **)((long)register0x00000008 + -0x1a8) = Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar12 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar7,0);
      if ((plVar12 != (long *)0x0) && (*plVar12 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar22 = func_0x00f78e5c(plVar12);
        *(long **)((long)register0x00000008 + -0x200) = plVar12;
        *(long **)((long)register0x00000008 + -0x1f8) = plVar7;
        *(undefined1 **)((long)register0x00000008 + -0x1f0) =
             (undefined1 *)((long)register0x00000008 + -0x1b0);
        *(code **)((long)register0x00000008 + -0x1e8) =
             Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
        lVar18 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x200);
        *(undefined8 *)((long)register0x00000008 + -0x210) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0x3eb4000;
        *(undefined8 *)((long)register0x00000008 + -0x200) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) =
             *(undefined8 *)((long)register0x00000008 + -0x1f8);
        *(undefined8 *)((long)register0x00000008 + -0x1f0) =
             *(undefined8 *)((long)register0x00000008 + -0x1f0);
        *(undefined8 *)((long)register0x00000008 + -0x1e8) =
             *(undefined8 *)((long)register0x00000008 + -0x1e8);
        if (lVar18 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar10 = func_0x00f78aec();
          uVar22 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar22,0);
        }
        else {
          uVar20 = 0x3ec0000;
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar11 = (*pcRam0000000003ec01d0)(uVar22);
          if ((uVar11 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (*pcRam0000000003ec01e0)(uVar22,lVar18);
            return uVar11;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar10 = func_0x00f78aec();
          uVar21 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar21,0);
          uVar21 = uVar22;
        }
        uVar22 = func_0x00f78a24(0x3d5a8a8);
        auVar32 = func_0x00f78ac0(uVar10,uVar22);
        *(undefined8 *)((long)register0x00000008 + -0x240) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x238) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x230) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x228) = uVar10;
        *(undefined1 **)((long)register0x00000008 + -0x220) =
             (undefined1 *)((long)register0x00000008 + -0x1f0);
        *(undefined **)((long)register0x00000008 + -0x218) =
             &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*pcRam0000000003ec01e0)(auVar32._0_8_,auVar32._8_8_);
        return uVar11;
      }
      fVar25 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar17 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar25 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar12,4,0);
      uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar17,uRam0000000003d5e780);
      *(undefined8 *)((long)register0x00000008 + -0x210) = 0x3d5e780;
      *(undefined8 *)((long)register0x00000008 + -0x208) = 0x3d5e868;
      *(long **)((long)register0x00000008 + -0x200) = plVar12;
      *(long **)((long)register0x00000008 + -0x1f8) = plVar7;
      *(undefined1 **)((long)register0x00000008 + -0x1f0) =
           (undefined1 *)((long)register0x00000008 + -0x1b0);
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0x1513b44;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar7,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar6 != 0) {
          lVar18 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
          if ((uVar13 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto code_r0x018eef34;
            uVar17 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          else {
            if (lVar18 == 0) {
code_r0x018eef34:
              auVar32 = func_0x00f78af4();
              uVar13 = auVar32._0_8_;
              *(undefined8 *)((long)register0x00000008 + -0x240) = 0x3d5e780;
              *(long *)((long)register0x00000008 + -0x238) = lVar18;
              *(long **)((long)register0x00000008 + -0x230) = plVar7;
              *(ulong *)((long)register0x00000008 + -0x228) = uVar11;
              *(undefined1 **)((long)register0x00000008 + -0x220) =
                   (undefined1 *)((long)register0x00000008 + -0x1f0);
              *(undefined **)((long)register0x00000008 + -0x218) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((uVar13 != 0) && (*(char *)(uVar13 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar13,auVar32._8_8_,cVar1 != '\0',0);
              }
              return uVar13;
            }
            uVar17 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar18,0);
          }
          *(undefined8 *)(uVar11 + 200) = uVar17;
        }
        *(long **)(uVar11 + 0x48) = plVar7;
      }
      return uVar11;
    }
    uVar21 = 0;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x160);
    puVar23 = *(undefined1 **)((long)register0x00000008 + -0x170);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x168);
  }
  else {
    uVar21 = 1;
    puVar23 = *(undefined1 **)((long)register0x00000008 + -0x160);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x158);
  }
code_r0x0322ef1c:
  *(long *)(puVar2 + -0x30) = lVar18;
  *(ulong *)(puVar2 + -0x28) = uVar11;
  *(undefined8 *)(puVar2 + -0x20) = uVar17;
  *(long *)(puVar2 + -0x18) = lVar15;
  *(undefined1 **)(puVar2 + -0x10) = puVar23;
  *(undefined8 *)(puVar2 + -8) = uVar20;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar11 = (*pcRam0000000003ebf4c0)(lVar14,uVar21);
  return uVar11;
}



// ============================================================
// RVA: 0x151c674 | Atlas.UI.UILobbyInfoPanelBehaviour.SetIcon
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151b2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0151cb4c) */
/* WARNING: Removing unreachable block (ram,0x0151cb54) */
/* WARNING: Removing unreachable block (ram,0x0151cbac) */
/* WARNING: Removing unreachable block (ram,0x0151cbb0) */
/* WARNING: Removing unreachable block (ram,0x0151cb5c) */
/* WARNING: Removing unreachable block (ram,0x0151cb60) */
/* WARNING: Removing unreachable block (ram,0x0151cbb4) */
/* WARNING: Removing unreachable block (ram,0x0151cbc0) */
/* WARNING: Removing unreachable block (ram,0x0151cc54) */
/* WARNING: Removing unreachable block (ram,0x0151cc70) */
/* WARNING: Removing unreachable block (ram,0x0151cc88) */
/* WARNING: Removing unreachable block (ram,0x0151cc90) */
/* WARNING: Removing unreachable block (ram,0x0151cc94) */
/* WARNING: Removing unreachable block (ram,0x0151ccbc) */
/* WARNING: Removing unreachable block (ram,0x0151cca8) */
/* WARNING: Removing unreachable block (ram,0x0151ccb0) */
/* WARNING: Removing unreachable block (ram,0x0151b2b0) */
/* WARNING: Removing unreachable block (ram,0x0151b2c0) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILobbyInfoPanelBehaviour__SetIcon
                (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                ulong param_5,ulong param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 *****pppppuVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long extraout_x1;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  undefined1 ****unaff_x22;
  long lVar20;
  undefined1 ****ppppuVar21;
  code *unaff_x23;
  undefined1 *****unaff_x24;
  undefined8 *****pppppuVar22;
  undefined *puVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  ulong extraout_d0;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  code *pcStack_168;
  undefined1 *****pppppuStack_160;
  code *pcStack_158;
  undefined1 auStack_150 [4];
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 ****ppppuStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *****pppppuStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 ****ppppuStack_90;
  code *pcStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar20 = 0x3eb4000;
  uVar11 = param_5;
  if ((bRam0000000003eb4dfc & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21b30);
    func_0x00f78a20(0x3d57288);
    uVar11 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dfc = 1;
  }
  if ((int)param_6 == 1) {
    uVar11 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_7,0);
    if ((uVar11 & 1) == 0) {
      if ((*(long *)(param_5 + 0x68) != 0) &&
         (lVar19 = *(long *)(*(long *)(param_5 + 0x68) + 0x20), lVar19 != 0)) {
        param_6 = *(ulong *)(lVar19 + 0x10);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_7,0);
        if (param_6 != 0) {
          uVar15 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_6,uVar15,uRam0000000003d57288);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0,0);
          if ((int)uVar11 == 0) {
            return uVar11;
          }
          if (*(long *)(param_5 + 0x68) != 0) {
            lVar20 = *(long *)(*(long *)(param_5 + 0x68) + 0x88);
            param_6 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
            Atlas_UI_GameContextMetagameData___ctor(param_6,uVar15,lVar20,0,0);
            plVar12 = *(long **)(param_5 + 0x30);
            if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151c80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (**(code **)(*plVar12 + 0x188))
                                 (plVar12,param_6,*(undefined8 *)(*plVar12 + 400));
              return uVar11;
            }
          }
        }
      }
    }
    else {
      plVar12 = *(long **)(param_5 + 0x38);
      if (plVar12 != (long *)0x0) {
        lVar20 = *(long *)(param_5 + 0x48);
        goto LAB_0151c710;
      }
    }
  }
  else {
    if ((int)param_6 != 2) {
      return uVar11;
    }
    plVar12 = *(long **)(param_5 + 0x38);
    if (plVar12 != (long *)0x0) {
      lVar20 = *(long *)(param_5 + 0x40);
LAB_0151c710:
      if ((bRam0000000003ec2cc2 & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar20,0);
        bRam0000000003ec2cc2 = 1;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      lVar19 = plVar12[0x1a];
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar19,0,0);
      if (iVar7 == 0) {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        if (lVar20 != 0) {
          uVar25 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar20,0);
          uStack_60 = CONCAT44(param_2,uVar25);
          uStack_58 = CONCAT44(param_4,param_3);
          fVar26 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
          fVar24 = param_2;
          fVar27 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(bool *)(plVar12 + 6) =
               (fVar26 - fVar27) * (fVar26 - fVar27) + (param_2 - fVar24) * (param_2 - fVar24) <
               _UNK_033f8490;
          lVar19 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar20,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          ppppuVar21 = (undefined1 ****)0x0;
code_r0x032c2400:
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar19,ppppuVar21,0);
          *(undefined1 *)((long)plVar12 + 0x31) = uVar4;
          plVar12[0x1a] = lVar20;
          (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
          goto code_r0x032c244c;
        }
      }
      else {
        lVar19 = plVar12[0x1a];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar19,lVar20,0);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        if (plVar12[0x1a] != 0) {
          uVar25 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar12[0x1a],0);
          uStack_60 = CONCAT44(param_2,uVar25);
          uStack_58 = CONCAT44(param_4,param_3);
          fVar26 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
          fVar24 = param_2;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar20,0);
          if ((uVar11 & 1) == 0) {
            fVar27 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          }
          else {
            if (lVar20 == 0) goto code_r0x032c2448;
            uVar25 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar20,0);
            uStack_60 = CONCAT44(fVar24,uVar25);
            uStack_58 = CONCAT44(param_4,param_3);
            fVar27 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
          }
          *(bool *)(plVar12 + 6) = fVar26 == fVar27 && param_2 == fVar24;
          if (plVar12[0x1a] != 0) {
            lVar19 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar12[0x1a],0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar20,0);
            ppppuVar21 = (undefined1 ****)0x0;
            if (iVar7 != 0) {
              unaff_x22 = ppppuVar21;
              if (lVar20 == 0) goto code_r0x032c2448;
              ppppuVar21 = (undefined1 ****)/*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar20,0);
            }
            unaff_x22 = ppppuVar21;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            goto code_r0x032c2400;
          }
        }
      }
code_r0x032c2448:
      plVar12 = (long *)func_0x00f78af4();
code_r0x032c244c:
      ppppuStack_90 = unaff_x22;
      pcStack_88 = (code *)lVar19;
      if ((bRam0000000003ec2cd5 & 1) == 0) {
        func_0x00f78a20(0x3d226e8);
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec2cd5 = 1;
      }
      uVar15 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar12);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0,0);
      if ((int)uVar11 != 0) {
        lVar20 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar12);
        if (lVar20 == 0) {
          uVar11 = func_0x00f78af4();
          *(undefined2 *)(uVar11 + 0x30) = 0;
          return uVar11;
        }
        uVar15 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar20,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar15,0,0);
        if ((int)uVar11 != 0) {
          if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar12);
          *(undefined1 *)((long)plVar12 + 0xfc) = 1;
        }
      }
      return uVar11;
    }
  }
  lVar19 = func_0x00f78af4();
  uVar15 = 0x3eb4000;
  uStack_60 = lVar20;
  uStack_58 = param_6;
  if ((bRam0000000003eb4dfa & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d2a430);
    func_0x00f78a20(0x3d1b620);
    func_0x00f78a20(0x3d5f718);
    func_0x00f78a20(0x3d5f720);
    bRam0000000003eb4dfa = 1;
  }
  if ((*(long *)(lVar19 + 0x68) == 0) ||
     (lVar20 = *(long *)(*(long *)(lVar19 + 0x68) + 200), lVar20 == 0)) {
code_r0x0151c9a4:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = (code *)0x3d1b620;
    unaff_x24 = (undefined1 *****)0x3d5f000;
    uVar15 = *(undefined8 *)(lVar20 + 0x20);
    param_6 = func_0x00f78aec(/*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620);
    /*System.Action<RESULT, string>$$.ctor*/ func_0x01e6ca08(param_6,lVar19,uRam0000000003d5f720,uRam0000000003d2a430);
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,param_6,0);
    if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620)) {
      *(long **)(lVar20 + 0x20) = plVar12;
      if (((*(long *)(lVar19 + 0x68) == 0) ||
          (lVar17 = *(long *)(*(long *)(lVar19 + 0x68) + 0x28), lVar17 == 0)) ||
         (lVar20 = *(long *)(lVar17 + 0x30), unaff_x23 = (code *)0x3d1b620, lVar20 == 0))
      goto code_r0x0151c9a4;
      unaff_x23 = (code *)0x3d1b548;
      unaff_x24 = (undefined1 *****)0x3d5f000;
      uVar15 = *(undefined8 *)(lVar20 + 0x58);
      param_6 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(param_6,lVar19,uRam0000000003d5f718,uRam0000000003d2a290);
      uVar16 = 0;
      plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,param_6);
      uVar11 = uStack_58;
      lVar17 = uStack_60;
      if ((plVar12 != (long *)0x0) && (*plVar12 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto code_r0x0151c9a8;
      *(long **)(lVar20 + 0x58) = plVar12;
      lVar13 = *(long *)(lVar19 + 0x50);
      unaff_x23 = (code *)0x3d1b548;
      if (lVar13 == 0) goto code_r0x0151c9a4;
      uVar15 = 0x3eb4000;
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
      if (((*(long *)(lVar13 + 0x40) == 0) ||
          (lVar20 = *(long *)(*(long *)(lVar13 + 0x40) + 0x28), lVar20 == 0)) ||
         (lVar17 = *(long *)(lVar20 + 0x30), lVar17 == 0)) {
LAB_0151b268:
        func_0x00f78af4();
      }
      else {
        uVar15 = *(undefined8 *)(lVar17 + 0x30);
        uVar11 = func_0x00f78aec(/*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448);
        /*System.Action<Group>$$.ctor*/ func_0x01b46100(uVar11,lVar13,uRam0000000003d5f700,uRam0000000003d2a088);
        uVar16 = 0;
        plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,uVar11);
        if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448)) {
          *(long **)(lVar17 + 0x30) = plVar12;
          if ((*(long *)(lVar13 + 0x40) != 0) &&
             ((lVar20 = *(long *)(*(long *)(lVar13 + 0x40) + 0x28), lVar20 != 0 &&
              (lVar17 = *(long *)(lVar20 + 0x30), lVar17 != 0)))) {
            uVar15 = *(undefined8 *)(lVar17 + 0x40);
            uVar11 = func_0x00f78aec(/*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar11,lVar13,uRam0000000003d5f708,uRam0000000003d2a0a8);
            uVar16 = 0;
            plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,uVar11);
            if ((plVar12 != (long *)0x0) && (*plVar12 != /*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458)) goto LAB_0151b26c;
            *(long **)(lVar17 + 0x40) = plVar12;
            lVar20 = *(long *)(lVar13 + 0x28);
            uVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
            uVar16 = uRam0000000003d5f6f8;
            /*System.Action$$.ctor*/ func_0x02924c80(uVar11,lVar13,uRam0000000003d5f6f8,0);
            uVar15 = 0;
            if (lVar20 != 0) {
              lVar17 = 0x3d5f000;
              Atlas_UI_UIAtlasButton__remove_Pressed(lVar20,uVar11);
              lVar20 = *(long *)(lVar13 + 0x30);
              uVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
              uVar16 = uRam0000000003d5f710;
              /*System.Action$$.ctor*/ func_0x02924c80(uVar11,lVar13,uRam0000000003d5f710,0);
              uVar15 = 0;
              if (lVar20 != 0) {
                if ((bRam0000000003eb4d96 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d96 = 1;
                }
                uVar16 = *(ulong *)(lVar20 + 0x158);
                while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar16,uVar11,0), plVar12 == (long *)0x0
                       || (*plVar12 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar9 = func_0x00ff0f44(lVar20 + 0x158,plVar12,uVar16);
                  bVar3 = uVar16 == uVar9;
                  uVar16 = uVar9;
                  if (bVar3) {
                    return uVar9;
                  }
                }
                auVar31 = func_0x00f78e5c(plVar12);
                uVar15 = auVar31._8_8_;
                ppppuStack_90 = (undefined1 ****)0x3d1fa78;
                pcStack_88 = (code *)uVar16;
                if ((bRam0000000003eb4d97 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d97 = 1;
                }
                lVar20 = auVar31._0_8_ + 0x160;
                uVar11 = *(ulong *)(auVar31._0_8_ + 0x160);
                while ((plVar12 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,uVar15,0), plVar12 == (long *)0x0
                       || (*plVar12 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar16 = func_0x00ff0f44(lVar20,plVar12,uVar11);
                  bVar3 = uVar11 == uVar16;
                  uVar11 = uVar16;
                  if (bVar3) {
                    return uVar16;
                  }
                }
                auVar31 = func_0x00f78e5c(plVar12);
                pppppuStack_c0 = (undefined1 *****)0x3d1fa78;
                pcStack_98 = Atlas_UI_UIAtlasButton__remove_SelectedOrPressed;
                pcStack_b8 = (code *)uVar11;
                lStack_b0 = lVar20;
                uStack_a8 = uVar15;
                puStack_a0 = &stack0xffffffffffffff90;
                if ((bRam0000000003eb4d98 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d98 = 1;
                }
                uVar11 = *(ulong *)(auVar31._0_8_ + 0x160);
                while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,auVar31._8_8_,0),
                       plVar12 == (long *)0x0 || (*plVar12 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar16 = func_0x00ff0f44(auVar31._0_8_ + 0x160,plVar12,uVar11);
                  bVar3 = uVar11 == uVar16;
                  uVar11 = uVar16;
                  if (bVar3) {
                    return uVar16;
                  }
                }
                lVar20 = func_0x00f78e5c(plVar12);
                return (ulong)*(byte *)(lVar20 + 0x168);
              }
            }
          }
          goto LAB_0151b268;
        }
      }
LAB_0151b26c:
      auVar31 = func_0x00f78e5c();
      lStack_b0 = auVar31._8_8_;
      lVar20 = auVar31._0_8_;
      pppppuVar2 = (undefined8 *****)&lStack_b0;
      pcStack_88 = Atlas_UI_UIGroupCodeBehaviour__OnGroupJoined;
      uStack_a8 = uVar16;
      puStack_a0 = (undefined1 *)uVar15;
      pcStack_98 = (code *)lVar13;
      ppppuStack_90 = (undefined1 ****)&stack0xffffffffffffffc0;
      uVar10 = /*Core.Services.Group$$get_Id*/ func_0x01668d2c(&lStack_b0,0);
      *(undefined8 *)(lVar20 + 0x48) = uVar10;
      lVar19 = *(long *)(lVar20 + 0x18);
      pppppuVar22 = (undefined8 *****)&ppppuStack_90;
      if (lVar19 == 0) {
        lVar19 = func_0x00f78af4();
        puStack_d0 = (undefined1 *)&pppppuStack_c0;
        pcStack_b8 = Atlas_UI_UIGroupCodeBehaviour__OnGroupLeft;
        lVar19 = *(long *)(lVar19 + 0x18);
        pppppuStack_c0 = &ppppuStack_90;
        if (lVar19 == 0) {
          func_0x00f78af4();
          pcStack_c8 = Atlas_UI_UIGroupCodeBehaviour__AddGapInMiddleOfString;
          lStack_f0 = lVar17;
          uStack_e8 = uVar11;
          uStack_e0 = uVar15;
          lStack_d8 = lVar20;
          pppppuVar2 = &pppppuStack_c0;
          if ((bRam0000000003eb4de9 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            func_0x00f78a20(0x3d65ed8);
            bRam0000000003eb4de9 = 1;
            pppppuVar2 = (undefined8 *****)puStack_d0;
          }
          puStack_d0 = (undefined1 *)pppppuVar2;
          uVar11 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(extraout_x1,0);
          if ((uVar11 & 1) == 0) {
            if (extraout_x1 == 0) {
              lVar20 = func_0x00f78af4();
              uVar15 = *(undefined8 *)(lVar20 + 0x48);
              ppppuStack_110 = (undefined8 ****)0x3eb4000;
              pcStack_f8 = Atlas_UI_UIGroupCodeBehaviour__OnCopyCodeButton;
              puStack_108 = (undefined *)extraout_x1;
              ppuStack_100 = &puStack_d0;
              if ((bRam0000000003ebc6b7 & 1) == 0) {
                func_0x00f78a20(0x3d21ef8,0);
                bRam0000000003ebc6b7 = 1;
              }
              plVar12 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
              if (plVar12 != (long *)0x0) {
                lVar20 = *plVar12;
                uVar11 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar11 != 0) {
                  piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                      puVar14 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
                      goto code_r0x02f91c40;
                    }
                    piVar18 = piVar18 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                puVar14 = (undefined8 *)func_0x00fac1f0(plVar12,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar11 = (*(code *)*puVar14)(plVar12,uVar15,puVar14[1]);
                return uVar11;
              }
              func_0x00f78af4();
              if ((bRam0000000003ebc6b8 & 1) == 0) {
                func_0x00f78a20(0x3d21ef8);
                bRam0000000003ebc6b8 = 1;
              }
              plVar12 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
              if (plVar12 == (long *)0x0) {
                uVar11 = func_0x00f78af4();
                return uVar11;
              }
              lVar20 = *plVar12;
              uVar11 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar11 != 0) {
                piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                    puVar14 = (undefined8 *)(lVar20 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto code_r0x02f91cec;
                  }
                  piVar18 = piVar18 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar12,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (*(code *)*puVar14)(plVar12,puVar14[1]);
              return uVar11;
            }
            if (1 < (int)*(uint *)(extraout_x1 + 0x10)) {
              uVar5 = *(uint *)(extraout_x1 + 0x10) >> 1;
              lVar17 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar5,0);
              lVar20 = /*System.String$$Substring*/ func_0x029cbd54(extraout_x1,uVar5,0);
              lVar19 = /*STR(' ')*/ lRam0000000003d65ed8;
              if ((bRam0000000003eb9468 & 1) == 0) {
                func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar20,0);
                bRam0000000003eb9468 = 1;
              }
              if (((lVar17 == 0) && (lVar19 == 0)) && (lVar20 == 0)) {
                uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
              }
              else {
                if (lVar17 == 0) {
                  lVar17 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (lVar19 == 0) {
                  lVar19 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (lVar20 == 0) {
                  lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (((lVar17 == 0) || (lVar19 == 0)) || (lVar20 == 0)) {
                  uVar11 = func_0x00f78af4();
                  return uVar11;
                }
                uVar11 = func_0x00f834ac(*(int *)(lVar19 + 0x10) + *(int *)(lVar17 + 0x10) +
                                         *(int *)(lVar20 + 0x10));
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar11,0,lVar17);
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar11,*(undefined4 *)(lVar17 + 0x10),lVar19);
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar11,*(int *)(lVar19 + 0x10) + *(int *)(lVar17 + 0x10),lVar20);
              }
              return uVar11;
            }
          }
          return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        uVar10 = 0;
        pcStack_168 = Atlas_UI_UIGroupCodeBehaviour__OnGroupLeft;
      }
      else {
        uVar10 = 1;
        pppppuVar2 = (undefined8 *****)&lStack_b0;
        pcStack_168 = (code *)0x151b2b0;
      }
      goto code_r0x0322ef1c;
    }
  }
code_r0x0151c9a8:
  lVar17 = func_0x00f78e5c();
  pcStack_88 = (code *)&Atlas_UI_UILobbyInfoPanelBehaviour__Update;
  pcStack_c8 = *(code **)PTR_03a5d648;
  pppppuStack_c0 = unaff_x24;
  pcStack_b8 = unaff_x23;
  lStack_b0 = lVar20;
  uStack_a8 = param_6;
  puStack_a0 = (undefined1 *)uVar15;
  pcStack_98 = (code *)lVar19;
  ppppuStack_90 = (undefined1 ****)&stack0xffffffffffffffc0;
  if ((bRam0000000003eb4dfb & 1) == 0) {
    func_0x00f78a20(0x3d56850);
    func_0x00f78a20(0x3d56848);
    func_0x00f78a20(0x3d56840);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d68488);
    func_0x00f78a20(0x3d67c78);
    bRam0000000003eb4dfb = 1;
  }
  pcStack_f8 = (code *)0x0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  lStack_d8 = 0;
  uStack_e0 = 0;
  lVar20 = *(long *)(lVar17 + 0x68);
  if (lVar20 == 0) goto code_r0x0151ccc4;
  if ((*(long *)(lVar20 + 0x30) == 0) || (*(long *)(lVar20 + 0x28) == 0)) {
code_r0x0151cb68:
    if (*(long *)(lVar17 + 0x28) == 0) goto code_r0x0151ccc4;
    uVar11 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar17 + 0x28),0,0);
    if ((code *)*(long *)PTR_03a5d648 == pcStack_c8) {
      return uVar11;
    }
code_r0x0151ccc8:
    puVar23 = &Atlas_UI_UITimer__SetTimeLeft;
    lVar20 = ___stack_chk_fail();
    uVar16 = extraout_d0;
  }
  else {
    if (*(long *)(lVar20 + 200) == 0) {
code_r0x0151ccc4:
      func_0x00f78af4();
      goto code_r0x0151ccc8;
    }
    uVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar20 + 200),0);
    if ((*(long *)(lVar17 + 0x68) == 0) ||
       (lVar20 = *(long *)(*(long *)(lVar17 + 0x68) + 200), lVar20 == 0)) goto code_r0x0151ccc4;
    /*Atlas.Networking.MatchMakingManager$$IsGroupLeader*/ func_0x0149048c(lVar20,0);
    if ((*(long *)(lVar17 + 0x68) == 0) ||
       (lVar20 = *(long *)(*(long *)(lVar17 + 0x68) + 200), lVar20 == 0)) goto code_r0x0151ccc4;
    uVar6 = /*Atlas.Networking.MatchMakingManager$$IsMatchMaking*/ func_0x014903d8(lVar20,0);
    if ((uVar5 | uVar6) != 1) goto code_r0x0151cb68;
    if (((*(long *)(lVar17 + 0x68) == 0) ||
        (lVar20 = *(long *)(*(long *)(lVar17 + 0x68) + 0x28), lVar20 == 0)) ||
       (plVar12 = *(long **)(lVar20 + 0x30), plVar12 == (long *)0x0)) goto code_r0x0151ccc4;
    (**(code **)(*plVar12 + 0x658))(plVar12,*(undefined8 *)(*plVar12 + 0x660));
    lVar20 = *(long *)(lVar17 + 0x68);
    if ((((lVar20 == 0) || (*(long *)(lVar20 + 0x30) == 0)) ||
        ((lVar19 = *(long *)(*(long *)(lVar20 + 0x30) + 0x28), lVar19 == 0 ||
         ((*(long *)(lVar19 + 0xd0) == 0 || (*(long *)(lVar20 + 0x28) == 0)))))) ||
       (plVar12 = *(long **)(*(long *)(lVar20 + 0x28) + 0x30), plVar12 == (long *)0x0))
    goto code_r0x0151ccc4;
    pcStack_f8 = (code *)(**(code **)(*plVar12 + 0x668))(plVar12,*(undefined8 *)(*plVar12 + 0x670));
    dVar28 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&pcStack_f8,0);
    lVar20 = *(long *)(lVar17 + 0x18);
    if (lVar20 == 0) goto code_r0x0151ccc4;
    uVar16 = (ulong)(uint)(float)dVar28;
    puVar23 = &UNK_0151cb4c;
  }
  pppppuVar2 = (undefined8 *****)auStack_150;
  ppppuStack_110 = &ppppuStack_90;
  puStack_108 = puVar23;
  if ((bRam0000000003eb4e03 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d7cca8);
    func_0x00f78a20(0x3d6d120);
    func_0x00f78a20(0x3d78fa8);
    bRam0000000003eb4e03 = 1;
  }
  iVar7 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar16 & 0xffffffff,0);
  if ((0 < *(int *)(lVar20 + 0x24) && iVar7 <= *(int *)(lVar20 + 0x24)) &&
     (iVar7 != *(int *)(lVar20 + 0x28))) {
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/ClockTick')*/ uRam0000000003d78fa8);
  }
  lVar17 = 0x3d22910;
  *(int *)(lVar20 + 0x28) = iVar7;
  if (*(char *)(lVar20 + 0x20) == '\0') {
    dVar29 = (double)(float)uVar16;
    dVar30 = -dVar29;
    param_3 = INFINITY;
    dVar28 = dVar30;
    if ((float)uVar16 != INFINITY) {
      dVar28 = dVar29;
    }
    iStack_148 = (int)dVar28 / 0x3c;
    uVar5 = (int)dVar28 % 0x3c;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    uVar11 = (ulong)uVar5;
    plVar12 = *(long **)(lVar20 + 0x18);
    uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_148);
    param_2 = SUB84(dVar30,0);
    uStack_14c = uVar5;
    uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_14c);
    uVar10 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,uVar15,uVar10,0);
joined_r0x0151cec8:
    lVar20 = 0;
    if (plVar12 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar12 + 0x558))(plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x560));
      return uVar11;
    }
  }
  else {
    uVar11 = 0x3d230e0;
    uVar15 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar16 & 0xffffffff,0);
    if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
      uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),/*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,0);
      plVar12 = *(long **)(lVar20 + 0x18);
      uStack_144 = (undefined4)uVar15;
      uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_144);
      uVar10 = /*System.String$$Format*/ func_0x029bc688(uVar11,uVar10,0);
      goto joined_r0x0151cec8;
    }
  }
  uVar10 = func_0x00f78af4();
  pppppuVar22 = &pppppuStack_160;
  pcStack_158 = (code *)&Atlas_UI_UITimer__Show;
  pppppuStack_160 = (undefined1 *****)&ppppuStack_110;
  lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar10,0);
  if (lVar19 == 0) {
    uVar10 = func_0x00f78af4();
    pcStack_168 = (code *)&Atlas_UI_UITimer__Hide;
    lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar10,0);
    if (lVar19 == 0) {
      lVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4dfd & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4dfd = 1;
      }
      if (((*(long *)(lVar20 + 0x68) == 0) ||
          (lVar19 = *(long *)(*(long *)(lVar20 + 0x68) + 0x28), lVar19 == 0)) ||
         (plVar12 = *(long **)(lVar19 + 0x30), plVar12 == (long *)0x0)) {
code_r0x0151d010:
        uVar11 = func_0x00f78af4();
        if ((bRam0000000003eb4dfe & 1) == 0) {
          func_0x00f78a20(0x3d79000);
          bRam0000000003eb4dfe = 1;
        }
        *(undefined8 *)(uVar11 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
        *(undefined4 *)(uVar11 + 0x70) = 0xffffffff;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar11;
      }
      iVar7 = (**(code **)(*plVar12 + 0x848))(plVar12,*(undefined8 *)(*plVar12 + 0x850));
      if (iVar7 == 0) {
        uVar5 = 0;
      }
      else {
        if (((*(long *)(lVar20 + 0x68) == 0) ||
            (lVar19 = *(long *)(*(long *)(lVar20 + 0x68) + 0x28), lVar19 == 0)) ||
           (plVar12 = *(long **)(lVar19 + 0x30), plVar12 == (long *)0x0)) goto code_r0x0151d010;
        uVar5 = (**(code **)(*plVar12 + 0x858))(plVar12,*(undefined8 *)(*plVar12 + 0x860));
      }
      uVar15 = *(undefined8 *)(lVar20 + 0x58);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
      if ((uVar5 & (uint)uVar11) == 0) {
        return uVar11;
      }
      uVar16 = *(ulong *)(lVar20 + 0x60);
      uVar11 = uVar16;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        uVar11 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return uVar11;
      }
      lVar20 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar20 != 0) {
        uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar20,uVar16,uRam0000000003d2faf8);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar20 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar20 != 0)) &&
           (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,uVar16,uRam0000000003d2fb00), uVar11 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,0,0);
          return uVar11;
        }
      }
      plVar12 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar12,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar15 = func_0x00f78e5c(plVar8);
        lVar20 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
        if (lVar20 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar10 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar15,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar11 = (*pcRam0000000003ec01d0)(uVar15);
          if ((uVar11 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (*pcRam0000000003ec01e0)(uVar15,lVar20);
            return uVar11;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar10 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar15,0);
        }
        uVar15 = func_0x00f78a24(0x3d5a8a8);
        auVar31 = func_0x00f78ac0(uVar10,uVar15);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*pcRam0000000003ec01e0)(auVar31._0_8_,auVar31._8_8_);
        return uVar11;
      }
      fVar24 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar15 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar24 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar8,4,0);
      uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar15,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar12,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar7 != 0) {
          lVar20 = func_0x00f78adc(plVar12,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
          if ((uVar16 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto code_r0x018eef34;
            uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          }
          else {
            if (lVar20 == 0) {
code_r0x018eef34:
              auVar31 = func_0x00f78af4();
              uVar11 = auVar31._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar11,auVar31._8_8_,cVar1 != '\0',0);
              }
              return uVar11;
            }
            uVar15 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar20,0);
          }
          *(undefined8 *)(uVar11 + 200) = uVar15;
        }
        *(long **)(uVar11 + 0x48) = plVar12;
      }
      return uVar11;
    }
    uVar10 = 0;
    pppppuVar2 = &pppppuStack_160;
  }
  else {
    uVar10 = 1;
    pppppuVar22 = (undefined8 *****)pppppuStack_160;
    pcStack_168 = pcStack_158;
  }
code_r0x0322ef1c:
  *(long *)((long)pppppuVar2 + -0x30) = lVar17;
  *(ulong *)((long)pppppuVar2 + -0x28) = uVar11;
  *(undefined8 *)((long)pppppuVar2 + -0x20) = uVar15;
  *(long *)((long)pppppuVar2 + -0x18) = lVar20;
  *(undefined8 ******)((long)pppppuVar2 + -0x10) = pppppuVar22;
  *(code **)((long)pppppuVar2 + -8) = pcStack_168;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar11 = (*pcRam0000000003ebf4c0)(lVar19,uVar10);
  return uVar11;
}



// ============================================================
// RVA: 0x151c824 | Atlas.UI.UILobbyInfoPanelBehaviour.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x0151b2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0151cb4c) */
/* WARNING: Removing unreachable block (ram,0x0151cb54) */
/* WARNING: Removing unreachable block (ram,0x0151cbac) */
/* WARNING: Removing unreachable block (ram,0x0151cbb0) */
/* WARNING: Removing unreachable block (ram,0x0151cb5c) */
/* WARNING: Removing unreachable block (ram,0x0151cb60) */
/* WARNING: Removing unreachable block (ram,0x0151cbb4) */
/* WARNING: Removing unreachable block (ram,0x0151cbc0) */
/* WARNING: Removing unreachable block (ram,0x0151cc54) */
/* WARNING: Removing unreachable block (ram,0x0151cc70) */
/* WARNING: Removing unreachable block (ram,0x0151cc88) */
/* WARNING: Removing unreachable block (ram,0x0151cc90) */
/* WARNING: Removing unreachable block (ram,0x0151cc94) */
/* WARNING: Removing unreachable block (ram,0x0151ccbc) */
/* WARNING: Removing unreachable block (ram,0x0151cca8) */
/* WARNING: Removing unreachable block (ram,0x0151ccb0) */
/* WARNING: Removing unreachable block (ram,0x0151b2b0) */
/* WARNING: Removing unreachable block (ram,0x0151b2c0) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_UILobbyInfoPanelBehaviour__DeInit
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  undefined8 *****pppppuVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long extraout_x1;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  ulong unaff_x21;
  long unaff_x22;
  long lVar17;
  code *unaff_x23;
  undefined1 *****unaff_x24;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  float fVar20;
  double dVar21;
  ulong extraout_d0;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  code *pcStack_138;
  undefined1 *****pppppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [4];
  uint uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined8 ****ppppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *****pppppuStack_90;
  code *pcStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 ****ppppuStack_60;
  code *pcStack_58;
  
  uVar16 = 0x3eb4000;
  if ((bRam0000000003eb4dfa & 1) == 0) {
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d2a430);
    func_0x00f78a20(0x3d1b620);
    func_0x00f78a20(0x3d5f718);
    func_0x00f78a20(0x3d5f720);
    bRam0000000003eb4dfa = 1;
  }
  uVar10 = unaff_x21;
  lVar17 = unaff_x22;
  if ((*(long *)(param_4 + 0x68) == 0) ||
     (lVar17 = *(long *)(*(long *)(param_4 + 0x68) + 200), lVar17 == 0)) {
LAB_0151c9a4:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = (code *)0x3d1b620;
    unaff_x24 = (undefined1 *****)0x3d5f000;
    uVar16 = *(undefined8 *)(lVar17 + 0x20);
    uVar10 = func_0x00f78aec(/*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620);
    /*System.Action<RESULT, string>$$.ctor*/ func_0x01e6ca08(uVar10,param_4,uRam0000000003d5f720,uRam0000000003d2a430);
    plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar16,uVar10,0);
    if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<GameType, string>_TypeInfo*/ lRam0000000003d1b620)) {
      *(long **)(lVar17 + 0x20) = plVar11;
      if (((*(long *)(param_4 + 0x68) == 0) ||
          (lVar14 = *(long *)(*(long *)(param_4 + 0x68) + 0x28), lVar14 == 0)) ||
         (lVar17 = *(long *)(lVar14 + 0x30), unaff_x23 = (code *)0x3d1b620, lVar17 == 0))
      goto LAB_0151c9a4;
      unaff_x23 = (code *)0x3d1b548;
      unaff_x24 = (undefined1 *****)0x3d5f000;
      uVar16 = *(undefined8 *)(lVar17 + 0x58);
      uVar10 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar10,param_4,uRam0000000003d5f718,uRam0000000003d2a290);
      uVar13 = 0;
      plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar16,uVar10);
      if ((plVar11 != (long *)0x0) && (*plVar11 != /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) goto LAB_0151c9a8;
      *(long **)(lVar17 + 0x58) = plVar11;
      lVar14 = *(long *)(param_4 + 0x50);
      unaff_x23 = (code *)0x3d1b548;
      if (lVar14 == 0) goto LAB_0151c9a4;
      uVar16 = 0x3eb4000;
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
      if (((*(long *)(lVar14 + 0x40) == 0) ||
          (lVar17 = *(long *)(*(long *)(lVar14 + 0x40) + 0x28), lVar17 == 0)) ||
         (unaff_x22 = *(long *)(lVar17 + 0x30), unaff_x22 == 0)) {
LAB_0151b268:
        func_0x00f78af4();
      }
      else {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
        unaff_x21 = func_0x00f78aec(/*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448);
        /*System.Action<Group>$$.ctor*/ func_0x01b46100(unaff_x21,lVar14,uRam0000000003d5f700,uRam0000000003d2a088);
        uVar13 = 0;
        plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar16,unaff_x21);
        if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<Group>_TypeInfo*/ lRam0000000003d1b448)) {
          *(long **)(unaff_x22 + 0x30) = plVar11;
          if ((*(long *)(lVar14 + 0x40) != 0) &&
             ((lVar17 = *(long *)(*(long *)(lVar14 + 0x40) + 0x28), lVar17 != 0 &&
              (unaff_x22 = *(long *)(lVar17 + 0x30), unaff_x22 != 0)))) {
            uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
            unaff_x21 = func_0x00f78aec(/*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458);
            /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(unaff_x21,lVar14,uRam0000000003d5f708,uRam0000000003d2a0a8);
            uVar13 = 0;
            plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar16,unaff_x21);
            if ((plVar11 != (long *)0x0) && (*plVar11 != /*System.Action<GroupLeftReason>_TypeInfo*/ lRam0000000003d1b458)) goto LAB_0151b26c;
            *(long **)(unaff_x22 + 0x40) = plVar11;
            lVar17 = *(long *)(lVar14 + 0x28);
            unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
            uVar13 = uRam0000000003d5f6f8;
            /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,lVar14,uRam0000000003d5f6f8,0);
            uVar16 = 0;
            if (lVar17 != 0) {
              unaff_x22 = 0x3d5f000;
              Atlas_UI_UIAtlasButton__remove_Pressed(lVar17,unaff_x21);
              lVar17 = *(long *)(lVar14 + 0x30);
              unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
              uVar13 = uRam0000000003d5f710;
              /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,lVar14,uRam0000000003d5f710,0);
              uVar16 = 0;
              if (lVar17 != 0) {
                if ((bRam0000000003eb4d96 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d96 = 1;
                }
                uVar10 = *(ulong *)(lVar17 + 0x158);
                while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,unaff_x21,0),
                       plVar11 == (long *)0x0 || (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar13 = func_0x00ff0f44(lVar17 + 0x158,plVar11,uVar10);
                  bVar3 = uVar10 == uVar13;
                  uVar10 = uVar13;
                  if (bVar3) {
                    return uVar13;
                  }
                }
                auVar24 = func_0x00f78e5c(plVar11);
                uVar16 = auVar24._8_8_;
                ppppuStack_60 = (undefined1 ****)0x3d1fa78;
                pcStack_58 = (code *)uVar10;
                if ((bRam0000000003eb4d97 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d97 = 1;
                }
                lVar17 = auVar24._0_8_ + 0x160;
                uVar10 = *(ulong *)(auVar24._0_8_ + 0x160);
                while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar10,uVar16,0), plVar11 == (long *)0x0
                       || (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar13 = func_0x00ff0f44(lVar17,plVar11,uVar10);
                  bVar3 = uVar10 == uVar13;
                  uVar10 = uVar13;
                  if (bVar3) {
                    return uVar13;
                  }
                }
                auVar24 = func_0x00f78e5c(plVar11);
                pppppuStack_90 = (undefined1 *****)0x3d1fa78;
                pcStack_68 = Atlas_UI_UIAtlasButton__remove_SelectedOrPressed;
                pcStack_88 = (code *)uVar10;
                lStack_80 = lVar17;
                uStack_78 = uVar16;
                puStack_70 = &stack0xffffffffffffffc0;
                if ((bRam0000000003eb4d98 & 1) == 0) {
                  func_0x00f78a20(0x3d1fa78);
                  bRam0000000003eb4d98 = 1;
                }
                uVar10 = *(ulong *)(auVar24._0_8_ + 0x160);
                while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,auVar24._8_8_,0),
                       plVar11 == (long *)0x0 || (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
                  uVar13 = func_0x00ff0f44(auVar24._0_8_ + 0x160,plVar11,uVar10);
                  bVar3 = uVar10 == uVar13;
                  uVar10 = uVar13;
                  if (bVar3) {
                    return uVar13;
                  }
                }
                lVar17 = func_0x00f78e5c(plVar11);
                return (ulong)*(byte *)(lVar17 + 0x168);
              }
            }
          }
          goto LAB_0151b268;
        }
      }
LAB_0151b26c:
      auVar24 = func_0x00f78e5c();
      lStack_80 = auVar24._8_8_;
      lVar17 = auVar24._0_8_;
      pppppuVar2 = (undefined8 *****)&lStack_80;
      pcStack_58 = Atlas_UI_UIGroupCodeBehaviour__OnGroupJoined;
      uStack_78 = uVar13;
      puStack_70 = (undefined1 *)uVar16;
      pcStack_68 = (code *)lVar14;
      ppppuStack_60 = (undefined1 ****)&stack0xfffffffffffffff0;
      uVar8 = /*Core.Services.Group$$get_Id*/ func_0x01668d2c(&lStack_80,0);
      *(undefined8 *)(lVar17 + 0x48) = uVar8;
      lVar14 = *(long *)(lVar17 + 0x18);
      pppppuVar18 = (undefined8 *****)&ppppuStack_60;
      if (lVar14 == 0) {
        lVar14 = func_0x00f78af4();
        puStack_a0 = (undefined1 *)&pppppuStack_90;
        pcStack_88 = Atlas_UI_UIGroupCodeBehaviour__OnGroupLeft;
        lVar14 = *(long *)(lVar14 + 0x18);
        pppppuStack_90 = &ppppuStack_60;
        if (lVar14 == 0) {
          func_0x00f78af4();
          pcStack_98 = Atlas_UI_UIGroupCodeBehaviour__AddGapInMiddleOfString;
          lStack_c0 = unaff_x22;
          uStack_b8 = unaff_x21;
          uStack_b0 = uVar16;
          lStack_a8 = lVar17;
          pppppuVar2 = &pppppuStack_90;
          if ((bRam0000000003eb4de9 & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            func_0x00f78a20(0x3d65ed8);
            bRam0000000003eb4de9 = 1;
            pppppuVar2 = (undefined8 *****)puStack_a0;
          }
          puStack_a0 = (undefined1 *)pppppuVar2;
          uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(extraout_x1,0);
          if ((uVar10 & 1) == 0) {
            if (extraout_x1 == 0) {
              lVar17 = func_0x00f78af4();
              uVar16 = *(undefined8 *)(lVar17 + 0x48);
              ppppuStack_e0 = (undefined8 ****)0x3eb4000;
              pcStack_c8 = Atlas_UI_UIGroupCodeBehaviour__OnCopyCodeButton;
              puStack_d8 = (undefined *)extraout_x1;
              ppuStack_d0 = &puStack_a0;
              if ((bRam0000000003ebc6b7 & 1) == 0) {
                func_0x00f78a20(0x3d21ef8,0);
                bRam0000000003ebc6b7 = 1;
              }
              plVar11 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
              if (plVar11 != (long *)0x0) {
                lVar17 = *plVar11;
                uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar10 != 0) {
                  piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                      puVar12 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                      goto code_r0x02f91c40;
                    }
                    piVar15 = piVar15 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,0);
code_r0x02f91c40:
                    /* WARNING: Could not recover jumptable at 0x02f91c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar10 = (*(code *)*puVar12)(plVar11,uVar16,puVar12[1]);
                return uVar10;
              }
              func_0x00f78af4();
              if ((bRam0000000003ebc6b8 & 1) == 0) {
                func_0x00f78a20(0x3d21ef8);
                bRam0000000003ebc6b8 = 1;
              }
              plVar11 = (long *)/*UniClipboard$$get_board*/ func_0x02f91b20();
              if (plVar11 == (long *)0x0) {
                uVar10 = func_0x00f78af4();
                return uVar10;
              }
              lVar17 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar10 != 0) {
                piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*IBoard_TypeInfo*/ lRam0000000003d21ef8) {
                    puVar12 = (undefined8 *)(lVar17 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto code_r0x02f91cec;
                  }
                  piVar15 = piVar15 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*IBoard_TypeInfo*/ lRam0000000003d21ef8,1);
code_r0x02f91cec:
                    /* WARNING: Could not recover jumptable at 0x02f91cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
              return uVar10;
            }
            if (1 < (int)*(uint *)(extraout_x1 + 0x10)) {
              uVar4 = *(uint *)(extraout_x1 + 0x10) >> 1;
              lVar9 = /*System.String$$Substring*/ func_0x029cbbf0(extraout_x1,0,uVar4,0);
              lVar17 = /*System.String$$Substring*/ func_0x029cbd54(extraout_x1,uVar4,0);
              lVar14 = /*STR(' ')*/ lRam0000000003d65ed8;
              if ((bRam0000000003eb9468 & 1) == 0) {
                func_0x00f78a20(0x3d24dd0,/*STR(' ')*/ lRam0000000003d65ed8,lVar17,0);
                bRam0000000003eb9468 = 1;
              }
              if (((lVar9 == 0) && (lVar14 == 0)) && (lVar17 == 0)) {
                uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
              }
              else {
                if (lVar9 == 0) {
                  lVar9 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (lVar14 == 0) {
                  lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (lVar17 == 0) {
                  lVar17 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
                }
                if (((lVar9 == 0) || (lVar14 == 0)) || (lVar17 == 0)) {
                  uVar10 = func_0x00f78af4();
                  return uVar10;
                }
                uVar10 = func_0x00f834ac(*(int *)(lVar14 + 0x10) + *(int *)(lVar9 + 0x10) +
                                         *(int *)(lVar17 + 0x10));
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar10,0,lVar9);
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar10,*(undefined4 *)(lVar9 + 0x10),lVar14);
                /*System.String$$FillStringChecked*/ func_0x029cc26c(uVar10,*(int *)(lVar14 + 0x10) + *(int *)(lVar9 + 0x10),lVar17);
              }
              return uVar10;
            }
          }
          return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        uVar8 = 0;
        pcStack_138 = Atlas_UI_UIGroupCodeBehaviour__OnGroupLeft;
      }
      else {
        uVar8 = 1;
        pppppuVar2 = (undefined8 *****)&lStack_80;
        pcStack_138 = (code *)0x151b2b0;
      }
      goto code_r0x0322ef1c;
    }
  }
LAB_0151c9a8:
  lVar14 = func_0x00f78e5c();
  pcStack_58 = (code *)&Atlas_UI_UILobbyInfoPanelBehaviour__Update;
  pcStack_98 = *(code **)PTR_03a5d648;
  pppppuStack_90 = unaff_x24;
  pcStack_88 = unaff_x23;
  lStack_80 = lVar17;
  uStack_78 = uVar10;
  puStack_70 = (undefined1 *)uVar16;
  pcStack_68 = (code *)param_4;
  ppppuStack_60 = (undefined1 ****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4dfb & 1) == 0) {
    func_0x00f78a20(0x3d56850);
    func_0x00f78a20(0x3d56848);
    func_0x00f78a20(0x3d56840);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d68488);
    func_0x00f78a20(0x3d67c78);
    bRam0000000003eb4dfb = 1;
  }
  pcStack_c8 = (code *)0x0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  lVar17 = *(long *)(lVar14 + 0x68);
  if (lVar17 == 0) goto code_r0x0151ccc4;
  if ((*(long *)(lVar17 + 0x30) == 0) || (*(long *)(lVar17 + 0x28) == 0)) {
code_r0x0151cb68:
    if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x0151ccc4;
    uVar10 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar14 + 0x28),0,0);
    if ((code *)*(long *)PTR_03a5d648 == pcStack_98) {
      return uVar10;
    }
code_r0x0151ccc8:
    puVar19 = &Atlas_UI_UITimer__SetTimeLeft;
    lVar17 = ___stack_chk_fail();
    uVar10 = extraout_d0;
  }
  else {
    if (*(long *)(lVar17 + 200) == 0) {
code_r0x0151ccc4:
      func_0x00f78af4();
      goto code_r0x0151ccc8;
    }
    uVar4 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar17 + 200),0);
    if ((*(long *)(lVar14 + 0x68) == 0) ||
       (lVar17 = *(long *)(*(long *)(lVar14 + 0x68) + 200), lVar17 == 0)) goto code_r0x0151ccc4;
    /*Atlas.Networking.MatchMakingManager$$IsGroupLeader*/ func_0x0149048c(lVar17,0);
    if ((*(long *)(lVar14 + 0x68) == 0) ||
       (lVar17 = *(long *)(*(long *)(lVar14 + 0x68) + 200), lVar17 == 0)) goto code_r0x0151ccc4;
    uVar5 = /*Atlas.Networking.MatchMakingManager$$IsMatchMaking*/ func_0x014903d8(lVar17,0);
    if ((uVar4 | uVar5) != 1) goto code_r0x0151cb68;
    if (((*(long *)(lVar14 + 0x68) == 0) ||
        (lVar17 = *(long *)(*(long *)(lVar14 + 0x68) + 0x28), lVar17 == 0)) ||
       (plVar11 = *(long **)(lVar17 + 0x30), plVar11 == (long *)0x0)) goto code_r0x0151ccc4;
    (**(code **)(*plVar11 + 0x658))(plVar11,*(undefined8 *)(*plVar11 + 0x660));
    lVar17 = *(long *)(lVar14 + 0x68);
    if ((((lVar17 == 0) || (*(long *)(lVar17 + 0x30) == 0)) ||
        ((lVar9 = *(long *)(*(long *)(lVar17 + 0x30) + 0x28), lVar9 == 0 ||
         ((*(long *)(lVar9 + 0xd0) == 0 || (*(long *)(lVar17 + 0x28) == 0)))))) ||
       (plVar11 = *(long **)(*(long *)(lVar17 + 0x28) + 0x30), plVar11 == (long *)0x0))
    goto code_r0x0151ccc4;
    pcStack_c8 = (code *)(**(code **)(*plVar11 + 0x668))(plVar11,*(undefined8 *)(*plVar11 + 0x670));
    dVar21 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&pcStack_c8,0);
    lVar17 = *(long *)(lVar14 + 0x18);
    if (lVar17 == 0) goto code_r0x0151ccc4;
    uVar10 = (ulong)(uint)(float)dVar21;
    puVar19 = &UNK_0151cb4c;
  }
  pppppuVar2 = (undefined8 *****)auStack_120;
  ppppuStack_e0 = &ppppuStack_60;
  puStack_d8 = puVar19;
  if ((bRam0000000003eb4e03 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d7cca8);
    func_0x00f78a20(0x3d6d120);
    func_0x00f78a20(0x3d78fa8);
    bRam0000000003eb4e03 = 1;
  }
  iVar6 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar10 & 0xffffffff,0);
  if ((0 < *(int *)(lVar17 + 0x24) && iVar6 <= *(int *)(lVar17 + 0x24)) &&
     (iVar6 != *(int *)(lVar17 + 0x28))) {
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/ClockTick')*/ uRam0000000003d78fa8);
  }
  unaff_x22 = 0x3d22910;
  *(int *)(lVar17 + 0x28) = iVar6;
  if (*(char *)(lVar17 + 0x20) == '\0') {
    dVar22 = (double)(float)uVar10;
    dVar23 = -dVar22;
    param_3 = INFINITY;
    dVar21 = dVar23;
    if ((float)uVar10 != INFINITY) {
      dVar21 = dVar22;
    }
    iStack_118 = (int)dVar21 / 0x3c;
    uVar4 = (int)dVar21 % 0x3c;
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    unaff_x21 = (ulong)uVar4;
    plVar11 = *(long **)(lVar17 + 0x18);
    uVar16 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_118);
    param_2 = SUB84(dVar23,0);
    uStack_11c = uVar4;
    uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_11c);
    uVar8 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,uVar16,uVar8,0);
joined_r0x0151cec8:
    lVar17 = 0;
    if (plVar11 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar11 + 0x558))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x560));
      return uVar10;
    }
  }
  else {
    unaff_x21 = 0x3d230e0;
    uVar16 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar10 & 0xffffffff,0);
    if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
      unaff_x21 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),/*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,0);
      plVar11 = *(long **)(lVar17 + 0x18);
      uStack_114 = (undefined4)uVar16;
      uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_114);
      uVar8 = /*System.String$$Format*/ func_0x029bc688(unaff_x21,uVar8,0);
      goto joined_r0x0151cec8;
    }
  }
  uVar8 = func_0x00f78af4();
  pppppuVar18 = &pppppuStack_130;
  pcStack_128 = (code *)&Atlas_UI_UITimer__Show;
  pppppuStack_130 = (undefined1 *****)&ppppuStack_e0;
  lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0);
  if (lVar14 == 0) {
    uVar8 = func_0x00f78af4();
    pcStack_138 = (code *)&Atlas_UI_UITimer__Hide;
    lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0);
    if (lVar14 == 0) {
      lVar17 = func_0x00f78af4();
      if ((bRam0000000003eb4dfd & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4dfd = 1;
      }
      if (((*(long *)(lVar17 + 0x68) == 0) ||
          (lVar14 = *(long *)(*(long *)(lVar17 + 0x68) + 0x28), lVar14 == 0)) ||
         (plVar11 = *(long **)(lVar14 + 0x30), plVar11 == (long *)0x0)) {
code_r0x0151d010:
        uVar10 = func_0x00f78af4();
        if ((bRam0000000003eb4dfe & 1) == 0) {
          func_0x00f78a20(0x3d79000);
          bRam0000000003eb4dfe = 1;
        }
        *(undefined8 *)(uVar10 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
        *(undefined4 *)(uVar10 + 0x70) = 0xffffffff;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar10;
      }
      iVar6 = (**(code **)(*plVar11 + 0x848))(plVar11,*(undefined8 *)(*plVar11 + 0x850));
      if (iVar6 == 0) {
        uVar4 = 0;
      }
      else {
        if (((*(long *)(lVar17 + 0x68) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar17 + 0x68) + 0x28), lVar14 == 0)) ||
           (plVar11 = *(long **)(lVar14 + 0x30), plVar11 == (long *)0x0)) goto code_r0x0151d010;
        uVar4 = (**(code **)(*plVar11 + 0x858))(plVar11,*(undefined8 *)(*plVar11 + 0x860));
      }
      uVar16 = *(undefined8 *)(lVar17 + 0x58);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
      if ((uVar4 & (uint)uVar10) == 0) {
        return uVar10;
      }
      uVar13 = *(ulong *)(lVar17 + 0x60);
      uVar10 = uVar13;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        uVar10 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return uVar10;
      }
      lVar17 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar17 != 0) {
        uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar17,uVar13,uRam0000000003d2faf8);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar17 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar17 != 0)) &&
           (uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,uVar13,uRam0000000003d2fb00), uVar10 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,0,0);
          return uVar10;
        }
      }
      plVar11 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar7 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar11,0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar16 = func_0x00f78e5c(plVar7);
        lVar17 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
        if (lVar17 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar8 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar8,uVar16,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar10 = (*pcRam0000000003ec01d0)(uVar16);
          if ((uVar10 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (*pcRam0000000003ec01e0)(uVar16,lVar17);
            return uVar10;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar8 = func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar16,0);
        }
        uVar16 = func_0x00f78a24(0x3d5a8a8);
        auVar24 = func_0x00f78ac0(uVar8,uVar16);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*pcRam0000000003ec01e0)(auVar24._0_8_,auVar24._8_8_);
        return uVar10;
      }
      fVar20 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar16 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar20 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar7,4,0);
      uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar16,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar11,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar6 != 0) {
          lVar17 = func_0x00f78adc(plVar11,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
          if ((uVar13 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto code_r0x018eef34;
            uVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          }
          else {
            if (lVar17 == 0) {
code_r0x018eef34:
              auVar24 = func_0x00f78af4();
              uVar10 = auVar24._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar10,auVar24._8_8_,cVar1 != '\0',0);
              }
              return uVar10;
            }
            uVar16 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar17,0);
          }
          *(undefined8 *)(uVar10 + 200) = uVar16;
        }
        *(long **)(uVar10 + 0x48) = plVar11;
      }
      return uVar10;
    }
    uVar8 = 0;
    pppppuVar2 = &pppppuStack_130;
  }
  else {
    uVar8 = 1;
    pppppuVar18 = (undefined8 *****)pppppuStack_130;
    pcStack_138 = pcStack_128;
  }
code_r0x0322ef1c:
  *(long *)((long)pppppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar2 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar2 + -0x20) = uVar16;
  *(long *)((long)pppppuVar2 + -0x18) = lVar17;
  *(undefined8 ******)((long)pppppuVar2 + -0x10) = pppppuVar18;
  *(code **)((long)pppppuVar2 + -8) = pcStack_138;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*pcRam0000000003ebf4c0)(lVar14,uVar8);
  return uVar10;
}



// ============================================================
// RVA: 0x151c9ac | Atlas.UI.UILobbyInfoPanelBehaviour.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x0151cb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0151cb4c) */
/* WARNING: Removing unreachable block (ram,0x0151cb54) */
/* WARNING: Removing unreachable block (ram,0x0151cbac) */
/* WARNING: Removing unreachable block (ram,0x0151cbb0) */
/* WARNING: Removing unreachable block (ram,0x0151cb5c) */
/* WARNING: Removing unreachable block (ram,0x0151cb60) */
/* WARNING: Removing unreachable block (ram,0x0151cbb4) */
/* WARNING: Removing unreachable block (ram,0x0151cbc0) */
/* WARNING: Removing unreachable block (ram,0x0151cc54) */
/* WARNING: Removing unreachable block (ram,0x0151cc70) */
/* WARNING: Removing unreachable block (ram,0x0151cc88) */
/* WARNING: Removing unreachable block (ram,0x0151cc90) */
/* WARNING: Removing unreachable block (ram,0x0151cc94) */
/* WARNING: Removing unreachable block (ram,0x0151ccbc) */
/* WARNING: Removing unreachable block (ram,0x0151cca8) */
/* WARNING: Removing unreachable block (ram,0x0151ccb0) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UILobbyInfoPanelBehaviour__Update
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  undefined1 ***pppuVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 ***pppuVar14;
  undefined *puVar15;
  float fVar16;
  double dVar17;
  ulong extraout_d0;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4dfb & 1) == 0) {
    func_0x00f78a20(0x3d56850);
    func_0x00f78a20(0x3d56848);
    func_0x00f78a20(0x3d56840);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d68488);
    func_0x00f78a20(0x3d67c78);
    bRam0000000003eb4dfb = 1;
  }
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar12 = *(long *)(param_4 + 0x68);
  if (lVar12 == 0) goto LAB_0151ccc4;
  if ((*(long *)(lVar12 + 0x30) == 0) || (*(long *)(lVar12 + 0x28) == 0)) {
LAB_0151cb68:
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_0151ccc4;
    lVar12 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_4 + 0x28),0,0);
    if (*(long *)PTR_03a5d648 == lStack_48) {
      return lVar12;
    }
code_r0x0151ccc8:
    puVar15 = &Atlas_UI_UITimer__SetTimeLeft;
    lVar12 = ___stack_chk_fail();
    uVar11 = extraout_d0;
  }
  else {
    if (*(long *)(lVar12 + 200) == 0) {
LAB_0151ccc4:
      func_0x00f78af4();
      goto code_r0x0151ccc8;
    }
    uVar3 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar12 + 200),0);
    if ((*(long *)(param_4 + 0x68) == 0) ||
       (lVar12 = *(long *)(*(long *)(param_4 + 0x68) + 200), lVar12 == 0)) goto LAB_0151ccc4;
    /*Atlas.Networking.MatchMakingManager$$IsGroupLeader*/ func_0x0149048c(lVar12,0);
    if ((*(long *)(param_4 + 0x68) == 0) ||
       (lVar12 = *(long *)(*(long *)(param_4 + 0x68) + 200), lVar12 == 0)) goto LAB_0151ccc4;
    uVar4 = /*Atlas.Networking.MatchMakingManager$$IsMatchMaking*/ func_0x014903d8(lVar12,0);
    if ((uVar3 | uVar4) != 1) goto LAB_0151cb68;
    if (((*(long *)(param_4 + 0x68) == 0) ||
        (lVar12 = *(long *)(*(long *)(param_4 + 0x68) + 0x28), lVar12 == 0)) ||
       (plVar7 = *(long **)(lVar12 + 0x30), plVar7 == (long *)0x0)) goto LAB_0151ccc4;
    (**(code **)(*plVar7 + 0x658))(plVar7,*(undefined8 *)(*plVar7 + 0x660));
    lVar12 = *(long *)(param_4 + 0x68);
    if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x30) == 0)) ||
        ((lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 0x28), lVar13 == 0 ||
         ((*(long *)(lVar13 + 0xd0) == 0 || (*(long *)(lVar12 + 0x28) == 0)))))) ||
       (plVar7 = *(long **)(*(long *)(lVar12 + 0x28) + 0x30), plVar7 == (long *)0x0))
    goto LAB_0151ccc4;
    uStack_78 = (**(code **)(*plVar7 + 0x668))(plVar7,*(undefined8 *)(*plVar7 + 0x670));
    dVar17 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_78,0);
    lVar12 = *(long *)(param_4 + 0x18);
    if (lVar12 == 0) goto LAB_0151ccc4;
    uVar11 = (ulong)(uint)(float)dVar17;
    puVar15 = (undefined *)0x151cb4c;
  }
  pppuVar2 = (undefined1 ***)auStack_d0;
  puStack_90 = &stack0xfffffffffffffff0;
  puStack_88 = puVar15;
  if ((bRam0000000003eb4e03 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d7cca8);
    func_0x00f78a20(0x3d6d120);
    func_0x00f78a20(0x3d78fa8);
    bRam0000000003eb4e03 = 1;
  }
  iVar5 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar11 & 0xffffffff,0);
  if ((0 < *(int *)(lVar12 + 0x24) && iVar5 <= *(int *)(lVar12 + 0x24)) &&
     (iVar5 != *(int *)(lVar12 + 0x28))) {
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/ClockTick')*/ uRam0000000003d78fa8);
  }
  *(int *)(lVar12 + 0x28) = iVar5;
  if (*(char *)(lVar12 + 0x20) == '\0') {
    dVar18 = (double)(float)uVar11;
    dVar19 = -dVar18;
    param_3 = INFINITY;
    dVar17 = dVar19;
    if ((float)uVar11 != INFINITY) {
      dVar17 = dVar18;
    }
    iStack_c8 = (int)dVar17 / 0x3c;
    uVar3 = (int)dVar17 % 0x3c;
    if ((int)uVar3 < 1) {
      uVar3 = 0;
    }
    uVar9 = (ulong)uVar3;
    plVar7 = *(long **)(lVar12 + 0x18);
    uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_c8);
    param_2 = SUB84(dVar19,0);
    uStack_cc = uVar3;
    uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_cc);
    uVar10 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,uVar8,uVar10,0);
joined_r0x0151cec8:
    lVar12 = 0;
    if (plVar7 != (long *)0x0) {
      lVar12 = (**(code **)(*plVar7 + 0x558))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x560));
      return lVar12;
    }
  }
  else {
    uVar9 = 0x3d230e0;
    uVar8 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar11 & 0xffffffff,0);
    if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
      uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),/*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,0);
      plVar7 = *(long **)(lVar12 + 0x18);
      uStack_c4 = (undefined4)uVar8;
      uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_c4);
      uVar10 = /*System.String$$Format*/ func_0x029bc688(uVar9,uVar10,0);
      goto joined_r0x0151cec8;
    }
  }
  uVar10 = func_0x00f78af4();
  pppuVar14 = &ppuStack_e0;
  puStack_d8 = &Atlas_UI_UITimer__Show;
  ppuStack_e0 = &puStack_90;
  lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar10,0);
  if (lVar13 == 0) {
    uVar10 = func_0x00f78af4();
    puStack_e8 = &Atlas_UI_UITimer__Hide;
    lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar10,0);
    if (lVar13 == 0) {
      lVar12 = func_0x00f78af4();
      if ((bRam0000000003eb4dfd & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4dfd = 1;
      }
      if (((*(long *)(lVar12 + 0x68) == 0) ||
          (lVar13 = *(long *)(*(long *)(lVar12 + 0x68) + 0x28), lVar13 == 0)) ||
         (plVar7 = *(long **)(lVar13 + 0x30), plVar7 == (long *)0x0)) {
code_r0x0151d010:
        lVar12 = func_0x00f78af4();
        if ((bRam0000000003eb4dfe & 1) == 0) {
          func_0x00f78a20(0x3d79000);
          bRam0000000003eb4dfe = 1;
        }
        *(undefined8 *)(lVar12 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
        *(undefined4 *)(lVar12 + 0x70) = 0xffffffff;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return lVar12;
      }
      iVar5 = (**(code **)(*plVar7 + 0x848))(plVar7,*(undefined8 *)(*plVar7 + 0x850));
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        if (((*(long *)(lVar12 + 0x68) == 0) ||
            (lVar13 = *(long *)(*(long *)(lVar12 + 0x68) + 0x28), lVar13 == 0)) ||
           (plVar7 = *(long **)(lVar13 + 0x30), plVar7 == (long *)0x0)) goto code_r0x0151d010;
        uVar3 = (**(code **)(*plVar7 + 0x858))(plVar7,*(undefined8 *)(*plVar7 + 0x860));
      }
      uVar8 = *(undefined8 *)(lVar12 + 0x58);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar13 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
      if ((uVar3 & (uint)lVar13) == 0) {
        return lVar13;
      }
      lVar13 = *(long *)(lVar12 + 0x60);
      lVar12 = lVar13;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        lVar12 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return lVar12;
      }
      lVar12 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar12 != 0) {
        lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar12,lVar13,uRam0000000003d2faf8);
        if ((int)lVar12 == 0) {
          return lVar12;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar12 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar12 != 0)) &&
           (lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar12,lVar13,uRam0000000003d2fb00), lVar12 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar12,0,0);
          return lVar12;
        }
      }
      plVar7 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar7,0);
      if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar8 = func_0x00f78e5c(plVar6);
        lVar12 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
        if (lVar12 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar10 = func_0x00f78aec();
          uVar8 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar8,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar11 = (*pcRam0000000003ec01d0)(uVar8);
          if ((uVar11 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar12 = (*pcRam0000000003ec01e0)(uVar8,lVar12);
            return lVar12;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar10 = func_0x00f78aec();
          uVar8 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar8,0);
        }
        uVar8 = func_0x00f78a24(0x3d5a8a8);
        auVar20 = func_0x00f78ac0(uVar10,uVar8);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar12 = (*pcRam0000000003ec01e0)(auVar20._0_8_,auVar20._8_8_);
        return lVar12;
      }
      fVar16 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar8 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar16 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                              plVar6,4,0);
      lVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar8,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar7,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar5 != 0) {
          lVar13 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
          if ((uVar11 & 1) == 0) {
            if (plVar7 == (long *)0x0) goto code_r0x018eef34;
            uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          else {
            if (lVar13 == 0) {
code_r0x018eef34:
              auVar20 = func_0x00f78af4();
              lVar12 = auVar20._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar12,auVar20._8_8_,cVar1 != '\0',0);
              }
              return lVar12;
            }
            uVar8 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar13,0);
          }
          *(undefined8 *)(lVar12 + 200) = uVar8;
        }
        *(long **)(lVar12 + 0x48) = plVar7;
      }
      return lVar12;
    }
    uVar10 = 0;
    pppuVar2 = &ppuStack_e0;
  }
  else {
    uVar10 = 1;
    pppuVar14 = (undefined1 ***)ppuStack_e0;
    puStack_e8 = puStack_d8;
  }
  *(undefined8 *)((long)pppuVar2 + -0x30) = 0x3d22910;
  *(ulong *)((long)pppuVar2 + -0x28) = uVar9;
  *(undefined8 *)((long)pppuVar2 + -0x20) = uVar8;
  *(long *)((long)pppuVar2 + -0x18) = lVar12;
  *(undefined1 ****)((long)pppuVar2 + -0x10) = pppuVar14;
  *(undefined **)((long)pppuVar2 + -8) = puStack_e8;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar12 = (*pcRam0000000003ebf4c0)(lVar13,uVar10);
  return lVar12;
}



// ============================================================
// RVA: 0x151cf20 | Atlas.UI.UILobbyInfoPanelBehaviour.OnGroupLeaderChangedJoined
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UILobbyInfoPanelBehaviour__OnGroupLeaderChangedJoined
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb4dfd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dfd = 1;
  }
  if (((*(long *)(param_4 + 0x68) == 0) ||
      (lVar9 = *(long *)(*(long *)(param_4 + 0x68) + 0x28), lVar9 == 0)) ||
     (plVar5 = *(long **)(lVar9 + 0x30), plVar5 == (long *)0x0)) {
LAB_0151d010:
    lVar9 = func_0x00f78af4();
    if ((bRam0000000003eb4dfe & 1) == 0) {
      func_0x00f78a20(0x3d79000);
      bRam0000000003eb4dfe = 1;
    }
    *(undefined8 *)(lVar9 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
    *(undefined4 *)(lVar9 + 0x70) = 0xffffffff;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar9;
  }
  iVar2 = (**(code **)(*plVar5 + 0x848))(plVar5,*(undefined8 *)(*plVar5 + 0x850));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (((*(long *)(param_4 + 0x68) == 0) ||
        (lVar9 = *(long *)(*(long *)(param_4 + 0x68) + 0x28), lVar9 == 0)) ||
       (plVar5 = *(long **)(lVar9 + 0x30), plVar5 == (long *)0x0)) goto LAB_0151d010;
    uVar3 = (**(code **)(*plVar5 + 0x858))(plVar5,*(undefined8 *)(*plVar5 + 0x860));
  }
  uVar10 = *(undefined8 *)(param_4 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
  if ((uVar3 & (uint)lVar9) == 0) {
    return lVar9;
  }
  lVar6 = *(long *)(param_4 + 0x60);
  lVar9 = lVar6;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    lVar9 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar9;
  }
  lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar9 != 0) {
    lVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,lVar6,uRam0000000003d2faf8);
    if ((int)lVar9 == 0) {
      return lVar9;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
       (lVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,lVar6,uRam0000000003d2fb00), lVar9 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar9,0,0);
      return lVar9;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar4 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5,0);
  if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar10 = func_0x00f78e5c(plVar4);
    lVar9 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
    if (lVar9 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar8 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar8,uVar10,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar7 = (*pcRam0000000003ec01d0)(uVar10);
      if ((uVar7 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar9 = (*pcRam0000000003ec01e0)(uVar10,lVar9);
        return lVar9;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar8 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar10,0);
    }
    uVar10 = func_0x00f78a24(0x3d5a8a8);
    auVar12 = func_0x00f78ac0(uVar8,uVar10);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar9 = (*pcRam0000000003ec01e0)(auVar12._0_8_,auVar12._8_8_);
    return lVar9;
  }
  fVar11 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar10 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar11 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar4,4,0);
  lVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar10,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar6 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
      if ((uVar7 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar6 == 0) {
code_r0x018eef34:
          auVar12 = func_0x00f78af4();
          lVar9 = auVar12._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar9,auVar12._8_8_,cVar1 != '\0',0);
          }
          return lVar9;
        }
        uVar10 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar6,0);
      }
      *(undefined8 *)(lVar9 + 200) = uVar10;
    }
    *(long **)(lVar9 + 0x48) = plVar5;
  }
  return lVar9;
}



// ============================================================
// RVA: 0x151d014 | Atlas.UI.UILobbyInfoPanelBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UILobbyInfoPanelBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4dfe & 1) == 0) {
    func_0x00f78a20(0x3d79000);
    bRam0000000003eb4dfe = 1;
  }
  *(undefined8 *)(param_1 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
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



