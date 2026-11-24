// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.AtlasShaders

// ============================================================
// RVA: 0x146a414 | Atlas.Rendering.AtlasShaders.get_AssetManager
// ============================================================

undefined8 Atlas_Rendering_AtlasShaders__get_AssetManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x146a41c | Atlas.Rendering.AtlasShaders.set_AssetManager
// ============================================================

void Atlas_Rendering_AtlasShaders__set_AssetManager(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x146a424 | Atlas.Rendering.AtlasShaders.get_QualitySettings
// ============================================================

undefined8 Atlas_Rendering_AtlasShaders__get_QualitySettings(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x146a42c | Atlas.Rendering.AtlasShaders.set_QualitySettings
// ============================================================

void Atlas_Rendering_AtlasShaders__set_QualitySettings(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// ============================================================
// RVA: 0x146a434 | Atlas.Rendering.AtlasShaders.get_Shaders
// ============================================================

undefined8 Atlas_Rendering_AtlasShaders__get_Shaders(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x146a43c | Atlas.Rendering.AtlasShaders.set_Shaders
// ============================================================

void Atlas_Rendering_AtlasShaders__set_Shaders(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// ============================================================
// RVA: 0x146a444 | Atlas.Rendering.AtlasShaders.get_ToonShaders
// ============================================================

undefined8 Atlas_Rendering_AtlasShaders__get_ToonShaders(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x146a44c | Atlas.Rendering.AtlasShaders.set_ToonShaders
// ============================================================

void Atlas_Rendering_AtlasShaders__set_ToonShaders(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x146a454 | Atlas.Rendering.AtlasShaders.get_EnvironmentToonShader
// ============================================================

undefined8 Atlas_Rendering_AtlasShaders__get_EnvironmentToonShader(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x146a45c | Atlas.Rendering.AtlasShaders.set_EnvironmentToonShader
// ============================================================

void Atlas_Rendering_AtlasShaders__set_EnvironmentToonShader(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x146a464 | Atlas.Rendering.AtlasShaders.get_HasWarmedUpCommonShaders
// ============================================================

undefined1 Atlas_Rendering_AtlasShaders__get_HasWarmedUpCommonShaders(void)

{
  if ((bRam0000000003eb4842 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    bRam0000000003eb4842 = 1;
  }
  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return *(undefined1 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x14);
}



// ============================================================
// RVA: 0x146a4c8 | Atlas.Rendering.AtlasShaders.set_HasWarmedUpCommonShaders
// ============================================================

void Atlas_Rendering_AtlasShaders__set_HasWarmedUpCommonShaders(undefined1 param_1)

{
  if ((bRam0000000003eb4843 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    bRam0000000003eb4843 = 1;
  }
  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined1 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x14) = param_1;
  return;
}



// ============================================================
// RVA: 0x146a538 | Atlas.Rendering.AtlasShaders.get_HasWarmedUpGameModeShaders
// ============================================================

undefined1 Atlas_Rendering_AtlasShaders__get_HasWarmedUpGameModeShaders(void)

{
  if ((bRam0000000003eb4844 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    bRam0000000003eb4844 = 1;
  }
  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return *(undefined1 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x15);
}



// ============================================================
// RVA: 0x146a59c | Atlas.Rendering.AtlasShaders.set_HasWarmedUpGameModeShaders
// ============================================================

void Atlas_Rendering_AtlasShaders__set_HasWarmedUpGameModeShaders(undefined1 param_1)

{
  if ((bRam0000000003eb4845 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    bRam0000000003eb4845 = 1;
  }
  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined1 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x15) = param_1;
  return;
}



// ============================================================
// RVA: 0x146a60c | Atlas.Rendering.AtlasShaders.Init
// ============================================================

long Atlas_Rendering_AtlasShaders__Init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000003eb4846 & 1) == 0) {
    func_0x00f78a20(0x3d26a40);
    bRam0000000003eb4846 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Rendering.AtlasShaders.<Init>d__45_TypeInfo*/ uRam0000000003d26a40);
  /*Atlas.Rendering.AtlasShaders.<Init>d__45$$.ctor*/ func_0x01546c94(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4847 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb4847 = 1;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x20),0);
  }
  lVar2 = /*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0;
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar2 = /*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0;
  }
  /*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 = lVar2;
  *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(lVar2 + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return lVar2;
}



// ============================================================
// RVA: 0x146a694 | Atlas.Rendering.AtlasShaders.DeInit
// ============================================================

void Atlas_Rendering_AtlasShaders__DeInit(long param_1)

{
  if ((bRam0000000003eb4847 & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb4847 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Assets.AssetManager$$Release*/ func_0x016363a4(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// ============================================================
// RVA: 0x146a718 | Atlas.Rendering.AtlasShaders.IsToonShader
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029ceb5c) */

ulong Atlas_Rendering_AtlasShaders__IsToonShader(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long alStack_80 [10];
  
  if ((bRam0000000003eb4848 & 1) == 0) {
    func_0x00f78a20(0x3d74f58);
    bRam0000000003eb4848 = 1;
  }
  if ((param_2 != 0) &&
     (lVar3 = /*UnityEngine.Object$$get_name*/ func_0x03244608(param_2,0), lVar1 = /*STR('Toon/')*/ lRam0000000003d74f58, lVar3 != 0)) {
    puVar10 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb945b & 1) == 0) {
      func_0x00f78a20(0x3d20b50,/*STR('Toon/')*/ lRam0000000003d74f58,4,0);
      bRam0000000003eb945b = 1;
    }
    if (lVar1 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar5 = func_0x00f78aec();
      uVar6 = func_0x00f78a24(0x3d7c5a0);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
      uVar6 = func_0x00f78a24(0x3d5dba8);
      func_0x00f78ac0(uVar5,uVar6);
      uVar6 = func_0x00f78af4();
      if ((bRam0000000003eb945c & 1) == 0) {
        func_0x00f78a20(0x3d20b50);
        bRam0000000003eb945c = 1;
      }
      if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar7 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
      puVar11 = &System_String__ToLower;
      uVar9 = 0x3eb9000;
      uVar8 = 4;
      puVar2 = &stack0xffffffffffffffd0;
      do {
        *(long *)(puVar2 + -0x20) = lVar3;
        *(undefined8 *)(puVar2 + -0x18) = uVar5;
        *(undefined1 **)(puVar2 + -0x10) = puVar10;
        *(undefined **)(puVar2 + -8) = puVar11;
        if (plVar7 == (long *)0x0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar5 = func_0x00f78aec();
          uVar6 = func_0x00f78a24(0x3d788b0);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar6,0);
          uVar6 = func_0x00f78a24(0x3d5dbb8);
          func_0x00f78ac0(uVar5,uVar6);
        }
        else {
          plVar7 = (long *)(**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
          uVar5 = uVar6;
          if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x029cecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x1c0));
            return uVar4;
          }
        }
        uVar6 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x50) = uVar9;
        *(undefined8 *)(puVar2 + -0x48) = uVar8;
        *(long *)(puVar2 + -0x40) = lVar3;
        *(undefined8 *)(puVar2 + -0x38) = uVar5;
        *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x28) = &System_String__ToLowerInvariant;
        if ((bRam0000000003eb945d & 1) == 0) {
          func_0x00f78a20(0x3d20b50);
          bRam0000000003eb945d = 1;
        }
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
        puVar10 = *(undefined1 **)(puVar2 + -0x30);
        puVar11 = *(undefined **)(puVar2 + -0x28);
        lVar3 = *(long *)(puVar2 + -0x40);
        uVar5 = *(undefined8 *)(puVar2 + -0x38);
        uVar9 = *(undefined8 *)(puVar2 + -0x50);
        uVar8 = *(undefined8 *)(puVar2 + -0x48);
        puVar2 = puVar2 + -0x20;
      } while( true );
    }
    if ((lVar3 != lVar1) && (*(int *)(lVar1 + 0x10) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x029ce9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&UNK_029ce9d4 + (ulong)UNK_036fdb7b * 4))();
      return uVar4;
    }
    return 1;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x18) == 0) {
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  return (ulong)(*(int *)(*(long *)(lVar3 + 0x18) + 0x18) == 0);
}



// ============================================================
// RVA: 0x146a780 | Atlas.Rendering.AtlasShaders.get_ShouldWarmupMinimalShaders
// ============================================================

ulong Atlas_Rendering_AtlasShaders__get_ShouldWarmupMinimalShaders(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return (ulong)(*(int *)(*(long *)(param_1 + 0x18) + 0x18) == 0);
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x146a7a8 | Atlas.Rendering.AtlasShaders.Log
// ============================================================

void Atlas_Rendering_AtlasShaders__Log(void)

{
  return;
}



// ============================================================
// RVA: 0x146a7ac | Atlas.Rendering.AtlasShaders.WarmupForCommon
// ============================================================

void Atlas_Rendering_AtlasShaders__WarmupForCommon(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4849 & 1) == 0) {
    func_0x00f78a20(0x3d2a2e8);
    func_0x00f78a20(0x3d1b578);
    func_0x00f78a20(0x3d52488);
    func_0x00f78a20(0x3d52490);
    func_0x00f78a20(0x3d52498);
    func_0x00f78a20(0x3d524b8);
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d74f60);
    func_0x00f78a20(0x3d74f68);
    func_0x00f78a20(0x3d74f80);
    func_0x00f78a20(0x3d74f70);
    func_0x00f78a20(0x3d762c0);
    bRam0000000003eb4849 = 1;
  }
  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34f8 == '\0') {
    func_0x00f78a20(0x3d1fec0);
    cRam0000000003ca34f8 = '\x01';
  }
  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x14) == '\0') {
    /*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
    uVar1 = func_0x00f78aec(/*System.Action<Shader>_TypeInfo*/ uRam0000000003d1b578);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar1,param_1,uRam0000000003d52490,uRam0000000003d2a2e8);
    /*Atlas.Rendering.AtlasShaders$$Warmup*/ func_0x0146aa74(param_1,/*STR('Toon/Environment')*/ uRam0000000003d74f68,uVar1,1,0);
    uVar1 = func_0x00f78aec(/*System.Action<Shader>_TypeInfo*/ uRam0000000003d1b578);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar1,param_1,uRam0000000003d52488,uRam0000000003d2a2e8);
    /*Atlas.Rendering.AtlasShaders$$Warmup*/ func_0x0146aa74(param_1,/*STR('Toon/Dynamic')*/ uRam0000000003d74f60,uVar1,1,0);
    uVar1 = func_0x00f78aec(/*System.Action<Shader>_TypeInfo*/ uRam0000000003d1b578);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar1,param_1,uRam0000000003d52498,uRam0000000003d2a2e8);
    /*Atlas.Rendering.AtlasShaders$$Warmup*/ func_0x0146aa74(param_1,/*STR('Toon/Unlit')*/ uRam0000000003d74f80,uVar1,1,0);
    uVar1 = func_0x00f78aec(/*System.Action<Shader>_TypeInfo*/ uRam0000000003d1b578);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar1,param_1,uRam0000000003d524b8,uRam0000000003d2a2e8);
    /*Atlas.Rendering.AtlasShaders$$Warmup*/ func_0x0146aa74(param_1,/*STR('Toon/ProjectionShadow')*/ uRam0000000003d74f70,uVar1,1,0);
    /*UnityEngine.Time$$get_realtimeSinceStartup*/ func_0x03272d88(0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003ca34f9 == '\0') {
      func_0x00f78a20(0x3d1fec0);
      cRam0000000003ca34f9 = '\x01';
    }
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined1 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x14) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x146aa74 | Atlas.Rendering.AtlasShaders.Warmup
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146abb8 | Atlas.Rendering.AtlasShaders.WarmupForGameModes
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146b024 | Atlas.Rendering.AtlasShaders.FindShader
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146b344 | Atlas.Rendering.AtlasShaders.FindToonShader
// ============================================================

