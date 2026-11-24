// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LoadoutRepresentationViewBehaviour

// ============================================================
// RVA: 0x1489424 | Atlas.UI.LoadoutRepresentationViewBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_LoadoutRepresentationViewBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x148942c | Atlas.UI.LoadoutRepresentationViewBehaviour.set_Data
// ============================================================

/* WARNING: Possible PIC construction at 0x01489654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

long Atlas_UI_LoadoutRepresentationViewBehaviour__set_Data(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  int iVar15;
  undefined8 unaff_x20;
  undefined8 uVar16;
  long *unaff_x21;
  long *plVar17;
  undefined8 uVar18;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar19;
  undefined4 extraout_s0;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long alStack_1c0 [2];
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  long **pplStack_130;
  undefined *puStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long *plVar11;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar17 = (long *)0x3eb4000;
  if ((bRam0000000003eb4957 & 1) == 0) {
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4957 = 1;
  }
  *(long *)(param_1 + 0x18) = param_2;
  if (param_2 != 0) {
    uVar5 = Atlas_UI_LoadoutMetagameData__get_IsNew(param_2);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_014897a4;
      uVar16 = Atlas_UI_LoadoutMetagameData__get_IsLocked();
    }
    else {
      uVar16 = 1;
    }
    plVar17 = *(long **)(param_1 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar17,0,0);
    iVar15 = (int)uVar16;
    uVar6 = unaff_x22;
    if (iVar4 != 0) {
      if ((((*(long *)(param_1 + 0x18) == 0) ||
           (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), lVar13 == 0)) ||
          (lVar13 = *(long *)(lVar13 + 0x58), lVar13 == 0)) || (*(long *)(param_1 + 0x20) == 0))
      goto LAB_014897a4;
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x20),*(undefined8 *)(lVar13 + 0x18),0);
      if (iVar15 != 0) {
        uVar18 = *(undefined8 *)(param_1 + 0x40);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0,0);
        if (iVar4 != 0) {
          plVar17 = *(long **)(param_1 + 0x70);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar17,0,0);
          if (iVar4 != 0) {
            plVar17 = *(long **)(param_1 + 0x40);
            uVar6 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
            /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar6,plVar17,0);
            *(undefined8 *)(param_1 + 0x70) = uVar6;
          }
          plVar7 = *(long **)(param_1 + 0x20);
          if (plVar7 == (long *)0x0) goto LAB_014897a4;
          (**(code **)(*plVar7 + 0x348))
                    (plVar7,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(*plVar7 + 0x350));
        }
      }
    }
    plVar17 = *(long **)(param_1 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar17,0,0);
    if (iVar4 == 0) {
code_r0x01489608:
      plVar17 = *(long **)(param_1 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar17,0,0);
      if (iVar4 == 0) {
        uVar16 = *(undefined8 *)(param_1 + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
        if (iVar4 == 0) {
code_r0x014896c4:
          plVar17 = *(long **)(param_1 + 0x68);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar17,0,0);
          if (iVar4 != 0) {
            if (((*(long *)(param_1 + 0x18) == 0) ||
                (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), lVar13 == 0)) ||
               (*(long *)(param_1 + 0x68) == 0)) goto LAB_014897a4;
            /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x68),*(undefined1 *)(lVar13 + 0x61),0);
          }
          plVar17 = *(long **)(param_1 + 0x60);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar17,0,0);
          if ((iVar4 == 0) || (iVar15 == 0)) {
code_r0x01489778:
            lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
            if (lVar13 != 0) {
              uVar16 = 1;
code_r0x0322ef1c:
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              if (pcRam0000000003ebf4c0 == (code *)0x0) {
                pcRam0000000003ebf4c0 =
                     (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
              }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar13 = (*pcRam0000000003ebf4c0)(lVar13,uVar16);
              return lVar13;
            }
          }
          else if (*(long *)(param_1 + 0x18) != 0) {
            plVar7 = *(long **)(param_1 + 0x60);
            uVar16 = Atlas_UI_LoadoutMetagameData__UnlockDescription();
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x558))(plVar7,uVar16,*(undefined8 *)(*plVar7 + 0x560));
              goto code_r0x01489778;
            }
          }
        }
        else {
          plVar17 = *(long **)(param_1 + 0x58);
          if (iVar15 == 0) {
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (uVar19 = Atlas_UI_LoadoutMetagameData__get_BackingColour(), plVar17 != (long *)0x0))
            goto code_r0x014896b0;
          }
          else if (plVar17 != (long *)0x0) {
            uVar19 = *(undefined4 *)(param_1 + 0x48);
code_r0x014896b0:
            (**(code **)(*plVar17 + 0x2a8))(uVar19,plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
            goto code_r0x014896c4;
          }
        }
      }
      else if ((*(long *)(param_1 + 0x28) != 0) &&
              (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0), lVar13 != 0)) {
        unaff_x30 = &UNK_01489658;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_1;
        unaff_x20 = uVar16;
        unaff_x21 = plVar17;
        unaff_x22 = uVar6;
        unaff_x29 = puVar1;
        goto code_r0x0322ef1c;
      }
    }
    else if (*(long *)(param_1 + 0x18) != 0) {
      plVar7 = *(long **)(param_1 + 0x30);
      uVar18 = Atlas_UI_LoadoutMetagameData__get_DisplayName();
      plVar17 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x558))(plVar7,uVar18,*(undefined8 *)(*plVar7 + 0x560));
        goto code_r0x01489608;
      }
    }
  }
LAB_014897a4:
  lVar13 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_LoadoutRepresentationViewBehaviour__TransitionToColour;
  puStack_50 = puVar1;
  if ((bRam0000000003eb4958 & 1) == 0) {
    func_0x00f78a20(0x3d5a0e0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e8);
    func_0x00f78a20(0x3d77380);
    bRam0000000003eb4958 = 1;
  }
  uVar16 = *(undefined8 *)(lVar13 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0);
  if (iVar4 != 0) {
    plVar7 = *(long **)(lVar13 + 0x20);
    if (plVar7 == (long *)0x0) goto code_r0x01489960;
    uVar16 = (**(code **)(*plVar7 + 0x358))(plVar7,*(undefined8 *)(*plVar7 + 0x360));
    uStack_90 = 0;
    uStack_88 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,0x3f800000,0x3f800000,&uStack_90,0);
    uVar16 = /*DG.Tweening.ShortcutExtensions$$DOVector*/ func_0x016b1f34((undefined4)uStack_90,uStack_90._4_4_,(undefined4)uStack_88,
                             uStack_88._4_4_,extraout_s0,uVar16,/*STR('_Params')*/ uRam0000000003d77380,0);
    plVar17 = (long *)func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar17,lVar13,uRam0000000003d5a0e0,0);
    /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar16,plVar17,uRam0000000003d5e6e8);
  }
  uVar16 = *(undefined8 *)(lVar13 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = 0;
  lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0);
  if ((int)lVar8 != 0) {
    if (*(long *)(lVar13 + 0x18) == 0) {
code_r0x01489960:
      lVar8 = func_0x00f78af4();
      uStack_c0 = 0x3d23990;
      puStack_98 = &Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToLocked;
      plVar7 = (long *)0x3eb4000;
      plStack_b8 = plVar17;
      uStack_b0 = uVar16;
      lStack_a8 = lVar13;
      ppuStack_a0 = &puStack_50;
      if ((bRam0000000003eb4959 & 1) == 0) {
        func_0x00f78a20(0x3d23298);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4959 = 1;
      }
      plVar9 = *(long **)(lVar8 + 0x58);
      if (plVar9 != (long *)0x0) {
        plVar17 = (long *)0x3d23000;
        (**(code **)(*plVar9 + 0x2a8))
                  (*(undefined4 *)(lVar8 + 0x48),*(undefined4 *)(lVar8 + 0x4c),
                   *(undefined4 *)(lVar8 + 0x50),*(undefined4 *)(lVar8 + 0x54),plVar9,
                   *(undefined8 *)(*plVar9 + 0x2b0));
        plVar7 = *(long **)(lVar8 + 0x70);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = 0;
        iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar7,0);
        if (iVar4 != 0) {
          plVar7 = *(long **)(lVar8 + 0x40);
          plVar17 = (long *)func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
          lVar12 = 0;
          /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(plVar17,plVar7);
          *(long **)(lVar8 + 0x70) = plVar17;
        }
        plVar9 = *(long **)(lVar8 + 0x20);
        if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (**(code **)(*plVar9 + 0x348))
                             (plVar9,*(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(*plVar9 + 0x350))
          ;
          return lVar13;
        }
      }
      lVar13 = func_0x00f78af4();
      puStack_c8 = &Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked;
      plStack_e0 = plVar7;
      lStack_d8 = lVar8;
      ppuStack_d0 = &ppuStack_a0;
      if (*(long *)(lVar13 + 0x18) != 0) {
        plVar7 = *(long **)(lVar13 + 0x58);
        Atlas_UI_LoadoutMetagameData__get_BackingColour();
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
          plVar9 = *(long **)(lVar13 + 0x20);
          if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar13 = (**(code **)(*plVar9 + 0x348))(plVar9,0,*(undefined8 *)(*plVar9 + 0x350));
            return lVar13;
          }
        }
      }
      lVar8 = func_0x00f78af4();
      puStack_e8 = &Atlas_UI_LoadoutRepresentationViewBehaviour__ResetMaterial;
      plVar9 = *(long **)(lVar8 + 0x20);
      ppuStack_f0 = &ppuStack_d0;
      if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar13 = (**(code **)(*plVar9 + 0x348))(plVar9,0,*(undefined8 *)(*plVar9 + 0x350));
        return lVar13;
      }
      lVar8 = func_0x00f78af4();
      plStack_120 = (long *)0x3d23990;
      puStack_f8 = &Atlas_UI_LoadoutRepresentationViewBehaviour___ctor;
      plStack_118 = plVar17;
      plStack_110 = plVar7;
      puStack_108 = (undefined *)lVar13;
      puStack_100 = (undefined1 *)&ppuStack_f0;
      if ((bRam0000000003eb495a & 1) == 0) {
        puStack_100 = (undefined1 *)&ppuStack_f0;
        func_0x00f78a20(0x3d400e8);
        bRam0000000003eb495a = 1;
      }
      puVar3 = puStack_108;
      plVar9 = plStack_110;
      plVar7 = plStack_118;
      plVar17 = plStack_120;
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4(0,uRam0000000003d400e8);
        plStack_120 = plVar9;
        plStack_118 = (long *)puVar3;
        puStack_108 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
        pplStack_130 = &plStack_110;
        if (lVar8 == 0) {
          plStack_110 = (long *)&puStack_100;
          auVar20 = func_0x00f78af4();
          plVar11 = auVar20._8_8_;
          uStack_150 = plVar17;
          plStack_148 = plVar7;
          plStack_140 = plVar9;
          lStack_138 = (long)puVar3;
          puStack_128 = &
                        UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe
          ;
          lVar13 = lVar12;
          if ((bRam0000000003eb89d1 & 1) == 0) {
            func_0x00f78a20(0x3d21510);
            bRam0000000003eb89d1 = 1;
          }
          if (plVar11 != (long *)0x0) {
            uVar2 = *(undefined1 *)(auVar20._0_8_ + 0x10);
            lVar13 = **(long **)(*(long *)(lVar12 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            lVar8 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x0284ff28;
                }
                piVar14 = piVar14 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar11,lVar13,0);
code_r0x0284ff28:
            (*(code *)*puVar10)(plVar11,uVar2,puVar10[1]);
            lVar13 = **(long **)(*(long *)(lVar12 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            lVar12 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto code_r0x0284ffac;
                }
                piVar14 = piVar14 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar11,lVar13,2);
code_r0x0284ffac:
            (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
          }
          lVar8 = func_0x00f78af4();
          puStack_158 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
          ppuStack_180 = &ppuStack_160;
          if (lVar8 == 0) {
            lStack_170 = lVar12;
            plStack_168 = plVar11;
            ppuStack_160 = &pplStack_130;
            auVar21 = func_0x00f78af4();
            plVar17 = auVar21._8_8_;
            uStack_1a0 = 0x3eb8000;
            puStack_178 = &
                          UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe
            ;
            lStack_190 = lVar12;
            if ((bRam0000000003eb89d2 & 1) == 0) {
              lStack_198 = auVar20._0_8_;
              plStack_188 = plVar11;
              func_0x00f78a20(0x3d21510);
              auVar20._8_8_ = plStack_188;
              auVar20._0_8_ = lStack_198;
              bRam0000000003eb89d2 = 1;
            }
            plStack_188 = auVar20._8_8_;
            lStack_198 = auVar20._0_8_;
            if (plVar17 == (long *)0x0) {
              auVar20 = func_0x00f78af4();
              puStack_1a8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
              alStack_1c0[0] = 0;
              alStack_1c0[1] = 0;
              ppuStack_1b0 = &ppuStack_180;
              /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(alStack_1c0,auVar20._0_8_,
                              *(undefined8 *)(*(long *)(*(long *)(auVar20._8_8_ + 0x18) + 0xc0) + 8)
                             );
              return alStack_1c0[0];
            }
            uVar16 = *(undefined8 *)(auVar21._0_8_ + 0x10);
            lVar12 = **(long **)(*(long *)(lVar13 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar12);
              auVar20._8_8_ = plStack_188;
              auVar20._0_8_ = lStack_198;
            }
            plStack_188 = auVar20._8_8_;
            lStack_198 = auVar20._0_8_;
            lVar8 = *plVar17;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar12) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x028500d0;
                }
                piVar14 = piVar14 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar17,lVar12,0);
            auVar20._8_8_ = plStack_188;
            auVar20._0_8_ = lStack_198;
