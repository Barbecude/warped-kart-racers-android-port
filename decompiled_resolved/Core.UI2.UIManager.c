// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIManager

// ============================================================
// RVA: 0x2f86a4c | Core.UI2.UIManager.add_StartBeforeEnterScreenEvent
// ============================================================

ulong Core_UI2_UIManager__add_StartBeforeEnterScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc63b & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63b = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x10),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63c & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63c = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x10);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63d & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63d = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63e = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63f & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63f = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc640 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc640 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc641 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc641 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86aec | Core.UI2.UIManager.remove_StartBeforeEnterScreenEvent
// ============================================================

ulong Core_UI2_UIManager__remove_StartBeforeEnterScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc63c & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63c = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x10),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63d & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63d = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63e = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63f & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63f = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc640 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc640 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc641 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc641 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86b8c | Core.UI2.UIManager.add_StartEnterScreenEvent
// ============================================================

ulong Core_UI2_UIManager__add_StartEnterScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc63d & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63d = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63e = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63f & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63f = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc640 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc640 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc641 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc641 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86c2c | Core.UI2.UIManager.remove_StartEnterScreenEvent
// ============================================================

ulong Core_UI2_UIManager__remove_StartEnterScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc63e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63e = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc63f & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63f = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc640 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc640 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc641 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc641 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86ccc | Core.UI2.UIManager.add_StartExitScreenEvent
// ============================================================

ulong Core_UI2_UIManager__add_StartExitScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc63f & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc63f = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x20),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc640 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc640 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x20);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc641 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc641 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86d6c | Core.UI2.UIManager.remove_StartExitScreenEvent
// ============================================================

ulong Core_UI2_UIManager__remove_StartExitScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc640 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc640 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x20),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc641 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc641 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86e0c | Core.UI2.UIManager.add_FinishEnterScreenEvent
// ============================================================

ulong Core_UI2_UIManager__add_FinishEnterScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc641 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc641 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x28),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x28);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86eac | Core.UI2.UIManager.remove_FinishEnterScreenEvent
// ============================================================

ulong Core_UI2_UIManager__remove_FinishEnterScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc642 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc642 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x28),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86f4c | Core.UI2.UIManager.add_InputEnabledScreenEvent
// ============================================================

ulong Core_UI2_UIManager__add_InputEnabledScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003ebc643 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc643 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x30);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x30),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x30);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f86fec | Core.UI2.UIManager.remove_InputEnabledScreenEvent
// ============================================================

ulong Core_UI2_UIManager__remove_InputEnabledScreenEvent(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003ebc644 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e8);
    bRam0000000003ebc644 = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x30),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x18);
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  lVar4 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x2f8708c | Core.UI2.UIManager.get_Canvas
// ============================================================

ulong Core_UI2_UIManager__get_Canvas(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return *(ulong *)(*(long *)(param_1 + 0x38) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x38) != 0) {
    return *(ulong *)(*(long *)(lVar1 + 0x38) + 0x20);
  }
  lVar1 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar1 + 0x60);
}



// ============================================================
// RVA: 0x2f870ac | Core.UI2.UIManager.get_CanvasScaler
// ============================================================

ulong Core_UI2_UIManager__get_CanvasScaler(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return *(ulong *)(*(long *)(param_1 + 0x38) + 0x20);
  }
  lVar1 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar1 + 0x60);
}



// ============================================================
// RVA: 0x2f870cc | Core.UI2.UIManager.get_IsInited
// ============================================================

undefined1 Core_UI2_UIManager__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x2f870d4 | Core.UI2.UIManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x02f872c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f872c4) */
/* WARNING: Removing unreachable block (ram,0x02f872c8) */
/* WARNING: Removing unreachable block (ram,0x02f872dc) */

long Core_UI2_UIManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined4 auStack_8c [3];
  undefined1 auStack_80 [32];
  
  if ((bRam0000000003ebc645 & 1) == 0) {
    func_0x00f78a20(0x3d57950);
    func_0x00f78a20(0x3d3ddc0);
    func_0x00f78a20(0x3d3ddb8);
    func_0x00f78a20(0x3d3ddd8);
    func_0x00f78a20(0x3d3dd78);
    func_0x00f78a20(0x3d1e3b0);
    func_0x00f78a20(0x3d1e3c0);
    func_0x00f78a20(0x3d1e3b8);
    func_0x00f78a20(0x3d5b0e8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d754a8);
    func_0x00f78a20(0x3d6f308);
    bRam0000000003ebc645 = 1;
  }
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(int *)(param_1 + 0x50) = (int)param_6;
  *(undefined8 *)(param_1 + 0x58) = param_7;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = 0;
  lVar3 = /*UnityEngine.Object$$Instantiate<Transform>*/ func_0x018a680c(param_2,param_5,0,uRam0000000003d5b0e8);
  if (lVar3 == 0) {
    puVar12 = &Core_UI2_UIManager__CreateLayerRootGameObject;
    func_0x00f78af4();
    uVar4 = extraout_x1;
  }
  else {
    param_4 = 0x3d3d000;
    /*UnityEngine.Object$$set_name*/ func_0x03248994(lVar3,/*STR('UI')*/ uRam0000000003d754a8,0);
    uVar10 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar3,0);
    uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d57950);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<UIManager.Layer>_TypeInfo*/ uRam0000000003d1e3b8);
    /*System.Collections.Generic.List<UIManager.Layer>$$.ctor*/ func_0x025bfca8(uVar4,uVar1,uRam0000000003d3ddb8);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    auStack_8c[0] = 0;
    if (*(int *)(param_1 + 0x50) < 1) {
      uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<UIManager.ScreenInfo>_TypeInfo*/ uRam0000000003d1e3c0);
      /*System.Collections.Generic.List<UIManager.ScreenInfo>$$.ctor*/ func_0x025c29e8(uVar10,0x14,uRam0000000003d3ddd8);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<UIManager.AssetRequest>_TypeInfo*/ uRam0000000003d1e3b0);
      lVar3 = /*System.Collections.Generic.List<UIManager.AssetRequest>$$.ctor*/ func_0x025bd084(uVar10,0x14,uRam0000000003d3dd78);
      *(undefined8 *)(param_1 + 0x80) = uVar10;
      *(undefined1 *)(param_1 + 0x60) = 1;
      return lVar3;
    }
    param_2 = 0x3d6f308;
    param_7 = 0x3d3ddc0;
    param_6 = auStack_80;
    uVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(auStack_8c,0);
    uVar4 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('Layer')*/ uRam0000000003d6f308,uVar4,0);
    puVar12 = (undefined *)0x2f872c4;
    param_5 = uVar10;
  }
  uStack_d0 = param_4;
  puStack_c8 = param_6;
  uStack_c0 = param_7;
  uStack_b8 = param_2;
  uStack_b0 = param_5;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  puStack_98 = puVar12;
  if ((bRam0000000003ebc661 & 1) == 0) {
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d19cf0);
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    bRam0000000003ebc661 = 1;
  }
  plVar5 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
  lVar3 = /*UnityEngine.RectTransform_var*/ lRam0000000003d19cf0;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar3,0);
  if (plVar5 == (long *)0x0) {
code_r0x02f8756c:
    func_0x00f78af4();
  }
  else {
    if ((lVar6 != 0) && (lVar3 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)
       ) {
      uVar7 = func_0x00f78b14();
      goto code_r0x02f8757c;
    }
    lVar3 = lVar6;
    if ((int)plVar5[3] != 0) {
      plVar5[4] = lVar6;
      lVar3 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
      /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(lVar3,uVar4,plVar5,0);
      if ((lVar3 != 0) && (lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar3,0), lVar6 != 0)) {
        uVar4 = 0x3d57000;
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar6,uVar10,0,0);
        lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d578e0);
        /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
        uVar10 = 0;
        if (lVar6 != 0) {
          /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(lVar6,0);
          /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(lVar6,0);
          /*UnityEngine.RectTransform$$set_pivot*/ func_0x03254fa0(0,0x3f000000,lVar6,0);
          /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(0,0,lVar6,0);
          /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(lVar6,0);
          /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar6,0);
          return lVar3;
        }
      }
      goto code_r0x02f8756c;
    }
  }
  uVar7 = func_0x00f78b24();
  lVar6 = lVar3;
code_r0x02f8757c:
  lVar3 = func_0x00f78ac0(uVar7,0);
  puStack_d8 = &Core_UI2_UIManager__DeInit;
  plStack_100 = plVar5;
  uStack_f8 = uVar4;
  lStack_f0 = lVar6;
  uStack_e8 = uVar10;
  ppuStack_e0 = &puStack_a0;
  if ((bRam0000000003ebc646 & 1) == 0) {
    func_0x00f78a20(0x3d33828);
    func_0x00f78a20(0x3d33830);
    func_0x00f78a20(0x3d33838);
    func_0x00f78a20(0x3d3dd88);
    func_0x00f78a20(0x3d3dd90);
    bRam0000000003ebc646 = 1;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  *(undefined1 *)(lVar3 + 0x60) = 0;
  if (0 < *(int *)(lVar3 + 0x50)) {
    iVar11 = 0;
    do {
      /*Core.UI2.UIManager$$ClearLayer*/ func_0x02f877a8(lVar3,iVar11);
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(lVar3 + 0x50));
  }
  lVar6 = 0;
  if (*(long *)(lVar3 + 0x80) != 0) {
    if (*(long *)(lVar3 + 0x48) != 0) {
      /*System.Collections.Generic.List<UIManager.AssetRequest>$$GetEnumerator*/ func_0x025be824(&uStack_130,*(long *)(lVar3 + 0x80),uRam0000000003d3dd90);
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<UIManager.AssetRequest>$$MoveNext*/ func_0x01f86ad8(&uStack_130,uRam0000000003d33830), (uVar8 & 1) != 0) {
        if (*(long *)(lVar3 + 0x48) == 0) {
          func_0x00f78af4();
          goto code_r0x02f87744;
        }
        Core_Assets_AssetManager__Release(*(long *)(lVar3 + 0x48),uStack_118 & 0xffffffff,0);
      }
      /*System.Collections.Generic.List.Enumerator<UIManager.AssetRequest>$$Dispose*/ func_0x01f86ad4(&uStack_130,uRam0000000003d33828);
    }
    if (*(long *)(lVar3 + 0x80) == 0) {
      func_0x00f78af4();
      plVar9 = (long *)___cxa_allocate_exception(8);
      *plVar9 = *plVar5;
      ___cxa_throw(plVar9,&DAT_03a5ed38,0);
code_r0x02f87744:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x2f87748);
      (*pcVar2)();
    }
    lVar6 = /*System.Collections.Generic.List<UIManager.AssetRequest>$$Clear*/ func_0x025bdfd0(*(long *)(lVar3 + 0x80),uRam0000000003d3dd88);
  }
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  return lVar6;
}



// ============================================================
// RVA: 0x2f87390 | Core.UI2.UIManager.CreateLayerRootGameObject
// ============================================================

long Core_UI2_UIManager__CreateLayerRootGameObject
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003ebc661 & 1) == 0) {
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d19cf0);
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    bRam0000000003ebc661 = 1;
  }
  plVar2 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
  lVar4 = /*UnityEngine.RectTransform_var*/ lRam0000000003d19cf0;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar4,0);
  if (plVar2 == (long *)0x0) {
LAB_02f8756c:
    func_0x00f78af4();
  }
  else {
    if ((lVar3 != 0) && (lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
       ) {
      uVar5 = func_0x00f78b14();
      goto code_r0x02f8757c;
    }
    lVar4 = lVar3;
    if ((int)plVar2[3] != 0) {
      plVar2[4] = lVar3;
      lVar4 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
      /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(lVar4,param_2,plVar2,0);
      if ((lVar4 != 0) && (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar4,0), lVar3 != 0)) {
        param_2 = 0x3d57000;
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar3,param_3,0,0);
        lVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d578e0);
        /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
        param_3 = 0;
        if (lVar3 != 0) {
          /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(lVar3,0);
          /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(lVar3,0);
          /*UnityEngine.RectTransform$$set_pivot*/ func_0x03254fa0(0,0x3f000000,lVar3,0);
          /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(0,0,lVar3,0);
          /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(lVar3,0);
          /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar3,0);
          return lVar4;
        }
      }
      goto LAB_02f8756c;
    }
  }
  uVar5 = func_0x00f78b24();
  lVar3 = lVar4;
code_r0x02f8757c:
  lVar4 = func_0x00f78ac0(uVar5,0);
  puStack_48 = &Core_UI2_UIManager__DeInit;
  plStack_70 = plVar2;
  uStack_68 = param_2;
  lStack_60 = lVar3;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebc646 & 1) == 0) {
    func_0x00f78a20(0x3d33828);
    func_0x00f78a20(0x3d33830);
    func_0x00f78a20(0x3d33838);
    func_0x00f78a20(0x3d3dd88);
    func_0x00f78a20(0x3d3dd90);
    bRam0000000003ebc646 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  *(undefined1 *)(lVar4 + 0x60) = 0;
  if (0 < *(int *)(lVar4 + 0x50)) {
    iVar8 = 0;
    do {
      /*Core.UI2.UIManager$$ClearLayer*/ func_0x02f877a8(lVar4,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar4 + 0x50));
  }
  lVar3 = 0;
  if (*(long *)(lVar4 + 0x80) != 0) {
    if (*(long *)(lVar4 + 0x48) != 0) {
      /*System.Collections.Generic.List<UIManager.AssetRequest>$$GetEnumerator*/ func_0x025be824(&uStack_a0,*(long *)(lVar4 + 0x80),uRam0000000003d3dd90);
      while (uVar6 = /*System.Collections.Generic.List.Enumerator<UIManager.AssetRequest>$$MoveNext*/ func_0x01f86ad8(&uStack_a0,uRam0000000003d33830), (uVar6 & 1) != 0) {
        if (*(long *)(lVar4 + 0x48) == 0) {
          func_0x00f78af4();
          goto code_r0x02f87744;
        }
        Core_Assets_AssetManager__Release(*(long *)(lVar4 + 0x48),uStack_88 & 0xffffffff,0);
      }
      /*System.Collections.Generic.List.Enumerator<UIManager.AssetRequest>$$Dispose*/ func_0x01f86ad4(&uStack_a0,uRam0000000003d33828);
    }
    if (*(long *)(lVar4 + 0x80) == 0) {
      func_0x00f78af4();
      plVar7 = (long *)___cxa_allocate_exception(8);
      *plVar7 = *plVar2;
      ___cxa_throw(plVar7,&DAT_03a5ed38,0);
code_r0x02f87744:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2f87748);
      (*pcVar1)();
    }
    lVar3 = /*System.Collections.Generic.List<UIManager.AssetRequest>$$Clear*/ func_0x025bdfd0(*(long *)(lVar4 + 0x80),uRam0000000003d3dd88);
  }
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined4 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  return lVar3;
}



// ============================================================
// RVA: 0x2f87584 | Core.UI2.UIManager.DeInit
// ============================================================

void Core_UI2_UIManager__DeInit(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *unaff_x22;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003ebc646 & 1) == 0) {
    func_0x00f78a20(0x3d33828);
    func_0x00f78a20(0x3d33830);
    func_0x00f78a20(0x3d33838);
    func_0x00f78a20(0x3d3dd88);
    func_0x00f78a20(0x3d3dd90);
    bRam0000000003ebc646 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    iVar4 = 0;
    do {
      /*Core.UI2.UIManager$$ClearLayer*/ func_0x02f877a8(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      /*System.Collections.Generic.List<UIManager.AssetRequest>$$GetEnumerator*/ func_0x025be824(&uStack_60,*(long *)(param_1 + 0x80),uRam0000000003d3dd90);
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<UIManager.AssetRequest>$$MoveNext*/ func_0x01f86ad8(&uStack_60,uRam0000000003d33830), (uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
          func_0x00f78af4();
          goto code_r0x02f87744;
        }
        Core_Assets_AssetManager__Release(*(long *)(param_1 + 0x48),uStack_48 & 0xffffffff,0);
      }
      /*System.Collections.Generic.List.Enumerator<UIManager.AssetRequest>$$Dispose*/ func_0x01f86ad4(&uStack_60,uRam0000000003d33828);
    }
    if (*(long *)(param_1 + 0x80) == 0) {
      func_0x00f78af4();
      puVar3 = (undefined8 *)___cxa_allocate_exception(8);
      *puVar3 = *unaff_x22;
      ___cxa_throw(puVar3,&DAT_03a5ed38,0);
code_r0x02f87744:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2f87748);
      (*pcVar1)();
    }
    /*System.Collections.Generic.List<UIManager.AssetRequest>$$Clear*/ func_0x025bdfd0(*(long *)(param_1 + 0x80),uRam0000000003d3dd88);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x2f877a8 | Core.UI2.UIManager.ClearLayer
// ============================================================

void Core_UI2_UIManager__ClearLayer(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined4 extraout_s0;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined4 uStack_36;
  undefined2 uStack_32;
  
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar4 = (uint)param_2;
  if (((int)uVar4 < 0) || (*(int *)(param_1 + 0x50) <= (int)uVar4)) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(lVar7 + 0x10) + (param_2 & 0xffffffff) * 0x28;
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    lVar7 = *(long *)(lVar3 + 0x28);
    uVar1 = *(undefined4 *)(lVar3 + 0x42);
    uVar2 = *(undefined2 *)(lVar3 + 0x46);
    if (lVar7 != 0) {
      /*Core.UI2.UIScreen$$ForceExit*/ func_0x02f882d8(lVar7);
      /*Core.UI2.UIManager$$ReturnScreenWithBehaviour*/ func_0x02f8833c(param_1,lVar7);
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_58 = uVar5;
      uStack_36 = uVar1;
      uStack_32 = uVar2;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(*(long *)(param_1 + 0x70),param_2,&uStack_58,uRam0000000003d3ddd0);
      return;
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003ebc647 & 1) == 0) {
    func_0x00f78a20(0x3d255c0);
    bRam0000000003ebc647 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if (0 < *(int *)(lVar7 + 0x50)) {
    iVar6 = 0;
    do {
      /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar7,iVar6);
      /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar7,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar7 + 0x50));
  }
  /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar7);
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar5);
  return;
}



// ============================================================
// RVA: 0x2f878a8 | Core.UI2.UIManager.Update
// ============================================================