/* WARNING: Possible PIC construction at 0x0146b894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146bb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146bcec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146bd94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146bf8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146c22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146c568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146c7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146ca20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146cb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146cd28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146cdd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146cf38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146d084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146d1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146d2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146d358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146d484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146d5b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146d488) */
/* WARNING: Removing unreachable block (ram,0x0146d35c) */
/* WARNING: Removing unreachable block (ram,0x0146d2ec) */
/* WARNING: Removing unreachable block (ram,0x0146d1b4) */
/* WARNING: Removing unreachable block (ram,0x0146d088) */
/* WARNING: Removing unreachable block (ram,0x0146cf3c) */
/* WARNING: Removing unreachable block (ram,0x0146cdd4) */
/* WARNING: Removing unreachable block (ram,0x0146ce3c) */
/* WARNING: Removing unreachable block (ram,0x0146ce48) */
/* WARNING: Removing unreachable block (ram,0x0146ce58) */
/* WARNING: Removing unreachable block (ram,0x0146ce60) */
/* WARNING: Removing unreachable block (ram,0x0146ceb8) */
/* WARNING: Removing unreachable block (ram,0x0146cec4) */
/* WARNING: Removing unreachable block (ram,0x0146ced4) */
/* WARNING: Removing unreachable block (ram,0x0146cedc) */
/* WARNING: Removing unreachable block (ram,0x0146cd2c) */
/* WARNING: Removing unreachable block (ram,0x0146cd48) */
/* WARNING: Removing unreachable block (ram,0x0146cd5c) */
/* WARNING: Removing unreachable block (ram,0x0146cd6c) */
/* WARNING: Removing unreachable block (ram,0x0146cd74) */
/* WARNING: Removing unreachable block (ram,0x0146cb7c) */
/* WARNING: Removing unreachable block (ram,0x0146ca24) */
/* WARNING: Removing unreachable block (ram,0x0146c800) */
/* WARNING: Removing unreachable block (ram,0x0146c81c) */
/* WARNING: Removing unreachable block (ram,0x0146c828) */
/* WARNING: Removing unreachable block (ram,0x0146c838) */
/* WARNING: Removing unreachable block (ram,0x0146c840) */
/* WARNING: Removing unreachable block (ram,0x0146c898) */
/* WARNING: Removing unreachable block (ram,0x0146c8a4) */
/* WARNING: Removing unreachable block (ram,0x0146c8b4) */
/* WARNING: Removing unreachable block (ram,0x0146c8bc) */
/* WARNING: Removing unreachable block (ram,0x0146c8cc) */
/* WARNING: Removing unreachable block (ram,0x0146c8dc) */
/* WARNING: Removing unreachable block (ram,0x0146c8e0) */
/* WARNING: Removing unreachable block (ram,0x0146c8e8) */
/* WARNING: Removing unreachable block (ram,0x0146c940) */
/* WARNING: Removing unreachable block (ram,0x0146c94c) */
/* WARNING: Removing unreachable block (ram,0x0146c95c) */
/* WARNING: Removing unreachable block (ram,0x0146c964) */
/* WARNING: Removing unreachable block (ram,0x0146c974) */
/* WARNING: Removing unreachable block (ram,0x0146c984) */
/* WARNING: Removing unreachable block (ram,0x0146c988) */
/* WARNING: Removing unreachable block (ram,0x0146c990) */
/* WARNING: Removing unreachable block (ram,0x0146c9a8) */
/* WARNING: Removing unreachable block (ram,0x0146c9b8) */
/* WARNING: Removing unreachable block (ram,0x0146c9bc) */
/* WARNING: Removing unreachable block (ram,0x0146c9c4) */
/* WARNING: Removing unreachable block (ram,0x0146c56c) */
/* WARNING: Removing unreachable block (ram,0x0146c230) */
/* WARNING: Removing unreachable block (ram,0x0146c298) */
/* WARNING: Removing unreachable block (ram,0x0146c2a4) */
/* WARNING: Removing unreachable block (ram,0x0146c2b4) */
/* WARNING: Removing unreachable block (ram,0x0146c2bc) */
/* WARNING: Removing unreachable block (ram,0x0146c314) */
/* WARNING: Removing unreachable block (ram,0x0146c320) */
/* WARNING: Removing unreachable block (ram,0x0146c330) */
/* WARNING: Removing unreachable block (ram,0x0146c338) */
/* WARNING: Removing unreachable block (ram,0x0146c350) */
/* WARNING: Removing unreachable block (ram,0x0146c360) */
/* WARNING: Removing unreachable block (ram,0x0146c364) */
/* WARNING: Removing unreachable block (ram,0x0146c36c) */
/* WARNING: Removing unreachable block (ram,0x0146c3c4) */
/* WARNING: Removing unreachable block (ram,0x0146c3d0) */
/* WARNING: Removing unreachable block (ram,0x0146c3e0) */
/* WARNING: Removing unreachable block (ram,0x0146c3e8) */
/* WARNING: Removing unreachable block (ram,0x0146c440) */
/* WARNING: Removing unreachable block (ram,0x0146c44c) */
/* WARNING: Removing unreachable block (ram,0x0146c45c) */
/* WARNING: Removing unreachable block (ram,0x0146c464) */
/* WARNING: Removing unreachable block (ram,0x0146c4bc) */
/* WARNING: Removing unreachable block (ram,0x0146c4c8) */
/* WARNING: Removing unreachable block (ram,0x0146c4d8) */
/* WARNING: Removing unreachable block (ram,0x0146c4e0) */
/* WARNING: Removing unreachable block (ram,0x0146c4f0) */
/* WARNING: Removing unreachable block (ram,0x0146c500) */
/* WARNING: Removing unreachable block (ram,0x0146c504) */
/* WARNING: Removing unreachable block (ram,0x0146c50c) */
/* WARNING: Removing unreachable block (ram,0x0146bf90) */
/* WARNING: Removing unreachable block (ram,0x0146bd98) */
/* WARNING: Removing unreachable block (ram,0x0146bdb4) */
/* WARNING: Removing unreachable block (ram,0x0146bdc0) */
/* WARNING: Removing unreachable block (ram,0x0146bdd0) */
/* WARNING: Removing unreachable block (ram,0x0146bdd8) */
/* WARNING: Removing unreachable block (ram,0x0146be30) */
/* WARNING: Removing unreachable block (ram,0x0146be3c) */
/* WARNING: Removing unreachable block (ram,0x0146be4c) */
/* WARNING: Removing unreachable block (ram,0x0146be54) */
/* WARNING: Removing unreachable block (ram,0x0146be64) */
/* WARNING: Removing unreachable block (ram,0x0146be74) */
/* WARNING: Removing unreachable block (ram,0x0146be78) */
/* WARNING: Removing unreachable block (ram,0x0146be80) */
/* WARNING: Removing unreachable block (ram,0x0146bed8) */
/* WARNING: Removing unreachable block (ram,0x0146bee4) */
/* WARNING: Removing unreachable block (ram,0x0146bef4) */
/* WARNING: Removing unreachable block (ram,0x0146befc) */
/* WARNING: Removing unreachable block (ram,0x0146bf14) */
/* WARNING: Removing unreachable block (ram,0x0146bf24) */
/* WARNING: Removing unreachable block (ram,0x0146bf28) */
/* WARNING: Removing unreachable block (ram,0x0146bf30) */
/* WARNING: Removing unreachable block (ram,0x0146bcf0) */
/* WARNING: Removing unreachable block (ram,0x0146bd0c) */
/* WARNING: Removing unreachable block (ram,0x0146bd20) */
/* WARNING: Removing unreachable block (ram,0x0146bd30) */
/* WARNING: Removing unreachable block (ram,0x0146bd38) */
/* WARNING: Removing unreachable block (ram,0x0146bb18) */
/* WARNING: Removing unreachable block (ram,0x0146b898) */
/* WARNING: Removing unreachable block (ram,0x0146b900) */
/* WARNING: Removing unreachable block (ram,0x0146b914) */
/* WARNING: Removing unreachable block (ram,0x0146b924) */
/* WARNING: Removing unreachable block (ram,0x0146b92c) */
/* WARNING: Removing unreachable block (ram,0x0146b984) */
/* WARNING: Removing unreachable block (ram,0x0146b990) */
/* WARNING: Removing unreachable block (ram,0x0146b9a0) */
/* WARNING: Removing unreachable block (ram,0x0146b9a8) */
/* WARNING: Removing unreachable block (ram,0x0146b9c0) */
/* WARNING: Removing unreachable block (ram,0x0146b9d0) */
/* WARNING: Removing unreachable block (ram,0x0146b9d4) */
/* WARNING: Removing unreachable block (ram,0x0146b9dc) */
/* WARNING: Removing unreachable block (ram,0x0146ba34) */
/* WARNING: Removing unreachable block (ram,0x0146ba40) */
/* WARNING: Removing unreachable block (ram,0x0146ba50) */
/* WARNING: Removing unreachable block (ram,0x0146ba58) */
/* WARNING: Removing unreachable block (ram,0x0146ba68) */
/* WARNING: Removing unreachable block (ram,0x0146ba78) */
/* WARNING: Removing unreachable block (ram,0x0146ba7c) */
/* WARNING: Removing unreachable block (ram,0x0146ba84) */
/* WARNING: Removing unreachable block (ram,0x0146ba9c) */
/* WARNING: Removing unreachable block (ram,0x0146baac) */
/* WARNING: Removing unreachable block (ram,0x0146bab0) */
/* WARNING: Removing unreachable block (ram,0x0146bb34) */
/* WARNING: Removing unreachable block (ram,0x0146bab8) */
/* WARNING: Removing unreachable block (ram,0x0146d5b4) */

long * Atlas_Rendering_AtlasShaders__FindToonShader
                 (long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int extraout_w1;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long *extraout_x1_07;
  long *extraout_x1_08;
  long *extraout_x1_09;
  long *extraout_x1_10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 unaff_x24;
  undefined8 uVar16;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *puVar17;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar18;
  undefined *puVar19;
  int aiStack_50 [4];
  
  puVar18 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb484c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d148);
    func_0x00f78a20(0x3d1d348);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb484c = 1;
  }
  aiStack_50[2] = 0;
  plVar14 = *(long **)(param_1 + 0x30);
  if (plVar14 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar11 = *plVar14;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar13 != 0) {
      piVar2 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == /*System.Collections.Generic.IEnumerable<Shader>_TypeInfo*/ lRam0000000003d1d148) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_0146b408;
        }
        piVar2 = piVar2 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar14);
LAB_0146b408:
    plVar14 = (long *)(*(code *)*puVar4)(plVar14,puVar4[1]);
    if (plVar14 != (long *)0x0) {
      do {
        lVar11 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar13 != 0) {
          piVar2 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar2 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar2 * 0x10 + 0x138);
              goto code_r0x0146b478;
            }
            piVar2 = piVar2 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        param_3 = 0;
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar14);
code_r0x0146b478:
        uVar13 = (*(code *)*puVar4)(plVar14,puVar4[1]);
        if ((uVar13 & 1) == 0) {
          plVar5 = (long *)0x0;
          aiStack_50[0] = 0x3b;
          goto code_r0x0146b52c;
        }
        lVar11 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar13 != 0) {
          piVar2 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar2 + -2) == /*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar2 * 0x10 + 0x138);
              goto code_r0x0146b4d4;
            }
            piVar2 = piVar2 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar14,/*System.Collections.Generic.IEnumerator<Shader>_TypeInfo*/ lRam0000000003d1d348,0);
code_r0x0146b4d4:
        plVar5 = (long *)(*(code *)*puVar4)(plVar14,puVar4[1]);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x0146b5ec;
        }
        uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(plVar5,0);
        param_3 = 0;
        uVar13 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar6,param_2);
      } while ((uVar13 & 1) == 0);
      aiStack_50[0] = 0x3d;
code_r0x0146b52c:
      uVar6 = 0;
      lVar11 = 0;
      lVar15 = 0;
      aiStack_50[2] = 1;
      do {
        if (plVar14 != (long *)0x0) {
          lVar12 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar2 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar2 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar12 + (long)*piVar2 * 0x10 + 0x138);
                goto code_r0x0146b590;
              }
              piVar2 = piVar2 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          param_3 = 0;
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar14);
code_r0x0146b590:
          (*(code *)*puVar4)(plVar14,puVar4[1]);
        }
        if (lVar15 == 0) {
          if ((int)uVar6 == 0) {
            if (aiStack_50[lVar11] != 0x3d) {
              plVar5 = (long *)0x0;
            }
          }
          else {
            plVar5 = (long *)0x0;
          }
          return plVar5;
        }
        func_0x00f78ac0(lVar15,0);
        if (extraout_w1 != 1) goto code_r0x0146b638;
        plVar5 = (long *)___cxa_begin_catch();
        lVar15 = *plVar5;
        ___cxa_end_catch();
        plVar5 = (long *)0x0;
        lVar11 = -1;
        uVar6 = 1;
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x0146b5ec:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x146b5f0);
  (*pcVar1)();
code_r0x0146b638:
  puVar19 = &Atlas_Rendering_AtlasShaders__Warmup;
  __Unwind_Resume();
  piVar2 = aiStack_50;
  plVar8 = extraout_x1;
