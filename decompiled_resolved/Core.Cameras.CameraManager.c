// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Cameras.CameraManager

// ============================================================
// RVA: 0x1639f08 | Core.Cameras.CameraManager.get_NullCamera
// ============================================================

undefined8 Core_Cameras_CameraManager__get_NullCamera(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1639f10 | Core.Cameras.CameraManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01639f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163a078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01639f4c) */
/* WARNING: Removing unreachable block (ram,0x01639f54) */
/* WARNING: Removing unreachable block (ram,0x01639f98) */
/* WARNING: Removing unreachable block (ram,0x01639f60) */
/* WARNING: Removing unreachable block (ram,0x0163a07c) */
/* WARNING: Removing unreachable block (ram,0x0163a08c) */
/* WARNING: Removing unreachable block (ram,0x0163a094) */
/* WARNING: Removing unreachable block (ram,0x0163a098) */
/* WARNING: Removing unreachable block (ram,0x0163a0ac) */
/* WARNING: Removing unreachable block (ram,0x0163a100) */
/* WARNING: Removing unreachable block (ram,0x0163a0b4) */
/* WARNING: Removing unreachable block (ram,0x0163a0cc) */
/* WARNING: Removing unreachable block (ram,0x0163a0d4) */
/* WARNING: Removing unreachable block (ram,0x0163a0d8) */
/* WARNING: Removing unreachable block (ram,0x0163a0e8) */

long Core_Cameras_CameraManager__Init(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 ****ppppuVar6;
  undefined *puVar7;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  lVar3 = param_1;
  if ((bRam0000000003eb56c2 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d1f338);
    bRam0000000003eb56c2 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return lVar3;
  }
  uStack_40 = 0x3eb5000;
  uStack_28 = 0x1639f4c;
  lStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb56ce & 1) == 0) {
    func_0x00f78a20(0x3d204e0);
    func_0x00f78a20(0x3d70778);
    bRam0000000003eb56ce = 1;
  }
  if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*Core.Cameras.CameraManager$$CreateCamera*/ func_0x0163b2b4(/*STR('NullCamera')*/ uRam0000000003d70778);
  if (lVar3 == 0) {
    lVar4 = func_0x00f78af4();
    puStack_48 = &Core_Cameras_CameraManager__DeInit;
    pppuStack_80 = &ppuStack_50;
    lVar3 = lVar4;
    ppuStack_50 = &puStack_30;
    if ((bRam0000000003eb56c3 & 1) == 0) {
      lVar3 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb56c3 = 1;
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      return lVar3;
    }
    uStack_90 = 0x3eb5000;
    puStack_78 = &UNK_0163a07c;
    ppppuVar6 = &pppuStack_80;
    lStack_88 = lVar4;
    if ((bRam0000000003eb56cf & 1) == 0) {
      func_0x00f78a20(0x3d3ce18);
      bRam0000000003eb56cf = 1;
    }
    /*Core.Cameras.CameraManager$$SetNoActiveCamera*/ func_0x0163aa20(lVar4);
    lVar3 = *(long *)(lVar4 + 0x28);
    if (lVar3 == 0) {
      puVar7 = &Core_Cameras_CameraManager__GetActiveCamera;
      lVar3 = func_0x00f78af4();
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      puVar1 = &uStack_90;
      do {
        *(undefined8 *)((long)puVar1 + -0x20) = 0x3eb5000;
        *(long *)((long)puVar1 + -0x18) = lVar4;
        *(undefined1 *****)((long)puVar1 + -0x10) = ppppuVar6;
        *(undefined **)((long)puVar1 + -8) = puVar7;
        ppppuVar6 = (undefined1 ****)((long)puVar1 + -0x10);
        *(undefined8 *)((long)puVar1 + -0x30) = 0;
        *(undefined8 *)((long)puVar1 + -0x28) = 0;
        lVar4 = 0;
        iVar2 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(lVar3,uVar5,(undefined1 *)((long)puVar1 + -0x30));
        if (iVar2 == 0) {
          return 0;
        }
        lVar3 = *(long *)((long)puVar1 + -0x28);
        if (lVar3 == 0) {
          func_0x00f78af4();
        }
        else if (*(int *)(lVar3 + 0x18) != 0) {
          return *(long *)(lVar3 + 0x20);
        }
        uVar5 = func_0x00f78b24();
        puVar7 = &Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
        lVar3 = func_0x00f78ac0(uVar5,0);
        uVar5 = *(undefined8 *)(lVar3 + 0x20);
        puVar1 = (undefined8 *)((long)puVar1 + -0x30);
      } while( true );
    }
    lVar4 = lVar3;
    if (0 < *(int *)(lVar3 + 0x18)) {
      lVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
      *(undefined4 *)(lVar3 + 0x18) = 0;
    }
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    return lVar4;
  }
  /*UnityEngine.Camera$$set_depth*/ func_0x0321d9a4(0xc2c80000,lVar3,0);
  return lVar3;
}



// ============================================================
// RVA: 0x1639f9c | Core.Cameras.CameraManager.CreateNullCamera
// ============================================================

/* WARNING: Possible PIC construction at 0x0163a078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163a07c) */
/* WARNING: Removing unreachable block (ram,0x0163a08c) */
/* WARNING: Removing unreachable block (ram,0x0163a094) */
/* WARNING: Removing unreachable block (ram,0x0163a098) */
/* WARNING: Removing unreachable block (ram,0x0163a0ac) */
/* WARNING: Removing unreachable block (ram,0x0163a100) */
/* WARNING: Removing unreachable block (ram,0x0163a0b4) */
/* WARNING: Removing unreachable block (ram,0x0163a0cc) */
/* WARNING: Removing unreachable block (ram,0x0163a0d4) */
/* WARNING: Removing unreachable block (ram,0x0163a0d8) */
/* WARNING: Removing unreachable block (ram,0x0163a0e8) */

long Core_Cameras_CameraManager__CreateNullCamera(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 ***pppuVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb56ce & 1) == 0) {
    func_0x00f78a20(0x3d204e0);
    func_0x00f78a20(0x3d70778);
    bRam0000000003eb56ce = 1;
  }
  if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*Core.Cameras.CameraManager$$CreateCamera*/ func_0x0163b2b4(/*STR('NullCamera')*/ uRam0000000003d70778);
  if (lVar3 != 0) {
    /*UnityEngine.Camera$$set_depth*/ func_0x0321d9a4(0xc2c80000,lVar3,0);
    return lVar3;
  }
  lVar4 = func_0x00f78af4();
  puStack_28 = &Core_Cameras_CameraManager__DeInit;
  ppuStack_60 = &puStack_30;
  lVar3 = lVar4;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb56c3 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb56c3 = 1;
  }
  if (*(char *)(lVar4 + 0x10) != '\0') {
    uStack_70 = 0x3eb5000;
    puStack_58 = &UNK_0163a07c;
    pppuVar6 = &ppuStack_60;
    lStack_68 = lVar4;
    if ((bRam0000000003eb56cf & 1) == 0) {
      func_0x00f78a20(0x3d3ce18);
      bRam0000000003eb56cf = 1;
    }
    /*Core.Cameras.CameraManager$$SetNoActiveCamera*/ func_0x0163aa20(lVar4);
    lVar3 = *(long *)(lVar4 + 0x28);
    if (lVar3 == 0) {
      puVar7 = &Core_Cameras_CameraManager__GetActiveCamera;
      lVar3 = func_0x00f78af4();
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      puVar1 = &uStack_70;
      do {
        *(undefined8 *)((long)puVar1 + -0x20) = 0x3eb5000;
        *(long *)((long)puVar1 + -0x18) = lVar4;
        *(undefined1 ****)((long)puVar1 + -0x10) = pppuVar6;
        *(undefined **)((long)puVar1 + -8) = puVar7;
        pppuVar6 = (undefined1 ***)((long)puVar1 + -0x10);
        *(undefined8 *)((long)puVar1 + -0x30) = 0;
        *(undefined8 *)((long)puVar1 + -0x28) = 0;
        lVar4 = 0;
        iVar2 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(lVar3,uVar5,(undefined1 *)((long)puVar1 + -0x30));
        if (iVar2 == 0) {
          return 0;
        }
        lVar3 = *(long *)((long)puVar1 + -0x28);
        if (lVar3 == 0) {
          func_0x00f78af4();
        }
        else if (*(int *)(lVar3 + 0x18) != 0) {
          return *(long *)(lVar3 + 0x20);
        }
        uVar5 = func_0x00f78b24();
        puVar7 = &Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
        lVar3 = func_0x00f78ac0(uVar5,0);
        uVar5 = *(undefined8 *)(lVar3 + 0x20);
        puVar1 = (undefined8 *)((long)puVar1 + -0x30);
      } while( true );
    }
    lVar4 = lVar3;
    if (0 < *(int *)(lVar3 + 0x18)) {
      lVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
      *(undefined4 *)(lVar3 + 0x18) = 0;
    }
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    return lVar4;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x163a030 | Core.Cameras.CameraManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x0163a078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163a07c) */
/* WARNING: Removing unreachable block (ram,0x0163a08c) */
/* WARNING: Removing unreachable block (ram,0x0163a094) */
/* WARNING: Removing unreachable block (ram,0x0163a098) */
/* WARNING: Removing unreachable block (ram,0x0163a0ac) */
/* WARNING: Removing unreachable block (ram,0x0163a100) */
/* WARNING: Removing unreachable block (ram,0x0163a0b4) */
/* WARNING: Removing unreachable block (ram,0x0163a0cc) */
/* WARNING: Removing unreachable block (ram,0x0163a0d4) */
/* WARNING: Removing unreachable block (ram,0x0163a0d8) */
/* WARNING: Removing unreachable block (ram,0x0163a0e8) */

long Core_Cameras_CameraManager__DeInit(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  if ((bRam0000000003eb56c3 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb56c3 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return lVar3;
  }
  uStack_50 = 0x3eb5000;
  uStack_38 = 0x163a07c;
  ppuVar6 = &puStack_40;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb56cf & 1) == 0) {
    func_0x00f78a20(0x3d3ce18);
    bRam0000000003eb56cf = 1;
  }
  /*Core.Cameras.CameraManager$$SetNoActiveCamera*/ func_0x0163aa20(param_1);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    puVar7 = &Core_Cameras_CameraManager__GetActiveCamera;
    lVar3 = func_0x00f78af4();
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar1 = &uStack_50;
    do {
      *(undefined8 *)((long)puVar1 + -0x20) = 0x3eb5000;
      *(long *)((long)puVar1 + -0x18) = param_1;
      *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar6;
      *(undefined **)((long)puVar1 + -8) = puVar7;
      ppuVar6 = (undefined1 **)((long)puVar1 + -0x10);
      *(undefined8 *)((long)puVar1 + -0x30) = 0;
      *(undefined8 *)((long)puVar1 + -0x28) = 0;
      param_1 = 0;
      iVar2 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(lVar3,uVar5,(undefined1 *)((long)puVar1 + -0x30));
      if (iVar2 == 0) {
        return 0;
      }
      lVar3 = *(long *)((long)puVar1 + -0x28);
      if (lVar3 == 0) {
        func_0x00f78af4();
      }
      else if (*(int *)(lVar3 + 0x18) != 0) {
        return *(long *)(lVar3 + 0x20);
      }
      uVar5 = func_0x00f78b24();
      puVar7 = &Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
      lVar3 = func_0x00f78ac0(uVar5,0);
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      puVar1 = (undefined8 *)((long)puVar1 + -0x30);
    } while( true );
  }
  lVar4 = lVar3;
  if (0 < *(int *)(lVar3 + 0x18)) {
    lVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
    *(undefined4 *)(lVar3 + 0x18) = 0;
  }
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  return lVar4;
}



// ============================================================
// RVA: 0x163a104 | Core.Cameras.CameraManager.UnregisterAllSceneCameras
// ============================================================

long Core_Cameras_CameraManager__UnregisterAllSceneCameras(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar3;
  
  if ((bRam0000000003eb56cf & 1) == 0) {
    func_0x00f78a20(0x3d3ce18);
    bRam0000000003eb56cf = 1;
  }
  /*Core.Cameras.CameraManager$$SetNoActiveCamera*/ func_0x0163aa20(param_1);
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
    puVar8 = &Core_Cameras_CameraManager__GetActiveCamera;
    lVar5 = func_0x00f78af4();
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    puVar1 = &stack0xffffffffffffffe0;
    puVar2 = (undefined1 *)register0x00000008;
    do {
      puVar3 = puVar1;
      *(undefined8 *)(puVar3 + -0x20) = 0x3eb5000;
      *(long *)(puVar3 + -0x18) = param_1;
      *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
      *(undefined **)(puVar3 + -8) = puVar8;
      *(undefined8 *)(puVar3 + -0x30) = 0;
      *(undefined8 *)(puVar3 + -0x28) = 0;
      param_1 = 0;
      iVar4 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(lVar5,uVar7,puVar3 + -0x30);
      if (iVar4 == 0) {
        return 0;
      }
      lVar5 = *(long *)(puVar3 + -0x28);
      if (lVar5 == 0) {
        func_0x00f78af4();
      }
      else if (*(int *)(lVar5 + 0x18) != 0) {
        return *(long *)(lVar5 + 0x20);
      }
      uVar7 = func_0x00f78b24();
      puVar8 = &Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
      lVar5 = func_0x00f78ac0(uVar7,0);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      puVar1 = puVar3 + -0x30;
      puVar2 = puVar3;
    } while( true );
  }
  lVar6 = lVar5;
  if (0 < *(int *)(lVar5 + 0x18)) {
    lVar6 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar5 + 0x10),0,*(int *)(lVar5 + 0x18),0);
    *(undefined4 *)(lVar5 + 0x18) = 0;
  }
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  return lVar6;
}



// ============================================================
// RVA: 0x163a160 | Core.Cameras.CameraManager.GetActiveCamera
// ============================================================

undefined8 Core_Cameras_CameraManager__GetActiveCamera(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x30) = 0;
    *(undefined8 *)(puVar1 + -0x28) = 0;
    iVar2 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(param_1,uVar3,puVar1 + -0x30);
    if (iVar2 == 0) {
      return 0;
    }
    lVar4 = *(long *)(puVar1 + -0x28);
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else if (*(int *)(lVar4 + 0x18) != 0) {
      return *(undefined8 *)(lVar4 + 0x20);
    }
    uVar3 = func_0x00f78b24();
    unaff_x30 = &Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
    param_1 = func_0x00f78ac0(uVar3,0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = puVar1 + -0x30;
    unaff_x19 = 0;
  } while( true );
}



// ============================================================
// RVA: 0x163a16c | Core.Cameras.CameraManager.GetActiveCamera
// ============================================================

undefined8 Core_Cameras_CameraManager__GetActiveCamera(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar4 = param_2;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(ulong *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x30) = 0;
    *(undefined8 *)(puVar1 + -0x28) = 0;
    if (3 < (uint)uVar4) {
      return 0;
    }
    iVar2 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(param_1,uVar3,puVar1 + -0x30);
    if (iVar2 == 0) break;
    lVar5 = *(long *)(puVar1 + -0x28);
    if (lVar5 == 0) {
      func_0x00f78af4();
    }
    else if ((uint)uVar4 < *(uint *)(lVar5 + 0x18)) {
      return *(undefined8 *)(lVar5 + (uVar4 & 0xffffffff) * 8 + 0x20);
    }
    uVar3 = func_0x00f78b24();
    unaff_x30 = &Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
    param_1 = func_0x00f78ac0(uVar3,0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = puVar1 + -0x30;
    param_2 = 0;
    unaff_x19 = uVar4;
  }
  return 0;
}



// ============================================================
// RVA: 0x163a178 | Core.Cameras.CameraManager.GetRegisteredCamera
// ============================================================

undefined8
Core_Cameras_CameraManager__GetRegisteredCamera(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  while( true ) {
    uVar3 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    if (3 < (uint)uVar3) {
      return 0;
    }
    iVar1 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(param_1,param_2,(undefined1 *)((long)register0x00000008 + -0x30));
    if (iVar1 == 0) break;
    lVar4 = *(long *)((long)register0x00000008 + -0x28);
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else if ((uint)uVar3 < *(uint *)(lVar4 + 0x18)) {
      return *(undefined8 *)(lVar4 + (uVar3 & 0xffffffff) * 8 + 0x20);
    }
    uVar2 = func_0x00f78b24();
    unaff_x30 = &Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
    param_1 = func_0x00f78ac0(uVar2,0);
    param_2 = *(undefined8 *)(param_1 + 0x20);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_3 = 0;
    unaff_x19 = uVar3;
  }
  return 0;
}



// ============================================================
// RVA: 0x163a1f4 | Core.Cameras.CameraManager.GetActiveCameraIncludingOverride
// ============================================================

undefined8 Core_Cameras_CameraManager__GetActiveCameraIncludingOverride(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    unaff_x19 = 0;
    iVar1 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(param_1,uVar2,(undefined1 *)((long)register0x00000008 + -0x30));
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = *(long *)((long)register0x00000008 + -0x28);
    if (lVar3 == 0) {
      func_0x00f78af4();
    }
    else if (*(int *)(lVar3 + 0x18) != 0) {
      return *(undefined8 *)(lVar3 + 0x20);
    }
    uVar2 = func_0x00f78b24();
    unaff_x30 = Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
    param_1 = func_0x00f78ac0(uVar2,0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  } while( true );
}



// ============================================================
// RVA: 0x163a200 | Core.Cameras.CameraManager.GetRegisteredCamera
// ============================================================

undefined8 Core_Cameras_CameraManager__GetRegisteredCamera(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x30) = 0;
    *(undefined8 *)(puVar1 + -0x28) = 0;
    iVar2 = /*Core.Cameras.CameraManager$$TryGetCameraData*/ func_0x0163a2e4(param_1,param_2,puVar1 + -0x30);
    if (iVar2 == 0) {
      return 0;
    }
    lVar4 = *(long *)(puVar1 + -0x28);
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else if (*(int *)(lVar4 + 0x18) != 0) {
      return *(undefined8 *)(lVar4 + 0x20);
    }
    uVar3 = func_0x00f78b24();
    unaff_x30 = Core_Cameras_CameraManager__GetActiveCameraIncludingOverride;
    param_1 = func_0x00f78ac0(uVar3,0);
    param_2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = puVar1 + -0x30;
    unaff_x19 = 0;
  } while( true );
}



// ============================================================
// RVA: 0x163a208 | Core.Cameras.CameraManager.GetActiveCameraList
// ============================================================

/* WARNING: Possible PIC construction at 0x0163a258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163a25c) */
/* WARNING: Removing unreachable block (ram,0x0163a264) */
/* WARNING: Removing unreachable block (ram,0x0163a26c) */
/* WARNING: Removing unreachable block (ram,0x0163a278) */
/* WARNING: Removing unreachable block (ram,0x0163a28c) */
/* WARNING: Removing unreachable block (ram,0x0163a2d4) */
/* WARNING: Removing unreachable block (ram,0x0163a294) */
/* WARNING: Removing unreachable block (ram,0x0163a2e0) */
/* WARNING: Removing unreachable block (ram,0x0163a29c) */
/* WARNING: Removing unreachable block (ram,0x0163a2b8) */

ulong Core_Cameras_CameraManager__GetActiveCameraList(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  uint extraout_w1_00;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb56c4 & 1) == 0) {
    func_0x00f78a20(0x3d39f00);
    bRam0000000003eb56c4 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if ((bRam0000000003eb56d2 & 1) == 0) {
    func_0x00f78a20(0x3d33348);
    func_0x00f78a20(0x3d33350);
    func_0x00f78a20(0x3d33358);
    func_0x00f78a20(0x3d3ce20);
    bRam0000000003eb56d2 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar5,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar4 = (long *)___cxa_begin_catch();
        lVar7 = *plVar4;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_a0,uRam0000000003d33348);
        if (lVar7 == 0) {
          return 0;
        }
        func_0x00f78ac0(lVar7,0);
      }
      __Unwind_Resume();
      return (ulong)(extraout_w1_00 < 4);
    }
    /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564(&uStack_a0,*(long *)(param_1 + 0x28),uRam0000000003d3ce20);
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0(&uStack_a0,uRam0000000003d33350);
      if ((uVar2 & 1) == 0) {
        iVar6 = 0x51;
        goto code_r0x0163a3d0;
      }
      if (lStack_90 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x163a41c);
        (*pcVar1)();
      }
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lStack_90,uVar5,5,0);
    } while ((uVar3 & 1) == 0);
    iVar6 = 0x5a;
