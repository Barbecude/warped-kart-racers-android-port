// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.KartJiggler

// ============================================================
// RVA: 0x15cd084 | Atlas.FrontEnd.KartJiggler.set_KartInteractionEnabled
// ============================================================

void Atlas_FrontEnd_KartJiggler__set_KartInteractionEnabled(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



// ============================================================
// RVA: 0x15cd08c | Atlas.FrontEnd.KartJiggler.set_AntennaInteractionEnabled
// ============================================================

void Atlas_FrontEnd_KartJiggler__set_AntennaInteractionEnabled(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x21) = param_2;
  return;
}



// ============================================================
// RVA: 0x15cd094 | Atlas.FrontEnd.KartJiggler.Init
// ============================================================

void Atlas_FrontEnd_KartJiggler__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5337 & 1) == 0) {
    func_0x00f78a20(0x3d1f2e0);
    bRam0000000003eb5337 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = func_0x00f78a34(/*UnityEngine.RaycastHit[]_TypeInfo*/ uRam0000000003d1f2e0,4);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15cd0f8 | Atlas.FrontEnd.KartJiggler.DeInit
// ============================================================

void Atlas_FrontEnd_KartJiggler__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x15cd104 | Atlas.FrontEnd.KartJiggler.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_FrontEnd_KartJiggler__Update
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  
  if ((bRam0000000003eb5338 & 1) == 0) {
    func_0x00f78a20(0x3d533f8);
    func_0x00f78a20(0x3d534c8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d36b38);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5338 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  fVar16 = (float)/*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
  fVar19 = *(float *)(param_4 + 0x34);
  fVar16 = fVar16 - fVar19;
  if (3.0 < fVar16) {
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x30) = 0;
  }
  uStack_98 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  fStack_94 = fVar19;
  fStack_90 = param_3;
  if (cRam0000000003ca3509 == '\0') {
    func_0x00f78a20(0x3d235a0);
    cRam0000000003ca3509 = '\x01';
  }
  lVar13 = **(long **)(/*UnityEngine.InputSystem.Mouse_TypeInfo*/ lRam0000000003d235a0 + 0xb8);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x188) != 0)) &&
     (iVar4 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(*(long *)(lVar13 + 0x188),0), iVar4 != 0)) {
    if (*(long *)(lVar13 + 0x158) == 0) goto LAB_015cd834;
    uStack_98 = /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar13 + 0x158),uRam0000000003d36b38);
    fStack_90 = 0.0;
    fStack_94 = fVar19;
  }
  if (cRam0000000003ca3506 == '\0') {
    func_0x00f78a20(0x3d25370);
    cRam0000000003ca3506 = '\x01';
  }
  lVar13 = **(long **)(/*UnityEngine.InputSystem.Touchscreen_TypeInfo*/ lRam0000000003d25370 + 0xb8);
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x180) != 0)) {
    lVar6 = *(long *)(*(long *)(lVar13 + 0x180) + 0xf0);
    if (lVar6 == 0) goto LAB_015cd834;
    iVar4 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar6,0);
    if (iVar4 != 0) {
      if ((*(long *)(lVar13 + 0x180) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x180) + 0x100), lVar13 == 0)) goto LAB_015cd834;
      uStack_98 = /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(lVar13,uRam0000000003d36b38);
      fStack_90 = 0.0;
      fStack_94 = fVar19;
    }
  }
  fVar19 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_98,0);
  if (fVar19 == 0.0) {
    return;
  }
  if ((*(long *)(param_4 + 0x10) != 0) &&
     (lVar13 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(param_4 + 0x10),0), lVar13 != 0)) {
    fVar19 = fStack_90;
    fVar20 = fStack_94;
    /*UnityEngine.Camera$$ScreenPointToRay*/ func_0x0322038c(&uStack_128,uStack_98,fStack_94,fStack_90,lVar13,0);
    uStack_a8 = uStack_120;
    uStack_b0 = uStack_128;
    uStack_a0 = uStack_118;
    uStack_138 = uStack_120;
    uStack_140 = uStack_128;
    uStack_130 = uStack_118;
    uVar5 = /*UnityEngine.Physics$$RaycastNonAlloc*/ func_0x032a0f20(&uStack_140,*(undefined8 *)(param_4 + 0x18),0);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_bc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    if ((int)uVar5 < 1) {
      lVar6 = 0;
      lVar13 = 0;
    }
    else {
      uVar14 = 0;
      lVar13 = 0;
      lVar6 = 0;
      lVar15 = 0x20;
      do {
        lVar9 = *(long *)(param_4 + 0x18);
        if (lVar9 == 0) goto LAB_015cd834;
        if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_015cd838;
        puVar8 = (undefined8 *)(lVar9 + lVar15);
        uStack_108 = puVar8[1];
        uStack_110 = *puVar8;
        uVar12 = puVar8[2];
        uStack_e8 = *(undefined4 *)(puVar8 + 5);
        uStack_f0 = (undefined4)puVar8[4];
        uStack_ec = (undefined4)((ulong)puVar8[4] >> 0x20);
        uStack_f8 = (undefined4)puVar8[3];
        uStack_f4 = (undefined4)((ulong)puVar8[3] >> 0x20);
        uStack_100 = uVar12;
        if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar13,0,0);
        if (iVar4 != 0) {
          lVar9 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
          if ((lVar9 == 0) || (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0), lVar9 == 0)) goto LAB_015cd834;
          uVar7 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar9,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
          if (iVar4 != 0) {
            lVar13 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
            if (((lVar13 == 0) || (lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0), lVar13 == 0)) ||
               (lVar13 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar13,0), lVar13 == 0)) goto LAB_015cd834;
            lVar13 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar13,uRam0000000003d534c8);
          }
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar6,0,0);
        if (iVar4 != 0) {
          lVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
          if ((lVar6 == 0) || (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0), lVar6 == 0)) goto LAB_015cd834;
          lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar6,uRam0000000003d533f8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
          if (iVar4 != 0) {
            uStack_d8 = uStack_108;
            uStack_e0 = uStack_110;
            uStack_c8 = uStack_f8;
            uStack_d0 = uStack_100;
            uStack_bc = CONCAT44(uStack_e8,uStack_ec);
            uStack_c4 = uStack_f4;
            uStack_c0 = uStack_f0;
            uVar12 = uStack_100;
          }
        }
        fVar20 = (float)uVar12;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x2c;
      } while (uVar5 != uVar14);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
    if ((iVar4 == 0) || (*(char *)(param_4 + 0x21) == '\0')) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
      if ((iVar4 != 0) && (*(char *)(param_4 + 0x20) != '\0')) {
        if (lVar13 == 0) goto LAB_015cd834;
        plVar10 = *(long **)(lVar13 + 0xa0);
        if (plVar10 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar10 + 300)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8
                       + -8) == /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
            if (plVar10 == (long *)0x0) goto LAB_015cd834;
            if (plVar10[5] != 0) {
              uVar12 = *(undefined8 *)(plVar10[5] + 0x108);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
              bVar1 = false;
              bVar2 = true;
              bVar3 = false;
              if (iVar4 != 0) {
                bVar1 = false;
                bVar2 = false;
                bVar3 = true;
                if (!NAN(fVar16)) {
                  bVar1 = fVar16 < 0.5;
                  bVar2 = fVar16 == 0.5;
                  bVar3 = false;
                }
              }
              if (!bVar2 && bVar1 == bVar3) {
                if (plVar10[3] != 0) {
                  lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar10[3],0);
                  fVar16 = (float)/*UnityEngine.Ray$$get_direction*/ func_0x03252ca4(&uStack_b0,0);
                  if (lVar13 != 0) {
                    fVar19 = -fVar19;
                    fVar20 = -fVar20;
                    fVar18 = (float)/*UnityEngine.Transform$$InverseTransformVector*/ func_0x03276cc4(-fVar16,fVar20,fVar19,lVar13,0);
                    fVar16 = fVar19;
                    uVar17 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
                    fVar19 = (float)/*UnityEngine.Vector3$$Angle*/ func_0x0327bab0(fVar18,0,fVar19,uVar17,fVar20,fVar16,0);
                    fVar16 = -fVar19;
                    if (0.0 <= fVar18) {
                      fVar16 = fVar19;
                    }
                    uVar17 = /*UnityEngine.Random$$Range*/ func_0x03252854(0x3f000000,_UNK_033f84b0,0);
                    if ((plVar10[5] != 0) && (lVar13 = *(long *)(plVar10[5] + 0x108), lVar13 != 0))
                    {
                      iVar4 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                                        (fVar16,uVar17,lVar13,0);
                      if (iVar4 == 0) {
                        return;
                      }
                      if (plVar10[5] != 0) {
                        lVar13 = *(long *)(plVar10[5] + 0x110);
                        if (lVar13 != 0) {
                          Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                                    (fVar16,uVar17,lVar13,0);
                        }
                        if (*(long **)(param_4 + 0x28) == plVar10) {
                          iVar4 = *(int *)(param_4 + 0x30) + 1;
                        }
                        else {
                          *(long **)(param_4 + 0x28) = plVar10;
                          *(undefined4 *)(param_4 + 0x34) = 0;
                          iVar4 = 1;
                        }
                        *(int *)(param_4 + 0x30) = iVar4;
                        uVar17 = /*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
                        *(undefined4 *)(param_4 + 0x34) = uVar17;
                        if (*(int *)(param_4 + 0x30) != 4) {
                          return;
                        }
                        if (plVar10[5] != 0) {
                          lVar13 = *(long *)(plVar10[5] + 0x110);
                          if (lVar13 != 0) {
                            Atlas_Gameplay_Kart_CharacterVisualBehaviour__TriggerReactAngry
                                      (lVar13,0);
                          }
                          *(undefined4 *)(param_4 + 0x30) = 0;
                          return;
                        }
                      }
                    }
                  }
                }
                goto LAB_015cd834;
              }
            }
          }
        }
      }
      return;
    }
    if (lVar6 != 0) {
      uVar12 = *(undefined8 *)(lVar6 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
      if (iVar4 == 0) {
        return;
      }
      lVar13 = *(long *)(lVar6 + 0x20);
      uVar17 = /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_e0,0);
      if (param_5 != (long *)0x0) {
        lVar6 = *param_5;
        uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar14 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto code_r0x015cd790;
            }
            piVar11 = piVar11 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x015cd790:
        fVar16 = (float)(*(code *)*puVar8)(param_5,puVar8[1]);
        if (lVar13 != 0) {
          /*Atlas.Rendering.WibbleBehaviour$$ApplyImpulseAtPoint*/ func_0x01531054(uVar17,fVar20,fVar19,_UNK_033f8b34,fVar16 * 7.0,lVar13,0);
          return;
        }
      }
    }
  }
LAB_015cd834:
  func_0x00f78af4();
LAB_015cd838:
  uVar12 = func_0x00f78b24();
  lVar13 = func_0x00f78ac0(uVar12,0);
  *(undefined2 *)(lVar13 + 0x20) = 0x101;
  return;
}



// ============================================================
// RVA: 0x15cd844 | Atlas.FrontEnd.KartJiggler..ctor
// ============================================================

void Atlas_FrontEnd_KartJiggler___ctor(long param_1)

{
  *(undefined2 *)(param_1 + 0x20) = 0x101;
  return;
}