code_r0x0146b63c:
  while( true ) {
    while( true ) {
      *(undefined1 **)((long)piVar2 + -0x50) = unaff_x26;
      *(undefined1 **)((long)piVar2 + -0x48) = unaff_x25;
      *(undefined8 *)((long)piVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)piVar2 + -0x38) = uVar6;
      *(long *)((long)piVar2 + -0x30) = lVar11;
      *(long **)((long)piVar2 + -0x28) = plVar5;
      *(long *)((long)piVar2 + -0x20) = lVar15;
      *(long **)((long)piVar2 + -0x18) = plVar14;
      *(undefined1 **)((long)piVar2 + -0x10) = puVar18;
      *(undefined **)((long)piVar2 + -8) = puVar19;
      if ((bRam0000000003eb484d & 1) == 0) {
        func_0x00f78a20(0x3d22910);
        func_0x00f78a20(0x3d76348);
        bRam0000000003eb484d = 1;
      }
      lVar11 = 0x3eb4000;
      if (param_3 != 0) {
        unaff_x24 = 0x3d22910;
        uVar3 = /*UnityEngine.ShaderVariantCollection$$get_variantCount*/ func_0x03264df8(param_3,0);
        *(undefined4 *)((long)piVar2 + -0x54) = uVar3;
        lVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(undefined1 *)((long)piVar2 + -0x54));
        if ((plVar8 != (long *)0x0) &&
           (uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(plVar8,0), lVar11 = lVar15, param_4 != 0)) {
          *(int *)((long)piVar2 + -0x58) = (int)*(undefined8 *)(param_4 + 0x18);
          uVar6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(undefined1 *)((long)piVar2 + -0x58));
          /*System.String$$Format*/ func_0x029bdf30(/*STR('Warming up {0} variants of {1} with {2} vertex attribute descriptors...')*/ uRam0000000003d76348,lVar15,uVar7,uVar6,0);
          plVar14 = (long *)/*UnityEngine.Experimental.Rendering.ShaderWarmup$$WarmupShaderFromCollection*/ func_0x0326501c(param_3,plVar8,param_4,0);
          return plVar14;
        }
      }
      func_0x00f78af4();
      *(undefined1 **)((long)piVar2 + -0xb0) = unaff_x26;
      *(undefined1 **)((long)piVar2 + -0xa8) = unaff_x25;
      *(undefined8 *)((long)piVar2 + -0xa0) = unaff_x24;
      *(undefined8 *)((long)piVar2 + -0x98) = uVar6;
      *(long *)((long)piVar2 + -0x90) = lVar11;
      *(long *)((long)piVar2 + -0x88) = param_3;
      *(long **)((long)piVar2 + -0x80) = plVar8;
      *(long *)((long)piVar2 + -0x78) = param_4;
      *(undefined1 **)((long)piVar2 + -0x70) = (undefined1 *)((long)piVar2 + -0x10);
      *(undefined **)((long)piVar2 + -0x68) =
           &Atlas_Rendering_AtlasShaders__WarmupCommonToonEnvironmentShader;
      puVar18 = (undefined1 *)((long)piVar2 + -0x70);
      if ((bRam0000000003eb484f & 1) == 0) {
        func_0x00f78a20(0x3d1fec0);
        func_0x00f78a20(0x3d249e0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d762f8);
        func_0x00f78a20(0x3d76310);
        func_0x00f78a20(0x3d77260);
        func_0x00f78a20(0x3d6f170);
        func_0x00f78a20(0x3d688c0);
        func_0x00f78a20(0x3d76308);
        bRam0000000003eb484f = 1;
      }
      param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
      /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
      if (param_3 == 0) break;
      plVar5 = (long *)((long)piVar2 + -0xf8);
      uVar6 = 0x3d1f498;
      lVar11 = 0x3d1fec0;
      /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
      uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
      *(undefined8 *)((long)piVar2 + -200) = 0;
      *(undefined8 *)((long)piVar2 + -0xc0) = 0;
      *(undefined8 *)((long)piVar2 + -0xb8) = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -200),extraout_x1_00,8,uVar7,0);
      *(undefined8 *)((long)piVar2 + -0xd8) = *(undefined8 *)((long)piVar2 + -0xc0);
      *(undefined8 *)((long)piVar2 + -0xe0) = *(undefined8 *)((long)piVar2 + -200);
      *(undefined8 *)((long)piVar2 + -0xd0) = *(undefined8 *)((long)piVar2 + -0xb8);
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0xe0),0);
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
      puVar19 = &UNK_0146b898;
      piVar2 = (int *)((long)piVar2 + -0x1a0);
      plVar8 = extraout_x1_00;
      plVar14 = extraout_x1_00;
      lVar15 = param_3;
    }
    func_0x00f78af4();
    uVar7 = func_0x00f78b14();
    func_0x00f78ac0(uVar7,0);
    *(undefined8 *)((long)piVar2 + -0x200) = unaff_x28;
    *(undefined8 **)((long)piVar2 + -0x1f8) = unaff_x27;
    *(undefined1 **)((long)piVar2 + -0x1f0) = unaff_x26;
    *(undefined1 **)((long)piVar2 + -0x1e8) = unaff_x25;
    *(undefined8 *)((long)piVar2 + -0x1e0) = unaff_x24;
    *(undefined8 *)((long)piVar2 + -0x1d8) = uVar6;
    *(long *)((long)piVar2 + -0x1d0) = lVar11;
    *(undefined8 *)((long)piVar2 + -0x1c8) = 0x3d249e0;
    *(undefined8 *)((long)piVar2 + -0x1c0) = 0;
    *(long **)((long)piVar2 + -0x1b8) = extraout_x1_00;
    *(undefined1 **)((long)piVar2 + -0x1b0) = puVar18;
    *(undefined **)((long)piVar2 + -0x1a8) =
         &Atlas_Rendering_AtlasShaders__WarmupGameModeToonEnvironmentShader;
    puVar18 = (undefined1 *)((long)piVar2 + -0x1b0);
    plVar14 = (long *)0x3d249e0;
    if ((bRam0000000003eb4850 & 1) == 0) {
      func_0x00f78a20(0x3d1fec0);
      func_0x00f78a20(0x3d249e0);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d762f8);
      func_0x00f78a20(0x3d762f0);
      func_0x00f78a20(0x3d762e8);
      func_0x00f78a20(0x3d77260);
      func_0x00f78a20(0x3d6f170);
      func_0x00f78a20(0x3d76300);
      func_0x00f78a20(0x3d688c0);
      bRam0000000003eb4850 = 1;
    }
    param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
    /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
    if (param_3 == 0) break;
    unaff_x24 = 0x3d1f498;
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
    plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar5 == (long *)0x0) break;
    uVar6 = 0x3d688c0;
    plVar14 = plVar5;
    if ((/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0 != 0) &&
       (lVar15 = func_0x00f78adc(/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0,*(undefined8 *)(*plVar5 + 0x40)), lVar15 == 0)
       ) goto code_r0x0146bfbc;
    if ((int)plVar5[3] == 0) {
      uVar7 = func_0x00f78b24();
      goto code_r0x0146bfc0;
    }
    lVar11 = 0x3d1fec0;
    unaff_x26 = (undefined1 *)((long)piVar2 + -0x248);
    plVar5[4] = /*STR('ALPHA_CLIP')*/ lRam0000000003d688c0;
    *(undefined8 *)((long)piVar2 + -0x218) = 0;
    *(undefined8 *)((long)piVar2 + -0x210) = 0;
    *(undefined8 *)((long)piVar2 + -0x208) = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x218),extraout_x1_01,8,plVar5,0);
    *(undefined8 *)((long)piVar2 + -0x228) = *(undefined8 *)((long)piVar2 + -0x210);
    *(undefined8 *)((long)piVar2 + -0x230) = *(undefined8 *)((long)piVar2 + -0x218);
    *(undefined8 *)((long)piVar2 + -0x220) = *(undefined8 *)((long)piVar2 + -0x208);
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x230),0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70);
    puVar19 = &UNK_0146bcf0;
    piVar2 = (int *)((long)piVar2 + -0x2f0);
    plVar8 = extraout_x1_01;
    plVar14 = extraout_x1_01;
    lVar15 = param_3;
  }
  func_0x00f78af4();
code_r0x0146bfbc:
  uVar7 = func_0x00f78b14();