void Core_UI2_UIManager__Update(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam0000000003ebc647 & 1) == 0) {
    func_0x00f78a20(0x3d255c0);
    bRam0000000003ebc647 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (0 < *(int *)(param_2 + 0x50)) {
    iVar2 = 0;
    do {
      /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(param_2,iVar2);
      /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(param_1,param_2,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x50));
  }
  /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(param_2);
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x2f879cc | Core.UI2.UIManager.UpdateLayer
// ============================================================

void Core_UI2_UIManager__UpdateLayer(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  uint extraout_w1;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if ((bRam0000000003ebc653 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc653 = 1;
  }
  lStack_80 = 0;
  lVar10 = *(long *)(param_1 + 0x70);
  if (lVar10 != 0) {
    uVar7 = (uint)param_2;
    if (*(uint *)(lVar10 + 0x18) <= uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar6 = *(long *)(lVar10 + 0x10) + (long)(int)uVar7 * 0x28;
    uVar8 = *(undefined8 *)(lVar6 + 0x20);
    lVar10 = *(long *)(lVar6 + 0x28);
    uVar1 = *(undefined8 *)(lVar6 + 0x30);
    uVar2 = *(undefined8 *)(lVar6 + 0x38);
    uVar11 = *(ulong *)(lVar6 + 0x40);
    uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar1,0);
    if (lVar10 != 0) {
      if (((uVar11 & 0xff) != 0) && (*(int *)(lVar10 + 0x4c) == 2)) {
        /*Core.UI2.UIScreen$$StartExit*/ func_0x02f88bfc(lVar10);
        /*Core.UI2.UIManager$$EnableInput*/ func_0x02f88564(param_1,param_2,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          /*System.Action<UIScreen, int>$$Invoke*/ func_0x01e6e280(*(long *)(param_1 + 0x20),lVar10,param_2,uRam0000000003d2a560);
        }
      }
      if (*(int *)(lVar10 + 0x4c) != 4) {
        return;
      }
      /*Core.UI2.UIManager$$ReturnScreenWithBehaviour*/ func_0x02f8833c(param_1,lVar10);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_02f87bcc;
      uVar11 = uVar11 & 0xffffffffffffff00;
      lStack_70 = 0;
      uStack_78 = uVar8;
      uStack_68 = uVar1;
      uStack_60 = uVar2;
      uStack_58 = uVar11;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(*(long *)(param_1 + 0x70),param_2,&uStack_78,uRam0000000003d3ddd0);
    }
    if (((uVar3 & 1) != 0) ||
       (/*Core.UI2.UIManager$$TryGetScreenWithBehaviour*/ func_0x02f88c44(param_1,uVar1,&lStack_80), lVar10 = lStack_80, lStack_80 == 0)) {
      return;
    }
    /*Core.UI2.UIScreen$$SetParent*/ func_0x02f88da4(lStack_80,uVar8);
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar10 + 0x40) = uVar1;
    *(uint *)(lVar10 + 0x48) = uVar7;
    *(undefined8 *)(lVar10 + 0x30) = uVar2;
    if (*(long *)(lVar10 + 0x28) != 0) {
      *(uint *)(*(long *)(lVar10 + 0x28) + 0x30) = uVar7;
      /*Core.UI2.UIManager$$AssignCallbacks*/ func_0x02f88e84(param_1,lVar10);
      if ((uVar11 & 0xff00) != 0) {
        plVar4 = *(long **)(lVar10 + 0x28);
        if (plVar4 == (long *)0x0) goto LAB_02f87bcc;
        (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        uStack_58 = uVar11 & 0xffffffffffff0000;
        lStack_70 = lVar10;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_78 = uVar8;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(*(long *)(param_1 + 0x70),param_2,&uStack_78,uRam0000000003d3ddd0);
        /*Core.UI2.UIScreen$$StartBeforeEnter*/ func_0x02f88fb0(lVar10);
        return;
      }
    }
  }
LAB_02f87bcc:
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003ebc654 & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc654 = 1;
  }
  lVar10 = *(long *)(lVar10 + 0x70);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) <= extraout_w1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    plVar4 = *(long **)(*(long *)(lVar10 + 0x10) + (long)(int)extraout_w1 * 0x28 + 0x28);
    if ((plVar4 != (long *)0x0) && (/*Core.UI2.UIScreen$$UpdateState*/ func_0x02f8a12c(plVar4), *(int *)((long)plVar4 + 0x4c) != 4)) {
                    /* WARNING: Could not recover jumptable at 0x02f87c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x1f8))(extraout_s0,plVar4,*(undefined8 *)(*plVar4 + 0x200));
      return;
    }
    return;
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003ebc65f & 1) == 0) {
    func_0x00f78a20(0x3d3dda0);
    bRam0000000003ebc65f = 1;
  }
  if (*(long *)(lVar10 + 0x80) == 0) {
    lVar10 = func_0x00f78af4();
    if ((bRam0000000003ebc648 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc648 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = *(undefined8 *)(*(long *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8) + 8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
    if (0 < *(int *)(lVar10 + 0x50)) {
      iVar9 = 0;
      do {
        /*Core.UI2.UIManager$$LateUpdateLayerCurrentScreen*/ func_0x02f87df4(extraout_s0_00,lVar10,iVar9);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar10 + 0x50));
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar8);
    return;
  }
  iVar9 = *(int *)(*(long *)(lVar10 + 0x80) + 0x18);
  if (0 < iVar9) {
    iVar5 = *(int *)(lVar10 + 100);
    if (iVar9 <= iVar5) {
      iVar5 = 0;
      *(undefined4 *)(lVar10 + 100) = 0;
    }
    /*Core.UI2.UIManager$$ReleaseAssetRequestIfNotInUse*/ func_0x02f89818(lVar10,iVar5);
    *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + 1;
  }
  return;
}



// ============================================================
// RVA: 0x2f87bd0 | Core.UI2.UIManager.UpdateLayerCurrentScreen
// ============================================================

void Core_UI2_UIManager__UpdateLayerCurrentScreen(undefined4 param_1,long param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 extraout_s0;
  
  if ((bRam0000000003ebc654 & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc654 = 1;
  }
  lVar3 = *(long *)(param_2 + 0x70);
  if (lVar3 == 0) {
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003ebc65f & 1) == 0) {
      func_0x00f78a20(0x3d3dda0);
      bRam0000000003ebc65f = 1;
    }
    if (*(long *)(lVar3 + 0x80) != 0) {
      iVar5 = *(int *)(*(long *)(lVar3 + 0x80) + 0x18);
      if (0 < iVar5) {
        iVar1 = *(int *)(lVar3 + 100);
        if (iVar5 <= iVar1) {
          iVar1 = 0;
          *(undefined4 *)(lVar3 + 100) = 0;
        }
        /*Core.UI2.UIManager$$ReleaseAssetRequestIfNotInUse*/ func_0x02f89818(lVar3,iVar1);
        *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + 1;
      }
      return;
    }
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003ebc648 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc648 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = *(undefined8 *)(*(long *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8) + 8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
    if (0 < *(int *)(lVar3 + 0x50)) {
      iVar5 = 0;
      do {
        /*Core.UI2.UIManager$$LateUpdateLayerCurrentScreen*/ func_0x02f87df4(extraout_s0,lVar3,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar3 + 0x50));
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar4);
    return;
  }
  if (*(uint *)(lVar3 + 0x18) <= param_3) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 0x10) + (long)(int)param_3 * 0x28 + 0x28);
  if ((plVar2 != (long *)0x0) && (/*Core.UI2.UIScreen$$UpdateState*/ func_0x02f8a12c(plVar2), *(int *)((long)plVar2 + 0x4c) != 4)) {
                    /* WARNING: Could not recover jumptable at 0x02f87c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x1f8))(param_1,plVar2,*(undefined8 *)(*plVar2 + 0x200));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x2f87c90 | Core.UI2.UIManager.UpdateCleanUpAssetRequests
// ============================================================

void Core_UI2_UIManager__UpdateCleanUpAssetRequests(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 extraout_s0;
  
  if ((bRam0000000003ebc65f & 1) == 0) {
    func_0x00f78a20(0x3d3dda0);
    bRam0000000003ebc65f = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x80) + 0x18);
    if (0 < iVar4) {
      iVar2 = *(int *)(param_1 + 100);
      if (iVar4 <= iVar2) {
        iVar2 = 0;
        *(undefined4 *)(param_1 + 100) = 0;
      }
      /*Core.UI2.UIManager$$ReleaseAssetRequestIfNotInUse*/ func_0x02f89818(param_1,iVar2);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003ebc648 & 1) == 0) {
    func_0x00f78a20(0x3d255c0);
    bRam0000000003ebc648 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined8 *)(*(long *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  if (0 < *(int *)(lVar1 + 0x50)) {
    iVar4 = 0;
    do {
      /*Core.UI2.UIManager$$LateUpdateLayerCurrentScreen*/ func_0x02f87df4(extraout_s0,lVar1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x50));
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar3);
  return;
}



// ============================================================
// RVA: 0x2f87d0c | Core.UI2.UIManager.LateUpdate
// ============================================================

void Core_UI2_UIManager__LateUpdate(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam0000000003ebc648 & 1) == 0) {
    func_0x00f78a20(0x3d255c0);
    bRam0000000003ebc648 = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined8 *)(*(long *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (0 < *(int *)(param_2 + 0x50)) {
    iVar2 = 0;
    do {
      /*Core.UI2.UIManager$$LateUpdateLayerCurrentScreen*/ func_0x02f87df4(param_1,param_2,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 0x50));
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x2f87df4 | Core.UI2.UIManager.LateUpdateLayerCurrentScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */

long * Core_UI2_UIManager__LateUpdateLayerCurrentScreen
                 (undefined4 param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003ebc655 & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc655 = 1;
  }
  lVar4 = *(long *)(param_2 + 0x70);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 0x10) + (long)(int)param_3 * 0x28 + 0x28);
    if ((plVar2 != (long *)0x0) && (*(int *)((long)plVar2 + 0x4c) != 4)) {
                    /* WARNING: Could not recover jumptable at 0x02f87ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (long *)(**(code **)(*plVar2 + 0x208))
                                 (param_1,plVar2,*(undefined8 *)(*plVar2 + 0x210));
      return plVar2;
    }
    return plVar2;
  }
  auVar6 = func_0x00f78af4();
  uStack_a0 = auVar6._8_8_;
  if ((bRam0000000003ebc649 & 1) == 0) {
    func_0x00f78a20(0x3d3dde0);
    bRam0000000003ebc649 = 1;
  }
  lVar4 = *(long *)(auVar6._0_8_ + 0x78);
  if (lVar4 != 0) {
    uStack_98 = param_4;
    uStack_90 = param_5;
    uStack_88 = param_6;
    plVar2 = (long *)/*System.Collections.Generic.List<UIManager.ScreenInfo>$$Add*/ func_0x025c361c(lVar4,&uStack_a0,uRam0000000003d3dde0);
    return plVar2;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar4 = *(long *)(auVar6._0_8_ + 0x78);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return (long *)0x0;
    }
    iVar5 = 1;
    plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
    do {
      if (*(uint *)(lVar4 + 0x18) <= iVar5 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)(iVar5 - 1U) * 0x20 + 0x20);
      if (lVar4 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar4,auVar6._8_8_,5,0);
      if ((uVar3 & 1) != 0) {
        return plVar2;
      }
      plVar2 = (long *)(ulong)(iVar5 < iVar1);
      if (iVar1 == iVar5) {
        return plVar2;
      }
      lVar4 = *(long *)(auVar6._0_8_ + 0x78);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return (long *)0x0;
}



// ============================================================
// RVA: 0x2f87eac | Core.UI2.UIManager.RegisterScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */

ulong Core_UI2_UIManager__RegisterScreen
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003ebc649 & 1) == 0) {
    func_0x00f78a20(0x3d3dde0);
    bRam0000000003ebc649 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uStack_60 = param_2;
    uStack_58 = param_3;
    uStack_50 = param_4;
    uStack_48 = param_5;
    uVar2 = /*System.Collections.Generic.List<UIManager.ScreenInfo>$$Add*/ func_0x025c361c(*(long *)(param_1 + 0x78),&uStack_60,uRam0000000003d3dde0);
    return uVar2;
  }
  auVar6 = func_0x00f78af4();
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar5 = *(long *)(auVar6._0_8_ + 0x78);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar4 = 1;
    uVar2 = 1;
    do {
      if (*(uint *)(lVar5 + 0x18) <= iVar4 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)(iVar4 - 1U) * 0x20 + 0x20);
      if (lVar5 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar5,auVar6._8_8_,5,0);
      if ((uVar3 & 1) != 0) {
        return uVar2;
      }
      uVar2 = (ulong)(iVar4 < iVar1);
      if (iVar1 == iVar4) {
        return uVar2;
      }
      lVar5 = *(long *)(auVar6._0_8_ + 0x78);
      iVar4 = iVar4 + 1;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x2f87f38 | Core.UI2.UIManager.ShowScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */

bool Core_UI2_UIManager__ShowScreen(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 1) {
      return false;
    }
    iVar4 = 1;
    bVar3 = true;
    do {
      if (*(uint *)(lVar5 + 0x18) <= iVar4 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)(iVar4 - 1U) * 0x20 + 0x20);
      if (lVar5 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,param_2,5,0);
      if ((uVar2 & 1) != 0) {
        return bVar3;
      }
      bVar3 = iVar4 < iVar1;
      if (iVar1 == iVar4) {
        return bVar3;
      }
      lVar5 = *(long *)(param_1 + 0x78);
      iVar4 = iVar4 + 1;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return false;
}



// ============================================================
// RVA: 0x2f88068 | Core.UI2.UIManager.IsScreenIdValid
// ============================================================

bool Core_UI2_UIManager__IsScreenIdValid(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 1) {
      return false;
    }
    iVar4 = 1;
    bVar3 = true;
    do {
      if (*(uint *)(lVar5 + 0x18) <= iVar4 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)(iVar4 - 1U) * 0x20 + 0x20);
      if (lVar5 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar5,param_2,5,0);
      if ((uVar2 & 1) != 0) {
        return bVar3;
      }
      bVar3 = iVar4 < iVar1;
      if (iVar1 == iVar4) {
        return bVar3;
      }
      lVar5 = *(long *)(param_1 + 0x78);
      iVar4 = iVar4 + 1;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return false;
}



// ============================================================
// RVA: 0x2f88150 | Core.UI2.UIManager.IsLayerValid
// ============================================================

bool Core_UI2_UIManager__IsLayerValid(long param_1,int param_2)

{
  if (-1 < param_2) {
    return param_2 < *(int *)(param_1 + 0x50);
  }
  return false;
}



// ============================================================
// RVA: 0x2f8816c | Core.UI2.UIManager.HideScreen
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_UI2_UIManager__HideScreen
                (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *extraout_x1;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined4 uStack_13e;
  undefined2 uStack_13a;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  
  if ((bRam0000000003ebc64b & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64b = 1;
  }
  lVar9 = *(long *)(param_1 + 0x70);
  if (lVar9 != 0) {
    lVar4 = lVar9;
    if (*(uint *)(lVar9 + 0x18) <= (uint)param_2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar4 = *(long *)(param_1 + 0x70);
    }
    if (lVar4 != 0) {
      lVar9 = *(long *)(lVar9 + 0x10) + (long)(int)(uint)param_2 * 0x28;
      uStack_58 = *(undefined8 *)(lVar9 + 0x28);
      uStack_60 = *(undefined8 *)(lVar9 + 0x20);
      uStack_3e = *(undefined4 *)(lVar9 + 0x42);
      uStack_3a = *(undefined2 *)(lVar9 + 0x46);
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 1;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar4,param_2,&uStack_60,uRam0000000003d3ddd0);
      uVar5 = Core_UI2_UIManager__UpdateLayer(param_1,param_2);
      return uVar5;
    }
  }
  auVar11 = func_0x00f78af4();
  if ((bRam0000000003ebc64c & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc64c = 1;
  }
  lVar9 = *(long *)(auVar11._0_8_ + 0x70);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= auVar11._8_4_) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)auVar11._8_4_ * 0x28 + 0x28);
    if (lVar9 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(ulong *)(lVar9 + 0x40);
    }
    return uVar5;
  }
  plVar6 = (long *)func_0x00f78af4();
  (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
  if (plVar6[5] != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(plVar6[5],0);
    *(undefined4 *)((long)plVar6 + 0x4c) = 4;
    Core_Input_InputManager__UnregisterListener(plVar6,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
    return uVar5;
  }
  func_0x00f78af4();
  if (extraout_x1 != (long *)0x0) {
    lVar9 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar7 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar7,lVar9);
    uVar5 = (**(code **)(*extraout_x1 + 0x248))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return uVar5;
  }
  auVar12 = func_0x00f78af4();
  lVar9 = auVar12._0_8_;
  Core_UI2_UIManager__ClearLayer(lVar9,param_3);
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  iVar1 = Core_UI2_UIManager__IsScreenIdValid(lVar9,auVar12._8_8_);
  uVar8 = (uint)param_3;
  if (((int)uVar8 < 0) || (iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(lVar9 + 0x50) <= (int)uVar8) {
    return 0;
  }
  lVar4 = *(long *)(lVar9 + 0x70);
  if (lVar4 != 0) {
    lVar2 = lVar4;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar2 = *(long *)(lVar9 + 0x70);
    }
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar4 + 0x10) + (param_3 & 0xffffffff) * 0x28;
      uStack_158 = *(undefined8 *)(lVar4 + 0x28);
      uStack_160 = *(undefined8 *)(lVar4 + 0x20);
      uStack_13e = *(undefined4 *)(lVar4 + 0x42);
      uStack_13a = *(undefined2 *)(lVar4 + 0x46);
      uStack_140 = 1;
      uStack_13f = 0;
      uStack_150 = auVar12._8_8_;
      uStack_148 = param_4;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar2,param_3,&uStack_160,uRam0000000003d3ddd0);
      Core_UI2_UIManager__UpdateLayer(lVar9,param_3);
      return 1;
    }
  }
  auVar12 = func_0x00f78af4();
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar9 = *(long *)(auVar12._0_8_ + 0x78);
  if (lVar9 != 0) {
    iVar1 = *(int *)(lVar9 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar10 = 1;
    uVar5 = 1;
    do {
      if (*(uint *)(lVar9 + 0x18) <= iVar10 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)(iVar10 - 1U) * 0x20 + 0x20);
      if (lVar9 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar9,auVar12._8_8_,5,0);
      if ((uVar3 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(iVar10 < iVar1);
      if (iVar1 == iVar10) {
        return uVar5;
      }
      lVar9 = *(long *)(auVar12._0_8_ + 0x78);
      iVar10 = iVar10 + 1;
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x2f88250 | Core.UI2.UIManager.GetCurrentScreenID
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_UI2_UIManager__GetCurrentScreenID
                (long param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *extraout_x1;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined4 uStack_be;
  undefined2 uStack_ba;
  
  if ((bRam0000000003ebc64c & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc64c = 1;
  }
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= param_2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)param_2 * 0x28 + 0x28);
    if (lVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(ulong *)(lVar8 + 0x40);
    }
    return uVar4;
  }
  plVar5 = (long *)func_0x00f78af4();
  (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220));
  if (plVar5[5] != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(plVar5[5],0);
    *(undefined4 *)((long)plVar5 + 0x4c) = 4;
    Core_Input_InputManager__UnregisterListener(plVar5,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
    return uVar4;
  }
  func_0x00f78af4();
  if (extraout_x1 != (long *)0x0) {
    lVar8 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar6 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar6,lVar8);
    uVar4 = (**(code **)(*extraout_x1 + 0x248))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return uVar4;
  }
  auVar11 = func_0x00f78af4();
  lVar8 = auVar11._0_8_;
  Core_UI2_UIManager__ClearLayer(lVar8,param_3);
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  iVar1 = Core_UI2_UIManager__IsScreenIdValid(lVar8,auVar11._8_8_);
  uVar7 = (uint)param_3;
  if (((int)uVar7 < 0) || (iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(lVar8 + 0x50) <= (int)uVar7) {
    return 0;
  }
  lVar10 = *(long *)(lVar8 + 0x70);
  if (lVar10 != 0) {
    lVar2 = lVar10;
    if (*(uint *)(lVar10 + 0x18) <= uVar7) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar2 = *(long *)(lVar8 + 0x70);
    }
    if (lVar2 != 0) {
      lVar10 = *(long *)(lVar10 + 0x10) + (param_3 & 0xffffffff) * 0x28;
      uStack_d8 = *(undefined8 *)(lVar10 + 0x28);
      uStack_e0 = *(undefined8 *)(lVar10 + 0x20);
      uStack_be = *(undefined4 *)(lVar10 + 0x42);
      uStack_ba = *(undefined2 *)(lVar10 + 0x46);
      uStack_c0 = 1;
      uStack_bf = 0;
      uStack_d0 = auVar11._8_8_;
      uStack_c8 = param_4;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar2,param_3,&uStack_e0,uRam0000000003d3ddd0);
      Core_UI2_UIManager__UpdateLayer(lVar8,param_3);
      return 1;
    }
  }
  auVar11 = func_0x00f78af4();
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar8 = *(long *)(auVar11._0_8_ + 0x78);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar9 = 1;
    uVar4 = 1;
    do {
      if (*(uint *)(lVar8 + 0x18) <= iVar9 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)(iVar9 - 1U) * 0x20 + 0x20);
      if (lVar8 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar11._8_8_,5,0);
      if ((uVar3 & 1) != 0) {
        return uVar4;
      }
      uVar4 = (ulong)(iVar9 < iVar1);
      if (iVar1 == iVar9) {
        return uVar4;
      }
      lVar8 = *(long *)(auVar11._0_8_ + 0x78);
      iVar9 = iVar9 + 1;
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x2f8833c | Core.UI2.UIManager.ReturnScreenWithBehaviour
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_UI2_UIManager__ReturnScreenWithBehaviour
                (undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  
  if (param_2 != (long *)0x0) {
    lVar7 = param_2[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[9] = _UNK_037235c0;
    param_2[7] = 0;
    param_2[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar4,lVar7);
    uVar5 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    param_2[0xb] = 0;
    return uVar5;
  }
  auVar10 = func_0x00f78af4();
  lVar7 = auVar10._0_8_;
  Core_UI2_UIManager__ClearLayer(lVar7,param_3);
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  iVar1 = Core_UI2_UIManager__IsScreenIdValid(lVar7,auVar10._8_8_);
  uVar6 = (uint)param_3;
  if (((int)uVar6 < 0) || (iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(lVar7 + 0x50) <= (int)uVar6) {
    return 0;
  }
  lVar9 = *(long *)(lVar7 + 0x70);
  if (lVar9 != 0) {
    lVar2 = lVar9;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar2 = *(long *)(lVar7 + 0x70);
    }
    if (lVar2 != 0) {
      lVar9 = *(long *)(lVar9 + 0x10) + (param_3 & 0xffffffff) * 0x28;
      uStack_88 = *(undefined8 *)(lVar9 + 0x28);
      uStack_90 = *(undefined8 *)(lVar9 + 0x20);
      uStack_6e = *(undefined4 *)(lVar9 + 0x42);
      uStack_6a = *(undefined2 *)(lVar9 + 0x46);
      uStack_70 = 1;
      uStack_6f = 0;
      uStack_80 = auVar10._8_8_;
      uStack_78 = param_4;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar2,param_3,&uStack_90,uRam0000000003d3ddd0);
      Core_UI2_UIManager__UpdateLayer(lVar7,param_3);
      return 1;
    }
  }
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x78);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar8 = 1;
    uVar5 = 1;
    do {
      if (*(uint *)(lVar7 + 0x18) <= iVar8 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)(iVar8 - 1U) * 0x20 + 0x20);
      if (lVar7 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar7,auVar10._8_8_,5,0);
      if ((uVar3 & 1) != 0) {
        return uVar5;
      }
      uVar5 = (ulong)(iVar8 < iVar1);
      if (iVar1 == iVar8) {
        return uVar5;
      }
      lVar7 = *(long *)(auVar10._0_8_ + 0x78);
      iVar8 = iVar8 + 1;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x2f883b0 | Core.UI2.UIManager.ClearLayerAndShowScreen
// ============================================================

bool Core_UI2_UIManager__ClearLayerAndShowScreen
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  
  Core_UI2_UIManager__ClearLayer(param_1,param_3);
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  iVar1 = Core_UI2_UIManager__IsScreenIdValid(param_1,param_2);
  uVar4 = (uint)param_3;
  if (((int)uVar4 < 0) || (iVar1 == 0)) {
    return false;
  }
  if (*(int *)(param_1 + 0x50) <= (int)uVar4) {
    return false;
  }
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 != 0) {
    lVar2 = lVar7;
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar2 = *(long *)(param_1 + 0x70);
    }
    if (lVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x10) + (param_3 & 0xffffffff) * 0x28;
      uStack_68 = *(undefined8 *)(lVar7 + 0x28);
      uStack_70 = *(undefined8 *)(lVar7 + 0x20);
      uStack_4e = *(undefined4 *)(lVar7 + 0x42);
      uStack_4a = *(undefined2 *)(lVar7 + 0x46);
      uStack_50 = 1;
      uStack_4f = 0;
      uStack_60 = param_2;
      uStack_58 = param_4;
      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar2,param_3,&uStack_70,uRam0000000003d3ddd0);
      Core_UI2_UIManager__UpdateLayer(param_1,param_3);
      return true;
    }
  }
  auVar8 = func_0x00f78af4();
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar7 = *(long *)(auVar8._0_8_ + 0x78);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (iVar1 < 1) {
      return false;
    }
    iVar6 = 1;
    bVar5 = true;
    do {
      if (*(uint *)(lVar7 + 0x18) <= iVar6 - 1U) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)(iVar6 - 1U) * 0x20 + 0x20);
      if (lVar7 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar7,auVar8._8_8_,5,0);
      if ((uVar3 & 1) != 0) {
        return bVar5;
      }
      bVar5 = iVar6 < iVar1;
      if (iVar1 == iVar6) {
        return bVar5;
      }
      lVar7 = *(long *)(auVar8._0_8_ + 0x78);
      iVar6 = iVar6 + 1;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return false;
}



