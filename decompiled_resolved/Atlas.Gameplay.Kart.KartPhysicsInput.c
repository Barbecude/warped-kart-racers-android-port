// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysicsInput

// ============================================================
// RVA: 0x15da590 | Atlas.Gameplay.Kart.KartPhysicsInput.SetGamePlayFreezeAndBrake
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__SetGamePlayFreezeAndBrake(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x84) = param_2;
  *(byte *)(param_1 + 0x86) = param_2;
  if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x85) != '\0')) {
    *(undefined1 *)(param_1 + 0x86) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x15dac3c | Atlas.Gameplay.Kart.KartPhysicsInput.get_InputType
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysicsInput__get_InputType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15dac44 | Atlas.Gameplay.Kart.KartPhysicsInput.set_InputType
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_InputType(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dac4c | Atlas.Gameplay.Kart.KartPhysicsInput.get_Data
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__get_Data(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0x68);
  return;
}



// ============================================================
// RVA: 0x15dac64 | Atlas.Gameplay.Kart.KartPhysicsInput.set_Data
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_Data(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x68) = param_2[4];
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15dac7c | Atlas.Gameplay.Kart.KartPhysicsInput.get_IsFrozen
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysicsInput__get_IsFrozen(long param_1)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x85) != '\0';
}



// ============================================================
// RVA: 0x15dac9c | Atlas.Gameplay.Kart.KartPhysicsInput.get_GameplayFreeze
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInput__get_GameplayFreeze(long param_1)

{
  return *(undefined1 *)(param_1 + 0x84);
}



// ============================================================
// RVA: 0x15daca4 | Atlas.Gameplay.Kart.KartPhysicsInput.set_GameplayFreeze
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_GameplayFreeze(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x84) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dacac | Atlas.Gameplay.Kart.KartPhysicsInput.get_LogicFreeze
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInput__get_LogicFreeze(long param_1)

{
  return *(undefined1 *)(param_1 + 0x85);
}



// ============================================================
// RVA: 0x15dacb4 | Atlas.Gameplay.Kart.KartPhysicsInput.set_LogicFreeze
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_LogicFreeze(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x85) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dacbc | Atlas.Gameplay.Kart.KartPhysicsInput.get_ForceBrake
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInput__get_ForceBrake(long param_1)

{
  return *(undefined1 *)(param_1 + 0x86);
}



// ============================================================
// RVA: 0x15dacc4 | Atlas.Gameplay.Kart.KartPhysicsInput.set_ForceBrake
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_ForceBrake(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x86) = param_2;
  return;
}



