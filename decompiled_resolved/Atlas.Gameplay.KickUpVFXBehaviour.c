// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.KickUpVFXBehaviour

// ============================================================
// RVA: 0x15e80b4 | Atlas.Gameplay.KickUpVFXBehaviour.GetKickUpIndex
// ============================================================

int Atlas_Gameplay_KickUpVFXBehaviour__GetKickUpIndex(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x18))) {
    iVar1 = 0;
    do {
      if (*(int *)(lVar2 + (long)iVar1 * 0xd0 + 0x20) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (*(int *)(lVar2 + 0x18) != iVar1);
  }
  return -1;
}



// ============================================================
// RVA: 0x15ebb60 | Atlas.Gameplay.KickUpVFXBehaviour.get_KickUps
// ============================================================

undefined8 Atlas_Gameplay_KickUpVFXBehaviour__get_KickUps(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15ebb68 | Atlas.Gameplay.KickUpVFXBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_KickUpVFXBehaviour___ctor(ulong param_1)

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



