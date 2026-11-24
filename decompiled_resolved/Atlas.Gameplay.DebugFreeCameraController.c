// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.DebugFreeCameraController

// ============================================================
// RVA: 0x1578af0 | Atlas.Gameplay.DebugFreeCameraController.get_CameraStyle
// ============================================================

undefined4 Atlas_Gameplay_DebugFreeCameraController__get_CameraStyle(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1578af8 | Atlas.Gameplay.DebugFreeCameraController.set_CameraStyle
// ============================================================

void Atlas_Gameplay_DebugFreeCameraController__set_CameraStyle(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1578b00 | Atlas.Gameplay.DebugFreeCameraController.Init
// ============================================================

void Atlas_Gameplay_DebugFreeCameraController__Init(void)

{
  return;
}



// ============================================================
// RVA: 0x1578b04 | Atlas.Gameplay.DebugFreeCameraController.DeInit
// ============================================================

void Atlas_Gameplay_DebugFreeCameraController__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x1578b0c | Atlas.Gameplay.DebugFreeCameraController.SetCamera
// ============================================================

void Atlas_Gameplay_DebugFreeCameraController__SetCamera(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// ============================================================
// RVA: 0x1578b14 | Atlas.Gameplay.DebugFreeCameraController.SetOrbitalTarget
// ============================================================

void Atlas_Gameplay_DebugFreeCameraController__SetOrbitalTarget
               (float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,long param_7)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  
  if ((bRam0000000003eb5083 & 1) == 0) {
    func_0x00f78a20(0x3d210f0);
    bRam0000000003eb5083 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.DebugFreeCameraController_TypeInfo*/ lRam0000000003d210f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.DebugFreeCameraController_TypeInfo*/ lRam0000000003d210f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar1 = *(float *)(*(undefined8 **)(/*Atlas.Gameplay.DebugFreeCameraController_TypeInfo*/ lRam0000000003d210f0 + 0xb8) + 1);
  uVar2 = **(undefined8 **)(/*Atlas.Gameplay.DebugFreeCameraController_TypeInfo*/ lRam0000000003d210f0 + 0xb8);
  *(ulong *)(param_7 + 0x28) =
       CONCAT44(param_2 + (float)((ulong)uVar2 >> 0x20),param_1 + (float)uVar2);
  *(float *)(param_7 + 0x30) = param_3 + fVar1;
  *(undefined4 *)(param_7 + 0x34) = param_4;
  *(undefined4 *)(param_7 + 0x38) = param_5;
  *(undefined4 *)(param_7 + 0x3c) = param_6;
  *(undefined4 *)(param_7 + 0x40) = uStack0000000000000000;
  *(undefined4 *)(param_7 + 0x44) = uStack0000000000000004;
  *(undefined4 *)(param_7 + 0x48) = uStack0000000000000008;
  *(undefined4 *)(param_7 + 0x4c) = uStack000000000000000c;
  *(undefined4 *)(param_7 + 0x50) = uStack0000000000000010;
  *(undefined4 *)(param_7 + 0x54) = uStack0000000000000014;
  return;
}



// ============================================================
// RVA: 0x1578c10 | Atlas.Gameplay.DebugFreeCameraController.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x01578d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01578dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015790d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01579218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01579950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157921c) */
/* WARNING: Removing unreachable block (ram,0x01579220) */
/* WARNING: Removing unreachable block (ram,0x0157922c) */
/* WARNING: Removing unreachable block (ram,0x0157929c) */
/* WARNING: Removing unreachable block (ram,0x01579238) */
/* WARNING: Removing unreachable block (ram,0x01579240) */
/* WARNING: Removing unreachable block (ram,0x015792c0) */
/* WARNING: Removing unreachable block (ram,0x01579258) */
/* WARNING: Removing unreachable block (ram,0x015792a8) */
/* WARNING: Removing unreachable block (ram,0x015790d8) */
/* WARNING: Removing unreachable block (ram,0x01578e00) */
/* WARNING: Removing unreachable block (ram,0x01578e04) */
/* WARNING: Removing unreachable block (ram,0x01578e0c) */
/* WARNING: Removing unreachable block (ram,0x01578d8c) */
/* WARNING: Removing unreachable block (ram,0x01578d90) */
/* WARNING: Removing unreachable block (ram,0x01578d98) */
/* WARNING: Removing unreachable block (ram,0x01579954) */
/* WARNING: Removing unreachable block (ram,0x01579958) */
/* WARNING: Removing unreachable block (ram,0x01579964) */
/* WARNING: Removing unreachable block (ram,0x015799bc) */
/* WARNING: Removing unreachable block (ram,0x01579970) */
/* WARNING: Removing unreachable block (ram,0x015799e0) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01579978) */
/* WARNING: Removing unreachable block (ram,0x015799c8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugFreeCameraController__Update
                (float param_1,ulong param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                undefined8 param_9,undefined8 *param_10)

{
  code *pcVar1;
  ulong *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  int extraout_w1;
  int extraout_w1_00;
  ulong uVar13;
  undefined8 uVar14;
  long extraout_x1;
  long lVar15;
  long lVar16;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *****pppppuVar17;
  undefined *puVar18;
  undefined4 extraout_s0;
  float fVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float extraout_s0_00;
  float fVar26;
  float fVar27;
  float extraout_s0_01;
  float extraout_s0_02;
  ulong extraout_d0;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar35;
  ulong unaff_d11;
  ulong uVar36;
  undefined4 uVar37;
  ulong unaff_d12;
  undefined4 uVar38;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined1 auVar39 [16];
  ulong auStack_220 [3];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 ****ppppuStack_180;
  undefined *puStack_178;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 ****ppppuStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar34 = (ulong)(uint)param_1;
  uVar13 = 0x3d23990;
  if ((bRam0000000003eb5084 & 1) == 0) {
    func_0x00f78a20(0x3d33048);
    func_0x00f78a20(0x3d33050);
    func_0x00f78a20(0x3d33058);
    func_0x00f78a20(0x3d36b38);
    func_0x00f78a20(0x3d36958);
    func_0x00f78a20(0x3d36a58);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fca8);
    bRam0000000003eb5084 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  lVar16 = *(long *)(param_7 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = 0;
  uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,0);
  if ((uVar8 & 1) != 0) {
    return uVar8;
  }
  uVar8 = uVar13;
  lStack_128 = param_7;
  ppppuStack_120 = (undefined1 ****)&stack0xfffffffffffffff0;
  if (*(long *)(param_7 + 0x18) == 0) goto LAB_0157916c;
  /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0x41f00000,*(long *)(param_7 + 0x18),0);
  /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  uStack_110 = CONCAT44((int)param_2,extraout_s0);
  uStack_108 = extraout_var;
  uVar9 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  unaff_d10 = extraout_d0 & 0xffffffff;
  unaff_d9 = param_2 & 0xffffffff;
  if (cRam0000000003ca3506 == '\0') {
    uVar9 = func_0x00f78a20(0x3d25370);
    cRam0000000003ca3506 = '\x01';
  }
  lVar16 = **(long **)(/*UnityEngine.InputSystem.Touchscreen_TypeInfo*/ lRam0000000003d25370 + 0xb8);
  if (lVar16 == 0) {
    unaff_d11 = 0;
  }
  else {
    uVar13 = (ulong)*(uint *)(param_7 + 0x20);
    uStack_140 = unaff_x22;
    if (*(uint *)(param_7 + 0x20) != 0xffffffff) {
      puVar12 = &uStack_98;
      puVar18 = (undefined *)0x1578d8c;
      lVar15 = lVar16;
      goto code_r0x015791d0;
    }
    uVar13 = (ulong)*(uint *)(param_7 + 0x24);
    if (*(uint *)(param_7 + 0x24) != 0xffffffff) {
      puVar12 = &uStack_a0;
      puVar18 = (undefined *)0x1578e00;
      lVar15 = lVar16;
      goto code_r0x015791d0;
    }
    unaff_d11 = 0;
    uStack_c8 = *(undefined8 *)(lVar16 + 400);
    uStack_d0 = *(undefined8 *)(lVar16 + 0x188);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&uStack_f8,&uStack_d0,uRam0000000003d3fca8);
    uStack_b8 = uStack_f0;
    uStack_c0 = uStack_f8;
    unaff_x22 = 0x3d33058;
    uStack_b0 = uStack_e8;
    unaff_x23 = 0x3d36b38;
    unaff_x24 = 0x3d36958;
    unaff_d13 = 0x3f000000;
code_r0x01578ea0:
    uVar13 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&uStack_c0,uRam0000000003d33050);
    if ((uVar13 & 1) != 0) {
      lVar16 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&uStack_c0,uRam0000000003d33058);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x01579168;
      }
      if (*(long *)(lVar16 + 0xf0) == 0) {
        func_0x00f78af4();
        goto code_r0x01579168;
      }
      uVar13 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(*(long *)(lVar16 + 0xf0),0);
      if ((uVar13 & 1) != 0) {
        if (*(long *)(lVar16 + 0x100) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar19 = (float)/*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar16 + 0x100),uRam0000000003d36b38);
          if (*(long *)(lVar16 + 0xf8) != 0) {
            unaff_d12 = (ulong)(uint)fVar19;
            uVar6 = /*UnityEngine.InputSystem.InputControl<int>$$ReadValue*/ func_0x02209440(*(long *)(lVar16 + 0xf8),uRam0000000003d36958);
            iVar7 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
            if ((float)iVar7 * 0.5 <= fVar19) {
              if (*(int *)(param_7 + 0x24) == -1) {
                *(undefined4 *)(param_7 + 0x24) = uVar6;
              }
            }
            else if (*(int *)(param_7 + 0x20) == -1) {
              *(undefined4 *)(param_7 + 0x20) = uVar6;
            }
            goto code_r0x01578ea0;
          }
          func_0x00f78af4();
        }