// ============================================================
// RVA: 0x15daccc | Atlas.Gameplay.Kart.KartPhysicsInput.get_DisableReverse
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInput__get_DisableReverse(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



// ============================================================
// RVA: 0x15dacd4 | Atlas.Gameplay.Kart.KartPhysicsInput.set_DisableReverse
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_DisableReverse(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x21) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dacdc | Atlas.Gameplay.Kart.KartPhysicsInput.get_DisableAutoThrottle
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInput__get_DisableAutoThrottle(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x15dace4 | Atlas.Gameplay.Kart.KartPhysicsInput.set_DisableAutoThrottle
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_DisableAutoThrottle(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dacec | Atlas.Gameplay.Kart.KartPhysicsInput.get_DisableBrakeOnDrift
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysicsInput__get_DisableBrakeOnDrift(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15dacf4 | Atlas.Gameplay.Kart.KartPhysicsInput.set_DisableBrakeOnDrift
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__set_DisableBrakeOnDrift(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dacfc | Atlas.Gameplay.Kart.KartPhysicsInput.SetDisableItemUse
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__SetDisableItemUse(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x23) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dad04 | Atlas.Gameplay.Kart.KartPhysicsInput.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysicsInput__Init
               (long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x18) = param_4;
  if (param_3 != 0) {
    uVar1 = /*Atlas.Input.KartInputManager$$get_KartPhysicsAction*/ func_0x015ccf68(param_3,0);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    if (*(long *)(param_1 + 0x18) != 0) {
      *(float *)(param_1 + 0x38) = *(float *)(*(long *)(param_1 + 0x18) + 0x10) * _UNK_033f850c;
      *(undefined8 *)(param_1 + 0x28) = param_2;
      *(undefined8 *)(param_1 + 0x30) = param_5;
      if (param_4 != 0) {
        *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_4 + 0x2c);
        *(undefined2 *)(param_1 + 0x21) = *(undefined2 *)(param_4 + 0x2d);
        *(undefined1 *)(param_1 + 0x78) = 1;
        return;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x15dad8c | Atlas.Gameplay.Kart.KartPhysicsInput.DeInit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x15dad98 | Atlas.Gameplay.Kart.KartPhysicsInput.SetLogicFreeze
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__SetLogicFreeze(long param_1,int param_2)

{
  *(char *)(param_1 + 0x85) = (char)param_2;
  if (*(char *)(param_1 + 0x84) != '\0' || param_2 != 0) {
    param_2 = 1;
  }
  *(char *)(param_1 + 0x86) = (char)param_2;
  return;
}



// ============================================================
// RVA: 0x15dadbc | Atlas.Gameplay.Kart.KartPhysicsInput.ResetInput
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__ResetInput
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  *(undefined4 *)(param_3 + 0x60) = 0;
  *(undefined2 *)(param_3 + 100) = 0;
  return;
}



// ============================================================
// RVA: 0x15dadec | Atlas.Gameplay.Kart.KartPhysicsInput.GetInput
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Kart_KartPhysicsInput__GetInput
          (undefined4 *param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float extraout_s0;
  float fVar19;
  undefined8 extraout_d0;
  ulong uVar21;
  undefined8 uVar20;
  undefined8 extraout_var;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uStack_118;
  undefined4 uStack_114;
  char cStack_108;
  char cStack_107;
  char cStack_106;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  
  if ((bRam0000000003eb539a & 1) == 0) {
    func_0x00f78a20(0x3d580e8);
    func_0x00f78a20(0x3d580f0);
    bRam0000000003eb539a = 1;
  }
  param_4 = param_4 + 0x70;
  lVar8 = /*Atlas.Input.AtlasInput.KartPhysicsActions$$get_LeftJoystick*/ func_0x01545c28(param_4,0);
  if (lVar8 != 0) {
    fVar15 = (float)/*UnityEngine.InputSystem.InputAction$$ReadValue<Vector2>*/ func_0x0185ea7c(lVar8,uRam0000000003d580f0);
    lVar8 = /*Atlas.Input.AtlasInput.KartPhysicsActions$$get_Drift*/ func_0x01545c68(param_4,0);
    lVar9 = /*Atlas.Input.AtlasInput.KartPhysicsActions$$get_Use*/ func_0x01545c88(param_4,0);
    iVar7 = /*Core.Input.InputManager$$get_JoystickRotatedLeft*/ func_0x01649708(0);
    if (iVar7 == 0) {
      iVar7 = /*Core.Input.InputManager$$get_JoystickRotatedRight*/ func_0x0164976c(0);
      if (iVar7 != 0) {
        fVar18 = -fVar15;
        fVar15 = param_3;
        goto LAB_015daeac;
      }
    }
    else {
      fVar18 = fVar15;
      fVar15 = -param_3;
LAB_015daeac:
      lVar8 = /*Atlas.Input.AtlasInput.KartPhysicsActions$$get_Use*/ func_0x01545c88(param_4,0);
      lVar9 = /*Atlas.Input.AtlasInput.KartPhysicsActions$$get_Drift*/ func_0x01545c68(param_4,0);
      param_3 = fVar18;
    }
    uVar16 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(fVar15,0);
    fVar15 = param_3;
    lVar10 = /*Atlas.Input.AtlasInput.KartPhysicsActions$$get_RightJoystick*/ func_0x01545c48(param_4,0);
    if (lVar10 != 0) {
      /*UnityEngine.InputSystem.InputAction$$ReadValue<Vector2>*/ func_0x0185ea7c(lVar10,uRam0000000003d580f0);
      uVar17 = /*Unity.Mathematics.float2$$op_Implicit*/ func_0x030c22cc(0);
      if ((lVar8 != 0) && (fVar18 = (float)/*UnityEngine.InputSystem.InputAction$$ReadValue<float>*/ func_0x0185e9a4(lVar8,uRam0000000003d580e8), lVar9 != 0))
      {
        uVar5 = /*UnityEngine.InputSystem.InputAction$$get_triggered*/ func_0x03022c40(lVar9,0);
        uVar6 = /*UnityEngine.InputSystem.InputAction$$get_triggered*/ func_0x03022c40(lVar8,0);
        *param_1 = uVar16;
        param_1[1] = param_3;
        param_1[2] = uVar17;
        param_1[3] = fVar15;
        *(bool *)(param_1 + 4) = 0.0 < fVar18;
        *(undefined1 *)((long)param_1 + 0x11) = uVar5;
        *(undefined1 *)((long)param_1 + 0x12) = uVar6;
        *(undefined1 *)((long)param_1 + 0x13) = 0;
        auVar22._8_8_ = extraout_var;
        auVar22._0_8_ = extraout_d0;
        return auVar22;
      }
    }
  }
  lVar8 = func_0x00f78af4();
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  fStack_e8 = 0.0;
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  if ((*(long *)(lVar8 + 0x28) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar8 + 0x28) + 0x10), lVar9 == 0)) {
code_r0x015db4b8:
    lVar8 = func_0x00f78af4();
    return ZEXT416((uint)(*(float *)(lVar8 + 0x18) * _UNK_033f850c));
  }
  lVar9 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar9,0);
  fVar27 = *(float *)(lVar9 + 100);
  Atlas_Gameplay_Kart_KartPhysicsInput__GetInput(&uStack_118,lVar8);
  fVar15 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uStack_118,0xbf800000,0x3f800000,0);
  pfVar14 = (float *)(lVar8 + 0x3c);
  *pfVar14 = fVar15;
  uVar16 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uStack_114,0xbf800000,0x3f800000,0);
  *(undefined4 *)(lVar8 + 0x40) = uVar16;
  fVar18 = 0.0;
  fVar15 = fVar18;
  if (cStack_108 != '\0') {
    fVar15 = 1.0;
  }
  *(float *)(lVar8 + 0x60) = fVar15;
  *(bool *)(lVar8 + 0x65) = *(char *)(lVar8 + 0x23) == '\0' && cStack_107 != '\0';
  *(bool *)(lVar8 + 100) = cStack_106 != '\0';
  *(float *)(lVar8 + 0x48) = *pfVar14;
  fVar19 = (float)_atan2f(*pfVar14,uVar16);
  *(float *)(lVar8 + 0x44) = fVar19;
  fVar15 = _UNK_033f8b50;
  bVar4 = *(char *)(lVar8 + 0x22) != '\0';
  if (ABS(fVar19) <= _UNK_033f8b50) {
    bVar3 = false;
  }
  else {
    bVar3 = ABS(fVar19) < *(float *)(lVar8 + 0x38);
  }
  fVar19 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(pfVar14,0);
  if (0.0 < fVar27 && bVar4) {
    uVar20 = /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(fVar15,*(undefined4 *)(lVar8 + 0x38),ABS(*(float *)(lVar8 + 0x44)),0);
    fVar18 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uVar20,0,0x3f800000,0);
  }
  fVar15 = *pfVar14;
  if ((bool)(bVar3 & (0.0 < fVar27 && bVar4))) {
    fVar15 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar15,0);
    fVar15 = fVar19 * (fVar18 + 1.0) * fVar15;
  }
  iVar7 = *(int *)(lVar8 + 0x80);
  fVar19 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar15,0);
  fVar18 = -fVar19;
  if (fVar19 != INFINITY) {
    fVar18 = fVar19;
  }
  if (iVar7 != (int)fVar18) {
    *(undefined4 *)(lVar8 + 0x7c) = 0;
  }
  if (((*(long *)(lVar8 + 0x28) == 0) ||
      (lVar9 = *(long *)(*(long *)(lVar8 + 0x28) + 0x10), lVar9 == 0)) ||
     (lVar9 = *(long *)(lVar9 + 0x40), lVar9 == 0)) goto code_r0x015db4b8;
  if (ABS(fVar15) <= *(float *)(lVar9 + 0x19c)) {
    *(undefined4 *)(lVar8 + 0x7c) = 0;
  }
  else {
    fVar18 = *(float *)(lVar8 + 0x7c) + extraout_s0;
    *(float *)(lVar8 + 0x7c) = fVar18;
    if ((fVar18 < *(float *)(lVar9 + 0x1a4)) && (fVar27 <= 0.0)) {
      fVar15 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar15,0);
      fVar15 = fVar15 * *(float *)(lVar9 + 0x19c);
    }
  }
  fVar19 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar15,0);
  fVar18 = -fVar19;
  if (fVar19 != INFINITY) {
    fVar18 = fVar19;
  }
  *(int *)(lVar8 + 0x80) = (int)fVar18;
  if (0.0 < fVar27) {
    if ((*(long *)(lVar8 + 0x28) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar8 + 0x28) + 0x10), lVar10 == 0)) goto code_r0x015db4b8;
    fVar24 = *(float *)(lVar9 + 0x84);
    fVar25 = *(float *)(lVar9 + 0x88);
    fVar23 = *(float *)(lVar9 + 0x80);
    lVar9 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar10,0);
    uStack_100 = *(undefined8 *)(lVar9 + 0x180);
    uStack_f8 = (undefined4)*(undefined8 *)(lVar9 + 0x188);
    fStack_ec = (float)*(undefined8 *)(lVar9 + 0x194);
    fStack_e8 = (float)((ulong)*(undefined8 *)(lVar9 + 0x194) >> 0x20);
    uStack_f4 = (undefined4)*(undefined8 *)(lVar9 + 0x18c);
    fStack_f0 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18c) >> 0x20);
    iVar7 = Atlas_Gameplay_Kart_DriftBoostLevel__IsValid(&uStack_100,0);
    fVar26 = fStack_e8;
    fVar18 = fStack_ec;
    fVar19 = fStack_f0;
    if (iVar7 == 0) {
      fVar26 = fVar25;
      fVar18 = fVar24;
      fVar19 = fVar23;
    }
    fVar23 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar15,0xbf800000,0x3f800000,0);
    if ((*(long *)(lVar8 + 0x28) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar8 + 0x28) + 0x10), lVar9 == 0)) goto code_r0x015db4b8;
    lVar9 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar9,0);
    fVar15 = *(float *)(lVar9 + 0x6c);
    fVar24 = -(fVar26 - fVar19);
    if (0.0 <= fVar15) {
      fVar24 = fVar18 - fVar26;
    }
    fVar25 = -(fVar18 - fVar26);
    if (0.0 <= fVar15) {
      fVar18 = fVar19;
      fVar25 = fVar26 - fVar19;
    }
    fVar26 = fVar26 + fVar23 * fVar24;
    if (fVar23 < 0.0) {
      fVar26 = fVar18 + (1.0 - ABS(fVar23)) * fVar25;
    }
    fVar18 = (float)/*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(fVar26,fVar19,0);
    fVar15 = fVar15 * fVar18;
  }
  *(float *)(lVar8 + 0x4c) = fVar15;
  *(undefined4 *)(lVar8 + 0x50) = 0x3f800000;
  if (*(char *)(lVar8 + 0x24) != '\0') {
    uVar16 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(*(undefined4 *)(lVar8 + 0x40),0);
    *(undefined4 *)(lVar8 + 0x50) = uVar16;
  }
  *(undefined4 *)(lVar8 + 0x58) = 0x3f800000;
  fVar18 = *(float *)(lVar8 + 0x3c);
  fVar15 = *(float *)(lVar8 + 0x40);
  *(float *)(lVar8 + 0x68) = fVar18;
  *(float *)(lVar8 + 0x6c) = fVar15;
  lVar9 = *(long *)(lVar8 + 0x18);
  if (0.0 <= fVar15) {
    if (lVar9 == 0) goto code_r0x015db4b8;
    pfVar13 = (float *)(lVar9 + 0x14);
    pfVar11 = (float *)(lVar9 + 0x18);
  }
  else {
    if (lVar9 == 0) goto code_r0x015db4b8;
    pfVar13 = (float *)(lVar9 + 0x1c);
    pfVar11 = (float *)(lVar9 + 0x20);
  }
  fVar19 = *pfVar13;
  fVar26 = ABS(fVar15) - fVar19;
  if ((0.0 < fVar26) &&
     (fVar23 = (float)_tanf(*pfVar11 * _UNK_033f850c), ABS(fVar18) < fVar26 * fVar23)) {
    fVar15 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar15,0);
    uVar20 = /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(fVar19,0x3f800000,ABS(*(float *)(lVar8 + 0x40)),0);
    fVar18 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uVar20,0,0x3f800000,0);
    *(float *)(lVar8 + 0x6c) = fVar15 * fVar18;
    fVar15 = *(float *)(lVar8 + 0x40);
  }
  auVar22 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(-fVar15,0,0);
  lVar9 = *(long *)(lVar8 + 0x18);
  if (lVar9 == 0) goto code_r0x015db4b8;
  fVar15 = *(float *)(lVar9 + 0x24);
  if (auVar22._0_4_ <= fVar15) {
    return auVar22;
  }
  fVar18 = (float)_tanf(*(float *)(lVar9 + 0x28) * _UNK_033f850c);
  fVar18 = (auVar22._0_4_ - fVar15) * fVar18;
  if (fVar18 <= ABS(*pfVar14)) {
    return ZEXT416((uint)fVar18);
  }
  uVar20 = /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(fVar15,0x3f800000,auVar22._0_8_ & 0xffffffff,0);
  uVar16 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uVar20,0,0x3f800000,0);
  if ((*(long *)(lVar8 + 0x28) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar8 + 0x28) + 0x10), lVar9 == 0)) goto code_r0x015db4b8;
  lVar9 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar9,0);
  if ((0.5 < *(float *)(lVar9 + 4)) || (*(char *)(lVar8 + 0x21) != '\0')) {
    puVar12 = (undefined4 *)(lVar8 + 0x5c);
  }
  else {
    puVar12 = (undefined4 *)(lVar8 + 0x54);
  }
  *puVar12 = uVar16;
  if ((fVar27 <= 0.0) || (*(char *)(lVar8 + 0x20) == '\0')) {
    uVar21 = (ulong)(uint)*(float *)(lVar8 + 0x5c);
    if (0.0 < *(float *)(lVar8 + 0x5c)) goto code_r0x015db484;
  }
  else {
    *(undefined4 *)(lVar8 + 0x5c) = 0;
  }
  uVar21 = CONCAT44(0,*(float *)(lVar8 + 0x54));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar21;
  if (*(float *)(lVar8 + 0x54) <= 0.0) {
    return auVar1;
  }
code_r0x015db484:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar21;
  *(undefined4 *)(lVar8 + 0x50) = 0;
  return auVar2;
}



// ============================================================
// RVA: 0x15daf90 | Atlas.Gameplay.Kart.KartPhysicsInput.GetPlayerInput
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_Gameplay_Kart_KartPhysicsInput__GetPlayerInput(float param_1,long param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  char cStack_a8;
  char cStack_a7;
  char cStack_a6;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  fStack_88 = 0.0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  if ((*(long *)(param_2 + 0x28) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar5 == 0)) {
LAB_015db4b8:
    lVar5 = func_0x00f78af4();
    return ZEXT416((uint)(*(float *)(lVar5 + 0x18) * _UNK_033f850c));
  }
  lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
  fVar22 = *(float *)(lVar5 + 100);
  Atlas_Gameplay_Kart_KartPhysicsInput__GetInput(&uStack_b8,param_2);
  fVar11 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uStack_b8,0xbf800000,0x3f800000,0);
  pfVar10 = (float *)(param_2 + 0x3c);
  *pfVar10 = fVar11;
  uVar12 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uStack_b4,0xbf800000,0x3f800000,0);
  *(undefined4 *)(param_2 + 0x40) = uVar12;
  fVar14 = 0.0;
  fVar11 = fVar14;
  if (cStack_a8 != '\0') {
    fVar11 = 1.0;
  }
  *(float *)(param_2 + 0x60) = fVar11;
  *(bool *)(param_2 + 0x65) = *(char *)(param_2 + 0x23) == '\0' && cStack_a7 != '\0';
  *(bool *)(param_2 + 100) = cStack_a6 != '\0';
  *(float *)(param_2 + 0x48) = *pfVar10;
  fVar13 = (float)_atan2f(*pfVar10,uVar12);
  *(float *)(param_2 + 0x44) = fVar13;
  fVar11 = _UNK_033f8b50;
  bVar3 = *(char *)(param_2 + 0x22) != '\0';
  if (ABS(fVar13) <= _UNK_033f8b50) {
    bVar2 = false;
  }
  else {
    bVar2 = ABS(fVar13) < *(float *)(param_2 + 0x38);
  }
  fVar13 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(pfVar10,0);
  if (0.0 < fVar22 && bVar3) {
    uVar15 = /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(fVar11,*(undefined4 *)(param_2 + 0x38),ABS(*(float *)(param_2 + 0x44)),
                             0);
    fVar14 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uVar15,0,0x3f800000,0);
  }
  fVar11 = *pfVar10;
  if ((bool)(bVar2 & (0.0 < fVar22 && bVar3))) {
    fVar11 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar11,0);
    fVar11 = fVar13 * (fVar14 + 1.0) * fVar11;
  }
  iVar4 = *(int *)(param_2 + 0x80);
  fVar13 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar11,0);
  fVar14 = -fVar13;
  if (fVar13 != INFINITY) {
    fVar14 = fVar13;
  }
  if (iVar4 != (int)fVar14) {
    *(undefined4 *)(param_2 + 0x7c) = 0;
  }
  if (((*(long *)(param_2 + 0x28) == 0) ||
      (lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar5 == 0)) ||
     (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) goto LAB_015db4b8;
  if (ABS(fVar11) <= *(float *)(lVar5 + 0x19c)) {
    *(undefined4 *)(param_2 + 0x7c) = 0;
  }
  else {
    param_1 = *(float *)(param_2 + 0x7c) + param_1;
    *(float *)(param_2 + 0x7c) = param_1;
    if ((param_1 < *(float *)(lVar5 + 0x1a4)) && (fVar22 <= 0.0)) {
      fVar11 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar11,0);
      fVar11 = fVar11 * *(float *)(lVar5 + 0x19c);
    }
  }
  fVar13 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar11,0);
  fVar14 = -fVar13;
  if (fVar13 != INFINITY) {
    fVar14 = fVar13;
  }
  *(int *)(param_2 + 0x80) = (int)fVar14;
  if (0.0 < fVar22) {
    if ((*(long *)(param_2 + 0x28) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar6 == 0)) goto LAB_015db4b8;
    fVar19 = *(float *)(lVar5 + 0x84);
    fVar20 = *(float *)(lVar5 + 0x88);
    fVar18 = *(float *)(lVar5 + 0x80);
    lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar6,0);
    uStack_a0 = *(undefined8 *)(lVar5 + 0x180);
    uStack_98 = (undefined4)*(undefined8 *)(lVar5 + 0x188);
    fStack_8c = (float)*(undefined8 *)(lVar5 + 0x194);
    fStack_88 = (float)((ulong)*(undefined8 *)(lVar5 + 0x194) >> 0x20);
    uStack_94 = (undefined4)*(undefined8 *)(lVar5 + 0x18c);
    fStack_90 = (float)((ulong)*(undefined8 *)(lVar5 + 0x18c) >> 0x20);
    iVar4 = Atlas_Gameplay_Kart_DriftBoostLevel__IsValid(&uStack_a0,0);
    fVar21 = fStack_88;
    fVar14 = fStack_8c;
    fVar13 = fStack_90;
    if (iVar4 == 0) {
      fVar21 = fVar20;
      fVar14 = fVar19;
      fVar13 = fVar18;
    }
    fVar18 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar11,0xbf800000,0x3f800000,0);
    if ((*(long *)(param_2 + 0x28) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar5 == 0)) goto LAB_015db4b8;
    lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
    fVar11 = *(float *)(lVar5 + 0x6c);
    fVar19 = -(fVar21 - fVar13);
    if (0.0 <= fVar11) {
      fVar19 = fVar14 - fVar21;
    }
    fVar20 = -(fVar14 - fVar21);
    if (0.0 <= fVar11) {
      fVar14 = fVar13;
      fVar20 = fVar21 - fVar13;
    }
    fVar21 = fVar21 + fVar18 * fVar19;
    if (fVar18 < 0.0) {
      fVar21 = fVar14 + (1.0 - ABS(fVar18)) * fVar20;
    }
    fVar14 = (float)/*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(fVar21,fVar13,0);
    fVar11 = fVar11 * fVar14;
  }
  *(float *)(param_2 + 0x4c) = fVar11;
  *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
  if (*(char *)(param_2 + 0x24) != '\0') {
    uVar12 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(*(undefined4 *)(param_2 + 0x40),0);
    *(undefined4 *)(param_2 + 0x50) = uVar12;
  }
  *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
  fVar14 = *(float *)(param_2 + 0x3c);
  fVar11 = *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x68) = fVar14;
  *(float *)(param_2 + 0x6c) = fVar11;
  lVar5 = *(long *)(param_2 + 0x18);
  if (0.0 <= fVar11) {
    if (lVar5 == 0) goto LAB_015db4b8;
    pfVar9 = (float *)(lVar5 + 0x14);
    pfVar7 = (float *)(lVar5 + 0x18);
  }
  else {
    if (lVar5 == 0) goto LAB_015db4b8;
    pfVar9 = (float *)(lVar5 + 0x1c);
    pfVar7 = (float *)(lVar5 + 0x20);
  }
  fVar13 = *pfVar9;
  fVar21 = ABS(fVar11) - fVar13;
  if ((0.0 < fVar21) &&
     (fVar18 = (float)_tanf(*pfVar7 * _UNK_033f850c), ABS(fVar14) < fVar21 * fVar18)) {
    fVar11 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar11,0);
    uVar15 = /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(fVar13,0x3f800000,ABS(*(float *)(param_2 + 0x40)),0);
    fVar14 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uVar15,0,0x3f800000,0);
    *(float *)(param_2 + 0x6c) = fVar11 * fVar14;
    fVar11 = *(float *)(param_2 + 0x40);
  }
  auVar17 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(-fVar11,0,0);
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar5 == 0) goto LAB_015db4b8;
  fVar11 = *(float *)(lVar5 + 0x24);
  if (auVar17._0_4_ <= fVar11) {
    return auVar17;
  }
  fVar14 = (float)_tanf(*(float *)(lVar5 + 0x28) * _UNK_033f850c);
  fVar14 = (auVar17._0_4_ - fVar11) * fVar14;
  if (fVar14 <= ABS(*pfVar10)) {
    return ZEXT416((uint)fVar14);
  }
  uVar15 = /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(fVar11,0x3f800000,auVar17._0_8_ & 0xffffffff,0);
  uVar12 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uVar15,0,0x3f800000,0);
  if ((*(long *)(param_2 + 0x28) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x10), lVar5 == 0)) goto LAB_015db4b8;
  lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
  if ((0.5 < *(float *)(lVar5 + 4)) || (*(char *)(param_2 + 0x21) != '\0')) {
    puVar8 = (undefined4 *)(param_2 + 0x5c);
  }
  else {
    puVar8 = (undefined4 *)(param_2 + 0x54);
  }
  *puVar8 = uVar12;
  if ((fVar22 <= 0.0) || (*(char *)(param_2 + 0x20) == '\0')) {
    uVar16 = (ulong)(uint)*(float *)(param_2 + 0x5c);
    if (0.0 < *(float *)(param_2 + 0x5c)) goto code_r0x015db484;
  }
  else {
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  uVar16 = CONCAT44(0,*(float *)(param_2 + 0x54));
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar16;
  if (*(float *)(param_2 + 0x54) <= 0.0) {
    return auVar17;
  }
code_r0x015db484:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar16;
  *(undefined4 *)(param_2 + 0x50) = 0;
  return auVar1;
}



// ============================================================
// RVA: 0x15db4f8 | Atlas.Gameplay.Kart.KartPhysicsInput.GetInputAI
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__GetInputAI(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar3 + 0x14);
    *(int *)(param_1 + 0x5c) = (int)*(undefined8 *)(lVar3 + 0x18);
    *(int *)(param_1 + 0x48) = (int)*(undefined8 *)(lVar3 + 0x10);
    uVar1 = *(undefined4 *)(lVar3 + 0x10);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    uVar4 = NEON_fminnm(*(undefined4 *)(lVar3 + 0x14),0);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    fVar5 = *(float *)(lVar3 + 0x14);
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x50) = fVar5;
    *(float *)(param_1 + 0x58) = fVar5;
    uVar4 = 0;
    if (*(char *)(lVar3 + 0x1d) != '\0') {
      uVar4 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(bool *)(param_1 + 100) = *(char *)(lVar3 + 0x1c) != '\0';
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    if (*(char *)(param_1 + 0x23) == '\0') {
      bVar2 = *(char *)(lVar3 + 0x1e) != '\0';
    }
    else {
      bVar2 = false;
    }
    *(bool *)(param_1 + 0x65) = bVar2;
  }
  return;
}



// ============================================================
// RVA: 0x15db590 | Atlas.Gameplay.Kart.KartPhysicsInput.GetLimitedSteering
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__GetLimitedSteering
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar14 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (*(int *)(param_3 + 0x10) == 2) {
      Atlas_Gameplay_Kart_KartPhysicsInput__GetInput
                ((undefined1 *)((long)register0x00000008 + -0x58),param_3);
      param_2 = 0xbf800000;
      uVar11 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(*(undefined4 *)((long)register0x00000008 + -0x58),0xbf800000,
                               0x3f800000,0);
      *(undefined4 *)(param_3 + 0x48) = uVar11;
      *(undefined4 *)(param_3 + 0x4c) = uVar11;
LAB_015db5f8:
      if (((*(long *)(param_3 + 0x28) != 0) &&
          (lVar5 = *(long *)(*(long *)(param_3 + 0x28) + 0x10), lVar5 != 0)) &&
         (lVar5 = *(long *)(lVar5 + 0x40), lVar5 != 0)) {
        fVar8 = *(float *)(param_3 + 0x4c);
        fVar13 = ABS(fVar8);
        fVar10 = 0.0;
        fVar12 = 1.0;
        if (fVar8 == 0.0 || 0.0 > fVar8) {
          fVar12 = fVar10;
        }
        fVar9 = 1.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar10;
        }
        fVar8 = *(float *)(lVar5 + 0x1a0);
        iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar13,0);
        if (iVar1 == 0 && fVar13 <= fVar8) {
          fVar8 = fVar13;
        }
        iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar8,0);
        if (iVar1 == 0 && 0.0 <= fVar8) {
          fVar10 = fVar8;
        }
        *(float *)(param_3 + 0x4c) = (fVar12 - fVar9) * fVar10;
        return;
      }
    }
    else {
      if (*(int *)(param_3 + 0x10) != 1) goto LAB_015db5f8;
      if (*(long *)(param_3 + 0x30) != 0) {
        uVar11 = *(undefined4 *)(*(long *)(param_3 + 0x30) + 0x10);
        *(undefined4 *)(param_3 + 0x48) = uVar11;
        *(undefined4 *)(param_3 + 0x4c) = uVar11;
        goto LAB_015db5f8;
      }
    }
    auVar14 = func_0x00f78af4();
    plVar4 = auVar14._8_8_;
    lVar5 = auVar14._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x78) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_Gameplay_Kart_KartPhysicsInput__Update;
    if ((bRam0000000003eb539b & 1) == 0) {
      func_0x00f78a20(0x3d22618);
      bRam0000000003eb539b = 1;
    }
    if (*(char *)(lVar5 + 0x78) == '\0') {
      return;
    }
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x5e) = 0;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    uVar11 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
    *(undefined4 *)(lVar5 + 0x68) = uVar11;
    *(undefined4 *)(lVar5 + 0x6c) = param_2;
    if (*(char *)(lVar5 + 0x84) == '\0') {
      if (*(char *)(lVar5 + 0x85) != '\0') {
        *(undefined4 *)(lVar5 + 0x5c) = 0x3f800000;
        return;
      }
      uVar2 = /*Atlas.Gameplay.Kart.KartPhysicsInput$$IsInputBlocked*/ func_0x015db830(lVar5);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (*(int *)(lVar5 + 0x10) != 2) {
        if (*(int *)(lVar5 + 0x10) == 1) {
          Atlas_Gameplay_Kart_KartPhysicsInput__GetInputAI(lVar5);
        }
        goto code_r0x015db7c8;
      }
      if (plVar4 == (long *)0x0) {
        puVar3 = (undefined8 *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(long *)((long)register0x00000008 + -0xa8) = lVar5;
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x70);
        *(undefined **)((long)register0x00000008 + -0x98) =
             &Atlas_Gameplay_Kart_KartPhysicsInputData__Reset;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined8 *)((long)puVar3 + 0x16) = 0;
        puVar3[2] = 0;
        uVar11 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
        *(undefined4 *)(puVar3 + 4) = uVar11;
        *(undefined4 *)((long)puVar3 + 0x24) = param_2;
        return;
      }
      lVar6 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar2 == 0) goto code_r0x015db798;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    *(undefined4 *)(lVar5 + 0x5c) = 0x3f800000;
    if (*(char *)(lVar5 + 0x85) != '\0') {
      return;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_3 = lVar5;
  } while( true );
  while( true ) {
    piVar7 = piVar7 + 4;
    uVar2 = uVar2 - 1;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto code_r0x015db7b4;
    }
  }
