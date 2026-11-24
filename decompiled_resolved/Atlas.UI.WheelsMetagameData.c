// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.WheelsMetagameData

// ============================================================
// RVA: 0x1530e28 | Atlas.UI.WheelsMetagameData..ctor
// ============================================================

void Atlas_UI_WheelsMetagameData___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if ((bRam0000000003eb4952 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4952 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  Atlas_UI_MetagameData___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  return;
}



// ============================================================
// RVA: 0x1530e40 | Atlas.UI.WheelsMetagameData.IsStock
// ============================================================

ulong Atlas_UI_WheelsMetagameData__IsStock(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  if ((bRam0000000003eb4ea8 & 1) == 0) {
    func_0x00f78a20(0x3d25b48);
    bRam0000000003eb4ea8 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 + -8)
        == /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
      return (ulong)*(byte *)(plVar2 + 0xe);
    }
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