// ============================================================
// RVA: 0x2f883fc | Core.UI2.UIManager.AreScreenIdsEqual
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */

ulong Core_UI2_UIManager__AreScreenIdsEqual(undefined8 param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  code *pcVar22;
  ulong *puVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  
  if (param_2 != 0) {
    if ((bRam0000000003eb9443 & 1) == 0) {
      func_0x00f78a20(0x3d20b50,param_3,5,0);
      bRam0000000003eb9443 = 1;
    }
    if (param_2 == param_3) {
      uVar10 = 1;
    }
    else {
      if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
        return uVar10;
      }
      uVar10 = 0;
    }
    return uVar10;
  }
  auVar25 = func_0x00f78af4();
  if ((bRam0000000003ebc64f & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc64f = 1;
  }
  uVar20 = auVar25._8_4_;
  if ((-1 < (int)uVar20) && ((int)uVar20 < *(int *)(auVar25._0_8_ + 0x50))) {
    lVar21 = *(long *)(auVar25._0_8_ + 0x70);
    if (lVar21 == 0) {
      auVar24 = func_0x00f78af4();
      if ((bRam0000000003ebc650 & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc650 = 1;
      }
      lVar21 = *(long *)(auVar24._0_8_ + 0x70);
      if (lVar21 != 0) {
        if (*(uint *)(lVar21 + 0x18) <= auVar24._8_4_) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)auVar24._8_4_ * 0x28 + 0x28);
        if (lVar21 == 0) {
          uVar10 = 4;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar21 + 0x4c);
        }
        return uVar10;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      uVar16 = auVar25._0_8_;
      uVar10 = 0x3ebc000;
      uVar15 = param_3;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(uVar16 + 0x68) != 0) {
        uVar15 = (ulong)((uint)param_3 ^ 1);
        uVar11 = Core_Input_InputManager__SetScreenLayerInputDisabled
                           (*(long *)(uVar16 + 0x68),uVar13,uVar15,0);
        lVar21 = *(long *)(uVar16 + 0x70);
        uVar10 = 0;
        if (lVar21 != 0) {
          uVar20 = auVar25._8_4_;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) {
            uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28) == 0) ||
             (uVar10 = *(ulong *)(uVar16 + 0x30), uVar10 == 0)) {
            return uVar11;
          }
          lVar21 = *(long *)(uVar16 + 0x70);
          uVar16 = 0;
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= uVar20) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar14 = *(long **)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28);
            uStack_d8 = uVar10;
            lVar21 = *(long *)(uVar10 + 0x68);
            if (lVar21 == 0) {
              puVar23 = &uStack_d8;
              lVar18 = 1;
            }
            else {
              lVar18 = *(long *)(lVar21 + 0x18);
              if (lVar18 == 0) {
                return uVar10;
              }
              puVar23 = (ulong *)(lVar21 + 0x20);
            }
            lVar21 = 0;
            do {
              uVar16 = puVar23[lVar21];
              pcVar22 = *(code **)(uVar16 + 0x10);
              plVar1 = *(long **)(uVar16 + 0x20);
              lVar7 = *(long *)(uVar16 + 0x28);
              if (*(short *)(lVar7 + 0x48) == -1) {
                func_0x00f78ad8(lVar7);
              }
              iVar6 = func_0x00f78a4c(lVar7);
              bVar4 = *(char *)(lVar7 + 0x4a) == '\x03';
              if (iVar6 == 0) {
                if (bVar4) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                    uVar16 = (*pcVar22)(plVar14,uVar13,param_3,lVar7);
                  }
                  else {
                    if (((*(short *)(lVar7 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)
                        ) || (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01e71aac;
                    iVar6 = func_0x00f78a44(lVar7);
                    iVar5 = func_0x00f78ec0(lVar7);
                    if (iVar6 == 0) {
                      uVar3 = *(ushort *)(lVar7 + 0x48);
                      if (iVar5 == 0) {
                        lVar7 = *plVar1 + (ulong)uVar3 * 0x10;
                        uVar16 = (**(code **)(lVar7 + 0x138))
                                           (plVar1,plVar14,uVar13,param_3,
                                            *(undefined8 *)(lVar7 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar7 = func_0x00f78a48(lVar7);
                      lVar17 = *plVar1;
                      uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                      if (uVar16 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == lVar7) {
                            puVar9 = (undefined8 *)
                                     (lVar17 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d74;
                          }
                          piVar19 = piVar19 + 4;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                      puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar7,(ulong)uVar3);
code_r0x01e71d74:
                      pcVar22 = (code *)*puVar9;
                      puVar9 = (undefined8 *)puVar9[1];
                    }
                    else {
                      if (iVar5 == 0) {
                        uVar8 = *(undefined8 *)
                                 (*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar17 = *plVar1;
                        uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                        if (uVar16 != 0) {
                          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar19 + -2) == *(long *)(lVar7 + 0x18)) {
                              lVar17 = lVar17 + (long)(int)(*piVar19 +
                                                           (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 +
                                       0x138;
                              goto code_r0x01e71d4c;
                            }
                            piVar19 = piVar19 + 4;
                            uVar16 = uVar16 - 1;
                          } while (uVar16 != 0);
                        }
                        lVar17 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                        uVar8 = *(undefined8 *)(lVar17 + 8);
                      }
                      puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar7);
                      pcVar22 = (code *)*puVar9;
                    }
                    uVar16 = (*pcVar22)(plVar1,plVar14,uVar13,param_3,puVar9);
                  }
                }
                else {
                  if ((*(short *)(lVar7 + 0x48) == -1) || (*(long *)(uVar10 + 0x18) == 0))
                  goto code_r0x01e71bbc;
                  iVar6 = func_0x00f78a44(lVar7);
                  iVar5 = func_0x00f78ec0(lVar7);
                  if (iVar6 == 0) {
                    uVar3 = *(ushort *)(lVar7 + 0x48);
                    if (iVar5 == 0) {
                      lVar7 = *plVar14 + (ulong)uVar3 * 0x10;
                      uVar16 = (**(code **)(lVar7 + 0x138))
                                         (plVar14,uVar13,param_3,*(undefined8 *)(lVar7 + 0x140));
                      goto code_r0x01e71bd0;
                    }
                    lVar7 = func_0x00f78a48(lVar7);
                    lVar17 = *plVar14;
                    uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                    if (uVar16 != 0) {
                      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == lVar7) {
                          puVar9 = (undefined8 *)
                                   (lVar17 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                          goto code_r0x01e71d00;
                        }
                        piVar19 = piVar19 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar9 = (undefined8 *)func_0x00fac1f0(plVar14,lVar7,(ulong)uVar3);
code_r0x01e71d00:
                    pcVar22 = (code *)*puVar9;
                    puVar9 = (undefined8 *)puVar9[1];
                  }
                  else {
                    if (iVar5 == 0) {
                      uVar8 = *(undefined8 *)
                               (*plVar14 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar17 = *plVar14;
                      uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                      if (uVar16 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)(lVar7 + 0x18)) {
                            lVar17 = lVar17 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar7 + 0x48)
                                                         ) * 0x10 + 0x138;
                            goto code_r0x01e71cd8;
                          }
                          piVar19 = piVar19 + 4;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                      lVar17 = func_0x00fac1f0(plVar14);
code_r0x01e71cd8:
                      uVar8 = *(undefined8 *)(lVar17 + 8);
                    }
                    puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar7);
                    pcVar22 = (code *)*puVar9;
                  }
                  uVar16 = (*pcVar22)(plVar14,uVar13,param_3,puVar9);
                }
              }
              else {
                if (bVar4) goto code_r0x01e71bbc;
code_r0x01e71aac:
                uVar16 = (*pcVar22)(plVar1,plVar14,uVar13,param_3,lVar7);
              }
code_r0x01e71bd0:
              lVar21 = lVar21 + 1;
              if (lVar21 == lVar18) {
                return uVar16;
              }
            } while( true );
          }
        }
      }
      auVar25 = func_0x00f78af4();
      uVar12 = auVar25._0_8_;
      uVar11 = uVar12;
      uStack_e0 = uVar10;
      uStack_d8 = uVar16;
      if ((bRam0000000003ebc652 & 1) == 0) {
        uVar11 = func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar21 = *(long *)(uVar12 + 0x70);
      if (lVar21 != 0) {
        uVar20 = auVar25._8_4_;
        if (*(uint *)(lVar21 + 0x18) <= uVar20) {
          uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28) == 0) {
          return uVar11;
        }
        lVar21 = *(long *)(uVar12 + 0x70);
        if (lVar21 != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28);
          if ((lVar21 != 0) && (plVar14 = *(long **)(lVar21 + 0x28), plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (**(code **)(*plVar14 + 0x178))
                               (plVar14,uVar15,*(undefined8 *)(*plVar14 + 0x180));
            return uVar10;
          }
        }
      }
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._0_8_;
      puStack_e8 = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_100 = auVar25._8_8_;
      uStack_f8 = uVar15;
      puStack_f0 = &stack0xffffffffffffff40;
      uVar10 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar13,auVar26._8_8_,&uStack_120);
      if ((int)uVar10 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar13,uStack_110,uStack_108);
        uStack_138 = uStack_118;
        uStack_140 = uStack_120;
        uStack_128 = uStack_108;
        uStack_130 = uStack_110;
        uVar10 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar13,&uStack_140,1);
      }
      return uVar10;
    }
    if (*(uint *)(lVar21 + 0x18) <= uVar20) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar18 = *(long *)(lVar21 + 0x10) + (auVar25._8_8_ & 0xffffffff) * 0x28;
    lVar21 = *(long *)(lVar18 + 0x28);
    cVar2 = *(char *)(lVar18 + 0x40);
    iVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar18 + 0x30),0);
    if ((iVar6 != 0 && cVar2 == '\0') && ((lVar21 == 0 || (*(int *)(lVar21 + 0x4c) == 2)))) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x2f88420 | Core.UI2.UIManager.IsLayerReady
// ============================================================

ulong Core_UI2_UIManager__IsLayerReady(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  code *pcVar22;
  ulong *puVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  
  if ((bRam0000000003ebc64f & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc64f = 1;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x50))) {
    lVar21 = *(long *)(param_1 + 0x70);
    if (lVar21 == 0) {
      auVar24 = func_0x00f78af4();
      if ((bRam0000000003ebc650 & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc650 = 1;
      }
      lVar21 = *(long *)(auVar24._0_8_ + 0x70);
      if (lVar21 != 0) {
        if (*(uint *)(lVar21 + 0x18) <= auVar24._8_4_) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)auVar24._8_4_ * 0x28 + 0x28);
        if (lVar21 == 0) {
          uVar10 = 4;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar21 + 0x4c);
        }
        return uVar10;
      }
      auVar25 = func_0x00f78af4();
      uVar13 = auVar25._8_8_;
      uVar16 = auVar25._0_8_;
      uVar10 = 0x3ebc000;
      uVar15 = param_3;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(uVar16 + 0x68) != 0) {
        uVar15 = (ulong)((uint)param_3 ^ 1);
        uVar11 = Core_Input_InputManager__SetScreenLayerInputDisabled
                           (*(long *)(uVar16 + 0x68),uVar13,uVar15,0);
        lVar21 = *(long *)(uVar16 + 0x70);
        uVar10 = 0;
        if (lVar21 != 0) {
          uVar20 = auVar25._8_4_;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) {
            uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28) == 0) ||
             (uVar10 = *(ulong *)(uVar16 + 0x30), uVar10 == 0)) {
            return uVar11;
          }
          lVar21 = *(long *)(uVar16 + 0x70);
          uVar16 = 0;
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= uVar20) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar14 = *(long **)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28);
            uStack_c8 = uVar10;
            lVar21 = *(long *)(uVar10 + 0x68);
            if (lVar21 == 0) {
              puVar23 = &uStack_c8;
              lVar18 = 1;
            }
            else {
              lVar18 = *(long *)(lVar21 + 0x18);
              if (lVar18 == 0) {
                return uVar10;
              }
              puVar23 = (ulong *)(lVar21 + 0x20);
            }
            lVar21 = 0;
            do {
              uVar16 = puVar23[lVar21];
              pcVar22 = *(code **)(uVar16 + 0x10);
              plVar1 = *(long **)(uVar16 + 0x20);
              lVar7 = *(long *)(uVar16 + 0x28);
              if (*(short *)(lVar7 + 0x48) == -1) {
                func_0x00f78ad8(lVar7);
              }
              iVar6 = func_0x00f78a4c(lVar7);
              bVar4 = *(char *)(lVar7 + 0x4a) == '\x03';
              if (iVar6 == 0) {
                if (bVar4) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                    uVar16 = (*pcVar22)(plVar14,uVar13,param_3,lVar7);
                  }
                  else {
                    if (((*(short *)(lVar7 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)
                        ) || (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01e71aac;
                    iVar6 = func_0x00f78a44(lVar7);
                    iVar5 = func_0x00f78ec0(lVar7);
                    if (iVar6 == 0) {
                      uVar3 = *(ushort *)(lVar7 + 0x48);
                      if (iVar5 == 0) {
                        lVar7 = *plVar1 + (ulong)uVar3 * 0x10;
                        uVar16 = (**(code **)(lVar7 + 0x138))
                                           (plVar1,plVar14,uVar13,param_3,
                                            *(undefined8 *)(lVar7 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar7 = func_0x00f78a48(lVar7);
                      lVar17 = *plVar1;
                      uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                      if (uVar16 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == lVar7) {
                            puVar9 = (undefined8 *)
                                     (lVar17 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d74;
                          }
                          piVar19 = piVar19 + 4;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                      puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar7,(ulong)uVar3);
code_r0x01e71d74:
                      pcVar22 = (code *)*puVar9;
                      puVar9 = (undefined8 *)puVar9[1];
                    }
                    else {
                      if (iVar5 == 0) {
                        uVar8 = *(undefined8 *)
                                 (*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar17 = *plVar1;
                        uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                        if (uVar16 != 0) {
                          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar19 + -2) == *(long *)(lVar7 + 0x18)) {
                              lVar17 = lVar17 + (long)(int)(*piVar19 +
                                                           (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 +
                                       0x138;
                              goto code_r0x01e71d4c;
                            }
                            piVar19 = piVar19 + 4;
                            uVar16 = uVar16 - 1;
                          } while (uVar16 != 0);
                        }
                        lVar17 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                        uVar8 = *(undefined8 *)(lVar17 + 8);
                      }
                      puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar7);
                      pcVar22 = (code *)*puVar9;
                    }
                    uVar16 = (*pcVar22)(plVar1,plVar14,uVar13,param_3,puVar9);
                  }
                }
                else {
                  if ((*(short *)(lVar7 + 0x48) == -1) || (*(long *)(uVar10 + 0x18) == 0))
                  goto code_r0x01e71bbc;
                  iVar6 = func_0x00f78a44(lVar7);
                  iVar5 = func_0x00f78ec0(lVar7);
                  if (iVar6 == 0) {
                    uVar3 = *(ushort *)(lVar7 + 0x48);
                    if (iVar5 == 0) {
                      lVar7 = *plVar14 + (ulong)uVar3 * 0x10;
                      uVar16 = (**(code **)(lVar7 + 0x138))
                                         (plVar14,uVar13,param_3,*(undefined8 *)(lVar7 + 0x140));
                      goto code_r0x01e71bd0;
                    }
                    lVar7 = func_0x00f78a48(lVar7);
                    lVar17 = *plVar14;
                    uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                    if (uVar16 != 0) {
                      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == lVar7) {
                          puVar9 = (undefined8 *)
                                   (lVar17 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
                          goto code_r0x01e71d00;
                        }
                        piVar19 = piVar19 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar9 = (undefined8 *)func_0x00fac1f0(plVar14,lVar7,(ulong)uVar3);
code_r0x01e71d00:
                    pcVar22 = (code *)*puVar9;
                    puVar9 = (undefined8 *)puVar9[1];
                  }
                  else {
                    if (iVar5 == 0) {
                      uVar8 = *(undefined8 *)
                               (*plVar14 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar17 = *plVar14;
                      uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
                      if (uVar16 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)(lVar7 + 0x18)) {
                            lVar17 = lVar17 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar7 + 0x48)
                                                         ) * 0x10 + 0x138;
                            goto code_r0x01e71cd8;
                          }
                          piVar19 = piVar19 + 4;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                      lVar17 = func_0x00fac1f0(plVar14);
code_r0x01e71cd8:
                      uVar8 = *(undefined8 *)(lVar17 + 8);
                    }
                    puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar7);
                    pcVar22 = (code *)*puVar9;
                  }
                  uVar16 = (*pcVar22)(plVar14,uVar13,param_3,puVar9);
                }
              }
              else {
                if (bVar4) goto code_r0x01e71bbc;
code_r0x01e71aac:
                uVar16 = (*pcVar22)(plVar1,plVar14,uVar13,param_3,lVar7);
              }
code_r0x01e71bd0:
              lVar21 = lVar21 + 1;
              if (lVar21 == lVar18) {
                return uVar16;
              }
            } while( true );
          }
        }
      }
      auVar25 = func_0x00f78af4();
      uVar12 = auVar25._0_8_;
      uVar11 = uVar12;
      uStack_d0 = uVar10;
      uStack_c8 = uVar16;
      if ((bRam0000000003ebc652 & 1) == 0) {
        uVar11 = func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar21 = *(long *)(uVar12 + 0x70);
      if (lVar21 != 0) {
        uVar20 = auVar25._8_4_;
        if (*(uint *)(lVar21 + 0x18) <= uVar20) {
          uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28) == 0) {
          return uVar11;
        }
        lVar21 = *(long *)(uVar12 + 0x70);
        if (lVar21 != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar20 * 0x28 + 0x28);
          if ((lVar21 != 0) && (plVar14 = *(long **)(lVar21 + 0x28), plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (**(code **)(*plVar14 + 0x178))
                               (plVar14,uVar15,*(undefined8 *)(*plVar14 + 0x180));
            return uVar10;
          }
        }
      }
      auVar26 = func_0x00f78af4();
      uVar13 = auVar26._0_8_;
      puStack_d8 = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_f0 = auVar25._8_8_;
      uStack_e8 = uVar15;
      puStack_e0 = &stack0xffffffffffffff50;
      uVar10 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar13,auVar26._8_8_,&uStack_110);
      if ((int)uVar10 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar13,uStack_100,uStack_f8);
        uStack_128 = uStack_108;
        uStack_130 = uStack_110;
        uStack_118 = uStack_f8;
        uStack_120 = uStack_100;
        uVar10 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar13,&uStack_130,1);
      }
      return uVar10;
    }
    if (*(uint *)(lVar21 + 0x18) <= param_2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar18 = *(long *)(lVar21 + 0x10) + (ulong)param_2 * 0x28;
    lVar21 = *(long *)(lVar18 + 0x28);
    cVar2 = *(char *)(lVar18 + 0x40);
    iVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar18 + 0x30),0);
    if ((iVar6 != 0 && cVar2 == '\0') && ((lVar21 == 0 || (*(int *)(lVar21 + 0x4c) == 2)))) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x2f884dc | Core.UI2.UIManager.GetLayerState
