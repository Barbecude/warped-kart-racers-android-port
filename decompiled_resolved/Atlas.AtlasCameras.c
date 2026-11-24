// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.AtlasCameras

// ============================================================
// RVA: 0x1461034 | Atlas.AtlasCameras.Init
// ============================================================

void Atlas_AtlasCameras__Init(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



// ============================================================
// RVA: 0x146103c | Atlas.AtlasCameras.DeInit
// ============================================================

long Atlas_AtlasCameras__DeInit(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4810 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6d1b8);
    func_0x00f78a20(0x3d6d048);
    bRam0000000003eb4810 = 1;
  }
  plVar10 = (long *)(param_1 + 0x10);
  if (*plVar10 != 0) {
    /*Core.Cameras.CameraManager$$UnregisterSceneCamera*/ func_0x0163a908(*plVar10,/*STR('GameContext')*/ uRam0000000003d6d1b8,0);
    if (*plVar10 != 0) {
      /*Core.Cameras.CameraManager$$UnregisterSceneCamera*/ func_0x0163a908(*plVar10,/*STR('FrontEnd')*/ uRam0000000003d6d048,0);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
      if (iVar2 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar8,0);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
      if (iVar2 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar8,0);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0);
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar4 = /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x24),0);
          *plVar10 = 0;
          *(undefined8 *)(param_1 + 0x18) = 0;
          return lVar4;
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4811 & 1) == 0) {
    func_0x00f78a20(0x3d26968);
    func_0x00f78a20(0x3d52280);
    func_0x00f78a20(0x3d6ac38);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d6ac30);
    bRam0000000003eb4811 = 1;
  }
  lVar9 = *(long *)(lVar4 + 0x18);
  uVar8 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
  uVar5 = 0;
  /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar8,lVar4,uRam0000000003d52280,0);
  if (lVar9 != 0) {
    uVar3 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar9,/*STR('Common/Cameras/P_GameContextCamera.prefab')*/ uRam0000000003d6ac38,/*STR('Default')*/ uRam0000000003d6ba50,uVar8,0,0);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
    lVar9 = *(long *)(lVar4 + 0x18);
    uVar8 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
    uVar5 = 0;
    /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar8,lVar4,uRam0000000003d52280,0);
    if (lVar9 != 0) {
      lVar9 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar9,/*STR('Common/Cameras/P_FrontEndCamera.prefab')*/ uRam0000000003d6ac30,/*STR('Default')*/ uRam0000000003d6ba50,uVar8,0,0);
      *(int *)(lVar4 + 0x24) = (int)lVar9;
      return lVar9;
    }
  }
  uVar8 = func_0x00f78af4();
  if ((bRam0000000003eb4812 & 1) == 0) {
    func_0x00f78a20(0x3d26a00);
    bRam0000000003eb4812 = 1;
  }
  lVar4 = func_0x00f78aec(/*Atlas.AtlasCameras.<WaitOnLoad>d__14_TypeInfo*/ uRam0000000003d26a00);
  /*Atlas.AtlasCameras.<WaitOnLoad>d__14$$.ctor*/ func_0x0154581c(lVar4,0,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x20) = uVar8;
    return lVar4;
  }
  auVar11 = func_0x00f78af4();
  plVar10 = auVar11._8_8_;
  lVar4 = auVar11._0_8_;
  if ((bRam0000000003eb4813 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6d1b8);
    func_0x00f78a20(0x3d6d048);
    bRam0000000003eb4813 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else if (*plVar10 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
    plVar10 = (long *)0x0;
  }
  uVar8 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar10,uRam0000000003d5b098);
  uVar3 = *(undefined4 *)(lVar4 + 0x20);
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(uVar5 & 0xffffffff,uVar3,0);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(lVar4 + 0x24);
    if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(uVar5 & 0xffffffff,uVar3,0);
    if (iVar2 == 0) goto code_r0x014614d0;
    puVar6 = (undefined8 *)(lVar4 + 0x30);
    puVar7 = (undefined8 *)0x3d6d048;
  }
  else {
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    puVar7 = (undefined8 *)0x3d6d1b8;
  }
  *puVar6 = uVar8;
  /*Atlas.AtlasCameras$$RegisterCameraGameObject*/ func_0x01461574(lVar4,*puVar7,uVar8);
