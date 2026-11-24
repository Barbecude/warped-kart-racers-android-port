// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.AtlasShaders.<>c

// ============================================================
// RVA: 0x1546bc4 | Atlas.Rendering.AtlasShaders.<>c..cctor
// ============================================================

void Atlas_Rendering_AtlasShaders___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f63 & 1) == 0) {
    func_0x00f78a20(0x3d26a38);
    bRam0000000003eb4f63 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1546c24 | Atlas.Rendering.AtlasShaders.<>c..ctor
// ============================================================

void Atlas_Rendering_AtlasShaders___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1546c2c | Atlas.Rendering.AtlasShaders.<>c.<Init>b__45_0
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */

undefined8 Atlas_Rendering_AtlasShaders___c___Init_b__45_0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  
  if ((bRam0000000003eb4f64 & 1) == 0) {
    func_0x00f78a20(0x3d74f68);
    bRam0000000003eb4f64 = 1;
  }
  if ((param_2 != 0) &&
     (lVar2 = /*UnityEngine.Object$$get_name*/ func_0x03244608(param_2,0), lVar1 = /*STR('Toon/Environment')*/ lRam0000000003d74f68, lVar2 != 0)) {
    if ((bRam0000000003eb9443 & 1) == 0) {
      func_0x00f78a20(0x3d20b50,/*STR('Toon/Environment')*/ lRam0000000003d74f68,5,0);
      bRam0000000003eb9443 = 1;
    }
    if (lVar2 == lVar1) {
      uVar3 = 1;
    }
    else {
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
        return uVar3;
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  auVar4 = func_0x00f78af4();
  uVar3 = /*System.Object$$.ctor*/ func_0x0294d018(auVar4._0_8_,0);
  *(int *)(auVar4._0_8_ + 0x10) = auVar4._8_4_;
  return uVar3;
}