code_r0x0146bfc0:
  func_0x00f78ac0(uVar7,0);
  *(undefined8 *)((long)piVar2 + -0x350) = unaff_x28;
  *(undefined8 **)((long)piVar2 + -0x348) = unaff_x27;
  *(undefined1 **)((long)piVar2 + -0x340) = unaff_x26;
  *(undefined1 **)((long)piVar2 + -0x338) = unaff_x25;
  *(undefined8 *)((long)piVar2 + -0x330) = unaff_x24;
  *(undefined8 *)((long)piVar2 + -0x328) = uVar6;
  *(long *)((long)piVar2 + -800) = lVar11;
  *(long **)((long)piVar2 + -0x318) = plVar14;
  *(long *)((long)piVar2 + -0x310) = param_3;
  *(long **)((long)piVar2 + -0x308) = extraout_x1_01;
  *(undefined1 **)((long)piVar2 + -0x300) = puVar18;
  *(undefined **)((long)piVar2 + -0x2f8) =
       &Atlas_Rendering_AtlasShaders__WarmupCommonToonDynamicShader;
  puVar18 = (undefined1 *)((long)piVar2 + -0x300);
  if ((bRam0000000003eb4851 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d69538);
    func_0x00f78a20(0x3d77260);
    func_0x00f78a20(0x3d69548);
    func_0x00f78a20(0x3d762d8);
    func_0x00f78a20(0x3d762e0);
    func_0x00f78a20(0x3d762d0);
    bRam0000000003eb4851 = 1;
  }
  param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
  plVar14 = (long *)0x3d249e0;
  if (param_3 == 0) {
code_r0x0146c594:
    plVar5 = plVar14;
    func_0x00f78af4();
code_r0x0146c598:
    uVar7 = func_0x00f78b14();
    lVar15 = lVar11;
  }
  else {
    unaff_x25 = (undefined1 *)((long)piVar2 + -0x458);
    lVar11 = 0x3d1f498;
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
    uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    *(undefined8 *)((long)piVar2 + -0x368) = 0;
    *(undefined8 *)((long)piVar2 + -0x360) = 0;
    *(undefined8 *)((long)piVar2 + -0x358) = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x368),extraout_x1_02,8,uVar7,0);
    *(undefined8 *)((long)piVar2 + -0x378) = *(undefined8 *)((long)piVar2 + -0x360);
    *(undefined8 *)((long)piVar2 + -0x380) = *(undefined8 *)((long)piVar2 + -0x368);
    *(undefined8 *)((long)piVar2 + -0x370) = *(undefined8 *)((long)piVar2 + -0x358);
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x380),0);
    plVar8 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar8 == (long *)0x0) goto code_r0x0146c594;
    unaff_x26 = (undefined1 *)0x3d69538;
    plVar5 = plVar8;
    if ((/*STR('BENDABLE')*/ lRam0000000003d69538 != 0) &&
       (lVar15 = func_0x00f78adc(/*STR('BENDABLE')*/ lRam0000000003d69538,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)
       ) goto code_r0x0146c598;
    if ((int)plVar8[3] != 0) {
      plVar8[4] = /*STR('BENDABLE')*/ lRam0000000003d69538;
      *(undefined8 *)((long)piVar2 + -0x398) = 0;
      *(undefined8 *)((long)piVar2 + -0x390) = 0;
      *(undefined8 *)((long)piVar2 + -0x388) = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x398),extraout_x1_02,8,plVar8,0);
      *(undefined8 *)((long)piVar2 + -0x3a8) = *(undefined8 *)((long)piVar2 + -0x390);
      *(undefined8 *)((long)piVar2 + -0x3b0) = *(undefined8 *)((long)piVar2 + -0x398);
      *(undefined8 *)((long)piVar2 + -0x3a0) = *(undefined8 *)((long)piVar2 + -0x388);
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x3b0),0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      plVar14 = plVar8;
      if (plVar5 == (long *)0x0) goto code_r0x0146c594;
      unaff_x24 = 0x3d69548;
      if ((/*STR('BLACKHOLE')*/ lRam0000000003d69548 != 0) &&
         (lVar15 = func_0x00f78adc(/*STR('BLACKHOLE')*/ lRam0000000003d69548,*(undefined8 *)(*plVar5 + 0x40)),
         lVar15 == 0)) goto code_r0x0146c598;
      if ((int)plVar5[3] != 0) {
        uVar6 = 0x3d1fec0;
        plVar5[4] = /*STR('BLACKHOLE')*/ lRam0000000003d69548;
        *(undefined8 *)((long)piVar2 + -0x3c8) = 0;
        *(undefined8 *)((long)piVar2 + -0x3c0) = 0;
        *(undefined8 *)((long)piVar2 + -0x3b8) = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x3c8),extraout_x1_02,8,plVar5,0);
        *(undefined8 *)((long)piVar2 + -0x3d8) = *(undefined8 *)((long)piVar2 + -0x3c0);
        *(undefined8 *)((long)piVar2 + -0x3e0) = *(undefined8 *)((long)piVar2 + -0x3c8);
        *(undefined8 *)((long)piVar2 + -0x3d0) = *(undefined8 *)((long)piVar2 + -0x3b8);
        /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x3e0),0);
        if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
        puVar19 = &UNK_0146c230;
        piVar2 = (int *)((long)piVar2 + -0x500);
        plVar8 = extraout_x1_02;
        plVar14 = extraout_x1_02;
        lVar15 = param_3;
        goto code_r0x0146b63c;
      }
    }
    uVar7 = func_0x00f78b24();
    lVar15 = lVar11;
  }
  func_0x00f78ac0(uVar7,0);
  *(undefined8 *)((long)piVar2 + -0x560) = unaff_x28;
  *(undefined8 **)((long)piVar2 + -0x558) = unaff_x27;
  *(undefined1 **)((long)piVar2 + -0x550) = unaff_x26;
  *(undefined1 **)((long)piVar2 + -0x548) = unaff_x25;
  *(undefined8 *)((long)piVar2 + -0x540) = unaff_x24;
  *(undefined8 *)((long)piVar2 + -0x538) = uVar6;
  *(long *)((long)piVar2 + -0x530) = lVar15;
  *(long **)((long)piVar2 + -0x528) = plVar5;
  *(long *)((long)piVar2 + -0x520) = param_3;
  *(long **)((long)piVar2 + -0x518) = extraout_x1_02;
  *(undefined1 **)((long)piVar2 + -0x510) = puVar18;
  *(undefined **)((long)piVar2 + -0x508) =
       &Atlas_Rendering_AtlasShaders__WarmupGameModeToonDynamicShader;
  puVar18 = (undefined1 *)((long)piVar2 + -0x510);
  if ((bRam0000000003eb4852 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762c8);
    func_0x00f78a20(0x3d69538);
    func_0x00f78a20(0x3d77260);
    func_0x00f78a20(0x3d69548);
    func_0x00f78a20(0x3d762d8);
    func_0x00f78a20(0x3d762d0);
    func_0x00f78a20(0x3d688c0);
    bRam0000000003eb4852 = 1;
  }
  param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
  plVar14 = (long *)0x3d249e0;
  puVar17 = unaff_x26;
  if (param_3 == 0) {
code_r0x0146ca4c:
    plVar5 = plVar14;
    func_0x00f78af4();
    lVar12 = lVar15;
code_r0x0146ca50:
    uVar7 = func_0x00f78b14();
    unaff_x26 = puVar17;
  }
  else {
    lVar15 = 0x3d1f498;
    lVar11 = 0x3d1f498;
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
    plVar8 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar8 == (long *)0x0) goto code_r0x0146ca4c;
    unaff_x26 = (undefined1 *)0x3d688c0;
    plVar5 = plVar8;
    lVar12 = lVar15;
    puVar17 = unaff_x26;
    if ((/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0 != 0) &&
       (lVar9 = func_0x00f78adc(/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto code_r0x0146ca50;
    if ((int)plVar8[3] != 0) {
      unaff_x27 = (undefined8 *)((long)piVar2 + -0x5a8);
      plVar8[4] = /*STR('ALPHA_CLIP')*/ lRam0000000003d688c0;
      *(undefined8 *)((long)piVar2 + -0x578) = 0;
      *(undefined8 *)((long)piVar2 + -0x570) = 0;
      *(undefined8 *)((long)piVar2 + -0x568) = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x578),extraout_x1_03,8,plVar8,0);
      *(undefined8 *)((long)piVar2 + -0x588) = *(undefined8 *)((long)piVar2 + -0x570);
      *(undefined8 *)((long)piVar2 + -0x590) = *(undefined8 *)((long)piVar2 + -0x578);
      *(undefined8 *)((long)piVar2 + -0x580) = *(undefined8 *)((long)piVar2 + -0x568);
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x590),0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,2);
      plVar14 = plVar8;
      if (plVar5 == (long *)0x0) goto code_r0x0146ca4c;
      unaff_x25 = (undefined1 *)0x3d69538;
      if ((/*STR('BENDABLE')*/ lRam0000000003d69538 != 0) &&
         (lVar9 = func_0x00f78adc(/*STR('BENDABLE')*/ lRam0000000003d69538,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)
         ) goto code_r0x0146ca50;
      uVar13 = plVar5[3];
      if ((int)uVar13 != 0) {
        unaff_x24 = 0x3d69548;
        plVar5[4] = /*STR('BENDABLE')*/ lRam0000000003d69538;
        if (/*STR('BLACKHOLE')*/ lRam0000000003d69548 != 0) {
          lVar9 = func_0x00f78adc(/*STR('BLACKHOLE')*/ lRam0000000003d69548,*(undefined8 *)(*plVar5 + 0x40));
          lVar12 = lVar11;
          puVar17 = (undefined1 *)0x3d688c0;
          if (lVar9 == 0) goto code_r0x0146ca50;
          uVar13 = plVar5[3];
        }
        if ((uVar13 & 0xfffffffe) != 0) {
          uVar6 = 0x3d1fec0;
          plVar5[5] = /*STR('BLACKHOLE')*/ lRam0000000003d69548;
          *(undefined8 *)((long)piVar2 + -0x5a8) = 0;
          *(undefined8 *)((long)piVar2 + -0x5a0) = 0;
          *(undefined8 *)((long)piVar2 + -0x598) = 0;
          /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x5a8),extraout_x1_03,8,plVar5,0);
          *(undefined8 *)((long)piVar2 + -0x5b8) = *(undefined8 *)((long)piVar2 + -0x5a0);
          *(undefined8 *)((long)piVar2 + -0x5c0) = *unaff_x27;
          *(undefined8 *)((long)piVar2 + -0x5b0) = *(undefined8 *)((long)piVar2 + -0x598);
          /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x5c0),0);
          if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
          puVar19 = &UNK_0146c800;
          piVar2 = (int *)((long)piVar2 + -0x650);
          plVar8 = extraout_x1_03;
          plVar14 = extraout_x1_03;
          lVar15 = param_3;
          goto code_r0x0146b63c;
        }
      }
    }
    uVar7 = func_0x00f78b24();
    lVar12 = lVar15;
  }
  func_0x00f78ac0(uVar7,0);
  *(long *)((long)piVar2 + -0x680) = lVar12;
  *(long **)((long)piVar2 + -0x678) = plVar5;
  *(long *)((long)piVar2 + -0x670) = param_3;
  *(long **)((long)piVar2 + -0x668) = extraout_x1_03;
  *(undefined1 **)((long)piVar2 + -0x660) = puVar18;
  *(undefined **)((long)piVar2 + -0x658) =
       &Atlas_Rendering_AtlasShaders__WarmupCommonToonUnlitShader;
  puVar18 = (undefined1 *)((long)piVar2 + -0x660);
  if ((bRam0000000003eb4853 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76330);
    func_0x00f78a20(0x3d76340);
    bRam0000000003eb4853 = 1;
  }
  param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
  if (param_3 == 0) {
    func_0x00f78af4();
    *(undefined8 *)((long)piVar2 + -0x710) = unaff_x28;
    *(undefined8 **)((long)piVar2 + -0x708) = unaff_x27;
    *(undefined1 **)((long)piVar2 + -0x700) = unaff_x26;
    *(undefined1 **)((long)piVar2 + -0x6f8) = unaff_x25;
    *(undefined8 *)((long)piVar2 + -0x6f0) = unaff_x24;
    *(undefined8 *)((long)piVar2 + -0x6e8) = uVar6;
    *(long *)((long)piVar2 + -0x6e0) = lVar12;
    *(undefined8 *)((long)piVar2 + -0x6d8) = 0x3d249e0;
    *(undefined8 *)((long)piVar2 + -0x6d0) = 0;
    *(long **)((long)piVar2 + -0x6c8) = extraout_x1_04;
    *(undefined1 **)((long)piVar2 + -0x6c0) = puVar18;
    *(undefined **)((long)piVar2 + -0x6b8) =
         &Atlas_Rendering_AtlasShaders__WarmupGameModeToonUnlitShader;
    puVar18 = (undefined1 *)((long)piVar2 + -0x6c0);
    plVar14 = (long *)0x3d249e0;
    if ((bRam0000000003eb4854 & 1) == 0) {
      func_0x00f78a20(0x3d1fec0);
      func_0x00f78a20(0x3d249e0);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d76258);
      func_0x00f78a20(0x3d76330);
      func_0x00f78a20(0x3d76320);
      func_0x00f78a20(0x3d76c28);
      func_0x00f78a20(0x3d76328);
      func_0x00f78a20(0x3d76338);
      bRam0000000003eb4854 = 1;
    }
    param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
    /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
    uVar7 = uVar6;
    if (param_3 == 0) {
code_r0x0146cf5c:
      func_0x00f78af4();
      uVar16 = unaff_x24;
code_r0x0146cf60:
      uVar10 = func_0x00f78b24();
      plVar5 = plVar14;
      uVar6 = uVar7;
      unaff_x24 = uVar16;
    }
    else {
      uVar7 = 0x3d1f498;
      uVar6 = 0x3d1f498;
      /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      if (plVar5 == (long *)0x0) goto code_r0x0146cf5c;
      unaff_x24 = 0x3d76258;
      if ((/*STR('WAVING')*/ lRam0000000003d76258 == 0) ||
         (lVar11 = func_0x00f78adc(/*STR('WAVING')*/ lRam0000000003d76258,*(undefined8 *)(*plVar5 + 0x40)),
         lVar11 != 0)) {
        plVar14 = plVar5;
        uVar16 = 0x3d76258;
        if ((int)plVar5[3] == 0) goto code_r0x0146cf60;
        lVar11 = 0x3d1fec0;
        unaff_x26 = (undefined1 *)((long)piVar2 + -0x758);
        plVar5[4] = /*STR('WAVING')*/ lRam0000000003d76258;
        *(undefined8 *)((long)piVar2 + -0x728) = 0;
        *(undefined8 *)((long)piVar2 + -0x720) = 0;
        *(undefined8 *)((long)piVar2 + -0x718) = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x728),extraout_x1_05,8,plVar5,0);
        *(undefined8 *)((long)piVar2 + -0x738) = *(undefined8 *)((long)piVar2 + -0x720);
        *(undefined8 *)((long)piVar2 + -0x740) = *(undefined8 *)((long)piVar2 + -0x728);
        *(undefined8 *)((long)piVar2 + -0x730) = *(undefined8 *)((long)piVar2 + -0x718);
        /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x740),0);
        if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
        puVar19 = &UNK_0146cd2c;
        piVar2 = (int *)((long)piVar2 + -0x800);
        plVar8 = extraout_x1_05;
        plVar14 = extraout_x1_05;
        lVar15 = param_3;
        goto code_r0x0146b63c;
      }
      uVar10 = func_0x00f78b14();
      uVar6 = uVar7;
      unaff_x24 = 0x3d76258;
    }
    func_0x00f78ac0(uVar10,0);
    *(long *)((long)piVar2 + -0x830) = lVar12;
    *(long **)((long)piVar2 + -0x828) = plVar5;
    *(long *)((long)piVar2 + -0x820) = param_3;
    *(long **)((long)piVar2 + -0x818) = extraout_x1_05;
    *(undefined1 **)((long)piVar2 + -0x810) = puVar18;
    *(undefined **)((long)piVar2 + -0x808) = &Atlas_Rendering_AtlasShaders__WarmupToonSkyboxShader;
    puVar18 = (undefined1 *)((long)piVar2 + -0x810);
    if ((bRam0000000003eb4855 & 1) == 0) {
      func_0x00f78a20(0x3d1fec0);
      func_0x00f78a20(0x3d249e0);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d76318);
      bRam0000000003eb4855 = 1;
    }
    param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
    /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
    if (param_3 == 0) {
      func_0x00f78af4();
      *(long *)((long)piVar2 + -0x890) = lVar12;
      *(undefined8 *)((long)piVar2 + -0x888) = 0x3d249e0;
      *(undefined8 *)((long)piVar2 + -0x880) = 0;
      *(long **)((long)piVar2 + -0x878) = extraout_x1_06;
      *(undefined1 **)((long)piVar2 + -0x870) = puVar18;
      *(undefined **)((long)piVar2 + -0x868) =
           &Atlas_Rendering_AtlasShaders__WarmupProjectionShadowShader;
      puVar18 = (undefined1 *)((long)piVar2 + -0x870);
      if ((bRam0000000003eb4856 & 1) == 0) {
        func_0x00f78a20(0x3d1fec0);
        func_0x00f78a20(0x3d249e0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d762a0);
        bRam0000000003eb4856 = 1;
      }
      param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
      /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
      if (param_3 == 0) {
        func_0x00f78af4();
        *(long *)((long)piVar2 + -0x8f0) = lVar12;
        *(undefined8 *)((long)piVar2 + -0x8e8) = 0x3d249e0;
        *(undefined8 *)((long)piVar2 + -0x8e0) = 0;
        *(long **)((long)piVar2 + -0x8d8) = extraout_x1_07;
        *(undefined1 **)((long)piVar2 + -0x8d0) = puVar18;
        *(undefined **)((long)piVar2 + -0x8c8) =
             &Atlas_Rendering_AtlasShaders__WarmupShaderGraphShader;
        puVar18 = (undefined1 *)((long)piVar2 + -0x8d0);
        if ((bRam0000000003eb4857 & 1) == 0) {
          func_0x00f78a20(0x3d1fec0);
          func_0x00f78a20(0x3d249e0);
          func_0x00f78a20(0x3d1f498);
          func_0x00f78a20(0x3d762b0);
          func_0x00f78a20(0x3d762a8);
          bRam0000000003eb4857 = 1;
        }
        param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
        /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
        if (param_3 == 0) {
          func_0x00f78af4();
          *(long *)((long)piVar2 + -0x980) = lVar12;
          *(undefined8 *)((long)piVar2 + -0x978) = 0x3d249e0;
          *(undefined8 *)((long)piVar2 + -0x970) = 0;
          *(long **)((long)piVar2 + -0x968) = extraout_x1_08;
          *(undefined1 **)((long)piVar2 + -0x960) = puVar18;
          *(undefined **)((long)piVar2 + -0x958) = &Atlas_Rendering_AtlasShaders__WarmupURPLitShader
          ;
          puVar18 = (undefined1 *)((long)piVar2 + -0x960);
          if ((bRam0000000003eb4858 & 1) == 0) {
            func_0x00f78a20(0x3d1fec0);
            func_0x00f78a20(0x3d249e0);
            func_0x00f78a20(0x3d1f498);
            func_0x00f78a20(0x3d76288);
            bRam0000000003eb4858 = 1;
          }
          param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
          /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
          if (param_3 == 0) {
            func_0x00f78af4();
            *(long *)((long)piVar2 + -0x9e0) = lVar12;
            *(undefined8 *)((long)piVar2 + -0x9d8) = 0x3d249e0;
            *(undefined8 *)((long)piVar2 + -0x9d0) = 0;
            *(long **)((long)piVar2 + -0x9c8) = extraout_x1_09;
            *(undefined1 **)((long)piVar2 + -0x9c0) = puVar18;
            *(undefined **)((long)piVar2 + -0x9b8) = &Atlas_Rendering_AtlasShaders__WarmupUIShader;
            puVar18 = (undefined1 *)((long)piVar2 + -0x9c0);
            if ((bRam0000000003eb4859 & 1) == 0) {
              func_0x00f78a20(0x3d1fec0);
              func_0x00f78a20(0x3d249e0);
              func_0x00f78a20(0x3d1f498);
              func_0x00f78a20(0x3d76280);
              bRam0000000003eb4859 = 1;
            }
            param_3 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
            /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(param_3,0);
            if (param_3 == 0) {
              plVar14 = (long *)func_0x00f78af4();
              *(long *)((long)piVar2 + -0xa40) = lVar12;
              *(undefined8 *)((long)piVar2 + -0xa38) = 0x3d249e0;
              *(undefined8 *)((long)piVar2 + -0xa30) = 0;
              *(long **)((long)piVar2 + -0xa28) = extraout_x1_10;
              *(undefined1 **)((long)piVar2 + -0xa20) = puVar18;
              *(undefined **)((long)piVar2 + -0xa18) = &Atlas_Rendering_AtlasShaders___ctor;
              if ((bRam0000000003eb485a & 1) == 0) {
                func_0x00f78a20(0x3d1fdb0);
                bRam0000000003eb485a = 1;
              }
              if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              *(undefined4 *)(plVar14 + 4) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
              return plVar14;
            }
            lVar11 = 0x3d1f000;
            plVar5 = (long *)0x3d1fec0;
            /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
            uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
            *(undefined8 *)((long)piVar2 + -0x9f8) = 0;
            *(undefined8 *)((long)piVar2 + -0x9f0) = 0;
            *(undefined8 *)((long)piVar2 + -0x9e8) = 0;
            /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x9f8),extraout_x1_10,0,uVar7,0);
            *(undefined8 *)((long)piVar2 + -0xa08) = *(undefined8 *)((long)piVar2 + -0x9f0);
            *(undefined8 *)((long)piVar2 + -0xa10) = *(undefined8 *)((long)piVar2 + -0x9f8);
            *(undefined8 *)((long)piVar2 + -0xa00) = *(undefined8 *)((long)piVar2 + -0x9e8);
            /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0xa10),0);
            if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70);
            puVar19 = &UNK_0146d5b4;
            piVar2 = (int *)((long)piVar2 + -0xa10);
            plVar8 = extraout_x1_10;
            plVar14 = extraout_x1_10;
            lVar15 = param_3;
          }
          else {
            lVar11 = 0x3d1f000;
            plVar5 = (long *)0x3d1fec0;
            /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
            uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
            *(undefined8 *)((long)piVar2 + -0x998) = 0;
            *(undefined8 *)((long)piVar2 + -0x990) = 0;
            *(undefined8 *)((long)piVar2 + -0x988) = 0;
            /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x998),extraout_x1_09,8,uVar7,0);
            *(undefined8 *)((long)piVar2 + -0x9a8) = *(undefined8 *)((long)piVar2 + -0x990);
            *(undefined8 *)((long)piVar2 + -0x9b0) = *(undefined8 *)((long)piVar2 + -0x998);
            *(undefined8 *)((long)piVar2 + -0x9a0) = *(undefined8 *)((long)piVar2 + -0x988);
            /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x9b0),0);
            if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70);
            puVar19 = &UNK_0146d488;
            piVar2 = (int *)((long)piVar2 + -0x9b0);
            plVar8 = extraout_x1_09;
            plVar14 = extraout_x1_09;
            lVar15 = param_3;
          }
        }
        else {
          lVar11 = 0x3d1f498;
          plVar5 = (long *)0x3d1fec0;
          /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
          uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
          *(undefined8 *)((long)piVar2 + -0x908) = 0;
          *(undefined8 *)((long)piVar2 + -0x900) = 0;
          *(undefined8 *)((long)piVar2 + -0x8f8) = 0;
          /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x908),extraout_x1_08,8,uVar7,0);
          *(undefined8 *)((long)piVar2 + -0x918) = *(undefined8 *)((long)piVar2 + -0x900);
          *(undefined8 *)((long)piVar2 + -0x920) = *(undefined8 *)((long)piVar2 + -0x908);
          *(undefined8 *)((long)piVar2 + -0x910) = *(undefined8 *)((long)piVar2 + -0x8f8);
          /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x920),0);
          if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
          puVar19 = &UNK_0146d2ec;
          piVar2 = (int *)((long)piVar2 + -0x950);
          plVar8 = extraout_x1_08;
          plVar14 = extraout_x1_08;
          lVar15 = param_3;
        }
      }
      else {
        lVar11 = 0x3d1f000;
        plVar5 = (long *)0x3d1fec0;
        /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
        uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
        *(undefined8 *)((long)piVar2 + -0x8a8) = 0;
        *(undefined8 *)((long)piVar2 + -0x8a0) = 0;
        *(undefined8 *)((long)piVar2 + -0x898) = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x8a8),extraout_x1_07,0,uVar7,0);
        *(undefined8 *)((long)piVar2 + -0x8b8) = *(undefined8 *)((long)piVar2 + -0x8a0);
        *(undefined8 *)((long)piVar2 + -0x8c0) = *(undefined8 *)((long)piVar2 + -0x8a8);
        *(undefined8 *)((long)piVar2 + -0x8b0) = *(undefined8 *)((long)piVar2 + -0x898);
        /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x8c0),0);
        if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
        puVar19 = &UNK_0146d1b4;
        piVar2 = (int *)((long)piVar2 + -0x8c0);
        plVar8 = extraout_x1_07;
        plVar14 = extraout_x1_07;
        lVar15 = param_3;
      }
    }
    else {
      lVar11 = 0x3d1f000;
      plVar5 = (long *)0x3d1fec0;
      /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
      uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
      *(undefined8 *)((long)piVar2 + -0x848) = 0;
      *(undefined8 *)((long)piVar2 + -0x840) = 0;
      *(undefined8 *)((long)piVar2 + -0x838) = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x848),extraout_x1_06,0,uVar7,0);
      *(undefined8 *)((long)piVar2 + -0x858) = *(undefined8 *)((long)piVar2 + -0x840);
      *(undefined8 *)((long)piVar2 + -0x860) = *(undefined8 *)((long)piVar2 + -0x848);
      *(undefined8 *)((long)piVar2 + -0x850) = *(undefined8 *)((long)piVar2 + -0x838);
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x860),0);
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
      puVar19 = &UNK_0146d088;
      piVar2 = (int *)((long)piVar2 + -0x860);
      plVar8 = extraout_x1_06;
      plVar14 = extraout_x1_06;
      lVar15 = param_3;
    }
    goto code_r0x0146b63c;
  }
  lVar11 = 0x3d1f000;
  plVar5 = (long *)0x3d1fec0;
  /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(param_3,0);
  uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
  *(undefined8 *)((long)piVar2 + -0x698) = 0;
  *(undefined8 *)((long)piVar2 + -0x690) = 0;
  *(undefined8 *)((long)piVar2 + -0x688) = 0;
  /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60((undefined1 *)((long)piVar2 + -0x698),extraout_x1_04,8,uVar7,0);
  *(undefined8 *)((long)piVar2 + -0x6a8) = *(undefined8 *)((long)piVar2 + -0x690);
  *(undefined8 *)((long)piVar2 + -0x6b0) = *(undefined8 *)((long)piVar2 + -0x698);
  *(undefined8 *)((long)piVar2 + -0x6a0) = *(undefined8 *)((long)piVar2 + -0x688);
  /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(param_3,(undefined1 *)((long)piVar2 + -0x6b0),0);
  if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_4 = *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68);
  puVar19 = &UNK_0146cb7c;
  piVar2 = (int *)((long)piVar2 + -0x6b0);
  plVar8 = extraout_x1_04;
  plVar14 = extraout_x1_04;
  lVar15 = param_3;
  goto code_r0x0146b63c;
}



