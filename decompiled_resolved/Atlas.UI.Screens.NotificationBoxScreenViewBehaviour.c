// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.NotificationBoxScreenViewBehaviour

// ============================================================
// RVA: 0x14b2f20 | Atlas.UI.Screens.NotificationBoxScreenViewBehaviour.get_SelectButton
// ============================================================

undefined8 Atlas_UI_Screens_NotificationBoxScreenViewBehaviour__get_SelectButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14b2f28 | Atlas.UI.Screens.NotificationBoxScreenViewBehaviour.set_SelectButton
// ============================================================

void Atlas_UI_Screens_NotificationBoxScreenViewBehaviour__set_SelectButton
               (long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}



// ============================================================
// RVA: 0x14b2f30 | Atlas.UI.Screens.NotificationBoxScreenViewBehaviour.ShowModal
// ============================================================

undefined1  [16]
Atlas_UI_Screens_NotificationBoxScreenViewBehaviour__ShowModal
          (long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4aa9 & 1) == 0) {
    func_0x00f78a20(0x3d28410);
    bRam0000000003eb4aa9 = 1;
  }
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.UI.NotificationBoxManager.NotificationBoxData_TypeInfo*/ lRam0000000003d28410 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.UI.NotificationBoxManager.NotificationBoxData_TypeInfo*/ lRam0000000003d28410 + 300) * 8 + -8)
        == /*Atlas.UI.NotificationBoxManager.NotificationBoxData_TypeInfo*/ lRam0000000003d28410)) {
      plVar1 = *(long **)(param_1 + 0x68);
      param_2[0xb] = *(long *)(param_1 + 0x70);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014b2fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar3 = (**(code **)(*plVar1 + 0x198))
                           (plVar1,param_2,param_3,*(undefined8 *)(*plVar1 + 0x1a0));
        return auVar3;
      }
    }
  }
  auVar3._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar2,uRam0000000003d3dc88);
  *(undefined8 *)(auVar3._0_8_ + 0x40) = uVar2;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar2,uRam0000000003d3dc88);
  *(undefined8 *)(auVar3._0_8_ + 0x48) = uVar2;
  *(undefined4 *)(auVar3._0_8_ + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x14b2fd4 | Atlas.UI.Screens.NotificationBoxScreenViewBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_NotificationBoxScreenViewBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



