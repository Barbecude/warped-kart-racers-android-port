// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBase.<>c

// ============================================================
// RVA: 0x154fd84 | Atlas.Contexts.GameContextBase.<>c..cctor
// ============================================================

void Atlas_Contexts_GameContextBase___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f8d & 1) == 0) {
    func_0x00f78a20(0x3d276c0);
    bRam0000000003eb4f8d = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x154fde4 | Atlas.Contexts.GameContextBase.<>c..ctor
// ============================================================

void Atlas_Contexts_GameContextBase___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x154fdec | Atlas.Contexts.GameContextBase.<>c.<InitFollowCam>b__159_0
// ============================================================

ulong Atlas_Contexts_GameContextBase___c___InitFollowCam_b__159_0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  if (param_2 == 0) {
    auVar3 = func_0x00f78af4();
    uVar1 = /*System.Object$$.ctor*/ func_0x0294d018(auVar3._0_8_,0);
    *(int *)(auVar3._0_8_ + 0x10) = auVar3._8_4_;
    return uVar1;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    return (ulong)(*(int *)(*(long *)(param_2 + 0x20) + 0x10) == 2);
  }
  lVar2 = func_0x00f78af4(param_2,0);
  return *(ulong *)(lVar2 + 0x68);
}



