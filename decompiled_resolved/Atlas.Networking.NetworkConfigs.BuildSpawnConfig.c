// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkConfigs.BuildSpawnConfig

// ============================================================
// RVA: 0x153f73c | Atlas.Networking.NetworkConfigs.BuildSpawnConfig..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Networking_NetworkConfigs_BuildSpawnConfig___ctor(long param_1)

{
  if ((bRam0000000003eb4f30 & 1) == 0) {
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4f30 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = /*STR('')*/ uRam0000000003d65d08;
  *(undefined8 *)(param_1 + 0x20) = _UNK_033f8800;
  *(undefined4 *)(param_1 + 0x28) = 1;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