code_r0x0163a3d0:
    /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_a0,uRam0000000003d33348);
    if (iVar6 == 0x5a) {
      return uVar2;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x163a2e4 | Core.Cameras.CameraManager.TryGetCameraData
// ============================================================

ulong Core_Cameras_CameraManager__TryGetCameraData(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  uint extraout_w1_00;
  int iVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb56d2 & 1) == 0) {
    func_0x00f78a20(0x3d33348);
    func_0x00f78a20(0x3d33350);
    func_0x00f78a20(0x3d33358);
    func_0x00f78a20(0x3d3ce20);
    bRam0000000003eb56d2 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  lStack_40 = 0;
  uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar5 = (long *)___cxa_begin_catch();
        lVar7 = *plVar5;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_50,uRam0000000003d33348);
        if (lVar7 == 0) goto LAB_0163a3f4;
        func_0x00f78ac0(lVar7,0);
      }
      __Unwind_Resume();
      return (ulong)(extraout_w1_00 < 4);
    }
    /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564(&uStack_50,*(long *)(param_1 + 0x28),uRam0000000003d3ce20);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0(&uStack_50,uRam0000000003d33350);
      lVar1 = lStack_38;
      lVar7 = lStack_40;
      if ((uVar3 & 1) == 0) {
        iVar6 = 0x51;
        goto LAB_0163a3d0;
      }
      if (lStack_40 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x163a41c);
        (*pcVar2)();
      }
      uVar4 = /*System.String$$Equals*/ func_0x029caa48(lStack_40,param_2,5,0);
    } while ((uVar4 & 1) == 0);
    param_3[1] = lVar1;
    *param_3 = lVar7;
    iVar6 = 0x5a;
LAB_0163a3d0:
    /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_50,uRam0000000003d33348);
    if (iVar6 == 0x5a) {
      return uVar3;
    }
  }
LAB_0163a3f4:
  *param_3 = 0;
  param_3[1] = 0;
  return 0;
}



// ============================================================
// RVA: 0x163a464 | Core.Cameras.CameraManager.IsValidPlayerIndex
// ============================================================

bool Core_Cameras_CameraManager__IsValidPlayerIndex(undefined8 param_1,uint param_2)

{
  return param_2 < 4;
}



// ============================================================
// RVA: 0x163a470 | Core.Cameras.CameraManager.RegisterSceneCamera
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163a620 | Core.Cameras.CameraManager.IsCameraRegistered
// ============================================================

/* WARNING: Possible PIC construction at 0x0163a6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163a964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163a9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163aa60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ab98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163abb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ac44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163acb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ad34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ad50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163b0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163b6a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163b0bc) */
/* WARNING: Removing unreachable block (ram,0x0163b144) */
/* WARNING: Removing unreachable block (ram,0x0163b14c) */
/* WARNING: Removing unreachable block (ram,0x0163b178) */
/* WARNING: Removing unreachable block (ram,0x0163b184) */
/* WARNING: Removing unreachable block (ram,0x0163b0c0) */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Removing unreachable block (ram,0x0163ad38) */
/* WARNING: Removing unreachable block (ram,0x0163ad48) */
/* WARNING: Removing unreachable block (ram,0x0163ac48) */
/* WARNING: Removing unreachable block (ram,0x0163ac4c) */
/* WARNING: Removing unreachable block (ram,0x0163ac60) */
/* WARNING: Removing unreachable block (ram,0x0163ac78) */
/* WARNING: Removing unreachable block (ram,0x0163ac80) */
/* WARNING: Removing unreachable block (ram,0x0163ac84) */
/* WARNING: Removing unreachable block (ram,0x0163acb8) */
/* WARNING: Removing unreachable block (ram,0x0163acc8) */
/* WARNING: Removing unreachable block (ram,0x0163acd0) */
/* WARNING: Removing unreachable block (ram,0x0163acdc) */
/* WARNING: Removing unreachable block (ram,0x0163acec) */
/* WARNING: Removing unreachable block (ram,0x0163acf4) */
/* WARNING: Removing unreachable block (ram,0x0163acf8) */
/* WARNING: Removing unreachable block (ram,0x0163ad54) */
/* WARNING: Removing unreachable block (ram,0x0163ad60) */
/* WARNING: Removing unreachable block (ram,0x0163ad64) */
/* WARNING: Removing unreachable block (ram,0x0163ad0c) */
/* WARNING: Removing unreachable block (ram,0x0163ad14) */
/* WARNING: Removing unreachable block (ram,0x0163ad80) */
/* WARNING: Removing unreachable block (ram,0x0163ad20) */
/* WARNING: Removing unreachable block (ram,0x0163ad24) */
/* WARNING: Removing unreachable block (ram,0x0163ac98) */
/* WARNING: Removing unreachable block (ram,0x0163aca0) */
/* WARNING: Removing unreachable block (ram,0x0163ad8c) */
/* WARNING: Removing unreachable block (ram,0x0163adc0) */
/* WARNING: Removing unreachable block (ram,0x0163add4) */
/* WARNING: Removing unreachable block (ram,0x0163ade0) */
/* WARNING: Removing unreachable block (ram,0x0163ade8) */
/* WARNING: Removing unreachable block (ram,0x0163adec) */
/* WARNING: Removing unreachable block (ram,0x0163aec8) */
/* WARNING: Removing unreachable block (ram,0x0163ae00) */
/* WARNING: Removing unreachable block (ram,0x0163ae0c) */
/* WARNING: Removing unreachable block (ram,0x0163ae2c) */
/* WARNING: Removing unreachable block (ram,0x0163ae34) */
/* WARNING: Removing unreachable block (ram,0x0163ae40) */
/* WARNING: Removing unreachable block (ram,0x0163ae5c) */
/* WARNING: Removing unreachable block (ram,0x0163ae64) */
/* WARNING: Removing unreachable block (ram,0x0163ae68) */
/* WARNING: Removing unreachable block (ram,0x0163aea4) */
/* WARNING: Removing unreachable block (ram,0x0163ae7c) */
/* WARNING: Removing unreachable block (ram,0x0163aebc) */
/* WARNING: Removing unreachable block (ram,0x0163aec0) */
/* WARNING: Removing unreachable block (ram,0x0163aecc) */
/* WARNING: Removing unreachable block (ram,0x0163aee0) */
/* WARNING: Removing unreachable block (ram,0x0163aedc) */
/* WARNING: Removing unreachable block (ram,0x0163aee4) */
/* WARNING: Removing unreachable block (ram,0x0163af08) */
/* WARNING: Removing unreachable block (ram,0x0163af40) */
/* WARNING: Removing unreachable block (ram,0x0163afb4) */
/* WARNING: Removing unreachable block (ram,0x0163afbc) */
/* WARNING: Removing unreachable block (ram,0x0163afc4) */
/* WARNING: Removing unreachable block (ram,0x0163afe0) */
/* WARNING: Removing unreachable block (ram,0x0163afec) */
/* WARNING: Removing unreachable block (ram,0x0163b028) */
/* WARNING: Removing unreachable block (ram,0x0163b060) */
/* WARNING: Removing unreachable block (ram,0x0163b068) */
/* WARNING: Removing unreachable block (ram,0x0163b078) */
/* WARNING: Removing unreachable block (ram,0x0163b084) */
/* WARNING: Removing unreachable block (ram,0x0163b08c) */
/* WARNING: Removing unreachable block (ram,0x0163b094) */
/* WARNING: Removing unreachable block (ram,0x0163b0d0) */
/* WARNING: Removing unreachable block (ram,0x0163b0d4) */
/* WARNING: Removing unreachable block (ram,0x0163b0ec) */
/* WARNING: Removing unreachable block (ram,0x0163b10c) */
/* WARNING: Removing unreachable block (ram,0x0163b1ac) */
/* WARNING: Removing unreachable block (ram,0x0163b1e4) */
/* WARNING: Removing unreachable block (ram,0x0163b204) */
/* WARNING: Removing unreachable block (ram,0x0163b210) */
/* WARNING: Removing unreachable block (ram,0x0163b218) */
/* WARNING: Removing unreachable block (ram,0x0163b21c) */
/* WARNING: Removing unreachable block (ram,0x0163b240) */
/* WARNING: Removing unreachable block (ram,0x0163b254) */
/* WARNING: Removing unreachable block (ram,0x0163b25c) */
/* WARNING: Removing unreachable block (ram,0x0163b264) */
/* WARNING: Removing unreachable block (ram,0x0163b270) */
/* WARNING: Removing unreachable block (ram,0x0163b27c) */
/* WARNING: Removing unreachable block (ram,0x0163b2a4) */
/* WARNING: Removing unreachable block (ram,0x0163b2a8) */
/* WARNING: Removing unreachable block (ram,0x0163b2f0) */
/* WARNING: Removing unreachable block (ram,0x0163b334) */
/* WARNING: Removing unreachable block (ram,0x0163b354) */
/* WARNING: Removing unreachable block (ram,0x0163b35c) */
/* WARNING: Removing unreachable block (ram,0x0163b360) */
/* WARNING: Removing unreachable block (ram,0x0163b370) */
/* WARNING: Removing unreachable block (ram,0x0163b378) */
/* WARNING: Removing unreachable block (ram,0x0163b4a0) */
/* WARNING: Removing unreachable block (ram,0x0163b38c) */
/* WARNING: Removing unreachable block (ram,0x0163b394) */
/* WARNING: Removing unreachable block (ram,0x0163b3c0) */
/* WARNING: Removing unreachable block (ram,0x0163b3d8) */
/* WARNING: Removing unreachable block (ram,0x0163b494) */
/* WARNING: Removing unreachable block (ram,0x0163b498) */
/* WARNING: Removing unreachable block (ram,0x0163b4a4) */
/* WARNING: Removing unreachable block (ram,0x0163b4c4) */
/* WARNING: Removing unreachable block (ram,0x0163b4dc) */
/* WARNING: Removing unreachable block (ram,0x0163b4f0) */
/* WARNING: Removing unreachable block (ram,0x0163b5b0) */
/* WARNING: Removing unreachable block (ram,0x0163b5c4) */
/* WARNING: Removing unreachable block (ram,0x0163b658) */
/* WARNING: Removing unreachable block (ram,0x0163b5e0) */
/* WARNING: Removing unreachable block (ram,0x0163b504) */
/* WARNING: Removing unreachable block (ram,0x0163b570) */
/* WARNING: Removing unreachable block (ram,0x0321d15c) */
/* WARNING: Removing unreachable block (ram,0x0321d180) */
/* WARNING: Removing unreachable block (ram,0x0321d194) */
/* WARNING: Removing unreachable block (ram,0x0163b55c) */
/* WARNING: Removing unreachable block (ram,0x0163b44c) */
/* WARNING: Removing unreachable block (ram,0x0163b280) */
/* WARNING: Removing unreachable block (ram,0x0321ecd4) */
/* WARNING: Removing unreachable block (ram,0x0321ecfc) */
/* WARNING: Removing unreachable block (ram,0x0321ed10) */
/* WARNING: Removing unreachable block (ram,0x0163b230) */
/* WARNING: Removing unreachable block (ram,0x0163b118) */
/* WARNING: Removing unreachable block (ram,0x0163b190) */
/* WARNING: Removing unreachable block (ram,0x0163b124) */
/* WARNING: Removing unreachable block (ram,0x0163b0a4) */
/* WARNING: Removing unreachable block (ram,0x0163af50) */
/* WARNING: Removing unreachable block (ram,0x0163af74) */
/* WARNING: Removing unreachable block (ram,0x0163af94) */
/* WARNING: Removing unreachable block (ram,0x0163afa0) */
/* WARNING: Removing unreachable block (ram,0x0163af84) */
/* WARNING: Removing unreachable block (ram,0x0163b65c) */
/* WARNING: Removing unreachable block (ram,0x0163b670) */
/* WARNING: Removing unreachable block (ram,0x0163b680) */
/* WARNING: Removing unreachable block (ram,0x0163ae80) */
/* WARNING: Removing unreachable block (ram,0x0163acac) */
/* WARNING: Removing unreachable block (ram,0x0163ab9c) */
/* WARNING: Removing unreachable block (ram,0x0163abac) */
/* WARNING: Removing unreachable block (ram,0x0163aa64) */
/* WARNING: Removing unreachable block (ram,0x0163aa74) */
/* WARNING: Removing unreachable block (ram,0x0163aa7c) */
/* WARNING: Removing unreachable block (ram,0x0163aa80) */
/* WARNING: Removing unreachable block (ram,0x0163aac0) */
/* WARNING: Removing unreachable block (ram,0x0163aa94) */
/* WARNING: Removing unreachable block (ram,0x0163aa9c) */
/* WARNING: Removing unreachable block (ram,0x0163aad0) */
/* WARNING: Removing unreachable block (ram,0x0163aaa8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x0163a9c0) */
/* WARNING: Removing unreachable block (ram,0x0163a9f0) */
/* WARNING: Removing unreachable block (ram,0x0163a9f8) */
/* WARNING: Removing unreachable block (ram,0x025032a4) */
/* WARNING: Removing unreachable block (ram,0x025032c4) */
/* WARNING: Removing unreachable block (ram,0x025032d0) */
/* WARNING: Removing unreachable block (ram,0x025032e0) */
/* WARNING: Removing unreachable block (ram,0x025032f8) */
/* WARNING: Removing unreachable block (ram,0x02503330) */
/* WARNING: Removing unreachable block (ram,0x02503300) */
/* WARNING: Removing unreachable block (ram,0x02503334) */
/* WARNING: Removing unreachable block (ram,0x025033e4) */
/* WARNING: Removing unreachable block (ram,0x02503360) */
/* WARNING: Removing unreachable block (ram,0x025033f8) */
/* WARNING: Removing unreachable block (ram,0x02503364) */
/* WARNING: Removing unreachable block (ram,0x02503374) */
/* WARNING: Removing unreachable block (ram,0x02503380) */
/* WARNING: Removing unreachable block (ram,0x02503388) */
/* WARNING: Removing unreachable block (ram,0x0250339c) */
/* WARNING: Removing unreachable block (ram,0x025033b8) */
/* WARNING: Removing unreachable block (ram,0x025033d4) */
/* WARNING: Removing unreachable block (ram,0x02503310) */
/* WARNING: Removing unreachable block (ram,0x0163a9c4) */
/* WARNING: Removing unreachable block (ram,0x0163a9cc) */
/* WARNING: Removing unreachable block (ram,0x0163a9d8) */
/* WARNING: Removing unreachable block (ram,0x0163a968) */
/* WARNING: Removing unreachable block (ram,0x0163a96c) */
/* WARNING: Removing unreachable block (ram,0x0163a974) */
/* WARNING: Removing unreachable block (ram,0x0163a97c) */
/* WARNING: Removing unreachable block (ram,0x0163a9dc) */
/* WARNING: Removing unreachable block (ram,0x0163a988) */
/* WARNING: Removing unreachable block (ram,0x0163a98c) */
/* WARNING: Removing unreachable block (ram,0x0163a998) */
/* WARNING: Removing unreachable block (ram,0x0163a9a0) */
/* WARNING: Removing unreachable block (ram,0x0163aa1c) */
/* WARNING: Removing unreachable block (ram,0x0163aa48) */
/* WARNING: Removing unreachable block (ram,0x0163aa5c) */
/* WARNING: Removing unreachable block (ram,0x0163aad4) */
/* WARNING: Removing unreachable block (ram,0x0163aafc) */
/* WARNING: Removing unreachable block (ram,0x0163ab10) */
/* WARNING: Removing unreachable block (ram,0x0163ab28) */
/* WARNING: Removing unreachable block (ram,0x0163ab30) */
/* WARNING: Removing unreachable block (ram,0x0163ab3c) */
/* WARNING: Removing unreachable block (ram,0x0163ab50) */
/* WARNING: Removing unreachable block (ram,0x0163abe4) */
/* WARNING: Removing unreachable block (ram,0x0163ab58) */
/* WARNING: Removing unreachable block (ram,0x0163ab68) */
/* WARNING: Removing unreachable block (ram,0x0163ab70) */
/* WARNING: Removing unreachable block (ram,0x0163ab74) */
/* WARNING: Removing unreachable block (ram,0x0163abb8) */
/* WARNING: Removing unreachable block (ram,0x0163abc8) */
/* WARNING: Removing unreachable block (ram,0x0163abcc) */
/* WARNING: Removing unreachable block (ram,0x0163ab88) */
/* WARNING: Removing unreachable block (ram,0x0163abf0) */
/* WARNING: Removing unreachable block (ram,0x0163ac24) */
/* WARNING: Removing unreachable block (ram,0x0163ac38) */
/* WARNING: Removing unreachable block (ram,0x0163ab8c) */
/* WARNING: Removing unreachable block (ram,0x0321f010) */
/* WARNING: Removing unreachable block (ram,0x0321f034) */
/* WARNING: Removing unreachable block (ram,0x0321f048) */
/* WARNING: Removing unreachable block (ram,0x0163a9b0) */
/* WARNING: Removing unreachable block (ram,0x0163a6e0) */
/* WARNING: Removing unreachable block (ram,0x0163a6e4) */
/* WARNING: Removing unreachable block (ram,0x0163b6a4) */
/* WARNING: Removing unreachable block (ram,0x0163b690) */
/* WARNING: Removing unreachable block (ram,0x0163b6c4) */
/* WARNING: Removing unreachable block (ram,0x0163b6d0) */
/* WARNING: Removing unreachable block (ram,0x0163b724) */
/* WARNING: Removing unreachable block (ram,0x0163b768) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x0163b698) */
/* WARNING: Removing unreachable block (ram,0x0163b6b4) */
/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Cameras_CameraManager__IsCameraRegistered(long param_1,long param_2)

