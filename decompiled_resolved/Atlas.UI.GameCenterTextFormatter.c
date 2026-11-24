// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.GameCenterTextFormatter

// ============================================================
// RVA: 0x15981e0 | Atlas.UI.GameCenterTextFormatter.FormatGameCenterName
// ============================================================

long Atlas_UI_GameCenterTextFormatter__FormatGameCenterName(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb519b & 1) == 0) {
    func_0x00f78a20(0x3d7d3c8);
    bRam0000000003eb519b = 1;
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) < 0xf)) {
    return param_1;
  }
  lVar1 = /*System.String$$Substring*/ func_0x029cbbf0(param_1,0,7,0);
  lVar2 = /*System.String$$Substring*/ func_0x029cbd54(param_1,*(int *)(param_1 + 0x10) + -7,0);
  lVar4 = /*STR('…')*/ lRam0000000003d7d3c8;
  if ((bRam0000000003eb9468 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0,/*STR('…')*/ lRam0000000003d7d3c8,lVar2,0);
    bRam0000000003eb9468 = 1;
  }
  if (((lVar1 == 0) && (lVar4 == 0)) && (lVar2 == 0)) {
    lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else {
    if (lVar1 == 0) {
      lVar1 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar4 == 0) {
      lVar4 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (lVar2 == 0) {
      lVar2 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    if (((lVar1 == 0) || (lVar4 == 0)) || (lVar2 == 0)) {
      lVar2 = func_0x00f78af4();
      return lVar2;
    }
    lVar3 = func_0x00f834ac(*(int *)(lVar4 + 0x10) + *(int *)(lVar1 + 0x10) + *(int *)(lVar2 + 0x10)
                           );
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,0,lVar1);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(undefined4 *)(lVar1 + 0x10),lVar4);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar3,*(int *)(lVar4 + 0x10) + *(int *)(lVar1 + 0x10),lVar2);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1598280 | Atlas.UI.GameCenterTextFormatter.SetTextAsGameCenterName
// ============================================================

long * Atlas_UI_GameCenterTextFormatter__SetTextAsGameCenterName(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = Atlas_UI_GameCenterTextFormatter__FormatGameCenterName(param_2);
  if (param_1 == (long *)0x0) {
    func_0x00f78af4();
    if ((bRam0000000003eb519c & 1) == 0) {
      func_0x00f78a20(0x3d6d1c0);
      bRam0000000003eb519c = 1;
    }
    return /*STR('GameContextBase')*/ plRam0000000003d6d1c0;
  }
  (**(code **)(*param_1 + 0x558))(param_1,uVar1,*(undefined8 *)(*param_1 + 0x560));
  if ((int)param_1[0x5b] == 3) {
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x5b) = 3;
  *(undefined1 *)(param_1 + 0x6d) = 1;
  (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300),0);
                    /* WARNING: Could not recover jumptable at 0x031afd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar2 = (long *)(**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
  return plVar2;
}



