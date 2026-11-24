// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasScreen<LicenseScreenBehaviour, LicenseScreen.TransitionData>

// ============================================================
// RVA: 0x1cb50e8 | Atlas.UI.Screens.AtlasScreen<LicenseScreenBehaviour, LicenseScreen.TransitionData>.OnInputFamilyChanged
// ============================================================

void Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___OnInputFamilyChanged
               (long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb70f2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb70f2 = 1;
  }
  uVar2 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(*(undefined4 *)(param_1 + 0x68),0);
  if ((((uVar2 & 1) == 0) && (iVar1 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(param_2,0), iVar1 != 0)) &&
     (-1 < *(int *)(param_1 + 0x48))) {
    uVar3 = /*Core.Input.InputManager$$GetSelectedObject*/ func_0x0164abf0(*(int *)(param_1 + 0x48),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
    if ((uVar2 & 1) == 0) {
      /*Core.Input.InputManager$$SetSelectedObject*/ func_0x0164aa78(*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x60),1,0);
    }
  }
  *(int *)(param_1 + 0x68) = (int)param_2;
  return;
}



// ============================================================
// RVA: 0x1cb5720 | Atlas.UI.Screens.AtlasScreen<LicenseScreenBehaviour, LicenseScreen.TransitionData>.ClearSelectedIfGamepad
// ============================================================

/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x03236658) */

ulong Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___ClearSelectedIfGamepad
                (long param_1,long param_2,long param_3)

{
  undefined1 ***pppuVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 ***pppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x28))();
    if ((int)uVar3 != 0) {
      uVar3 = /*Core.Input.InputManager$$SetSelectedObject*/ func_0x0164aa78(*(undefined4 *)(param_1 + 0x48),0,1,0);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    return uVar3;
  }
  auVar11 = func_0x00f78af4();
  lVar5 = auVar11._8_8_;
  lVar7 = auVar11._0_8_;
  puStack_28 = &Atlas_UI_Screens_AtlasScreen_object__object___HasCurrentSelected;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb70f9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb70f9 = 1;
  }
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    pppuVar9 = &ppuStack_60;
    pcStack_58 = 
    Atlas_UI_Screens_AtlasScreen_LeagueStarsBoxScreenViewBehaviour__LeagueStarsBoxScreen_TransitionData___GetCurrentlySelectedObject
    ;
    ppuStack_60 = &puStack_30;
    if (lVar7 == 0) {
      auVar11 = func_0x00f78af4();
      lVar7 = auVar11._8_8_;
      lVar4 = auVar11._0_8_;
      if ((bRam0000000003eb70fa & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb70fa = 1;
      }
      if (lVar4 == 0) {
        func_0x00f78af4();
        return 1;
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x28))
                        (lVar4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x30))
                        (lVar4);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar7,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar10 = &Atlas_UI_Screens_AtlasScreen_object__object___IsCurrentSelectedGameObject;
      pppuVar1 = &ppuStack_60;
      uVar8 = 0x3eb7000;
      lVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar7 + 0x48);
      if ((bRam0000000003eb578b & 1) == 0) {
        func_0x00f78a20(0x3d22848,0);
        bRam0000000003eb578b = 1;
      }
      if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar5 == 0)) {
        func_0x00f78af4();
      }
      else if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        return *(ulong *)(lVar5 + (long)(int)uVar2 * 0x10 + 0x20);
      }
      uVar8 = func_0x00f78b24();
      func_0x00f78ac0(uVar8,0);
      if ((bRam0000000003eb578c & 1) == 0) {
        func_0x00f78a20(0x3d216c0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb578c = 1;
      }
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pppuVar1 = (undefined1 ***)&stack0xffffffffffffff20;
      puStack_b8 = &UNK_0164ad0c;
      pppuVar9 = (undefined1 ***)&puStack_c0;
      lVar5 = 0x3ec0000;
      uVar8 = 0x3d23990;
      puStack_c0 = &stack0xffffffffffffff70;
      if ((bRam0000000003ec021a & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec021a = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = 0;
      puVar10 = &UNK_03236658;
      lVar6 = lVar4;
    }
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x28))(lVar7);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x30))(lVar7);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pppuVar1 = (undefined1 ***)&stack0xffffffffffffffb0;
    pppuVar9 = (undefined1 ***)&puStack_30;
    lVar7 = 0;
    uVar8 = 0x3ec0000;
    unaff_x22 = 0x3d23990;
    if ((bRam0000000003ec027c & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027c = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar10 = &UNK_03249b00;
    lVar6 = 0;
    lVar5 = lVar4;
  }
  *(undefined8 *)((long)pppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)pppuVar1 + -0x28) = uVar8;
  *(long *)((long)pppuVar1 + -0x20) = lVar5;
  *(long *)((long)pppuVar1 + -0x18) = lVar6;
  *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar9;
  *(undefined **)((long)pppuVar1 + -8) = puVar10;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (lVar4 == 0 && lVar7 == 0) {
    uVar3 = 1;
  }
  else {
    if (lVar7 == 0) {
      lVar7 = lVar4;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    else {
      if (lVar4 != 0) {
        return (ulong)(lVar4 == lVar7);
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar7);
    uVar3 = (ulong)(uVar2 ^ 1);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1cb5920 | Atlas.UI.Screens.AtlasScreen<LicenseScreenBehaviour, LicenseScreen.TransitionData>.CanProgressToNextScreen
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___CanProgressToNextScreen
          (void)

{
  return 1;
}



// ============================================================
// RVA: 0x1cb5944 | Atlas.UI.Screens.AtlasScreen<LicenseScreenBehaviour, LicenseScreen.TransitionData>..ctor
// ============================================================

void Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData____ctor
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



