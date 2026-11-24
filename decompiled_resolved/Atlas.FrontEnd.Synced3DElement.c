// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.Synced3DElement

// ============================================================
// RVA: 0x1507680 | Atlas.FrontEnd.Synced3DElement.get_TransformOf3DObject
// ============================================================

undefined8 Atlas_FrontEnd_Synced3DElement__get_TransformOf3DObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1507688 | Atlas.FrontEnd.Synced3DElement.get_GameObjectIn3D
// ============================================================

undefined8
Atlas_FrontEnd_Synced3DElement__get_GameObjectIn3D
          (long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4d23 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d23 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      if (pcRam0000000003ebf190 == (code *)0x0) {
        pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
      }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000003ebf190)(lVar2);
      return uVar3;
    }
    auVar4 = func_0x00f78af4();
    lVar2 = auVar4._0_8_;
    if ((bRam0000000003eb4d24 & 1) == 0) {
      func_0x00f78a20(0x3d6d048);
      bRam0000000003eb4d24 = 1;
    }
    *(long *)(lVar2 + 0x10) = auVar4._8_8_;
    if (param_3 != 0) {
      uVar3 = /*Core.Cameras.CameraManager$$GetRegisteredCamera*/ func_0x0163a200(param_3,/*STR('FrontEnd')*/ uRam0000000003d6d048,0);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      if (param_4 != 0) {
        uVar3 = /*Core.UI2.UIManager$$get_CanvasScaler*/ func_0x02f870ac(param_4,0);
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        return uVar3;
      }
    }
    uVar3 = func_0x00f78af4();
    return uVar3;
  }
  return 0;
}



// ============================================================
// RVA: 0x1507724 | Atlas.FrontEnd.Synced3DElement.Init
// ============================================================

