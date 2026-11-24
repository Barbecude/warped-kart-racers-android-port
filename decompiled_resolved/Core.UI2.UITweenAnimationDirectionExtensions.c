// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UITweenAnimationDirectionExtensions

// ============================================================
// RVA: 0x2f8d654 | Core.UI2.UITweenAnimationDirectionExtensions.GetDirectionVector
// ============================================================

undefined8 Core_UI2_UITweenAnimationDirectionExtensions__GetDirectionVector(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_24;
  
  switch(param_1) {
  case 0:
    uVar1 = 0;
    if ((bRam0000000003ec1ac5 & 1) == 0) {
      uVar1 = func_0x00f78a20(0x3d25978);
      bRam0000000003ec1ac5 = 1;
    }
    break;
  case 1:
    uVar1 = 0;
    if ((bRam0000000003ec1acb & 1) == 0) {
      uVar1 = func_0x00f78a20(0x3d25978);
      bRam0000000003ec1acb = 1;
    }
    return uVar1;
  case 2:
    uVar1 = 0;
    if ((bRam0000000003ec1acc & 1) == 0) {
      uVar1 = func_0x00f78a20(0x3d25978);
      bRam0000000003ec1acc = 1;
    }
    return uVar1;
  case 3:
    uVar1 = 0;
    if ((bRam0000000003ec1ac9 & 1) == 0) {
      uVar1 = func_0x00f78a20(0x3d25978);
      bRam0000000003ec1ac9 = 1;
    }
    return uVar1;
  case 4:
    uVar1 = 0;
    if ((bRam0000000003ec1aca & 1) == 0) {
      uVar1 = func_0x00f78a20(0x3d25978);
      bRam0000000003ec1aca = 1;
    }
    return uVar1;
  default:
    uStack_24 = param_1;
    uVar1 = func_0x00f78a24(0x3d255f0);
    uVar1 = func_0x00f78ae0(uVar1,&uStack_24);
    func_0x00f78a24(0x3d1fcf8);
    uVar2 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d78ba0);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar2,uVar3,uVar1,0,0);
    uVar1 = func_0x00f78a24(0x3d5f750);
    lVar4 = func_0x00f78ac0(uVar2,uVar1);
    return *(undefined8 *)(lVar4 + 0x18);
  }
  return uVar1;
}



