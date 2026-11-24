// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0

// ============================================================
// RVA: 0x156b1d8 | Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0..ctor
// ============================================================

void Atlas_UI_SplatsBehaviour___c__DisplayClass10_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156b1e0 | Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0.<StopSplat>b__0
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */

undefined8
Atlas_UI_SplatsBehaviour___c__DisplayClass10_0___StopSplat_b__0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    func_0x00f78af4();
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50,lVar2,5,0);
    bRam0000000003eb9443 = 1;
  }
  if (param_2 == lVar2) {
    uVar1 = 1;
  }
  else {
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



