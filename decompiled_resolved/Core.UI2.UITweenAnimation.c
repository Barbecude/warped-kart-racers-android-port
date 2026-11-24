// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UITweenAnimation

// ============================================================
// RVA: 0x2f8267c | Core.UI2.UITweenAnimation.GetDuration
// ============================================================

undefined4 Core_UI2_UITweenAnimation__GetDuration(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined1 *puVar3;
  
  iVar4 = 0;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    puVar3 = puVar2 + -0x10;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    lVar5 = *(long *)(param_2 + 0x38);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 < 1) {
        return param_1;
      }
      iVar6 = 0;
      while (iVar1 != iVar6) {
        uVar7 = *(undefined8 *)(lVar5 + (long)iVar6 * 8 + 0x20);
        if ((int)uVar7 == iVar4) {
          return (int)((ulong)uVar7 >> 0x20);
        }
        iVar6 = iVar6 + 1;
        if (iVar1 == iVar6) {
          return param_1;
        }
      }
      uVar7 = func_0x00f78b24();
      func_0x00f78ac0(uVar7,0);
    }
    unaff_x30 = &Core_UI2_UITweenAnimation__GetRotationAngle;
    param_2 = func_0x00f78af4();
    iVar4 = 1;
    puVar2 = puVar2 + -0x10;
    unaff_x29 = puVar3;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x2f8d560 | Core.UI2.UITweenAnimation.get_StartAtOffsetSecs
// ============================================================

undefined4 Core_UI2_UITweenAnimation__get_StartAtOffsetSecs(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x2f8d568 | Core.UI2.UITweenAnimation.get_StartAfterGroup
// ============================================================

undefined8 Core_UI2_UITweenAnimation__get_StartAfterGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x2f8d570 | Core.UI2.UITweenAnimation.get_TweenType
// ============================================================

undefined4 Core_UI2_UITweenAnimation__get_TweenType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x2f8d578 | Core.UI2.UITweenAnimation.get_Direction
// ============================================================

undefined4 Core_UI2_UITweenAnimation__get_Direction(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x2f8d580 | Core.UI2.UITweenAnimation.GetEaseOverrideOrDefault
// ============================================================

int Core_UI2_UITweenAnimation__GetEaseOverrideOrDefault(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = param_2;
  if (iVar3 != 0x25) {
    iVar1 = iVar3;
  }
  iVar2 = param_2;
  if (iVar3 != 0x24) {
    iVar2 = iVar1;
  }
  if (iVar3 != 0) {
    param_2 = iVar2;
  }
  return param_2;
}



// ============================================================
// RVA: 0x2f8d5a0 | Core.UI2.UITweenAnimation.get_TweenParams
// ============================================================

undefined8 Core_UI2_UITweenAnimation__get_TweenParams(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x2f8d5a8 | Core.UI2.UITweenAnimation.get_LeafFillDirection
// ============================================================

undefined4 Core_UI2_UITweenAnimation__get_LeafFillDirection(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x2f8d5b0 | Core.UI2.UITweenAnimation.get_LeafStaggerInterval
// ============================================================

undefined4 Core_UI2_UITweenAnimation__get_LeafStaggerInterval(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ============================================================
// RVA: 0x2f8d5b8 | Core.UI2.UITweenAnimation.GetParam
// ============================================================

undefined4 Core_UI2_UITweenAnimation__GetParam(undefined4 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  
  do {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    lVar3 = *(long *)(param_2 + 0x38);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 < 1) {
        return param_1;
      }
      iVar4 = 0;
      while (iVar1 != iVar4) {
        uVar5 = *(undefined8 *)(lVar3 + (long)iVar4 * 8 + 0x20);
        if ((int)uVar5 == param_3) {
          return (int)((ulong)uVar5 >> 0x20);
        }
        iVar4 = iVar4 + 1;
        if (iVar1 == iVar4) {
          return param_1;
        }
      }
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
    unaff_x30 = &Core_UI2_UITweenAnimation__GetRotationAngle;
    param_2 = func_0x00f78af4();
    param_3 = 1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x2f8d628 | Core.UI2.UITweenAnimation.GetRotationAngle
// ============================================================

undefined4 Core_UI2_UITweenAnimation__GetRotationAngle(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 extraout_s0;
  
  do {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar3 = *(long *)(param_2 + 0x38);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 < 1) {
        return param_1;
      }
      iVar4 = 0;
      while (iVar1 != iVar4) {
        uVar5 = *(undefined8 *)(lVar3 + (long)iVar4 * 8 + 0x20);
        if ((int)uVar5 == 1) {
          return (int)((ulong)uVar5 >> 0x20);
        }
        iVar4 = iVar4 + 1;
        if (iVar1 == iVar4) {
          return param_1;
        }
      }
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
    unaff_x30 = Core_UI2_UITweenAnimation__GetRotationAngle;
    param_2 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x2f8d630 | Core.UI2.UITweenAnimation.GetOvershoot
// ============================================================

undefined4 Core_UI2_UITweenAnimation__GetOvershoot(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 extraout_s0;
  undefined1 *puVar3;
  
  iVar4 = 2;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    puVar3 = puVar2 + -0x10;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    lVar5 = *(long *)(param_2 + 0x38);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 < 1) {
        return param_1;
      }
      iVar6 = 0;
      while (iVar1 != iVar6) {
        uVar7 = *(undefined8 *)(lVar5 + (long)iVar6 * 8 + 0x20);
        if ((int)uVar7 == iVar4) {
          return (int)((ulong)uVar7 >> 0x20);
        }
        iVar6 = iVar6 + 1;
        if (iVar1 == iVar6) {
          return param_1;
        }
      }
      uVar7 = func_0x00f78b24();
      func_0x00f78ac0(uVar7,0);
    }
    unaff_x30 = Core_UI2_UITweenAnimation__GetRotationAngle;
    param_2 = func_0x00f78af4();
    iVar4 = 1;
    puVar2 = puVar2 + -0x10;
    unaff_x29 = puVar3;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x2f8d638 | Core.UI2.UITweenAnimation.GetMoveDistance
// ============================================================

undefined4 Core_UI2_UITweenAnimation__GetMoveDistance(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 extraout_s0;
  undefined1 *puVar3;
  
  iVar4 = 3;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    puVar3 = puVar2 + -0x10;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    lVar5 = *(long *)(param_2 + 0x38);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 < 1) {
        return param_1;
      }
      iVar6 = 0;
      while (iVar1 != iVar6) {
        uVar7 = *(undefined8 *)(lVar5 + (long)iVar6 * 8 + 0x20);
        if ((int)uVar7 == iVar4) {
          return (int)((ulong)uVar7 >> 0x20);
        }
        iVar6 = iVar6 + 1;
        if (iVar1 == iVar6) {
          return param_1;
        }
      }
      uVar7 = func_0x00f78b24();
      func_0x00f78ac0(uVar7,0);
    }
    unaff_x30 = Core_UI2_UITweenAnimation__GetRotationAngle;
    param_2 = func_0x00f78af4();
    iVar4 = 1;
    puVar2 = puVar2 + -0x10;
    unaff_x29 = puVar3;
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x2f8d640 | Core.UI2.UITweenAnimation..ctor
// ============================================================

void Core_UI2_UITweenAnimation___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0x3e4ccccd;
  return;
}