{
  code *pcVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int extraout_w1;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 *puStack_70;
  undefined *puStack_68;
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  piVar2 = aiStack_60;
  puVar11 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb56c6 & 1) == 0) {
    func_0x00f78a20(0x3d33348);
    func_0x00f78a20(0x3d33350);
    func_0x00f78a20(0x3d33358);
    func_0x00f78a20(0x3d3ce20);
    bRam0000000003eb56c6 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar9 = 0x3d33350;
    uVar14 = 0x3d33348;
    /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564(&uStack_50,*(long *)(param_1 + 0x28),uRam0000000003d3ce20);
    uVar3 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0(&uStack_50,uRam0000000003d33350);
    if ((uVar3 & 1) == 0) {
      aiStack_60[0] = 0x40;
      /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_50,uRam0000000003d33348);
      if (aiStack_60[0] != 0x42) {
        uVar3 = 0;
      }
      return uVar3;
    }
    if (lStack_40 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x163a734);
      (*pcVar1)();
    }
    uVar12 = 0x163a6e0;
    lVar6 = lStack_40;
    lVar8 = param_2;
    goto code_r0x029caa48;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    param_2 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_50,uRam0000000003eb5000);
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
  }
  auVar15 = func_0x00f78ac0(param_2,0);
  lVar8 = auVar15._8_8_;
  puStack_68 = &Core_Cameras_CameraManager__ApplySettings;
  ppuVar10 = &puStack_70;
  uVar9 = 0x3d23990;
  puStack_70 = puVar11;
  if ((bRam0000000003eb56d1 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb56d1 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar5 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(lVar8,0);
  lVar6 = 0x3eb5000;
  if (lVar8 == 0) goto code_r0x0163a8ac;
  /*UnityEngine.Camera$$set_layerCullDistances*/ func_0x0321df54(lVar8,*(undefined8 *)(auVar15._0_8_ + 0x40),0);
  uVar3 = /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(lVar8,0,0);
  lVar6 = lVar5;
  switch(*(undefined4 *)(auVar15._0_8_ + 0x48)) {
  case 0:
    if (lVar5 == 0) break;
    uVar7 = 0;
    uVar14 = 0;
    goto code_r0x0163a894;
  case 1:
    if (lVar5 == 0) break;
    uVar14 = 0x100000001;
    goto code_r0x0163a890;
  case 2:
    uVar14 = _UNK_033f8620;
    goto joined_r0x0163a878;
  case 3:
    uVar14 = _UNK_034026a0;
joined_r0x0163a878:
    if (lVar5 != 0) {
code_r0x0163a890:
      uVar7 = 1;
code_r0x0163a894:
      *(undefined8 *)(lVar5 + 0x48) = uVar14;
code_r0x0163a898:
      *(undefined1 *)(lVar5 + 0x44) = uVar7;
      return uVar3;
    }
    break;
  case 4:
    if (lVar5 != 0) {
      uVar14 = 0x200000002;
      goto code_r0x0163a890;
    }
    break;
  default:
    if (lVar5 != 0) {
      uVar7 = 0;
      goto code_r0x0163a898;
    }
  }
code_r0x0163a8ac:
  puVar13 = &Core_Cameras_CameraManager__IsCameraActive;
  auVar16 = func_0x00f78af4();
  piVar2 = (int *)&stack0xffffffffffffff70;
  while( true ) {
    param_2 = auVar16._8_8_;
    uVar14 = auVar15._8_8_;
    *(long *)((long)piVar2 + -0x20) = auVar15._0_8_;
    *(long *)((long)piVar2 + -0x18) = lVar6;
    *(undefined1 ***)((long)piVar2 + -0x10) = ppuVar10;
    *(undefined **)((long)piVar2 + -8) = puVar13;
    uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(auVar16._0_8_ + 0x20),0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar6 = *(long *)(auVar16._0_8_ + 0x20);
    if (lVar6 != 0) break;
    auVar17 = func_0x00f78af4();
    lVar6 = auVar17._0_8_;
    *(undefined8 *)((long)piVar2 + -0x60) = unaff_x24;
    *(undefined8 *)((long)piVar2 + -0x58) = unaff_x23;
    *(undefined8 *)((long)piVar2 + -0x50) = 0x3d23990;
    *(undefined8 *)((long)piVar2 + -0x48) = uVar14;
    *(undefined1 (*) [16])((long)piVar2 + -0x40) = auVar16;
    *(undefined1 **)((long)piVar2 + -0x30) = (undefined1 *)((long)piVar2 + -0x10);
    *(undefined **)((long)piVar2 + -0x28) = &Core_Cameras_CameraManager__UnregisterSceneCamera;
    ppuVar10 = (undefined1 **)((long)piVar2 + -0x30);
    auVar15._8_8_ = 0x3eb5000;
    auVar15._0_8_ = auVar17._8_8_;
    if ((bRam0000000003eb56c7 & 1) == 0) {
      func_0x00f78a20(0x3d3ce28);
      func_0x00f78a20(0x3d3ce30);
      func_0x00f78a20(0x3d3ce38);
      bRam0000000003eb56c7 = 1;
    }
    puVar13 = &UNK_0163a968;
    piVar2 = (int *)((long)piVar2 + -0x60);
    auVar16 = auVar17;
  }
  puVar11 = *(undefined1 **)((long)piVar2 + -0x10);
  uVar12 = *(undefined8 *)((long)piVar2 + -8);
  uVar3 = *(ulong *)((long)piVar2 + -0x20);
  lVar8 = *(long *)((long)piVar2 + -0x18);
code_r0x029caa48:
  *(undefined8 *)((long)piVar2 + -0x30) = uVar9;
  *(undefined8 *)((long)piVar2 + -0x28) = uVar14;
  *(ulong *)((long)piVar2 + -0x20) = uVar3;
  *(long *)((long)piVar2 + -0x18) = lVar8;
  *(undefined1 **)((long)piVar2 + -0x10) = puVar11;
  *(undefined8 *)((long)piVar2 + -8) = uVar12;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,param_2,5,0);
    bRam0000000003eb9443 = 1;
  }
  if (lVar6 == param_2) {
    uVar3 = 1;
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x163a77c | Core.Cameras.CameraManager.ApplySettings
// ============================================================

/* WARNING: Possible PIC construction at 0x0163a964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163a9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163aa60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ab98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163abb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ac44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163acb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ad34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163ad50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163b0b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Removing unreachable block (ram,0x0163ad38) */
/* WARNING: Removing unreachable block (ram,0x0163ad48) */
/* WARNING: Removing unreachable block (ram,0x0163ac48) */
/* WARNING: Removing unreachable block (ram,0x0163ac4c) */
/* WARNING: Removing unreachable block (ram,0x0163ac60) */
/* WARNING: Removing unreachable block (ram,0x0163ac78) */
/* WARNING: Removing unreachable block (ram,0x0163ac80) */
/* WARNING: Removing unreachable block (ram,0x0163ac84) */
/* WARNING: Removing unreachable block (ram,0x0163acb8) */
/* WARNING: Removing unreachable block (ram,0x0163acc8) */
/* WARNING: Removing unreachable block (ram,0x0163acd0) */
/* WARNING: Removing unreachable block (ram,0x0163acdc) */
/* WARNING: Removing unreachable block (ram,0x0163acec) */
/* WARNING: Removing unreachable block (ram,0x0163acf4) */
/* WARNING: Removing unreachable block (ram,0x0163acf8) */
/* WARNING: Removing unreachable block (ram,0x0163ad54) */
/* WARNING: Removing unreachable block (ram,0x0163ad60) */
/* WARNING: Removing unreachable block (ram,0x0163ad64) */
/* WARNING: Removing unreachable block (ram,0x0163ad0c) */
/* WARNING: Removing unreachable block (ram,0x0163ad14) */
/* WARNING: Removing unreachable block (ram,0x0163ad80) */
/* WARNING: Removing unreachable block (ram,0x0163ad20) */
/* WARNING: Removing unreachable block (ram,0x0163ad24) */
/* WARNING: Removing unreachable block (ram,0x0163ac98) */
/* WARNING: Removing unreachable block (ram,0x0163aca0) */
/* WARNING: Removing unreachable block (ram,0x0163ad8c) */
/* WARNING: Removing unreachable block (ram,0x0163adc0) */
/* WARNING: Removing unreachable block (ram,0x0163add4) */
/* WARNING: Removing unreachable block (ram,0x0163ade0) */
/* WARNING: Removing unreachable block (ram,0x0163ade8) */
/* WARNING: Removing unreachable block (ram,0x0163adec) */
/* WARNING: Removing unreachable block (ram,0x0163aec8) */
/* WARNING: Removing unreachable block (ram,0x0163ae00) */
/* WARNING: Removing unreachable block (ram,0x0163ae0c) */
/* WARNING: Removing unreachable block (ram,0x0163ae2c) */
/* WARNING: Removing unreachable block (ram,0x0163ae34) */
/* WARNING: Removing unreachable block (ram,0x0163ae40) */
/* WARNING: Removing unreachable block (ram,0x0163ae5c) */
/* WARNING: Removing unreachable block (ram,0x0163ae64) */
/* WARNING: Removing unreachable block (ram,0x0163ae68) */
/* WARNING: Removing unreachable block (ram,0x0163aea4) */
/* WARNING: Removing unreachable block (ram,0x0163ae7c) */
/* WARNING: Removing unreachable block (ram,0x0163aebc) */
/* WARNING: Removing unreachable block (ram,0x0163aec0) */
/* WARNING: Removing unreachable block (ram,0x0163aecc) */
/* WARNING: Removing unreachable block (ram,0x0163aee0) */
/* WARNING: Removing unreachable block (ram,0x0163aedc) */
/* WARNING: Removing unreachable block (ram,0x0163ae80) */
/* WARNING: Removing unreachable block (ram,0x0163acac) */
/* WARNING: Removing unreachable block (ram,0x0163ab9c) */
/* WARNING: Removing unreachable block (ram,0x0163abac) */
/* WARNING: Removing unreachable block (ram,0x0163aa64) */
/* WARNING: Removing unreachable block (ram,0x0163aa74) */
/* WARNING: Removing unreachable block (ram,0x0163aa7c) */
/* WARNING: Removing unreachable block (ram,0x0163aa80) */
/* WARNING: Removing unreachable block (ram,0x0163aac0) */
/* WARNING: Removing unreachable block (ram,0x0163aa94) */
/* WARNING: Removing unreachable block (ram,0x0163aa9c) */
/* WARNING: Removing unreachable block (ram,0x0163aad0) */
/* WARNING: Removing unreachable block (ram,0x0163aaa8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x0163a9c0) */
/* WARNING: Removing unreachable block (ram,0x0163a9f0) */
/* WARNING: Removing unreachable block (ram,0x0163a9f8) */
/* WARNING: Removing unreachable block (ram,0x025032a4) */
/* WARNING: Removing unreachable block (ram,0x025032c4) */
/* WARNING: Removing unreachable block (ram,0x025032d0) */
/* WARNING: Removing unreachable block (ram,0x025032e0) */
/* WARNING: Removing unreachable block (ram,0x025032f8) */
/* WARNING: Removing unreachable block (ram,0x02503330) */
/* WARNING: Removing unreachable block (ram,0x02503300) */
/* WARNING: Removing unreachable block (ram,0x02503334) */
/* WARNING: Removing unreachable block (ram,0x025033e4) */
/* WARNING: Removing unreachable block (ram,0x02503360) */
/* WARNING: Removing unreachable block (ram,0x025033f8) */
/* WARNING: Removing unreachable block (ram,0x02503364) */
/* WARNING: Removing unreachable block (ram,0x02503374) */
/* WARNING: Removing unreachable block (ram,0x02503380) */
/* WARNING: Removing unreachable block (ram,0x02503388) */
/* WARNING: Removing unreachable block (ram,0x0250339c) */
/* WARNING: Removing unreachable block (ram,0x025033b8) */
/* WARNING: Removing unreachable block (ram,0x025033d4) */
/* WARNING: Removing unreachable block (ram,0x02503310) */
/* WARNING: Removing unreachable block (ram,0x0163a9c4) */
/* WARNING: Removing unreachable block (ram,0x0163a9cc) */
/* WARNING: Removing unreachable block (ram,0x0163a9d8) */
/* WARNING: Removing unreachable block (ram,0x0163a968) */
/* WARNING: Removing unreachable block (ram,0x0163a96c) */
/* WARNING: Removing unreachable block (ram,0x0163a974) */
/* WARNING: Removing unreachable block (ram,0x0163a97c) */
/* WARNING: Removing unreachable block (ram,0x0163a9dc) */
/* WARNING: Removing unreachable block (ram,0x0163a988) */
/* WARNING: Removing unreachable block (ram,0x0163a98c) */
/* WARNING: Removing unreachable block (ram,0x0163a998) */
/* WARNING: Removing unreachable block (ram,0x0163a9a0) */
/* WARNING: Removing unreachable block (ram,0x0163aa1c) */
/* WARNING: Removing unreachable block (ram,0x0163aa48) */
/* WARNING: Removing unreachable block (ram,0x0163aa5c) */
/* WARNING: Removing unreachable block (ram,0x0163aad4) */
/* WARNING: Removing unreachable block (ram,0x0163aafc) */
/* WARNING: Removing unreachable block (ram,0x0163ab10) */
/* WARNING: Removing unreachable block (ram,0x0163ab28) */
/* WARNING: Removing unreachable block (ram,0x0163ab30) */
/* WARNING: Removing unreachable block (ram,0x0163ab3c) */
/* WARNING: Removing unreachable block (ram,0x0163ab50) */
/* WARNING: Removing unreachable block (ram,0x0163abe4) */
/* WARNING: Removing unreachable block (ram,0x0163ab58) */
/* WARNING: Removing unreachable block (ram,0x0163ab68) */
/* WARNING: Removing unreachable block (ram,0x0163ab70) */
/* WARNING: Removing unreachable block (ram,0x0163ab74) */
/* WARNING: Removing unreachable block (ram,0x0163abb8) */
/* WARNING: Removing unreachable block (ram,0x0163abc8) */
/* WARNING: Removing unreachable block (ram,0x0163abcc) */
/* WARNING: Removing unreachable block (ram,0x0163ab88) */
/* WARNING: Removing unreachable block (ram,0x0163abf0) */
/* WARNING: Removing unreachable block (ram,0x0163ac24) */
/* WARNING: Removing unreachable block (ram,0x0163ac38) */
/* WARNING: Removing unreachable block (ram,0x0163ab8c) */
/* WARNING: Removing unreachable block (ram,0x0321f010) */
/* WARNING: Removing unreachable block (ram,0x0321f034) */
/* WARNING: Removing unreachable block (ram,0x0321f048) */
/* WARNING: Removing unreachable block (ram,0x0163a9b0) */
/* WARNING: Removing unreachable block (ram,0x0163b0bc) */
/* WARNING: Removing unreachable block (ram,0x0163b144) */
/* WARNING: Removing unreachable block (ram,0x0163b14c) */
/* WARNING: Removing unreachable block (ram,0x0163b178) */
/* WARNING: Removing unreachable block (ram,0x0163b184) */
/* WARNING: Removing unreachable block (ram,0x0163b0c0) */
/* WARNING: Removing unreachable block (ram,0x0163b0d0) */
/* WARNING: Removing unreachable block (ram,0x0163b0d4) */
/* WARNING: Removing unreachable block (ram,0x0163b0ec) */
/* WARNING: Removing unreachable block (ram,0x0163b10c) */
/* WARNING: Removing unreachable block (ram,0x0163b1ac) */
/* WARNING: Removing unreachable block (ram,0x0163b1e4) */
/* WARNING: Removing unreachable block (ram,0x0163b204) */
/* WARNING: Removing unreachable block (ram,0x0163b210) */
/* WARNING: Removing unreachable block (ram,0x0163b218) */
/* WARNING: Removing unreachable block (ram,0x0163b21c) */
/* WARNING: Removing unreachable block (ram,0x0163b240) */
/* WARNING: Removing unreachable block (ram,0x0163b254) */
/* WARNING: Removing unreachable block (ram,0x0163b25c) */
/* WARNING: Removing unreachable block (ram,0x0163b264) */
/* WARNING: Removing unreachable block (ram,0x0163b270) */
/* WARNING: Removing unreachable block (ram,0x0163b27c) */
/* WARNING: Removing unreachable block (ram,0x0163b2a4) */
/* WARNING: Removing unreachable block (ram,0x0163b2a8) */
/* WARNING: Removing unreachable block (ram,0x0163b2f0) */
/* WARNING: Removing unreachable block (ram,0x0163b334) */
/* WARNING: Removing unreachable block (ram,0x0163b354) */
/* WARNING: Removing unreachable block (ram,0x0163b35c) */
/* WARNING: Removing unreachable block (ram,0x0163b360) */
/* WARNING: Removing unreachable block (ram,0x0163b370) */
/* WARNING: Removing unreachable block (ram,0x0163b378) */
/* WARNING: Removing unreachable block (ram,0x0163b4a0) */
/* WARNING: Removing unreachable block (ram,0x0163b38c) */
/* WARNING: Removing unreachable block (ram,0x0163b394) */
/* WARNING: Removing unreachable block (ram,0x0163b3c0) */
/* WARNING: Removing unreachable block (ram,0x0163b3d8) */
/* WARNING: Removing unreachable block (ram,0x0163b494) */
/* WARNING: Removing unreachable block (ram,0x0163b498) */
/* WARNING: Removing unreachable block (ram,0x0163b4a4) */
/* WARNING: Removing unreachable block (ram,0x0163b4c4) */
/* WARNING: Removing unreachable block (ram,0x0163b4dc) */
/* WARNING: Removing unreachable block (ram,0x0163b4f0) */
/* WARNING: Removing unreachable block (ram,0x0163b5b0) */
/* WARNING: Removing unreachable block (ram,0x0163b5c4) */
/* WARNING: Removing unreachable block (ram,0x0163b658) */
/* WARNING: Removing unreachable block (ram,0x0163b5e0) */
/* WARNING: Removing unreachable block (ram,0x0163b504) */
/* WARNING: Removing unreachable block (ram,0x0163b570) */
/* WARNING: Removing unreachable block (ram,0x0321d15c) */
/* WARNING: Removing unreachable block (ram,0x0321d180) */
/* WARNING: Removing unreachable block (ram,0x0321d194) */
/* WARNING: Removing unreachable block (ram,0x0163b55c) */
/* WARNING: Removing unreachable block (ram,0x0163b44c) */
/* WARNING: Removing unreachable block (ram,0x0163b280) */
/* WARNING: Removing unreachable block (ram,0x0321ecd4) */
/* WARNING: Removing unreachable block (ram,0x0321ecfc) */
/* WARNING: Removing unreachable block (ram,0x0321ed10) */
/* WARNING: Removing unreachable block (ram,0x0163b230) */
/* WARNING: Removing unreachable block (ram,0x0163b118) */
/* WARNING: Removing unreachable block (ram,0x0163b190) */
/* WARNING: Removing unreachable block (ram,0x0163b124) */
/* WARNING: Removing unreachable block (ram,0x0163aee4) */
/* WARNING: Removing unreachable block (ram,0x0163af08) */
/* WARNING: Removing unreachable block (ram,0x0163af40) */
/* WARNING: Removing unreachable block (ram,0x0163afb4) */
/* WARNING: Removing unreachable block (ram,0x0163afbc) */
/* WARNING: Removing unreachable block (ram,0x0163afc4) */
/* WARNING: Removing unreachable block (ram,0x0163afe0) */
/* WARNING: Removing unreachable block (ram,0x0163afec) */
/* WARNING: Removing unreachable block (ram,0x0163b028) */
/* WARNING: Removing unreachable block (ram,0x0163b060) */
/* WARNING: Removing unreachable block (ram,0x0163b068) */
/* WARNING: Removing unreachable block (ram,0x0163b078) */
/* WARNING: Removing unreachable block (ram,0x0163b084) */
/* WARNING: Removing unreachable block (ram,0x0163b08c) */
/* WARNING: Removing unreachable block (ram,0x0163b094) */
/* WARNING: Removing unreachable block (ram,0x0163b0a4) */
/* WARNING: Removing unreachable block (ram,0x0163af50) */
/* WARNING: Removing unreachable block (ram,0x0163af74) */
/* WARNING: Removing unreachable block (ram,0x0163af94) */
/* WARNING: Removing unreachable block (ram,0x0163afa0) */
/* WARNING: Removing unreachable block (ram,0x0163af84) */
/* WARNING: Removing unreachable block (ram,0x0163b65c) */
/* WARNING: Removing unreachable block (ram,0x0163b670) */
/* WARNING: Removing unreachable block (ram,0x0163b680) */
/* WARNING: Removing unreachable block (ram,0x0163b690) */
/* WARNING: Removing unreachable block (ram,0x0163b6c4) */
/* WARNING: Removing unreachable block (ram,0x0163b6d0) */
/* WARNING: Removing unreachable block (ram,0x0163b724) */
/* WARNING: Removing unreachable block (ram,0x0163b768) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x0163b698) */
/* WARNING: Removing unreachable block (ram,0x0163b6b4) */
/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Core_Cameras_CameraManager__ApplySettings(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar7 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb56d1 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb56d1 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(param_2,0);
  lVar5 = 0x3eb5000;
  if (param_2 == 0) goto LAB_0163a8ac;
  /*UnityEngine.Camera$$set_layerCullDistances*/ func_0x0321df54(param_2,*(undefined8 *)(param_1 + 0x40),0);
  uVar2 = /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(param_2,0,0);
  lVar5 = lVar3;
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    if (lVar3 == 0) goto LAB_0163a8ac;
    uVar6 = 0;
    uVar9 = 0;
    goto code_r0x0163a894;
  case 1:
    if (lVar3 == 0) goto LAB_0163a8ac;
    uVar9 = 0x100000001;
    break;
  case 2:
    uVar9 = _UNK_033f8620;
    goto joined_r0x0163a878;
  case 3:
    uVar9 = _UNK_034026a0;
joined_r0x0163a878:
    if (lVar3 == 0) {
LAB_0163a8ac:
      puVar8 = &Core_Cameras_CameraManager__IsCameraActive;
      auVar10 = func_0x00f78af4();
      puVar1 = &stack0xffffffffffffffd0;
      while( true ) {
        lVar3 = auVar10._8_8_;
        *(long *)(puVar1 + -0x20) = param_1;
        *(long *)(puVar1 + -0x18) = lVar5;
        *(undefined1 **)(puVar1 + -0x10) = puVar7;
        *(undefined **)(puVar1 + -8) = puVar8;
        uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(auVar10._0_8_ + 0x20),0);
        if ((uVar4 & 1) != 0) {
          return 0;
        }
        lVar5 = *(long *)(auVar10._0_8_ + 0x20);
        if (lVar5 != 0) break;
        auVar11 = func_0x00f78af4();
        param_1 = auVar11._8_8_;
        lVar5 = auVar11._0_8_;
        *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
        *(undefined8 *)(puVar1 + -0x58) = unaff_x23;
        *(undefined8 *)(puVar1 + -0x50) = 0x3d23990;
        *(long *)(puVar1 + -0x48) = param_2;
        *(undefined1 (*) [16])(puVar1 + -0x40) = auVar10;
        *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x28) = &Core_Cameras_CameraManager__UnregisterSceneCamera;
        puVar7 = puVar1 + -0x30;
        param_2 = 0x3eb5000;
        if ((bRam0000000003eb56c7 & 1) == 0) {
          func_0x00f78a20(0x3d3ce28);
          func_0x00f78a20(0x3d3ce30);
          func_0x00f78a20(0x3d3ce38);
          bRam0000000003eb56c7 = 1;
        }
        puVar8 = &UNK_0163a968;
        puVar1 = puVar1 + -0x60;
        auVar10 = auVar11;
      }
      *(undefined8 *)(puVar1 + -0x30) = 0x3d23990;
      *(long *)(puVar1 + -0x28) = param_2;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50,lVar3,5,0);
        bRam0000000003eb9443 = 1;
      }
      if (lVar5 == lVar3) {
        uVar2 = 1;
      }
      else {
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
          return uVar2;
        }
        uVar2 = 0;
      }
      return uVar2;
    }
    break;
  case 4:
    if (lVar3 == 0) goto LAB_0163a8ac;
    uVar9 = 0x200000002;
    break;
  default:
    if (lVar3 == 0) goto LAB_0163a8ac;
    uVar6 = 0;
    goto code_r0x0163a898;
  }
  uVar6 = 1;
