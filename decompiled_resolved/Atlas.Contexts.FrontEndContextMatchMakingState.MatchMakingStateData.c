// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingStateData

// ============================================================
// RVA: 0x154e6f0 | Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingStateData.Reset
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingStateData__Reset(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}



// ============================================================
// RVA: 0x154e6f8 | Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingStateData..ctor
// ============================================================

undefined1  [16]
Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingStateData___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4f80 & 1) == 0) {
    func_0x00f78a20(0x3d1f910);
    bRam0000000003eb4f80 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.VotingManager.VoteOptionIds[]_TypeInfo*/ uRam0000000003d1f910,2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