// ============================================================
// RVA: 0x146b63c | Atlas.Rendering.AtlasShaders.Warmup
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146b73c | Atlas.Rendering.AtlasShaders.WarmupCommonToonEnvironmentShader
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146bb4c | Atlas.Rendering.AtlasShaders.WarmupGameModeToonEnvironmentShader
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146bfc8 | Atlas.Rendering.AtlasShaders.WarmupCommonToonDynamicShader
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x146c5a4 | Atlas.Rendering.AtlasShaders.WarmupGameModeToonDynamicShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupGameModeToonDynamicShader
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  uint uVar8;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 **ppuStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 **ppuStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 **ppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 **ppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 **ppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4852 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762c8);
    func_0x00f78a20(0x3d69538);
    func_0x00f78a20(0x3d77260);
    func_0x00f78a20(0x3d69548);
    func_0x00f78a20(0x3d762d8);
    func_0x00f78a20(0x3d762d0);
    func_0x00f78a20(0x3d688c0);
    bRam0000000003eb4852 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  plVar1 = (long *)0x3d249e0;
  if (lVar2 == 0) {
LAB_0146ca4c:
    plVar3 = plVar1;
    func_0x00f78af4();
LAB_0146ca50:
    uVar10 = func_0x00f78b14();
  }
  else {
    unaff_x22 = 0x3d1f498;
    uVar10 = 0x3d1f498;
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar3 == (long *)0x0) goto LAB_0146ca4c;
    if ((/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0 != 0) &&
       (lVar4 = func_0x00f78adc(/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_0146ca50;
    if ((int)plVar3[3] != 0) {
      plVar3[4] = /*STR('ALPHA_CLIP')*/ lRam0000000003d688c0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_78,param_2,8,plVar3,0);
      uStack_88 = uStack_70;
      uStack_90 = uStack_78;
      uStack_80 = uStack_68;
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_90,0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,2);
      plVar1 = plVar3;
      if (plVar5 == (long *)0x0) goto LAB_0146ca4c;
      plVar3 = plVar5;
      if ((/*STR('BENDABLE')*/ lRam0000000003d69538 != 0) &&
         (lVar4 = func_0x00f78adc(/*STR('BENDABLE')*/ lRam0000000003d69538,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
         ) goto LAB_0146ca50;
      uVar9 = plVar5[3];
      if ((int)uVar9 != 0) {
        plVar5[4] = /*STR('BENDABLE')*/ lRam0000000003d69538;
        unaff_x22 = uVar10;
        if (/*STR('BLACKHOLE')*/ lRam0000000003d69548 != 0) {
          lVar4 = func_0x00f78adc(/*STR('BLACKHOLE')*/ lRam0000000003d69548,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar4 == 0) goto LAB_0146ca50;
          uVar9 = plVar5[3];
        }
        if ((uVar9 & 0xfffffffe) != 0) {
          plVar5[5] = /*STR('BLACKHOLE')*/ lRam0000000003d69548;
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_a8,param_2,8,plVar5,0);
          uStack_b8 = uStack_a0;
          uStack_c0 = uStack_a8;
          uStack_b0 = uStack_98;
          /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_c0,0);
          if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          Atlas_Rendering_AtlasShaders__Warmup
                    (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar2,
                     *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
          /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
          plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
          plVar1 = plVar5;
          if (plVar3 == (long *)0x0) goto LAB_0146ca4c;
          if ((/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0 != 0) &&
             (lVar4 = func_0x00f78adc(/*STR('ALPHA_CLIP')*/ lRam0000000003d688c0,*(undefined8 *)(*plVar3 + 0x40)),
             lVar4 == 0)) goto LAB_0146ca50;
          if ((int)plVar3[3] != 0) {
            plVar3[4] = /*STR('ALPHA_CLIP')*/ lRam0000000003d688c0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_c8 = 0;
            /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_d8,param_2,0xd,plVar3,0);
            uStack_e8 = uStack_d0;
            uStack_f0 = uStack_d8;
            uStack_e0 = uStack_c8;
            /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_f0,0);
            plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,2);
            plVar1 = plVar3;
            if (plVar5 == (long *)0x0) goto LAB_0146ca4c;
            plVar3 = plVar5;
            if ((/*STR('BENDABLE')*/ lRam0000000003d69538 != 0) &&
               (lVar4 = func_0x00f78adc(/*STR('BENDABLE')*/ lRam0000000003d69538,*(undefined8 *)(*plVar5 + 0x40)),
               lVar4 == 0)) goto LAB_0146ca50;
            uVar9 = plVar5[3];
            if ((int)uVar9 != 0) {
              plVar5[4] = /*STR('BENDABLE')*/ lRam0000000003d69538;
              if (/*STR('BLACKHOLE')*/ lRam0000000003d69548 != 0) {
                lVar4 = func_0x00f78adc(/*STR('BLACKHOLE')*/ lRam0000000003d69548,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar4 == 0) goto LAB_0146ca50;
                uVar9 = plVar5[3];
              }
              if ((uVar9 & 0xfffffffe) != 0) {
                plVar5[5] = /*STR('BLACKHOLE')*/ lRam0000000003d69548;
                uStack_108 = 0;
                uStack_100 = 0;
                uStack_f8 = 0;
                /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_108,param_2,0xd,plVar5,0);
                uStack_118 = uStack_100;
                uStack_120 = uStack_108;
                uStack_110 = uStack_f8;
                /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_120,0);
                plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,3);
                plVar1 = plVar5;
                if (plVar3 == (long *)0x0) goto LAB_0146ca4c;
                if ((/*STR('BENDABLE')*/ lRam0000000003d69538 != 0) &&
                   (lVar4 = func_0x00f78adc(/*STR('BENDABLE')*/ lRam0000000003d69538,*(undefined8 *)(*plVar3 + 0x40)),
                   lVar4 == 0)) goto LAB_0146ca50;
                uVar9 = plVar3[3];
                if ((int)uVar9 != 0) {
                  plVar3[4] = /*STR('BENDABLE')*/ lRam0000000003d69538;
                  if (/*STR('BLACKHOLE')*/ lRam0000000003d69548 != 0) {
                    lVar4 = func_0x00f78adc(/*STR('BLACKHOLE')*/ lRam0000000003d69548,*(undefined8 *)(*plVar3 + 0x40));
                    if (lVar4 == 0) goto LAB_0146ca50;
                    uVar9 = plVar3[3];
                  }
                  uVar8 = (uint)uVar9;
                  if ((uVar9 & 0xfffffffe) != 0) {
                    unaff_x22 = 0x3d77260;
                    plVar3[5] = /*STR('BLACKHOLE')*/ lRam0000000003d69548;
                    if (/*STR('_MAIN_LIGHT_SHADOWS')*/ lRam0000000003d77260 != 0) {
                      lVar4 = func_0x00f78adc(/*STR('_MAIN_LIGHT_SHADOWS')*/ lRam0000000003d77260,*(undefined8 *)(*plVar3 + 0x40));
                      if (lVar4 == 0) goto LAB_0146ca50;
                      uVar8 = (uint)plVar3[3];
                    }
                    if (2 < uVar8) {
                      plVar3[6] = /*STR('_MAIN_LIGHT_SHADOWS')*/ lRam0000000003d77260;
                      uStack_138 = 0;
                      uStack_130 = 0;
                      uStack_128 = 0;
                      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_138,param_2,0xd,plVar3,0);
                      uStack_148 = uStack_130;
                      uStack_150 = uStack_138;
                      uStack_140 = uStack_128;
                      uVar10 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_150,0);
                      lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                                        (uVar10,param_2,lVar2,
                                         *(undefined8 *)
                                          (*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
                      return lVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar10 = func_0x00f78b24();
  }
  func_0x00f78ac0(uVar10,0);
  puStack_158 = &Atlas_Rendering_AtlasShaders__WarmupCommonToonUnlitShader;
  uStack_180 = unaff_x22;
  plStack_178 = plVar3;
  lStack_170 = lVar2;
  uStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4853 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76330);
    func_0x00f78a20(0x3d76340);
    bRam0000000003eb4853 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar10 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_198,extraout_x1,8,uVar10,0);
    uStack_1a8 = uStack_190;
    uStack_1b0 = uStack_198;
    uStack_1a0 = uStack_188;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_1b0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  puStack_1b8 = &Atlas_Rendering_AtlasShaders__WarmupGameModeToonUnlitShader;
  ppuStack_1c0 = &puStack_160;
  if ((bRam0000000003eb4854 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76258);
    func_0x00f78a20(0x3d76330);
    func_0x00f78a20(0x3d76320);
    func_0x00f78a20(0x3d76c28);
    func_0x00f78a20(0x3d76328);
    func_0x00f78a20(0x3d76338);
    bRam0000000003eb4854 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  plVar1 = (long *)0x3d249e0;
  if (lVar2 == 0) {
code_r0x0146cf5c:
    plVar3 = plVar1;
    func_0x00f78af4();
  }
  else {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar3 == (long *)0x0) goto code_r0x0146cf5c;
    if ((/*STR('WAVING')*/ lRam0000000003d76258 != 0) &&
       (lVar4 = func_0x00f78adc(/*STR('WAVING')*/ lRam0000000003d76258,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    {
code_r0x0146cf68:
      uVar10 = func_0x00f78b14();
      goto code_r0x0146cf6c;
    }
    if ((int)plVar3[3] != 0) {
      unaff_x22 = 0x3d1fec0;
      uVar10 = 0x3d1fec0;
      plVar3[4] = /*STR('WAVING')*/ lRam0000000003d76258;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_228,extraout_x1_00,8,plVar3,0);
      uStack_238 = uStack_220;
      uStack_240 = uStack_228;
      uStack_230 = uStack_218;
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_240,0);
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_Rendering_AtlasShaders__Warmup
                (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_00,lVar2,
                 *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
      /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      plVar1 = plVar3;
      if (plVar5 == (long *)0x0) goto code_r0x0146cf5c;
      plVar3 = plVar5;
      if ((/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28 != 0) &&
         (lVar4 = func_0x00f78adc(/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
         ) goto code_r0x0146cf68;
      if ((int)plVar5[3] != 0) {
        plVar5[4] = /*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28;
        uStack_258 = 0;
        uStack_250 = 0;
        uStack_248 = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_258,extraout_x1_00,8,plVar5,0);
        uStack_268 = uStack_250;
        uStack_270 = uStack_258;
        uStack_260 = uStack_248;
        uVar6 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_270,0);
        Atlas_Rendering_AtlasShaders__Warmup
                  (uVar6,extraout_x1_00,lVar2,
                   *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
        /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
        uVar6 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
        uStack_288 = 0;
        uStack_280 = 0;
        uStack_278 = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_288,extraout_x1_00,0,uVar6,0);
        uStack_298 = uStack_280;
        uStack_2a0 = uStack_288;
        uStack_290 = uStack_278;
        /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_2a0,0);
        plVar7 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
        plVar1 = plVar5;
        if (plVar7 == (long *)0x0) goto code_r0x0146cf5c;
        plVar3 = plVar7;
        if ((/*STR('WAVING')*/ lRam0000000003d76258 != 0) &&
           (lVar4 = func_0x00f78adc(/*STR('WAVING')*/ lRam0000000003d76258,*(undefined8 *)(*plVar7 + 0x40)),
           lVar4 == 0)) goto code_r0x0146cf68;
        if ((int)plVar7[3] != 0) {
          plVar7[4] = /*STR('WAVING')*/ lRam0000000003d76258;
          uStack_2b8 = 0;
          uStack_2b0 = 0;
          uStack_2a8 = 0;
          /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_2b8,extraout_x1_00,0,plVar7,0);
          uStack_2c8 = uStack_2b0;
          uStack_2d0 = uStack_2b8;
          uStack_2c0 = uStack_2a8;
          /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_2d0,0);
          plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
          plVar1 = plVar7;
          unaff_x22 = uVar10;
          if (plVar3 == (long *)0x0) goto code_r0x0146cf5c;
          if ((/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28 != 0) &&
             (lVar4 = func_0x00f78adc(/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28,*(undefined8 *)(*plVar3 + 0x40)),
             lVar4 == 0)) goto code_r0x0146cf68;
          if ((int)plVar3[3] != 0) {
            plVar3[4] = /*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28;
            uStack_2e8 = 0;
            uStack_2e0 = 0;
            uStack_2d8 = 0;
            /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_2e8,extraout_x1_00,0,plVar3,0);
            uStack_2f8 = uStack_2e0;
            uStack_300 = uStack_2e8;
            uStack_2f0 = uStack_2d8;
            uVar10 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_300,0);
            lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                              (uVar10,extraout_x1_00,lVar2,
                               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x78));
            return lVar2;
          }
        }
      }
    }
  }
  uVar10 = func_0x00f78b24();
code_r0x0146cf6c:
  func_0x00f78ac0(uVar10,0);
  puStack_308 = &Atlas_Rendering_AtlasShaders__WarmupToonSkyboxShader;
  uStack_330 = unaff_x22;
  plStack_328 = plVar3;
  lStack_320 = lVar2;
  uStack_318 = extraout_x1_00;
  ppuStack_310 = &ppuStack_1c0;
  if ((bRam0000000003eb4855 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76318);
    bRam0000000003eb4855 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar10 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_348,extraout_x1_01,0,uVar10,0);
    uStack_358 = uStack_340;
    uStack_360 = uStack_348;
    uStack_350 = uStack_338;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_360,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_01,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_388 = 0x3d249e0;
  puStack_368 = &Atlas_Rendering_AtlasShaders__WarmupProjectionShadowShader;
  uStack_390 = unaff_x22;
  lStack_380 = lVar2;
  uStack_378 = extraout_x1_01;
  ppuStack_370 = &ppuStack_310;
  if ((bRam0000000003eb4856 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762a0);
    bRam0000000003eb4856 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar10 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_3a8,extraout_x1_02,0,uVar10,0);
    uStack_3b8 = uStack_3a0;
    uStack_3c0 = uStack_3a8;
    uStack_3b0 = uStack_398;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_3c0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_02,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_3e8 = 0x3d249e0;
  puStack_3c8 = &Atlas_Rendering_AtlasShaders__WarmupShaderGraphShader;
  uStack_3f0 = unaff_x22;
  lStack_3e0 = lVar2;
  uStack_3d8 = extraout_x1_02;
  ppuStack_3d0 = &ppuStack_370;
  if ((bRam0000000003eb4857 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762b0);
    func_0x00f78a20(0x3d762a8);
    bRam0000000003eb4857 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar10 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_408,extraout_x1_03,8,uVar10,0);
    uStack_418 = uStack_400;
    uStack_420 = uStack_408;
    uStack_410 = uStack_3f8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_420,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Rendering_AtlasShaders__Warmup
              (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_03,lVar2,
               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar10 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_438,extraout_x1_03,0,uVar10,0);
    uStack_448 = uStack_430;
    uStack_450 = uStack_438;
    uStack_440 = uStack_428;
    uVar10 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_450,0);
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (uVar10,extraout_x1_03,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_478 = 0x3d249e0;
  puStack_458 = &Atlas_Rendering_AtlasShaders__WarmupURPLitShader;
  uStack_480 = unaff_x22;
  lStack_470 = lVar2;
  uStack_468 = extraout_x1_03;
  ppuStack_460 = &ppuStack_3d0;
  if ((bRam0000000003eb4858 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76288);
    bRam0000000003eb4858 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar10 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_498,extraout_x1_04,8,uVar10,0);
    uStack_4a8 = uStack_490;
    uStack_4b0 = uStack_498;
    uStack_4a0 = uStack_488;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_4b0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_04,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_4d8 = 0x3d249e0;
  puStack_4b8 = &Atlas_Rendering_AtlasShaders__WarmupUIShader;
  uStack_4e0 = unaff_x22;
  lStack_4d0 = lVar2;
  uStack_4c8 = extraout_x1_04;
  ppuStack_4c0 = &ppuStack_460;
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar10 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_4f8,extraout_x1_05,0,uVar10,0);
    uStack_508 = uStack_4f0;
    uStack_510 = uStack_4f8;
    uStack_500 = uStack_4e8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_510,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_05,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar2 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar2;
}



// ============================================================
// RVA: 0x146ca5c | Atlas.Rendering.AtlasShaders.WarmupCommonToonUnlitShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupCommonToonUnlitShader
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 unaff_x22;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 **ppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 **ppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 **ppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 **ppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4853 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76330);
    func_0x00f78a20(0x3d76340);
    bRam0000000003eb4853 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar3 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_48,param_2,8,uVar3,0);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_60,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  puStack_68 = &Atlas_Rendering_AtlasShaders__WarmupGameModeToonUnlitShader;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4854 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76258);
    func_0x00f78a20(0x3d76330);
    func_0x00f78a20(0x3d76320);
    func_0x00f78a20(0x3d76c28);
    func_0x00f78a20(0x3d76328);
    func_0x00f78a20(0x3d76338);
    bRam0000000003eb4854 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  plVar1 = (long *)0x3d249e0;
  if (lVar2 == 0) {
code_r0x0146cf5c:
    plVar4 = plVar1;
    func_0x00f78af4();
  }
  else {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    plVar4 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar4 == (long *)0x0) goto code_r0x0146cf5c;
    if ((/*STR('WAVING')*/ lRam0000000003d76258 != 0) &&
       (lVar5 = func_0x00f78adc(/*STR('WAVING')*/ lRam0000000003d76258,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    {
code_r0x0146cf68:
      uVar3 = func_0x00f78b14();
      goto code_r0x0146cf6c;
    }
    if ((int)plVar4[3] != 0) {
      unaff_x22 = 0x3d1fec0;
      uVar3 = 0x3d1fec0;
      plVar4[4] = /*STR('WAVING')*/ lRam0000000003d76258;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_d8,extraout_x1,8,plVar4,0);
      uStack_e8 = uStack_d0;
      uStack_f0 = uStack_d8;
      uStack_e0 = uStack_c8;
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_f0,0);
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_Rendering_AtlasShaders__Warmup
                (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1,lVar2,
                 *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
      /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
      plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      plVar1 = plVar4;
      if (plVar6 == (long *)0x0) goto code_r0x0146cf5c;
      plVar4 = plVar6;
      if ((/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28 != 0) &&
         (lVar5 = func_0x00f78adc(/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)
         ) goto code_r0x0146cf68;
      if ((int)plVar6[3] != 0) {
        plVar6[4] = /*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_108,extraout_x1,8,plVar6,0);
        uStack_118 = uStack_100;
        uStack_120 = uStack_108;
        uStack_110 = uStack_f8;
        uVar7 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_120,0);
        Atlas_Rendering_AtlasShaders__Warmup
                  (uVar7,extraout_x1,lVar2,
                   *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
        /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
        uVar7 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_138,extraout_x1,0,uVar7,0);
        uStack_148 = uStack_130;
        uStack_150 = uStack_138;
        uStack_140 = uStack_128;
        /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_150,0);
        plVar8 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
        plVar1 = plVar6;
        if (plVar8 == (long *)0x0) goto code_r0x0146cf5c;
        plVar4 = plVar8;
        if ((/*STR('WAVING')*/ lRam0000000003d76258 != 0) &&
           (lVar5 = func_0x00f78adc(/*STR('WAVING')*/ lRam0000000003d76258,*(undefined8 *)(*plVar8 + 0x40)),
           lVar5 == 0)) goto code_r0x0146cf68;
        if ((int)plVar8[3] != 0) {
          plVar8[4] = /*STR('WAVING')*/ lRam0000000003d76258;
          uStack_168 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_168,extraout_x1,0,plVar8,0);
          uStack_178 = uStack_160;
          uStack_180 = uStack_168;
          uStack_170 = uStack_158;
          /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_180,0);
          plVar4 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
          plVar1 = plVar8;
          unaff_x22 = uVar3;
          if (plVar4 == (long *)0x0) goto code_r0x0146cf5c;
          if ((/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28 != 0) &&
             (lVar5 = func_0x00f78adc(/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28,*(undefined8 *)(*plVar4 + 0x40)),
             lVar5 == 0)) goto code_r0x0146cf68;
          if ((int)plVar4[3] != 0) {
            plVar4[4] = /*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28;
            uStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_198,extraout_x1,0,plVar4,0);
            uStack_1a8 = uStack_190;
            uStack_1b0 = uStack_198;
            uStack_1a0 = uStack_188;
            uVar3 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_1b0,0);
            lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                              (uVar3,extraout_x1,lVar2,
                               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x78));
            return lVar2;
          }
        }
      }
    }
  }
  uVar3 = func_0x00f78b24();
code_r0x0146cf6c:
  func_0x00f78ac0(uVar3,0);
  puStack_1b8 = &Atlas_Rendering_AtlasShaders__WarmupToonSkyboxShader;
  uStack_1e0 = unaff_x22;
  plStack_1d8 = plVar4;
  lStack_1d0 = lVar2;
  uStack_1c8 = extraout_x1;
  ppuStack_1c0 = &puStack_70;
  if ((bRam0000000003eb4855 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76318);
    bRam0000000003eb4855 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar3 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_1f8,extraout_x1_00,0,uVar3,0);
    uStack_208 = uStack_1f0;
    uStack_210 = uStack_1f8;
    uStack_200 = uStack_1e8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_210,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_00,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_238 = 0x3d249e0;
  puStack_218 = &Atlas_Rendering_AtlasShaders__WarmupProjectionShadowShader;
  uStack_240 = unaff_x22;
  lStack_230 = lVar2;
  uStack_228 = extraout_x1_00;
  ppuStack_220 = &ppuStack_1c0;
  if ((bRam0000000003eb4856 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762a0);
    bRam0000000003eb4856 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar3 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_258,extraout_x1_01,0,uVar3,0);
    uStack_268 = uStack_250;
    uStack_270 = uStack_258;
    uStack_260 = uStack_248;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_270,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_01,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_298 = 0x3d249e0;
  puStack_278 = &Atlas_Rendering_AtlasShaders__WarmupShaderGraphShader;
  uStack_2a0 = unaff_x22;
  lStack_290 = lVar2;
  uStack_288 = extraout_x1_01;
  ppuStack_280 = &ppuStack_220;
  if ((bRam0000000003eb4857 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762b0);
    func_0x00f78a20(0x3d762a8);
    bRam0000000003eb4857 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar3 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_2b8,extraout_x1_02,8,uVar3,0);
    uStack_2c8 = uStack_2b0;
    uStack_2d0 = uStack_2b8;
    uStack_2c0 = uStack_2a8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_2d0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Rendering_AtlasShaders__Warmup
              (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_02,lVar2,
               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar3 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_2e8,extraout_x1_02,0,uVar3,0);
    uStack_2f8 = uStack_2e0;
    uStack_300 = uStack_2e8;
    uStack_2f0 = uStack_2d8;
    uVar3 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_300,0);
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (uVar3,extraout_x1_02,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_328 = 0x3d249e0;
  puStack_308 = &Atlas_Rendering_AtlasShaders__WarmupURPLitShader;
  uStack_330 = unaff_x22;
  lStack_320 = lVar2;
  uStack_318 = extraout_x1_02;
  ppuStack_310 = &ppuStack_280;
  if ((bRam0000000003eb4858 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76288);
    bRam0000000003eb4858 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar3 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_348,extraout_x1_03,8,uVar3,0);
    uStack_358 = uStack_340;
    uStack_360 = uStack_348;
    uStack_350 = uStack_338;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_360,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_03,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_388 = 0x3d249e0;
  puStack_368 = &Atlas_Rendering_AtlasShaders__WarmupUIShader;
  uStack_390 = unaff_x22;
  lStack_380 = lVar2;
  uStack_378 = extraout_x1_03;
  ppuStack_370 = &ppuStack_310;
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar3 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_398 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_3a8,extraout_x1_04,0,uVar3,0);
    uStack_3b8 = uStack_3a0;
    uStack_3c0 = uStack_3a8;
    uStack_3b0 = uStack_398;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_3c0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_04,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar2 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar2;
}



// ============================================================
// RVA: 0x146cb94 | Atlas.Rendering.AtlasShaders.WarmupGameModeToonUnlitShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupGameModeToonUnlitShader
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 unaff_x22;
  undefined8 uVar8;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 **ppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 **ppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4854 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76258);
    func_0x00f78a20(0x3d76330);
    func_0x00f78a20(0x3d76320);
    func_0x00f78a20(0x3d76c28);
    func_0x00f78a20(0x3d76328);
    func_0x00f78a20(0x3d76338);
    bRam0000000003eb4854 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  plVar1 = (long *)0x3d249e0;
  if (lVar2 == 0) {
LAB_0146cf5c:
    plVar3 = plVar1;
    func_0x00f78af4();
  }
  else {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar3 == (long *)0x0) goto LAB_0146cf5c;
    if ((/*STR('WAVING')*/ lRam0000000003d76258 != 0) &&
       (lVar4 = func_0x00f78adc(/*STR('WAVING')*/ lRam0000000003d76258,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    {
LAB_0146cf68:
      uVar8 = func_0x00f78b14();
      goto code_r0x0146cf6c;
    }
    if ((int)plVar3[3] != 0) {
      unaff_x22 = 0x3d1fec0;
      uVar8 = 0x3d1fec0;
      plVar3[4] = /*STR('WAVING')*/ lRam0000000003d76258;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_78,param_2,8,plVar3,0);
      uStack_88 = uStack_70;
      uStack_90 = uStack_78;
      uStack_80 = uStack_68;
      /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_90,0);
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_Rendering_AtlasShaders__Warmup
                (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar2,
                 *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
      /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      plVar1 = plVar3;
      if (plVar5 == (long *)0x0) goto LAB_0146cf5c;
      plVar3 = plVar5;
      if ((/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28 != 0) &&
         (lVar4 = func_0x00f78adc(/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
         ) goto LAB_0146cf68;
      if ((int)plVar5[3] != 0) {
        plVar5[4] = /*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_a8,param_2,8,plVar5,0);
        uStack_b8 = uStack_a0;
        uStack_c0 = uStack_a8;
        uStack_b0 = uStack_98;
        uVar6 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_c0,0);
        Atlas_Rendering_AtlasShaders__Warmup
                  (uVar6,param_2,lVar2,
                   *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
        /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
        uVar6 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_d8,param_2,0,uVar6,0);
        uStack_e8 = uStack_d0;
        uStack_f0 = uStack_d8;
        uStack_e0 = uStack_c8;
        /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_f0,0);
        plVar7 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
        plVar1 = plVar5;
        if (plVar7 == (long *)0x0) goto LAB_0146cf5c;
        plVar3 = plVar7;
        if ((/*STR('WAVING')*/ lRam0000000003d76258 != 0) &&
           (lVar4 = func_0x00f78adc(/*STR('WAVING')*/ lRam0000000003d76258,*(undefined8 *)(*plVar7 + 0x40)),
           lVar4 == 0)) goto LAB_0146cf68;
        if ((int)plVar7[3] != 0) {
          plVar7[4] = /*STR('WAVING')*/ lRam0000000003d76258;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_108,param_2,0,plVar7,0);
          uStack_118 = uStack_100;
          uStack_120 = uStack_108;
          uStack_110 = uStack_f8;
          /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_120,0);
          plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
          plVar1 = plVar7;
          unaff_x22 = uVar8;
          if (plVar3 == (long *)0x0) goto LAB_0146cf5c;
          if ((/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28 != 0) &&
             (lVar4 = func_0x00f78adc(/*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28,*(undefined8 *)(*plVar3 + 0x40)),
             lVar4 == 0)) goto LAB_0146cf68;
          if ((int)plVar3[3] != 0) {
            plVar3[4] = /*STR('_ALPHATEST_ON')*/ lRam0000000003d76c28;
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_138,param_2,0,plVar3,0);
            uStack_148 = uStack_130;
            uStack_150 = uStack_138;
            uStack_140 = uStack_128;
            uVar8 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_150,0);
            lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                              (uVar8,param_2,lVar2,
                               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x78));
            return lVar2;
          }
        }
      }
    }
  }
  uVar8 = func_0x00f78b24();
code_r0x0146cf6c:
  func_0x00f78ac0(uVar8,0);
  puStack_158 = &Atlas_Rendering_AtlasShaders__WarmupToonSkyboxShader;
  uStack_180 = unaff_x22;
  plStack_178 = plVar3;
  lStack_170 = lVar2;
  uStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4855 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76318);
    bRam0000000003eb4855 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar8 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_198,extraout_x1,0,uVar8,0);
    uStack_1a8 = uStack_190;
    uStack_1b0 = uStack_198;
    uStack_1a0 = uStack_188;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_1b0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_1d8 = 0x3d249e0;
  puStack_1b8 = &Atlas_Rendering_AtlasShaders__WarmupProjectionShadowShader;
  uStack_1e0 = unaff_x22;
  lStack_1d0 = lVar2;
  uStack_1c8 = extraout_x1;
  ppuStack_1c0 = &puStack_160;
  if ((bRam0000000003eb4856 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762a0);
    bRam0000000003eb4856 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar8 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_1f8,extraout_x1_00,0,uVar8,0);
    uStack_208 = uStack_1f0;
    uStack_210 = uStack_1f8;
    uStack_200 = uStack_1e8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_210,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_00,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_238 = 0x3d249e0;
  puStack_218 = &Atlas_Rendering_AtlasShaders__WarmupShaderGraphShader;
  uStack_240 = unaff_x22;
  lStack_230 = lVar2;
  uStack_228 = extraout_x1_00;
  ppuStack_220 = &ppuStack_1c0;
  if ((bRam0000000003eb4857 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762b0);
    func_0x00f78a20(0x3d762a8);
    bRam0000000003eb4857 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar8 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_258,extraout_x1_01,8,uVar8,0);
    uStack_268 = uStack_250;
    uStack_270 = uStack_258;
    uStack_260 = uStack_248;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_270,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Rendering_AtlasShaders__Warmup
              (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_01,lVar2,
               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar8 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_288,extraout_x1_01,0,uVar8,0);
    uStack_298 = uStack_280;
    uStack_2a0 = uStack_288;
    uStack_290 = uStack_278;
    uVar8 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_2a0,0);
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (uVar8,extraout_x1_01,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_2c8 = 0x3d249e0;
  puStack_2a8 = &Atlas_Rendering_AtlasShaders__WarmupURPLitShader;
  uStack_2d0 = unaff_x22;
  lStack_2c0 = lVar2;
  uStack_2b8 = extraout_x1_01;
  ppuStack_2b0 = &ppuStack_220;
  if ((bRam0000000003eb4858 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76288);
    bRam0000000003eb4858 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar8 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_2e8,extraout_x1_02,8,uVar8,0);
    uStack_2f8 = uStack_2e0;
    uStack_300 = uStack_2e8;
    uStack_2f0 = uStack_2d8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_300,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_02,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar2;
  }
  func_0x00f78af4();
  uStack_328 = 0x3d249e0;
  puStack_308 = &Atlas_Rendering_AtlasShaders__WarmupUIShader;
  uStack_330 = unaff_x22;
  lStack_320 = lVar2;
  uStack_318 = extraout_x1_02;
  ppuStack_310 = &ppuStack_2b0;
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar2,0);
  if (lVar2 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar2,0);
    uVar8 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_338 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_348,extraout_x1_03,0,uVar8,0);
    uStack_358 = uStack_340;
    uStack_360 = uStack_348;
    uStack_350 = uStack_338;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar2,&uStack_360,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_03,lVar2,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar2 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar2;
}