code_r0x0163a894:
  *(undefined8 *)(lVar3 + 0x48) = uVar9;
code_r0x0163a898:
  *(undefined1 *)(lVar3 + 0x44) = uVar6;
  return uVar2;
}



// ============================================================
// RVA: 0x163a8b0 | Core.Cameras.CameraManager.IsCameraActive
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163a908 | Core.Cameras.CameraManager.UnregisterSceneCamera
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163aa20 | Core.Cameras.CameraManager.SetNoActiveCamera
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163aad4 | Core.Cameras.CameraManager.DisableActiveCamera
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163abf4 | Core.Cameras.CameraManager.SetActiveCamera
// ============================================================

/* WARNING: Possible PIC construction at 0x0163ad34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163ad38) */
/* WARNING: Removing unreachable block (ram,0x0163ad48) */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Cameras_CameraManager__SetActiveCamera(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  int extraout_w1;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  long *plVar29;
  long unaff_x23;
  long *plVar30;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined1 **ppuVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar34;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000003eb56c9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb56c9 = 1;
  }
  uStack_60 = 0;
  lStack_58 = 0;
  uVar9 = Core_Cameras_CameraManager__IsCameraActive(param_1,param_2);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  uVar9 = Core_Cameras_CameraManager__TryGetCameraData(param_1,param_2,&uStack_60);
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  lVar27 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar18 = (undefined1 *)0x0;
  iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar27,0);
  puStack_70 = &stack0xfffffffffffffff0;
  if (iVar8 == 0) {
LAB_0163acb8:
    Core_Cameras_CameraManager__DisableActiveCamera(param_1);
    unaff_x23 = lStack_58;
    if (lStack_58 != 0) {
      unaff_x24 = (undefined8 *)0x0;
      unaff_x25 = lStack_58 + 0x20;
      do {
        if ((undefined8 *)(ulong)*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
LAB_0163ad80:
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          break;
        }
        lVar27 = *(long *)(unaff_x25 + (long)unaff_x24 * 8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar18 = (undefined1 *)0x0;
        uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar27,0);
        if ((int)uVar9 != 0) {
          lVar10 = *(long *)(param_1 + 0x30);
          if (lVar10 == 0) break;
          if ((undefined8 *)(ulong)*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_0163ad80;
          if (lVar27 == 0) break;
          lVar10 = *(long *)(lVar10 + (long)unaff_x24 * 8 + 0x20);
          puStack_68 = (undefined *)0x163ad38;
          lStack_88 = lVar27;
          uStack_90 = 0x3d23990;
          goto code_r0x0321f010;
        }
        unaff_x24 = (undefined8 *)((long)unaff_x24 + 1);
        if ((dword *)unaff_x24 == &MACH_HEADER.cputype) {
          *(undefined8 *)(param_1 + 0x20) = param_2;
          return uVar9;
        }
      } while( true );
    }
  }
  else if ((*(long *)(param_1 + 0x18) != 0) &&
          (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x18),0), lVar10 != 0)) {
    puVar18 = (undefined1 *)0x0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,0);
    goto LAB_0163acb8;
  }
  auVar38 = func_0x00f78af4();
  lVar10 = auVar38._8_8_;
  uVar12 = auVar38._0_8_;
  puVar5 = &uStack_b0;
  puVar19 = &uStack_b0;
  uStack_90 = 0x3d23990;
  puStack_68 = &Core_Cameras_CameraManager__SetCameraRenderTarget;
  ppuVar31 = &puStack_70;
  plVar29 = (long *)0x3eb5000;
  uVar9 = uVar12;
  puVar20 = puVar18;
  puStack_a0 = unaff_x24;
  lStack_98 = unaff_x23;
  lStack_88 = lVar27;
  lStack_80 = param_1;
  uStack_78 = param_2;
  if ((bRam0000000003eb56ca & 1) == 0) {
    uVar9 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb56ca = 1;
  }
  uStack_b0 = 0;
  lStack_a8 = 0;
  uVar26 = (uint)puVar18;
  if (3 < uVar26) {
    return uVar9;
  }
  plVar30 = *(long **)(uVar12 + 0x30);
  if (plVar30 == (long *)0x0) goto code_r0x0163aebc;
  if ((lVar10 != 0) &&
     (lVar27 = func_0x00f78adc(lVar10,*(undefined8 *)(*plVar30 + 0x40)), lVar27 == 0)) {
    uVar11 = func_0x00f78b14();
    goto code_r0x0163aecc;
  }
  if (uVar26 < *(uint *)(plVar30 + 3)) {
    plVar29 = (long *)((ulong)puVar18 & 0xffffffff);
    plVar30[(long)plVar29 + 4] = lVar10;
    uVar9 = Core_Cameras_CameraManager__TryGetCameraData(uVar12,*(undefined8 *)(uVar12 + 0x20));
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    puVar20 = (undefined1 *)puVar19;
    if (lStack_a8 != 0) {
      if (*(uint *)(lStack_a8 + 0x18) <= uVar26) goto code_r0x0163aec0;
      lVar27 = *(long *)(lStack_a8 + (long)plVar29 * 8 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar20 = (undefined1 *)0x0;
      uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar27,0);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      puVar18 = (undefined1 *)0x0;
      param_2 = uStack_78;
      param_1 = lStack_80;
      if (lVar27 != 0) {
code_r0x0321f010:
        lStack_80 = param_1;
        uStack_78 = param_2;
        if (pcRam0000000003ebece8 == (code *)0x0) {
          pcRam0000000003ebece8 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0321f05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*pcRam0000000003ebece8)(lVar27,lVar10);
        return uVar9;
      }
    }
code_r0x0163aebc:
    func_0x00f78af4();
  }
code_r0x0163aec0:
  uVar11 = func_0x00f78b24();
code_r0x0163aecc:
  puVar32 = &Core_Cameras_CameraManager__SetPPAAType;
  auVar41 = func_0x00f78ac0(uVar11,0);
  uVar9 = auVar41._0_8_;
  *(int *)(uVar9 + 0x48) = auVar41._8_4_;
  if ((int)puVar20 == 0) {
    return uVar9;
  }
  while( true ) {
    puVar7 = (undefined1 *)((long)puVar5 + -0x50);
    *(long **)((long)puVar5 + -0x30) = plVar29;
    *(long *)((long)puVar5 + -0x28) = auVar38._0_8_;
    *(undefined1 **)((long)puVar5 + -0x20) = puVar18;
    *(long *)((long)puVar5 + -0x18) = auVar38._8_8_;
    *(undefined1 ***)((long)puVar5 + -0x10) = ppuVar31;
    *(undefined **)((long)puVar5 + -8) = puVar32;
    puVar18 = (undefined1 *)((long)puVar5 + -0x10);
    puVar21 = puVar20;
    if ((bRam0000000003eb56d0 & 1) == 0) {
      func_0x00f78a20(0x3d33348);
      func_0x00f78a20(0x3d33350);
      func_0x00f78a20(0x3d33358);
      func_0x00f78a20(0x3d3ce20);
      bRam0000000003eb56d0 = 1;
      puVar21 = puVar20;
    }
    *(undefined8 *)((long)puVar5 + -0x48) = 0;
    *(undefined8 *)((long)puVar5 + -0x50) = 0;
    *(undefined8 *)((long)puVar5 + -0x38) = 0;
    *(undefined8 *)((long)puVar5 + -0x40) = 0;
    if (*(long *)(uVar9 + 0x28) != 0) break;
    func_0x00f78af4();
    uVar12 = uVar9;
    if (extraout_w1 == 1) {
      puVar13 = (ulong *)___cxa_begin_catch();
      uVar12 = *puVar13;
      ___cxa_end_catch();
      uVar9 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)puVar5 + -0x50),uRam0000000003eb5000);
      if (uVar12 == 0) {
        return uVar9;
      }
      func_0x00f78ac0(uVar12,0);
    }
    auVar39 = __Unwind_Resume();
    uVar11 = auVar39._8_8_;
    uVar9 = auVar39._0_8_;
    *(undefined8 *)((long)puVar5 + -0xb0) = unaff_d9;
    *(undefined8 *)((long)puVar5 + -0xa8) = unaff_d8;
    *(ulong *)((long)puVar5 + -0xa0) = unaff_x26;
    *(long *)((long)puVar5 + -0x98) = unaff_x25;
    *(undefined8 **)((long)puVar5 + -0x90) = unaff_x24;
    *(long **)((long)puVar5 + -0x88) = plVar30;
    *(long **)((long)puVar5 + -0x80) = plVar29;
    *(long *)((long)puVar5 + -0x78) = auVar38._0_8_;
    *(undefined8 *)((long)puVar5 + -0x70) = 0x3eb5000;
    *(ulong *)((long)puVar5 + -0x68) = uVar12;
    *(undefined1 **)((long)puVar5 + -0x60) = puVar18;
    *(undefined **)((long)puVar5 + -0x58) = &Core_Cameras_CameraManager__UpdateLayerSettings;
    uVar26 = CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    if ((bRam0000000003eb56cb & 1) == 0) {
      func_0x00f78a20(0x3d3ce48);
      func_0x00f78a20(0x3d3ce50);
      func_0x00f78a20(0x3d3ce58);
      func_0x00f78a20(0x3d3ce60);
      bRam0000000003eb56cb = 1;
    }
    lVar27 = *(long *)(uVar9 + 0x38);
    puVar19 = unaff_x24;
    if (lVar27 != 0) {
      unaff_x25 = 0;
      uVar12 = 0;
      unaff_x24 = (undefined8 *)0x3d3ce48;
      do {
        uVar28 = (uint)uVar12;
        if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar28) goto code_r0x0163b0d4;
        if (*(uint *)(lVar27 + 0x18) <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar10 = *(long *)(lVar27 + 0x10) + unaff_x25;
        lVar27 = *(long *)(lVar10 + 0x20);
        puVar19 = unaff_x24;
        if (lVar27 == 0) break;
        uVar1 = *(uint *)(lVar10 + 0x28);
        unaff_x26 = (ulong)uVar1;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(lVar27,uVar11,5,0);
        if (iVar8 != 0) {
          puVar19 = (undefined8 *)0x3d3ce48;
          if (*(long *)(uVar9 + 0x38) != 0) {
            uVar14 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$set_Item*/ func_0x025041d4(*(long *)(uVar9 + 0x38),uVar12,lVar27,CONCAT44(uVar26,uVar1),
                                     uRam0000000003d3ce60);
            lVar10 = *(long *)(uVar9 + 0x40);
            if (lVar10 != 0) {
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar10 + ((long)(unaff_x26 << 0x20) >> 0x1e) + 0x20) = uVar26;
                return uVar14;
              }
              goto code_r0x0163b1ac;
            }
          }
          break;
        }
        uVar12 = (ulong)(uVar28 + 1);
        lVar27 = *(long *)(uVar9 + 0x38);
        unaff_x25 = unaff_x25 + 0x10;
      } while (lVar27 != 0);
    }
    do {
      do {
        unaff_x24 = puVar19;
        func_0x00f78af4();
code_r0x0163b0d4:
        uVar12 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(uVar11,0);
        puVar19 = unaff_x24;
      } while (*(long *)(uVar9 + 0x38) == 0);
      puVar20 = (undefined1 *)(uVar12 & 0xffffffff | (ulong)uVar26 << 0x20);
      uVar14 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$Add*/ func_0x02504530(*(long *)(uVar9 + 0x38),uVar11,puVar20,*unaff_x24);
      lVar10 = *(long *)(uVar9 + 0x40);
    } while (lVar10 == 0);
    if (*(uint *)(lVar10 + 0x18) <= (uint)uVar12) {
code_r0x0163b1ac:
      uVar15 = func_0x00f78b24();
      auVar38 = func_0x00f78ac0(uVar15,0);
      lVar10 = auVar38._0_8_;
      *(ulong *)((long)puVar5 + -0xe0) = uVar12;
      *(undefined8 *)((long)puVar5 + -0xd8) = uVar11;
      *(undefined1 **)((long)puVar5 + -0xd0) = puVar21;
      *(ulong *)((long)puVar5 + -200) = uVar9;
      *(undefined1 **)((long)puVar5 + -0xc0) = (undefined1 *)((long)puVar5 + -0x60);
      *(undefined **)((long)puVar5 + -0xb8) = &Core_Cameras_CameraManager__SetCameraViewport;
      if ((bRam0000000003eb56cc & 1) == 0) {
        func_0x00f78a20(0x3d204e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb56cc = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar22 = (long *)0x0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar24 = **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8);
      if (lVar24 == 0) {
code_r0x0163b2a4:
        func_0x00f78af4();
      }
      else if (auVar38._8_4_ < *(uint *)(lVar24 + 0x18)) {
        if (lVar10 != 0) {
          lVar24 = lVar24 + (long)(int)auVar38._8_4_ * 0x10;
          uVar36 = *(undefined4 *)(lVar24 + 0x28);
          uVar37 = *(undefined4 *)(lVar24 + 0x2c);
          uVar2 = *(undefined4 *)(lVar24 + 0x20);
          uVar35 = *(undefined4 *)(lVar24 + 0x24);
          *(undefined8 *)((long)puVar5 + -0xd0) = *(undefined8 *)((long)puVar5 + -0xd0);
          *(undefined8 *)((long)puVar5 + -200) = *(undefined8 *)((long)puVar5 + -200);
          *(undefined8 *)((long)puVar5 + -0xc0) = *(undefined8 *)((long)puVar5 + -0xc0);
          *(undefined8 *)((long)puVar5 + -0xb8) = *(undefined8 *)((long)puVar5 + -0xb8);
          *(undefined4 *)((long)puVar5 + -0xe0) = uVar2;
          *(undefined4 *)((long)puVar5 + -0xdc) = uVar35;
          *(undefined4 *)((long)puVar5 + -0xd8) = uVar36;
          *(undefined4 *)((long)puVar5 + -0xd4) = uVar37;
          if (pcRam0000000003ebeed8 == (code *)0x0) {
            pcRam0000000003ebeed8 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)",
                                         0);
          }
          uVar9 = (*pcRam0000000003ebeed8)(lVar10,(undefined1 *)((long)puVar5 + -0xe0));
          return uVar9;
        }
        goto code_r0x0163b2a4;
      }
      uVar11 = func_0x00f78b24();
      uVar9 = func_0x00f78ac0(uVar11,0);
      *(undefined8 **)((long)puVar5 + -0x120) = unaff_x24;
      *(long *)((long)puVar5 + -0x118) = lVar27;
      *(undefined8 *)((long)puVar5 + -0x110) = 0x3d23990;
      *(undefined8 *)((long)puVar5 + -0x108) = 0x3d204e0;
      *(long *)((long)puVar5 + -0x100) = auVar38._8_8_;
      *(long *)((long)puVar5 + -0xf8) = lVar10;
      *(undefined1 **)((long)puVar5 + -0xf0) = (undefined1 *)((long)puVar5 + -0xc0);
      *(undefined **)((long)puVar5 + -0xe8) = &Core_Cameras_CameraManager__CreateCamera;
      if ((bRam0000000003eb56cd & 1) == 0) {
        func_0x00f78a20(0x3d19110);
        func_0x00f78a20(0x3d577e0);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d1f578);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb56cd = 1;
      }
      plVar30 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
      plVar29 = /*UnityEngine.Camera_var*/ plRam0000000003d19110;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar16 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar29,0);
      if (plVar30 == (long *)0x0) {
code_r0x0163b494:
        func_0x00f78af4();
code_r0x0163b498:
        uVar11 = func_0x00f78b24();
        plVar16 = plVar29;
      }
      else {
        if ((plVar16 == (long *)0x0) ||
           (lVar27 = func_0x00f78adc(plVar16,*(undefined8 *)(*plVar30 + 0x40)), lVar27 != 0)) {
          plVar29 = plVar16;
          if ((int)plVar30[3] != 0) {
            plVar30[4] = (long)plVar16;
            plVar29 = (long *)func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
            plVar22 = plVar30;
            /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(plVar29,uVar9,plVar30,0);
            if ((plVar29 != (long *)0x0) &&
               (uVar12 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar29,uRam0000000003d577e0), uVar12 != 0)) {
              /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar12,0,0);
              /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar12,0,0);
              /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar12,0,0);
              /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar12,0,0);
              /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
              /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar12,0);
              plVar22 = (long *)0x0;
              /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar12,2);
              lVar27 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar12,0);
              uVar9 = uVar12;
              if (lVar27 != 0) {
                *(undefined4 *)(lVar27 + 0x1c) = 0;
                *(undefined4 *)(lVar27 + 0x20) = 0;
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar27,0,0);
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar27,0,0);
                *(undefined1 *)(lVar27 + 0x18) = 0;
                *(undefined1 *)(lVar27 + 0x44) = 0;
                *(undefined4 *)(lVar27 + 0x48) = 0;
                return uVar12;
              }
            }
            goto code_r0x0163b494;
          }
          goto code_r0x0163b498;
        }
        uVar11 = func_0x00f78b14();
      }
      auVar39._8_8_ = uVar9;
      auVar39._0_8_ = plVar30;
      auVar38 = func_0x00f78ac0(uVar11,0);
      uVar12 = auVar38._8_8_;
      lVar27 = auVar38._0_8_;
      *(undefined8 **)((long)puVar5 + -0x160) = unaff_x24;
      *(undefined8 *)((long)puVar5 + -0x158) = 0x3d1f578;
      *(undefined8 *)((long)puVar5 + -0x150) = 0x3d25458;
      *(long **)((long)puVar5 + -0x148) = plVar16;
      *(long **)((long)puVar5 + -0x140) = plVar30;
      *(ulong *)((long)puVar5 + -0x138) = uVar9;
      *(undefined1 **)((long)puVar5 + -0x130) = (undefined1 *)((long)puVar5 + -0xf0);
      *(undefined **)((long)puVar5 + -0x128) =
           &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
      plVar23 = plVar22;
      plVar29 = (long *)0x3d25458;
      plVar30 = (long *)0x3d1f578;
      if (((lVar27 != 0) &&
          (plVar17 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar27,0), plVar16 = plVar22, auVar39 = auVar38,
          uVar12 != 0)) &&
         (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar12,0), plVar29 = plVar17, plVar30 = (long *)0x3d1f578,
         plVar17 != (long *)0x0)) {
        /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(plVar17,0);
        plVar30 = (long *)0x0;
        if (lVar10 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar10,0);
          /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar17,0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar10,0);
          /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(plVar17,0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar10,0);
          /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar27,0);
          uVar9 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(uVar12,0);
          if (((ulong)plVar22 & 1) != 0) {
            return uVar9;
          }
          /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar27,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(uVar12,0);
          /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar27,0);
          uVar11 = *(undefined8 *)((long)puVar5 + -0x130);
          uVar33 = *(undefined8 *)((long)puVar5 + -0x128);
          uVar15 = *(undefined8 *)((long)puVar5 + -0x140);
          uVar25 = *(undefined8 *)((long)puVar5 + -0x138);
          puVar6 = (undefined1 *)((long)puVar5 + -0x120);
          uVar34 = extraout_b0_00;
          goto UnityEngine_Camera__set_farClipPlane;
        }
      }
      uVar12 = func_0x00f78af4();
      puVar7 = (undefined1 *)((long)puVar5 + -0x180);
      *(undefined1 (*) [16])((long)puVar5 + -0x180) = auVar39;
      *(undefined1 **)((long)puVar5 + -0x170) = (undefined1 *)((long)puVar5 + -0x130);
      *(undefined **)((long)puVar5 + -0x168) =
           &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
      puVar18 = (undefined1 *)((long)puVar5 + -0x170);
      if (uVar12 != 0) {
        lVar27 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar12,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar12;
        auVar39 = auVar3 << 0x40;
        if (lVar27 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar27,0);
          /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar27,0);
          /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar27,0);
          /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0,uVar12,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc((char)_UNK_033f83fc,uVar12,0);
          uVar34 = 0;
          uVar11 = *(undefined8 *)((long)puVar5 + -0x170);
          uVar33 = *(undefined8 *)((long)puVar5 + -0x168);
          puVar6 = (undefined1 *)((long)puVar5 + -0x160);
          uVar15 = *(undefined8 *)((long)puVar5 + -0x180);
          uVar25 = *(undefined8 *)((long)puVar5 + -0x178);
