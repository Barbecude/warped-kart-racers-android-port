// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.IPTabData

// ============================================================
// RVA: 0x15b766c | Atlas.UI.IPTabData.get_IPDefinitionRef
// ============================================================

long Atlas_UI_IPTabData__get_IPDefinitionRef(long param_1)

{
  return param_1 + 0x18;
}



// ============================================================
// RVA: 0x15b7674 | Atlas.UI.IPTabData.get_IPRepresentationViewBehaviour
// ============================================================

undefined8 Atlas_UI_IPTabData__get_IPRepresentationViewBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15b767c | Atlas.UI.IPTabData.get_GridParent
// ============================================================

undefined8 Atlas_UI_IPTabData__get_GridParent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15b7684 | Atlas.UI.IPTabData.get_QueuedAnims
// ============================================================

undefined8 Atlas_UI_IPTabData__get_QueuedAnims(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15b768c | Atlas.UI.IPTabData..ctor
// ============================================================

undefined1  [16] Atlas_UI_IPTabData___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5294 & 1) == 0) {
    func_0x00f78a20(0x3d2e170);
    func_0x00f78a20(0x3d1c190);
    bRam0000000003eb5294 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<CharacterRepresentationViewBehaviour, int>_TypeInfo*/ uRam0000000003d1c190);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar1,uRam0000000003d2e170);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



