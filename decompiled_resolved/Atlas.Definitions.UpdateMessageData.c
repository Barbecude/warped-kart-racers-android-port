// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.UpdateMessageData

// ============================================================
// RVA: 0x1523468 | Atlas.Definitions.UpdateMessageData.get_UpdateMessageDefinition
// ============================================================

undefined8 Atlas_Definitions_UpdateMessageData__get_UpdateMessageDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1523470 | Atlas.Definitions.UpdateMessageData..ctor
// ============================================================

void Atlas_Definitions_UpdateMessageData___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  Atlas_UI_MetagameData___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



// ============================================================
// RVA: 0x15234a8 | Atlas.Definitions.UpdateMessageData.get_ID
// ============================================================

undefined8 Atlas_Definitions_UpdateMessageData__get_ID(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x20);
}