code_r0x028500d0:
            plStack_188 = auVar20._8_8_;
            lStack_198 = auVar20._0_8_;
            (*(code *)*puVar10)(plVar17,uVar16,puVar10[1]);
            lVar13 = **(long **)(*(long *)(lVar13 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar13);
            }
            lVar12 = *plVar17;
            uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar13) {
                  puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto code_r0x02850154;
                }
                piVar14 = piVar14 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar17,lVar13,2);
code_r0x02850154:
            (*(code *)*puVar10)(plVar17,puVar10[1]);
            if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
          }
        }
      }
      else {
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      return lVar8;
    }
    uVar16 = *(undefined8 *)(lVar13 + 0x58);
    Atlas_UI_LoadoutMetagameData__get_BackingColour();
    lVar8 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(uVar16,0);
  }
  return lVar8;
}



// ============================================================
// RVA: 0x14897a8 | Atlas.UI.LoadoutRepresentationViewBehaviour.TransitionToColour
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

long Atlas_UI_LoadoutRepresentationViewBehaviour__TransitionToColour
               (undefined4 param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long alStack_180 [2];
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  long *plStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long **pplStack_f0;
  undefined *puStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plVar9;
  
  if ((bRam0000000003eb4958 & 1) == 0) {
    func_0x00f78a20(0x3d5a0e0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e8);
    func_0x00f78a20(0x3d77380);
    bRam0000000003eb4958 = 1;
  }
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = 0;
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0);
  if (iVar3 != 0) {
    plVar4 = *(long **)(param_2 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_01489960;
    uVar13 = (**(code **)(*plVar4 + 0x358))(plVar4,*(undefined8 *)(*plVar4 + 0x360));
    uStack_50 = 0;
    uStack_48 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,0x3f800000,0x3f800000,&uStack_50,0);
    uVar13 = /*DG.Tweening.ShortcutExtensions$$DOVector*/ func_0x016b1f34((undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,
                             uStack_48._4_4_,param_1,uVar13,/*STR('_Params')*/ uRam0000000003d77380,0);
    unaff_x21 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(unaff_x21,param_2,uRam0000000003d5a0e0,0);
    /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar13,unaff_x21,uRam0000000003d5e6e8);
  }
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = 0;
  lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0);
  if ((int)lVar5 != 0) {
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_01489960:
      lVar5 = func_0x00f78af4();
      uStack_80 = 0x3d23990;
      puStack_58 = &Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToLocked;
      plVar4 = (long *)0x3eb4000;
      uStack_78 = unaff_x21;
      uStack_70 = uVar13;
      lStack_68 = param_2;
      puStack_60 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4959 & 1) == 0) {
        func_0x00f78a20(0x3d23298);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4959 = 1;
      }
      plVar6 = *(long **)(lVar5 + 0x58);
      if (plVar6 != (long *)0x0) {
        unaff_x21 = 0x3d23000;
        (**(code **)(*plVar6 + 0x2a8))
                  (*(undefined4 *)(lVar5 + 0x48),*(undefined4 *)(lVar5 + 0x4c),
                   *(undefined4 *)(lVar5 + 0x50),*(undefined4 *)(lVar5 + 0x54),plVar6,
                   *(undefined8 *)(*plVar6 + 0x2b0));
        plVar4 = *(long **)(lVar5 + 0x70);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar10 = 0;
        iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar4,0);
        if (iVar3 != 0) {
          plVar4 = *(long **)(lVar5 + 0x40);
          unaff_x21 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
          lVar10 = 0;
          /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x21,plVar4);
          *(undefined8 *)(lVar5 + 0x70) = unaff_x21;
        }
        plVar6 = *(long **)(lVar5 + 0x20);
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(*plVar6 + 0x348))
                             (plVar6,*(undefined8 *)(lVar5 + 0x70),*(undefined8 *)(*plVar6 + 0x350))
          ;
          return lVar10;
        }
      }
      lVar7 = func_0x00f78af4();
      puStack_88 = &Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked;
      plStack_a0 = plVar4;
      lStack_98 = lVar5;
      ppuStack_90 = &puStack_60;
      if (*(long *)(lVar7 + 0x18) != 0) {
        plVar4 = *(long **)(lVar7 + 0x58);
        Atlas_UI_LoadoutMetagameData__get_BackingColour();
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
          plVar6 = *(long **)(lVar7 + 0x20);
          if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar10 = (**(code **)(*plVar6 + 0x348))(plVar6,0,*(undefined8 *)(*plVar6 + 0x350));
            return lVar10;
          }
        }
      }
      lVar5 = func_0x00f78af4();
      puStack_a8 = &Atlas_UI_LoadoutRepresentationViewBehaviour__ResetMaterial;
      plVar6 = *(long **)(lVar5 + 0x20);
      ppuStack_b0 = &ppuStack_90;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar10 = (**(code **)(*plVar6 + 0x348))(plVar6,0,*(undefined8 *)(*plVar6 + 0x350));
        return lVar10;
      }
      lVar5 = func_0x00f78af4();
      plStack_e0 = (long *)0x3d23990;
      puStack_b8 = &Atlas_UI_LoadoutRepresentationViewBehaviour___ctor;
      lStack_d8 = unaff_x21;
      plStack_d0 = plVar4;
      puStack_c8 = (undefined *)lVar7;
      puStack_c0 = (undefined1 *)&ppuStack_b0;
      if ((bRam0000000003eb495a & 1) == 0) {
        puStack_c0 = (undefined1 *)&ppuStack_b0;
        func_0x00f78a20(0x3d400e8);
        bRam0000000003eb495a = 1;
      }
      puVar2 = puStack_c8;
      plVar6 = plStack_d0;
      lVar7 = lStack_d8;
      plVar4 = plStack_e0;
      if (lVar5 == 0) {
        lVar5 = func_0x00f78af4(0,uRam0000000003d400e8);
        plStack_e0 = plVar6;
        lStack_d8 = (long)puVar2;
        puStack_c8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
        pplStack_f0 = &plStack_d0;
        if (lVar5 == 0) {
          plStack_d0 = (long *)&puStack_c0;
          auVar14 = func_0x00f78af4();
          plVar9 = auVar14._8_8_;
          uStack_110 = plVar4;
          uStack_108 = lVar7;
          plStack_100 = plVar6;
          lStack_f8 = (long)puVar2;
          puStack_e8 = &
                       UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe
          ;
          lVar7 = lVar10;
          if ((bRam0000000003eb89d1 & 1) == 0) {
            func_0x00f78a20(0x3d21510);
            bRam0000000003eb89d1 = 1;
          }
          if (plVar9 != (long *)0x0) {
            uVar1 = *(undefined1 *)(auVar14._0_8_ + 0x10);
            lVar5 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar5);
            }
            lVar7 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar5) {
                  puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto code_r0x0284ff28;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar5,0);
