// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0

// ============================================================
// RVA: 0x154eb8c | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x154eb94 | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0
// ============================================================

/* WARNING: Possible PIC construction at 0x0154ec7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0154ec80) */

long Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_g__ChangeFrontEndSceneTypeRoutine_0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((bRam0000000003eb4f87 & 1) == 0) {
    func_0x00f78a20(0x3d29ac0);
    bRam0000000003eb4f87 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d_TypeInfo*/ uRam0000000003d29ac0);
  /*Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d$$.ctor*/ func_0x0156ec54(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_5;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  lVar4 = *(long *)(lVar1 + 0x10);
  if (lVar4 == 0) {
code_r0x0154ec60:
    lVar1 = func_0x00f78af4();
    return lVar1;
  }
  uVar2 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar4,0);
  Atlas_FrontEnd_FrontEndScene__OnIPChanged(lVar4,uVar2,0);
  if ((*(long *)(lVar1 + 0x10) == 0) ||
     (plVar3 = *(long **)(*(long *)(lVar1 + 0x10) + 200), plVar3 == (long *)0x0))
  goto code_r0x0154ec60;
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 != 0) {
    /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetCameraPosition*/ func_0x01595b58(plVar3,*(undefined4 *)(lVar1 + 0x2c),0);
    if (*(char *)(lVar1 + 0x31) == '\0') {
      if (plVar3[7] != 0) {
        Atlas_FrontEnd_FrontEndScene__SetKartHidden(plVar3[7],0,0);
        goto code_r0x01595e0c;
      }
    }
    else {
      lVar4 = plVar3[4];
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
code_r0x01595de0:
        if (plVar3[7] != 0) {
          Atlas_FrontEnd_FrontEndScene__SetKartVisible(plVar3[7],0,0);
code_r0x01595e0c:
                    /* WARNING: Could not recover jumptable at 0x01595e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,lVar1,*(undefined8 *)(*plVar3 + 0x1b0));
          return lVar1;
        }
      }
      else {
        if ((int)*(long *)(lVar4 + 0x18) == 0) goto code_r0x01595e40;
        if (plVar3[7] != 0) {
          lVar5 = *(long *)(lVar4 + 0x20);
          lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(plVar3[7],0,0);
          if ((lVar5 != 0) && (uVar6 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0), lVar4 != 0)) {
            uVar10 = param_2;
            uVar11 = param_3;
            uVar7 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar4,0);
            uVar9 = uVar10;
            uVar12 = uVar11;
            uVar13 = param_4;
            uVar8 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar5,0);
            uVar9 = /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(uVar7,uVar10,uVar11,param_4,uVar8,uVar9,uVar12,uVar13,0);
            /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar6,param_2,param_3,uVar9,uVar10,uVar11,param_4,lVar4,0);
            goto code_r0x01595de0;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x01595e40:
  uVar2 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar2,0);
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar2,uRam0000000003d2e428);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if ((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) == 0) {
    return lVar1;
  }
  if (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) != 0) {
    return lVar1;
  }
  func_0x00f78ad0();
  return lVar1;
}



// ============================================================
// RVA: 0x154ec08 | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<SetFrontEndSceneType>b__1
// ============================================================

/* WARNING: Possible PIC construction at 0x0154ec7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0154ec80) */

undefined1  [16]
Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_b__1
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  lVar5 = *(long *)(param_5 + 0x10);
  if (lVar5 != 0) {
    uVar1 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar5,0);
    Atlas_FrontEnd_FrontEndScene__OnIPChanged(lVar5,uVar1,0);
    if ((*(long *)(param_5 + 0x10) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_5 + 0x10) + 200), plVar2 != (long *)0x0)) {
      lVar5 = *(long *)(param_5 + 0x28);
      if (lVar5 == 0) {
code_r0x01595e3c:
        func_0x00f78af4();
      }
      else {
        /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetCameraPosition*/ func_0x01595b58(plVar2,*(undefined4 *)(lVar5 + 0x2c),0);
        if (*(char *)(lVar5 + 0x31) == '\0') {
          if (plVar2[7] != 0) {
            Atlas_FrontEnd_FrontEndScene__SetKartHidden(plVar2[7],0,0);
            goto code_r0x01595e0c;
          }
          goto code_r0x01595e3c;
        }
        lVar4 = plVar2[4];
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
code_r0x01595de0:
          if (plVar2[7] != 0) {
            Atlas_FrontEnd_FrontEndScene__SetKartVisible(plVar2[7],0,0);
code_r0x01595e0c:
                    /* WARNING: Could not recover jumptable at 0x01595e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar15 = (**(code **)(*plVar2 + 0x1a8))(plVar2,lVar5,*(undefined8 *)(*plVar2 + 0x1b0));
            return auVar15;
          }
          goto code_r0x01595e3c;
        }
        if ((int)*(long *)(lVar4 + 0x18) != 0) {
          if (plVar2[7] != 0) {
            lVar6 = *(long *)(lVar4 + 0x20);
            lVar4 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(plVar2[7],0,0);
            if ((lVar6 != 0) && (uVar7 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0), lVar4 != 0)) {
              uVar11 = param_2;
              uVar12 = param_3;
              uVar8 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar4,0);
              uVar10 = uVar11;
              uVar13 = uVar12;
              uVar14 = param_4;
              uVar9 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar6,0);
              uVar10 = /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(uVar8,uVar11,uVar12,param_4,uVar9,uVar10,uVar13,uVar14,0);
              /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar7,param_2,param_3,uVar10,uVar11,uVar12,param_4,lVar4,0);
              goto code_r0x01595de0;
            }
          }
          goto code_r0x01595e3c;
        }
      }
      uVar1 = func_0x00f78b24();
      uVar3 = func_0x00f78ac0(uVar1,0);
      if ((bRam0000000003eb517d & 1) == 0) {
        func_0x00f78a20(0x3d2e428);
        func_0x00f78a20(0x3d1c210);
        bRam0000000003eb517d = 1;
      }
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
      *(undefined8 *)(uVar3 + 0x40) = uVar1;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      goto code_r0x0294d018;
    }
  }
  uVar3 = func_0x00f78af4();
code_r0x0294d018:
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar3;
  return auVar15;
}