code_r0x01579168:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x157916c);
        (*pcVar1)();
      }
      goto code_r0x01578ea0;
    }
    uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_c0,uRam0000000003d33048);
    uVar13 = 0x3d33050;
  }
  do {
    if (cRam0000000003ca3507 == '\0') {
      uVar9 = func_0x00f78a20(0x3d21b78);
      cRam0000000003ca3507 = '\x01';
    }
    fVar33 = (float)param_6;
    fVar19 = (float)param_5;
    lVar16 = **(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8);
    uStack_150 = unaff_d11;
    if (lVar16 == 0) {
code_r0x015790a8:
      iVar7 = *(int *)(param_7 + 0x10);
      fVar22 = (float)uStack_150;
      fVar35 = (float)(uStack_110 >> 0x20);
      if (iVar7 == 2) {
        uVar14 = 0;
code_r0x01579118:
        uVar13 = /*Atlas.Gameplay.DebugFreeCameraController$$UpdateOrbital*/ func_0x015794c0(uStack_110,fVar35,unaff_d10 & 0xffffffff,unaff_d9 & 0xffffffff,
                                 fVar22,param_1,param_7,uVar14);
        return uVar13;
      }
      if (iVar7 == 1) {
        uVar14 = 1;
        goto code_r0x01579118;
      }
      if (iVar7 != 0) {
        return uVar9;
      }
      puStack_118 = &UNK_015790d8;
      uVar8 = unaff_d9;
      uVar9 = unaff_d10;
      uVar36 = uStack_150;
      fVar24 = param_1;
      fVar25 = fVar22;
      fVar30 = fVar35;
      uStack_148 = unaff_d10;
      uStack_140 = unaff_d9;
      uStack_138 = uVar34;
      lStack_130 = lVar16;
      if (*(long *)(param_7 + 0x18) != 0) {
        uVar8 = uStack_150 & 0xffffffff;
        uVar36 = (ulong)(uint)fVar35;
        fVar29 = (float)uStack_110;
        uVar9 = uStack_110 & 0xffffffff;
        fVar31 = fVar22;
        fVar28 = fVar35;
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
        fVar25 = fVar31;
        fVar30 = fVar28;
        if (lVar11 != 0) {
          unaff_d12 = 0x42c80000;
          fVar35 = fVar35 * 100.0;
          uVar36 = (ulong)(uint)fVar35;
          /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
          if (((0.0 < fVar35) && (fVar28 < _UNK_033f84b0)) ||
             ((fVar35 < 0.0 && (_UNK_033f898c < fVar28)))) {
            fVar25 = fVar31;
            fVar30 = fVar28;
            if (*(long *)(param_7 + 0x18) != 0) {
              lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
              /*UnityEngine.Vector3$$get_right*/ func_0x03275670(0);
              fVar25 = fVar31;
              fVar30 = fVar28;
              if (lVar16 != 0) {
                fVar24 = -fVar35 * param_1;
                /*UnityEngine.Transform$$Rotate*/ func_0x032766e4(lVar16,0);
                goto code_r0x01579380;
              }
            }
          }
          else {
code_r0x01579380:
            fVar25 = fVar31;
            fVar30 = fVar28;
            if (*(long *)(param_7 + 0x18) != 0) {
              lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
              /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
              fVar25 = fVar31;
              fVar30 = fVar28;
              if (lVar16 != 0) {
                fVar24 = fVar29 * 100.0 * param_1;
                /*UnityEngine.Transform$$Rotate*/ func_0x032766e4(lVar16,0);
                fVar25 = fVar31;
                fVar30 = fVar28;
                if ((*(long *)(param_7 + 0x18) != 0) &&
                   (lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0), fVar25 = fVar31,
                   fVar30 = fVar28, lVar11 != 0)) {
                  fVar35 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
                  fVar25 = fVar31;
                  fVar30 = fVar28;
                  if (*(long *)(param_7 + 0x18) != 0) {
                    uVar9 = (ulong)(uint)fVar35;
                    uVar36 = (ulong)(uint)fVar28;
                    unaff_d12 = (ulong)(uint)fVar31;
                    lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
                    if ((*(long *)(param_7 + 0x18) != 0) &&
                       (lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0), lVar11 != 0)) {
                      fVar29 = fVar30;
                      fVar32 = fVar25;
                      fVar26 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
                      unaff_d13 = (ulong)(uint)fVar26;
                      unaff_d14 = (ulong)(uint)fVar29;
                      unaff_d15 = (ulong)(uint)fVar32;
                      fVar25 = fVar32;
                      fVar30 = fVar29;
                      fVar27 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
                      if (lVar16 != 0) {
                        fVar24 = fVar27;
                        fVar32 = fVar31 + fVar32;
                        fVar19 = fVar30;
                        fVar30 = fVar28 + fVar29;
                        fVar33 = fVar25;
                        /*UnityEngine.Transform$$LookAt*/ func_0x032768e4(fVar35 + fVar26,lVar16,0);
                        fVar25 = fVar32;
                        if ((*(long *)(param_7 + 0x18) != 0) &&
                           (lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0), lVar11 != 0)) {
                          fVar19 = (float)/*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar11,0);
                          fVar22 = fVar22 * -150.0;
                          uStack_140 = CONCAT44(fVar22 * fVar28 * param_1 + fVar30,
                                                fVar22 * fVar35 * param_1 + fVar19);
                          uStack_138 = CONCAT44(uStack_138._4_4_,fVar22 * fVar31 * param_1 + fVar25)
                          ;
                          if (pcRam0000000003ec1960 == (code *)0x0) {
                            pcRam0000000003ec1960 =
                                 (code *)func_0x00f789d4(
                                                  "UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                                  ,0);
                          }
                          uVar13 = (*pcRam0000000003ec1960)(lVar11,&uStack_140);
                          return uVar13;
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
      puVar12 = (undefined8 *)func_0x00f78af4();
      puStack_178 = &Atlas_Gameplay_DebugFreeCameraController__UpdateOrbital;
      pppppuVar17 = (undefined1 *****)&ppppuStack_180;
      uVar34 = (ulong)(uint)fVar24;
      unaff_d9 = (ulong)(uint)fVar25;
      fVar22 = fVar30 * 100.0 * fVar33 + (float)((ulong)puVar12[0xb] >> 0x20);
      puVar12[0xb] = CONCAT44(fVar22,extraout_s0_01 * 100.0 * fVar33 + (float)puVar12[0xb]);
      *(float *)(puVar12 + 0xc) = fVar19 * 15.0 * fVar33 + *(float *)(puVar12 + 0xc);
      uStack_1d0 = unaff_d15;
      uStack_1c8 = unaff_d14;
      uStack_1c0 = unaff_d13;
      uStack_1b8 = unaff_d12;
      uStack_1b0 = uVar36;
      uStack_1a8 = uVar9;
      uStack_1a0 = uVar8;
      uStack_198 = (ulong)(uint)param_1;
      lStack_190 = lVar16;
      lStack_188 = param_7;
      ppppuStack_180 = &ppppuStack_120;
      uVar6 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar22,0xc2a00000,0x42a00000,0);
      *(undefined4 *)((long)puVar12 + 0x5c) = uVar6;
      uVar6 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(*(undefined4 *)(puVar12 + 0xc),0x3fc00000,0x41a00000,0);
      *(undefined4 *)(puVar12 + 0xc) = uVar6;
      fVar19 = *(float *)(puVar12 + 0xb);
      uVar8 = 0;
      uVar14 = 0;
      /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(*(undefined4 *)((long)puVar12 + 0x5c),0);
      /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
      if ((int)extraout_x1 == 0) {
        uStack_200 = CONCAT44(fVar19,extraout_s0_02);
        auStack_220[2] = uVar8;
        uStack_208 = uVar14;
        uStack_1f8 = extraout_var_00;
      }
      else {
        fVar33 = (float)uVar8;
        uStack_200 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar12 + 0x34) >> 0x20) *
                              extraout_s0_02 + (float)((ulong)puVar12[8] >> 0x20) * fVar19 +
                              (float)((ulong)*(undefined8 *)((long)puVar12 + 0x4c) >> 0x20) * fVar33
                              ,(float)*(undefined8 *)((long)puVar12 + 0x34) * extraout_s0_02 +
                               (float)puVar12[8] * fVar19 +
                               (float)*(undefined8 *)((long)puVar12 + 0x4c) * fVar33);
        uStack_208 = 0;
        uStack_1f8 = 0;
        auStack_220[2] =
             (ulong)(uint)(extraout_s0_02 * *(float *)((long)puVar12 + 0x3c) +
                           fVar19 * *(float *)(puVar12 + 9) +
                          fVar33 * *(float *)((long)puVar12 + 0x54));
      }
      /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
      fVar19 = (float)((ulong)uStack_200 >> 0x20);
      uVar8 = auStack_220[2];
      fStack_1dc = fVar19;
      fStack_1e0 = (float)/*UnityEngine.Vector3$$Cross*/ func_0x0327b588(0);
      fStack_1d8 = (float)uVar8;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_1e0,0);
      fStack_1ec = fStack_1dc;
      fStack_1e8 = fStack_1d8;
      fStack_1f0 = (float)/*UnityEngine.Vector3$$Cross*/ func_0x0327b588(fStack_1e0,fStack_1dc,fStack_1d8,uStack_200,fVar19,
                                          auStack_220[2],0);
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_1f0,0);
      lVar16 = extraout_x1;
      if (puVar12[3] != 0) {
        auStack_220[0] = (ulong)*(uint *)(puVar12 + 0xc);
        auStack_220[1] = 0;
        uVar14 = puVar12[5];
        fVar19 = *(float *)(puVar12 + 6);
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(puVar12[3],0);
        if (lVar11 != 0) {
          fVar33 = (float)auStack_220[0];
          fVar22 = (float)((ulong)uVar14 >> 0x20) + (float)((ulong)uStack_200 >> 0x20) * fVar33;
          uStack_200 = CONCAT44(fVar22,(float)uVar14 + (float)uStack_200 * fVar33);
          fVar19 = (float)auStack_220[2] * fVar33 + fVar19;
          uStack_1f8 = 0;
          fVar33 = fVar19;
          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(uStack_200,fVar22,fVar19,lVar11,0);
          if (puVar12[3] != 0) {
            lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(puVar12[3],0);
            uVar23 = *(undefined4 *)(puVar12 + 5);
            uVar37 = *(undefined4 *)((long)puVar12 + 0x2c);
            uVar38 = *(undefined4 *)(puVar12 + 6);
            uVar6 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
            if (lVar16 != 0) {
              /*UnityEngine.Transform$$LookAt*/ func_0x032768e4(uVar23,uVar37,uVar38,uVar6,fVar22,fVar33,lVar16,0);
              fVar31 = fStack_1d8;
              fVar29 = fStack_1dc;
              fVar30 = fStack_1e0;
              fVar35 = fStack_1e8;
              fVar22 = fStack_1ec;
              fVar33 = fStack_1f0;
              if ((puVar12[3] != 0) && (lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(puVar12[3],0), lVar11 != 0)) {
                fVar25 = fVar25 + fVar25;
                fVar24 = fVar24 + fVar24;
                fVar22 = (float)((ulong)uStack_200 >> 0x20) + fVar29 * fVar25 + fVar22 * fVar24;
                uVar13 = /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(CONCAT44(fVar22,(float)uStack_200 + fVar30 * fVar25 +
                                                         fVar33 * fVar24),fVar22,
                                         fVar19 + fVar25 * fVar31 + fVar24 * fVar35,lVar11,0);
                return uVar13;
              }
            }
          }
        }
      }
      puVar18 = &Atlas_Gameplay_DebugFreeCameraController__GetTouchControlById;
      auVar39 = func_0x00f78af4();
      puVar2 = auStack_220;
      goto code_r0x0157975c;
    }
    uVar8 = uVar13;
    if (*(long *)(lVar16 + 0x1b0) != 0) {
      uVar6 = /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar16 + 0x1b0),uRam0000000003d36b38);
      uStack_d8 = CONCAT44((int)param_2,uVar6);
      uVar8 = 0x3d36b38;
      if (*(long *)(lVar16 + 0x1b8) != 0) {
        uStack_e0 = /*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar16 + 0x1b8),uRam0000000003d36b38);
        uStack_dc = (uint)param_2;
        uVar8 = 0x3d36b38;
        if (*(long *)(lVar16 + 0x1a0) != 0) {
          uVar13 = 0x3d36a58;
          uVar8 = 0x3d36a58;
          uVar20 = /*UnityEngine.InputSystem.InputControl<float>$$ReadValue*/ func_0x0220d1f0(*(long *)(lVar16 + 0x1a0),uRam0000000003d36a58);
          if (*(long *)(lVar16 + 0x1c0) != 0) {
            unaff_d12 = (ulong)uVar20;
            uVar21 = /*UnityEngine.InputSystem.InputControl<float>$$ReadValue*/ func_0x0220d1f0(*(long *)(lVar16 + 0x1c0),uRam0000000003d36a58);
            param_2 = (ulong)uVar21;
            fVar22 = (float)/*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar20,0);
            if (*(long *)(lVar16 + 0x1a8) != 0) {
              unaff_d12 = (ulong)(uint)fVar22;
              uVar6 = /*UnityEngine.InputSystem.InputControl<float>$$ReadValue*/ func_0x0220d1f0(*(long *)(lVar16 + 0x1a8),uRam0000000003d36a58);
              fVar33 = (float)param_6;
              fVar19 = (float)param_5;
              if (*(long *)(lVar16 + 0x1c8) != 0) {
                uVar23 = /*UnityEngine.InputSystem.InputControl<float>$$ReadValue*/ func_0x0220d1f0(*(long *)(lVar16 + 0x1c8),uRam0000000003d36a58);
                fVar24 = (float)/*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar6,uVar23,0);
                unaff_d13 = (ulong)(uint)fVar24;
                fVar25 = (float)/*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644(&uStack_d8,0);
                fVar35 = _UNK_033f85c8;
                unaff_d14 = (ulong)(uint)_UNK_033f85c8;
                uStack_110 = uStack_110 ^
                             (uStack_110 ^ uStack_d8) &
                             CONCAT44(-(uint)((int)((uint)(_UNK_033f85c8 < fVar25) << 0x1f) < 0),
                                      -(uint)((int)((uint)(_UNK_033f85c8 < fVar25) << 0x1f) < 0));
                uVar9 = /*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644(&uStack_e0,0);
                uVar20 = uStack_dc;
                if (extraout_s0_00 <= fVar35) {
                  uVar20 = (uint)unaff_d9;
                }
                unaff_d9 = (ulong)uVar20;
                uVar20 = uStack_e0;
                if (extraout_s0_00 <= fVar35) {
                  uVar20 = (uint)unaff_d10;
                }
                unaff_d10 = (ulong)uVar20;
                fVar25 = ABS(fVar22);
                bVar3 = false;
                bVar4 = false;
                bVar5 = false;
                if (ABS(fVar24) <= fVar35) {
                  bVar3 = false;
                  bVar4 = false;
                  bVar5 = true;
                  if (!NAN(fVar25) && !NAN(_UNK_033f7d80)) {
                    bVar3 = fVar25 < _UNK_033f7d80;
                    bVar4 = fVar25 == _UNK_033f7d80;
                    bVar5 = false;
                  }
                }
                uStack_150 = (ulong)(uint)(fVar24 - fVar22);
                if (bVar4 || bVar3 != bVar5) {
                  uStack_150 = unaff_d11 & 0xffffffff;
                }
                goto code_r0x015790a8;
              }
            }
          }
        }
      }
    }
LAB_0157916c:
    func_0x00f78af4();
    puVar12 = param_10;
    if (extraout_w1 != 1) goto code_r0x015791cc;
    plVar10 = (long *)___cxa_begin_catch();
    lVar16 = *plVar10;
    ___cxa_end_catch();
    uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_c0,uRam0000000003d33048);
    uVar13 = uVar8;
  } while (lVar16 == 0);
  func_0x00f78ac0(lVar16,0);
  puVar12 = param_10;
code_r0x015791cc:
  puVar18 = &Atlas_Gameplay_DebugFreeCameraController__TryGetNormalisedRangeByTouchId;
  auVar39 = __Unwind_Resume();
  uVar13 = auVar39._8_8_;
  param_7 = auVar39._0_8_;
  uStack_140 = unaff_x22;
code_r0x015791d0:
  pppppuVar17 = &ppppuStack_120;
  unaff_x22 = 0x3eb5000;
  param_10 = puVar12;
  uStack_150 = unaff_d9;
  uStack_148 = uVar34;
  uStack_138 = uVar8;
  lStack_130 = lVar16;
  puStack_118 = puVar18;
  if ((bRam0000000003eb5085 & 1) == 0) {
    param_7 = func_0x00f78a20(0x3d36b38);
    bRam0000000003eb5085 = 1;
  }
  auVar39._8_8_ = uVar13;
  auVar39._0_8_ = param_7;
  puVar18 = &UNK_0157921c;
  puVar2 = &uStack_150;
  lVar16 = lVar15;
code_r0x0157975c:
  while( true ) {
    lVar11 = auVar39._8_8_;
    uVar14 = auVar39._0_8_;
    *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
    *(ulong *)((long)puVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)puVar2 + -0x28) = uVar13;
    *(long *)((long)puVar2 + -0x20) = lVar16;
    *(undefined8 **)((long)puVar2 + -0x18) = puVar12;
    *(undefined1 ******)((long)puVar2 + -0x10) = pppppuVar17;
    *(undefined **)((long)puVar2 + -8) = puVar18;
    lVar16 = lVar15;
    puVar12 = param_10;
    if ((bRam0000000003eb5087 & 1) == 0) {
      func_0x00f78a20(0x3d33048);
      func_0x00f78a20(0x3d33050);
      func_0x00f78a20(0x3d33058);
      func_0x00f78a20(0x3d36958);
      uVar14 = func_0x00f78a20(0x3d3fca8);
      bRam0000000003eb5087 = 1;
      puVar12 = param_10;
    }
    *(undefined8 *)((long)puVar2 + -0x58) = 0;
    *(undefined8 *)((long)puVar2 + -0x50) = 0;
    *(undefined8 *)((long)puVar2 + -0x48) = 0;
    *(undefined4 *)((long)puVar2 + -0x78) = 0;
    if (lVar15 != 0) break;
    func_0x00f78af4(uVar14);
    if (extraout_w1_00 == 1) {
      plVar10 = (long *)___cxa_begin_catch();
      lVar11 = *plVar10;
      ___cxa_end_catch();
      /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764((undefined1 *)((long)puVar2 + -0x58),uRam0000000003eb5000);
      lVar15 = lVar16;
      if (lVar11 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
      lVar15 = lVar16;
    }
    auVar39 = func_0x00f78ac0(lVar11,0);
    uVar13 = auVar39._8_8_;
    uVar14 = auVar39._0_8_;
    *(ulong *)((long)puVar2 + -0xc0) = unaff_d9;
    *(ulong *)((long)puVar2 + -0xb8) = uVar34;
    *(ulong *)((long)puVar2 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)puVar2 + -0xa8) = 0x3eb5000;
    *(undefined8 *)((long)puVar2 + -0xa0) = 0;
    *(long *)((long)puVar2 + -0x98) = lVar11;
    *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x88) =
         &Atlas_Gameplay_DebugFreeCameraController__TryGetNormalisedDeltaByTouchId;
    pppppuVar17 = (undefined1 *****)((long)puVar2 + -0x90);
    unaff_x22 = 0x3eb5000;
    param_10 = puVar12;
    if ((bRam0000000003eb5086 & 1) == 0) {
      uVar14 = func_0x00f78a20(0x3d36b38);
      bRam0000000003eb5086 = 1;
    }
    auVar39._8_8_ = uVar13;
    auVar39._0_8_ = uVar14;
    puVar18 = &UNK_01579954;
    puVar2 = (ulong *)((long)puVar2 + -0xc0);
    lVar16 = lVar15;
  }
  uVar14 = *(undefined8 *)(lVar15 + 0x188);
  *(undefined8 *)((long)puVar2 + -0x68) = *(undefined8 *)(lVar15 + 400);
  *(undefined8 *)((long)puVar2 + -0x70) = uVar14;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4((undefined1 *)((long)puVar2 + -0x58),(undefined1 *)((long)puVar2 + -0x70),
                  uRam0000000003d3fca8);
  do {
    uVar13 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768((undefined1 *)((long)puVar2 + -0x58),uRam0000000003d33050);
    if ((uVar13 & 1) == 0) {
      uVar13 = 0;
      uVar6 = 0x44;
      goto code_r0x0157986c;
    }
    uVar13 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794((undefined1 *)((long)puVar2 + -0x58),uRam0000000003d33058);
    if (uVar13 == 0) {
      func_0x00f78af4();
code_r0x015798b4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15798b8);
      (*pcVar1)();
    }
    if (*(long *)(uVar13 + 0xf8) == 0) {
      func_0x00f78af4();
      goto code_r0x015798b4;
    }
    iVar7 = /*UnityEngine.InputSystem.InputControl<int>$$ReadValue*/ func_0x02209440(*(long *)(uVar13 + 0xf8),uRam0000000003d36958);
  } while (iVar7 != auVar39._8_4_);
  uVar6 = 0x46;
code_r0x0157986c:
  *(undefined4 *)((long)puVar2 + -0x80) = uVar6;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764((undefined1 *)((long)puVar2 + -0x58),uRam0000000003d33048);
  if (*(int *)((long)puVar2 + -0x80) != 0x46) {
    uVar13 = 0;
  }
  return uVar13;
}



// ============================================================
// RVA: 0x15791d0 | Atlas.Gameplay.DebugFreeCameraController.TryGetNormalisedRangeByTouchId
// ============================================================

/* WARNING: Possible PIC construction at 0x01579218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01579950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157921c) */
/* WARNING: Removing unreachable block (ram,0x01579220) */
/* WARNING: Removing unreachable block (ram,0x0157922c) */
/* WARNING: Removing unreachable block (ram,0x0157929c) */
/* WARNING: Removing unreachable block (ram,0x01579238) */
/* WARNING: Removing unreachable block (ram,0x01579240) */
/* WARNING: Removing unreachable block (ram,0x015792c0) */
/* WARNING: Removing unreachable block (ram,0x015792ec) */
/* WARNING: Removing unreachable block (ram,0x01579308) */
/* WARNING: Removing unreachable block (ram,0x0157931c) */
/* WARNING: Removing unreachable block (ram,0x01579320) */
/* WARNING: Removing unreachable block (ram,0x01579324) */
/* WARNING: Removing unreachable block (ram,0x0157932c) */
/* WARNING: Removing unreachable block (ram,0x01579330) */
/* WARNING: Removing unreachable block (ram,0x01579334) */
/* WARNING: Removing unreachable block (ram,0x01579338) */
/* WARNING: Removing unreachable block (ram,0x0157933c) */
/* WARNING: Removing unreachable block (ram,0x01579344) */
/* WARNING: Removing unreachable block (ram,0x01579348) */
/* WARNING: Removing unreachable block (ram,0x0157934c) */
/* WARNING: Removing unreachable block (ram,0x01579354) */
/* WARNING: Removing unreachable block (ram,0x0157936c) */
/* WARNING: Removing unreachable block (ram,0x01579380) */
/* WARNING: Removing unreachable block (ram,0x01579388) */
/* WARNING: Removing unreachable block (ram,0x015793a0) */
/* WARNING: Removing unreachable block (ram,0x015793bc) */
/* WARNING: Removing unreachable block (ram,0x015793c8) */
/* WARNING: Removing unreachable block (ram,0x015793d8) */
/* WARNING: Removing unreachable block (ram,0x015793f8) */
/* WARNING: Removing unreachable block (ram,0x01579404) */
/* WARNING: Removing unreachable block (ram,0x01579424) */
/* WARNING: Removing unreachable block (ram,0x01579450) */
/* WARNING: Removing unreachable block (ram,0x015794bc) */
/* WARNING: Removing unreachable block (ram,0x015795d0) */
/* WARNING: Removing unreachable block (ram,0x01579588) */
/* WARNING: Removing unreachable block (ram,0x015795d8) */
/* WARNING: Removing unreachable block (ram,0x01579648) */
/* WARNING: Removing unreachable block (ram,0x01579664) */
/* WARNING: Removing unreachable block (ram,0x01579698) */
/* WARNING: Removing unreachable block (ram,0x015796b8) */
/* WARNING: Removing unreachable block (ram,0x015796e4) */
/* WARNING: Removing unreachable block (ram,0x01579758) */
/* WARNING: Removing unreachable block (ram,0x01579700) */
/* WARNING: Removing unreachable block (ram,0x0157945c) */
/* WARNING: Removing unreachable block (ram,0x03275128) */
/* WARNING: Removing unreachable block (ram,0x03275150) */
/* WARNING: Removing unreachable block (ram,0x03275164) */
/* WARNING: Removing unreachable block (ram,0x01579258) */
/* WARNING: Removing unreachable block (ram,0x015792a8) */
/* WARNING: Removing unreachable block (ram,0x01579954) */
/* WARNING: Removing unreachable block (ram,0x01579958) */
/* WARNING: Removing unreachable block (ram,0x01579964) */
/* WARNING: Removing unreachable block (ram,0x015799bc) */
/* WARNING: Removing unreachable block (ram,0x01579970) */
/* WARNING: Removing unreachable block (ram,0x015799e0) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01579978) */
/* WARNING: Removing unreachable block (ram,0x015799c8) */

long Atlas_Gameplay_DebugFreeCameraController__TryGetNormalisedRangeByTouchId
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int extraout_w1;
  long extraout_x1;
  undefined4 uVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar8 = &stack0xfffffffffffffff0;
  uVar10 = param_4;
  if ((bRam0000000003eb5085 & 1) == 0) {
    func_0x00f78a20(0x3d36b38);
    bRam0000000003eb5085 = 1;
  }
  puVar9 = (undefined *)0x157921c;
  puVar2 = &stack0xffffffffffffffc0;
  while( true ) {
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = 0x3eb5000;
    *(long *)(puVar2 + -0x28) = param_2;
    *(long *)(puVar2 + -0x20) = param_3;
    *(undefined8 *)(puVar2 + -0x18) = param_4;
    *(undefined1 **)(puVar2 + -0x10) = puVar8;
    *(undefined **)(puVar2 + -8) = puVar9;
    lVar5 = param_3;
    param_4 = uVar10;
    if ((bRam0000000003eb5087 & 1) == 0) {
      func_0x00f78a20(0x3d33048);
      func_0x00f78a20(0x3d33050);
      func_0x00f78a20(0x3d33058);
      func_0x00f78a20(0x3d36958);
      func_0x00f78a20(0x3d3fca8);
      bRam0000000003eb5087 = 1;
      param_4 = uVar10;
    }
    *(undefined8 *)(puVar2 + -0x58) = 0;
    *(undefined8 *)(puVar2 + -0x50) = 0;
    *(undefined8 *)(puVar2 + -0x48) = 0;
    *(undefined4 *)(puVar2 + -0x78) = 0;
    if (param_3 != 0) break;
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      param_2 = *plVar6;
      ___cxa_end_catch();
      /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(puVar2 + -0x58,uRam0000000003eb5000);
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    func_0x00f78ac0(param_2,0);
    *(undefined8 *)(puVar2 + -0xc0) = unaff_d9;
    *(undefined8 *)(puVar2 + -0xb8) = unaff_d8;
    *(undefined8 *)(puVar2 + -0xb0) = 0x3eb5000;
    *(undefined8 *)(puVar2 + -0xa8) = 0x3eb5000;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(long *)(puVar2 + -0x98) = param_2;
    *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x88) =
         &Atlas_Gameplay_DebugFreeCameraController__TryGetNormalisedDeltaByTouchId;
    puVar8 = puVar2 + -0x90;
    uVar10 = param_4;
    if ((bRam0000000003eb5086 & 1) == 0) {
      func_0x00f78a20(0x3d36b38);
      bRam0000000003eb5086 = 1;
    }
    puVar9 = &UNK_01579954;
    puVar2 = puVar2 + -0xc0;
    param_3 = lVar5;
    param_2 = extraout_x1;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x188);
  *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(param_3 + 400);
  *(undefined8 *)(puVar2 + -0x70) = uVar10;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(puVar2 + -0x58,puVar2 + -0x70,uRam0000000003d3fca8);
  do {
    uVar4 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(puVar2 + -0x58,uRam0000000003d33050);
    if ((uVar4 & 1) == 0) {
      lVar5 = 0;
      uVar7 = 0x44;
      goto code_r0x0157986c;
    }
    lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(puVar2 + -0x58,uRam0000000003d33058);
    if (lVar5 == 0) {
      func_0x00f78af4();
code_r0x015798b4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15798b8);
      (*pcVar1)();
    }
    if (*(long *)(lVar5 + 0xf8) == 0) {
      func_0x00f78af4();
      goto code_r0x015798b4;
    }
    iVar3 = /*UnityEngine.InputSystem.InputControl<int>$$ReadValue*/ func_0x02209440(*(long *)(lVar5 + 0xf8),uRam0000000003d36958);
  } while (iVar3 != (int)param_2);
  uVar7 = 0x46;
code_r0x0157986c:
  *(undefined4 *)(puVar2 + -0x80) = uVar7;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(puVar2 + -0x58,uRam0000000003d33048);
  if (*(int *)(puVar2 + -0x80) != 0x46) {
    lVar5 = 0;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x15792c4 | Atlas.Gameplay.DebugFreeCameraController.UpdateFree
// ============================================================

/* WARNING: Possible PIC construction at 0x01579950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01579954) */
/* WARNING: Removing unreachable block (ram,0x01579958) */
/* WARNING: Removing unreachable block (ram,0x01579964) */
/* WARNING: Removing unreachable block (ram,0x015799bc) */
/* WARNING: Removing unreachable block (ram,0x01579970) */
/* WARNING: Removing unreachable block (ram,0x015799e0) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01579978) */
/* WARNING: Removing unreachable block (ram,0x015799c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_DebugFreeCameraController__UpdateFree
               (float param_1,ulong param_2,ulong param_3,float param_4,float param_5,float param_6,
               long param_7,undefined8 param_8,long param_9,long param_10)

{
  float fVar1;
  code *pcVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  float extraout_s0;
  undefined4 uVar14;
  float extraout_s0_00;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 extraout_var;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar21;
  undefined4 uVar22;
  ulong unaff_d11;
  undefined4 uVar23;
  ulong unaff_d12;
  undefined4 uVar24;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  ulong auStack_110 [3];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  fVar21 = (float)param_2;
  fVar20 = param_4;
  fVar15 = (float)param_3;
  fVar16 = fVar21;
  if (*(long *)(param_7 + 0x18) != 0) {
    unaff_d8 = (ulong)(uint)param_4;
    unaff_d9 = param_3 & 0xffffffff;
    unaff_d11 = param_2 & 0xffffffff;
    unaff_d10 = (ulong)(uint)param_1;
    lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
    fVar15 = (float)param_3;
    fVar16 = (float)param_2;
    if (lVar5 != 0) {
      unaff_d12 = 0x42c80000;
      fVar21 = fVar21 * 100.0;
      unaff_d11 = (ulong)(uint)fVar21;
      /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar5,0);
      fVar16 = (float)param_2;
      if (((0.0 < fVar21) && (fVar16 < _UNK_033f84b0)) ||
         ((fVar21 < 0.0 && (_UNK_033f898c < fVar16)))) {
        fVar15 = (float)param_3;
        if (*(long *)(param_7 + 0x18) == 0) goto LAB_015794bc;
        unaff_x20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
        /*UnityEngine.Vector3$$get_right*/ func_0x03275670(0);
        fVar15 = (float)param_3;
        fVar16 = (float)param_2;
        if (unaff_x20 == 0) goto LAB_015794bc;
        fVar20 = -fVar21 * param_4;
        /*UnityEngine.Transform$$Rotate*/ func_0x032766e4(unaff_x20,0);
      }
      fVar15 = (float)param_3;
      fVar16 = (float)param_2;
      if (*(long *)(param_7 + 0x18) != 0) {
        unaff_x20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
        /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
        fVar15 = (float)param_3;
        fVar16 = (float)param_2;
        if (unaff_x20 != 0) {
          fVar20 = param_1 * 100.0 * param_4;
          /*UnityEngine.Transform$$Rotate*/ func_0x032766e4(unaff_x20,0);
          fVar15 = (float)param_3;
          fVar16 = (float)param_2;
          if (*(long *)(param_7 + 0x18) != 0) {
            lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
            fVar15 = (float)param_3;
            fVar16 = (float)param_2;
            if (lVar5 != 0) {
              fVar21 = (float)/*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar5,0);
              fVar17 = (float)param_2;
              fVar18 = (float)param_3;
              fVar15 = fVar18;
              fVar16 = fVar17;
              if (*(long *)(param_7 + 0x18) != 0) {
                unaff_d10 = (ulong)(uint)fVar21;
                unaff_d11 = param_2 & 0xffffffff;
                unaff_d12 = param_3 & 0xffffffff;
                unaff_x20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
                fVar16 = (float)param_2;
                fVar15 = (float)param_3;
                if (*(long *)(param_7 + 0x18) != 0) {
                  lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
                  fVar16 = (float)param_2;
                  fVar15 = (float)param_3;
                  if (lVar5 != 0) {
                    fVar12 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
                    unaff_d13 = (ulong)(uint)fVar12;
                    unaff_d14 = param_2 & 0xffffffff;
                    unaff_d15 = param_3 & 0xffffffff;
                    fVar15 = (float)param_3;
                    fVar16 = (float)param_2;
                    fVar13 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
                    if (unaff_x20 != 0) {
                      fVar20 = fVar13;
                      fVar18 = fVar18 + (float)param_3;
                      param_5 = fVar16;
                      fVar16 = fVar17 + (float)param_2;
                      param_6 = fVar15;
                      /*UnityEngine.Transform$$LookAt*/ func_0x032768e4(fVar21 + fVar12,unaff_x20,0);
                      fVar15 = fVar18;
                      if ((*(long *)(param_7 + 0x18) != 0) &&
                         (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0), lVar5 != 0)) {
                        /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar5,0);
                        if (pcRam0000000003ec1960 == (code *)0x0) {
                          pcRam0000000003ec1960 =
                               (code *)func_0x00f789d4(
                                                  "UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)"
                                                  ,0);
                        }
                        lVar5 = (*pcRam0000000003ec1960)(lVar5,&stack0xffffffffffffffd0);
                        return lVar5;
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
LAB_015794bc:
  lVar5 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_DebugFreeCameraController__UpdateOrbital;
  ppuVar10 = &puStack_70;
  fVar16 = fVar16 * 100.0 * param_6 + (float)((ulong)*(undefined8 *)(lVar5 + 0x58) >> 0x20);
  *(ulong *)(lVar5 + 0x58) =
       CONCAT44(fVar16,extraout_s0 * 100.0 * param_6 + (float)*(undefined8 *)(lVar5 + 0x58));
  *(float *)(lVar5 + 0x60) = param_5 * 15.0 * param_6 + *(float *)(lVar5 + 0x60);
  uStack_c0 = unaff_d15;
  uStack_b8 = unaff_d14;
  uStack_b0 = unaff_d13;
  uStack_a8 = unaff_d12;
  uStack_a0 = unaff_d11;
  uStack_98 = unaff_d10;
  uStack_90 = unaff_d9;
  uStack_88 = unaff_d8;
  lStack_80 = unaff_x20;
  lStack_78 = param_7;
  puStack_70 = &stack0xfffffffffffffff0;
  uVar14 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar16,0xc2a00000,0x42a00000,0);
  *(undefined4 *)(lVar5 + 0x5c) = uVar14;
  uVar14 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(*(undefined4 *)(lVar5 + 0x60),0x3fc00000,0x41a00000,0);
  *(undefined4 *)(lVar5 + 0x60) = uVar14;
  fVar16 = *(float *)(lVar5 + 0x58);
  uVar8 = 0;
  uVar19 = 0;
  /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(*(undefined4 *)(lVar5 + 0x5c),0);
  /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
  if ((int)extraout_x1 == 0) {
    uStack_f0 = CONCAT44(fVar16,extraout_s0_00);
    auStack_110[2] = uVar8;
    uStack_f8 = uVar19;
    uStack_e8 = extraout_var;
  }
  else {
    fVar21 = (float)uVar8;
    uStack_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x34) >> 0x20) * extraout_s0_00 +
                         (float)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x20) * fVar16 +
                         (float)((ulong)*(undefined8 *)(lVar5 + 0x4c) >> 0x20) * fVar21,
                         (float)*(undefined8 *)(lVar5 + 0x34) * extraout_s0_00 +
                         (float)*(undefined8 *)(lVar5 + 0x40) * fVar16 +
                         (float)*(undefined8 *)(lVar5 + 0x4c) * fVar21);
    uStack_f8 = 0;
    uStack_e8 = 0;
    auStack_110[2] =
         (ulong)(uint)(extraout_s0_00 * *(float *)(lVar5 + 0x3c) + fVar16 * *(float *)(lVar5 + 0x48)
                      + fVar21 * *(float *)(lVar5 + 0x54));
  }
  /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
  fVar16 = (float)((ulong)uStack_f0 >> 0x20);
  uVar8 = auStack_110[2];
  fStack_cc = fVar16;
  fStack_d0 = (float)/*UnityEngine.Vector3$$Cross*/ func_0x0327b588(0);
  fStack_c8 = (float)uVar8;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_d0,0);
  fStack_dc = fStack_cc;
  fStack_d8 = fStack_c8;
  fStack_e0 = (float)/*UnityEngine.Vector3$$Cross*/ func_0x0327b588(fStack_d0,fStack_cc,fStack_c8,uStack_f0,fVar16,auStack_110[2],0
                                    );
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_e0,0);
  lVar7 = extraout_x1;
  if (*(long *)(lVar5 + 0x18) != 0) {
    auStack_110[0] = (ulong)*(uint *)(lVar5 + 0x60);
    auStack_110[1] = 0;
    uVar19 = *(undefined8 *)(lVar5 + 0x28);
    fVar16 = *(float *)(lVar5 + 0x30);
    lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x18),0);
    if (lVar6 != 0) {
      fVar21 = (float)auStack_110[0];
      fVar17 = (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uStack_f0 >> 0x20) * fVar21;
      uStack_f0 = CONCAT44(fVar17,(float)uVar19 + (float)uStack_f0 * fVar21);
      fVar16 = (float)auStack_110[2] * fVar21 + fVar16;
      uStack_e8 = 0;
      fVar21 = fVar16;
      /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(uStack_f0,fVar17,fVar16,lVar6,0);
      if (*(long *)(lVar5 + 0x18) != 0) {
        lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x18),0);
        uVar22 = *(undefined4 *)(lVar5 + 0x28);
        uVar23 = *(undefined4 *)(lVar5 + 0x2c);
        uVar24 = *(undefined4 *)(lVar5 + 0x30);
        uVar14 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
        if (lVar7 != 0) {
          /*UnityEngine.Transform$$LookAt*/ func_0x032768e4(uVar22,uVar23,uVar24,uVar14,fVar17,fVar21,lVar7,0);
          fVar1 = fStack_c8;
          fVar13 = fStack_cc;
          fVar12 = fStack_d0;
          fVar18 = fStack_d8;
          fVar17 = fStack_dc;
          fVar21 = fStack_e0;
          if ((*(long *)(lVar5 + 0x18) != 0) &&
             (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x18),0), lVar6 != 0)) {
            fVar15 = fVar15 + fVar15;
            fVar20 = fVar20 + fVar20;
            fVar17 = (float)((ulong)uStack_f0 >> 0x20) + fVar13 * fVar15 + fVar17 * fVar20;
            lVar5 = /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(CONCAT44(fVar17,(float)uStack_f0 + fVar12 * fVar15 +
                                                    fVar21 * fVar20),fVar17,
                                    fVar16 + fVar15 * fVar1 + fVar20 * fVar18,lVar6,0);
            return lVar5;
          }
        }
      }
    }
  }
  puVar11 = &Atlas_Gameplay_DebugFreeCameraController__GetTouchControlById;
  func_0x00f78af4();
  puVar3 = auStack_110;
  lVar6 = extraout_x1_00;
  while( true ) {
    *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar3 + -0x30) = unaff_x22;
    *(long *)((long)puVar3 + -0x28) = unaff_x21;
    *(long *)((long)puVar3 + -0x20) = lVar7;
    *(long *)((long)puVar3 + -0x18) = lVar5;
    *(undefined1 ***)((long)puVar3 + -0x10) = ppuVar10;
    *(undefined **)((long)puVar3 + -8) = puVar11;
    lVar7 = param_9;
    lVar5 = param_10;
    if ((bRam0000000003eb5087 & 1) == 0) {
      func_0x00f78a20(0x3d33048);
      func_0x00f78a20(0x3d33050);
      func_0x00f78a20(0x3d33058);
      func_0x00f78a20(0x3d36958);
      func_0x00f78a20(0x3d3fca8);
      bRam0000000003eb5087 = 1;
      lVar5 = param_10;
    }
    *(undefined8 *)((long)puVar3 + -0x58) = 0;
    *(undefined8 *)((long)puVar3 + -0x50) = 0;
    *(undefined8 *)((long)puVar3 + -0x48) = 0;
    *(undefined4 *)((long)puVar3 + -0x78) = 0;
    if (param_9 != 0) break;
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar9 = (long *)___cxa_begin_catch();
      lVar6 = *plVar9;
      ___cxa_end_catch();
      /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764((undefined1 *)((long)puVar3 + -0x58),uRam0000000003eb5000);
      param_9 = lVar7;
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
      param_9 = lVar7;
    }
    func_0x00f78ac0(lVar6,0);
    *(ulong *)((long)puVar3 + -0xc0) = (ulong)(uint)fVar15;
    *(ulong *)((long)puVar3 + -0xb8) = (ulong)(uint)fVar20;
    *(undefined8 *)((long)puVar3 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)puVar3 + -0xa8) = 0x3eb5000;
    *(undefined8 *)((long)puVar3 + -0xa0) = 0;
    *(long *)((long)puVar3 + -0x98) = lVar6;
    *(undefined1 **)((long)puVar3 + -0x90) = (undefined1 *)((long)puVar3 + -0x10);
    *(undefined **)((long)puVar3 + -0x88) =
         &Atlas_Gameplay_DebugFreeCameraController__TryGetNormalisedDeltaByTouchId;
    ppuVar10 = (undefined1 **)((long)puVar3 + -0x90);
    unaff_x22 = 0x3eb5000;
    param_10 = lVar5;
    if ((bRam0000000003eb5086 & 1) == 0) {
      func_0x00f78a20(0x3d36b38);
      bRam0000000003eb5086 = 1;
    }
    puVar11 = &UNK_01579954;
    puVar3 = (ulong *)((long)puVar3 + -0xc0);
    lVar6 = extraout_x1_01;
    lVar7 = param_9;
    unaff_x21 = extraout_x1_01;
  }
  uVar19 = *(undefined8 *)(param_9 + 0x188);
  *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)(param_9 + 400);
  *(undefined8 *)((long)puVar3 + -0x70) = uVar19;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4((undefined1 *)((long)puVar3 + -0x58),(undefined1 *)((long)puVar3 + -0x70),
                  uRam0000000003d3fca8);
  do {
    uVar8 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768((undefined1 *)((long)puVar3 + -0x58),uRam0000000003d33050);
    if ((uVar8 & 1) == 0) {
      lVar5 = 0;
      uVar14 = 0x44;
      goto code_r0x0157986c;
    }
    lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794((undefined1 *)((long)puVar3 + -0x58),uRam0000000003d33058);
    if (lVar5 == 0) {
      func_0x00f78af4();
code_r0x015798b4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15798b8);
      (*pcVar2)();
    }
    if (*(long *)(lVar5 + 0xf8) == 0) {
      func_0x00f78af4();
      goto code_r0x015798b4;
    }
    iVar4 = /*UnityEngine.InputSystem.InputControl<int>$$ReadValue*/ func_0x02209440(*(long *)(lVar5 + 0xf8),uRam0000000003d36958);
  } while (iVar4 != (int)lVar6);
  uVar14 = 0x46;