UnityEngine_Camera__set_farClipPlane:
          *(undefined8 *)(puVar6 + -0x30) = unaff_d9;
          *(ulong *)(puVar6 + -0x28) = (ulong)uVar26;
          *(undefined8 *)(puVar6 + -0x20) = uVar15;
          *(undefined8 *)(puVar6 + -0x18) = uVar25;
          *(undefined8 *)(puVar6 + -0x10) = uVar11;
          *(undefined8 *)(puVar6 + -8) = uVar33;
          if (pcRam0000000003ebead0 == (code *)0x0) {
            pcRam0000000003ebead0 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (*pcRam0000000003ebead0)(uVar34,uVar12);
          return uVar9;
        }
      }
      puVar32 = &Core_Cameras_CameraManager__ApplySettings;
      auVar40 = func_0x00f78af4();
      goto code_r0x0163b65c;
    }
    *(uint *)(lVar10 + (long)(int)(uint)uVar12 * 4 + 0x20) = uVar26;
    if ((int)puVar21 == 0) {
      return uVar14;
    }
    ppuVar31 = *(undefined1 ***)((long)puVar5 + -0x60);
    puVar32 = *(undefined **)((long)puVar5 + -0x58);
    puVar18 = *(undefined1 **)((long)puVar5 + -0x70);
    plVar29 = *(long **)((long)puVar5 + -0x80);
    auVar38._8_8_ = *(undefined8 *)((long)puVar5 + -0x68);
    auVar38._0_8_ = *(undefined8 *)((long)puVar5 + -0x78);
    unaff_x24 = *(undefined8 **)((long)puVar5 + -0x90);
    plVar30 = *(long **)((long)puVar5 + -0x88);
    unaff_x26 = *(ulong *)((long)puVar5 + -0xa0);
    unaff_x25 = *(long *)((long)puVar5 + -0x98);
    unaff_d9 = *(undefined8 *)((long)puVar5 + -0xb0);
    unaff_d8 = *(undefined8 *)((long)puVar5 + -0xa8);
    puVar5 = (undefined8 *)((long)puVar5 + -0x50);
  }
  plVar16 = (long *)0x3d33350;
  auVar39._8_8_ = uVar9;
  auVar39._0_8_ = 0x3d33348;
  /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564((undefined1 *)((long)puVar5 + -0x50),*(long *)(uVar9 + 0x28),uRam0000000003d3ce20)
  ;
  uVar12 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0((undefined1 *)((long)puVar5 + -0x50),uRam0000000003d33350);
  if ((uVar12 & 1) == 0) {
    uVar9 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)puVar5 + -0x50),uRam0000000003d33348);
    return uVar9;
  }
  auVar40._8_8_ = *(undefined8 *)((long)puVar5 + -0x40);
  auVar40._0_8_ = uVar9;
  plVar23 = *(long **)((long)puVar5 + -0x38);
  puVar32 = &UNK_0163af90;
code_r0x0163b65c:
  uVar9 = auVar40._0_8_;
  auVar4._8_8_ = plVar23;
  auVar4._0_8_ = uVar9;
  *(long **)(puVar7 + -0x30) = plVar29;
  *(long **)(puVar7 + -0x28) = plVar16;
  *(undefined1 (*) [16])(puVar7 + -0x20) = auVar39;
  *(undefined1 **)(puVar7 + -0x10) = puVar18;
  *(undefined **)(puVar7 + -8) = puVar32;
  if (plVar23 != (long *)0x0) {
    uVar12 = uVar9;
    if (0 < (int)plVar23[3]) {
      plVar16 = (long *)0x0;
      plVar22 = (long *)(plVar23[3] & 0xffffffff);
      plVar29 = plVar23 + 4;
      do {
        if (plVar22 <= plVar16) {
          uVar11 = func_0x00f78b24(auVar40._0_8_,auVar40._8_8_);
          func_0x00f78ac0(uVar11,0);
          auVar39 = auVar4;
          goto code_r0x0163b6d0;
        }
        auVar40 = Core_Cameras_CameraManager__ApplySettings(uVar9,plVar29[(long)plVar16]);
        uVar12 = auVar40._0_8_;
        plVar16 = (long *)((long)plVar16 + 1);
        plVar22 = (long *)(ulong)*(uint *)(plVar23 + 3);
      } while ((long)plVar16 < (long)(int)*(uint *)(plVar23 + 3));
    }
    return uVar12;
  }
code_r0x0163b6d0:
  uVar9 = func_0x00f78af4();
  *(ulong *)(puVar7 + -0x80) = unaff_x26;
  *(long *)(puVar7 + -0x78) = unaff_x25;
  *(undefined8 **)(puVar7 + -0x70) = unaff_x24;
  *(long **)(puVar7 + -0x68) = plVar30;
  *(long **)(puVar7 + -0x60) = plVar29;
  *(long **)(puVar7 + -0x58) = plVar16;
  *(undefined1 (*) [16])(puVar7 + -0x50) = auVar39;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &Core_Cameras_CameraManager___ctor;
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar11,uRam0000000003d3ce08);
  *(undefined8 *)(uVar9 + 0x28) = uVar11;
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar11,uRam0000000003d3ce40);
  *(undefined8 *)(uVar9 + 0x38) = uVar11;
  uVar11 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(uVar9 + 0x40) = uVar11;
  return uVar9;
}



// ============================================================
// RVA: 0x163ad90 | Core.Cameras.CameraManager.SetCameraRenderTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Cameras_CameraManager__SetCameraRenderTarget
                (ulong param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  int extraout_w1;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  long *plVar27;
  long *plVar28;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined1 *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar32;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = &uStack_50;
  puVar17 = &uStack_50;
  puVar29 = &stack0xfffffffffffffff0;
  plVar27 = (long *)0x3eb5000;
  uVar8 = param_1;
  puVar18 = param_3;
  if ((bRam0000000003eb56ca & 1) == 0) {
    uVar8 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb56ca = 1;
  }
  uStack_50 = 0;
  lStack_48 = 0;
  uVar25 = (uint)param_3;
  if (3 < uVar25) {
    return uVar8;
  }
  plVar28 = *(long **)(param_1 + 0x30);
  if (plVar28 == (long *)0x0) goto LAB_0163aebc;
  if ((param_2 != 0) &&
     (lVar9 = func_0x00f78adc(param_2,*(undefined8 *)(*plVar28 + 0x40)), lVar9 == 0)) {
    uVar10 = func_0x00f78b14();
    goto code_r0x0163aecc;
  }
  if (uVar25 < *(uint *)(plVar28 + 3)) {
    plVar27 = (long *)((ulong)param_3 & 0xffffffff);
    plVar28[(long)plVar27 + 4] = param_2;
    uVar8 = Core_Cameras_CameraManager__TryGetCameraData(param_1,*(undefined8 *)(param_1 + 0x20));
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    puVar18 = (undefined1 *)puVar17;
    if (lStack_48 != 0) {
      if (*(uint *)(lStack_48 + 0x18) <= uVar25) goto LAB_0163aec0;
      lVar9 = *(long *)(lStack_48 + (long)plVar27 * 8 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar18 = (undefined1 *)0x0;
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      param_3 = (undefined1 *)0x0;
      if (lVar9 != 0) {
        if (pcRam0000000003ebece8 == (code *)0x0) {
          pcRam0000000003ebece8 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0321f05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*pcRam0000000003ebece8)(lVar9,param_2);
        return uVar8;
      }
    }
LAB_0163aebc:
    func_0x00f78af4();
  }
LAB_0163aec0:
  uVar10 = func_0x00f78b24();
code_r0x0163aecc:
  puVar30 = &Core_Cameras_CameraManager__SetPPAAType;
  auVar39 = func_0x00f78ac0(uVar10,0);
  uVar8 = auVar39._0_8_;
  *(int *)(uVar8 + 0x48) = auVar39._8_4_;
  if ((int)puVar18 == 0) {
    return uVar8;
  }
  while( true ) {
    puVar6 = (undefined1 *)((long)puVar4 + -0x50);
    *(long **)((long)puVar4 + -0x30) = plVar27;
    *(ulong *)((long)puVar4 + -0x28) = param_1;
    *(undefined1 **)((long)puVar4 + -0x20) = param_3;
    *(long *)((long)puVar4 + -0x18) = param_2;
    *(undefined1 **)((long)puVar4 + -0x10) = puVar29;
    *(undefined **)((long)puVar4 + -8) = puVar30;
    puVar29 = (undefined1 *)((long)puVar4 + -0x10);
    puVar19 = puVar18;
    if ((bRam0000000003eb56d0 & 1) == 0) {
      func_0x00f78a20(0x3d33348);
      func_0x00f78a20(0x3d33350);
      func_0x00f78a20(0x3d33358);
      func_0x00f78a20(0x3d3ce20);
      bRam0000000003eb56d0 = 1;
      puVar19 = puVar18;
    }
    *(undefined8 *)((long)puVar4 + -0x48) = 0;
    *(undefined8 *)((long)puVar4 + -0x50) = 0;
    *(undefined8 *)((long)puVar4 + -0x38) = 0;
    *(undefined8 *)((long)puVar4 + -0x40) = 0;
    if (*(long *)(uVar8 + 0x28) != 0) break;
    func_0x00f78af4();
    uVar11 = uVar8;
    if (extraout_w1 == 1) {
      puVar12 = (ulong *)___cxa_begin_catch();
      uVar11 = *puVar12;
      ___cxa_end_catch();
      uVar8 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)puVar4 + -0x50),uRam0000000003eb5000);
      if (uVar11 == 0) {
        return uVar8;
      }
      func_0x00f78ac0(uVar11,0);
    }
    auVar36 = __Unwind_Resume();
    uVar10 = auVar36._8_8_;
    uVar8 = auVar36._0_8_;
    *(undefined8 *)((long)puVar4 + -0xb0) = unaff_d9;
    *(undefined8 *)((long)puVar4 + -0xa8) = unaff_d8;
    *(ulong *)((long)puVar4 + -0xa0) = unaff_x26;
    *(long *)((long)puVar4 + -0x98) = unaff_x25;
    *(undefined8 **)((long)puVar4 + -0x90) = unaff_x24;
    *(long **)((long)puVar4 + -0x88) = plVar28;
    *(long **)((long)puVar4 + -0x80) = plVar27;
    *(ulong *)((long)puVar4 + -0x78) = param_1;
    *(undefined8 *)((long)puVar4 + -0x70) = 0x3eb5000;
    *(ulong *)((long)puVar4 + -0x68) = uVar11;
    *(undefined1 **)((long)puVar4 + -0x60) = puVar29;
    *(undefined **)((long)puVar4 + -0x58) = &Core_Cameras_CameraManager__UpdateLayerSettings;
    uVar25 = CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    if ((bRam0000000003eb56cb & 1) == 0) {
      func_0x00f78a20(0x3d3ce48);
      func_0x00f78a20(0x3d3ce50);
      func_0x00f78a20(0x3d3ce58);
      func_0x00f78a20(0x3d3ce60);
      bRam0000000003eb56cb = 1;
    }
    lVar9 = *(long *)(uVar8 + 0x38);
    puVar17 = unaff_x24;
    if (lVar9 != 0) {
      unaff_x25 = 0;
      uVar11 = 0;
      unaff_x24 = (undefined8 *)0x3d3ce48;
      do {
        uVar26 = (uint)uVar11;
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar26) goto code_r0x0163b0d4;
        if (*(uint *)(lVar9 + 0x18) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar22 = *(long *)(lVar9 + 0x10) + unaff_x25;
        lVar9 = *(long *)(lVar22 + 0x20);
        puVar17 = unaff_x24;
        if (lVar9 == 0) break;
        uVar1 = *(uint *)(lVar22 + 0x28);
        unaff_x26 = (ulong)uVar1;
        iVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar9,uVar10,5,0);
        if (iVar7 != 0) {
          puVar17 = (undefined8 *)0x3d3ce48;
          if (*(long *)(uVar8 + 0x38) != 0) {
            uVar13 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$set_Item*/ func_0x025041d4(*(long *)(uVar8 + 0x38),uVar11,lVar9,CONCAT44(uVar25,uVar1),
                                     uRam0000000003d3ce60);
            lVar22 = *(long *)(uVar8 + 0x40);
            if (lVar22 != 0) {
              if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar22 + ((long)(unaff_x26 << 0x20) >> 0x1e) + 0x20) = uVar25;
                return uVar13;
              }
              goto code_r0x0163b1ac;
            }
          }
          break;
        }
        uVar11 = (ulong)(uVar26 + 1);
        lVar9 = *(long *)(uVar8 + 0x38);
        unaff_x25 = unaff_x25 + 0x10;
      } while (lVar9 != 0);
    }
    do {
      do {
        unaff_x24 = puVar17;
        func_0x00f78af4();
code_r0x0163b0d4:
        uVar11 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(uVar10,0);
        puVar17 = unaff_x24;
      } while (*(long *)(uVar8 + 0x38) == 0);
      puVar18 = (undefined1 *)(uVar11 & 0xffffffff | (ulong)uVar25 << 0x20);
      uVar13 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$Add*/ func_0x02504530(*(long *)(uVar8 + 0x38),uVar10,puVar18,*unaff_x24);
      lVar22 = *(long *)(uVar8 + 0x40);
    } while (lVar22 == 0);
    if (*(uint *)(lVar22 + 0x18) <= (uint)uVar11) {
code_r0x0163b1ac:
      uVar14 = func_0x00f78b24();
      auVar36 = func_0x00f78ac0(uVar14,0);
      lVar22 = auVar36._0_8_;
      *(ulong *)((long)puVar4 + -0xe0) = uVar11;
      *(undefined8 *)((long)puVar4 + -0xd8) = uVar10;
      *(undefined1 **)((long)puVar4 + -0xd0) = puVar19;
      *(ulong *)((long)puVar4 + -200) = uVar8;
      *(undefined1 **)((long)puVar4 + -0xc0) = (undefined1 *)((long)puVar4 + -0x60);
      *(undefined **)((long)puVar4 + -0xb8) = &Core_Cameras_CameraManager__SetCameraViewport;
      if ((bRam0000000003eb56cc & 1) == 0) {
        func_0x00f78a20(0x3d204e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb56cc = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar20 = (long *)0x0;
      uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar22,0);
      if ((uVar8 & 1) != 0) {
        return uVar8;
      }
      if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar23 = **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8);
      if (lVar23 == 0) {
code_r0x0163b2a4:
        func_0x00f78af4();
      }
      else if (auVar36._8_4_ < *(uint *)(lVar23 + 0x18)) {
        if (lVar22 != 0) {
          lVar23 = lVar23 + (long)(int)auVar36._8_4_ * 0x10;
          uVar34 = *(undefined4 *)(lVar23 + 0x28);
          uVar35 = *(undefined4 *)(lVar23 + 0x2c);
          uVar2 = *(undefined4 *)(lVar23 + 0x20);
          uVar33 = *(undefined4 *)(lVar23 + 0x24);
          *(undefined8 *)((long)puVar4 + -0xd0) = *(undefined8 *)((long)puVar4 + -0xd0);
          *(undefined8 *)((long)puVar4 + -200) = *(undefined8 *)((long)puVar4 + -200);
          *(undefined8 *)((long)puVar4 + -0xc0) = *(undefined8 *)((long)puVar4 + -0xc0);
          *(undefined8 *)((long)puVar4 + -0xb8) = *(undefined8 *)((long)puVar4 + -0xb8);
          *(undefined4 *)((long)puVar4 + -0xe0) = uVar2;
          *(undefined4 *)((long)puVar4 + -0xdc) = uVar33;
          *(undefined4 *)((long)puVar4 + -0xd8) = uVar34;
          *(undefined4 *)((long)puVar4 + -0xd4) = uVar35;
          if (pcRam0000000003ebeed8 == (code *)0x0) {
            pcRam0000000003ebeed8 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)",
                                         0);
          }
          uVar8 = (*pcRam0000000003ebeed8)(lVar22,(undefined1 *)((long)puVar4 + -0xe0));
          return uVar8;
        }
        goto code_r0x0163b2a4;
      }
      uVar10 = func_0x00f78b24();
      uVar8 = func_0x00f78ac0(uVar10,0);
      *(undefined8 **)((long)puVar4 + -0x120) = unaff_x24;
      *(long *)((long)puVar4 + -0x118) = lVar9;
      *(undefined8 *)((long)puVar4 + -0x110) = 0x3d23990;
      *(undefined8 *)((long)puVar4 + -0x108) = 0x3d204e0;
      *(long *)((long)puVar4 + -0x100) = auVar36._8_8_;
      *(long *)((long)puVar4 + -0xf8) = lVar22;
      *(undefined1 **)((long)puVar4 + -0xf0) = (undefined1 *)((long)puVar4 + -0xc0);
      *(undefined **)((long)puVar4 + -0xe8) = &Core_Cameras_CameraManager__CreateCamera;
      if ((bRam0000000003eb56cd & 1) == 0) {
        func_0x00f78a20(0x3d19110);
        func_0x00f78a20(0x3d577e0);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d1f578);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb56cd = 1;
      }
      plVar28 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
      plVar27 = /*UnityEngine.Camera_var*/ plRam0000000003d19110;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar15 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar27,0);
      if (plVar28 == (long *)0x0) {
code_r0x0163b494:
        func_0x00f78af4();
code_r0x0163b498:
        uVar10 = func_0x00f78b24();
        plVar15 = plVar27;
      }
      else {
        if ((plVar15 == (long *)0x0) ||
           (lVar9 = func_0x00f78adc(plVar15,*(undefined8 *)(*plVar28 + 0x40)), lVar9 != 0)) {
          plVar27 = plVar15;
          if ((int)plVar28[3] != 0) {
            plVar28[4] = (long)plVar15;
            plVar27 = (long *)func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
            plVar20 = plVar28;
            /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(plVar27,uVar8,plVar28,0);
            if ((plVar27 != (long *)0x0) &&
               (uVar11 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar27,uRam0000000003d577e0), uVar11 != 0)) {
              /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar11,0,0);
              /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar11,0,0);
              /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar11,0,0);
              /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar11,0,0);
              /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
              /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar11,0);
              plVar20 = (long *)0x0;
              /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar11,2);
              lVar9 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar11,0);
              uVar8 = uVar11;
              if (lVar9 != 0) {
                *(undefined4 *)(lVar9 + 0x1c) = 0;
                *(undefined4 *)(lVar9 + 0x20) = 0;
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar9,0,0);
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar9,0,0);
                *(undefined1 *)(lVar9 + 0x18) = 0;
                *(undefined1 *)(lVar9 + 0x44) = 0;
                *(undefined4 *)(lVar9 + 0x48) = 0;
                return uVar11;
              }
            }
            goto code_r0x0163b494;
          }
          goto code_r0x0163b498;
        }
        uVar10 = func_0x00f78b14();
      }
      auVar36._8_8_ = uVar8;
      auVar36._0_8_ = plVar28;
      auVar37 = func_0x00f78ac0(uVar10,0);
      uVar11 = auVar37._8_8_;
      lVar9 = auVar37._0_8_;
      *(undefined8 **)((long)puVar4 + -0x160) = unaff_x24;
      *(undefined8 *)((long)puVar4 + -0x158) = 0x3d1f578;
      *(undefined8 *)((long)puVar4 + -0x150) = 0x3d25458;
      *(long **)((long)puVar4 + -0x148) = plVar15;
      *(long **)((long)puVar4 + -0x140) = plVar28;
      *(ulong *)((long)puVar4 + -0x138) = uVar8;
      *(undefined1 **)((long)puVar4 + -0x130) = (undefined1 *)((long)puVar4 + -0xf0);
      *(undefined **)((long)puVar4 + -0x128) =
           &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
      plVar21 = plVar20;
      plVar27 = (long *)0x3d25458;
      plVar28 = (long *)0x3d1f578;
      if (((lVar9 != 0) &&
          (plVar16 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0), plVar15 = plVar20, auVar36 = auVar37,
          uVar11 != 0)) &&
         (lVar22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar11,0), plVar27 = plVar16, plVar28 = (long *)0x3d1f578,
         plVar16 != (long *)0x0)) {
        /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(plVar16,0);
        plVar28 = (long *)0x0;
        if (lVar22 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar22,0);
          /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar16,0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar22,0);
          /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(plVar16,0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar22,0);
          /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar9,0);
          uVar8 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(uVar11,0);
          if (((ulong)plVar20 & 1) != 0) {
            return uVar8;
          }
          /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar9,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(uVar11,0);
          /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar9,0);
          uVar10 = *(undefined8 *)((long)puVar4 + -0x130);
          uVar31 = *(undefined8 *)((long)puVar4 + -0x128);
          uVar14 = *(undefined8 *)((long)puVar4 + -0x140);
          uVar24 = *(undefined8 *)((long)puVar4 + -0x138);
          puVar5 = (undefined1 *)((long)puVar4 + -0x120);
          uVar32 = extraout_b0_00;
          goto UnityEngine_Camera__set_farClipPlane;
        }
      }
      uVar11 = func_0x00f78af4();
      puVar6 = (undefined1 *)((long)puVar4 + -0x180);
      *(undefined1 (*) [16])((long)puVar4 + -0x180) = auVar36;
      *(undefined1 **)((long)puVar4 + -0x170) = (undefined1 *)((long)puVar4 + -0x130);
      *(undefined **)((long)puVar4 + -0x168) =
           &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
      puVar29 = (undefined1 *)((long)puVar4 + -0x170);
      if (uVar11 != 0) {
        lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar11,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar11;
        auVar36 = auVar37 << 0x40;
        if (lVar9 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar9,0);
          /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar9,0);
          /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar9,0);
          /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0,uVar11,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc((char)_UNK_033f83fc,uVar11,0);
          uVar32 = 0;
          uVar10 = *(undefined8 *)((long)puVar4 + -0x170);
          uVar31 = *(undefined8 *)((long)puVar4 + -0x168);
          puVar5 = (undefined1 *)((long)puVar4 + -0x160);
          uVar14 = *(undefined8 *)((long)puVar4 + -0x180);
          uVar24 = *(undefined8 *)((long)puVar4 + -0x178);