code_r0x014614d0:
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar8 = *(undefined8 *)(lVar4 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  }
  *(undefined1 *)(lVar4 + 0x38) = uVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  *(char *)(lVar4 + 0x38) = (char)lVar9;
  return lVar9;
}



// ============================================================
// RVA: 0x14611bc | Atlas.AtlasCameras.RequestCameraPrefabs
// ============================================================

long Atlas_AtlasCameras__RequestCameraPrefabs(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4811 & 1) == 0) {
    func_0x00f78a20(0x3d26968);
    func_0x00f78a20(0x3d52280);
    func_0x00f78a20(0x3d6ac38);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d6ac30);
    bRam0000000003eb4811 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  uVar4 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
  uVar7 = 0;
  /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar4,param_1,uRam0000000003d52280,0);
  if (lVar10 != 0) {
    uVar2 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar10,/*STR('Common/Cameras/P_GameContextCamera.prefab')*/ uRam0000000003d6ac38,/*STR('Default')*/ uRam0000000003d6ba50,uVar4,0,0);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    lVar10 = *(long *)(param_1 + 0x18);
    uVar4 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
    uVar7 = 0;
    /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar4,param_1,uRam0000000003d52280,0);
    if (lVar10 != 0) {
      lVar10 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar10,/*STR('Common/Cameras/P_FrontEndCamera.prefab')*/ uRam0000000003d6ac30,/*STR('Default')*/ uRam0000000003d6ba50,uVar4,0,0);
      *(int *)(param_1 + 0x24) = (int)lVar10;
      return lVar10;
    }
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4812 & 1) == 0) {
    func_0x00f78a20(0x3d26a00);
    bRam0000000003eb4812 = 1;
  }
  lVar10 = func_0x00f78aec(/*Atlas.AtlasCameras.<WaitOnLoad>d__14_TypeInfo*/ uRam0000000003d26a00);
  /*Atlas.AtlasCameras.<WaitOnLoad>d__14$$.ctor*/ func_0x0154581c(lVar10,0,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x20) = uVar4;
    return lVar10;
  }
  auVar11 = func_0x00f78af4();
  plVar5 = auVar11._8_8_;
  lVar10 = auVar11._0_8_;
  if ((bRam0000000003eb4813 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6d1b8);
    func_0x00f78a20(0x3d6d048);
    bRam0000000003eb4813 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else if (*plVar5 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
    plVar5 = (long *)0x0;
  }
  uVar4 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar5,uRam0000000003d5b098);
  uVar2 = *(undefined4 *)(lVar10 + 0x20);
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(uVar7 & 0xffffffff,uVar2,0);
  if (iVar3 == 0) {
    uVar2 = *(undefined4 *)(lVar10 + 0x24);
    if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(uVar7 & 0xffffffff,uVar2,0);
    if (iVar3 == 0) goto code_r0x014614d0;
    puVar8 = (undefined8 *)(lVar10 + 0x30);
    puVar9 = (undefined8 *)0x3d6d048;
  }
  else {
    puVar8 = (undefined8 *)(lVar10 + 0x28);
    puVar9 = (undefined8 *)0x3d6d1b8;
  }
  *puVar8 = uVar4;
  /*Atlas.AtlasCameras$$RegisterCameraGameObject*/ func_0x01461574(lVar10,*puVar9,uVar4);
code_r0x014614d0:
  uVar4 = *(undefined8 *)(lVar10 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar10 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  }
  *(undefined1 *)(lVar10 + 0x38) = uVar1;
  uVar4 = *(undefined8 *)(lVar10 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  *(char *)(lVar10 + 0x38) = (char)lVar6;
  return lVar6;
}



// ============================================================
// RVA: 0x14612ec | Atlas.AtlasCameras.WaitOnLoad
// ============================================================

