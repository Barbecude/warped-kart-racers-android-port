// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextInfoBase

// ============================================================
// RVA: 0x15a4ebc | Atlas.Contexts.GameContextInfoBase..ctor
// ============================================================

undefined1  [16] Atlas_Contexts_GameContextInfoBase___ctor(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb51e2 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3bcd0);
    func_0x00f78a20(0x3d1dd98);
    bRam0000000003eb51e2 = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<SceneInfo>_TypeInfo*/ uRam0000000003d1dd98);
  /*System.Collections.Generic.List<SceneInfo>$$.ctor*/ func_0x02457afc(uVar2,uRam0000000003d3bcd0);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0x50) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x58) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x60) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}