UnityEngine_Camera__set_farClipPlane:
          *(undefined8 *)(puVar5 + -0x30) = unaff_d9;
          *(ulong *)(puVar5 + -0x28) = (ulong)uVar25;
          *(undefined8 *)(puVar5 + -0x20) = uVar14;
          *(undefined8 *)(puVar5 + -0x18) = uVar24;
          *(undefined8 *)(puVar5 + -0x10) = uVar10;
          *(undefined8 *)(puVar5 + -8) = uVar31;
          if (pcRam0000000003ebead0 == (code *)0x0) {
            pcRam0000000003ebead0 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (*pcRam0000000003ebead0)(uVar32,uVar11);
          return uVar8;
        }
      }
      puVar30 = &Core_Cameras_CameraManager__ApplySettings;
      auVar38 = func_0x00f78af4();
      goto code_r0x0163b65c;
    }
    *(uint *)(lVar22 + (long)(int)(uint)uVar11 * 4 + 0x20) = uVar25;
    if ((int)puVar19 == 0) {
      return uVar13;
    }
    puVar29 = *(undefined1 **)((long)puVar4 + -0x60);
    puVar30 = *(undefined **)((long)puVar4 + -0x58);
    param_3 = *(undefined1 **)((long)puVar4 + -0x70);
    param_2 = *(long *)((long)puVar4 + -0x68);
    plVar27 = *(long **)((long)puVar4 + -0x80);
    param_1 = *(ulong *)((long)puVar4 + -0x78);
    unaff_x24 = *(undefined8 **)((long)puVar4 + -0x90);
    plVar28 = *(long **)((long)puVar4 + -0x88);
    unaff_x26 = *(ulong *)((long)puVar4 + -0xa0);
    unaff_x25 = *(long *)((long)puVar4 + -0x98);
    unaff_d9 = *(undefined8 *)((long)puVar4 + -0xb0);
    unaff_d8 = *(undefined8 *)((long)puVar4 + -0xa8);
    puVar4 = (undefined8 *)((long)puVar4 + -0x50);
  }
  plVar15 = (long *)0x3d33350;
  auVar36._8_8_ = uVar8;
  auVar36._0_8_ = 0x3d33348;
  /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564((undefined1 *)((long)puVar4 + -0x50),*(long *)(uVar8 + 0x28),uRam0000000003d3ce20)
  ;
  uVar11 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0((undefined1 *)((long)puVar4 + -0x50),uRam0000000003d33350);
  if ((uVar11 & 1) == 0) {
    uVar8 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)puVar4 + -0x50),uRam0000000003d33348);
    return uVar8;
  }
  auVar38._8_8_ = *(undefined8 *)((long)puVar4 + -0x40);
  auVar38._0_8_ = uVar8;
  plVar21 = *(long **)((long)puVar4 + -0x38);
  puVar30 = &UNK_0163af90;
code_r0x0163b65c:
  uVar8 = auVar38._0_8_;
  auVar3._8_8_ = plVar21;
  auVar3._0_8_ = uVar8;
  *(long **)(puVar6 + -0x30) = plVar27;
  *(long **)(puVar6 + -0x28) = plVar15;
  *(undefined1 (*) [16])(puVar6 + -0x20) = auVar36;
  *(undefined1 **)(puVar6 + -0x10) = puVar29;
  *(undefined **)(puVar6 + -8) = puVar30;
  if (plVar21 != (long *)0x0) {
    uVar11 = uVar8;
    if (0 < (int)plVar21[3]) {
      plVar15 = (long *)0x0;
      plVar20 = (long *)(plVar21[3] & 0xffffffff);
      plVar27 = plVar21 + 4;
      do {
        if (plVar20 <= plVar15) {
          uVar10 = func_0x00f78b24(auVar38._0_8_,auVar38._8_8_);
          func_0x00f78ac0(uVar10,0);
          auVar36 = auVar3;
          goto code_r0x0163b6d0;
        }
        auVar38 = Core_Cameras_CameraManager__ApplySettings(uVar8,plVar27[(long)plVar15]);
        uVar11 = auVar38._0_8_;
        plVar15 = (long *)((long)plVar15 + 1);
        plVar20 = (long *)(ulong)*(uint *)(plVar21 + 3);
      } while ((long)plVar15 < (long)(int)*(uint *)(plVar21 + 3));
    }
    return uVar11;
  }
code_r0x0163b6d0:
  uVar8 = func_0x00f78af4();
  *(ulong *)(puVar6 + -0x80) = unaff_x26;
  *(long *)(puVar6 + -0x78) = unaff_x25;
  *(undefined8 **)(puVar6 + -0x70) = unaff_x24;
  *(long **)(puVar6 + -0x68) = plVar28;
  *(long **)(puVar6 + -0x60) = plVar27;
  *(long **)(puVar6 + -0x58) = plVar15;
  *(undefined1 (*) [16])(puVar6 + -0x50) = auVar36;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &Core_Cameras_CameraManager___ctor;
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar10,uRam0000000003d3ce08);
  *(undefined8 *)(uVar8 + 0x28) = uVar10;
  uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar10,uRam0000000003d3ce40);
  *(undefined8 *)(uVar8 + 0x38) = uVar10;
  uVar10 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(uVar8 + 0x40) = uVar10;
  return uVar8;
}



// ============================================================
// RVA: 0x163aed4 | Core.Cameras.CameraManager.SetPPAAType
// ============================================================

/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Cameras_CameraManager__SetPPAAType(ulong param_1,undefined4 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int extraout_w1;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 unaff_x19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint uVar22;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar23;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x29;
  undefined1 *puVar24;
  undefined8 unaff_x30;
  undefined *puVar25;
  undefined8 uVar26;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar27;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if ((int)param_3 == 0) {
    return param_1;
  }
  while( true ) {
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar24 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar9 = param_3;
    if ((bRam0000000003eb56d0 & 1) == 0) {
      func_0x00f78a20(0x3d33348);
      func_0x00f78a20(0x3d33350);
      func_0x00f78a20(0x3d33358);
      func_0x00f78a20(0x3d3ce20);
      bRam0000000003eb56d0 = 1;
      uVar9 = param_3;
    }
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    if (*(long *)(param_1 + 0x28) != 0) break;
    func_0x00f78af4();
    uVar20 = param_1;
    if (extraout_w1 == 1) {
      puVar10 = (ulong *)___cxa_begin_catch();
      uVar20 = *puVar10;
      ___cxa_end_catch();
      uVar11 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)register0x00000008 + -0x50),uRam0000000003eb5000
                              );
      if (uVar20 == 0) {
        return uVar11;
      }
      func_0x00f78ac0(uVar20,0);
    }
    auVar31 = __Unwind_Resume();
    uVar13 = auVar31._8_8_;
    param_1 = auVar31._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x98) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb5000;
    *(ulong *)((long)register0x00000008 + -0x68) = uVar20;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar24;
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Core_Cameras_CameraManager__UpdateLayerSettings;
    uVar2 = CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    if ((bRam0000000003eb56cb & 1) == 0) {
      func_0x00f78a20(0x3d3ce48);
      func_0x00f78a20(0x3d3ce50);
      func_0x00f78a20(0x3d3ce58);
      func_0x00f78a20(0x3d3ce60);
      bRam0000000003eb56cb = 1;
    }
    lVar23 = *(long *)(param_1 + 0x38);
    puVar5 = unaff_x24;
    if (lVar23 != 0) {
      unaff_x25 = 0;
      uVar20 = 0;
      unaff_x24 = (undefined8 *)0x3d3ce48;
      do {
        uVar22 = (uint)uVar20;
        if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar22) goto code_r0x0163b0d4;
        if (*(uint *)(lVar23 + 0x18) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(lVar23 + 0x10) + unaff_x25;
        lVar23 = *(long *)(lVar18 + 0x20);
        puVar5 = unaff_x24;
        if (lVar23 == 0) break;
        uVar1 = *(uint *)(lVar18 + 0x28);
        unaff_x26 = (ulong)uVar1;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(lVar23,uVar13,5,0);
        if (iVar8 != 0) {
          puVar5 = (undefined8 *)0x3d3ce48;
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar11 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$set_Item*/ func_0x025041d4(*(long *)(param_1 + 0x38),uVar20,lVar23,CONCAT44(uVar2,uVar1),
                                     uRam0000000003d3ce60);
            lVar18 = *(long *)(param_1 + 0x40);
            if (lVar18 != 0) {
              if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar18 + ((long)(unaff_x26 << 0x20) >> 0x1e) + 0x20) = uVar2;
                return uVar11;
              }
              goto code_r0x0163b1ac;
            }
          }
          break;
        }
        uVar20 = (ulong)(uVar22 + 1);
        lVar23 = *(long *)(param_1 + 0x38);
        unaff_x25 = unaff_x25 + 0x10;
      } while (lVar23 != 0);
    }
    do {
      do {
        unaff_x24 = puVar5;
        func_0x00f78af4();
code_r0x0163b0d4:
        uVar20 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(uVar13,0);
        puVar5 = unaff_x24;
      } while (*(long *)(param_1 + 0x38) == 0);
      param_3 = uVar20 & 0xffffffff | (ulong)uVar2 << 0x20;
      uVar11 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$Add*/ func_0x02504530(*(long *)(param_1 + 0x38),uVar13,param_3,*unaff_x24);
      lVar18 = *(long *)(param_1 + 0x40);
    } while (lVar18 == 0);
    if (*(uint *)(lVar18 + 0x18) <= (uint)uVar20) {
code_r0x0163b1ac:
      uVar12 = func_0x00f78b24();
      auVar31 = func_0x00f78ac0(uVar12,0);
      lVar18 = auVar31._0_8_;
      *(ulong *)((long)register0x00000008 + -0xe0) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar13;
      *(ulong *)((long)register0x00000008 + -0xd0) = uVar9;
      *(ulong *)((long)register0x00000008 + -200) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined **)((long)register0x00000008 + -0xb8) =
           &Core_Cameras_CameraManager__SetCameraViewport;
      if ((bRam0000000003eb56cc & 1) == 0) {
        func_0x00f78a20(0x3d204e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb56cc = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar17 = (long *)0x0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar18,0);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar19 = **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8);
      if (lVar19 == 0) {
code_r0x0163b2a4:
        func_0x00f78af4();
      }
      else if (auVar31._8_4_ < *(uint *)(lVar19 + 0x18)) {
        if (lVar18 != 0) {
          lVar19 = lVar19 + (long)(int)auVar31._8_4_ * 0x10;
          uVar29 = *(undefined4 *)(lVar19 + 0x28);
          uVar30 = *(undefined4 *)(lVar19 + 0x2c);
          uVar3 = *(undefined4 *)(lVar19 + 0x20);
          uVar28 = *(undefined4 *)(lVar19 + 0x24);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -200);
          *(undefined8 *)((long)register0x00000008 + -0xc0) =
               *(undefined8 *)((long)register0x00000008 + -0xc0);
          *(undefined8 *)((long)register0x00000008 + -0xb8) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined4 *)((long)register0x00000008 + -0xe0) = uVar3;
          *(undefined4 *)((long)register0x00000008 + -0xdc) = uVar28;
          *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar29;
          *(undefined4 *)((long)register0x00000008 + -0xd4) = uVar30;
          if (pcRam0000000003ebeed8 == (code *)0x0) {
            pcRam0000000003ebeed8 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)",
                                         0);
          }
          uVar9 = (*pcRam0000000003ebeed8)(lVar18,(undefined1 *)((long)register0x00000008 + -0xe0));
          return uVar9;
        }
        goto code_r0x0163b2a4;
      }
      uVar13 = func_0x00f78b24();
      uVar9 = func_0x00f78ac0(uVar13,0);
      *(undefined8 **)((long)register0x00000008 + -0x120) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x118) = lVar23;
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d23990;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d204e0;
      *(long *)((long)register0x00000008 + -0x100) = auVar31._8_8_;
      *(long *)((long)register0x00000008 + -0xf8) = lVar18;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -0xe8) = &Core_Cameras_CameraManager__CreateCamera;
      if ((bRam0000000003eb56cd & 1) == 0) {
        func_0x00f78a20(0x3d19110);
        func_0x00f78a20(0x3d577e0);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d1f578);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb56cd = 1;
      }
      plVar14 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
      plVar16 = /*UnityEngine.Camera_var*/ plRam0000000003d19110;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar15 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar16,0);
      if (plVar14 == (long *)0x0) {
code_r0x0163b494:
        func_0x00f78af4();
code_r0x0163b498:
        uVar13 = func_0x00f78b24();
        plVar15 = plVar16;
      }
      else {
        if ((plVar15 == (long *)0x0) ||
           (lVar23 = func_0x00f78adc(plVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar23 != 0)) {
          plVar16 = plVar15;
          if ((int)plVar14[3] != 0) {
            plVar14[4] = (long)plVar15;
            plVar16 = (long *)func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
            plVar17 = plVar14;
            /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(plVar16,uVar9,plVar14,0);
            if ((plVar16 != (long *)0x0) &&
               (uVar20 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar16,uRam0000000003d577e0), uVar20 != 0)) {
              /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar20,0,0);
              /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar20,0,0);
              /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar20,0,0);
              /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar20,0,0);
              /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
              /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar20,0);
              plVar17 = (long *)0x0;
              /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar20,2);
              lVar23 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar20,0);
              uVar9 = uVar20;
              if (lVar23 != 0) {
                *(undefined4 *)(lVar23 + 0x1c) = 0;
                *(undefined4 *)(lVar23 + 0x20) = 0;
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar23,0,0);
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar23,0,0);
                *(undefined1 *)(lVar23 + 0x18) = 0;
                *(undefined1 *)(lVar23 + 0x44) = 0;
                *(undefined4 *)(lVar23 + 0x48) = 0;
                return uVar20;
              }
            }
            goto code_r0x0163b494;
          }
          goto code_r0x0163b498;
        }
        uVar13 = func_0x00f78b14();
      }
      auVar31._8_8_ = uVar9;
      auVar31._0_8_ = plVar14;
      auVar32 = func_0x00f78ac0(uVar13,0);
      uVar20 = auVar32._8_8_;
      lVar23 = auVar32._0_8_;
      *(undefined8 **)((long)register0x00000008 + -0x160) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x158) = 0x3d1f578;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d25458;
      *(long **)((long)register0x00000008 + -0x148) = plVar15;
      *(long **)((long)register0x00000008 + -0x140) = plVar14;
      *(ulong *)((long)register0x00000008 + -0x138) = uVar9;
      *(undefined1 **)((long)register0x00000008 + -0x130) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined **)((long)register0x00000008 + -0x128) =
           &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
      plVar16 = plVar17;
      unaff_x22 = (long *)0x3d25458;
      unaff_x23 = 0x3d1f578;
      if (((lVar23 != 0) &&
          (plVar14 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar23,0), plVar15 = plVar17, auVar31 = auVar32,
          uVar20 != 0)) &&
         (lVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar20,0), unaff_x22 = plVar14, unaff_x23 = 0x3d1f578,
         plVar14 != (long *)0x0)) {
        /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(plVar14,0);
        unaff_x23 = 0;
        if (lVar18 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar18,0);
          /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar14,0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar18,0);
          /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(plVar14,0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar18,0);
          /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar23,0);
          uVar9 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(uVar20,0);
          if (((ulong)plVar17 & 1) != 0) {
            return uVar9;
          }
          /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar23,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(uVar20,0);
          /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar23,0);
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x130);
          uVar26 = *(undefined8 *)((long)register0x00000008 + -0x128);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x140);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x138);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x120);
          uVar27 = extraout_b0_00;
          goto UnityEngine_Camera__set_farClipPlane;
        }
      }
      uVar20 = func_0x00f78af4();
      puVar7 = (undefined1 *)((long)register0x00000008 + -0x180);
      *(undefined1 (*) [16])((long)register0x00000008 + -0x180) = auVar31;
      *(undefined1 **)((long)register0x00000008 + -0x170) =
           (undefined1 *)((long)register0x00000008 + -0x130);
      *(undefined **)((long)register0x00000008 + -0x168) =
           &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
      puVar24 = (undefined1 *)((long)register0x00000008 + -0x170);
      if (uVar20 != 0) {
        lVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar20,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar20;
        auVar31 = auVar32 << 0x40;
        if (lVar23 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar23,0);
          /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar23,0);
          /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar23,0);
          /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0,uVar20,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc((char)_UNK_033f83fc,uVar20,0);
          uVar27 = 0;
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x170);
          uVar26 = *(undefined8 *)((long)register0x00000008 + -0x168);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x180);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x178);
UnityEngine_Camera__set_farClipPlane:
          *(undefined8 *)(puVar6 + -0x30) = unaff_d9;
          *(ulong *)(puVar6 + -0x28) = (ulong)uVar2;
          *(undefined8 *)(puVar6 + -0x20) = uVar12;
          *(undefined8 *)(puVar6 + -0x18) = uVar21;
          *(undefined8 *)(puVar6 + -0x10) = uVar13;
          *(undefined8 *)(puVar6 + -8) = uVar26;
          if (pcRam0000000003ebead0 == (code *)0x0) {
            pcRam0000000003ebead0 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (*pcRam0000000003ebead0)(uVar27,uVar20);
          return uVar9;
        }
      }
      puVar25 = &Core_Cameras_CameraManager__ApplySettings;
      auVar33 = func_0x00f78af4();
      goto code_r0x0163b65c;
    }
    *(uint *)(lVar18 + (long)(int)(uint)uVar20 * 4 + 0x20) = uVar2;
    if ((int)uVar9 == 0) {
      return uVar11;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x24 = *(undefined8 **)((long)register0x00000008 + -0x90);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x26 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x25 = *(long *)((long)register0x00000008 + -0x98);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  plVar15 = (long *)0x3d33350;
  auVar31._8_8_ = param_1;
  auVar31._0_8_ = 0x3d33348;
  /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564((undefined1 *)((long)register0x00000008 + -0x50),*(long *)(param_1 + 0x28),
                  uRam0000000003d3ce20);
  uVar9 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0((undefined1 *)((long)register0x00000008 + -0x50),uRam0000000003d33350);
  if ((uVar9 & 1) == 0) {
    uVar9 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)register0x00000008 + -0x50),uRam0000000003d33348);
    return uVar9;
  }
  auVar33._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x40);
  auVar33._0_8_ = param_1;
  plVar16 = *(long **)((long)register0x00000008 + -0x38);
  puVar25 = &UNK_0163af90;