void Atlas_FrontEnd_Synced3DElement__Init(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d24 & 1) == 0) {
    func_0x00f78a20(0x3d6d048);
    bRam0000000003eb4d24 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  if (param_3 != 0) {
    uVar1 = /*Core.Cameras.CameraManager$$GetRegisteredCamera*/ func_0x0163a200(param_3,/*STR('FrontEnd')*/ uRam0000000003d6d048,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    if (param_4 != 0) {
      uVar1 = /*Core.UI2.UIManager$$get_CanvasScaler*/ func_0x02f870ac(param_4,0);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      return;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15077b8 | Atlas.FrontEnd.Synced3DElement.DeInit
// ============================================================

void Atlas_FrontEnd_Synced3DElement__DeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x15077bc | Atlas.FrontEnd.Synced3DElement.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_FrontEnd_Synced3DElement__Update(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  float fStack_78;
  
  if ((bRam0000000003eb4d25 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb4d25 = 1;
  }
  fStack_78 = 0.0;
  uStack_80 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
LAB_01507868:
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if (iVar1 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
      if (iVar1 == 0) {
        return;
      }
      lVar3 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x48), lVar4 != 0)) &&
         (/*UnityEngine.RectTransform$$GetWorldCorners*/ func_0x032556ac(lVar4,lVar3,0), lVar3 != 0)) {
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_01507c8c;
        if (*(long *)(param_1 + 0x18) != 0) {
          fVar13 = *(float *)(lVar3 + 0x24);
          uVar16 = 0x41200000;
          uVar6 = /*UnityEngine.Camera$$ScreenToWorldPoint*/ func_0x0321fea4(*(undefined4 *)(lVar3 + 0x20),fVar13,0x41200000,
                                  *(long *)(param_1 + 0x18),0);
          if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_01507c8c;
          if (*(long *)(param_1 + 0x18) != 0) {
            fVar14 = *(float *)(lVar3 + 0x3c);
            uVar17 = 0x41200000;
            uVar7 = /*UnityEngine.Camera$$ScreenToWorldPoint*/ func_0x0321fea4(*(undefined4 *)(lVar3 + 0x38),fVar14,0x41200000,
                                    *(long *)(param_1 + 0x18),0);
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x18),0), lVar4 != 0)) {
              /*UnityEngine.Transform$$get_worldToLocalMatrix*/ func_0x03275f38(&uStack_c0,lVar4,0);
              uStack_f8 = uStack_b8;
              uStack_100 = uStack_c0;
              uStack_e8 = uStack_a8;
              uStack_f0 = uStack_b0;
              uStack_d8 = uStack_98;
              uStack_e0 = uStack_a0;
              uStack_c8 = uStack_88;
              uStack_d0 = uStack_90;
              /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d07c(uVar7,fVar14,uVar17,0);
              uStack_138 = uStack_f8;
              uStack_140 = uStack_100;
              uStack_128 = uStack_e8;
              uStack_130 = uStack_f0;
              uStack_118 = uStack_d8;
              uStack_120 = uStack_e0;
              uStack_108 = uStack_c8;
              uStack_110 = uStack_d0;
              /*UnityEngine.Matrix4x4$$op_Multiply*/ func_0x0323e1e0(&uStack_140,0);
              fVar8 = (float)/*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d084(0);
              /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d07c(uVar6,fVar13,uVar16,0);
              uStack_178 = uStack_f8;
              uStack_180 = uStack_100;
              uStack_168 = uStack_e8;
              uStack_170 = uStack_f0;
              uStack_158 = uStack_d8;
              uStack_160 = uStack_e0;
              uStack_148 = uStack_c8;
              uStack_150 = uStack_d0;
              /*UnityEngine.Matrix4x4$$op_Multiply*/ func_0x0323e1e0(&uStack_180,0);
              fVar9 = (float)/*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d084(0);
              lVar4 = *(long *)(param_1 + 0x10);
              if (lVar4 != 0) {
                if ((*(uint *)(lVar3 + 0x18) == 0) || (*(uint *)(lVar3 + 0x18) < 3))
                goto LAB_01507c8c;
                uVar5 = *(undefined8 *)(lVar3 + 0x20);
                uVar21 = *(undefined8 *)(lVar3 + 0x38);
                if (*(uint *)(lVar4 + 0x44) < 4) {
                  fVar8 = (*(float *)(lVar4 + 0x18) * 10.0) / (fVar8 - fVar9);
                  switch(*(uint *)(lVar4 + 0x44)) {
                  case 1:
                    fVar8 = (*(float *)(lVar4 + 0x1c) * 10.0) / (fVar14 - fVar13);
                    break;
                  case 2:
                    fVar8 = (float)/*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(fVar8,0);
                    break;
                  case 3:
                    fVar8 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(fVar8,0);
                  }
                }
                else {
                  fVar8 = 0.0;
                }
                lVar3 = *(long *)(param_1 + 0x20);
                if (lVar3 != 0) {
                  fVar14 = ((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar21 >> 0x20)) * 0.5;
                  fVar25 = *(float *)(lVar3 + 0x24);
                  fVar9 = *(float *)(lVar3 + 0x28);
                  fVar13 = (float)/*Atlas.FrontEnd.Synced3DElement$$ManualScreenToWorldPoint*/ func_0x01507ca0(*(undefined8 *)(param_1 + 0x18));
                  if (((*(long *)(param_1 + 0x20) != 0) &&
                      (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) &&
                     (*(long *)(param_1 + 0x18) != 0)) {
                    fVar23 = *(float *)(*(long *)(param_1 + 0x20) + 0x20);
                    fVar18 = *(float *)(lVar3 + 0x20);
                    fVar10 = *(float *)(lVar3 + 0x24);
                    fVar22 = *(float *)(lVar3 + 0x28);
                    fVar20 = fVar18;
                    fVar24 = fVar14;
                    lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x18),0);
                    if (lVar3 != 0) {
                      fVar11 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0);
                      if (*(long *)(param_1 + 0x28) != 0) {
                        fVar19 = fVar20;
                        fVar15 = fVar24;
                        fVar12 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_1 + 0x28),0);
                        if (*(long *)(param_1 + 0x18) != 0) {
                          fVar23 = fVar23 / (fVar25 / fVar9);
                          fVar24 = fVar14 / fVar23 + fVar10 + fVar24;
                          fVar20 = fVar8 / fVar23 + fVar22 + fVar20;
                          /*UnityEngine.Camera$$get_cameraToWorldMatrix*/ func_0x0321f348(&uStack_c0,*(long *)(param_1 + 0x18),0);
                          /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d07c(fVar18 + fVar13 / fVar23 + fVar11,0);
                          uStack_1b8 = uStack_b8;
                          uStack_1c0 = uStack_c0;
                          uStack_1a8 = uStack_a8;
                          uStack_1b0 = uStack_b0;
                          uStack_198 = uStack_98;
                          uStack_1a0 = uStack_a0;
                          uStack_188 = uStack_88;
                          uStack_190 = uStack_90;
                          /*UnityEngine.Matrix4x4$$op_Multiply*/ func_0x0323e1e0(&uStack_1c0,0);
                          fVar13 = (float)/*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d084(0);
                          if (*(long *)(param_1 + 0x10) != 0) {
                            fVar14 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(*(undefined4 *)
                                                             (*(long *)(param_1 + 0x10) + 0x3c),0);
                            fVar9 = fVar13 + (fVar12 - fVar13) * fVar14;
                            fVar25 = fVar24 + (fVar15 - fVar24) * fVar14;
                            fVar10 = fVar20 + (fVar19 - fVar20) * fVar14;
                            fStack_78 = fVar20 - fVar10;
                            uStack_80 = CONCAT44(fVar24 - fVar25,fVar13 - fVar9);
                            fVar8 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_80,0);
                            fVar14 = _UNK_033f8518;
                            if (*(long *)(param_1 + 0x28) != 0) {
                              if (_UNK_033f8518 <= fVar8) {
                                fVar20 = fVar10;
                                fVar24 = fVar25;
                                fVar13 = fVar9;
                              }
                              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(fVar13,fVar24,fVar20,*(long *)(param_1 + 0x28),0);
                              if (*(long *)(param_1 + 0x10) != 0) {
                                if (fVar14 <= fVar8) {
                                  return;
                                }
                                if (*(int *)(*(long *)(param_1 + 0x10) + 0x40) != 0) {
                                  return;
                                }
                                *(undefined1 *)(param_1 + 0x30) = 1;
                                return;
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
  else if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x40) == 0) {
      return;
    }
    goto LAB_01507868;
  }
  func_0x00f78af4();
LAB_01507c8c:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  return;
}



// ============================================================
// RVA: 0x1507c98 | Atlas.FrontEnd.Synced3DElement.WithZ
// ============================================================

void Atlas_FrontEnd_Synced3DElement__WithZ(void)

{
  return;
}



// ============================================================
// RVA: 0x1507ca0 | Atlas.FrontEnd.Synced3DElement.ManualScreenToWorldPoint
// ============================================================

void Atlas_FrontEnd_Synced3DElement__ManualScreenToWorldPoint
               (float param_1,float param_2,float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  uStack_60 = 0;
  uStack_58 = 0;
  iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
  iVar2 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
  param_1 = param_1 / (float)iVar1;
  param_2 = param_2 / (float)iVar2;
  fVar5 = param_2 + param_2;
  fVar4 = (float)/*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(param_1,param_2,0);
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(param_3 * ((param_1 + param_1) - fVar4),param_3 * (fVar5 - param_2),param_3,
                  param_3,&uStack_60,0);
  if (param_4 != 0) {
    /*UnityEngine.Camera$$get_projectionMatrix*/ func_0x0321f578(&uStack_e0,param_4,0);
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    /*UnityEngine.Matrix4x4$$get_inverse*/ func_0x0323db14(&uStack_120,&uStack_a0,0);
    uStack_158 = uStack_118;
    uStack_160 = uStack_120;
    uStack_148 = uStack_108;
    uStack_150 = uStack_110;
    uStack_138 = uStack_f8;
    uStack_140 = uStack_100;
    uStack_128 = uStack_e8;
    uStack_130 = uStack_f0;
    /*UnityEngine.Matrix4x4$$op_Multiply*/ func_0x0323e1e0(uStack_60 & 0xffffffff,uStack_60._4_4_,(undefined4)uStack_58,uStack_58._4_4_,
                    &uStack_160,0);
    /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d084(0);
    return;
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ != 0) {
    uVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar6._8_8_,0);
    *(undefined8 *)(auVar6._0_8_ + 0x28) = uVar3;
    *(undefined1 *)(auVar6._0_8_ + 0x30) = 0;
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1507da8 | Atlas.FrontEnd.Synced3DElement.SetTarget3DObject
// ============================================================

void Atlas_FrontEnd_Synced3DElement__SetTarget3DObject(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(param_2,0);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1507de0 | Atlas.FrontEnd.Synced3DElement..ctor
// ============================================================

void Atlas_FrontEnd_Synced3DElement___ctor(void)

{
  return;
}



