// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.UsableManager.<>c__35<object>

// ============================================================
// RVA: 0x1b167ac | Atlas.Gameplay.Usables.UsableManager.<>c__35<object>..cctor
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c__35_object____cctor(long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  uVar2 = func_0x00f78aec(lVar3);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    lVar3 = *(long *)(param_1 + 0x18);
    uVar1 = *(ushort *)(lVar3 + 0x132);
  }
  pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 8);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  (*pcVar5)(uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8));
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  **(undefined8 **)(lVar3 + 0xb8) = uVar2;
  return;
}



// ============================================================
// RVA: 0x1b16884 | Atlas.Gameplay.Usables.UsableManager.<>c__35<object>..ctor
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c__35_object____ctor(long param_1)

{
  if (param_1 != 0) {
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1b1689c | Atlas.Gameplay.Usables.UsableManager.<>c__35<object>.<CreateCallbacks>b__35_1
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c__35_object____CreateCallbacks_b__35_1(void)

{
  return;
}



// ============================================================
// RVA: 0x1b168a0 | Atlas.Gameplay.Usables.UsableManager.<>c__35<object>.<CreateCallbacks>b__35_2
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c__35_object____CreateCallbacks_b__35_2(void)

{
  return;
}