long Atlas_AtlasCameras__WaitOnLoad
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003eb4812 & 1) == 0) {
    func_0x00f78a20(0x3d26a00);
    bRam0000000003eb4812 = 1;
  }
  lVar4 = func_0x00f78aec(/*Atlas.AtlasCameras.<WaitOnLoad>d__14_TypeInfo*/ uRam0000000003d26a00);
  /*Atlas.AtlasCameras.<WaitOnLoad>d__14$$.ctor*/ func_0x0154581c(lVar4,0,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x20) = param_1;
    return lVar4;
  }
  auVar10 = func_0x00f78af4();
  plVar5 = auVar10._8_8_;
  lVar4 = auVar10._0_8_;
  if ((bRam0000000003eb4813 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6d1b8);
    func_0x00f78a20(0x3d6d048);
    bRam0000000003eb4813 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else if (*plVar5 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
    plVar5 = (long *)0x0;
  }
  uVar6 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar5,uRam0000000003d5b098);
  uVar1 = *(undefined4 *)(lVar4 + 0x20);
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(param_4 & 0xffffffff,uVar1,0);
  if (iVar3 == 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x24);
    if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(param_4 & 0xffffffff,uVar1,0);
    if (iVar3 == 0) goto code_r0x014614d0;
    puVar8 = (undefined8 *)(lVar4 + 0x30);
    puVar9 = (undefined8 *)0x3d6d048;
  }
  else {
    puVar8 = (undefined8 *)(lVar4 + 0x28);
    puVar9 = (undefined8 *)0x3d6d1b8;
  }
  *puVar8 = uVar6;
  /*Atlas.AtlasCameras$$RegisterCameraGameObject*/ func_0x01461574(lVar4,*puVar9,uVar6);
code_r0x014614d0:
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  }
  *(undefined1 *)(lVar4 + 0x38) = uVar2;
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  *(char *)(lVar4 + 0x38) = (char)lVar7;
  return lVar7;
}



// ============================================================
// RVA: 0x1461360 | Atlas.AtlasCameras.OnAssetLoadSuccess
// ============================================================

void Atlas_AtlasCameras__OnAssetLoadSuccess
               (long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000003eb4813 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6d1b8);
    func_0x00f78a20(0x3d6d048);
    bRam0000000003eb4813 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else if (*param_2 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
    param_2 = (long *)0x0;
  }
  uVar4 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(param_2,uRam0000000003d5b098);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(param_4,uVar1,0);
  if (iVar3 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*Core.Assets.AssetManagerHandle$$op_Equality*/ func_0x016365d4(param_4,uVar1,0);
    if (iVar3 == 0) goto code_r0x014614d0;
    puVar5 = (undefined8 *)(param_1 + 0x30);
    puVar6 = (undefined8 *)0x3d6d048;
  }
  else {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    puVar6 = (undefined8 *)0x3d6d1b8;
  }
  *puVar5 = uVar4;
  /*Atlas.AtlasCameras$$RegisterCameraGameObject*/ func_0x01461574(param_1,*puVar6,uVar4);
code_r0x014614d0:
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  }
  *(undefined1 *)(param_1 + 0x38) = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  *(undefined1 *)(param_1 + 0x38) = uVar2;
  return;
}



// ============================================================
// RVA: 0x1461574 | Atlas.AtlasCameras.RegisterCameraGameObject
// ============================================================