code_r0x0284ff28:
            (*(code *)*puVar8)(plVar9,uVar1,puVar8[1]);
            lVar10 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            lVar5 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto code_r0x0284ffac;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,2);
code_r0x0284ffac:
            (*(code *)*puVar8)(plVar9,puVar8[1]);
            if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
          }
          lVar5 = func_0x00f78af4();
          puStack_118 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
          ppuStack_140 = &ppuStack_120;
          if (lVar5 == 0) {
            lStack_130 = lVar10;
            plStack_128 = plVar9;
            ppuStack_120 = &pplStack_f0;
            auVar15 = func_0x00f78af4();
            plVar4 = auVar15._8_8_;
            uStack_160 = 0x3eb8000;
            puStack_138 = &
                          UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe
            ;
            lStack_150 = lVar10;
            if ((bRam0000000003eb89d2 & 1) == 0) {
              lStack_158 = auVar14._0_8_;
              plStack_148 = plVar9;
              func_0x00f78a20(0x3d21510);
              auVar14._8_8_ = plStack_148;
              auVar14._0_8_ = lStack_158;
              bRam0000000003eb89d2 = 1;
            }
            plStack_148 = auVar14._8_8_;
            lStack_158 = auVar14._0_8_;
            if (plVar4 == (long *)0x0) {
              auVar14 = func_0x00f78af4();
              puStack_168 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
              alStack_180[0] = 0;
              alStack_180[1] = 0;
              ppuStack_170 = &ppuStack_140;
              /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(alStack_180,auVar14._0_8_,
                              *(undefined8 *)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 8)
                             );
              return alStack_180[0];
            }
            uVar13 = *(undefined8 *)(auVar15._0_8_ + 0x10);
            lVar10 = **(long **)(*(long *)(lVar7 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
              auVar14._8_8_ = plStack_148;
              auVar14._0_8_ = lStack_158;
            }
            plStack_148 = auVar14._8_8_;
            lStack_158 = auVar14._0_8_;
            lVar5 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                  goto code_r0x028500d0;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar4,lVar10,0);
            auVar14._8_8_ = plStack_148;
            auVar14._0_8_ = lStack_158;
