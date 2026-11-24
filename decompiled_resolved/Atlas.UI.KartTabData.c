// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.KartTabData

// ============================================================
// RVA: 0x15e17bc | Atlas.UI.KartTabData.get_Type
// ============================================================

undefined4 Atlas_UI_KartTabData__get_Type(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15e17c4 | Atlas.UI.KartTabData.get_LastSelectedLoadoutRepViewBehaviour
// ============================================================

undefined8 Atlas_UI_KartTabData__get_LastSelectedLoadoutRepViewBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15e17cc | Atlas.UI.KartTabData.set_LastSelectedLoadoutRepViewBehaviour
// ============================================================

ulong Atlas_UI_KartTabData__set_LastSelectedLoadoutRepViewBehaviour(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(long **)(param_1 + 0x20) = param_2;
  if (param_2 != (long *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (lVar1 != 0) {
      uVar2 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar1,0);
      if ((uVar2 & 1) == 0) {
        *(long **)(param_1 + 0x28) = param_2;
      }
      return uVar2;
    }
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x28);
}



// ============================================================
// RVA: 0x15e181c | Atlas.UI.KartTabData.get_LastValidLoadoutRepViewBehaviour
// ============================================================

undefined8 Atlas_UI_KartTabData__get_LastValidLoadoutRepViewBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15e1824 | Atlas.UI.KartTabData.get_QueuedAnims
// ============================================================

undefined8 Atlas_UI_KartTabData__get_QueuedAnims(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15e182c | Atlas.UI.KartTabData..ctor
// ============================================================

undefined1  [16] Atlas_UI_KartTabData___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb53bb & 1) == 0) {
    func_0x00f78a20(0x3d2f2a0);
    func_0x00f78a20(0x3d1c3f0);
    bRam0000000003eb53bb = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<LoadoutRepresentationViewBehaviour, int>_TypeInfo*/ uRam0000000003d1c3f0);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar1,uRam0000000003d2f2a0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
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