// ============================================================

ulong Core_UI2_UIManager__GetLayerState(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  ulong *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  
  if ((bRam0000000003ebc650 & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc650 = 1;
  }
  lVar19 = *(long *)(param_1 + 0x70);
  if (lVar19 != 0) {
    if (*(uint *)(lVar19 + 0x18) <= param_2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)param_2 * 0x28 + 0x28);
    if (lVar19 == 0) {
      uVar9 = 4;
    }
    else {
      uVar9 = (ulong)*(uint *)(lVar19 + 0x4c);
    }
    return uVar9;
  }
  auVar23 = func_0x00f78af4();
  uVar12 = auVar23._8_8_;
  uVar15 = auVar23._0_8_;
  uVar9 = 0x3ebc000;
  uVar14 = param_3;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(uVar15 + 0x68) != 0) {
    uVar14 = (ulong)((uint)param_3 ^ 1);
    uVar10 = Core_Input_InputManager__SetScreenLayerInputDisabled
                       (*(long *)(uVar15 + 0x68),uVar12,uVar14,0);
    lVar19 = *(long *)(uVar15 + 0x70);
    uVar9 = 0;
    if (lVar19 != 0) {
      uVar18 = auVar23._8_4_;
      if (*(uint *)(lVar19 + 0x18) <= uVar18) {
        uVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28) == 0) ||
         (uVar9 = *(ulong *)(uVar15 + 0x30), uVar9 == 0)) {
        return uVar10;
      }
      lVar19 = *(long *)(uVar15 + 0x70);
      uVar15 = 0;
      if (lVar19 != 0) {
        if (*(uint *)(lVar19 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar13 = *(long **)(*(long *)(lVar19 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28);
        uStack_98 = uVar9;
        lVar19 = *(long *)(uVar9 + 0x68);
        if (lVar19 == 0) {
          puVar22 = &uStack_98;
          lVar21 = 1;
        }
        else {
          lVar21 = *(long *)(lVar19 + 0x18);
          if (lVar21 == 0) {
            return uVar9;
          }
          puVar22 = (ulong *)(lVar19 + 0x20);
        }
        lVar19 = 0;
        do {
          uVar15 = puVar22[lVar19];
          pcVar20 = *(code **)(uVar15 + 0x10);
          plVar1 = *(long **)(uVar15 + 0x20);
          lVar6 = *(long *)(uVar15 + 0x28);
          if (*(short *)(lVar6 + 0x48) == -1) {
            func_0x00f78ad8(lVar6);
          }
          iVar4 = func_0x00f78a4c(lVar6);
          bVar3 = *(char *)(lVar6 + 0x4a) == '\x03';
          if (iVar4 == 0) {
            if (bVar3) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                uVar15 = (*pcVar20)(plVar13,uVar12,param_3,lVar6);
              }
              else {
                if (((*(short *)(lVar6 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                   (*(long *)(uVar9 + 0x18) == 0)) goto code_r0x01e71aac;
                iVar4 = func_0x00f78a44(lVar6);
                iVar5 = func_0x00f78ec0(lVar6);
                if (iVar4 == 0) {
                  uVar2 = *(ushort *)(lVar6 + 0x48);
                  if (iVar5 == 0) {
                    lVar6 = *plVar1 + (ulong)uVar2 * 0x10;
                    uVar15 = (**(code **)(lVar6 + 0x138))
                                       (plVar1,plVar13,uVar12,param_3,*(undefined8 *)(lVar6 + 0x140)
                                       );
                    goto code_r0x01e71bd0;
                  }
                  lVar6 = func_0x00f78a48(lVar6);
                  lVar16 = *plVar1;
                  uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == lVar6) {
                        puVar8 = (undefined8 *)
                                 (lVar16 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar17 = piVar17 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar6,(ulong)uVar2);
code_r0x01e71d74:
                  pcVar20 = (code *)*puVar8;
                  puVar8 = (undefined8 *)puVar8[1];
                }
                else {
                  if (iVar5 == 0) {
                    uVar7 = *(undefined8 *)
                             (*plVar1 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar16 = *plVar1;
                    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
                    if (uVar15 != 0) {
                      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == *(long *)(lVar6 + 0x18)) {
                          lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar6 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar17 = piVar17 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    lVar16 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar7 = *(undefined8 *)(lVar16 + 8);
                  }
                  puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar6);
                  pcVar20 = (code *)*puVar8;
                }
                uVar15 = (*pcVar20)(plVar1,plVar13,uVar12,param_3,puVar8);
              }
            }
            else {
              if ((*(short *)(lVar6 + 0x48) == -1) || (*(long *)(uVar9 + 0x18) == 0))
              goto code_r0x01e71bbc;
              iVar4 = func_0x00f78a44(lVar6);
              iVar5 = func_0x00f78ec0(lVar6);
              if (iVar4 == 0) {
                uVar2 = *(ushort *)(lVar6 + 0x48);
                if (iVar5 == 0) {
                  lVar6 = *plVar13 + (ulong)uVar2 * 0x10;
                  uVar15 = (**(code **)(lVar6 + 0x138))
                                     (plVar13,uVar12,param_3,*(undefined8 *)(lVar6 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar6 = func_0x00f78a48(lVar6);
                lVar16 = *plVar13;
                uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar6) {
                      puVar8 = (undefined8 *)
                               (lVar16 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar17 = piVar17 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar6,(ulong)uVar2);
code_r0x01e71d00:
                pcVar20 = (code *)*puVar8;
                puVar8 = (undefined8 *)puVar8[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar7 = *(undefined8 *)
                           (*plVar13 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar16 = *plVar13;
                  uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)(lVar6 + 0x18)) {
                        lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar6 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar17 = piVar17 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  lVar16 = func_0x00fac1f0(plVar13);
code_r0x01e71cd8:
                  uVar7 = *(undefined8 *)(lVar16 + 8);
                }
                puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar6);
                pcVar20 = (code *)*puVar8;
              }
              uVar15 = (*pcVar20)(plVar13,uVar12,param_3,puVar8);
            }
          }
          else {
            if (bVar3) goto code_r0x01e71bbc;
code_r0x01e71aac:
            uVar15 = (*pcVar20)(plVar1,plVar13,uVar12,param_3,lVar6);
          }
code_r0x01e71bd0:
          lVar19 = lVar19 + 1;
          if (lVar19 == lVar21) {
            return uVar15;
          }
        } while( true );
      }
    }
  }
  auVar23 = func_0x00f78af4();
  uVar11 = auVar23._0_8_;
  uVar10 = uVar11;
  uStack_a0 = uVar9;
  uStack_98 = uVar15;
  if ((bRam0000000003ebc652 & 1) == 0) {
    uVar10 = func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar19 = *(long *)(uVar11 + 0x70);
  if (lVar19 != 0) {
    uVar18 = auVar23._8_4_;
    if (*(uint *)(lVar19 + 0x18) <= uVar18) {
      uVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28) == 0) {
      return uVar10;
    }
    lVar19 = *(long *)(uVar11 + 0x70);
    if (lVar19 != 0) {
      if (*(uint *)(lVar19 + 0x18) <= uVar18) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar18 * 0x28 + 0x28);
      if ((lVar19 != 0) && (plVar13 = *(long **)(lVar19 + 0x28), plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(*plVar13 + 0x178))(plVar13,uVar14,*(undefined8 *)(*plVar13 + 0x180));
        return uVar9;
      }
    }
  }
  auVar24 = func_0x00f78af4();
  uVar12 = auVar24._0_8_;
  puStack_a8 = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_c0 = auVar23._8_8_;
  uStack_b8 = uVar14;
  puStack_b0 = &stack0xffffffffffffff80;
  uVar9 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar12,auVar24._8_8_,&uStack_e0);
  if ((int)uVar9 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar12,uStack_d0,uStack_c8);
    uStack_f8 = uStack_d8;
    uStack_100 = uStack_e0;
    uStack_e8 = uStack_c8;
    uStack_f0 = uStack_d0;
    uVar9 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar12,&uStack_100,1);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x2f88564 | Core.UI2.UIManager.EnableInput
// ============================================================

void Core_UI2_UIManager__EnableInput(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar14 = 0x3ebc000;
  uVar9 = param_3;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar9 = (ulong)((uint)param_3 ^ 1);
    Core_Input_InputManager__SetScreenLayerInputDisabled(*(long *)(param_1 + 0x68),param_2,uVar9,0);
    lVar15 = *(long *)(param_1 + 0x70);
    lVar14 = 0;
    if (lVar15 != 0) {
      uVar13 = (uint)param_2;
      if (*(uint *)(lVar15 + 0x18) <= uVar13) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar13 * 0x28 + 0x28) == 0) ||
         (lVar14 = *(long *)(param_1 + 0x30), lVar14 == 0)) {
        return;
      }
      lVar15 = *(long *)(param_1 + 0x70);
      param_1 = 0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar13) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar8 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar13 * 0x28 + 0x28);
        lStack_68 = lVar14;
        lVar15 = *(long *)(lVar14 + 0x68);
        if (lVar15 == 0) {
          plVar18 = &lStack_68;
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar15 + 0x18);
          if (lVar17 == 0) {
            return;
          }
          plVar18 = (long *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar10 = plVar18[lVar15];
          pcVar16 = *(code **)(lVar10 + 0x10);
          plVar1 = *(long **)(lVar10 + 0x20);
          lVar10 = *(long *)(lVar10 + 0x28);
          if (*(short *)(lVar10 + 0x48) == -1) {
            func_0x00f78ad8(lVar10);
          }
          iVar4 = func_0x00f78a4c(lVar10);
          bVar3 = *(char *)(lVar10 + 0x4a) == '\x03';
          if (iVar4 == 0) {
            if (bVar3) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                (*pcVar16)(plVar8,param_2,param_3,lVar10);
              }
              else {
                if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(lVar14 + 0x18) == 0)) goto code_r0x01e71aac;
                iVar4 = func_0x00f78a44(lVar10);
                iVar5 = func_0x00f78ec0(lVar10);
                if (iVar4 == 0) {
                  uVar2 = *(ushort *)(lVar10 + 0x48);
                  if (iVar5 == 0) {
                    lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
                    (**(code **)(lVar10 + 0x138))
                              (plVar1,plVar8,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar10 = func_0x00f78a48(lVar10);
                  lVar11 = *plVar1;
                  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar9 != 0) {
                    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == lVar10) {
                        puVar7 = (undefined8 *)
                                 (lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar12 = piVar12 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e71d74:
                  pcVar16 = (code *)*puVar7;
                  puVar7 = (undefined8 *)puVar7[1];
                }
                else {
                  if (iVar5 == 0) {
                    uVar6 = *(undefined8 *)
                             (*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar11 = *plVar1;
                    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar9 != 0) {
                      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)(lVar10 + 0x18)) {
                          lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar10 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar12 = piVar12 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar6 = *(undefined8 *)(lVar11 + 8);
                  }
                  puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
                  pcVar16 = (code *)*puVar7;
                }
                (*pcVar16)(plVar1,plVar8,param_2,param_3,puVar7);
              }
            }
            else {
              if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar14 + 0x18) == 0))
              goto code_r0x01e71bbc;
              iVar4 = func_0x00f78a44(lVar10);
              iVar5 = func_0x00f78ec0(lVar10);
              if (iVar4 == 0) {
                uVar2 = *(ushort *)(lVar10 + 0x48);
                if (iVar5 == 0) {
                  lVar10 = *plVar8 + (ulong)uVar2 * 0x10;
                  (**(code **)(lVar10 + 0x138))
                            (plVar8,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar10 = func_0x00f78a48(lVar10);
                lVar11 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar9 != 0) {
                  piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == lVar10) {
                      puVar7 = (undefined8 *)
                               (lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar12 = piVar12 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar10,(ulong)uVar2);
code_r0x01e71d00:
                pcVar16 = (code *)*puVar7;
                puVar7 = (undefined8 *)puVar7[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar6 = *(undefined8 *)
                           (*plVar8 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar11 = *plVar8;
                  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar9 != 0) {
                    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)(lVar10 + 0x18)) {
                        lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar12 = piVar12 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  lVar11 = func_0x00fac1f0(plVar8);
code_r0x01e71cd8:
                  uVar6 = *(undefined8 *)(lVar11 + 8);
                }
                puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
                pcVar16 = (code *)*puVar7;
              }
              (*pcVar16)(plVar8,param_2,param_3,puVar7);
            }
          }
          else {
            if (bVar3) goto code_r0x01e71bbc;
code_r0x01e71aac:
            (*pcVar16)(plVar1,plVar8,param_2,param_3,lVar10);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar17) {
            return;
          }
        } while( true );
      }
    }
  }
  auVar19 = func_0x00f78af4();
  lStack_70 = lVar14;
  lStack_68 = param_1;
  if ((bRam0000000003ebc652 & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar14 = *(long *)(auVar19._0_8_ + 0x70);
  if (lVar14 != 0) {
    uVar13 = auVar19._8_4_;
    if (*(uint *)(lVar14 + 0x18) <= uVar13) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar13 * 0x28 + 0x28) == 0) {
      return;
    }
    lVar14 = *(long *)(auVar19._0_8_ + 0x70);
    if (lVar14 != 0) {
      if (*(uint *)(lVar14 + 0x18) <= uVar13) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar13 * 0x28 + 0x28);
      if ((lVar14 != 0) && (plVar8 = *(long **)(lVar14 + 0x28), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x178))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x180));
        return;
      }
    }
  }
  auVar20 = func_0x00f78af4();
  uVar6 = auVar20._0_8_;
  puStack_78 = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = auVar19._8_8_;
  uStack_88 = uVar9;
  puStack_80 = &stack0xffffffffffffffb0;
  iVar4 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar6,auVar20._8_8_,&uStack_b0);
  if (iVar4 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar6,uStack_a0,uStack_98);
    uStack_c8 = uStack_a8;
    uStack_d0 = uStack_b0;
    uStack_b8 = uStack_98;
    uStack_c0 = uStack_a0;
    /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar6,&uStack_d0,1);
  }
  return;
}



// ============================================================
// RVA: 0x2f88674 | Core.UI2.UIManager.SetScreenVisible
// ============================================================

void Core_UI2_UIManager__SetScreenVisible(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003ebc652 & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x70);
  if (lVar5 != 0) {
    uVar4 = (uint)param_2;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar4 * 0x28 + 0x28) == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar4 * 0x28 + 0x28);
      if ((lVar5 != 0) && (plVar2 = *(long **)(lVar5 + 0x28), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x178))(plVar2,param_3,*(undefined8 *)(*plVar2 + 0x180));
        return;
      }
    }
  }
  auVar6 = func_0x00f78af4();
  uVar3 = auVar6._0_8_;
  puStack_38 = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = param_2;
  uStack_48 = param_3;
  puStack_40 = &stack0xfffffffffffffff0;
  iVar1 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar3,auVar6._8_8_,&uStack_70);
  if (iVar1 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar3,uStack_60,uStack_58);
    uStack_88 = uStack_68;
    uStack_90 = uStack_70;
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar3,&uStack_90,1);
  }
  return;
}



// ============================================================
// RVA: 0x2f8874c | Core.UI2.UIManager.RequestScreenAssetsAndPin
// ============================================================

void Core_UI2_UIManager__RequestScreenAssetsAndPin(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  iVar1 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(param_1,param_2,&uStack_40);
  if (iVar1 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(param_1,uStack_30,uStack_28);
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    uStack_48 = uStack_28;
    uStack_50 = uStack_30;
    /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(param_1,&uStack_60,1);
  }
  return;
}



// ============================================================
// RVA: 0x2f887a8 | Core.UI2.UIManager.TryGetScreenInfo
// ============================================================

/* WARNING: Possible PIC construction at 0x02f88be8: Changing call to branch */

ulong Core_UI2_UIManager__TryGetScreenInfo(long param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int extraout_w1;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined1 **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_130 [12];
  undefined1 auStack_124 [4];
  long lStack_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  int iStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar9 = param_3;
  if ((bRam0000000003ebc65e & 1) == 0) {
    func_0x00f78a20(0x3d33840);
    func_0x00f78a20(0x3d33848);
    func_0x00f78a20(0x3d33850);
    func_0x00f78a20(0x3d3dde8);
    bRam0000000003ebc65e = 1;
  }
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  if (*(long *)(param_1 + 0x78) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar10 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<UIManager.ScreenInfo>$$Dispose*/ func_0x01f86f8c(&uStack_80,*unaff_x23);
      if (lVar10 == 0) goto code_r0x02f888d8;
      func_0x00f78ac0(lVar10,0);
    }
    auVar16 = __Unwind_Resume();
    lVar8 = auVar16._8_8_;
    lVar10 = auVar16._0_8_;
    puStack_b8 = &Core_UI2_UIManager__RequestAsset;
    ppuVar13 = &puStack_c0;
    puStack_c0 = &stack0xfffffffffffffff0;
    if ((bRam0000000003ebc65b & 1) == 0) {
      func_0x00f78a20(0x3d26960);
      func_0x00f78a20(0x3d26968);
      func_0x00f78a20(0x3d3dd80);
      func_0x00f78a20(0x3d5f728);
      func_0x00f78a20(0x3d5f730);
      bRam0000000003ebc65b = 1;
    }
    uVar3 = /*Core.UI2.UIManager$$TryGetAssetRequestIndex*/ func_0x02f89108(lVar10,lVar8,auStack_124);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    lVar12 = *(long *)(lVar10 + 0x48);
    uVar6 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
    Core_Assets_AssetManager_AssetLoadSuccessHandler___ctor(uVar6,lVar10,uRam0000000003d5f730,0);
    uVar7 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadFailedHandler_TypeInfo*/ uRam0000000003d26960);
    plVar5 = plRam0000000003d5f728;
    Core_Assets_AssetManager_AssetLoadFailedHandler___ctor(uVar7,lVar10,plRam0000000003d5f728,0);
    if (lVar12 != 0) {
      plVar5 = plVar9;
      uStack_118 = Core_Assets_AssetManager__RequestAsset(lVar12,lVar8,plVar9,uVar6,uVar7,0);
      if (*(long *)(lVar10 + 0x80) != 0) {
        uStack_10c = 0;
        uStack_114 = 0;
        uStack_104 = 0;
        lStack_120 = lVar8;
        uVar3 = /*System.Collections.Generic.List<UIManager.AssetRequest>$$Add*/ func_0x025bdcb8(*(long *)(lVar10 + 0x80),&lStack_120,uRam0000000003d3dd80);
        return uVar3;
      }
    }
    puVar14 = &Core_UI2_UIManager__SetPinnedAssetRequest;
    auVar17 = func_0x00f78af4();
    puVar2 = auStack_130;
    while( true ) {
      plVar11 = auVar17._8_8_;
      lVar10 = auVar17._0_8_;
      *(long *)(puVar2 + -0x30) = lVar12;
      *(long **)(puVar2 + -0x28) = plVar9;
      *(undefined1 (*) [16])(puVar2 + -0x20) = auVar16;
      *(undefined1 ***)(puVar2 + -0x10) = ppuVar13;
      *(undefined **)(puVar2 + -8) = puVar14;
      if ((bRam0000000003ebc656 & 1) == 0) {
        func_0x00f78a20(0x3d3dda8);
        func_0x00f78a20(0x3d3ddb0);
        bRam0000000003ebc656 = 1;
      }
      *(undefined4 *)(puVar2 + -0x54) = 0;
      uVar3 = /*Core.UI2.UIManager$$TryGetAssetRequestIndex*/ func_0x02f89108(lVar10,plVar11[2],puVar2 + -0x54);
      if ((int)uVar3 == 0) break;
      lVar12 = *(long *)(lVar10 + 0x80);
      if (lVar12 != 0) {
        plVar11 = (long *)(long)(int)*(uint *)(puVar2 + -0x54);
        lVar8 = lVar12;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(puVar2 + -0x54)) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar8 = *(long *)(lVar10 + 0x80);
        }
        if (lVar8 != 0) {
          lVar10 = *(long *)(lVar12 + 0x10) + (long)plVar11 * 0x20;
          uVar15 = *(undefined8 *)(lVar10 + 0x28);
          uVar7 = *(undefined8 *)(lVar10 + 0x20);
          *(undefined8 *)(puVar2 + -0x68) = uVar15;
          *(undefined8 *)(puVar2 + -0x70) = uVar7;
          uVar6 = *(undefined8 *)(lVar10 + 0x30);
          *(undefined8 *)(puVar2 + -0x60) = uVar6;
          *(undefined4 *)(puVar2 + -0x75) = *(undefined4 *)(lVar10 + 0x3c);
          *(undefined4 *)(puVar2 + -0x78) = *(undefined4 *)(lVar10 + 0x39);
          *(undefined8 *)(puVar2 + -0x48) = uVar15;
          *(undefined8 *)(puVar2 + -0x50) = uVar7;
          *(undefined8 *)(puVar2 + -0x40) = uVar6;
          puVar2[-0x38] = (char)plVar5;
          *(undefined4 *)(puVar2 + -0x37) = *(undefined4 *)(puVar2 + -0x78);
          *(undefined4 *)(puVar2 + -0x34) = *(undefined4 *)(puVar2 + -0x75);
          uVar3 = /*System.Collections.Generic.List<UIManager.AssetRequest>$$set_Item*/ func_0x025bd948(lVar8,plVar11,puVar2 + -0x50,uRam0000000003d3ddb0);
          return uVar3;
        }
      }
      auVar18 = func_0x00f78af4();
      uVar6 = auVar18._0_8_;
      auVar16._8_8_ = uVar6;
      auVar16._0_8_ = lVar10;
      auVar17._8_8_ = puVar2 + -0xe0;
      auVar17._0_8_ = uVar6;
      *(long *)(puVar2 + -0xa0) = lVar10;
      *(long **)(puVar2 + -0x98) = plVar5;
      *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x88) = &Core_UI2_UIManager__UnPinScreenAssets;
      ppuVar13 = (undefined1 **)(puVar2 + -0x90);
      *(undefined8 *)(puVar2 + -0xb8) = 0;
      *(undefined8 *)(puVar2 + -0xc0) = 0;
      *(undefined8 *)(puVar2 + -0xa8) = 0;
      *(undefined8 *)(puVar2 + -0xb0) = 0;
      uVar3 = Core_UI2_UIManager__TryGetScreenInfo(uVar6,auVar18._8_8_,puVar2 + -0xc0);
      if ((uVar3 & 1) != 0) {
        return uVar3;
      }
      *(undefined8 *)(puVar2 + -0xd8) = *(undefined8 *)(puVar2 + -0xb8);
      *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)(puVar2 + -0xc0);
      *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(puVar2 + -0xa8);
      *(undefined8 *)(puVar2 + -0xd0) = *(undefined8 *)(puVar2 + -0xb0);
      plVar5 = (long *)0x0;
      puVar14 = &UNK_02f88bec;
      puVar2 = puVar2 + -0xe0;
      plVar9 = plVar11;
    }
    return uVar3;
  }
  /*System.Collections.Generic.List<UIManager.ScreenInfo>$$GetEnumerator*/ func_0x025c4188(&uStack_80,*(long *)(param_1 + 0x78),uRam0000000003d3dde8);
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<UIManager.ScreenInfo>$$MoveNext*/ func_0x01f86f90(&uStack_80,uRam0000000003d33848);
    lVar10 = lStack_70;
    if ((uVar3 & 1) == 0) {
      iStack_b0 = 0x49;
      goto LAB_02f888bc;
    }
    lStack_98 = lStack_60;
    lStack_a0 = lStack_68;
    lStack_90 = lStack_58;
    if (lStack_70 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2f8890c);
      (*pcVar1)();
    }
    uVar4 = /*System.String$$Equals*/ func_0x029caa48(lStack_70,param_2,5,0);
  } while ((uVar4 & 1) == 0);
  *param_3 = lVar10;
  param_3[2] = lStack_98;
  param_3[1] = lStack_a0;
  param_3[3] = lStack_90;
  iStack_b0 = 0x52;