code_r0x028500d0:
            plStack_148 = auVar14._8_8_;
            lStack_158 = auVar14._0_8_;
            (*(code *)*puVar8)(plVar4,uVar13,puVar8[1]);
            lVar10 = **(long **)(*(long *)(lVar7 + 0x18) + 0xc0);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            lVar5 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto code_r0x02850154;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar4,lVar10,2);
code_r0x02850154:
            (*(code *)*puVar8)(plVar4,puVar8[1]);
            if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
          }
        }
      }
      else {
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
      }
      return lVar5;
    }
    uVar13 = *(undefined8 *)(param_2 + 0x58);
    Atlas_UI_LoadoutMetagameData__get_BackingColour();
    lVar5 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(uVar13,0);
  }
  return lVar5;
}



// ============================================================
// RVA: 0x1489964 | Atlas.UI.LoadoutRepresentationViewBehaviour.SetThumbnailToLocked
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToLocked
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long **pplStack_a0;
  undefined *puStack_98;
  long *plStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  plVar12 = (long *)0x3eb4000;
  if ((bRam0000000003eb4959 & 1) == 0) {
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4959 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    unaff_x21 = 0x3d23000;
    (**(code **)(*plVar5 + 0x2a8))
              (*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),plVar5,
               *(undefined8 *)(*plVar5 + 0x2b0));
    plVar12 = *(long **)(param_1 + 0x70);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 0;
    iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar12,0);
    if (iVar4 != 0) {
      plVar12 = *(long **)(param_1 + 0x40);
      unaff_x21 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      param_3 = 0;
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(unaff_x21,plVar12);
      *(undefined8 *)(param_1 + 0x70) = unaff_x21;
    }
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar14 = (**(code **)(*plVar5 + 0x348))
                          (plVar5,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(*plVar5 + 0x350));
      return auVar14;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked;
  plStack_50 = plVar12;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar6 + 0x18) != 0) {
    plVar12 = *(long **)(lVar6 + 0x58);
    Atlas_UI_LoadoutMetagameData__get_BackingColour();
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x2a8))(plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar14 = (**(code **)(*plVar5 + 0x348))(plVar5,0,*(undefined8 *)(*plVar5 + 0x350));
        return auVar14;
      }
    }
  }
  lVar7 = func_0x00f78af4();
  puStack_58 = &Atlas_UI_LoadoutRepresentationViewBehaviour__ResetMaterial;
  plVar5 = *(long **)(lVar7 + 0x20);
  ppuStack_60 = &puStack_40;
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar14 = (**(code **)(*plVar5 + 0x348))(plVar5,0,*(undefined8 *)(*plVar5 + 0x350));
    return auVar14;
  }
  uVar8 = func_0x00f78af4();
  puStack_68 = &Atlas_UI_LoadoutRepresentationViewBehaviour___ctor;
  plStack_80 = plVar12;
  puStack_78 = (undefined *)lVar6;
  puStack_70 = (undefined1 *)&ppuStack_60;
  if ((bRam0000000003eb495a & 1) == 0) {
    puStack_70 = (undefined1 *)&ppuStack_60;
    func_0x00f78a20(0x3d400e8);
    bRam0000000003eb495a = 1;
  }
  puVar3 = puStack_78;
  plVar12 = plStack_80;
  if (uVar8 == 0) {
    uVar8 = func_0x00f78af4(0,uRam0000000003d400e8);
    puStack_78 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    pplStack_a0 = &plStack_80;
    if (uVar8 == 0) {
      plStack_80 = (long *)&puStack_70;
      auVar14 = func_0x00f78af4();
      plVar5 = auVar14._8_8_;
      plStack_b0 = plVar12;
      lStack_a8 = (long)puVar3;
      puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar6 = param_3;
      uStack_b8 = unaff_x21;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar5 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar14._0_8_ + 0x10);
        lVar6 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar11 = piVar11 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar5,lVar6,0);