// ============================================================
// RVA: 0x146cf74 | Atlas.Rendering.AtlasShaders.WarmupToonSkyboxShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupToonSkyboxShader(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4855 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76318);
    bRam0000000003eb4855 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_48,param_2,0,uVar2,0);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_60,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4856 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762a0);
    bRam0000000003eb4856 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_a8,extraout_x1,0,uVar2,0);
    uStack_b8 = uStack_a0;
    uStack_c0 = uStack_a8;
    uStack_b0 = uStack_98;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_c0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4857 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762b0);
    func_0x00f78a20(0x3d762a8);
    bRam0000000003eb4857 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_108,extraout_x1_00,8,uVar2,0);
    uStack_118 = uStack_100;
    uStack_120 = uStack_108;
    uStack_110 = uStack_f8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_120,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Rendering_AtlasShaders__Warmup
              (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_00,lVar1,
               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_138,extraout_x1_00,0,uVar2,0);
    uStack_148 = uStack_130;
    uStack_150 = uStack_138;
    uStack_140 = uStack_128;
    uVar2 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_150,0);
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (uVar2,extraout_x1_00,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4858 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76288);
    bRam0000000003eb4858 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_198,extraout_x1_01,8,uVar2,0);
    uStack_1a8 = uStack_190;
    uStack_1b0 = uStack_198;
    uStack_1a0 = uStack_188;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_1b0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_01,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_1f8,extraout_x1_02,0,uVar2,0);
    uStack_208 = uStack_1f0;
    uStack_210 = uStack_1f8;
    uStack_200 = uStack_1e8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_210,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_02,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar1;
}