code_r0x0157986c:
  *(undefined4 *)((long)puVar3 + -0x80) = uVar14;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764((undefined1 *)((long)puVar3 + -0x58),uRam0000000003d33048);
  if (*(int *)((long)puVar3 + -0x80) != 0x46) {
    lVar5 = 0;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x15794c0 | Atlas.Gameplay.DebugFreeCameraController.UpdateOrbital
// ============================================================

/* WARNING: Possible PIC construction at 0x01579950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01579954) */
/* WARNING: Removing unreachable block (ram,0x01579958) */
/* WARNING: Removing unreachable block (ram,0x01579964) */
/* WARNING: Removing unreachable block (ram,0x015799bc) */
/* WARNING: Removing unreachable block (ram,0x01579970) */
/* WARNING: Removing unreachable block (ram,0x015799e0) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01579978) */
/* WARNING: Removing unreachable block (ram,0x015799c8) */

long Atlas_Gameplay_DebugFreeCameraController__UpdateOrbital
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7,long param_8,long param_9,long param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  ulong *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  float extraout_s0;
  float fVar15;
  float fVar16;
  undefined8 extraout_var;
  float fVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulong auStack_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  puVar12 = &stack0xfffffffffffffff0;
  fVar15 = param_2 * 100.0 * param_6 + (float)((ulong)*(undefined8 *)(param_7 + 0x58) >> 0x20);
  *(ulong *)(param_7 + 0x58) =
       CONCAT44(fVar15,param_1 * 100.0 * param_6 + (float)*(undefined8 *)(param_7 + 0x58));
  *(float *)(param_7 + 0x60) = param_5 * 15.0 * param_6 + *(float *)(param_7 + 0x60);
  uVar14 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar15,0xc2a00000,0x42a00000,0);
  *(undefined4 *)(param_7 + 0x5c) = uVar14;
  uVar14 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(*(undefined4 *)(param_7 + 0x60),0x3fc00000,0x41a00000,0);
  *(undefined4 *)(param_7 + 0x60) = uVar14;
  fVar15 = *(float *)(param_7 + 0x58);
  uVar9 = 0;
  uVar18 = 0;
  /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(*(undefined4 *)(param_7 + 0x5c),0);
  /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
  if ((int)param_8 == 0) {
    uStack_90 = CONCAT44(fVar15,extraout_s0);
    auStack_b0[2] = uVar9;
    uStack_98 = uVar18;
    uStack_88 = extraout_var;
  }
  else {
    fVar17 = (float)uVar9;
    uStack_90 = CONCAT44((float)((ulong)*(undefined8 *)(param_7 + 0x34) >> 0x20) * extraout_s0 +
                         (float)((ulong)*(undefined8 *)(param_7 + 0x40) >> 0x20) * fVar15 +
                         (float)((ulong)*(undefined8 *)(param_7 + 0x4c) >> 0x20) * fVar17,
                         (float)*(undefined8 *)(param_7 + 0x34) * extraout_s0 +
                         (float)*(undefined8 *)(param_7 + 0x40) * fVar15 +
                         (float)*(undefined8 *)(param_7 + 0x4c) * fVar17);
    uStack_98 = 0;
    uStack_88 = 0;
    auStack_b0[2] =
         (ulong)(uint)(extraout_s0 * *(float *)(param_7 + 0x3c) +
                       fVar15 * *(float *)(param_7 + 0x48) + fVar17 * *(float *)(param_7 + 0x54));
  }
  /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
  fVar15 = (float)((ulong)uStack_90 >> 0x20);
  uVar9 = auStack_b0[2];
  fStack_6c = fVar15;
  fStack_70 = (float)/*UnityEngine.Vector3$$Cross*/ func_0x0327b588(0);
  fStack_68 = (float)uVar9;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_70,0);
  fStack_7c = fStack_6c;
  fStack_78 = fStack_68;
  fStack_80 = (float)/*UnityEngine.Vector3$$Cross*/ func_0x0327b588(fStack_70,fStack_6c,fStack_68,uStack_90,fVar15,auStack_b0[2],0)
  ;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(&fStack_80,0);
  if (*(long *)(param_7 + 0x18) != 0) {
    auStack_b0[0] = (ulong)*(uint *)(param_7 + 0x60);
    auStack_b0[1] = 0;
    uVar18 = *(undefined8 *)(param_7 + 0x28);
    fVar15 = *(float *)(param_7 + 0x30);
    lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
    if (lVar8 != 0) {
      fVar17 = (float)auStack_b0[0];
      fVar16 = (float)((ulong)uVar18 >> 0x20) + (float)((ulong)uStack_90 >> 0x20) * fVar17;
      uStack_90 = CONCAT44(fVar16,(float)uVar18 + (float)uStack_90 * fVar17);
      fVar15 = (float)auStack_b0[2] * fVar17 + fVar15;
      uStack_88 = 0;
      fVar17 = fVar15;
      /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(uStack_90,fVar16,fVar15,lVar8,0);
      if (*(long *)(param_7 + 0x18) != 0) {
        param_8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0);
        uVar19 = *(undefined4 *)(param_7 + 0x28);
        uVar20 = *(undefined4 *)(param_7 + 0x2c);
        uVar21 = *(undefined4 *)(param_7 + 0x30);
        uVar14 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
        if (param_8 != 0) {
          /*UnityEngine.Transform$$LookAt*/ func_0x032768e4(uVar19,uVar20,uVar21,uVar14,fVar16,fVar17,param_8,0);
          fVar4 = fStack_68;
          fVar3 = fStack_6c;
          fVar2 = fStack_70;
          fVar1 = fStack_78;
          fVar16 = fStack_7c;
          fVar17 = fStack_80;
          if ((*(long *)(param_7 + 0x18) != 0) &&
             (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x18),0), lVar8 != 0)) {
            param_3 = param_3 + param_3;
            param_4 = param_4 + param_4;
            fVar16 = (float)((ulong)uStack_90 >> 0x20) + fVar3 * param_3 + fVar16 * param_4;
            lVar8 = /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(CONCAT44(fVar16,(float)uStack_90 + fVar2 * param_3 +
                                                    fVar17 * param_4),fVar16,
                                    fVar15 + param_3 * fVar4 + param_4 * fVar1,lVar8,0);
            return lVar8;
          }
        }
      }
    }
  }
  puVar13 = &Atlas_Gameplay_DebugFreeCameraController__GetTouchControlById;
  func_0x00f78af4();
  puVar6 = auStack_b0;
  lVar8 = extraout_x1;
  while( true ) {
    *(undefined8 *)((long)puVar6 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar6 + -0x38) = unaff_x23;
    *(undefined8 *)((long)puVar6 + -0x30) = unaff_x22;
    *(long *)((long)puVar6 + -0x28) = unaff_x21;
    *(long *)((long)puVar6 + -0x20) = param_8;
    *(long *)((long)puVar6 + -0x18) = param_7;
    *(undefined1 **)((long)puVar6 + -0x10) = puVar12;
    *(undefined **)((long)puVar6 + -8) = puVar13;
    lVar10 = param_9;
    param_7 = param_10;
    if ((bRam0000000003eb5087 & 1) == 0) {
      func_0x00f78a20(0x3d33048);
      func_0x00f78a20(0x3d33050);
      func_0x00f78a20(0x3d33058);
      func_0x00f78a20(0x3d36958);
      func_0x00f78a20(0x3d3fca8);
      bRam0000000003eb5087 = 1;
      param_7 = param_10;
    }
    *(undefined8 *)((long)puVar6 + -0x58) = 0;
    *(undefined8 *)((long)puVar6 + -0x50) = 0;
    *(undefined8 *)((long)puVar6 + -0x48) = 0;
    *(undefined4 *)((long)puVar6 + -0x78) = 0;
    if (param_9 != 0) break;
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar11 = (long *)___cxa_begin_catch();
      lVar8 = *plVar11;
      ___cxa_end_catch();
      /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764((undefined1 *)((long)puVar6 + -0x58),uRam0000000003eb5000);
      param_9 = lVar10;
      if (lVar8 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
      param_9 = lVar10;
    }
    func_0x00f78ac0(lVar8,0);
    *(ulong *)((long)puVar6 + -0xc0) = (ulong)(uint)param_3;
    *(ulong *)((long)puVar6 + -0xb8) = (ulong)(uint)param_4;
    *(undefined8 *)((long)puVar6 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)puVar6 + -0xa8) = 0x3eb5000;
    *(undefined8 *)((long)puVar6 + -0xa0) = 0;
    *(long *)((long)puVar6 + -0x98) = lVar8;
    *(undefined1 **)((long)puVar6 + -0x90) = (undefined1 *)((long)puVar6 + -0x10);
    *(undefined **)((long)puVar6 + -0x88) =
         &Atlas_Gameplay_DebugFreeCameraController__TryGetNormalisedDeltaByTouchId;
    puVar12 = (undefined1 *)((long)puVar6 + -0x90);
    unaff_x22 = 0x3eb5000;
    param_10 = param_7;
    if ((bRam0000000003eb5086 & 1) == 0) {
      func_0x00f78a20(0x3d36b38);
      bRam0000000003eb5086 = 1;
    }
    puVar13 = &UNK_01579954;
    puVar6 = (ulong *)((long)puVar6 + -0xc0);
    lVar8 = extraout_x1_00;
    param_8 = param_9;
    unaff_x21 = extraout_x1_00;
  }
  uVar18 = *(undefined8 *)(param_9 + 0x188);
  *(undefined8 *)((long)puVar6 + -0x68) = *(undefined8 *)(param_9 + 400);
  *(undefined8 *)((long)puVar6 + -0x70) = uVar18;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4((undefined1 *)((long)puVar6 + -0x58),(undefined1 *)((long)puVar6 + -0x70),
                  uRam0000000003d3fca8);
  do {
    uVar9 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768((undefined1 *)((long)puVar6 + -0x58),uRam0000000003d33050);
    if ((uVar9 & 1) == 0) {
      lVar10 = 0;
      uVar14 = 0x44;
      goto code_r0x0157986c;
    }
    lVar10 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794((undefined1 *)((long)puVar6 + -0x58),uRam0000000003d33058);
    if (lVar10 == 0) {
      func_0x00f78af4();
code_r0x015798b4:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x15798b8);
      (*pcVar5)();
    }
    if (*(long *)(lVar10 + 0xf8) == 0) {
      func_0x00f78af4();
      goto code_r0x015798b4;
    }
    iVar7 = /*UnityEngine.InputSystem.InputControl<int>$$ReadValue*/ func_0x02209440(*(long *)(lVar10 + 0xf8),uRam0000000003d36958);
  } while (iVar7 != (int)lVar8);
  uVar14 = 0x46;
