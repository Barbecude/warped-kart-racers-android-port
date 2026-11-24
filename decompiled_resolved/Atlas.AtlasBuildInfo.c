// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.AtlasBuildInfo

// ============================================================
// RVA: 0x14466cc | Atlas.AtlasBuildInfo.get_Current
// ============================================================

void Atlas_AtlasBuildInfo__get_Current(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam0000000003eb4712 & 1) == 0) {
    func_0x00f78a20(0x3d2cae8);
    bRam0000000003eb4712 = 1;
  }
  lVar2 = lRam0000000003d2cae8;
  lVar4 = *(long *)(lRam0000000003d2cae8 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    lVar3 = *(long *)(lVar2 + 0x18);
    uVar1 = *(ushort *)(lVar3 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = *(code **)**(undefined8 **)(lVar4 + 0xc0);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  lVar3 = (*UNRECOVERED_JUMPTABLE)(**(undefined8 **)(lVar3 + 0xc0));
  if (lVar3 != 0) {
    return;
  }
  lVar4 = *(long *)(lVar2 + 0x18);
  uVar1 = *(ushort *)(lVar4 + 0x132);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar4);
    lVar3 = *(long *)(lVar2 + 0x18);
    uVar1 = *(ushort *)(lVar3 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x01cff564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
  return;
}



// ============================================================
// RVA: 0x1446710 | Atlas.AtlasBuildInfo..ctor
// ============================================================

void Atlas_AtlasBuildInfo___ctor(long param_1)

{
  if ((bRam0000000003eb4713 & 1) == 0) {
    func_0x00f78a20(0x3d250c8);
    bRam0000000003eb4713 = 1;
  }
  if (((*(ushort *)(/*ElectricSquare.Build.TeamCityBuildInfo_TypeInfo*/ lRam0000000003d250c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*ElectricSquare.Build.TeamCityBuildInfo_TypeInfo*/ lRam0000000003d250c8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5cc3 & 1) == 0) {
    func_0x00f78a20(0x3d75b28,0);
    func_0x00f78a20(0x3d6e180);
    bRam0000000003eb5cc3 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = /*STR('Unknown')*/ uRam0000000003d75b28;
  *(undefined8 *)(param_1 + 0x38) = /*STR('Invalid')*/ uRam0000000003d6e180;
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