code_r0x0284ff28:
        (*(code *)*puVar9)(plVar5,uVar1,puVar9[1]);
        lVar6 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar11 = piVar11 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar5,lVar6,2);
code_r0x0284ffac:
        (*(code *)*puVar9)(plVar5,puVar9[1]);
        uVar13 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar13 = extraout_x1_00;
        }
        auVar15._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar15._8_8_ = uVar13;
        return auVar15;
      }
      uVar8 = func_0x00f78af4();
      puStack_c8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_f0 = &ppuStack_d0;
      if (uVar8 == 0) {
        lStack_e0 = param_3;
        plStack_d8 = plVar5;
        ppuStack_d0 = &pplStack_a0;
        auVar15 = func_0x00f78af4();
        plVar12 = auVar15._8_8_;
        uStack_110 = 0x3eb8000;
        puStack_e8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_100 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_108 = auVar14._0_8_;
          plStack_f8 = plVar5;
          func_0x00f78a20(0x3d21510);
          auVar14._8_8_ = plStack_f8;
          auVar14._0_8_ = lStack_108;
          bRam0000000003eb89d2 = 1;
        }
        plStack_f8 = auVar14._8_8_;
        lStack_108 = auVar14._0_8_;
        if (plVar12 == (long *)0x0) {
          auVar14 = func_0x00f78af4();
          puStack_118 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_130 = 0;
          uStack_128 = 0;
          ppuStack_120 = &ppuStack_f0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_130,auVar14._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_128;
          auVar2._0_8_ = uStack_130;
          return auVar2;
        }
        uVar13 = *(undefined8 *)(auVar15._0_8_ + 0x10);
        lVar7 = **(long **)(*(long *)(lVar6 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
          auVar14._8_8_ = plStack_f8;
          auVar14._0_8_ = lStack_108;
        }
        plStack_f8 = auVar14._8_8_;
        lStack_108 = auVar14._0_8_;
        lVar10 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar11 = piVar11 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar12,lVar7,0);
        auVar14._8_8_ = plStack_f8;
        auVar14._0_8_ = lStack_108;