code_r0x0157986c:
  *(undefined4 *)((long)puVar6 + -0x80) = uVar14;
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764((undefined1 *)((long)puVar6 + -0x58),uRam0000000003d33048);
  if (*(int *)((long)puVar6 + -0x80) != 0x46) {
    lVar10 = 0;
  }
  return lVar10;
}



// ============================================================
// RVA: 0x157975c | Atlas.Gameplay.DebugFreeCameraController.GetTouchControlById
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_DebugFreeCameraController__GetTouchControlById
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined8 param_4,
               long param_5,long param_6,float *param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int extraout_w1;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_6;
  if ((bRam0000000003eb5087 & 1) == 0) {
    func_0x00f78a20(0x3d33048);
    func_0x00f78a20(0x3d33050);
    func_0x00f78a20(0x3d33058);
    func_0x00f78a20(0x3d36958);
    func_0x00f78a20(0x3d3fca8);
    bRam0000000003eb5087 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_6 != 0) {
    uStack_68 = *(undefined8 *)(param_6 + 400);
    uStack_70 = *(undefined8 *)(param_6 + 0x188);
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&uStack_58,&uStack_70,uRam0000000003d3fca8);
    do {
      uVar4 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&uStack_58,uRam0000000003d33050);
      if ((uVar4 & 1) == 0) {
        lVar5 = 0;
        iVar2 = 0x44;
        goto LAB_0157986c;
      }
      lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&uStack_58,uRam0000000003d33058);
      if (lVar5 == 0) {
        func_0x00f78af4();
code_r0x015798b4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x15798b8);
        (*pcVar1)();
      }
      if (*(long *)(lVar5 + 0xf8) == 0) {
        func_0x00f78af4();
        goto code_r0x015798b4;
      }
      iVar2 = /*UnityEngine.InputSystem.InputControl<int>$$ReadValue*/ func_0x02209440(*(long *)(lVar5 + 0xf8),uRam0000000003d36958);
    } while (iVar2 != (int)param_5);
    iVar2 = 0x46;