code_r0x0163b65c:
  uVar9 = auVar33._0_8_;
  auVar4._8_8_ = plVar16;
  auVar4._0_8_ = uVar9;
  *(long **)(puVar7 + -0x30) = unaff_x22;
  *(long **)(puVar7 + -0x28) = plVar15;
  *(undefined1 (*) [16])(puVar7 + -0x20) = auVar31;
  *(undefined1 **)(puVar7 + -0x10) = puVar24;
  *(undefined **)(puVar7 + -8) = puVar25;
  if (plVar16 != (long *)0x0) {
    uVar20 = uVar9;
    if (0 < (int)plVar16[3]) {
      plVar15 = (long *)0x0;
      plVar17 = (long *)(plVar16[3] & 0xffffffff);
      unaff_x22 = plVar16 + 4;
      do {
        if (plVar17 <= plVar15) {
          uVar13 = func_0x00f78b24(auVar33._0_8_,auVar33._8_8_);
          func_0x00f78ac0(uVar13,0);
          auVar31 = auVar4;
          goto code_r0x0163b6d0;
        }
        auVar33 = Core_Cameras_CameraManager__ApplySettings(uVar9,unaff_x22[(long)plVar15]);
        uVar20 = auVar33._0_8_;
        plVar15 = (long *)((long)plVar15 + 1);
        plVar17 = (long *)(ulong)*(uint *)(plVar16 + 3);
      } while ((long)plVar15 < (long)(int)*(uint *)(plVar16 + 3));
    }
    return uVar20;
  }
code_r0x0163b6d0:
  uVar9 = func_0x00f78af4();
  *(ulong *)(puVar7 + -0x80) = unaff_x26;
  *(long *)(puVar7 + -0x78) = unaff_x25;
  *(undefined8 **)(puVar7 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar7 + -0x68) = unaff_x23;
  *(long **)(puVar7 + -0x60) = unaff_x22;
  *(long **)(puVar7 + -0x58) = plVar15;
  *(undefined1 (*) [16])(puVar7 + -0x50) = auVar31;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &Core_Cameras_CameraManager___ctor;
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar13 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar13,uRam0000000003d3ce08);
  *(undefined8 *)(uVar9 + 0x28) = uVar13;
  uVar13 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar13,uRam0000000003d3ce40);
  *(undefined8 *)(uVar9 + 0x38) = uVar13;
  uVar13 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(uVar9 + 0x40) = uVar13;
  return uVar9;
}



// ============================================================
// RVA: 0x163aee4 | Core.Cameras.CameraManager.ApplySettings
// ============================================================

/* WARNING: Possible PIC construction at 0x0163af8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163af90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Cameras_CameraManager__ApplySettings(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  int extraout_w1;
  long lVar18;
  long lVar19;
  undefined8 unaff_x19;
  long lVar20;
  undefined8 uVar21;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint uVar22;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x29;
  undefined1 *puVar23;
  undefined8 unaff_x30;
  undefined *puVar24;
  undefined8 uVar25;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar26;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  while( true ) {
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar9 = param_3;
    if ((bRam0000000003eb56d0 & 1) == 0) {
      func_0x00f78a20(0x3d33348);
      func_0x00f78a20(0x3d33350);
      func_0x00f78a20(0x3d33358);
      func_0x00f78a20(0x3d3ce20);
      bRam0000000003eb56d0 = 1;
      uVar9 = param_3;
    }
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    if (*(long *)(param_1 + 0x28) != 0) break;
    func_0x00f78af4();
    lVar20 = param_1;
    if (extraout_w1 == 1) {
      plVar10 = (long *)___cxa_begin_catch();
      lVar20 = *plVar10;
      ___cxa_end_catch();
      uVar11 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)register0x00000008 + -0x50),uRam0000000003eb5000
                              );
      if (lVar20 == 0) {
        return uVar11;
      }
      func_0x00f78ac0(lVar20,0);
    }
    auVar30 = __Unwind_Resume();
    uVar14 = auVar30._8_8_;
    param_1 = auVar30._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x98) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb5000;
    *(long *)((long)register0x00000008 + -0x68) = lVar20;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar23;
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Core_Cameras_CameraManager__UpdateLayerSettings;
    uVar2 = CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    if ((bRam0000000003eb56cb & 1) == 0) {
      func_0x00f78a20(0x3d3ce48);
      func_0x00f78a20(0x3d3ce50);
      func_0x00f78a20(0x3d3ce58);
      func_0x00f78a20(0x3d3ce60);
      bRam0000000003eb56cb = 1;
    }
    lVar20 = *(long *)(param_1 + 0x38);
    puVar5 = unaff_x24;
    if (lVar20 != 0) {
      unaff_x25 = 0;
      uVar11 = 0;
      unaff_x24 = (undefined8 *)0x3d3ce48;
      do {
        uVar22 = (uint)uVar11;
        if ((int)*(uint *)(lVar20 + 0x18) <= (int)uVar22) goto code_r0x0163b0d4;
        if (*(uint *)(lVar20 + 0x18) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(lVar20 + 0x10) + unaff_x25;
        lVar20 = *(long *)(lVar18 + 0x20);
        puVar5 = unaff_x24;
        if (lVar20 == 0) break;
        uVar1 = *(uint *)(lVar18 + 0x28);
        unaff_x26 = (ulong)uVar1;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(lVar20,uVar14,5,0);
        if (iVar8 != 0) {
          puVar5 = (undefined8 *)0x3d3ce48;
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar12 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$set_Item*/ func_0x025041d4(*(long *)(param_1 + 0x38),uVar11,lVar20,CONCAT44(uVar2,uVar1),
                                     uRam0000000003d3ce60);
            lVar18 = *(long *)(param_1 + 0x40);
            if (lVar18 != 0) {
              if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar18 + ((long)(unaff_x26 << 0x20) >> 0x1e) + 0x20) = uVar2;
                return uVar12;
              }
              goto code_r0x0163b1ac;
            }
          }
          break;
        }
        uVar11 = (ulong)(uVar22 + 1);
        lVar20 = *(long *)(param_1 + 0x38);
        unaff_x25 = unaff_x25 + 0x10;
      } while (lVar20 != 0);
    }
    do {
      do {
        unaff_x24 = puVar5;
        func_0x00f78af4();
code_r0x0163b0d4:
        uVar11 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(uVar14,0);
        puVar5 = unaff_x24;
      } while (*(long *)(param_1 + 0x38) == 0);
      param_3 = uVar11 & 0xffffffff | (ulong)uVar2 << 0x20;
      uVar12 = /*System.Collections.Generic.List<CameraManager.LayerSettings>$$Add*/ func_0x02504530(*(long *)(param_1 + 0x38),uVar14,param_3,*unaff_x24);
      lVar18 = *(long *)(param_1 + 0x40);
    } while (lVar18 == 0);
    if (*(uint *)(lVar18 + 0x18) <= (uint)uVar11) {
code_r0x0163b1ac:
      uVar13 = func_0x00f78b24();
      auVar30 = func_0x00f78ac0(uVar13,0);
      lVar18 = auVar30._0_8_;
      *(ulong *)((long)register0x00000008 + -0xe0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar14;
      *(ulong *)((long)register0x00000008 + -0xd0) = uVar9;
      *(long *)((long)register0x00000008 + -200) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined **)((long)register0x00000008 + -0xb8) =
           &Core_Cameras_CameraManager__SetCameraViewport;
      if ((bRam0000000003eb56cc & 1) == 0) {
        func_0x00f78a20(0x3d204e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb56cc = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar10 = (long *)0x0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar18,0);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar19 = **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8);
      if (lVar19 == 0) {
code_r0x0163b2a4:
        func_0x00f78af4();
      }
      else if (auVar30._8_4_ < *(uint *)(lVar19 + 0x18)) {
        if (lVar18 != 0) {
          lVar19 = lVar19 + (long)(int)auVar30._8_4_ * 0x10;
          uVar28 = *(undefined4 *)(lVar19 + 0x28);
          uVar29 = *(undefined4 *)(lVar19 + 0x2c);
          uVar3 = *(undefined4 *)(lVar19 + 0x20);
          uVar27 = *(undefined4 *)(lVar19 + 0x24);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -200);
          *(undefined8 *)((long)register0x00000008 + -0xc0) =
               *(undefined8 *)((long)register0x00000008 + -0xc0);
          *(undefined8 *)((long)register0x00000008 + -0xb8) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined4 *)((long)register0x00000008 + -0xe0) = uVar3;
          *(undefined4 *)((long)register0x00000008 + -0xdc) = uVar27;
          *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar28;
          *(undefined4 *)((long)register0x00000008 + -0xd4) = uVar29;
          if (pcRam0000000003ebeed8 == (code *)0x0) {
            pcRam0000000003ebeed8 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)",
                                         0);
          }
          uVar9 = (*pcRam0000000003ebeed8)(lVar18,(undefined1 *)((long)register0x00000008 + -0xe0));
          return uVar9;
        }
        goto code_r0x0163b2a4;
      }
      uVar14 = func_0x00f78b24();
      uVar9 = func_0x00f78ac0(uVar14,0);
      *(undefined8 **)((long)register0x00000008 + -0x120) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x118) = lVar20;
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d23990;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d204e0;
      *(long *)((long)register0x00000008 + -0x100) = auVar30._8_8_;
      *(long *)((long)register0x00000008 + -0xf8) = lVar18;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -0xe8) = &Core_Cameras_CameraManager__CreateCamera;
      if ((bRam0000000003eb56cd & 1) == 0) {
        func_0x00f78a20(0x3d19110);
        func_0x00f78a20(0x3d577e0);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d1f578);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb56cd = 1;
      }
      plVar15 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
      plVar17 = /*UnityEngine.Camera_var*/ plRam0000000003d19110;
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar16 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar17,0);
      if (plVar15 == (long *)0x0) {
code_r0x0163b494:
        func_0x00f78af4();
code_r0x0163b498:
        uVar14 = func_0x00f78b24();
        plVar16 = plVar17;
      }
      else {
        if ((plVar16 == (long *)0x0) ||
           (lVar20 = func_0x00f78adc(plVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar20 != 0)) {
          plVar17 = plVar16;
          if ((int)plVar15[3] != 0) {
            plVar15[4] = (long)plVar16;
            plVar17 = (long *)func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
            plVar10 = plVar15;
            /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(plVar17,uVar9,plVar15,0);
            if ((plVar17 != (long *)0x0) &&
               (uVar11 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar17,uRam0000000003d577e0), uVar11 != 0)) {
              /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar11,0,0);
              /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar11,0,0);
              /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar11,0,0);
              /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar11,0,0);
              /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
              /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar11,0);
              plVar10 = (long *)0x0;
              /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar11,2);
              lVar20 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar11,0);
              uVar9 = uVar11;
              if (lVar20 != 0) {
                *(undefined4 *)(lVar20 + 0x1c) = 0;
                *(undefined4 *)(lVar20 + 0x20) = 0;
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar20,0,0);
                /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar20,0,0);
                *(undefined1 *)(lVar20 + 0x18) = 0;
                *(undefined1 *)(lVar20 + 0x44) = 0;
                *(undefined4 *)(lVar20 + 0x48) = 0;
                return uVar11;
              }
            }
            goto code_r0x0163b494;
          }
          goto code_r0x0163b498;
        }
        uVar14 = func_0x00f78b14();
      }
      auVar30._8_8_ = uVar9;
      auVar30._0_8_ = plVar15;
      auVar31 = func_0x00f78ac0(uVar14,0);
      uVar11 = auVar31._8_8_;
      lVar20 = auVar31._0_8_;
      *(undefined8 **)((long)register0x00000008 + -0x160) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x158) = 0x3d1f578;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d25458;
      *(long **)((long)register0x00000008 + -0x148) = plVar16;
      *(long **)((long)register0x00000008 + -0x140) = plVar15;
      *(ulong *)((long)register0x00000008 + -0x138) = uVar9;
      *(undefined1 **)((long)register0x00000008 + -0x130) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined **)((long)register0x00000008 + -0x128) =
           &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
      plVar17 = plVar10;
      unaff_x22 = (long *)0x3d25458;
      unaff_x23 = 0x3d1f578;
      if (((lVar20 != 0) &&
          (plVar15 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar20,0), plVar16 = plVar10, auVar30 = auVar31,
          uVar11 != 0)) &&
         (lVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar11,0), unaff_x22 = plVar15, unaff_x23 = 0x3d1f578,
         plVar15 != (long *)0x0)) {
        /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(plVar15,0);
        unaff_x23 = 0;
        if (lVar18 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar18,0);
          /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(plVar15,0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar18,0);
          /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(plVar15,0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar18,0);
          /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar20,0);
          uVar9 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(uVar11,0);
          if (((ulong)plVar10 & 1) != 0) {
            return uVar9;
          }
          /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar20,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(uVar11,0);
          /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar20,0);
          uVar14 = *(undefined8 *)((long)register0x00000008 + -0x130);
          uVar25 = *(undefined8 *)((long)register0x00000008 + -0x128);
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x140);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x138);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x120);
          uVar26 = extraout_b0_00;
          goto UnityEngine_Camera__set_farClipPlane;
        }
      }
      uVar11 = func_0x00f78af4();
      puVar7 = (undefined1 *)((long)register0x00000008 + -0x180);
      *(undefined1 (*) [16])((long)register0x00000008 + -0x180) = auVar30;
      *(undefined1 **)((long)register0x00000008 + -0x170) =
           (undefined1 *)((long)register0x00000008 + -0x130);
      *(undefined **)((long)register0x00000008 + -0x168) =
           &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
      puVar23 = (undefined1 *)((long)register0x00000008 + -0x170);
      if (uVar11 != 0) {
        lVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar11,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar11;
        auVar30 = auVar31 << 0x40;
        if (lVar20 != 0) {
          /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar20,0);
          /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar20,0);
          /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
          /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar20,0);
          /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0,uVar11,0);
          /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc((char)_UNK_033f83fc,uVar11,0);
          uVar26 = 0;
          uVar14 = *(undefined8 *)((long)register0x00000008 + -0x170);
          uVar25 = *(undefined8 *)((long)register0x00000008 + -0x168);
          puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
          uVar13 = *(undefined8 *)((long)register0x00000008 + -0x180);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x178);
UnityEngine_Camera__set_farClipPlane:
          *(undefined8 *)(puVar6 + -0x30) = unaff_d9;
          *(ulong *)(puVar6 + -0x28) = (ulong)uVar2;
          *(undefined8 *)(puVar6 + -0x20) = uVar13;
          *(undefined8 *)(puVar6 + -0x18) = uVar21;
          *(undefined8 *)(puVar6 + -0x10) = uVar14;
          *(undefined8 *)(puVar6 + -8) = uVar25;
          if (pcRam0000000003ebead0 == (code *)0x0) {
            pcRam0000000003ebead0 =
                 (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (*pcRam0000000003ebead0)(uVar26,uVar11);
          return uVar9;
        }
      }
      puVar24 = &Core_Cameras_CameraManager__ApplySettings;
      auVar32 = func_0x00f78af4();
      goto code_r0x0163b65c;
    }
    *(uint *)(lVar18 + (long)(int)(uint)uVar11 * 4 + 0x20) = uVar2;
    if ((int)uVar9 == 0) {
      return uVar12;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x24 = *(undefined8 **)((long)register0x00000008 + -0x90);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x26 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x25 = *(long *)((long)register0x00000008 + -0x98);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  plVar16 = (long *)0x3d33350;
  auVar30._8_8_ = param_1;
  auVar30._0_8_ = 0x3d33348;
  /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564((undefined1 *)((long)register0x00000008 + -0x50),*(long *)(param_1 + 0x28),
                  uRam0000000003d3ce20);
  uVar9 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0((undefined1 *)((long)register0x00000008 + -0x50),uRam0000000003d33350);
  if ((uVar9 & 1) == 0) {
    uVar9 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac((undefined1 *)((long)register0x00000008 + -0x50),uRam0000000003d33348);
    return uVar9;
  }
  auVar32._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x40);
  auVar32._0_8_ = param_1;
  plVar17 = *(long **)((long)register0x00000008 + -0x38);
  puVar24 = (undefined *)0x163af90;
code_r0x0163b65c:
  uVar9 = auVar32._0_8_;
  auVar4._8_8_ = plVar17;
  auVar4._0_8_ = uVar9;
  *(long **)(puVar7 + -0x30) = unaff_x22;
  *(long **)(puVar7 + -0x28) = plVar16;
  *(undefined1 (*) [16])(puVar7 + -0x20) = auVar30;
  *(undefined1 **)(puVar7 + -0x10) = puVar23;
  *(undefined **)(puVar7 + -8) = puVar24;
  if (plVar17 != (long *)0x0) {
    uVar11 = uVar9;
    if (0 < (int)plVar17[3]) {
      plVar16 = (long *)0x0;
      plVar10 = (long *)(plVar17[3] & 0xffffffff);
      unaff_x22 = plVar17 + 4;
      do {
        if (plVar10 <= plVar16) {
          uVar14 = func_0x00f78b24(auVar32._0_8_,auVar32._8_8_);
          func_0x00f78ac0(uVar14,0);
          auVar30 = auVar4;
          goto code_r0x0163b6d0;
        }
        auVar32 = Core_Cameras_CameraManager__ApplySettings(uVar9,unaff_x22[(long)plVar16]);
        uVar11 = auVar32._0_8_;
        plVar16 = (long *)((long)plVar16 + 1);
        plVar10 = (long *)(ulong)*(uint *)(plVar17 + 3);
      } while ((long)plVar16 < (long)(int)*(uint *)(plVar17 + 3));
    }
    return uVar11;
  }
code_r0x0163b6d0:
  uVar9 = func_0x00f78af4();
  *(ulong *)(puVar7 + -0x80) = unaff_x26;
  *(long *)(puVar7 + -0x78) = unaff_x25;
  *(undefined8 **)(puVar7 + -0x70) = unaff_x24;
  *(undefined8 *)(puVar7 + -0x68) = unaff_x23;
  *(long **)(puVar7 + -0x60) = unaff_x22;
  *(long **)(puVar7 + -0x58) = plVar16;
  *(undefined1 (*) [16])(puVar7 + -0x50) = auVar30;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &Core_Cameras_CameraManager___ctor;
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar14 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar14,uRam0000000003d3ce08);
  *(undefined8 *)(uVar9 + 0x28) = uVar14;
  uVar14 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar14,uRam0000000003d3ce40);
  *(undefined8 *)(uVar9 + 0x38) = uVar14;
  uVar14 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(uVar9 + 0x40) = uVar14;
  return uVar9;
}