code_r0x028500d0:
        plStack_f8 = auVar14._8_8_;
        lStack_108 = auVar14._0_8_;
        (*(code *)*puVar9)(plVar12,uVar13,puVar9[1]);
        lVar6 = **(long **)(*(long *)(lVar6 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar7 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar11 = piVar11 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar12,lVar6,2);
code_r0x02850154:
        (*(code *)*puVar9)(plVar12,puVar9[1]);
        uVar13 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar13 = extraout_x1_02;
        }
        auVar16._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar16._8_8_ = uVar13;
        return auVar16;
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar8;
  return auVar17;
}



// ============================================================
// RVA: 0x1489a50 | Atlas.UI.LoadoutRepresentationViewBehaviour.SetThumbnailToUnlocked
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_LoadoutRepresentationViewBehaviour__SetThumbnailToUnlocked
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x20;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  long *plStack_80;
  long lStack_78;
  long **pplStack_70;
  undefined *puStack_68;
  long *plStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    unaff_x20 = *(long **)(param_1 + 0x58);
    Atlas_UI_LoadoutMetagameData__get_BackingColour();
    if (unaff_x20 != (long *)0x0) {
      (**(code **)(*unaff_x20 + 0x2a8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x2b0));
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar13 = (**(code **)(*plVar4 + 0x348))(plVar4,0,*(undefined8 *)(*plVar4 + 0x350));
        return auVar13;
      }
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_28 = &Atlas_UI_LoadoutRepresentationViewBehaviour__ResetMaterial;
  plVar4 = *(long **)(lVar5 + 0x20);
  puStack_30 = &stack0xfffffffffffffff0;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar13 = (**(code **)(*plVar4 + 0x348))(plVar4,0,*(undefined8 *)(*plVar4 + 0x350));
    return auVar13;
  }
  uVar6 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_LoadoutRepresentationViewBehaviour___ctor;
  plStack_50 = unaff_x20;
  puStack_48 = (undefined *)param_1;
  puStack_40 = (undefined1 *)&puStack_30;
  if ((bRam0000000003eb495a & 1) == 0) {
    puStack_40 = (undefined1 *)&puStack_30;
    func_0x00f78a20(0x3d400e8);
    bRam0000000003eb495a = 1;
  }
  puVar3 = puStack_48;
  plVar4 = plStack_50;
  if (uVar6 == 0) {
    uVar6 = func_0x00f78af4(0,uRam0000000003d400e8);
    puStack_48 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit____ctor;
    pplStack_70 = &plStack_50;
    if (uVar6 == 0) {
      plStack_50 = (long *)&puStack_40;
      auVar13 = func_0x00f78af4();
      plVar8 = auVar13._8_8_;
      plStack_80 = plVar4;
      lStack_78 = (long)puVar3;
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar5 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar8 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar13._0_8_ + 0x10);
        lVar5 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar9 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar5,0);