LAB_0157986c:
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_58,uRam0000000003d33048);
    if (iVar2 != 0x46) {
      lVar5 = 0;
    }
    return lVar5;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    param_5 = *plVar6;
    ___cxa_end_catch();
    /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_58,uRam0000000003eb5000);
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar10 = func_0x00f78ac0(param_5,0);
  uVar7 = auVar10._0_8_;
  if ((bRam0000000003eb5086 & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d36b38);
    bRam0000000003eb5086 = 1;
  }
  lVar5 = Atlas_Gameplay_DebugFreeCameraController__GetTouchControlById(uVar7,auVar10._8_8_,lVar5);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0xf0) == 0) {
code_r0x015799e0:
      lVar5 = func_0x00f78af4();
      *(undefined8 *)(lVar5 + 0x20) = 0xffffffffffffffff;
      uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar5 + 0x28) = uVar9;
      *(float *)(lVar5 + 0x2c) = param_2;
      *(undefined4 *)(lVar5 + 0x30) = param_3;
      uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar5 + 0x34) = uVar9;
      *(float *)(lVar5 + 0x38) = param_2;
      *(undefined4 *)(lVar5 + 0x3c) = param_3;
      uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar5 + 0x40) = uVar9;
      *(float *)(lVar5 + 0x44) = param_2;
      *(undefined4 *)(lVar5 + 0x48) = param_3;
      uVar9 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar5 + 0x4c) = uVar9;
      *(float *)(lVar5 + 0x50) = param_2;
      *(undefined4 *)(lVar5 + 0x54) = param_3;
      *(undefined8 *)(lVar5 + 0x58) = _UNK_033f8980;
      *(undefined4 *)(lVar5 + 0x60) = 0x41100000;
      return lVar5;
    }
    uVar4 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_isPressed*/ func_0x02fdd6e8(*(long *)(lVar5 + 0xf0),0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar5 + 0x108) == 0) goto code_r0x015799e0;
      fVar8 = (float)/*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar5 + 0x108),uRam0000000003d36b38);
      iVar2 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      iVar3 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      fVar8 = fVar8 / (float)iVar2;
      lVar5 = 1;
      param_2 = param_2 / (float)iVar3;
      goto code_r0x015799c8;
    }
  }
  fVar8 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  lVar5 = 0;
code_r0x015799c8:
  *param_7 = fVar8;
  param_7[1] = param_2;
  return lVar5;
}



// ============================================================
// RVA: 0x1579908 | Atlas.Gameplay.DebugFreeCameraController.TryGetNormalisedDeltaByTouchId
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_DebugFreeCameraController__TryGetNormalisedDeltaByTouchId
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,float *param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((bRam0000000003eb5086 & 1) == 0) {
    param_4 = func_0x00f78a20(0x3d36b38);
    bRam0000000003eb5086 = 1;
  }
  lVar3 = Atlas_Gameplay_DebugFreeCameraController__GetTouchControlById(param_4,param_5,param_6);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0xf0) == 0) {
LAB_015799e0:
      lVar3 = func_0x00f78af4();
      *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
      uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar3 + 0x28) = uVar6;
      *(float *)(lVar3 + 0x2c) = param_2;
      *(undefined4 *)(lVar3 + 0x30) = param_3;
      uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar3 + 0x34) = uVar6;
      *(float *)(lVar3 + 0x38) = param_2;
      *(undefined4 *)(lVar3 + 0x3c) = param_3;
      uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar3 + 0x40) = uVar6;
      *(float *)(lVar3 + 0x44) = param_2;
      *(undefined4 *)(lVar3 + 0x48) = param_3;
      uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      *(undefined4 *)(lVar3 + 0x4c) = uVar6;
      *(float *)(lVar3 + 0x50) = param_2;
      *(undefined4 *)(lVar3 + 0x54) = param_3;
      *(undefined8 *)(lVar3 + 0x58) = _UNK_033f8980;
      *(undefined4 *)(lVar3 + 0x60) = 0x41100000;
      return lVar3;
    }
    uVar4 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_isPressed*/ func_0x02fdd6e8(*(long *)(lVar3 + 0xf0),0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar3 + 0x108) == 0) goto LAB_015799e0;
      fVar5 = (float)/*UnityEngine.InputSystem.InputControl<Vector2>$$ReadValue*/ func_0x0221012c(*(long *)(lVar3 + 0x108),uRam0000000003d36b38);
      iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      iVar2 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      fVar5 = fVar5 / (float)iVar1;
      lVar3 = 1;
      param_2 = param_2 / (float)iVar2;
      goto LAB_015799c8;
    }
  }
  fVar5 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  lVar3 = 0;
