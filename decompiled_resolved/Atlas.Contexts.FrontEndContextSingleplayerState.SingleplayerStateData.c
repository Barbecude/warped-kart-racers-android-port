// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerStateData

// ============================================================
// RVA: 0x154e9e0 | Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerStateData.get_SelectedCampaignId
// ============================================================

undefined8
Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerStateData__get_SelectedCampaignId
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x154e9e8 | Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerStateData.set_SelectedCampaignId
// ============================================================

void Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerStateData__set_SelectedCampaignId
               (long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154e9f0 | Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerStateData.Reset
// ============================================================

void Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerStateData__Reset(long param_1)

{
  if ((bRam0000000003eb4f85 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4f85 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x154ea64 | Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerStateData..ctor
// ============================================================

undefined1  [16]
Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerStateData___ctor(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4f86 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21688);
    bRam0000000003eb4f86 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  uVar2 = func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
  /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(uVar2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x30) = **(undefined8 **)(lVar1 + 0xb8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}



