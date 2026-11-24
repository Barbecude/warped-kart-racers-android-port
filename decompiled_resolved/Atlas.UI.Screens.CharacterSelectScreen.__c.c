// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CharacterSelectScreen.<>c

// ============================================================
// RVA: 0x15477e0 | Atlas.UI.Screens.CharacterSelectScreen.<>c..cctor
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f68 & 1) == 0) {
    func_0x00f78a20(0x3d26c08);
    bRam0000000003eb4f68 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c_TypeInfo*/ lRam0000000003d26c08);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.UI.Screens.CharacterSelectScreen.<>c_TypeInfo*/ lRam0000000003d26c08 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1547840 | Atlas.UI.Screens.CharacterSelectScreen.<>c..ctor
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1547848 | Atlas.UI.Screens.CharacterSelectScreen.<>c.<SetupData>b__30_2
// ============================================================

/* WARNING: Possible PIC construction at 0x01547870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01547874) */

ulong Atlas_UI_Screens_CharacterSelectScreen___c___SetupData_b__30_2
                (undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *extraout_x1;
  long *plVar3;
  
  if (((param_2 == (long *)0x0) ||
      (lVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180)),
      lVar1 == 0)) &&
     ((func_0x00f78af4(), extraout_x1 == (long *)0x0 ||
      (lVar1 = (**(code **)(*extraout_x1 + 0x178))
                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x180)), lVar1 == 0)))) {
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  if ((bRam0000000003eb4f44 & 1) == 0) {
    func_0x00f78a20(0x3d20650,0);
    bRam0000000003eb4f44 = 1;
  }
  plVar3 = *(long **)(lVar1 + 0x38);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar3 + 300)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar3[0x16];
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4f45 & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f45 = 1;
  }
  plVar3 = *(long **)(lVar1 + 0x38);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar3 + 300)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar3[0x17];
    }
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x60) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar1 + 0x60) + 0xa8);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x68);
}



// ============================================================
// RVA: 0x1547884 | Atlas.UI.Screens.CharacterSelectScreen.<>c.<SetupData>b__30_3
// ============================================================

ulong Atlas_UI_Screens_CharacterSelectScreen___c___SetupData_b__30_3
                (undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((param_2 == (long *)0x0) ||
     (lVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180)), lVar1 == 0
     )) {
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  if ((bRam0000000003eb4f44 & 1) == 0) {
    func_0x00f78a20(0x3d20650,0);
    bRam0000000003eb4f44 = 1;
  }
  plVar3 = *(long **)(lVar1 + 0x38);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar3 + 300)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar3[0x16];
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4f45 & 1) == 0) {
    func_0x00f78a20(0x3d20650);
    bRam0000000003eb4f45 = 1;
  }
  plVar3 = *(long **)(lVar1 + 0x38);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) <= *(byte *)(*plVar3 + 300)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650 + 300) * 8 + -8)
        == /*Atlas.Definitions.CharacterDefinition_TypeInfo*/ lRam0000000003d20650)) {
      return plVar3[0x17];
    }
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x60) == 0) {
    lVar1 = func_0x00f78af4();
    return *(ulong *)(lVar1 + 0x68);
  }
  return (ulong)*(uint *)(*(long *)(lVar1 + 0x60) + 0xa8);
}



