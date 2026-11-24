// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartCompositeFactory.PlayerLoadoutSet

// ============================================================
// RVA: 0x15554ac | Atlas.Gameplay.Kart.KartCompositeFactory.PlayerLoadoutSet.IsValid
// ============================================================

/* WARNING: Possible PIC construction at 0x015554c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015554e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015554c8) */
/* WARNING: Removing unreachable block (ram,0x015554cc) */
/* WARNING: Removing unreachable block (ram,0x015554dc) */
/* WARNING: Removing unreachable block (ram,0x015554e8) */
/* WARNING: Removing unreachable block (ram,0x015554ec) */
/* WARNING: Removing unreachable block (ram,0x01555510) */
/* WARNING: Removing unreachable block (ram,0x015554fc) */

bool Atlas_Gameplay_Kart_KartCompositeFactory_PlayerLoadoutSet__IsValid(long param_1)

{
  int iVar1;
  
  if ((bRam0000000003eb5696 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0,0);
    bRam0000000003eb5696 = 1;
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return iVar1 != **(int **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
}



