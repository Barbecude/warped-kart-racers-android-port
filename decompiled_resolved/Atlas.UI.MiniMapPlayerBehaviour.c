// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.MiniMapPlayerBehaviour

// ============================================================
// RVA: 0x1495440 | Atlas.UI.MiniMapPlayerBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01495770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01495774) */
/* WARNING: Removing unreachable block (ram,0x01495698) */
/* WARNING: Removing unreachable block (ram,0x014957e4) */
/* WARNING: Removing unreachable block (ram,0x014956a0) */
/* WARNING: Removing unreachable block (ram,0x014956b8) */
/* WARNING: Removing unreachable block (ram,0x014956c0) */
/* WARNING: Removing unreachable block (ram,0x014956c4) */

void Atlas_UI_MiniMapPlayerBehaviour__Init
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
               long *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if ((bRam0000000003eb49c7 & 1) == 0) {
    func_0x00f78a20(0x3d5a770);
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb49c7 = 1;
  }
  *(long *)(param_4 + 0x30) = *param_5;
  if ((*param_5 != 0) && (*(long *)(param_4 + 0x20) != 0)) {
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_4 + 0x20),*(undefined8 *)(*param_5 + 0xa8),0);
    if (*(long *)(param_4 + 0x18) != 0) {
      param_3 = 0;
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(param_1,*(long *)(param_4 + 0x18),0);
      param_2 = param_1;
      if (((*(long *)(param_4 + 0x30) != 0) &&
          (lVar7 = *(long *)(*(long *)(param_4 + 0x30) + 0x10), lVar7 != 0)) &&
         (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
        lVar7 = *(long *)(lVar7 + 0x60);
        uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ uRam0000000003d23a58);
        Atlas_Gameplay_Kart_OnKartSpinOutDelegate___ctor(uVar3,param_4,uRam0000000003d5a770,0);
        param_2 = param_1;
        if (lVar7 != 0) {
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnSpinOutTriggered
                    (lVar7,uVar3,0);
          *(undefined4 *)(param_4 + 0x38) = 0;
          param_2 = param_1;
          if (*(long *)(param_4 + 0x20) != 0) {
            lVar7 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_4 + 0x20),0);
            /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
            param_2 = param_1;
            if (lVar7 != 0) {
              /*UnityEngine.Transform$$set_eulerAngles*/ func_0x0327548c(lVar7,0);
              lVar7 = unaff_x19;
              if (*(long *)(param_4 + 0x18) == 0) {
Atlas_UI_MiniMapPlayerBehaviour__Spin:
                lVar5 = func_0x00f78af4();
                if (0 < *(int *)(lVar5 + 0x28)) {
                  if (((*(long *)(lVar5 + 0x30) == 0) ||
                      (lVar8 = *(long *)(*(long *)(lVar5 + 0x30) + 0x10), lVar8 == 0)) ||
                     ((lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0 ||
                      (lVar8 = *(long *)(lVar8 + 0x60), lVar8 == 0)))) {
                    auVar11 = func_0x00f78af4();
                    plVar6 = auVar11._8_8_;
                    if ((bRam0000000003eb49c3 & 1) == 0) {
                      puStack_50 = param_4;
                      pcStack_48 = (code *)lVar7;
                      func_0x00f78a20(0x3d23c68);
                      bRam0000000003eb49c3 = 1;
                    }
                    if ((*(char *)(auVar11._0_8_ + 0x70) == '\0') && (plVar6 != (long *)0x0)) {
                      if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) <= *(byte *)(*plVar6 + 300)) &&
                         (*(long *)(*(long *)(*plVar6 + 200) +
                                    (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) * 8 + -8) ==
                          /*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68)) {
                        *(long **)(auVar11._0_8_ + 0xb8) = plVar6;
                      }
                    }
                    return;
                  }
                  fVar10 = *(float *)(lVar8 + 100);
                  *(float *)(lVar5 + 0x3c) = fVar10;
                  if (0.0 < fVar10) {
                    *(float *)(lVar5 + 0x38) = fVar10;
                  }
                }
                return;
              }
              lVar7 = 1;
              lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x18),0);
              if (lVar5 == 0) goto Atlas_UI_MiniMapPlayerBehaviour__Spin;
              iVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar5,0);
              if (iVar2 == 1) {
                return;
              }
              if ((*(long *)(param_4 + 0x18) == 0) ||
                 (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x18),0), lVar5 == 0))
              goto Atlas_UI_MiniMapPlayerBehaviour__Spin;
              goto code_r0x0322ef1c;
            }
          }
        }
      }
    }
  }
  auVar11 = func_0x00f78af4();
  unaff_x19 = auVar11._0_8_;
  pcStack_48 = Atlas_UI_MiniMapBehaviour__SetupCollectibleIcons;
  unaff_x29 = &puStack_50;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb49c6 & 1) == 0) {
    func_0x00f78a20(0x3d322a8);
    func_0x00f78a20(0x3d322b0);
    func_0x00f78a20(0x3d322b8);
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d3a100);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb49c6 = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  if (auVar11._8_8_ != 0) {
    unaff_x22 = 0x3d322a8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,auVar11._8_8_,uRam0000000003d3a100);
    uStack_c8 = uStack_f0;
    uStack_d0 = uStack_f8;
    lStack_c0 = lStack_e8;
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d0,uRam0000000003d322b0);
    lVar7 = lStack_c0;
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x68) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x19 + 0x68),0);
        if (lVar7 == 0) {
          func_0x00f78af4();
        }
        else {
          lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          if (lVar7 == 0) {
            func_0x00f78af4();
          }
          else {
            uStack_e0 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar7,0);
            uStack_dc = param_2;
            uStack_d8 = param_3;
            uVar9 = Atlas_UI_MiniMapBehaviour__MapPosition(unaff_x19,&uStack_e0);
            if (lVar5 == 0) {
              func_0x00f78af4();
            }
            else {
              unaff_x21 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578e0);
              if (*(long *)(unaff_x19 + 0x68) == 0) {
                func_0x00f78af4();
              }
              else {
                lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(unaff_x19 + 0x68),0);
                if (lVar7 == 0) {
                  func_0x00f78af4();
                }
                else {
                  uVar3 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar7,0);
                  if (unaff_x21 != 0) {
                    /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(unaff_x21,uVar3,0);
                    /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(uVar9,param_2,unaff_x21,0);
                    unaff_x30 = 0x1495774;
                    register0x00000008 = (BADSPACEBASE *)auStack_100;
                    unaff_x20 = lVar5;
code_r0x0322ef1c:
                    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
                    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
                    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
                    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
                    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
                    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
                    if (pcRam0000000003ebf4c0 == (code *)0x0) {
                      pcRam0000000003ebf4c0 =
                           (code *)func_0x00f789d4(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000003ebf4c0)(lVar5,1);
                    return;
                  }
                  func_0x00f78af4(uVar3,uVar3);
                }
              }
            }
          }
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14957ec);
      (*pcVar1)();
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d0,uRam0000000003d322a8);
  }
  return;
}



// ============================================================
// RVA: 0x1495a60 | Atlas.UI.MiniMapPlayerBehaviour.DeInit
// ============================================================

undefined1  [16] Atlas_UI_MiniMapPlayerBehaviour__DeInit(undefined1 param_1 [16],long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar9;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  uVar1 = param_1._8_8_;
  uVar9 = param_1._4_4_;
  uVar4 = param_1._0_4_;
  if ((bRam0000000003eb49c8 & 1) == 0) {
    func_0x00f78a20(0x3d5a770);
    func_0x00f78a20(0x3d23a58);
    bRam0000000003eb49c8 = 1;
    uVar4 = extraout_s0;
    uVar9 = extraout_var;
    uVar1 = extraout_var_01;
  }
  if (*(long *)(param_2 + 0x30) == 0) {
LAB_01495afc:
    *(undefined8 *)(param_2 + 0x30) = 0;
    auVar13._4_4_ = uVar9;
    auVar13._0_4_ = uVar4;
    auVar13._8_8_ = uVar1;
    return auVar13;
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
    lVar3 = *(long *)(lVar3 + 0x60);
    uVar1 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ uRam0000000003d23a58);
    Atlas_Gameplay_Kart_OnKartSpinOutDelegate___ctor(uVar1,param_2,uRam0000000003d5a770,0);
    if (lVar3 != 0) {
      Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnSpinOutTriggered
                (lVar3,uVar1,0);
      uVar4 = extraout_s0_00;
      uVar9 = extraout_var_00;
      uVar1 = extraout_var_02;
      goto LAB_01495afc;
    }
  }
  auVar13 = func_0x00f78af4();
  lVar2 = auVar13._0_8_;
  fVar11 = *auVar13._8_8_;
  lVar3 = lVar2 + 0x74;
  fVar5 = (float)/*UnityEngine.Rect$$get_xMin*/ func_0x03253524(lVar3,0);
  fVar6 = (float)/*UnityEngine.Rect$$get_width*/ func_0x03253564(lVar3,0);
  fVar10 = *(float *)(lVar2 + 0x84);
  fVar12 = auVar13._8_8_[2];
  fVar7 = (float)/*UnityEngine.Rect$$get_yMin*/ func_0x0325352c(lVar3,0);
  fVar8 = (float)/*UnityEngine.Rect$$get_height*/ func_0x03253574(lVar3,0);
  fVar5 = ((fVar11 - fVar5) / fVar6) * fVar10;
  if (*(char *)(lVar2 + 0x8c) != '\0') {
    fVar5 = -(((fVar12 - fVar7) / fVar8) * *(float *)(lVar2 + 0x88));
  }
  return ZEXT416((uint)fVar5);
}



// ============================================================
// RVA: 0x1495d7c | Atlas.UI.MiniMapPlayerBehaviour.Spin
// ============================================================

void Atlas_UI_MiniMapPlayerBehaviour__Spin(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  if (0 < *(int *)(param_1 + 0x28)) {
    if ((((*(long *)(param_1 + 0x30) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar2 == 0)) ||
        (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x60), lVar2 == 0)) {
      auVar4 = func_0x00f78af4();
      plVar1 = auVar4._8_8_;
      if ((bRam0000000003eb49c3 & 1) == 0) {
        func_0x00f78a20(0x3d23c68);
        bRam0000000003eb49c3 = 1;
      }
      if ((*(char *)(auVar4._0_8_ + 0x70) == '\0') && (plVar1 != (long *)0x0)) {
        if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) <= *(byte *)(*plVar1 + 300)) &&
           (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) * 8 +
                     -8) == /*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68)) {
          *(long **)(auVar4._0_8_ + 0xb8) = plVar1;
        }
      }
      return;
    }
    fVar3 = *(float *)(lVar2 + 100);
    *(float *)(param_1 + 0x3c) = fVar3;
    if (0.0 < fVar3) {
      *(float *)(param_1 + 0x38) = fVar3;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14968d4 | Atlas.UI.MiniMapPlayerBehaviour.get_RootRectTransform
// ============================================================

undefined8 Atlas_UI_MiniMapPlayerBehaviour__get_RootRectTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14968dc | Atlas.UI.MiniMapPlayerBehaviour.get_Player
// ============================================================

undefined8 Atlas_UI_MiniMapPlayerBehaviour__get_Player(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14968e4 | Atlas.UI.MiniMapPlayerBehaviour.SetActive
// ============================================================

void Atlas_UI_MiniMapPlayerBehaviour__SetActive(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x18),0), lVar2 != 0)) {
    iVar1 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar2,0);
    if (iVar1 == (int)param_2) {
      return;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x18),0), lVar2 != 0)) {
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebf4c0)(lVar2,param_2);
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  if (0 < *(int *)(lVar2 + 0x28)) {
    if ((((*(long *)(lVar2 + 0x30) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar2 + 0x30) + 0x10), lVar4 == 0)) ||
        (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) {
      auVar6 = func_0x00f78af4();
      plVar3 = auVar6._8_8_;
      if ((bRam0000000003eb49c3 & 1) == 0) {
        func_0x00f78a20(0x3d23c68);
        bRam0000000003eb49c3 = 1;
      }
      if ((*(char *)(auVar6._0_8_ + 0x70) == '\0') && (plVar3 != (long *)0x0)) {
        if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) <= *(byte *)(*plVar3 + 300)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) * 8 +
                     -8) == /*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68)) {
          *(long **)(auVar6._0_8_ + 0xb8) = plVar3;
        }
      }
      return;
    }
    fVar5 = *(float *)(lVar4 + 100);
    *(float *)(lVar2 + 0x3c) = fVar5;
    if (0.0 < fVar5) {
      *(float *)(lVar2 + 0x38) = fVar5;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1496954 | Atlas.UI.MiniMapPlayerBehaviour.OnSpinoutTriggered
// ============================================================

void Atlas_UI_MiniMapPlayerBehaviour__OnSpinoutTriggered(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  if (0 < *(int *)(param_1 + 0x28)) {
    if ((((*(long *)(param_1 + 0x30) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar2 == 0)) ||
        (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x60), lVar2 == 0)) {
      auVar4 = func_0x00f78af4();
      plVar1 = auVar4._8_8_;
      if ((bRam0000000003eb49c3 & 1) == 0) {
        func_0x00f78a20(0x3d23c68);
        bRam0000000003eb49c3 = 1;
      }
      if ((*(char *)(auVar4._0_8_ + 0x70) == '\0') && (plVar1 != (long *)0x0)) {
        if ((*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) <= *(byte *)(*plVar1 + 300)) &&
           (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68 + 300) * 8 +
                     -8) == /*Atlas.Gameplay.Usables.PlacementHomingProjectile_TypeInfo*/ lRam0000000003d23c68)) {
          *(long **)(auVar4._0_8_ + 0xb8) = plVar1;
        }
      }
      return;
    }
    fVar3 = *(float *)(lVar2 + 100);
    *(float *)(param_1 + 0x3c) = fVar3;
    if (0.0 < fVar3) {
      *(float *)(param_1 + 0x38) = fVar3;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1496958 | Atlas.UI.MiniMapPlayerBehaviour.Update
// ============================================================

long Atlas_UI_MiniMapPlayerBehaviour__Update(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x38);
  if (fVar3 <= 0.0) {
    return param_1;
  }
  fVar2 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar3 = fVar3 - fVar2;
  fVar2 = 0.0;
  if (0.0 < fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x38) = fVar2;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x20),0), lVar1 != 0)) {
    /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(0,0,0);
    if (pcRam0000000003ec1988 == (code *)0x0) {
      pcRam0000000003ec1988 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)"
                                  );
    }
    lVar1 = (*pcRam0000000003ec1988)(lVar1,&stack0xffffffffffffffd0);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x14969f4 | Atlas.UI.MiniMapPlayerBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_MiniMapPlayerBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
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