LAB_02f888bc:
  /*System.Collections.Generic.List.Enumerator<UIManager.ScreenInfo>$$Dispose*/ func_0x01f86f8c(&uStack_80,uRam0000000003d33840);
  if (iStack_b0 == 0x52) {
    return uVar3;
  }
code_r0x02f888d8:
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  return 0;
}



// ============================================================
// RVA: 0x2f8894c | Core.UI2.UIManager.RequestAsset
// ============================================================

/* WARNING: Possible PIC construction at 0x02f88be8: Changing call to branch */

void Core_UI2_UIManager__RequestAsset(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [4];
  long lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  
  if ((bRam0000000003ebc65b & 1) == 0) {
    func_0x00f78a20(0x3d26960);
    func_0x00f78a20(0x3d26968);
    func_0x00f78a20(0x3d3dd80);
    func_0x00f78a20(0x3d5f728);
    func_0x00f78a20(0x3d5f730);
    bRam0000000003ebc65b = 1;
  }
  uVar3 = /*Core.UI2.UIManager$$TryGetAssetRequestIndex*/ func_0x02f89108(param_1,param_2,auStack_74);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x48);
  uVar4 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
  Core_Assets_AssetManager_AssetLoadSuccessHandler___ctor(uVar4,param_1,uRam0000000003d5f730,0);
  uVar5 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadFailedHandler_TypeInfo*/ uRam0000000003d26960);
  lVar8 = lRam0000000003d5f728;
  Core_Assets_AssetManager_AssetLoadFailedHandler___ctor(uVar5,param_1,lRam0000000003d5f728,0);
  if (lVar10 != 0) {
    lVar8 = param_3;
    uStack_68 = Core_Assets_AssetManager__RequestAsset(lVar10,param_2,param_3,uVar4,uVar5,0);
    if (*(long *)(param_1 + 0x80) != 0) {
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_54 = 0;
      lStack_70 = param_2;
      /*System.Collections.Generic.List<UIManager.AssetRequest>$$Add*/ func_0x025bdcb8(*(long *)(param_1 + 0x80),&lStack_70,uRam0000000003d3dd80);
      return;
    }
  }
  puVar12 = &Core_UI2_UIManager__SetPinnedAssetRequest;
  auVar14 = func_0x00f78af4();
  puVar1 = auStack_80;
  do {
    lVar9 = auVar14._8_8_;
    lVar6 = auVar14._0_8_;
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x80);
    *(long *)(puVar1 + -0x30) = lVar10;
    *(long *)(puVar1 + -0x28) = param_3;
    *(long *)(puVar1 + -0x20) = param_1;
    *(long *)(puVar1 + -0x18) = param_2;
    *(undefined1 **)(puVar1 + -0x10) = puVar11;
    *(undefined **)(puVar1 + -8) = puVar12;
    if ((bRam0000000003ebc656 & 1) == 0) {
      func_0x00f78a20(0x3d3dda8);
      func_0x00f78a20(0x3d3ddb0);
      bRam0000000003ebc656 = 1;
    }
    *(undefined4 *)(puVar1 + -0x54) = 0;
    iVar2 = /*Core.UI2.UIManager$$TryGetAssetRequestIndex*/ func_0x02f89108(lVar6,*(undefined8 *)(lVar9 + 0x10),puVar1 + -0x54);
    if (iVar2 == 0) {
      return;
    }
    lVar10 = *(long *)(lVar6 + 0x80);
    if (lVar10 != 0) {
      lVar9 = (long)(int)*(uint *)(puVar1 + -0x54);
      lVar7 = lVar10;
      if (*(uint *)(lVar10 + 0x18) <= *(uint *)(puVar1 + -0x54)) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar7 = *(long *)(lVar6 + 0x80);
      }
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar10 + 0x10) + lVar9 * 0x20;
        uVar13 = *(undefined8 *)(lVar10 + 0x28);
        uVar5 = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 *)(puVar1 + -0x68) = uVar13;
        *(undefined8 *)(puVar1 + -0x70) = uVar5;
        uVar4 = *(undefined8 *)(lVar10 + 0x30);
        *(undefined8 *)(puVar1 + -0x60) = uVar4;
        *(undefined4 *)(puVar1 + -0x75) = *(undefined4 *)(lVar10 + 0x3c);
        *(undefined4 *)(puVar1 + -0x78) = *(undefined4 *)(lVar10 + 0x39);
        *(undefined8 *)(puVar1 + -0x48) = uVar13;
        *(undefined8 *)(puVar1 + -0x50) = uVar5;
        *(undefined8 *)(puVar1 + -0x40) = uVar4;
        puVar1[-0x38] = (char)lVar8;
        *(undefined4 *)(puVar1 + -0x37) = *(undefined4 *)(puVar1 + -0x78);
        *(undefined4 *)(puVar1 + -0x34) = *(undefined4 *)(puVar1 + -0x75);
        /*System.Collections.Generic.List<UIManager.AssetRequest>$$set_Item*/ func_0x025bd948(lVar7,lVar9,puVar1 + -0x50,uRam0000000003d3ddb0);
        return;
      }
    }
    auVar15 = func_0x00f78af4();
    param_2 = auVar15._0_8_;
    auVar14._8_8_ = puVar1 + -0xe0;
    auVar14._0_8_ = param_2;
    *(long *)(puVar1 + -0xa0) = lVar6;
    *(long *)(puVar1 + -0x98) = lVar8;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x88) = &Core_UI2_UIManager__UnPinScreenAssets;
    *(undefined8 *)(puVar1 + -0xb8) = 0;
    *(undefined8 *)(puVar1 + -0xc0) = 0;
    *(undefined8 *)(puVar1 + -0xa8) = 0;
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    uVar3 = Core_UI2_UIManager__TryGetScreenInfo(param_2,auVar15._8_8_,puVar1 + -0xc0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    *(undefined8 *)(puVar1 + -0xd8) = *(undefined8 *)(puVar1 + -0xb8);
    *(undefined8 *)(puVar1 + -0xe0) = *(undefined8 *)(puVar1 + -0xc0);
    *(undefined8 *)(puVar1 + -200) = *(undefined8 *)(puVar1 + -0xa8);
    *(undefined8 *)(puVar1 + -0xd0) = *(undefined8 *)(puVar1 + -0xb0);
    lVar8 = 0;
    puVar12 = &UNK_02f88bec;
    puVar1 = puVar1 + -0xe0;
    param_1 = lVar6;
    param_3 = lVar9;
  } while( true );
}



// ============================================================
// RVA: 0x2f88aa8 | Core.UI2.UIManager.SetPinnedAssetRequest
// ============================================================

void Core_UI2_UIManager__SetPinnedAssetRequest(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  
  if ((bRam0000000003ebc656 & 1) == 0) {
    func_0x00f78a20(0x3d3dda8);
    func_0x00f78a20(0x3d3ddb0);
    bRam0000000003ebc656 = 1;
  }
  uStack_54 = 0;
  iVar1 = /*Core.UI2.UIManager$$TryGetAssetRequestIndex*/ func_0x02f89108(param_1,*(undefined8 *)(param_2 + 0x10),&uStack_54);
  if (iVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    lVar4 = (long)(int)uStack_54;
    lVar2 = lVar5;
    if (*(uint *)(lVar5 + 0x18) <= uStack_54) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar2 = *(long *)(param_1 + 0x80);
    }
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar5 + 0x10) + lVar4 * 0x20;
      uStack_68 = *(undefined8 *)(lVar5 + 0x28);
      uStack_70 = *(undefined8 *)(lVar5 + 0x20);
      uStack_60 = *(undefined8 *)(lVar5 + 0x30);
      uStack_74 = (undefined3)((uint)*(undefined4 *)(lVar5 + 0x3c) >> 8);
      uStack_78 = *(undefined4 *)(lVar5 + 0x39);
      uStack_38 = (undefined1)param_3;
      uStack_33 = uStack_74;
      uStack_50 = uStack_70;
      uStack_48 = uStack_68;
      uStack_40 = uStack_60;
      uStack_37 = uStack_78;
      /*System.Collections.Generic.List<UIManager.AssetRequest>$$set_Item*/ func_0x025bd948(lVar2,lVar4,&uStack_50,uRam0000000003d3ddb0);
      return;
    }
  }
  auVar6 = func_0x00f78af4();
  puStack_88 = &Core_UI2_UIManager__UnPinScreenAssets;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  uVar3 = Core_UI2_UIManager__TryGetScreenInfo(auVar6._0_8_,auVar6._8_8_,&uStack_c0);
  if ((uVar3 & 1) == 0) {
    uStack_d8 = uStack_b8;
    uStack_e0 = uStack_c0;
    uStack_c8 = uStack_a8;
    uStack_d0 = uStack_b0;
    Core_UI2_UIManager__SetPinnedAssetRequest(auVar6._0_8_,&uStack_e0,0);
  }
  return;
}



// ============================================================
// RVA: 0x2f88bac | Core.UI2.UIManager.UnPinScreenAssets
// ============================================================

void Core_UI2_UIManager__UnPinScreenAssets(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar1 = Core_UI2_UIManager__TryGetScreenInfo(param_1,param_2,&uStack_40);
  if ((uVar1 & 1) == 0) {
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    uStack_48 = uStack_28;
    uStack_50 = uStack_30;
    Core_UI2_UIManager__SetPinnedAssetRequest(param_1,&uStack_60,0);
  }
  return;
}



// ============================================================
// RVA: 0x2f88c44 | Core.UI2.UIManager.TryGetScreenWithBehaviour
// ============================================================

/* WARNING: Possible PIC construction at 0x02f89078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f890a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a248) */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */
/* WARNING: Removing unreachable block (ram,0x02f890ac) */
/* WARNING: Removing unreachable block (ram,0x02f890c8) */
/* WARNING: Removing unreachable block (ram,0x02f890b8) */
/* WARNING: Type propagation algorithm not settling */

long ******
Core_UI2_UIManager__TryGetScreenWithBehaviour
          (long param_1,undefined8 param_2,long *param_3,long *****param_4,long *****param_5)

