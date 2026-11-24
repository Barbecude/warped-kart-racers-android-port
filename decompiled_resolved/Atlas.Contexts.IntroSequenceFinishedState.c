// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.IntroSequenceFinishedState

// ============================================================
// RVA: 0x15b8fb8 | Atlas.Contexts.IntroSequenceFinishedState.Init
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb52a5 & 1) == 0) {
    func_0x00f78a20(0x3d55148);
    bRam0000000003eb52a5 = 1;
  }
  if (param_2 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55148);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15b9020 | Atlas.Contexts.IntroSequenceFinishedState.OnEnter
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState__OnEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9024 | Atlas.Contexts.IntroSequenceFinishedState.OnUpdate
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState__OnUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9028 | Atlas.Contexts.IntroSequenceFinishedState.OnLateUpdate
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState__OnLateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b902c | Atlas.Contexts.IntroSequenceFinishedState.OnFixedUpdate
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState__OnFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9030 | Atlas.Contexts.IntroSequenceFinishedState.OnExit
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState__OnExit(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9034 | Atlas.Contexts.IntroSequenceFinishedState.OnDeInit
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x15b903c | Atlas.Contexts.IntroSequenceFinishedState..ctor
// ============================================================

void Atlas_Contexts_IntroSequenceFinishedState___ctor(void)

{
  return;
}