LAB_015799c8:
  *param_7 = fVar5;
  param_7[1] = param_2;
  return lVar3;
}



// ============================================================
// RVA: 0x15799e4 | Atlas.Gameplay.DebugFreeCameraController..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_DebugFreeCameraController___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_4 + 0x20) = 0xffffffffffffffff;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x28) = uVar1;
  *(undefined4 *)(param_4 + 0x2c) = param_2;
  *(undefined4 *)(param_4 + 0x30) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x34) = uVar1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x40) = uVar1;
  *(undefined4 *)(param_4 + 0x44) = param_2;
  *(undefined4 *)(param_4 + 0x48) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x4c) = uVar1;
  *(undefined4 *)(param_4 + 0x50) = param_2;
  *(undefined4 *)(param_4 + 0x54) = param_3;
  *(undefined8 *)(param_4 + 0x58) = _UNK_033f8980;
  *(undefined4 *)(param_4 + 0x60) = 0x41100000;
  return param_4;
}



// ============================================================
// RVA: 0x1579a64 | Atlas.Gameplay.DebugFreeCameraController..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugFreeCameraController___cctor(void)

{
  undefined8 *puVar1;
  
  if ((bRam0000000003eb5088 & 1) == 0) {
    func_0x00f78a20(0x3d210f0);
    bRam0000000003eb5088 = 1;
  }
  puVar1 = *(undefined8 **)(/*Atlas.Gameplay.DebugFreeCameraController_TypeInfo*/ lRam0000000003d210f0 + 0xb8);
  *puVar1 = _UNK_033f83a8;
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}