{
  long ***ppplVar1;
  ushort uVar2;
  undefined8 ******ppppppuVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long ***ppplVar10;
  long ****pppplVar11;
  long ******pppppplVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long ******pppppplVar16;
  long *plVar17;
  long ******pppppplVar18;
  undefined4 uVar19;
  long ****pppplVar20;
  long **pplVar21;
  long *****ppppplVar22;
  code *pcVar23;
  ulong uVar24;
  ulong uVar25;
  long ******pppppplVar26;
  long *******ppppppplVar27;
  long *****ppppplVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 unaff_x23;
  undefined8 uVar32;
  long ***ppplVar33;
  undefined8 unaff_x24;
  long ****pppplVar34;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long ****pppplVar35;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar36;
  undefined1 *puVar37;
  undefined *puVar38;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  float fVar39;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uStack_190;
  undefined *puStack_168;
  undefined8 uStack_160;
  long ******pppppplStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  long *******ppppppplStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [16];
  undefined8 *******pppppppuStack_100;
  long ******pppppplStack_f8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long *plStack_78;
  long ***ppplStack_70;
  undefined *puStack_68;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar31 = 0x3ebc000;
  if ((bRam0000000003ebc657 & 1) == 0) {
    func_0x00f78a20(0x3d3dda8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc657 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_54 = 0;
  pppppplVar12 = (long ******)Core_UI2_UIManager__TryGetScreenInfo(param_1,param_2,&uStack_50);
  uVar30 = uStack_40;
  if ((int)pppppplVar12 == 0) {
    plVar14 = (long *)0x0;
    goto LAB_02f88d88;
  }
  uVar13 = /*Core.UI2.UIManager$$TryGetAssetRequestIndex*/ func_0x02f89108(param_1,uStack_40,&uStack_54);
  if ((uVar13 & 1) == 0) {
    Core_UI2_UIManager__RequestAsset(param_1,uVar30,uStack_38);
LAB_02f88d80:
    plVar14 = (long *)0x0;
    pppppplVar12 = (long ******)0x0;
LAB_02f88d88:
    *param_3 = (long)plVar14;
    return pppppplVar12;
  }
  lVar29 = *(long *)(param_1 + 0x80);
  uVar30 = 0;
  if (lVar29 != 0) {
    lVar31 = (long)(int)uStack_54;
    if (*(uint *)(lVar29 + 0x18) <= uStack_54) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar30 = *(undefined8 *)(*(long *)(lVar29 + 0x10) + lVar31 * 0x20 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar30,0,0);
    if ((uVar13 & 1) != 0) goto LAB_02f88d80;
    plVar14 = (long *)/*Core.UI2.UIManager$$InstantiateScreen*/ func_0x02f891fc(param_1,uStack_48);
    lVar29 = /*Core.UI2.UIManager$$InstantiateScreenBehaviour*/ func_0x02f892c0(plVar14,uVar30);
    param_1 = 0;
    if (plVar14 != (long *)0x0) {
      plVar14[5] = lVar29;
      *(undefined4 *)((long)plVar14 + 0x4c) = 4;
      (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
      pppppplVar12 = (long ******)((long)&MACH_HEADER.magic + 1);
      goto LAB_02f88d88;
    }
  }
  auVar40 = func_0x00f78af4();
  puStack_68 = &Core_UI2_UIScreen__SetParent;
  lStack_90 = lVar31;
  uStack_88 = uVar30;
  lStack_80 = param_1;
  plStack_78 = param_3;
  ppplStack_70 = (long ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc66f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc66f = 1;
  }
  uVar30 = *(undefined8 *)(auVar40._0_8_ + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = 0;
  pppppplVar12 = (long ******)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar30,0);
  if ((int)pppppplVar12 == 0) {
    return pppppplVar12;
  }
  lVar31 = *(long *)(auVar40._0_8_ + 0x28);
  if ((lVar31 != 0) && (lVar31 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar31,0), lVar31 != 0)) {
    if (pcRam0000000003ec1898 == (code *)0x0) {
      pcRam0000000003ec1898 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppplVar12 = (long ******)(*pcRam0000000003ec1898)(lVar31,auVar40._8_8_,0);
    return pppppplVar12;
  }
  auVar40 = func_0x00f78af4();
  pppppplVar12 = auVar40._0_8_;
  ppppppuStack_b0 = &pppppuStack_a0;
  puStack_98 = &Core_UI2_UIScreen__AssignParameters;
  pppppplVar12[7] = param_5;
  pppppplVar12[8] = auVar40._8_8_;
  *(undefined4 *)(pppppplVar12 + 9) = uVar19;
  pppppplVar12[6] = param_4;
  if (pppppplVar12[5] != (long *****)0x0) {
    *(undefined4 *)(pppppplVar12[5] + 6) = uVar19;
    return pppppplVar12;
  }
  pppppuStack_a0 = (undefined8 *****)&ppplStack_70;
  auVar40 = func_0x00f78af4();
  lVar31 = auVar40._8_8_;
  uVar15 = auVar40._0_8_;
  puStack_a8 = &Core_UI2_UIManager__AssignCallbacks;
  uVar30 = 0x3d1b6b8;
  uVar32 = 0x3d5f740;
  uStack_190 = 0x3d2a558;
  ppppppuVar3 = &pppppuStack_a0;
  if ((bRam0000000003ebc662 & 1) == 0) {
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5f738);
    func_0x00f78a20(0x3d5f740);
    func_0x00f78a20(0x3d5f748);
    bRam0000000003ebc662 = 1;
    ppppppuVar3 = ppppppuStack_b0;
  }
  ppppppuStack_b0 = ppppppuVar3;
  pppppplVar12 = (long ******)func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(pppppplVar12,uVar15,uRam0000000003d5f740,uRam0000000003d2a558);
  if (lVar31 != 0) {
    /*Core.UI2.UIScreen$$add_ScreenEnterStarted*/ func_0x02f899e0(lVar31,pppppplVar12);
    uVar30 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar30,uVar15,uRam0000000003d5f748,uRam0000000003d2a558);
    /*Core.UI2.UIScreen$$add_ScreenEnterStartBefore*/ func_0x02f89a80(lVar31,uVar30);
    uVar30 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar30,uVar15,uRam0000000003d5f738,uRam0000000003d2a558);
    if ((bRam0000000003ebc66d & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66d = 1;
    }
    pppppplVar12 = *(long *******)(lVar31 + 0x20);
    while ((plVar14 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(pppppplVar12,uVar30,0), plVar14 == (long *)0x0 ||
           (*plVar14 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      pppppplVar16 = (long ******)
                     func_0x00ff0f44((undefined8 *)(lVar31 + 0x20),plVar14,pppppplVar12);
      bVar7 = pppppplVar12 == pppppplVar16;
      pppppplVar12 = pppppplVar16;
      if (bVar7) {
        return pppppplVar16;
      }
    }
    auVar40 = func_0x00f78e5c(plVar14);
    puVar38 = auVar40._8_8_;
    pppppppuStack_100 = (undefined8 *******)0x3d1b6b8;
    pppppplStack_f8 = pppppplVar12;
    if ((bRam0000000003ebc66c & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66c = 1;
    }
    ppppppplVar27 = (long *******)(auVar40._0_8_ + 0x18);
    pppppplVar12 = *ppppppplVar27;
    while ((plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar12,puVar38,0), plVar14 == (long *)0x0 ||
           (*plVar14 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      pppppplVar16 = (long ******)func_0x00ff0f44(ppppppplVar27,plVar14,pppppplVar12);
      bVar7 = pppppplVar12 == pppppplVar16;
      pppppplVar12 = pppppplVar16;
      if (bVar7) {
        return pppppplVar16;
      }
    }
    auVar40 = func_0x00f78e5c(plVar14);
    uVar30 = auVar40._8_8_;
    auStack_110._8_8_ = &Core_UI2_UIScreen__remove_ScreenEnterStartBefore;
    ppppppplStack_120 = ppppppplVar27;
    puStack_118 = puVar38;
    auStack_110._0_8_ = &stack0xffffffffffffff20;
    if ((bRam0000000003ebc66a & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66a = 1;
    }
    plVar14 = (long *)(auVar40._0_8_ + 0x10);
    pppppplVar12 = (long ******)*plVar14;
    while ((plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar12,uVar30,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      pppppplVar16 = (long ******)func_0x00ff0f44(plVar14,plVar17,pppppplVar12);
      bVar7 = pppppplVar12 == pppppplVar16;
      pppppplVar12 = pppppplVar16;
      if (bVar7) {
        return pppppplVar16;
      }
    }
    auVar40 = func_0x00f78e5c(plVar17);
    uStack_160 = 0x3d1b6b8;
    ppppppplVar27 = (long *******)&stack0xfffffffffffffec0;
    pppppplStack_158 = pppppplVar12;
    plStack_150 = plVar14;
    uStack_148 = uVar30;
    if ((bRam0000000003ebc66e & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66e = 1;
    }
    ppppplVar28 = (long *****)(auVar40._0_8_ + 0x20);
    pppppplVar12 = (long ******)*ppppplVar28;
    while( true ) {
      uVar13 = 0;
      plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppplVar12,auVar40._8_8_,0);
      if ((plVar14 != (long *)0x0) && (*plVar14 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
      pppppplVar16 = (long ******)func_0x00ff0f44(ppppplVar28,plVar14,pppppplVar12);
      bVar7 = pppppplVar12 == pppppplVar16;
      pppppplVar12 = pppppplVar16;
      if (bVar7) {
        return pppppplVar16;
      }
    }
    auVar41 = func_0x00f78e5c(plVar14);
    pppppplVar16 = auVar41._8_8_;
    uStack_190 = 0x3d1b6b8;
    puStack_168 = &Core_UI2_UIManager__OnScreenStartBeforeEnter;
    if ((bRam0000000003ebc664 & 1) == 0) {
      func_0x00f78a20(0x3d2a560);
      bRam0000000003ebc664 = 1;
    }
    pppppplVar18 = *(long *******)(auVar41._0_8_ + 0x10);
    if (pppppplVar18 == (long ******)0x0) {
      return (long ******)0x0;
    }
    puVar4 = &uStack_160;
    pppppplVar26 = auVar40._8_8_;
    uVar30 = unaff_x23;
    uVar32 = unaff_x24;
    goto code_r0x01e6e280;
  }
  pppppplVar16 = (long ******)func_0x00f78af4();
  puVar4 = (undefined8 *)auStack_110;
  pppppplStack_f8 = (long ******)&Core_UI2_UIScreen__StartBeforeEnter;
  ppppppplVar27 = (long *******)&pppppppuStack_100;
  pppppppuStack_100 = &ppppppuStack_b0;
  auStack_110 = auVar40;
  if ((bRam0000000003ebc670 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc670 = 1;
  }
  *(undefined4 *)((long)pppppplVar16 + 0x4c) = 0;
  Core_Input_InputManager__RegisterListener(pppppplVar16,0);
  (*(code *)(*pppppplVar16)[0x37])(pppppplVar16,(*pppppplVar16)[0x38]);
  ppppplVar28 = (long *****)(*(code *)(*pppppplVar16)[0x31])(pppppplVar16,(*pppppplVar16)[0x32]);
  ppppplVar22 = pppppplVar16[5];
  if (ppppplVar22 == (long *****)0x0) {
code_r0x02f8908c:
    pppppplVar16 = (long ******)func_0x00f78af4();
    auVar40._8_8_ = pppppplVar16;
    auVar40._0_8_ = ppppplVar28;
    puVar5 = &stack0xfffffffffffffec0;
    ppppppplStack_120 = ppppppplVar27;
    puStack_118 = &Core_UI2_UIScreen__Update;
    pppppppuVar36 = &ppppppplStack_120;
    unaff_d8 = (ulong)CONCAT13(extraout_var_09,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0)));
    pppppplVar18 = (long ******)&UNK_02f890ac;
  }
  else {
    (*(code *)(*ppppplVar22)[0x2f])(ppppplVar22,0,(*ppppplVar22)[0x30]);
    if ((int)ppppplVar28 == 0) {
      *(undefined1 *)(pppppplVar16 + 10) = 1;
    }
    else {
      ppppplVar22 = pppppplVar16[5];
      uVar15 = /*Core.UI2.UIScreen$$BeforeEnterCoroutine*/ func_0x02f8a0c0(pppppplVar16);
      ppppplVar28 = (long *****)0x0;
      if (ppppplVar22 == (long *****)0x0) goto code_r0x02f8908c;
      /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(ppppplVar22,uVar15,0);
      ppppplVar28 = ppppplVar22;
    }
    pppppplVar18 = (long ******)pppppplVar16[2];
    if (pppppplVar18 != (long ******)0x0) {
      uVar13 = (ulong)*(uint *)(pppppplVar16 + 9);
      puStack_168 = &UNK_02f8907c;
      pppppplVar26 = pppppplVar16;
      goto code_r0x01e6e280;
    }
    puVar5 = &stack0xffffffffffffff10;
    pppppppuVar36 = pppppppuStack_100;
    pppppplVar18 = pppppplStack_f8;
    auVar40 = auStack_110;
  }
  uVar15 = auVar40._0_8_;
  puVar6 = puVar5 + -0x20;
  *(undefined1 (*) [16])(puVar5 + -0x20) = auVar40;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar36;
  *(long *******)(puVar5 + -8) = pppppplVar18;
  puVar37 = puVar5 + -0x10;
  iVar8 = *(int *)((long)pppppplVar16 + 0x4c);
  if (iVar8 == 3) {
    if (pppppplVar16[5] != (long *****)0x0) {
      pppppplVar12 = (long ******)/*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
      if ((int)pppppplVar12 == 0) {
        return pppppplVar12;
      }
      *(undefined4 *)((long)pppppplVar16 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(pppppplVar16,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppplVar12 = (long ******)
                     (*(code *)(*pppppplVar16)[0x45])(pppppplVar16,(*pppppplVar16)[0x46]);
      return pppppplVar12;
    }
code_r0x02f8a1d8:
    puVar38 = &Core_UI2_UIScreen__StartEnter;
    pppppplVar18 = (long ******)func_0x00f78af4();
  }
  else {
    if (iVar8 == 1) {
      if (pppppplVar16[5] != (long *****)0x0) {
        pppppplVar18 = (long ******)/*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
        if ((int)pppppplVar18 == 0) {
          return pppppplVar18;
        }
        puVar4 = (undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        ppppppplVar27 = (long *******)(puVar5 + -0x10);
        ppppplVar28 = (long *****)0x3ebc000;
        if ((bRam0000000003ebc673 & 1) == 0) {
          func_0x00f78a20(0x3d2a560);
          bRam0000000003ebc673 = 1;
        }
        *(undefined4 *)((long)pppppplVar16 + 0x4c) = 2;
        pppppplVar18 = (long ******)pppppplVar16[4];
        if (pppppplVar18 == (long ******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pppppplVar12 = (long ******)
                         (*(code *)(*pppppplVar16)[0x3d])(pppppplVar16,(*pppppplVar16)[0x3e]);
          return pppppplVar12;
        }
        uVar13 = (ulong)*(uint *)(pppppplVar16 + 9);
        puStack_168 = &UNK_02f8a790;
        pppppplVar26 = pppppplVar16;
code_r0x01e6e280:
        *(undefined8 *)((long)puVar4 + -0x60) = unaff_x28;
        *(undefined8 *)((long)puVar4 + -0x58) = unaff_x27;
        *(undefined8 *)((long)puVar4 + -0x50) = unaff_x26;
        *(undefined8 *)((long)puVar4 + -0x48) = unaff_x25;
        *(undefined8 *)((long)puVar4 + -0x40) = uVar32;
        *(undefined8 *)((long)puVar4 + -0x38) = uVar30;
        *(undefined8 *)((long)puVar4 + -0x30) = uStack_190;
        *(long *******)((long)puVar4 + -0x28) = pppppplVar12;
        *(long ******)((long)puVar4 + -0x20) = ppppplVar28;
        *(long *******)((long)puVar4 + -0x18) = pppppplVar26;
        *(long ********)((long)puVar4 + -0x10) = ppppppplVar27;
        *(undefined **)((long)puVar4 + -8) = puStack_168;
        *(long *******)((long)puVar4 + -0x68) = pppppplVar18;
        ppppplVar28 = pppppplVar18[0xd];
        if (ppppplVar28 == (long *****)0x0) {
          ppppplVar28 = (long *****)((long)puVar4 + -0x68);
          pppplVar34 = (long ****)0x1;
        }
        else {
          pppplVar34 = ppppplVar28[3];
          if (pppplVar34 == (long ****)0x0) {
            return pppppplVar18;
          }
          ppppplVar28 = ppppplVar28 + 4;
        }
        pppplVar35 = (long ****)0x0;
        do {
          pppplVar20 = ppppplVar28[(long)pppplVar35];
          ppplVar33 = pppplVar20[2];
          ppplVar10 = pppplVar20[4];
          ppplVar1 = pppplVar20[5];
          if (*(short *)(ppplVar1 + 9) == -1) {
            func_0x00f78ad8(ppplVar1);
          }
          iVar8 = func_0x00f78a4c(ppplVar1);
          bVar7 = *(char *)((long)ppplVar1 + 0x4a) == '\x02';
          if (iVar8 == 0) {
            if (bVar7) {
              if (ppplVar10 == (long ***)0x0) {
code_r0x01e6e418:
                pppppplVar12 = (long ******)(*(code *)ppplVar33)(pppppplVar16,uVar13,ppplVar1);
              }
              else {
                if (((*(short *)(ppplVar1 + 9) == -1) ||
                    ((*(byte *)((long)*ppplVar10 + 0x115) & 1) != 0)) ||
                   (pppppplVar18[3] == (long *****)0x0)) goto code_r0x01e6e30c;
                iVar8 = func_0x00f78a44(ppplVar1);
                iVar9 = func_0x00f78ec0(ppplVar1);
                if (iVar8 == 0) {
                  uVar2 = *(ushort *)(ppplVar1 + 9);
                  uVar24 = (ulong)uVar2;
                  if (iVar9 == 0) {
                    pppppplVar12 = (long ******)
                                   (*(code *)(*ppplVar10)[uVar24 * 2 + 0x27])
                                             (ppplVar10,pppppplVar16,uVar13,
                                              (*ppplVar10)[uVar24 * 2 + 0x28]);
                    goto code_r0x01e6e428;
                  }
                  lVar31 = func_0x00f78a48(ppplVar1);
                  pplVar21 = *ppplVar10;
                  uVar25 = (ulong)*(ushort *)((long)pplVar21 + 0x12a);
                  if (uVar25 != 0) {
                    plVar14 = pplVar21[0x16] + 1;
                    do {
                      if (plVar14[0xffffffffffffffff] == lVar31) {
                        pplVar21 = pplVar21 + (long)(int)((int)*plVar14 + (uint)uVar2) * 2 + 0x27;
                        goto code_r0x01e6e5c0;
                      }
                      plVar14 = plVar14 + 2;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  pplVar21 = (long **)func_0x00fac1f0(ppplVar10,lVar31,uVar24);
code_r0x01e6e5c0:
                  pcVar23 = (code *)*pplVar21;
                  plVar14 = pplVar21[1];
                }
                else {
                  if (iVar9 == 0) {
                    plVar14 = (*ppplVar10)[(ulong)*(ushort *)(ppplVar1 + 9) * 2 + 0x28];
                  }
                  else {
                    pplVar21 = *ppplVar10;
                    uVar24 = (ulong)*(ushort *)((long)pplVar21 + 0x12a);
                    if (uVar24 != 0) {
                      plVar14 = pplVar21[0x16] + 1;
                      do {
                        if ((long **)plVar14[0xffffffffffffffff] == ppplVar1[3]) {
                          pplVar21 = pplVar21 +
                                     (long)(int)((int)*plVar14 + (uint)*(ushort *)(ppplVar1 + 9)) *
                                     2 + 0x27;
                          goto code_r0x01e6e598;
                        }
                        plVar14 = plVar14 + 2;
                        uVar24 = uVar24 - 1;
                      } while (uVar24 != 0);
                    }
                    pplVar21 = (long **)func_0x00fac1f0(ppplVar10);
code_r0x01e6e598:
                    plVar14 = pplVar21[1];
                  }
                  plVar14 = (long *)func_0x00f78acc(plVar14,ppplVar1);
                  pcVar23 = (code *)*plVar14;
                }
                pppppplVar12 = (long ******)(*pcVar23)(ppplVar10,pppppplVar16,uVar13,plVar14);
              }
            }
            else {
              if ((*(short *)(ppplVar1 + 9) == -1) || (pppppplVar18[3] == (long *****)0x0))
              goto code_r0x01e6e418;
              iVar8 = func_0x00f78a44(ppplVar1);
              iVar9 = func_0x00f78ec0(ppplVar1);
              if (iVar8 == 0) {
                uVar2 = *(ushort *)(ppplVar1 + 9);
                uVar24 = (ulong)uVar2;
                if (iVar9 == 0) {
                  pppppplVar12 = (long ******)
                                 (*(code *)(*pppppplVar16)[uVar24 * 2 + 0x27])
                                           (pppppplVar16,uVar13,(*pppppplVar16)[uVar24 * 2 + 0x28]);
                  goto code_r0x01e6e428;
                }
                ppplVar10 = (long ***)func_0x00f78a48(ppplVar1);
                ppppplVar22 = *pppppplVar16;
                uVar25 = (ulong)*(ushort *)((long)ppppplVar22 + 0x12a);
                if (uVar25 != 0) {
                  pppplVar20 = ppppplVar22[0x16] + 1;
                  do {
                    if (pppplVar20[-1] == ppplVar10) {
                      ppppplVar22 = ppppplVar22 +
                                    (long)(int)(*(int *)pppplVar20 + (uint)uVar2) * 2 + 0x27;
                      goto code_r0x01e6e554;
                    }
                    pppplVar20 = pppplVar20 + 2;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
                ppppplVar22 = (long *****)func_0x00fac1f0(pppppplVar16,ppplVar10,uVar24);
code_r0x01e6e554:
                pppplVar20 = *ppppplVar22;
                pppplVar11 = ppppplVar22[1];
              }
              else {
                if (iVar9 == 0) {
                  pppplVar20 = (*pppppplVar16)[(ulong)*(ushort *)(ppplVar1 + 9) * 2 + 0x28];
                }
                else {
                  ppppplVar22 = *pppppplVar16;
                  uVar24 = (ulong)*(ushort *)((long)ppppplVar22 + 0x12a);
                  if (uVar24 != 0) {
                    pppplVar20 = ppppplVar22[0x16] + 1;
                    do {
                      if (pppplVar20[-1] == (long ***)ppplVar1[3]) {
                        ppppplVar22 = ppppplVar22 +
                                      (long)(int)(*(int *)pppplVar20 +
                                                 (uint)*(ushort *)(ppplVar1 + 9)) * 2 + 0x27;
                        goto code_r0x01e6e52c;
                      }
                      pppplVar20 = pppplVar20 + 2;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  ppppplVar22 = (long *****)func_0x00fac1f0(pppppplVar16);
code_r0x01e6e52c:
                  pppplVar20 = ppppplVar22[1];
                }
                pppplVar11 = (long ****)func_0x00f78acc(pppplVar20,ppplVar1);
                pppplVar20 = (long ****)*pppplVar11;
              }
              pppppplVar12 = (long ******)(*(code *)pppplVar20)(pppppplVar16,uVar13,pppplVar11);
            }
          }
          else {
            if (bVar7) goto code_r0x01e6e418;
code_r0x01e6e30c:
            pppppplVar12 = (long ******)(*(code *)ppplVar33)(ppplVar10,pppppplVar16,uVar13,ppplVar1)
            ;
          }
code_r0x01e6e428:
          pppplVar35 = (long ****)((long)pppplVar35 + 1);
          if (pppplVar35 == pppplVar34) {
            return pppppplVar12;
          }
        } while( true );
      }
      goto code_r0x02f8a1d8;
    }
    if (iVar8 != 0) {
      return pppppplVar16;
    }
    if (*(char *)(pppppplVar16 + 10) == '\0') {
      return pppppplVar16;
    }
    puVar37 = *(undefined1 **)(puVar5 + -0x10);
    puVar38 = *(undefined **)(puVar5 + -8);
    uVar15 = *(undefined8 *)(puVar5 + -0x20);
    puVar6 = puVar5;
    pppppplVar18 = pppppplVar16;
    pppppplVar16 = *(long *******)(puVar5 + -0x18);
  }
  *(undefined8 *)(puVar6 + -0x20) = uVar15;
  *(long *******)(puVar6 + -0x18) = pppppplVar16;
  *(undefined1 **)(puVar6 + -0x10) = puVar37;
  *(undefined **)(puVar6 + -8) = puVar38;
  if ((bRam0000000003ebc671 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc671 = 1;
  }
  *(undefined4 *)((long)pppppplVar18 + 0x4c) = 1;
  ppppplVar28 = pppppplVar18[5];
  if (ppppplVar28 == (long *****)0x0) {
    puVar38 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter;
    ppppplVar28 = (long *****)func_0x00f78af4();
  }
  else {
    puVar38 = &UNK_02f8a220;
  }
  *(undefined8 *)(puVar6 + -0x60) = unaff_d9;
  *(ulong *)(puVar6 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x50) = 0x3d2a558;
  *(long *******)(puVar6 + -0x48) = pppppplVar12;
  *(undefined8 *)(puVar6 + -0x40) = 0x3ebc000;
  *(long *******)(puVar6 + -0x38) = pppppplVar18;
  *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x28) = puVar38;
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar8 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(ppppplVar28);
  if (iVar8 == 0) goto code_r0x02f8a348;
  pppplVar34 = ppppplVar28[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (pppplVar34 != (long ****)0x0) {
    iVar8 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(pppplVar34,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar8 == 0) {
code_r0x02f8a348:
      iVar8 = (*(code *)(*ppppplVar28)[0x35])(ppppplVar28,(*ppppplVar28)[0x36]);
      fVar39 = 0.0;
      if (iVar8 != 0) {
        uVar30 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppplVar28,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar30,0,0,0);
        fVar39 = (float)CONCAT13(extraout_var_10,
                                 CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00)))
        ;
      }
      pppppplVar12 = (long ******)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(ppppplVar28 + 7) =
           fVar39 + (float)CONCAT13(extraout_var_11,
                                    CONCAT12(extraout_var_06,
                                             CONCAT11(extraout_var_01,extraout_b0_01)));
      *(undefined1 *)((long)ppppplVar28 + 0x34) = 1;
      return pppppplVar12;
    }
    pppplVar34 = ppppplVar28[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pppplVar34 != (long ****)0x0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,pppplVar34,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto code_r0x02f8a348;
    }
  }
  lVar31 = func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
  *(ulong *)(puVar6 + -0x98) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x90) = 0x3d2a558;
  *(undefined8 *)(puVar6 + -0x88) = 0x3d255d8;
  *(undefined8 *)(puVar6 + -0x80) = 0;
  *(long ******)(puVar6 + -0x78) = ppppplVar28;
  *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x30;
  *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIScreenBehaviour__PlayStateAnimationExit;
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar8 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar31);
  if (iVar8 != 0) {
    lVar29 = *(long *)(lVar31 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar29 == 0) {
code_r0x02f8a540:
      plVar14 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar6 + -0xc0) = 0;
      *(long *)(puVar6 + -0xb8) = lVar31;
      *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x70;
      *(undefined **)(puVar6 + -0xa8) = &Core_UI2_UIScreen__InActive;
      *(undefined4 *)((long)plVar14 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar14,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pppppplVar12 = (long ******)
                     (**(code **)(*plVar14 + 0x228))(plVar14,*(undefined8 *)(*plVar14 + 0x230));
      return pppppplVar12;
    }
    iVar8 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar29,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar8 != 0) {
      lVar29 = *(long *)(lVar31 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar29 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar29,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar30 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar31,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar30,1,0,0);
  pppppplVar12 = (long ******)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar31 + 0x38) =
       (float)CONCAT13(extraout_var_12,
                       CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02))) +
       (float)CONCAT13(extraout_var_13,
                       CONCAT12(extraout_var_08,CONCAT11(extraout_var_03,extraout_b0_03)));
  return pppppplVar12;
}



// ============================================================
// RVA: 0x2f88e84 | Core.UI2.UIManager.AssignCallbacks
// ============================================================

/* WARNING: Possible PIC construction at 0x02f89078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a21c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8a78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f890a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8a248) */
/* WARNING: Removing unreachable block (ram,0x02f8a220) */
/* WARNING: Removing unreachable block (ram,0x02f8a228) */
/* WARNING: Removing unreachable block (ram,0x02f8a240) */
/* WARNING: Removing unreachable block (ram,0x02f890ac) */
/* WARNING: Removing unreachable block (ram,0x02f890c8) */
/* WARNING: Removing unreachable block (ram,0x02f890b8) */

void Core_UI2_UIManager__AssignCallbacks(long *param_1,long *param_2)

{
  ushort uVar1;
  long **pplVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 *****pppppuVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 ******ppppppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 unaff_x23;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 unaff_x24;
  long lVar27;
  undefined8 unaff_x25;
  undefined1 *puVar28;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long ******pppppplVar29;
  undefined *puVar30;
  uint extraout_s0;
  float fVar31;
  float fVar32;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_f0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *****ppppplStack_80;
  undefined *puStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  
  uVar10 = 0x3d1b6b8;
  uVar25 = 0x3d5f740;
  uStack_f0 = 0x3d2a558;
  if ((bRam0000000003ebc662 & 1) == 0) {
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5f738);
    func_0x00f78a20(0x3d5f740);
    func_0x00f78a20(0x3d5f748);
    bRam0000000003ebc662 = 1;
  }
  lVar9 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(lVar9,param_1,uRam0000000003d5f740,uRam0000000003d2a558);
  if (param_2 != (long *)0x0) {
    /*Core.UI2.UIScreen$$add_ScreenEnterStarted*/ func_0x02f899e0(param_2,lVar9);
    uVar10 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar10,param_1,uRam0000000003d5f748,uRam0000000003d2a558);
    /*Core.UI2.UIScreen$$add_ScreenEnterStartBefore*/ func_0x02f89a80(param_2,uVar10);
    uVar10 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar10,param_1,uRam0000000003d5f738,uRam0000000003d2a558);
    if ((bRam0000000003ebc66d & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66d = 1;
    }
    puVar30 = (undefined *)param_2[4];
    while ((plVar13 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar30,uVar10,0), plVar13 == (long *)0x0 ||
           (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      puVar14 = (undefined *)func_0x00ff0f44(param_2 + 4,plVar13,puVar30);
      bVar5 = puVar30 == puVar14;
      puVar30 = puVar14;
      if (bVar5) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar13);
    puVar14 = auVar33._8_8_;
    pppppuStack_60 = (long ******)0x3d1b6b8;
    puStack_58 = puVar30;
    if ((bRam0000000003ebc66c & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66c = 1;
    }
    ppppppuVar23 = (undefined8 ******)(auVar33._0_8_ + 0x18);
    pppppuVar24 = *ppppppuVar23;
    while ((plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pppppuVar24,puVar14,0), plVar13 == (long *)0x0 ||
           (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      pppppuVar15 = (undefined8 *****)func_0x00ff0f44(ppppppuVar23,plVar13,pppppuVar24);
      bVar5 = pppppuVar24 == pppppuVar15;
      pppppuVar24 = pppppuVar15;
      if (bVar5) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar13);
    uVar10 = auVar33._8_8_;
    plStack_68 = (long *)&Core_UI2_UIScreen__remove_ScreenEnterStartBefore;
    ppppplStack_80 = (long *****)ppppppuVar23;
    puStack_78 = puVar14;
    plStack_70 = (long *)&stack0xffffffffffffffc0;
    if ((bRam0000000003ebc66a & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66a = 1;
    }
    plVar13 = (long *)(auVar33._0_8_ + 0x10);
    lVar9 = *plVar13;
    while ((plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,uVar10,0), plVar16 == (long *)0x0 ||
           (*plVar16 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
      lVar17 = func_0x00ff0f44(plVar13,plVar16,lVar9);
      bVar5 = lVar9 == lVar17;
      lVar9 = lVar17;
      if (bVar5) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar16);
    uStack_c0 = 0x3d1b6b8;
    ppppppuVar23 = (undefined8 ******)&stack0xffffffffffffff60;
    lStack_b8 = lVar9;
    plStack_b0 = plVar13;
    uStack_a8 = uVar10;
    if ((bRam0000000003ebc66e & 1) == 0) {
      func_0x00f78a20(0x3d1b6b8);
      bRam0000000003ebc66e = 1;
    }
    plVar13 = (long *)(auVar33._0_8_ + 0x20);
    lVar9 = *plVar13;
    while( true ) {
      uVar18 = 0;
      plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar33._8_8_,0);
      if ((plVar16 != (long *)0x0) && (*plVar16 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
      lVar17 = func_0x00ff0f44(plVar13,plVar16,lVar9);
      bVar5 = lVar9 == lVar17;
      lVar9 = lVar17;
      if (bVar5) {
        return;
      }
    }
    auVar34 = func_0x00f78e5c(plVar16);
    plVar16 = auVar34._8_8_;
    uStack_f0 = 0x3d1b6b8;
    puStack_c8 = &Core_UI2_UIManager__OnScreenStartBeforeEnter;
    if ((bRam0000000003ebc664 & 1) == 0) {
      func_0x00f78a20(0x3d2a560);
      bRam0000000003ebc664 = 1;
    }
    lVar17 = *(long *)(auVar34._0_8_ + 0x10);
    if (lVar17 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_c0;
    plVar11 = auVar33._8_8_;
    uVar10 = unaff_x23;
    uVar25 = unaff_x24;
    goto code_r0x01e6e280;
  }
  plVar16 = (long *)func_0x00f78af4();
  pplVar2 = &plStack_70;
  puStack_58 = &Core_UI2_UIScreen__StartBeforeEnter;
  ppppppuVar23 = &pppppuStack_60;
  plStack_70 = param_1;
  plStack_68 = param_2;
  pppppuStack_60 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc670 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc670 = 1;
  }
  *(undefined4 *)((long)plVar16 + 0x4c) = 0;
  Core_Input_InputManager__RegisterListener(plVar16,0);
  (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
  plVar13 = (long *)(**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
  plVar11 = (long *)plVar16[5];
  if (plVar11 == (long *)0x0) {
code_r0x02f8908c:
    plVar16 = (long *)func_0x00f78af4();
    puVar3 = &stack0xffffffffffffff60;
    ppppplStack_80 = (long *****)ppppppuVar23;
    puStack_78 = &Core_UI2_UIScreen__Update;
    pppppplVar29 = &ppppplStack_80;
    unaff_d8 = (ulong)extraout_s0;
    puVar30 = &UNK_02f890ac;
    plVar11 = plVar16;
  }
  else {
    (**(code **)(*plVar11 + 0x178))(plVar11,0,*(undefined8 *)(*plVar11 + 0x180));
    if ((int)plVar13 == 0) {
      *(undefined1 *)(plVar16 + 10) = 1;
    }
    else {
      plVar11 = (long *)plVar16[5];
      uVar12 = /*Core.UI2.UIScreen$$BeforeEnterCoroutine*/ func_0x02f8a0c0(plVar16);
      plVar13 = (long *)0x0;
      if (plVar11 == (long *)0x0) goto code_r0x02f8908c;
      /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(plVar11,uVar12,0);
      plVar13 = plVar11;
    }
    lVar17 = plVar16[2];
    if (lVar17 != 0) {
      uVar18 = (ulong)*(uint *)(plVar16 + 9);
      puStack_c8 = &UNK_02f8907c;
      plVar11 = plVar16;
      goto code_r0x01e6e280;
    }
    puVar3 = &stack0xffffffffffffffb0;
    plVar11 = plStack_68;
    plVar13 = plStack_70;
    pppppplVar29 = (long ******)pppppuStack_60;
    puVar30 = puStack_58;
  }
  puVar4 = puVar3 + -0x20;
  *(long **)(puVar3 + -0x20) = plVar13;
  *(long **)(puVar3 + -0x18) = plVar11;
  *(long *******)(puVar3 + -0x10) = pppppplVar29;
  *(undefined **)(puVar3 + -8) = puVar30;
  puVar28 = puVar3 + -0x10;
  iVar6 = *(int *)((long)plVar16 + 0x4c);
  if (iVar6 == 3) {
    if (plVar16[5] != 0) {
      iVar6 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
      if (iVar6 == 0) {
        return;
      }
      *(undefined4 *)((long)plVar16 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar16,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230));
      return;
    }
code_r0x02f8a1d8:
    puVar30 = &Core_UI2_UIScreen__StartEnter;
    plVar11 = (long *)func_0x00f78af4();
  }
  else {
    if (iVar6 == 1) {
      if (plVar16[5] != 0) {
        iVar6 = /*Core.UI2.UIScreenBehaviour$$HasStateAnimationFinished*/ func_0x02f8a63c();
        if (iVar6 == 0) {
          return;
        }
        pplVar2 = (long **)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        ppppppuVar23 = (undefined8 ******)(puVar3 + -0x10);
        plVar13 = (long *)0x3ebc000;
        if ((bRam0000000003ebc673 & 1) == 0) {
          func_0x00f78a20(0x3d2a560);
          bRam0000000003ebc673 = 1;
        }
        *(undefined4 *)((long)plVar16 + 0x4c) = 2;
        lVar17 = plVar16[4];
        if (lVar17 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02f8a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
          return;
        }
        uVar18 = (ulong)*(uint *)(plVar16 + 9);
        puStack_c8 = &UNK_02f8a790;
        plVar11 = plVar16;
code_r0x01e6e280:
        *(undefined8 *)((long)pplVar2 + -0x60) = unaff_x28;
        *(undefined8 *)((long)pplVar2 + -0x58) = unaff_x27;
        *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
        *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
        *(undefined8 *)((long)pplVar2 + -0x40) = uVar25;
        *(undefined8 *)((long)pplVar2 + -0x38) = uVar10;
        *(undefined8 *)((long)pplVar2 + -0x30) = uStack_f0;
        *(long *)((long)pplVar2 + -0x28) = lVar9;
        *(long **)((long)pplVar2 + -0x20) = plVar13;
        *(long **)((long)pplVar2 + -0x18) = plVar11;
        *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar23;
        *(undefined **)((long)pplVar2 + -8) = puStack_c8;
        *(long *)((long)pplVar2 + -0x68) = lVar17;
        lVar9 = *(long *)(lVar17 + 0x68);
        if (lVar9 == 0) {
          puVar28 = (undefined1 *)((long)pplVar2 + -0x68);
          lVar27 = 1;
        }
        else {
          lVar27 = *(long *)(lVar9 + 0x18);
          if (lVar27 == 0) {
            return;
          }
          puVar28 = (undefined1 *)(lVar9 + 0x20);
        }
        lVar9 = 0;
        do {
          lVar19 = *(long *)(puVar28 + lVar9 * 8);
          pcVar26 = *(code **)(lVar19 + 0x10);
          plVar13 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar6 = func_0x00f78a4c(lVar19);
          bVar5 = *(char *)(lVar19 + 0x4a) == '\x02';
          if (iVar6 == 0) {
            if (bVar5) {
              if (plVar13 == (long *)0x0) {
code_r0x01e6e418:
                (*pcVar26)(plVar16,uVar18,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar13 + 0x115) & 1) != 0))
                   || (*(long *)(lVar17 + 0x18) == 0)) goto code_r0x01e6e30c;
                iVar6 = func_0x00f78a44(lVar19);
                iVar7 = func_0x00f78ec0(lVar19);
                if (iVar6 == 0) {
                  uVar1 = *(ushort *)(lVar19 + 0x48);
                  if (iVar7 == 0) {
                    lVar19 = *plVar13 + (ulong)uVar1 * 0x10;
                    (**(code **)(lVar19 + 0x138))
                              (plVar13,plVar16,uVar18,*(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e6e428;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar20 = *plVar13;
                  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == lVar19) {
                        puVar8 = (undefined8 *)
                                 (lVar20 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e6e5c0;
                      }
                      piVar22 = piVar22 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar8 = (undefined8 *)func_0x00fac1f0(plVar13,lVar19,(ulong)uVar1);
code_r0x01e6e5c0:
                  pcVar26 = (code *)*puVar8;
                  puVar8 = (undefined8 *)puVar8[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar10 = *(undefined8 *)
                              (*plVar13 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar13;
                    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar21 != 0) {
                      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e6e598;
                        }
                        piVar22 = piVar22 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar13);
code_r0x01e6e598:
                    uVar10 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar8 = (undefined8 *)func_0x00f78acc(uVar10,lVar19);
                  pcVar26 = (code *)*puVar8;
                }
                (*pcVar26)(plVar13,plVar16,uVar18,puVar8);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(lVar17 + 0x18) == 0))
              goto code_r0x01e6e418;
              iVar6 = func_0x00f78a44(lVar19);
              iVar7 = func_0x00f78ec0(lVar19);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar19 + 0x48);
                if (iVar7 == 0) {
                  lVar19 = *plVar16 + (ulong)uVar1 * 0x10;
                  (**(code **)(lVar19 + 0x138))(plVar16,uVar18,*(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e6e428;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar20 = *plVar16;
                uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar19) {
                      puVar8 = (undefined8 *)
                               (lVar20 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e6e554;
                    }
                    piVar22 = piVar22 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,lVar19,(ulong)uVar1);
code_r0x01e6e554:
                pcVar26 = (code *)*puVar8;
                puVar8 = (undefined8 *)puVar8[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar10 = *(undefined8 *)
                            (*plVar16 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar16;
                  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e6e52c;
                      }
                      piVar22 = piVar22 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar16);
code_r0x01e6e52c:
                  uVar10 = *(undefined8 *)(lVar20 + 8);
                }
                puVar8 = (undefined8 *)func_0x00f78acc(uVar10,lVar19);
                pcVar26 = (code *)*puVar8;
              }
              (*pcVar26)(plVar16,uVar18,puVar8);
            }
          }
          else {
            if (bVar5) goto code_r0x01e6e418;
code_r0x01e6e30c:
            (*pcVar26)(plVar13,plVar16,uVar18,lVar19);
          }
code_r0x01e6e428:
          lVar9 = lVar9 + 1;
          if (lVar9 == lVar27) {
            return;
          }
        } while( true );
      }
      goto code_r0x02f8a1d8;
    }
    if (iVar6 != 0) {
      return;
    }
    if ((char)plVar16[10] == '\0') {
      return;
    }
    puVar28 = *(undefined1 **)(puVar3 + -0x10);
    puVar30 = *(undefined **)(puVar3 + -8);
    plVar13 = *(long **)(puVar3 + -0x20);
    puVar4 = puVar3;
    plVar11 = plVar16;
    plVar16 = *(long **)(puVar3 + -0x18);
  }
  *(long **)(puVar4 + -0x20) = plVar13;
  *(long **)(puVar4 + -0x18) = plVar16;
  *(undefined1 **)(puVar4 + -0x10) = puVar28;
  *(undefined **)(puVar4 + -8) = puVar30;
  if ((bRam0000000003ebc671 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc671 = 1;
  }
  *(undefined4 *)((long)plVar11 + 0x4c) = 1;
  plVar13 = (long *)plVar11[5];
  if (plVar13 == (long *)0x0) {
    puVar30 = &Core_UI2_UIScreenBehaviour__PlayStateAnimationEnter;
    plVar13 = (long *)func_0x00f78af4();
  }
  else {
    puVar30 = &UNK_02f8a220;
  }
  *(undefined8 *)(puVar4 + -0x60) = unaff_d9;
  *(ulong *)(puVar4 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x50) = 0x3d2a558;
  *(long *)(puVar4 + -0x48) = lVar9;
  *(undefined8 *)(puVar4 + -0x40) = 0x3ebc000;
  *(long **)(puVar4 + -0x38) = plVar11;
  *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x28) = puVar30;
  if ((bRam0000000003ebc678 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d78e90);
    bRam0000000003ebc678 = 1;
  }
  iVar6 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(plVar13);
  if (iVar6 == 0) goto code_r0x02f8a348;
  lVar9 = plVar13[3];
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar9 != 0) {
    iVar6 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar9,0,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0);
    if (iVar6 == 0) {
code_r0x02f8a348:
      iVar6 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
      fVar31 = 0.0;
      if (iVar6 != 0) {
        uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar13,0);
        if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar31 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('enter')*/ uRam0000000003d78e90,uVar10,0,0,0);
      }
      fVar32 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
      *(float *)(plVar13 + 7) = fVar31 + fVar32;
      *(undefined1 *)((long)plVar13 + 0x34) = 1;
      return;
    }
    lVar9 = plVar13[3];
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 != 0) {
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar9,**(undefined4 **)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8),0,0);
      goto code_r0x02f8a348;
    }
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0xa0) = unaff_d9;
  *(ulong *)(puVar4 + -0x98) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x90) = 0x3d2a558;
  *(undefined8 *)(puVar4 + -0x88) = 0x3d255d8;
  *(undefined8 *)(puVar4 + -0x80) = 0;
  *(long **)(puVar4 + -0x78) = plVar13;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x30;
  *(undefined **)(puVar4 + -0x68) = &Core_UI2_UIScreenBehaviour__PlayStateAnimationExit;
  if ((bRam0000000003ebc679 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003ebc679 = 1;
  }
  iVar6 = /*Core.UI2.UIScreenBehaviour$$HasValidAnimator*/ func_0x02f8a8e0(lVar9);
  if (iVar6 != 0) {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar17 == 0) {
code_r0x02f8a540:
      plVar13 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0xc0) = 0;
      *(long *)(puVar4 + -0xb8) = lVar9;
      *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x70;
      *(undefined **)(puVar4 + -0xa8) = &Core_UI2_UIScreen__InActive;
      *(undefined4 *)((long)plVar13 + 0x4c) = 4;
      Core_Input_InputManager__UnregisterListener(plVar13,0);
                    /* WARNING: Could not recover jumptable at 0x02f8a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x228))(plVar13,*(undefined8 *)(*plVar13 + 0x230));
      return;
    }
    iVar6 = /*UnityEngine.Animator$$HasState*/ func_0x03211cd4(lVar17,0,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0);
    if (iVar6 != 0) {
      lVar17 = *(long *)(lVar9 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar17 == 0) goto code_r0x02f8a540;
      /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar17,*(undefined4 *)(*(long *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xb8) + 4),0,0);
    }
  }
  uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar31 = (float)/*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar10,1,0,0);
  fVar32 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(float *)(lVar9 + 0x38) = fVar31 + fVar32;
  return;
}



// ============================================================
// RVA: 0x2f89108 | Core.UI2.UIManager.TryGetAssetRequestIndex
// ============================================================

bool Core_UI2_UIManager__TryGetAssetRequestIndex(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000003ebc65d & 1) == 0) {
    func_0x00f78a20(0x3d3dda0);
    func_0x00f78a20(0x3d3dda8);
    bRam0000000003ebc65d = 1;
  }
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    if (iVar1 < 1) goto LAB_02f891d4;
    iVar4 = 1;
    bVar3 = true;
    do {
      uVar5 = iVar4 - 1;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar5 * 0x20 + 0x20);
      if (lVar6 == 0) break;
      uVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar6,param_2,5,0);
      if ((uVar2 & 1) != 0) goto LAB_02f891dc;
      bVar3 = iVar4 < iVar1;
      if (iVar1 == iVar4) goto LAB_02f891d8;
      lVar6 = *(long *)(param_1 + 0x80);
      iVar4 = iVar4 + 1;
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
LAB_02f891d4:
  bVar3 = false;
LAB_02f891d8:
  uVar5 = 0xffffffff;
LAB_02f891dc:
  *param_3 = uVar5;
  return bVar3;
}



// ============================================================
// RVA: 0x2f891fc | Core.UI2.UIManager.InstantiateScreen
// ============================================================

long * Core_UI2_UIManager__InstantiateScreen(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003ebc658 & 1) == 0) {
    func_0x00f78a20(0x3d255d0);
    bRam0000000003ebc658 = 1;
  }
  plVar2 = (long *)/*System.Activator$$CreateInstance*/ func_0x029267f4(param_2,0);
  if (plVar2 != (long *)0x0) {
    if (*(byte *)(/*Core.UI2.UIScreen_TypeInfo*/ lRam0000000003d255d0 + 300) <= *(byte *)(*plVar2 + 300)) {
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Core.UI2.UIScreen_TypeInfo*/ lRam0000000003d255d0 + 300) * 8 + -8
                   ) != /*Core.UI2.UIScreen_TypeInfo*/ lRam0000000003d255d0) {
        return (long *)0x0;
      }
      if (plVar2 != (long *)0x0) {
        plVar2[0xb] = *(long *)(param_1 + 0x68);
        (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
        return plVar2;
      }
      func_0x00f78af4();
      if ((bRam0000000003ebc659 & 1) == 0) {
        func_0x00f78a20(0x3d57958);
        func_0x00f78a20(0x3d5b098);
        func_0x00f78a20(0x3d23990);
        bRam0000000003ebc659 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
      if (lVar3 == 0) {
code_r0x02f893bc:
        auVar4 = func_0x00f78af4();
        plVar2 = auVar4._0_8_;
        plVar2[5] = auVar4._8_8_;
        *(undefined4 *)((long)plVar2 + 0x4c) = 4;
                    /* WARNING: Could not recover jumptable at 0x02f893d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
        return plVar2;
      }
      plVar2 = (long *)/*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d57958);
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar2,0,0);
      if (iVar1 == 0) {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.Object$$Destroy*/ func_0x03249390(lVar3,0);
      }
      else {
        if (plVar2 == (long *)0x0) goto code_r0x02f893bc;
        (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      }
      return plVar2;
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x2f892c0 | Core.UI2.UIManager.InstantiateScreenBehaviour
// ============================================================

long * Core_UI2_UIManager__InstantiateScreenBehaviour(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003ebc659 & 1) == 0) {
    func_0x00f78a20(0x3d57958);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc659 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(param_2,uRam0000000003d5b098);
  if (lVar2 != 0) {
    plVar3 = (long *)/*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar2,uRam0000000003d57958);
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar3,0,0);
    if (iVar1 == 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(lVar2,0);
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_02f893bc;
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    }
    return plVar3;
  }
LAB_02f893bc:
  auVar4 = func_0x00f78af4();
  plVar3 = auVar4._0_8_;
  plVar3[5] = auVar4._8_8_;
  *(undefined4 *)((long)plVar3 + 0x4c) = 4;
                    /* WARNING: Could not recover jumptable at 0x02f893d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
  return plVar3;
}



// ============================================================
// RVA: 0x2f893d8 | Core.UI2.UIManager.RemoveCallbacks
// ============================================================

void Core_UI2_UIManager__RemoveCallbacks(undefined8 param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003ebc663 & 1) == 0) {
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5f738);
    func_0x00f78a20(0x3d5f740);
    func_0x00f78a20(0x3d5f748);
    bRam0000000003ebc663 = 1;
  }
  uVar7 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar7,param_1,uRam0000000003d5f740,uRam0000000003d2a558);
  if (param_2 == 0) {
    plVar8 = (long *)func_0x00f78af4();
    (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    plVar8[5] = 0;
    *(undefined4 *)((long)plVar8 + 0x4c) = 4;
    return;
  }
  /*Core.UI2.UIScreen$$remove_ScreenEnterStarted*/ func_0x02f89bc0(param_2,uVar7);
  uVar7 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar7,param_1,uRam0000000003d5f748,uRam0000000003d2a558);
  /*Core.UI2.UIScreen$$remove_ScreenEnterStartBefore*/ func_0x02f89c60(param_2,uVar7);
  uVar7 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar7,param_1,uRam0000000003d5f738,uRam0000000003d2a558);
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  lVar10 = *(long *)(param_2 + 0x20);
  while( true ) {
    uVar11 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,uVar7,0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar9 = func_0x00ff0f44((long *)(param_2 + 0x20),plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar10 = *(long *)(auVar19._0_8_ + 0x10);
  if (lVar10 == 0) {
    return;
  }
  lStack_98 = lVar10;
  lVar9 = *(long *)(lVar10 + 0x68);
  if (lVar9 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar9 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar12 = plVar18[lVar9];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar16)(plVar8,uVar11,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar6 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar16 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar7 = *(undefined8 *)(lVar13 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar7,lVar12);
            pcVar16 = (code *)*puVar6;
          }
          (*pcVar16)(plVar1,plVar8,uVar11,puVar6);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,uVar11,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar6 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01e6e554:
          pcVar16 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01e6e52c:
            uVar7 = *(undefined8 *)(lVar13 + 8);
          }
          puVar6 = (undefined8 *)func_0x00f78acc(uVar7,lVar12);
          pcVar16 = (code *)*puVar6;
        }
        (*pcVar16)(plVar8,uVar11,puVar6);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar16)(plVar1,plVar8,uVar11,lVar12);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89550 | Core.UI2.UIManager.DestroyScreenBehaviour
// ============================================================

void Core_UI2_UIManager__DestroyScreenBehaviour(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *extraout_x1;
  
  if ((bRam0000000003ebc65a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc65a = 1;
  }
  if (param_2 != 0) {
    /*Core.UI2.UIScreenBehaviour$$BeforeDestroyed*/ func_0x02f89640(param_2);
    uVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec0230 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec0230 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pcRam0000000003ec0228 == (code *)0x0) {
      pcRam0000000003ec0228 =
           (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec0228)(0,uVar1);
    return;
  }
  func_0x00f78af4();
  if (extraout_x1 != (long *)0x0) {
    (**(code **)(*extraout_x1 + 0x248))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return;
  }
  plVar2 = (long *)func_0x00f78af4();
                    /* WARNING: Could not recover jumptable at 0x02f89618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
  return;
}



// ============================================================
// RVA: 0x2f895d4 | Core.UI2.UIManager.DestroyScreen
// ============================================================

void Core_UI2_UIManager__DestroyScreen(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    param_2[0xb] = 0;
    return;
  }
  plVar1 = (long *)func_0x00f78af4();
                    /* WARNING: Could not recover jumptable at 0x02f89618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
  return;
}



// ============================================================
// RVA: 0x2f896d0 | Core.UI2.UIManager.AssetLoadSuccessHandler
// ============================================================

void Core_UI2_UIManager__AssetLoadSuccessHandler(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003ebc65c & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d3dda8);
    func_0x00f78a20(0x3d3ddb0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc65c = 1;
  }
  uStack_54 = 0;
  iVar1 = Core_UI2_UIManager__TryGetAssetRequestIndex(param_1,param_3,&uStack_54);
  if (iVar1 != 0) {
    if ((param_2 != (long *)0x0) && (*param_2 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
      param_2 = (long *)0x0;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_2,0,0);
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar4 = (long)(int)uStack_54;
        lVar3 = lVar5;
        if (*(uint *)(lVar5 + 0x18) <= uStack_54) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar3 = *(long *)(param_1 + 0x80);
        }
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar5 + 0x10) + lVar4 * 0x20;
          uStack_38 = *(undefined8 *)(lVar5 + 0x38);
          uStack_48 = *(undefined8 *)(lVar5 + 0x28);
          uStack_50 = *(undefined8 *)(lVar5 + 0x20);
          plStack_40 = param_2;
          /*System.Collections.Generic.List<UIManager.AssetRequest>$$set_Item*/ func_0x025bd948(lVar3,lVar4,&uStack_50,uRam0000000003d3ddb0);
          return;
        }
      }
      func_0x00f78af4();
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x2f89814 | Core.UI2.UIManager.AssetLoadFailedHandler
// ============================================================

void Core_UI2_UIManager__AssetLoadFailedHandler(void)

{
  return;
}



// ============================================================
// RVA: 0x2f89818 | Core.UI2.UIManager.ReleaseAssetRequestIfNotInUse
// ============================================================

void Core_UI2_UIManager__ReleaseAssetRequestIfNotInUse(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  long lStack_1f8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003ebc660 & 1) == 0) {
    func_0x00f78a20(0x3d3dd98);
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3dda8);
    bRam0000000003ebc660 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar20 = *(long *)(param_1 + 0x80);
  if (lVar20 != 0) {
    uVar18 = (uint)param_2;
    if (*(uint *)(lVar20 + 0x18) <= uVar18) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar20 = *(long *)(lVar20 + 0x10) + (long)(int)uVar18 * 0x20;
    if (*(char *)(lVar20 + 0x38) != '\0') {
      return;
    }
    uVar2 = *(undefined4 *)(lVar20 + 0x28);
    if (0 < *(int *)(param_1 + 0x50)) {
      lVar23 = 0;
      uVar24 = 0;
      uVar14 = 0;
      lVar20 = *(long *)(lVar20 + 0x20);
      do {
        lVar21 = *(long *)(param_1 + 0x70);
        if (lVar21 == 0) goto LAB_02f899dc;
        if (*(uint *)(lVar21 + 0x18) <= uVar24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar21 = *(long *)(lVar21 + 0x10) + lVar23;
        lVar15 = *(long *)(lVar21 + 0x28);
        uVar10 = *(undefined8 *)(lVar21 + 0x30);
        if (lVar15 != 0) {
          Core_UI2_UIManager__TryGetScreenInfo(param_1,*(undefined8 *)(lVar15 + 0x40),&uStack_70);
          if (lVar20 == 0) goto LAB_02f899dc;
          uVar8 = /*System.String$$Equals*/ func_0x029caa48(lVar20,uStack_60,5,0);
          uVar14 = uVar14 | uVar8;
        }
        uVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar10,0);
        if ((uVar12 & 1) == 0) {
          Core_UI2_UIManager__TryGetScreenInfo(param_1,uVar10,&uStack_70);
          if (lVar20 == 0) goto LAB_02f899dc;
          uVar8 = /*System.String$$Equals*/ func_0x029caa48(lVar20,uStack_60,5,0);
          uVar14 = uVar14 | uVar8;
        }
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 0x28;
      } while ((long)uVar24 < (long)*(int *)(param_1 + 0x50));
      if ((uVar14 & 1) != 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      Core_Assets_AssetManager__Release(*(long *)(param_1 + 0x48),uVar2,0);
      lVar20 = *(long *)(param_1 + 0x80);
      if (lVar20 != 0) {
        uVar14 = *(uint *)(lVar20 + 0x18);
        uVar10 = uRam0000000003d3dd98;
        if (uVar14 <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar14 = *(uint *)(lVar20 + 0x18);
        }
        uVar14 = uVar14 - 1;
        *(uint *)(lVar20 + 0x18) = uVar14;
        if (uVar14 - uVar18 != 0 && (int)uVar18 <= (int)uVar14) {
          uVar10 = *(undefined8 *)(lVar20 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar10,uVar18 + 1,uVar10,param_2,uVar14 - uVar18,0);
          uVar14 = *(uint *)(lVar20 + 0x18);
        }
        lVar23 = *(long *)(lVar20 + 0x10);
        if (lVar23 == 0) {
          func_0x00f78af4();
        }
        else if (uVar14 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + (long)(int)uVar14 * 0x20;
          *(undefined8 *)(lVar23 + 0x28) = 0;
          *(undefined8 *)(lVar23 + 0x20) = 0;
          *(undefined8 *)(lVar23 + 0x38) = 0;
          *(undefined8 *)(lVar23 + 0x30) = 0;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          return;
        }
        uVar11 = func_0x00f78b24();
        auVar25 = func_0x00f78ac0(uVar11,0);
        lVar20 = auVar25._0_8_;
        iVar6 = auVar25._8_4_;
        iVar7 = (int)uVar10;
        if (iVar6 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar7 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar20 + 0x18) - iVar6 < iVar7) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar7) {
          iVar4 = *(int *)(lVar20 + 0x18) - iVar7;
          *(int *)(lVar20 + 0x18) = iVar4;
          if (iVar4 - iVar6 != 0 && iVar6 <= iVar4) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar20 + 0x10),iVar7 + iVar6,
                            *(undefined8 *)(lVar20 + 0x10),auVar25._8_8_,iVar4 - iVar6,0);
            iVar4 = *(int *)(lVar20 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar20 + 0x10),iVar4,uVar10,0);
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        }
        return;
      }
    }
  }