// ============================================================
// RVA: 0x146d0a0 | Atlas.Rendering.AtlasShaders.WarmupProjectionShadowShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupProjectionShadowShader
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4856 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762a0);
    bRam0000000003eb4856 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_48,param_2,0,uVar2,0);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_60,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4857 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762b0);
    func_0x00f78a20(0x3d762a8);
    bRam0000000003eb4857 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_a8,extraout_x1,8,uVar2,0);
    uStack_b8 = uStack_a0;
    uStack_c0 = uStack_a8;
    uStack_b0 = uStack_98;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_c0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Rendering_AtlasShaders__Warmup
              (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1,lVar1,
               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_d8,extraout_x1,0,uVar2,0);
    uStack_e8 = uStack_d0;
    uStack_f0 = uStack_d8;
    uStack_e0 = uStack_c8;
    uVar2 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_f0,0);
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (uVar2,extraout_x1,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4858 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76288);
    bRam0000000003eb4858 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_138,extraout_x1_00,8,uVar2,0);
    uStack_148 = uStack_130;
    uStack_150 = uStack_138;
    uStack_140 = uStack_128;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_150,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_00,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_198,extraout_x1_01,0,uVar2,0);
    uStack_1a8 = uStack_190;
    uStack_1b0 = uStack_198;
    uStack_1a0 = uStack_188;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_1b0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_01,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar1;
}