/* WARNING: Possible PIC construction at 0x0163a518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0163a5b4: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x0163a6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163b6a4) */
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
/* WARNING: Removing unreachable block (ram,0x0163b6b4) */
/* WARNING: Removing unreachable block (ram,0x0163b680) */
/* WARNING: Removing unreachable block (ram,0x0163b690) */
/* WARNING: Removing unreachable block (ram,0x0163b6c4) */
/* WARNING: Removing unreachable block (ram,0x0163b6d0) */
/* WARNING: Removing unreachable block (ram,0x0163b724) */
/* WARNING: Removing unreachable block (ram,0x0163b768) */
/* WARNING: Removing unreachable block (ram,0x0163b698) */
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
/* WARNING: Removing unreachable block (ram,0x0163a5b8) */
/* WARNING: Removing unreachable block (ram,0x0163a51c) */
/* WARNING: Removing unreachable block (ram,0x0163a520) */
/* WARNING: Removing unreachable block (ram,0x0163a540) */
/* WARNING: Removing unreachable block (ram,0x0163a554) */
/* WARNING: Removing unreachable block (ram,0x0163a568) */
/* WARNING: Removing unreachable block (ram,0x0163a570) */
/* WARNING: Removing unreachable block (ram,0x0163a574) */
/* WARNING: Removing unreachable block (ram,0x0163a614) */
/* WARNING: Removing unreachable block (ram,0x0163a588) */
/* WARNING: Removing unreachable block (ram,0x0163a594) */
/* WARNING: Removing unreachable block (ram,0x0163a5f0) */
/* WARNING: Removing unreachable block (ram,0x0163a5f4) */
/* WARNING: Removing unreachable block (ram,0x0163a600) */
/* WARNING: Removing unreachable block (ram,0x0163a60c) */
/* WARNING: Removing unreachable block (ram,0x0163a618) */
/* WARNING: Removing unreachable block (ram,0x0163a5ac) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x0163a6e0) */
/* WARNING: Removing unreachable block (ram,0x0163a6e4) */
/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_AtlasCameras__RegisterCameraGameObject(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x24;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long alStack_e0 [3];
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lVar7;
  
  if ((bRam0000000003eb4814 & 1) == 0) {
    func_0x00f78a20(0x3d577e0);
    bRam0000000003eb4814 = 1;
  }
  if (param_3 == 0) {
LAB_014615f0:
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_3,uRam0000000003d577e0);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) goto LAB_014615f0;
  if ((bRam0000000003eb56c5 & 1) == 0) {
    func_0x00f78a20(0x3d1edc0);
    func_0x00f78a20(0x3d3ce10);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb56c5 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  plVar5 = (long *)aiStack_b0;
  uStack_78 = 0;
  puStack_58 = &UNK_0163a51c;
  ppuVar11 = &puStack_60;
  lStack_80 = param_2;
  lStack_70 = lVar3;
  uStack_68 = uVar2;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb56c6 & 1) == 0) {
    func_0x00f78a20(0x3d33348);
    func_0x00f78a20(0x3d33350);
    func_0x00f78a20(0x3d33358);
    func_0x00f78a20(0x3d3ce20);
    bRam0000000003eb56c6 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  if (*(long *)(lVar3 + 0x28) != 0) {
    uVar9 = 0x3d33350;
    uVar2 = 0x3d33348;
    /*System.Collections.Generic.List<CameraManager.CameraData>$$GetEnumerator*/ func_0x02502564(&uStack_a0,*(long *)(lVar3 + 0x28),uRam0000000003d3ce20);
    uVar4 = /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$MoveNext*/ func_0x01f7acb0(&uStack_a0,uRam0000000003d33350);
    if ((uVar4 & 1) == 0) {
      aiStack_b0[0] = 0x40;
      /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_a0,uRam0000000003d33348);
      if (aiStack_b0[0] != 0x42) {
        uVar4 = 0;
      }
      return uVar4;
    }
    if (lStack_90 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x163a734);
      (*pcVar1)();
    }
    puVar12 = &UNK_0163a6e0;
    lVar3 = lStack_90;
    lVar6 = param_2;
    goto code_r0x029caa48;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<CameraManager.CameraData>$$Dispose*/ func_0x01f7acac(&uStack_a0,uRam0000000003eb5000);
    if (lVar6 == 0) {
      return 0;
    }
  }
  else {
    __Unwind_Resume();
    lVar6 = param_2;
  }
  auVar13 = func_0x00f78ac0(lVar6,0);
  lVar7 = auVar13._8_8_;
  alStack_e0[1] = 0x3eb5000;
  puStack_b8 = &Core_Cameras_CameraManager__ApplySettings;
  pppuVar10 = &ppuStack_c0;
  uVar9 = 0x3d23990;
  alStack_e0[0] = param_2;
  alStack_e0[2] = lVar3;
  lStack_c8 = lVar6;
  ppuStack_c0 = ppuVar11;
  if ((bRam0000000003eb56d1 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb56d1 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  lVar6 = /*UnityEngine.Rendering.Universal.CameraExtensions$$GetUniversalAdditionalCameraData*/ func_0x03116ad8(lVar7,0);
  lVar3 = 0x3eb5000;
  if (lVar7 == 0) goto code_r0x0163a8ac;
  /*UnityEngine.Camera$$set_layerCullDistances*/ func_0x0321df54(lVar7,*(undefined8 *)(auVar13._0_8_ + 0x40),0);
  uVar4 = /*UnityEngine.Camera$$set_useOcclusionCulling*/ func_0x0321e074(lVar7,0,0);
  lVar3 = lVar6;
  switch(*(undefined4 *)(auVar13._0_8_ + 0x48)) {
  case 0:
    if (lVar6 == 0) break;
    uVar8 = 0;
    uVar2 = 0;
    goto code_r0x0163a894;
  case 1:
    if (lVar6 == 0) break;
    uVar2 = 0x100000001;
    goto code_r0x0163a890;
  case 2:
    uVar2 = _UNK_033f8620;
    goto joined_r0x0163a878;
  case 3:
    uVar2 = _UNK_034026a0;
joined_r0x0163a878:
    if (lVar6 != 0) {
code_r0x0163a890:
      uVar8 = 1;
code_r0x0163a894:
      *(undefined8 *)(lVar6 + 0x48) = uVar2;
code_r0x0163a898:
      *(undefined1 *)(lVar6 + 0x44) = uVar8;
      return uVar4;
    }
    break;
  case 4:
    if (lVar6 != 0) {
      uVar2 = 0x200000002;
      goto code_r0x0163a890;
    }
    break;
  default:
    if (lVar6 != 0) {
      uVar8 = 0;
      goto code_r0x0163a898;
    }
  }
code_r0x0163a8ac:
  puVar12 = &Core_Cameras_CameraManager__IsCameraActive;
  auVar14 = func_0x00f78af4();
  plVar5 = alStack_e0;
  while( true ) {
    param_2 = auVar14._8_8_;
    uVar2 = auVar13._8_8_;
    *(long *)((long)plVar5 + -0x20) = auVar13._0_8_;
    *(long *)((long)plVar5 + -0x18) = lVar3;
    *(undefined1 ****)((long)plVar5 + -0x10) = pppuVar10;
    *(undefined **)((long)plVar5 + -8) = puVar12;
    uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(auVar14._0_8_ + 0x20),0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar3 = *(long *)(auVar14._0_8_ + 0x20);
    if (lVar3 != 0) break;
    auVar15 = func_0x00f78af4();
    lVar3 = auVar15._0_8_;
    *(undefined8 *)((long)plVar5 + -0x60) = unaff_x24;
    *(undefined8 *)((long)plVar5 + -0x58) = 0x3eb5000;
    *(undefined8 *)((long)plVar5 + -0x50) = 0x3d23990;
    *(undefined8 *)((long)plVar5 + -0x48) = uVar2;
    *(undefined1 (*) [16])((long)plVar5 + -0x40) = auVar14;
    *(undefined1 **)((long)plVar5 + -0x30) = (undefined1 *)((long)plVar5 + -0x10);
    *(undefined **)((long)plVar5 + -0x28) = &Core_Cameras_CameraManager__UnregisterSceneCamera;
    pppuVar10 = (undefined1 ***)((long)plVar5 + -0x30);
    auVar13._8_8_ = 0x3eb5000;
    auVar13._0_8_ = auVar15._8_8_;
    if ((bRam0000000003eb56c7 & 1) == 0) {
      func_0x00f78a20(0x3d3ce28);
      func_0x00f78a20(0x3d3ce30);
      func_0x00f78a20(0x3d3ce38);
      bRam0000000003eb56c7 = 1;
    }
    puVar12 = &UNK_0163a968;
    plVar5 = (long *)((long)plVar5 + -0x60);
    auVar14 = auVar15;
  }
  ppuVar11 = *(undefined1 ***)((long)plVar5 + -0x10);
  puVar12 = *(undefined **)((long)plVar5 + -8);
  uVar4 = *(ulong *)((long)plVar5 + -0x20);
  lVar6 = *(long *)((long)plVar5 + -0x18);
code_r0x029caa48:
  *(undefined8 *)((long)plVar5 + -0x30) = uVar9;
  *(undefined8 *)((long)plVar5 + -0x28) = uVar2;
  *(ulong *)((long)plVar5 + -0x20) = uVar4;
  *(long *)((long)plVar5 + -0x18) = lVar6;
  *(undefined1 ***)((long)plVar5 + -0x10) = ppuVar11;
  *(undefined **)((long)plVar5 + -8) = puVar12;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,param_2,5,0);
    bRam0000000003eb9443 = 1;
  }
  if (lVar3 == param_2) {
    uVar4 = 1;
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x14615f4 | Atlas.AtlasCameras..ctor
// ============================================================

void Atlas_AtlasCameras___ctor(void)

{
  return;
}



