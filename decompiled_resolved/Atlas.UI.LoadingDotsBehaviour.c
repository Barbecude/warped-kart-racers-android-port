// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LoadingDotsBehaviour

// ============================================================
// RVA: 0x1487e34 | Atlas.UI.LoadingDotsBehaviour.Awake
// ============================================================

long * Atlas_UI_LoadingDotsBehaviour__Awake(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float extraout_s0;
  float fVar7;
  
  plVar6 = *(long **)(param_1 + 0x18);
  uVar4 = /*System.String$$CreateString*/ func_0x029d16a4(0,0x2e,*(undefined4 *)(param_1 + 0x20),0);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x20) + 1;
    return plVar6;
  }
  lVar5 = func_0x00f78af4();
  fVar7 = *(float *)(lVar5 + 0x28);
  plVar6 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar7 = fVar7 + extraout_s0;
  *(float *)(lVar5 + 0x28) = fVar7;
  if (fVar7 < *(float *)(lVar5 + 0x24)) {
    return plVar6;
  }
  *(undefined4 *)(lVar5 + 0x28) = 0;
  iVar2 = *(int *)(lVar5 + 0x2c);
  iVar1 = *(int *)(lVar5 + 0x30) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  iVar1 = iVar1 - iVar3 * iVar2;
  *(int *)(lVar5 + 0x30) = iVar1;
  plVar6 = *(long **)(lVar5 + 0x18);
  if (plVar6 != (long *)0x0) {
    if ((int)plVar6[100] == iVar1) {
      return plVar6;
    }
    *(undefined1 *)(plVar6 + 0x6d) = 1;
    *(int *)(plVar6 + 100) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x031b056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
    return plVar6;
  }
  plVar6 = (long *)func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return plVar6;
}



// ============================================================
// RVA: 0x1487e98 | Atlas.UI.LoadingDotsBehaviour.Update
// ============================================================

long * Atlas_UI_LoadingDotsBehaviour__Update(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  float extraout_s0;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x28);
  plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar5 = fVar5 + extraout_s0;
  *(float *)(param_1 + 0x28) = fVar5;
  if (fVar5 < *(float *)(param_1 + 0x24)) {
    return plVar4;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  iVar1 = iVar1 - iVar3 * iVar2;
  *(int *)(param_1 + 0x30) = iVar1;
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    if ((int)plVar4[100] == iVar1) {
      return plVar4;
    }
    *(undefined1 *)(plVar4 + 0x6d) = 1;
    *(int *)(plVar4 + 100) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x031b056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar4 = (long *)(**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
    return plVar4;
  }
  plVar4 = (long *)func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return plVar4;
}



// ============================================================
// RVA: 0x1487f14 | Atlas.UI.LoadingDotsBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_LoadingDotsBehaviour___ctor(ulong param_1)

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



