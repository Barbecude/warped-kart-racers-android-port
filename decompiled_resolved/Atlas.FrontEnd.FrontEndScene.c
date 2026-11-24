// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndScene

// ============================================================
// RVA: 0x1587870 | Atlas.FrontEnd.FrontEndScene.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_FrontEnd_FrontEndScene__Update
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
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
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  plStack_a8 = param_5;
  if ((bRam0000000003eb5168 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5168 = 1;
  }
  if (*(char *)(param_4 + 0x88) == '\0') {
    return;
  }
  /*Atlas.FrontEnd.FrontEndScene$$UpdateKarts*/ func_0x01593ba8(param_4,&stack0xffffffffffffff88);
  lVar9 = *(long *)(param_4 + 0x90);
  if (lVar9 != 0) {
    uVar7 = 0;
    while ((int)uVar7 < (int)*(uint *)(lVar9 + 0x18)) {
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_01587cf0;
      lVar19 = (long)(int)uVar7;
      lVar9 = lVar9 + lVar19 * 0x40;
      lVar15 = *(long *)(lVar9 + 0x20);
      uStack_88 = *(undefined8 *)(lVar9 + 0x30);
      uStack_90 = *(undefined8 *)(lVar9 + 0x28);
      uVar20 = *(undefined1 *)(lVar9 + 0x38);
      uStack_94 = (float)CONCAT13(uStack_94._3_1_,*(undefined3 *)(lVar9 + 0x39));
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
        uVar22 = *(undefined4 *)(lVar9 + 0x3c);
        uVar18 = *(undefined8 *)(lVar9 + 0x40);
        iVar6 = *(int *)(lVar9 + 0x48);
        uStack_98 = *(undefined4 *)(lVar9 + 0x4c);
        lVar16 = *(long *)(lVar9 + 0x50);
        fVar25 = *(float *)(lVar9 + 0x58);
        uStack_a0 = CONCAT44(*(undefined4 *)(lVar9 + 0x5c),(undefined4)uStack_a0);
        uVar17 = *(undefined8 *)(*(long *)(lVar15 + 0x28) + 0x18);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
        if (iVar5 != 0) {
          if (*(long *)(lVar15 + 0x28) == 0) goto LAB_01587cec;
          uVar17 = *(undefined8 *)(*(long *)(lVar15 + 0x28) + 0x108);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
          if (iVar5 != 0) {
            if (*(long *)(param_4 + 0x80) == 0) goto LAB_01587cec;
            /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(param_4 + 0x80),lVar15,0);
            plVar11 = plStack_a8;
            uVar14 = iVar6 - 1;
            if (iVar6 == 0) {
              bVar4 = 1;
code_r0x01587b3c:
              bVar4 = uVar14 < 2 & bVar4;
              fVar21 = 0.0;
              if (bVar4 == 0) {
                fVar21 = fVar25;
              }
              fVar25 = fVar21;
              iVar5 = 0;
              if (bVar4 == 0) {
                iVar5 = iVar6;
              }
              if (bVar4 != 0 && iVar6 == 2) {
                if (lVar16 == 0) goto LAB_01587cec;
                /*Atlas.Gameplay.PortalVFXBehaviour$$DisableShaderKeywordForKart*/ func_0x014c3f84(lVar16,*(undefined8 *)(lVar15 + 0x28),0,0);
                fVar25 = 0.0;
                iVar5 = 0;
              }
            }
            else {
              if (iVar6 != 1) {
                if (iVar6 != 2) {
                  bVar4 = 1 < uVar14;
                  goto code_r0x01587b3c;
                }
                if (plStack_a8 != (long *)0x0) {
                  lVar9 = *plStack_a8;
                  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
                  uStack_b0 = CONCAT44(1,(undefined4)uStack_b0);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                        puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_01587ac0;
                      }
                      piVar13 = piVar13 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  puVar8 = (undefined8 *)func_0x00fac1f0(plStack_a8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_01587ac0:
                  fVar21 = (float)(*(code *)*puVar8)(plVar11,puVar8[1]);
                  if (lVar16 != 0) {
                    fVar25 = fVar25 + fVar21;
                    bVar4 = /*Atlas.Gameplay.PortalVFXBehaviour$$SetExitingTimeForKart*/ func_0x014c3eb0(fVar25,lVar16,*(undefined8 *)(lVar15 + 0x28),0,0);
                    goto code_r0x01587b38;
                  }
                }
                goto LAB_01587cec;
              }
              if (plStack_a8 == (long *)0x0) goto LAB_01587cec;
              lVar9 = *plStack_a8;
              uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
              uStack_b0 = uStack_b0 & 0xffffffff;
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                    puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                    goto code_r0x01587afc;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(plStack_a8,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x01587afc:
              fVar21 = (float)(*(code *)*puVar8)(plVar11,puVar8[1]);
              if (lVar16 == 0) goto LAB_01587cec;
              fVar25 = fVar25 + fVar21;
              uVar12 = /*Atlas.Gameplay.PortalVFXBehaviour$$SetEnteringTimeForKart*/ func_0x014c3dd8(fVar25,lVar16,*(undefined8 *)(lVar15 + 0x28),0,0);
              iVar5 = iVar6;
              if ((uVar12 & 1) != 0) {
                uVar22 = 0;
                uVar20 = 0;
                bVar4 = 1;
code_r0x01587b38:
                uVar14 = uStack_b0._4_4_;
                goto code_r0x01587b3c;
              }
            }
            lVar9 = *(long *)(param_4 + 0x90);
            if (lVar9 == 0) goto LAB_01587cec;
            if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_01587cf0;
            lVar9 = lVar9 + lVar19 * 0x40;
            *(long *)(lVar9 + 0x20) = lVar15;
            *(undefined8 *)(lVar9 + 0x30) = uStack_88;
            *(undefined8 *)(lVar9 + 0x28) = uStack_90;
            *(undefined1 *)(lVar9 + 0x38) = uVar20;
            *(undefined2 *)(lVar9 + 0x39) = (undefined2)uStack_94;
            *(undefined1 *)(lVar9 + 0x3b) = uStack_94._2_1_;
            *(undefined4 *)(lVar9 + 0x3c) = uVar22;
            *(undefined8 *)(lVar9 + 0x40) = uVar18;
            *(int *)(lVar9 + 0x48) = iVar5;
            *(undefined4 *)(lVar9 + 0x4c) = uStack_98;
            *(long *)(lVar9 + 0x50) = lVar16;
            *(float *)(lVar9 + 0x58) = fVar25;
            *(undefined4 *)(lVar9 + 0x5c) = uStack_a0._4_4_;
          }
        }
      }
      lVar9 = *(long *)(param_4 + 0x90);
      if (lVar9 == 0) goto LAB_01587cec;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_01587cf0;
      lVar9 = *(long *)(lVar9 + lVar19 * 0x40 + 0x30);
      if (lVar9 == 0) goto LAB_01587cec;
      Atlas_Gameplay_Kart_KartFEAnimator__Update(lVar9,0);
      uVar7 = uVar7 + 1;
      lVar9 = *(long *)(param_4 + 0x90);
      if (lVar9 == 0) goto LAB_01587cec;
    }
    uVar17 = *(undefined8 *)(param_4 + 0x60);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
    if (iVar6 != 0) {
      if ((*(long *)(param_4 + 0x60) == 0) || (*(long *)(param_4 + 0x80) == 0)) goto LAB_01587cec;
      _memmove(*(long *)(param_4 + 0x80) + 0x5c,*(long *)(param_4 + 0x60) + 0xf8,0x44);
    }
    if (*(long *)(param_4 + 0xb0) == 0) {
      if (*(long *)(param_4 + 0x80) == 0) goto LAB_01587cec;
      /*Atlas.Lighting.LightWorld$$Update*/ func_0x014850cc(*(long *)(param_4 + 0x80),0);
    }
    if (*(long *)(param_4 + 0x80) != 0) {
      /*Atlas.Lighting.LightWorld$$UnRegisterAllMembers*/ func_0x0147dff4(*(long *)(param_4 + 0x80),0);
      plVar11 = plStack_a8;
      lVar9 = *(long *)(param_4 + 0x78);
      if (lVar9 != 0) {
        if ((bRam0000000003eb5338 & 1) == 0) {
          func_0x00f78a20(0x3d533f8,plStack_a8,0);
          func_0x00f78a20(0x3d534c8);
          func_0x00f78a20(0x3d22618);
          func_0x00f78a20(0x3d36b38);
          func_0x00f78a20(0x3d22c78);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5338 = 1;
        }
        uStack_b0 = 0;
        plStack_a8 = (long *)0x0;
        uStack_a0 = 0;
        uStack_c0._4_4_ = 0;
        uStack_b8 = 0;
        uStack_c0._0_4_ = 0;
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
        fVar25 = (float)/*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
        fVar21 = *(float *)(lVar9 + 0x34);
        fVar25 = fVar25 - fVar21;
        if (3.0 < fVar25) {
          *(undefined8 *)(lVar9 + 0x28) = 0;
          *(undefined8 *)(lVar9 + 0x30) = 0;
        }
        uStack_98 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uStack_94 = fVar21;
        uStack_90._0_4_ = param_3;
        if (cRam0000000003ca3509 == '\0') {
          func_0x00f78a20(0x3d235a0);
          cRam0000000003ca3509 = '\x01';
        }
        lVar15 = **(long **)(/*UnityEngine.InputSystem.Mouse_TypeInfo*/ lRam0000000003d235a0 + 0xb8);
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0x188) != 0)) &&
           (iVar6 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(*(long *)(lVar15 + 0x188),0), iVar6 != 0)) {
          if (*(long *)(lVar15 + 0x158) == 0) goto code_r0x015cd834;
          uStack_98 = /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar15 + 0x158),uRam0000000003d36b38);
          uStack_90._0_4_ = 0.0;
          uStack_94 = fVar21;
        }
        if (cRam0000000003ca3506 == '\0') {
          func_0x00f78a20(0x3d25370);
          cRam0000000003ca3506 = '\x01';
        }
        lVar15 = **(long **)(/*UnityEngine.InputSystem.Touchscreen_TypeInfo*/ lRam0000000003d25370 + 0xb8);
        if ((lVar15 != 0) && (*(long *)(lVar15 + 0x180) != 0)) {
          lVar19 = *(long *)(*(long *)(lVar15 + 0x180) + 0xf0);
          if (lVar19 == 0) goto code_r0x015cd834;
          iVar6 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar19,0);
          if (iVar6 != 0) {
            if ((*(long *)(lVar15 + 0x180) == 0) ||
               (lVar15 = *(long *)(*(long *)(lVar15 + 0x180) + 0x100), lVar15 == 0))
            goto code_r0x015cd834;
            uStack_98 = /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(lVar15,uRam0000000003d36b38);
            uStack_90._0_4_ = 0.0;
            uStack_94 = fVar21;
          }
        }
        fVar21 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_98,0);
        if (fVar21 == 0.0) {
          return;
        }
        if ((*(long *)(lVar9 + 0x10) == 0) ||
           (lVar15 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(lVar9 + 0x10),0), lVar15 == 0))
        goto code_r0x015cd834;
        fVar21 = (float)uStack_90;
        fVar24 = uStack_94;
        /*UnityEngine.Camera$$ScreenPointToRay*/ func_0x0322038c(&uStack_128,uStack_98,uStack_94,(float)uStack_90,lVar15,0);
        plStack_a8 = (long *)uStack_120;
        uStack_b0 = uStack_128;
        uStack_a0 = uStack_118;
        uStack_138 = uStack_120;
        uStack_140 = uStack_128;
        uStack_130 = uStack_118;
        uVar7 = /*UnityEngine.Physics$$RaycastNonAlloc*/ func_0x032a0f20(&uStack_140,*(undefined8 *)(lVar9 + 0x18),0);
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_c0._4_4_ = 0;
        uStack_b8 = 0;
        uStack_c4 = 0;
        uStack_c0._0_4_ = 0;
        if (0 < (int)uVar7) {
          uVar12 = 0;
          lVar15 = 0;
          lVar19 = 0;
          lVar16 = 0x20;
          goto code_r0x015cd36c;
        }
        lVar19 = 0;
        lVar15 = 0;
        goto code_r0x015cd4fc;
      }
    }
  }
LAB_01587cec:
  func_0x00f78af4();
LAB_01587cf0:
  uVar17 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar17,0);
  uStack_b8 = 0x1587cfc;
  uStack_b4 = 0;
  lVar9 = *(long *)(auVar26._0_8_ + 0x118);
  if (lVar9 != 0) {
    uStack_c8 = auVar26._8_4_;
    uStack_c4 = auVar26._12_4_;
    if (*(char *)(lVar9 + 0x88) != '\0') {
      uStack_c0 = &stack0xfffffffffffffff0;
      /*Atlas.FrontEnd.FrontEndScene$$LateUpdateKarts*/ func_0x01593dec(lVar9,&uStack_c8);
    }
  }
  return;
  while( true ) {
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto code_r0x015cd838;
    puVar8 = (undefined8 *)(lVar10 + lVar16);
    uStack_108 = puVar8[1];
    uStack_110 = *puVar8;
    uVar17 = puVar8[2];
    uStack_e8 = *(undefined4 *)(puVar8 + 5);
    uStack_f0 = (undefined4)puVar8[4];
    uStack_ec = (undefined4)((ulong)puVar8[4] >> 0x20);
    uStack_f8 = (undefined4)puVar8[3];
    uStack_f4 = (undefined4)((ulong)puVar8[3] >> 0x20);
    uStack_100 = uVar17;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar15,0,0);
    if (iVar6 != 0) {
      lVar10 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
      if ((lVar10 == 0) || (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0), lVar10 == 0)) goto code_r0x015cd834;
      uVar18 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar10,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0,0);
      if (iVar6 != 0) {
        lVar15 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
        if (((lVar15 == 0) || (lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar15,0), lVar15 == 0)) ||
           (lVar15 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar15,0), lVar15 == 0)) goto code_r0x015cd834;
        lVar15 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar15,uRam0000000003d534c8);
      }
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar19,0,0);
    if (iVar6 != 0) {
      lVar19 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_110,0);
      if ((lVar19 == 0) || (lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0), lVar19 == 0)) goto code_r0x015cd834;
      lVar19 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar19,uRam0000000003d533f8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar19,0,0);
      if (iVar6 != 0) {
        uStack_d8 = uStack_108;
        uStack_e0 = uStack_110;
        uStack_c8 = uStack_f8;
        uStack_d0 = uStack_100;
        uStack_c0._4_4_ = uStack_ec;
        uStack_b8 = uStack_e8;
        uStack_c4 = uStack_f4;
        uStack_c0._0_4_ = uStack_f0;
        uVar17 = uStack_100;
      }
    }
    fVar24 = (float)uVar17;
    uVar12 = uVar12 + 1;
    lVar16 = lVar16 + 0x2c;
    if (uVar7 == uVar12) break;
code_r0x015cd36c:
    lVar10 = *(long *)(lVar9 + 0x18);
    if (lVar10 == 0) goto code_r0x015cd834;
  }
code_r0x015cd4fc:
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar19,0,0);
  if ((iVar6 != 0) && (*(char *)(lVar9 + 0x21) != '\0')) {
    if (lVar19 != 0) {
      uVar17 = *(undefined8 *)(lVar19 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
      if (iVar6 == 0) {
        return;
      }
      lVar9 = *(long *)(lVar19 + 0x20);
      uVar22 = /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_e0,0);
      if (plVar11 != (long *)0x0) {
        lVar15 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto code_r0x015cd790;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar11,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x015cd790:
        fVar25 = (float)(*(code *)*puVar8)(plVar11,puVar8[1]);
        if (lVar9 != 0) {
          /*Atlas.Rendering.WibbleBehaviour$$ApplyImpulseAtPoint*/ func_0x01531054(uVar22,fVar24,fVar21,_UNK_033f8b34,fVar25 * 7.0,lVar9,0);
          return;
        }
      }
    }
code_r0x015cd834:
    func_0x00f78af4();
code_r0x015cd838:
    uVar17 = func_0x00f78b24();
    lVar9 = func_0x00f78ac0(uVar17,0);
    *(undefined2 *)(lVar9 + 0x20) = 0x101;
    return;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
  if ((iVar6 != 0) && (*(char *)(lVar9 + 0x20) != '\0')) {
    if (lVar15 == 0) goto code_r0x015cd834;
    plVar11 = *(long **)(lVar15 + 0xa0);
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plVar11 + 300)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 +
                   -8) == /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (plVar11 == (long *)0x0) goto code_r0x015cd834;
        if (plVar11[5] != 0) {
          uVar17 = *(undefined8 *)(plVar11[5] + 0x108);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
          bVar1 = false;
          bVar2 = true;
          bVar3 = false;
          if (iVar6 != 0) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar25)) {
              bVar1 = fVar25 < 0.5;
              bVar2 = fVar25 == 0.5;
              bVar3 = false;
            }
          }
          if (!bVar2 && bVar1 == bVar3) {
            if (plVar11[3] != 0) {
              lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar11[3],0);
              fVar25 = (float)/*UnityEngine.Ray$$get_direction*/ func_0x03252ca4(&uStack_b0,0);
              if (lVar15 != 0) {
                fVar21 = -fVar21;
                fVar24 = -fVar24;
                fVar23 = (float)/*UnityEngine.Transform$$InverseTransformVector*/ func_0x03276cc4(-fVar25,fVar24,fVar21,lVar15,0);
                fVar25 = fVar21;
                uVar22 = /*UnityEngine.Vector3$$get_forward*/ func_0x03275868(0);
                fVar21 = (float)/*UnityEngine.Vector3$$Angle*/ func_0x0327bab0(fVar23,0,fVar21,uVar22,fVar24,fVar25,0);
                fVar25 = -fVar21;
                if (0.0 <= fVar23) {
                  fVar25 = fVar21;
                }
                uVar22 = /*UnityEngine.Random$$Range*/ func_0x03252854(0x3f000000,_UNK_033f84b0,0);
                if ((plVar11[5] != 0) && (lVar15 = *(long *)(plVar11[5] + 0x108), lVar15 != 0)) {
                  iVar6 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                                    (fVar25,uVar22,lVar15,0);
                  if (iVar6 == 0) {
                    return;
                  }
                  if (plVar11[5] != 0) {
                    lVar15 = *(long *)(plVar11[5] + 0x110);
                    if (lVar15 != 0) {
                      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact(fVar25,uVar22,lVar15,0)
                      ;
                    }
                    if (*(long **)(lVar9 + 0x28) == plVar11) {
                      iVar6 = *(int *)(lVar9 + 0x30) + 1;
                    }
                    else {
                      *(long **)(lVar9 + 0x28) = plVar11;
                      *(undefined4 *)(lVar9 + 0x34) = 0;
                      iVar6 = 1;
                    }
                    *(int *)(lVar9 + 0x30) = iVar6;
                    uVar22 = /*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
                    *(undefined4 *)(lVar9 + 0x34) = uVar22;
                    if (*(int *)(lVar9 + 0x30) != 4) {
                      return;
                    }
                    if (plVar11[5] != 0) {
                      lVar15 = *(long *)(plVar11[5] + 0x110);
                      if (lVar15 != 0) {
                        Atlas_Gameplay_Kart_CharacterVisualBehaviour__TriggerReactAngry(lVar15,0);
                      }
                      *(undefined4 *)(lVar9 + 0x30) = 0;
                      return;
                    }
                  }
                }
              }
            }
            goto code_r0x015cd834;
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x1587d30 | Atlas.FrontEnd.FrontEndScene.LateUpdate
// ============================================================

void Atlas_FrontEnd_FrontEndScene__LateUpdate(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    uStack_18 = param_2;
    /*Atlas.FrontEnd.FrontEndScene$$LateUpdateKarts*/ func_0x01593dec(param_1,&uStack_18);
  }
  return;
}



// ============================================================
// RVA: 0x1587e04 | Atlas.FrontEnd.FrontEndScene.DeInitEditor
// ============================================================

void Atlas_FrontEnd_FrontEndScene__DeInitEditor(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    /*Atlas.Lighting.LightWorld$$DeInit*/ func_0x01484d78(*(long *)(param_1 + 0x80),0);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// ============================================================
// RVA: 0x158b38c | Atlas.FrontEnd.FrontEndScene.RequestLoadCharacter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158b4ec | Atlas.FrontEnd.FrontEndScene.RequestLoadWheels
// ============================================================

/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_FrontEnd_FrontEndScene__RequestLoadWheels
                 (undefined1 param_1 [16],undefined8 param_2,long param_3,uint param_4,long *param_5
                 ,undefined8 param_6,long *param_7,undefined8 *param_8,long *param_9)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar12;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint *extraout_x1_06;
  uint *extraout_x1_07;
  long *plVar23;
  undefined8 uVar24;
  uint *puVar25;
  uint *puVar26;
  long lVar27;
  undefined8 *puVar28;
  int *piVar29;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar30;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar31;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar32;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar33;
  uint extraout_s0;
  uint extraout_s0_00;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_2f1 [529];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar27 = *(long *)(param_3 + 0x90);
  if (lVar27 == 0) {
LAB_0158b528:
    func_0x00f78af4();
LAB_0158b52c:
    uVar24 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar24,0);
    puVar32 = &stack0xffffffffffffffe0;
    lVar27 = *(long *)(auVar34._0_8_ + 0x90);
    if (lVar27 == 0) {
code_r0x0158b574:
      func_0x00f78af4();
code_r0x0158b578:
      uVar24 = func_0x00f78b24();
      auVar34 = func_0x00f78ac0(uVar24,0);
      puVar7 = &stack0xffffffffffffffd0;
      lVar27 = *(long *)(auVar34._0_8_ + 0x90);
      if (lVar27 == 0) {
code_r0x0158b5c0:
        func_0x00f78af4();
      }
      else if (auVar34._8_4_ < *(uint *)(lVar27 + 0x18)) {
        lVar27 = *(long *)(lVar27 + (long)(int)auVar34._8_4_ * 0x40 + 0x28);
        auVar35._8_8_ = param_5;
        auVar35._0_8_ = lVar27;
        if (lVar27 != 0) {
          if ((bRam0000000003eb5359 & 1) == 0) {
            func_0x00f78a20(0x3d59be8,param_5,0);
            bRam0000000003eb5359 = 1;
          }
          plVar15 = (long *)((long)&MACH_HEADER.magic + 2);
          UNRECOVERED_JUMPTABLE = (code *)&Atlas_FrontEnd_FrontEndScene__RequestLoadGlider;
          puVar6 = &stack0xffffffffffffffe0;
          lVar27 = lRam0000000003d59be8;
          goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
        }
        goto code_r0x0158b5c0;
      }
      uVar24 = func_0x00f78b24();
      auVar34 = func_0x00f78ac0(uVar24,0);
      puVar32 = &stack0xffffffffffffffc0;
      lVar27 = *(long *)(auVar34._0_8_ + 0x90);
      if (lVar27 == 0) {
code_r0x0158b60c:
        func_0x00f78af4();
      }
      else if (auVar34._8_4_ < *(uint *)(lVar27 + 0x18)) {
        lVar27 = *(long *)(lVar27 + (long)(int)auVar34._8_4_ * 0x40 + 0x28);
        auVar35._8_8_ = param_5;
        auVar35._0_8_ = lVar27;
        if (lVar27 != 0) {
          UNRECOVERED_JUMPTABLE = (code *)&Atlas_FrontEnd_FrontEndScene__RequestLoadAntenna;
          goto code_r0x015d1810;
        }
        goto code_r0x0158b60c;
      }
      uVar24 = func_0x00f78b24();
      auVar34 = func_0x00f78ac0(uVar24,0);
      lVar27 = *(long *)(auVar34._0_8_ + 0x90);
      if (lVar27 == 0) {
code_r0x0158b658:
        func_0x00f78af4();
      }
      else if (auVar34._8_4_ < *(uint *)(lVar27 + 0x18)) {
        lVar27 = *(long *)(lVar27 + (long)(int)auVar34._8_4_ * 0x40 + 0x28);
        auVar35._8_8_ = param_5;
        auVar35._0_8_ = lVar27;
        if (lVar27 != 0) {
          if ((bRam0000000003eb535b & 1) == 0) {
            func_0x00f78a20(0x3d59bd8,param_5,0);
            bRam0000000003eb535b = 1;
          }
          plVar15 = (long *)((long)&MACH_HEADER.cputype + 2);
          UNRECOVERED_JUMPTABLE = (code *)&Atlas_FrontEnd_FrontEndScene__RequestLoadBoost;
          puVar6 = &stack0xffffffffffffffc0;
          lVar27 = lRam0000000003d59bd8;
          goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
        }
        goto code_r0x0158b658;
      }
      uVar24 = func_0x00f78b24();
      plVar23 = (long *)func_0x00f78ac0(uVar24,0);
      plVar15 = plVar23;
      if ((bRam0000000003eb50f2 & 1) == 0) {
        plVar15 = (long *)func_0x00f78a20(0x3d73540);
        bRam0000000003eb50f2 = 1;
      }
      if (((char)plVar23[0x2c] != '\0') || (lVar27 = plVar23[0x13], lVar27 == 0)) {
        return plVar15;
      }
      if (plVar23[0x14] == 0) {
        plVar15 = (long *)func_0x00f78af4();
        *(undefined1 *)(plVar15 + 2) = 1;
        return plVar15;
      }
      uVar24 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar23[0x14],/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
      if ((bRam0000000003eb4d37 & 1) == 0) {
        func_0x00f78a20(0x3d3f8c0,uVar24,0,0);
        func_0x00f78a20(0x3d3f8c8);
        bRam0000000003eb4d37 = 1;
      }
      lVar12 = lRam0000000003d3f8c0;
      plVar15 = *(long **)(lVar27 + 0x38);
      if ((plVar15 == (long *)0x0) || (5 < (int)plVar15[4])) {
        return plVar15;
      }
      lVar27 = plVar15[2];
      if (lVar27 == 0) {
code_r0x0273c2b8:
        func_0x00f78af4();
      }
      else {
        iVar10 = (int)plVar15[4];
        unaff_x19 = plVar15;
        unaff_x20 = lVar12;
        if (iVar10 == *(int *)(lVar27 + 0x18)) {
          iVar2 = iVar10 + 4;
          if (iVar10 + 4 <= iVar10 * 2) {
            iVar2 = iVar10 << 1;
          }
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                    (plVar15,iVar2);
          lVar27 = plVar15[2];
          if (lVar27 == 0) goto code_r0x0273c2b8;
        }
        if (*(uint *)((long)plVar15 + 0x1c) < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + (long)(int)*(uint *)((long)plVar15 + 0x1c) * 0x10;
          *(undefined8 *)(lVar27 + 0x20) = uVar24;
          *(undefined8 *)(lVar27 + 0x28) = 0x4020000000000000;
          plVar23 = (long *)(*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x20))
                                      (plVar15);
          plVar15[4] = CONCAT44((int)((ulong)plVar15[4] >> 0x20) + 1,(int)plVar15[4] + 1);
          return plVar23;
        }
      }
      uVar24 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar24,0);
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_a0 = unaff_x20;
      plStack_98 = unaff_x19;
      /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_c0,auVar35._0_8_,
                      *(undefined8 *)(*(long *)(*(long *)(auVar35._8_8_ + 0x18) + 0xc0) + 0x30));
      uStack_d8 = uStack_b8;
      uStack_e0 = uStack_c0;
      uStack_c8 = uStack_a8;
      uStack_d0 = uStack_b0;
      lVar27 = *(long *)(*(long *)(*(long *)(auVar35._8_8_ + 0x18) + 0xc0) + 0x28);
      if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      plVar15 = (long *)func_0x00f78ae0(lVar27,&uStack_e0);
      return plVar15;
    }
    if (*(uint *)(lVar27 + 0x18) <= auVar34._8_4_) goto code_r0x0158b578;
    lVar27 = *(long *)(lVar27 + (long)(int)auVar34._8_4_ * 0x40 + 0x28);
    auVar35._8_8_ = param_5;
    auVar35._0_8_ = lVar27;
    if (lVar27 == 0) goto code_r0x0158b574;
    if ((bRam0000000003eb5357 & 1) == 0) {
      func_0x00f78a20(0x3d59bf0,param_5,0);
      bRam0000000003eb5357 = 1;
    }
    plVar15 = (long *)0x0;
    UNRECOVERED_JUMPTABLE = (code *)&Atlas_FrontEnd_FrontEndScene__RequestLoadKart;
    puVar6 = &stack0xfffffffffffffff0;
    lVar27 = lRam0000000003d59bf0;
    puVar32 = &stack0xfffffffffffffff0;
  }
  else {
    if (*(uint *)(lVar27 + 0x18) <= param_4) goto LAB_0158b52c;
    lVar27 = *(long *)(lVar27 + (long)(int)param_4 * 0x40 + 0x28);
    if (lVar27 == 0) goto LAB_0158b528;
    puVar7 = &stack0xfffffffffffffff0;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb535c & 1) == 0) {
      func_0x00f78a20(0x3d57320,param_5,0);
      bRam0000000003eb535c = 1;
    }
    if ((*(long *)(lVar27 + 0x28) != 0) &&
       (lVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(lVar27 + 0x28),param_5,uRam0000000003d57320), lVar12 != 0
       )) {
      uVar8 = Atlas_Gameplay_Kart_KartPartLoader__RequestLoadPartIntoSlot
                        (lVar27,param_5,*(undefined8 *)(lVar12 + 0x50),3);
      uVar9 = Atlas_Gameplay_Kart_KartPartLoader__RequestLoadPartIntoSlot
                        (lVar27,param_5,*(undefined8 *)(lVar12 + 0x68),4);
      return (long *)(ulong)(uVar8 | uVar9);
    }
    UNRECOVERED_JUMPTABLE = Atlas_Gameplay_Kart_KartPartLoader__RequestLoadAntenna;
    auVar35 = func_0x00f78af4();
    unaff_x19 = param_5;
    unaff_x20 = lVar27;
code_r0x015d1810:
    puVar6 = &stack0xffffffffffffffd0;
    if ((bRam0000000003eb535a & 1) == 0) {
      func_0x00f78a20(0x3d59bd0);
      bRam0000000003eb535a = 1;
    }
    plVar15 = (long *)((long)&MACH_HEADER.cputype + 1);
    lVar27 = lRam0000000003d59bd0;
    puVar32 = puVar7;
  }
Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_:
  lVar30 = auVar35._8_8_;
  lVar12 = auVar35._0_8_;
  *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
  *(long *)(puVar6 + -0x20) = unaff_x20;
  *(long **)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar32;
  *(code **)(puVar6 + -8) = UNRECOVERED_JUMPTABLE;
  plVar23 = plVar15;
  if (*(long *)(lVar12 + 0x28) != 0) {
    plVar23 = (long *)**(undefined8 **)(lVar27 + 0x30);
    lVar14 = (*(code *)*plVar23)();
    unaff_x19 = plVar15;
    unaff_x20 = lVar30;
    if (lVar14 != 0) {
      uVar24 = *(undefined8 *)(lVar14 + 0x50);
      *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
      *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
      *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
      *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      if ((bRam0000000003eb535d & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        bRam0000000003eb535d = 1;
      }
      uVar8 = (uint)plVar15;
      if (uVar8 == 0) {
        lVar27 = *(long *)(lVar12 + 0x30);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        if (lVar27 != 0) {
          if (*(uint *)(lVar27 + 0x18) < 7) goto LAB_015d1a88;
          *(undefined8 *)(lVar27 + 0x50) = uVar13;
          goto LAB_015d1960;
        }
      }
      else {
LAB_015d1960:
        lVar27 = *(long *)(lVar12 + 0x30);
        if (lVar27 != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_015d1a88;
          lVar14 = (long)(int)uVar8;
          uVar13 = *(undefined8 *)(lVar27 + lVar14 * 8 + 0x20);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar13,lVar30,0);
          if ((uVar9 & 1) != 0) goto LAB_015d1a68;
          lVar27 = *(long *)(lVar12 + 0x38);
          if (lVar27 != 0) {
            if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_015d1a88;
            iVar10 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar27 + lVar14 * 4 + 0x20,0);
            if (iVar10 == 0) {
LAB_015d1a04:
              lVar27 = *(long *)(lVar12 + 0x30);
              if (lVar27 != 0) {
                if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_015d1a88;
                *(long *)(lVar27 + lVar14 * 8 + 0x20) = lVar30;
                lVar30 = *(long *)(lVar12 + 0x38);
                lVar27 = *(long *)(lVar12 + 0x20);
                uVar13 = Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart(plVar15);
                if ((lVar27 != 0) &&
                   (uVar11 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar27,uVar24,uVar13,0,0,0), lVar30 != 0)) {
                  if (uVar8 < *(uint *)(lVar30 + 0x18)) {
                    *(undefined4 *)(lVar30 + lVar14 * 4 + 0x20) = uVar11;
LAB_015d1a68:
                    return (long *)(ulong)(uVar9 ^ 1);
                  }
                  goto LAB_015d1a88;
                }
              }
            }
            else {
              lVar27 = *(long *)(lVar12 + 0x38);
              if (lVar27 != 0) {
                if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_015d1a88;
                if (*(long *)(lVar12 + 0x20) != 0) {
                  /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar12 + 0x20),
                                  *(undefined4 *)(lVar27 + lVar14 * 4 + 0x20),0);
                  goto LAB_015d1a04;
                }
              }
            }
          }
        }
      }
      func_0x00f78af4();
LAB_015d1a88:
      uVar13 = func_0x00f78b24();
      uVar8 = func_0x00f78ac0(uVar13,0);
      *(undefined8 *)(puVar6 + -0x70) = uVar24;
      *(long **)(puVar6 + -0x68) = plVar15;
      *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x10;
      *(code **)(puVar6 + -0x58) = Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart;
      if ((bRam0000000003eb535e & 1) == 0) {
        func_0x00f78a20(0x3d68fe8);
        func_0x00f78a20(0x3d6a910);
        func_0x00f78a20(0x3d6d468);
        func_0x00f78a20(0x3d69818);
        func_0x00f78a20(0x3d6efb0);
        func_0x00f78a20(0x3d6ba50);
        func_0x00f78a20(0x3d76438);
        bRam0000000003eb535e = 1;
      }
      if (uVar8 < 7) {
        puVar28 = *(undefined8 **)(&UNK_03a5f250 + (long)(int)uVar8 * 8);
      }
      else {
        puVar28 = (undefined8 *)0x3d6ba50;
      }
      return (long *)*puVar28;
    }
  }
  auVar35 = func_0x00f78af4();
  puVar28 = auVar35._8_8_;
  lVar30 = auVar35._0_8_;
  *(undefined8 *)(puVar6 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x60) = unaff_x22;
  *(long *)(puVar6 + -0x58) = lVar12;
  *(long *)(puVar6 + -0x50) = unaff_x20;
  *(long **)(puVar6 + -0x48) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(code **)(puVar6 + -0x38) =
       Atlas_Gameplay_Kart_KartVisualComposite__DestroyAndNullOut_AntennaVisualBehaviour_;
  if ((bRam0000000003eb654d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6bdf0);
    func_0x00f78a20(0x3d75ce0);
    bRam0000000003eb654d = 1;
  }
  uVar24 = *puVar28;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar25 = (uint *)0x0;
  iVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar24,0);
  if (iVar10 == 0) {
LAB_01871d74:
    lVar30 = *plVar23;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar30,0);
    if ((int)plVar15 == 0) {
LAB_01871db0:
      *puVar28 = 0;
      *plVar23 = 0;
      return plVar15;
    }
    if (*plVar23 != 0) {
      plVar15 = (long *)Atlas_Gameplay_Kart_BaseVisualBehaviour__DeInit(*plVar23,0);
      goto LAB_01871db0;
    }
  }
  else if ((*(long *)(lVar30 + 0x100) != 0) && (*(long *)(lVar30 + 0x20) != 0)) {
    puVar25 = *(uint **)(*(long *)(lVar30 + 0x100) + 0x28);
    param_7 = (long *)0x0;
    param_8 = (undefined8 *)0x0;
    lVar27 = /*STR('Untagged')*/ lRam0000000003d75ce0;
    /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar30 + 0x20),*puVar28);
    if ((*(long *)(lVar30 + 0x100) != 0) && (*(long *)(lVar30 + 0x28) != 0)) {
      puVar25 = *(uint **)(*(long *)(lVar30 + 0x100) + 0x28);
      param_7 = (long *)0x0;
      param_8 = (undefined8 *)0x0;
      lVar27 = /*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0;
      /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar30 + 0x28),*puVar28);
      uVar13 = *puVar28;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar13,0);
      goto LAB_01871d74;
    }
  }
  lVar14 = func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0xe0) = unaff_d9;
  *(undefined8 *)(puVar6 + -0xd8) = unaff_d8;
  *(undefined8 *)(puVar6 + -0xd0) = unaff_x28;
  *(undefined8 *)(puVar6 + -200) = unaff_x27;
  *(undefined8 *)(puVar6 + -0xc0) = unaff_x26;
  *(undefined8 *)(puVar6 + -0xb8) = unaff_x25;
  *(undefined8 *)(puVar6 + -0xb0) = unaff_x24;
  *(undefined8 *)(puVar6 + -0xa8) = 0x3d23990;
  *(undefined8 *)(puVar6 + -0xa0) = uVar24;
  *(long *)(puVar6 + -0x98) = lVar30;
  *(undefined8 **)(puVar6 + -0x90) = puVar28;
  *(long **)(puVar6 + -0x88) = plVar23;
  *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
  *(code **)(puVar6 + -0x78) =
       Atlas_Gameplay_Kart_KartVisualComposite__InstantiatePartAndParentTo_AntennaVisualBehaviour_;
  puVar26 = puVar25;
  lVar12 = lVar27;
  if ((bRam0000000003eb654e & 1) == 0) {
    func_0x00f78a20(0x3d328f8);
    func_0x00f78a20(0x3d32900);
    func_0x00f78a20(0x3d1c768);
    func_0x00f78a20(0x3d57a08);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3aed0);
    func_0x00f78a20(0x3d3aed8);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6bdf0);
    func_0x00f78a20(0x3d75ce0);
    bRam0000000003eb654e = 1;
  }
  *(undefined8 *)(puVar6 + -0x100) = 0;
  *(undefined8 *)(puVar6 + -0xf8) = 0;
  *(undefined8 *)(puVar6 + -0xf0) = 0;
  lVar30 = *param_7;
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar30,0);
  if (iVar10 == 0) {
LAB_01871f10:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(extraout_x1,0);
    if (((ulong)plVar15 & 1) == 0) {
      *param_7 = 0;
      *param_8 = 0;
      return plVar15;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar16 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
    *param_7 = lVar16;
    *param_8 = 0;
    puVar26 = (uint *)0x0;
    iVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(*param_7,0);
    if (iVar10 == 0) {
      if (lVar14 != 0) {
LAB_01872024:
        puVar26 = (uint *)*param_7;
        lVar12 = 0;
        plVar15 = (long *)Atlas_Gameplay_Kart_KartVisualComposite__ParentPartTo(lVar14,puVar25);
        if (*(char *)(lVar14 + 400) == '\0') {
          return plVar15;
        }
        if (*param_7 != 0) {
          puVar26 = *(uint **)(lVar14 + 0x198);
          lVar12 = lRam0000000003d57a08;
          /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(*param_7,0);
          if (*(long *)(lVar14 + 0x198) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar6 + -0x118,*(long *)(lVar14 + 0x198),uRam0000000003d3aed8);
            *(undefined8 *)(puVar6 + -0xf8) = *(undefined8 *)(puVar6 + -0x110);
            *(undefined8 *)(puVar6 + -0x100) = *(undefined8 *)(puVar6 + -0x118);
            *(undefined8 *)(puVar6 + -0xf0) = *(undefined8 *)(puVar6 + -0x108);
            puVar25 = (uint *)0x3d328f8;
            lVar27 = 0x3d3aed0;
            while( true ) {
              uVar17 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar6 + -0x100,uRam0000000003d328f8);
              if ((uVar17 & 1) == 0) {
                lVar14 = 0;
                goto code_r0x01872100;
              }
              param_7 = *(long **)(puVar6 + -0xf0);
              if (param_7 == (long *)0x0) break;
              lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_7,0);
              if (lVar16 == 0) {
                func_0x00f78af4();
                goto code_r0x018721b0;
              }
              uVar17 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar16,0);
              if ((uVar17 & 1) == 0) {
                if (*(long *)(lVar14 + 0x1a0) == 0) {
                  func_0x00f78af4();
                  goto code_r0x018721b0;
                }
                puVar26 = puRam0000000003d3aed0;
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x1a0),param_7);
              }
              else {
                puVar26 = (uint *)0x0;
                /*UnityEngine.LODGroup$$ForceLOD*/ func_0x032323ec(param_7,0);
              }
            }
            func_0x00f78af4();
code_r0x018721b0:
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x18721b4);
            (*UNRECOVERED_JUMPTABLE)();
          }
        }
      }
    }
    else if (*param_7 != 0) {
      uVar24 = (*(code *)**(undefined8 **)param_9[6])();
      *param_8 = uVar24;
      if ((*(long *)(lVar14 + 0x100) != 0) && (*(long *)(lVar14 + 0x20) != 0)) {
        puVar26 = *(uint **)(*(long *)(lVar14 + 0x100) + 0x28);
        lVar12 = /*STR('Untagged')*/ lRam0000000003d75ce0;
        /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar14 + 0x20),*param_7,puVar26,/*STR('Untagged')*/ lRam0000000003d75ce0,lVar27,0);
        if ((*(long *)(lVar14 + 0x100) != 0) && (*(long *)(lVar14 + 0x28) != 0)) {
          /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar14 + 0x28),*param_7,
                          *(undefined8 *)(*(long *)(lVar14 + 0x100) + 0x28),/*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0,
                          lVar27,0);
          Atlas_Gameplay_Kart_KartVisualComposite__SetRegionId
                    (extraout_d0 & 0xffffffff,lVar14,lVar27,0);
          goto LAB_01872024;
        }
      }
    }
  }
  else if (lVar14 != 0) {
    Atlas_Gameplay_Kart_KartVisualComposite__UnParentPart(lVar14,lVar30,0);
    lVar12 = 0;
    Atlas_Gameplay_Kart_KartVisualComposite__DestroyPart(lVar14,lVar30,lVar27);
    goto LAB_01871f10;
  }
  func_0x00f78af4();
  while (func_0x00f78ac0(lVar14,0), extraout_w1 == 1) {
    plVar15 = (long *)___cxa_begin_catch();
    lVar14 = *plVar15;
    ___cxa_end_catch();
code_r0x01872100:
    *(long *)(puVar6 + -0x118) = /*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768;
    uVar17 = (ulong)*(ushort *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0x12a);
    if (uVar17 != 0) {
      piVar29 = (int *)(*(long *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar28 = (undefined8 *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + (long)*piVar29 * 0x10 + 0x138);
          goto code_r0x01872160;
        }
        piVar29 = piVar29 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    puVar26 = (uint *)0x0;
    puVar28 = (undefined8 *)func_0x00fac1f0(puVar6 + -0x118);
code_r0x01872160:
    plVar15 = (long *)(*(code *)*puVar28)(puVar6 + -0x110,puVar28[1]);
    if (lVar14 == 0) {
      return plVar15;
    }
  }
  auVar36 = __Unwind_Resume();
  plVar18 = auVar36._8_8_;
  plVar15 = auVar36._0_8_;
  *(long **)(puVar6 + -0x160) = param_9;
  *(undefined8 **)(puVar6 + -0x158) = param_8;
  *(long *)(puVar6 + -0x150) = lVar27;
  *(uint **)(puVar6 + -0x148) = puVar25;
  *(long **)(puVar6 + -0x140) = param_7;
  *(long *)(puVar6 + -0x138) = lVar14;
  *(undefined1 **)(puVar6 + -0x130) = puVar6 + -0x80;
  *(undefined **)(puVar6 + -0x128) =
       &System_Linq_Expressions_Interpreter_LabelInfo__CommonNode_object_;
  puVar25 = puVar26;
  lVar27 = lVar12;
  plVar23 = (long *)(**(code **)**(undefined8 **)(lVar12 + 0x30))();
  uVar8 = (uint)param_2;
  if (plVar23 != (long *)0x0) {
    lVar27 = *(long *)(*plVar23 + 0x1c0);
    uVar17 = (**(code **)(*plVar23 + 0x1b8))(plVar23,plVar15,plVar18);
    if ((uVar17 & 1) != 0) {
      return plVar15;
    }
    lVar14 = *(long *)(*(long *)(lVar12 + 0x30) + 0x18);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    param_8 = (undefined8 *)func_0x00f78aec(lVar14);
    puVar25 = *(uint **)(*(long *)(lVar12 + 0x30) + 0x20);
    (**(code **)puVar25)(param_8,plVar23);
    uVar8 = (uint)param_2;
    param_9 = plVar23;
    if (plVar15 != (long *)0x0) {
      if (param_8 == (undefined8 *)0x0) goto code_r0x01872338;
      do {
        auVar36._8_8_ = plVar18;
        auVar36._0_8_ = plVar15;
        puVar25 = *(uint **)(*(long *)(lVar12 + 0x30) + 0x28);
        (**(code **)puVar25)(param_8,plVar15);
        uVar8 = (uint)param_2;
        if (puVar26 == (uint *)0x0) goto code_r0x01872338;
        puVar25 = *(uint **)(*(long *)(lVar12 + 0x30) + 0x30);
        plVar15 = (long *)(**(code **)puVar25)(puVar26,plVar15);
      } while (plVar15 != (long *)0x0);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = plVar18;
    auVar36 = auVar4 << 0x40;
    uVar8 = (uint)param_2;
    if (plVar18 == (long *)0x0) {
      return (long *)0x0;
    }
    if (param_8 != (undefined8 *)0x0) {
      while( true ) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = plVar18;
        auVar36 = auVar5 << 0x40;
        puVar25 = *(uint **)(*(long *)(lVar12 + 0x30) + 0x40);
        uVar17 = (**(code **)puVar25)(param_8,plVar18);
        uVar8 = (uint)param_2;
        if ((uVar17 & 1) != 0) {
          return plVar18;
        }
        if (puVar26 == (uint *)0x0) break;
        plVar18 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x30))
                                    (puVar26,plVar18);
        if (plVar18 == (long *)0x0) {
          return (long *)0x0;
        }
      }
    }
  }
code_r0x01872338:
  uVar24 = auVar36._0_8_;
  func_0x00f78af4();
  *(undefined1 (*) [16])(puVar6 + -400) = auVar36;
  *(uint **)(puVar6 + -0x180) = puVar26;
  *(long *)(puVar6 + -0x178) = lVar12;
  *(undefined1 **)(puVar6 + -0x170) = puVar6 + -0x130;
  *(undefined **)(puVar6 + -0x168) =
       &
       Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateDefaultConstructor_object_
  ;
  puVar26 = puVar25;
  if ((bRam0000000003eb654f & 1) == 0) {
    func_0x00f78a20(0x3d241f8);
    func_0x00f78a20(0x3d7c160);
    bRam0000000003eb654f = 1;
  }
  lVar12 = **(long **)(puVar25 + 0xc);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  lVar12 = func_0x00f78aec(lVar12);
  (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x10) = extraout_x1_00;
    /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_00,/*STR('type')*/ uRam0000000003d7c160,0);
    iVar10 = /*Newtonsoft.Json.Utilities.TypeExtensions$$IsValueType*/ func_0x02b83ec0(*(undefined8 *)(lVar12 + 0x10),0);
    if (iVar10 == 0) {
      uVar24 = *(undefined8 *)(lVar12 + 0x10);
      if (((*(ushort *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar24 = /*Newtonsoft.Json.Utilities.ReflectionUtils$$GetDefaultConstructor*/ func_0x02b7bb28(uVar24,1,0);
      *(undefined8 *)(lVar12 + 0x18) = uVar24;
      lVar27 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      plVar15 = (long *)func_0x00f78aec(lVar27);
      (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x28));
    }
    else {
      lVar27 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      plVar15 = (long *)func_0x00f78aec(lVar27);
      (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
    }
    return plVar15;
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0x1c0) = uVar24;
  *(undefined8 *)(puVar6 + -0x1b8) = extraout_x1_00;
  *(undefined8 *)(puVar6 + -0x1b0) = 0;
  *(uint **)(puVar6 + -0x1a8) = puVar25;
  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -0x170;
  *(undefined **)(puVar6 + -0x198) =
       &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
  puVar25 = puVar26;
  if ((bRam0000000003eb6550 & 1) == 0) {
    func_0x00f78a20(0x3d792f8);
    bRam0000000003eb6550 = 1;
  }
  lVar12 = **(long **)(puVar26 + 0xc);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  lVar12 = func_0x00f78aec(lVar12);
  (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x10) = extraout_x1_01;
    /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_01,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
    lVar27 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    plVar15 = (long *)func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
              (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
    return plVar15;
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0x1f0) = uVar24;
  *(undefined8 *)(puVar6 + -0x1e8) = 0;
  *(undefined8 *)(puVar6 + -0x1e0) = extraout_x1_01;
  *(uint **)(puVar6 + -0x1d8) = puVar26;
  *(undefined1 **)(puVar6 + -0x1d0) = puVar6 + -0x1a0;
  *(undefined **)(puVar6 + -0x1c8) =
       &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
  puVar26 = puVar25;
  if ((bRam0000000003eb6551 & 1) == 0) {
    func_0x00f78a20(0x3d7b118);
    bRam0000000003eb6551 = 1;
  }
  lVar12 = **(long **)(puVar25 + 0xc);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  lVar12 = func_0x00f78aec(lVar12);
  (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x10) = extraout_x1_02;
    /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_02,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
    lVar27 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    plVar15 = (long *)func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
              (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
    return plVar15;
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0x220) = uVar24;
  *(undefined8 *)(puVar6 + -0x218) = 0;
  *(undefined8 *)(puVar6 + -0x210) = extraout_x1_02;
  *(uint **)(puVar6 + -0x208) = puVar25;
  *(undefined1 **)(puVar6 + -0x200) = puVar6 + -0x1d0;
  *(undefined **)(puVar6 + -0x1f8) =
       &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateMethodCall_object_;
  puVar25 = puVar26;
  if ((bRam0000000003eb6552 & 1) == 0) {
    func_0x00f78a20(0x3d209d0);
    func_0x00f78a20(0x3d7a5f8);
    bRam0000000003eb6552 = 1;
  }
  lVar12 = **(long **)(puVar26 + 0xc);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  lVar12 = func_0x00f78aec(lVar12);
  (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x18) = extraout_x1_03;
    /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_03,/*STR('method')*/ uRam0000000003d7a5f8,0);
    lVar27 = func_0x00f78adc(*(undefined8 *)(lVar12 + 0x18),/*System.Reflection.ConstructorInfo_TypeInfo*/ uRam0000000003d209d0);
    *(long *)(lVar12 + 0x10) = lVar27;
    lVar30 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
    if (lVar27 == 0) {
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      plVar15 = (long *)func_0x00f78aec(lVar30);
      (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x28));
    }
    else {
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      plVar15 = (long *)func_0x00f78aec(lVar30);
      (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
    }
    return plVar15;
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0x250) = uVar24;
  *(undefined8 *)(puVar6 + -0x248) = extraout_x1_03;
  *(undefined8 *)(puVar6 + -0x240) = 0;
  *(uint **)(puVar6 + -0x238) = puVar26;
  *(undefined1 **)(puVar6 + -0x230) = puVar6 + -0x200;
  *(undefined **)(puVar6 + -0x228) =
       &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
  puVar26 = puVar25;
  if ((bRam0000000003eb6553 & 1) == 0) {
    func_0x00f78a20(0x3d792f8);
    bRam0000000003eb6553 = 1;
  }
  lVar12 = **(long **)(puVar25 + 0xc);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  lVar12 = func_0x00f78aec(lVar12);
  (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x10) = extraout_x1_04;
    /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_04,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
    lVar27 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    plVar15 = (long *)func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
              (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
    return plVar15;
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0x280) = uVar24;
  *(undefined8 *)(puVar6 + -0x278) = 0;
  *(undefined8 *)(puVar6 + -0x270) = extraout_x1_04;
  *(uint **)(puVar6 + -0x268) = puVar25;
  *(undefined1 **)(puVar6 + -0x260) = puVar6 + -0x230;
  *(undefined **)(puVar6 + -600) =
       &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
  puVar25 = puVar26;
  if ((bRam0000000003eb6554 & 1) == 0) {
    func_0x00f78a20(0x3d7b118);
    bRam0000000003eb6554 = 1;
  }
  lVar12 = **(long **)(puVar26 + 0xc);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  lVar12 = func_0x00f78aec(lVar12);
  (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x10) = extraout_x1_05;
    /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_05,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
    lVar27 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    plVar15 = (long *)func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
              (plVar15,lVar12,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
    return plVar15;
  }
  auVar37 = func_0x00f78af4();
  puVar7 = auVar37._8_8_;
  lVar14 = auVar37._0_8_;
  *(undefined8 *)(puVar6 + -0x2b0) = uVar24;
  *(undefined8 *)(puVar6 + -0x2a8) = 0;
  *(undefined8 *)(puVar6 + -0x2a0) = extraout_x1_05;
  *(uint **)(puVar6 + -0x298) = puVar26;
  *(undefined1 **)(puVar6 + -0x290) = puVar6 + -0x260;
  *(undefined **)(puVar6 + -0x288) = &UnityEngine_UI_LayoutGroup__SetProperty_bool_;
  puVar32 = puVar6 + -0x290;
  puVar6[-0x2b1] = (char)puVar25;
  lVar12 = **(long **)(lVar27 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  uVar24 = func_0x00f78ae0(lVar12,puVar6 + -0x2b1);
  puVar26 = (uint *)0x0;
  plVar15 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(puVar7,uVar24);
  if (((ulong)plVar15 & 1) != 0) {
    return plVar15;
  }
  *puVar7 = (char)puVar25;
  if (lVar14 == 0) {
    auVar37 = func_0x00f78af4();
    puVar21 = auVar37._8_8_;
    lVar14 = auVar37._0_8_;
    *(long *)(puVar6 + -0x2f0) = lVar12;
    *(undefined1 **)(puVar6 + -0x2e8) = puVar7;
    *(uint **)(puVar6 + -0x2e0) = puVar25;
    *(undefined8 *)(puVar6 + -0x2d8) = 0;
    *(undefined1 **)(puVar6 + -0x2d0) = puVar32;
    *(undefined **)(puVar6 + -0x2c8) = &UnityEngine_UI_LayoutGroup__SetProperty_int_;
    puVar32 = puVar6 + -0x2d0;
    *(int *)(puVar6 + -0x2f4) = (int)puVar26;
    lVar12 = **(long **)(lVar27 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar24 = func_0x00f78ae0(lVar12,puVar6 + -0x2f4);
    puVar25 = (uint *)0x0;
    plVar15 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(puVar21,uVar24);
    if (((ulong)plVar15 & 1) != 0) {
      return plVar15;
    }
    *puVar21 = (int)puVar26;
    if (lVar14 == 0) {
      auVar37 = func_0x00f78af4();
      puVar22 = auVar37._8_8_;
      lVar14 = auVar37._0_8_;
      puVar7 = puVar6 + -0x360;
      *(long **)(puVar6 + -0x340) = param_9;
      *(undefined8 **)(puVar6 + -0x338) = param_8;
      *(long *)(puVar6 + -0x330) = lVar12;
      *(undefined4 **)(puVar6 + -0x328) = puVar21;
      *(uint **)(puVar6 + -800) = puVar26;
      *(undefined8 *)(puVar6 + -0x318) = 0;
      *(undefined1 **)(puVar6 + -0x310) = puVar32;
      *(undefined **)(puVar6 + -0x308) =
           &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
      puVar32 = puVar6 + -0x310;
      *(int *)(puVar6 + -0x344) = (int)puVar25;
      lVar12 = **(long **)(lVar27 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      param_8 = (undefined8 *)func_0x00f78ae0(lVar12,puVar6 + -0x344);
      lVar12 = **(long **)(lVar27 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      *(long *)(puVar6 + -0x360) = lVar12;
      *(undefined8 *)(puVar6 + -0x358) = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + -0x350) = *puVar22;
      lVar27 = *(long *)(lVar12 + 0x140);
      plVar15 = (long *)(**(code **)(lVar12 + 0x138))(puVar6 + -0x360,param_8);
      if (((ulong)plVar15 & 1) != 0) {
        return plVar15;
      }
      *puVar22 = (int)puVar25;
      if (lVar14 == 0) {
        auVar35 = func_0x00f78af4();
        plVar23 = auVar35._8_8_;
        *(long *)(puVar6 + -0x390) = lVar12;
        *(undefined4 **)(puVar6 + -0x388) = puVar22;
        *(uint **)(puVar6 + -0x380) = puVar25;
        *(undefined8 *)(puVar6 + -0x378) = 0;
        *(undefined1 **)(puVar6 + -0x370) = puVar32;
        *(undefined **)(puVar6 + -0x368) = &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
        plVar15 = (long *)*plVar23;
        if (lVar27 == 0 && plVar15 == (long *)0x0) {
          return plVar15;
        }
        lVar16 = lVar27;
        if (plVar15 != (long *)0x0) {
          lVar16 = *(long *)(*plVar15 + 0x140);
          plVar15 = (long *)(**(code **)(*plVar15 + 0x138))(plVar15,lVar27);
          if (((ulong)plVar15 & 1) != 0) {
            return plVar15;
          }
        }
        *plVar23 = lVar27;
        if (auVar35._0_8_ == 0) {
          lVar14 = func_0x00f78af4();
          puVar7 = puVar6 + -0x3e0;
          *(undefined8 *)(puVar6 + -0x3d0) = unaff_d9;
          *(ulong *)(puVar6 + -0x3c8) = extraout_d0 & 0xffffffff;
          *(long *)(puVar6 + -0x3c0) = lVar12;
          *(long **)(puVar6 + -0x3b8) = plVar23;
          *(long *)(puVar6 + -0x3b0) = lVar27;
          *(undefined8 *)(puVar6 + -0x3a8) = 0;
          *(undefined1 **)(puVar6 + -0x3a0) = puVar6 + -0x370;
          *(undefined **)(puVar6 + -0x398) = &UnityEngine_UI_LayoutGroup__SetProperty_float_;
          puVar32 = puVar6 + -0x3a0;
          *(uint *)(puVar6 + -0x3d4) = extraout_s0;
          lVar27 = **(long **)(lVar16 + 0x30);
          auVar37._8_8_ = lVar27;
          auVar37._0_8_ = lVar14;
          if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar27);
          }
          uVar24 = func_0x00f78ae0(lVar27,puVar6 + -0x3d4);
          lVar16 = 0;
          plVar15 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1_06,uVar24);
          if (((ulong)plVar15 & 1) != 0) {
            return plVar15;
          }
          *extraout_x1_06 = extraout_s0;
          if (lVar14 == 0) {
            lVar14 = func_0x00f78af4();
            puVar7 = puVar6 + -0x430;
            *(undefined8 *)(puVar6 + -0x420) = unaff_d9;
            *(ulong *)(puVar6 + -0x418) = (ulong)extraout_s0;
            *(long *)(puVar6 + -0x410) = lVar12;
            *(long *)(puVar6 + -0x408) = lVar27;
            *(uint **)(puVar6 + -0x400) = extraout_x1_06;
            *(undefined8 *)(puVar6 + -0x3f8) = 0;
            *(undefined1 **)(puVar6 + -0x3f0) = puVar32;
            *(undefined **)(puVar6 + -1000) = &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
            puVar32 = puVar6 + -0x3f0;
            *(uint *)(puVar6 + -0x428) = extraout_s0_00;
            *(uint *)(puVar6 + -0x424) = uVar8;
            lVar27 = **(long **)(lVar16 + 0x30);
            auVar37._8_8_ = lVar27;
            auVar37._0_8_ = lVar14;
            if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar27);
            }
            uVar24 = func_0x00f78ae0(lVar27,puVar6 + -0x428);
            lVar16 = 0;
            plVar15 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_07,uVar24);
            if (((ulong)plVar15 & 1) != 0) {
              return plVar15;
            }
            *extraout_x1_07 = extraout_s0_00;
            extraout_x1_07[1] = uVar8;
            if (lVar14 == 0) {
              auVar35 = func_0x00f78af4();
              plVar15 = auVar35._0_8_;
              *(long *)(puVar6 + -0x460) = lVar12;
              *(long *)(puVar6 + -0x458) = lVar27;
              *(uint **)(puVar6 + -0x450) = extraout_x1_07;
              *(undefined8 *)(puVar6 + -0x448) = 0;
              *(undefined1 **)(puVar6 + -0x440) = puVar32;
              *(undefined **)(puVar6 + -0x438) =
                   &System_Threading_LazyInitializer__EnsureInitialized_Task_ContingentProperties_;
              lVar27 = *plVar15;
              func_0x00f78a30();
              if (lVar27 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar15 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))
                                            (plVar15,auVar35._8_8_);
                return plVar15;
              }
              return (long *)*plVar15;
            }
            puVar33 = &UNK_01872cb0;
            puVar25 = extraout_x1_07;
          }
          else {
            puVar33 = &UNK_01872c1c;
            puVar25 = extraout_x1_06;
          }
        }
        else {
          puVar32 = *(undefined1 **)(puVar6 + -0x370);
          puVar33 = *(undefined **)(puVar6 + -0x368);
          puVar25 = *(uint **)(puVar6 + -0x380);
          lVar14 = *(long *)(puVar6 + -0x378);
          lVar12 = *(long *)(puVar6 + -0x390);
          auVar37._8_8_ = *(undefined8 *)(puVar6 + -0x388);
          auVar37._0_8_ = auVar35._0_8_;
        }
      }
      else {
        puVar33 = &UNK_01872b18;
        puVar7 = puVar6 + -0x360;
      }
    }
    else {
      puVar33 = &UNK_01872a5c;
      puVar7 = puVar6 + -0x300;
      puVar25 = puVar26;
    }
  }
  else {
    puVar33 = &UNK_018729d4;
    puVar7 = puVar6 + -0x2c0;
  }
  plVar15 = auVar37._0_8_;
  *(long *)(puVar7 + -0x30) = lVar12;
  *(long *)(puVar7 + -0x28) = auVar37._8_8_;
  *(uint **)(puVar7 + -0x20) = puVar25;
  *(long *)(puVar7 + -0x18) = lVar14;
  *(undefined1 **)(puVar7 + -0x10) = puVar32;
  *(undefined **)(puVar7 + -8) = puVar33;
  if ((bRam0000000003ec2d3a & 1) == 0) {
    func_0x00f78a20(0x3d20558,0);
    func_0x00f78a20(0x3d22df0);
    bRam0000000003ec2d3a = 1;
  }
  plVar23 = (long *)(**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
  if ((int)plVar23 == 0) {
    return plVar23;
  }
  if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
  lVar27 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar15);
  if ((uVar17 & 1) != 0) {
    lVar27 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar27,lVar27);
    plVar23 = *(long **)(puVar7 + -0x20);
    uVar24 = *(undefined8 *)(puVar7 + -0x30);
    uVar13 = *(undefined8 *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x30) = uVar24;
    *(undefined8 *)(puVar7 + -0x28) = uVar13;
    *(long **)(puVar7 + -0x20) = plVar23;
    *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    if (lVar27 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar19 = func_0x00f78aec();
      uVar20 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar19,uVar20,0);
    }
    else {
      uVar13 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar17 = (*pcRam0000000003ec01d0)(plVar15);
      if ((uVar17 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar15 = (long *)(*pcRam0000000003ec01e0)(plVar15,lVar27);
        return plVar15;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar19 = func_0x00f78aec();
      uVar20 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar20,0);
      plVar23 = plVar15;
    }
    uVar20 = func_0x00f78a24(0x3d5a8a8);
    auVar35 = func_0x00f78ac0(uVar19,uVar20);
    *(undefined8 *)(puVar7 + -0x60) = uVar24;
    *(undefined8 *)(puVar7 + -0x58) = uVar13;
    *(long **)(puVar7 + -0x50) = plVar23;
    *(undefined8 *)(puVar7 + -0x48) = uVar19;
    *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar15 = (long *)(*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
    return plVar15;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar7 + -0x58) = 0x3d23990;
  *(long *)(puVar7 + -0x50) = lVar30;
  *(undefined8 *)(puVar7 + -0x48) = extraout_x1;
  *(long **)(puVar7 + -0x40) = param_9;
  *(undefined8 **)(puVar7 + -0x38) = param_8;
  *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
  *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
  *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
  *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
  *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  if ((bRam0000000003ec2d44 & 1) == 0) {
    func_0x00f78a20(0x3d20068);
    func_0x00f78a20(0x3d19788);
    func_0x00f78a20(0x3d22df0);
    func_0x00f78a20(0x3d398f8);
    func_0x00f78a20(0x3d39900);
    func_0x00f78a20(0x3d1d6c0);
    func_0x00f78a20(0x3d3a1c0);
    func_0x00f78a20(0x3d3a1c8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25458);
    bRam0000000003ec2d44 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar27,0,0);
  if (((ulong)plVar15 & 1) != 0) {
    return plVar15;
  }
  if (lVar27 == 0) {
code_r0x032d1910:
    lVar27 = func_0x00f78af4();
    return *(long **)(lVar27 + 0x18);
  }
  uVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar27,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar24,0,0);
  if (((ulong)plVar15 & 1) != 0) {
    return plVar15;
  }
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
  plVar15 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar27,0);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else if (*plVar15 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar15 = (long *)0x0;
  }
  *(long *)(puVar7 + -0x68) = lVar27;
code_r0x032d1694:
  do {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar15,0,0);
    if ((uVar17 & 1) != 0) break;
    if (plVar15 == (long *)0x0) goto code_r0x032d1910;
    uVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar15,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar24,0,0);
    uVar24 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
    if (iVar10 != 0) break;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar24,0);
    /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar15,uVar24,lVar12,0);
    if (lVar12 == 0) goto code_r0x032d1910;
    uVar8 = *(uint *)(lVar12 + 0x18);
    uVar17 = (ulong)uVar8;
    bVar1 = 0 < (int)uVar8;
    if (0 < (int)uVar8) {
      uVar31 = 0;
      do {
        if ((uVar17 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar23 = *(long **)(*(long *)(lVar12 + 0x10) + uVar31 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar23,0,0);
        if ((iVar10 != 0) && (plVar23 != (long *)0x0)) {
          if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar23 + 300)) &&
             ((*(long *)(*(long *)(*plVar23 + 200) +
                         (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8 + -8) ==
               /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 && (uVar17 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar23,0), (uVar17 & 1) != 0)))) {
            *(long **)(puVar7 + -0x68) = plVar15;
            break;
          }
        }
        uVar31 = uVar31 + 1;
        uVar17 = (ulong)*(int *)(lVar12 + 0x18);
        bVar1 = (long)uVar31 < (long)uVar17;
      } while ((long)uVar31 < (long)uVar17);
    }
    plVar15 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar15,0);
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)0x0;
      if (!bVar1) break;
      goto code_r0x032d1694;
    }
    if (*plVar15 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar15 = (long *)0x0;
    }
  } while (bVar1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar24 = *(undefined8 *)(puVar7 + -0x68);
  iVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar24,lVar27,0);
  if (iVar10 != 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar24,lVar12);
    if ((uVar17 & 1) == 0) goto code_r0x032d18c0;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar24);
code_r0x032d18c0:
  if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar27 = lRam0000000003d39900;
  uVar24 = *(undefined8 *)(puVar7 + -0x30);
  uVar13 = *(undefined8 *)(puVar7 + -0x40);
  uVar20 = *(undefined8 *)(puVar7 + -0x38);
  *(undefined8 *)(puVar7 + -0x40) = uVar13;
  *(undefined8 *)(puVar7 + -0x38) = uVar20;
  *(undefined8 *)(puVar7 + -0x30) = uVar24;
  *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
  *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
  *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
  *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  lVar30 = *(long *)(lRam0000000003d39900 + 0x18);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
  uVar3 = *(ushort *)(lVar30 + 0x132);
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar30);
    uVar3 = *(ushort *)(lVar30 + 0x132);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    lVar30 = *(long *)(lVar27 + 0x18);
    if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar30);
    }
    lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
    if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar30);
    }
    if (*(int *)(lVar30 + 0xe0) == 0) {
      lVar30 = *(long *)(lVar27 + 0x18);
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      func_0x00f78ad0(lVar30);
    }
  }
  lVar30 = *(long *)(lVar27 + 0x18);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  lVar30 = **(long **)(lVar30 + 0xb8);
  if (lVar30 == 0) {
    lVar30 = func_0x00f78af4();
    *(undefined8 *)(puVar7 + -0x90) = uVar13;
    *(undefined8 *)(puVar7 + -0x88) = uVar20;
    *(undefined8 *)(puVar7 + -0x80) = uVar24;
    *(undefined8 *)(puVar7 + -0x78) = 0;
    *(long *)(puVar7 + -0x70) = lVar27;
    *(long *)(puVar7 + -0x68) = lVar12;
    *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
    lVar27 = *(long *)(lVar30 + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    uVar24 = func_0x00f78aec(lVar27);
    lVar12 = *(long *)(lVar30 + 0x18);
    uVar3 = *(ushort *)(lVar12 + 0x132);
    lVar27 = lVar12;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar12);
      lVar27 = *(long *)(lVar30 + 0x18);
      uVar3 = *(ushort *)(lVar27 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
    lVar12 = lVar27;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar27);
      lVar12 = *(long *)(lVar30 + 0x18);
      uVar3 = *(ushort *)(lVar12 + 0x132);
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x20);
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    (*UNRECOVERED_JUMPTABLE)(uVar24,0,uVar13,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x30));
    lVar27 = *(long *)(lVar30 + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    uVar13 = func_0x00f78aec(lVar27);
    lVar12 = *(long *)(lVar30 + 0x18);
    uVar3 = *(ushort *)(lVar12 + 0x132);
    lVar27 = lVar12;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar12);
      lVar27 = *(long *)(lVar30 + 0x18);
      uVar3 = *(ushort *)(lVar27 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x40);
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    plVar15 = (long *)(*UNRECOVERED_JUMPTABLE)
                                (uVar13,0,uVar24,*(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x40));
    lVar27 = *(long *)(lVar30 + 0x18);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      plVar15 = (long *)func_0x00fac028(lVar27);
    }
    lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      plVar15 = (long *)func_0x00fac028(lVar27);
    }
    **(undefined8 **)(lVar27 + 0xb8) = uVar13;
    return plVar15;
  }
  lVar16 = *(long *)(lVar27 + 0x18);
  uVar3 = *(ushort *)(lVar16 + 0x132);
  lVar14 = lVar16;
  if ((uVar3 & 1) == 0) {
    func_0x00fac028(lVar16);
    lVar14 = *(long *)(lVar27 + 0x18);
    uVar3 = *(ushort *)(lVar14 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x18);
  if ((uVar3 & 1) == 0) {
    *(code **)(puVar7 + -0x48) = UNRECOVERED_JUMPTABLE;
    func_0x00fac028(lVar14);
    UNRECOVERED_JUMPTABLE = *(code **)(puVar7 + -0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar15 = (long *)(*UNRECOVERED_JUMPTABLE)
                              (lVar30,lVar12,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
  return plVar15;
}



// ============================================================
// RVA: 0x158b538 | Atlas.FrontEnd.FrontEndScene.RequestLoadKart
// ============================================================

/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_FrontEnd_FrontEndScene__RequestLoadKart
                 (undefined1 param_1 [16],undefined8 param_2,long param_3,uint param_4,long param_5,
                 undefined8 param_6,long *param_7,undefined8 *param_8,long *param_9)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint *extraout_x1_06;
  uint *extraout_x1_07;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  uint *puVar26;
  uint *puVar27;
  long lVar28;
  undefined8 *puVar29;
  int *piVar30;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar31;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar32;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar33;
  undefined *unaff_x30;
  undefined *puVar34;
  uint extraout_s0;
  uint extraout_s0_00;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_2e1 [529];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  
  puVar6 = &stack0xfffffffffffffff0;
  lVar28 = *(long *)(param_3 + 0x90);
  if (lVar28 != 0) {
    if (*(uint *)(lVar28 + 0x18) <= param_4) goto LAB_0158b578;
    lVar28 = *(long *)(lVar28 + (long)(int)param_4 * 0x40 + 0x28);
    if (lVar28 == 0) goto LAB_0158b574;
    if ((bRam0000000003eb5357 & 1) == 0) {
      func_0x00f78a20(0x3d59bf0,param_5,0);
      bRam0000000003eb5357 = 1;
    }
    plVar23 = (long *)0x0;
    lVar31 = lRam0000000003d59bf0;
Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    plVar24 = plVar23;
    if (*(long *)(lVar28 + 0x28) != 0) {
      plVar24 = (long *)**(undefined8 **)(lVar31 + 0x30);
      lVar14 = (*(code *)*plVar24)();
      unaff_x19 = plVar23;
      unaff_x20 = param_5;
      if (lVar14 != 0) {
        uVar25 = *(undefined8 *)(lVar14 + 0x50);
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
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
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if ((bRam0000000003eb535d & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb535d = 1;
        }
        uVar12 = (uint)plVar23;
        if (uVar12 == 0) {
          lVar31 = *(long *)(lVar28 + 0x30);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
          if (lVar31 != 0) {
            if (*(uint *)(lVar31 + 0x18) < 7) goto LAB_015d1a88;
            *(undefined8 *)(lVar31 + 0x50) = uVar13;
            goto LAB_015d1960;
          }
        }
        else {
LAB_015d1960:
          lVar31 = *(long *)(lVar28 + 0x30);
          if (lVar31 != 0) {
            if (*(uint *)(lVar31 + 0x18) <= uVar12) goto LAB_015d1a88;
            lVar14 = (long)(int)uVar12;
            uVar13 = *(undefined8 *)(lVar31 + lVar14 * 8 + 0x20);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar13,param_5,0);
            if ((uVar9 & 1) != 0) goto LAB_015d1a68;
            lVar31 = *(long *)(lVar28 + 0x38);
            if (lVar31 != 0) {
              if (*(uint *)(lVar31 + 0x18) <= uVar12) goto LAB_015d1a88;
              iVar10 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar31 + lVar14 * 4 + 0x20,0);
              if (iVar10 == 0) {
LAB_015d1a04:
                lVar31 = *(long *)(lVar28 + 0x30);
                if (lVar31 != 0) {
                  if (*(uint *)(lVar31 + 0x18) <= uVar12) goto LAB_015d1a88;
                  *(long *)(lVar31 + lVar14 * 8 + 0x20) = param_5;
                  lVar31 = *(long *)(lVar28 + 0x38);
                  lVar28 = *(long *)(lVar28 + 0x20);
                  uVar13 = Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart(plVar23);
                  if ((lVar28 != 0) &&
                     (uVar11 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar28,uVar25,uVar13,0,0,0), lVar31 != 0)) {
                    if (uVar12 < *(uint *)(lVar31 + 0x18)) {
                      *(undefined4 *)(lVar31 + lVar14 * 4 + 0x20) = uVar11;
LAB_015d1a68:
                      return (long *)(ulong)(uVar9 ^ 1);
                    }
                    goto LAB_015d1a88;
                  }
                }
              }
              else {
                lVar31 = *(long *)(lVar28 + 0x38);
                if (lVar31 != 0) {
                  if (*(uint *)(lVar31 + 0x18) <= uVar12) goto LAB_015d1a88;
                  if (*(long *)(lVar28 + 0x20) != 0) {
                    /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar28 + 0x20),
                                    *(undefined4 *)(lVar31 + lVar14 * 4 + 0x20),0);
                    goto LAB_015d1a04;
                  }
                }
              }
            }
          }
        }
        func_0x00f78af4();
LAB_015d1a88:
        uVar13 = func_0x00f78b24();
        uVar12 = func_0x00f78ac0(uVar13,0);
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar25;
        *(long **)((long)register0x00000008 + -0x68) = plVar23;
        *(undefined1 **)((long)register0x00000008 + -0x60) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x58) =
             Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart;
        if ((bRam0000000003eb535e & 1) == 0) {
          func_0x00f78a20(0x3d68fe8);
          func_0x00f78a20(0x3d6a910);
          func_0x00f78a20(0x3d6d468);
          func_0x00f78a20(0x3d69818);
          func_0x00f78a20(0x3d6efb0);
          func_0x00f78a20(0x3d6ba50);
          func_0x00f78a20(0x3d76438);
          bRam0000000003eb535e = 1;
        }
        if (uVar12 < 7) {
          puVar29 = *(undefined8 **)(&UNK_03a5f250 + (long)(int)uVar12 * 8);
        }
        else {
          puVar29 = (undefined8 *)0x3d6ba50;
        }
        return (long *)*puVar29;
      }
    }
    auVar36 = func_0x00f78af4();
    puVar29 = auVar36._8_8_;
    lVar14 = auVar36._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = lVar28;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) =
         Atlas_Gameplay_Kart_KartVisualComposite__DestroyAndNullOut_AntennaVisualBehaviour_;
    if ((bRam0000000003eb654d & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d6bdf0);
      func_0x00f78a20(0x3d75ce0);
      bRam0000000003eb654d = 1;
    }
    uVar25 = *puVar29;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar26 = (uint *)0x0;
    iVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,0);
    if (iVar10 == 0) {
LAB_01871d74:
      lVar14 = *plVar24;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar23 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar14,0);
      if ((int)plVar23 == 0) {
LAB_01871db0:
        *puVar29 = 0;
        *plVar24 = 0;
        return plVar23;
      }
      if (*plVar24 != 0) {
        plVar23 = (long *)Atlas_Gameplay_Kart_BaseVisualBehaviour__DeInit(*plVar24,0);
        goto LAB_01871db0;
      }
    }
    else if ((*(long *)(lVar14 + 0x100) != 0) && (*(long *)(lVar14 + 0x20) != 0)) {
      puVar26 = *(uint **)(*(long *)(lVar14 + 0x100) + 0x28);
      param_7 = (long *)0x0;
      param_8 = (undefined8 *)0x0;
      lVar31 = /*STR('Untagged')*/ lRam0000000003d75ce0;
      /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar14 + 0x20),*puVar29);
      if ((*(long *)(lVar14 + 0x100) != 0) && (*(long *)(lVar14 + 0x28) != 0)) {
        puVar26 = *(uint **)(*(long *)(lVar14 + 0x100) + 0x28);
        param_7 = (long *)0x0;
        param_8 = (undefined8 *)0x0;
        lVar31 = /*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0;
        /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar14 + 0x28),*puVar29);
        uVar13 = *puVar29;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar13,0);
        goto LAB_01871d74;
      }
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -200) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3d23990;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar25;
    *(long *)((long)register0x00000008 + -0x98) = lVar14;
    *(undefined8 **)((long)register0x00000008 + -0x90) = puVar29;
    *(long **)((long)register0x00000008 + -0x88) = plVar24;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0x78) =
         Atlas_Gameplay_Kart_KartVisualComposite__InstantiatePartAndParentTo_AntennaVisualBehaviour_
    ;
    puVar27 = puVar26;
    lVar28 = lVar31;
    if ((bRam0000000003eb654e & 1) == 0) {
      func_0x00f78a20(0x3d328f8);
      func_0x00f78a20(0x3d32900);
      func_0x00f78a20(0x3d1c768);
      func_0x00f78a20(0x3d57a08);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d3aed0);
      func_0x00f78a20(0x3d3aed8);
      func_0x00f78a20(0x3d5b098);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d6bdf0);
      func_0x00f78a20(0x3d75ce0);
      bRam0000000003eb654e = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    lVar14 = *param_7;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar14,0);
    if (iVar10 == 0) {
LAB_01871f10:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar23 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(extraout_x1,0);
      if (((ulong)plVar23 & 1) == 0) {
        *param_7 = 0;
        *param_8 = 0;
        return plVar23;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar16 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
      *param_7 = lVar16;
      *param_8 = 0;
      puVar27 = (uint *)0x0;
      iVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(*param_7,0);
      if (iVar10 == 0) {
        if (lVar15 != 0) {
LAB_01872024:
          puVar27 = (uint *)*param_7;
          lVar28 = 0;
          plVar23 = (long *)Atlas_Gameplay_Kart_KartVisualComposite__ParentPartTo(lVar15,puVar26);
          if (*(char *)(lVar15 + 400) == '\0') {
            return plVar23;
          }
          if (*param_7 != 0) {
            puVar27 = *(uint **)(lVar15 + 0x198);
            lVar28 = lRam0000000003d57a08;
            /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(*param_7,0);
            if (*(long *)(lVar15 + 0x198) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x118),
                              *(long *)(lVar15 + 0x198),uRam0000000003d3aed8);
              *(undefined8 *)((long)register0x00000008 + -0xf8) =
                   *(undefined8 *)((long)register0x00000008 + -0x110);
              *(undefined8 *)((long)register0x00000008 + -0x100) =
                   *(undefined8 *)((long)register0x00000008 + -0x118);
              *(undefined8 *)((long)register0x00000008 + -0xf0) =
                   *(undefined8 *)((long)register0x00000008 + -0x108);
              puVar26 = (uint *)0x3d328f8;
              lVar31 = 0x3d3aed0;
              while( true ) {
                uVar17 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x100),
                                         uRam0000000003d328f8);
                if ((uVar17 & 1) == 0) {
                  lVar15 = 0;
                  goto code_r0x01872100;
                }
                param_7 = *(long **)((long)register0x00000008 + -0xf0);
                if (param_7 == (long *)0x0) break;
                lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_7,0);
                if (lVar16 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018721b0;
                }
                uVar17 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar16,0);
                if ((uVar17 & 1) == 0) {
                  if (*(long *)(lVar15 + 0x1a0) == 0) {
                    func_0x00f78af4();
                    goto code_r0x018721b0;
                  }
                  puVar27 = puRam0000000003d3aed0;
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar15 + 0x1a0),param_7);
                }
                else {
                  puVar27 = (uint *)0x0;
                  /*UnityEngine.LODGroup$$ForceLOD*/ func_0x032323ec(param_7,0);
                }
              }
              func_0x00f78af4();
code_r0x018721b0:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x18721b4);
              (*UNRECOVERED_JUMPTABLE)();
            }
          }
        }
      }
      else if (*param_7 != 0) {
        uVar25 = (*(code *)**(undefined8 **)param_9[6])();
        *param_8 = uVar25;
        if ((*(long *)(lVar15 + 0x100) != 0) && (*(long *)(lVar15 + 0x20) != 0)) {
          puVar27 = *(uint **)(*(long *)(lVar15 + 0x100) + 0x28);
          lVar28 = /*STR('Untagged')*/ lRam0000000003d75ce0;
          /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar15 + 0x20),*param_7,puVar27,/*STR('Untagged')*/ lRam0000000003d75ce0,lVar31,0);
          if ((*(long *)(lVar15 + 0x100) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
            /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar15 + 0x28),*param_7,
                            *(undefined8 *)(*(long *)(lVar15 + 0x100) + 0x28),/*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0,
                            lVar31,0);
            Atlas_Gameplay_Kart_KartVisualComposite__SetRegionId
                      (extraout_d0 & 0xffffffff,lVar15,lVar31,0);
            goto LAB_01872024;
          }
        }
      }
    }
    else if (lVar15 != 0) {
      Atlas_Gameplay_Kart_KartVisualComposite__UnParentPart(lVar15,lVar14,0);
      lVar28 = 0;
      Atlas_Gameplay_Kart_KartVisualComposite__DestroyPart(lVar15,lVar14,lVar31);
      goto LAB_01871f10;
    }
    func_0x00f78af4();
    while (func_0x00f78ac0(lVar15,0), extraout_w1 == 1) {
      plVar23 = (long *)___cxa_begin_catch();
      lVar15 = *plVar23;
      ___cxa_end_catch();
code_r0x01872100:
      *(long *)((long)register0x00000008 + -0x118) = /*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768;
      uVar17 = (ulong)*(ushort *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0x12a);
      if (uVar17 != 0) {
        piVar30 = (int *)(*(long *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar29 = (undefined8 *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + (long)*piVar30 * 0x10 + 0x138);
            goto code_r0x01872160;
          }
          piVar30 = piVar30 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar27 = (uint *)0x0;
      puVar29 = (undefined8 *)func_0x00fac1f0((undefined1 *)((long)register0x00000008 + -0x118));
code_r0x01872160:
      plVar23 = (long *)(*(code *)*puVar29)((undefined1 *)((long)register0x00000008 + -0x110),
                                            puVar29[1]);
      if (lVar15 == 0) {
        return plVar23;
      }
    }
    auVar36 = __Unwind_Resume();
    plVar18 = auVar36._8_8_;
    plVar23 = auVar36._0_8_;
    *(long **)((long)register0x00000008 + -0x160) = param_9;
    *(undefined8 **)((long)register0x00000008 + -0x158) = param_8;
    *(long *)((long)register0x00000008 + -0x150) = lVar31;
    *(uint **)((long)register0x00000008 + -0x148) = puVar26;
    *(long **)((long)register0x00000008 + -0x140) = param_7;
    *(long *)((long)register0x00000008 + -0x138) = lVar15;
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0x128) =
         &System_Linq_Expressions_Interpreter_LabelInfo__CommonNode_object_;
    puVar26 = puVar27;
    lVar31 = lVar28;
    plVar24 = (long *)(**(code **)**(undefined8 **)(lVar28 + 0x30))();
    uVar12 = (uint)param_2;
    if (plVar24 != (long *)0x0) {
      lVar31 = *(long *)(*plVar24 + 0x1c0);
      uVar17 = (**(code **)(*plVar24 + 0x1b8))(plVar24,plVar23,plVar18);
      if ((uVar17 & 1) != 0) {
        return plVar23;
      }
      lVar15 = *(long *)(*(long *)(lVar28 + 0x30) + 0x18);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      param_8 = (undefined8 *)func_0x00f78aec(lVar15);
      puVar26 = *(uint **)(*(long *)(lVar28 + 0x30) + 0x20);
      (**(code **)puVar26)(param_8,plVar24);
      uVar12 = (uint)param_2;
      param_9 = plVar24;
      if (plVar23 != (long *)0x0) {
        if (param_8 == (undefined8 *)0x0) goto code_r0x01872338;
        do {
          auVar36._8_8_ = plVar18;
          auVar36._0_8_ = plVar23;
          puVar26 = *(uint **)(*(long *)(lVar28 + 0x30) + 0x28);
          (**(code **)puVar26)(param_8,plVar23);
          uVar12 = (uint)param_2;
          if (puVar27 == (uint *)0x0) goto code_r0x01872338;
          puVar26 = *(uint **)(*(long *)(lVar28 + 0x30) + 0x30);
          plVar23 = (long *)(**(code **)puVar26)(puVar27,plVar23);
        } while (plVar23 != (long *)0x0);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = plVar18;
      auVar36 = auVar4 << 0x40;
      uVar12 = (uint)param_2;
      if (plVar18 == (long *)0x0) {
        return (long *)0x0;
      }
      if (param_8 != (undefined8 *)0x0) {
        while( true ) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = plVar18;
          auVar36 = auVar5 << 0x40;
          puVar26 = *(uint **)(*(long *)(lVar28 + 0x30) + 0x40);
          uVar17 = (**(code **)puVar26)(param_8,plVar18);
          uVar12 = (uint)param_2;
          if ((uVar17 & 1) != 0) {
            return plVar18;
          }
          if (puVar27 == (uint *)0x0) break;
          plVar18 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar28 + 0x30) + 0x30))
                                      (puVar27,plVar18);
          if (plVar18 == (long *)0x0) {
            return (long *)0x0;
          }
        }
      }
    }
code_r0x01872338:
    uVar25 = auVar36._0_8_;
    func_0x00f78af4();
    *(undefined1 (*) [16])((long)register0x00000008 + -400) = auVar36;
    *(uint **)((long)register0x00000008 + -0x180) = puVar27;
    *(long *)((long)register0x00000008 + -0x178) = lVar28;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0x130);
    *(undefined **)((long)register0x00000008 + -0x168) =
         &
         Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateDefaultConstructor_object_
    ;
    puVar27 = puVar26;
    if ((bRam0000000003eb654f & 1) == 0) {
      func_0x00f78a20(0x3d241f8);
      func_0x00f78a20(0x3d7c160);
      bRam0000000003eb654f = 1;
    }
    lVar28 = **(long **)(puVar26 + 0xc);
    if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar28);
    }
    lVar28 = func_0x00f78aec(lVar28);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
    if (lVar28 != 0) {
      *(undefined8 *)(lVar28 + 0x10) = extraout_x1_00;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_00,/*STR('type')*/ uRam0000000003d7c160,0);
      iVar10 = /*Newtonsoft.Json.Utilities.TypeExtensions$$IsValueType*/ func_0x02b83ec0(*(undefined8 *)(lVar28 + 0x10),0);
      if (iVar10 == 0) {
        uVar25 = *(undefined8 *)(lVar28 + 0x10);
        if (((*(ushort *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar25 = /*Newtonsoft.Json.Utilities.ReflectionUtils$$GetDefaultConstructor*/ func_0x02b7bb28(uVar25,1,0);
        *(undefined8 *)(lVar28 + 0x18) = uVar25;
        lVar31 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
        if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar31);
        }
        plVar23 = (long *)func_0x00f78aec(lVar31);
        (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                  (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x28));
      }
      else {
        lVar31 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
        if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar31);
        }
        plVar23 = (long *)func_0x00f78aec(lVar31);
        (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                  (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
      }
      return plVar23;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = extraout_x1_00;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(uint **)((long)register0x00000008 + -0x1a8) = puVar26;
    *(undefined1 **)((long)register0x00000008 + -0x1a0) =
         (undefined1 *)((long)register0x00000008 + -0x170);
    *(undefined **)((long)register0x00000008 + -0x198) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
    puVar26 = puVar27;
    if ((bRam0000000003eb6550 & 1) == 0) {
      func_0x00f78a20(0x3d792f8);
      bRam0000000003eb6550 = 1;
    }
    lVar28 = **(long **)(puVar27 + 0xc);
    if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar28);
    }
    lVar28 = func_0x00f78aec(lVar28);
    (*(code *)**(undefined8 **)(*(long *)(puVar27 + 0xc) + 8))();
    if (lVar28 != 0) {
      *(undefined8 *)(lVar28 + 0x10) = extraout_x1_01;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_01,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
      lVar31 = *(long *)(*(long *)(puVar27 + 0xc) + 0x18);
      if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar31);
      }
      plVar23 = (long *)func_0x00f78aec(lVar31);
      (*(code *)**(undefined8 **)(*(long *)(puVar27 + 0xc) + 0x20))
                (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar27 + 0xc) + 0x10));
      return plVar23;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = extraout_x1_01;
    *(uint **)((long)register0x00000008 + -0x1d8) = puVar27;
    *(undefined1 **)((long)register0x00000008 + -0x1d0) =
         (undefined1 *)((long)register0x00000008 + -0x1a0);
    *(undefined **)((long)register0x00000008 + -0x1c8) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
    puVar27 = puVar26;
    if ((bRam0000000003eb6551 & 1) == 0) {
      func_0x00f78a20(0x3d7b118);
      bRam0000000003eb6551 = 1;
    }
    lVar28 = **(long **)(puVar26 + 0xc);
    if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar28);
    }
    lVar28 = func_0x00f78aec(lVar28);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
    if (lVar28 != 0) {
      *(undefined8 *)(lVar28 + 0x10) = extraout_x1_02;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_02,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
      lVar31 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
      if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar31);
      }
      plVar23 = (long *)func_0x00f78aec(lVar31);
      (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
      return plVar23;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x220) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x210) = extraout_x1_02;
    *(uint **)((long)register0x00000008 + -0x208) = puVar26;
    *(undefined1 **)((long)register0x00000008 + -0x200) =
         (undefined1 *)((long)register0x00000008 + -0x1d0);
    *(undefined **)((long)register0x00000008 + -0x1f8) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateMethodCall_object_;
    puVar26 = puVar27;
    if ((bRam0000000003eb6552 & 1) == 0) {
      func_0x00f78a20(0x3d209d0);
      func_0x00f78a20(0x3d7a5f8);
      bRam0000000003eb6552 = 1;
    }
    lVar28 = **(long **)(puVar27 + 0xc);
    if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar28);
    }
    lVar28 = func_0x00f78aec(lVar28);
    (*(code *)**(undefined8 **)(*(long *)(puVar27 + 0xc) + 8))();
    if (lVar28 != 0) {
      *(undefined8 *)(lVar28 + 0x18) = extraout_x1_03;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_03,/*STR('method')*/ uRam0000000003d7a5f8,0);
      lVar31 = func_0x00f78adc(*(undefined8 *)(lVar28 + 0x18),/*System.Reflection.ConstructorInfo_TypeInfo*/ uRam0000000003d209d0);
      *(long *)(lVar28 + 0x10) = lVar31;
      lVar14 = *(long *)(*(long *)(puVar27 + 0xc) + 0x18);
      if (lVar31 == 0) {
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        plVar23 = (long *)func_0x00f78aec(lVar14);
        (*(code *)**(undefined8 **)(*(long *)(puVar27 + 0xc) + 0x20))
                  (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar27 + 0xc) + 0x28));
      }
      else {
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        plVar23 = (long *)func_0x00f78aec(lVar14);
        (*(code *)**(undefined8 **)(*(long *)(puVar27 + 0xc) + 0x20))
                  (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar27 + 0xc) + 0x10));
      }
      return plVar23;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x250) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x248) = extraout_x1_03;
    *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
    *(uint **)((long)register0x00000008 + -0x238) = puVar27;
    *(undefined1 **)((long)register0x00000008 + -0x230) =
         (undefined1 *)((long)register0x00000008 + -0x200);
    *(undefined **)((long)register0x00000008 + -0x228) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
    puVar27 = puVar26;
    if ((bRam0000000003eb6553 & 1) == 0) {
      func_0x00f78a20(0x3d792f8);
      bRam0000000003eb6553 = 1;
    }
    lVar28 = **(long **)(puVar26 + 0xc);
    if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar28);
    }
    lVar28 = func_0x00f78aec(lVar28);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
    if (lVar28 != 0) {
      *(undefined8 *)(lVar28 + 0x10) = extraout_x1_04;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_04,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
      lVar31 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
      if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar31);
      }
      plVar23 = (long *)func_0x00f78aec(lVar31);
      (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
      return plVar23;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x280) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = extraout_x1_04;
    *(uint **)((long)register0x00000008 + -0x268) = puVar26;
    *(undefined1 **)((long)register0x00000008 + -0x260) =
         (undefined1 *)((long)register0x00000008 + -0x230);
    *(undefined **)((long)register0x00000008 + -600) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
    puVar26 = puVar27;
    if ((bRam0000000003eb6554 & 1) == 0) {
      func_0x00f78a20(0x3d7b118);
      bRam0000000003eb6554 = 1;
    }
    lVar28 = **(long **)(puVar27 + 0xc);
    if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar28);
    }
    lVar28 = func_0x00f78aec(lVar28);
    (*(code *)**(undefined8 **)(*(long *)(puVar27 + 0xc) + 8))();
    if (lVar28 != 0) {
      *(undefined8 *)(lVar28 + 0x10) = extraout_x1_05;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_05,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
      lVar31 = *(long *)(*(long *)(puVar27 + 0xc) + 0x18);
      if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar31);
      }
      plVar23 = (long *)func_0x00f78aec(lVar31);
      (*(code *)**(undefined8 **)(*(long *)(puVar27 + 0xc) + 0x20))
                (plVar23,lVar28,*(undefined8 *)(*(long *)(puVar27 + 0xc) + 0x10));
      return plVar23;
    }
    auVar37 = func_0x00f78af4();
    puVar8 = auVar37._8_8_;
    lVar15 = auVar37._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = extraout_x1_05;
    *(uint **)((long)register0x00000008 + -0x298) = puVar27;
    *(undefined1 **)((long)register0x00000008 + -0x290) =
         (undefined1 *)((long)register0x00000008 + -0x260);
    *(undefined **)((long)register0x00000008 + -0x288) =
         &UnityEngine_UI_LayoutGroup__SetProperty_bool_;
    puVar33 = (undefined1 *)((long)register0x00000008 + -0x290);
    *(char *)((long)register0x00000008 + -0x2b1) = (char)puVar26;
    lVar28 = **(long **)(lVar31 + 0x30);
    if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar28);
    }
    uVar25 = func_0x00f78ae0(lVar28,(undefined1 *)((long)register0x00000008 + -0x2b1));
    puVar27 = (uint *)0x0;
    plVar23 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(puVar8,uVar25);
    if (((ulong)plVar23 & 1) != 0) {
      return plVar23;
    }
    *puVar8 = (char)puVar26;
    if (lVar15 == 0) {
      auVar37 = func_0x00f78af4();
      puVar21 = auVar37._8_8_;
      lVar15 = auVar37._0_8_;
      *(long *)((long)register0x00000008 + -0x2f0) = lVar28;
      *(undefined1 **)((long)register0x00000008 + -0x2e8) = puVar8;
      *(uint **)((long)register0x00000008 + -0x2e0) = puVar26;
      *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
      *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar33;
      *(undefined **)((long)register0x00000008 + -0x2c8) =
           &UnityEngine_UI_LayoutGroup__SetProperty_int_;
      puVar33 = (undefined1 *)((long)register0x00000008 + -0x2d0);
      *(int *)((long)register0x00000008 + -0x2f4) = (int)puVar27;
      lVar28 = **(long **)(lVar31 + 0x30);
      if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar28);
      }
      uVar25 = func_0x00f78ae0(lVar28,(undefined1 *)((long)register0x00000008 + -0x2f4));
      puVar26 = (uint *)0x0;
      plVar23 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(puVar21,uVar25);
      if (((ulong)plVar23 & 1) != 0) {
        return plVar23;
      }
      *puVar21 = (int)puVar27;
      if (lVar15 == 0) {
        auVar37 = func_0x00f78af4();
        puVar22 = auVar37._8_8_;
        lVar15 = auVar37._0_8_;
        puVar8 = (undefined1 *)((long)register0x00000008 + -0x360);
        *(long **)((long)register0x00000008 + -0x340) = param_9;
        *(undefined8 **)((long)register0x00000008 + -0x338) = param_8;
        *(long *)((long)register0x00000008 + -0x330) = lVar28;
        *(undefined4 **)((long)register0x00000008 + -0x328) = puVar21;
        *(uint **)((long)register0x00000008 + -800) = puVar27;
        *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x310) = puVar33;
        *(undefined **)((long)register0x00000008 + -0x308) =
             &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
        puVar33 = (undefined1 *)((long)register0x00000008 + -0x310);
        *(int *)((long)register0x00000008 + -0x344) = (int)puVar26;
        lVar28 = **(long **)(lVar31 + 0x30);
        if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar28);
        }
        param_8 = (undefined8 *)
                  func_0x00f78ae0(lVar28,(undefined1 *)((long)register0x00000008 + -0x344));
        lVar28 = **(long **)(lVar31 + 0x30);
        if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar28);
        }
        *(long *)((long)register0x00000008 + -0x360) = lVar28;
        *(undefined8 *)((long)register0x00000008 + -0x358) = 0xffffffffffffffff;
        *(undefined4 *)((long)register0x00000008 + -0x350) = *puVar22;
        lVar31 = *(long *)(lVar28 + 0x140);
        plVar23 = (long *)(**(code **)(lVar28 + 0x138))
                                    ((undefined1 *)((long)register0x00000008 + -0x360),param_8);
        if (((ulong)plVar23 & 1) != 0) {
          return plVar23;
        }
        *puVar22 = (int)puVar26;
        if (lVar15 == 0) {
          auVar36 = func_0x00f78af4();
          plVar24 = auVar36._8_8_;
          *(long *)((long)register0x00000008 + -0x390) = lVar28;
          *(undefined4 **)((long)register0x00000008 + -0x388) = puVar22;
          *(uint **)((long)register0x00000008 + -0x380) = puVar26;
          *(undefined8 *)((long)register0x00000008 + -0x378) = 0;
          *(undefined1 **)((long)register0x00000008 + -0x370) = puVar33;
          *(undefined **)((long)register0x00000008 + -0x368) =
               &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
          plVar23 = (long *)*plVar24;
          if (lVar31 == 0 && plVar23 == (long *)0x0) {
            return plVar23;
          }
          lVar16 = lVar31;
          if (plVar23 != (long *)0x0) {
            lVar16 = *(long *)(*plVar23 + 0x140);
            plVar23 = (long *)(**(code **)(*plVar23 + 0x138))(plVar23,lVar31);
            if (((ulong)plVar23 & 1) != 0) {
              return plVar23;
            }
          }
          *plVar24 = lVar31;
          if (auVar36._0_8_ == 0) {
            lVar15 = func_0x00f78af4();
            puVar8 = (undefined1 *)((long)register0x00000008 + -0x3e0);
            *(undefined8 *)((long)register0x00000008 + -0x3d0) = unaff_d9;
            *(ulong *)((long)register0x00000008 + -0x3c8) = extraout_d0 & 0xffffffff;
            *(long *)((long)register0x00000008 + -0x3c0) = lVar28;
            *(long **)((long)register0x00000008 + -0x3b8) = plVar24;
            *(long *)((long)register0x00000008 + -0x3b0) = lVar31;
            *(undefined8 *)((long)register0x00000008 + -0x3a8) = 0;
            *(undefined1 **)((long)register0x00000008 + -0x3a0) =
                 (undefined1 *)((long)register0x00000008 + -0x370);
            *(undefined **)((long)register0x00000008 + -0x398) =
                 &UnityEngine_UI_LayoutGroup__SetProperty_float_;
            puVar33 = (undefined1 *)((long)register0x00000008 + -0x3a0);
            *(uint *)((long)register0x00000008 + -0x3d4) = extraout_s0;
            lVar31 = **(long **)(lVar16 + 0x30);
            auVar37._8_8_ = lVar31;
            auVar37._0_8_ = lVar15;
            if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar31);
            }
            uVar25 = func_0x00f78ae0(lVar31,(undefined1 *)((long)register0x00000008 + -0x3d4));
            lVar16 = 0;
            plVar23 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1_06,uVar25);
            if (((ulong)plVar23 & 1) != 0) {
              return plVar23;
            }
            *extraout_x1_06 = extraout_s0;
            if (lVar15 == 0) {
              lVar15 = func_0x00f78af4();
              puVar8 = (undefined1 *)((long)register0x00000008 + -0x430);
              *(undefined8 *)((long)register0x00000008 + -0x420) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x418) = (ulong)extraout_s0;
              *(long *)((long)register0x00000008 + -0x410) = lVar28;
              *(long *)((long)register0x00000008 + -0x408) = lVar31;
              *(uint **)((long)register0x00000008 + -0x400) = extraout_x1_06;
              *(undefined8 *)((long)register0x00000008 + -0x3f8) = 0;
              *(undefined1 **)((long)register0x00000008 + -0x3f0) = puVar33;
              *(undefined **)((long)register0x00000008 + -1000) =
                   &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
              puVar33 = (undefined1 *)((long)register0x00000008 + -0x3f0);
              *(uint *)((long)register0x00000008 + -0x428) = extraout_s0_00;
              *(uint *)((long)register0x00000008 + -0x424) = uVar12;
              lVar31 = **(long **)(lVar16 + 0x30);
              auVar37._8_8_ = lVar31;
              auVar37._0_8_ = lVar15;
              if ((*(ushort *)(lVar31 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar31);
              }
              uVar25 = func_0x00f78ae0(lVar31,(undefined1 *)((long)register0x00000008 + -0x428));
              lVar16 = 0;
              plVar23 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_07,uVar25);
              if (((ulong)plVar23 & 1) != 0) {
                return plVar23;
              }
              *extraout_x1_07 = extraout_s0_00;
              extraout_x1_07[1] = uVar12;
              if (lVar15 == 0) {
                auVar36 = func_0x00f78af4();
                plVar23 = auVar36._0_8_;
                *(long *)((long)register0x00000008 + -0x460) = lVar28;
                *(long *)((long)register0x00000008 + -0x458) = lVar31;
                *(uint **)((long)register0x00000008 + -0x450) = extraout_x1_07;
                *(undefined8 *)((long)register0x00000008 + -0x448) = 0;
                *(undefined1 **)((long)register0x00000008 + -0x440) = puVar33;
                *(undefined **)((long)register0x00000008 + -0x438) =
                     &System_Threading_LazyInitializer__EnsureInitialized_Task_ContingentProperties_
                ;
                lVar28 = *plVar23;
                func_0x00f78a30();
                if (lVar28 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar23 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))
                                              (plVar23,auVar36._8_8_);
                  return plVar23;
                }
                return (long *)*plVar23;
              }
              puVar34 = &UNK_01872cb0;
              puVar26 = extraout_x1_07;
            }
            else {
              puVar34 = &UNK_01872c1c;
              puVar26 = extraout_x1_06;
            }
          }
          else {
            puVar33 = *(undefined1 **)((long)register0x00000008 + -0x370);
            puVar34 = *(undefined **)((long)register0x00000008 + -0x368);
            puVar26 = *(uint **)((long)register0x00000008 + -0x380);
            lVar15 = *(long *)((long)register0x00000008 + -0x378);
            lVar28 = *(long *)((long)register0x00000008 + -0x390);
            auVar37._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x388);
            auVar37._0_8_ = auVar36._0_8_;
          }
        }
        else {
          puVar34 = &UNK_01872b18;
          puVar8 = (undefined1 *)((long)register0x00000008 + -0x360);
        }
      }
      else {
        puVar34 = &UNK_01872a5c;
        puVar8 = (undefined1 *)((long)register0x00000008 + -0x300);
        puVar26 = puVar27;
      }
    }
    else {
      puVar34 = &UNK_018729d4;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x2c0);
    }
    plVar23 = auVar37._0_8_;
    *(long *)(puVar8 + -0x30) = lVar28;
    *(long *)(puVar8 + -0x28) = auVar37._8_8_;
    *(uint **)(puVar8 + -0x20) = puVar26;
    *(long *)(puVar8 + -0x18) = lVar15;
    *(undefined1 **)(puVar8 + -0x10) = puVar33;
    *(undefined **)(puVar8 + -8) = puVar34;
    if ((bRam0000000003ec2d3a & 1) == 0) {
      func_0x00f78a20(0x3d20558,0);
      func_0x00f78a20(0x3d22df0);
      bRam0000000003ec2d3a = 1;
    }
    plVar24 = (long *)(**(code **)(*plVar23 + 0x1c8))(plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
    if ((int)plVar24 == 0) {
      return plVar24;
    }
    if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
    lVar28 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar23);
    if ((uVar17 & 1) != 0) {
      lVar28 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar28,lVar28);
      plVar24 = *(long **)(puVar8 + -0x20);
      uVar25 = *(undefined8 *)(puVar8 + -0x30);
      uVar13 = *(undefined8 *)(puVar8 + -0x28);
      *(undefined8 *)(puVar8 + -0x30) = uVar25;
      *(undefined8 *)(puVar8 + -0x28) = uVar13;
      *(long **)(puVar8 + -0x20) = plVar24;
      *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
      *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
      if (lVar28 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar19 = func_0x00f78aec();
        uVar20 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar19,uVar20,0);
      }
      else {
        uVar13 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar17 = (*pcRam0000000003ec01d0)(plVar23);
        if ((uVar17 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar23 = (long *)(*pcRam0000000003ec01e0)(plVar23,lVar28);
          return plVar23;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar19 = func_0x00f78aec();
        uVar20 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar20,0);
        plVar24 = plVar23;
      }
      uVar20 = func_0x00f78a24(0x3d5a8a8);
      auVar36 = func_0x00f78ac0(uVar19,uVar20);
      *(undefined8 *)(puVar8 + -0x60) = uVar25;
      *(undefined8 *)(puVar8 + -0x58) = uVar13;
      *(long **)(puVar8 + -0x50) = plVar24;
      *(undefined8 *)(puVar8 + -0x48) = uVar19;
      *(undefined1 **)(puVar8 + -0x40) = puVar8 + -0x10;
      *(undefined **)(puVar8 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar23 = (long *)(*pcRam0000000003ec01e0)(auVar36._0_8_,auVar36._8_8_);
      return plVar23;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x58) = 0x3d23990;
    *(long *)(puVar8 + -0x50) = lVar14;
    *(undefined8 *)(puVar8 + -0x48) = extraout_x1;
    *(long **)(puVar8 + -0x40) = param_9;
    *(undefined8 **)(puVar8 + -0x38) = param_8;
    *(undefined8 *)(puVar8 + -0x30) = *(undefined8 *)(puVar8 + -0x30);
    *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
    *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
    *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
    *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    if ((bRam0000000003ec2d44 & 1) == 0) {
      func_0x00f78a20(0x3d20068);
      func_0x00f78a20(0x3d19788);
      func_0x00f78a20(0x3d22df0);
      func_0x00f78a20(0x3d398f8);
      func_0x00f78a20(0x3d39900);
      func_0x00f78a20(0x3d1d6c0);
      func_0x00f78a20(0x3d3a1c0);
      func_0x00f78a20(0x3d3a1c8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d25458);
      bRam0000000003ec2d44 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar23 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar28,0,0);
    if (((ulong)plVar23 & 1) != 0) {
      return plVar23;
    }
    if (lVar28 == 0) {
code_r0x032d1910:
      lVar28 = func_0x00f78af4();
      return *(long **)(lVar28 + 0x18);
    }
    uVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar28,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar23 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar25,0,0);
    if (((ulong)plVar23 & 1) != 0) {
      return plVar23;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar31 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    plVar23 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar28,0);
    if (plVar23 == (long *)0x0) {
      plVar23 = (long *)0x0;
    }
    else if (*plVar23 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar23 = (long *)0x0;
    }
    *(long *)(puVar8 + -0x68) = lVar28;
code_r0x032d1694:
    do {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar23,0,0);
      if ((uVar17 & 1) != 0) break;
      if (plVar23 == (long *)0x0) goto code_r0x032d1910;
      uVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar23,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar25,0,0);
      uVar25 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
      if (iVar10 != 0) break;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar23,uVar25,lVar31,0);
      if (lVar31 == 0) goto code_r0x032d1910;
      uVar12 = *(uint *)(lVar31 + 0x18);
      uVar17 = (ulong)uVar12;
      bVar1 = 0 < (int)uVar12;
      if (0 < (int)uVar12) {
        uVar32 = 0;
        do {
          if ((uVar17 & 0xffffffff) <= uVar32) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar24 = *(long **)(*(long *)(lVar31 + 0x10) + uVar32 * 8 + 0x20);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar24,0,0);
          if ((iVar10 != 0) && (plVar24 != (long *)0x0)) {
            if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar24 + 300)) &&
               ((*(long *)(*(long *)(*plVar24 + 200) +
                           (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8 + -8) ==
                 /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 && (uVar17 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar24,0), (uVar17 & 1) != 0))))
            {
              *(long **)(puVar8 + -0x68) = plVar23;
              break;
            }
          }
          uVar32 = uVar32 + 1;
          uVar17 = (ulong)*(int *)(lVar31 + 0x18);
          bVar1 = (long)uVar32 < (long)uVar17;
        } while ((long)uVar32 < (long)uVar17);
      }
      plVar23 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar23,0);
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)0x0;
        if (!bVar1) break;
        goto code_r0x032d1694;
      }
      if (*plVar23 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar23 = (long *)0x0;
      }
    } while (bVar1);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = *(undefined8 *)(puVar8 + -0x68);
    iVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar25,lVar28,0);
    if (iVar10 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar25,lVar31);
      if ((uVar17 & 1) == 0) goto code_r0x032d18c0;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar25);
code_r0x032d18c0:
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar28 = lRam0000000003d39900;
    uVar25 = *(undefined8 *)(puVar8 + -0x30);
    uVar13 = *(undefined8 *)(puVar8 + -0x40);
    uVar20 = *(undefined8 *)(puVar8 + -0x38);
    *(undefined8 *)(puVar8 + -0x40) = uVar13;
    *(undefined8 *)(puVar8 + -0x38) = uVar20;
    *(undefined8 *)(puVar8 + -0x30) = uVar25;
    *(undefined8 *)(puVar8 + -0x28) = *(undefined8 *)(puVar8 + -0x28);
    *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
    *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
    *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    lVar14 = *(long *)(lRam0000000003d39900 + 0x18);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
    uVar3 = *(ushort *)(lVar14 + 0x132);
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar14);
      uVar3 = *(ushort *)(lVar14 + 0x132);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      lVar14 = *(long *)(lVar28 + 0x18);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        lVar14 = *(long *)(lVar28 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        func_0x00f78ad0(lVar14);
      }
    }
    lVar14 = *(long *)(lVar28 + 0x18);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    lVar14 = **(long **)(lVar14 + 0xb8);
    if (lVar14 == 0) {
      lVar14 = func_0x00f78af4();
      *(undefined8 *)(puVar8 + -0x90) = uVar13;
      *(undefined8 *)(puVar8 + -0x88) = uVar20;
      *(undefined8 *)(puVar8 + -0x80) = uVar25;
      *(undefined8 *)(puVar8 + -0x78) = 0;
      *(long *)(puVar8 + -0x70) = lVar28;
      *(long *)(puVar8 + -0x68) = lVar31;
      *(undefined1 **)(puVar8 + -0x60) = puVar8 + -0x10;
      *(undefined **)(puVar8 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
      lVar28 = *(long *)(lVar14 + 0x18);
      if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar28);
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar28);
      }
      uVar25 = func_0x00f78aec(lVar28);
      lVar31 = *(long *)(lVar14 + 0x18);
      uVar3 = *(ushort *)(lVar31 + 0x132);
      lVar28 = lVar31;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar31);
        lVar28 = *(long *)(lVar14 + 0x18);
        uVar3 = *(ushort *)(lVar28 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar31 + 0xc0) + 0x30);
      lVar31 = lVar28;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar28);
        lVar31 = *(long *)(lVar14 + 0x18);
        uVar3 = *(ushort *)(lVar31 + 0x132);
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar28 + 0xc0) + 0x20);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar31);
      }
      (*UNRECOVERED_JUMPTABLE)(uVar25,0,uVar13,*(undefined8 *)(*(long *)(lVar31 + 0xc0) + 0x30));
      lVar28 = *(long *)(lVar14 + 0x18);
      if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar28);
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar28);
      }
      uVar13 = func_0x00f78aec(lVar28);
      lVar31 = *(long *)(lVar14 + 0x18);
      uVar3 = *(ushort *)(lVar31 + 0x132);
      lVar28 = lVar31;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar31);
        lVar28 = *(long *)(lVar14 + 0x18);
        uVar3 = *(ushort *)(lVar28 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar31 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar28);
      }
      plVar23 = (long *)(*UNRECOVERED_JUMPTABLE)
                                  (uVar13,0,uVar25,*(undefined8 *)(*(long *)(lVar28 + 0xc0) + 0x40))
      ;
      lVar28 = *(long *)(lVar14 + 0x18);
      if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
        plVar23 = (long *)func_0x00fac028(lVar28);
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
      if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
        plVar23 = (long *)func_0x00fac028(lVar28);
      }
      **(undefined8 **)(lVar28 + 0xb8) = uVar13;
      return plVar23;
    }
    lVar16 = *(long *)(lVar28 + 0x18);
    uVar3 = *(ushort *)(lVar16 + 0x132);
    lVar15 = lVar16;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar16);
      lVar15 = *(long *)(lVar28 + 0x18);
      uVar3 = *(ushort *)(lVar15 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x18);
    if ((uVar3 & 1) == 0) {
      *(code **)(puVar8 + -0x48) = UNRECOVERED_JUMPTABLE;
      func_0x00fac028(lVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar8 + -0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar23 = (long *)(*UNRECOVERED_JUMPTABLE)
                                (lVar14,lVar31,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18));
    return plVar23;
  }
LAB_0158b574:
  func_0x00f78af4();
LAB_0158b578:
  uVar25 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar25,0);
  puVar7 = &stack0xffffffffffffffe0;
  lVar28 = *(long *)(auVar35._0_8_ + 0x90);
  if (lVar28 == 0) {
code_r0x0158b5c0:
    func_0x00f78af4();
  }
  else if (auVar35._8_4_ < *(uint *)(lVar28 + 0x18)) {
    lVar28 = *(long *)(lVar28 + (long)(int)auVar35._8_4_ * 0x40 + 0x28);
    if (lVar28 != 0) {
      if ((bRam0000000003eb5359 & 1) == 0) {
        func_0x00f78a20(0x3d59be8,param_5,0);
        bRam0000000003eb5359 = 1;
      }
      plVar23 = (long *)((long)&MACH_HEADER.magic + 2);
      unaff_x30 = &Atlas_FrontEnd_FrontEndScene__RequestLoadGlider;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      lVar31 = lRam0000000003d59be8;
      unaff_x29 = puVar6;
      goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
    }
    goto code_r0x0158b5c0;
  }
  uVar25 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar25,0);
  unaff_x29 = &stack0xffffffffffffffd0;
  lVar28 = *(long *)(auVar35._0_8_ + 0x90);
  if (lVar28 == 0) {
code_r0x0158b60c:
    func_0x00f78af4();
  }
  else if (auVar35._8_4_ < *(uint *)(lVar28 + 0x18)) {
    lVar28 = *(long *)(lVar28 + (long)(int)auVar35._8_4_ * 0x40 + 0x28);
    if (lVar28 != 0) {
      if ((bRam0000000003eb535a & 1) == 0) {
        func_0x00f78a20(0x3d59bd0,param_5,0);
        bRam0000000003eb535a = 1;
      }
      plVar23 = (long *)((long)&MACH_HEADER.cputype + 1);
      unaff_x30 = &Atlas_FrontEnd_FrontEndScene__RequestLoadAntenna;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar31 = lRam0000000003d59bd0;
      unaff_x29 = puVar7;
      goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
    }
    goto code_r0x0158b60c;
  }
  uVar25 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar25,0);
  lVar28 = *(long *)(auVar35._0_8_ + 0x90);
  if (lVar28 == 0) {
code_r0x0158b658:
    func_0x00f78af4();
  }
  else if (auVar35._8_4_ < *(uint *)(lVar28 + 0x18)) {
    lVar28 = *(long *)(lVar28 + (long)(int)auVar35._8_4_ * 0x40 + 0x28);
    if (lVar28 != 0) {
      if ((bRam0000000003eb535b & 1) == 0) {
        func_0x00f78a20(0x3d59bd8,param_5,0);
        bRam0000000003eb535b = 1;
      }
      plVar23 = (long *)((long)&MACH_HEADER.cputype + 2);
      unaff_x30 = &Atlas_FrontEnd_FrontEndScene__RequestLoadBoost;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      lVar31 = lRam0000000003d59bd8;
      goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
    }
    goto code_r0x0158b658;
  }
  uVar25 = func_0x00f78b24();
  plVar24 = (long *)func_0x00f78ac0(uVar25,0);
  plVar23 = plVar24;
  if ((bRam0000000003eb50f2 & 1) == 0) {
    plVar23 = (long *)func_0x00f78a20(0x3d73540);
    bRam0000000003eb50f2 = 1;
  }
  if (((char)plVar24[0x2c] != '\0') || (lVar28 = plVar24[0x13], lVar28 == 0)) {
    return plVar23;
  }
  if (plVar24[0x14] == 0) {
    plVar23 = (long *)func_0x00f78af4();
    *(undefined1 *)(plVar23 + 2) = 1;
    return plVar23;
  }
  uVar25 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar24[0x14],/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar25,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar31 = lRam0000000003d3f8c0;
  plVar23 = *(long **)(lVar28 + 0x38);
  if ((plVar23 == (long *)0x0) || (5 < (int)plVar23[4])) {
    return plVar23;
  }
  lVar28 = plVar23[2];
  if (lVar28 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar10 = (int)plVar23[4];
    unaff_x19 = plVar23;
    unaff_x20 = lVar31;
    if (iVar10 == *(int *)(lVar28 + 0x18)) {
      iVar2 = iVar10 + 4;
      if (iVar10 + 4 <= iVar10 * 2) {
        iVar2 = iVar10 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (plVar23,iVar2);
      lVar28 = plVar23[2];
      if (lVar28 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)((long)plVar23 + 0x1c) < *(uint *)(lVar28 + 0x18)) {
      lVar28 = lVar28 + (long)(int)*(uint *)((long)plVar23 + 0x1c) * 0x10;
      *(undefined8 *)(lVar28 + 0x20) = uVar25;
      *(undefined8 *)(lVar28 + 0x28) = 0x4020000000000000;
      plVar24 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(lVar31 + 0x18) + 0xc0) + 0x20))(plVar23);
      plVar23[4] = CONCAT44((int)((ulong)plVar23[4] >> 0x20) + 1,(int)plVar23[4] + 1);
      return plVar24;
    }
  }
  uVar25 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar25,0);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_90 = unaff_x20;
  plStack_88 = unaff_x19;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_b0,auVar36._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar36._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_c8 = uStack_a8;
  uStack_d0 = uStack_b0;
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  lVar28 = *(long *)(*(long *)(*(long *)(auVar36._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar28);
  }
  plVar23 = (long *)func_0x00f78ae0(lVar28,&uStack_d0);
  return plVar23;
}



// ============================================================
// RVA: 0x158b584 | Atlas.FrontEnd.FrontEndScene.RequestLoadGlider
// ============================================================

/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_FrontEnd_FrontEndScene__RequestLoadGlider
                 (undefined1 param_1 [16],undefined8 param_2,long param_3,uint param_4,long param_5,
                 undefined8 param_6,long *param_7,undefined8 *param_8,long *param_9)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint *extraout_x1_06;
  uint *extraout_x1_07;
  long *plVar23;
  undefined8 uVar24;
  uint *puVar25;
  uint *puVar26;
  long lVar27;
  undefined8 *puVar28;
  int *piVar29;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar30;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar31;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar32;
  undefined *unaff_x30;
  undefined *puVar33;
  uint extraout_s0;
  uint extraout_s0_00;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_2d1 [529];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  
  puVar6 = &stack0xfffffffffffffff0;
  lVar27 = *(long *)(param_3 + 0x90);
  if (lVar27 != 0) {
    if (*(uint *)(lVar27 + 0x18) <= param_4) goto LAB_0158b5c4;
    lVar27 = *(long *)(lVar27 + (long)(int)param_4 * 0x40 + 0x28);
    if (lVar27 == 0) goto LAB_0158b5c0;
    if ((bRam0000000003eb5359 & 1) == 0) {
      func_0x00f78a20(0x3d59be8,param_5,0);
      bRam0000000003eb5359 = 1;
    }
    plVar14 = (long *)((long)&MACH_HEADER.magic + 2);
    lVar30 = lRam0000000003d59be8;
Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    plVar23 = plVar14;
    if (*(long *)(lVar27 + 0x28) != 0) {
      plVar23 = (long *)**(undefined8 **)(lVar30 + 0x30);
      lVar13 = (*(code *)*plVar23)();
      unaff_x19 = plVar14;
      unaff_x20 = param_5;
      if (lVar13 != 0) {
        uVar24 = *(undefined8 *)(lVar13 + 0x50);
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
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
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if ((bRam0000000003eb535d & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb535d = 1;
        }
        uVar11 = (uint)plVar14;
        if (uVar11 == 0) {
          lVar30 = *(long *)(lVar27 + 0x30);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) < 7) goto LAB_015d1a88;
            *(undefined8 *)(lVar30 + 0x50) = uVar12;
            goto LAB_015d1960;
          }
        }
        else {
LAB_015d1960:
          lVar30 = *(long *)(lVar27 + 0x30);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_015d1a88;
            lVar13 = (long)(int)uVar11;
            uVar12 = *(undefined8 *)(lVar30 + lVar13 * 8 + 0x20);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar8 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar12,param_5,0);
            if ((uVar8 & 1) != 0) goto LAB_015d1a68;
            lVar30 = *(long *)(lVar27 + 0x38);
            if (lVar30 != 0) {
              if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_015d1a88;
              iVar9 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar30 + lVar13 * 4 + 0x20,0);
              if (iVar9 == 0) {
LAB_015d1a04:
                lVar30 = *(long *)(lVar27 + 0x30);
                if (lVar30 != 0) {
                  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_015d1a88;
                  *(long *)(lVar30 + lVar13 * 8 + 0x20) = param_5;
                  lVar30 = *(long *)(lVar27 + 0x38);
                  lVar27 = *(long *)(lVar27 + 0x20);
                  uVar12 = Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart(plVar14);
                  if ((lVar27 != 0) &&
                     (uVar10 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar27,uVar24,uVar12,0,0,0), lVar30 != 0)) {
                    if (uVar11 < *(uint *)(lVar30 + 0x18)) {
                      *(undefined4 *)(lVar30 + lVar13 * 4 + 0x20) = uVar10;
LAB_015d1a68:
                      return (long *)(ulong)(uVar8 ^ 1);
                    }
                    goto LAB_015d1a88;
                  }
                }
              }
              else {
                lVar30 = *(long *)(lVar27 + 0x38);
                if (lVar30 != 0) {
                  if (*(uint *)(lVar30 + 0x18) <= uVar11) goto LAB_015d1a88;
                  if (*(long *)(lVar27 + 0x20) != 0) {
                    /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar27 + 0x20),
                                    *(undefined4 *)(lVar30 + lVar13 * 4 + 0x20),0);
                    goto LAB_015d1a04;
                  }
                }
              }
            }
          }
        }
        func_0x00f78af4();
LAB_015d1a88:
        uVar12 = func_0x00f78b24();
        uVar11 = func_0x00f78ac0(uVar12,0);
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar24;
        *(long **)((long)register0x00000008 + -0x68) = plVar14;
        *(undefined1 **)((long)register0x00000008 + -0x60) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x58) =
             Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart;
        if ((bRam0000000003eb535e & 1) == 0) {
          func_0x00f78a20(0x3d68fe8);
          func_0x00f78a20(0x3d6a910);
          func_0x00f78a20(0x3d6d468);
          func_0x00f78a20(0x3d69818);
          func_0x00f78a20(0x3d6efb0);
          func_0x00f78a20(0x3d6ba50);
          func_0x00f78a20(0x3d76438);
          bRam0000000003eb535e = 1;
        }
        if (uVar11 < 7) {
          puVar28 = *(undefined8 **)(&UNK_03a5f250 + (long)(int)uVar11 * 8);
        }
        else {
          puVar28 = (undefined8 *)0x3d6ba50;
        }
        return (long *)*puVar28;
      }
    }
    auVar35 = func_0x00f78af4();
    puVar28 = auVar35._8_8_;
    lVar13 = auVar35._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = lVar27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) =
         Atlas_Gameplay_Kart_KartVisualComposite__DestroyAndNullOut_AntennaVisualBehaviour_;
    if ((bRam0000000003eb654d & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d6bdf0);
      func_0x00f78a20(0x3d75ce0);
      bRam0000000003eb654d = 1;
    }
    uVar24 = *puVar28;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar25 = (uint *)0x0;
    iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar24,0);
    if (iVar9 == 0) {
LAB_01871d74:
      lVar13 = *plVar23;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar14 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar13,0);
      if ((int)plVar14 == 0) {
LAB_01871db0:
        *puVar28 = 0;
        *plVar23 = 0;
        return plVar14;
      }
      if (*plVar23 != 0) {
        plVar14 = (long *)Atlas_Gameplay_Kart_BaseVisualBehaviour__DeInit(*plVar23,0);
        goto LAB_01871db0;
      }
    }
    else if ((*(long *)(lVar13 + 0x100) != 0) && (*(long *)(lVar13 + 0x20) != 0)) {
      puVar25 = *(uint **)(*(long *)(lVar13 + 0x100) + 0x28);
      param_7 = (long *)0x0;
      param_8 = (undefined8 *)0x0;
      lVar30 = /*STR('Untagged')*/ lRam0000000003d75ce0;
      /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar13 + 0x20),*puVar28);
      if ((*(long *)(lVar13 + 0x100) != 0) && (*(long *)(lVar13 + 0x28) != 0)) {
        puVar25 = *(uint **)(*(long *)(lVar13 + 0x100) + 0x28);
        param_7 = (long *)0x0;
        param_8 = (undefined8 *)0x0;
        lVar30 = /*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0;
        /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar13 + 0x28),*puVar28);
        uVar12 = *puVar28;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar12,0);
        goto LAB_01871d74;
      }
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -200) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3d23990;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar24;
    *(long *)((long)register0x00000008 + -0x98) = lVar13;
    *(undefined8 **)((long)register0x00000008 + -0x90) = puVar28;
    *(long **)((long)register0x00000008 + -0x88) = plVar23;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0x78) =
         Atlas_Gameplay_Kart_KartVisualComposite__InstantiatePartAndParentTo_AntennaVisualBehaviour_
    ;
    puVar26 = puVar25;
    lVar27 = lVar30;
    if ((bRam0000000003eb654e & 1) == 0) {
      func_0x00f78a20(0x3d328f8);
      func_0x00f78a20(0x3d32900);
      func_0x00f78a20(0x3d1c768);
      func_0x00f78a20(0x3d57a08);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d3aed0);
      func_0x00f78a20(0x3d3aed8);
      func_0x00f78a20(0x3d5b098);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d6bdf0);
      func_0x00f78a20(0x3d75ce0);
      bRam0000000003eb654e = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    lVar13 = *param_7;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar13,0);
    if (iVar9 == 0) {
LAB_01871f10:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar14 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(extraout_x1,0);
      if (((ulong)plVar14 & 1) == 0) {
        *param_7 = 0;
        *param_8 = 0;
        return plVar14;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar16 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
      *param_7 = lVar16;
      *param_8 = 0;
      puVar26 = (uint *)0x0;
      iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(*param_7,0);
      if (iVar9 == 0) {
        if (lVar15 != 0) {
LAB_01872024:
          puVar26 = (uint *)*param_7;
          lVar27 = 0;
          plVar14 = (long *)Atlas_Gameplay_Kart_KartVisualComposite__ParentPartTo(lVar15,puVar25);
          if (*(char *)(lVar15 + 400) == '\0') {
            return plVar14;
          }
          if (*param_7 != 0) {
            puVar26 = *(uint **)(lVar15 + 0x198);
            lVar27 = lRam0000000003d57a08;
            /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(*param_7,0);
            if (*(long *)(lVar15 + 0x198) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x118),
                              *(long *)(lVar15 + 0x198),uRam0000000003d3aed8);
              *(undefined8 *)((long)register0x00000008 + -0xf8) =
                   *(undefined8 *)((long)register0x00000008 + -0x110);
              *(undefined8 *)((long)register0x00000008 + -0x100) =
                   *(undefined8 *)((long)register0x00000008 + -0x118);
              *(undefined8 *)((long)register0x00000008 + -0xf0) =
                   *(undefined8 *)((long)register0x00000008 + -0x108);
              puVar25 = (uint *)0x3d328f8;
              lVar30 = 0x3d3aed0;
              while( true ) {
                uVar17 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x100),
                                         uRam0000000003d328f8);
                if ((uVar17 & 1) == 0) {
                  lVar15 = 0;
                  goto code_r0x01872100;
                }
                param_7 = *(long **)((long)register0x00000008 + -0xf0);
                if (param_7 == (long *)0x0) break;
                lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_7,0);
                if (lVar16 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018721b0;
                }
                uVar17 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar16,0);
                if ((uVar17 & 1) == 0) {
                  if (*(long *)(lVar15 + 0x1a0) == 0) {
                    func_0x00f78af4();
                    goto code_r0x018721b0;
                  }
                  puVar26 = puRam0000000003d3aed0;
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar15 + 0x1a0),param_7);
                }
                else {
                  puVar26 = (uint *)0x0;
                  /*UnityEngine.LODGroup$$ForceLOD*/ func_0x032323ec(param_7,0);
                }
              }
              func_0x00f78af4();
code_r0x018721b0:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x18721b4);
              (*UNRECOVERED_JUMPTABLE)();
            }
          }
        }
      }
      else if (*param_7 != 0) {
        uVar24 = (*(code *)**(undefined8 **)param_9[6])();
        *param_8 = uVar24;
        if ((*(long *)(lVar15 + 0x100) != 0) && (*(long *)(lVar15 + 0x20) != 0)) {
          puVar26 = *(uint **)(*(long *)(lVar15 + 0x100) + 0x28);
          lVar27 = /*STR('Untagged')*/ lRam0000000003d75ce0;
          /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar15 + 0x20),*param_7,puVar26,/*STR('Untagged')*/ lRam0000000003d75ce0,lVar30,0);
          if ((*(long *)(lVar15 + 0x100) != 0) && (*(long *)(lVar15 + 0x28) != 0)) {
            /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar15 + 0x28),*param_7,
                            *(undefined8 *)(*(long *)(lVar15 + 0x100) + 0x28),/*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0,
                            lVar30,0);
            Atlas_Gameplay_Kart_KartVisualComposite__SetRegionId
                      (extraout_d0 & 0xffffffff,lVar15,lVar30,0);
            goto LAB_01872024;
          }
        }
      }
    }
    else if (lVar15 != 0) {
      Atlas_Gameplay_Kart_KartVisualComposite__UnParentPart(lVar15,lVar13,0);
      lVar27 = 0;
      Atlas_Gameplay_Kart_KartVisualComposite__DestroyPart(lVar15,lVar13,lVar30);
      goto LAB_01871f10;
    }
    func_0x00f78af4();
    while (func_0x00f78ac0(lVar15,0), extraout_w1 == 1) {
      plVar14 = (long *)___cxa_begin_catch();
      lVar15 = *plVar14;
      ___cxa_end_catch();
code_r0x01872100:
      *(long *)((long)register0x00000008 + -0x118) = /*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768;
      uVar17 = (ulong)*(ushort *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0x12a);
      if (uVar17 != 0) {
        piVar29 = (int *)(*(long *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar28 = (undefined8 *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + (long)*piVar29 * 0x10 + 0x138);
            goto code_r0x01872160;
          }
          piVar29 = piVar29 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar26 = (uint *)0x0;
      puVar28 = (undefined8 *)func_0x00fac1f0((undefined1 *)((long)register0x00000008 + -0x118));
code_r0x01872160:
      plVar14 = (long *)(*(code *)*puVar28)((undefined1 *)((long)register0x00000008 + -0x110),
                                            puVar28[1]);
      if (lVar15 == 0) {
        return plVar14;
      }
    }
    auVar35 = __Unwind_Resume();
    plVar18 = auVar35._8_8_;
    plVar14 = auVar35._0_8_;
    *(long **)((long)register0x00000008 + -0x160) = param_9;
    *(undefined8 **)((long)register0x00000008 + -0x158) = param_8;
    *(long *)((long)register0x00000008 + -0x150) = lVar30;
    *(uint **)((long)register0x00000008 + -0x148) = puVar25;
    *(long **)((long)register0x00000008 + -0x140) = param_7;
    *(long *)((long)register0x00000008 + -0x138) = lVar15;
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0x128) =
         &System_Linq_Expressions_Interpreter_LabelInfo__CommonNode_object_;
    puVar25 = puVar26;
    lVar30 = lVar27;
    plVar23 = (long *)(**(code **)**(undefined8 **)(lVar27 + 0x30))();
    uVar11 = (uint)param_2;
    if (plVar23 != (long *)0x0) {
      lVar30 = *(long *)(*plVar23 + 0x1c0);
      uVar17 = (**(code **)(*plVar23 + 0x1b8))(plVar23,plVar14,plVar18);
      if ((uVar17 & 1) != 0) {
        return plVar14;
      }
      lVar15 = *(long *)(*(long *)(lVar27 + 0x30) + 0x18);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      param_8 = (undefined8 *)func_0x00f78aec(lVar15);
      puVar25 = *(uint **)(*(long *)(lVar27 + 0x30) + 0x20);
      (**(code **)puVar25)(param_8,plVar23);
      uVar11 = (uint)param_2;
      param_9 = plVar23;
      if (plVar14 != (long *)0x0) {
        if (param_8 == (undefined8 *)0x0) goto code_r0x01872338;
        do {
          auVar35._8_8_ = plVar18;
          auVar35._0_8_ = plVar14;
          puVar25 = *(uint **)(*(long *)(lVar27 + 0x30) + 0x28);
          (**(code **)puVar25)(param_8,plVar14);
          uVar11 = (uint)param_2;
          if (puVar26 == (uint *)0x0) goto code_r0x01872338;
          puVar25 = *(uint **)(*(long *)(lVar27 + 0x30) + 0x30);
          plVar14 = (long *)(**(code **)puVar25)(puVar26,plVar14);
        } while (plVar14 != (long *)0x0);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = plVar18;
      auVar35 = auVar4 << 0x40;
      uVar11 = (uint)param_2;
      if (plVar18 == (long *)0x0) {
        return (long *)0x0;
      }
      if (param_8 != (undefined8 *)0x0) {
        while( true ) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = plVar18;
          auVar35 = auVar5 << 0x40;
          puVar25 = *(uint **)(*(long *)(lVar27 + 0x30) + 0x40);
          uVar17 = (**(code **)puVar25)(param_8,plVar18);
          uVar11 = (uint)param_2;
          if ((uVar17 & 1) != 0) {
            return plVar18;
          }
          if (puVar26 == (uint *)0x0) break;
          plVar18 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar27 + 0x30) + 0x30))
                                      (puVar26,plVar18);
          if (plVar18 == (long *)0x0) {
            return (long *)0x0;
          }
        }
      }
    }
code_r0x01872338:
    uVar24 = auVar35._0_8_;
    func_0x00f78af4();
    *(undefined1 (*) [16])((long)register0x00000008 + -400) = auVar35;
    *(uint **)((long)register0x00000008 + -0x180) = puVar26;
    *(long *)((long)register0x00000008 + -0x178) = lVar27;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0x130);
    *(undefined **)((long)register0x00000008 + -0x168) =
         &
         Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateDefaultConstructor_object_
    ;
    puVar26 = puVar25;
    if ((bRam0000000003eb654f & 1) == 0) {
      func_0x00f78a20(0x3d241f8);
      func_0x00f78a20(0x3d7c160);
      bRam0000000003eb654f = 1;
    }
    lVar27 = **(long **)(puVar25 + 0xc);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
    if (lVar27 != 0) {
      *(undefined8 *)(lVar27 + 0x10) = extraout_x1_00;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_00,/*STR('type')*/ uRam0000000003d7c160,0);
      iVar9 = /*Newtonsoft.Json.Utilities.TypeExtensions$$IsValueType*/ func_0x02b83ec0(*(undefined8 *)(lVar27 + 0x10),0);
      if (iVar9 == 0) {
        uVar24 = *(undefined8 *)(lVar27 + 0x10);
        if (((*(ushort *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar24 = /*Newtonsoft.Json.Utilities.ReflectionUtils$$GetDefaultConstructor*/ func_0x02b7bb28(uVar24,1,0);
        *(undefined8 *)(lVar27 + 0x18) = uVar24;
        lVar30 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
        if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar30);
        }
        plVar14 = (long *)func_0x00f78aec(lVar30);
        (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                  (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x28));
      }
      else {
        lVar30 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
        if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar30);
        }
        plVar14 = (long *)func_0x00f78aec(lVar30);
        (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                  (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
      }
      return plVar14;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = extraout_x1_00;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(uint **)((long)register0x00000008 + -0x1a8) = puVar25;
    *(undefined1 **)((long)register0x00000008 + -0x1a0) =
         (undefined1 *)((long)register0x00000008 + -0x170);
    *(undefined **)((long)register0x00000008 + -0x198) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
    puVar25 = puVar26;
    if ((bRam0000000003eb6550 & 1) == 0) {
      func_0x00f78a20(0x3d792f8);
      bRam0000000003eb6550 = 1;
    }
    lVar27 = **(long **)(puVar26 + 0xc);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
    if (lVar27 != 0) {
      *(undefined8 *)(lVar27 + 0x10) = extraout_x1_01;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_01,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
      lVar30 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      plVar14 = (long *)func_0x00f78aec(lVar30);
      (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
      return plVar14;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = extraout_x1_01;
    *(uint **)((long)register0x00000008 + -0x1d8) = puVar26;
    *(undefined1 **)((long)register0x00000008 + -0x1d0) =
         (undefined1 *)((long)register0x00000008 + -0x1a0);
    *(undefined **)((long)register0x00000008 + -0x1c8) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
    puVar26 = puVar25;
    if ((bRam0000000003eb6551 & 1) == 0) {
      func_0x00f78a20(0x3d7b118);
      bRam0000000003eb6551 = 1;
    }
    lVar27 = **(long **)(puVar25 + 0xc);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
    if (lVar27 != 0) {
      *(undefined8 *)(lVar27 + 0x10) = extraout_x1_02;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_02,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
      lVar30 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      plVar14 = (long *)func_0x00f78aec(lVar30);
      (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
      return plVar14;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x220) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x210) = extraout_x1_02;
    *(uint **)((long)register0x00000008 + -0x208) = puVar25;
    *(undefined1 **)((long)register0x00000008 + -0x200) =
         (undefined1 *)((long)register0x00000008 + -0x1d0);
    *(undefined **)((long)register0x00000008 + -0x1f8) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateMethodCall_object_;
    puVar25 = puVar26;
    if ((bRam0000000003eb6552 & 1) == 0) {
      func_0x00f78a20(0x3d209d0);
      func_0x00f78a20(0x3d7a5f8);
      bRam0000000003eb6552 = 1;
    }
    lVar27 = **(long **)(puVar26 + 0xc);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
    if (lVar27 != 0) {
      *(undefined8 *)(lVar27 + 0x18) = extraout_x1_03;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_03,/*STR('method')*/ uRam0000000003d7a5f8,0);
      lVar30 = func_0x00f78adc(*(undefined8 *)(lVar27 + 0x18),/*System.Reflection.ConstructorInfo_TypeInfo*/ uRam0000000003d209d0);
      *(long *)(lVar27 + 0x10) = lVar30;
      lVar13 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
      if (lVar30 == 0) {
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        plVar14 = (long *)func_0x00f78aec(lVar13);
        (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                  (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x28));
      }
      else {
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        plVar14 = (long *)func_0x00f78aec(lVar13);
        (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                  (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
      }
      return plVar14;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x250) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x248) = extraout_x1_03;
    *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
    *(uint **)((long)register0x00000008 + -0x238) = puVar26;
    *(undefined1 **)((long)register0x00000008 + -0x230) =
         (undefined1 *)((long)register0x00000008 + -0x200);
    *(undefined **)((long)register0x00000008 + -0x228) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
    puVar26 = puVar25;
    if ((bRam0000000003eb6553 & 1) == 0) {
      func_0x00f78a20(0x3d792f8);
      bRam0000000003eb6553 = 1;
    }
    lVar27 = **(long **)(puVar25 + 0xc);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
    if (lVar27 != 0) {
      *(undefined8 *)(lVar27 + 0x10) = extraout_x1_04;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_04,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
      lVar30 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      plVar14 = (long *)func_0x00f78aec(lVar30);
      (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
      return plVar14;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x280) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = extraout_x1_04;
    *(uint **)((long)register0x00000008 + -0x268) = puVar25;
    *(undefined1 **)((long)register0x00000008 + -0x260) =
         (undefined1 *)((long)register0x00000008 + -0x230);
    *(undefined **)((long)register0x00000008 + -600) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
    puVar25 = puVar26;
    if ((bRam0000000003eb6554 & 1) == 0) {
      func_0x00f78a20(0x3d7b118);
      bRam0000000003eb6554 = 1;
    }
    lVar27 = **(long **)(puVar26 + 0xc);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    lVar27 = func_0x00f78aec(lVar27);
    (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 8))();
    if (lVar27 != 0) {
      *(undefined8 *)(lVar27 + 0x10) = extraout_x1_05;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_05,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
      lVar30 = *(long *)(*(long *)(puVar26 + 0xc) + 0x18);
      if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      plVar14 = (long *)func_0x00f78aec(lVar30);
      (*(code *)**(undefined8 **)(*(long *)(puVar26 + 0xc) + 0x20))
                (plVar14,lVar27,*(undefined8 *)(*(long *)(puVar26 + 0xc) + 0x10));
      return plVar14;
    }
    auVar36 = func_0x00f78af4();
    puVar7 = auVar36._8_8_;
    lVar15 = auVar36._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = extraout_x1_05;
    *(uint **)((long)register0x00000008 + -0x298) = puVar26;
    *(undefined1 **)((long)register0x00000008 + -0x290) =
         (undefined1 *)((long)register0x00000008 + -0x260);
    *(undefined **)((long)register0x00000008 + -0x288) =
         &UnityEngine_UI_LayoutGroup__SetProperty_bool_;
    puVar32 = (undefined1 *)((long)register0x00000008 + -0x290);
    *(char *)((long)register0x00000008 + -0x2b1) = (char)puVar25;
    lVar27 = **(long **)(lVar30 + 0x30);
    if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar27);
    }
    uVar24 = func_0x00f78ae0(lVar27,(undefined1 *)((long)register0x00000008 + -0x2b1));
    puVar26 = (uint *)0x0;
    plVar14 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(puVar7,uVar24);
    if (((ulong)plVar14 & 1) != 0) {
      return plVar14;
    }
    *puVar7 = (char)puVar25;
    if (lVar15 == 0) {
      auVar36 = func_0x00f78af4();
      puVar21 = auVar36._8_8_;
      lVar15 = auVar36._0_8_;
      *(long *)((long)register0x00000008 + -0x2f0) = lVar27;
      *(undefined1 **)((long)register0x00000008 + -0x2e8) = puVar7;
      *(uint **)((long)register0x00000008 + -0x2e0) = puVar25;
      *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
      *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar32;
      *(undefined **)((long)register0x00000008 + -0x2c8) =
           &UnityEngine_UI_LayoutGroup__SetProperty_int_;
      puVar32 = (undefined1 *)((long)register0x00000008 + -0x2d0);
      *(int *)((long)register0x00000008 + -0x2f4) = (int)puVar26;
      lVar27 = **(long **)(lVar30 + 0x30);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      uVar24 = func_0x00f78ae0(lVar27,(undefined1 *)((long)register0x00000008 + -0x2f4));
      puVar25 = (uint *)0x0;
      plVar14 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(puVar21,uVar24);
      if (((ulong)plVar14 & 1) != 0) {
        return plVar14;
      }
      *puVar21 = (int)puVar26;
      if (lVar15 == 0) {
        auVar36 = func_0x00f78af4();
        puVar22 = auVar36._8_8_;
        lVar15 = auVar36._0_8_;
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x360);
        *(long **)((long)register0x00000008 + -0x340) = param_9;
        *(undefined8 **)((long)register0x00000008 + -0x338) = param_8;
        *(long *)((long)register0x00000008 + -0x330) = lVar27;
        *(undefined4 **)((long)register0x00000008 + -0x328) = puVar21;
        *(uint **)((long)register0x00000008 + -800) = puVar26;
        *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x310) = puVar32;
        *(undefined **)((long)register0x00000008 + -0x308) =
             &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
        puVar32 = (undefined1 *)((long)register0x00000008 + -0x310);
        *(int *)((long)register0x00000008 + -0x344) = (int)puVar25;
        lVar27 = **(long **)(lVar30 + 0x30);
        if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar27);
        }
        param_8 = (undefined8 *)
                  func_0x00f78ae0(lVar27,(undefined1 *)((long)register0x00000008 + -0x344));
        lVar27 = **(long **)(lVar30 + 0x30);
        if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar27);
        }
        *(long *)((long)register0x00000008 + -0x360) = lVar27;
        *(undefined8 *)((long)register0x00000008 + -0x358) = 0xffffffffffffffff;
        *(undefined4 *)((long)register0x00000008 + -0x350) = *puVar22;
        lVar30 = *(long *)(lVar27 + 0x140);
        plVar14 = (long *)(**(code **)(lVar27 + 0x138))
                                    ((undefined1 *)((long)register0x00000008 + -0x360),param_8);
        if (((ulong)plVar14 & 1) != 0) {
          return plVar14;
        }
        *puVar22 = (int)puVar25;
        if (lVar15 == 0) {
          auVar35 = func_0x00f78af4();
          plVar23 = auVar35._8_8_;
          *(long *)((long)register0x00000008 + -0x390) = lVar27;
          *(undefined4 **)((long)register0x00000008 + -0x388) = puVar22;
          *(uint **)((long)register0x00000008 + -0x380) = puVar25;
          *(undefined8 *)((long)register0x00000008 + -0x378) = 0;
          *(undefined1 **)((long)register0x00000008 + -0x370) = puVar32;
          *(undefined **)((long)register0x00000008 + -0x368) =
               &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
          plVar14 = (long *)*plVar23;
          if (lVar30 == 0 && plVar14 == (long *)0x0) {
            return plVar14;
          }
          lVar16 = lVar30;
          if (plVar14 != (long *)0x0) {
            lVar16 = *(long *)(*plVar14 + 0x140);
            plVar14 = (long *)(**(code **)(*plVar14 + 0x138))(plVar14,lVar30);
            if (((ulong)plVar14 & 1) != 0) {
              return plVar14;
            }
          }
          *plVar23 = lVar30;
          if (auVar35._0_8_ == 0) {
            lVar15 = func_0x00f78af4();
            puVar7 = (undefined1 *)((long)register0x00000008 + -0x3e0);
            *(undefined8 *)((long)register0x00000008 + -0x3d0) = unaff_d9;
            *(ulong *)((long)register0x00000008 + -0x3c8) = extraout_d0 & 0xffffffff;
            *(long *)((long)register0x00000008 + -0x3c0) = lVar27;
            *(long **)((long)register0x00000008 + -0x3b8) = plVar23;
            *(long *)((long)register0x00000008 + -0x3b0) = lVar30;
            *(undefined8 *)((long)register0x00000008 + -0x3a8) = 0;
            *(undefined1 **)((long)register0x00000008 + -0x3a0) =
                 (undefined1 *)((long)register0x00000008 + -0x370);
            *(undefined **)((long)register0x00000008 + -0x398) =
                 &UnityEngine_UI_LayoutGroup__SetProperty_float_;
            puVar32 = (undefined1 *)((long)register0x00000008 + -0x3a0);
            *(uint *)((long)register0x00000008 + -0x3d4) = extraout_s0;
            lVar30 = **(long **)(lVar16 + 0x30);
            auVar36._8_8_ = lVar30;
            auVar36._0_8_ = lVar15;
            if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar30);
            }
            uVar24 = func_0x00f78ae0(lVar30,(undefined1 *)((long)register0x00000008 + -0x3d4));
            lVar16 = 0;
            plVar14 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1_06,uVar24);
            if (((ulong)plVar14 & 1) != 0) {
              return plVar14;
            }
            *extraout_x1_06 = extraout_s0;
            if (lVar15 == 0) {
              lVar15 = func_0x00f78af4();
              puVar7 = (undefined1 *)((long)register0x00000008 + -0x430);
              *(undefined8 *)((long)register0x00000008 + -0x420) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x418) = (ulong)extraout_s0;
              *(long *)((long)register0x00000008 + -0x410) = lVar27;
              *(long *)((long)register0x00000008 + -0x408) = lVar30;
              *(uint **)((long)register0x00000008 + -0x400) = extraout_x1_06;
              *(undefined8 *)((long)register0x00000008 + -0x3f8) = 0;
              *(undefined1 **)((long)register0x00000008 + -0x3f0) = puVar32;
              *(undefined **)((long)register0x00000008 + -1000) =
                   &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
              puVar32 = (undefined1 *)((long)register0x00000008 + -0x3f0);
              *(uint *)((long)register0x00000008 + -0x428) = extraout_s0_00;
              *(uint *)((long)register0x00000008 + -0x424) = uVar11;
              lVar30 = **(long **)(lVar16 + 0x30);
              auVar36._8_8_ = lVar30;
              auVar36._0_8_ = lVar15;
              if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar30);
              }
              uVar24 = func_0x00f78ae0(lVar30,(undefined1 *)((long)register0x00000008 + -0x428));
              lVar16 = 0;
              plVar14 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_07,uVar24);
              if (((ulong)plVar14 & 1) != 0) {
                return plVar14;
              }
              *extraout_x1_07 = extraout_s0_00;
              extraout_x1_07[1] = uVar11;
              if (lVar15 == 0) {
                auVar35 = func_0x00f78af4();
                plVar14 = auVar35._0_8_;
                *(long *)((long)register0x00000008 + -0x460) = lVar27;
                *(long *)((long)register0x00000008 + -0x458) = lVar30;
                *(uint **)((long)register0x00000008 + -0x450) = extraout_x1_07;
                *(undefined8 *)((long)register0x00000008 + -0x448) = 0;
                *(undefined1 **)((long)register0x00000008 + -0x440) = puVar32;
                *(undefined **)((long)register0x00000008 + -0x438) =
                     &System_Threading_LazyInitializer__EnsureInitialized_Task_ContingentProperties_
                ;
                lVar27 = *plVar14;
                func_0x00f78a30();
                if (lVar27 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar14 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 0x10))
                                              (plVar14,auVar35._8_8_);
                  return plVar14;
                }
                return (long *)*plVar14;
              }
              puVar33 = &UNK_01872cb0;
              puVar25 = extraout_x1_07;
            }
            else {
              puVar33 = &UNK_01872c1c;
              puVar25 = extraout_x1_06;
            }
          }
          else {
            puVar32 = *(undefined1 **)((long)register0x00000008 + -0x370);
            puVar33 = *(undefined **)((long)register0x00000008 + -0x368);
            puVar25 = *(uint **)((long)register0x00000008 + -0x380);
            lVar15 = *(long *)((long)register0x00000008 + -0x378);
            lVar27 = *(long *)((long)register0x00000008 + -0x390);
            auVar36._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x388);
            auVar36._0_8_ = auVar35._0_8_;
          }
        }
        else {
          puVar33 = &UNK_01872b18;
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x360);
        }
      }
      else {
        puVar33 = &UNK_01872a5c;
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x300);
        puVar25 = puVar26;
      }
    }
    else {
      puVar33 = &UNK_018729d4;
      puVar7 = (undefined1 *)((long)register0x00000008 + -0x2c0);
    }
    plVar14 = auVar36._0_8_;
    *(long *)(puVar7 + -0x30) = lVar27;
    *(long *)(puVar7 + -0x28) = auVar36._8_8_;
    *(uint **)(puVar7 + -0x20) = puVar25;
    *(long *)(puVar7 + -0x18) = lVar15;
    *(undefined1 **)(puVar7 + -0x10) = puVar32;
    *(undefined **)(puVar7 + -8) = puVar33;
    if ((bRam0000000003ec2d3a & 1) == 0) {
      func_0x00f78a20(0x3d20558,0);
      func_0x00f78a20(0x3d22df0);
      bRam0000000003ec2d3a = 1;
    }
    plVar23 = (long *)(**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if ((int)plVar23 == 0) {
      return plVar23;
    }
    if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
    lVar27 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar14);
    if ((uVar17 & 1) != 0) {
      lVar27 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar27,lVar27);
      plVar23 = *(long **)(puVar7 + -0x20);
      uVar24 = *(undefined8 *)(puVar7 + -0x30);
      uVar12 = *(undefined8 *)(puVar7 + -0x28);
      *(undefined8 *)(puVar7 + -0x30) = uVar24;
      *(undefined8 *)(puVar7 + -0x28) = uVar12;
      *(long **)(puVar7 + -0x20) = plVar23;
      *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      if (lVar27 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar19 = func_0x00f78aec();
        uVar20 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar19,uVar20,0);
      }
      else {
        uVar12 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar17 = (*pcRam0000000003ec01d0)(plVar14);
        if ((uVar17 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar14 = (long *)(*pcRam0000000003ec01e0)(plVar14,lVar27);
          return plVar14;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar19 = func_0x00f78aec();
        uVar20 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar20,0);
        plVar23 = plVar14;
      }
      uVar20 = func_0x00f78a24(0x3d5a8a8);
      auVar35 = func_0x00f78ac0(uVar19,uVar20);
      *(undefined8 *)(puVar7 + -0x60) = uVar24;
      *(undefined8 *)(puVar7 + -0x58) = uVar12;
      *(long **)(puVar7 + -0x50) = plVar23;
      *(undefined8 *)(puVar7 + -0x48) = uVar19;
      *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar14 = (long *)(*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
      return plVar14;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar7 + -0x58) = 0x3d23990;
    *(long *)(puVar7 + -0x50) = lVar13;
    *(undefined8 *)(puVar7 + -0x48) = extraout_x1;
    *(long **)(puVar7 + -0x40) = param_9;
    *(undefined8 **)(puVar7 + -0x38) = param_8;
    *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
    *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
    *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    if ((bRam0000000003ec2d44 & 1) == 0) {
      func_0x00f78a20(0x3d20068);
      func_0x00f78a20(0x3d19788);
      func_0x00f78a20(0x3d22df0);
      func_0x00f78a20(0x3d398f8);
      func_0x00f78a20(0x3d39900);
      func_0x00f78a20(0x3d1d6c0);
      func_0x00f78a20(0x3d3a1c0);
      func_0x00f78a20(0x3d3a1c8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d25458);
      bRam0000000003ec2d44 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar27,0,0);
    if (((ulong)plVar14 & 1) != 0) {
      return plVar14;
    }
    if (lVar27 == 0) {
code_r0x032d1910:
      lVar27 = func_0x00f78af4();
      return *(long **)(lVar27 + 0x18);
    }
    uVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar27,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar24,0,0);
    if (((ulong)plVar14 & 1) != 0) {
      return plVar14;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar30 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    plVar14 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar27,0);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else if (*plVar14 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar14 = (long *)0x0;
    }
    *(long *)(puVar7 + -0x68) = lVar27;
code_r0x032d1694:
    do {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar14,0,0);
      if ((uVar17 & 1) != 0) break;
      if (plVar14 == (long *)0x0) goto code_r0x032d1910;
      uVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar14,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar24,0,0);
      uVar24 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
      if (iVar9 != 0) break;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar24,0);
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar14,uVar24,lVar30,0);
      if (lVar30 == 0) goto code_r0x032d1910;
      uVar11 = *(uint *)(lVar30 + 0x18);
      uVar17 = (ulong)uVar11;
      bVar1 = 0 < (int)uVar11;
      if (0 < (int)uVar11) {
        uVar31 = 0;
        do {
          if ((uVar17 & 0xffffffff) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar23 = *(long **)(*(long *)(lVar30 + 0x10) + uVar31 * 8 + 0x20);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar23,0,0);
          if ((iVar9 != 0) && (plVar23 != (long *)0x0)) {
            if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar23 + 300)) &&
               ((*(long *)(*(long *)(*plVar23 + 200) +
                           (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8 + -8) ==
                 /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 && (uVar17 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar23,0), (uVar17 & 1) != 0))))
            {
              *(long **)(puVar7 + -0x68) = plVar14;
              break;
            }
          }
          uVar31 = uVar31 + 1;
          uVar17 = (ulong)*(int *)(lVar30 + 0x18);
          bVar1 = (long)uVar31 < (long)uVar17;
        } while ((long)uVar31 < (long)uVar17);
      }
      plVar14 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar14,0);
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        if (!bVar1) break;
        goto code_r0x032d1694;
      }
      if (*plVar14 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar14 = (long *)0x0;
      }
    } while (bVar1);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar24 = *(undefined8 *)(puVar7 + -0x68);
    iVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar24,lVar27,0);
    if (iVar9 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar24,lVar30);
      if ((uVar17 & 1) == 0) goto code_r0x032d18c0;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar24);
code_r0x032d18c0:
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar27 = lRam0000000003d39900;
    uVar24 = *(undefined8 *)(puVar7 + -0x30);
    uVar12 = *(undefined8 *)(puVar7 + -0x40);
    uVar20 = *(undefined8 *)(puVar7 + -0x38);
    *(undefined8 *)(puVar7 + -0x40) = uVar12;
    *(undefined8 *)(puVar7 + -0x38) = uVar20;
    *(undefined8 *)(puVar7 + -0x30) = uVar24;
    *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
    *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    lVar13 = *(long *)(lRam0000000003d39900 + 0x18);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    uVar3 = *(ushort *)(lVar13 + 0x132);
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar3 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      lVar13 = *(long *)(lVar27 + 0x18);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = *(long *)(lVar27 + 0x18);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar13 = *(long *)(lVar27 + 0x18);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) {
      lVar13 = func_0x00f78af4();
      *(undefined8 *)(puVar7 + -0x90) = uVar12;
      *(undefined8 *)(puVar7 + -0x88) = uVar20;
      *(undefined8 *)(puVar7 + -0x80) = uVar24;
      *(undefined8 *)(puVar7 + -0x78) = 0;
      *(long *)(puVar7 + -0x70) = lVar27;
      *(long *)(puVar7 + -0x68) = lVar30;
      *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
      lVar27 = *(long *)(lVar13 + 0x18);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      uVar24 = func_0x00f78aec(lVar27);
      lVar30 = *(long *)(lVar13 + 0x18);
      uVar3 = *(ushort *)(lVar30 + 0x132);
      lVar27 = lVar30;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar30);
        lVar27 = *(long *)(lVar13 + 0x18);
        uVar3 = *(ushort *)(lVar27 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar30 + 0xc0) + 0x30);
      lVar30 = lVar27;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar27);
        lVar30 = *(long *)(lVar13 + 0x18);
        uVar3 = *(ushort *)(lVar30 + 0x132);
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x20);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar30);
      }
      (*UNRECOVERED_JUMPTABLE)(uVar24,0,uVar12,*(undefined8 *)(*(long *)(lVar30 + 0xc0) + 0x30));
      lVar27 = *(long *)(lVar13 + 0x18);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      uVar12 = func_0x00f78aec(lVar27);
      lVar30 = *(long *)(lVar13 + 0x18);
      uVar3 = *(ushort *)(lVar30 + 0x132);
      lVar27 = lVar30;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar30);
        lVar27 = *(long *)(lVar13 + 0x18);
        uVar3 = *(ushort *)(lVar27 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar30 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar27);
      }
      plVar14 = (long *)(*UNRECOVERED_JUMPTABLE)
                                  (uVar12,0,uVar24,*(undefined8 *)(*(long *)(lVar27 + 0xc0) + 0x40))
      ;
      lVar27 = *(long *)(lVar13 + 0x18);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        plVar14 = (long *)func_0x00fac028(lVar27);
      }
      lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
      if ((*(ushort *)(lVar27 + 0x132) & 1) == 0) {
        plVar14 = (long *)func_0x00fac028(lVar27);
      }
      **(undefined8 **)(lVar27 + 0xb8) = uVar12;
      return plVar14;
    }
    lVar16 = *(long *)(lVar27 + 0x18);
    uVar3 = *(ushort *)(lVar16 + 0x132);
    lVar15 = lVar16;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar16);
      lVar15 = *(long *)(lVar27 + 0x18);
      uVar3 = *(ushort *)(lVar15 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x18);
    if ((uVar3 & 1) == 0) {
      *(code **)(puVar7 + -0x48) = UNRECOVERED_JUMPTABLE;
      func_0x00fac028(lVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar7 + -0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(*UNRECOVERED_JUMPTABLE)
                                (lVar13,lVar30,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18));
    return plVar14;
  }
LAB_0158b5c0:
  func_0x00f78af4();
LAB_0158b5c4:
  uVar24 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar24,0);
  unaff_x29 = &stack0xffffffffffffffe0;
  lVar27 = *(long *)(auVar34._0_8_ + 0x90);
  if (lVar27 == 0) {
code_r0x0158b60c:
    func_0x00f78af4();
  }
  else if (auVar34._8_4_ < *(uint *)(lVar27 + 0x18)) {
    lVar27 = *(long *)(lVar27 + (long)(int)auVar34._8_4_ * 0x40 + 0x28);
    if (lVar27 != 0) {
      if ((bRam0000000003eb535a & 1) == 0) {
        func_0x00f78a20(0x3d59bd0,param_5,0);
        bRam0000000003eb535a = 1;
      }
      plVar14 = (long *)((long)&MACH_HEADER.cputype + 1);
      unaff_x30 = &Atlas_FrontEnd_FrontEndScene__RequestLoadAntenna;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      lVar30 = lRam0000000003d59bd0;
      unaff_x29 = puVar6;
      goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
    }
    goto code_r0x0158b60c;
  }
  uVar24 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar24,0);
  lVar27 = *(long *)(auVar34._0_8_ + 0x90);
  if (lVar27 == 0) {
code_r0x0158b658:
    func_0x00f78af4();
  }
  else if (auVar34._8_4_ < *(uint *)(lVar27 + 0x18)) {
    lVar27 = *(long *)(lVar27 + (long)(int)auVar34._8_4_ * 0x40 + 0x28);
    if (lVar27 != 0) {
      if ((bRam0000000003eb535b & 1) == 0) {
        func_0x00f78a20(0x3d59bd8,param_5,0);
        bRam0000000003eb535b = 1;
      }
      plVar14 = (long *)((long)&MACH_HEADER.cputype + 2);
      unaff_x30 = &Atlas_FrontEnd_FrontEndScene__RequestLoadBoost;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar30 = lRam0000000003d59bd8;
      goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
    }
    goto code_r0x0158b658;
  }
  uVar24 = func_0x00f78b24();
  plVar23 = (long *)func_0x00f78ac0(uVar24,0);
  plVar14 = plVar23;
  if ((bRam0000000003eb50f2 & 1) == 0) {
    plVar14 = (long *)func_0x00f78a20(0x3d73540);
    bRam0000000003eb50f2 = 1;
  }
  if (((char)plVar23[0x2c] != '\0') || (lVar27 = plVar23[0x13], lVar27 == 0)) {
    return plVar14;
  }
  if (plVar23[0x14] == 0) {
    plVar14 = (long *)func_0x00f78af4();
    *(undefined1 *)(plVar14 + 2) = 1;
    return plVar14;
  }
  uVar24 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar23[0x14],/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar24,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar30 = lRam0000000003d3f8c0;
  plVar14 = *(long **)(lVar27 + 0x38);
  if ((plVar14 == (long *)0x0) || (5 < (int)plVar14[4])) {
    return plVar14;
  }
  lVar27 = plVar14[2];
  if (lVar27 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar9 = (int)plVar14[4];
    unaff_x19 = plVar14;
    unaff_x20 = lVar30;
    if (iVar9 == *(int *)(lVar27 + 0x18)) {
      iVar2 = iVar9 + 4;
      if (iVar9 + 4 <= iVar9 * 2) {
        iVar2 = iVar9 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (plVar14,iVar2);
      lVar27 = plVar14[2];
      if (lVar27 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)((long)plVar14 + 0x1c) < *(uint *)(lVar27 + 0x18)) {
      lVar27 = lVar27 + (long)(int)*(uint *)((long)plVar14 + 0x1c) * 0x10;
      *(undefined8 *)(lVar27 + 0x20) = uVar24;
      *(undefined8 *)(lVar27 + 0x28) = 0x4020000000000000;
      plVar23 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(lVar30 + 0x18) + 0xc0) + 0x20))(plVar14);
      plVar14[4] = CONCAT44((int)((ulong)plVar14[4] >> 0x20) + 1,(int)plVar14[4] + 1);
      return plVar23;
    }
  }
  uVar24 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar24,0);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_80 = unaff_x20;
  plStack_78 = unaff_x19;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_a0,auVar35._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar35._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  uStack_a8 = uStack_88;
  uStack_b0 = uStack_90;
  lVar27 = *(long *)(*(long *)(*(long *)(auVar35._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar27);
  }
  plVar14 = (long *)func_0x00f78ae0(lVar27,&uStack_c0);
  return plVar14;
}



// ============================================================
// RVA: 0x158b5d0 | Atlas.FrontEnd.FrontEndScene.RequestLoadAntenna
// ============================================================

/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_FrontEnd_FrontEndScene__RequestLoadAntenna
                 (undefined1 param_1 [16],undefined8 param_2,long param_3,uint param_4,long param_5,
                 undefined8 param_6,long *param_7,undefined8 *param_8,long *param_9)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint *extraout_x1_06;
  uint *extraout_x1_07;
  long *plVar22;
  undefined8 uVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  int *piVar28;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar29;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  uint extraout_s0;
  uint extraout_s0_00;
  ulong extraout_d0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_2c1 [529];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar31 = &stack0xfffffffffffffff0;
  lVar26 = *(long *)(param_3 + 0x90);
  if (lVar26 != 0) {
    if (*(uint *)(lVar26 + 0x18) <= param_4) goto LAB_0158b610;
    lVar26 = *(long *)(lVar26 + (long)(int)param_4 * 0x40 + 0x28);
    if (lVar26 == 0) goto LAB_0158b60c;
    if ((bRam0000000003eb535a & 1) == 0) {
      func_0x00f78a20(0x3d59bd0,param_5,0);
      bRam0000000003eb535a = 1;
    }
    plVar13 = (long *)((long)&MACH_HEADER.cputype + 1);
    lVar29 = lRam0000000003d59bd0;
    puVar31 = unaff_x29;
Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar31;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    plVar22 = plVar13;
    if (*(long *)(lVar26 + 0x28) != 0) {
      plVar22 = (long *)**(undefined8 **)(lVar29 + 0x30);
      lVar12 = (*(code *)*plVar22)();
      unaff_x19 = plVar13;
      unaff_x20 = param_5;
      if (lVar12 != 0) {
        uVar23 = *(undefined8 *)(lVar12 + 0x50);
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
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
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if ((bRam0000000003eb535d & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb535d = 1;
        }
        uVar10 = (uint)plVar13;
        if (uVar10 == 0) {
          lVar29 = *(long *)(lVar26 + 0x30);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
          if (lVar29 != 0) {
            if (*(uint *)(lVar29 + 0x18) < 7) goto LAB_015d1a88;
            *(undefined8 *)(lVar29 + 0x50) = uVar11;
            goto LAB_015d1960;
          }
        }
        else {
LAB_015d1960:
          lVar29 = *(long *)(lVar26 + 0x30);
          if (lVar29 != 0) {
            if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_015d1a88;
            lVar12 = (long)(int)uVar10;
            uVar11 = *(undefined8 *)(lVar29 + lVar12 * 8 + 0x20);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar11,param_5,0);
            if ((uVar7 & 1) != 0) goto LAB_015d1a68;
            lVar29 = *(long *)(lVar26 + 0x38);
            if (lVar29 != 0) {
              if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_015d1a88;
              iVar8 = /*Core.Assets.AssetManagerHandle$$IsValid*/ func_0x01637a38(lVar29 + lVar12 * 4 + 0x20,0);
              if (iVar8 == 0) {
LAB_015d1a04:
                lVar29 = *(long *)(lVar26 + 0x30);
                if (lVar29 != 0) {
                  if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_015d1a88;
                  *(long *)(lVar29 + lVar12 * 8 + 0x20) = param_5;
                  lVar29 = *(long *)(lVar26 + 0x38);
                  lVar26 = *(long *)(lVar26 + 0x20);
                  uVar11 = Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart(plVar13);
                  if ((lVar26 != 0) &&
                     (uVar9 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar26,uVar23,uVar11,0,0,0), lVar29 != 0)) {
                    if (uVar10 < *(uint *)(lVar29 + 0x18)) {
                      *(undefined4 *)(lVar29 + lVar12 * 4 + 0x20) = uVar9;
LAB_015d1a68:
                      return (long *)(ulong)(uVar7 ^ 1);
                    }
                    goto LAB_015d1a88;
                  }
                }
              }
              else {
                lVar29 = *(long *)(lVar26 + 0x38);
                if (lVar29 != 0) {
                  if (*(uint *)(lVar29 + 0x18) <= uVar10) goto LAB_015d1a88;
                  if (*(long *)(lVar26 + 0x20) != 0) {
                    /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar26 + 0x20),
                                    *(undefined4 *)(lVar29 + lVar12 * 4 + 0x20),0);
                    goto LAB_015d1a04;
                  }
                }
              }
            }
          }
        }
        func_0x00f78af4();
LAB_015d1a88:
        uVar11 = func_0x00f78b24();
        uVar10 = func_0x00f78ac0(uVar11,0);
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar23;
        *(long **)((long)register0x00000008 + -0x68) = plVar13;
        *(undefined1 **)((long)register0x00000008 + -0x60) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x58) =
             Atlas_Gameplay_Kart_KartPartLoader__GetBucketNameForPart;
        if ((bRam0000000003eb535e & 1) == 0) {
          func_0x00f78a20(0x3d68fe8);
          func_0x00f78a20(0x3d6a910);
          func_0x00f78a20(0x3d6d468);
          func_0x00f78a20(0x3d69818);
          func_0x00f78a20(0x3d6efb0);
          func_0x00f78a20(0x3d6ba50);
          func_0x00f78a20(0x3d76438);
          bRam0000000003eb535e = 1;
        }
        if (uVar10 < 7) {
          puVar27 = *(undefined8 **)(&UNK_03a5f250 + (long)(int)uVar10 * 8);
        }
        else {
          puVar27 = (undefined8 *)0x3d6ba50;
        }
        return (long *)*puVar27;
      }
    }
    auVar34 = func_0x00f78af4();
    puVar27 = auVar34._8_8_;
    lVar12 = auVar34._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = lVar26;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) =
         Atlas_Gameplay_Kart_KartVisualComposite__DestroyAndNullOut_AntennaVisualBehaviour_;
    if ((bRam0000000003eb654d & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d6bdf0);
      func_0x00f78a20(0x3d75ce0);
      bRam0000000003eb654d = 1;
    }
    uVar23 = *puVar27;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar24 = (uint *)0x0;
    iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar23,0);
    if (iVar8 == 0) {
LAB_01871d74:
      lVar12 = *plVar22;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar13 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar12,0);
      if ((int)plVar13 == 0) {
LAB_01871db0:
        *puVar27 = 0;
        *plVar22 = 0;
        return plVar13;
      }
      if (*plVar22 != 0) {
        plVar13 = (long *)Atlas_Gameplay_Kart_BaseVisualBehaviour__DeInit(*plVar22,0);
        goto LAB_01871db0;
      }
    }
    else if ((*(long *)(lVar12 + 0x100) != 0) && (*(long *)(lVar12 + 0x20) != 0)) {
      puVar24 = *(uint **)(*(long *)(lVar12 + 0x100) + 0x28);
      param_7 = (long *)0x0;
      param_8 = (undefined8 *)0x0;
      lVar29 = /*STR('Untagged')*/ lRam0000000003d75ce0;
      /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar12 + 0x20),*puVar27);
      if ((*(long *)(lVar12 + 0x100) != 0) && (*(long *)(lVar12 + 0x28) != 0)) {
        puVar24 = *(uint **)(*(long *)(lVar12 + 0x100) + 0x28);
        param_7 = (long *)0x0;
        param_8 = (undefined8 *)0x0;
        lVar29 = /*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0;
        /*Atlas.Rendering.MaterialDuplicator$$RemoveDuplicatedMaterials*/ func_0x0149276c(*(long *)(lVar12 + 0x28),*puVar27);
        uVar11 = *puVar27;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar11,0);
        goto LAB_01871d74;
      }
    }
    lVar14 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -200) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3d23990;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar23;
    *(long *)((long)register0x00000008 + -0x98) = lVar12;
    *(undefined8 **)((long)register0x00000008 + -0x90) = puVar27;
    *(long **)((long)register0x00000008 + -0x88) = plVar22;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0x78) =
         Atlas_Gameplay_Kart_KartVisualComposite__InstantiatePartAndParentTo_AntennaVisualBehaviour_
    ;
    puVar25 = puVar24;
    lVar26 = lVar29;
    if ((bRam0000000003eb654e & 1) == 0) {
      func_0x00f78a20(0x3d328f8);
      func_0x00f78a20(0x3d32900);
      func_0x00f78a20(0x3d1c768);
      func_0x00f78a20(0x3d57a08);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d3aed0);
      func_0x00f78a20(0x3d3aed8);
      func_0x00f78a20(0x3d5b098);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d6bdf0);
      func_0x00f78a20(0x3d75ce0);
      bRam0000000003eb654e = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    lVar12 = *param_7;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar12,0);
    if (iVar8 == 0) {
LAB_01871f10:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar13 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(extraout_x1,0);
      if (((ulong)plVar13 & 1) == 0) {
        *param_7 = 0;
        *param_8 = 0;
        return plVar13;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar15 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
      *param_7 = lVar15;
      *param_8 = 0;
      puVar25 = (uint *)0x0;
      iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(*param_7,0);
      if (iVar8 == 0) {
        if (lVar14 != 0) {
LAB_01872024:
          puVar25 = (uint *)*param_7;
          lVar26 = 0;
          plVar13 = (long *)Atlas_Gameplay_Kart_KartVisualComposite__ParentPartTo(lVar14,puVar24);
          if (*(char *)(lVar14 + 400) == '\0') {
            return plVar13;
          }
          if (*param_7 != 0) {
            puVar25 = *(uint **)(lVar14 + 0x198);
            lVar26 = lRam0000000003d57a08;
            /*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(*param_7,0);
            if (*(long *)(lVar14 + 0x198) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x118),
                              *(long *)(lVar14 + 0x198),uRam0000000003d3aed8);
              *(undefined8 *)((long)register0x00000008 + -0xf8) =
                   *(undefined8 *)((long)register0x00000008 + -0x110);
              *(undefined8 *)((long)register0x00000008 + -0x100) =
                   *(undefined8 *)((long)register0x00000008 + -0x118);
              *(undefined8 *)((long)register0x00000008 + -0xf0) =
                   *(undefined8 *)((long)register0x00000008 + -0x108);
              puVar24 = (uint *)0x3d328f8;
              lVar29 = 0x3d3aed0;
              while( true ) {
                uVar16 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x100),
                                         uRam0000000003d328f8);
                if ((uVar16 & 1) == 0) {
                  lVar14 = 0;
                  goto code_r0x01872100;
                }
                param_7 = *(long **)((long)register0x00000008 + -0xf0);
                if (param_7 == (long *)0x0) break;
                lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_7,0);
                if (lVar15 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018721b0;
                }
                uVar16 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar15,0);
                if ((uVar16 & 1) == 0) {
                  if (*(long *)(lVar14 + 0x1a0) == 0) {
                    func_0x00f78af4();
                    goto code_r0x018721b0;
                  }
                  puVar25 = puRam0000000003d3aed0;
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar14 + 0x1a0),param_7);
                }
                else {
                  puVar25 = (uint *)0x0;
                  /*UnityEngine.LODGroup$$ForceLOD*/ func_0x032323ec(param_7,0);
                }
              }
              func_0x00f78af4();
code_r0x018721b0:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x18721b4);
              (*UNRECOVERED_JUMPTABLE)();
            }
          }
        }
      }
      else if (*param_7 != 0) {
        uVar23 = (*(code *)**(undefined8 **)param_9[6])();
        *param_8 = uVar23;
        if ((*(long *)(lVar14 + 0x100) != 0) && (*(long *)(lVar14 + 0x20) != 0)) {
          puVar25 = *(uint **)(*(long *)(lVar14 + 0x100) + 0x28);
          lVar26 = /*STR('Untagged')*/ lRam0000000003d75ce0;
          /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar14 + 0x20),*param_7,puVar25,/*STR('Untagged')*/ lRam0000000003d75ce0,lVar29,0);
          if ((*(long *)(lVar14 + 0x100) != 0) && (*(long *)(lVar14 + 0x28) != 0)) {
            /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491dd0(*(long *)(lVar14 + 0x28),*param_7,
                            *(undefined8 *)(*(long *)(lVar14 + 0x100) + 0x28),/*STR('DontOverrideCellShading')*/ lRam0000000003d6bdf0,
                            lVar29,0);
            Atlas_Gameplay_Kart_KartVisualComposite__SetRegionId
                      (extraout_d0 & 0xffffffff,lVar14,lVar29,0);
            goto LAB_01872024;
          }
        }
      }
    }
    else if (lVar14 != 0) {
      Atlas_Gameplay_Kart_KartVisualComposite__UnParentPart(lVar14,lVar12,0);
      lVar26 = 0;
      Atlas_Gameplay_Kart_KartVisualComposite__DestroyPart(lVar14,lVar12,lVar29);
      goto LAB_01871f10;
    }
    func_0x00f78af4();
    while (func_0x00f78ac0(lVar14,0), extraout_w1 == 1) {
      plVar13 = (long *)___cxa_begin_catch();
      lVar14 = *plVar13;
      ___cxa_end_catch();
code_r0x01872100:
      *(long *)((long)register0x00000008 + -0x118) = /*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768;
      uVar16 = (ulong)*(ushort *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0x12a);
      if (uVar16 != 0) {
        piVar28 = (int *)(*(long *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar27 = (undefined8 *)(/*System.Collections.Generic.List.Enumerator<LODGroup>_TypeInfo*/ lRam0000000003d1c768 + (long)*piVar28 * 0x10 + 0x138);
            goto code_r0x01872160;
          }
          piVar28 = piVar28 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      puVar25 = (uint *)0x0;
      puVar27 = (undefined8 *)func_0x00fac1f0((undefined1 *)((long)register0x00000008 + -0x118));
code_r0x01872160:
      plVar13 = (long *)(*(code *)*puVar27)((undefined1 *)((long)register0x00000008 + -0x110),
                                            puVar27[1]);
      if (lVar14 == 0) {
        return plVar13;
      }
    }
    auVar34 = __Unwind_Resume();
    plVar17 = auVar34._8_8_;
    plVar13 = auVar34._0_8_;
    *(long **)((long)register0x00000008 + -0x160) = param_9;
    *(undefined8 **)((long)register0x00000008 + -0x158) = param_8;
    *(long *)((long)register0x00000008 + -0x150) = lVar29;
    *(uint **)((long)register0x00000008 + -0x148) = puVar24;
    *(long **)((long)register0x00000008 + -0x140) = param_7;
    *(long *)((long)register0x00000008 + -0x138) = lVar14;
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0x128) =
         &System_Linq_Expressions_Interpreter_LabelInfo__CommonNode_object_;
    puVar24 = puVar25;
    lVar29 = lVar26;
    plVar22 = (long *)(**(code **)**(undefined8 **)(lVar26 + 0x30))();
    uVar10 = (uint)param_2;
    if (plVar22 != (long *)0x0) {
      lVar29 = *(long *)(*plVar22 + 0x1c0);
      uVar16 = (**(code **)(*plVar22 + 0x1b8))(plVar22,plVar13,plVar17);
      if ((uVar16 & 1) != 0) {
        return plVar13;
      }
      lVar14 = *(long *)(*(long *)(lVar26 + 0x30) + 0x18);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      param_8 = (undefined8 *)func_0x00f78aec(lVar14);
      puVar24 = *(uint **)(*(long *)(lVar26 + 0x30) + 0x20);
      (**(code **)puVar24)(param_8,plVar22);
      uVar10 = (uint)param_2;
      param_9 = plVar22;
      if (plVar13 != (long *)0x0) {
        if (param_8 == (undefined8 *)0x0) goto code_r0x01872338;
        do {
          auVar34._8_8_ = plVar17;
          auVar34._0_8_ = plVar13;
          puVar24 = *(uint **)(*(long *)(lVar26 + 0x30) + 0x28);
          (**(code **)puVar24)(param_8,plVar13);
          uVar10 = (uint)param_2;
          if (puVar25 == (uint *)0x0) goto code_r0x01872338;
          puVar24 = *(uint **)(*(long *)(lVar26 + 0x30) + 0x30);
          plVar13 = (long *)(**(code **)puVar24)(puVar25,plVar13);
        } while (plVar13 != (long *)0x0);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = plVar17;
      auVar34 = auVar4 << 0x40;
      uVar10 = (uint)param_2;
      if (plVar17 == (long *)0x0) {
        return (long *)0x0;
      }
      if (param_8 != (undefined8 *)0x0) {
        while( true ) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = plVar17;
          auVar34 = auVar5 << 0x40;
          puVar24 = *(uint **)(*(long *)(lVar26 + 0x30) + 0x40);
          uVar16 = (**(code **)puVar24)(param_8,plVar17);
          uVar10 = (uint)param_2;
          if ((uVar16 & 1) != 0) {
            return plVar17;
          }
          if (puVar25 == (uint *)0x0) break;
          plVar17 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar26 + 0x30) + 0x30))
                                      (puVar25,plVar17);
          if (plVar17 == (long *)0x0) {
            return (long *)0x0;
          }
        }
      }
    }
code_r0x01872338:
    uVar23 = auVar34._0_8_;
    func_0x00f78af4();
    *(undefined1 (*) [16])((long)register0x00000008 + -400) = auVar34;
    *(uint **)((long)register0x00000008 + -0x180) = puVar25;
    *(long *)((long)register0x00000008 + -0x178) = lVar26;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0x130);
    *(undefined **)((long)register0x00000008 + -0x168) =
         &
         Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateDefaultConstructor_object_
    ;
    puVar25 = puVar24;
    if ((bRam0000000003eb654f & 1) == 0) {
      func_0x00f78a20(0x3d241f8);
      func_0x00f78a20(0x3d7c160);
      bRam0000000003eb654f = 1;
    }
    lVar26 = **(long **)(puVar24 + 0xc);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    lVar26 = func_0x00f78aec(lVar26);
    (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0xc) + 8))();
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x10) = extraout_x1_00;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_00,/*STR('type')*/ uRam0000000003d7c160,0);
      iVar8 = /*Newtonsoft.Json.Utilities.TypeExtensions$$IsValueType*/ func_0x02b83ec0(*(undefined8 *)(lVar26 + 0x10),0);
      if (iVar8 == 0) {
        uVar23 = *(undefined8 *)(lVar26 + 0x10);
        if (((*(ushort *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Newtonsoft.Json.Utilities.ReflectionUtils_TypeInfo*/ lRam0000000003d241f8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar23 = /*Newtonsoft.Json.Utilities.ReflectionUtils$$GetDefaultConstructor*/ func_0x02b7bb28(uVar23,1,0);
        *(undefined8 *)(lVar26 + 0x18) = uVar23;
        lVar29 = *(long *)(*(long *)(puVar24 + 0xc) + 0x18);
        if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar29);
        }
        plVar13 = (long *)func_0x00f78aec(lVar29);
        (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0xc) + 0x20))
                  (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar24 + 0xc) + 0x28));
      }
      else {
        lVar29 = *(long *)(*(long *)(puVar24 + 0xc) + 0x18);
        if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar29);
        }
        plVar13 = (long *)func_0x00f78aec(lVar29);
        (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0xc) + 0x20))
                  (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar24 + 0xc) + 0x10));
      }
      return plVar13;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = extraout_x1_00;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(uint **)((long)register0x00000008 + -0x1a8) = puVar24;
    *(undefined1 **)((long)register0x00000008 + -0x1a0) =
         (undefined1 *)((long)register0x00000008 + -0x170);
    *(undefined **)((long)register0x00000008 + -0x198) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
    puVar24 = puVar25;
    if ((bRam0000000003eb6550 & 1) == 0) {
      func_0x00f78a20(0x3d792f8);
      bRam0000000003eb6550 = 1;
    }
    lVar26 = **(long **)(puVar25 + 0xc);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    lVar26 = func_0x00f78aec(lVar26);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x10) = extraout_x1_01;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_01,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
      lVar29 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
      if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar29);
      }
      plVar13 = (long *)func_0x00f78aec(lVar29);
      (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
      return plVar13;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = extraout_x1_01;
    *(uint **)((long)register0x00000008 + -0x1d8) = puVar25;
    *(undefined1 **)((long)register0x00000008 + -0x1d0) =
         (undefined1 *)((long)register0x00000008 + -0x1a0);
    *(undefined **)((long)register0x00000008 + -0x1c8) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateGet_object_;
    puVar25 = puVar24;
    if ((bRam0000000003eb6551 & 1) == 0) {
      func_0x00f78a20(0x3d7b118);
      bRam0000000003eb6551 = 1;
    }
    lVar26 = **(long **)(puVar24 + 0xc);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    lVar26 = func_0x00f78aec(lVar26);
    (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0xc) + 8))();
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x10) = extraout_x1_02;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_02,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
      lVar29 = *(long *)(*(long *)(puVar24 + 0xc) + 0x18);
      if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar29);
      }
      plVar13 = (long *)func_0x00f78aec(lVar29);
      (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0xc) + 0x20))
                (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar24 + 0xc) + 0x10));
      return plVar13;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x220) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x210) = extraout_x1_02;
    *(uint **)((long)register0x00000008 + -0x208) = puVar24;
    *(undefined1 **)((long)register0x00000008 + -0x200) =
         (undefined1 *)((long)register0x00000008 + -0x1d0);
    *(undefined **)((long)register0x00000008 + -0x1f8) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateMethodCall_object_;
    puVar24 = puVar25;
    if ((bRam0000000003eb6552 & 1) == 0) {
      func_0x00f78a20(0x3d209d0);
      func_0x00f78a20(0x3d7a5f8);
      bRam0000000003eb6552 = 1;
    }
    lVar26 = **(long **)(puVar25 + 0xc);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    lVar26 = func_0x00f78aec(lVar26);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x18) = extraout_x1_03;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_03,/*STR('method')*/ uRam0000000003d7a5f8,0);
      lVar29 = func_0x00f78adc(*(undefined8 *)(lVar26 + 0x18),/*System.Reflection.ConstructorInfo_TypeInfo*/ uRam0000000003d209d0);
      *(long *)(lVar26 + 0x10) = lVar29;
      lVar12 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
      if (lVar29 == 0) {
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        plVar13 = (long *)func_0x00f78aec(lVar12);
        (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                  (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x28));
      }
      else {
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        plVar13 = (long *)func_0x00f78aec(lVar12);
        (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                  (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
      }
      return plVar13;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x250) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x248) = extraout_x1_03;
    *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
    *(uint **)((long)register0x00000008 + -0x238) = puVar25;
    *(undefined1 **)((long)register0x00000008 + -0x230) =
         (undefined1 *)((long)register0x00000008 + -0x200);
    *(undefined **)((long)register0x00000008 + -0x228) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
    puVar25 = puVar24;
    if ((bRam0000000003eb6553 & 1) == 0) {
      func_0x00f78a20(0x3d792f8);
      bRam0000000003eb6553 = 1;
    }
    lVar26 = **(long **)(puVar24 + 0xc);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    lVar26 = func_0x00f78aec(lVar26);
    (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0xc) + 8))();
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x10) = extraout_x1_04;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_04,/*STR('fieldInfo')*/ uRam0000000003d792f8,0);
      lVar29 = *(long *)(*(long *)(puVar24 + 0xc) + 0x18);
      if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar29);
      }
      plVar13 = (long *)func_0x00f78aec(lVar29);
      (*(code *)**(undefined8 **)(*(long *)(puVar24 + 0xc) + 0x20))
                (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar24 + 0xc) + 0x10));
      return plVar13;
    }
    func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x280) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = extraout_x1_04;
    *(uint **)((long)register0x00000008 + -0x268) = puVar24;
    *(undefined1 **)((long)register0x00000008 + -0x260) =
         (undefined1 *)((long)register0x00000008 + -0x230);
    *(undefined **)((long)register0x00000008 + -600) =
         &Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateSet_object_;
    puVar24 = puVar25;
    if ((bRam0000000003eb6554 & 1) == 0) {
      func_0x00f78a20(0x3d7b118);
      bRam0000000003eb6554 = 1;
    }
    lVar26 = **(long **)(puVar25 + 0xc);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    lVar26 = func_0x00f78aec(lVar26);
    (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 8))();
    if (lVar26 != 0) {
      *(undefined8 *)(lVar26 + 0x10) = extraout_x1_05;
      /*Newtonsoft.Json.Utilities.ValidationUtils$$ArgumentNotNull*/ func_0x02b7eee8(extraout_x1_05,/*STR('propertyInfo')*/ uRam0000000003d7b118,0);
      lVar29 = *(long *)(*(long *)(puVar25 + 0xc) + 0x18);
      if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar29);
      }
      plVar13 = (long *)func_0x00f78aec(lVar29);
      (*(code *)**(undefined8 **)(*(long *)(puVar25 + 0xc) + 0x20))
                (plVar13,lVar26,*(undefined8 *)(*(long *)(puVar25 + 0xc) + 0x10));
      return plVar13;
    }
    auVar35 = func_0x00f78af4();
    puVar6 = auVar35._8_8_;
    lVar14 = auVar35._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = extraout_x1_05;
    *(uint **)((long)register0x00000008 + -0x298) = puVar25;
    *(undefined1 **)((long)register0x00000008 + -0x290) =
         (undefined1 *)((long)register0x00000008 + -0x260);
    *(undefined **)((long)register0x00000008 + -0x288) =
         &UnityEngine_UI_LayoutGroup__SetProperty_bool_;
    puVar31 = (undefined1 *)((long)register0x00000008 + -0x290);
    *(char *)((long)register0x00000008 + -0x2b1) = (char)puVar24;
    lVar26 = **(long **)(lVar29 + 0x30);
    if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar26);
    }
    uVar23 = func_0x00f78ae0(lVar26,(undefined1 *)((long)register0x00000008 + -0x2b1));
    puVar25 = (uint *)0x0;
    plVar13 = (long *)/*System.Boolean$$Equals*/ func_0x02940ff0(puVar6,uVar23);
    if (((ulong)plVar13 & 1) != 0) {
      return plVar13;
    }
    *puVar6 = (char)puVar24;
    if (lVar14 == 0) {
      auVar35 = func_0x00f78af4();
      puVar20 = auVar35._8_8_;
      lVar14 = auVar35._0_8_;
      *(long *)((long)register0x00000008 + -0x2f0) = lVar26;
      *(undefined1 **)((long)register0x00000008 + -0x2e8) = puVar6;
      *(uint **)((long)register0x00000008 + -0x2e0) = puVar24;
      *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
      *(undefined1 **)((long)register0x00000008 + -0x2d0) = puVar31;
      *(undefined **)((long)register0x00000008 + -0x2c8) =
           &UnityEngine_UI_LayoutGroup__SetProperty_int_;
      puVar31 = (undefined1 *)((long)register0x00000008 + -0x2d0);
      *(int *)((long)register0x00000008 + -0x2f4) = (int)puVar25;
      lVar26 = **(long **)(lVar29 + 0x30);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      uVar23 = func_0x00f78ae0(lVar26,(undefined1 *)((long)register0x00000008 + -0x2f4));
      puVar24 = (uint *)0x0;
      plVar13 = (long *)/*System.Int32$$Equals*/ func_0x02ae9af0(puVar20,uVar23);
      if (((ulong)plVar13 & 1) != 0) {
        return plVar13;
      }
      *puVar20 = (int)puVar25;
      if (lVar14 == 0) {
        auVar35 = func_0x00f78af4();
        puVar21 = auVar35._8_8_;
        lVar14 = auVar35._0_8_;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x360);
        *(long **)((long)register0x00000008 + -0x340) = param_9;
        *(undefined8 **)((long)register0x00000008 + -0x338) = param_8;
        *(long *)((long)register0x00000008 + -0x330) = lVar26;
        *(undefined4 **)((long)register0x00000008 + -0x328) = puVar20;
        *(uint **)((long)register0x00000008 + -800) = puVar25;
        *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x310) = puVar31;
        *(undefined **)((long)register0x00000008 + -0x308) =
             &UnityEngine_UI_LayoutGroup__SetProperty_GridLayoutGroup_Corner_;
        puVar31 = (undefined1 *)((long)register0x00000008 + -0x310);
        *(int *)((long)register0x00000008 + -0x344) = (int)puVar24;
        lVar26 = **(long **)(lVar29 + 0x30);
        if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar26);
        }
        param_8 = (undefined8 *)
                  func_0x00f78ae0(lVar26,(undefined1 *)((long)register0x00000008 + -0x344));
        lVar26 = **(long **)(lVar29 + 0x30);
        if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar26);
        }
        *(long *)((long)register0x00000008 + -0x360) = lVar26;
        *(undefined8 *)((long)register0x00000008 + -0x358) = 0xffffffffffffffff;
        *(undefined4 *)((long)register0x00000008 + -0x350) = *puVar21;
        lVar29 = *(long *)(lVar26 + 0x140);
        plVar13 = (long *)(**(code **)(lVar26 + 0x138))
                                    ((undefined1 *)((long)register0x00000008 + -0x360),param_8);
        if (((ulong)plVar13 & 1) != 0) {
          return plVar13;
        }
        *puVar21 = (int)puVar24;
        if (lVar14 == 0) {
          auVar34 = func_0x00f78af4();
          plVar22 = auVar34._8_8_;
          *(long *)((long)register0x00000008 + -0x390) = lVar26;
          *(undefined4 **)((long)register0x00000008 + -0x388) = puVar21;
          *(uint **)((long)register0x00000008 + -0x380) = puVar24;
          *(undefined8 *)((long)register0x00000008 + -0x378) = 0;
          *(undefined1 **)((long)register0x00000008 + -0x370) = puVar31;
          *(undefined **)((long)register0x00000008 + -0x368) =
               &UnityEngine_UI_LayoutGroup__SetProperty_RectOffset_;
          plVar13 = (long *)*plVar22;
          if (lVar29 == 0 && plVar13 == (long *)0x0) {
            return plVar13;
          }
          lVar15 = lVar29;
          if (plVar13 != (long *)0x0) {
            lVar15 = *(long *)(*plVar13 + 0x140);
            plVar13 = (long *)(**(code **)(*plVar13 + 0x138))(plVar13,lVar29);
            if (((ulong)plVar13 & 1) != 0) {
              return plVar13;
            }
          }
          *plVar22 = lVar29;
          if (auVar34._0_8_ == 0) {
            lVar14 = func_0x00f78af4();
            puVar6 = (undefined1 *)((long)register0x00000008 + -0x3e0);
            *(undefined8 *)((long)register0x00000008 + -0x3d0) = unaff_d9;
            *(ulong *)((long)register0x00000008 + -0x3c8) = extraout_d0 & 0xffffffff;
            *(long *)((long)register0x00000008 + -0x3c0) = lVar26;
            *(long **)((long)register0x00000008 + -0x3b8) = plVar22;
            *(long *)((long)register0x00000008 + -0x3b0) = lVar29;
            *(undefined8 *)((long)register0x00000008 + -0x3a8) = 0;
            *(undefined1 **)((long)register0x00000008 + -0x3a0) =
                 (undefined1 *)((long)register0x00000008 + -0x370);
            *(undefined **)((long)register0x00000008 + -0x398) =
                 &UnityEngine_UI_LayoutGroup__SetProperty_float_;
            puVar31 = (undefined1 *)((long)register0x00000008 + -0x3a0);
            *(uint *)((long)register0x00000008 + -0x3d4) = extraout_s0;
            lVar29 = **(long **)(lVar15 + 0x30);
            auVar35._8_8_ = lVar29;
            auVar35._0_8_ = lVar14;
            if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar29);
            }
            uVar23 = func_0x00f78ae0(lVar29,(undefined1 *)((long)register0x00000008 + -0x3d4));
            lVar15 = 0;
            plVar13 = (long *)/*System.Single$$Equals*/ func_0x029ba7b0(extraout_x1_06,uVar23);
            if (((ulong)plVar13 & 1) != 0) {
              return plVar13;
            }
            *extraout_x1_06 = extraout_s0;
            if (lVar14 == 0) {
              lVar14 = func_0x00f78af4();
              puVar6 = (undefined1 *)((long)register0x00000008 + -0x430);
              *(undefined8 *)((long)register0x00000008 + -0x420) = unaff_d9;
              *(ulong *)((long)register0x00000008 + -0x418) = (ulong)extraout_s0;
              *(long *)((long)register0x00000008 + -0x410) = lVar26;
              *(long *)((long)register0x00000008 + -0x408) = lVar29;
              *(uint **)((long)register0x00000008 + -0x400) = extraout_x1_06;
              *(undefined8 *)((long)register0x00000008 + -0x3f8) = 0;
              *(undefined1 **)((long)register0x00000008 + -0x3f0) = puVar31;
              *(undefined **)((long)register0x00000008 + -1000) =
                   &UnityEngine_UI_LayoutGroup__SetProperty_Vector2_;
              puVar31 = (undefined1 *)((long)register0x00000008 + -0x3f0);
              *(uint *)((long)register0x00000008 + -0x428) = extraout_s0_00;
              *(uint *)((long)register0x00000008 + -0x424) = uVar10;
              lVar29 = **(long **)(lVar15 + 0x30);
              auVar35._8_8_ = lVar29;
              auVar35._0_8_ = lVar14;
              if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar29);
              }
              uVar23 = func_0x00f78ae0(lVar29,(undefined1 *)((long)register0x00000008 + -0x428));
              lVar15 = 0;
              plVar13 = (long *)/*UnityEngine.Vector2$$Equals*/ func_0x0327a57c(extraout_x1_07,uVar23);
              if (((ulong)plVar13 & 1) != 0) {
                return plVar13;
              }
              *extraout_x1_07 = extraout_s0_00;
              extraout_x1_07[1] = uVar10;
              if (lVar14 == 0) {
                auVar34 = func_0x00f78af4();
                plVar13 = auVar34._0_8_;
                *(long *)((long)register0x00000008 + -0x460) = lVar26;
                *(long *)((long)register0x00000008 + -0x458) = lVar29;
                *(uint **)((long)register0x00000008 + -0x450) = extraout_x1_07;
                *(undefined8 *)((long)register0x00000008 + -0x448) = 0;
                *(undefined1 **)((long)register0x00000008 + -0x440) = puVar31;
                *(undefined **)((long)register0x00000008 + -0x438) =
                     &System_Threading_LazyInitializer__EnsureInitialized_Task_ContingentProperties_
                ;
                lVar26 = *plVar13;
                func_0x00f78a30();
                if (lVar26 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01872d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 0x10))
                                              (plVar13,auVar34._8_8_);
                  return plVar13;
                }
                return (long *)*plVar13;
              }
              puVar32 = &UNK_01872cb0;
              puVar24 = extraout_x1_07;
            }
            else {
              puVar32 = &UNK_01872c1c;
              puVar24 = extraout_x1_06;
            }
          }
          else {
            puVar31 = *(undefined1 **)((long)register0x00000008 + -0x370);
            puVar32 = *(undefined **)((long)register0x00000008 + -0x368);
            puVar24 = *(uint **)((long)register0x00000008 + -0x380);
            lVar14 = *(long *)((long)register0x00000008 + -0x378);
            lVar26 = *(long *)((long)register0x00000008 + -0x390);
            auVar35._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x388);
            auVar35._0_8_ = auVar34._0_8_;
          }
        }
        else {
          puVar32 = &UNK_01872b18;
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x360);
        }
      }
      else {
        puVar32 = &UNK_01872a5c;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x300);
        puVar24 = puVar25;
      }
    }
    else {
      puVar32 = &UNK_018729d4;
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x2c0);
    }
    plVar13 = auVar35._0_8_;
    *(long *)(puVar6 + -0x30) = lVar26;
    *(long *)(puVar6 + -0x28) = auVar35._8_8_;
    *(uint **)(puVar6 + -0x20) = puVar24;
    *(long *)(puVar6 + -0x18) = lVar14;
    *(undefined1 **)(puVar6 + -0x10) = puVar31;
    *(undefined **)(puVar6 + -8) = puVar32;
    if ((bRam0000000003ec2d3a & 1) == 0) {
      func_0x00f78a20(0x3d20558,0);
      func_0x00f78a20(0x3d22df0);
      bRam0000000003ec2d3a = 1;
    }
    plVar22 = (long *)(**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if ((int)plVar22 == 0) {
      return plVar22;
    }
    if (((*(ushort *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.CanvasUpdateRegistry_TypeInfo*/ lRam0000000003d20558 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*UnityEngine.UI.CanvasUpdateRegistry$$IsRebuildingLayout*/ func_0x032afad4(0);
    lVar26 = /*UnityEngine.UI.LayoutGroup$$get_rectTransform*/ func_0x032d19e4(plVar13);
    if ((uVar16 & 1) != 0) {
      lVar26 = /*UnityEngine.UI.LayoutGroup$$DelayedSetDirty*/ func_0x032d29d0(lVar26,lVar26);
      plVar22 = *(long **)(puVar6 + -0x20);
      uVar23 = *(undefined8 *)(puVar6 + -0x30);
      uVar11 = *(undefined8 *)(puVar6 + -0x28);
      *(undefined8 *)(puVar6 + -0x30) = uVar23;
      *(undefined8 *)(puVar6 + -0x28) = uVar11;
      *(long **)(puVar6 + -0x20) = plVar22;
      *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      if (lVar26 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar18 = func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar18,uVar19,0);
      }
      else {
        uVar11 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar16 = (*pcRam0000000003ec01d0)(plVar13);
        if ((uVar16 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar13 = (long *)(*pcRam0000000003ec01e0)(plVar13,lVar26);
          return plVar13;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar18 = func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar19,0);
        plVar22 = plVar13;
      }
      uVar19 = func_0x00f78a24(0x3d5a8a8);
      auVar34 = func_0x00f78ac0(uVar18,uVar19);
      *(undefined8 *)(puVar6 + -0x60) = uVar23;
      *(undefined8 *)(puVar6 + -0x58) = uVar11;
      *(long **)(puVar6 + -0x50) = plVar22;
      *(undefined8 *)(puVar6 + -0x48) = uVar18;
      *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
      *(undefined **)(puVar6 + -0x38) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar13 = (long *)(*pcRam0000000003ec01e0)(auVar34._0_8_,auVar34._8_8_);
      return plVar13;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar6 + -0x58) = 0x3d23990;
    *(long *)(puVar6 + -0x50) = lVar12;
    *(undefined8 *)(puVar6 + -0x48) = extraout_x1;
    *(long **)(puVar6 + -0x40) = param_9;
    *(undefined8 **)(puVar6 + -0x38) = param_8;
    *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
    *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
    *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
    *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
    *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
    if ((bRam0000000003ec2d44 & 1) == 0) {
      func_0x00f78a20(0x3d20068);
      func_0x00f78a20(0x3d19788);
      func_0x00f78a20(0x3d22df0);
      func_0x00f78a20(0x3d398f8);
      func_0x00f78a20(0x3d39900);
      func_0x00f78a20(0x3d1d6c0);
      func_0x00f78a20(0x3d3a1c0);
      func_0x00f78a20(0x3d3a1c8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d25458);
      bRam0000000003ec2d44 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar13 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar26,0,0);
    if (((ulong)plVar13 & 1) != 0) {
      return plVar13;
    }
    if (lVar26 == 0) {
code_r0x032d1910:
      lVar26 = func_0x00f78af4();
      return *(long **)(lVar26 + 0x18);
    }
    uVar23 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar26,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar13 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar23,0,0);
    if (((ulong)plVar13 & 1) != 0) {
      return plVar13;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar29 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    plVar13 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar26,0);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else if (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar13 = (long *)0x0;
    }
    *(long *)(puVar6 + -0x68) = lVar26;
code_r0x032d1694:
    do {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar13,0,0);
      if ((uVar16 & 1) != 0) break;
      if (plVar13 == (long *)0x0) goto code_r0x032d1910;
      uVar23 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar13,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar23,0,0);
      uVar23 = /*UnityEngine.UI.ILayoutGroup_var*/ uRam0000000003d19788;
      if (iVar8 != 0) break;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar23,0);
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar13,uVar23,lVar29,0);
      if (lVar29 == 0) goto code_r0x032d1910;
      uVar10 = *(uint *)(lVar29 + 0x18);
      uVar16 = (ulong)uVar10;
      bVar1 = 0 < (int)uVar10;
      if (0 < (int)uVar10) {
        uVar30 = 0;
        do {
          if ((uVar16 & 0xffffffff) <= uVar30) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar22 = *(long **)(*(long *)(lVar29 + 0x10) + uVar30 * 8 + 0x20);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar22,0,0);
          if ((iVar8 != 0) && (plVar22 != (long *)0x0)) {
            if ((*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) <= *(byte *)(*plVar22 + 300)) &&
               ((*(long *)(*(long *)(*plVar22 + 200) +
                           (ulong)*(byte *)(/*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 + 300) * 8 + -8) ==
                 /*UnityEngine.Behaviour_TypeInfo*/ lRam0000000003d20068 && (uVar16 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(plVar22,0), (uVar16 & 1) != 0))))
            {
              *(long **)(puVar6 + -0x68) = plVar13;
              break;
            }
          }
          uVar30 = uVar30 + 1;
          uVar16 = (ulong)*(int *)(lVar29 + 0x18);
          bVar1 = (long)uVar30 < (long)uVar16;
        } while ((long)uVar30 < (long)uVar16);
      }
      plVar13 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(plVar13,0);
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
        if (!bVar1) break;
        goto code_r0x032d1694;
      }
      if (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
        plVar13 = (long *)0x0;
      }
    } while (bVar1);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar23 = *(undefined8 *)(puVar6 + -0x68);
    iVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar23,lVar26,0);
    if (iVar8 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*UnityEngine.UI.LayoutRebuilder$$ValidController*/ func_0x032d39d8(uVar23,lVar29);
      if ((uVar16 & 1) == 0) goto code_r0x032d18c0;
    }
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.UI.LayoutRebuilder$$MarkLayoutRootForRebuild*/ func_0x032d3be8(uVar23);
code_r0x032d18c0:
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar26 = lRam0000000003d39900;
    uVar23 = *(undefined8 *)(puVar6 + -0x30);
    uVar11 = *(undefined8 *)(puVar6 + -0x40);
    uVar19 = *(undefined8 *)(puVar6 + -0x38);
    *(undefined8 *)(puVar6 + -0x40) = uVar11;
    *(undefined8 *)(puVar6 + -0x38) = uVar19;
    *(undefined8 *)(puVar6 + -0x30) = uVar23;
    *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
    *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
    *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
    *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
    lVar12 = *(long *)(lRam0000000003d39900 + 0x18);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    uVar3 = *(ushort *)(lVar12 + 0x132);
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar12);
      uVar3 = *(ushort *)(lVar12 + 0x132);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      lVar12 = *(long *)(lVar26 + 0x18);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = *(long *)(lVar26 + 0x18);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        func_0x00f78ad0(lVar12);
      }
    }
    lVar12 = *(long *)(lVar26 + 0x18);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 == 0) {
      lVar12 = func_0x00f78af4();
      *(undefined8 *)(puVar6 + -0x90) = uVar11;
      *(undefined8 *)(puVar6 + -0x88) = uVar19;
      *(undefined8 *)(puVar6 + -0x80) = uVar23;
      *(undefined8 *)(puVar6 + -0x78) = 0;
      *(long *)(puVar6 + -0x70) = lVar26;
      *(long *)(puVar6 + -0x68) = lVar29;
      *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x10;
      *(undefined **)(puVar6 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
      lVar26 = *(long *)(lVar12 + 0x18);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      uVar23 = func_0x00f78aec(lVar26);
      lVar29 = *(long *)(lVar12 + 0x18);
      uVar3 = *(ushort *)(lVar29 + 0x132);
      lVar26 = lVar29;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar29);
        lVar26 = *(long *)(lVar12 + 0x18);
        uVar3 = *(ushort *)(lVar26 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar29 + 0xc0) + 0x30);
      lVar29 = lVar26;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar26);
        lVar29 = *(long *)(lVar12 + 0x18);
        uVar3 = *(ushort *)(lVar29 + 0x132);
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x20);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar29);
      }
      (*UNRECOVERED_JUMPTABLE)(uVar23,0,uVar11,*(undefined8 *)(*(long *)(lVar29 + 0xc0) + 0x30));
      lVar26 = *(long *)(lVar12 + 0x18);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      uVar11 = func_0x00f78aec(lVar26);
      lVar29 = *(long *)(lVar12 + 0x18);
      uVar3 = *(ushort *)(lVar29 + 0x132);
      lVar26 = lVar29;
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar29);
        lVar26 = *(long *)(lVar12 + 0x18);
        uVar3 = *(ushort *)(lVar26 + 0x132);
      }
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar29 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        func_0x00fac028(lVar26);
      }
      plVar13 = (long *)(*UNRECOVERED_JUMPTABLE)
                                  (uVar11,0,uVar23,*(undefined8 *)(*(long *)(lVar26 + 0xc0) + 0x40))
      ;
      lVar26 = *(long *)(lVar12 + 0x18);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        plVar13 = (long *)func_0x00fac028(lVar26);
      }
      lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
      if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
        plVar13 = (long *)func_0x00fac028(lVar26);
      }
      **(undefined8 **)(lVar26 + 0xb8) = uVar11;
      return plVar13;
    }
    lVar15 = *(long *)(lVar26 + 0x18);
    uVar3 = *(ushort *)(lVar15 + 0x132);
    lVar14 = lVar15;
    if ((uVar3 & 1) == 0) {
      func_0x00fac028(lVar15);
      lVar14 = *(long *)(lVar26 + 0x18);
      uVar3 = *(ushort *)(lVar14 + 0x132);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x18);
    if ((uVar3 & 1) == 0) {
      *(code **)(puVar6 + -0x48) = UNRECOVERED_JUMPTABLE;
      func_0x00fac028(lVar14);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar6 + -0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar13 = (long *)(*UNRECOVERED_JUMPTABLE)
                                (lVar12,lVar29,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x18));
    return plVar13;
  }
LAB_0158b60c:
  func_0x00f78af4();
LAB_0158b610:
  uVar23 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar23,0);
  lVar26 = *(long *)(auVar33._0_8_ + 0x90);
  if (lVar26 == 0) {
code_r0x0158b658:
    func_0x00f78af4();
  }
  else if (auVar33._8_4_ < *(uint *)(lVar26 + 0x18)) {
    lVar26 = *(long *)(lVar26 + (long)(int)auVar33._8_4_ * 0x40 + 0x28);
    if (lVar26 != 0) {
      if ((bRam0000000003eb535b & 1) == 0) {
        func_0x00f78a20(0x3d59bd8,param_5,0);
        bRam0000000003eb535b = 1;
      }
      plVar13 = (long *)((long)&MACH_HEADER.cputype + 2);
      unaff_x30 = &Atlas_FrontEnd_FrontEndScene__RequestLoadBoost;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      lVar29 = lRam0000000003d59bd8;
      goto Atlas_Gameplay_Kart_KartPartLoader__RequestLoadGenericPart_AntennaDefinition_;
    }
    goto code_r0x0158b658;
  }
  uVar23 = func_0x00f78b24();
  plVar22 = (long *)func_0x00f78ac0(uVar23,0);
  plVar13 = plVar22;
  if ((bRam0000000003eb50f2 & 1) == 0) {
    plVar13 = (long *)func_0x00f78a20(0x3d73540);
    bRam0000000003eb50f2 = 1;
  }
  if (((char)plVar22[0x2c] != '\0') || (lVar26 = plVar22[0x13], lVar26 == 0)) {
    return plVar13;
  }
  if (plVar22[0x14] == 0) {
    plVar13 = (long *)func_0x00f78af4();
    *(undefined1 *)(plVar13 + 2) = 1;
    return plVar13;
  }
  uVar23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar22[0x14],/*STR('TOASTNOTFICATION_JOINLOBBY')*/ uRam0000000003d73540,0);
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0,uVar23,0,0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar29 = lRam0000000003d3f8c0;
  plVar13 = *(long **)(lVar26 + 0x38);
  if ((plVar13 == (long *)0x0) || (5 < (int)plVar13[4])) {
    return plVar13;
  }
  lVar26 = plVar13[2];
  if (lVar26 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar8 = (int)plVar13[4];
    unaff_x19 = plVar13;
    unaff_x20 = lVar29;
    if (iVar8 == *(int *)(lVar26 + 0x18)) {
      iVar2 = iVar8 + 4;
      if (iVar8 + 4 <= iVar8 * 2) {
        iVar2 = iVar8 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (plVar13,iVar2);
      lVar26 = plVar13[2];
      if (lVar26 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)((long)plVar13 + 0x1c) < *(uint *)(lVar26 + 0x18)) {
      lVar26 = lVar26 + (long)(int)*(uint *)((long)plVar13 + 0x1c) * 0x10;
      *(undefined8 *)(lVar26 + 0x20) = uVar23;
      *(undefined8 *)(lVar26 + 0x28) = 0x4020000000000000;
      plVar22 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(lVar29 + 0x18) + 0xc0) + 0x20))(plVar13);
      plVar13[4] = CONCAT44((int)((ulong)plVar13[4] >> 0x20) + 1,(int)plVar13[4] + 1);
      return plVar22;
    }
  }
  uVar23 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar23,0);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_70 = unaff_x20;
  plStack_68 = unaff_x19;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_90,auVar34._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar34._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_a8 = uStack_88;
  uStack_b0 = uStack_90;
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  lVar26 = *(long *)(*(long *)(*(long *)(auVar34._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar26 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar26);
  }
  plVar13 = (long *)func_0x00f78ae0(lVar26,&uStack_b0);
  return plVar13;
}



// ============================================================
// RVA: 0x158b61c | Atlas.FrontEnd.FrontEndScene.RequestLoadBoost
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1592b88 | Atlas.FrontEnd.FrontEndScene.ClearOverrideIP
// ============================================================

void Atlas_FrontEnd_FrontEndScene__ClearOverrideIP(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003eb516d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb516d = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  uVar2 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(param_1);
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar2 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(param_1,uVar2);
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (iVar1 == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 200);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x198))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x1a0));
    return;
  }
  auVar10 = func_0x00f78af4();
  plVar3 = auVar10._8_8_;
  lVar4 = auVar10._0_8_;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar3 != (long *)0x0) && (*plVar3 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    func_0x00f78e5c(plVar3);
    return;
  }
  lVar5 = *(long *)(lVar4 + 0x90);
  if (lVar5 != 0) {
    uVar8 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0x18) <= (int)uVar8) {
        return;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar3,uRam0000000003d5b098);
      lVar7 = *(long *)(lVar4 + 0x90);
      if ((lVar7 == 0) || (lVar5 == 0)) break;
      uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578b8);
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
code_r0x015947cc:
        uVar2 = func_0x00f78b24();
        func_0x00f78ac0(uVar2,0);
        goto code_r0x015947d8;
      }
      lVar9 = (long)(int)uVar8;
      *(undefined8 *)(lVar7 + lVar9 * 0x40 + 0x40) = uVar2;
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar5 == 0)) break;
      uVar8 = uVar8 + 1;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,uVar2,0,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x159312c | Atlas.FrontEnd.FrontEndScene.SetOverrideIP
// ============================================================

void Atlas_FrontEnd_FrontEndScene__SetOverrideIP(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  uVar2 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574();
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar2 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(param_1,uVar2);
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (iVar1 == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 200);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x198))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x1a0));
    return;
  }
  auVar10 = func_0x00f78af4();
  plVar3 = auVar10._8_8_;
  lVar4 = auVar10._0_8_;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar3 != (long *)0x0) && (*plVar3 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    func_0x00f78e5c(plVar3);
    return;
  }
  lVar5 = *(long *)(lVar4 + 0x90);
  if (lVar5 != 0) {
    uVar8 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0x18) <= (int)uVar8) {
        return;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar3,uRam0000000003d5b098);
      lVar7 = *(long *)(lVar4 + 0x90);
      if ((lVar7 == 0) || (lVar5 == 0)) break;
      uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578b8);
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
code_r0x015947cc:
        uVar2 = func_0x00f78b24();
        func_0x00f78ac0(uVar2,0);
        goto code_r0x015947d8;
      }
      lVar9 = (long)(int)uVar8;
      *(undefined8 *)(lVar7 + lVar9 * 0x40 + 0x40) = uVar2;
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar5 == 0)) break;
      uVar8 = uVar8 + 1;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,uVar2,0,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1593158 | Atlas.FrontEnd.FrontEndScene.SetOverrideGenericIP
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__SetOverrideGenericIP
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long extraout_x1;
  code *pcVar13;
  long lVar14;
  int *piVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  code *pcVar20;
  long lVar21;
  code **ppcVar22;
  undefined1 auVar23 [16];
  code *pcStack_88;
  
  lVar7 = /*Atlas.FrontEnd.FrontEndScene$$GetGenericIPDefinition*/ func_0x0159421c();
  if (lVar7 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar7 + 0x18);
    uVar8 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(param_1);
    if ((bRam0000000003eb516e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb516e = 1;
    }
    uVar8 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(param_1,uVar8);
    uVar17 = *(undefined8 *)(param_1 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    plVar10 = *(long **)(param_1 + 200);
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (**(code **)(*plVar10 + 0x198))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x1a0));
      return uVar9;
    }
    auVar23 = func_0x00f78af4();
    plVar10 = auVar23._8_8_;
    uVar11 = auVar23._0_8_;
    uVar9 = uVar11;
    if ((bRam0000000003eb5170 & 1) == 0) {
      func_0x00f78a20(0x3d578b8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d5b098);
      uVar9 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb5170 = 1;
    }
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
      uVar9 = func_0x00f78e5c(plVar10);
      return uVar9;
    }
    lVar7 = *(long *)(uVar11 + 0x90);
    if (lVar7 != 0) {
      uVar19 = 0;
      while( true ) {
        if (*(int *)(lVar7 + 0x18) <= (int)uVar19) {
          return uVar9;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar10,uRam0000000003d5b098);
        lVar18 = *(long *)(uVar11 + 0x90);
        if ((lVar18 == 0) || (lVar7 == 0)) break;
        uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d578b8);
        if (*(uint *)(lVar18 + 0x18) <= uVar19) {
code_r0x015947cc:
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto code_r0x015947d8;
        }
        lVar21 = (long)(int)uVar19;
        *(undefined8 *)(lVar18 + lVar21 * 0x40 + 0x40) = uVar8;
        lVar7 = *(long *)(uVar11 + 0x90);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x015947cc;
        lVar7 = *(long *)(lVar7 + lVar21 * 0x40 + 0x40);
        if (lVar7 == 0) break;
        /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar7,0);
        lVar7 = *(long *)(uVar11 + 0x90);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x015947cc;
        lVar7 = *(long *)(lVar7 + lVar21 * 0x40 + 0x40);
        if (lVar7 == 0) break;
        uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
        lVar7 = *(long *)(uVar11 + 0x90);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto code_r0x015947cc;
        lVar7 = *(long *)(lVar7 + lVar21 * 0x40 + 0x20);
        if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) ||
           (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0), lVar7 == 0)) break;
        uVar19 = uVar19 + 1;
        uVar9 = /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar7,uVar8,0,0);
        lVar7 = *(long *)(uVar11 + 0x90);
        if (lVar7 == 0) break;
      }
    }
    uVar9 = func_0x00f78af4();
    return uVar9;
  }
  auVar23 = func_0x00f78af4();
  lVar7 = auVar23._0_8_;
  if ((bRam0000000003eb5160 & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d2dc18);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d21688);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d21a10);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5160 = 1;
  }
  if (*(char *)(lVar7 + 0xd0) == '\0') {
LAB_0159325c:
    if (((*(long *)(lVar7 + 0x90) != 0) &&
        (lVar18 = *(long *)(*(long *)(lVar7 + 0x90) + 0x10), lVar18 != 0)) &&
       (param_3 = puRam0000000003d57278, lVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,auVar23._8_8_), lVar18 != 0
       )) {
      uVar8 = *(undefined8 *)(lVar18 + 0x30);
      lVar21 = func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
      Atlas_FrontEnd_EventInfo___ctor();
      if (lVar21 != 0) {
        *(undefined4 *)(lVar21 + 0x10) = 3;
        *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(lVar18 + 0x28);
        *(undefined8 *)(lVar21 + 0x20) = *(undefined8 *)(lVar18 + 0x38);
        uVar4 = *(undefined4 *)(lVar18 + 0x58);
        *(undefined4 *)(lVar21 + 0x28) = uVar4;
        if (((*(byte *)(/*Atlas.Contexts.FrontEndContextSingleplayerState_TypeInfo*/ lRam0000000003d21a10 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.FrontEndContextSingleplayerState_TypeInfo*/ lRam0000000003d21a10 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = Atlas_Contexts_FrontEndContextSingleplayerState__GetDuration(uVar4,uVar8);
        *(undefined4 *)(lVar21 + 0x2c) = uVar4;
        *(long *)(lVar21 + 0x70) = lVar18;
        uVar17 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
        param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar17,lVar21,1,0);
        uVar8 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
        pcVar16 = *(code **)(lVar7 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
        if (pcVar16 != (code *)0x0) {
          pcStack_88 = pcVar16;
          lVar7 = *(long *)(pcVar16 + 0x68);
          if (lVar7 == 0) {
            ppcVar22 = &pcStack_88;
            lVar18 = 1;
          }
          else {
            lVar18 = *(long *)(lVar7 + 0x18);
            if (lVar18 == 0) {
              return (ulong)pcVar16;
            }
            ppcVar22 = (code **)(lVar7 + 0x20);
          }
          lVar7 = 0;
          do {
            pcVar13 = ppcVar22[lVar7];
            pcVar20 = *(code **)(pcVar13 + 0x10);
            plVar1 = *(long **)(pcVar13 + 0x20);
            lVar21 = *(long *)(pcVar13 + 0x28);
            if (*(short *)(lVar21 + 0x48) == -1) {
              func_0x00f78ad8(lVar21);
            }
            iVar5 = func_0x00f78a4c(lVar21);
            bVar3 = *(char *)(lVar21 + 0x4a) == '\x03';
            if (iVar5 == 0) {
              if (bVar3) {
                if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
                  uVar9 = (*pcVar20)(plVar10,0,uVar17,lVar21);
                }
                else {
                  if (((*(short *)(lVar21 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                     || (*(long *)(pcVar16 + 0x18) == 0)) goto code_r0x01e7162c;
                  iVar5 = func_0x00f78a44(lVar21);
                  iVar6 = func_0x00f78ec0(lVar21);
                  if (iVar5 == 0) {
                    uVar2 = *(ushort *)(lVar21 + 0x48);
                    if (iVar6 == 0) {
                      lVar21 = *plVar1 + (ulong)uVar2 * 0x10;
                      uVar9 = (**(code **)(lVar21 + 0x138))
                                        (plVar1,plVar10,0,uVar17,*(undefined8 *)(lVar21 + 0x140));
                      goto code_r0x01e71750;
                    }
                    lVar21 = func_0x00f78a48(lVar21);
                    lVar14 = *plVar1;
                    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar9 != 0) {
                      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == lVar21) {
                          puVar12 = (undefined8 *)
                                    (lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                          goto code_r0x01e718f4;
                        }
                        piVar15 = piVar15 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar21,(ulong)uVar2);
code_r0x01e718f4:
                    pcVar13 = (code *)*puVar12;
                    puVar12 = (undefined8 *)puVar12[1];
                  }
                  else {
                    if (iVar6 == 0) {
                      uVar8 = *(undefined8 *)
                               (*plVar1 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar14 = *plVar1;
                      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar9 != 0) {
                        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)(lVar21 + 0x18)) {
                            lVar14 = lVar14 + (long)(int)(*piVar15 +
                                                         (uint)*(ushort *)(lVar21 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e718cc;
                          }
                          piVar15 = piVar15 + 4;
                          uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                      }
                      lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                      uVar8 = *(undefined8 *)(lVar14 + 8);
                    }
                    puVar12 = (undefined8 *)func_0x00f78acc(uVar8,lVar21);
                    pcVar13 = (code *)*puVar12;
                  }
                  uVar9 = (*pcVar13)(plVar1,plVar10,0,uVar17,puVar12);
                }
              }
              else {
                if ((*(short *)(lVar21 + 0x48) == -1) || (*(long *)(pcVar16 + 0x18) == 0))
                goto code_r0x01e7173c;
                iVar5 = func_0x00f78a44(lVar21);
                iVar6 = func_0x00f78ec0(lVar21);
                if (iVar5 == 0) {
                  uVar2 = *(ushort *)(lVar21 + 0x48);
                  if (iVar6 == 0) {
                    lVar21 = *plVar10 + (ulong)uVar2 * 0x10;
                    uVar9 = (**(code **)(lVar21 + 0x138))
                                      (plVar10,0,uVar17,*(undefined8 *)(lVar21 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar21 = func_0x00f78a48(lVar21);
                  lVar14 = *plVar10;
                  uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar9 != 0) {
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == lVar21) {
                        puVar12 = (undefined8 *)
                                  (lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e71880;
                      }
                      piVar15 = piVar15 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar10,lVar21,(ulong)uVar2);
code_r0x01e71880:
                  pcVar13 = (code *)*puVar12;
                  puVar12 = (undefined8 *)puVar12[1];
                }
                else {
                  if (iVar6 == 0) {
                    uVar8 = *(undefined8 *)
                             (*plVar10 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar14 = *plVar10;
                    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar9 != 0) {
                      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)(lVar21 + 0x18)) {
                          lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar21 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71858;
                        }
                        piVar15 = piVar15 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    lVar14 = func_0x00fac1f0(plVar10);
code_r0x01e71858:
                    uVar8 = *(undefined8 *)(lVar14 + 8);
                  }
                  puVar12 = (undefined8 *)func_0x00f78acc(uVar8,lVar21);
                  pcVar13 = (code *)*puVar12;
                }
                uVar9 = (*pcVar13)(plVar10,0,uVar17,puVar12);
              }
            }
            else {
              if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
              uVar9 = (*pcVar20)(plVar1,plVar10,0,uVar17,lVar21);
            }
code_r0x01e71750:
            lVar7 = lVar7 + 1;
            if (lVar7 == lVar18) {
              return uVar9;
            }
          } while( true );
        }
      }
    }
  }
  else if (*(long *)(lVar7 + 0xb0) != 0) {
    Atlas_FrontEnd_FrontEndScene__ClearOverrideIP();
    *(undefined1 *)(lVar7 + 0xd0) = 0;
    goto LAB_0159325c;
  }
  uVar4 = func_0x00f78af4();
  switch(uVar4) {
  case 0:
    if (extraout_x1 == 0) goto code_r0x01593400;
    uVar9 = (ulong)*(uint *)(extraout_x1 + 0x4c);
    break;
  case 1:
    if (extraout_x1 == 0) goto code_r0x01593400;
    uVar9 = (ulong)*(uint *)(extraout_x1 + 0x50);
    break;
  case 2:
    if (extraout_x1 == 0) goto code_r0x01593400;
    uVar9 = (ulong)*(uint *)(extraout_x1 + 0x54);
    break;
  case 0xffffffff:
    if (extraout_x1 == 0) {
code_r0x01593400:
      uVar9 = func_0x00f78af4();
      pcStack_88 = Atlas_Contexts_FrontEndContextSingleplayerState___ctor;
      if ((bRam0000000003eb5161 & 1) == 0) {
        func_0x00f78a20(0x3d40620);
        bRam0000000003eb5161 = 1;
      }
      if (uVar9 != 0) {
        return uVar9;
      }
      auVar23 = func_0x00f78af4(0,uRam0000000003d40620);
      uVar9 = auVar23._0_8_;
      *(undefined8 *)(uVar9 + 0x10) = *param_3;
      *(long *)(uVar9 + 0x20) = auVar23._8_8_;
      *(undefined8 **)(uVar9 + 0x28) = param_3;
      return uVar9;
    }
    uVar9 = (ulong)*(uint *)(extraout_x1 + 0x48);
    break;
  default:
    uVar9 = 0;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x1593574 | Atlas.FrontEnd.FrontEndScene.get_CurrentIP
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__get_CurrentIP(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5164 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb5164 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar3,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
  lVar1 = 0xc0;
  if (iVar2 == 0) {
    lVar1 = 0xb8;
  }
  return *(undefined8 *)(param_1 + lVar1);
}



// ============================================================
// RVA: 0x1593608 | Atlas.FrontEnd.FrontEndScene.get_IsInited
// ============================================================

undefined1 Atlas_FrontEnd_FrontEndScene__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x1593610 | Atlas.FrontEnd.FrontEndScene.get_FrontEndCamera
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__get_FrontEndCamera(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1593618 | Atlas.FrontEnd.FrontEndScene.get_LightWorld
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndScene__get_LightWorld(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1593620 | Atlas.FrontEnd.FrontEndScene.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0159376c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01593770) */
/* WARNING: Removing unreachable block (ram,0x01593778) */
/* WARNING: Removing unreachable block (ram,0x01593784) */
/* WARNING: Removing unreachable block (ram,0x015937a8) */
/* WARNING: Removing unreachable block (ram,0x015937b0) */
/* WARNING: Removing unreachable block (ram,0x015937bc) */
/* WARNING: Removing unreachable block (ram,0x015937c0) */
/* WARNING: Removing unreachable block (ram,0x015937cc) */
/* WARNING: Removing unreachable block (ram,0x015937d8) */
/* WARNING: Removing unreachable block (ram,0x015937f0) */
/* WARNING: Removing unreachable block (ram,0x015937fc) */
/* WARNING: Removing unreachable block (ram,0x01593814) */
/* WARNING: Removing unreachable block (ram,0x01593820) */
/* WARNING: Removing unreachable block (ram,0x0159382c) */
/* WARNING: Removing unreachable block (ram,0x01593898) */
/* WARNING: Removing unreachable block (ram,0x0159389c) */
/* WARNING: Removing unreachable block (ram,0x015938a4) */
/* WARNING: Removing unreachable block (ram,0x015938ac) */
/* WARNING: Removing unreachable block (ram,0x015938b4) */
/* WARNING: Removing unreachable block (ram,0x015938c0) */
/* WARNING: Removing unreachable block (ram,0x015938cc) */
/* WARNING: Removing unreachable block (ram,0x01593858) */
/* WARNING: Removing unreachable block (ram,0x0159385c) */
/* WARNING: Removing unreachable block (ram,0x01593864) */
/* WARNING: Removing unreachable block (ram,0x0159386c) */
/* WARNING: Removing unreachable block (ram,0x01593874) */
/* WARNING: Removing unreachable block (ram,0x01593880) */
/* WARNING: Removing unreachable block (ram,0x0159388c) */
/* WARNING: Removing unreachable block (ram,0x015938d4) */
/* WARNING: Removing unreachable block (ram,0x015938e4) */
/* WARNING: Removing unreachable block (ram,0x015938f0) */

ulong Atlas_FrontEnd_FrontEndScene__Init
                (undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003eb5165 & 1) == 0) {
    func_0x00f78a20(0x3d27668);
    bRam0000000003eb5165 = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndScene.<Init>d__35_TypeInfo*/ uRam0000000003d27668);
  /*Atlas.FrontEnd.FrontEndScene.<Init>d__35$$.ctor*/ func_0x0154efb8(uVar2,0,0);
  if (uVar2 != 0) {
    *(undefined4 *)(uVar2 + 0x78) = param_2;
    *(undefined8 *)(uVar2 + 0x20) = param_1;
    *(undefined8 *)(uVar2 + 0x28) = param_5;
    *(undefined8 *)(uVar2 + 0x50) = param_6;
    *(undefined8 *)(uVar2 + 0x58) = param_7;
    *(long *)(uVar2 + 0x30) = param_4;
    *(undefined8 *)(uVar2 + 0x38) = param_8;
    *(undefined8 *)(uVar2 + 0x40) = param_3;
    *(undefined8 *)(uVar2 + 0x48) = param_9;
    *(undefined8 *)(uVar2 + 0x60) = param_10;
    *(undefined8 *)(uVar2 + 0x68) = param_11;
    *(undefined8 *)(uVar2 + 0x70) = param_12;
    return uVar2;
  }
  auVar10 = func_0x00f78af4();
  auVar12 = auVar10._0_12_;
  puStack_68 = &Atlas_FrontEnd_FrontEndScene__StartPortalExit;
  uStack_a0 = param_5;
  lStack_98 = param_4;
  uStack_90 = param_3;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5166 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb5166 = 1;
  }
  lVar5 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar5 == 0) {
code_r0x01593918:
    func_0x00f78af4();
code_r0x0159391c:
    uVar3 = func_0x00f78b24();
    puVar9 = &Atlas_FrontEnd_FrontEndScene__SetKartVisible;
    auVar11 = func_0x00f78ac0(uVar3,0);
    auVar12 = auVar11._0_12_;
  }
  else {
    if (*(uint *)(lVar5 + 0x18) <= auVar10._8_4_) goto code_r0x0159391c;
    param_4 = (long)(int)auVar10._8_4_;
    lVar5 = *(long *)(lVar5 + param_4 * 0x40 + 0x50);
    if ((lVar5 == 0) || (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 == 0)) goto code_r0x01593918;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
    puVar9 = &UNK_01593770;
  }
  lVar5 = *(long *)(auVar12._0_8_ + 0x90);
  ppuStack_d0 = &puStack_70;
  puStack_c8 = puVar9;
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else if (auVar12._8_4_ < *(uint *)(lVar5 + 0x18)) {
    *(undefined1 *)(lVar5 + (long)(int)auVar12._8_4_ * 0x40 + 0x38) = 1;
    return auVar12._0_8_;
  }
  uVar3 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar3,0);
  uVar7 = auVar12._8_4_;
  uVar4 = auVar12._0_8_;
  uStack_f8 = 0x3eb5000;
  puStack_d8 = &Atlas_FrontEnd_FrontEndScene__StartPortalEnter;
  uVar2 = uVar4;
  uStack_110 = param_5;
  lStack_108 = param_4;
  uStack_100 = param_3;
  puStack_e0 = (undefined1 *)&ppuStack_d0;
  auStack_f0 = auVar10;
  if ((bRam0000000003eb5167 & 1) == 0) {
    puStack_e0 = (undefined1 *)&ppuStack_d0;
    uVar2 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb5167 = 1;
  }
  lVar5 = *(long *)(uVar4 + 0x90);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
    lVar8 = (long)(int)uVar7;
    lVar5 = lVar5 + lVar8 * 0x40;
    if (*(char *)(lVar5 + 0x38) == '\0') {
      return uVar2;
    }
    lVar5 = *(long *)(lVar5 + 0x50);
    if (lVar5 != 0) {
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
      if (lVar5 != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
        lVar5 = *(long *)(uVar4 + 0x90);
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
          *(undefined4 *)(lVar5 + lVar8 * 0x40 + 0x48) = 1;
          lVar6 = *(long *)(uVar4 + 0x58);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
            lVar5 = *(long *)(uVar4 + 0x90);
            if (lVar5 == 0) goto code_r0x01593b98;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
          lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x50);
          if (lVar5 != 0) {
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xb8);
            lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
            if (lVar5 != 0) {
              /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
              if (lVar6 != 0) {
                /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar6,uVar3,0);
                lVar5 = *(long *)(uVar4 + 0x90);
                if (lVar5 != 0) {
                  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
                  lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
                  if (lVar5 != 0) {
                    uStack_128 = *(undefined8 *)(lVar5 + 0x50);
                    uStack_130 = *(undefined8 *)(lVar5 + 0x48);
                    uStack_118 = *(undefined8 *)(lVar5 + 0x60);
                    uStack_120 = *(undefined8 *)(lVar5 + 0x58);
                    iVar1 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_130,0);
                    lVar5 = *(long *)(uVar4 + 0x58);
                    if (iVar1 == 0) {
                      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = *(long *)(uVar4 + 0x90);
                      if (lVar6 != 0) {
                        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593b9c;
                        lVar8 = *(long *)(lVar6 + lVar8 * 0x40 + 0x50);
                        if (lVar8 != 0) {
                          uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xe0);
                          goto code_r0x01593b54;
                        }
                      }
                    }
                    else {
                      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar6 = *(long *)(uVar4 + 0x90);
                      if (lVar6 != 0) {
                        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593b9c;
                        lVar8 = *(long *)(lVar6 + lVar8 * 0x40 + 0x50);
                        if (lVar8 != 0) {
                          uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 200);
code_r0x01593b54:
                          lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
                          if (lVar8 != 0) {
                            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
                            if (lVar5 != 0) {
                              uVar2 = /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar5,uVar3,0);
                              return uVar2;
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
code_r0x01593b98:
  func_0x00f78af4();
code_r0x01593b9c:
  uVar3 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar3,0);
  uVar4 = auVar10._0_8_;
  uVar2 = uVar4;
  if ((bRam0000000003eb516f & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb516f = 1;
  }
  lVar5 = *(long *)(uVar4 + 0x90);
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
        return uVar2;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
code_r0x01593dd0:
        uVar3 = func_0x00f78b24();
        lVar5 = func_0x00f78ac0(uVar3,0);
        return (ulong)(*(long *)(lVar5 + 0xb0) != 0);
      }
      lVar8 = (long)(int)uVar7;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) break;
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
      lVar6 = *(long *)(uVar4 + 0x90);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593dd0;
      if (lVar5 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,*(undefined1 *)(lVar6 + lVar8 * 0x40 + 0x38),0);
      lVar5 = *(long *)(uVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) break;
      lVar5 = *(long *)(lVar5 + 0x108);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
      if (iVar1 != 0) {
        if (lVar5 == 0) break;
        Atlas_Gameplay_Kart_KartVisualBehaviour__SetEngineRunningEnabled(lVar5,0,0);
      }
      lVar5 = *(long *)(uVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if (lVar5 == 0) break;
      Atlas_Gameplay_Kart_KartComposite__Update(lVar5,*auVar10._8_8_,0);
      lVar5 = *(long *)(uVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      uVar3 = *(undefined8 *)(lVar5 + lVar8 * 0x40 + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
      if (iVar1 != 0) {
        lVar5 = *(long *)(uVar4 + 0x90);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
        lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x40);
        if (lVar5 == 0) break;
        lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
        lVar6 = *(long *)(uVar4 + 0x90);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593dd0;
        if (lVar5 == 0) break;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,*(undefined1 *)(lVar6 + lVar8 * 0x40 + 0x38),0);
      }
      lVar5 = *(long *)(uVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x28);
      if (lVar5 == 0) break;
      uVar2 = Atlas_Gameplay_Kart_KartPartLoader__Update(lVar5,*auVar10._8_8_,0);
      uVar7 = uVar7 + 1;
      lVar5 = *(long *)(uVar4 + 0x90);
      if (lVar5 == 0) break;
    } while( true );
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x15936e8 | Atlas.FrontEnd.FrontEndScene.StartPortalExit
// ============================================================

/* WARNING: Possible PIC construction at 0x0159376c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01593770) */
/* WARNING: Removing unreachable block (ram,0x01593778) */
/* WARNING: Removing unreachable block (ram,0x01593784) */
/* WARNING: Removing unreachable block (ram,0x015937a8) */
/* WARNING: Removing unreachable block (ram,0x015937b0) */
/* WARNING: Removing unreachable block (ram,0x015937bc) */
/* WARNING: Removing unreachable block (ram,0x015937c0) */
/* WARNING: Removing unreachable block (ram,0x015937cc) */
/* WARNING: Removing unreachable block (ram,0x015937d8) */
/* WARNING: Removing unreachable block (ram,0x015937f0) */
/* WARNING: Removing unreachable block (ram,0x015937fc) */
/* WARNING: Removing unreachable block (ram,0x01593814) */
/* WARNING: Removing unreachable block (ram,0x01593820) */
/* WARNING: Removing unreachable block (ram,0x0159382c) */
/* WARNING: Removing unreachable block (ram,0x01593898) */
/* WARNING: Removing unreachable block (ram,0x0159389c) */
/* WARNING: Removing unreachable block (ram,0x015938a4) */
/* WARNING: Removing unreachable block (ram,0x015938ac) */
/* WARNING: Removing unreachable block (ram,0x015938b4) */
/* WARNING: Removing unreachable block (ram,0x015938c0) */
/* WARNING: Removing unreachable block (ram,0x015938cc) */
/* WARNING: Removing unreachable block (ram,0x01593858) */
/* WARNING: Removing unreachable block (ram,0x0159385c) */
/* WARNING: Removing unreachable block (ram,0x01593864) */
/* WARNING: Removing unreachable block (ram,0x0159386c) */
/* WARNING: Removing unreachable block (ram,0x01593874) */
/* WARNING: Removing unreachable block (ram,0x01593880) */
/* WARNING: Removing unreachable block (ram,0x0159388c) */
/* WARNING: Removing unreachable block (ram,0x015938d4) */
/* WARNING: Removing unreachable block (ram,0x015938e4) */
/* WARNING: Removing unreachable block (ram,0x015938f0) */

ulong Atlas_FrontEnd_FrontEndScene__StartPortalExit(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  auVar10._8_4_ = param_2;
  auVar10._0_8_ = param_1;
  if ((bRam0000000003eb5166 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb5166 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
LAB_01593918:
    func_0x00f78af4();
LAB_0159391c:
    uVar2 = func_0x00f78b24();
    auVar10 = func_0x00f78ac0(uVar2,0);
  }
  else {
    if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_0159391c;
    lVar5 = *(long *)(lVar5 + (long)(int)param_2 * 0x40 + 0x50);
    if ((lVar5 == 0) || (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 == 0)) goto LAB_01593918;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
  }
  lVar5 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar5 + 0x18)) {
    *(undefined1 *)(lVar5 + (long)(int)auVar10._8_4_ * 0x40 + 0x38) = 1;
    return auVar10._0_8_;
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  uVar7 = auVar10._8_4_;
  uVar3 = auVar10._0_8_;
  uVar4 = uVar3;
  if ((bRam0000000003eb5167 & 1) == 0) {
    uVar4 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb5167 = 1;
  }
  lVar5 = *(long *)(uVar3 + 0x90);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
    lVar8 = (long)(int)uVar7;
    lVar5 = lVar5 + lVar8 * 0x40;
    if (*(char *)(lVar5 + 0x38) == '\0') {
      return uVar4;
    }
    lVar5 = *(long *)(lVar5 + 0x50);
    if ((lVar5 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
        *(undefined4 *)(lVar5 + lVar8 * 0x40 + 0x48) = 1;
        lVar6 = *(long *)(uVar3 + 0x58);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar5 = *(long *)(uVar3 + 0x90);
          if (lVar5 == 0) goto code_r0x01593b98;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
        lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x50);
        if (lVar5 != 0) {
          uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xb8);
          lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          if ((lVar5 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0), lVar6 != 0)) {
            /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar6,uVar2,0);
            lVar5 = *(long *)(uVar3 + 0x90);
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
              lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
              if (lVar5 != 0) {
                uStack_c8 = *(undefined8 *)(lVar5 + 0x50);
                uStack_d0 = *(undefined8 *)(lVar5 + 0x48);
                uStack_b8 = *(undefined8 *)(lVar5 + 0x60);
                uStack_c0 = *(undefined8 *)(lVar5 + 0x58);
                iVar1 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_d0,0);
                lVar5 = *(long *)(uVar3 + 0x58);
                if (iVar1 == 0) {
                  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = *(long *)(uVar3 + 0x90);
                  if (lVar6 != 0) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593b9c;
                    lVar8 = *(long *)(lVar6 + lVar8 * 0x40 + 0x50);
                    if (lVar8 != 0) {
                      uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xe0);
                      goto code_r0x01593b54;
                    }
                  }
                }
                else {
                  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = *(long *)(uVar3 + 0x90);
                  if (lVar6 != 0) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593b9c;
                    lVar8 = *(long *)(lVar6 + lVar8 * 0x40 + 0x50);
                    if (lVar8 != 0) {
                      uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 200);
code_r0x01593b54:
                      lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
                      if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0), lVar5 != 0)) {
                        uVar4 = /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar5,uVar2,0);
                        return uVar4;
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
code_r0x01593b98:
  func_0x00f78af4();
code_r0x01593b9c:
  uVar2 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar2,0);
  uVar3 = auVar9._0_8_;
  uVar4 = uVar3;
  if ((bRam0000000003eb516f & 1) == 0) {
    uVar4 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb516f = 1;
  }
  lVar5 = *(long *)(uVar3 + 0x90);
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
        return uVar4;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
code_r0x01593dd0:
        uVar2 = func_0x00f78b24();
        lVar5 = func_0x00f78ac0(uVar2,0);
        return (ulong)(*(long *)(lVar5 + 0xb0) != 0);
      }
      lVar8 = (long)(int)uVar7;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) break;
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
      lVar6 = *(long *)(uVar3 + 0x90);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593dd0;
      if (lVar5 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,*(undefined1 *)(lVar6 + lVar8 * 0x40 + 0x38),0);
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) break;
      lVar5 = *(long *)(lVar5 + 0x108);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
      if (iVar1 != 0) {
        if (lVar5 == 0) break;
        Atlas_Gameplay_Kart_KartVisualBehaviour__SetEngineRunningEnabled(lVar5,0,0);
      }
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if (lVar5 == 0) break;
      Atlas_Gameplay_Kart_KartComposite__Update(lVar5,*auVar9._8_8_,0);
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      uVar2 = *(undefined8 *)(lVar5 + lVar8 * 0x40 + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
      if (iVar1 != 0) {
        lVar5 = *(long *)(uVar3 + 0x90);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
        lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x40);
        if (lVar5 == 0) break;
        lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
        lVar6 = *(long *)(uVar3 + 0x90);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593dd0;
        if (lVar5 == 0) break;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,*(undefined1 *)(lVar6 + lVar8 * 0x40 + 0x38),0);
      }
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x28);
      if (lVar5 == 0) break;
      uVar4 = Atlas_Gameplay_Kart_KartPartLoader__Update(lVar5,*auVar9._8_8_,0);
      uVar7 = uVar7 + 1;
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
    } while( true );
  }
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x1593928 | Atlas.FrontEnd.FrontEndScene.SetKartVisible
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__SetKartVisible(ulong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar5 + 0x18)) {
    *(undefined1 *)(lVar5 + (long)(int)param_2 * 0x40 + 0x38) = 1;
    return param_1;
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  uVar7 = auVar10._8_4_;
  uVar3 = auVar10._0_8_;
  uVar4 = uVar3;
  if ((bRam0000000003eb5167 & 1) == 0) {
    uVar4 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb5167 = 1;
  }
  lVar5 = *(long *)(uVar3 + 0x90);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
    lVar8 = (long)(int)uVar7;
    lVar5 = lVar5 + lVar8 * 0x40;
    if (*(char *)(lVar5 + 0x38) == '\0') {
      return uVar4;
    }
    lVar5 = *(long *)(lVar5 + 0x50);
    if ((lVar5 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
        *(undefined4 *)(lVar5 + lVar8 * 0x40 + 0x48) = 1;
        lVar6 = *(long *)(uVar3 + 0x58);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar5 = *(long *)(uVar3 + 0x90);
          if (lVar5 == 0) goto code_r0x01593b98;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
        lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x50);
        if (lVar5 != 0) {
          uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xb8);
          lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          if ((lVar5 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0), lVar6 != 0)) {
            /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar6,uVar2,0);
            lVar5 = *(long *)(uVar3 + 0x90);
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593b9c;
              lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
              if (lVar5 != 0) {
                uStack_68 = *(undefined8 *)(lVar5 + 0x50);
                uStack_70 = *(undefined8 *)(lVar5 + 0x48);
                uStack_58 = *(undefined8 *)(lVar5 + 0x60);
                uStack_60 = *(undefined8 *)(lVar5 + 0x58);
                iVar1 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_70,0);
                lVar5 = *(long *)(uVar3 + 0x58);
                if (iVar1 == 0) {
                  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = *(long *)(uVar3 + 0x90);
                  if (lVar6 != 0) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593b9c;
                    lVar8 = *(long *)(lVar6 + lVar8 * 0x40 + 0x50);
                    if (lVar8 != 0) {
                      uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xe0);
                      goto code_r0x01593b54;
                    }
                  }
                }
                else {
                  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar6 = *(long *)(uVar3 + 0x90);
                  if (lVar6 != 0) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593b9c;
                    lVar8 = *(long *)(lVar6 + lVar8 * 0x40 + 0x50);
                    if (lVar8 != 0) {
                      uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 200);
code_r0x01593b54:
                      lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
                      if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0), lVar5 != 0)) {
                        uVar4 = /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar5,uVar2,0);
                        return uVar4;
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
code_r0x01593b98:
  func_0x00f78af4();
code_r0x01593b9c:
  uVar2 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar2,0);
  uVar3 = auVar9._0_8_;
  uVar4 = uVar3;
  if ((bRam0000000003eb516f & 1) == 0) {
    uVar4 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb516f = 1;
  }
  lVar5 = *(long *)(uVar3 + 0x90);
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar7) {
        return uVar4;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
code_r0x01593dd0:
        uVar2 = func_0x00f78b24();
        lVar5 = func_0x00f78ac0(uVar2,0);
        return (ulong)(*(long *)(lVar5 + 0xb0) != 0);
      }
      lVar8 = (long)(int)uVar7;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) break;
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
      lVar6 = *(long *)(uVar3 + 0x90);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593dd0;
      if (lVar5 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,*(undefined1 *)(lVar6 + lVar8 * 0x40 + 0x38),0);
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) break;
      lVar5 = *(long *)(lVar5 + 0x108);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
      if (iVar1 != 0) {
        if (lVar5 == 0) break;
        Atlas_Gameplay_Kart_KartVisualBehaviour__SetEngineRunningEnabled(lVar5,0,0);
      }
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x20);
      if (lVar5 == 0) break;
      Atlas_Gameplay_Kart_KartComposite__Update(lVar5,*auVar9._8_8_,0);
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      uVar2 = *(undefined8 *)(lVar5 + lVar8 * 0x40 + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
      if (iVar1 != 0) {
        lVar5 = *(long *)(uVar3 + 0x90);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
        lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x40);
        if (lVar5 == 0) break;
        lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
        lVar6 = *(long *)(uVar3 + 0x90);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto code_r0x01593dd0;
        if (lVar5 == 0) break;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,*(undefined1 *)(lVar6 + lVar8 * 0x40 + 0x38),0);
      }
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x01593dd0;
      lVar5 = *(long *)(lVar5 + lVar8 * 0x40 + 0x28);
      if (lVar5 == 0) break;
      uVar4 = Atlas_Gameplay_Kart_KartPartLoader__Update(lVar5,*auVar9._8_8_,0);
      uVar7 = uVar7 + 1;
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
    } while( true );
  }
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x159396c | Atlas.FrontEnd.FrontEndScene.StartPortalEnter
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__StartPortalEnter(ulong param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  if ((bRam0000000003eb5167 & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb5167 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_01593b9c;
    lVar8 = (long)(int)param_2;
    lVar4 = lVar4 + lVar8 * 0x40;
    if (*(char *)(lVar4 + 0x38) == '\0') {
      return uVar2;
    }
    lVar4 = *(long *)(lVar4 + 0x50);
    if ((lVar4 != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar4 != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_01593b9c;
        *(undefined4 *)(lVar4 + lVar8 * 0x40 + 0x48) = 1;
        lVar5 = *(long *)(param_1 + 0x58);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar4 = *(long *)(param_1 + 0x90);
          if (lVar4 == 0) goto LAB_01593b98;
        }
        if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_01593b9c;
        lVar4 = *(long *)(lVar4 + lVar8 * 0x40 + 0x50);
        if (lVar4 != 0) {
          uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xb8);
          lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
          if ((lVar4 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0), lVar5 != 0)) {
            /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar5,uVar7,0);
            lVar4 = *(long *)(param_1 + 0x90);
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_01593b9c;
              lVar4 = *(long *)(lVar4 + lVar8 * 0x40 + 0x20);
              if (lVar4 != 0) {
                uStack_58 = *(undefined8 *)(lVar4 + 0x50);
                uStack_60 = *(undefined8 *)(lVar4 + 0x48);
                uStack_48 = *(undefined8 *)(lVar4 + 0x60);
                uStack_50 = *(undefined8 *)(lVar4 + 0x58);
                iVar1 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&uStack_60,0);
                lVar4 = *(long *)(param_1 + 0x58);
                if (iVar1 == 0) {
                  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar5 = *(long *)(param_1 + 0x90);
                  if (lVar5 != 0) {
                    if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_01593b9c;
                    lVar8 = *(long *)(lVar5 + lVar8 * 0x40 + 0x50);
                    if (lVar8 != 0) {
                      uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xe0);
                      goto LAB_01593b54;
                    }
                  }
                }
                else {
                  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar5 = *(long *)(param_1 + 0x90);
                  if (lVar5 != 0) {
                    if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_01593b9c;
                    lVar8 = *(long *)(lVar5 + lVar8 * 0x40 + 0x50);
                    if (lVar8 != 0) {
                      uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 200);
LAB_01593b54:
                      lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
                      if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0), lVar4 != 0)) {
                        uVar2 = /*Core.Audio.AudioManager$$PlayOneShot*/ func_0x01639d18(lVar4,uVar7,0);
                        return uVar2;
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
LAB_01593b98:
  func_0x00f78af4();
LAB_01593b9c:
  uVar7 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar7,0);
  uVar3 = auVar9._0_8_;
  uVar2 = uVar3;
  if ((bRam0000000003eb516f & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb516f = 1;
  }
  lVar4 = *(long *)(uVar3 + 0x90);
  if (lVar4 != 0) {
    uVar6 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar6) {
        return uVar2;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
code_r0x01593dd0:
        uVar7 = func_0x00f78b24();
        lVar4 = func_0x00f78ac0(uVar7,0);
        return (ulong)(*(long *)(lVar4 + 0xb0) != 0);
      }
      lVar8 = (long)(int)uVar6;
      lVar4 = *(long *)(lVar4 + lVar8 * 0x40 + 0x20);
      if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) break;
      lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
      lVar5 = *(long *)(uVar3 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) goto code_r0x01593dd0;
      if (lVar4 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,*(undefined1 *)(lVar5 + lVar8 * 0x40 + 0x38),0);
      lVar4 = *(long *)(uVar3 + 0x90);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_r0x01593dd0;
      lVar4 = *(long *)(lVar4 + lVar8 * 0x40 + 0x20);
      if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) break;
      lVar4 = *(long *)(lVar4 + 0x108);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
      if (iVar1 != 0) {
        if (lVar4 == 0) break;
        Atlas_Gameplay_Kart_KartVisualBehaviour__SetEngineRunningEnabled(lVar4,0,0);
      }
      lVar4 = *(long *)(uVar3 + 0x90);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_r0x01593dd0;
      lVar4 = *(long *)(lVar4 + lVar8 * 0x40 + 0x20);
      if (lVar4 == 0) break;
      Atlas_Gameplay_Kart_KartComposite__Update(lVar4,*auVar9._8_8_,0);
      lVar4 = *(long *)(uVar3 + 0x90);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_r0x01593dd0;
      uVar7 = *(undefined8 *)(lVar4 + lVar8 * 0x40 + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
      if (iVar1 != 0) {
        lVar4 = *(long *)(uVar3 + 0x90);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_r0x01593dd0;
        lVar4 = *(long *)(lVar4 + lVar8 * 0x40 + 0x40);
        if (lVar4 == 0) break;
        lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
        lVar5 = *(long *)(uVar3 + 0x90);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto code_r0x01593dd0;
        if (lVar4 == 0) break;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,*(undefined1 *)(lVar5 + lVar8 * 0x40 + 0x38),0);
      }
      lVar4 = *(long *)(uVar3 + 0x90);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_r0x01593dd0;
      lVar4 = *(long *)(lVar4 + lVar8 * 0x40 + 0x28);
      if (lVar4 == 0) break;
      uVar2 = Atlas_Gameplay_Kart_KartPartLoader__Update(lVar4,*auVar9._8_8_,0);
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)(uVar3 + 0x90);
      if (lVar4 == 0) break;
    } while( true );
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x1593ba8 | Atlas.FrontEnd.FrontEndScene.UpdateKarts
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__UpdateKarts(ulong param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  uVar2 = param_1;
  if ((bRam0000000003eb516f & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb516f = 1;
  }
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 == 0) {
LAB_01593db8:
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  uVar6 = 0;
  do {
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar6) {
      return uVar2;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_01593dd0:
      uVar5 = func_0x00f78b24();
      lVar3 = func_0x00f78ac0(uVar5,0);
      return (ulong)(*(long *)(lVar3 + 0xb0) != 0);
    }
    lVar7 = (long)(int)uVar6;
    lVar3 = *(long *)(lVar3 + lVar7 * 0x40 + 0x20);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x18), lVar3 == 0)) goto LAB_01593db8;
    lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
    lVar4 = *(long *)(param_1 + 0x90);
    if (lVar4 == 0) goto LAB_01593db8;
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_01593dd0;
    if (lVar3 == 0) goto LAB_01593db8;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,*(undefined1 *)(lVar4 + lVar7 * 0x40 + 0x38),0);
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) goto LAB_01593db8;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_01593dd0;
    lVar3 = *(long *)(lVar3 + lVar7 * 0x40 + 0x20);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_01593db8;
    lVar3 = *(long *)(lVar3 + 0x108);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
    if (iVar1 != 0) {
      if (lVar3 == 0) goto LAB_01593db8;
      Atlas_Gameplay_Kart_KartVisualBehaviour__SetEngineRunningEnabled(lVar3,0,0);
    }
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) goto LAB_01593db8;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_01593dd0;
    lVar3 = *(long *)(lVar3 + lVar7 * 0x40 + 0x20);
    if (lVar3 == 0) goto LAB_01593db8;
    Atlas_Gameplay_Kart_KartComposite__Update(lVar3,*param_2,0);
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) goto LAB_01593db8;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_01593dd0;
    uVar5 = *(undefined8 *)(lVar3 + lVar7 * 0x40 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x90);
      if (lVar3 == 0) goto LAB_01593db8;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_01593dd0;
      lVar3 = *(long *)(lVar3 + lVar7 * 0x40 + 0x40);
      if (lVar3 == 0) goto LAB_01593db8;
      lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 == 0) goto LAB_01593db8;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_01593dd0;
      if (lVar3 == 0) goto LAB_01593db8;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,*(undefined1 *)(lVar4 + lVar7 * 0x40 + 0x38),0);
    }
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) goto LAB_01593db8;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_01593dd0;
    lVar3 = *(long *)(lVar3 + lVar7 * 0x40 + 0x28);
    if (lVar3 == 0) goto LAB_01593db8;
    uVar2 = Atlas_Gameplay_Kart_KartPartLoader__Update(lVar3,*param_2,0);
    uVar6 = uVar6 + 1;
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 == 0) goto LAB_01593db8;
  } while( true );
}



// ============================================================
// RVA: 0x1593ddc | Atlas.FrontEnd.FrontEndScene.get_IsSceneChanging
// ============================================================

bool Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(long param_1)

{
  return *(long *)(param_1 + 0xb0) != 0;
}



// ============================================================
// RVA: 0x1593dec | Atlas.FrontEnd.FrontEndScene.LateUpdateKarts
// ============================================================

/* WARNING: Possible PIC construction at 0x015945a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01594204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015945a8) */
/* WARNING: Removing unreachable block (ram,0x015945bc) */
/* WARNING: Removing unreachable block (ram,0x015945c4) */
/* WARNING: Removing unreachable block (ram,0x015945c8) */
/* WARNING: Removing unreachable block (ram,0x015945f8) */
/* WARNING: Removing unreachable block (ram,0x015945d8) */
/* WARNING: Removing unreachable block (ram,0x01594608) */
/* WARNING: Removing unreachable block (ram,0x01594638) */
/* WARNING: Removing unreachable block (ram,0x01594670) */
/* WARNING: Removing unreachable block (ram,0x01594674) */
/* WARNING: Removing unreachable block (ram,0x0159468c) */
/* WARNING: Removing unreachable block (ram,0x01594694) */
/* WARNING: Removing unreachable block (ram,0x015946b0) */
/* WARNING: Removing unreachable block (ram,0x015946bc) */
/* WARNING: Removing unreachable block (ram,0x015946c8) */
/* WARNING: Removing unreachable block (ram,0x015946d0) */
/* WARNING: Removing unreachable block (ram,0x015946d4) */
/* WARNING: Removing unreachable block (ram,0x015946e8) */
/* WARNING: Removing unreachable block (ram,0x015946ec) */
/* WARNING: Removing unreachable block (ram,0x01594700) */
/* WARNING: Removing unreachable block (ram,0x01594714) */
/* WARNING: Removing unreachable block (ram,0x01594720) */
/* WARNING: Removing unreachable block (ram,0x0159472c) */
/* WARNING: Removing unreachable block (ram,0x0159473c) */
/* WARNING: Removing unreachable block (ram,0x01594748) */
/* WARNING: Removing unreachable block (ram,0x01594754) */
/* WARNING: Removing unreachable block (ram,0x01594764) */
/* WARNING: Removing unreachable block (ram,0x015947cc) */
/* WARNING: Removing unreachable block (ram,0x015947d8) */
/* WARNING: Removing unreachable block (ram,0x01594770) */
/* WARNING: Removing unreachable block (ram,0x0159477c) */
/* WARNING: Removing unreachable block (ram,0x01594788) */
/* WARNING: Removing unreachable block (ram,0x01594794) */
/* WARNING: Removing unreachable block (ram,0x015947b0) */
/* WARNING: Removing unreachable block (ram,0x015947b4) */
/* WARNING: Removing unreachable block (ram,0x015945e0) */
/* WARNING: Removing unreachable block (ram,0x01595b44) */

long * Atlas_FrontEnd_FrontEndScene__LateUpdateKarts(long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x23;
  long lVar21;
  undefined8 unaff_x24;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 *puVar4;
  
  lVar14 = param_1[0x12];
  if (lVar14 != 0) {
    uVar16 = 0;
    uVar20 = 0x20;
    plVar6 = param_1;
    do {
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar16) {
        return plVar6;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar16) {
        uVar7 = func_0x00f78b24();
        lVar14 = func_0x00f78ac0(uVar7,0);
        if ((bRam0000000003eb5169 & 1) == 0) {
          func_0x00f78a20(0x3d27660);
          bRam0000000003eb5169 = 1;
        }
        plVar6 = (long *)func_0x00f78aec(/*Atlas.FrontEnd.FrontEndScene.<DeInit>d__40_TypeInfo*/ uRam0000000003d27660);
        /*Atlas.FrontEnd.FrontEndScene.<DeInit>d__40$$.ctor*/ func_0x0154ec64(plVar6,0,0);
        if (plVar6 != (long *)0x0) {
          plVar6[4] = lVar14;
          return plVar6;
        }
        lVar14 = func_0x00f78af4();
        lVar15 = *(long *)(lVar14 + 0x90);
        uVar16 = 0;
        if (lVar15 == 0) goto code_r0x01593f3c;
        uVar16 = 0;
        lVar19 = 0x28;
        goto code_r0x01593f04;
      }
      plVar6 = (long *)(lVar14 + uVar20);
      if (*plVar6 == 0) break;
      uVar20 = uVar20 + 0x40;
      uVar16 = uVar16 + 1;
      plVar6 = (long *)Atlas_Gameplay_Kart_KartComposite__LateUpdate(*plVar6,*param_2,0);
      lVar14 = param_1[0x12];
    } while (lVar14 != 0);
  }
  plVar6 = (long *)func_0x00f78af4();
  return plVar6;
code_r0x01594558:
  auVar24 = __Unwind_Resume();
  auVar23._8_8_ = auVar24._0_8_;
  auVar23._0_8_ = auVar24._8_8_;
  *(long *)(puVar4 + -0xc0) = lVar14;
  *(long **)(puVar4 + -0xb8) = plVar12;
  *(long *)(puVar4 + -0xb0) = lVar15;
  *(long **)(puVar4 + -0xa8) = plVar6;
  *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x98) = &Atlas_FrontEnd_FrontEndScene__OnIPChanged;
  uVar7 = 0x3eb5000;
  uVar20 = 0x3d23990;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  puVar22 = &UNK_015945a8;
  puVar1 = puVar4 + -0xc0;
  puVar3 = puVar4;
  goto code_r0x01594190;
  while( true ) {
    uVar8 = Atlas_Gameplay_Kart_KartPartLoader__IsAnyPartLoading(*(long *)(lVar15 + lVar19),0);
    if ((uVar8 & 1) != 0) goto code_r0x01593f40;
    lVar19 = lVar19 + 0x40;
    uVar16 = uVar16 + 1;
    lVar15 = *(long *)(lVar14 + 0x90);
    if (lVar15 == 0) break;
code_r0x01593f04:
    uVar18 = *(uint *)(lVar15 + 0x18);
    uVar20 = (ulong)uVar18;
    if ((int)uVar18 <= (int)uVar16) goto code_r0x01593f40;
    if (uVar18 <= uVar16) {
      uVar7 = func_0x00f78b24();
      auVar23 = func_0x00f78ac0(uVar7,0);
      lVar14 = auVar23._0_8_;
      uVar7 = 0x3eb5000;
      if ((bRam0000000003eb516a & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb516a = 1;
      }
      lVar15 = *(long *)(lVar14 + 0x90);
      if (lVar15 == 0) {
code_r0x01594180:
        func_0x00f78af4();
      }
      else {
        uVar16 = (uint)*(undefined8 *)(lVar15 + 0x18);
        uVar18 = auVar23._8_4_;
        if (uVar18 < uVar16) {
          lVar19 = 0x3d23990;
          lVar21 = 0x3d23990;
          uVar20 = (ulong)(int)uVar18;
          lVar9 = *(long *)(lVar15 + uVar20 * 0x40 + 0x20);
          if (lVar9 == 0) {
code_r0x01594094:
            unaff_x23 = lVar21;
            if (uVar16 <= uVar18) goto code_r0x01594184;
            uVar7 = *(undefined8 *)(lVar15 + uVar20 * 0x40 + 0x40);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar6 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
            if ((int)plVar6 == 0) {
              return plVar6;
            }
            lVar15 = *(long *)(lVar14 + 0x90);
            if (lVar15 != 0) {
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x01594184;
              lVar15 = *(long *)(lVar15 + uVar20 * 0x40 + 0x40);
              if (lVar15 != 0) {
                uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar15,0);
                /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar10,0,0);
                lVar15 = *(long *)(lVar14 + 0x90);
                if (lVar15 != 0) {
                  if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x01594184;
                  lVar15 = *(long *)(lVar15 + uVar20 * 0x40 + 0x40);
                  if (lVar15 != 0) {
                    uVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0);
                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    plVar6 = (long *)/*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar7,0);
                    lVar14 = *(long *)(lVar14 + 0x90);
                    if (lVar14 != 0) {
                      if (uVar18 < *(uint *)(lVar14 + 0x18)) {
                        *(undefined8 *)(lVar14 + uVar20 * 0x40 + 0x40) = 0;
                        return plVar6;
                      }
                      goto code_r0x01594184;
                    }
                  }
                }
              }
            }
          }
          else {
            Atlas_Gameplay_Kart_KartComposite__DeInit(lVar9,0);
            lVar15 = *(long *)(lVar14 + 0x90);
            unaff_x23 = lVar19;
            if (lVar15 != 0) {
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x01594184;
              lVar15 = *(long *)(lVar15 + uVar20 * 0x40 + 0x20);
              if (lVar15 != 0) {
                uVar7 = *(undefined8 *)(lVar15 + 0x18);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
                if (iVar5 == 0) {
code_r0x01594078:
                  lVar15 = *(long *)(lVar14 + 0x90);
                  unaff_x23 = lVar21;
                  if (lVar15 != 0) {
                    uVar16 = (uint)*(undefined8 *)(lVar15 + 0x18);
                    if (uVar18 < uVar16) {
                      *(undefined8 *)(lVar15 + uVar20 * 0x40 + 0x20) = 0;
                      goto code_r0x01594094;
                    }
                    goto code_r0x01594184;
                  }
                }
                else {
                  lVar15 = *(long *)(lVar14 + 0x90);
                  unaff_x23 = lVar21;
                  if (lVar15 != 0) {
                    unaff_x23 = lVar19;
                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x01594184;
                    lVar15 = *(long *)(lVar15 + uVar20 * 0x40 + 0x20);
                    unaff_x23 = lVar21;
                    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
                      uVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar7,0);
                      goto code_r0x01594078;
                    }
                  }
                }
              }
            }
          }
          goto code_r0x01594180;
        }
      }
code_r0x01594184:
      uVar10 = func_0x00f78b24();
      puVar22 = &Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric;
      auVar24 = func_0x00f78ac0(uVar10,0);
      puVar1 = &stack0xffffffffffffff30;
      puVar3 = (undefined1 *)register0x00000008;
      goto code_r0x01594190;
    }
    if (*(long *)(lVar15 + lVar19) == 0) break;
  }
code_r0x01593f3c:
  uVar18 = (uint)uVar20;
  func_0x00f78af4();
code_r0x01593f40:
  return (long *)(ulong)((int)uVar18 <= (int)uVar16);
code_r0x01594190:
  puVar4 = puVar1;
  lVar14 = auVar24._0_8_;
  *(undefined1 (*) [16])(puVar4 + -0x20) = auVar23;
  *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0xa0;
  *(undefined **)(puVar4 + -8) = puVar22;
  *(long *)(puVar4 + -0x28) = auVar24._8_8_;
  if ((bRam0000000003eb516b & 1) == 0) {
    func_0x00f78a20(0x3d57298);
    bRam0000000003eb516b = 1;
  }
  uVar8 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar4 + -0x28,0);
  if ((uVar8 & 1) == 0) {
    puVar22 = &UNK_01594208;
    lVar15 = lVar14;
  }
  else {
    if ((*(long *)(lVar14 + 0x38) != 0) &&
       (lVar15 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10), lVar15 != 0)) {
      plVar6 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,*(undefined8 *)(puVar4 + -0x28),uRam0000000003d57298);
      return plVar6;
    }
    puVar22 = &Atlas_FrontEnd_FrontEndScene__GetGenericIPDefinition;
    lVar15 = func_0x00f78af4();
  }
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(long *)(puVar4 + -0x68) = unaff_x23;
  *(ulong *)(puVar4 + -0x60) = uVar20;
  *(undefined8 *)(puVar4 + -0x58) = uVar7;
  *(undefined8 *)(puVar4 + -0x50) = 0x3eb5000;
  *(long *)(puVar4 + -0x48) = lVar14;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = puVar22;
  if ((bRam0000000003eb516c & 1) == 0) {
    func_0x00f78a20(0x3d57578);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d223c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb516c = 1;
  }
  *(undefined8 *)(puVar4 + -0x78) = 0;
  *(undefined4 *)(puVar4 + -0x80) = 0;
  uVar7 = *(undefined8 *)(lVar15 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  if (iVar5 != 0) {
    return *(long **)(lVar15 + 0xd0);
  }
  if ((*(long *)(lVar15 + 0x38) != 0) &&
     (lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10), lVar14 != 0)) {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar14,puVar4 + -0x78,uRam0000000003d57578);
    if (*(long *)(puVar4 + -0x78) != 0) {
      plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar4 + -0x78),uRam0000000003d3fe40);
      if (plVar6 != (long *)0x0) {
        do {
          do {
            lVar14 = *plVar6;
            uVar20 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar20 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x01594390;
                }
                piVar17 = piVar17 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01594390:
            uVar20 = (*(code *)*puVar11)(plVar6,puVar11[1]);
            if ((uVar20 & 1) == 0) {
              plVar12 = (long *)0x0;
              uVar13 = 0x67;
              goto code_r0x01594460;
            }
            lVar14 = *plVar6;
            uVar20 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar20 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x015943ec;
                }
                piVar17 = piVar17 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x015943ec:
            plVar12 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
          } while (plVar12 == (long *)0x0);
        } while (((*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300)) ||
                 (*(long *)(*(long *)(*plVar12 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0)) || ((char)plVar12[5] == '\0'));
        *(long **)(lVar15 + 0xd0) = plVar12;
        uVar13 = 0x69;
code_r0x01594460:
        unaff_x24 = 0;
        unaff_x23 = 0;
        lVar14 = 0;
        *(undefined4 *)(puVar4 + -0x88) = uVar13;
        *(undefined4 *)(puVar4 + -0x80) = 1;
        do {
          if (plVar6 != (long *)0x0) {
            lVar19 = *plVar6;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar20 != 0) {
              piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar11 = (undefined8 *)(lVar19 + (long)*piVar17 * 0x10 + 0x138);
                  goto code_r0x015944c4;
                }
                piVar17 = piVar17 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015944c4:
            (*(code *)*puVar11)(plVar6,puVar11[1]);
          }
          if (lVar14 == 0) {
            if ((int)unaff_x24 != 0) {
              return (long *)0x0;
            }
            if (*(int *)(puVar4 + unaff_x23 * 4 + -0x88) == 0x69) {
              return plVar12;
            }
            return (long *)0x0;
          }
          func_0x00f78ac0(lVar14,0);
          if (extraout_w1 != 1) goto code_r0x01594558;
          plVar12 = (long *)___cxa_begin_catch();
          lVar14 = *plVar12;
          ___cxa_end_catch();
          plVar12 = (long *)0x0;
          unaff_x23 = -1;
          unaff_x24 = 1;
        } while( true );
      }
      goto code_r0x01594514;
    }
  }
  func_0x00f78af4();
code_r0x01594514:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x159451c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1593e6c | Atlas.FrontEnd.FrontEndScene.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x015945a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01594204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015945a8) */
/* WARNING: Removing unreachable block (ram,0x015945bc) */
/* WARNING: Removing unreachable block (ram,0x015945c4) */
/* WARNING: Removing unreachable block (ram,0x015945c8) */
/* WARNING: Removing unreachable block (ram,0x015945f8) */
/* WARNING: Removing unreachable block (ram,0x015945d8) */
/* WARNING: Removing unreachable block (ram,0x01594608) */
/* WARNING: Removing unreachable block (ram,0x01594638) */
/* WARNING: Removing unreachable block (ram,0x01594670) */
/* WARNING: Removing unreachable block (ram,0x01594674) */
/* WARNING: Removing unreachable block (ram,0x0159468c) */
/* WARNING: Removing unreachable block (ram,0x01594694) */
/* WARNING: Removing unreachable block (ram,0x015946b0) */
/* WARNING: Removing unreachable block (ram,0x015946bc) */
/* WARNING: Removing unreachable block (ram,0x015946c8) */
/* WARNING: Removing unreachable block (ram,0x015946d0) */
/* WARNING: Removing unreachable block (ram,0x015946d4) */
/* WARNING: Removing unreachable block (ram,0x015946e8) */
/* WARNING: Removing unreachable block (ram,0x015946ec) */
/* WARNING: Removing unreachable block (ram,0x01594700) */
/* WARNING: Removing unreachable block (ram,0x01594714) */
/* WARNING: Removing unreachable block (ram,0x01594720) */
/* WARNING: Removing unreachable block (ram,0x0159472c) */
/* WARNING: Removing unreachable block (ram,0x0159473c) */
/* WARNING: Removing unreachable block (ram,0x01594748) */
/* WARNING: Removing unreachable block (ram,0x01594754) */
/* WARNING: Removing unreachable block (ram,0x01594764) */
/* WARNING: Removing unreachable block (ram,0x015947cc) */
/* WARNING: Removing unreachable block (ram,0x015947d8) */
/* WARNING: Removing unreachable block (ram,0x01594770) */
/* WARNING: Removing unreachable block (ram,0x0159477c) */
/* WARNING: Removing unreachable block (ram,0x01594788) */
/* WARNING: Removing unreachable block (ram,0x01594794) */
/* WARNING: Removing unreachable block (ram,0x015947b0) */
/* WARNING: Removing unreachable block (ram,0x015947b4) */
/* WARNING: Removing unreachable block (ram,0x015945e0) */
/* WARNING: Removing unreachable block (ram,0x01595b44) */

long * Atlas_FrontEnd_FrontEndScene__DeInit(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  int extraout_w1;
  undefined4 uVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  uint unaff_w22;
  ulong uVar18;
  long unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if ((bRam0000000003eb5169 & 1) == 0) {
    func_0x00f78a20(0x3d27660);
    bRam0000000003eb5169 = 1;
  }
  plVar4 = (long *)func_0x00f78aec(/*Atlas.FrontEnd.FrontEndScene.<DeInit>d__40_TypeInfo*/ uRam0000000003d27660);
  /*Atlas.FrontEnd.FrontEndScene.<DeInit>d__40$$.ctor*/ func_0x0154ec64(plVar4,0,0);
  if (plVar4 != (long *)0x0) {
    plVar4[4] = param_1;
    return plVar4;
  }
  lVar5 = func_0x00f78af4();
  lVar13 = *(long *)(lVar5 + 0x90);
  uVar14 = 0;
  if (lVar13 != 0) {
    uVar14 = 0;
    lVar17 = 0x28;
    do {
      unaff_w22 = *(uint *)(lVar13 + 0x18);
      uVar18 = (ulong)unaff_w22;
      if ((int)unaff_w22 <= (int)uVar14) goto code_r0x01593f40;
      if (unaff_w22 <= uVar14) {
        uVar6 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar6,0);
        lVar5 = auVar22._0_8_;
        uVar6 = 0x3eb5000;
        if ((bRam0000000003eb516a & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb516a = 1;
        }
        lVar13 = *(long *)(lVar5 + 0x90);
        if (lVar13 == 0) {
code_r0x01594180:
          func_0x00f78af4();
        }
        else {
          uVar14 = (uint)*(undefined8 *)(lVar13 + 0x18);
          uVar16 = auVar22._8_4_;
          if (uVar16 < uVar14) {
            lVar17 = 0x3d23990;
            lVar19 = 0x3d23990;
            uVar18 = (ulong)(int)uVar16;
            lVar7 = *(long *)(lVar13 + uVar18 * 0x40 + 0x20);
            if (lVar7 == 0) {
code_r0x01594094:
              unaff_x23 = lVar19;
              if (uVar14 <= uVar16) goto code_r0x01594184;
              uVar6 = *(undefined8 *)(lVar13 + uVar18 * 0x40 + 0x40);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar4 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
              if ((int)plVar4 == 0) {
                return plVar4;
              }
              lVar13 = *(long *)(lVar5 + 0x90);
              if (lVar13 != 0) {
                if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x01594184;
                lVar13 = *(long *)(lVar13 + uVar18 * 0x40 + 0x40);
                if (lVar13 != 0) {
                  uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
                  /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar8,0,0);
                  lVar13 = *(long *)(lVar5 + 0x90);
                  if (lVar13 != 0) {
                    if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x01594184;
                    lVar13 = *(long *)(lVar13 + uVar18 * 0x40 + 0x40);
                    if (lVar13 != 0) {
                      uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar4 = (long *)/*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
                      lVar5 = *(long *)(lVar5 + 0x90);
                      if (lVar5 != 0) {
                        if (uVar16 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + uVar18 * 0x40 + 0x40) = 0;
                          return plVar4;
                        }
                        goto code_r0x01594184;
                      }
                    }
                  }
                }
              }
            }
            else {
              Atlas_Gameplay_Kart_KartComposite__DeInit(lVar7,0);
              lVar13 = *(long *)(lVar5 + 0x90);
              unaff_x23 = lVar17;
              if (lVar13 != 0) {
                if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x01594184;
                lVar13 = *(long *)(lVar13 + uVar18 * 0x40 + 0x20);
                if (lVar13 != 0) {
                  uVar6 = *(undefined8 *)(lVar13 + 0x18);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
                  if (iVar3 == 0) {
code_r0x01594078:
                    lVar13 = *(long *)(lVar5 + 0x90);
                    unaff_x23 = lVar19;
                    if (lVar13 != 0) {
                      uVar14 = (uint)*(undefined8 *)(lVar13 + 0x18);
                      if (uVar16 < uVar14) {
                        *(undefined8 *)(lVar13 + uVar18 * 0x40 + 0x20) = 0;
                        goto code_r0x01594094;
                      }
                      goto code_r0x01594184;
                    }
                  }
                  else {
                    lVar13 = *(long *)(lVar5 + 0x90);
                    unaff_x23 = lVar19;
                    if (lVar13 != 0) {
                      unaff_x23 = lVar17;
                      if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x01594184;
                      lVar13 = *(long *)(lVar13 + uVar18 * 0x40 + 0x20);
                      unaff_x23 = lVar19;
                      if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
                        uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
                        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
                        goto code_r0x01594078;
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x01594180;
          }
        }
code_r0x01594184:
        uVar8 = func_0x00f78b24();
        puVar21 = &Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric;
        auVar23 = func_0x00f78ac0(uVar8,0);
        puVar2 = &stack0xffffffffffffff60;
        goto code_r0x01594190;
      }
      if (*(long *)(lVar13 + lVar17) == 0) break;
      uVar18 = Atlas_Gameplay_Kart_KartPartLoader__IsAnyPartLoading(*(long *)(lVar13 + lVar17),0);
      if ((uVar18 & 1) != 0) goto code_r0x01593f40;
      lVar17 = lVar17 + 0x40;
      uVar14 = uVar14 + 1;
      lVar13 = *(long *)(lVar5 + 0x90);
    } while (lVar13 != 0);
  }
  func_0x00f78af4();
code_r0x01593f40:
  return (long *)(ulong)((int)unaff_w22 <= (int)uVar14);
code_r0x01594558:
  auVar23 = __Unwind_Resume();
  auVar22._8_8_ = auVar23._0_8_;
  auVar22._0_8_ = auVar23._8_8_;
  *(long *)(puVar2 + -0xc0) = lVar5;
  *(long **)(puVar2 + -0xb8) = plVar11;
  *(long *)(puVar2 + -0xb0) = lVar13;
  *(long **)(puVar2 + -0xa8) = plVar4;
  *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x98) = &Atlas_FrontEnd_FrontEndScene__OnIPChanged;
  uVar6 = 0x3eb5000;
  uVar18 = 0x3d23990;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  puVar21 = &UNK_015945a8;
  puVar2 = puVar2 + -0xc0;
code_r0x01594190:
  lVar5 = auVar23._0_8_;
  puVar20 = (undefined1 *)((long)register0x00000008 + -0x70);
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
  *(undefined1 (*) [16])(puVar2 + -0x20) = auVar22;
  *(undefined1 **)(puVar2 + -0x10) = puVar20;
  *(undefined **)(puVar2 + -8) = puVar21;
  *(long *)(puVar2 + -0x28) = auVar23._8_8_;
  if ((bRam0000000003eb516b & 1) == 0) {
    func_0x00f78a20(0x3d57298);
    bRam0000000003eb516b = 1;
  }
  uVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar2 + -0x28,0);
  if ((uVar9 & 1) == 0) {
    puVar21 = &UNK_01594208;
    lVar13 = lVar5;
  }
  else {
    if ((*(long *)(lVar5 + 0x38) != 0) &&
       (lVar13 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10), lVar13 != 0)) {
      plVar4 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,*(undefined8 *)(puVar2 + -0x28),uRam0000000003d57298);
      return plVar4;
    }
    puVar21 = &Atlas_FrontEnd_FrontEndScene__GetGenericIPDefinition;
    lVar13 = func_0x00f78af4();
  }
  *(undefined8 *)(puVar2 + -0x70) = unaff_x24;
  *(long *)(puVar2 + -0x68) = unaff_x23;
  *(ulong *)(puVar2 + -0x60) = uVar18;
  *(undefined8 *)(puVar2 + -0x58) = uVar6;
  *(undefined8 *)(puVar2 + -0x50) = 0x3eb5000;
  *(long *)(puVar2 + -0x48) = lVar5;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = puVar21;
  if ((bRam0000000003eb516c & 1) == 0) {
    func_0x00f78a20(0x3d57578);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d223c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb516c = 1;
  }
  *(undefined8 *)(puVar2 + -0x78) = 0;
  *(undefined4 *)(puVar2 + -0x80) = 0;
  uVar6 = *(undefined8 *)(lVar13 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar3 != 0) {
    return *(long **)(lVar13 + 0xd0);
  }
  if ((*(long *)(lVar13 + 0x38) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar5 != 0)) {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar5,puVar2 + -0x78,uRam0000000003d57578);
    if (*(long *)(puVar2 + -0x78) != 0) {
      plVar4 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar2 + -0x78),uRam0000000003d3fe40);
      if (plVar4 != (long *)0x0) {
        do {
          do {
            lVar5 = *plVar4;
            uVar18 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar18 != 0) {
              piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar10 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x01594390;
                }
                piVar15 = piVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01594390:
            uVar18 = (*(code *)*puVar10)(plVar4,puVar10[1]);
            if ((uVar18 & 1) == 0) {
              plVar11 = (long *)0x0;
              uVar12 = 0x67;
              goto code_r0x01594460;
            }
            lVar5 = *plVar4;
            uVar18 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar18 != 0) {
              piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar10 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x015943ec;
                }
                piVar15 = piVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x015943ec:
            plVar11 = (long *)(*(code *)*puVar10)(plVar4,puVar10[1]);
          } while (plVar11 == (long *)0x0);
        } while (((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0)) || ((char)plVar11[5] == '\0'));
        *(long **)(lVar13 + 0xd0) = plVar11;
        uVar12 = 0x69;
code_r0x01594460:
        unaff_x24 = 0;
        unaff_x23 = 0;
        lVar5 = 0;
        *(undefined4 *)(puVar2 + -0x88) = uVar12;
        *(undefined4 *)(puVar2 + -0x80) = 1;
        do {
          if (plVar4 != (long *)0x0) {
            lVar17 = *plVar4;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar18 != 0) {
              piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar10 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x015944c4;
                }
                piVar15 = piVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015944c4:
            (*(code *)*puVar10)(plVar4,puVar10[1]);
          }
          if (lVar5 == 0) {
            if ((int)unaff_x24 != 0) {
              return (long *)0x0;
            }
            if (*(int *)(puVar2 + unaff_x23 * 4 + -0x88) == 0x69) {
              return plVar11;
            }
            return (long *)0x0;
          }
          func_0x00f78ac0(lVar5,0);
          if (extraout_w1 != 1) goto code_r0x01594558;
          plVar11 = (long *)___cxa_begin_catch();
          lVar5 = *plVar11;
          ___cxa_end_catch();
          plVar11 = (long *)0x0;
          unaff_x23 = -1;
          unaff_x24 = 1;
        } while( true );
      }
      goto code_r0x01594514;
    }
  }
  func_0x00f78af4();
code_r0x01594514:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x159451c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1593ee0 | Atlas.FrontEnd.FrontEndScene.AreAllRequestPartsLoadedAndInstantiated
// ============================================================

/* WARNING: Possible PIC construction at 0x015945a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01594204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015945a8) */
/* WARNING: Removing unreachable block (ram,0x015945bc) */
/* WARNING: Removing unreachable block (ram,0x015945c4) */
/* WARNING: Removing unreachable block (ram,0x015945c8) */
/* WARNING: Removing unreachable block (ram,0x015945f8) */
/* WARNING: Removing unreachable block (ram,0x015945d8) */
/* WARNING: Removing unreachable block (ram,0x01594608) */
/* WARNING: Removing unreachable block (ram,0x01594638) */
/* WARNING: Removing unreachable block (ram,0x01594670) */
/* WARNING: Removing unreachable block (ram,0x01594674) */
/* WARNING: Removing unreachable block (ram,0x0159468c) */
/* WARNING: Removing unreachable block (ram,0x01594694) */
/* WARNING: Removing unreachable block (ram,0x015946b0) */
/* WARNING: Removing unreachable block (ram,0x015946bc) */
/* WARNING: Removing unreachable block (ram,0x015946c8) */
/* WARNING: Removing unreachable block (ram,0x015946d0) */
/* WARNING: Removing unreachable block (ram,0x015946d4) */
/* WARNING: Removing unreachable block (ram,0x015946e8) */
/* WARNING: Removing unreachable block (ram,0x015946ec) */
/* WARNING: Removing unreachable block (ram,0x01594700) */
/* WARNING: Removing unreachable block (ram,0x01594714) */
/* WARNING: Removing unreachable block (ram,0x01594720) */
/* WARNING: Removing unreachable block (ram,0x0159472c) */
/* WARNING: Removing unreachable block (ram,0x0159473c) */
/* WARNING: Removing unreachable block (ram,0x01594748) */
/* WARNING: Removing unreachable block (ram,0x01594754) */
/* WARNING: Removing unreachable block (ram,0x01594764) */
/* WARNING: Removing unreachable block (ram,0x015947cc) */
/* WARNING: Removing unreachable block (ram,0x015947d8) */
/* WARNING: Removing unreachable block (ram,0x01594770) */
/* WARNING: Removing unreachable block (ram,0x0159477c) */
/* WARNING: Removing unreachable block (ram,0x01594788) */
/* WARNING: Removing unreachable block (ram,0x01594794) */
/* WARNING: Removing unreachable block (ram,0x015947b0) */
/* WARNING: Removing unreachable block (ram,0x015947b4) */
/* WARNING: Removing unreachable block (ram,0x015945e0) */
/* WARNING: Removing unreachable block (ram,0x01595b44) */

long * Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int extraout_w1;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint unaff_w20;
  long lVar17;
  uint unaff_w22;
  ulong uVar18;
  long unaff_x23;
  long lVar19;
  undefined8 unaff_x24;
  undefined1 **ppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar12 = *(long *)(param_1 + 0x90);
  if (lVar12 != 0) {
    unaff_w20 = 0;
    lVar17 = 0x28;
    do {
      unaff_w22 = *(uint *)(lVar12 + 0x18);
      uVar18 = (ulong)unaff_w22;
      if ((int)unaff_w22 <= (int)unaff_w20) goto LAB_01593f40;
      if (unaff_w22 <= unaff_w20) {
        uVar4 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar4,0);
        lVar12 = auVar22._0_8_;
        puStack_38 = &Atlas_FrontEnd_FrontEndScene__DestroyKartAndPedestal;
        ppuVar20 = &puStack_40;
        uVar4 = 0x3eb5000;
        puStack_40 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb516a & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb516a = 1;
        }
        lVar17 = *(long *)(lVar12 + 0x90);
        if (lVar17 == 0) {
code_r0x01594180:
          func_0x00f78af4();
        }
        else {
          uVar14 = (uint)*(undefined8 *)(lVar17 + 0x18);
          uVar16 = auVar22._8_4_;
          if (uVar16 < uVar14) {
            lVar13 = 0x3d23990;
            lVar19 = 0x3d23990;
            uVar18 = (ulong)(int)uVar16;
            lVar5 = *(long *)(lVar17 + uVar18 * 0x40 + 0x20);
            if (lVar5 == 0) {
code_r0x01594094:
              unaff_x23 = lVar19;
              if (uVar14 <= uVar16) goto code_r0x01594184;
              uVar4 = *(undefined8 *)(lVar17 + uVar18 * 0x40 + 0x40);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar6 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
              if ((int)plVar6 == 0) {
                return plVar6;
              }
              lVar17 = *(long *)(lVar12 + 0x90);
              if (lVar17 != 0) {
                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto code_r0x01594184;
                lVar17 = *(long *)(lVar17 + uVar18 * 0x40 + 0x40);
                if (lVar17 != 0) {
                  uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0);
                  /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar7,0,0);
                  lVar17 = *(long *)(lVar12 + 0x90);
                  if (lVar17 != 0) {
                    if (*(uint *)(lVar17 + 0x18) <= uVar16) goto code_r0x01594184;
                    lVar17 = *(long *)(lVar17 + uVar18 * 0x40 + 0x40);
                    if (lVar17 != 0) {
                      uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar6 = (long *)/*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar4,0);
                      lVar12 = *(long *)(lVar12 + 0x90);
                      if (lVar12 != 0) {
                        if (uVar16 < *(uint *)(lVar12 + 0x18)) {
                          *(undefined8 *)(lVar12 + uVar18 * 0x40 + 0x40) = 0;
                          return plVar6;
                        }
                        goto code_r0x01594184;
                      }
                    }
                  }
                }
              }
            }
            else {
              Atlas_Gameplay_Kart_KartComposite__DeInit(lVar5,0);
              lVar17 = *(long *)(lVar12 + 0x90);
              unaff_x23 = lVar13;
              if (lVar17 != 0) {
                if (*(uint *)(lVar17 + 0x18) <= uVar16) goto code_r0x01594184;
                lVar17 = *(long *)(lVar17 + uVar18 * 0x40 + 0x20);
                if (lVar17 != 0) {
                  uVar4 = *(undefined8 *)(lVar17 + 0x18);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
                  if (iVar3 == 0) {
code_r0x01594078:
                    lVar17 = *(long *)(lVar12 + 0x90);
                    unaff_x23 = lVar19;
                    if (lVar17 != 0) {
                      uVar14 = (uint)*(undefined8 *)(lVar17 + 0x18);
                      if (uVar16 < uVar14) {
                        *(undefined8 *)(lVar17 + uVar18 * 0x40 + 0x20) = 0;
                        goto code_r0x01594094;
                      }
                      goto code_r0x01594184;
                    }
                  }
                  else {
                    lVar17 = *(long *)(lVar12 + 0x90);
                    unaff_x23 = lVar19;
                    if (lVar17 != 0) {
                      unaff_x23 = lVar13;
                      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto code_r0x01594184;
                      lVar17 = *(long *)(lVar17 + uVar18 * 0x40 + 0x20);
                      unaff_x23 = lVar19;
                      if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
                        uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0);
                        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar4,0);
                        goto code_r0x01594078;
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x01594180;
          }
        }
code_r0x01594184:
        uVar7 = func_0x00f78b24();
        puVar21 = &Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric;
        auVar23 = func_0x00f78ac0(uVar7,0);
        puVar2 = &stack0xffffffffffffff90;
        goto code_r0x01594190;
      }
      if (*(long *)(lVar12 + lVar17) == 0) break;
      uVar18 = Atlas_Gameplay_Kart_KartPartLoader__IsAnyPartLoading(*(long *)(lVar12 + lVar17),0);
      if ((uVar18 & 1) != 0) goto LAB_01593f40;
      lVar17 = lVar17 + 0x40;
      unaff_w20 = unaff_w20 + 1;
      lVar12 = *(long *)(param_1 + 0x90);
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
LAB_01593f40:
  return (long *)(ulong)((int)unaff_w22 <= (int)unaff_w20);
code_r0x01594558:
  auVar23 = __Unwind_Resume();
  auVar22._8_8_ = auVar23._0_8_;
  auVar22._0_8_ = auVar23._8_8_;
  *(long *)(puVar2 + -0xc0) = lVar12;
  *(long **)(puVar2 + -0xb8) = plVar10;
  *(long *)(puVar2 + -0xb0) = lVar17;
  *(long **)(puVar2 + -0xa8) = plVar6;
  *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x98) = &Atlas_FrontEnd_FrontEndScene__OnIPChanged;
  ppuVar20 = (undefined1 **)(puVar2 + -0xa0);
  uVar4 = 0x3eb5000;
  uVar18 = 0x3d23990;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  puVar21 = &UNK_015945a8;
  puVar2 = puVar2 + -0xc0;
code_r0x01594190:
  lVar12 = auVar23._0_8_;
  *(undefined1 (*) [16])(puVar2 + -0x20) = auVar22;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar20;
  *(undefined **)(puVar2 + -8) = puVar21;
  *(long *)(puVar2 + -0x28) = auVar23._8_8_;
  if ((bRam0000000003eb516b & 1) == 0) {
    func_0x00f78a20(0x3d57298);
    bRam0000000003eb516b = 1;
  }
  uVar8 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar2 + -0x28,0);
  if ((uVar8 & 1) == 0) {
    puVar21 = &UNK_01594208;
    lVar17 = lVar12;
  }
  else {
    if ((*(long *)(lVar12 + 0x38) != 0) &&
       (lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10), lVar17 != 0)) {
      plVar6 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar17,*(undefined8 *)(puVar2 + -0x28),uRam0000000003d57298);
      return plVar6;
    }
    puVar21 = &Atlas_FrontEnd_FrontEndScene__GetGenericIPDefinition;
    lVar17 = func_0x00f78af4();
  }
  *(undefined8 *)(puVar2 + -0x70) = unaff_x24;
  *(long *)(puVar2 + -0x68) = unaff_x23;
  *(ulong *)(puVar2 + -0x60) = uVar18;
  *(undefined8 *)(puVar2 + -0x58) = uVar4;
  *(undefined8 *)(puVar2 + -0x50) = 0x3eb5000;
  *(long *)(puVar2 + -0x48) = lVar12;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = puVar21;
  if ((bRam0000000003eb516c & 1) == 0) {
    func_0x00f78a20(0x3d57578);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d223c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb516c = 1;
  }
  *(undefined8 *)(puVar2 + -0x78) = 0;
  *(undefined4 *)(puVar2 + -0x80) = 0;
  uVar4 = *(undefined8 *)(lVar17 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar3 != 0) {
    return *(long **)(lVar17 + 0xd0);
  }
  if ((*(long *)(lVar17 + 0x38) != 0) &&
     (lVar12 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10), lVar12 != 0)) {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar12,puVar2 + -0x78,uRam0000000003d57578);
    if (*(long *)(puVar2 + -0x78) != 0) {
      plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar2 + -0x78),uRam0000000003d3fe40);
      if (plVar6 != (long *)0x0) {
        do {
          do {
            lVar12 = *plVar6;
            uVar18 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar18 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x01594390;
                }
                piVar15 = piVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01594390:
            uVar18 = (*(code *)*puVar9)(plVar6,puVar9[1]);
            if ((uVar18 & 1) == 0) {
              plVar10 = (long *)0x0;
              uVar11 = 0x67;
              goto code_r0x01594460;
            }
            lVar12 = *plVar6;
            uVar18 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar18 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x015943ec;
                }
                piVar15 = piVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x015943ec:
            plVar10 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
          } while (plVar10 == (long *)0x0);
        } while (((*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300)) ||
                 (*(long *)(*(long *)(*plVar10 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0)) || ((char)plVar10[5] == '\0'));
        *(long **)(lVar17 + 0xd0) = plVar10;
        uVar11 = 0x69;
code_r0x01594460:
        unaff_x24 = 0;
        unaff_x23 = 0;
        lVar12 = 0;
        *(undefined4 *)(puVar2 + -0x88) = uVar11;
        *(undefined4 *)(puVar2 + -0x80) = 1;
        do {
          if (plVar6 != (long *)0x0) {
            lVar13 = *plVar6;
            uVar18 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar18 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x015944c4;
                }
                piVar15 = piVar15 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015944c4:
            (*(code *)*puVar9)(plVar6,puVar9[1]);
          }
          if (lVar12 == 0) {
            if ((int)unaff_x24 != 0) {
              return (long *)0x0;
            }
            if (*(int *)(puVar2 + unaff_x23 * 4 + -0x88) == 0x69) {
              return plVar10;
            }
            return (long *)0x0;
          }
          func_0x00f78ac0(lVar12,0);
          if (extraout_w1 != 1) goto code_r0x01594558;
          plVar10 = (long *)___cxa_begin_catch();
          lVar12 = *plVar10;
          ___cxa_end_catch();
          plVar10 = (long *)0x0;
          unaff_x23 = -1;
          unaff_x24 = 1;
        } while( true );
      }
      goto code_r0x01594514;
    }
  }
  func_0x00f78af4();
code_r0x01594514:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x159451c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1593f64 | Atlas.FrontEnd.FrontEndScene.DestroyKartAndPedestal
// ============================================================

/* WARNING: Possible PIC construction at 0x015945a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01594204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015945a8) */
/* WARNING: Removing unreachable block (ram,0x015945bc) */
/* WARNING: Removing unreachable block (ram,0x015945c4) */
/* WARNING: Removing unreachable block (ram,0x015945c8) */
/* WARNING: Removing unreachable block (ram,0x015945f8) */
/* WARNING: Removing unreachable block (ram,0x015945d8) */
/* WARNING: Removing unreachable block (ram,0x01594608) */
/* WARNING: Removing unreachable block (ram,0x01594638) */
/* WARNING: Removing unreachable block (ram,0x01594670) */
/* WARNING: Removing unreachable block (ram,0x01594674) */
/* WARNING: Removing unreachable block (ram,0x0159468c) */
/* WARNING: Removing unreachable block (ram,0x01594694) */
/* WARNING: Removing unreachable block (ram,0x015946b0) */
/* WARNING: Removing unreachable block (ram,0x015946bc) */
/* WARNING: Removing unreachable block (ram,0x015946c8) */
/* WARNING: Removing unreachable block (ram,0x015946d0) */
/* WARNING: Removing unreachable block (ram,0x015946d4) */
/* WARNING: Removing unreachable block (ram,0x015946e8) */
/* WARNING: Removing unreachable block (ram,0x015946ec) */
/* WARNING: Removing unreachable block (ram,0x01594700) */
/* WARNING: Removing unreachable block (ram,0x01594714) */
/* WARNING: Removing unreachable block (ram,0x01594720) */
/* WARNING: Removing unreachable block (ram,0x0159472c) */
/* WARNING: Removing unreachable block (ram,0x0159473c) */
/* WARNING: Removing unreachable block (ram,0x01594748) */
/* WARNING: Removing unreachable block (ram,0x01594754) */
/* WARNING: Removing unreachable block (ram,0x01594764) */
/* WARNING: Removing unreachable block (ram,0x015947cc) */
/* WARNING: Removing unreachable block (ram,0x015947d8) */
/* WARNING: Removing unreachable block (ram,0x01594770) */
/* WARNING: Removing unreachable block (ram,0x0159477c) */
/* WARNING: Removing unreachable block (ram,0x01594788) */
/* WARNING: Removing unreachable block (ram,0x01594794) */
/* WARNING: Removing unreachable block (ram,0x015947b0) */
/* WARNING: Removing unreachable block (ram,0x015947b4) */
/* WARNING: Removing unreachable block (ram,0x015945e0) */
/* WARNING: Removing unreachable block (ram,0x01595b44) */

long * Atlas_FrontEnd_FrontEndScene__DestroyKartAndPedestal(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  int extraout_w1;
  undefined4 uVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  long unaff_x22;
  long unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_2;
  puVar19 = &stack0xfffffffffffffff0;
  uVar17 = 0x3eb5000;
  if ((bRam0000000003eb516a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516a = 1;
  }
  lVar13 = *(long *)(param_1 + 0x90);
  if (lVar13 != 0) {
    uVar14 = (uint)*(undefined8 *)(lVar13 + 0x18);
    uVar16 = (uint)param_2;
    if (uVar14 <= uVar16) goto LAB_01594184;
    lVar9 = 0x3d23990;
    lVar18 = 0x3d23990;
    unaff_x22 = (long)(int)uVar16;
    lVar5 = *(long *)(lVar13 + unaff_x22 * 0x40 + 0x20);
    if (lVar5 == 0) {
LAB_01594094:
      unaff_x23 = lVar18;
      if (uVar14 <= uVar16) goto LAB_01594184;
      uVar17 = *(undefined8 *)(lVar13 + unaff_x22 * 0x40 + 0x40);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar6 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
      if ((int)plVar6 == 0) {
        return plVar6;
      }
      lVar13 = *(long *)(param_1 + 0x90);
      if (lVar13 != 0) {
        if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01594184;
        lVar13 = *(long *)(lVar13 + unaff_x22 * 0x40 + 0x40);
        if (lVar13 != 0) {
          uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
          /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar7,0,0);
          lVar13 = *(long *)(param_1 + 0x90);
          if (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01594184;
            lVar13 = *(long *)(lVar13 + unaff_x22 * 0x40 + 0x40);
            if (lVar13 != 0) {
              uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar6 = (long *)/*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar17,0);
              lVar13 = *(long *)(param_1 + 0x90);
              if (lVar13 != 0) {
                if (uVar16 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + unaff_x22 * 0x40 + 0x40) = 0;
                  return plVar6;
                }
                goto LAB_01594184;
              }
            }
          }
        }
      }
    }
    else {
      Atlas_Gameplay_Kart_KartComposite__DeInit(lVar5,0);
      lVar13 = *(long *)(param_1 + 0x90);
      unaff_x23 = lVar9;
      if (lVar13 != 0) {
        if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01594184;
        lVar13 = *(long *)(lVar13 + unaff_x22 * 0x40 + 0x20);
        if (lVar13 != 0) {
          uVar17 = *(undefined8 *)(lVar13 + 0x18);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
          if (iVar4 == 0) {
LAB_01594078:
            lVar13 = *(long *)(param_1 + 0x90);
            unaff_x23 = lVar18;
            if (lVar13 != 0) {
              uVar14 = (uint)*(undefined8 *)(lVar13 + 0x18);
              if (uVar14 <= uVar16) goto LAB_01594184;
              *(undefined8 *)(lVar13 + unaff_x22 * 0x40 + 0x20) = 0;
              goto LAB_01594094;
            }
          }
          else {
            lVar13 = *(long *)(param_1 + 0x90);
            unaff_x23 = lVar18;
            if (lVar13 != 0) {
              unaff_x23 = lVar9;
              if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_01594184;
              lVar13 = *(long *)(lVar13 + unaff_x22 * 0x40 + 0x20);
              unaff_x23 = lVar18;
              if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
                uVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar17,0);
                goto LAB_01594078;
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_01594184:
  uVar7 = func_0x00f78b24();
  puVar20 = &Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric;
  auVar21 = func_0x00f78ac0(uVar7,0);
  puVar3 = &stack0xffffffffffffffc0;
code_r0x01594190:
  lVar13 = auVar21._0_8_;
  *(long *)(puVar3 + -0x20) = auVar1._8_8_;
  *(long *)(puVar3 + -0x18) = auVar1._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(undefined **)(puVar3 + -8) = puVar20;
  *(long *)(puVar3 + -0x28) = auVar21._8_8_;
  if ((bRam0000000003eb516b & 1) == 0) {
    func_0x00f78a20(0x3d57298);
    bRam0000000003eb516b = 1;
  }
  uVar8 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar3 + -0x28,0);
  if ((uVar8 & 1) == 0) {
    puVar20 = &UNK_01594208;
    lVar9 = lVar13;
  }
  else {
    if ((*(long *)(lVar13 + 0x38) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10), lVar9 != 0)) {
      plVar6 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)(puVar3 + -0x28),uRam0000000003d57298);
      return plVar6;
    }
    puVar20 = &Atlas_FrontEnd_FrontEndScene__GetGenericIPDefinition;
    lVar9 = func_0x00f78af4();
  }
  *(undefined8 *)(puVar3 + -0x70) = unaff_x24;
  *(long *)(puVar3 + -0x68) = unaff_x23;
  *(long *)(puVar3 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x58) = uVar17;
  *(undefined8 *)(puVar3 + -0x50) = 0x3eb5000;
  *(long *)(puVar3 + -0x48) = lVar13;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = puVar20;
  if ((bRam0000000003eb516c & 1) == 0) {
    func_0x00f78a20(0x3d57578);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d223c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb516c = 1;
  }
  *(undefined8 *)(puVar3 + -0x78) = 0;
  *(undefined4 *)(puVar3 + -0x80) = 0;
  uVar17 = *(undefined8 *)(lVar9 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
  if (iVar4 != 0) {
    return *(long **)(lVar9 + 0xd0);
  }
  if ((*(long *)(lVar9 + 0x38) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10), lVar13 != 0)) {
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar13,puVar3 + -0x78,uRam0000000003d57578);
    if (*(long *)(puVar3 + -0x78) != 0) {
      plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(*(long *)(puVar3 + -0x78),uRam0000000003d3fe40);
      if (plVar6 != (long *)0x0) {
        do {
          do {
            lVar13 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x01594390;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01594390:
            uVar8 = (*(code *)*puVar10)(plVar6,puVar10[1]);
            if ((uVar8 & 1) == 0) {
              plVar11 = (long *)0x0;
              uVar12 = 0x67;
              goto code_r0x01594460;
            }
            lVar13 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x015943ec;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x015943ec:
            plVar11 = (long *)(*(code *)*puVar10)(plVar6,puVar10[1]);
          } while (plVar11 == (long *)0x0);
        } while (((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300)) ||
                 (*(long *)(*(long *)(*plVar11 + 200) +
                            (ulong)*(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300) * 8 + -8) !=
                  /*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0)) || ((char)plVar11[5] == '\0'));
        *(long **)(lVar9 + 0xd0) = plVar11;
        uVar12 = 0x69;
code_r0x01594460:
        unaff_x24 = 0;
        unaff_x23 = 0;
        lVar13 = 0;
        *(undefined4 *)(puVar3 + -0x88) = uVar12;
        *(undefined4 *)(puVar3 + -0x80) = 1;
        do {
          if (plVar6 != (long *)0x0) {
            lVar5 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar10 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x015944c4;
                }
                piVar15 = piVar15 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015944c4:
            (*(code *)*puVar10)(plVar6,puVar10[1]);
          }
          if (lVar13 == 0) {
            if ((int)unaff_x24 != 0) {
              return (long *)0x0;
            }
            if (*(int *)(puVar3 + unaff_x23 * 4 + -0x88) == 0x69) {
              return plVar11;
            }
            return (long *)0x0;
          }
          func_0x00f78ac0(lVar13,0);
          if (extraout_w1 != 1) goto code_r0x01594558;
          plVar11 = (long *)___cxa_begin_catch();
          lVar13 = *plVar11;
          ___cxa_end_catch();
          plVar11 = (long *)0x0;
          unaff_x23 = -1;
          unaff_x24 = 1;
        } while( true );
      }
      goto code_r0x01594514;
    }
  }
  func_0x00f78af4();
code_r0x01594514:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x159451c);
  (*pcVar2)();
code_r0x01594558:
  auVar21 = __Unwind_Resume();
  *(long *)(puVar3 + -0xc0) = lVar13;
  *(long **)(puVar3 + -0xb8) = plVar11;
  *(long *)(puVar3 + -0xb0) = lVar9;
  *(long **)(puVar3 + -0xa8) = plVar6;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x98) = &Atlas_FrontEnd_FrontEndScene__OnIPChanged;
  puVar19 = puVar3 + -0xa0;
  uVar17 = 0x3eb5000;
  unaff_x22 = 0x3d23990;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  puVar20 = &UNK_015945a8;
  puVar3 = puVar3 + -0xc0;
  auVar1 = auVar21;
  goto code_r0x01594190;
}



// ============================================================
// RVA: 0x1594190 | Atlas.FrontEnd.FrontEndScene.GetIPDefinitionFromIDOrGeneric
// ============================================================

/* WARNING: Possible PIC construction at 0x01594204: Changing call to branch */

long * Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(long param_1,undefined8 param_2)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  int extraout_w1;
  long *plVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  int aiStack_88 [4];
  long lStack_78;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  if ((bRam0000000003eb516b & 1) == 0) {
    func_0x00f78a20(0x3d57298);
    bRam0000000003eb516b = 1;
  }
  uVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_28,0);
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 != 0)) {
      plVar6 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uStack_28,uRam0000000003d57298);
      return plVar6;
    }
    param_1 = func_0x00f78af4();
  }
  if ((bRam0000000003eb516c & 1) == 0) {
    func_0x00f78a20(0x3d57578);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d223c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb516c = 1;
  }
  lStack_78 = 0;
  aiStack_88[2] = 0;
  uVar12 = *(undefined8 *)(param_1 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
  if (iVar3 != 0) {
    return *(long **)(param_1 + 0xd0);
  }
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 == 0)) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar5,&lStack_78,uRam0000000003d57578), lStack_78 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar6 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_78,uRam0000000003d3fe40);
    if (plVar6 != (long *)0x0) {
      do {
        do {
          lVar5 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x01594390;
              }
              piVar11 = piVar11 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01594390:
          uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar4 & 1) == 0) {
            plVar8 = (long *)0x0;
            aiStack_88[0] = 0x67;
            goto code_r0x01594460;
          }
          lVar5 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x015943ec;
              }
              piVar11 = piVar11 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x015943ec:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        } while (plVar8 == (long *)0x0);
      } while (((*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300)) ||
               (*(long *)(*(long *)(*plVar8 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300) * 8 + -8) !=
                /*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0)) || ((char)plVar8[5] == '\0'));
      *(long **)(param_1 + 0xd0) = plVar8;
      aiStack_88[0] = 0x69;
code_r0x01594460:
      bVar1 = false;
      lVar15 = 0;
      lVar5 = 0;
      aiStack_88[2] = 1;
      do {
        if (plVar6 != (long *)0x0) {
          lVar10 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x015944c4;
              }
              piVar11 = piVar11 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015944c4:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
        }
        if (lVar5 == 0) {
          if (bVar1) {
            return (long *)0x0;
          }
          if (aiStack_88[lVar15] == 0x69) {
            return plVar8;
          }
          return (long *)0x0;
        }
        func_0x00f78ac0(lVar5,0);
        if (extraout_w1 != 1) goto code_r0x01594558;
        plVar8 = (long *)___cxa_begin_catch();
        lVar5 = *plVar8;
        ___cxa_end_catch();
        plVar8 = (long *)0x0;
        lVar15 = -1;
        bVar1 = true;
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x159451c);
  (*pcVar2)();
code_r0x01594558:
  auVar16 = __Unwind_Resume();
  lVar5 = auVar16._0_8_;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar12 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar5,auVar16._8_8_);
  uVar13 = *(undefined8 *)(lVar5 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
  if ((int)plVar6 == 0) {
    return plVar6;
  }
  plVar6 = *(long **)(lVar5 + 200);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(**(code **)(*plVar6 + 0x198))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x1a0));
    return plVar6;
  }
  auVar16 = func_0x00f78af4();
  plVar9 = auVar16._8_8_;
  plVar8 = auVar16._0_8_;
  plVar6 = plVar8;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    plVar6 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar9 != (long *)0x0) && (*plVar9 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    plVar6 = (long *)func_0x00f78e5c(plVar9);
    return plVar6;
  }
  lVar5 = plVar8[0x12];
  if (lVar5 != 0) {
    uVar14 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0x18) <= (int)uVar14) {
        return plVar6;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar9,uRam0000000003d5b098);
      lVar15 = plVar8[0x12];
      if ((lVar15 == 0) || (lVar5 == 0)) break;
      uVar12 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578b8);
      if (*(uint *)(lVar15 + 0x18) <= uVar14) {
code_r0x015947cc:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x015947d8;
      }
      lVar10 = (long)(int)uVar14;
      *(undefined8 *)(lVar15 + lVar10 * 0x40 + 0x40) = uVar12;
      lVar5 = plVar8[0x12];
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar10 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar5,0);
      lVar5 = plVar8[0x12];
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar10 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
      lVar5 = plVar8[0x12];
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar14) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar10 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar5 == 0)) break;
      uVar14 = uVar14 + 1;
      plVar6 = (long *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,uVar12,0,0);
      lVar5 = plVar8[0x12];
      if (lVar5 == 0) break;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  return plVar6;
}



// ============================================================
// RVA: 0x159421c | Atlas.FrontEnd.FrontEndScene.GetGenericIPDefinition
// ============================================================

long * Atlas_FrontEnd_FrontEndScene__GetGenericIPDefinition(long param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int extraout_w1;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  int aiStack_58 [4];
  long lStack_48;
  
  if ((bRam0000000003eb516c & 1) == 0) {
    func_0x00f78a20(0x3d57578);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d223c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fe40);
    bRam0000000003eb516c = 1;
  }
  lStack_48 = 0;
  aiStack_58[2] = 0;
  uVar12 = *(undefined8 *)(param_1 + 0xd0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
  if (iVar3 != 0) {
    return *(long **)(param_1 + 0xd0);
  }
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar4 == 0)) ||
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar4,&lStack_48,uRam0000000003d57578), lStack_48 == 0)) {
    func_0x00f78af4();
  }
  else {
    plVar5 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_48,uRam0000000003d3fe40);
    if (plVar5 != (long *)0x0) {
      do {
        do {
          lVar4 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x01594390;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01594390:
          uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar10 & 1) == 0) {
            plVar7 = (long *)0x0;
            aiStack_58[0] = 0x67;
            goto code_r0x01594460;
          }
          lVar4 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x015943ec;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x015943ec:
          plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        } while (plVar7 == (long *)0x0);
      } while (((*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300)) ||
               (*(long *)(*(long *)(*plVar7 + 200) +
                          (ulong)*(byte *)(/*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0 + 300) * 8 + -8) !=
                /*Atlas.Definitions.IPDefinition_TypeInfo*/ lRam0000000003d223c0)) || ((char)plVar7[5] == '\0'));
      *(long **)(param_1 + 0xd0) = plVar7;
      aiStack_58[0] = 0x69;
code_r0x01594460:
      bVar1 = false;
      lVar15 = 0;
      lVar4 = 0;
      aiStack_58[2] = 1;
      do {
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x015944c4;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015944c4:
          (*(code *)*puVar6)(plVar5,puVar6[1]);
        }
        if (lVar4 == 0) {
          if (bVar1) {
            return (long *)0x0;
          }
          if (aiStack_58[lVar15] == 0x69) {
            return plVar7;
          }
          return (long *)0x0;
        }
        func_0x00f78ac0(lVar4,0);
        if (extraout_w1 != 1) goto code_r0x01594558;
        plVar7 = (long *)___cxa_begin_catch();
        lVar4 = *plVar7;
        ___cxa_end_catch();
        plVar7 = (long *)0x0;
        lVar15 = -1;
        bVar1 = true;
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x159451c);
  (*pcVar2)();
code_r0x01594558:
  auVar16 = __Unwind_Resume();
  lVar4 = auVar16._0_8_;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar12 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar4,auVar16._8_8_);
  uVar13 = *(undefined8 *)(lVar4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
  if ((int)plVar5 == 0) {
    return plVar5;
  }
  plVar5 = *(long **)(lVar4 + 200);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(**(code **)(*plVar5 + 0x198))(plVar5,uVar12,*(undefined8 *)(*plVar5 + 0x1a0));
    return plVar5;
  }
  auVar16 = func_0x00f78af4();
  plVar8 = auVar16._8_8_;
  plVar7 = auVar16._0_8_;
  plVar5 = plVar7;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    plVar5 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    plVar5 = (long *)func_0x00f78e5c(plVar8);
    return plVar5;
  }
  lVar4 = plVar7[0x12];
  if (lVar4 != 0) {
    uVar14 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0x18) <= (int)uVar14) {
        return plVar5;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar8,uRam0000000003d5b098);
      lVar15 = plVar7[0x12];
      if ((lVar15 == 0) || (lVar4 == 0)) break;
      uVar12 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d578b8);
      if (*(uint *)(lVar15 + 0x18) <= uVar14) {
code_r0x015947cc:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x015947d8;
      }
      lVar9 = (long)(int)uVar14;
      *(undefined8 *)(lVar15 + lVar9 * 0x40 + 0x40) = uVar12;
      lVar4 = plVar7[0x12];
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar14) goto code_r0x015947cc;
      lVar4 = *(long *)(lVar4 + lVar9 * 0x40 + 0x40);
      if (lVar4 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar4,0);
      lVar4 = plVar7[0x12];
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar14) goto code_r0x015947cc;
      lVar4 = *(long *)(lVar4 + lVar9 * 0x40 + 0x40);
      if (lVar4 == 0) break;
      uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
      lVar4 = plVar7[0x12];
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar14) goto code_r0x015947cc;
      lVar4 = *(long *)(lVar4 + lVar9 * 0x40 + 0x20);
      if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) ||
         (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0), lVar4 == 0)) break;
      uVar14 = uVar14 + 1;
      plVar5 = (long *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar4,uVar12,0,0);
      lVar4 = plVar7[0x12];
      if (lVar4 == 0) break;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  return plVar5;
}



// ============================================================
// RVA: 0x159455c | Atlas.FrontEnd.FrontEndScene.OnIPChanged
// ============================================================

void Atlas_FrontEnd_FrontEndScene__OnIPChanged(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar2 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(param_1,param_2);
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (iVar1 == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 200);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x198))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x1a0));
    return;
  }
  auVar10 = func_0x00f78af4();
  plVar3 = auVar10._8_8_;
  lVar4 = auVar10._0_8_;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar3 != (long *)0x0) && (*plVar3 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    func_0x00f78e5c(plVar3);
    return;
  }
  lVar5 = *(long *)(lVar4 + 0x90);
  if (lVar5 != 0) {
    uVar8 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0x18) <= (int)uVar8) {
        return;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar3,uRam0000000003d5b098);
      lVar7 = *(long *)(lVar4 + 0x90);
      if ((lVar7 == 0) || (lVar5 == 0)) break;
      uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578b8);
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
code_r0x015947cc:
        uVar2 = func_0x00f78b24();
        func_0x00f78ac0(uVar2,0);
        goto code_r0x015947d8;
      }
      lVar9 = (long)(int)uVar8;
      *(undefined8 *)(lVar7 + lVar9 * 0x40 + 0x40) = uVar2;
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar5 == 0)) break;
      uVar8 = uVar8 + 1;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,uVar2,0,0);
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x159460c | Atlas.FrontEnd.FrontEndScene.OnPedestalLoadedSuccessfully
// ============================================================

void Atlas_FrontEnd_FrontEndScene__OnPedestalLoadedSuccessfully(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
LAB_015947d8:
    func_0x00f78e5c(param_2);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    uVar4 = 0;
    while( true ) {
      if (*(int *)(lVar2 + 0x18) <= (int)uVar4) {
        return;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(param_2,uRam0000000003d5b098);
      lVar3 = *(long *)(param_1 + 0x90);
      if ((lVar3 == 0) || (lVar2 == 0)) break;
      uVar1 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar2,uRam0000000003d578b8);
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_015947cc:
        uVar1 = func_0x00f78b24();
        func_0x00f78ac0(uVar1,0);
        goto LAB_015947d8;
      }
      lVar5 = (long)(int)uVar4;
      *(undefined8 *)(lVar3 + lVar5 * 0x40 + 0x40) = uVar1;
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_015947cc;
      lVar2 = *(long *)(lVar2 + lVar5 * 0x40 + 0x40);
      if (lVar2 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar2,0);
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_015947cc;
      lVar2 = *(long *)(lVar2 + lVar5 * 0x40 + 0x40);
      if (lVar2 == 0) break;
      uVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0);
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_015947cc;
      lVar2 = *(long *)(lVar2 + lVar5 * 0x40 + 0x20);
      if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) ||
         (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0), lVar2 == 0)) break;
      uVar4 = uVar4 + 1;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar2,uVar1,0,0);
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15947e0 | Atlas.FrontEnd.FrontEndScene.OnPedestalFailedToLoad
// ============================================================

void Atlas_FrontEnd_FrontEndScene__OnPedestalFailedToLoad(void)

{
  return;
}



// ============================================================
// RVA: 0x15947e4 | Atlas.FrontEnd.FrontEndScene.OnPortalLoadedSuccessfully
// ============================================================

void Atlas_FrontEnd_FrontEndScene__OnPortalLoadedSuccessfully(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003eb5171 & 1) == 0) {
    func_0x00f78a20(0x3d578d0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5171 = 1;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
LAB_01594a38:
    func_0x00f78e5c(param_2);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    uVar3 = 0;
    while( true ) {
      if (*(int *)(lVar2 + 0x18) <= (int)uVar3) {
        return;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(param_2,uRam0000000003d5b098);
      if (lVar2 == 0) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,0,0);
      lVar5 = *(long *)(param_1 + 0x90);
      if (lVar5 == 0) break;
      uVar1 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar2,uRam0000000003d578d0);
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_01594a2c:
        uVar1 = func_0x00f78b24();
        func_0x00f78ac0(uVar1,0);
        goto LAB_01594a38;
      }
      lVar4 = (long)(int)uVar3;
      *(undefined8 *)(lVar5 + lVar4 * 0x40 + 0x50) = uVar1;
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_01594a2c;
      lVar2 = lVar2 + lVar4 * 0x40;
      *(undefined4 *)(lVar2 + 0x48) = 0;
      *(undefined4 *)(lVar2 + 0x58) = 0;
      if (*(long *)(lVar2 + 0x50) == 0) break;
      lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar2 + 0x50),0);
      lVar5 = *(long *)(param_1 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_01594a2c;
      lVar5 = *(long *)(lVar5 + lVar4 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (uVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar2 == 0)) break;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar2,uVar1,0,0);
      lVar5 = *(long *)(param_1 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_01594a2c;
      lVar5 = *(long *)(lVar5 + lVar4 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x80), lVar5 == 0)) break;
      /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar5,0);
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar2,0);
      lVar5 = *(long *)(param_1 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_01594a2c;
      lVar5 = *(long *)(lVar5 + lVar4 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x80), lVar5 == 0)) break;
      uVar3 = uVar3 + 1;
      /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar5,0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar2,0);
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1594a40 | Atlas.FrontEnd.FrontEndScene.OnPortalFailedToLoad
// ============================================================

void Atlas_FrontEnd_FrontEndScene__OnPortalFailedToLoad(void)

{
  return;
}



// ============================================================
// RVA: 0x1594a44 | Atlas.FrontEnd.FrontEndScene.GetKartTransform
// ============================================================

long Atlas_FrontEnd_FrontEndScene__GetKartTransform(long param_1,uint param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 extraout_w1;
  long lVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar5 [12];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 == 0) {
LAB_01594a90:
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)(int)param_2 * 0x40;
    if (*(long *)(lVar3 + 0x20) == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar3 + 0x40);
    if (lVar3 != 0) goto UnityEngine_Component__get_transform;
    goto LAB_01594a90;
  }
  uVar2 = func_0x00f78b24();
  auVar5 = func_0x00f78ac0(uVar2,0);
  lVar3 = *(long *)(auVar5._0_8_ + 0x90);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= auVar5._8_4_) goto code_r0x01594af0;
    lVar3 = lVar3 + (long)(int)auVar5._8_4_ * 0x40;
    if (*(long *)(lVar3 + 0x20) == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar3 + 0x50);
    if (lVar3 != 0) {
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Atlas_FrontEnd_FrontEndScene__GetPortalTransform;
      unaff_x29 = puVar1;
UnityEngine_Component__get_transform:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      if (pcRam0000000003ebf188 == (code *)0x0) {
        pcRam0000000003ebf188 = (code *)func_0x00f789d4("UnityEngine.Component::get_transform()");
      }
                    /* WARNING: Could not recover jumptable at 0x032279f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (*pcRam0000000003ebf188)(lVar3);
      return lVar3;
    }
  }
  func_0x00f78af4();
code_r0x01594af0:
  uVar2 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar2,0);
  lVar4 = *(long *)(lVar3 + 0x78);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x20) = extraout_w1;
    *(undefined1 *)(lVar4 + 0x21) = param_3;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1594aa0 | Atlas.FrontEnd.FrontEndScene.GetPortalTransform
// ============================================================

long Atlas_FrontEnd_FrontEndScene__GetPortalTransform(long param_1,uint param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 extraout_w1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_2) goto LAB_01594af0;
    lVar2 = lVar2 + (long)(int)param_2 * 0x40;
    if (*(long *)(lVar2 + 0x20) == 0) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x50);
    if (lVar2 != 0) {
      if (pcRam0000000003ebf188 == (code *)0x0) {
        pcRam0000000003ebf188 = (code *)func_0x00f789d4("UnityEngine.Component::get_transform()");
      }
                    /* WARNING: Could not recover jumptable at 0x032279f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*pcRam0000000003ebf188)(lVar2);
      return lVar2;
    }
  }
  func_0x00f78af4();
LAB_01594af0:
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  lVar3 = *(long *)(lVar2 + 0x78);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x20) = extraout_w1;
    *(undefined1 *)(lVar3 + 0x21) = param_3;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1594afc | Atlas.FrontEnd.FrontEndScene.SetKartJigglerEnabled
// ============================================================

void Atlas_FrontEnd_FrontEndScene__SetKartJigglerEnabled
               (long param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x20) = param_2;
    *(undefined1 *)(lVar1 + 0x21) = param_3;
  }
  return;
}



// ============================================================
// RVA: 0x1594b10 | Atlas.FrontEnd.FrontEndScene.OnCharacterSelectConfirm
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1594b34 | Atlas.FrontEnd.FrontEndScene.GetKartFEAnimator
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1594b74 | Atlas.FrontEnd.FrontEndScene.SetFrontEndSceneType
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1594c94 | Atlas.FrontEnd.FrontEndScene.LoadSubsceneAndMakeActive
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1594d1c | Atlas.FrontEnd.FrontEndScene.FindSceneAssetForType
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1594d90 | Atlas.FrontEnd.FrontEndScene.UnloadAnyLoadedScene
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1594e04 | Atlas.FrontEnd.FrontEndScene.TryGetLoadedScene
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1594f0c | Atlas.FrontEnd.FrontEndScene.SetVisibleAndRequestLoadout
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1595008 | Atlas.FrontEnd.FrontEndScene.SetVisibleAndRequestLoadout
// ============================================================

void Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uStack_78 = param_3[5];
  uStack_80 = param_3[4];
  uStack_68 = param_3[7];
  uStack_70 = param_3[6];
  Atlas_Gameplay_KartLoadout__FromNetworkLoadOut(&uStack_60,&uStack_a0,0);
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_b8 = uStack_38;
  uStack_c0 = uStack_40;
  uStack_a8 = uStack_28;
  uStack_b0 = uStack_30;
  Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout(param_1,param_2,&uStack_e0);
  return;
}



// ============================================================
// RVA: 0x1595070 | Atlas.FrontEnd.FrontEndScene.SetGreyScaleLockedKartPartsOnLoad
// ============================================================

/* WARNING: Possible PIC construction at 0x01595390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01595408) */
/* WARNING: Removing unreachable block (ram,0x0159540c) */
/* WARNING: Removing unreachable block (ram,0x01595424) */
/* WARNING: Removing unreachable block (ram,0x01595414) */
/* WARNING: Removing unreachable block (ram,0x01595418) */
/* WARNING: Removing unreachable block (ram,0x01595394) */
/* WARNING: Removing unreachable block (ram,0x015953b0) */
/* WARNING: Removing unreachable block (ram,0x015953bc) */
/* WARNING: Removing unreachable block (ram,0x0159543c) */
/* WARNING: Removing unreachable block (ram,0x01595440) */
/* WARNING: Removing unreachable block (ram,0x01595458) */
/* WARNING: Removing unreachable block (ram,0x0159549c) */
/* WARNING: Removing unreachable block (ram,0x0159546c) */
/* WARNING: Removing unreachable block (ram,0x015954a0) */
/* WARNING: Removing unreachable block (ram,0x01595478) */
/* WARNING: Removing unreachable block (ram,0x01595494) */
/* WARNING: Removing unreachable block (ram,0x01595488) */
/* WARNING: Removing unreachable block (ram,0x015d10cc) */
/* WARNING: Removing unreachable block (ram,0x015d10ec) */
/* WARNING: Removing unreachable block (ram,0x015d1100) */
/* WARNING: Removing unreachable block (ram,0x015d1108) */
/* WARNING: Removing unreachable block (ram,0x015d111c) */
/* WARNING: Removing unreachable block (ram,0x015d1130) */
/* WARNING: Removing unreachable block (ram,0x015d1144) */
/* WARNING: Removing unreachable block (ram,0x015d1158) */
/* WARNING: Removing unreachable block (ram,0x015d116c) */
/* WARNING: Removing unreachable block (ram,0x015d1180) */
/* WARNING: Removing unreachable block (ram,0x015d1194) */
/* WARNING: Removing unreachable block (ram,0x015d119c) */
/* WARNING: Removing unreachable block (ram,0x015d11a0) */
/* WARNING: Removing unreachable block (ram,0x015d11ac) */
/* WARNING: Removing unreachable block (ram,0x015d11bc) */
/* WARNING: Removing unreachable block (ram,0x015d11c4) */
/* WARNING: Removing unreachable block (ram,0x015d11c8) */
/* WARNING: Removing unreachable block (ram,0x015d1208) */
/* WARNING: Removing unreachable block (ram,0x015d11d8) */
/* WARNING: Removing unreachable block (ram,0x015d120c) */
/* WARNING: Removing unreachable block (ram,0x015d1240) */
/* WARNING: Removing unreachable block (ram,0x015d1260) */
/* WARNING: Removing unreachable block (ram,0x015d126c) */
/* WARNING: Removing unreachable block (ram,0x015d1284) */
/* WARNING: Removing unreachable block (ram,0x015d128c) */
/* WARNING: Removing unreachable block (ram,0x015d1298) */
/* WARNING: Removing unreachable block (ram,0x015d12a8) */
/* WARNING: Removing unreachable block (ram,0x015d12b0) */
/* WARNING: Removing unreachable block (ram,0x015d12bc) */
/* WARNING: Removing unreachable block (ram,0x015d12c4) */
/* WARNING: Removing unreachable block (ram,0x015d12d8) */
/* WARNING: Removing unreachable block (ram,0x015d12f0) */
/* WARNING: Removing unreachable block (ram,0x015d12fc) */
/* WARNING: Removing unreachable block (ram,0x015d130c) */
/* WARNING: Removing unreachable block (ram,0x015d1314) */
/* WARNING: Removing unreachable block (ram,0x015d1320) */
/* WARNING: Removing unreachable block (ram,0x015d1328) */
/* WARNING: Removing unreachable block (ram,0x015d1334) */
/* WARNING: Removing unreachable block (ram,0x015d133c) */
/* WARNING: Removing unreachable block (ram,0x015d1348) */
/* WARNING: Removing unreachable block (ram,0x015d1350) */
/* WARNING: Removing unreachable block (ram,0x015d135c) */
/* WARNING: Removing unreachable block (ram,0x015d1374) */
/* WARNING: Removing unreachable block (ram,0x015d137c) */
/* WARNING: Removing unreachable block (ram,0x015d1384) */
/* WARNING: Removing unreachable block (ram,0x015d13c8) */
/* WARNING: Removing unreachable block (ram,0x015d1388) */
/* WARNING: Removing unreachable block (ram,0x015d13cc) */
/* WARNING: Removing unreachable block (ram,0x015d1408) */
/* WARNING: Removing unreachable block (ram,0x015d1428) */
/* WARNING: Removing unreachable block (ram,0x015d1434) */
/* WARNING: Removing unreachable block (ram,0x015d15d8) */
/* WARNING: Removing unreachable block (ram,0x015d15e0) */
/* WARNING: Removing unreachable block (ram,0x015d1508) */
/* WARNING: Removing unreachable block (ram,0x015d1510) */
/* WARNING: Removing unreachable block (ram,0x015d1524) */
/* WARNING: Removing unreachable block (ram,0x015d153c) */
/* WARNING: Removing unreachable block (ram,0x015d1544) */
/* WARNING: Removing unreachable block (ram,0x015d1548) */
/* WARNING: Removing unreachable block (ram,0x015d1558) */
/* WARNING: Removing unreachable block (ram,0x015d1560) */
/* WARNING: Removing unreachable block (ram,0x015d1568) */
/* WARNING: Removing unreachable block (ram,0x015d1580) */
/* WARNING: Removing unreachable block (ram,0x015d1588) */
/* WARNING: Removing unreachable block (ram,0x015d1598) */
/* WARNING: Removing unreachable block (ram,0x015d15a0) */
/* WARNING: Removing unreachable block (ram,0x015d15a4) */
/* WARNING: Removing unreachable block (ram,0x015d15b8) */
/* WARNING: Removing unreachable block (ram,0x015d15c0) */
/* WARNING: Removing unreachable block (ram,0x015d15c8) */
/* WARNING: Removing unreachable block (ram,0x015d14f0) */
/* WARNING: Removing unreachable block (ram,0x015d14f8) */
/* WARNING: Removing unreachable block (ram,0x015d14d8) */
/* WARNING: Removing unreachable block (ram,0x015d14e0) */
/* WARNING: Removing unreachable block (ram,0x015d14c0) */
/* WARNING: Removing unreachable block (ram,0x015d14c8) */
/* WARNING: Removing unreachable block (ram,0x015d1488) */
/* WARNING: Removing unreachable block (ram,0x015d1490) */
/* WARNING: Removing unreachable block (ram,0x015d14a4) */
/* WARNING: Removing unreachable block (ram,0x015d14ac) */
/* WARNING: Removing unreachable block (ram,0x015d14b4) */
/* WARNING: Removing unreachable block (ram,0x015d1450) */
/* WARNING: Removing unreachable block (ram,0x015d1458) */
/* WARNING: Removing unreachable block (ram,0x015d146c) */
/* WARNING: Removing unreachable block (ram,0x015d1474) */
/* WARNING: Removing unreachable block (ram,0x015d147c) */
/* WARNING: Removing unreachable block (ram,0x015d15ec) */
/* WARNING: Removing unreachable block (ram,0x015d15f4) */
/* WARNING: Removing unreachable block (ram,0x015d163c) */
/* WARNING: Removing unreachable block (ram,0x015d15fc) */
/* WARNING: Removing unreachable block (ram,0x015d1640) */
/* WARNING: Removing unreachable block (ram,0x015d1678) */
/* WARNING: Removing unreachable block (ram,0x015d168c) */
/* WARNING: Removing unreachable block (ram,0x01871bfc) */
/* WARNING: Removing unreachable block (ram,0x01871c18) */
/* WARNING: Removing unreachable block (ram,0x01871c58) */
/* WARNING: Removing unreachable block (ram,0x01871c90) */
/* WARNING: Removing unreachable block (ram,0x01871cbc) */
/* WARNING: Removing unreachable block (ram,0x01871ccc) */
/* WARNING: Removing unreachable block (ram,0x01871cd4) */
/* WARNING: Removing unreachable block (ram,0x01871cd8) */
/* WARNING: Removing unreachable block (ram,0x01871cec) */
/* WARNING: Removing unreachable block (ram,0x01871cf4) */
/* WARNING: Removing unreachable block (ram,0x01871cfc) */
/* WARNING: Removing unreachable block (ram,0x01871d24) */
/* WARNING: Removing unreachable block (ram,0x01871d2c) */
/* WARNING: Removing unreachable block (ram,0x01871d5c) */
/* WARNING: Removing unreachable block (ram,0x01871d64) */
/* WARNING: Removing unreachable block (ram,0x01871d68) */
/* WARNING: Removing unreachable block (ram,0x01871d74) */
/* WARNING: Removing unreachable block (ram,0x01871d84) */
/* WARNING: Removing unreachable block (ram,0x01871d8c) */
/* WARNING: Removing unreachable block (ram,0x01871d90) */
/* WARNING: Removing unreachable block (ram,0x01871da0) */
/* WARNING: Removing unreachable block (ram,0x01871dcc) */
/* WARNING: Removing unreachable block (ram,0x01871e28) */
/* WARNING: Removing unreachable block (ram,0x01871eb4) */
/* WARNING: Removing unreachable block (ram,0x01871ecc) */
/* WARNING: Removing unreachable block (ram,0x01871ed4) */
/* WARNING: Removing unreachable block (ram,0x01871ed8) */
/* WARNING: Removing unreachable block (ram,0x01871ee8) */
/* WARNING: Removing unreachable block (ram,0x01871eec) */
/* WARNING: Removing unreachable block (ram,0x01871f10) */
/* WARNING: Removing unreachable block (ram,0x01871f1c) */
/* WARNING: Removing unreachable block (ram,0x01871f24) */
/* WARNING: Removing unreachable block (ram,0x01871f28) */
/* WARNING: Removing unreachable block (ram,0x01872014) */
/* WARNING: Removing unreachable block (ram,0x01871f38) */
/* WARNING: Removing unreachable block (ram,0x01871f44) */
/* WARNING: Removing unreachable block (ram,0x01871f4c) */
/* WARNING: Removing unreachable block (ram,0x01871f50) */
/* WARNING: Removing unreachable block (ram,0x01872020) */
/* WARNING: Removing unreachable block (ram,0x01871f80) */
/* WARNING: Removing unreachable block (ram,0x01871f88) */
/* WARNING: Removing unreachable block (ram,0x01871fa4) */
/* WARNING: Removing unreachable block (ram,0x01871fac) */
/* WARNING: Removing unreachable block (ram,0x01871fd4) */
/* WARNING: Removing unreachable block (ram,0x01871fdc) */
/* WARNING: Removing unreachable block (ram,0x01872024) */
/* WARNING: Removing unreachable block (ram,0x01872040) */
/* WARNING: Removing unreachable block (ram,0x01872048) */
/* WARNING: Removing unreachable block (ram,0x018721b4) */
/* WARNING: Removing unreachable block (ram,0x01872068) */
/* WARNING: Removing unreachable block (ram,0x0187209c) */
/* WARNING: Removing unreachable block (ram,0x018720fc) */
/* WARNING: Removing unreachable block (ram,0x01872100) */
/* WARNING: Removing unreachable block (ram,0x01872124) */
/* WARNING: Removing unreachable block (ram,0x0187212c) */
/* WARNING: Removing unreachable block (ram,0x01872154) */
/* WARNING: Removing unreachable block (ram,0x01872138) */
/* WARNING: Removing unreachable block (ram,0x01872144) */
/* WARNING: Removing unreachable block (ram,0x01872160) */
/* WARNING: Removing unreachable block (ram,0x018721b8) */
/* WARNING: Removing unreachable block (ram,0x018721e0) */
/* WARNING: Removing unreachable block (ram,0x018721f8) */
/* WARNING: Removing unreachable block (ram,0x01872234) */
/* WARNING: Removing unreachable block (ram,0x01872250) */
/* WARNING: Removing unreachable block (ram,0x01872260) */
/* WARNING: Removing unreachable block (ram,0x01872268) */
/* WARNING: Removing unreachable block (ram,0x0187228c) */
/* WARNING: Removing unreachable block (ram,0x01872290) */
/* WARNING: Removing unreachable block (ram,0x018722ac) */
/* WARNING: Removing unreachable block (ram,0x018722cc) */
/* WARNING: Removing unreachable block (ram,0x018722d0) */
/* WARNING: Removing unreachable block (ram,0x018722d4) */
/* WARNING: Removing unreachable block (ram,0x0187231c) */
/* WARNING: Removing unreachable block (ram,0x018722f0) */
/* WARNING: Removing unreachable block (ram,0x01872338) */
/* WARNING: Removing unreachable block (ram,0x01872360) */
/* WARNING: Removing unreachable block (ram,0x01872380) */
/* WARNING: Removing unreachable block (ram,0x01872390) */
/* WARNING: Removing unreachable block (ram,0x01872398) */
/* WARNING: Removing unreachable block (ram,0x018724a8) */
/* WARNING: Removing unreachable block (ram,0x018724d0) */
/* WARNING: Removing unreachable block (ram,0x018724e4) */
/* WARNING: Removing unreachable block (ram,0x018724f4) */
/* WARNING: Removing unreachable block (ram,0x018724fc) */
/* WARNING: Removing unreachable block (ram,0x01872588) */
/* WARNING: Removing unreachable block (ram,0x018725b0) */
/* WARNING: Removing unreachable block (ram,0x018725c4) */
/* WARNING: Removing unreachable block (ram,0x018725d4) */
/* WARNING: Removing unreachable block (ram,0x018725dc) */
/* WARNING: Removing unreachable block (ram,0x01872668) */
/* WARNING: Removing unreachable block (ram,0x01872690) */
/* WARNING: Removing unreachable block (ram,0x018726b0) */
/* WARNING: Removing unreachable block (ram,0x018726c0) */
/* WARNING: Removing unreachable block (ram,0x018726c8) */
/* WARNING: Removing unreachable block (ram,0x018727a0) */
/* WARNING: Removing unreachable block (ram,0x018727c8) */
/* WARNING: Removing unreachable block (ram,0x018727dc) */
/* WARNING: Removing unreachable block (ram,0x018727ec) */
/* WARNING: Removing unreachable block (ram,0x018727f4) */
/* WARNING: Removing unreachable block (ram,0x01872880) */
/* WARNING: Removing unreachable block (ram,0x018728a8) */
/* WARNING: Removing unreachable block (ram,0x018728bc) */
/* WARNING: Removing unreachable block (ram,0x018728cc) */
/* WARNING: Removing unreachable block (ram,0x018728d4) */
/* WARNING: Removing unreachable block (ram,0x01872960) */
/* WARNING: Removing unreachable block (ram,0x01872998) */
/* WARNING: Removing unreachable block (ram,0x018729a0) */
/* WARNING: Removing unreachable block (ram,0x018729d4) */
/* WARNING: Removing unreachable block (ram,0x018729c0) */
/* WARNING: Removing unreachable block (ram,0x018729e8) */
/* WARNING: Removing unreachable block (ram,0x01872a20) */
/* WARNING: Removing unreachable block (ram,0x01872a28) */
/* WARNING: Removing unreachable block (ram,0x01872a5c) */
/* WARNING: Removing unreachable block (ram,0x01872a48) */
/* WARNING: Removing unreachable block (ram,0x01872a70) */
/* WARNING: Removing unreachable block (ram,0x01872ab0) */
/* WARNING: Removing unreachable block (ram,0x01872ab8) */
/* WARNING: Removing unreachable block (ram,0x01872ad8) */
/* WARNING: Removing unreachable block (ram,0x01872ae0) */
/* WARNING: Removing unreachable block (ram,0x01872b18) */
/* WARNING: Removing unreachable block (ram,0x01872b04) */
/* WARNING: Removing unreachable block (ram,0x01872b30) */
/* WARNING: Removing unreachable block (ram,0x01872b54) */
/* WARNING: Removing unreachable block (ram,0x01872b60) */
/* WARNING: Removing unreachable block (ram,0x01872b84) */
/* WARNING: Removing unreachable block (ram,0x01872ba4) */
/* WARNING: Removing unreachable block (ram,0x01872be0) */
/* WARNING: Removing unreachable block (ram,0x01872be8) */
/* WARNING: Removing unreachable block (ram,0x01872c1c) */
/* WARNING: Removing unreachable block (ram,0x01872c08) */
/* WARNING: Removing unreachable block (ram,0x01872c34) */
/* WARNING: Removing unreachable block (ram,0x01872c74) */
/* WARNING: Removing unreachable block (ram,0x01872c7c) */
/* WARNING: Removing unreachable block (ram,0x01872cb0) */
/* WARNING: Removing unreachable block (ram,0x01872c9c) */
/* WARNING: Removing unreachable block (ram,0x01872cc8) */
/* WARNING: Removing unreachable block (ram,0x01872d08) */
/* WARNING: Removing unreachable block (ram,0x01872cf4) */
/* WARNING: Removing unreachable block (ram,0x01872ca4) */
/* WARNING: Removing unreachable block (ram,0x01872c10) */
/* WARNING: Removing unreachable block (ram,0x01872b8c) */
/* WARNING: Removing unreachable block (ram,0x01872b74) */
/* WARNING: Removing unreachable block (ram,0x01872b0c) */
/* WARNING: Removing unreachable block (ram,0x01872a50) */
/* WARNING: Removing unreachable block (ram,0x018729c8) */
/* WARNING: Removing unreachable block (ram,0x032d1fcc) */
/* WARNING: Removing unreachable block (ram,0x032d1fec) */
/* WARNING: Removing unreachable block (ram,0x032d200c) */
/* WARNING: Removing unreachable block (ram,0x032d2080) */
/* WARNING: Removing unreachable block (ram,0x032d2020) */
/* WARNING: Removing unreachable block (ram,0x032d2034) */
/* WARNING: Removing unreachable block (ram,0x032d203c) */
/* WARNING: Removing unreachable block (ram,0x032d2040) */
/* WARNING: Removing unreachable block (ram,0x032d2090) */
/* WARNING: Removing unreachable block (ram,0x032d20a4) */
/* WARNING: Removing unreachable block (ram,0x032d20ac) */
/* WARNING: Removing unreachable block (ram,0x032d20b0) */
/* WARNING: Removing unreachable block (ram,0x032d14c4) */
/* WARNING: Removing unreachable block (ram,0x032d14fc) */
/* WARNING: Removing unreachable block (ram,0x032d1588) */
/* WARNING: Removing unreachable block (ram,0x032d1594) */
/* WARNING: Removing unreachable block (ram,0x032d159c) */
/* WARNING: Removing unreachable block (ram,0x032d15a0) */
/* WARNING: Removing unreachable block (ram,0x032d15b4) */
/* WARNING: Removing unreachable block (ram,0x032d15b8) */
/* WARNING: Removing unreachable block (ram,0x032d15d4) */
/* WARNING: Removing unreachable block (ram,0x032d15dc) */
/* WARNING: Removing unreachable block (ram,0x032d15e0) */
/* WARNING: Removing unreachable block (ram,0x032d1614) */
/* WARNING: Removing unreachable block (ram,0x032d1628) */
/* WARNING: Removing unreachable block (ram,0x032d1630) */
/* WARNING: Removing unreachable block (ram,0x032d1634) */
/* WARNING: Removing unreachable block (ram,0x032d1674) */
/* WARNING: Removing unreachable block (ram,0x032d1658) */
/* WARNING: Removing unreachable block (ram,0x032d166c) */
/* WARNING: Removing unreachable block (ram,0x032d1678) */
/* WARNING: Removing unreachable block (ram,0x032d1694) */
/* WARNING: Removing unreachable block (ram,0x032d16a0) */
/* WARNING: Removing unreachable block (ram,0x032d16a8) */
/* WARNING: Removing unreachable block (ram,0x032d16ac) */
/* WARNING: Removing unreachable block (ram,0x032d16c0) */
/* WARNING: Removing unreachable block (ram,0x032d16c4) */
/* WARNING: Removing unreachable block (ram,0x032d16e0) */
/* WARNING: Removing unreachable block (ram,0x032d16e8) */
/* WARNING: Removing unreachable block (ram,0x032d16ec) */
/* WARNING: Removing unreachable block (ram,0x032d1700) */
/* WARNING: Removing unreachable block (ram,0x032d1710) */
/* WARNING: Removing unreachable block (ram,0x032d1718) */
/* WARNING: Removing unreachable block (ram,0x032d171c) */
/* WARNING: Removing unreachable block (ram,0x032d1910) */
/* WARNING: Removing unreachable block (ram,0x032d1740) */
/* WARNING: Removing unreachable block (ram,0x032d1754) */
/* WARNING: Removing unreachable block (ram,0x032d1758) */
/* WARNING: Removing unreachable block (ram,0x032d1760) */
/* WARNING: Removing unreachable block (ram,0x032d1768) */
/* WARNING: Removing unreachable block (ram,0x032d1780) */
/* WARNING: Removing unreachable block (ram,0x032d1788) */
/* WARNING: Removing unreachable block (ram,0x032d178c) */
/* WARNING: Removing unreachable block (ram,0x032d17a0) */
/* WARNING: Removing unreachable block (ram,0x032d17a4) */
/* WARNING: Removing unreachable block (ram,0x032d17bc) */
/* WARNING: Removing unreachable block (ram,0x032d17d0) */
/* WARNING: Removing unreachable block (ram,0x032d1830) */
/* WARNING: Removing unreachable block (ram,0x032d17e0) */
/* WARNING: Removing unreachable block (ram,0x032d17f4) */
/* WARNING: Removing unreachable block (ram,0x032d1824) */
/* WARNING: Removing unreachable block (ram,0x032d182c) */
/* WARNING: Removing unreachable block (ram,0x032d1804) */
/* WARNING: Removing unreachable block (ram,0x032d1818) */
/* WARNING: Removing unreachable block (ram,0x032d1820) */
/* WARNING: Removing unreachable block (ram,0x032d1838) */
/* WARNING: Removing unreachable block (ram,0x032d1844) */
/* WARNING: Removing unreachable block (ram,0x032d184c) */
/* WARNING: Removing unreachable block (ram,0x032d1850) */
/* WARNING: Removing unreachable block (ram,0x032d1868) */
/* WARNING: Removing unreachable block (ram,0x032d187c) */
/* WARNING: Removing unreachable block (ram,0x032d1884) */
/* WARNING: Removing unreachable block (ram,0x032d1888) */
/* WARNING: Removing unreachable block (ram,0x032d1898) */
/* WARNING: Removing unreachable block (ram,0x032d18ac) */
/* WARNING: Removing unreachable block (ram,0x032d18b4) */
/* WARNING: Removing unreachable block (ram,0x032d18b8) */
/* WARNING: Removing unreachable block (ram,0x032d18c0) */
/* WARNING: Removing unreachable block (ram,0x032d18d4) */
/* WARNING: Removing unreachable block (ram,0x032d18dc) */
/* WARNING: Removing unreachable block (ram,0x032d18e0) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d15f4) */
/* WARNING: Removing unreachable block (ram,0x032d205c) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x018728f4) */
/* WARNING: Removing unreachable block (ram,0x01872920) */
/* WARNING: Removing unreachable block (ram,0x01872928) */
/* WARNING: Removing unreachable block (ram,0x01872814) */
/* WARNING: Removing unreachable block (ram,0x01872840) */
/* WARNING: Removing unreachable block (ram,0x01872848) */
/* WARNING: Removing unreachable block (ram,0x018726e8) */
/* WARNING: Removing unreachable block (ram,0x01872760) */
/* WARNING: Removing unreachable block (ram,0x01872764) */
/* WARNING: Removing unreachable block (ram,0x0187276c) */
/* WARNING: Removing unreachable block (ram,0x0187272c) */
/* WARNING: Removing unreachable block (ram,0x01872730) */
/* WARNING: Removing unreachable block (ram,0x01872738) */
/* WARNING: Removing unreachable block (ram,0x0187278c) */
/* WARNING: Removing unreachable block (ram,0x018725fc) */
/* WARNING: Removing unreachable block (ram,0x01872628) */
/* WARNING: Removing unreachable block (ram,0x01872630) */
/* WARNING: Removing unreachable block (ram,0x0187251c) */
/* WARNING: Removing unreachable block (ram,0x01872548) */
/* WARNING: Removing unreachable block (ram,0x01872550) */
/* WARNING: Removing unreachable block (ram,0x018723b8) */
/* WARNING: Removing unreachable block (ram,0x01872424) */
/* WARNING: Removing unreachable block (ram,0x0187243c) */
/* WARNING: Removing unreachable block (ram,0x01872444) */
/* WARNING: Removing unreachable block (ram,0x01872448) */
/* WARNING: Removing unreachable block (ram,0x0187246c) */
/* WARNING: Removing unreachable block (ram,0x01872474) */
/* WARNING: Removing unreachable block (ram,0x018723e4) */
/* WARNING: Removing unreachable block (ram,0x018723f4) */
/* WARNING: Removing unreachable block (ram,0x018723fc) */
/* WARNING: Removing unreachable block (ram,0x01872494) */
/* WARNING: Removing unreachable block (ram,0x018722f4) */
/* WARNING: Removing unreachable block (ram,0x01872314) */
/* WARNING: Removing unreachable block (ram,0x01872320) */
/* WARNING: Removing unreachable block (ram,0x018721e8) */
/* WARNING: Removing unreachable block (ram,0x01872178) */
/* WARNING: Removing unreachable block (ram,0x018720ac) */
/* WARNING: Removing unreachable block (ram,0x0187219c) */
/* WARNING: Removing unreachable block (ram,0x018720b4) */
/* WARNING: Removing unreachable block (ram,0x018721a4) */
/* WARNING: Removing unreachable block (ram,0x018720c4) */
/* WARNING: Removing unreachable block (ram,0x018720e4) */
/* WARNING: Removing unreachable block (ram,0x018721ac) */
/* WARNING: Removing unreachable block (ram,0x018721b0) */
/* WARNING: Removing unreachable block (ram,0x018720ec) */
/* WARNING: Removing unreachable block (ram,0x018720d0) */
/* WARNING: Removing unreachable block (ram,0x01871da8) */
/* WARNING: Removing unreachable block (ram,0x01871db0) */
/* WARNING: Removing unreachable block (ram,0x01871c34) */
/* WARNING: Removing unreachable block (ram,0x015d18d0) */
/* WARNING: Removing unreachable block (ram,0x015d1904) */
/* WARNING: Removing unreachable block (ram,0x015d1918) */
/* WARNING: Removing unreachable block (ram,0x015d1924) */
/* WARNING: Removing unreachable block (ram,0x015d1934) */
/* WARNING: Removing unreachable block (ram,0x015d193c) */
/* WARNING: Removing unreachable block (ram,0x015d1940) */
/* WARNING: Removing unreachable block (ram,0x015d1950) */
/* WARNING: Removing unreachable block (ram,0x015d195c) */
/* WARNING: Removing unreachable block (ram,0x015d1960) */
/* WARNING: Removing unreachable block (ram,0x015d1968) */
/* WARNING: Removing unreachable block (ram,0x015d1974) */
/* WARNING: Removing unreachable block (ram,0x015d198c) */
/* WARNING: Removing unreachable block (ram,0x015d1994) */
/* WARNING: Removing unreachable block (ram,0x015d1998) */
/* WARNING: Removing unreachable block (ram,0x015d19b0) */
/* WARNING: Removing unreachable block (ram,0x015d19b8) */
/* WARNING: Removing unreachable block (ram,0x015d19c4) */
/* WARNING: Removing unreachable block (ram,0x015d19d8) */
/* WARNING: Removing unreachable block (ram,0x015d19e0) */
/* WARNING: Removing unreachable block (ram,0x015d19ec) */
/* WARNING: Removing unreachable block (ram,0x015d19f4) */
/* WARNING: Removing unreachable block (ram,0x015d1a04) */
/* WARNING: Removing unreachable block (ram,0x015d1a0c) */
/* WARNING: Removing unreachable block (ram,0x015d1a18) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a84) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a88) */
/* WARNING: Removing unreachable block (ram,0x015d1ab0) */
/* WARNING: Removing unreachable block (ram,0x015d1b0c) */
/* WARNING: Removing unreachable block (ram,0x015d1b24) */
/* WARNING: Removing unreachable block (ram,0x015d1b14) */
/* WARNING: Removing unreachable block (ram,0x015d1b2c) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */
/* WARNING: Removing unreachable block (ram,0x015d1a68) */
/* WARNING: Removing unreachable block (ram,0x015d1608) */
/* WARNING: Removing unreachable block (ram,0x015d1624) */
/* WARNING: Removing unreachable block (ram,0x015d1394) */
/* WARNING: Removing unreachable block (ram,0x015d13a0) */
/* WARNING: Removing unreachable block (ram,0x015d13b0) */
/* WARNING: Removing unreachable block (ram,0x015d11e4) */
/* WARNING: Removing unreachable block (ram,0x015d11f8) */
/* WARNING: Removing unreachable block (ram,0x01595448) */
/* WARNING: Removing unreachable block (ram,0x0159544c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_FrontEnd_FrontEndScene__SetGreyScaleLockedKartPartsOnLoad
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4,uint param_5,
                int param_6,int param_7,undefined2 param_8,int param_9)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint extraout_w1;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  undefined2 uStack_92;
  
  lVar7 = *(long *)(param_4 + 0x90);
  uStack_92 = param_8;
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (param_5 < *(uint *)(lVar7 + 0x18)) {
    *(char *)(lVar7 + (long)(int)param_5 * 0x40 + 0x39) = (char)param_6;
    return param_4;
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  lVar7 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar7 + 0x18)) {
    return (ulong)*(byte *)(lVar7 + (long)(int)auVar10._8_4_ * 0x40 + 0x38);
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  lVar7 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)auVar10._8_4_ * 0x40;
    *(undefined1 *)(lVar7 + 0x38) = 0;
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    return auVar10._0_8_;
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  uVar5 = auVar10._8_4_;
  uVar3 = auVar10._0_8_;
  if (param_6 - 1U < 6) {
    iVar6 = *(int *)(&UNK_033f89ac + (long)(int)(param_6 - 1U) * 4);
  }
  else {
    iVar6 = 1;
  }
  uVar4 = uVar3;
  if ((bRam0000000003eb5177 & 1) == 0) {
    func_0x00f78a20(0x3d3e5c0);
    func_0x00f78a20(0x3d23990);
    uVar4 = func_0x00f78a20(0x3d5e790);
    bRam0000000003eb5177 = 1;
  }
  lVar7 = *(long *)(uVar3 + 0x90);
  if (lVar7 == 0) {
code_r0x015953e4:
    func_0x00f78af4();
  }
  else if (uVar5 < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)uVar5 * 0x40;
    if (*(int *)(lVar7 + 0x3c) == iVar6 && param_9 == 0) {
      return uVar4;
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar7 = *(long *)(uVar3 + 0x90);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar5) goto code_r0x015953e8;
      lVar7 = *(long *)(lVar7 + (long)(int)uVar5 * 0x40 + 0x40);
      if (lVar7 != 0) {
        lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
        if (iVar6 - 2U < 7) {
          fVar9 = *(float *)(&UNK_033f89c4 + (long)(int)(iVar6 - 2U) * 4);
        }
        else {
          fVar9 = 135.0;
        }
        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(lVar7,0,0);
        uVar2 = *(undefined8 *)(uVar3 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
        if (iVar1 != 0) {
          if (*(long *)(uVar3 + 200) == 0) goto code_r0x015953e4;
          /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetCustomisationCameraPosition*/ func_0x01595ca0(*(long *)(uVar3 + 200),iVar6,0);
        }
        if (param_7 == 0) {
          /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,fVar9,0,0);
          if (lVar7 == 0) goto code_r0x015953e4;
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar7,0);
        }
        else {
          fVar8 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(fVar9 * fVar8,fVar9 * param_2,fVar9 * param_3,_UNK_033f83c8,lVar7,
                                  0,0);
          /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,0xd,uRam0000000003d5e790);
        }
        /*System.Nullable<bool>$$GetValueOrDefault*/ func_0x0261a6ac(&uStack_92,iVar6 == 3,uRam0000000003d3e5c0);
        goto code_r0x015953f4;
      }
    }
    goto code_r0x015953e4;
  }
code_r0x015953e8:
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
code_r0x015953f4:
  lVar7 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar7 + 0x18)) {
    return *(ulong *)(lVar7 + (long)(int)auVar10._8_4_ * 0x40 + 0x20);
  }
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
  if (extraout_w1 < 7) {
    return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x15950b0 | Atlas.FrontEnd.FrontEndScene.GetKartVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x01595390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01595408) */
/* WARNING: Removing unreachable block (ram,0x0159540c) */
/* WARNING: Removing unreachable block (ram,0x01595424) */
/* WARNING: Removing unreachable block (ram,0x01595414) */
/* WARNING: Removing unreachable block (ram,0x01595418) */
/* WARNING: Removing unreachable block (ram,0x01595394) */
/* WARNING: Removing unreachable block (ram,0x015953b0) */
/* WARNING: Removing unreachable block (ram,0x015953bc) */
/* WARNING: Removing unreachable block (ram,0x0159543c) */
/* WARNING: Removing unreachable block (ram,0x01595440) */
/* WARNING: Removing unreachable block (ram,0x01595458) */
/* WARNING: Removing unreachable block (ram,0x0159549c) */
/* WARNING: Removing unreachable block (ram,0x0159546c) */
/* WARNING: Removing unreachable block (ram,0x015954a0) */
/* WARNING: Removing unreachable block (ram,0x01595478) */
/* WARNING: Removing unreachable block (ram,0x01595494) */
/* WARNING: Removing unreachable block (ram,0x01595488) */
/* WARNING: Removing unreachable block (ram,0x015d10cc) */
/* WARNING: Removing unreachable block (ram,0x015d10ec) */
/* WARNING: Removing unreachable block (ram,0x015d1100) */
/* WARNING: Removing unreachable block (ram,0x015d1108) */
/* WARNING: Removing unreachable block (ram,0x015d111c) */
/* WARNING: Removing unreachable block (ram,0x015d1130) */
/* WARNING: Removing unreachable block (ram,0x015d1144) */
/* WARNING: Removing unreachable block (ram,0x015d1158) */
/* WARNING: Removing unreachable block (ram,0x015d116c) */
/* WARNING: Removing unreachable block (ram,0x015d1180) */
/* WARNING: Removing unreachable block (ram,0x015d1194) */
/* WARNING: Removing unreachable block (ram,0x015d119c) */
/* WARNING: Removing unreachable block (ram,0x015d11a0) */
/* WARNING: Removing unreachable block (ram,0x015d11ac) */
/* WARNING: Removing unreachable block (ram,0x015d11bc) */
/* WARNING: Removing unreachable block (ram,0x015d11c4) */
/* WARNING: Removing unreachable block (ram,0x015d11c8) */
/* WARNING: Removing unreachable block (ram,0x015d1208) */
/* WARNING: Removing unreachable block (ram,0x015d11d8) */
/* WARNING: Removing unreachable block (ram,0x015d120c) */
/* WARNING: Removing unreachable block (ram,0x015d1240) */
/* WARNING: Removing unreachable block (ram,0x015d1260) */
/* WARNING: Removing unreachable block (ram,0x015d126c) */
/* WARNING: Removing unreachable block (ram,0x015d1284) */
/* WARNING: Removing unreachable block (ram,0x015d128c) */
/* WARNING: Removing unreachable block (ram,0x015d1298) */
/* WARNING: Removing unreachable block (ram,0x015d12a8) */
/* WARNING: Removing unreachable block (ram,0x015d12b0) */
/* WARNING: Removing unreachable block (ram,0x015d12bc) */
/* WARNING: Removing unreachable block (ram,0x015d12c4) */
/* WARNING: Removing unreachable block (ram,0x015d12d8) */
/* WARNING: Removing unreachable block (ram,0x015d12f0) */
/* WARNING: Removing unreachable block (ram,0x015d12fc) */
/* WARNING: Removing unreachable block (ram,0x015d130c) */
/* WARNING: Removing unreachable block (ram,0x015d1314) */
/* WARNING: Removing unreachable block (ram,0x015d1320) */
/* WARNING: Removing unreachable block (ram,0x015d1328) */
/* WARNING: Removing unreachable block (ram,0x015d1334) */
/* WARNING: Removing unreachable block (ram,0x015d133c) */
/* WARNING: Removing unreachable block (ram,0x015d1348) */
/* WARNING: Removing unreachable block (ram,0x015d1350) */
/* WARNING: Removing unreachable block (ram,0x015d135c) */
/* WARNING: Removing unreachable block (ram,0x015d1374) */
/* WARNING: Removing unreachable block (ram,0x015d137c) */
/* WARNING: Removing unreachable block (ram,0x015d1384) */
/* WARNING: Removing unreachable block (ram,0x015d13c8) */
/* WARNING: Removing unreachable block (ram,0x015d1388) */
/* WARNING: Removing unreachable block (ram,0x015d13cc) */
/* WARNING: Removing unreachable block (ram,0x015d1408) */
/* WARNING: Removing unreachable block (ram,0x015d1428) */
/* WARNING: Removing unreachable block (ram,0x015d1434) */
/* WARNING: Removing unreachable block (ram,0x015d15d8) */
/* WARNING: Removing unreachable block (ram,0x015d15e0) */
/* WARNING: Removing unreachable block (ram,0x015d1508) */
/* WARNING: Removing unreachable block (ram,0x015d1510) */
/* WARNING: Removing unreachable block (ram,0x015d1524) */
/* WARNING: Removing unreachable block (ram,0x015d153c) */
/* WARNING: Removing unreachable block (ram,0x015d1544) */
/* WARNING: Removing unreachable block (ram,0x015d1548) */
/* WARNING: Removing unreachable block (ram,0x015d1558) */
/* WARNING: Removing unreachable block (ram,0x015d1560) */
/* WARNING: Removing unreachable block (ram,0x015d1568) */
/* WARNING: Removing unreachable block (ram,0x015d1580) */
/* WARNING: Removing unreachable block (ram,0x015d1588) */
/* WARNING: Removing unreachable block (ram,0x015d1598) */
/* WARNING: Removing unreachable block (ram,0x015d15a0) */
/* WARNING: Removing unreachable block (ram,0x015d15a4) */
/* WARNING: Removing unreachable block (ram,0x015d15b8) */
/* WARNING: Removing unreachable block (ram,0x015d15c0) */
/* WARNING: Removing unreachable block (ram,0x015d15c8) */
/* WARNING: Removing unreachable block (ram,0x015d14f0) */
/* WARNING: Removing unreachable block (ram,0x015d14f8) */
/* WARNING: Removing unreachable block (ram,0x015d14d8) */
/* WARNING: Removing unreachable block (ram,0x015d14e0) */
/* WARNING: Removing unreachable block (ram,0x015d14c0) */
/* WARNING: Removing unreachable block (ram,0x015d14c8) */
/* WARNING: Removing unreachable block (ram,0x015d1488) */
/* WARNING: Removing unreachable block (ram,0x015d1490) */
/* WARNING: Removing unreachable block (ram,0x015d14a4) */
/* WARNING: Removing unreachable block (ram,0x015d14ac) */
/* WARNING: Removing unreachable block (ram,0x015d14b4) */
/* WARNING: Removing unreachable block (ram,0x015d1450) */
/* WARNING: Removing unreachable block (ram,0x015d1458) */
/* WARNING: Removing unreachable block (ram,0x015d146c) */
/* WARNING: Removing unreachable block (ram,0x015d1474) */
/* WARNING: Removing unreachable block (ram,0x015d147c) */
/* WARNING: Removing unreachable block (ram,0x015d15ec) */
/* WARNING: Removing unreachable block (ram,0x015d15f4) */
/* WARNING: Removing unreachable block (ram,0x015d163c) */
/* WARNING: Removing unreachable block (ram,0x015d15fc) */
/* WARNING: Removing unreachable block (ram,0x015d1640) */
/* WARNING: Removing unreachable block (ram,0x015d1678) */
/* WARNING: Removing unreachable block (ram,0x015d168c) */
/* WARNING: Removing unreachable block (ram,0x01871bfc) */
/* WARNING: Removing unreachable block (ram,0x01871c18) */
/* WARNING: Removing unreachable block (ram,0x01871c58) */
/* WARNING: Removing unreachable block (ram,0x01871c90) */
/* WARNING: Removing unreachable block (ram,0x01871cbc) */
/* WARNING: Removing unreachable block (ram,0x01871ccc) */
/* WARNING: Removing unreachable block (ram,0x01871cd4) */
/* WARNING: Removing unreachable block (ram,0x01871cd8) */
/* WARNING: Removing unreachable block (ram,0x01871cec) */
/* WARNING: Removing unreachable block (ram,0x01871cf4) */
/* WARNING: Removing unreachable block (ram,0x01871cfc) */
/* WARNING: Removing unreachable block (ram,0x01871d24) */
/* WARNING: Removing unreachable block (ram,0x01871d2c) */
/* WARNING: Removing unreachable block (ram,0x01871d5c) */
/* WARNING: Removing unreachable block (ram,0x01871d64) */
/* WARNING: Removing unreachable block (ram,0x01871d68) */
/* WARNING: Removing unreachable block (ram,0x01871d74) */
/* WARNING: Removing unreachable block (ram,0x01871d84) */
/* WARNING: Removing unreachable block (ram,0x01871d8c) */
/* WARNING: Removing unreachable block (ram,0x01871d90) */
/* WARNING: Removing unreachable block (ram,0x01871da0) */
/* WARNING: Removing unreachable block (ram,0x01871dcc) */
/* WARNING: Removing unreachable block (ram,0x01871e28) */
/* WARNING: Removing unreachable block (ram,0x01871eb4) */
/* WARNING: Removing unreachable block (ram,0x01871ecc) */
/* WARNING: Removing unreachable block (ram,0x01871ed4) */
/* WARNING: Removing unreachable block (ram,0x01871ed8) */
/* WARNING: Removing unreachable block (ram,0x01871ee8) */
/* WARNING: Removing unreachable block (ram,0x01871eec) */
/* WARNING: Removing unreachable block (ram,0x01871f10) */
/* WARNING: Removing unreachable block (ram,0x01871f1c) */
/* WARNING: Removing unreachable block (ram,0x01871f24) */
/* WARNING: Removing unreachable block (ram,0x01871f28) */
/* WARNING: Removing unreachable block (ram,0x01872014) */
/* WARNING: Removing unreachable block (ram,0x01871f38) */
/* WARNING: Removing unreachable block (ram,0x01871f44) */
/* WARNING: Removing unreachable block (ram,0x01871f4c) */
/* WARNING: Removing unreachable block (ram,0x01871f50) */
/* WARNING: Removing unreachable block (ram,0x01872020) */
/* WARNING: Removing unreachable block (ram,0x01871f80) */
/* WARNING: Removing unreachable block (ram,0x01871f88) */
/* WARNING: Removing unreachable block (ram,0x01871fa4) */
/* WARNING: Removing unreachable block (ram,0x01871fac) */
/* WARNING: Removing unreachable block (ram,0x01871fd4) */
/* WARNING: Removing unreachable block (ram,0x01871fdc) */
/* WARNING: Removing unreachable block (ram,0x01872024) */
/* WARNING: Removing unreachable block (ram,0x01872040) */
/* WARNING: Removing unreachable block (ram,0x01872048) */
/* WARNING: Removing unreachable block (ram,0x018721b4) */
/* WARNING: Removing unreachable block (ram,0x01872068) */
/* WARNING: Removing unreachable block (ram,0x0187209c) */
/* WARNING: Removing unreachable block (ram,0x018720fc) */
/* WARNING: Removing unreachable block (ram,0x01872100) */
/* WARNING: Removing unreachable block (ram,0x01872124) */
/* WARNING: Removing unreachable block (ram,0x0187212c) */
/* WARNING: Removing unreachable block (ram,0x01872154) */
/* WARNING: Removing unreachable block (ram,0x01872138) */
/* WARNING: Removing unreachable block (ram,0x01872144) */
/* WARNING: Removing unreachable block (ram,0x01872160) */
/* WARNING: Removing unreachable block (ram,0x018721b8) */
/* WARNING: Removing unreachable block (ram,0x018721e0) */
/* WARNING: Removing unreachable block (ram,0x018721f8) */
/* WARNING: Removing unreachable block (ram,0x01872234) */
/* WARNING: Removing unreachable block (ram,0x01872250) */
/* WARNING: Removing unreachable block (ram,0x01872260) */
/* WARNING: Removing unreachable block (ram,0x01872268) */
/* WARNING: Removing unreachable block (ram,0x0187228c) */
/* WARNING: Removing unreachable block (ram,0x01872290) */
/* WARNING: Removing unreachable block (ram,0x018722ac) */
/* WARNING: Removing unreachable block (ram,0x018722cc) */
/* WARNING: Removing unreachable block (ram,0x018722d0) */
/* WARNING: Removing unreachable block (ram,0x018722d4) */
/* WARNING: Removing unreachable block (ram,0x0187231c) */
/* WARNING: Removing unreachable block (ram,0x018722f0) */
/* WARNING: Removing unreachable block (ram,0x01872338) */
/* WARNING: Removing unreachable block (ram,0x01872360) */
/* WARNING: Removing unreachable block (ram,0x01872380) */
/* WARNING: Removing unreachable block (ram,0x01872390) */
/* WARNING: Removing unreachable block (ram,0x01872398) */
/* WARNING: Removing unreachable block (ram,0x018724a8) */
/* WARNING: Removing unreachable block (ram,0x018724d0) */
/* WARNING: Removing unreachable block (ram,0x018724e4) */
/* WARNING: Removing unreachable block (ram,0x018724f4) */
/* WARNING: Removing unreachable block (ram,0x018724fc) */
/* WARNING: Removing unreachable block (ram,0x01872588) */
/* WARNING: Removing unreachable block (ram,0x018725b0) */
/* WARNING: Removing unreachable block (ram,0x018725c4) */
/* WARNING: Removing unreachable block (ram,0x018725d4) */
/* WARNING: Removing unreachable block (ram,0x018725dc) */
/* WARNING: Removing unreachable block (ram,0x01872668) */
/* WARNING: Removing unreachable block (ram,0x01872690) */
/* WARNING: Removing unreachable block (ram,0x018726b0) */
/* WARNING: Removing unreachable block (ram,0x018726c0) */
/* WARNING: Removing unreachable block (ram,0x018726c8) */
/* WARNING: Removing unreachable block (ram,0x018727a0) */
/* WARNING: Removing unreachable block (ram,0x018727c8) */
/* WARNING: Removing unreachable block (ram,0x018727dc) */
/* WARNING: Removing unreachable block (ram,0x018727ec) */
/* WARNING: Removing unreachable block (ram,0x018727f4) */
/* WARNING: Removing unreachable block (ram,0x01872880) */
/* WARNING: Removing unreachable block (ram,0x018728a8) */
/* WARNING: Removing unreachable block (ram,0x018728bc) */
/* WARNING: Removing unreachable block (ram,0x018728cc) */
/* WARNING: Removing unreachable block (ram,0x018728d4) */
/* WARNING: Removing unreachable block (ram,0x01872960) */
/* WARNING: Removing unreachable block (ram,0x01872998) */
/* WARNING: Removing unreachable block (ram,0x018729a0) */
/* WARNING: Removing unreachable block (ram,0x018729d4) */
/* WARNING: Removing unreachable block (ram,0x018729c0) */
/* WARNING: Removing unreachable block (ram,0x018729e8) */
/* WARNING: Removing unreachable block (ram,0x01872a20) */
/* WARNING: Removing unreachable block (ram,0x01872a28) */
/* WARNING: Removing unreachable block (ram,0x01872a5c) */
/* WARNING: Removing unreachable block (ram,0x01872a48) */
/* WARNING: Removing unreachable block (ram,0x01872a70) */
/* WARNING: Removing unreachable block (ram,0x01872ab0) */
/* WARNING: Removing unreachable block (ram,0x01872ab8) */
/* WARNING: Removing unreachable block (ram,0x01872ad8) */
/* WARNING: Removing unreachable block (ram,0x01872ae0) */
/* WARNING: Removing unreachable block (ram,0x01872b18) */
/* WARNING: Removing unreachable block (ram,0x01872b04) */
/* WARNING: Removing unreachable block (ram,0x01872b30) */
/* WARNING: Removing unreachable block (ram,0x01872b54) */
/* WARNING: Removing unreachable block (ram,0x01872b60) */
/* WARNING: Removing unreachable block (ram,0x01872b84) */
/* WARNING: Removing unreachable block (ram,0x01872ba4) */
/* WARNING: Removing unreachable block (ram,0x01872be0) */
/* WARNING: Removing unreachable block (ram,0x01872be8) */
/* WARNING: Removing unreachable block (ram,0x01872c1c) */
/* WARNING: Removing unreachable block (ram,0x01872c08) */
/* WARNING: Removing unreachable block (ram,0x01872c34) */
/* WARNING: Removing unreachable block (ram,0x01872c74) */
/* WARNING: Removing unreachable block (ram,0x01872c7c) */
/* WARNING: Removing unreachable block (ram,0x01872cb0) */
/* WARNING: Removing unreachable block (ram,0x01872c9c) */
/* WARNING: Removing unreachable block (ram,0x01872cc8) */
/* WARNING: Removing unreachable block (ram,0x01872d08) */
/* WARNING: Removing unreachable block (ram,0x01872cf4) */
/* WARNING: Removing unreachable block (ram,0x01872ca4) */
/* WARNING: Removing unreachable block (ram,0x01872c10) */
/* WARNING: Removing unreachable block (ram,0x01872b8c) */
/* WARNING: Removing unreachable block (ram,0x01872b74) */
/* WARNING: Removing unreachable block (ram,0x01872b0c) */
/* WARNING: Removing unreachable block (ram,0x01872a50) */
/* WARNING: Removing unreachable block (ram,0x018729c8) */
/* WARNING: Removing unreachable block (ram,0x032d1fcc) */
/* WARNING: Removing unreachable block (ram,0x032d1fec) */
/* WARNING: Removing unreachable block (ram,0x032d200c) */
/* WARNING: Removing unreachable block (ram,0x032d2080) */
/* WARNING: Removing unreachable block (ram,0x032d2020) */
/* WARNING: Removing unreachable block (ram,0x032d2034) */
/* WARNING: Removing unreachable block (ram,0x032d203c) */
/* WARNING: Removing unreachable block (ram,0x032d2040) */
/* WARNING: Removing unreachable block (ram,0x032d2090) */
/* WARNING: Removing unreachable block (ram,0x032d20a4) */
/* WARNING: Removing unreachable block (ram,0x032d20ac) */
/* WARNING: Removing unreachable block (ram,0x032d20b0) */
/* WARNING: Removing unreachable block (ram,0x032d14c4) */
/* WARNING: Removing unreachable block (ram,0x032d14fc) */
/* WARNING: Removing unreachable block (ram,0x032d1588) */
/* WARNING: Removing unreachable block (ram,0x032d1594) */
/* WARNING: Removing unreachable block (ram,0x032d159c) */
/* WARNING: Removing unreachable block (ram,0x032d15a0) */
/* WARNING: Removing unreachable block (ram,0x032d15b4) */
/* WARNING: Removing unreachable block (ram,0x032d15b8) */
/* WARNING: Removing unreachable block (ram,0x032d15d4) */
/* WARNING: Removing unreachable block (ram,0x032d15dc) */
/* WARNING: Removing unreachable block (ram,0x032d15e0) */
/* WARNING: Removing unreachable block (ram,0x032d1614) */
/* WARNING: Removing unreachable block (ram,0x032d1628) */
/* WARNING: Removing unreachable block (ram,0x032d1630) */
/* WARNING: Removing unreachable block (ram,0x032d1634) */
/* WARNING: Removing unreachable block (ram,0x032d1674) */
/* WARNING: Removing unreachable block (ram,0x032d1658) */
/* WARNING: Removing unreachable block (ram,0x032d166c) */
/* WARNING: Removing unreachable block (ram,0x032d1678) */
/* WARNING: Removing unreachable block (ram,0x032d1694) */
/* WARNING: Removing unreachable block (ram,0x032d16a0) */
/* WARNING: Removing unreachable block (ram,0x032d16a8) */
/* WARNING: Removing unreachable block (ram,0x032d16ac) */
/* WARNING: Removing unreachable block (ram,0x032d16c0) */
/* WARNING: Removing unreachable block (ram,0x032d16c4) */
/* WARNING: Removing unreachable block (ram,0x032d16e0) */
/* WARNING: Removing unreachable block (ram,0x032d16e8) */
/* WARNING: Removing unreachable block (ram,0x032d16ec) */
/* WARNING: Removing unreachable block (ram,0x032d1700) */
/* WARNING: Removing unreachable block (ram,0x032d1710) */
/* WARNING: Removing unreachable block (ram,0x032d1718) */
/* WARNING: Removing unreachable block (ram,0x032d171c) */
/* WARNING: Removing unreachable block (ram,0x032d1910) */
/* WARNING: Removing unreachable block (ram,0x032d1740) */
/* WARNING: Removing unreachable block (ram,0x032d1754) */
/* WARNING: Removing unreachable block (ram,0x032d1758) */
/* WARNING: Removing unreachable block (ram,0x032d1760) */
/* WARNING: Removing unreachable block (ram,0x032d1768) */
/* WARNING: Removing unreachable block (ram,0x032d1780) */
/* WARNING: Removing unreachable block (ram,0x032d1788) */
/* WARNING: Removing unreachable block (ram,0x032d178c) */
/* WARNING: Removing unreachable block (ram,0x032d17a0) */
/* WARNING: Removing unreachable block (ram,0x032d17a4) */
/* WARNING: Removing unreachable block (ram,0x032d17bc) */
/* WARNING: Removing unreachable block (ram,0x032d17d0) */
/* WARNING: Removing unreachable block (ram,0x032d1830) */
/* WARNING: Removing unreachable block (ram,0x032d17e0) */
/* WARNING: Removing unreachable block (ram,0x032d17f4) */
/* WARNING: Removing unreachable block (ram,0x032d1824) */
/* WARNING: Removing unreachable block (ram,0x032d182c) */
/* WARNING: Removing unreachable block (ram,0x032d1804) */
/* WARNING: Removing unreachable block (ram,0x032d1818) */
/* WARNING: Removing unreachable block (ram,0x032d1820) */
/* WARNING: Removing unreachable block (ram,0x032d1838) */
/* WARNING: Removing unreachable block (ram,0x032d1844) */
/* WARNING: Removing unreachable block (ram,0x032d184c) */
/* WARNING: Removing unreachable block (ram,0x032d1850) */
/* WARNING: Removing unreachable block (ram,0x032d1868) */
/* WARNING: Removing unreachable block (ram,0x032d187c) */
/* WARNING: Removing unreachable block (ram,0x032d1884) */
/* WARNING: Removing unreachable block (ram,0x032d1888) */
/* WARNING: Removing unreachable block (ram,0x032d1898) */
/* WARNING: Removing unreachable block (ram,0x032d18ac) */
/* WARNING: Removing unreachable block (ram,0x032d18b4) */
/* WARNING: Removing unreachable block (ram,0x032d18b8) */
/* WARNING: Removing unreachable block (ram,0x032d18c0) */
/* WARNING: Removing unreachable block (ram,0x032d18d4) */
/* WARNING: Removing unreachable block (ram,0x032d18dc) */
/* WARNING: Removing unreachable block (ram,0x032d18e0) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d15f4) */
/* WARNING: Removing unreachable block (ram,0x032d205c) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x018728f4) */
/* WARNING: Removing unreachable block (ram,0x01872920) */
/* WARNING: Removing unreachable block (ram,0x01872928) */
/* WARNING: Removing unreachable block (ram,0x01872814) */
/* WARNING: Removing unreachable block (ram,0x01872840) */
/* WARNING: Removing unreachable block (ram,0x01872848) */
/* WARNING: Removing unreachable block (ram,0x018726e8) */
/* WARNING: Removing unreachable block (ram,0x01872760) */
/* WARNING: Removing unreachable block (ram,0x01872764) */
/* WARNING: Removing unreachable block (ram,0x0187276c) */
/* WARNING: Removing unreachable block (ram,0x0187272c) */
/* WARNING: Removing unreachable block (ram,0x01872730) */
/* WARNING: Removing unreachable block (ram,0x01872738) */
/* WARNING: Removing unreachable block (ram,0x0187278c) */
/* WARNING: Removing unreachable block (ram,0x018725fc) */
/* WARNING: Removing unreachable block (ram,0x01872628) */
/* WARNING: Removing unreachable block (ram,0x01872630) */
/* WARNING: Removing unreachable block (ram,0x0187251c) */
/* WARNING: Removing unreachable block (ram,0x01872548) */
/* WARNING: Removing unreachable block (ram,0x01872550) */
/* WARNING: Removing unreachable block (ram,0x018723b8) */
/* WARNING: Removing unreachable block (ram,0x01872424) */
/* WARNING: Removing unreachable block (ram,0x0187243c) */
/* WARNING: Removing unreachable block (ram,0x01872444) */
/* WARNING: Removing unreachable block (ram,0x01872448) */
/* WARNING: Removing unreachable block (ram,0x0187246c) */
/* WARNING: Removing unreachable block (ram,0x01872474) */
/* WARNING: Removing unreachable block (ram,0x018723e4) */
/* WARNING: Removing unreachable block (ram,0x018723f4) */
/* WARNING: Removing unreachable block (ram,0x018723fc) */
/* WARNING: Removing unreachable block (ram,0x01872494) */
/* WARNING: Removing unreachable block (ram,0x018722f4) */
/* WARNING: Removing unreachable block (ram,0x01872314) */
/* WARNING: Removing unreachable block (ram,0x01872320) */
/* WARNING: Removing unreachable block (ram,0x018721e8) */
/* WARNING: Removing unreachable block (ram,0x01872178) */
/* WARNING: Removing unreachable block (ram,0x018720ac) */
/* WARNING: Removing unreachable block (ram,0x0187219c) */
/* WARNING: Removing unreachable block (ram,0x018720b4) */
/* WARNING: Removing unreachable block (ram,0x018721a4) */
/* WARNING: Removing unreachable block (ram,0x018720c4) */
/* WARNING: Removing unreachable block (ram,0x018720e4) */
/* WARNING: Removing unreachable block (ram,0x018721ac) */
/* WARNING: Removing unreachable block (ram,0x018721b0) */
/* WARNING: Removing unreachable block (ram,0x018720ec) */
/* WARNING: Removing unreachable block (ram,0x018720d0) */
/* WARNING: Removing unreachable block (ram,0x01871da8) */
/* WARNING: Removing unreachable block (ram,0x01871db0) */
/* WARNING: Removing unreachable block (ram,0x01871c34) */
/* WARNING: Removing unreachable block (ram,0x015d18d0) */
/* WARNING: Removing unreachable block (ram,0x015d1904) */
/* WARNING: Removing unreachable block (ram,0x015d1918) */
/* WARNING: Removing unreachable block (ram,0x015d1924) */
/* WARNING: Removing unreachable block (ram,0x015d1934) */
/* WARNING: Removing unreachable block (ram,0x015d193c) */
/* WARNING: Removing unreachable block (ram,0x015d1940) */
/* WARNING: Removing unreachable block (ram,0x015d1950) */
/* WARNING: Removing unreachable block (ram,0x015d195c) */
/* WARNING: Removing unreachable block (ram,0x015d1960) */
/* WARNING: Removing unreachable block (ram,0x015d1968) */
/* WARNING: Removing unreachable block (ram,0x015d1974) */
/* WARNING: Removing unreachable block (ram,0x015d198c) */
/* WARNING: Removing unreachable block (ram,0x015d1994) */
/* WARNING: Removing unreachable block (ram,0x015d1998) */
/* WARNING: Removing unreachable block (ram,0x015d19b0) */
/* WARNING: Removing unreachable block (ram,0x015d19b8) */
/* WARNING: Removing unreachable block (ram,0x015d19c4) */
/* WARNING: Removing unreachable block (ram,0x015d19d8) */
/* WARNING: Removing unreachable block (ram,0x015d19e0) */
/* WARNING: Removing unreachable block (ram,0x015d19ec) */
/* WARNING: Removing unreachable block (ram,0x015d19f4) */
/* WARNING: Removing unreachable block (ram,0x015d1a04) */
/* WARNING: Removing unreachable block (ram,0x015d1a0c) */
/* WARNING: Removing unreachable block (ram,0x015d1a18) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a84) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a88) */
/* WARNING: Removing unreachable block (ram,0x015d1ab0) */
/* WARNING: Removing unreachable block (ram,0x015d1b0c) */
/* WARNING: Removing unreachable block (ram,0x015d1b24) */
/* WARNING: Removing unreachable block (ram,0x015d1b14) */
/* WARNING: Removing unreachable block (ram,0x015d1b2c) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */
/* WARNING: Removing unreachable block (ram,0x015d1a68) */
/* WARNING: Removing unreachable block (ram,0x015d1608) */
/* WARNING: Removing unreachable block (ram,0x015d1624) */
/* WARNING: Removing unreachable block (ram,0x015d1394) */
/* WARNING: Removing unreachable block (ram,0x015d13a0) */
/* WARNING: Removing unreachable block (ram,0x015d13b0) */
/* WARNING: Removing unreachable block (ram,0x015d11e4) */
/* WARNING: Removing unreachable block (ram,0x015d11f8) */
/* WARNING: Removing unreachable block (ram,0x01595448) */
/* WARNING: Removing unreachable block (ram,0x0159544c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_FrontEnd_FrontEndScene__GetKartVisible
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,uint param_5,
                int param_6,int param_7,undefined2 param_8,int param_9)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint extraout_w1;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  undefined2 uStack_82;
  
  lVar7 = *(long *)(param_4 + 0x90);
  uStack_82 = param_8;
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (param_5 < *(uint *)(lVar7 + 0x18)) {
    return (ulong)*(byte *)(lVar7 + (long)(int)param_5 * 0x40 + 0x38);
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  lVar7 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)auVar10._8_4_ * 0x40;
    *(undefined1 *)(lVar7 + 0x38) = 0;
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    return auVar10._0_8_;
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  uVar5 = auVar10._8_4_;
  uVar3 = auVar10._0_8_;
  if (param_6 - 1U < 6) {
    iVar6 = *(int *)(&UNK_033f89ac + (long)(int)(param_6 - 1U) * 4);
  }
  else {
    iVar6 = 1;
  }
  uVar4 = uVar3;
  if ((bRam0000000003eb5177 & 1) == 0) {
    func_0x00f78a20(0x3d3e5c0);
    func_0x00f78a20(0x3d23990);
    uVar4 = func_0x00f78a20(0x3d5e790);
    bRam0000000003eb5177 = 1;
  }
  lVar7 = *(long *)(uVar3 + 0x90);
  if (lVar7 == 0) {
code_r0x015953e4:
    func_0x00f78af4();
  }
  else if (uVar5 < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)uVar5 * 0x40;
    if (*(int *)(lVar7 + 0x3c) == iVar6 && param_9 == 0) {
      return uVar4;
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar7 = *(long *)(uVar3 + 0x90);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar5) goto code_r0x015953e8;
      lVar7 = *(long *)(lVar7 + (long)(int)uVar5 * 0x40 + 0x40);
      if (lVar7 != 0) {
        lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
        if (iVar6 - 2U < 7) {
          fVar9 = *(float *)(&UNK_033f89c4 + (long)(int)(iVar6 - 2U) * 4);
        }
        else {
          fVar9 = 135.0;
        }
        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(lVar7,0,0);
        uVar2 = *(undefined8 *)(uVar3 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
        if (iVar1 != 0) {
          if (*(long *)(uVar3 + 200) == 0) goto code_r0x015953e4;
          /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetCustomisationCameraPosition*/ func_0x01595ca0(*(long *)(uVar3 + 200),iVar6,0);
        }
        if (param_7 == 0) {
          /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,fVar9,0,0);
          if (lVar7 == 0) goto code_r0x015953e4;
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar7,0);
        }
        else {
          fVar8 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(fVar9 * fVar8,fVar9 * param_2,fVar9 * param_3,_UNK_033f83c8,lVar7,
                                  0,0);
          /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,0xd,uRam0000000003d5e790);
        }
        /*System.Nullable<bool>$$GetValueOrDefault*/ func_0x0261a6ac(&uStack_82,iVar6 == 3,uRam0000000003d3e5c0);
        goto code_r0x015953f4;
      }
    }
    goto code_r0x015953e4;
  }
code_r0x015953e8:
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
code_r0x015953f4:
  lVar7 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar7 + 0x18)) {
    return *(ulong *)(lVar7 + (long)(int)auVar10._8_4_ * 0x40 + 0x20);
  }
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
  if (extraout_w1 < 7) {
    return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x15950f0 | Atlas.FrontEnd.FrontEndScene.SetKartHidden
// ============================================================

/* WARNING: Possible PIC construction at 0x01595390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01595408) */
/* WARNING: Removing unreachable block (ram,0x0159540c) */
/* WARNING: Removing unreachable block (ram,0x01595424) */
/* WARNING: Removing unreachable block (ram,0x01595414) */
/* WARNING: Removing unreachable block (ram,0x01595418) */
/* WARNING: Removing unreachable block (ram,0x01595394) */
/* WARNING: Removing unreachable block (ram,0x015953b0) */
/* WARNING: Removing unreachable block (ram,0x015953bc) */
/* WARNING: Removing unreachable block (ram,0x0159543c) */
/* WARNING: Removing unreachable block (ram,0x01595440) */
/* WARNING: Removing unreachable block (ram,0x01595458) */
/* WARNING: Removing unreachable block (ram,0x0159549c) */
/* WARNING: Removing unreachable block (ram,0x0159546c) */
/* WARNING: Removing unreachable block (ram,0x015954a0) */
/* WARNING: Removing unreachable block (ram,0x01595478) */
/* WARNING: Removing unreachable block (ram,0x01595494) */
/* WARNING: Removing unreachable block (ram,0x01595488) */
/* WARNING: Removing unreachable block (ram,0x015d10cc) */
/* WARNING: Removing unreachable block (ram,0x015d10ec) */
/* WARNING: Removing unreachable block (ram,0x015d1100) */
/* WARNING: Removing unreachable block (ram,0x015d1108) */
/* WARNING: Removing unreachable block (ram,0x015d111c) */
/* WARNING: Removing unreachable block (ram,0x015d1130) */
/* WARNING: Removing unreachable block (ram,0x015d1144) */
/* WARNING: Removing unreachable block (ram,0x015d1158) */
/* WARNING: Removing unreachable block (ram,0x015d116c) */
/* WARNING: Removing unreachable block (ram,0x015d1180) */
/* WARNING: Removing unreachable block (ram,0x015d1194) */
/* WARNING: Removing unreachable block (ram,0x015d119c) */
/* WARNING: Removing unreachable block (ram,0x015d11a0) */
/* WARNING: Removing unreachable block (ram,0x015d11ac) */
/* WARNING: Removing unreachable block (ram,0x015d11bc) */
/* WARNING: Removing unreachable block (ram,0x015d11c4) */
/* WARNING: Removing unreachable block (ram,0x015d11c8) */
/* WARNING: Removing unreachable block (ram,0x015d1208) */
/* WARNING: Removing unreachable block (ram,0x015d11d8) */
/* WARNING: Removing unreachable block (ram,0x015d120c) */
/* WARNING: Removing unreachable block (ram,0x015d1240) */
/* WARNING: Removing unreachable block (ram,0x015d1260) */
/* WARNING: Removing unreachable block (ram,0x015d126c) */
/* WARNING: Removing unreachable block (ram,0x015d1284) */
/* WARNING: Removing unreachable block (ram,0x015d128c) */
/* WARNING: Removing unreachable block (ram,0x015d1298) */
/* WARNING: Removing unreachable block (ram,0x015d12a8) */
/* WARNING: Removing unreachable block (ram,0x015d12b0) */
/* WARNING: Removing unreachable block (ram,0x015d12bc) */
/* WARNING: Removing unreachable block (ram,0x015d12c4) */
/* WARNING: Removing unreachable block (ram,0x015d12d8) */
/* WARNING: Removing unreachable block (ram,0x015d12f0) */
/* WARNING: Removing unreachable block (ram,0x015d12fc) */
/* WARNING: Removing unreachable block (ram,0x015d130c) */
/* WARNING: Removing unreachable block (ram,0x015d1314) */
/* WARNING: Removing unreachable block (ram,0x015d1320) */
/* WARNING: Removing unreachable block (ram,0x015d1328) */
/* WARNING: Removing unreachable block (ram,0x015d1334) */
/* WARNING: Removing unreachable block (ram,0x015d133c) */
/* WARNING: Removing unreachable block (ram,0x015d1348) */
/* WARNING: Removing unreachable block (ram,0x015d1350) */
/* WARNING: Removing unreachable block (ram,0x015d135c) */
/* WARNING: Removing unreachable block (ram,0x015d1374) */
/* WARNING: Removing unreachable block (ram,0x015d137c) */
/* WARNING: Removing unreachable block (ram,0x015d1384) */
/* WARNING: Removing unreachable block (ram,0x015d13c8) */
/* WARNING: Removing unreachable block (ram,0x015d1388) */
/* WARNING: Removing unreachable block (ram,0x015d13cc) */
/* WARNING: Removing unreachable block (ram,0x015d1408) */
/* WARNING: Removing unreachable block (ram,0x015d1428) */
/* WARNING: Removing unreachable block (ram,0x015d1434) */
/* WARNING: Removing unreachable block (ram,0x015d15d8) */
/* WARNING: Removing unreachable block (ram,0x015d15e0) */
/* WARNING: Removing unreachable block (ram,0x015d1508) */
/* WARNING: Removing unreachable block (ram,0x015d1510) */
/* WARNING: Removing unreachable block (ram,0x015d1524) */
/* WARNING: Removing unreachable block (ram,0x015d153c) */
/* WARNING: Removing unreachable block (ram,0x015d1544) */
/* WARNING: Removing unreachable block (ram,0x015d1548) */
/* WARNING: Removing unreachable block (ram,0x015d1558) */
/* WARNING: Removing unreachable block (ram,0x015d1560) */
/* WARNING: Removing unreachable block (ram,0x015d1568) */
/* WARNING: Removing unreachable block (ram,0x015d1580) */
/* WARNING: Removing unreachable block (ram,0x015d1588) */
/* WARNING: Removing unreachable block (ram,0x015d1598) */
/* WARNING: Removing unreachable block (ram,0x015d15a0) */
/* WARNING: Removing unreachable block (ram,0x015d15a4) */
/* WARNING: Removing unreachable block (ram,0x015d15b8) */
/* WARNING: Removing unreachable block (ram,0x015d15c0) */
/* WARNING: Removing unreachable block (ram,0x015d15c8) */
/* WARNING: Removing unreachable block (ram,0x015d14f0) */
/* WARNING: Removing unreachable block (ram,0x015d14f8) */
/* WARNING: Removing unreachable block (ram,0x015d14d8) */
/* WARNING: Removing unreachable block (ram,0x015d14e0) */
/* WARNING: Removing unreachable block (ram,0x015d14c0) */
/* WARNING: Removing unreachable block (ram,0x015d14c8) */
/* WARNING: Removing unreachable block (ram,0x015d1488) */
/* WARNING: Removing unreachable block (ram,0x015d1490) */
/* WARNING: Removing unreachable block (ram,0x015d14a4) */
/* WARNING: Removing unreachable block (ram,0x015d14ac) */
/* WARNING: Removing unreachable block (ram,0x015d14b4) */
/* WARNING: Removing unreachable block (ram,0x015d1450) */
/* WARNING: Removing unreachable block (ram,0x015d1458) */
/* WARNING: Removing unreachable block (ram,0x015d146c) */
/* WARNING: Removing unreachable block (ram,0x015d1474) */
/* WARNING: Removing unreachable block (ram,0x015d147c) */
/* WARNING: Removing unreachable block (ram,0x015d15ec) */
/* WARNING: Removing unreachable block (ram,0x015d15f4) */
/* WARNING: Removing unreachable block (ram,0x015d163c) */
/* WARNING: Removing unreachable block (ram,0x015d15fc) */
/* WARNING: Removing unreachable block (ram,0x015d1640) */
/* WARNING: Removing unreachable block (ram,0x015d1678) */
/* WARNING: Removing unreachable block (ram,0x015d168c) */
/* WARNING: Removing unreachable block (ram,0x01871bfc) */
/* WARNING: Removing unreachable block (ram,0x01871c18) */
/* WARNING: Removing unreachable block (ram,0x01871c58) */
/* WARNING: Removing unreachable block (ram,0x01871c90) */
/* WARNING: Removing unreachable block (ram,0x01871cbc) */
/* WARNING: Removing unreachable block (ram,0x01871ccc) */
/* WARNING: Removing unreachable block (ram,0x01871cd4) */
/* WARNING: Removing unreachable block (ram,0x01871cd8) */
/* WARNING: Removing unreachable block (ram,0x01871cec) */
/* WARNING: Removing unreachable block (ram,0x01871cf4) */
/* WARNING: Removing unreachable block (ram,0x01871cfc) */
/* WARNING: Removing unreachable block (ram,0x01871d24) */
/* WARNING: Removing unreachable block (ram,0x01871d2c) */
/* WARNING: Removing unreachable block (ram,0x01871d5c) */
/* WARNING: Removing unreachable block (ram,0x01871d64) */
/* WARNING: Removing unreachable block (ram,0x01871d68) */
/* WARNING: Removing unreachable block (ram,0x01871d74) */
/* WARNING: Removing unreachable block (ram,0x01871d84) */
/* WARNING: Removing unreachable block (ram,0x01871d8c) */
/* WARNING: Removing unreachable block (ram,0x01871d90) */
/* WARNING: Removing unreachable block (ram,0x01871da0) */
/* WARNING: Removing unreachable block (ram,0x01871dcc) */
/* WARNING: Removing unreachable block (ram,0x01871e28) */
/* WARNING: Removing unreachable block (ram,0x01871eb4) */
/* WARNING: Removing unreachable block (ram,0x01871ecc) */
/* WARNING: Removing unreachable block (ram,0x01871ed4) */
/* WARNING: Removing unreachable block (ram,0x01871ed8) */
/* WARNING: Removing unreachable block (ram,0x01871ee8) */
/* WARNING: Removing unreachable block (ram,0x01871eec) */
/* WARNING: Removing unreachable block (ram,0x01871f10) */
/* WARNING: Removing unreachable block (ram,0x01871f1c) */
/* WARNING: Removing unreachable block (ram,0x01871f24) */
/* WARNING: Removing unreachable block (ram,0x01871f28) */
/* WARNING: Removing unreachable block (ram,0x01872014) */
/* WARNING: Removing unreachable block (ram,0x01871f38) */
/* WARNING: Removing unreachable block (ram,0x01871f44) */
/* WARNING: Removing unreachable block (ram,0x01871f4c) */
/* WARNING: Removing unreachable block (ram,0x01871f50) */
/* WARNING: Removing unreachable block (ram,0x01872020) */
/* WARNING: Removing unreachable block (ram,0x01871f80) */
/* WARNING: Removing unreachable block (ram,0x01871f88) */
/* WARNING: Removing unreachable block (ram,0x01871fa4) */
/* WARNING: Removing unreachable block (ram,0x01871fac) */
/* WARNING: Removing unreachable block (ram,0x01871fd4) */
/* WARNING: Removing unreachable block (ram,0x01871fdc) */
/* WARNING: Removing unreachable block (ram,0x01872024) */
/* WARNING: Removing unreachable block (ram,0x01872040) */
/* WARNING: Removing unreachable block (ram,0x01872048) */
/* WARNING: Removing unreachable block (ram,0x018721b4) */
/* WARNING: Removing unreachable block (ram,0x01872068) */
/* WARNING: Removing unreachable block (ram,0x0187209c) */
/* WARNING: Removing unreachable block (ram,0x018720fc) */
/* WARNING: Removing unreachable block (ram,0x01872100) */
/* WARNING: Removing unreachable block (ram,0x01872124) */
/* WARNING: Removing unreachable block (ram,0x0187212c) */
/* WARNING: Removing unreachable block (ram,0x01872154) */
/* WARNING: Removing unreachable block (ram,0x01872138) */
/* WARNING: Removing unreachable block (ram,0x01872144) */
/* WARNING: Removing unreachable block (ram,0x01872160) */
/* WARNING: Removing unreachable block (ram,0x018721b8) */
/* WARNING: Removing unreachable block (ram,0x018721e0) */
/* WARNING: Removing unreachable block (ram,0x018721f8) */
/* WARNING: Removing unreachable block (ram,0x01872234) */
/* WARNING: Removing unreachable block (ram,0x01872250) */
/* WARNING: Removing unreachable block (ram,0x01872260) */
/* WARNING: Removing unreachable block (ram,0x01872268) */
/* WARNING: Removing unreachable block (ram,0x0187228c) */
/* WARNING: Removing unreachable block (ram,0x01872290) */
/* WARNING: Removing unreachable block (ram,0x018722ac) */
/* WARNING: Removing unreachable block (ram,0x018722cc) */
/* WARNING: Removing unreachable block (ram,0x018722d0) */
/* WARNING: Removing unreachable block (ram,0x018722d4) */
/* WARNING: Removing unreachable block (ram,0x0187231c) */
/* WARNING: Removing unreachable block (ram,0x018722f0) */
/* WARNING: Removing unreachable block (ram,0x01872338) */
/* WARNING: Removing unreachable block (ram,0x01872360) */
/* WARNING: Removing unreachable block (ram,0x01872380) */
/* WARNING: Removing unreachable block (ram,0x01872390) */
/* WARNING: Removing unreachable block (ram,0x01872398) */
/* WARNING: Removing unreachable block (ram,0x018724a8) */
/* WARNING: Removing unreachable block (ram,0x018724d0) */
/* WARNING: Removing unreachable block (ram,0x018724e4) */
/* WARNING: Removing unreachable block (ram,0x018724f4) */
/* WARNING: Removing unreachable block (ram,0x018724fc) */
/* WARNING: Removing unreachable block (ram,0x01872588) */
/* WARNING: Removing unreachable block (ram,0x018725b0) */
/* WARNING: Removing unreachable block (ram,0x018725c4) */
/* WARNING: Removing unreachable block (ram,0x018725d4) */
/* WARNING: Removing unreachable block (ram,0x018725dc) */
/* WARNING: Removing unreachable block (ram,0x01872668) */
/* WARNING: Removing unreachable block (ram,0x01872690) */
/* WARNING: Removing unreachable block (ram,0x018726b0) */
/* WARNING: Removing unreachable block (ram,0x018726c0) */
/* WARNING: Removing unreachable block (ram,0x018726c8) */
/* WARNING: Removing unreachable block (ram,0x018727a0) */
/* WARNING: Removing unreachable block (ram,0x018727c8) */
/* WARNING: Removing unreachable block (ram,0x018727dc) */
/* WARNING: Removing unreachable block (ram,0x018727ec) */
/* WARNING: Removing unreachable block (ram,0x018727f4) */
/* WARNING: Removing unreachable block (ram,0x01872880) */
/* WARNING: Removing unreachable block (ram,0x018728a8) */
/* WARNING: Removing unreachable block (ram,0x018728bc) */
/* WARNING: Removing unreachable block (ram,0x018728cc) */
/* WARNING: Removing unreachable block (ram,0x018728d4) */
/* WARNING: Removing unreachable block (ram,0x01872960) */
/* WARNING: Removing unreachable block (ram,0x01872998) */
/* WARNING: Removing unreachable block (ram,0x018729a0) */
/* WARNING: Removing unreachable block (ram,0x018729d4) */
/* WARNING: Removing unreachable block (ram,0x018729c0) */
/* WARNING: Removing unreachable block (ram,0x018729e8) */
/* WARNING: Removing unreachable block (ram,0x01872a20) */
/* WARNING: Removing unreachable block (ram,0x01872a28) */
/* WARNING: Removing unreachable block (ram,0x01872a5c) */
/* WARNING: Removing unreachable block (ram,0x01872a48) */
/* WARNING: Removing unreachable block (ram,0x01872a70) */
/* WARNING: Removing unreachable block (ram,0x01872ab0) */
/* WARNING: Removing unreachable block (ram,0x01872ab8) */
/* WARNING: Removing unreachable block (ram,0x01872ad8) */
/* WARNING: Removing unreachable block (ram,0x01872ae0) */
/* WARNING: Removing unreachable block (ram,0x01872b18) */
/* WARNING: Removing unreachable block (ram,0x01872b04) */
/* WARNING: Removing unreachable block (ram,0x01872b30) */
/* WARNING: Removing unreachable block (ram,0x01872b54) */
/* WARNING: Removing unreachable block (ram,0x01872b60) */
/* WARNING: Removing unreachable block (ram,0x01872b84) */
/* WARNING: Removing unreachable block (ram,0x01872ba4) */
/* WARNING: Removing unreachable block (ram,0x01872be0) */
/* WARNING: Removing unreachable block (ram,0x01872be8) */
/* WARNING: Removing unreachable block (ram,0x01872c1c) */
/* WARNING: Removing unreachable block (ram,0x01872c08) */
/* WARNING: Removing unreachable block (ram,0x01872c34) */
/* WARNING: Removing unreachable block (ram,0x01872c74) */
/* WARNING: Removing unreachable block (ram,0x01872c7c) */
/* WARNING: Removing unreachable block (ram,0x01872cb0) */
/* WARNING: Removing unreachable block (ram,0x01872c9c) */
/* WARNING: Removing unreachable block (ram,0x01872cc8) */
/* WARNING: Removing unreachable block (ram,0x01872d08) */
/* WARNING: Removing unreachable block (ram,0x01872cf4) */
/* WARNING: Removing unreachable block (ram,0x01872ca4) */
/* WARNING: Removing unreachable block (ram,0x01872c10) */
/* WARNING: Removing unreachable block (ram,0x01872b8c) */
/* WARNING: Removing unreachable block (ram,0x01872b74) */
/* WARNING: Removing unreachable block (ram,0x01872b0c) */
/* WARNING: Removing unreachable block (ram,0x01872a50) */
/* WARNING: Removing unreachable block (ram,0x018729c8) */
/* WARNING: Removing unreachable block (ram,0x032d1fcc) */
/* WARNING: Removing unreachable block (ram,0x032d1fec) */
/* WARNING: Removing unreachable block (ram,0x032d200c) */
/* WARNING: Removing unreachable block (ram,0x032d2080) */
/* WARNING: Removing unreachable block (ram,0x032d2020) */
/* WARNING: Removing unreachable block (ram,0x032d2034) */
/* WARNING: Removing unreachable block (ram,0x032d203c) */
/* WARNING: Removing unreachable block (ram,0x032d2040) */
/* WARNING: Removing unreachable block (ram,0x032d2090) */
/* WARNING: Removing unreachable block (ram,0x032d20a4) */
/* WARNING: Removing unreachable block (ram,0x032d20ac) */
/* WARNING: Removing unreachable block (ram,0x032d20b0) */
/* WARNING: Removing unreachable block (ram,0x032d14c4) */
/* WARNING: Removing unreachable block (ram,0x032d14fc) */
/* WARNING: Removing unreachable block (ram,0x032d1588) */
/* WARNING: Removing unreachable block (ram,0x032d1594) */
/* WARNING: Removing unreachable block (ram,0x032d159c) */
/* WARNING: Removing unreachable block (ram,0x032d15a0) */
/* WARNING: Removing unreachable block (ram,0x032d15b4) */
/* WARNING: Removing unreachable block (ram,0x032d15b8) */
/* WARNING: Removing unreachable block (ram,0x032d15d4) */
/* WARNING: Removing unreachable block (ram,0x032d15dc) */
/* WARNING: Removing unreachable block (ram,0x032d15e0) */
/* WARNING: Removing unreachable block (ram,0x032d1614) */
/* WARNING: Removing unreachable block (ram,0x032d1628) */
/* WARNING: Removing unreachable block (ram,0x032d1630) */
/* WARNING: Removing unreachable block (ram,0x032d1634) */
/* WARNING: Removing unreachable block (ram,0x032d1674) */
/* WARNING: Removing unreachable block (ram,0x032d1658) */
/* WARNING: Removing unreachable block (ram,0x032d166c) */
/* WARNING: Removing unreachable block (ram,0x032d1678) */
/* WARNING: Removing unreachable block (ram,0x032d1694) */
/* WARNING: Removing unreachable block (ram,0x032d16a0) */
/* WARNING: Removing unreachable block (ram,0x032d16a8) */
/* WARNING: Removing unreachable block (ram,0x032d16ac) */
/* WARNING: Removing unreachable block (ram,0x032d16c0) */
/* WARNING: Removing unreachable block (ram,0x032d16c4) */
/* WARNING: Removing unreachable block (ram,0x032d16e0) */
/* WARNING: Removing unreachable block (ram,0x032d16e8) */
/* WARNING: Removing unreachable block (ram,0x032d16ec) */
/* WARNING: Removing unreachable block (ram,0x032d1700) */
/* WARNING: Removing unreachable block (ram,0x032d1710) */
/* WARNING: Removing unreachable block (ram,0x032d1718) */
/* WARNING: Removing unreachable block (ram,0x032d171c) */
/* WARNING: Removing unreachable block (ram,0x032d1910) */
/* WARNING: Removing unreachable block (ram,0x032d1740) */
/* WARNING: Removing unreachable block (ram,0x032d1754) */
/* WARNING: Removing unreachable block (ram,0x032d1758) */
/* WARNING: Removing unreachable block (ram,0x032d1760) */
/* WARNING: Removing unreachable block (ram,0x032d1768) */
/* WARNING: Removing unreachable block (ram,0x032d1780) */
/* WARNING: Removing unreachable block (ram,0x032d1788) */
/* WARNING: Removing unreachable block (ram,0x032d178c) */
/* WARNING: Removing unreachable block (ram,0x032d17a0) */
/* WARNING: Removing unreachable block (ram,0x032d17a4) */
/* WARNING: Removing unreachable block (ram,0x032d17bc) */
/* WARNING: Removing unreachable block (ram,0x032d17d0) */
/* WARNING: Removing unreachable block (ram,0x032d1830) */
/* WARNING: Removing unreachable block (ram,0x032d17e0) */
/* WARNING: Removing unreachable block (ram,0x032d17f4) */
/* WARNING: Removing unreachable block (ram,0x032d1824) */
/* WARNING: Removing unreachable block (ram,0x032d182c) */
/* WARNING: Removing unreachable block (ram,0x032d1804) */
/* WARNING: Removing unreachable block (ram,0x032d1818) */
/* WARNING: Removing unreachable block (ram,0x032d1820) */
/* WARNING: Removing unreachable block (ram,0x032d1838) */
/* WARNING: Removing unreachable block (ram,0x032d1844) */
/* WARNING: Removing unreachable block (ram,0x032d184c) */
/* WARNING: Removing unreachable block (ram,0x032d1850) */
/* WARNING: Removing unreachable block (ram,0x032d1868) */
/* WARNING: Removing unreachable block (ram,0x032d187c) */
/* WARNING: Removing unreachable block (ram,0x032d1884) */
/* WARNING: Removing unreachable block (ram,0x032d1888) */
/* WARNING: Removing unreachable block (ram,0x032d1898) */
/* WARNING: Removing unreachable block (ram,0x032d18ac) */
/* WARNING: Removing unreachable block (ram,0x032d18b4) */
/* WARNING: Removing unreachable block (ram,0x032d18b8) */
/* WARNING: Removing unreachable block (ram,0x032d18c0) */
/* WARNING: Removing unreachable block (ram,0x032d18d4) */
/* WARNING: Removing unreachable block (ram,0x032d18dc) */
/* WARNING: Removing unreachable block (ram,0x032d18e0) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d15f4) */
/* WARNING: Removing unreachable block (ram,0x032d205c) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x018728f4) */
/* WARNING: Removing unreachable block (ram,0x01872920) */
/* WARNING: Removing unreachable block (ram,0x01872928) */
/* WARNING: Removing unreachable block (ram,0x01872814) */
/* WARNING: Removing unreachable block (ram,0x01872840) */
/* WARNING: Removing unreachable block (ram,0x01872848) */
/* WARNING: Removing unreachable block (ram,0x018726e8) */
/* WARNING: Removing unreachable block (ram,0x01872760) */
/* WARNING: Removing unreachable block (ram,0x01872764) */
/* WARNING: Removing unreachable block (ram,0x0187276c) */
/* WARNING: Removing unreachable block (ram,0x0187272c) */
/* WARNING: Removing unreachable block (ram,0x01872730) */
/* WARNING: Removing unreachable block (ram,0x01872738) */
/* WARNING: Removing unreachable block (ram,0x0187278c) */
/* WARNING: Removing unreachable block (ram,0x018725fc) */
/* WARNING: Removing unreachable block (ram,0x01872628) */
/* WARNING: Removing unreachable block (ram,0x01872630) */
/* WARNING: Removing unreachable block (ram,0x0187251c) */
/* WARNING: Removing unreachable block (ram,0x01872548) */
/* WARNING: Removing unreachable block (ram,0x01872550) */
/* WARNING: Removing unreachable block (ram,0x018723b8) */
/* WARNING: Removing unreachable block (ram,0x01872424) */
/* WARNING: Removing unreachable block (ram,0x0187243c) */
/* WARNING: Removing unreachable block (ram,0x01872444) */
/* WARNING: Removing unreachable block (ram,0x01872448) */
/* WARNING: Removing unreachable block (ram,0x0187246c) */
/* WARNING: Removing unreachable block (ram,0x01872474) */
/* WARNING: Removing unreachable block (ram,0x018723e4) */
/* WARNING: Removing unreachable block (ram,0x018723f4) */
/* WARNING: Removing unreachable block (ram,0x018723fc) */
/* WARNING: Removing unreachable block (ram,0x01872494) */
/* WARNING: Removing unreachable block (ram,0x018722f4) */
/* WARNING: Removing unreachable block (ram,0x01872314) */
/* WARNING: Removing unreachable block (ram,0x01872320) */
/* WARNING: Removing unreachable block (ram,0x018721e8) */
/* WARNING: Removing unreachable block (ram,0x01872178) */
/* WARNING: Removing unreachable block (ram,0x018720ac) */
/* WARNING: Removing unreachable block (ram,0x0187219c) */
/* WARNING: Removing unreachable block (ram,0x018720b4) */
/* WARNING: Removing unreachable block (ram,0x018721a4) */
/* WARNING: Removing unreachable block (ram,0x018720c4) */
/* WARNING: Removing unreachable block (ram,0x018720e4) */
/* WARNING: Removing unreachable block (ram,0x018721ac) */
/* WARNING: Removing unreachable block (ram,0x018721b0) */
/* WARNING: Removing unreachable block (ram,0x018720ec) */
/* WARNING: Removing unreachable block (ram,0x018720d0) */
/* WARNING: Removing unreachable block (ram,0x01871da8) */
/* WARNING: Removing unreachable block (ram,0x01871db0) */
/* WARNING: Removing unreachable block (ram,0x01871c34) */
/* WARNING: Removing unreachable block (ram,0x015d18d0) */
/* WARNING: Removing unreachable block (ram,0x015d1904) */
/* WARNING: Removing unreachable block (ram,0x015d1918) */
/* WARNING: Removing unreachable block (ram,0x015d1924) */
/* WARNING: Removing unreachable block (ram,0x015d1934) */
/* WARNING: Removing unreachable block (ram,0x015d193c) */
/* WARNING: Removing unreachable block (ram,0x015d1940) */
/* WARNING: Removing unreachable block (ram,0x015d1950) */
/* WARNING: Removing unreachable block (ram,0x015d195c) */
/* WARNING: Removing unreachable block (ram,0x015d1960) */
/* WARNING: Removing unreachable block (ram,0x015d1968) */
/* WARNING: Removing unreachable block (ram,0x015d1974) */
/* WARNING: Removing unreachable block (ram,0x015d198c) */
/* WARNING: Removing unreachable block (ram,0x015d1994) */
/* WARNING: Removing unreachable block (ram,0x015d1998) */
/* WARNING: Removing unreachable block (ram,0x015d19b0) */
/* WARNING: Removing unreachable block (ram,0x015d19b8) */
/* WARNING: Removing unreachable block (ram,0x015d19c4) */
/* WARNING: Removing unreachable block (ram,0x015d19d8) */
/* WARNING: Removing unreachable block (ram,0x015d19e0) */
/* WARNING: Removing unreachable block (ram,0x015d19ec) */
/* WARNING: Removing unreachable block (ram,0x015d19f4) */
/* WARNING: Removing unreachable block (ram,0x015d1a04) */
/* WARNING: Removing unreachable block (ram,0x015d1a0c) */
/* WARNING: Removing unreachable block (ram,0x015d1a18) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a84) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a88) */
/* WARNING: Removing unreachable block (ram,0x015d1ab0) */
/* WARNING: Removing unreachable block (ram,0x015d1b0c) */
/* WARNING: Removing unreachable block (ram,0x015d1b24) */
/* WARNING: Removing unreachable block (ram,0x015d1b14) */
/* WARNING: Removing unreachable block (ram,0x015d1b2c) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */
/* WARNING: Removing unreachable block (ram,0x015d1a68) */
/* WARNING: Removing unreachable block (ram,0x015d1608) */
/* WARNING: Removing unreachable block (ram,0x015d1624) */
/* WARNING: Removing unreachable block (ram,0x015d1394) */
/* WARNING: Removing unreachable block (ram,0x015d13a0) */
/* WARNING: Removing unreachable block (ram,0x015d13b0) */
/* WARNING: Removing unreachable block (ram,0x015d11e4) */
/* WARNING: Removing unreachable block (ram,0x015d11f8) */
/* WARNING: Removing unreachable block (ram,0x01595448) */
/* WARNING: Removing unreachable block (ram,0x0159544c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_FrontEnd_FrontEndScene__SetKartHidden
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4,uint param_5,
                int param_6,int param_7,undefined2 param_8,int param_9)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint extraout_w1;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  undefined2 uStack_72;
  
  lVar7 = *(long *)(param_4 + 0x90);
  uStack_72 = param_8;
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (param_5 < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)param_5 * 0x40;
    *(undefined1 *)(lVar7 + 0x38) = 0;
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    return param_4;
  }
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
  uVar5 = auVar10._8_4_;
  uVar3 = auVar10._0_8_;
  if (param_6 - 1U < 6) {
    iVar6 = *(int *)(&UNK_033f89ac + (long)(int)(param_6 - 1U) * 4);
  }
  else {
    iVar6 = 1;
  }
  uVar4 = uVar3;
  if ((bRam0000000003eb5177 & 1) == 0) {
    func_0x00f78a20(0x3d3e5c0);
    func_0x00f78a20(0x3d23990);
    uVar4 = func_0x00f78a20(0x3d5e790);
    bRam0000000003eb5177 = 1;
  }
  lVar7 = *(long *)(uVar3 + 0x90);
  if (lVar7 == 0) {
code_r0x015953e4:
    func_0x00f78af4();
  }
  else if (uVar5 < *(uint *)(lVar7 + 0x18)) {
    lVar7 = lVar7 + (long)(int)uVar5 * 0x40;
    if (*(int *)(lVar7 + 0x3c) == iVar6 && param_9 == 0) {
      return uVar4;
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar7 = *(long *)(uVar3 + 0x90);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar5) goto code_r0x015953e8;
      lVar7 = *(long *)(lVar7 + (long)(int)uVar5 * 0x40 + 0x40);
      if (lVar7 != 0) {
        lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
        if (iVar6 - 2U < 7) {
          fVar9 = *(float *)(&UNK_033f89c4 + (long)(int)(iVar6 - 2U) * 4);
        }
        else {
          fVar9 = 135.0;
        }
        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(lVar7,0,0);
        uVar2 = *(undefined8 *)(uVar3 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
        if (iVar1 != 0) {
          if (*(long *)(uVar3 + 200) == 0) goto code_r0x015953e4;
          /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetCustomisationCameraPosition*/ func_0x01595ca0(*(long *)(uVar3 + 200),iVar6,0);
        }
        if (param_7 == 0) {
          /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,fVar9,0,0);
          if (lVar7 == 0) goto code_r0x015953e4;
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar7,0);
        }
        else {
          fVar8 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          uVar2 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(fVar9 * fVar8,fVar9 * param_2,fVar9 * param_3,_UNK_033f83c8,lVar7,
                                  0,0);
          /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,0xd,uRam0000000003d5e790);
        }
        /*System.Nullable<bool>$$GetValueOrDefault*/ func_0x0261a6ac(&uStack_72,iVar6 == 3,uRam0000000003d3e5c0);
        goto code_r0x015953f4;
      }
    }
    goto code_r0x015953e4;
  }
code_r0x015953e8:
  uVar2 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar2,0);
code_r0x015953f4:
  lVar7 = *(long *)(auVar10._0_8_ + 0x90);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar7 + 0x18)) {
    return *(ulong *)(lVar7 + (long)(int)auVar10._8_4_ * 0x40 + 0x20);
  }
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
  if (extraout_w1 < 7) {
    return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x1595134 | Atlas.FrontEnd.FrontEndScene.SetKartPose
// ============================================================

/* WARNING: Possible PIC construction at 0x01595390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01595408) */
/* WARNING: Removing unreachable block (ram,0x0159540c) */
/* WARNING: Removing unreachable block (ram,0x01595424) */
/* WARNING: Removing unreachable block (ram,0x01595414) */
/* WARNING: Removing unreachable block (ram,0x01595418) */
/* WARNING: Removing unreachable block (ram,0x01595394) */
/* WARNING: Removing unreachable block (ram,0x015953b0) */
/* WARNING: Removing unreachable block (ram,0x015953bc) */
/* WARNING: Removing unreachable block (ram,0x0159543c) */
/* WARNING: Removing unreachable block (ram,0x01595440) */
/* WARNING: Removing unreachable block (ram,0x01595458) */
/* WARNING: Removing unreachable block (ram,0x0159549c) */
/* WARNING: Removing unreachable block (ram,0x0159546c) */
/* WARNING: Removing unreachable block (ram,0x015954a0) */
/* WARNING: Removing unreachable block (ram,0x01595478) */
/* WARNING: Removing unreachable block (ram,0x01595494) */
/* WARNING: Removing unreachable block (ram,0x01595488) */
/* WARNING: Removing unreachable block (ram,0x015d10cc) */
/* WARNING: Removing unreachable block (ram,0x015d10ec) */
/* WARNING: Removing unreachable block (ram,0x015d1100) */
/* WARNING: Removing unreachable block (ram,0x015d1108) */
/* WARNING: Removing unreachable block (ram,0x015d111c) */
/* WARNING: Removing unreachable block (ram,0x015d1130) */
/* WARNING: Removing unreachable block (ram,0x015d1144) */
/* WARNING: Removing unreachable block (ram,0x015d1158) */
/* WARNING: Removing unreachable block (ram,0x015d116c) */
/* WARNING: Removing unreachable block (ram,0x015d1180) */
/* WARNING: Removing unreachable block (ram,0x015d1194) */
/* WARNING: Removing unreachable block (ram,0x015d119c) */
/* WARNING: Removing unreachable block (ram,0x015d11a0) */
/* WARNING: Removing unreachable block (ram,0x015d11ac) */
/* WARNING: Removing unreachable block (ram,0x015d11bc) */
/* WARNING: Removing unreachable block (ram,0x015d11c4) */
/* WARNING: Removing unreachable block (ram,0x015d11c8) */
/* WARNING: Removing unreachable block (ram,0x015d1208) */
/* WARNING: Removing unreachable block (ram,0x015d11d8) */
/* WARNING: Removing unreachable block (ram,0x015d120c) */
/* WARNING: Removing unreachable block (ram,0x015d1240) */
/* WARNING: Removing unreachable block (ram,0x015d1260) */
/* WARNING: Removing unreachable block (ram,0x015d126c) */
/* WARNING: Removing unreachable block (ram,0x015d1284) */
/* WARNING: Removing unreachable block (ram,0x015d128c) */
/* WARNING: Removing unreachable block (ram,0x015d1298) */
/* WARNING: Removing unreachable block (ram,0x015d12a8) */
/* WARNING: Removing unreachable block (ram,0x015d12b0) */
/* WARNING: Removing unreachable block (ram,0x015d12bc) */
/* WARNING: Removing unreachable block (ram,0x015d12c4) */
/* WARNING: Removing unreachable block (ram,0x015d12d8) */
/* WARNING: Removing unreachable block (ram,0x015d12f0) */
/* WARNING: Removing unreachable block (ram,0x015d12fc) */
/* WARNING: Removing unreachable block (ram,0x015d130c) */
/* WARNING: Removing unreachable block (ram,0x015d1314) */
/* WARNING: Removing unreachable block (ram,0x015d1320) */
/* WARNING: Removing unreachable block (ram,0x015d1328) */
/* WARNING: Removing unreachable block (ram,0x015d1334) */
/* WARNING: Removing unreachable block (ram,0x015d133c) */
/* WARNING: Removing unreachable block (ram,0x015d1348) */
/* WARNING: Removing unreachable block (ram,0x015d1350) */
/* WARNING: Removing unreachable block (ram,0x015d135c) */
/* WARNING: Removing unreachable block (ram,0x015d1374) */
/* WARNING: Removing unreachable block (ram,0x015d137c) */
/* WARNING: Removing unreachable block (ram,0x015d1384) */
/* WARNING: Removing unreachable block (ram,0x015d13c8) */
/* WARNING: Removing unreachable block (ram,0x015d1388) */
/* WARNING: Removing unreachable block (ram,0x015d13cc) */
/* WARNING: Removing unreachable block (ram,0x015d1408) */
/* WARNING: Removing unreachable block (ram,0x015d1428) */
/* WARNING: Removing unreachable block (ram,0x015d1434) */
/* WARNING: Removing unreachable block (ram,0x015d15d8) */
/* WARNING: Removing unreachable block (ram,0x015d15e0) */
/* WARNING: Removing unreachable block (ram,0x015d1508) */
/* WARNING: Removing unreachable block (ram,0x015d1510) */
/* WARNING: Removing unreachable block (ram,0x015d1524) */
/* WARNING: Removing unreachable block (ram,0x015d153c) */
/* WARNING: Removing unreachable block (ram,0x015d1544) */
/* WARNING: Removing unreachable block (ram,0x015d1548) */
/* WARNING: Removing unreachable block (ram,0x015d1558) */
/* WARNING: Removing unreachable block (ram,0x015d1560) */
/* WARNING: Removing unreachable block (ram,0x015d1568) */
/* WARNING: Removing unreachable block (ram,0x015d1580) */
/* WARNING: Removing unreachable block (ram,0x015d1588) */
/* WARNING: Removing unreachable block (ram,0x015d1598) */
/* WARNING: Removing unreachable block (ram,0x015d15a0) */
/* WARNING: Removing unreachable block (ram,0x015d15a4) */
/* WARNING: Removing unreachable block (ram,0x015d15b8) */
/* WARNING: Removing unreachable block (ram,0x015d15c0) */
/* WARNING: Removing unreachable block (ram,0x015d15c8) */
/* WARNING: Removing unreachable block (ram,0x015d14f0) */
/* WARNING: Removing unreachable block (ram,0x015d14f8) */
/* WARNING: Removing unreachable block (ram,0x015d14d8) */
/* WARNING: Removing unreachable block (ram,0x015d14e0) */
/* WARNING: Removing unreachable block (ram,0x015d14c0) */
/* WARNING: Removing unreachable block (ram,0x015d14c8) */
/* WARNING: Removing unreachable block (ram,0x015d1488) */
/* WARNING: Removing unreachable block (ram,0x015d1490) */
/* WARNING: Removing unreachable block (ram,0x015d14a4) */
/* WARNING: Removing unreachable block (ram,0x015d14ac) */
/* WARNING: Removing unreachable block (ram,0x015d14b4) */
/* WARNING: Removing unreachable block (ram,0x015d1450) */
/* WARNING: Removing unreachable block (ram,0x015d1458) */
/* WARNING: Removing unreachable block (ram,0x015d146c) */
/* WARNING: Removing unreachable block (ram,0x015d1474) */
/* WARNING: Removing unreachable block (ram,0x015d147c) */
/* WARNING: Removing unreachable block (ram,0x015d15ec) */
/* WARNING: Removing unreachable block (ram,0x015d15f4) */
/* WARNING: Removing unreachable block (ram,0x015d163c) */
/* WARNING: Removing unreachable block (ram,0x015d15fc) */
/* WARNING: Removing unreachable block (ram,0x015d1640) */
/* WARNING: Removing unreachable block (ram,0x015d1678) */
/* WARNING: Removing unreachable block (ram,0x015d168c) */
/* WARNING: Removing unreachable block (ram,0x01871bfc) */
/* WARNING: Removing unreachable block (ram,0x01871c18) */
/* WARNING: Removing unreachable block (ram,0x01871c58) */
/* WARNING: Removing unreachable block (ram,0x01871c90) */
/* WARNING: Removing unreachable block (ram,0x01871cbc) */
/* WARNING: Removing unreachable block (ram,0x01871ccc) */
/* WARNING: Removing unreachable block (ram,0x01871cd4) */
/* WARNING: Removing unreachable block (ram,0x01871cd8) */
/* WARNING: Removing unreachable block (ram,0x01871cec) */
/* WARNING: Removing unreachable block (ram,0x01871cf4) */
/* WARNING: Removing unreachable block (ram,0x01871cfc) */
/* WARNING: Removing unreachable block (ram,0x01871d24) */
/* WARNING: Removing unreachable block (ram,0x01871d2c) */
/* WARNING: Removing unreachable block (ram,0x01871d5c) */
/* WARNING: Removing unreachable block (ram,0x01871d64) */
/* WARNING: Removing unreachable block (ram,0x01871d68) */
/* WARNING: Removing unreachable block (ram,0x01871d74) */
/* WARNING: Removing unreachable block (ram,0x01871d84) */
/* WARNING: Removing unreachable block (ram,0x01871d8c) */
/* WARNING: Removing unreachable block (ram,0x01871d90) */
/* WARNING: Removing unreachable block (ram,0x01871da0) */
/* WARNING: Removing unreachable block (ram,0x01871dcc) */
/* WARNING: Removing unreachable block (ram,0x01871e28) */
/* WARNING: Removing unreachable block (ram,0x01871eb4) */
/* WARNING: Removing unreachable block (ram,0x01871ecc) */
/* WARNING: Removing unreachable block (ram,0x01871ed4) */
/* WARNING: Removing unreachable block (ram,0x01871ed8) */
/* WARNING: Removing unreachable block (ram,0x01871ee8) */
/* WARNING: Removing unreachable block (ram,0x01871eec) */
/* WARNING: Removing unreachable block (ram,0x01871f10) */
/* WARNING: Removing unreachable block (ram,0x01871f1c) */
/* WARNING: Removing unreachable block (ram,0x01871f24) */
/* WARNING: Removing unreachable block (ram,0x01871f28) */
/* WARNING: Removing unreachable block (ram,0x01872014) */
/* WARNING: Removing unreachable block (ram,0x01871f38) */
/* WARNING: Removing unreachable block (ram,0x01871f44) */
/* WARNING: Removing unreachable block (ram,0x01871f4c) */
/* WARNING: Removing unreachable block (ram,0x01871f50) */
/* WARNING: Removing unreachable block (ram,0x01872020) */
/* WARNING: Removing unreachable block (ram,0x01871f80) */
/* WARNING: Removing unreachable block (ram,0x01871f88) */
/* WARNING: Removing unreachable block (ram,0x01871fa4) */
/* WARNING: Removing unreachable block (ram,0x01871fac) */
/* WARNING: Removing unreachable block (ram,0x01871fd4) */
/* WARNING: Removing unreachable block (ram,0x01871fdc) */
/* WARNING: Removing unreachable block (ram,0x01872024) */
/* WARNING: Removing unreachable block (ram,0x01872040) */
/* WARNING: Removing unreachable block (ram,0x01872048) */
/* WARNING: Removing unreachable block (ram,0x018721b4) */
/* WARNING: Removing unreachable block (ram,0x01872068) */
/* WARNING: Removing unreachable block (ram,0x0187209c) */
/* WARNING: Removing unreachable block (ram,0x018720fc) */
/* WARNING: Removing unreachable block (ram,0x01872100) */
/* WARNING: Removing unreachable block (ram,0x01872124) */
/* WARNING: Removing unreachable block (ram,0x0187212c) */
/* WARNING: Removing unreachable block (ram,0x01872154) */
/* WARNING: Removing unreachable block (ram,0x01872138) */
/* WARNING: Removing unreachable block (ram,0x01872144) */
/* WARNING: Removing unreachable block (ram,0x01872160) */
/* WARNING: Removing unreachable block (ram,0x018721b8) */
/* WARNING: Removing unreachable block (ram,0x018721e0) */
/* WARNING: Removing unreachable block (ram,0x018721f8) */
/* WARNING: Removing unreachable block (ram,0x01872234) */
/* WARNING: Removing unreachable block (ram,0x01872250) */
/* WARNING: Removing unreachable block (ram,0x01872260) */
/* WARNING: Removing unreachable block (ram,0x01872268) */
/* WARNING: Removing unreachable block (ram,0x0187228c) */
/* WARNING: Removing unreachable block (ram,0x01872290) */
/* WARNING: Removing unreachable block (ram,0x018722ac) */
/* WARNING: Removing unreachable block (ram,0x018722cc) */
/* WARNING: Removing unreachable block (ram,0x018722d0) */
/* WARNING: Removing unreachable block (ram,0x018722d4) */
/* WARNING: Removing unreachable block (ram,0x0187231c) */
/* WARNING: Removing unreachable block (ram,0x018722f0) */
/* WARNING: Removing unreachable block (ram,0x01872338) */
/* WARNING: Removing unreachable block (ram,0x01872360) */
/* WARNING: Removing unreachable block (ram,0x01872380) */
/* WARNING: Removing unreachable block (ram,0x01872390) */
/* WARNING: Removing unreachable block (ram,0x01872398) */
/* WARNING: Removing unreachable block (ram,0x018724a8) */
/* WARNING: Removing unreachable block (ram,0x018724d0) */
/* WARNING: Removing unreachable block (ram,0x018724e4) */
/* WARNING: Removing unreachable block (ram,0x018724f4) */
/* WARNING: Removing unreachable block (ram,0x018724fc) */
/* WARNING: Removing unreachable block (ram,0x01872588) */
/* WARNING: Removing unreachable block (ram,0x018725b0) */
/* WARNING: Removing unreachable block (ram,0x018725c4) */
/* WARNING: Removing unreachable block (ram,0x018725d4) */
/* WARNING: Removing unreachable block (ram,0x018725dc) */
/* WARNING: Removing unreachable block (ram,0x01872668) */
/* WARNING: Removing unreachable block (ram,0x01872690) */
/* WARNING: Removing unreachable block (ram,0x018726b0) */
/* WARNING: Removing unreachable block (ram,0x018726c0) */
/* WARNING: Removing unreachable block (ram,0x018726c8) */
/* WARNING: Removing unreachable block (ram,0x018727a0) */
/* WARNING: Removing unreachable block (ram,0x018727c8) */
/* WARNING: Removing unreachable block (ram,0x018727dc) */
/* WARNING: Removing unreachable block (ram,0x018727ec) */
/* WARNING: Removing unreachable block (ram,0x018727f4) */
/* WARNING: Removing unreachable block (ram,0x01872880) */
/* WARNING: Removing unreachable block (ram,0x018728a8) */
/* WARNING: Removing unreachable block (ram,0x018728bc) */
/* WARNING: Removing unreachable block (ram,0x018728cc) */
/* WARNING: Removing unreachable block (ram,0x018728d4) */
/* WARNING: Removing unreachable block (ram,0x01872960) */
/* WARNING: Removing unreachable block (ram,0x01872998) */
/* WARNING: Removing unreachable block (ram,0x018729a0) */
/* WARNING: Removing unreachable block (ram,0x018729d4) */
/* WARNING: Removing unreachable block (ram,0x018729c0) */
/* WARNING: Removing unreachable block (ram,0x018729e8) */
/* WARNING: Removing unreachable block (ram,0x01872a20) */
/* WARNING: Removing unreachable block (ram,0x01872a28) */
/* WARNING: Removing unreachable block (ram,0x01872a5c) */
/* WARNING: Removing unreachable block (ram,0x01872a48) */
/* WARNING: Removing unreachable block (ram,0x01872a70) */
/* WARNING: Removing unreachable block (ram,0x01872ab0) */
/* WARNING: Removing unreachable block (ram,0x01872ab8) */
/* WARNING: Removing unreachable block (ram,0x01872ad8) */
/* WARNING: Removing unreachable block (ram,0x01872ae0) */
/* WARNING: Removing unreachable block (ram,0x01872b18) */
/* WARNING: Removing unreachable block (ram,0x01872b04) */
/* WARNING: Removing unreachable block (ram,0x01872b30) */
/* WARNING: Removing unreachable block (ram,0x01872b54) */
/* WARNING: Removing unreachable block (ram,0x01872b60) */
/* WARNING: Removing unreachable block (ram,0x01872b84) */
/* WARNING: Removing unreachable block (ram,0x01872ba4) */
/* WARNING: Removing unreachable block (ram,0x01872be0) */
/* WARNING: Removing unreachable block (ram,0x01872be8) */
/* WARNING: Removing unreachable block (ram,0x01872c1c) */
/* WARNING: Removing unreachable block (ram,0x01872c08) */
/* WARNING: Removing unreachable block (ram,0x01872c34) */
/* WARNING: Removing unreachable block (ram,0x01872c74) */
/* WARNING: Removing unreachable block (ram,0x01872c7c) */
/* WARNING: Removing unreachable block (ram,0x01872cb0) */
/* WARNING: Removing unreachable block (ram,0x01872c9c) */
/* WARNING: Removing unreachable block (ram,0x01872cc8) */
/* WARNING: Removing unreachable block (ram,0x01872d08) */
/* WARNING: Removing unreachable block (ram,0x01872cf4) */
/* WARNING: Removing unreachable block (ram,0x01872ca4) */
/* WARNING: Removing unreachable block (ram,0x01872c10) */
/* WARNING: Removing unreachable block (ram,0x01872b8c) */
/* WARNING: Removing unreachable block (ram,0x01872b74) */
/* WARNING: Removing unreachable block (ram,0x01872b0c) */
/* WARNING: Removing unreachable block (ram,0x01872a50) */
/* WARNING: Removing unreachable block (ram,0x018729c8) */
/* WARNING: Removing unreachable block (ram,0x032d1fcc) */
/* WARNING: Removing unreachable block (ram,0x032d1fec) */
/* WARNING: Removing unreachable block (ram,0x032d200c) */
/* WARNING: Removing unreachable block (ram,0x032d2080) */
/* WARNING: Removing unreachable block (ram,0x032d2020) */
/* WARNING: Removing unreachable block (ram,0x032d2034) */
/* WARNING: Removing unreachable block (ram,0x032d203c) */
/* WARNING: Removing unreachable block (ram,0x032d2040) */
/* WARNING: Removing unreachable block (ram,0x032d2090) */
/* WARNING: Removing unreachable block (ram,0x032d20a4) */
/* WARNING: Removing unreachable block (ram,0x032d20ac) */
/* WARNING: Removing unreachable block (ram,0x032d20b0) */
/* WARNING: Removing unreachable block (ram,0x032d14c4) */
/* WARNING: Removing unreachable block (ram,0x032d14fc) */
/* WARNING: Removing unreachable block (ram,0x032d1588) */
/* WARNING: Removing unreachable block (ram,0x032d1594) */
/* WARNING: Removing unreachable block (ram,0x032d159c) */
/* WARNING: Removing unreachable block (ram,0x032d15a0) */
/* WARNING: Removing unreachable block (ram,0x032d15b4) */
/* WARNING: Removing unreachable block (ram,0x032d15b8) */
/* WARNING: Removing unreachable block (ram,0x032d15d4) */
/* WARNING: Removing unreachable block (ram,0x032d15dc) */
/* WARNING: Removing unreachable block (ram,0x032d15e0) */
/* WARNING: Removing unreachable block (ram,0x032d1614) */
/* WARNING: Removing unreachable block (ram,0x032d1628) */
/* WARNING: Removing unreachable block (ram,0x032d1630) */
/* WARNING: Removing unreachable block (ram,0x032d1634) */
/* WARNING: Removing unreachable block (ram,0x032d1674) */
/* WARNING: Removing unreachable block (ram,0x032d1658) */
/* WARNING: Removing unreachable block (ram,0x032d166c) */
/* WARNING: Removing unreachable block (ram,0x032d1678) */
/* WARNING: Removing unreachable block (ram,0x032d1694) */
/* WARNING: Removing unreachable block (ram,0x032d16a0) */
/* WARNING: Removing unreachable block (ram,0x032d16a8) */
/* WARNING: Removing unreachable block (ram,0x032d16ac) */
/* WARNING: Removing unreachable block (ram,0x032d16c0) */
/* WARNING: Removing unreachable block (ram,0x032d16c4) */
/* WARNING: Removing unreachable block (ram,0x032d16e0) */
/* WARNING: Removing unreachable block (ram,0x032d16e8) */
/* WARNING: Removing unreachable block (ram,0x032d16ec) */
/* WARNING: Removing unreachable block (ram,0x032d1700) */
/* WARNING: Removing unreachable block (ram,0x032d1710) */
/* WARNING: Removing unreachable block (ram,0x032d1718) */
/* WARNING: Removing unreachable block (ram,0x032d171c) */
/* WARNING: Removing unreachable block (ram,0x032d1910) */
/* WARNING: Removing unreachable block (ram,0x032d1740) */
/* WARNING: Removing unreachable block (ram,0x032d1754) */
/* WARNING: Removing unreachable block (ram,0x032d1758) */
/* WARNING: Removing unreachable block (ram,0x032d1760) */
/* WARNING: Removing unreachable block (ram,0x032d1768) */
/* WARNING: Removing unreachable block (ram,0x032d1780) */
/* WARNING: Removing unreachable block (ram,0x032d1788) */
/* WARNING: Removing unreachable block (ram,0x032d178c) */
/* WARNING: Removing unreachable block (ram,0x032d17a0) */
/* WARNING: Removing unreachable block (ram,0x032d17a4) */
/* WARNING: Removing unreachable block (ram,0x032d17bc) */
/* WARNING: Removing unreachable block (ram,0x032d17d0) */
/* WARNING: Removing unreachable block (ram,0x032d1830) */
/* WARNING: Removing unreachable block (ram,0x032d17e0) */
/* WARNING: Removing unreachable block (ram,0x032d17f4) */
/* WARNING: Removing unreachable block (ram,0x032d1824) */
/* WARNING: Removing unreachable block (ram,0x032d182c) */
/* WARNING: Removing unreachable block (ram,0x032d1804) */
/* WARNING: Removing unreachable block (ram,0x032d1818) */
/* WARNING: Removing unreachable block (ram,0x032d1820) */
/* WARNING: Removing unreachable block (ram,0x032d1838) */
/* WARNING: Removing unreachable block (ram,0x032d1844) */
/* WARNING: Removing unreachable block (ram,0x032d184c) */
/* WARNING: Removing unreachable block (ram,0x032d1850) */
/* WARNING: Removing unreachable block (ram,0x032d1868) */
/* WARNING: Removing unreachable block (ram,0x032d187c) */
/* WARNING: Removing unreachable block (ram,0x032d1884) */
/* WARNING: Removing unreachable block (ram,0x032d1888) */
/* WARNING: Removing unreachable block (ram,0x032d1898) */
/* WARNING: Removing unreachable block (ram,0x032d18ac) */
/* WARNING: Removing unreachable block (ram,0x032d18b4) */
/* WARNING: Removing unreachable block (ram,0x032d18b8) */
/* WARNING: Removing unreachable block (ram,0x032d18c0) */
/* WARNING: Removing unreachable block (ram,0x032d18d4) */
/* WARNING: Removing unreachable block (ram,0x032d18dc) */
/* WARNING: Removing unreachable block (ram,0x032d18e0) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d15f4) */
/* WARNING: Removing unreachable block (ram,0x032d205c) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x018728f4) */
/* WARNING: Removing unreachable block (ram,0x01872920) */
/* WARNING: Removing unreachable block (ram,0x01872928) */
/* WARNING: Removing unreachable block (ram,0x01872814) */
/* WARNING: Removing unreachable block (ram,0x01872840) */
/* WARNING: Removing unreachable block (ram,0x01872848) */
/* WARNING: Removing unreachable block (ram,0x018726e8) */
/* WARNING: Removing unreachable block (ram,0x01872760) */
/* WARNING: Removing unreachable block (ram,0x01872764) */
/* WARNING: Removing unreachable block (ram,0x0187276c) */
/* WARNING: Removing unreachable block (ram,0x0187272c) */
/* WARNING: Removing unreachable block (ram,0x01872730) */
/* WARNING: Removing unreachable block (ram,0x01872738) */
/* WARNING: Removing unreachable block (ram,0x0187278c) */
/* WARNING: Removing unreachable block (ram,0x018725fc) */
/* WARNING: Removing unreachable block (ram,0x01872628) */
/* WARNING: Removing unreachable block (ram,0x01872630) */
/* WARNING: Removing unreachable block (ram,0x0187251c) */
/* WARNING: Removing unreachable block (ram,0x01872548) */
/* WARNING: Removing unreachable block (ram,0x01872550) */
/* WARNING: Removing unreachable block (ram,0x018723b8) */
/* WARNING: Removing unreachable block (ram,0x01872424) */
/* WARNING: Removing unreachable block (ram,0x0187243c) */
/* WARNING: Removing unreachable block (ram,0x01872444) */
/* WARNING: Removing unreachable block (ram,0x01872448) */
/* WARNING: Removing unreachable block (ram,0x0187246c) */
/* WARNING: Removing unreachable block (ram,0x01872474) */
/* WARNING: Removing unreachable block (ram,0x018723e4) */
/* WARNING: Removing unreachable block (ram,0x018723f4) */
/* WARNING: Removing unreachable block (ram,0x018723fc) */
/* WARNING: Removing unreachable block (ram,0x01872494) */
/* WARNING: Removing unreachable block (ram,0x018722f4) */
/* WARNING: Removing unreachable block (ram,0x01872314) */
/* WARNING: Removing unreachable block (ram,0x01872320) */
/* WARNING: Removing unreachable block (ram,0x018721e8) */
/* WARNING: Removing unreachable block (ram,0x01872178) */
/* WARNING: Removing unreachable block (ram,0x018720ac) */
/* WARNING: Removing unreachable block (ram,0x0187219c) */
/* WARNING: Removing unreachable block (ram,0x018720b4) */
/* WARNING: Removing unreachable block (ram,0x018721a4) */
/* WARNING: Removing unreachable block (ram,0x018720c4) */
/* WARNING: Removing unreachable block (ram,0x018720e4) */
/* WARNING: Removing unreachable block (ram,0x018721ac) */
/* WARNING: Removing unreachable block (ram,0x018721b0) */
/* WARNING: Removing unreachable block (ram,0x018720ec) */
/* WARNING: Removing unreachable block (ram,0x018720d0) */
/* WARNING: Removing unreachable block (ram,0x01871da8) */
/* WARNING: Removing unreachable block (ram,0x01871db0) */
/* WARNING: Removing unreachable block (ram,0x01871c34) */
/* WARNING: Removing unreachable block (ram,0x015d18d0) */
/* WARNING: Removing unreachable block (ram,0x015d1904) */
/* WARNING: Removing unreachable block (ram,0x015d1918) */
/* WARNING: Removing unreachable block (ram,0x015d1924) */
/* WARNING: Removing unreachable block (ram,0x015d1934) */
/* WARNING: Removing unreachable block (ram,0x015d193c) */
/* WARNING: Removing unreachable block (ram,0x015d1940) */
/* WARNING: Removing unreachable block (ram,0x015d1950) */
/* WARNING: Removing unreachable block (ram,0x015d195c) */
/* WARNING: Removing unreachable block (ram,0x015d1960) */
/* WARNING: Removing unreachable block (ram,0x015d1968) */
/* WARNING: Removing unreachable block (ram,0x015d1974) */
/* WARNING: Removing unreachable block (ram,0x015d198c) */
/* WARNING: Removing unreachable block (ram,0x015d1994) */
/* WARNING: Removing unreachable block (ram,0x015d1998) */
/* WARNING: Removing unreachable block (ram,0x015d19b0) */
/* WARNING: Removing unreachable block (ram,0x015d19b8) */
/* WARNING: Removing unreachable block (ram,0x015d19c4) */
/* WARNING: Removing unreachable block (ram,0x015d19d8) */
/* WARNING: Removing unreachable block (ram,0x015d19e0) */
/* WARNING: Removing unreachable block (ram,0x015d19ec) */
/* WARNING: Removing unreachable block (ram,0x015d19f4) */
/* WARNING: Removing unreachable block (ram,0x015d1a04) */
/* WARNING: Removing unreachable block (ram,0x015d1a0c) */
/* WARNING: Removing unreachable block (ram,0x015d1a18) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a84) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a88) */
/* WARNING: Removing unreachable block (ram,0x015d1ab0) */
/* WARNING: Removing unreachable block (ram,0x015d1b0c) */
/* WARNING: Removing unreachable block (ram,0x015d1b24) */
/* WARNING: Removing unreachable block (ram,0x015d1b14) */
/* WARNING: Removing unreachable block (ram,0x015d1b2c) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */
/* WARNING: Removing unreachable block (ram,0x015d1a68) */
/* WARNING: Removing unreachable block (ram,0x015d1608) */
/* WARNING: Removing unreachable block (ram,0x015d1624) */
/* WARNING: Removing unreachable block (ram,0x015d1394) */
/* WARNING: Removing unreachable block (ram,0x015d13a0) */
/* WARNING: Removing unreachable block (ram,0x015d13b0) */
/* WARNING: Removing unreachable block (ram,0x015d11e4) */
/* WARNING: Removing unreachable block (ram,0x015d11f8) */
/* WARNING: Removing unreachable block (ram,0x01595448) */
/* WARNING: Removing unreachable block (ram,0x0159544c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_FrontEnd_FrontEndScene__SetKartPose
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4,uint param_5,
                int param_6,int param_7,undefined2 param_8,int param_9)

{
  int iVar1;
  ulong uVar2;
  uint extraout_w1;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  undefined2 uStack_62;
  
  auVar8._8_4_ = param_5;
  auVar8._0_8_ = param_4;
  if (param_6 - 1U < 6) {
    iVar3 = *(int *)(&UNK_033f89ac + (long)(int)(param_6 - 1U) * 4);
  }
  else {
    iVar3 = 1;
  }
  uVar2 = param_4;
  uStack_62 = param_8;
  if ((bRam0000000003eb5177 & 1) == 0) {
    func_0x00f78a20(0x3d3e5c0);
    func_0x00f78a20(0x3d23990);
    uVar2 = func_0x00f78a20(0x3d5e790);
    bRam0000000003eb5177 = 1;
  }
  lVar4 = *(long *)(param_4 + 0x90);
  if (lVar4 == 0) {
code_r0x015953e4:
    func_0x00f78af4();
  }
  else if (param_5 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)param_5 * 0x40;
    if (*(int *)(lVar4 + 0x3c) == iVar3 && param_9 == 0) {
      return uVar2;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar4 = *(long *)(param_4 + 0x90);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= param_5) goto code_r0x015953e8;
      lVar4 = *(long *)(lVar4 + (long)(int)param_5 * 0x40 + 0x40);
      if (lVar4 != 0) {
        lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
        if (iVar3 - 2U < 7) {
          fVar7 = *(float *)(&UNK_033f89c4 + (long)(int)(iVar3 - 2U) * 4);
        }
        else {
          fVar7 = 135.0;
        }
        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(lVar4,0,0);
        uVar5 = *(undefined8 *)(param_4 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
        if (iVar1 != 0) {
          if (*(long *)(param_4 + 200) == 0) goto code_r0x015953e4;
          /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetCustomisationCameraPosition*/ func_0x01595ca0(*(long *)(param_4 + 200),iVar3,0);
        }
        if (param_7 == 0) {
          /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,fVar7,0,0);
          if (lVar4 == 0) goto code_r0x015953e4;
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar4,0);
        }
        else {
          fVar6 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          uVar5 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(fVar7 * fVar6,fVar7 * param_2,fVar7 * param_3,_UNK_033f83c8,lVar4,
                                  0,0);
          /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,0xd,uRam0000000003d5e790);
        }
        /*System.Nullable<bool>$$GetValueOrDefault*/ func_0x0261a6ac(&uStack_62,iVar3 == 3,uRam0000000003d3e5c0);
        goto code_r0x015953f4;
      }
    }
    goto code_r0x015953e4;
  }
code_r0x015953e8:
  uVar5 = func_0x00f78b24();
  auVar8 = func_0x00f78ac0(uVar5,0);
code_r0x015953f4:
  lVar4 = *(long *)(auVar8._0_8_ + 0x90);
  if (lVar4 == 0) {
    func_0x00f78af4();
  }
  else if (auVar8._8_4_ < *(uint *)(lVar4 + 0x18)) {
    return *(ulong *)(lVar4 + (long)(int)auVar8._8_4_ * 0x40 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  if (extraout_w1 < 7) {
    return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x1595160 | Atlas.FrontEnd.FrontEndScene.GetPoseFromPart
// ============================================================

undefined4 Atlas_FrontEnd_FrontEndScene__GetPoseFromPart(int param_1)

{
  if (param_1 - 1U < 6) {
    return *(undefined4 *)(&UNK_033f89ac + (long)(int)(param_1 - 1U) * 4);
  }
  return 1;
}



// ============================================================
// RVA: 0x1595184 | Atlas.FrontEnd.FrontEndScene.SetKartPose
// ============================================================

/* WARNING: Possible PIC construction at 0x01595390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01595408) */
/* WARNING: Removing unreachable block (ram,0x0159540c) */
/* WARNING: Removing unreachable block (ram,0x01595424) */
/* WARNING: Removing unreachable block (ram,0x01595414) */
/* WARNING: Removing unreachable block (ram,0x01595418) */
/* WARNING: Removing unreachable block (ram,0x01595394) */
/* WARNING: Removing unreachable block (ram,0x015953b0) */
/* WARNING: Removing unreachable block (ram,0x015953bc) */
/* WARNING: Removing unreachable block (ram,0x0159543c) */
/* WARNING: Removing unreachable block (ram,0x01595440) */
/* WARNING: Removing unreachable block (ram,0x01595458) */
/* WARNING: Removing unreachable block (ram,0x0159549c) */
/* WARNING: Removing unreachable block (ram,0x0159546c) */
/* WARNING: Removing unreachable block (ram,0x015954a0) */
/* WARNING: Removing unreachable block (ram,0x01595478) */
/* WARNING: Removing unreachable block (ram,0x01595494) */
/* WARNING: Removing unreachable block (ram,0x01595488) */
/* WARNING: Removing unreachable block (ram,0x015d10cc) */
/* WARNING: Removing unreachable block (ram,0x015d10ec) */
/* WARNING: Removing unreachable block (ram,0x015d1100) */
/* WARNING: Removing unreachable block (ram,0x015d1108) */
/* WARNING: Removing unreachable block (ram,0x015d111c) */
/* WARNING: Removing unreachable block (ram,0x015d1130) */
/* WARNING: Removing unreachable block (ram,0x015d1144) */
/* WARNING: Removing unreachable block (ram,0x015d1158) */
/* WARNING: Removing unreachable block (ram,0x015d116c) */
/* WARNING: Removing unreachable block (ram,0x015d1180) */
/* WARNING: Removing unreachable block (ram,0x015d1194) */
/* WARNING: Removing unreachable block (ram,0x015d119c) */
/* WARNING: Removing unreachable block (ram,0x015d11a0) */
/* WARNING: Removing unreachable block (ram,0x015d11ac) */
/* WARNING: Removing unreachable block (ram,0x015d11bc) */
/* WARNING: Removing unreachable block (ram,0x015d11c4) */
/* WARNING: Removing unreachable block (ram,0x015d11c8) */
/* WARNING: Removing unreachable block (ram,0x015d1208) */
/* WARNING: Removing unreachable block (ram,0x015d11d8) */
/* WARNING: Removing unreachable block (ram,0x015d120c) */
/* WARNING: Removing unreachable block (ram,0x015d1240) */
/* WARNING: Removing unreachable block (ram,0x015d1260) */
/* WARNING: Removing unreachable block (ram,0x015d126c) */
/* WARNING: Removing unreachable block (ram,0x015d1284) */
/* WARNING: Removing unreachable block (ram,0x015d128c) */
/* WARNING: Removing unreachable block (ram,0x015d1298) */
/* WARNING: Removing unreachable block (ram,0x015d12a8) */
/* WARNING: Removing unreachable block (ram,0x015d12b0) */
/* WARNING: Removing unreachable block (ram,0x015d12bc) */
/* WARNING: Removing unreachable block (ram,0x015d12c4) */
/* WARNING: Removing unreachable block (ram,0x015d12d8) */
/* WARNING: Removing unreachable block (ram,0x015d12f0) */
/* WARNING: Removing unreachable block (ram,0x015d12fc) */
/* WARNING: Removing unreachable block (ram,0x015d130c) */
/* WARNING: Removing unreachable block (ram,0x015d1314) */
/* WARNING: Removing unreachable block (ram,0x015d1320) */
/* WARNING: Removing unreachable block (ram,0x015d1328) */
/* WARNING: Removing unreachable block (ram,0x015d1334) */
/* WARNING: Removing unreachable block (ram,0x015d133c) */
/* WARNING: Removing unreachable block (ram,0x015d1348) */
/* WARNING: Removing unreachable block (ram,0x015d1350) */
/* WARNING: Removing unreachable block (ram,0x015d135c) */
/* WARNING: Removing unreachable block (ram,0x015d1374) */
/* WARNING: Removing unreachable block (ram,0x015d137c) */
/* WARNING: Removing unreachable block (ram,0x015d1384) */
/* WARNING: Removing unreachable block (ram,0x015d13c8) */
/* WARNING: Removing unreachable block (ram,0x015d1388) */
/* WARNING: Removing unreachable block (ram,0x015d13cc) */
/* WARNING: Removing unreachable block (ram,0x015d1408) */
/* WARNING: Removing unreachable block (ram,0x015d1428) */
/* WARNING: Removing unreachable block (ram,0x015d1434) */
/* WARNING: Removing unreachable block (ram,0x015d15d8) */
/* WARNING: Removing unreachable block (ram,0x015d15e0) */
/* WARNING: Removing unreachable block (ram,0x015d1508) */
/* WARNING: Removing unreachable block (ram,0x015d1510) */
/* WARNING: Removing unreachable block (ram,0x015d1524) */
/* WARNING: Removing unreachable block (ram,0x015d153c) */
/* WARNING: Removing unreachable block (ram,0x015d1544) */
/* WARNING: Removing unreachable block (ram,0x015d1548) */
/* WARNING: Removing unreachable block (ram,0x015d1558) */
/* WARNING: Removing unreachable block (ram,0x015d1560) */
/* WARNING: Removing unreachable block (ram,0x015d1568) */
/* WARNING: Removing unreachable block (ram,0x015d1580) */
/* WARNING: Removing unreachable block (ram,0x015d1588) */
/* WARNING: Removing unreachable block (ram,0x015d1598) */
/* WARNING: Removing unreachable block (ram,0x015d15a0) */
/* WARNING: Removing unreachable block (ram,0x015d15a4) */
/* WARNING: Removing unreachable block (ram,0x015d15b8) */
/* WARNING: Removing unreachable block (ram,0x015d15c0) */
/* WARNING: Removing unreachable block (ram,0x015d15c8) */
/* WARNING: Removing unreachable block (ram,0x015d14f0) */
/* WARNING: Removing unreachable block (ram,0x015d14f8) */
/* WARNING: Removing unreachable block (ram,0x015d14d8) */
/* WARNING: Removing unreachable block (ram,0x015d14e0) */
/* WARNING: Removing unreachable block (ram,0x015d14c0) */
/* WARNING: Removing unreachable block (ram,0x015d14c8) */
/* WARNING: Removing unreachable block (ram,0x015d1488) */
/* WARNING: Removing unreachable block (ram,0x015d1490) */
/* WARNING: Removing unreachable block (ram,0x015d14a4) */
/* WARNING: Removing unreachable block (ram,0x015d14ac) */
/* WARNING: Removing unreachable block (ram,0x015d14b4) */
/* WARNING: Removing unreachable block (ram,0x015d1450) */
/* WARNING: Removing unreachable block (ram,0x015d1458) */
/* WARNING: Removing unreachable block (ram,0x015d146c) */
/* WARNING: Removing unreachable block (ram,0x015d1474) */
/* WARNING: Removing unreachable block (ram,0x015d147c) */
/* WARNING: Removing unreachable block (ram,0x015d15ec) */
/* WARNING: Removing unreachable block (ram,0x015d15f4) */
/* WARNING: Removing unreachable block (ram,0x015d163c) */
/* WARNING: Removing unreachable block (ram,0x015d15fc) */
/* WARNING: Removing unreachable block (ram,0x015d1640) */
/* WARNING: Removing unreachable block (ram,0x015d1678) */
/* WARNING: Removing unreachable block (ram,0x015d168c) */
/* WARNING: Removing unreachable block (ram,0x01871bfc) */
/* WARNING: Removing unreachable block (ram,0x01871c18) */
/* WARNING: Removing unreachable block (ram,0x01871c58) */
/* WARNING: Removing unreachable block (ram,0x01871c90) */
/* WARNING: Removing unreachable block (ram,0x01871cbc) */
/* WARNING: Removing unreachable block (ram,0x01871ccc) */
/* WARNING: Removing unreachable block (ram,0x01871cd4) */
/* WARNING: Removing unreachable block (ram,0x01871cd8) */
/* WARNING: Removing unreachable block (ram,0x01871cec) */
/* WARNING: Removing unreachable block (ram,0x01871cf4) */
/* WARNING: Removing unreachable block (ram,0x01871cfc) */
/* WARNING: Removing unreachable block (ram,0x01871d24) */
/* WARNING: Removing unreachable block (ram,0x01871d2c) */
/* WARNING: Removing unreachable block (ram,0x01871d5c) */
/* WARNING: Removing unreachable block (ram,0x01871d64) */
/* WARNING: Removing unreachable block (ram,0x01871d68) */
/* WARNING: Removing unreachable block (ram,0x01871d74) */
/* WARNING: Removing unreachable block (ram,0x01871d84) */
/* WARNING: Removing unreachable block (ram,0x01871d8c) */
/* WARNING: Removing unreachable block (ram,0x01871d90) */
/* WARNING: Removing unreachable block (ram,0x01871da0) */
/* WARNING: Removing unreachable block (ram,0x01871dcc) */
/* WARNING: Removing unreachable block (ram,0x01871e28) */
/* WARNING: Removing unreachable block (ram,0x01871eb4) */
/* WARNING: Removing unreachable block (ram,0x01871ecc) */
/* WARNING: Removing unreachable block (ram,0x01871ed4) */
/* WARNING: Removing unreachable block (ram,0x01871ed8) */
/* WARNING: Removing unreachable block (ram,0x01871ee8) */
/* WARNING: Removing unreachable block (ram,0x01871eec) */
/* WARNING: Removing unreachable block (ram,0x01871f10) */
/* WARNING: Removing unreachable block (ram,0x01871f1c) */
/* WARNING: Removing unreachable block (ram,0x01871f24) */
/* WARNING: Removing unreachable block (ram,0x01871f28) */
/* WARNING: Removing unreachable block (ram,0x01872014) */
/* WARNING: Removing unreachable block (ram,0x01871f38) */
/* WARNING: Removing unreachable block (ram,0x01871f44) */
/* WARNING: Removing unreachable block (ram,0x01871f4c) */
/* WARNING: Removing unreachable block (ram,0x01871f50) */
/* WARNING: Removing unreachable block (ram,0x01872020) */
/* WARNING: Removing unreachable block (ram,0x01871f80) */
/* WARNING: Removing unreachable block (ram,0x01871f88) */
/* WARNING: Removing unreachable block (ram,0x01871fa4) */
/* WARNING: Removing unreachable block (ram,0x01871fac) */
/* WARNING: Removing unreachable block (ram,0x01871fd4) */
/* WARNING: Removing unreachable block (ram,0x01871fdc) */
/* WARNING: Removing unreachable block (ram,0x01872024) */
/* WARNING: Removing unreachable block (ram,0x01872040) */
/* WARNING: Removing unreachable block (ram,0x01872048) */
/* WARNING: Removing unreachable block (ram,0x018721b4) */
/* WARNING: Removing unreachable block (ram,0x01872068) */
/* WARNING: Removing unreachable block (ram,0x0187209c) */
/* WARNING: Removing unreachable block (ram,0x018720fc) */
/* WARNING: Removing unreachable block (ram,0x01872100) */
/* WARNING: Removing unreachable block (ram,0x01872124) */
/* WARNING: Removing unreachable block (ram,0x0187212c) */
/* WARNING: Removing unreachable block (ram,0x01872154) */
/* WARNING: Removing unreachable block (ram,0x01872138) */
/* WARNING: Removing unreachable block (ram,0x01872144) */
/* WARNING: Removing unreachable block (ram,0x01872160) */
/* WARNING: Removing unreachable block (ram,0x018721b8) */
/* WARNING: Removing unreachable block (ram,0x018721e0) */
/* WARNING: Removing unreachable block (ram,0x018721f8) */
/* WARNING: Removing unreachable block (ram,0x01872234) */
/* WARNING: Removing unreachable block (ram,0x01872250) */
/* WARNING: Removing unreachable block (ram,0x01872260) */
/* WARNING: Removing unreachable block (ram,0x01872268) */
/* WARNING: Removing unreachable block (ram,0x0187228c) */
/* WARNING: Removing unreachable block (ram,0x01872290) */
/* WARNING: Removing unreachable block (ram,0x018722ac) */
/* WARNING: Removing unreachable block (ram,0x018722cc) */
/* WARNING: Removing unreachable block (ram,0x018722d0) */
/* WARNING: Removing unreachable block (ram,0x018722d4) */
/* WARNING: Removing unreachable block (ram,0x0187231c) */
/* WARNING: Removing unreachable block (ram,0x018722f0) */
/* WARNING: Removing unreachable block (ram,0x01872338) */
/* WARNING: Removing unreachable block (ram,0x01872360) */
/* WARNING: Removing unreachable block (ram,0x01872380) */
/* WARNING: Removing unreachable block (ram,0x01872390) */
/* WARNING: Removing unreachable block (ram,0x01872398) */
/* WARNING: Removing unreachable block (ram,0x018724a8) */
/* WARNING: Removing unreachable block (ram,0x018724d0) */
/* WARNING: Removing unreachable block (ram,0x018724e4) */
/* WARNING: Removing unreachable block (ram,0x018724f4) */
/* WARNING: Removing unreachable block (ram,0x018724fc) */
/* WARNING: Removing unreachable block (ram,0x01872588) */
/* WARNING: Removing unreachable block (ram,0x018725b0) */
/* WARNING: Removing unreachable block (ram,0x018725c4) */
/* WARNING: Removing unreachable block (ram,0x018725d4) */
/* WARNING: Removing unreachable block (ram,0x018725dc) */
/* WARNING: Removing unreachable block (ram,0x01872668) */
/* WARNING: Removing unreachable block (ram,0x01872690) */
/* WARNING: Removing unreachable block (ram,0x018726b0) */
/* WARNING: Removing unreachable block (ram,0x018726c0) */
/* WARNING: Removing unreachable block (ram,0x018726c8) */
/* WARNING: Removing unreachable block (ram,0x018727a0) */
/* WARNING: Removing unreachable block (ram,0x018727c8) */
/* WARNING: Removing unreachable block (ram,0x018727dc) */
/* WARNING: Removing unreachable block (ram,0x018727ec) */
/* WARNING: Removing unreachable block (ram,0x018727f4) */
/* WARNING: Removing unreachable block (ram,0x01872880) */
/* WARNING: Removing unreachable block (ram,0x018728a8) */
/* WARNING: Removing unreachable block (ram,0x018728bc) */
/* WARNING: Removing unreachable block (ram,0x018728cc) */
/* WARNING: Removing unreachable block (ram,0x018728d4) */
/* WARNING: Removing unreachable block (ram,0x01872960) */
/* WARNING: Removing unreachable block (ram,0x01872998) */
/* WARNING: Removing unreachable block (ram,0x018729a0) */
/* WARNING: Removing unreachable block (ram,0x018729d4) */
/* WARNING: Removing unreachable block (ram,0x018729c0) */
/* WARNING: Removing unreachable block (ram,0x018729e8) */
/* WARNING: Removing unreachable block (ram,0x01872a20) */
/* WARNING: Removing unreachable block (ram,0x01872a28) */
/* WARNING: Removing unreachable block (ram,0x01872a5c) */
/* WARNING: Removing unreachable block (ram,0x01872a48) */
/* WARNING: Removing unreachable block (ram,0x01872a70) */
/* WARNING: Removing unreachable block (ram,0x01872ab0) */
/* WARNING: Removing unreachable block (ram,0x01872ab8) */
/* WARNING: Removing unreachable block (ram,0x01872ad8) */
/* WARNING: Removing unreachable block (ram,0x01872ae0) */
/* WARNING: Removing unreachable block (ram,0x01872b18) */
/* WARNING: Removing unreachable block (ram,0x01872b04) */
/* WARNING: Removing unreachable block (ram,0x01872b30) */
/* WARNING: Removing unreachable block (ram,0x01872b54) */
/* WARNING: Removing unreachable block (ram,0x01872b60) */
/* WARNING: Removing unreachable block (ram,0x01872b84) */
/* WARNING: Removing unreachable block (ram,0x01872ba4) */
/* WARNING: Removing unreachable block (ram,0x01872be0) */
/* WARNING: Removing unreachable block (ram,0x01872be8) */
/* WARNING: Removing unreachable block (ram,0x01872c1c) */
/* WARNING: Removing unreachable block (ram,0x01872c08) */
/* WARNING: Removing unreachable block (ram,0x01872c34) */
/* WARNING: Removing unreachable block (ram,0x01872c74) */
/* WARNING: Removing unreachable block (ram,0x01872c7c) */
/* WARNING: Removing unreachable block (ram,0x01872cb0) */
/* WARNING: Removing unreachable block (ram,0x01872c9c) */
/* WARNING: Removing unreachable block (ram,0x01872cc8) */
/* WARNING: Removing unreachable block (ram,0x01872d08) */
/* WARNING: Removing unreachable block (ram,0x01872cf4) */
/* WARNING: Removing unreachable block (ram,0x01872ca4) */
/* WARNING: Removing unreachable block (ram,0x01872c10) */
/* WARNING: Removing unreachable block (ram,0x01872b8c) */
/* WARNING: Removing unreachable block (ram,0x01872b74) */
/* WARNING: Removing unreachable block (ram,0x01872b0c) */
/* WARNING: Removing unreachable block (ram,0x01872a50) */
/* WARNING: Removing unreachable block (ram,0x018729c8) */
/* WARNING: Removing unreachable block (ram,0x032d1fcc) */
/* WARNING: Removing unreachable block (ram,0x032d1fec) */
/* WARNING: Removing unreachable block (ram,0x032d200c) */
/* WARNING: Removing unreachable block (ram,0x032d2080) */
/* WARNING: Removing unreachable block (ram,0x032d2020) */
/* WARNING: Removing unreachable block (ram,0x032d2034) */
/* WARNING: Removing unreachable block (ram,0x032d203c) */
/* WARNING: Removing unreachable block (ram,0x032d2040) */
/* WARNING: Removing unreachable block (ram,0x032d2090) */
/* WARNING: Removing unreachable block (ram,0x032d20a4) */
/* WARNING: Removing unreachable block (ram,0x032d20ac) */
/* WARNING: Removing unreachable block (ram,0x032d20b0) */
/* WARNING: Removing unreachable block (ram,0x032d14c4) */
/* WARNING: Removing unreachable block (ram,0x032d14fc) */
/* WARNING: Removing unreachable block (ram,0x032d1588) */
/* WARNING: Removing unreachable block (ram,0x032d1594) */
/* WARNING: Removing unreachable block (ram,0x032d159c) */
/* WARNING: Removing unreachable block (ram,0x032d15a0) */
/* WARNING: Removing unreachable block (ram,0x032d15b4) */
/* WARNING: Removing unreachable block (ram,0x032d15b8) */
/* WARNING: Removing unreachable block (ram,0x032d15d4) */
/* WARNING: Removing unreachable block (ram,0x032d15dc) */
/* WARNING: Removing unreachable block (ram,0x032d15e0) */
/* WARNING: Removing unreachable block (ram,0x032d1614) */
/* WARNING: Removing unreachable block (ram,0x032d1628) */
/* WARNING: Removing unreachable block (ram,0x032d1630) */
/* WARNING: Removing unreachable block (ram,0x032d1634) */
/* WARNING: Removing unreachable block (ram,0x032d1674) */
/* WARNING: Removing unreachable block (ram,0x032d1658) */
/* WARNING: Removing unreachable block (ram,0x032d166c) */
/* WARNING: Removing unreachable block (ram,0x032d1678) */
/* WARNING: Removing unreachable block (ram,0x032d1694) */
/* WARNING: Removing unreachable block (ram,0x032d16a0) */
/* WARNING: Removing unreachable block (ram,0x032d16a8) */
/* WARNING: Removing unreachable block (ram,0x032d16ac) */
/* WARNING: Removing unreachable block (ram,0x032d16c0) */
/* WARNING: Removing unreachable block (ram,0x032d16c4) */
/* WARNING: Removing unreachable block (ram,0x032d16e0) */
/* WARNING: Removing unreachable block (ram,0x032d16e8) */
/* WARNING: Removing unreachable block (ram,0x032d16ec) */
/* WARNING: Removing unreachable block (ram,0x032d1700) */
/* WARNING: Removing unreachable block (ram,0x032d1710) */
/* WARNING: Removing unreachable block (ram,0x032d1718) */
/* WARNING: Removing unreachable block (ram,0x032d171c) */
/* WARNING: Removing unreachable block (ram,0x032d1910) */
/* WARNING: Removing unreachable block (ram,0x032d1740) */
/* WARNING: Removing unreachable block (ram,0x032d1754) */
/* WARNING: Removing unreachable block (ram,0x032d1758) */
/* WARNING: Removing unreachable block (ram,0x032d1760) */
/* WARNING: Removing unreachable block (ram,0x032d1768) */
/* WARNING: Removing unreachable block (ram,0x032d1780) */
/* WARNING: Removing unreachable block (ram,0x032d1788) */
/* WARNING: Removing unreachable block (ram,0x032d178c) */
/* WARNING: Removing unreachable block (ram,0x032d17a0) */
/* WARNING: Removing unreachable block (ram,0x032d17a4) */
/* WARNING: Removing unreachable block (ram,0x032d17bc) */
/* WARNING: Removing unreachable block (ram,0x032d17d0) */
/* WARNING: Removing unreachable block (ram,0x032d1830) */
/* WARNING: Removing unreachable block (ram,0x032d17e0) */
/* WARNING: Removing unreachable block (ram,0x032d17f4) */
/* WARNING: Removing unreachable block (ram,0x032d1824) */
/* WARNING: Removing unreachable block (ram,0x032d182c) */
/* WARNING: Removing unreachable block (ram,0x032d1804) */
/* WARNING: Removing unreachable block (ram,0x032d1818) */
/* WARNING: Removing unreachable block (ram,0x032d1820) */
/* WARNING: Removing unreachable block (ram,0x032d1838) */
/* WARNING: Removing unreachable block (ram,0x032d1844) */
/* WARNING: Removing unreachable block (ram,0x032d184c) */
/* WARNING: Removing unreachable block (ram,0x032d1850) */
/* WARNING: Removing unreachable block (ram,0x032d1868) */
/* WARNING: Removing unreachable block (ram,0x032d187c) */
/* WARNING: Removing unreachable block (ram,0x032d1884) */
/* WARNING: Removing unreachable block (ram,0x032d1888) */
/* WARNING: Removing unreachable block (ram,0x032d1898) */
/* WARNING: Removing unreachable block (ram,0x032d18ac) */
/* WARNING: Removing unreachable block (ram,0x032d18b4) */
/* WARNING: Removing unreachable block (ram,0x032d18b8) */
/* WARNING: Removing unreachable block (ram,0x032d18c0) */
/* WARNING: Removing unreachable block (ram,0x032d18d4) */
/* WARNING: Removing unreachable block (ram,0x032d18dc) */
/* WARNING: Removing unreachable block (ram,0x032d18e0) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d15f4) */
/* WARNING: Removing unreachable block (ram,0x032d205c) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x018728f4) */
/* WARNING: Removing unreachable block (ram,0x01872920) */
/* WARNING: Removing unreachable block (ram,0x01872928) */
/* WARNING: Removing unreachable block (ram,0x01872814) */
/* WARNING: Removing unreachable block (ram,0x01872840) */
/* WARNING: Removing unreachable block (ram,0x01872848) */
/* WARNING: Removing unreachable block (ram,0x018726e8) */
/* WARNING: Removing unreachable block (ram,0x01872760) */
/* WARNING: Removing unreachable block (ram,0x01872764) */
/* WARNING: Removing unreachable block (ram,0x0187276c) */
/* WARNING: Removing unreachable block (ram,0x0187272c) */
/* WARNING: Removing unreachable block (ram,0x01872730) */
/* WARNING: Removing unreachable block (ram,0x01872738) */
/* WARNING: Removing unreachable block (ram,0x0187278c) */
/* WARNING: Removing unreachable block (ram,0x018725fc) */
/* WARNING: Removing unreachable block (ram,0x01872628) */
/* WARNING: Removing unreachable block (ram,0x01872630) */
/* WARNING: Removing unreachable block (ram,0x0187251c) */
/* WARNING: Removing unreachable block (ram,0x01872548) */
/* WARNING: Removing unreachable block (ram,0x01872550) */
/* WARNING: Removing unreachable block (ram,0x018723b8) */
/* WARNING: Removing unreachable block (ram,0x01872424) */
/* WARNING: Removing unreachable block (ram,0x0187243c) */
/* WARNING: Removing unreachable block (ram,0x01872444) */
/* WARNING: Removing unreachable block (ram,0x01872448) */
/* WARNING: Removing unreachable block (ram,0x0187246c) */
/* WARNING: Removing unreachable block (ram,0x01872474) */
/* WARNING: Removing unreachable block (ram,0x018723e4) */
/* WARNING: Removing unreachable block (ram,0x018723f4) */
/* WARNING: Removing unreachable block (ram,0x018723fc) */
/* WARNING: Removing unreachable block (ram,0x01872494) */
/* WARNING: Removing unreachable block (ram,0x018722f4) */
/* WARNING: Removing unreachable block (ram,0x01872314) */
/* WARNING: Removing unreachable block (ram,0x01872320) */
/* WARNING: Removing unreachable block (ram,0x018721e8) */
/* WARNING: Removing unreachable block (ram,0x01872178) */
/* WARNING: Removing unreachable block (ram,0x018720ac) */
/* WARNING: Removing unreachable block (ram,0x0187219c) */
/* WARNING: Removing unreachable block (ram,0x018720b4) */
/* WARNING: Removing unreachable block (ram,0x018721a4) */
/* WARNING: Removing unreachable block (ram,0x018720c4) */
/* WARNING: Removing unreachable block (ram,0x018720e4) */
/* WARNING: Removing unreachable block (ram,0x018721ac) */
/* WARNING: Removing unreachable block (ram,0x018721b0) */
/* WARNING: Removing unreachable block (ram,0x018720ec) */
/* WARNING: Removing unreachable block (ram,0x018720d0) */
/* WARNING: Removing unreachable block (ram,0x01871da8) */
/* WARNING: Removing unreachable block (ram,0x01871db0) */
/* WARNING: Removing unreachable block (ram,0x01871c34) */
/* WARNING: Removing unreachable block (ram,0x015d18d0) */
/* WARNING: Removing unreachable block (ram,0x015d1904) */
/* WARNING: Removing unreachable block (ram,0x015d1918) */
/* WARNING: Removing unreachable block (ram,0x015d1924) */
/* WARNING: Removing unreachable block (ram,0x015d1934) */
/* WARNING: Removing unreachable block (ram,0x015d193c) */
/* WARNING: Removing unreachable block (ram,0x015d1940) */
/* WARNING: Removing unreachable block (ram,0x015d1950) */
/* WARNING: Removing unreachable block (ram,0x015d195c) */
/* WARNING: Removing unreachable block (ram,0x015d1960) */
/* WARNING: Removing unreachable block (ram,0x015d1968) */
/* WARNING: Removing unreachable block (ram,0x015d1974) */
/* WARNING: Removing unreachable block (ram,0x015d198c) */
/* WARNING: Removing unreachable block (ram,0x015d1994) */
/* WARNING: Removing unreachable block (ram,0x015d1998) */
/* WARNING: Removing unreachable block (ram,0x015d19b0) */
/* WARNING: Removing unreachable block (ram,0x015d19b8) */
/* WARNING: Removing unreachable block (ram,0x015d19c4) */
/* WARNING: Removing unreachable block (ram,0x015d19d8) */
/* WARNING: Removing unreachable block (ram,0x015d19e0) */
/* WARNING: Removing unreachable block (ram,0x015d19ec) */
/* WARNING: Removing unreachable block (ram,0x015d19f4) */
/* WARNING: Removing unreachable block (ram,0x015d1a04) */
/* WARNING: Removing unreachable block (ram,0x015d1a0c) */
/* WARNING: Removing unreachable block (ram,0x015d1a18) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a84) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a88) */
/* WARNING: Removing unreachable block (ram,0x015d1ab0) */
/* WARNING: Removing unreachable block (ram,0x015d1b0c) */
/* WARNING: Removing unreachable block (ram,0x015d1b24) */
/* WARNING: Removing unreachable block (ram,0x015d1b14) */
/* WARNING: Removing unreachable block (ram,0x015d1b2c) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */
/* WARNING: Removing unreachable block (ram,0x015d1a68) */
/* WARNING: Removing unreachable block (ram,0x015d1608) */
/* WARNING: Removing unreachable block (ram,0x015d1624) */
/* WARNING: Removing unreachable block (ram,0x015d1394) */
/* WARNING: Removing unreachable block (ram,0x015d13a0) */
/* WARNING: Removing unreachable block (ram,0x015d13b0) */
/* WARNING: Removing unreachable block (ram,0x015d11e4) */
/* WARNING: Removing unreachable block (ram,0x015d11f8) */
/* WARNING: Removing unreachable block (ram,0x01595448) */
/* WARNING: Removing unreachable block (ram,0x0159544c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_FrontEnd_FrontEndScene__SetKartPose
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4,uint param_5,
                undefined8 param_6,int param_7,undefined2 param_8,int param_9,ulong param_10)

{
  int iVar1;
  ulong uVar2;
  uint extraout_w1;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  undefined2 uStack_62;
  
  auVar8._8_4_ = param_5;
  auVar8._0_8_ = param_4;
  uVar2 = param_4;
  uStack_62 = param_8;
  if ((bRam0000000003eb5177 & 1) == 0) {
    func_0x00f78a20(0x3d3e5c0);
    func_0x00f78a20(0x3d23990);
    uVar2 = func_0x00f78a20(0x3d5e790);
    bRam0000000003eb5177 = 1;
  }
  lVar3 = *(long *)(param_4 + 0x90);
  if (lVar3 == 0) {
LAB_015953e4:
    func_0x00f78af4();
  }
  else if (param_5 < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)(int)param_5 * 0x40;
    iVar4 = (int)param_6;
    if (*(int *)(lVar3 + 0x3c) == iVar4 && param_9 == 0) {
      return uVar2;
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar3 = *(long *)(param_4 + 0x90);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= param_5) goto LAB_015953e8;
      lVar3 = *(long *)(lVar3 + (long)(int)param_5 * 0x40 + 0x40);
      if (lVar3 != 0) {
        lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
        if (iVar4 - 2U < 7) {
          fVar7 = *(float *)(&UNK_033f89c4 + (long)(int)(iVar4 - 2U) * 4);
        }
        else {
          fVar7 = 135.0;
        }
        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(lVar3,0,0);
        if ((param_10 & 1) == 0) {
          uVar5 = *(undefined8 *)(param_4 + 200);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
          if (iVar1 != 0) {
            if (*(long *)(param_4 + 200) == 0) goto LAB_015953e4;
            /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetCustomisationCameraPosition*/ func_0x01595ca0(*(long *)(param_4 + 200),param_6,0);
          }
        }
        if (param_7 == 0) {
          /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,fVar7,0,0);
          if (lVar3 == 0) goto LAB_015953e4;
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar3,0);
        }
        else {
          fVar6 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          uVar5 = /*DG.Tweening.ShortcutExtensions$$DORotate*/ func_0x016b35f0(fVar7 * fVar6,fVar7 * param_2,fVar7 * param_3,_UNK_033f83c8,lVar3,
                                  0,0);
          /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,0xd,uRam0000000003d5e790);
        }
        /*System.Nullable<bool>$$GetValueOrDefault*/ func_0x0261a6ac(&uStack_62,iVar4 == 3,uRam0000000003d3e5c0);
        goto code_r0x015953f4;
      }
    }
    goto LAB_015953e4;
  }
LAB_015953e8:
  uVar5 = func_0x00f78b24();
  auVar8 = func_0x00f78ac0(uVar5,0);
code_r0x015953f4:
  lVar3 = *(long *)(auVar8._0_8_ + 0x90);
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else if (auVar8._8_4_ < *(uint *)(lVar3 + 0x18)) {
    return *(ulong *)(lVar3 + (long)(int)auVar8._8_4_ * 0x40 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  if (6 < extraout_w1) {
    return 0;
  }
  return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
}



// ============================================================
// RVA: 0x15953f4 | Atlas.FrontEnd.FrontEndScene.SetGliderExtended
// ============================================================

/* WARNING: Possible PIC construction at 0x01595404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01595438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01595408) */
/* WARNING: Removing unreachable block (ram,0x0159540c) */
/* WARNING: Removing unreachable block (ram,0x01595424) */
/* WARNING: Removing unreachable block (ram,0x01595414) */
/* WARNING: Removing unreachable block (ram,0x01595418) */
/* WARNING: Removing unreachable block (ram,0x0159543c) */
/* WARNING: Removing unreachable block (ram,0x01595440) */
/* WARNING: Removing unreachable block (ram,0x01595458) */
/* WARNING: Removing unreachable block (ram,0x0159549c) */
/* WARNING: Removing unreachable block (ram,0x0159546c) */
/* WARNING: Removing unreachable block (ram,0x015954a0) */
/* WARNING: Removing unreachable block (ram,0x01595478) */
/* WARNING: Removing unreachable block (ram,0x01595494) */
/* WARNING: Removing unreachable block (ram,0x01595488) */
/* WARNING: Removing unreachable block (ram,0x015d10cc) */
/* WARNING: Removing unreachable block (ram,0x015d10ec) */
/* WARNING: Removing unreachable block (ram,0x015d1100) */
/* WARNING: Removing unreachable block (ram,0x015d1108) */
/* WARNING: Removing unreachable block (ram,0x015d111c) */
/* WARNING: Removing unreachable block (ram,0x015d1130) */
/* WARNING: Removing unreachable block (ram,0x015d1144) */
/* WARNING: Removing unreachable block (ram,0x015d1158) */
/* WARNING: Removing unreachable block (ram,0x015d116c) */
/* WARNING: Removing unreachable block (ram,0x015d1180) */
/* WARNING: Removing unreachable block (ram,0x015d1194) */
/* WARNING: Removing unreachable block (ram,0x015d119c) */
/* WARNING: Removing unreachable block (ram,0x015d11a0) */
/* WARNING: Removing unreachable block (ram,0x015d11ac) */
/* WARNING: Removing unreachable block (ram,0x015d11bc) */
/* WARNING: Removing unreachable block (ram,0x015d11c4) */
/* WARNING: Removing unreachable block (ram,0x015d11c8) */
/* WARNING: Removing unreachable block (ram,0x015d1208) */
/* WARNING: Removing unreachable block (ram,0x015d11d8) */
/* WARNING: Removing unreachable block (ram,0x015d120c) */
/* WARNING: Removing unreachable block (ram,0x015d1240) */
/* WARNING: Removing unreachable block (ram,0x015d1260) */
/* WARNING: Removing unreachable block (ram,0x015d126c) */
/* WARNING: Removing unreachable block (ram,0x015d1284) */
/* WARNING: Removing unreachable block (ram,0x015d128c) */
/* WARNING: Removing unreachable block (ram,0x015d1298) */
/* WARNING: Removing unreachable block (ram,0x015d12a8) */
/* WARNING: Removing unreachable block (ram,0x015d12b0) */
/* WARNING: Removing unreachable block (ram,0x015d12bc) */
/* WARNING: Removing unreachable block (ram,0x015d12c4) */
/* WARNING: Removing unreachable block (ram,0x015d12d8) */
/* WARNING: Removing unreachable block (ram,0x015d12f0) */
/* WARNING: Removing unreachable block (ram,0x015d12fc) */
/* WARNING: Removing unreachable block (ram,0x015d130c) */
/* WARNING: Removing unreachable block (ram,0x015d1314) */
/* WARNING: Removing unreachable block (ram,0x015d1320) */
/* WARNING: Removing unreachable block (ram,0x015d1328) */
/* WARNING: Removing unreachable block (ram,0x015d1334) */
/* WARNING: Removing unreachable block (ram,0x015d133c) */
/* WARNING: Removing unreachable block (ram,0x015d1348) */
/* WARNING: Removing unreachable block (ram,0x015d1350) */
/* WARNING: Removing unreachable block (ram,0x015d135c) */
/* WARNING: Removing unreachable block (ram,0x015d1374) */
/* WARNING: Removing unreachable block (ram,0x015d137c) */
/* WARNING: Removing unreachable block (ram,0x015d1384) */
/* WARNING: Removing unreachable block (ram,0x015d13c8) */
/* WARNING: Removing unreachable block (ram,0x015d1388) */
/* WARNING: Removing unreachable block (ram,0x015d13cc) */
/* WARNING: Removing unreachable block (ram,0x015d1408) */
/* WARNING: Removing unreachable block (ram,0x015d1428) */
/* WARNING: Removing unreachable block (ram,0x015d1434) */
/* WARNING: Removing unreachable block (ram,0x015d15d8) */
/* WARNING: Removing unreachable block (ram,0x015d15e0) */
/* WARNING: Removing unreachable block (ram,0x015d1508) */
/* WARNING: Removing unreachable block (ram,0x015d1510) */
/* WARNING: Removing unreachable block (ram,0x015d1524) */
/* WARNING: Removing unreachable block (ram,0x015d153c) */
/* WARNING: Removing unreachable block (ram,0x015d1544) */
/* WARNING: Removing unreachable block (ram,0x015d1548) */
/* WARNING: Removing unreachable block (ram,0x015d1558) */
/* WARNING: Removing unreachable block (ram,0x015d1560) */
/* WARNING: Removing unreachable block (ram,0x015d1568) */
/* WARNING: Removing unreachable block (ram,0x015d1580) */
/* WARNING: Removing unreachable block (ram,0x015d1588) */
/* WARNING: Removing unreachable block (ram,0x015d1598) */
/* WARNING: Removing unreachable block (ram,0x015d15a0) */
/* WARNING: Removing unreachable block (ram,0x015d15a4) */
/* WARNING: Removing unreachable block (ram,0x015d15b8) */
/* WARNING: Removing unreachable block (ram,0x015d15c0) */
/* WARNING: Removing unreachable block (ram,0x015d15c8) */
/* WARNING: Removing unreachable block (ram,0x015d14f0) */
/* WARNING: Removing unreachable block (ram,0x015d14f8) */
/* WARNING: Removing unreachable block (ram,0x015d14d8) */
/* WARNING: Removing unreachable block (ram,0x015d14e0) */
/* WARNING: Removing unreachable block (ram,0x015d14c0) */
/* WARNING: Removing unreachable block (ram,0x015d14c8) */
/* WARNING: Removing unreachable block (ram,0x015d1488) */
/* WARNING: Removing unreachable block (ram,0x015d1490) */
/* WARNING: Removing unreachable block (ram,0x015d14a4) */
/* WARNING: Removing unreachable block (ram,0x015d14ac) */
/* WARNING: Removing unreachable block (ram,0x015d14b4) */
/* WARNING: Removing unreachable block (ram,0x015d1450) */
/* WARNING: Removing unreachable block (ram,0x015d1458) */
/* WARNING: Removing unreachable block (ram,0x015d146c) */
/* WARNING: Removing unreachable block (ram,0x015d1474) */
/* WARNING: Removing unreachable block (ram,0x015d147c) */
/* WARNING: Removing unreachable block (ram,0x015d15ec) */
/* WARNING: Removing unreachable block (ram,0x015d15f4) */
/* WARNING: Removing unreachable block (ram,0x015d163c) */
/* WARNING: Removing unreachable block (ram,0x015d15fc) */
/* WARNING: Removing unreachable block (ram,0x015d1640) */
/* WARNING: Removing unreachable block (ram,0x015d1678) */
/* WARNING: Removing unreachable block (ram,0x015d168c) */
/* WARNING: Removing unreachable block (ram,0x01871bfc) */
/* WARNING: Removing unreachable block (ram,0x01871c18) */
/* WARNING: Removing unreachable block (ram,0x01871c58) */
/* WARNING: Removing unreachable block (ram,0x01871c90) */
/* WARNING: Removing unreachable block (ram,0x01871cbc) */
/* WARNING: Removing unreachable block (ram,0x01871ccc) */
/* WARNING: Removing unreachable block (ram,0x01871cd4) */
/* WARNING: Removing unreachable block (ram,0x01871cd8) */
/* WARNING: Removing unreachable block (ram,0x01871cec) */
/* WARNING: Removing unreachable block (ram,0x01871cf4) */
/* WARNING: Removing unreachable block (ram,0x01871cfc) */
/* WARNING: Removing unreachable block (ram,0x01871d24) */
/* WARNING: Removing unreachable block (ram,0x01871d2c) */
/* WARNING: Removing unreachable block (ram,0x01871d5c) */
/* WARNING: Removing unreachable block (ram,0x01871d64) */
/* WARNING: Removing unreachable block (ram,0x01871d68) */
/* WARNING: Removing unreachable block (ram,0x01871d74) */
/* WARNING: Removing unreachable block (ram,0x01871d84) */
/* WARNING: Removing unreachable block (ram,0x01871d8c) */
/* WARNING: Removing unreachable block (ram,0x01871d90) */
/* WARNING: Removing unreachable block (ram,0x01871da0) */
/* WARNING: Removing unreachable block (ram,0x01871dcc) */
/* WARNING: Removing unreachable block (ram,0x01871e28) */
/* WARNING: Removing unreachable block (ram,0x01871eb4) */
/* WARNING: Removing unreachable block (ram,0x01871ecc) */
/* WARNING: Removing unreachable block (ram,0x01871ed4) */
/* WARNING: Removing unreachable block (ram,0x01871ed8) */
/* WARNING: Removing unreachable block (ram,0x01871ee8) */
/* WARNING: Removing unreachable block (ram,0x01871eec) */
/* WARNING: Removing unreachable block (ram,0x01871f10) */
/* WARNING: Removing unreachable block (ram,0x01871f1c) */
/* WARNING: Removing unreachable block (ram,0x01871f24) */
/* WARNING: Removing unreachable block (ram,0x01871f28) */
/* WARNING: Removing unreachable block (ram,0x01872014) */
/* WARNING: Removing unreachable block (ram,0x01871f38) */
/* WARNING: Removing unreachable block (ram,0x01871f44) */
/* WARNING: Removing unreachable block (ram,0x01871f4c) */
/* WARNING: Removing unreachable block (ram,0x01871f50) */
/* WARNING: Removing unreachable block (ram,0x01872020) */
/* WARNING: Removing unreachable block (ram,0x01871f80) */
/* WARNING: Removing unreachable block (ram,0x01871f88) */
/* WARNING: Removing unreachable block (ram,0x01871fa4) */
/* WARNING: Removing unreachable block (ram,0x01871fac) */
/* WARNING: Removing unreachable block (ram,0x01871fd4) */
/* WARNING: Removing unreachable block (ram,0x01871fdc) */
/* WARNING: Removing unreachable block (ram,0x01872024) */
/* WARNING: Removing unreachable block (ram,0x01872040) */
/* WARNING: Removing unreachable block (ram,0x01872048) */
/* WARNING: Removing unreachable block (ram,0x018721b4) */
/* WARNING: Removing unreachable block (ram,0x01872068) */
/* WARNING: Removing unreachable block (ram,0x0187209c) */
/* WARNING: Removing unreachable block (ram,0x018720fc) */
/* WARNING: Removing unreachable block (ram,0x01872100) */
/* WARNING: Removing unreachable block (ram,0x01872124) */
/* WARNING: Removing unreachable block (ram,0x0187212c) */
/* WARNING: Removing unreachable block (ram,0x01872154) */
/* WARNING: Removing unreachable block (ram,0x01872138) */
/* WARNING: Removing unreachable block (ram,0x01872144) */
/* WARNING: Removing unreachable block (ram,0x01872160) */
/* WARNING: Removing unreachable block (ram,0x018721b8) */
/* WARNING: Removing unreachable block (ram,0x018721e0) */
/* WARNING: Removing unreachable block (ram,0x018721f8) */
/* WARNING: Removing unreachable block (ram,0x01872234) */
/* WARNING: Removing unreachable block (ram,0x01872250) */
/* WARNING: Removing unreachable block (ram,0x01872260) */
/* WARNING: Removing unreachable block (ram,0x01872268) */
/* WARNING: Removing unreachable block (ram,0x0187228c) */
/* WARNING: Removing unreachable block (ram,0x01872290) */
/* WARNING: Removing unreachable block (ram,0x018722ac) */
/* WARNING: Removing unreachable block (ram,0x018722cc) */
/* WARNING: Removing unreachable block (ram,0x018722d0) */
/* WARNING: Removing unreachable block (ram,0x018722d4) */
/* WARNING: Removing unreachable block (ram,0x0187231c) */
/* WARNING: Removing unreachable block (ram,0x018722f0) */
/* WARNING: Removing unreachable block (ram,0x01872338) */
/* WARNING: Removing unreachable block (ram,0x01872360) */
/* WARNING: Removing unreachable block (ram,0x01872380) */
/* WARNING: Removing unreachable block (ram,0x01872390) */
/* WARNING: Removing unreachable block (ram,0x01872398) */
/* WARNING: Removing unreachable block (ram,0x018724a8) */
/* WARNING: Removing unreachable block (ram,0x018724d0) */
/* WARNING: Removing unreachable block (ram,0x018724e4) */
/* WARNING: Removing unreachable block (ram,0x018724f4) */
/* WARNING: Removing unreachable block (ram,0x018724fc) */
/* WARNING: Removing unreachable block (ram,0x01872588) */
/* WARNING: Removing unreachable block (ram,0x018725b0) */
/* WARNING: Removing unreachable block (ram,0x018725c4) */
/* WARNING: Removing unreachable block (ram,0x018725d4) */
/* WARNING: Removing unreachable block (ram,0x018725dc) */
/* WARNING: Removing unreachable block (ram,0x01872668) */
/* WARNING: Removing unreachable block (ram,0x01872690) */
/* WARNING: Removing unreachable block (ram,0x018726b0) */
/* WARNING: Removing unreachable block (ram,0x018726c0) */
/* WARNING: Removing unreachable block (ram,0x018726c8) */
/* WARNING: Removing unreachable block (ram,0x018727a0) */
/* WARNING: Removing unreachable block (ram,0x018727c8) */
/* WARNING: Removing unreachable block (ram,0x018727dc) */
/* WARNING: Removing unreachable block (ram,0x018727ec) */
/* WARNING: Removing unreachable block (ram,0x018727f4) */
/* WARNING: Removing unreachable block (ram,0x01872880) */
/* WARNING: Removing unreachable block (ram,0x018728a8) */
/* WARNING: Removing unreachable block (ram,0x018728bc) */
/* WARNING: Removing unreachable block (ram,0x018728cc) */
/* WARNING: Removing unreachable block (ram,0x018728d4) */
/* WARNING: Removing unreachable block (ram,0x01872960) */
/* WARNING: Removing unreachable block (ram,0x01872998) */
/* WARNING: Removing unreachable block (ram,0x018729a0) */
/* WARNING: Removing unreachable block (ram,0x018729d4) */
/* WARNING: Removing unreachable block (ram,0x018729c0) */
/* WARNING: Removing unreachable block (ram,0x018729e8) */
/* WARNING: Removing unreachable block (ram,0x01872a20) */
/* WARNING: Removing unreachable block (ram,0x01872a28) */
/* WARNING: Removing unreachable block (ram,0x01872a5c) */
/* WARNING: Removing unreachable block (ram,0x01872a48) */
/* WARNING: Removing unreachable block (ram,0x01872a70) */
/* WARNING: Removing unreachable block (ram,0x01872ab0) */
/* WARNING: Removing unreachable block (ram,0x01872ab8) */
/* WARNING: Removing unreachable block (ram,0x01872ad8) */
/* WARNING: Removing unreachable block (ram,0x01872ae0) */
/* WARNING: Removing unreachable block (ram,0x01872b18) */
/* WARNING: Removing unreachable block (ram,0x01872b04) */
/* WARNING: Removing unreachable block (ram,0x01872b30) */
/* WARNING: Removing unreachable block (ram,0x01872b54) */
/* WARNING: Removing unreachable block (ram,0x01872b60) */
/* WARNING: Removing unreachable block (ram,0x01872b84) */
/* WARNING: Removing unreachable block (ram,0x01872ba4) */
/* WARNING: Removing unreachable block (ram,0x01872be0) */
/* WARNING: Removing unreachable block (ram,0x01872be8) */
/* WARNING: Removing unreachable block (ram,0x01872c1c) */
/* WARNING: Removing unreachable block (ram,0x01872c08) */
/* WARNING: Removing unreachable block (ram,0x01872c34) */
/* WARNING: Removing unreachable block (ram,0x01872c74) */
/* WARNING: Removing unreachable block (ram,0x01872c7c) */
/* WARNING: Removing unreachable block (ram,0x01872cb0) */
/* WARNING: Removing unreachable block (ram,0x01872c9c) */
/* WARNING: Removing unreachable block (ram,0x01872cc8) */
/* WARNING: Removing unreachable block (ram,0x01872d08) */
/* WARNING: Removing unreachable block (ram,0x01872cf4) */
/* WARNING: Removing unreachable block (ram,0x01872ca4) */
/* WARNING: Removing unreachable block (ram,0x01872c10) */
/* WARNING: Removing unreachable block (ram,0x01872b8c) */
/* WARNING: Removing unreachable block (ram,0x01872b74) */
/* WARNING: Removing unreachable block (ram,0x01872b0c) */
/* WARNING: Removing unreachable block (ram,0x01872a50) */
/* WARNING: Removing unreachable block (ram,0x018729c8) */
/* WARNING: Removing unreachable block (ram,0x032d1fcc) */
/* WARNING: Removing unreachable block (ram,0x032d1fec) */
/* WARNING: Removing unreachable block (ram,0x032d200c) */
/* WARNING: Removing unreachable block (ram,0x032d2080) */
/* WARNING: Removing unreachable block (ram,0x032d2020) */
/* WARNING: Removing unreachable block (ram,0x032d2034) */
/* WARNING: Removing unreachable block (ram,0x032d203c) */
/* WARNING: Removing unreachable block (ram,0x032d2040) */
/* WARNING: Removing unreachable block (ram,0x032d2090) */
/* WARNING: Removing unreachable block (ram,0x032d20a4) */
/* WARNING: Removing unreachable block (ram,0x032d20ac) */
/* WARNING: Removing unreachable block (ram,0x032d20b0) */
/* WARNING: Removing unreachable block (ram,0x032d14c4) */
/* WARNING: Removing unreachable block (ram,0x032d14fc) */
/* WARNING: Removing unreachable block (ram,0x032d1588) */
/* WARNING: Removing unreachable block (ram,0x032d1594) */
/* WARNING: Removing unreachable block (ram,0x032d159c) */
/* WARNING: Removing unreachable block (ram,0x032d15a0) */
/* WARNING: Removing unreachable block (ram,0x032d15b4) */
/* WARNING: Removing unreachable block (ram,0x032d15b8) */
/* WARNING: Removing unreachable block (ram,0x032d15d4) */
/* WARNING: Removing unreachable block (ram,0x032d15dc) */
/* WARNING: Removing unreachable block (ram,0x032d15e0) */
/* WARNING: Removing unreachable block (ram,0x032d1614) */
/* WARNING: Removing unreachable block (ram,0x032d1628) */
/* WARNING: Removing unreachable block (ram,0x032d1630) */
/* WARNING: Removing unreachable block (ram,0x032d1634) */
/* WARNING: Removing unreachable block (ram,0x032d1674) */
/* WARNING: Removing unreachable block (ram,0x032d1658) */
/* WARNING: Removing unreachable block (ram,0x032d166c) */
/* WARNING: Removing unreachable block (ram,0x032d1678) */
/* WARNING: Removing unreachable block (ram,0x032d1694) */
/* WARNING: Removing unreachable block (ram,0x032d16a0) */
/* WARNING: Removing unreachable block (ram,0x032d16a8) */
/* WARNING: Removing unreachable block (ram,0x032d16ac) */
/* WARNING: Removing unreachable block (ram,0x032d16c0) */
/* WARNING: Removing unreachable block (ram,0x032d16c4) */
/* WARNING: Removing unreachable block (ram,0x032d16e0) */
/* WARNING: Removing unreachable block (ram,0x032d16e8) */
/* WARNING: Removing unreachable block (ram,0x032d16ec) */
/* WARNING: Removing unreachable block (ram,0x032d1700) */
/* WARNING: Removing unreachable block (ram,0x032d1710) */
/* WARNING: Removing unreachable block (ram,0x032d1718) */
/* WARNING: Removing unreachable block (ram,0x032d171c) */
/* WARNING: Removing unreachable block (ram,0x032d1910) */
/* WARNING: Removing unreachable block (ram,0x032d1740) */
/* WARNING: Removing unreachable block (ram,0x032d1754) */
/* WARNING: Removing unreachable block (ram,0x032d1758) */
/* WARNING: Removing unreachable block (ram,0x032d1760) */
/* WARNING: Removing unreachable block (ram,0x032d1768) */
/* WARNING: Removing unreachable block (ram,0x032d1780) */
/* WARNING: Removing unreachable block (ram,0x032d1788) */
/* WARNING: Removing unreachable block (ram,0x032d178c) */
/* WARNING: Removing unreachable block (ram,0x032d17a0) */
/* WARNING: Removing unreachable block (ram,0x032d17a4) */
/* WARNING: Removing unreachable block (ram,0x032d17bc) */
/* WARNING: Removing unreachable block (ram,0x032d17d0) */
/* WARNING: Removing unreachable block (ram,0x032d1830) */
/* WARNING: Removing unreachable block (ram,0x032d17e0) */
/* WARNING: Removing unreachable block (ram,0x032d17f4) */
/* WARNING: Removing unreachable block (ram,0x032d1824) */
/* WARNING: Removing unreachable block (ram,0x032d182c) */
/* WARNING: Removing unreachable block (ram,0x032d1804) */
/* WARNING: Removing unreachable block (ram,0x032d1818) */
/* WARNING: Removing unreachable block (ram,0x032d1820) */
/* WARNING: Removing unreachable block (ram,0x032d1838) */
/* WARNING: Removing unreachable block (ram,0x032d1844) */
/* WARNING: Removing unreachable block (ram,0x032d184c) */
/* WARNING: Removing unreachable block (ram,0x032d1850) */
/* WARNING: Removing unreachable block (ram,0x032d1868) */
/* WARNING: Removing unreachable block (ram,0x032d187c) */
/* WARNING: Removing unreachable block (ram,0x032d1884) */
/* WARNING: Removing unreachable block (ram,0x032d1888) */
/* WARNING: Removing unreachable block (ram,0x032d1898) */
/* WARNING: Removing unreachable block (ram,0x032d18ac) */
/* WARNING: Removing unreachable block (ram,0x032d18b4) */
/* WARNING: Removing unreachable block (ram,0x032d18b8) */
/* WARNING: Removing unreachable block (ram,0x032d18c0) */
/* WARNING: Removing unreachable block (ram,0x032d18d4) */
/* WARNING: Removing unreachable block (ram,0x032d18dc) */
/* WARNING: Removing unreachable block (ram,0x032d18e0) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d15f4) */
/* WARNING: Removing unreachable block (ram,0x032d205c) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x018728f4) */
/* WARNING: Removing unreachable block (ram,0x01872920) */
/* WARNING: Removing unreachable block (ram,0x01872928) */
/* WARNING: Removing unreachable block (ram,0x01872814) */
/* WARNING: Removing unreachable block (ram,0x01872840) */
/* WARNING: Removing unreachable block (ram,0x01872848) */
/* WARNING: Removing unreachable block (ram,0x018726e8) */
/* WARNING: Removing unreachable block (ram,0x01872760) */
/* WARNING: Removing unreachable block (ram,0x01872764) */
/* WARNING: Removing unreachable block (ram,0x0187276c) */
/* WARNING: Removing unreachable block (ram,0x0187272c) */
/* WARNING: Removing unreachable block (ram,0x01872730) */
/* WARNING: Removing unreachable block (ram,0x01872738) */
/* WARNING: Removing unreachable block (ram,0x0187278c) */
/* WARNING: Removing unreachable block (ram,0x018725fc) */
/* WARNING: Removing unreachable block (ram,0x01872628) */
/* WARNING: Removing unreachable block (ram,0x01872630) */
/* WARNING: Removing unreachable block (ram,0x0187251c) */
/* WARNING: Removing unreachable block (ram,0x01872548) */
/* WARNING: Removing unreachable block (ram,0x01872550) */
/* WARNING: Removing unreachable block (ram,0x018723b8) */
/* WARNING: Removing unreachable block (ram,0x01872424) */
/* WARNING: Removing unreachable block (ram,0x0187243c) */
/* WARNING: Removing unreachable block (ram,0x01872444) */
/* WARNING: Removing unreachable block (ram,0x01872448) */
/* WARNING: Removing unreachable block (ram,0x0187246c) */
/* WARNING: Removing unreachable block (ram,0x01872474) */
/* WARNING: Removing unreachable block (ram,0x018723e4) */
/* WARNING: Removing unreachable block (ram,0x018723f4) */
/* WARNING: Removing unreachable block (ram,0x018723fc) */
/* WARNING: Removing unreachable block (ram,0x01872494) */
/* WARNING: Removing unreachable block (ram,0x018722f4) */
/* WARNING: Removing unreachable block (ram,0x01872314) */
/* WARNING: Removing unreachable block (ram,0x01872320) */
/* WARNING: Removing unreachable block (ram,0x018721e8) */
/* WARNING: Removing unreachable block (ram,0x01872178) */
/* WARNING: Removing unreachable block (ram,0x018720ac) */
/* WARNING: Removing unreachable block (ram,0x0187219c) */
/* WARNING: Removing unreachable block (ram,0x018720b4) */
/* WARNING: Removing unreachable block (ram,0x018721a4) */
/* WARNING: Removing unreachable block (ram,0x018720c4) */
/* WARNING: Removing unreachable block (ram,0x018720e4) */
/* WARNING: Removing unreachable block (ram,0x018721ac) */
/* WARNING: Removing unreachable block (ram,0x018721b0) */
/* WARNING: Removing unreachable block (ram,0x018720ec) */
/* WARNING: Removing unreachable block (ram,0x018720d0) */
/* WARNING: Removing unreachable block (ram,0x01871da8) */
/* WARNING: Removing unreachable block (ram,0x01871db0) */
/* WARNING: Removing unreachable block (ram,0x01871c34) */
/* WARNING: Removing unreachable block (ram,0x015d18d0) */
/* WARNING: Removing unreachable block (ram,0x015d1904) */
/* WARNING: Removing unreachable block (ram,0x015d1918) */
/* WARNING: Removing unreachable block (ram,0x015d1924) */
/* WARNING: Removing unreachable block (ram,0x015d1934) */
/* WARNING: Removing unreachable block (ram,0x015d193c) */
/* WARNING: Removing unreachable block (ram,0x015d1940) */
/* WARNING: Removing unreachable block (ram,0x015d1950) */
/* WARNING: Removing unreachable block (ram,0x015d195c) */
/* WARNING: Removing unreachable block (ram,0x015d1960) */
/* WARNING: Removing unreachable block (ram,0x015d1968) */
/* WARNING: Removing unreachable block (ram,0x015d1974) */
/* WARNING: Removing unreachable block (ram,0x015d198c) */
/* WARNING: Removing unreachable block (ram,0x015d1994) */
/* WARNING: Removing unreachable block (ram,0x015d1998) */
/* WARNING: Removing unreachable block (ram,0x015d19b0) */
/* WARNING: Removing unreachable block (ram,0x015d19b8) */
/* WARNING: Removing unreachable block (ram,0x015d19c4) */
/* WARNING: Removing unreachable block (ram,0x015d19d8) */
/* WARNING: Removing unreachable block (ram,0x015d19e0) */
/* WARNING: Removing unreachable block (ram,0x015d19ec) */
/* WARNING: Removing unreachable block (ram,0x015d19f4) */
/* WARNING: Removing unreachable block (ram,0x015d1a04) */
/* WARNING: Removing unreachable block (ram,0x015d1a0c) */
/* WARNING: Removing unreachable block (ram,0x015d1a18) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a84) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a88) */
/* WARNING: Removing unreachable block (ram,0x015d1ab0) */
/* WARNING: Removing unreachable block (ram,0x015d1b0c) */
/* WARNING: Removing unreachable block (ram,0x015d1b24) */
/* WARNING: Removing unreachable block (ram,0x015d1b14) */
/* WARNING: Removing unreachable block (ram,0x015d1b2c) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */
/* WARNING: Removing unreachable block (ram,0x015d1a68) */
/* WARNING: Removing unreachable block (ram,0x015d1608) */
/* WARNING: Removing unreachable block (ram,0x015d1624) */
/* WARNING: Removing unreachable block (ram,0x015d1394) */
/* WARNING: Removing unreachable block (ram,0x015d13a0) */
/* WARNING: Removing unreachable block (ram,0x015d13b0) */
/* WARNING: Removing unreachable block (ram,0x015d11e4) */
/* WARNING: Removing unreachable block (ram,0x015d11f8) */
/* WARNING: Removing unreachable block (ram,0x01595448) */
/* WARNING: Removing unreachable block (ram,0x0159544c) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong Atlas_FrontEnd_FrontEndScene__SetGliderExtended(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint extraout_w1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(ulong *)(lVar2 + (long)(int)param_2 * 0x40 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  func_0x00f78ac0(uVar1,0);
  if (extraout_w1 < 7) {
    return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x1595428 | Atlas.FrontEnd.FrontEndScene.SetBoostersOn
// ============================================================

/* WARNING: Possible PIC construction at 0x01595438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x018729d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01872cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159543c) */
/* WARNING: Removing unreachable block (ram,0x01595440) */
/* WARNING: Removing unreachable block (ram,0x01595458) */
/* WARNING: Removing unreachable block (ram,0x0159549c) */
/* WARNING: Removing unreachable block (ram,0x0159546c) */
/* WARNING: Removing unreachable block (ram,0x015954a0) */
/* WARNING: Removing unreachable block (ram,0x01595478) */
/* WARNING: Removing unreachable block (ram,0x01595494) */
/* WARNING: Removing unreachable block (ram,0x01595488) */
/* WARNING: Removing unreachable block (ram,0x015d10cc) */
/* WARNING: Removing unreachable block (ram,0x015d10ec) */
/* WARNING: Removing unreachable block (ram,0x015d1100) */
/* WARNING: Removing unreachable block (ram,0x015d1108) */
/* WARNING: Removing unreachable block (ram,0x015d111c) */
/* WARNING: Removing unreachable block (ram,0x015d1130) */
/* WARNING: Removing unreachable block (ram,0x015d1144) */
/* WARNING: Removing unreachable block (ram,0x015d1158) */
/* WARNING: Removing unreachable block (ram,0x015d116c) */
/* WARNING: Removing unreachable block (ram,0x015d1180) */
/* WARNING: Removing unreachable block (ram,0x015d1194) */
/* WARNING: Removing unreachable block (ram,0x015d119c) */
/* WARNING: Removing unreachable block (ram,0x015d11a0) */
/* WARNING: Removing unreachable block (ram,0x015d11ac) */
/* WARNING: Removing unreachable block (ram,0x015d11bc) */
/* WARNING: Removing unreachable block (ram,0x015d11c4) */
/* WARNING: Removing unreachable block (ram,0x015d11c8) */
/* WARNING: Removing unreachable block (ram,0x015d1208) */
/* WARNING: Removing unreachable block (ram,0x015d11d8) */
/* WARNING: Removing unreachable block (ram,0x015d120c) */
/* WARNING: Removing unreachable block (ram,0x015d1240) */
/* WARNING: Removing unreachable block (ram,0x015d1260) */
/* WARNING: Removing unreachable block (ram,0x015d126c) */
/* WARNING: Removing unreachable block (ram,0x015d1284) */
/* WARNING: Removing unreachable block (ram,0x015d128c) */
/* WARNING: Removing unreachable block (ram,0x015d1298) */
/* WARNING: Removing unreachable block (ram,0x015d12a8) */
/* WARNING: Removing unreachable block (ram,0x015d12b0) */
/* WARNING: Removing unreachable block (ram,0x015d12bc) */
/* WARNING: Removing unreachable block (ram,0x015d12c4) */
/* WARNING: Removing unreachable block (ram,0x015d12d8) */
/* WARNING: Removing unreachable block (ram,0x015d12f0) */
/* WARNING: Removing unreachable block (ram,0x015d12fc) */
/* WARNING: Removing unreachable block (ram,0x015d130c) */
/* WARNING: Removing unreachable block (ram,0x015d1314) */
/* WARNING: Removing unreachable block (ram,0x015d1320) */
/* WARNING: Removing unreachable block (ram,0x015d1328) */
/* WARNING: Removing unreachable block (ram,0x015d1334) */
/* WARNING: Removing unreachable block (ram,0x015d133c) */
/* WARNING: Removing unreachable block (ram,0x015d1348) */
/* WARNING: Removing unreachable block (ram,0x015d1350) */
/* WARNING: Removing unreachable block (ram,0x015d135c) */
/* WARNING: Removing unreachable block (ram,0x015d1374) */
/* WARNING: Removing unreachable block (ram,0x015d137c) */
/* WARNING: Removing unreachable block (ram,0x015d1384) */
/* WARNING: Removing unreachable block (ram,0x015d13c8) */
/* WARNING: Removing unreachable block (ram,0x015d1388) */
/* WARNING: Removing unreachable block (ram,0x015d13cc) */
/* WARNING: Removing unreachable block (ram,0x015d1408) */
/* WARNING: Removing unreachable block (ram,0x015d1428) */
/* WARNING: Removing unreachable block (ram,0x015d1434) */
/* WARNING: Removing unreachable block (ram,0x015d15d8) */
/* WARNING: Removing unreachable block (ram,0x015d15e0) */
/* WARNING: Removing unreachable block (ram,0x015d1508) */
/* WARNING: Removing unreachable block (ram,0x015d1510) */
/* WARNING: Removing unreachable block (ram,0x015d1524) */
/* WARNING: Removing unreachable block (ram,0x015d153c) */
/* WARNING: Removing unreachable block (ram,0x015d1544) */
/* WARNING: Removing unreachable block (ram,0x015d1548) */
/* WARNING: Removing unreachable block (ram,0x015d1558) */
/* WARNING: Removing unreachable block (ram,0x015d1560) */
/* WARNING: Removing unreachable block (ram,0x015d1568) */
/* WARNING: Removing unreachable block (ram,0x015d1580) */
/* WARNING: Removing unreachable block (ram,0x015d1588) */
/* WARNING: Removing unreachable block (ram,0x015d1598) */
/* WARNING: Removing unreachable block (ram,0x015d15a0) */
/* WARNING: Removing unreachable block (ram,0x015d15a4) */
/* WARNING: Removing unreachable block (ram,0x015d15b8) */
/* WARNING: Removing unreachable block (ram,0x015d15c0) */
/* WARNING: Removing unreachable block (ram,0x015d15c8) */
/* WARNING: Removing unreachable block (ram,0x015d14f0) */
/* WARNING: Removing unreachable block (ram,0x015d14f8) */
/* WARNING: Removing unreachable block (ram,0x015d14d8) */
/* WARNING: Removing unreachable block (ram,0x015d14e0) */
/* WARNING: Removing unreachable block (ram,0x015d14c0) */
/* WARNING: Removing unreachable block (ram,0x015d14c8) */
/* WARNING: Removing unreachable block (ram,0x015d1488) */
/* WARNING: Removing unreachable block (ram,0x015d1490) */
/* WARNING: Removing unreachable block (ram,0x015d14a4) */
/* WARNING: Removing unreachable block (ram,0x015d14ac) */
/* WARNING: Removing unreachable block (ram,0x015d14b4) */
/* WARNING: Removing unreachable block (ram,0x015d1450) */
/* WARNING: Removing unreachable block (ram,0x015d1458) */
/* WARNING: Removing unreachable block (ram,0x015d146c) */
/* WARNING: Removing unreachable block (ram,0x015d1474) */
/* WARNING: Removing unreachable block (ram,0x015d147c) */
/* WARNING: Removing unreachable block (ram,0x015d15ec) */
/* WARNING: Removing unreachable block (ram,0x015d15f4) */
/* WARNING: Removing unreachable block (ram,0x015d163c) */
/* WARNING: Removing unreachable block (ram,0x015d15fc) */
/* WARNING: Removing unreachable block (ram,0x015d1640) */
/* WARNING: Removing unreachable block (ram,0x015d1678) */
/* WARNING: Removing unreachable block (ram,0x015d168c) */
/* WARNING: Removing unreachable block (ram,0x01871bfc) */
/* WARNING: Removing unreachable block (ram,0x01871c18) */
/* WARNING: Removing unreachable block (ram,0x01871c58) */
/* WARNING: Removing unreachable block (ram,0x01871c90) */
/* WARNING: Removing unreachable block (ram,0x01871cbc) */
/* WARNING: Removing unreachable block (ram,0x01871ccc) */
/* WARNING: Removing unreachable block (ram,0x01871cd4) */
/* WARNING: Removing unreachable block (ram,0x01871cd8) */
/* WARNING: Removing unreachable block (ram,0x01871cec) */
/* WARNING: Removing unreachable block (ram,0x01871cf4) */
/* WARNING: Removing unreachable block (ram,0x01871cfc) */
/* WARNING: Removing unreachable block (ram,0x01871d24) */
/* WARNING: Removing unreachable block (ram,0x01871d2c) */
/* WARNING: Removing unreachable block (ram,0x01871d5c) */
/* WARNING: Removing unreachable block (ram,0x01871d64) */
/* WARNING: Removing unreachable block (ram,0x01871d68) */
/* WARNING: Removing unreachable block (ram,0x01871d74) */
/* WARNING: Removing unreachable block (ram,0x01871d84) */
/* WARNING: Removing unreachable block (ram,0x01871d8c) */
/* WARNING: Removing unreachable block (ram,0x01871d90) */
/* WARNING: Removing unreachable block (ram,0x01871da0) */
/* WARNING: Removing unreachable block (ram,0x01871dcc) */
/* WARNING: Removing unreachable block (ram,0x01871e28) */
/* WARNING: Removing unreachable block (ram,0x01871eb4) */
/* WARNING: Removing unreachable block (ram,0x01871ecc) */
/* WARNING: Removing unreachable block (ram,0x01871ed4) */
/* WARNING: Removing unreachable block (ram,0x01871ed8) */
/* WARNING: Removing unreachable block (ram,0x01871ee8) */
/* WARNING: Removing unreachable block (ram,0x01871eec) */
/* WARNING: Removing unreachable block (ram,0x01871f10) */
/* WARNING: Removing unreachable block (ram,0x01871f1c) */
/* WARNING: Removing unreachable block (ram,0x01871f24) */
/* WARNING: Removing unreachable block (ram,0x01871f28) */
/* WARNING: Removing unreachable block (ram,0x01872014) */
/* WARNING: Removing unreachable block (ram,0x01871f38) */
/* WARNING: Removing unreachable block (ram,0x01871f44) */
/* WARNING: Removing unreachable block (ram,0x01871f4c) */
/* WARNING: Removing unreachable block (ram,0x01871f50) */
/* WARNING: Removing unreachable block (ram,0x01872020) */
/* WARNING: Removing unreachable block (ram,0x01871f80) */
/* WARNING: Removing unreachable block (ram,0x01871f88) */
/* WARNING: Removing unreachable block (ram,0x01871fa4) */
/* WARNING: Removing unreachable block (ram,0x01871fac) */
/* WARNING: Removing unreachable block (ram,0x01871fd4) */
/* WARNING: Removing unreachable block (ram,0x01871fdc) */
/* WARNING: Removing unreachable block (ram,0x01872024) */
/* WARNING: Removing unreachable block (ram,0x01872040) */
/* WARNING: Removing unreachable block (ram,0x01872048) */
/* WARNING: Removing unreachable block (ram,0x018721b4) */
/* WARNING: Removing unreachable block (ram,0x01872068) */
/* WARNING: Removing unreachable block (ram,0x0187209c) */
/* WARNING: Removing unreachable block (ram,0x018720fc) */
/* WARNING: Removing unreachable block (ram,0x01872100) */
/* WARNING: Removing unreachable block (ram,0x01872124) */
/* WARNING: Removing unreachable block (ram,0x0187212c) */
/* WARNING: Removing unreachable block (ram,0x01872154) */
/* WARNING: Removing unreachable block (ram,0x01872138) */
/* WARNING: Removing unreachable block (ram,0x01872144) */
/* WARNING: Removing unreachable block (ram,0x01872160) */
/* WARNING: Removing unreachable block (ram,0x018721b8) */
/* WARNING: Removing unreachable block (ram,0x018721e0) */
/* WARNING: Removing unreachable block (ram,0x018721f8) */
/* WARNING: Removing unreachable block (ram,0x01872234) */
/* WARNING: Removing unreachable block (ram,0x01872250) */
/* WARNING: Removing unreachable block (ram,0x01872260) */
/* WARNING: Removing unreachable block (ram,0x01872268) */
/* WARNING: Removing unreachable block (ram,0x0187228c) */
/* WARNING: Removing unreachable block (ram,0x01872290) */
/* WARNING: Removing unreachable block (ram,0x018722ac) */
/* WARNING: Removing unreachable block (ram,0x018722cc) */
/* WARNING: Removing unreachable block (ram,0x018722d0) */
/* WARNING: Removing unreachable block (ram,0x018722d4) */
/* WARNING: Removing unreachable block (ram,0x0187231c) */
/* WARNING: Removing unreachable block (ram,0x018722f0) */
/* WARNING: Removing unreachable block (ram,0x01872338) */
/* WARNING: Removing unreachable block (ram,0x01872360) */
/* WARNING: Removing unreachable block (ram,0x01872380) */
/* WARNING: Removing unreachable block (ram,0x01872390) */
/* WARNING: Removing unreachable block (ram,0x01872398) */
/* WARNING: Removing unreachable block (ram,0x018724a8) */
/* WARNING: Removing unreachable block (ram,0x018724d0) */
/* WARNING: Removing unreachable block (ram,0x018724e4) */
/* WARNING: Removing unreachable block (ram,0x018724f4) */
/* WARNING: Removing unreachable block (ram,0x018724fc) */
/* WARNING: Removing unreachable block (ram,0x01872588) */
/* WARNING: Removing unreachable block (ram,0x018725b0) */
/* WARNING: Removing unreachable block (ram,0x018725c4) */
/* WARNING: Removing unreachable block (ram,0x018725d4) */
/* WARNING: Removing unreachable block (ram,0x018725dc) */
/* WARNING: Removing unreachable block (ram,0x01872668) */
/* WARNING: Removing unreachable block (ram,0x01872690) */
/* WARNING: Removing unreachable block (ram,0x018726b0) */
/* WARNING: Removing unreachable block (ram,0x018726c0) */
/* WARNING: Removing unreachable block (ram,0x018726c8) */
/* WARNING: Removing unreachable block (ram,0x018727a0) */
/* WARNING: Removing unreachable block (ram,0x018727c8) */
/* WARNING: Removing unreachable block (ram,0x018727dc) */
/* WARNING: Removing unreachable block (ram,0x018727ec) */
/* WARNING: Removing unreachable block (ram,0x018727f4) */
/* WARNING: Removing unreachable block (ram,0x01872880) */
/* WARNING: Removing unreachable block (ram,0x018728a8) */
/* WARNING: Removing unreachable block (ram,0x018728bc) */
/* WARNING: Removing unreachable block (ram,0x018728cc) */
/* WARNING: Removing unreachable block (ram,0x018728d4) */
/* WARNING: Removing unreachable block (ram,0x01872960) */
/* WARNING: Removing unreachable block (ram,0x01872998) */
/* WARNING: Removing unreachable block (ram,0x018729a0) */
/* WARNING: Removing unreachable block (ram,0x018729d4) */
/* WARNING: Removing unreachable block (ram,0x018729c0) */
/* WARNING: Removing unreachable block (ram,0x018729e8) */
/* WARNING: Removing unreachable block (ram,0x01872a20) */
/* WARNING: Removing unreachable block (ram,0x01872a28) */
/* WARNING: Removing unreachable block (ram,0x01872a5c) */
/* WARNING: Removing unreachable block (ram,0x01872a48) */
/* WARNING: Removing unreachable block (ram,0x01872a70) */
/* WARNING: Removing unreachable block (ram,0x01872ab0) */
/* WARNING: Removing unreachable block (ram,0x01872ab8) */
/* WARNING: Removing unreachable block (ram,0x01872ad8) */
/* WARNING: Removing unreachable block (ram,0x01872ae0) */
/* WARNING: Removing unreachable block (ram,0x01872b18) */
/* WARNING: Removing unreachable block (ram,0x01872b04) */
/* WARNING: Removing unreachable block (ram,0x01872b30) */
/* WARNING: Removing unreachable block (ram,0x01872b54) */
/* WARNING: Removing unreachable block (ram,0x01872b60) */
/* WARNING: Removing unreachable block (ram,0x01872b84) */
/* WARNING: Removing unreachable block (ram,0x01872ba4) */
/* WARNING: Removing unreachable block (ram,0x01872be0) */
/* WARNING: Removing unreachable block (ram,0x01872be8) */
/* WARNING: Removing unreachable block (ram,0x01872c1c) */
/* WARNING: Removing unreachable block (ram,0x01872c08) */
/* WARNING: Removing unreachable block (ram,0x01872c34) */
/* WARNING: Removing unreachable block (ram,0x01872c74) */
/* WARNING: Removing unreachable block (ram,0x01872c7c) */
/* WARNING: Removing unreachable block (ram,0x01872cb0) */
/* WARNING: Removing unreachable block (ram,0x01872c9c) */
/* WARNING: Removing unreachable block (ram,0x01872cc8) */
/* WARNING: Removing unreachable block (ram,0x01872d08) */
/* WARNING: Removing unreachable block (ram,0x01872cf4) */
/* WARNING: Removing unreachable block (ram,0x01872ca4) */
/* WARNING: Removing unreachable block (ram,0x01872c10) */
/* WARNING: Removing unreachable block (ram,0x01872b8c) */
/* WARNING: Removing unreachable block (ram,0x01872b74) */
/* WARNING: Removing unreachable block (ram,0x01872b0c) */
/* WARNING: Removing unreachable block (ram,0x01872a50) */
/* WARNING: Removing unreachable block (ram,0x018729c8) */
/* WARNING: Removing unreachable block (ram,0x032d1fcc) */
/* WARNING: Removing unreachable block (ram,0x032d1fec) */
/* WARNING: Removing unreachable block (ram,0x032d200c) */
/* WARNING: Removing unreachable block (ram,0x032d2080) */
/* WARNING: Removing unreachable block (ram,0x032d2020) */
/* WARNING: Removing unreachable block (ram,0x032d2034) */
/* WARNING: Removing unreachable block (ram,0x032d203c) */
/* WARNING: Removing unreachable block (ram,0x032d2040) */
/* WARNING: Removing unreachable block (ram,0x032d2090) */
/* WARNING: Removing unreachable block (ram,0x032d20a4) */
/* WARNING: Removing unreachable block (ram,0x032d20ac) */
/* WARNING: Removing unreachable block (ram,0x032d20b0) */
/* WARNING: Removing unreachable block (ram,0x032d14c4) */
/* WARNING: Removing unreachable block (ram,0x032d14fc) */
/* WARNING: Removing unreachable block (ram,0x032d1588) */
/* WARNING: Removing unreachable block (ram,0x032d1594) */
/* WARNING: Removing unreachable block (ram,0x032d159c) */
/* WARNING: Removing unreachable block (ram,0x032d15a0) */
/* WARNING: Removing unreachable block (ram,0x032d15b4) */
/* WARNING: Removing unreachable block (ram,0x032d15b8) */
/* WARNING: Removing unreachable block (ram,0x032d15d4) */
/* WARNING: Removing unreachable block (ram,0x032d15dc) */
/* WARNING: Removing unreachable block (ram,0x032d15e0) */
/* WARNING: Removing unreachable block (ram,0x032d1614) */
/* WARNING: Removing unreachable block (ram,0x032d1628) */
/* WARNING: Removing unreachable block (ram,0x032d1630) */
/* WARNING: Removing unreachable block (ram,0x032d1634) */
/* WARNING: Removing unreachable block (ram,0x032d1674) */
/* WARNING: Removing unreachable block (ram,0x032d1658) */
/* WARNING: Removing unreachable block (ram,0x032d166c) */
/* WARNING: Removing unreachable block (ram,0x032d1678) */
/* WARNING: Removing unreachable block (ram,0x032d1694) */
/* WARNING: Removing unreachable block (ram,0x032d16a0) */
/* WARNING: Removing unreachable block (ram,0x032d16a8) */
/* WARNING: Removing unreachable block (ram,0x032d16ac) */
/* WARNING: Removing unreachable block (ram,0x032d16c0) */
/* WARNING: Removing unreachable block (ram,0x032d16c4) */
/* WARNING: Removing unreachable block (ram,0x032d16e0) */
/* WARNING: Removing unreachable block (ram,0x032d16e8) */
/* WARNING: Removing unreachable block (ram,0x032d16ec) */
/* WARNING: Removing unreachable block (ram,0x032d1700) */
/* WARNING: Removing unreachable block (ram,0x032d1710) */
/* WARNING: Removing unreachable block (ram,0x032d1718) */
/* WARNING: Removing unreachable block (ram,0x032d171c) */
/* WARNING: Removing unreachable block (ram,0x032d1910) */
/* WARNING: Removing unreachable block (ram,0x032d1740) */
/* WARNING: Removing unreachable block (ram,0x032d1754) */
/* WARNING: Removing unreachable block (ram,0x032d1758) */
/* WARNING: Removing unreachable block (ram,0x032d1760) */
/* WARNING: Removing unreachable block (ram,0x032d1768) */
/* WARNING: Removing unreachable block (ram,0x032d1780) */
/* WARNING: Removing unreachable block (ram,0x032d1788) */
/* WARNING: Removing unreachable block (ram,0x032d178c) */
/* WARNING: Removing unreachable block (ram,0x032d17a0) */
/* WARNING: Removing unreachable block (ram,0x032d17a4) */
/* WARNING: Removing unreachable block (ram,0x032d17bc) */
/* WARNING: Removing unreachable block (ram,0x032d17d0) */
/* WARNING: Removing unreachable block (ram,0x032d1830) */
/* WARNING: Removing unreachable block (ram,0x032d17e0) */
/* WARNING: Removing unreachable block (ram,0x032d17f4) */
/* WARNING: Removing unreachable block (ram,0x032d1824) */
/* WARNING: Removing unreachable block (ram,0x032d182c) */
/* WARNING: Removing unreachable block (ram,0x032d1804) */
/* WARNING: Removing unreachable block (ram,0x032d1818) */
/* WARNING: Removing unreachable block (ram,0x032d1820) */
/* WARNING: Removing unreachable block (ram,0x032d1838) */
/* WARNING: Removing unreachable block (ram,0x032d1844) */
/* WARNING: Removing unreachable block (ram,0x032d184c) */
/* WARNING: Removing unreachable block (ram,0x032d1850) */
/* WARNING: Removing unreachable block (ram,0x032d1868) */
/* WARNING: Removing unreachable block (ram,0x032d187c) */
/* WARNING: Removing unreachable block (ram,0x032d1884) */
/* WARNING: Removing unreachable block (ram,0x032d1888) */
/* WARNING: Removing unreachable block (ram,0x032d1898) */
/* WARNING: Removing unreachable block (ram,0x032d18ac) */
/* WARNING: Removing unreachable block (ram,0x032d18b4) */
/* WARNING: Removing unreachable block (ram,0x032d18b8) */
/* WARNING: Removing unreachable block (ram,0x032d18c0) */
/* WARNING: Removing unreachable block (ram,0x032d18d4) */
/* WARNING: Removing unreachable block (ram,0x032d18dc) */
/* WARNING: Removing unreachable block (ram,0x032d18e0) */
/* WARNING: Removing unreachable block (ram,0x0233e08c) */
/* WARNING: Removing unreachable block (ram,0x0233e0b8) */
/* WARNING: Removing unreachable block (ram,0x0233e0c0) */
/* WARNING: Removing unreachable block (ram,0x0233e0d0) */
/* WARNING: Removing unreachable block (ram,0x0233e0dc) */
/* WARNING: Removing unreachable block (ram,0x0233e0e0) */
/* WARNING: Removing unreachable block (ram,0x0233e0ec) */
/* WARNING: Removing unreachable block (ram,0x0233e0f4) */
/* WARNING: Removing unreachable block (ram,0x0233e104) */
/* WARNING: Removing unreachable block (ram,0x0233e10c) */
/* WARNING: Removing unreachable block (ram,0x0233e114) */
/* WARNING: Removing unreachable block (ram,0x0233e120) */
/* WARNING: Removing unreachable block (ram,0x0233e128) */
/* WARNING: Removing unreachable block (ram,0x0233e138) */
/* WARNING: Removing unreachable block (ram,0x0233e140) */
/* WARNING: Removing unreachable block (ram,0x0233e148) */
/* WARNING: Removing unreachable block (ram,0x0233e154) */
/* WARNING: Removing unreachable block (ram,0x0233e15c) */
/* WARNING: Removing unreachable block (ram,0x0233e16c) */
/* WARNING: Removing unreachable block (ram,0x0233e174) */
/* WARNING: Removing unreachable block (ram,0x0233e1e8) */
/* WARNING: Removing unreachable block (ram,0x0233e210) */
/* WARNING: Removing unreachable block (ram,0x0233e218) */
/* WARNING: Removing unreachable block (ram,0x0233e228) */
/* WARNING: Removing unreachable block (ram,0x0233e230) */
/* WARNING: Removing unreachable block (ram,0x0233e24c) */
/* WARNING: Removing unreachable block (ram,0x0233e25c) */
/* WARNING: Removing unreachable block (ram,0x0233e270) */
/* WARNING: Removing unreachable block (ram,0x0233e280) */
/* WARNING: Removing unreachable block (ram,0x0233e28c) */
/* WARNING: Removing unreachable block (ram,0x0233e294) */
/* WARNING: Removing unreachable block (ram,0x0233e2b8) */
/* WARNING: Removing unreachable block (ram,0x0233e2c0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d0) */
/* WARNING: Removing unreachable block (ram,0x0233e2d8) */
/* WARNING: Removing unreachable block (ram,0x0233e2f4) */
/* WARNING: Removing unreachable block (ram,0x0233e304) */
/* WARNING: Removing unreachable block (ram,0x0233e314) */
/* WARNING: Removing unreachable block (ram,0x0233e31c) */
/* WARNING: Removing unreachable block (ram,0x0233e340) */
/* WARNING: Removing unreachable block (ram,0x0233e348) */
/* WARNING: Removing unreachable block (ram,0x0233e358) */
/* WARNING: Removing unreachable block (ram,0x0233e360) */
/* WARNING: Removing unreachable block (ram,0x0233e180) */
/* WARNING: Removing unreachable block (ram,0x0233e190) */
/* WARNING: Removing unreachable block (ram,0x0233e1a0) */
/* WARNING: Removing unreachable block (ram,0x0233e1b0) */
/* WARNING: Removing unreachable block (ram,0x0233e1c0) */
/* WARNING: Removing unreachable block (ram,0x032d15f4) */
/* WARNING: Removing unreachable block (ram,0x032d205c) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x018728f4) */
/* WARNING: Removing unreachable block (ram,0x01872920) */
/* WARNING: Removing unreachable block (ram,0x01872928) */
/* WARNING: Removing unreachable block (ram,0x01872814) */
/* WARNING: Removing unreachable block (ram,0x01872840) */
/* WARNING: Removing unreachable block (ram,0x01872848) */
/* WARNING: Removing unreachable block (ram,0x018726e8) */
/* WARNING: Removing unreachable block (ram,0x01872760) */
/* WARNING: Removing unreachable block (ram,0x01872764) */
/* WARNING: Removing unreachable block (ram,0x0187276c) */
/* WARNING: Removing unreachable block (ram,0x0187272c) */
/* WARNING: Removing unreachable block (ram,0x01872730) */
/* WARNING: Removing unreachable block (ram,0x01872738) */
/* WARNING: Removing unreachable block (ram,0x0187278c) */
/* WARNING: Removing unreachable block (ram,0x018725fc) */
/* WARNING: Removing unreachable block (ram,0x01872628) */
/* WARNING: Removing unreachable block (ram,0x01872630) */
/* WARNING: Removing unreachable block (ram,0x0187251c) */
/* WARNING: Removing unreachable block (ram,0x01872548) */
/* WARNING: Removing unreachable block (ram,0x01872550) */
/* WARNING: Removing unreachable block (ram,0x018723b8) */
/* WARNING: Removing unreachable block (ram,0x01872424) */
/* WARNING: Removing unreachable block (ram,0x0187243c) */
/* WARNING: Removing unreachable block (ram,0x01872444) */
/* WARNING: Removing unreachable block (ram,0x01872448) */
/* WARNING: Removing unreachable block (ram,0x0187246c) */
/* WARNING: Removing unreachable block (ram,0x01872474) */
/* WARNING: Removing unreachable block (ram,0x018723e4) */
/* WARNING: Removing unreachable block (ram,0x018723f4) */
/* WARNING: Removing unreachable block (ram,0x018723fc) */
/* WARNING: Removing unreachable block (ram,0x01872494) */
/* WARNING: Removing unreachable block (ram,0x018722f4) */
/* WARNING: Removing unreachable block (ram,0x01872314) */
/* WARNING: Removing unreachable block (ram,0x01872320) */
/* WARNING: Removing unreachable block (ram,0x018721e8) */
/* WARNING: Removing unreachable block (ram,0x01872178) */
/* WARNING: Removing unreachable block (ram,0x018720ac) */
/* WARNING: Removing unreachable block (ram,0x0187219c) */
/* WARNING: Removing unreachable block (ram,0x018720b4) */
/* WARNING: Removing unreachable block (ram,0x018721a4) */
/* WARNING: Removing unreachable block (ram,0x018720c4) */
/* WARNING: Removing unreachable block (ram,0x018720e4) */
/* WARNING: Removing unreachable block (ram,0x018721ac) */
/* WARNING: Removing unreachable block (ram,0x018721b0) */
/* WARNING: Removing unreachable block (ram,0x018720ec) */
/* WARNING: Removing unreachable block (ram,0x018720d0) */
/* WARNING: Removing unreachable block (ram,0x01871da8) */
/* WARNING: Removing unreachable block (ram,0x01871db0) */
/* WARNING: Removing unreachable block (ram,0x01871c34) */
/* WARNING: Removing unreachable block (ram,0x015d18d0) */
/* WARNING: Removing unreachable block (ram,0x015d1904) */
/* WARNING: Removing unreachable block (ram,0x015d1918) */
/* WARNING: Removing unreachable block (ram,0x015d1924) */
/* WARNING: Removing unreachable block (ram,0x015d1934) */
/* WARNING: Removing unreachable block (ram,0x015d193c) */
/* WARNING: Removing unreachable block (ram,0x015d1940) */
/* WARNING: Removing unreachable block (ram,0x015d1950) */
/* WARNING: Removing unreachable block (ram,0x015d195c) */
/* WARNING: Removing unreachable block (ram,0x015d1960) */
/* WARNING: Removing unreachable block (ram,0x015d1968) */
/* WARNING: Removing unreachable block (ram,0x015d1974) */
/* WARNING: Removing unreachable block (ram,0x015d198c) */
/* WARNING: Removing unreachable block (ram,0x015d1994) */
/* WARNING: Removing unreachable block (ram,0x015d1998) */
/* WARNING: Removing unreachable block (ram,0x015d19b0) */
/* WARNING: Removing unreachable block (ram,0x015d19b8) */
/* WARNING: Removing unreachable block (ram,0x015d19c4) */
/* WARNING: Removing unreachable block (ram,0x015d19d8) */
/* WARNING: Removing unreachable block (ram,0x015d19e0) */
/* WARNING: Removing unreachable block (ram,0x015d19ec) */
/* WARNING: Removing unreachable block (ram,0x015d19f4) */
/* WARNING: Removing unreachable block (ram,0x015d1a04) */
/* WARNING: Removing unreachable block (ram,0x015d1a0c) */
/* WARNING: Removing unreachable block (ram,0x015d1a18) */
/* WARNING: Removing unreachable block (ram,0x015d1a34) */
/* WARNING: Removing unreachable block (ram,0x015d1a84) */
/* WARNING: Removing unreachable block (ram,0x015d1a54) */
/* WARNING: Removing unreachable block (ram,0x015d1a88) */
/* WARNING: Removing unreachable block (ram,0x015d1ab0) */
/* WARNING: Removing unreachable block (ram,0x015d1b0c) */
/* WARNING: Removing unreachable block (ram,0x015d1b24) */
/* WARNING: Removing unreachable block (ram,0x015d1b14) */
/* WARNING: Removing unreachable block (ram,0x015d1b2c) */
/* WARNING: Removing unreachable block (ram,0x015d1a60) */
/* WARNING: Removing unreachable block (ram,0x015d1a68) */
/* WARNING: Removing unreachable block (ram,0x015d1608) */
/* WARNING: Removing unreachable block (ram,0x015d1624) */
/* WARNING: Removing unreachable block (ram,0x015d1394) */
/* WARNING: Removing unreachable block (ram,0x015d13a0) */
/* WARNING: Removing unreachable block (ram,0x015d13b0) */
/* WARNING: Removing unreachable block (ram,0x015d11e4) */
/* WARNING: Removing unreachable block (ram,0x015d11f8) */
/* WARNING: Removing unreachable block (ram,0x01595448) */
/* WARNING: Removing unreachable block (ram,0x0159544c) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong Atlas_FrontEnd_FrontEndScene__SetBoostersOn(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint extraout_w1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(ulong *)(lVar2 + (long)(int)param_2 * 0x40 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  func_0x00f78ac0(uVar1,0);
  if (extraout_w1 < 7) {
    return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x159545c | Atlas.FrontEnd.FrontEndScene.ResetKart
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15954ac | Atlas.FrontEnd.FrontEndScene.GetKart
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__GetKart(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint extraout_w1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(ulong *)(lVar2 + (long)(int)param_2 * 0x40 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  func_0x00f78ac0(uVar1,0);
  if (extraout_w1 < 7) {
    return (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)extraout_w1 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x15954ec | Atlas.FrontEnd.FrontEndScene.GetMaterialDuplicatorIdForPart
// ============================================================

undefined4
Atlas_FrontEnd_FrontEndScene__GetMaterialDuplicatorIdForPart(undefined8 param_1,uint param_2)

{
  if (param_2 < 7) {
    return *(undefined4 *)(&UNK_033f89e0 + (long)(int)param_2 * 4);
  }
  return 0;
}



// ============================================================
// RVA: 0x159550c | Atlas.FrontEnd.FrontEndScene.KartPartLoaded
// ============================================================

void Atlas_FrontEnd_FrontEndScene__KartPartLoaded
               (long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long *plVar12;
  long unaff_x20;
  long lVar13;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  ulong uVar14;
  ulong unaff_x24;
  ulong uVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 **ppuVar16;
  code *unaff_x30;
  uint uVar17;
  uint extraout_s0;
  uint extraout_s0_00;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_a0 [16];
  long lStack_90;
  int iStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar14 = 0x3eb5000;
  uVar8 = param_4;
  if ((bRam0000000003eb5178 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5178 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x90);
  uVar15 = unaff_x24;
  if (lVar9 != 0) {
    uVar17 = (uint)param_4;
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar14 = 0;
      uVar15 = 0;
      uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar15) {
LAB_015956dc:
          uVar5 = func_0x00f78b24();
          func_0x00f78ac0(uVar5,0);
          goto LAB_015956e8;
        }
        if (*(long *)(lVar9 + uVar14 + 0x20) == param_5) {
          lVar9 = *(long *)(lVar9 + uVar14 + 0x30);
          if (lVar9 == 0) goto LAB_015956e8;
          Atlas_Gameplay_Kart_KartFEAnimator__ReapplyAnimationAndTriggers(lVar9,0);
          lVar9 = *(long *)(param_1 + 0x90);
          if (lVar9 == 0) goto LAB_015956e8;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_015956dc;
          if (*(char *)(lVar9 + uVar14 + 0x39) != '\0') {
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_015956e8;
            param_3 = 0;
            uVar14 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x50),param_2);
            uVar10 = uVar14;
            if (uVar17 - 3 < 2) {
              if (*(long *)(param_1 + 0x38) == 0) goto LAB_015956e8;
              param_2 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstKartWithStockWheel*/ func_0x0146779c(*(long *)(param_1 + 0x38),param_2,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              param_3 = 0;
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0);
              if (iVar4 != 0) {
                if ((param_2 == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_015956e8;
                param_3 = 0;
                uVar10 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x18));
              }
            }
            if ((uVar10 & 1) == 0) {
              if (uVar17 < 7) {
                param_3 = (ulong)*(uint *)(&UNK_033f89e0 + (long)(int)uVar17 * 4);
              }
              else {
                param_3 = 0;
              }
              if (param_5 == 0) goto LAB_015956e8;
              if (*(long *)(param_5 + 0x28) != 0) {
                uVar8 = 0;
                Atlas_Gameplay_Kart_KartVisualComposite__SetGreyScale(*(long *)(param_5 + 0x28),1);
              }
              goto code_r0x015955d0;
            }
            break;
          }
        }
        uVar15 = uVar15 + 1;
        uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar14 = uVar14 + 0x40;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    if (param_5 != 0) {
code_r0x015955d0:
      lVar9 = *(long *)(param_5 + 0x28);
      if (uVar17 < 7) {
        iVar4 = *(int *)(&UNK_033f89e0 + (long)(int)uVar17 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (lVar9 != 0) {
        uVar17 = *(uint *)(param_1 + 0xd8);
        puVar3 = (undefined1 *)register0x00000008;
        goto code_r0x015eb390;
      }
    }
  }
LAB_015956e8:
  func_0x00f78af4();
  if ((extraout_x1 == 0) || (lVar9 = *(long *)(extraout_x1 + 0x28), lVar9 == 0)) {
    return;
  }
  puStack_48 = &Atlas_FrontEnd_FrontEndScene__SetKartGreyScale;
  ppuVar16 = &puStack_50;
  uStack_80 = uVar15;
  uStack_78 = uVar14;
  lStack_70 = param_2;
  lStack_68 = param_5;
  uStack_60 = param_4;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53f9 & 1) == 0) {
    func_0x00f78a20(0x3d220f0,param_3,uVar8,0);
    func_0x00f78a20(0x3d1d1c0);
    func_0x00f78a20(0x3d1d3e8);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d6d158);
    bRam0000000003eb53f9 = 1;
  }
  lVar9 = *(long *)(lVar9 + 0x20);
  if ((lVar9 == 0) || (plVar12 = *(long **)(lVar9 + 0x10), plVar12 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar9 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_015eadb4;
        }
        piVar11 = piVar11 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0,0);
LAB_015eadb4:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
    if (plVar12 != (long *)0x0) {
      unaff_x23 = 0x3d1d3e8;
      unaff_x24 = 0x3d6d158;
code_r0x015eade0:
      do {
        lVar9 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar14 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eae2c;
            }
            piVar11 = piVar11 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x015eae2c:
        uVar14 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          lVar13 = 0;
          goto joined_r0x015eaee0;
        }
        lVar9 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar14 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eae88;
            }
            piVar11 = piVar11 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8,0);
code_r0x015eae88:
        (*(code *)*puVar7)(auStack_a0,plVar12,puVar7[1]);
      } while (((int)uVar8 != -1) && (iStack_88 != (int)uVar8));
      if ((int)param_3 != 0) {
        if (lStack_90 == 0) {
          func_0x00f78af4();
          goto code_r0x015eaf78;
        }
        /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lStack_90,/*STR('GREYSCALE')*/ uRam0000000003d6d158,0);
        goto code_r0x015eade0;
      }
      if (lStack_90 != 0) {
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lStack_90,/*STR('GREYSCALE')*/ uRam0000000003d6d158,0);
        goto code_r0x015eade0;
      }
      func_0x00f78af4();
      goto code_r0x015eaf78;
    }
  }
  func_0x00f78af4();
code_r0x015eaf78:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15eaf7c);
  (*pcVar2)();
joined_r0x015eaee0:
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x015eaf38;
        }
        piVar11 = piVar11 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015eaf38:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
  if (lVar13 == 0) {
    return;
  }
  func_0x00f78ac0(lVar13,0);
  if (extraout_w1 != 1) goto code_r0x015eafbc;
  plVar6 = (long *)___cxa_begin_catch();
  lVar13 = *plVar6;
  ___cxa_end_catch();
  goto joined_r0x015eaee0;
code_r0x015eafbc:
  lVar9 = __Unwind_Resume();
  if ((bRam0000000003eb53fa & 1) == 0) {
    func_0x00f78a20(0x3d25318);
    bRam0000000003eb53fa = 1;
  }
  if (((*(ushort *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(uint **)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8);
  iVar4 = -1;
  pcVar2 = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias;
  uVar8 = 0x3d22180;
  puVar3 = auStack_a0;
  uVar17 = extraout_s0;
  while( true ) {
    unaff_x21 = (ulong)uVar1;
    *(undefined8 *)(puVar3 + -0x60) = unaff_d9;
    *(ulong *)(puVar3 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(ulong *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = uVar8;
    *(ulong *)(puVar3 + -0x28) = param_3;
    *(long *)(puVar3 + -0x20) = lVar13;
    *(long **)(puVar3 + -0x18) = plVar12;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar16;
    *(code **)(puVar3 + -8) = pcVar2;
    unaff_x29 = puVar3 + -0x10;
    unaff_d8 = (ulong)uVar17;
    unaff_x22 = 0x3eb5000;
    if ((bRam0000000003eb53fc & 1) == 0) {
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d1c0);
      func_0x00f78a20(0x3d1d3e8);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb53fc = 1;
    }
    if ((*(long *)(lVar9 + 0x20) == 0) ||
       (plVar12 = *(long **)(*(long *)(lVar9 + 0x20) + 0x10), plVar12 == (long *)0x0)) break;
    lVar9 = *plVar12;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_015eb12c;
        }
        piVar11 = piVar11 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0,0);
LAB_015eb12c:
    unaff_x19 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
    if (unaff_x19 == (long *)0x0) goto code_r0x015eb338;
    unaff_x23 = 0x3d22180;
    unaff_x24 = 0x3d1d3e8;
    unaff_x25 = 0x3d23990;
code_r0x015eb158:
    lVar9 = *unaff_x19;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x015eb1a4;
        }
        piVar11 = piVar11 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x19,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x015eb1a4:
    uVar14 = (*(code *)*puVar7)(unaff_x19,puVar7[1]);
    if ((uVar14 & 1) != 0) {
      lVar9 = *unaff_x19;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar14 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x015eb200;
          }
          piVar11 = piVar11 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x19,/*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8,0);
code_r0x015eb200:
      (*(code *)*puVar7)(puVar3 + -0x80,unaff_x19,puVar7[1]);
      unaff_x22 = *(long *)(puVar3 + -0x70);
      if ((iVar4 == -1) || (*(int *)(puVar3 + -0x68) == iVar4)) {
        if (unaff_x22 == 0) {
          func_0x00f78af4();
          goto code_r0x015eb33c;
        }
        uVar14 = /*UnityEngine.Material$$HasProperty*/ func_0x032387f0(unaff_x22,unaff_x21,0);
        if ((uVar14 & 1) != 0) {
          unaff_x22 = /*UnityEngine.Material$$GetTexture*/ func_0x0323805c(unaff_x22,unaff_x21,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
          if ((uVar14 & 1) != 0) {
            if (unaff_x22 == 0) {
              func_0x00f78af4();
              goto code_r0x015eb33c;
            }
            /*UnityEngine.Texture$$set_mipMapBias*/ func_0x0326eac8(uVar17,unaff_x22,0);
          }
        }
      }
      goto code_r0x015eb158;
    }
    unaff_x20 = 0;
    if (unaff_x19 == (long *)0x0) goto code_r0x015eb300;
code_r0x015eb2a0:
    lVar9 = *unaff_x19;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x015eb2f4;
        }
        piVar11 = piVar11 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x19,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015eb2f4:
    (*(code *)*puVar7)(unaff_x19,puVar7[1]);
code_r0x015eb300:
    while( true ) {
      if (unaff_x20 == 0) {
        return;
      }
      func_0x00f78ac0(unaff_x20,0);
      if (extraout_w1_00 != 1) break;
      plVar12 = (long *)___cxa_begin_catch();
      unaff_x20 = *plVar12;
      ___cxa_end_catch();
      if (unaff_x19 != (long *)0x0) goto code_r0x015eb2a0;
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias;
    lVar9 = __Unwind_Resume();
    puVar3 = puVar3 + -0x80;
    uVar17 = extraout_s0_00;
    iVar4 = extraout_w1_01;
code_r0x015eb390:
    *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
    *(ulong *)(puVar3 + -0x38) = unaff_d8;
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    if ((bRam0000000003eb53fb & 1) == 0) {
      func_0x00f78a20(0x3d25318);
      bRam0000000003eb53fb = 1;
    }
    if (((*(ushort *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = **(uint **)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8);
    ppuVar16 = *(undefined1 ***)(puVar3 + -0x10);
    pcVar2 = *(code **)(puVar3 + -8);
    lVar13 = *(long *)(puVar3 + -0x20);
    plVar12 = *(long **)(puVar3 + -0x18);
    uVar8 = *(undefined8 *)(puVar3 + -0x30);
    param_3 = *(ulong *)(puVar3 + -0x28);
    unaff_d9 = *(undefined8 *)(puVar3 + -0x40);
    unaff_d8 = *(ulong *)(puVar3 + -0x38);
  }
  func_0x00f78af4();
code_r0x015eb338:
  func_0x00f78af4();
code_r0x015eb33c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15eb340);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15956ec | Atlas.FrontEnd.FrontEndScene.SetKartGreyScale
// ============================================================

void Atlas_FrontEnd_FrontEndScene__SetKartGreyScale
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar17;
  uint extraout_s0;
  uint uVar18;
  uint extraout_s0_00;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_60 [16];
  long lStack_50;
  int iStack_48;
  
  if ((param_2 == 0) || (lVar4 = *(long *)(param_2 + 0x28), lVar4 == 0)) {
    return;
  }
  puVar17 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53f9 & 1) == 0) {
    func_0x00f78a20(0x3d220f0,param_3,param_4,0);
    func_0x00f78a20(0x3d1d1c0);
    func_0x00f78a20(0x3d1d3e8);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d6d158);
    bRam0000000003eb53f9 = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if ((lVar4 == 0) || (plVar12 = *(long **)(lVar4 + 0x10), plVar12 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_015eadb4;
        }
        piVar11 = piVar11 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0,0);
LAB_015eadb4:
    plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    if (plVar12 != (long *)0x0) {
      uVar15 = 0x3d1d3e8;
      uVar16 = 0x3d6d158;
code_r0x015eade0:
      do {
        lVar4 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eae2c;
            }
            piVar11 = piVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x015eae2c:
        uVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          lVar4 = 0;
          goto joined_r0x015eaee0;
        }
        lVar4 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eae88;
            }
            piVar11 = piVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8,0);
code_r0x015eae88:
        (*(code *)*puVar5)(auStack_60,plVar12,puVar5[1]);
      } while (((int)param_4 != -1) && (iStack_48 != (int)param_4));
      if ((int)param_3 == 0) {
        if (lStack_50 == 0) {
          func_0x00f78af4();
          goto code_r0x015eaf78;
        }
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lStack_50,/*STR('GREYSCALE')*/ uRam0000000003d6d158,0);
        goto code_r0x015eade0;
      }
      if (lStack_50 != 0) {
        /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lStack_50,/*STR('GREYSCALE')*/ uRam0000000003d6d158,0);
        goto code_r0x015eade0;
      }
      func_0x00f78af4();
      goto code_r0x015eaf78;
    }
  }
  func_0x00f78af4();
code_r0x015eaf78:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15eaf7c);
  (*pcVar2)();
joined_r0x015eaee0:
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x015eaf38;
        }
        piVar11 = piVar11 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015eaf38:
    (*(code *)*puVar5)(plVar12,puVar5[1]);
  }
  if (lVar4 == 0) {
    return;
  }
  func_0x00f78ac0(lVar4,0);
  if (extraout_w1 != 1) goto code_r0x015eafbc;
  plVar6 = (long *)___cxa_begin_catch();
  lVar4 = *plVar6;
  ___cxa_end_catch();
  goto joined_r0x015eaee0;
code_r0x015eb38c:
  lVar8 = __Unwind_Resume();
  *(undefined8 *)(puVar3 + -0xc0) = unaff_d9;
  *(ulong *)(puVar3 + -0xb8) = (ulong)uVar18;
  *(long *)(puVar3 + -0xb0) = lVar4;
  *(ulong *)(puVar3 + -0xa8) = uVar9;
  *(long *)(puVar3 + -0xa0) = lVar13;
  *(long **)(puVar3 + -0x98) = plVar12;
  *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x88) = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias;
  if ((bRam0000000003eb53fb & 1) == 0) {
    func_0x00f78a20(0x3d25318);
    bRam0000000003eb53fb = 1;
  }
  if (((*(ushort *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(uint **)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8);
  puVar17 = *(undefined1 **)(puVar3 + -0x90);
  pcVar2 = *(code **)(puVar3 + -0x88);
  lVar4 = *(long *)(puVar3 + -0xa0);
  plVar12 = *(long **)(puVar3 + -0x98);
  uVar14 = *(undefined8 *)(puVar3 + -0xb0);
  param_3 = *(undefined8 *)(puVar3 + -0xa8);
  unaff_d9 = *(undefined8 *)(puVar3 + -0xc0);
  unaff_d8 = *(undefined8 *)(puVar3 + -0xb8);
  puVar3 = puVar3 + -0x80;
  uVar7 = extraout_x1;
  uVar18 = extraout_s0_00;
  goto Atlas_Gameplay_Kart_KartVisualComposite__SetTextureBias;
code_r0x015eafbc:
  lVar8 = __Unwind_Resume();
  if ((bRam0000000003eb53fa & 1) == 0) {
    func_0x00f78a20(0x3d25318);
    bRam0000000003eb53fa = 1;
  }
  if (((*(ushort *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(uint **)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8);
  uVar7 = 0xffffffff;
  pcVar2 = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias;
  uVar14 = 0x3d22180;
  puVar3 = auStack_60;
  uVar18 = extraout_s0;
Atlas_Gameplay_Kart_KartVisualComposite__SetTextureBias:
  uVar9 = (ulong)uVar1;
  *(undefined8 *)(puVar3 + -0x60) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = uVar16;
  *(undefined8 *)(puVar3 + -0x38) = uVar15;
  *(undefined8 *)(puVar3 + -0x30) = uVar14;
  *(undefined8 *)(puVar3 + -0x28) = param_3;
  *(long *)(puVar3 + -0x20) = lVar4;
  *(long **)(puVar3 + -0x18) = plVar12;
  *(undefined1 **)(puVar3 + -0x10) = puVar17;
  *(code **)(puVar3 + -8) = pcVar2;
  lVar4 = 0x3eb5000;
  if ((bRam0000000003eb53fc & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d1c0);
    func_0x00f78a20(0x3d1d3e8);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53fc = 1;
  }
  if ((*(long *)(lVar8 + 0x20) == 0) ||
     (plVar12 = *(long **)(*(long *)(lVar8 + 0x20) + 0x10), plVar12 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_015eb12c;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0,0);
LAB_015eb12c:
    plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    if (plVar12 != (long *)0x0) {
      uVar15 = 0x3d22180;
      uVar16 = 0x3d1d3e8;
      unaff_x25 = 0x3d23990;
code_r0x015eb158:
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x015eb1a4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x015eb1a4:
      uVar10 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if ((uVar10 & 1) != 0) {
        lVar4 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eb200;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8,0);
code_r0x015eb200:
        (*(code *)*puVar5)(puVar3 + -0x80,plVar12,puVar5[1]);
        lVar4 = *(long *)(puVar3 + -0x70);
        if (((int)uVar7 == -1) || (*(int *)(puVar3 + -0x68) == (int)uVar7)) {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015eb33c;
          }
          uVar10 = /*UnityEngine.Material$$HasProperty*/ func_0x032387f0(lVar4,uVar9,0);
          if ((uVar10 & 1) != 0) {
            lVar4 = /*UnityEngine.Material$$GetTexture*/ func_0x0323805c(lVar4,uVar9,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
            if ((uVar10 & 1) != 0) {
              if (lVar4 == 0) {
                func_0x00f78af4();
                goto code_r0x015eb33c;
              }
              /*UnityEngine.Texture$$set_mipMapBias*/ func_0x0326eac8(uVar18,lVar4,0);
            }
          }
        }
        goto code_r0x015eb158;
      }
      lVar13 = 0;
      do {
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x015eb2f4;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015eb2f4:
          (*(code *)*puVar5)(plVar12,puVar5[1]);
        }
        if (lVar13 == 0) {
          return;
        }
        func_0x00f78ac0(lVar13,0);
        if (extraout_w1_00 != 1) goto code_r0x015eb38c;
        plVar6 = (long *)___cxa_begin_catch();
        lVar13 = *plVar6;
        ___cxa_end_catch();
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x015eb33c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15eb340);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x159570c | Atlas.FrontEnd.FrontEndScene.SetKartGreyScale
// ============================================================

void Atlas_FrontEnd_FrontEndScene__SetKartGreyScale
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar17;
  uint extraout_s0;
  uint uVar18;
  uint extraout_s0_00;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_60 [16];
  long lStack_50;
  int iStack_48;
  
  lVar4 = Atlas_FrontEnd_FrontEndScene__GetKart();
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) {
    return;
  }
  puVar17 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb53f9 & 1) == 0) {
    func_0x00f78a20(0x3d220f0,param_3,param_4,0);
    func_0x00f78a20(0x3d1d1c0);
    func_0x00f78a20(0x3d1d3e8);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d6d158);
    bRam0000000003eb53f9 = 1;
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if ((lVar4 == 0) || (plVar12 = *(long **)(lVar4 + 0x10), plVar12 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_015eadb4;
        }
        piVar11 = piVar11 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0,0);
LAB_015eadb4:
    plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    if (plVar12 != (long *)0x0) {
      uVar15 = 0x3d1d3e8;
      uVar16 = 0x3d6d158;
code_r0x015eade0:
      do {
        lVar4 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eae2c;
            }
            piVar11 = piVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x015eae2c:
        uVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          lVar4 = 0;
          goto joined_r0x015eaee0;
        }
        lVar4 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eae88;
            }
            piVar11 = piVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8,0);
code_r0x015eae88:
        (*(code *)*puVar5)(auStack_60,plVar12,puVar5[1]);
      } while (((int)param_4 != -1) && (iStack_48 != (int)param_4));
      if ((int)param_3 == 0) {
        if (lStack_50 == 0) {
          func_0x00f78af4();
          goto code_r0x015eaf78;
        }
        /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lStack_50,/*STR('GREYSCALE')*/ uRam0000000003d6d158,0);
        goto code_r0x015eade0;
      }
      if (lStack_50 != 0) {
        /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lStack_50,/*STR('GREYSCALE')*/ uRam0000000003d6d158,0);
        goto code_r0x015eade0;
      }
      func_0x00f78af4();
      goto code_r0x015eaf78;
    }
  }
  func_0x00f78af4();
code_r0x015eaf78:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15eaf7c);
  (*pcVar2)();
joined_r0x015eaee0:
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x015eaf38;
        }
        piVar11 = piVar11 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015eaf38:
    (*(code *)*puVar5)(plVar12,puVar5[1]);
  }
  if (lVar4 == 0) {
    return;
  }
  func_0x00f78ac0(lVar4,0);
  if (extraout_w1 != 1) goto code_r0x015eafbc;
  plVar6 = (long *)___cxa_begin_catch();
  lVar4 = *plVar6;
  ___cxa_end_catch();
  goto joined_r0x015eaee0;
code_r0x015eb38c:
  lVar8 = __Unwind_Resume();
  *(undefined8 *)(puVar3 + -0xc0) = unaff_d9;
  *(ulong *)(puVar3 + -0xb8) = (ulong)uVar18;
  *(long *)(puVar3 + -0xb0) = lVar4;
  *(ulong *)(puVar3 + -0xa8) = uVar9;
  *(long *)(puVar3 + -0xa0) = lVar13;
  *(long **)(puVar3 + -0x98) = plVar12;
  *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x88) = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias;
  if ((bRam0000000003eb53fb & 1) == 0) {
    func_0x00f78a20(0x3d25318);
    bRam0000000003eb53fb = 1;
  }
  if (((*(ushort *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(uint **)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8);
  puVar17 = *(undefined1 **)(puVar3 + -0x90);
  pcVar2 = *(code **)(puVar3 + -0x88);
  lVar4 = *(long *)(puVar3 + -0xa0);
  plVar12 = *(long **)(puVar3 + -0x98);
  uVar14 = *(undefined8 *)(puVar3 + -0xb0);
  param_3 = *(undefined8 *)(puVar3 + -0xa8);
  unaff_d9 = *(undefined8 *)(puVar3 + -0xc0);
  unaff_d8 = *(undefined8 *)(puVar3 + -0xb8);
  puVar3 = puVar3 + -0x80;
  uVar7 = extraout_x1;
  uVar18 = extraout_s0_00;
  goto Atlas_Gameplay_Kart_KartVisualComposite__SetTextureBias;
code_r0x015eafbc:
  lVar8 = __Unwind_Resume();
  if ((bRam0000000003eb53fa & 1) == 0) {
    func_0x00f78a20(0x3d25318);
    bRam0000000003eb53fa = 1;
  }
  if (((*(ushort *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(uint **)(/*Atlas.ToonShaderNames_TypeInfo*/ lRam0000000003d25318 + 0xb8);
  uVar7 = 0xffffffff;
  pcVar2 = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias;
  uVar14 = 0x3d22180;
  puVar3 = auStack_60;
  uVar18 = extraout_s0;
Atlas_Gameplay_Kart_KartVisualComposite__SetTextureBias:
  uVar9 = (ulong)uVar1;
  *(undefined8 *)(puVar3 + -0x60) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = uVar16;
  *(undefined8 *)(puVar3 + -0x38) = uVar15;
  *(undefined8 *)(puVar3 + -0x30) = uVar14;
  *(undefined8 *)(puVar3 + -0x28) = param_3;
  *(long *)(puVar3 + -0x20) = lVar4;
  *(long **)(puVar3 + -0x18) = plVar12;
  *(undefined1 **)(puVar3 + -0x10) = puVar17;
  *(code **)(puVar3 + -8) = pcVar2;
  lVar4 = 0x3eb5000;
  if ((bRam0000000003eb53fc & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d1c0);
    func_0x00f78a20(0x3d1d3e8);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53fc = 1;
  }
  if ((*(long *)(lVar8 + 0x20) == 0) ||
     (plVar12 = *(long **)(*(long *)(lVar8 + 0x20) + 0x10), plVar12 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_015eb12c;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerable<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d1c0,0);
LAB_015eb12c:
    plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    if (plVar12 != (long *)0x0) {
      uVar15 = 0x3d22180;
      uVar16 = 0x3d1d3e8;
      unaff_x25 = 0x3d23990;
code_r0x015eb158:
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x015eb1a4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x015eb1a4:
      uVar10 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if ((uVar10 & 1) != 0) {
        lVar4 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x015eb200;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IEnumerator<MaterialDuplicator.MaterialPair>_TypeInfo*/ lRam0000000003d1d3e8,0);
code_r0x015eb200:
        (*(code *)*puVar5)(puVar3 + -0x80,plVar12,puVar5[1]);
        lVar4 = *(long *)(puVar3 + -0x70);
        if (((int)uVar7 == -1) || (*(int *)(puVar3 + -0x68) == (int)uVar7)) {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x015eb33c;
          }
          uVar10 = /*UnityEngine.Material$$HasProperty*/ func_0x032387f0(lVar4,uVar9,0);
          if ((uVar10 & 1) != 0) {
            lVar4 = /*UnityEngine.Material$$GetTexture*/ func_0x0323805c(lVar4,uVar9,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
            if ((uVar10 & 1) != 0) {
              if (lVar4 == 0) {
                func_0x00f78af4();
                goto code_r0x015eb33c;
              }
              /*UnityEngine.Texture$$set_mipMapBias*/ func_0x0326eac8(uVar18,lVar4,0);
            }
          }
        }
        goto code_r0x015eb158;
      }
      lVar13 = 0;
      do {
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x015eb2f4;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x015eb2f4:
          (*(code *)*puVar5)(plVar12,puVar5[1]);
        }
        if (lVar13 == 0) {
          return;
        }
        func_0x00f78ac0(lVar13,0);
        if (extraout_w1_00 != 1) goto code_r0x015eb38c;
        plVar6 = (long *)___cxa_begin_catch();
        lVar13 = *plVar6;
        ___cxa_end_catch();
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x015eb33c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15eb340);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1595754 | Atlas.FrontEnd.FrontEndScene.GetKartPartLoader
// ============================================================

long Atlas_FrontEnd_FrontEndScene__GetKartPartLoader(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(long *)(lVar2 + (long)(int)param_2 * 0x40 + 0x28);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  if ((bRam0000000003eb5179 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb5179 = 1;
  }
  lVar5 = *(long *)(lVar2 + 0x48);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    lVar5 = /*Atlas.Settings.AtlasQualitySettings$$TryGetFloatParameter*/ func_0x0145f6e4(lVar5,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x148),
                            (undefined4 *)(lVar2 + 0xd8),0);
    lVar4 = *(long *)(lVar2 + 0x90);
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar6 = 0;
        uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        plVar7 = (long *)(lVar4 + 0x20);
        do {
          if (uVar3 <= uVar6) {
            uVar1 = func_0x00f78b24();
            func_0x00f78ac0(uVar1,0);
            goto code_r0x01595888;
          }
          if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x28), lVar5 != 0)) {
            lVar5 = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias
                              (*(undefined4 *)(lVar2 + 0xd8),lVar5,0);
          }
          uVar6 = uVar6 + 1;
          uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
          plVar7 = plVar7 + 8;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      return lVar5;
    }
  }
code_r0x01595888:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb517a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d1efe0);
    bRam0000000003eb517a = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.FrontEnd.FrontEndKartInfo[]_TypeInfo*/ uRam0000000003d1efe0,0xc);
  *(undefined8 *)(lVar2 + 0x90) = uVar1;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(lVar2 + 0xb8) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(lVar2 + 0xc0) = **(undefined8 **)(lVar5 + 0xb8);
  return lVar2;
}



// ============================================================
// RVA: 0x1595794 | Atlas.FrontEnd.FrontEndScene.ApplyOutlineSettings
// ============================================================

long Atlas_FrontEnd_FrontEndScene__ApplyOutlineSettings(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((bRam0000000003eb5179 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    bRam0000000003eb5179 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    lVar4 = /*Atlas.Settings.AtlasQualitySettings$$TryGetFloatParameter*/ func_0x0145f6e4(lVar4,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                            *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x148),
                            (undefined4 *)(param_1 + 0xd8),0);
    lVar3 = *(long *)(param_1 + 0x90);
    if (lVar3 != 0) {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar5 = 0;
        uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        plVar6 = (long *)(lVar3 + 0x20);
        do {
          if (uVar2 <= uVar5) {
            uVar1 = func_0x00f78b24();
            func_0x00f78ac0(uVar1,0);
            goto LAB_01595888;
          }
          if ((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0x28), lVar4 != 0)) {
            lVar4 = Atlas_Gameplay_Kart_KartVisualComposite__SetOutlineTextureBias
                              (*(undefined4 *)(param_1 + 0xd8),lVar4,0);
          }
          uVar5 = uVar5 + 1;
          uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
          plVar6 = plVar6 + 8;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return lVar4;
    }
  }
LAB_01595888:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb517a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d1efe0);
    bRam0000000003eb517a = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.FrontEnd.FrontEndKartInfo[]_TypeInfo*/ uRam0000000003d1efe0,0xc);
  *(undefined8 *)(lVar4 + 0x90) = uVar1;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(lVar4 + 0xb8) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc0) = **(undefined8 **)(lVar3 + 0xb8);
  return lVar4;
}



// ============================================================
// RVA: 0x159588c | Atlas.FrontEnd.FrontEndScene..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_FrontEndScene___ctor(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb517a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d1efe0);
    bRam0000000003eb517a = 1;
  }
  uVar2 = func_0x00f78a34(/*Atlas.FrontEnd.FrontEndKartInfo[]_TypeInfo*/ uRam0000000003d1efe0,0xc);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0xb8) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = **(undefined8 **)(lVar1 + 0xb8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}



// ============================================================
// RVA: 0x185bd94 | Atlas.FrontEnd.FrontEndScene.TryFindComponentInRootOfScene<FrontEndSubsceneBehaviourBase>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryFindComponentInRootOfScene_FrontEndSubsceneBehaviourBase_
                (undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined4 auStack_48 [2];
  
  puVar6 = param_3;
  auStack_48[0] = param_1;
  lVar2 = /*UnityEngine.SceneManagement.Scene$$GetRootGameObjects*/ func_0x0325d0f8(auStack_48,0);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar8 = (ulong)(0 < (int)uVar1);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto LAB_0185be50;
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_0185be50;
        puVar6 = *(undefined8 **)param_3[6];
        uVar4 = (*(code *)*puVar6)(lVar3,param_2);
        if ((uVar4 & 1) != 0) {
          return uVar8;
        }
        uVar9 = uVar9 + 1;
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar8 = (ulong)((int)uVar9 < (int)uVar1);
      } while ((int)uVar9 < (int)uVar1);
    }
    *param_2 = 0;
    return uVar8;
  }
LAB_0185be50:
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar7 = *(undefined8 *)(auVar10._0_8_ + 200);
  lVar2 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = func_0x00f78adc(uVar7,lVar2);
  lVar3 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar2 != 0) {
    lVar5 = func_0x00f78adc(lVar2,lVar3);
    if (lVar5 != 0) goto code_r0x0185befc;
    func_0x00f78e5c(lVar2,lVar3);
  }
  lVar5 = 0;
code_r0x0185befc:
  *auVar10._8_8_ = lVar5;
  lVar2 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = func_0x00f78adc(uVar7,lVar2);
  lVar3 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if ((lVar2 != 0) && (lVar5 = func_0x00f78adc(lVar2,lVar3), lVar5 == 0)) {
    auVar10 = func_0x00f78e5c(lVar2,lVar3);
    lVar2 = *(long *)(*(long *)(auVar10._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    uVar8 = func_0x00f78aec(lVar2);
    puVar6 = *(undefined8 **)(auVar10._8_8_ + 0x30);
    (**(code **)puVar6[2])(uVar8,auVar10._0_8_,*puVar6);
    return uVar8;
  }
  lVar2 = *auVar10._8_8_;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar2,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x185bd94 | Atlas.FrontEnd.FrontEndScene.TryFindComponentInRootOfScene<ToonShaderBehaviour>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryFindComponentInRootOfScene_FrontEndSubsceneBehaviourBase_
                (undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined4 auStack_48 [2];
  
  puVar6 = param_3;
  auStack_48[0] = param_1;
  lVar2 = /*UnityEngine.SceneManagement.Scene$$GetRootGameObjects*/ func_0x0325d0f8(auStack_48,0);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar8 = (ulong)(0 < (int)uVar1);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto LAB_0185be50;
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_0185be50;
        puVar6 = *(undefined8 **)param_3[6];
        uVar4 = (*(code *)*puVar6)(lVar3,param_2);
        if ((uVar4 & 1) != 0) {
          return uVar8;
        }
        uVar9 = uVar9 + 1;
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar8 = (ulong)((int)uVar9 < (int)uVar1);
      } while ((int)uVar9 < (int)uVar1);
    }
    *param_2 = 0;
    return uVar8;
  }
LAB_0185be50:
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar7 = *(undefined8 *)(auVar10._0_8_ + 200);
  lVar2 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = func_0x00f78adc(uVar7,lVar2);
  lVar3 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar2 != 0) {
    lVar5 = func_0x00f78adc(lVar2,lVar3);
    if (lVar5 != 0) goto code_r0x0185befc;
    func_0x00f78e5c(lVar2,lVar3);
  }
  lVar5 = 0;
code_r0x0185befc:
  *auVar10._8_8_ = lVar5;
  lVar2 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = func_0x00f78adc(uVar7,lVar2);
  lVar3 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if ((lVar2 != 0) && (lVar5 = func_0x00f78adc(lVar2,lVar3), lVar5 == 0)) {
    auVar10 = func_0x00f78e5c(lVar2,lVar3);
    lVar2 = *(long *)(*(long *)(auVar10._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    uVar8 = func_0x00f78aec(lVar2);
    puVar6 = *(undefined8 **)(auVar10._8_8_ + 0x30);
    (**(code **)puVar6[2])(uVar8,auVar10._0_8_,*puVar6);
    return uVar8;
  }
  lVar2 = *auVar10._8_8_;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar2,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x185bd94 | Atlas.FrontEnd.FrontEndScene.TryFindComponentInRootOfScene<object>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryFindComponentInRootOfScene_FrontEndSubsceneBehaviourBase_
                (undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined4 auStack_48 [2];
  
  puVar6 = param_3;
  auStack_48[0] = param_1;
  lVar2 = /*UnityEngine.SceneManagement.Scene$$GetRootGameObjects*/ func_0x0325d0f8(auStack_48,0);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar8 = (ulong)(0 < (int)uVar1);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto LAB_0185be50;
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_0185be50;
        puVar6 = *(undefined8 **)param_3[6];
        uVar4 = (*(code *)*puVar6)(lVar3,param_2);
        if ((uVar4 & 1) != 0) {
          return uVar8;
        }
        uVar9 = uVar9 + 1;
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar8 = (ulong)((int)uVar9 < (int)uVar1);
      } while ((int)uVar9 < (int)uVar1);
    }
    *param_2 = 0;
    return uVar8;
  }
LAB_0185be50:
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar7 = *(undefined8 *)(auVar10._0_8_ + 200);
  lVar2 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = func_0x00f78adc(uVar7,lVar2);
  lVar3 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar2 != 0) {
    lVar5 = func_0x00f78adc(lVar2,lVar3);
    if (lVar5 != 0) goto code_r0x0185befc;
    func_0x00f78e5c(lVar2,lVar3);
  }
  lVar5 = 0;
code_r0x0185befc:
  *auVar10._8_8_ = lVar5;
  lVar2 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  lVar2 = func_0x00f78adc(uVar7,lVar2);
  lVar3 = *(long *)puVar6[6];
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if ((lVar2 != 0) && (lVar5 = func_0x00f78adc(lVar2,lVar3), lVar5 == 0)) {
    auVar10 = func_0x00f78e5c(lVar2,lVar3);
    lVar2 = *(long *)(*(long *)(auVar10._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    uVar8 = func_0x00f78aec(lVar2);
    puVar6 = *(undefined8 **)(auVar10._8_8_ + 0x30);
    (**(code **)puVar6[2])(uVar8,auVar10._0_8_,*puVar6);
    return uVar8;
  }
  lVar2 = *auVar10._8_8_;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar2,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x185be54 | Atlas.FrontEnd.FrontEndScene.TryGetSubsceneBehaviour<FrontEndSubsceneBehaviourBase>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (lVar6 != 0) {
    lVar2 = func_0x00f78adc(lVar6,lVar7);
    if (lVar2 != 0) goto LAB_0185befc;
    func_0x00f78e5c(lVar6,lVar7);
  }
  lVar2 = 0;
LAB_0185befc:
  *param_2 = lVar2;
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if ((lVar6 != 0) && (lVar2 = func_0x00f78adc(lVar6,lVar7), lVar2 == 0)) {
    auVar8 = func_0x00f78e5c(lVar6,lVar7);
    lVar6 = *(long *)(*(long *)(auVar8._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar3 = func_0x00f78aec(lVar6);
    puVar4 = *(undefined8 **)(auVar8._8_8_ + 0x30);
    (**(code **)puVar4[2])(uVar3,auVar8._0_8_,*puVar4);
    return uVar3;
  }
  lVar6 = *param_2;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar6,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x185be54 | Atlas.FrontEnd.FrontEndScene.TryGetSubsceneBehaviour<GenericFrontEndSubsceneBehaviour>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (lVar6 != 0) {
    lVar2 = func_0x00f78adc(lVar6,lVar7);
    if (lVar2 != 0) goto LAB_0185befc;
    func_0x00f78e5c(lVar6,lVar7);
  }
  lVar2 = 0;
LAB_0185befc:
  *param_2 = lVar2;
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if ((lVar6 != 0) && (lVar2 = func_0x00f78adc(lVar6,lVar7), lVar2 == 0)) {
    auVar8 = func_0x00f78e5c(lVar6,lVar7);
    lVar6 = *(long *)(*(long *)(auVar8._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar3 = func_0x00f78aec(lVar6);
    puVar4 = *(undefined8 **)(auVar8._8_8_ + 0x30);
    (**(code **)puVar4[2])(uVar3,auVar8._0_8_,*puVar4);
    return uVar3;
  }
  lVar6 = *param_2;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar6,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x185be54 | Atlas.FrontEnd.FrontEndScene.TryGetSubsceneBehaviour<LeaguePromotionFrontEndSubsceneBehaviour>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (lVar6 != 0) {
    lVar2 = func_0x00f78adc(lVar6,lVar7);
    if (lVar2 != 0) goto LAB_0185befc;
    func_0x00f78e5c(lVar6,lVar7);
  }
  lVar2 = 0;
LAB_0185befc:
  *param_2 = lVar2;
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if ((lVar6 != 0) && (lVar2 = func_0x00f78adc(lVar6,lVar7), lVar2 == 0)) {
    auVar8 = func_0x00f78e5c(lVar6,lVar7);
    lVar6 = *(long *)(*(long *)(auVar8._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar3 = func_0x00f78aec(lVar6);
    puVar4 = *(undefined8 **)(auVar8._8_8_ + 0x30);
    (**(code **)puVar4[2])(uVar3,auVar8._0_8_,*puVar4);
    return uVar3;
  }
  lVar6 = *param_2;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar6,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x185be54 | Atlas.FrontEnd.FrontEndScene.TryGetSubsceneBehaviour<MultiplayerCeremonyBehaviour>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (lVar6 != 0) {
    lVar2 = func_0x00f78adc(lVar6,lVar7);
    if (lVar2 != 0) goto LAB_0185befc;
    func_0x00f78e5c(lVar6,lVar7);
  }
  lVar2 = 0;
LAB_0185befc:
  *param_2 = lVar2;
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if ((lVar6 != 0) && (lVar2 = func_0x00f78adc(lVar6,lVar7), lVar2 == 0)) {
    auVar8 = func_0x00f78e5c(lVar6,lVar7);
    lVar6 = *(long *)(*(long *)(auVar8._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar3 = func_0x00f78aec(lVar6);
    puVar4 = *(undefined8 **)(auVar8._8_8_ + 0x30);
    (**(code **)puVar4[2])(uVar3,auVar8._0_8_,*puVar4);
    return uVar3;
  }
  lVar6 = *param_2;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar6,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x185be54 | Atlas.FrontEnd.FrontEndScene.TryGetSubsceneBehaviour<object>
// ============================================================

ulong Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb64d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb64d3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 200);
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (lVar6 != 0) {
    lVar2 = func_0x00f78adc(lVar6,lVar7);
    if (lVar2 != 0) goto LAB_0185befc;
    func_0x00f78e5c(lVar6,lVar7);
  }
  lVar2 = 0;
LAB_0185befc:
  *param_2 = lVar2;
  lVar6 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  lVar6 = func_0x00f78adc(uVar5,lVar6);
  lVar7 = **(long **)(param_3 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if ((lVar6 != 0) && (lVar2 = func_0x00f78adc(lVar6,lVar7), lVar2 == 0)) {
    auVar8 = func_0x00f78e5c(lVar6,lVar7);
    lVar6 = *(long *)(*(long *)(auVar8._8_8_ + 0x30) + 8);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar3 = func_0x00f78aec(lVar6);
    puVar4 = *(undefined8 **)(auVar8._8_8_ + 0x30);
    (**(code **)puVar4[2])(uVar3,auVar8._0_8_,*puVar4);
    return uVar3;
  }
  lVar6 = *param_2;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(lVar6,0);
  return (ulong)(uVar1 ^ 1);
}