code_r0x015db798:
  puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015db7b4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  Atlas_Gameplay_Kart_KartPhysicsInput__GetPlayerInput(lVar5);
code_r0x015db7c8:
  if (*(char *)(lVar5 + 0x86) != '\0') {
    *(undefined4 *)(lVar5 + 0x5c) = 0x3f800000;
    *(undefined4 *)(lVar5 + 0x50) = 0;
  }
  if (*(char *)(lVar5 + 0x21) != '\0') {
    *(undefined4 *)(lVar5 + 0x54) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x15db698 | Atlas.Gameplay.Kart.KartPhysicsInput.Update
// ============================================================

void Atlas_Gameplay_Kart_KartPhysicsInput__Update
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_4;
  auVar14._0_8_ = param_3;
  while( true ) {
    plVar5 = auVar14._8_8_;
    lVar2 = auVar14._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb539b & 1) == 0) {
      func_0x00f78a20(0x3d22618);
      bRam0000000003eb539b = 1;
    }
    if (*(char *)(lVar2 + 0x78) == '\0') {
      return;
    }
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x5e) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    uVar11 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
    *(undefined4 *)(lVar2 + 0x68) = uVar11;
    *(undefined4 *)(lVar2 + 0x6c) = param_2;
    if (*(char *)(lVar2 + 0x84) == '\0') break;
    *(undefined4 *)(lVar2 + 0x5c) = 0x3f800000;
    if (*(char *)(lVar2 + 0x85) != '\0') {
      return;
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(int *)(lVar2 + 0x10) == 2) {
      Atlas_Gameplay_Kart_KartPhysicsInput__GetInput
                ((undefined1 *)((long)register0x00000008 + -0x58),lVar2);
      param_2 = 0xbf800000;
      uVar11 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(*(undefined4 *)((long)register0x00000008 + -0x58),0xbf800000,
                               0x3f800000,0);
      *(undefined4 *)(lVar2 + 0x48) = uVar11;
      *(undefined4 *)(lVar2 + 0x4c) = uVar11;
LAB_015db5f8:
      if (((*(long *)(lVar2 + 0x28) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar2 + 0x28) + 0x10), lVar6 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
        fVar8 = *(float *)(lVar2 + 0x4c);
        fVar13 = ABS(fVar8);
        fVar10 = 0.0;
        fVar12 = 1.0;
        if (fVar8 == 0.0 || 0.0 > fVar8) {
          fVar12 = fVar10;
        }
        fVar9 = 1.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar10;
        }
        fVar8 = *(float *)(lVar6 + 0x1a0);
        iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar13,0);
        if (iVar1 == 0 && fVar13 <= fVar8) {
          fVar8 = fVar13;
        }
        iVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar8,0);
        if (iVar1 == 0 && 0.0 <= fVar8) {
          fVar10 = fVar8;
        }
        *(float *)(lVar2 + 0x4c) = (fVar12 - fVar9) * fVar10;
        return;
      }
    }
    else {
      if (*(int *)(lVar2 + 0x10) != 1) goto LAB_015db5f8;
      if (*(long *)(lVar2 + 0x30) != 0) {
        uVar11 = *(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x10);
        *(undefined4 *)(lVar2 + 0x48) = uVar11;
        *(undefined4 *)(lVar2 + 0x4c) = uVar11;
        goto LAB_015db5f8;
      }
    }
    unaff_x30 = Atlas_Gameplay_Kart_KartPhysicsInput__Update;
    auVar14 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = lVar2;
  }
  if (*(char *)(lVar2 + 0x85) == '\0') {
    uVar3 = /*Atlas.Gameplay.Kart.KartPhysicsInput$$IsInputBlocked*/ func_0x015db830(lVar2);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(lVar2 + 0x10) == 2) {
        if (plVar5 == (long *)0x0) {
          puVar4 = (undefined8 *)func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
          *(long *)((long)register0x00000008 + -0x48) = lVar2;
          *(undefined1 **)((long)register0x00000008 + -0x40) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x38) =
               &Atlas_Gameplay_Kart_KartPhysicsInputData__Reset;
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined8 *)((long)puVar4 + 0x16) = 0;
          puVar4[2] = 0;
          uVar11 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(undefined4 *)(puVar4 + 4) = uVar11;
          *(undefined4 *)((long)puVar4 + 0x24) = param_2;
          return;
        }
        lVar6 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x015db7b4;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015db7b4:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
        Atlas_Gameplay_Kart_KartPhysicsInput__GetPlayerInput(lVar2);
      }
      else if (*(int *)(lVar2 + 0x10) == 1) {
        Atlas_Gameplay_Kart_KartPhysicsInput__GetInputAI(lVar2);
      }
      if (*(char *)(lVar2 + 0x86) != '\0') {
        *(undefined4 *)(lVar2 + 0x5c) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x50) = 0;
      }
      if (*(char *)(lVar2 + 0x21) != '\0') {
        *(undefined4 *)(lVar2 + 0x54) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x5c) = 0x3f800000;
  }
  return;
}