code_r0x0284ff28:
        (*(code *)*puVar7)(plVar8,uVar1,puVar7[1]);
        lVar5 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar9 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar5,2);
code_r0x0284ffac:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar12 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar12 = extraout_x1_00;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar12;
        return auVar14;
      }
      uVar6 = func_0x00f78af4();
      puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_c0 = &ppuStack_a0;
      if (uVar6 == 0) {
        lStack_b0 = param_3;
        plStack_a8 = plVar8;
        ppuStack_a0 = &pplStack_70;
        auVar14 = func_0x00f78af4();
        plVar4 = auVar14._8_8_;
        uStack_e0 = 0x3eb8000;
        puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_d0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_d8 = auVar13._0_8_;
          plStack_c8 = plVar8;
          func_0x00f78a20(0x3d21510);
          auVar13._8_8_ = plStack_c8;
          auVar13._0_8_ = lStack_d8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_c8 = auVar13._8_8_;
        lStack_d8 = auVar13._0_8_;
        if (plVar4 == (long *)0x0) {
          auVar13 = func_0x00f78af4();
          puStack_e8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_100 = 0;
          uStack_f8 = 0;
          ppuStack_f0 = &ppuStack_c0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_100,auVar13._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_f8;
          auVar2._0_8_ = uStack_100;
          return auVar2;
        }
        uVar12 = *(undefined8 *)(auVar14._0_8_ + 0x10);
        lVar9 = **(long **)(*(long *)(lVar5 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
          auVar13._8_8_ = plStack_c8;
          auVar13._0_8_ = lStack_d8;
        }
        plStack_c8 = auVar13._8_8_;
        lStack_d8 = auVar13._0_8_;
        lVar10 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,lVar9,0);
        auVar13._8_8_ = plStack_c8;
        auVar13._0_8_ = lStack_d8;
code_r0x028500d0:
        plStack_c8 = auVar13._8_8_;
        lStack_d8 = auVar13._0_8_;
        (*(code *)*puVar7)(plVar4,uVar12,puVar7[1]);
        lVar5 = **(long **)(*(long *)(lVar5 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar9 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar11 = piVar11 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,lVar5,2);
code_r0x02850154:
        (*(code *)*puVar7)(plVar4,puVar7[1]);
        uVar12 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar12 = extraout_x1_02;
        }
        auVar15._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar15._8_8_ = uVar12;
        return auVar15;
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar6;
  return auVar16;
}



// ============================================================
// RVA: 0x1489ab0 | Atlas.UI.LoadoutRepresentationViewBehaviour.ResetMaterial
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_LoadoutRepresentationViewBehaviour__ResetMaterial
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01489ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar12 = (**(code **)(*plVar3 + 0x348))(plVar3,0,*(undefined8 *)(*plVar3 + 0x350));
    return auVar12;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb495a & 1) == 0) {
    func_0x00f78a20(0x3d400e8);
    bRam0000000003eb495a = 1;
  }
  if (uVar4 == 0) {
    uVar4 = func_0x00f78af4(0,uRam0000000003d400e8);
    puStack_50 = &stack0xffffffffffffffd0;
    if (uVar4 == 0) {
      auVar12 = func_0x00f78af4();
      plVar3 = auVar12._8_8_;
      puStack_48 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar11 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar3 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar12._0_8_ + 0x10);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,lVar11,0);
