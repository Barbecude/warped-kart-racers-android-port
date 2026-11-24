// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.AtlasContextCreator

// ============================================================
// RVA: 0x1461750 | Atlas.AtlasContextCreator.CreateContexts
// ============================================================

long Atlas_AtlasContextCreator__CreateContexts(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4818 & 1) == 0) {
    func_0x00f78a20(0x3d20050);
    func_0x00f78a20(0x3d21a00);
    func_0x00f78a20(0x3d3a850);
    func_0x00f78a20(0x3d3a848);
    func_0x00f78a20(0x3d1d9d8);
    func_0x00f78a20(0x3d24068);
    bRam0000000003eb4818 = 1;
  }
  lVar1 = func_0x00f78aec(/*System.Collections.Generic.List<IContext>_TypeInfo*/ uRam0000000003d1d9d8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar1,uRam0000000003d3a848);
  uVar2 = func_0x00f78aec(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ uRam0000000003d24068);
  Atlas_Contexts_RaceGameContext___ctor(uVar2,0);
  if (lVar1 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar1,uVar2,uRam0000000003d3a850);
    uVar2 = func_0x00f78aec(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ uRam0000000003d20050);
    Atlas_Contexts_BattleGameContext___ctor(uVar2,0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar1,uVar2,uRam0000000003d3a850);
    uVar2 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContext_TypeInfo*/ uRam0000000003d21a00);
    Atlas_FrontEnd_FrontEndContext___ctor(uVar2,0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar1,uVar2,uRam0000000003d3a850);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x10);
}