LAB_02f899dc:
  auVar25 = func_0x00f78af4();
  if ((bRam0000000003ebc66b & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66b = 1;
  }
  plVar19 = (long *)(auVar25._0_8_ + 0x18);
  lVar20 = *plVar19;
  while ((plVar13 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar20,auVar25._8_8_,0), plVar13 == (long *)0x0 ||
         (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar23 = func_0x00ff0f44(plVar19,plVar13,lVar20);
    bVar5 = lVar20 == lVar23;
    lVar20 = lVar23;
    if (bVar5) {
      return;
    }
  }
  auVar25 = func_0x00f78e5c(plVar13);
  if ((bRam0000000003ebc669 & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc669 = 1;
  }
  plVar19 = (long *)(auVar25._0_8_ + 0x10);
  lVar20 = *plVar19;
  while ((plVar13 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar20,auVar25._8_8_,0), plVar13 == (long *)0x0 ||
         (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar23 = func_0x00ff0f44(plVar19,plVar13,lVar20);
    bVar5 = lVar20 == lVar23;
    lVar20 = lVar23;
    if (bVar5) {
      return;
    }
  }
  auVar25 = func_0x00f78e5c(plVar13);
  if ((bRam0000000003ebc66d & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66d = 1;
  }
  plVar19 = (long *)(auVar25._0_8_ + 0x20);
  lVar20 = *plVar19;
  while ((plVar13 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar20,auVar25._8_8_,0), plVar13 == (long *)0x0 ||
         (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar23 = func_0x00ff0f44(plVar19,plVar13,lVar20);
    bVar5 = lVar20 == lVar23;
    lVar20 = lVar23;
    if (bVar5) {
      return;
    }
  }
  auVar25 = func_0x00f78e5c(plVar13);
  if ((bRam0000000003ebc66c & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66c = 1;
  }
  plVar19 = (long *)(auVar25._0_8_ + 0x18);
  lVar20 = *plVar19;
  while ((plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar20,auVar25._8_8_,0), plVar13 == (long *)0x0 ||
         (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar23 = func_0x00ff0f44(plVar19,plVar13,lVar20);
    bVar5 = lVar20 == lVar23;
    lVar20 = lVar23;
    if (bVar5) {
      return;
    }
  }
  auVar25 = func_0x00f78e5c(plVar13);
  if ((bRam0000000003ebc66a & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66a = 1;
  }
  plVar19 = (long *)(auVar25._0_8_ + 0x10);
  lVar20 = *plVar19;
  while ((plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar20,auVar25._8_8_,0), plVar13 == (long *)0x0 ||
         (*plVar13 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
    lVar23 = func_0x00ff0f44(plVar19,plVar13,lVar20);
    bVar5 = lVar20 == lVar23;
    lVar20 = lVar23;
    if (bVar5) {
      return;
    }
  }
  auVar25 = func_0x00f78e5c(plVar13);
  if ((bRam0000000003ebc66e & 1) == 0) {
    func_0x00f78a20(0x3d1b6b8);
    bRam0000000003ebc66e = 1;
  }
  plVar19 = (long *)(auVar25._0_8_ + 0x20);
  lVar20 = *plVar19;
  while( true ) {
    uVar10 = 0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar20,auVar25._8_8_,0);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8)) break;
    lVar23 = func_0x00ff0f44(plVar19,plVar13,lVar20);
    bVar5 = lVar20 == lVar23;
    lVar20 = lVar23;
    if (bVar5) {
      return;
    }
  }
  auVar25 = func_0x00f78e5c(plVar13);
  plVar19 = auVar25._8_8_;
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar20 = *(long *)(auVar25._0_8_ + 0x10);
  if (lVar20 == 0) {
    return;
  }
  lStack_1f8 = lVar20;
  lVar23 = *(long *)(lVar20 + 0x68);
  if (lVar23 == 0) {
    plVar13 = &lStack_1f8;
    lVar21 = 1;
  }
  else {
    lVar21 = *(long *)(lVar23 + 0x18);
    if (lVar21 == 0) {
      return;
    }
    plVar13 = (long *)(lVar23 + 0x20);
  }
  lVar23 = 0;
  do {
    lVar15 = plVar13[lVar23];
    pcVar22 = *(code **)(lVar15 + 0x10);
    plVar1 = *(long **)(lVar15 + 0x20);
    lVar15 = *(long *)(lVar15 + 0x28);
    if (*(short *)(lVar15 + 0x48) == -1) {
      func_0x00f78ad8(lVar15);
    }
    iVar6 = func_0x00f78a4c(lVar15);
    bVar5 = *(char *)(lVar15 + 0x4a) == '\x02';
    if (iVar6 == 0) {
      if (bVar5) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar22)(plVar19,uVar10,lVar15);
        }
        else {
          if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar20 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar6 = func_0x00f78a44(lVar15);
          iVar7 = func_0x00f78ec0(lVar15);
          if (iVar6 == 0) {
            uVar3 = *(ushort *)(lVar15 + 0x48);
            if (iVar7 == 0) {
              lVar15 = *plVar1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar15 + 0x138))(plVar1,plVar19,uVar10,*(undefined8 *)(lVar15 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar15 = func_0x00f78a48(lVar15);
            lVar16 = *plVar1;
            uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar24 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar15) {
                  puVar9 = (undefined8 *)
                           (lVar16 + (long)(int)(*piVar17 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar17 = piVar17 + 4;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar15,(ulong)uVar3);
code_r0x01e6e5c0:
            pcVar22 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar7 == 0) {
              uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar16 = *plVar1;
              uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar24 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar15 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar17 = piVar17 + 4;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
              lVar16 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar11 = *(undefined8 *)(lVar16 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
            pcVar22 = (code *)*puVar9;
          }
          (*pcVar22)(plVar1,plVar19,uVar10,puVar9);
        }
      }
      else {
        if ((*(short *)(lVar15 + 0x48) == -1) || (*(long *)(lVar20 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar6 = func_0x00f78a44(lVar15);
        iVar7 = func_0x00f78ec0(lVar15);
        if (iVar6 == 0) {
          uVar3 = *(ushort *)(lVar15 + 0x48);
          if (iVar7 == 0) {
            lVar15 = *plVar19 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar15 + 0x138))(plVar19,uVar10,*(undefined8 *)(lVar15 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar15 = func_0x00f78a48(lVar15);
          lVar16 = *plVar19;
          uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar24 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar15) {
                puVar9 = (undefined8 *)(lVar16 + (long)(int)(*piVar17 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar17 = piVar17 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar19,lVar15,(ulong)uVar3);
code_r0x01e6e554:
          pcVar22 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar7 == 0) {
            uVar11 = *(undefined8 *)(*plVar19 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar16 = *plVar19;
            uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar24 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)(lVar15 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar17 = piVar17 + 4;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            lVar16 = func_0x00fac1f0(plVar19);
code_r0x01e6e52c:
            uVar11 = *(undefined8 *)(lVar16 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
          pcVar22 = (code *)*puVar9;
        }
        (*pcVar22)(plVar19,uVar10,puVar9);
      }
    }
    else {
      if (bVar5) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar22)(plVar1,plVar19,uVar10,lVar15);
    }
code_r0x01e6e428:
    lVar23 = lVar23 + 1;
    if (lVar23 == lVar21) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89da0 | Core.UI2.UIManager.OnScreenStartBeforeEnter
// ============================================================

void Core_UI2_UIManager__OnScreenStartBeforeEnter(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  if ((bRam0000000003ebc664 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc664 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar14)(param_2,param_3,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01e6e554:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar14)(plVar1,param_2,param_3,lVar10);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89e18 | Core.UI2.UIManager.OnScreenEnterStarted
// ============================================================

void Core_UI2_UIManager__OnScreenEnterStarted(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  if ((bRam0000000003ebc665 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc665 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar14)(param_2,param_3,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01e6e554:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar14)(plVar1,param_2,param_3,lVar10);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89e90 | Core.UI2.UIManager.OnScreenEnterFinish
// ============================================================

void Core_UI2_UIManager__OnScreenEnterFinish(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  if ((bRam0000000003ebc666 & 1) == 0) {
    func_0x00f78a20(0x3d2a560);
    bRam0000000003ebc666 = 1;
  }
  Core_UI2_UIManager__EnableInput(param_1,param_3,1);
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e6e418:
          (*pcVar14)(param_2,param_3,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01e6e30c;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e6e428;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e6e5c0;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e6e5c0:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e6e598;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e6e598:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_3,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01e6e418;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_3,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e6e428;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e6e554;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01e6e554:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e6e52c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01e6e52c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_3,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e6e418;
code_r0x01e6e30c:
      (*pcVar14)(plVar1,param_2,param_3,lVar10);
    }
code_r0x01e6e428:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2f89f18 | Core.UI2.UIManager..ctor
// ============================================================

void Core_UI2_UIManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x2f89f20 | Core.UI2.UIManager..cctor
// ============================================================

void Core_UI2_UIManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003ebc667 & 1) == 0) {
    func_0x00f78a20(0x3d255c0);
    func_0x00f78a20(0x3d754f0);
    func_0x00f78a20(0x3d754e8);
    bRam0000000003ebc667 = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('UIManager.Update()')*/ uRam0000000003d754f0,1,0,0,0);
  **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('UIManager.LateUpdate()')*/ uRam0000000003d754e8,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8) + 8) = uVar1;
  return;
}