// ============================================================
// RVA: 0x146d1cc | Atlas.Rendering.AtlasShaders.WarmupShaderGraphShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupShaderGraphShader(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4857 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d762b0);
    func_0x00f78a20(0x3d762a8);
    bRam0000000003eb4857 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_48,param_2,8,uVar2,0);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_60,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Rendering_AtlasShaders__Warmup
              (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar1,
               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_78,param_2,0,uVar2,0);
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uStack_80 = uStack_68;
    uVar2 = /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_90,0);
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (uVar2,param_2,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4858 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76288);
    bRam0000000003eb4858 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_d8,extraout_x1,8,uVar2,0);
    uStack_e8 = uStack_d0;
    uStack_f0 = uStack_d8;
    uStack_e0 = uStack_c8;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_f0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_138,extraout_x1_00,0,uVar2,0);
    uStack_148 = uStack_130;
    uStack_150 = uStack_138;
    uStack_140 = uStack_128;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_150,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1_00,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar1;
}



// ============================================================
// RVA: 0x146d374 | Atlas.Rendering.AtlasShaders.WarmupURPLitShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupURPLitShader(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4858 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76288);
    bRam0000000003eb4858 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_48,param_2,8,uVar2,0);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_60,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_a8,extraout_x1,0,uVar2,0);
    uStack_b8 = uStack_a0;
    uStack_c0 = uStack_a8;
    uStack_b0 = uStack_98;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_c0,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,extraout_x1,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar1;
}



// ============================================================
// RVA: 0x146d4a0 | Atlas.Rendering.AtlasShaders.WarmupUIShader
// ============================================================

long Atlas_Rendering_AtlasShaders__WarmupUIShader(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4859 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d249e0);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d76280);
    bRam0000000003eb4859 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.ShaderVariantCollection_TypeInfo*/ uRam0000000003d249e0);
  /*UnityEngine.ShaderVariantCollection$$.ctor*/ func_0x03264f20(lVar1,0);
  if (lVar1 != 0) {
    /*UnityEngine.ShaderVariantCollection$$Clear*/ func_0x03264ea0(lVar1,0);
    uVar2 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.ShaderVariantCollection.ShaderVariant$$.ctor*/ func_0x03281c60(&uStack_48,param_2,0,uVar2,0);
    uStack_58 = uStack_40;
    uStack_60 = uStack_48;
    uStack_50 = uStack_38;
    /*UnityEngine.ShaderVariantCollection$$Add*/ func_0x03264fb4(lVar1,&uStack_60,0);
    if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = Atlas_Rendering_AtlasShaders__Warmup
                      (/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0,param_2,lVar1,
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70));
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(lVar1 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  return lVar1;
}



// ============================================================
// RVA: 0x146d5cc | Atlas.Rendering.AtlasShaders..ctor
// ============================================================

undefined1  [16] Atlas_Rendering_AtlasShaders___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb485a & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0);
    bRam0000000003eb485a = 1;
  }
  if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xb8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x146d648 | Atlas.Rendering.AtlasShaders..cctor
// ============================================================

long Atlas_Rendering_AtlasShaders___cctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb485b & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    func_0x00f78a20(0x3d1f5f0);
    func_0x00f78a20(0x3d777d0);
    func_0x00f78a20(0x3d77528);
    func_0x00f78a20(0x3d777b8);
    func_0x00f78a20(0x3d777e8);
    func_0x00f78a20(0x3d773c0);
    bRam0000000003eb485b = 1;
  }
  uVar2 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ToonHighToneColour')*/ uRam0000000003d777b8,0);
  **(undefined4 **)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) = uVar2;
  uVar2 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ToonMidToneColour')*/ uRam0000000003d777e8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 4) = uVar2;
  uVar2 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ToonLowToneColour')*/ uRam0000000003d777d0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 8) = uVar2;
  uVar2 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ProjectionShadowColour')*/ uRam0000000003d773c0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0xc) = uVar2;
  uVar2 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ShadowColourFade')*/ uRam0000000003d77528,0);
  lVar4 = *(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  *(undefined2 *)(lVar4 + 0x14) = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  /*UnityEngine.Rendering.VertexAttributeDescriptor$$.ctor*/ func_0x0327d3b0(&uStack_60,0,0,3,0,0);
  lVar4 = *(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
  *(undefined8 *)(lVar4 + 0x20) = uStack_58;
  *(undefined8 *)(lVar4 + 0x18) = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  /*UnityEngine.Rendering.VertexAttributeDescriptor$$.ctor*/ func_0x0327d3b0(&uStack_70,1,0,3,0,0);
  lVar4 = *(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
  *(undefined8 *)(lVar4 + 0x30) = uStack_68;
  *(undefined8 *)(lVar4 + 0x28) = uStack_70;
  uStack_80 = 0;
  uStack_78 = 0;
  /*UnityEngine.Rendering.VertexAttributeDescriptor$$.ctor*/ func_0x0327d3b0(&uStack_80,2,0,3,0,0);
  lVar4 = *(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
  *(undefined8 *)(lVar4 + 0x40) = uStack_78;
  *(undefined8 *)(lVar4 + 0x38) = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  /*UnityEngine.Rendering.VertexAttributeDescriptor$$.ctor*/ func_0x0327d3b0(&uStack_90,4,0,2,0,0);
  lVar4 = *(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
  *(undefined8 *)(lVar4 + 0x50) = uStack_88;
  *(undefined8 *)(lVar4 + 0x48) = uStack_90;
  uStack_a0 = 0;
  uStack_98 = 0;
  /*UnityEngine.Rendering.VertexAttributeDescriptor$$.ctor*/ func_0x0327d3b0(&uStack_a0,5,0,2,0,0);
  lVar4 = *(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8);
  *(undefined8 *)(lVar4 + 0x60) = uStack_98;
  *(undefined8 *)(lVar4 + 0x58) = uStack_a0;
  lVar4 = func_0x00f78a34(/*UnityEngine.Rendering.VertexAttributeDescriptor[]_TypeInfo*/ uRam0000000003d1f5f0,2);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x18);
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x20)
      ;
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      if (*(int *)(lVar4 + 0x18) != 1) {
        uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x28);
        *(undefined8 *)(lVar4 + 0x38) =
             *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x30);
        *(undefined8 *)(lVar4 + 0x30) = uVar3;
        *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x68) = lVar4;
        lVar4 = func_0x00f78a34(/*UnityEngine.Rendering.VertexAttributeDescriptor[]_TypeInfo*/ uRam0000000003d1f5f0,3);
        if (lVar4 == 0) goto LAB_0146da28;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 != 0) {
          uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x18);
          *(undefined8 *)(lVar4 + 0x28) =
               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x20);
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
          if (uVar1 != 1) {
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x28);
            *(undefined8 *)(lVar4 + 0x38) =
                 *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x30);
            *(undefined8 *)(lVar4 + 0x30) = uVar3;
            if (2 < uVar1) {
              uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x48);
              *(undefined8 *)(lVar4 + 0x48) =
                   *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x50);
              *(undefined8 *)(lVar4 + 0x40) = uVar3;
              *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x70) = lVar4;
              lVar4 = func_0x00f78a34(/*UnityEngine.Rendering.VertexAttributeDescriptor[]_TypeInfo*/ uRam0000000003d1f5f0,2);
              if (lVar4 == 0) goto LAB_0146da28;
              if (*(int *)(lVar4 + 0x18) != 0) {
                uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x18);
                *(undefined8 *)(lVar4 + 0x28) =
                     *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x20);
                *(undefined8 *)(lVar4 + 0x20) = uVar3;
                if (*(int *)(lVar4 + 0x18) != 1) {
                  uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x48);
                  *(undefined8 *)(lVar4 + 0x38) =
                       *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x50);
                  *(undefined8 *)(lVar4 + 0x30) = uVar3;
                  *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x78) = lVar4;
                  lVar4 = func_0x00f78a34(/*UnityEngine.Rendering.VertexAttributeDescriptor[]_TypeInfo*/ uRam0000000003d1f5f0,5);
                  if (lVar4 == 0) goto LAB_0146da28;
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 != 0) {
                    uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x18);
                    *(undefined8 *)(lVar4 + 0x28) =
                         *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x20);
                    *(undefined8 *)(lVar4 + 0x20) = uVar3;
                    if (uVar1 != 1) {
                      uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x28);
                      *(undefined8 *)(lVar4 + 0x38) =
                           *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x30);
                      *(undefined8 *)(lVar4 + 0x30) = uVar3;
                      if (2 < uVar1) {
                        uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x38);
                        *(undefined8 *)(lVar4 + 0x48) =
                             *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x40);
                        *(undefined8 *)(lVar4 + 0x40) = uVar3;
                        if (uVar1 != 3) {
                          uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x48);
                          *(undefined8 *)(lVar4 + 0x58) =
                               *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x50);
                          *(undefined8 *)(lVar4 + 0x50) = uVar3;
                          if (4 < uVar1) {
                            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x58);
                            *(undefined8 *)(lVar4 + 0x68) =
                                 *(undefined8 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x60);
                            *(undefined8 *)(lVar4 + 0x60) = uVar3;
                            *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x80) = lVar4;
                            return lVar4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
LAB_0146da28:
  lVar4 = func_0x00f78af4();
  return *(long *)(lVar4 + 0x10);
}