code_r0x0284ff28:
        (*(code *)*puVar5)(plVar3,uVar1,puVar5[1]);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,lVar11,2);
code_r0x0284ffac:
        (*(code *)*puVar5)(plVar3,puVar5[1]);
        uVar10 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_00;
        }
        auVar13._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar13._8_8_ = uVar10;
        return auVar13;
      }
      uVar4 = func_0x00f78af4();
      puStack_78 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_a0 = &ppuStack_80;
      if (uVar4 == 0) {
        lStack_90 = param_3;
        plStack_88 = plVar3;
        ppuStack_80 = &puStack_50;
        auVar13 = func_0x00f78af4();
        plVar6 = auVar13._8_8_;
        uStack_c0 = 0x3eb8000;
        puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_b0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_b8 = auVar12._0_8_;
          plStack_a8 = plVar3;
          func_0x00f78a20(0x3d21510);
          auVar12._8_8_ = plStack_a8;
          auVar12._0_8_ = lStack_b8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_a8 = auVar12._8_8_;
        lStack_b8 = auVar12._0_8_;
        if (plVar6 == (long *)0x0) {
          auVar12 = func_0x00f78af4();
          puStack_c8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_e0 = 0;
          uStack_d8 = 0;
          ppuStack_d0 = &ppuStack_a0;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_e0,auVar12._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar12._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_d8;
          auVar2._0_8_ = uStack_e0;
          return auVar2;
        }
        uVar10 = *(undefined8 *)(auVar13._0_8_ + 0x10);
        lVar7 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
          auVar12._8_8_ = plStack_a8;
          auVar12._0_8_ = lStack_b8;
        }
        plStack_a8 = auVar12._8_8_;
        lStack_b8 = auVar12._0_8_;
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,lVar7,0);
        auVar12._8_8_ = plStack_a8;
        auVar12._0_8_ = lStack_b8;
code_r0x028500d0:
        plStack_a8 = auVar12._8_8_;
        lStack_b8 = auVar12._0_8_;
        (*(code *)*puVar5)(plVar6,uVar10,puVar5[1]);
        lVar11 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar9 = piVar9 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,2);
code_r0x02850154:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar10 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_02;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar10;
        return auVar14;
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar4;
  return auVar15;
}



// ============================================================
// RVA: 0x1489adc | Atlas.UI.LoadoutRepresentationViewBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_LoadoutRepresentationViewBehaviour___ctor(ulong param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  long *plVar4;
  long *plVar5;
  
  if ((bRam0000000003eb495a & 1) == 0) {
    func_0x00f78a20(0x3d400e8);
    bRam0000000003eb495a = 1;
  }
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d400e8);
    puStack_40 = &stack0xffffffffffffffe0;
    if (param_1 == 0) {
      auVar12 = func_0x00f78af4();
      plVar4 = auVar12._8_8_;
      puStack_38 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar11 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar4 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar12._0_8_ + 0x10);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,0);
code_r0x0284ff28:
        (*(code *)*puVar3)(plVar4,uVar1,puVar3[1]);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,2);
code_r0x0284ffac:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
        uVar10 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_00;
        }
        auVar13._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar13._8_8_ = uVar10;
        return auVar13;
      }
      param_1 = func_0x00f78af4();
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_90 = &ppuStack_70;
      if (param_1 == 0) {
        lStack_80 = param_3;
        plStack_78 = plVar4;
        ppuStack_70 = &puStack_40;
        auVar13 = func_0x00f78af4();
        plVar5 = auVar13._8_8_;
        uStack_b0 = 0x3eb8000;
        puStack_88 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_a0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_a8 = auVar12._0_8_;
          plStack_98 = plVar4;
          func_0x00f78a20(0x3d21510);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        if (plVar5 == (long *)0x0) {
          auVar12 = func_0x00f78af4();
          puStack_b8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_d0 = 0;
          uStack_c8 = 0;
          ppuStack_c0 = &ppuStack_90;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_d0,auVar12._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar12._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_c8;
          auVar2._0_8_ = uStack_d0;
          return auVar2;
        }
        uVar10 = *(undefined8 *)(auVar13._0_8_ + 0x10);
        lVar6 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar5,lVar6,0);
        auVar12._8_8_ = plStack_98;
        auVar12._0_8_ = lStack_a8;
code_r0x028500d0:
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        (*(code *)*puVar3)(plVar5,uVar10,puVar3[1]);
        lVar11 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar5,lVar11,2);
code_r0x02850154:
        (*(code *)*puVar3)(plVar5,puVar3[1]);
        uVar10 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_02;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar10;
        return auVar14;
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_1;
  return auVar15;
}



