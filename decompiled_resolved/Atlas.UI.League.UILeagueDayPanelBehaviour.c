// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.League.UILeagueDayPanelBehaviour

// ============================================================
// RVA: 0x151bdbc | Atlas.UI.League.UILeagueDayPanelBehaviour.get_MapRepresentation
// ============================================================

undefined8 Atlas_UI_League_UILeagueDayPanelBehaviour__get_MapRepresentation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x151bdc4 | Atlas.UI.League.UILeagueDayPanelBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_League_UILeagueDayPanelBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x151bdcc | Atlas.UI.League.UILeagueDayPanelBehaviour.get_BestPlacementTag
// ============================================================

undefined8 Atlas_UI_League_UILeagueDayPanelBehaviour__get_BestPlacementTag(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x151bdd4 | Atlas.UI.League.UILeagueDayPanelBehaviour.SetData
// ============================================================

undefined1  [16]
Atlas_UI_League_UILeagueDayPanelBehaviour__SetData
          (long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (param_2 == 0) {
    if (plVar1 == (long *)0x0) goto LAB_0151be70;
    (**(code **)(*plVar1 + 0x348))
              (plVar1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(*plVar1 + 0x350));
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 == (long *)0x0) goto LAB_0151be70;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0151be70;
    (**(code **)(*plVar1 + 0x348))(plVar1,0,*(undefined8 *)(*plVar1 + 0x350));
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 == (long *)0x0) goto LAB_0151be70;
    uVar2 = 0;
  }
  (**(code **)(*plVar1 + 0x348))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x350));
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151be6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (**(code **)(*plVar1 + 0x558))(plVar1,param_4,*(undefined8 *)(*plVar1 + 0x560));
    return auVar3;
  }
LAB_0151be70:
  auVar3._0_8_ = func_0x00f78af4();
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
// RVA: 0x151be74 | Atlas.UI.League.UILeagueDayPanelBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_League_UILeagueDayPanelBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