// ============================================================
// RVA: 0x163aff0 | Core.Cameras.CameraManager.UpdateLayerSettings
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x163b1b8 | Core.Cameras.CameraManager.SetCameraViewport
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Cameras_CameraManager__SetCameraViewport(long param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 ***pppuVar15;
  undefined4 uVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar17 [16];
  undefined *puStack_b8;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb56cc & 1) == 0) {
    func_0x00f78a20(0x3d204e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb56cc = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = (long *)0x0;
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_1,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  if (((*(ushort *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8) == 0) {
code_r0x0163b2a4:
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(**(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8) + 0x18)) {
    if (param_1 != 0) {
      if (pcRam0000000003ebeed8 == (code *)0x0) {
        pcRam0000000003ebeed8 =
             (code *)func_0x00f789d4("UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)",0);
      }
      uVar4 = (*pcRam0000000003ebeed8)(param_1,&stack0xffffffffffffffd0);
      return uVar4;
    }
    goto code_r0x0163b2a4;
  }
  uVar5 = func_0x00f78b24();
  uVar4 = func_0x00f78ac0(uVar5,0);
  puStack_38 = &Core_Cameras_CameraManager__CreateCamera;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb56cd & 1) == 0) {
    func_0x00f78a20(0x3d19110);
    func_0x00f78a20(0x3d577e0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb56cd = 1;
  }
  plVar6 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
  uVar5 = /*UnityEngine.Camera_var*/ uRam0000000003d19110;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (plVar6 == (long *)0x0) {
code_r0x0163b494:
    func_0x00f78af4();
code_r0x0163b498:
    uVar5 = func_0x00f78b24();
  }
  else {
    if ((lVar7 == 0) || (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 != 0)
       ) {
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar7;
        lVar7 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
        plVar12 = plVar6;
        /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(lVar7,uVar4,plVar6,0);
        if ((lVar7 != 0) && (uVar9 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d577e0), uVar9 != 0)) {
          /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(uVar9,0,0);
          /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(uVar9,0,0);
          /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(uVar9,0,0);
          /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(uVar9,0,0);
          /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
          /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(uVar9,0);
          plVar12 = (long *)0x0;
          /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(uVar9,2);
          lVar7 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(uVar9,0);
          uVar4 = uVar9;
          if (lVar7 != 0) {
            *(undefined4 *)(lVar7 + 0x1c) = 0;
            *(undefined4 *)(lVar7 + 0x20) = 0;
            /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar7,0,0);
            /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar7,0,0);
            *(undefined1 *)(lVar7 + 0x18) = 0;
            *(undefined1 *)(lVar7 + 0x44) = 0;
            *(undefined4 *)(lVar7 + 0x48) = 0;
            return uVar9;
          }
        }
        goto code_r0x0163b494;
      }
      goto code_r0x0163b498;
    }
    uVar5 = func_0x00f78b14();
  }
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = plVar6;
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = plVar6;
  auVar17 = func_0x00f78ac0(uVar5,0);
  lVar8 = auVar17._8_8_;
  lVar7 = auVar17._0_8_;
  puStack_78 = &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
  pppuVar15 = &ppuStack_80;
  plVar6 = plVar12;
  ppuStack_80 = &puStack_40;
  if ((((lVar7 != 0) && (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0), auVar1 = auVar17, lVar8 != 0)) &&
      (lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0), lVar10 != 0)) && (/*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar10,0), lVar11 != 0))
  {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar11,0);
    /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar10,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar11,0);
    /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar10,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar11,0);
    /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar7,0);
    uVar4 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(lVar8,0);
    if (((ulong)plVar12 & 1) != 0) {
      return uVar4;
    }
    /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar7,0);
    /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(lVar8,0);
    uVar16 = /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar7,0);
    puVar3 = &stack0xffffffffffffff90;
    pppuVar15 = (undefined8 ***)ppuStack_80;
    puStack_b8 = puStack_78;
    auVar1 = auVar2;
UnityEngine_Camera__set_farClipPlane:
    *(undefined8 *)(puVar3 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x28) = unaff_d8;
    *(undefined1 (*) [16])(puVar3 + -0x20) = auVar1;
    *(undefined8 ****)(puVar3 + -0x10) = pppuVar15;
    *(undefined **)(puVar3 + -8) = puStack_b8;
    if (pcRam0000000003ebead0 == (code *)0x0) {
      pcRam0000000003ebead0 =
           (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebead0)(uVar16,lVar8);
    return uVar4;
  }
  lVar8 = func_0x00f78af4();
  puStack_b8 = &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
  if (lVar8 != 0) {
    lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (lVar7 != 0) {
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar7,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar7,0);
      /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar7,0);
      /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0x42700000,lVar8,0);
      /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(_UNK_033f83fc,lVar8,0);
      uVar16 = 0x447a0000;
      puVar3 = &stack0xffffffffffffff50;
      goto UnityEngine_Camera__set_farClipPlane;
    }
  }
  uVar4 = func_0x00f78af4();
  if (plVar6 == (long *)0x0) {
code_r0x0163b6d0:
    uVar4 = func_0x00f78af4();
    if ((bRam0000000003eb56d4 & 1) == 0) {
      func_0x00f78a20(0x3d3ce08);
      func_0x00f78a20(0x3d3ce40);
      func_0x00f78a20(0x3d1e0b0);
      func_0x00f78a20(0x3d1e0a8);
      func_0x00f78a20(0x3d1f3d8);
      bRam0000000003eb56d4 = 1;
    }
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
    /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar5,uRam0000000003d3ce08);
    *(undefined8 *)(uVar4 + 0x28) = uVar5;
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
    /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar5,uRam0000000003d3ce40);
    *(undefined8 *)(uVar4 + 0x38) = uVar5;
    uVar5 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
    *(undefined8 *)(uVar4 + 0x40) = uVar5;
    return uVar4;
  }
  uVar9 = uVar4;
  if (0 < (int)plVar6[3]) {
    uVar14 = 0;
    uVar13 = plVar6[3] & 0xffffffff;
    do {
      if (uVar13 <= uVar14) {
        uVar5 = func_0x00f78b24();
        func_0x00f78ac0(uVar5,0);
        goto code_r0x0163b6d0;
      }
      uVar9 = Core_Cameras_CameraManager__ApplySettings(uVar4,plVar6[uVar14 + 4]);
      uVar14 = uVar14 + 1;
      uVar13 = (ulong)*(uint *)(plVar6 + 3);
    } while ((long)uVar14 < (long)(int)*(uint *)(plVar6 + 3));
  }
  return uVar9;
}



// ============================================================
// RVA: 0x163b2b4 | Core.Cameras.CameraManager.CreateCamera
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Core_Cameras_CameraManager__CreateCamera(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 ***pppuVar12;
  undefined4 uVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  undefined *puStack_88;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb56cd & 1) == 0) {
    func_0x00f78a20(0x3d19110);
    func_0x00f78a20(0x3d577e0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb56cd = 1;
  }
  plVar4 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
  uVar7 = /*UnityEngine.Camera_var*/ uRam0000000003d19110;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar4 == (long *)0x0) {
LAB_0163b494:
    func_0x00f78af4();
LAB_0163b498:
    uVar7 = func_0x00f78b24();
  }
  else {
    if ((lVar5 == 0) || (lVar6 = func_0x00f78adc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 != 0)
       ) {
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar5;
        lVar5 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
        param_3 = plVar4;
        /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(lVar5,param_1,plVar4,0);
        if ((lVar5 != 0) && (lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d577e0), lVar5 != 0)) {
          /*UnityEngine.Camera$$set_cullingMask*/ func_0x0321dbb4(lVar5,0,0);
          /*UnityEngine.Camera$$set_allowMSAA*/ func_0x0321d41c(lVar5,0,0);
          /*UnityEngine.Camera$$set_allowHDR*/ func_0x0321d38c(lVar5,0,0);
          /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(lVar5,0,0);
          /*UnityEngine.Color$$get_black*/ func_0x032235bc(0);
          /*UnityEngine.Camera$$set_backgroundColor*/ func_0x0321e318(lVar5,0);
          param_3 = (long *)0x0;
          /*UnityEngine.Camera$$set_clearFlags*/ func_0x0321e400(lVar5,2);
          lVar6 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(lVar5,0);
          param_1 = lVar5;
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x1c) = 0;
            *(undefined4 *)(lVar6 + 0x20) = 0;
            /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresColorTexture*/ func_0x0315ba70(lVar6,0,0);
            /*UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$set_requiresDepthTexture*/ func_0x0315b9c8(lVar6,0,0);
            *(undefined1 *)(lVar6 + 0x18) = 0;
            *(undefined1 *)(lVar6 + 0x44) = 0;
            *(undefined4 *)(lVar6 + 0x48) = 0;
            return lVar5;
          }
        }
        goto LAB_0163b494;
      }
      goto LAB_0163b498;
    }
    uVar7 = func_0x00f78b14();
  }
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = plVar4;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = plVar4;
  auVar14 = func_0x00f78ac0(uVar7,0);
  lVar6 = auVar14._8_8_;
  lVar5 = auVar14._0_8_;
  puStack_48 = &Core_Cameras_CameraManager__CopyPhysicalCameraSettings;
  pppuVar12 = &ppuStack_50;
  plVar4 = param_3;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((((lVar5 != 0) && (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), auVar1 = auVar14, lVar6 != 0)) &&
      (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0), lVar8 != 0)) && (/*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar8,0), lVar9 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar9,0);
    /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar8,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar9,0);
    /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar8,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar9,0);
    /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(lVar5,0);
    lVar8 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(lVar6,0);
    if (((ulong)param_3 & 1) != 0) {
      return lVar8;
    }
    /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(lVar5,0);
    /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(lVar6,0);
    uVar13 = /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(lVar5,0);
    puVar3 = &stack0xffffffffffffffc0;
    pppuVar12 = (undefined8 ***)ppuStack_50;
    puStack_88 = puStack_48;
    auVar1 = auVar2;
UnityEngine_Camera__set_farClipPlane:
    *(undefined8 *)(puVar3 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x28) = unaff_d8;
    *(undefined1 (*) [16])(puVar3 + -0x20) = auVar1;
    *(undefined8 ****)(puVar3 + -0x10) = pppuVar12;
    *(undefined **)(puVar3 + -8) = puStack_88;
    if (pcRam0000000003ebead0 == (code *)0x0) {
      pcRam0000000003ebead0 =
           (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*pcRam0000000003ebead0)(uVar13,lVar6);
    return lVar5;
  }
  lVar6 = func_0x00f78af4();
  puStack_88 = &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
  if (lVar6 != 0) {
    lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (lVar5 != 0) {
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar5,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar5,0);
      /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar5,0);
      /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0x42700000,lVar6,0);
      /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(_UNK_033f83fc,lVar6,0);
      uVar13 = 0x447a0000;
      puVar3 = &stack0xffffffffffffff80;
      goto UnityEngine_Camera__set_farClipPlane;
    }
  }
  lVar5 = func_0x00f78af4();
  if (plVar4 == (long *)0x0) {
code_r0x0163b6d0:
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb56d4 & 1) == 0) {
      func_0x00f78a20(0x3d3ce08);
      func_0x00f78a20(0x3d3ce40);
      func_0x00f78a20(0x3d1e0b0);
      func_0x00f78a20(0x3d1e0a8);
      func_0x00f78a20(0x3d1f3d8);
      bRam0000000003eb56d4 = 1;
    }
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
    /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar7,uRam0000000003d3ce08);
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
    uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
    /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar7,uRam0000000003d3ce40);
    *(undefined8 *)(lVar5 + 0x38) = uVar7;
    uVar7 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
    *(undefined8 *)(lVar5 + 0x40) = uVar7;
    return lVar5;
  }
  lVar6 = lVar5;
  if (0 < (int)plVar4[3]) {
    uVar11 = 0;
    uVar10 = plVar4[3] & 0xffffffff;
    do {
      if (uVar10 <= uVar11) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
        goto code_r0x0163b6d0;
      }
      lVar6 = Core_Cameras_CameraManager__ApplySettings(lVar5,plVar4[uVar11 + 4]);
      uVar11 = uVar11 + 1;
      uVar10 = (ulong)*(uint *)(plVar4 + 3);
    } while ((long)uVar11 < (long)(int)*(uint *)(plVar4 + 3));
  }
  return lVar6;
}



// ============================================================
// RVA: 0x163b4ac | Core.Cameras.CameraManager.CopyPhysicalCameraSettings
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Core_Cameras_CameraManager__CopyPhysicalCameraSettings(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined4 uVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_48;
  
  puVar9 = &stack0xfffffffffffffff0;
  uVar6 = param_3;
  lVar3 = unaff_x19;
  lVar4 = unaff_x20;
  if ((((param_1 != 0) &&
       (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0), lVar3 = param_2, lVar4 = param_1, param_2 != 0)) &&
      (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0), lVar1 != 0)) && (/*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar1,0), lVar2 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar2,0);
    /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar1,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar2,0);
    /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar1,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar2,0);
    /*UnityEngine.Camera$$get_fieldOfView*/ func_0x0321d1ac(param_1,0);
    lVar3 = /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(param_2,0);
    if ((param_3 & 1) != 0) {
      return lVar3;
    }
    /*UnityEngine.Camera$$get_nearClipPlane*/ func_0x0321d08c(param_1,0);
    /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(param_2,0);
    uVar10 = /*UnityEngine.Camera$$get_farClipPlane*/ func_0x0321d11c(param_1,0);
    puVar9 = unaff_x29;
UnityEngine_Camera__set_farClipPlane:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebead0 == (code *)0x0) {
      pcRam0000000003ebead0 =
           (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebead0)(uVar10,param_2);
    return lVar3;
  }
  unaff_x20 = lVar4;
  unaff_x19 = lVar3;
  param_2 = func_0x00f78af4();
  puStack_48 = &Core_Cameras_CameraManager__ResetPhysicalCameraSettings;
  if (param_2 != 0) {
    lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (lVar3 != 0) {
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar3,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar3,0);
      /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar3,0);
      /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0x42700000,param_2,0);
      /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(_UNK_033f83fc,param_2,0);
      uVar10 = 0x447a0000;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x30 = puStack_48;
      goto UnityEngine_Camera__set_farClipPlane;
    }
  }
  lVar3 = func_0x00f78af4();
  if (uVar6 == 0) {
code_r0x0163b6d0:
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003eb56d4 & 1) == 0) {
      func_0x00f78a20(0x3d3ce08);
      func_0x00f78a20(0x3d3ce40);
      func_0x00f78a20(0x3d1e0b0);
      func_0x00f78a20(0x3d1e0a8);
      func_0x00f78a20(0x3d1f3d8);
      bRam0000000003eb56d4 = 1;
    }
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
    /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar5,uRam0000000003d3ce08);
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
    /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar5,uRam0000000003d3ce40);
    *(undefined8 *)(lVar3 + 0x38) = uVar5;
    uVar5 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
    *(undefined8 *)(lVar3 + 0x40) = uVar5;
    return lVar3;
  }
  lVar4 = lVar3;
  if (0 < (int)*(ulong *)(uVar6 + 0x18)) {
    uVar8 = 0;
    uVar7 = *(ulong *)(uVar6 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar8) {
        uVar5 = func_0x00f78b24();
        func_0x00f78ac0(uVar5,0);
        goto code_r0x0163b6d0;
      }
      lVar4 = Core_Cameras_CameraManager__ApplySettings
                        (lVar3,*(undefined8 *)(uVar6 + 0x20 + uVar8 * 8));
      uVar8 = uVar8 + 1;
      uVar7 = (ulong)*(uint *)(uVar6 + 0x18);
    } while ((long)uVar8 < (long)(int)*(uint *)(uVar6 + 0x18));
  }
  return lVar4;
}



// ============================================================
// RVA: 0x163b5b4 | Core.Cameras.CameraManager.ResetPhysicalCameraSettings
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Core_Cameras_CameraManager__ResetPhysicalCameraSettings
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (lVar1 != 0) {
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar1,0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar1,0);
      /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
      /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(0x42700000,param_1,0);
      /*UnityEngine.Camera$$set_nearClipPlane*/ func_0x0321d0cc(_UNK_033f83fc,param_1,0);
      if (pcRam0000000003ebead0 == (code *)0x0) {
        pcRam0000000003ebead0 =
             (code *)func_0x00f789d4("UnityEngine.Camera::set_farClipPlane(System.Single)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (*pcRam0000000003ebead0)(0x447a0000,param_1);
      return lVar1;
    }
  }
  lVar1 = func_0x00f78af4();
  if (param_3 != 0) {
    lVar2 = lVar1;
    if (0 < (int)*(ulong *)(param_3 + 0x18)) {
      uVar5 = 0;
      uVar4 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar5) {
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x0163b6d0;
        }
        lVar2 = Core_Cameras_CameraManager__ApplySettings
                          (lVar1,*(undefined8 *)(param_3 + 0x20 + uVar5 * 8));
        uVar5 = uVar5 + 1;
        uVar4 = (ulong)*(uint *)(param_3 + 0x18);
      } while ((long)uVar5 < (long)(int)*(uint *)(param_3 + 0x18));
    }
    return lVar2;
  }
code_r0x0163b6d0:
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar3,uRam0000000003d3ce08);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar3,uRam0000000003d3ce40);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  uVar3 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(lVar1 + 0x40) = uVar3;
  return lVar1;
}



// ============================================================
// RVA: 0x163b65c | Core.Cameras.CameraManager.ApplySettings
// ============================================================

long Core_Cameras_CameraManager__ApplySettings(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
LAB_0163b6d0:
    lVar1 = func_0x00f78af4();
    if ((bRam0000000003eb56d4 & 1) == 0) {
      func_0x00f78a20(0x3d3ce08);
      func_0x00f78a20(0x3d3ce40);
      func_0x00f78a20(0x3d1e0b0);
      func_0x00f78a20(0x3d1e0a8);
      func_0x00f78a20(0x3d1f3d8);
      bRam0000000003eb56d4 = 1;
    }
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
    /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar2,uRam0000000003d3ce08);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
    /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar2,uRam0000000003d3ce40);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    uVar2 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    return lVar1;
  }
  lVar1 = param_1;
  if (0 < (int)*(ulong *)(param_3 + 0x18)) {
    uVar4 = 0;
    uVar3 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar4) {
        uVar2 = func_0x00f78b24();
        func_0x00f78ac0(uVar2,0);
        goto LAB_0163b6d0;
      }
      lVar1 = Core_Cameras_CameraManager__ApplySettings
                        (param_1,*(undefined8 *)(param_3 + 0x20 + uVar4 * 8));
      uVar4 = uVar4 + 1;
      uVar3 = (ulong)*(uint *)(param_3 + 0x18);
    } while ((long)uVar4 < (long)(int)*(uint *)(param_3 + 0x18));
  }
  return lVar1;
}



// ============================================================
// RVA: 0x163b6d4 | Core.Cameras.CameraManager..ctor
// ============================================================

undefined1  [16] Core_Cameras_CameraManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb56d4 & 1) == 0) {
    func_0x00f78a20(0x3d3ce08);
    func_0x00f78a20(0x3d3ce40);
    func_0x00f78a20(0x3d1e0b0);
    func_0x00f78a20(0x3d1e0a8);
    func_0x00f78a20(0x3d1f3d8);
    bRam0000000003eb56d4 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.CameraData>_TypeInfo*/ uRam0000000003d1e0a8);
  /*System.Collections.Generic.List<CameraManager.CameraData>$$.ctor*/ func_0x02500d98(uVar1,uRam0000000003d3ce08);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<CameraManager.LayerSettings>_TypeInfo*/ uRam0000000003d1e0b0);
  /*System.Collections.Generic.List<CameraManager.LayerSettings>$$.ctor*/ func_0x02503868(uVar1,uRam0000000003d3ce40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,0x20);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x163b7c8 | Core.Cameras.CameraManager..cctor
// ============================================================

void Core_Cameras_CameraManager___cctor(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
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
  
  if ((bRam0000000003eb56d5 & 1) == 0) {
    func_0x00f78a20(0x3d204e0);
    func_0x00f78a20(0x3d1f2f8);
    bRam0000000003eb56d5 = 1;
  }
  lVar1 = func_0x00f78a34(/*UnityEngine.Rect[]_TypeInfo*/ uRam0000000003d1f2f8,5);
  uStack_30 = 0;
  uStack_28 = 0;
  /*UnityEngine.Rect$$.ctor*/ func_0x03253480(0,0,0x3f800000,0x3f800000,&uStack_30,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = uStack_28;
      *(undefined8 *)(lVar1 + 0x20) = uStack_30;
      uStack_40 = 0;
      uStack_38 = 0;
      /*UnityEngine.Rect$$.ctor*/ func_0x03253480(0,0,0x3f000000,0x3f000000,&uStack_40,0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x38) = uStack_38;
        *(undefined8 *)(lVar1 + 0x30) = uStack_40;
        uStack_50 = 0;
        uStack_48 = 0;
        /*UnityEngine.Rect$$.ctor*/ func_0x03253480(0x3f000000,0,0x3f000000,0x3f000000,&uStack_50,0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x48) = uStack_48;
          *(undefined8 *)(lVar1 + 0x40) = uStack_50;
          uStack_60 = 0;
          uStack_58 = 0;
          /*UnityEngine.Rect$$.ctor*/ func_0x03253480(0,0x3f000000,0x3f000000,0x3f000000,&uStack_60,0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x58) = uStack_58;
            *(undefined8 *)(lVar1 + 0x50) = uStack_60;
            uStack_70 = 0;
            uStack_68 = 0;
            /*UnityEngine.Rect$$.ctor*/ func_0x03253480(0x3f000000,0x3f000000,0x3f000000,0x3f000000,&uStack_70,0);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x68) = uStack_68;
              *(undefined8 *)(lVar1 + 0x60) = uStack_70;
              **(long **)(/*Core.Cameras.CameraManager_TypeInfo*/ lRam0000000003d204e0 + 0xb8) = lVar1;
              return;
            }
          }
        }
      }
    }
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
  auVar3 = func_0x00f78af4();
  *auVar3._0_8_ = auVar3._8_8_;
  auVar3._0_8_[1] = param_3;
  return;
}