// ============================================================
// RVA: 0x15db830 | Atlas.Gameplay.Kart.KartPhysicsInput.IsInputBlocked
// ============================================================

ulong Atlas_Gameplay_Kart_KartPhysicsInput__IsInputBlocked
                (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (((*(long *)(param_3 + 0x28) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_3 + 0x28) + 0x78), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0xd0), lVar2 != 0)) {
    uVar1 = /*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(lVar2,0);
    if ((uVar1 & 1) == 0) {
      if (((*(long *)(param_3 + 0x28) == 0) ||
          (lVar2 = *(long *)(*(long *)(param_3 + 0x28) + 0x10), lVar2 == 0)) ||
         (lVar2 = *(long *)(lVar2 + 0x60), lVar2 == 0)) goto LAB_015db8c0;
      if (((*(float *)(lVar2 + 0x8c) <= 0.0) && (*(float *)(lVar2 + 0x94) <= 0.0)) &&
         (*(float *)(lVar2 + 0xa8) <= 0.0)) {
        return (ulong)(0.0 < *(float *)(lVar2 + 0xa0));
      }
    }
    return 1;
  }
LAB_015db8c0:
  uVar1 = func_0x00f78af4();
  uVar3 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(uVar1 + 0x3c) = uVar3;
  *(undefined4 *)(uVar1 + 0x40) = param_2;
  uVar3 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined8 *)(uVar1 + 0x50) = 0;
  *(undefined8 *)(uVar1 + 0x48) = 0;
  *(undefined8 *)(uVar1 + 0x60) = 0;
  *(undefined8 *)(uVar1 + 0x58) = 0;
  *(undefined4 *)(uVar1 + 0x68) = uVar3;
  *(undefined4 *)(uVar1 + 0x6c) = param_2;
  return uVar1;
}



// ============================================================
// RVA: 0x15db8c4 | Atlas.Gameplay.Kart.KartPhysicsInput..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_KartPhysicsInput___ctor
          (undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  uVar1 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined4 *)(param_3 + 0x68) = uVar1;
  *(undefined4 *)(param_3 + 0x6c) = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}



