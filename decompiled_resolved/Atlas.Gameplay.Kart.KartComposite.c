// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartComposite

// ============================================================
// RVA: 0x15c16e4 | Atlas.Gameplay.Kart.KartComposite.get_KartPhysicsRootObject
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb52e7 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52e7 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      if (pcRam0000000003ebf190 == (code *)0x0) {
        pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
      }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000003ebf190)(lVar2);
      return uVar3;
    }
    lVar2 = func_0x00f78af4();
    return *(undefined8 *)(lVar2 + 0x10);
  }
  return 0;
}



// ============================================================
// RVA: 0x15c1784 | Atlas.Gameplay.Kart.KartComposite.get_KartPhysics
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartPhysics(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15c178c | Atlas.Gameplay.Kart.KartComposite.get_KartRootBehaviour
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartRootBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15c1794 | Atlas.Gameplay.Kart.KartComposite.get_KartPhysicsInput
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsInput(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15c179c | Atlas.Gameplay.Kart.KartComposite.get_KartVisualComposite
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartVisualComposite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15c17a4 | Atlas.Gameplay.Kart.KartComposite.get_KartVisualAnimation
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartVisualAnimation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15c17ac | Atlas.Gameplay.Kart.KartComposite.get_KartUsableManager
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartUsableManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15c17b4 | Atlas.Gameplay.Kart.KartComposite.get_Replicator
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_Replicator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15c17bc | Atlas.Gameplay.Kart.KartComposite.get_NetworkPlayer
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__get_NetworkPlayer(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x15c17cc | Atlas.Gameplay.Kart.KartComposite.get_NetworkVisualState
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartComposite__get_NetworkVisualState(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb52f7 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52f7 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if (iVar1 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x80) == 0) {
      lVar3 = func_0x00f78af4();
      if (*(long *)(lVar3 + 0x20) != 0) {
        return (ulong)(*(int *)(*(long *)(lVar3 + 0x20) + 0x10) == 2);
      }
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 0x68);
    }
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = uVar5;
    auVar11 = NEON_ushl(auVar9,_UNK_033f8ae0,8);
    uVar2 = (ulong)auVar11[0];
    uVar6 = (ulong)auVar11[8];
    auVar9 = NEON_ushl(auVar9,_UNK_033f8ad0,8);
    uVar4 = (ulong)auVar9[0];
    uVar7 = (ulong)auVar9[8];
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = uVar4;
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar2;
  auVar9 = NEON_ushl(auVar11,_UNK_033f8af0,8);
  auVar11 = NEON_ushl(auVar12,_UNK_033f8b00,8);
  auVar10[0] = auVar9[0] | auVar11[0];
  auVar10[1] = auVar9[1] | auVar11[1];
  auVar10[2] = auVar9[2] | auVar11[2];
  auVar10[3] = auVar9[3] | auVar11[3];
  auVar10[4] = auVar9[4] | auVar11[4];
  auVar10[5] = auVar9[5] | auVar11[5];
  auVar10[6] = auVar9[6] | auVar11[6];
  auVar10[7] = auVar9[7] | auVar11[7];
  auVar10[8] = auVar9[8] | auVar11[8];
  auVar10[9] = auVar9[9] | auVar11[9];
  auVar10[10] = auVar9[10] | auVar11[10];
  auVar10[0xb] = auVar9[0xb] | auVar11[0xb];
  auVar10[0xc] = auVar9[0xc] | auVar11[0xc];
  auVar10[0xd] = auVar9[0xd] | auVar11[0xd];
  auVar10[0xe] = auVar9[0xe] | auVar11[0xe];
  auVar10[0xf] = auVar9[0xf] | auVar11[0xf];
  auVar9 = NEON_ext(auVar10,auVar10,8,1);
  return CONCAT17(auVar10[7] | auVar9[7],
                  CONCAT16(auVar10[6] | auVar9[6],
                           CONCAT15(auVar10[5] | auVar9[5],
                                    CONCAT14(auVar10[4] | auVar9[4],
                                             CONCAT13(auVar10[3] | auVar9[3],
                                                      CONCAT12(auVar10[2] | auVar9[2],
                                                               CONCAT11(auVar10[1] | auVar9[1],
                                                                        auVar10[0] | auVar9[0]))))))
                 ) | uVar5 & 0xffff;
}



// ============================================================
// RVA: 0x15c17d0 | Atlas.Gameplay.Kart.KartComposite.GetNetworkVisuals
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartComposite__GetNetworkVisuals(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb52f7 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52f7 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if (iVar1 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar7 = 0;
    uVar2 = 0;
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x80) == 0) {
      lVar3 = func_0x00f78af4();
      if (*(long *)(lVar3 + 0x20) != 0) {
        return (ulong)(*(int *)(*(long *)(lVar3 + 0x20) + 0x10) == 2);
      }
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 0x68);
    }
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = uVar5;
    auVar11 = NEON_ushl(auVar9,_UNK_033f8ae0,8);
    uVar2 = (ulong)auVar11[0];
    uVar6 = (ulong)auVar11[8];
    auVar9 = NEON_ushl(auVar9,_UNK_033f8ad0,8);
    uVar4 = (ulong)auVar9[0];
    uVar7 = (ulong)auVar9[8];
  }
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = uVar4;
  auVar12._8_8_ = uVar6;
  auVar12._0_8_ = uVar2;
  auVar9 = NEON_ushl(auVar11,_UNK_033f8af0,8);
  auVar11 = NEON_ushl(auVar12,_UNK_033f8b00,8);
  auVar10[0] = auVar9[0] | auVar11[0];
  auVar10[1] = auVar9[1] | auVar11[1];
  auVar10[2] = auVar9[2] | auVar11[2];
  auVar10[3] = auVar9[3] | auVar11[3];
  auVar10[4] = auVar9[4] | auVar11[4];
  auVar10[5] = auVar9[5] | auVar11[5];
  auVar10[6] = auVar9[6] | auVar11[6];
  auVar10[7] = auVar9[7] | auVar11[7];
  auVar10[8] = auVar9[8] | auVar11[8];
  auVar10[9] = auVar9[9] | auVar11[9];
  auVar10[10] = auVar9[10] | auVar11[10];
  auVar10[0xb] = auVar9[0xb] | auVar11[0xb];
  auVar10[0xc] = auVar9[0xc] | auVar11[0xc];
  auVar10[0xd] = auVar9[0xd] | auVar11[0xd];
  auVar10[0xe] = auVar9[0xe] | auVar11[0xe];
  auVar10[0xf] = auVar9[0xf] | auVar11[0xf];
  auVar9 = NEON_ext(auVar10,auVar10,8,1);
  return CONCAT17(auVar10[7] | auVar9[7],
                  CONCAT16(auVar10[6] | auVar9[6],
                           CONCAT15(auVar10[5] | auVar9[5],
                                    CONCAT14(auVar10[4] | auVar9[4],
                                             CONCAT13(auVar10[3] | auVar9[3],
                                                      CONCAT12(auVar10[2] | auVar9[2],
                                                               CONCAT11(auVar10[1] | auVar9[1],
                                                                        auVar10[0] | auVar9[0]))))))
                 ) | uVar5 & 0xffff;
}



// ============================================================
// RVA: 0x15c18ec | Atlas.Gameplay.Kart.KartComposite.get_IsLocalPlayerInput
// ============================================================

ulong Atlas_Gameplay_Kart_KartComposite__get_IsLocalPlayerInput(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return (ulong)(*(int *)(*(long *)(param_1 + 0x20) + 0x10) == 2);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x68);
}



// ============================================================
// RVA: 0x15c1914 | Atlas.Gameplay.Kart.KartComposite.get_KartAi
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartAi(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15c191c | Atlas.Gameplay.Kart.KartComposite.get_KartAudio
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_KartAudio(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15c1924 | Atlas.Gameplay.Kart.KartComposite.get_GameContext
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_GameContext(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15c192c | Atlas.Gameplay.Kart.KartComposite.get_IsRespawning
// ============================================================

uint Atlas_Gameplay_Kart_KartComposite__get_IsRespawning(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar1 == 0)) {
    lVar1 = func_0x00f78af4();
    return *(uint *)(lVar1 + 0x9c);
  }
  if (((*(float *)(lVar1 + 0x8c) <= 0.0) && (*(float *)(lVar1 + 0x94) <= 0.0)) &&
     (*(float *)(lVar1 + 0xa8) <= 0.0)) {
    return (uint)(0.0 < *(float *)(lVar1 + 0xa0));
  }
  return 1;
}



// ============================================================
// RVA: 0x15c1954 | Atlas.Gameplay.Kart.KartComposite.get_KartManagerIndex
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartComposite__get_KartManagerIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x15c195c | Atlas.Gameplay.Kart.KartComposite.get_CurrentShadingBlend
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartComposite__get_CurrentShadingBlend(long param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}



// ============================================================
// RVA: 0x15c1964 | Atlas.Gameplay.Kart.KartComposite.get_KartToCameraDistance
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartComposite__get_KartToCameraDistance(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf4);
}



// ============================================================
// RVA: 0x15c196c | Atlas.Gameplay.Kart.KartComposite.get_CurrentShadingParams
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__get_CurrentShadingParams
               (undefined4 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000003eb52e8 & 1) == 0) {
    func_0x00f78a20(0x3d22f80);
    bRam0000000003eb52e8 = 1;
  }
  uVar9 = *(undefined4 *)(param_6 + 0xe8);
  if (((*(ushort *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Lighting.LightWorld_TypeInfo*/ lRam0000000003d22f80 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Atlas.Lighting.LightWorld$$ColorToFloat4*/ func_0x01484390(uVar9,param_6 + 0xac,0);
  uVar9 = param_3;
  uVar5 = param_4;
  uVar7 = param_5;
  uVar2 = /*Atlas.Lighting.LightWorld$$ColorToFloat4*/ func_0x01484390(0x3f800000,param_6 + 0xbc,0);
  uVar4 = uVar9;
  uVar6 = uVar5;
  uVar8 = uVar7;
  uVar3 = /*Atlas.Lighting.LightWorld$$ColorToFloat4*/ func_0x01484390(0x3f800000,param_6 + 0xcc,0);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  param_1[3] = uVar8;
  param_1[4] = uVar2;
  param_1[5] = uVar9;
  param_1[6] = uVar5;
  param_1[7] = uVar7;
  param_1[8] = uVar1;
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  return;
}



// ============================================================
// RVA: 0x15c1a60 | Atlas.Gameplay.Kart.KartComposite.get_IsAI
// ============================================================

bool Atlas_Gameplay_Kart_KartComposite__get_IsAI(long param_1)

{
  return (*(uint *)(param_1 + 0x50) & 0xfffffffe) == 2;
}



// ============================================================
// RVA: 0x15c1a74 | Atlas.Gameplay.Kart.KartComposite.get_SpawnIndex
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartComposite__get_SpawnIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}



// ============================================================
// RVA: 0x15c1a7c | Atlas.Gameplay.Kart.KartComposite.set_SpawnIndex
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__set_SpawnIndex(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}



// ============================================================
// RVA: 0x15c1a84 | Atlas.Gameplay.Kart.KartComposite.get_GameContextPlayer
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartComposite__get_GameContextPlayer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15c1a8c | Atlas.Gameplay.Kart.KartComposite.set_GameContextPlayer
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__set_GameContextPlayer(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return;
}



// ============================================================
// RVA: 0x15c1a94 | Atlas.Gameplay.Kart.KartComposite.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c1bf0 | Atlas.Gameplay.Kart.KartComposite.PostInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c1d34 | Atlas.Gameplay.Kart.KartComposite.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c1f4c | Atlas.Gameplay.Kart.KartComposite.StartKartAudio
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c1f60 | Atlas.Gameplay.Kart.KartComposite.PreFixedUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartComposite__PreFixedUpdate(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam0000000003eb52ec & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c78);
    bRam0000000003eb52ec = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
  if (param_2 == (long *)0x0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15c2084);
    (*pcVar1)();
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_015c2038;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
LAB_015c2038:
  fVar7 = (float)(*(code *)*puVar2)(param_2,puVar2[1]);
  if ((_UNK_033f8148 <= fVar7) && (*(long *)(param_1 + 0x10) != 0)) {
    /*Atlas.Gameplay.Kart.KartPhysics$$PreFixedUpdate*/ func_0x015c20d0(*(long *)(param_1 + 0x10),param_2);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar6);
  return;
}



// ============================================================
// RVA: 0x15c21fc | Atlas.Gameplay.Kart.KartComposite.FixedUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartComposite__FixedUpdate(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam0000000003eb52ed & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c78);
    bRam0000000003eb52ed = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
  if (param_2 == (long *)0x0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15c231c);
    (*pcVar1)();
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_015c22d4;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
LAB_015c22d4:
  fVar7 = (float)(*(code *)*puVar2)(param_2,puVar2[1]);
  if ((_UNK_033f8148 <= fVar7) && (*(long *)(param_1 + 0x10) != 0)) {
    /*Atlas.Gameplay.Kart.KartPhysics$$FixedUpdate*/ func_0x015c2368();
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar6);
  return;
}



// ============================================================
// RVA: 0x15c2418 | Atlas.Gameplay.Kart.KartComposite.PostFixedUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartComposite__PostFixedUpdate(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam0000000003eb52ee & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c78);
    bRam0000000003eb52ee = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
  if (param_2 == (long *)0x0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15c253c);
    (*pcVar1)();
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_015c24f0;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
LAB_015c24f0:
  fVar7 = (float)(*(code *)*puVar2)(param_2,puVar2[1]);
  if ((_UNK_033f8148 <= fVar7) && (*(long *)(param_1 + 0x10) != 0)) {
    /*Atlas.Gameplay.Kart.KartPhysics$$PostFixedUpdate*/ func_0x015c2588(*(long *)(param_1 + 0x10),param_2);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar6);
  return;
}



// ============================================================
// RVA: 0x15c2644 | Atlas.Gameplay.Kart.KartComposite.EarlyUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__EarlyUpdate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb52ef & 1) == 0) {
    func_0x00f78a20(0x3d22c78);
    bRam0000000003eb52ef = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Atlas.Gameplay.Kart.KartPhysics$$EarlyUpdate*/ func_0x015c2700(*(long *)(param_1 + 0x10),param_2);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x15c2830 | Atlas.Gameplay.Kart.KartComposite.Update
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__Update(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000003eb52f0 & 1) == 0) {
    func_0x00f78a20(0x3d57090);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d71368);
    bRam0000000003eb52f0 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x28);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1b8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x1c0));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*Atlas.Gameplay.Kart.KartPhysicsInput$$Update*/ func_0x015db698(*(long *)(param_1 + 0x20),param_2,0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    /*Atlas.Gameplay.Kart.KartVisualAnimation$$Update*/ func_0x015e4464(*(long *)(param_1 + 0x30),param_2,0);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    /*Atlas.Gameplay.Kart.KartUsableManager$$Update*/ func_0x015e1f1c(*(long *)(param_1 + 0x38),param_2,0);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    /*Atlas.Audio.KartAudio$$Update*/ func_0x015bd980(*(long *)(param_1 + 0x70),param_2,0);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00f78af4();
    goto code_r0x015c2b98;
  }
  fVar10 = *(float *)(*(long *)(param_1 + 0x20) + 0x60);
  if (0.0 < fVar10 != (*(char *)(param_1 + 0xa8) != '\0')) {
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00f78af4();
      goto code_r0x015c2b98;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x40);
    if (lVar3 == 0) {
      func_0x00f78af4();
      goto code_r0x015c2b98;
    }
    /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnDriftButtonStateChanged*/ func_0x015a6038(lVar3,*(undefined8 *)(param_1 + 0x90),0.0 < fVar10,0);
    *(bool *)(param_1 + 0xa8) = 0.0 < fVar10;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    func_0x00f78af4();
    goto code_r0x015c2b98;
  }
  if (*(char *)(lVar3 + 400) == '\0') {
    if (param_2 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015c2b98;
    }
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto code_r0x015c2a10;
        }
        piVar6 = piVar6 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
code_r0x015c2a10:
    (*(code *)*puVar5)(param_2,puVar5[1]);
    /*Atlas.Gameplay.Kart.KartComposite$$UpdateShading*/ func_0x015c2c30(param_1);
  }
  else {
    /*Atlas.Gameplay.Kart.KartVisualComposite$$Update*/ func_0x015eb740(lVar3,0);
  }
  /*Atlas.Gameplay.Kart.KartComposite$$PerformMapBoundsCheckUpdate*/ func_0x015c2ddc(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0xf8) == 0) {
      func_0x00f78af4();
      goto code_r0x015c2b98;
    }
    /*Atlas.Gameplay.PortalVFXBehaviour$$OnUpdate*/ func_0x014c45a8(*(long *)(param_1 + 0xf8),param_2,0);
    fVar10 = *(float *)(param_1 + 0x100);
    if (1.5 <= fVar10) {
      if (*(long *)(param_1 + 0xf8) == 0) {
        func_0x00f78af4();
        goto code_r0x015c2b98;
      }
      /*Atlas.Gameplay.PortalVFXBehaviour$$Reset*/ func_0x014c353c(*(long *)(param_1 + 0xf8),0);
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x00f78af4();
        goto code_r0x015c2b98;
      }
      /*Atlas.Contexts.GameContextBase$$ReturnSpawnedObject<PortalVFXBehaviour>*/ func_0x0185c07c(*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xf8),/*STR('PortalVFXBehaviour')*/ uRam0000000003d71368
                      ,uRam0000000003d57090);
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      fVar10 = 0.0;
    }
    if (param_2 == (long *)0x0) {
      func_0x00f78af4();
code_r0x015c2b98:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15c2b9c);
      (*pcVar1)();
    }
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x015c2b24;
        }
        piVar6 = piVar6 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015c2b24:
    fVar9 = (float)(*(code *)*puVar5)(param_2,puVar5[1]);
    *(float *)(param_1 + 0x100) = fVar10 + fVar9;
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar7);
  return;
}



// ============================================================
// RVA: 0x15c2c30 | Atlas.Gameplay.Kart.KartComposite.UpdateShading
// ============================================================

/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Gameplay_Kart_KartComposite__UpdateShading
                  (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
                  long param_5)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  dword *pdVar7;
  ulong uVar8;
  undefined4 *puVar9;
  dword *pdVar10;
  dword *pdVar11;
  long lVar12;
  dword *pdVar13;
  dword *extraout_x1;
  long lVar14;
  ulong extraout_x1_00;
  int iVar15;
  dword dVar16;
  long lVar17;
  dword *pdVar18;
  dword *pdVar19;
  dword *pdVar20;
  long *plVar21;
  long lVar22;
  undefined8 ******ppppppuVar23;
  dword *pdVar24;
  undefined8 unaff_x22;
  undefined8 uVar25;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined *puVar28;
  int iVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined8 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 unaff_d9;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 auStack_238 [2];
  ulong uStack_228;
  dword *pdStack_220;
  dword *pdStack_218;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  dword *pdStack_1e0;
  dword *pdStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [8];
  ulong uStack_1b8;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  ulong uStack_158;
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  undefined8 *******pppppppuStack_e0;
  dword *pdStack_d8;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  
  uVar8 = (ulong)(uint)param_1;
  if ((bRam0000000003eb52f1 & 1) == 0) {
    func_0x00f78a20(0x3d23898);
    func_0x00f78a20(0x3d24e98);
    bRam0000000003eb52f1 = 1;
  }
  if ((*(long *)(param_5 + 0x10) != 0) &&
     (lVar17 = *(long *)(*(long *)(param_5 + 0x10) + 0x60), lVar17 != 0)) {
    plVar21 = *(long **)(lVar17 + 200);
    if (plVar21 == (long *)0x0) {
      if (*(long *)(param_5 + 0x30) != 0) {
        iVar6 = /*Atlas.Gameplay.Kart.KartVisualAnimation$$get_HitInvuln*/ func_0x015e41cc(*(long *)(param_5 + 0x30),0);
        if (iVar6 == 0) {
          *(undefined4 *)(param_5 + 0xec) = 0;
          uVar33 = 0;
          uVar25 = 0;
          *(undefined8 *)(param_5 + 0xe4) = 0;
          *(undefined8 *)(param_5 + 0xdc) = 0;
          *(undefined8 *)(param_5 + 0xd4) = 0;
          *(undefined8 *)(param_5 + 0xcc) = 0;
          *(undefined8 *)(param_5 + 0xc4) = 0;
          *(undefined8 *)(param_5 + 0xbc) = 0;
        }
        else {
          lVar17 = *(long *)(param_5 + 0x40);
          if (lVar17 == 0) goto LAB_015c2dd8;
          uVar25 = *(undefined8 *)(lVar17 + 0x78);
          uVar33 = *(undefined8 *)(lVar17 + 0x70);
          uVar38 = *(undefined8 *)(lVar17 + 0x88);
          uVar37 = *(undefined8 *)(lVar17 + 0x80);
          uVar43 = *(undefined8 *)(lVar17 + 0x98);
          uVar42 = *(undefined8 *)(lVar17 + 0x90);
          uVar44 = *(undefined8 *)(lVar17 + 0xa0);
          *(undefined8 *)(param_5 + 0xe4) = *(undefined8 *)(lVar17 + 0xa8);
          *(undefined8 *)(param_5 + 0xdc) = uVar44;
          *(undefined8 *)(param_5 + 0xd4) = uVar43;
          *(undefined8 *)(param_5 + 0xcc) = uVar42;
          *(undefined8 *)(param_5 + 0xc4) = uVar38;
          *(undefined8 *)(param_5 + 0xbc) = uVar37;
        }
        *(undefined8 *)(param_5 + 0xb4) = uVar25;
        *(undefined8 *)(param_5 + 0xac) = uVar33;
        fVar39 = 1.0;
LAB_015c2dbc:
        fVar30 = *(float *)(param_5 + 0xdc);
        if (fVar30 == 0.0) {
          *(undefined4 *)(param_5 + 0xdc) = 0x3f800000;
          fVar30 = 1.0;
        }
        fVar30 = (float)_sinf((1.0 / fVar30) * _UNK_033f8b30 * param_1);
        fVar30 = (*(float *)(param_5 + 0xe0) + *(float *)(param_5 + 0xe4)) * 0.5 +
                 fVar30 * (*(float *)(param_5 + 0xe0) - *(float *)(param_5 + 0xe4)) * 0.5;
        *(float *)(param_5 + 0xec) = fVar30;
        pdVar11 = (dword *)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0,fVar30,fVar39,0);
        *(undefined4 *)(param_5 + 0xec) = extraout_s0;
        return pdVar11;
      }
    }
    else {
      uVar33 = /*Atlas.Gameplay.Usables.Usable$$get_TimeAlive*/ func_0x01523800(plVar21,0);
      fVar30 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar33,(int)plVar21[8],0);
      lVar17 = *plVar21;
      if ((*(byte *)(lVar17 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.SuperShieldUsable_TypeInfo*/ lRam0000000003d24e98 + 300)) ||
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.SuperShieldUsable_TypeInfo*/ lRam0000000003d24e98 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Usables.SuperShieldUsable_TypeInfo*/ lRam0000000003d24e98)) {
        fVar39 = 1.0;
        if ((*(byte *)(lVar17 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.NormalShieldUsable_TypeInfo*/ lRam0000000003d23898 + 300)) ||
           (fVar39 = 1.0,
           *(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.NormalShieldUsable_TypeInfo*/ lRam0000000003d23898 + 300) * 8 + -8
                    ) != /*Atlas.Gameplay.Usables.NormalShieldUsable_TypeInfo*/ lRam0000000003d23898)) goto LAB_015c2dbc;
        lVar17 = *(long *)(param_5 + 0x40);
        if (lVar17 != 0) {
          fVar34 = *(float *)(lVar17 + 0x134);
          bVar5 = NAN(fVar34) || NAN(fVar30);
          uVar25 = *(undefined8 *)(lVar17 + 0xfc);
          uVar33 = *(undefined8 *)(lVar17 + 0xf4);
          uVar43 = *(undefined8 *)(lVar17 + 0x10c);
          uVar42 = *(undefined8 *)(lVar17 + 0x104);
          uVar38 = *(undefined8 *)(lVar17 + 0x11c);
          uVar37 = *(undefined8 *)(lVar17 + 0x114);
          uVar45 = *(undefined8 *)(lVar17 + 300);
          uVar44 = *(undefined8 *)(lVar17 + 0x124);
          goto LAB_015c2da4;
        }
      }
      else {
        lVar17 = *(long *)(param_5 + 0x40);
        if (lVar17 != 0) {
          fVar34 = *(float *)(lVar17 + 0xf0);
          bVar5 = NAN(fVar34) || NAN(fVar30);
          uVar25 = *(undefined8 *)(lVar17 + 0xb8);
          uVar33 = *(undefined8 *)(lVar17 + 0xb0);
          uVar43 = *(undefined8 *)(lVar17 + 200);
          uVar42 = *(undefined8 *)(lVar17 + 0xc0);
          uVar38 = *(undefined8 *)(lVar17 + 0xd8);
          uVar37 = *(undefined8 *)(lVar17 + 0xd0);
          uVar45 = *(undefined8 *)(lVar17 + 0xe8);
          uVar44 = *(undefined8 *)(lVar17 + 0xe0);
LAB_015c2da4:
          fVar39 = fVar30 / fVar34;
          *(undefined8 *)(param_5 + 0xe4) = uVar45;
          *(undefined8 *)(param_5 + 0xdc) = uVar44;
          *(undefined8 *)(param_5 + 0xd4) = uVar38;
          *(undefined8 *)(param_5 + 0xcc) = uVar37;
          if (fVar34 == fVar30 || fVar34 < fVar30 != bVar5) {
            fVar39 = 1.0;
          }
          *(undefined8 *)(param_5 + 0xc4) = uVar43;
          *(undefined8 *)(param_5 + 0xbc) = uVar42;
          *(undefined8 *)(param_5 + 0xb4) = uVar25;
          *(undefined8 *)(param_5 + 0xac) = uVar33;
          goto LAB_015c2dbc;
        }
      }
    }
  }
LAB_015c2dd8:
  pdVar10 = (dword *)func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Kart_KartComposite__PerformMapBoundsCheckUpdate;
  pdVar11 = pdVar10;
  ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb52f2 & 1) == 0) {
    func_0x00f78a20(0x3d57088);
    pdVar11 = (dword *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb52f2 = 1;
  }
  if (*(long *)(pdVar10 + 0x1e) == 0) {
    return pdVar11;
  }
  uVar33 = *(undefined8 *)(*(long *)(pdVar10 + 0x1e) + 0x1d0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar11 = (dword *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar33,0,0);
  if (((ulong)pdVar11 & 1) != 0) {
    return pdVar11;
  }
  if (*(long *)(pdVar10 + 0x1e) == 0) {
code_r0x015c2ff8:
    pdVar11 = (dword *)func_0x00f78af4();
    if (*(long *)(pdVar11 + 4) == 0) {
      lVar17 = func_0x00f78af4();
      return (dword *)(lVar17 + 0x194);
    }
    return pdVar11;
  }
  pdVar11 = (dword *)/*Atlas.Contexts.GameContextBase$$IsActiveState<object>*/ func_0x0185c060(*(long *)(pdVar10 + 0x1e),uRam0000000003d57088);
  if ((int)pdVar11 == 0) {
    return pdVar11;
  }
  if (*(long *)(pdVar10 + 4) == 0) {
    return pdVar11;
  }
  lVar17 = *(long *)(*(long *)(pdVar10 + 4) + 0x60);
  if (lVar17 == 0) {
    return (dword *)0x0;
  }
  pdVar11 = (dword *)/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(lVar17,0);
  if (((ulong)pdVar11 & 1) != 0) {
    return pdVar11;
  }
  if ((*(long *)(pdVar10 + 0x1e) == 0) || (lVar17 = *(long *)(pdVar10 + 4), lVar17 == 0))
  goto code_r0x015c2ff8;
  lVar22 = *(long *)(*(long *)(pdVar10 + 0x1e) + 0x1d0);
  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar17 + 0x2d0),*(undefined4 *)(lVar17 + 0x2d4),
                  *(undefined4 *)(lVar17 + 0x2d8),0);
  if (lVar22 == 0) goto code_r0x015c2ff8;
  iVar6 = /*Atlas.Maps.MapBehaviour$$IsNearBounds*/ func_0x0148d4c0(lVar22,0);
  if (iVar6 != 0) {
    if (*(long *)(pdVar10 + 4) == 0) goto code_r0x015c2ff8;
    /*Atlas.Gameplay.Kart.KartPhysics$$PrintState*/ func_0x015c30c4();
  }
  if ((*(long *)(pdVar10 + 0x1e) == 0) || (lVar17 = *(long *)(pdVar10 + 4), lVar17 == 0))
  goto code_r0x015c2ff8;
  lVar22 = *(long *)(*(long *)(pdVar10 + 0x1e) + 0x1d0);
  uVar35 = *(undefined4 *)(lVar17 + 0x2d4);
  uVar40 = *(undefined4 *)(lVar17 + 0x2d8);
  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar17 + 0x2d0),uVar35,uVar40,0);
  if (lVar22 == 0) goto code_r0x015c2ff8;
  pdVar11 = (dword *)/*Atlas.Maps.MapBehaviour$$IsOutsideBounds*/ func_0x0148d45c(lVar22,0);
  if ((int)pdVar11 == 0) {
    return pdVar11;
  }
  if ((*(long *)(pdVar10 + 0x1e) == 0) ||
     (lVar17 = *(long *)(*(long *)(pdVar10 + 0x1e) + 0x1d0), lVar17 == 0)) goto code_r0x015c2ff8;
  lVar17 = /*Atlas.Maps.MapBehaviour$$GetSpawnLocation*/ func_0x0148d384(lVar17,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar11 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
  if ((int)pdVar11 == 0) {
    return pdVar11;
  }
  if (lVar17 == 0) goto code_r0x015c2ff8;
  uVar31 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar17,0);
  uVar36 = uVar35;
  uVar41 = uVar40;
  uVar32 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar17,0);
  ppppppuVar23 = (undefined8 ******)0x5;
  pdVar11 = pdVar10;
  if ((bRam0000000003eb52f4 & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d59b90);
    func_0x00f78a20(0x3d59ba8);
    func_0x00f78a20(0x3d59bb0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    pdVar11 = (dword *)func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52f4 = 1;
  }
  if (*(long *)(pdVar10 + 4) == 0) {
    return pdVar11;
  }
  lVar17 = *(long *)(*(long *)(pdVar10 + 4) + 0x60);
  if (lVar17 == 0) {
    return (dword *)0x0;
  }
  pdVar11 = (dword *)/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(lVar17,0);
  if (((ulong)pdVar11 & 1) != 0) {
    return pdVar11;
  }
  if (*(char *)(pdVar10 + 0x3c) == '\0') {
    return pdVar11;
  }
  lVar17 = *(long *)(pdVar10 + 0x20);
  uVar33 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar11 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
  lVar22 = lVar17;
  uVar25 = 0x3d23990;
  if ((int)pdVar11 != 0) {
    if (*(long *)(pdVar10 + 0x20) == 0) goto code_r0x015c3650;
    if (*(char *)(*(long *)(pdVar10 + 0x20) + 0x44) == '\0') {
      return pdVar11;
    }
  }
  if ((*(long *)(pdVar10 + 0x1e) == 0) ||
     (lVar12 = *(long *)(*(long *)(pdVar10 + 0x1e) + 0x40), uVar25 = uVar33, lVar12 == 0))
  goto code_r0x015c3650;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnBeforeRespawn*/ func_0x015a5ee4(lVar12,*(undefined8 *)(pdVar10 + 0x24),0);
  ppppppuVar23 = (undefined8 ******)/*Atlas.Gameplay.Kart.KartComposite$$GetPortal*/ func_0x015c3a0c(pdVar10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppppppuVar23,0,0);
  if (iVar6 != 0) {
    if (ppppppuVar23 == (undefined8 ******)0x0) goto code_r0x015c3650;
    lVar22 = *(long *)(pdVar10 + 0x1c);
    uVar33 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar23,0);
    if (lVar22 == 0) goto code_r0x015c3650;
    /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(lVar22,uVar33,0);
    lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar23,0);
    if ((*(long *)(pdVar10 + 6) == 0) || (lVar22 = lVar17, lVar17 == 0)) goto code_r0x015c3650;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar17,*(undefined8 *)(*(long *)(pdVar10 + 6) + 0x70),0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar17,0);
    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar17,0);
    /*Atlas.Gameplay.PortalVFXBehaviour$$StartEnteringPortal*/ func_0x014c390c(ppppppuVar23,*(undefined8 *)(pdVar10 + 10),*(undefined8 *)(pdVar10 + 0xe),0);
  }
  /*Atlas.Gameplay.Kart.KartComposite$$RemoveActiveUsables*/ func_0x015c3ae8(pdVar10);
  lVar22 = lVar17;
  if ((*(long *)(pdVar10 + 0xe) != 0) &&
     (iVar6 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(pdVar10 + 0xe),0), iVar6 != 0)) {
    if (*(long *)(pdVar10 + 0xe) == 0) goto code_r0x015c3650;
    plVar21 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(pdVar10 + 0xe),0);
    if (plVar21 != (long *)0x0) {
      lVar22 = 0x3d24a28;
      if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(*plVar21 + 300)) &&
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                   -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
        if (*(long *)(pdVar10 + 0xe) == 0) goto code_r0x015c3650;
        ppppppuVar23 = (undefined8 ******)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(pdVar10 + 0xe),0);
        lVar17 = func_0x00022904(ppppppuVar23,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        lVar22 = 0x3d24a28;
        if (lVar17 == 0) goto code_r0x015c3650;
        plVar21 = (long *)func_0x00022904(ppppppuVar23,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        (**(code **)(*plVar21 + 0x2f8))(plVar21,1,*(undefined8 *)(*plVar21 + 0x300));
      }
    }
  }
  if ((((*(long *)(pdVar10 + 0x1e) == 0) ||
       (lVar17 = *(long *)(*(long *)(pdVar10 + 0x1e) + 0x1c0), lVar17 == 0)) ||
      (*(long *)(pdVar10 + 4) == 0)) ||
     ((lVar17 == 0 || (lVar12 = *(long *)(*(long *)(pdVar10 + 4) + 0x60), lVar12 == 0)))) {
code_r0x015c3650:
    auVar47 = func_0x00f78af4();
    lVar17 = auVar47._0_8_;
    pdStack_f0 = (dword *)uVar25;
    pdStack_e8 = (dword *)lVar22;
    pppppppuStack_e0 = (undefined8 *******)ppppppuVar23;
    pdStack_d8 = pdVar10;
    if ((bRam0000000003eb52f3 & 1) == 0) {
      func_0x00f78a20(0x3d22c78);
      bRam0000000003eb52f3 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar33 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x20);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar33,0);
    if (*(long *)(lVar17 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$LateUpdate*/ func_0x015e5eec(*(long *)(lVar17 + 0x30),auVar47._8_8_,0);
    }
    plVar21 = *(long **)(lVar17 + 0x68);
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x1c8))(plVar21,auVar47._8_8_,*(undefined8 *)(*plVar21 + 0x1d0));
    }
    if (*(long *)(lVar17 + 0x10) != 0) {
      /*Atlas.Gameplay.Kart.KartPhysics$$LateUpdate*/ func_0x015c3760();
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar11 = (dword *)(*pcRam0000000003ec05a0)(uVar33);
    return pdVar11;
  }
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetRespawning*/ func_0x015d9f58(uVar31,uVar35,uVar40,uVar32,uVar36,uVar41,param_4,*(undefined4 *)(lVar17 + 0xd4),
                  lVar12,0);
  if (*(long *)(pdVar10 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar23 = *(undefined8 *******)(*(long *)(pdVar10 + 4) + 0x60);
  uVar25 = 0x3d23a50;
  lVar22 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar22,pdVar10,uRam0000000003d59bb0,0);
  if (ppppppuVar23 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartPortalEntered*/ func_0x015d9aa0(ppppppuVar23,lVar22,0);
  if (*(long *)(pdVar10 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar23 = *(undefined8 *******)(*(long *)(pdVar10 + 4) + 0x60);
  lVar22 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar22,pdVar10,uRam0000000003d59b90,0);
  if (ppppppuVar23 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnStartTransitionEnd*/ func_0x015d9960(ppppppuVar23,lVar22,0);
  if (*(long *)(pdVar10 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar23 = *(undefined8 *******)(*(long *)(pdVar10 + 4) + 0x60);
  lVar22 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar22,pdVar10,uRam0000000003d59ba8,0);
  if (ppppppuVar23 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnTransitionEnd*/ func_0x015d9be0(ppppppuVar23,lVar22,0);
  if (*(long *)(pdVar10 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar23 = *(undefined8 *******)(*(long *)(pdVar10 + 4) + 0x60);
  lVar22 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar22,pdVar10,uRam0000000003d59b88,0);
  if (ppppppuVar23 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartRespawnEnd*/ func_0x015d9820(ppppppuVar23,lVar22,0);
  pdVar11 = *(dword **)(pdVar10 + 0x1c);
  if ((pdVar11 == (dword *)0x0) || (pdVar13 = *(dword **)(pdVar11 + 0x24), pdVar13 == (dword *)0x0))
  goto code_r0x015c3650;
  puVar4 = &stack0xffffffffffffff60;
  if ((bRam0000000003eb47e0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28,pdVar11,0);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e0 = 1;
  }
  pdVar10 = (dword *)0x3eb4000;
  if (pdVar11 != (dword *)0x0) {
    pdVar10 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar11,0);
    lVar17 = 0x28;
    if ((int)pdVar10 == 0) {
      lVar17 = 0x30;
    }
    pdVar19 = *(dword **)((long)pdVar13 + lVar17);
    if (pdVar19 == (dword *)0x0) {
      return pdVar10;
    }
    unaff_x24 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar10 = pdVar19;
    if (*(long *)(pdVar13 + 0x12) != 0) {
      lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      pdVar24 = *(dword **)(*(long *)(pdVar13 + 0x12) + 0xb8);
      uVar33 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar33,uRam0000000003d3bf00);
      uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      uVar33 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      auVar47._8_8_ = uVar25;
      auVar47._0_8_ = uVar33;
      iVar6 = 5;
      puVar28 = &UNK_0145ba68;
      pdVar7 = pdVar11;
      pppppppuVar27 = &ppppppuStack_50;
      goto code_r0x014fe3e8;
    }
  }
  pdVar7 = (dword *)func_0x00f78af4();
  pdVar19 = pdVar7;
  if ((bRam0000000003eb47e1 & 1) == 0) {
    pdVar19 = (dword *)func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e1 = 1;
  }
  pdVar18 = *(dword **)(pdVar7 + 0x12);
  if (pdVar18 == (dword *)0x0) {
    return pdVar19;
  }
  pdVar20 = *(dword **)(pdVar7 + 10);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
    pdVar24 = pdVar18;
    if (pdVar20 == (dword *)0x0) goto code_r0x0145bbac;
code_r0x0145bb48:
    lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar12 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    pdVar19 = *(dword **)(pdVar24 + 0x2e);
    iVar29 = pdVar24[0x60];
    iVar15 = 10;
    pdVar7 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar3 = &stack0xffffffffffffff60;
    pdVar24 = pdVar18;
    pppppppuVar26 = &ppppppuStack_50;
    pdVar18 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakShield;
    uVar35 = _UNK_033f813c;
  }
  else {
    func_0x00f78ad0();
    pdVar24 = *(dword **)(pdVar7 + 0x12);
    if ((pdVar24 != (dword *)0x0) && (pdVar20 != (dword *)0x0)) goto code_r0x0145bb48;
code_r0x0145bbac:
    auVar47 = func_0x00f78af4();
    pdVar24 = auVar47._8_8_;
    uStack_100 = 0x3d1ff28;
    pdStack_d8 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
    pdStack_f8 = pdVar7;
    pdStack_f0 = pdVar20;
    pdStack_e8 = pdVar18;
    pppppppuStack_e0 = (undefined8 *******)&stack0xffffffffffffff50;
    if ((bRam0000000003eb47e2 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e2 = 1;
    }
    if (pdVar24 == (dword *)0x0) {
code_r0x0145bc7c:
      auVar47 = func_0x00f78af4();
      pdVar7 = auVar47._8_8_;
      puVar4 = auStack_160;
      puStack_108 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
      uStack_158 = uVar8;
      pppppppuStack_110 = &pppppppuStack_e0;
      if ((bRam0000000003eb47e3 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47e3 = 1;
      }
      if (pdVar7 != (dword *)0x0) {
        pdVar11 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar7,0);
        lVar17 = 0x28;
        if ((int)pdVar11 == 0) {
          lVar17 = 0x30;
        }
        pdVar19 = *(dword **)(auVar47._0_8_ + lVar17);
        if (pdVar19 == (dword *)0x0) {
          return pdVar11;
        }
        unaff_x24 = 0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar22 = *(long *)(auVar47._0_8_ + 0x48);
        if (lVar22 != 0) {
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar24 = *(dword **)(lVar22 + 0xb8);
          uVar33 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar33,uRam0000000003d3bf00);
          uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          uVar33 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
          auVar47._8_8_ = uVar25;
          auVar47._0_8_ = uVar33;
          iVar6 = 0xf;
          puVar28 = &UNK_0145bdac;
          pppppppuVar27 = &pppppppuStack_110;
          goto code_r0x014fe3e8;
        }
      }
      auVar46 = func_0x00f78af4();
      pdVar7 = auVar46._8_8_;
      lVar22 = auVar46._0_8_;
      puVar4 = auStack_1c0;
      puStack_168 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
      pppppppuVar27 = &pppppppuStack_170;
      pdVar19 = (dword *)0x3eb4000;
      uStack_1b8 = uVar8;
      pppppppuStack_170 = &pppppppuStack_110;
      if ((bRam0000000003eb47e4 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47e4 = 1;
      }
      if (pdVar7 != (dword *)0x0) {
        pdVar11 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar7,0);
        lVar17 = 0x28;
        if ((int)pdVar11 == 0) {
          lVar17 = 0x30;
        }
        pdVar19 = *(dword **)(lVar22 + lVar17);
        if (pdVar19 == (dword *)0x0) {
          return pdVar11;
        }
        unaff_x24 = 0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        if (*(long *)(lVar22 + 0x48) != 0) {
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar24 = *(dword **)(*(long *)(lVar22 + 0x48) + 0xb8);
          uVar33 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar33,uRam0000000003d3bf00);
          uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          uVar33 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
          auVar47._8_8_ = uVar25;
          auVar47._0_8_ = uVar33;
          iVar6 = 0x11;
          puVar28 = &UNK_0145bf54;
          goto code_r0x014fe3e8;
        }
      }
      pdVar11 = (dword *)func_0x00f78af4();
      puVar3 = auStack_200;
      uStack_1f0 = 0x3d1ff28;
      puStack_1c8 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
      pppppppuVar26 = &pppppppuStack_1d0;
      uStack_1f8 = uVar8;
      pdStack_1e0 = pdVar19;
      pppppppuStack_1d0 = pppppppuVar27;
      if ((bRam0000000003eb47e5 & 1) == 0) {
        lStack_1e8 = lVar22;
        pdStack_1d8 = pdVar7;
        func_0x00f78a20(0x3d1ff28);
        auVar46._8_8_ = pdStack_1d8;
        auVar46._0_8_ = lStack_1e8;
        bRam0000000003eb47e5 = 1;
      }
      pdStack_1d8 = auVar46._8_8_;
      lStack_1e8 = auVar46._0_8_;
      uVar8 = extraout_d0 & 0xffffffff;
      if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
        pdStack_1d8 = auVar46._8_8_;
        lStack_1e8 = auVar46._0_8_;
        fVar30 = (float)func_0x00f78af4();
        puStack_208 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
        uStack_228 = uVar8;
        pdStack_220 = extraout_x1;
        pdStack_218 = pdVar11;
        pppppppuStack_210 = pppppppuVar26;
        if ((bRam0000000003eb47e6 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d24568);
          bRam0000000003eb47e6 = 1;
        }
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auStack_238[0] = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
        if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        fVar39 = _UNK_033f8148;
        if (fVar30 != 0.0) {
          fVar39 = fVar30;
        }
        fVar30 = INFINITY;
        if (fVar39 != -INFINITY) {
          fVar30 = ABS(SQRT(fVar39));
        }
        pdVar11 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar30,auStack_238,
                                           *(undefined8 *)
                                            (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
        return pdVar11;
      }
      iVar6 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
      if ((iVar6 != 0) && (pdVar10 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar10 == 0)) {
        return pdVar10;
      }
      auVar46._8_8_ = pdStack_1d8;
      auVar46._0_8_ = lStack_1e8;
      if (*(long *)(pdVar11 + 0xc) == 0) goto code_r0x0145c21c;
      pdVar10 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(pdVar11 + 0xc),0);
      if ((((ulong)pdVar10 & 1) != 0) || (pdVar11[0x14] != 1)) {
        return pdVar10;
      }
      unaff_x22 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar17 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
      if (*(float *)(lVar17 + 0x30) <= (float)extraout_d0) {
        return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      }
      if (0.0 <= (float)pdVar11[0x22]) {
        return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      }
      if ((char)extraout_x1[0xe] == '\0') {
        return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      }
      fVar30 = (float)pdVar11[0x23];
      uVar8 = (ulong)(uint)fVar30;
      pdVar10 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        pdVar10 = (dword *)func_0x00f78ad0();
        lVar17 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
      }
      if (fVar30 <= *(float *)(lVar17 + 800)) {
        return pdVar10;
      }
      iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
      if (iVar6 == 2) {
        pdVar20 = *(dword **)(pdVar11 + 0xc);
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        auVar1._8_8_ = pdStack_1d8;
        auVar1._0_8_ = lStack_1e8;
        auVar46._8_8_ = pdStack_1d8;
        auVar46._0_8_ = lStack_1e8;
        lVar22 = *(long *)(pdVar11 + 0x12);
        if ((lVar22 == 0) || (auVar46 = auVar1, pdVar20 == (dword *)0x0)) goto code_r0x0145c21c;
        lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        lVar12 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        pdVar19 = *(dword **)(lVar22 + 0xb8);
        iVar29 = *(int *)(lVar22 + 0x180);
        uVar35 = 0x3f800000;
        iVar15 = 6;
      }
      else if (iVar6 == 1) {
        pdVar20 = *(dword **)(pdVar11 + 0xc);
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        auVar46._8_8_ = pdStack_1d8;
        auVar46._0_8_ = lStack_1e8;
        if (pdVar20 == (dword *)0x0) goto code_r0x0145c21c;
        pdVar19 = *(dword **)(extraout_x1 + 0x2e);
        iVar29 = extraout_x1[0x60];
        lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
        uVar35 = 0;
        iVar15 = 1;
        lVar12 = lVar17;
      }
      else {
        if (iVar6 != 0) {
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          pdVar10 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
          pdVar11[0x22] = *(int *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
          return pdVar10;
        }
        pdVar20 = *(dword **)(pdVar11 + 0xc);
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        auVar46._8_8_ = pdStack_1d8;
        auVar46._0_8_ = lStack_1e8;
        if (pdVar20 == (dword *)0x0) goto code_r0x0145c21c;
        pdVar19 = *(dword **)(extraout_x1 + 0x2e);
        iVar29 = extraout_x1[0x60];
        lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
        uVar35 = 0;
        iVar15 = 0;
        lVar12 = lVar17;
      }
      pdVar7 = &MACH_HEADER.cputype;
      pdVar18 = (dword *)&UNK_0145c1e0;
      pdVar24 = extraout_x1;
      pdVar10 = extraout_x1;
      pdVar13 = pdVar20;
    }
    else {
      pdVar11 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar24,0);
      if ((int)pdVar11 == 0) {
        return pdVar11;
      }
      pdVar20 = *(dword **)(auVar47._0_8_ + 0x28);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar22 = *(long *)(auVar47._0_8_ + 0x48);
      if ((lVar22 == 0) || (pdVar20 == (dword *)0x0)) goto code_r0x0145bc7c;
      lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      lVar12 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      pdVar19 = *(dword **)(lVar22 + 0xb8);
      iVar29 = *(int *)(lVar22 + 0x180);
      uVar35 = 0;
      iVar15 = 6;
      pdVar7 = (dword *)((long)&MACH_HEADER.magic + 3);
      puVar3 = &stack0xffffffffffffff30;
      pdVar11 = pdStack_e8;
      pdVar10 = pdStack_f0;
      pdVar13 = pdStack_f8;
      unaff_x22 = uStack_100;
      pppppppuVar26 = pppppppuStack_e0;
      pdVar18 = pdStack_d8;
    }
  }
  auVar48._8_8_ = pdVar24;
  auVar48._0_8_ = pdVar20;
  puVar4 = puVar3 + -0x70;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d9;
  *(ulong *)(puVar3 + -0x68) = uVar8;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(dword **)(puVar3 + -0x28) = pdVar13;
  *(dword **)(puVar3 + -0x20) = pdVar10;
  *(dword **)(puVar3 + -0x18) = pdVar11;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar26;
  *(dword **)(puVar3 + -8) = pdVar18;
  lVar22 = lVar17;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar6 = (int)lVar22;
  if (lVar12 == 0) {
    pdVar11 = (dword *)0x0;
  }
  else {
    pdVar11 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar11,uRam0000000003d3bf00);
    lVar22 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar22,0);
    *(long *)(lVar22 + 0x10) = lVar12;
    *(float *)(lVar22 + 0x18) = (float)iVar15;
    if (pdVar11 == (dword *)0x0) {
      puVar28 = &Atlas_Audio_SpeechParam___ctor;
      auVar47 = func_0x00f78af4();
      pppppppuVar27 = (undefined8 *******)(puVar3 + -0x10);
code_r0x014fe3e8:
      lVar22 = auVar47._0_8_;
      *(dword **)(puVar4 + -0x30) = pdVar24;
      *(long *)(puVar4 + -0x28) = lVar17;
      *(dword **)(puVar4 + -0x20) = pdVar19;
      *(dword **)(puVar4 + -0x18) = pdVar7;
      *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar27;
      *(undefined **)(puVar4 + -8) = puVar28;
      pdVar11 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar22,0);
      *(long *)(lVar22 + 0x10) = auVar47._8_8_;
      *(float *)(lVar22 + 0x18) = (float)iVar6;
      return pdVar11;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar11,lVar22,uRam0000000003d3bf08);
  }
  uVar33 = *(undefined8 *)(puVar3 + -0x50);
  uVar37 = *(undefined8 *)(puVar3 + -0x48);
  uVar25 = *(undefined8 *)(puVar3 + -0x60);
  uVar38 = *(undefined8 *)(puVar3 + -0x58);
  *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x70);
  *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x68);
  *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
  *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  *(int *)(puVar3 + -0x54) = (int)pdVar7;
  lVar22 = lVar17;
  pdVar13 = pdVar19;
  pdVar10 = pdVar11;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar29,uVar35,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar20[0xd] == '\0') {
code_r0x014fe49c:
    pdVar10 = (dword *)(puVar3 + -0x54);
    puVar28 = &UNK_014fe4b4;
    lVar22 = lVar17;
    pdVar13 = pdVar11;
  }
  else {
    if (*(long *)(pdVar20 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar20 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar28 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar48 = func_0x00f78af4();
  }
  lVar14 = auVar48._8_8_;
  lVar12 = auVar48._0_8_;
  *(undefined8 *)(puVar3 + -0xc0) = uVar25;
  *(undefined8 *)(puVar3 + -0xb8) = uVar38;
  *(undefined8 *)(puVar3 + -0xb0) = uVar33;
  *(undefined8 *)(puVar3 + -0xa8) = uVar37;
  *(undefined8 *)(puVar3 + -0xa0) = 0x3eb4000;
  *(dword **)(puVar3 + -0x98) = pdVar24;
  *(long *)(puVar3 + -0x90) = lVar17;
  *(dword **)(puVar3 + -0x88) = pdVar20;
  *(dword **)(puVar3 + -0x80) = pdVar19;
  *(dword **)(puVar3 + -0x78) = pdVar11;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x68) = puVar28;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar3 + -0xe0) = 0;
  *(undefined8 *)(puVar3 + -0xd8) = 0;
  *(undefined8 *)(puVar3 + -0xd0) = 0;
  *(undefined4 *)(puVar3 + -0xe4) = 0;
  if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar12 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar14 == 0) goto code_r0x014fe8f8;
  uVar8 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar14,0);
  if ((uVar8 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar22,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0)
  ;
  if (iVar6 != 0) {
    if (pdVar13 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar3 + -0x100,pdVar13,uRam0000000003d3bf10);
    *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0xf8);
    *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0x100);
    *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xf0);
    while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar3 + -0xe0,uRam0000000003d32f58), (uVar8 & 1) != 0) {
      lVar17 = *(long *)(puVar3 + -0xd0);
      if (lVar17 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar33 = *(undefined8 *)(lVar17 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar33,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar8 & 1) != 0) {
        fVar39 = *(float *)(lVar17 + 0x18);
        fVar30 = -fVar39;
        if (fVar39 != INFINITY) {
          fVar30 = fVar39;
        }
        *(int *)(puVar3 + -0xe4) = (int)fVar30;
        plVar21 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar3 + -0xe4);
        if (plVar21 == (long *)0x0) goto code_r0x014fe8fc;
        uVar33 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
        puVar9 = (undefined4 *)func_0x00f78ae4(plVar21);
        *(undefined4 *)(puVar3 + -0xe4) = *puVar9;
        lVar22 = /*System.String$$Concat*/ func_0x029bdb88(lVar22,uVar33,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar6 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar12 + 0x28),lVar22,uRam0000000003d30020);
  if (iVar6 == 0) {
code_r0x014fe888:
    pdVar11 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar12 + 0x28),lVar22,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar10 - 1 < 2) {
        dVar16 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar16 = 1;
code_r0x014fe860:
      *pdVar10 = dVar16;
    }
    iVar6 = (int)extraout_x1_00;
    if (iVar6 == 3) {
      if ((*(long *)(lVar14 + 0xa0) == 0) ||
         (lVar17 = *(long *)(*(long *)(lVar14 + 0xa0) + 0x90), lVar17 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar2)();
      }
      iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar17,0);
      if (1 < iVar6) {
        iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar6 < 3);
      }
      uVar8 = 2;
    }
    else {
      uVar8 = extraout_x1_00;
      if (iVar6 != 2) {
        if (iVar6 == 0) {
          pdVar11 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar14,0);
          return pdVar11;
        }
        goto code_r0x014fe888;
      }
    }
    iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar8,0);
    pdVar11 = (dword *)(ulong)(iVar6 == 0);
  }
  return pdVar11;
}



// ============================================================
// RVA: 0x15c2ddc | Atlas.Gameplay.Kart.KartComposite.PerformMapBoundsCheckUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Gameplay_Kart_KartComposite__PerformMapBoundsCheckUpdate(dword *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  dword *pdVar8;
  dword *pdVar9;
  ulong uVar10;
  undefined4 *puVar11;
  dword *pdVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  dword *pdVar16;
  dword *extraout_x1;
  long lVar17;
  ulong extraout_x1_00;
  int iVar18;
  dword dVar19;
  dword *pdVar20;
  dword *pdVar21;
  dword *pdVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 ******ppppppuVar25;
  dword *pdVar26;
  undefined8 unaff_x22;
  undefined8 uVar27;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar28;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  int iVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  ulong extraout_d0;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 in_s3;
  float fVar39;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 auStack_1f8 [2];
  ulong uStack_1e8;
  dword *pdStack_1e0;
  dword *pdStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  long lStack_1a8;
  dword *pdStack_1a0;
  dword *pdStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [16];
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [16];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 *******pppppppuStack_a0;
  dword *pdStack_98;
  
  pdVar12 = param_1;
  if ((bRam0000000003eb52f2 & 1) == 0) {
    func_0x00f78a20(0x3d57088);
    pdVar12 = (dword *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb52f2 = 1;
  }
  if (*(long *)(param_1 + 0x1e) == 0) {
    return pdVar12;
  }
  uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x1e) + 0x1d0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar12 = (dword *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar23,0,0);
  if (((ulong)pdVar12 & 1) != 0) {
    return pdVar12;
  }
  if (*(long *)(param_1 + 0x1e) == 0) {
LAB_015c2ff8:
    pdVar12 = (dword *)func_0x00f78af4();
    if (*(long *)(pdVar12 + 4) == 0) {
      lVar13 = func_0x00f78af4();
      return (dword *)(lVar13 + 0x194);
    }
    return pdVar12;
  }
  pdVar12 = (dword *)/*Atlas.Contexts.GameContextBase$$IsActiveState<object>*/ func_0x0185c060(*(long *)(param_1 + 0x1e),uRam0000000003d57088);
  if ((int)pdVar12 == 0) {
    return pdVar12;
  }
  if (*(long *)(param_1 + 4) == 0) {
    return pdVar12;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 4) + 0x60);
  if (lVar13 == 0) {
    return (dword *)0x0;
  }
  pdVar12 = (dword *)/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(lVar13,0);
  if (((ulong)pdVar12 & 1) != 0) {
    return pdVar12;
  }
  if ((*(long *)(param_1 + 0x1e) == 0) || (lVar13 = *(long *)(param_1 + 4), lVar13 == 0))
  goto LAB_015c2ff8;
  lVar24 = *(long *)(*(long *)(param_1 + 0x1e) + 0x1d0);
  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x2d0),*(undefined4 *)(lVar13 + 0x2d4),
                  *(undefined4 *)(lVar13 + 0x2d8),0);
  if (lVar24 == 0) goto LAB_015c2ff8;
  iVar7 = /*Atlas.Maps.MapBehaviour$$IsNearBounds*/ func_0x0148d4c0(lVar24,0);
  if (iVar7 != 0) {
    if (*(long *)(param_1 + 4) == 0) goto LAB_015c2ff8;
    /*Atlas.Gameplay.Kart.KartPhysics$$PrintState*/ func_0x015c30c4();
  }
  if ((*(long *)(param_1 + 0x1e) == 0) || (lVar13 = *(long *)(param_1 + 4), lVar13 == 0))
  goto LAB_015c2ff8;
  lVar24 = *(long *)(*(long *)(param_1 + 0x1e) + 0x1d0);
  uVar35 = *(undefined4 *)(lVar13 + 0x2d4);
  uVar37 = *(undefined4 *)(lVar13 + 0x2d8);
  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar13 + 0x2d0),uVar35,uVar37,0);
  if (lVar24 == 0) goto LAB_015c2ff8;
  pdVar12 = (dword *)/*Atlas.Maps.MapBehaviour$$IsOutsideBounds*/ func_0x0148d45c(lVar24,0);
  if ((int)pdVar12 == 0) {
    return pdVar12;
  }
  if ((*(long *)(param_1 + 0x1e) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_1 + 0x1e) + 0x1d0), lVar13 == 0)) goto LAB_015c2ff8;
  lVar13 = /*Atlas.Maps.MapBehaviour$$GetSpawnLocation*/ func_0x0148d384(lVar13,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar12 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
  if ((int)pdVar12 == 0) {
    return pdVar12;
  }
  if (lVar13 == 0) goto LAB_015c2ff8;
  uVar33 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar13,0);
  uVar36 = uVar35;
  uVar38 = uVar37;
  uVar34 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar13,0);
  ppppppuVar25 = (undefined8 ******)0x5;
  pdVar12 = param_1;
  if ((bRam0000000003eb52f4 & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d59b90);
    func_0x00f78a20(0x3d59ba8);
    func_0x00f78a20(0x3d59bb0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    pdVar12 = (dword *)func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52f4 = 1;
  }
  if (*(long *)(param_1 + 4) == 0) {
    return pdVar12;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 4) + 0x60);
  if (lVar13 == 0) {
    return (dword *)0x0;
  }
  pdVar12 = (dword *)/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(lVar13,0);
  if (((ulong)pdVar12 & 1) != 0) {
    return pdVar12;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return pdVar12;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  uVar23 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar12 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
  lVar24 = lVar13;
  uVar27 = 0x3d23990;
  if ((int)pdVar12 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto code_r0x015c3650;
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x44) == '\0') {
      return pdVar12;
    }
  }
  if ((*(long *)(param_1 + 0x1e) == 0) ||
     (lVar14 = *(long *)(*(long *)(param_1 + 0x1e) + 0x40), uVar27 = uVar23, lVar14 == 0))
  goto code_r0x015c3650;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnBeforeRespawn*/ func_0x015a5ee4(lVar14,*(undefined8 *)(param_1 + 0x24),0);
  ppppppuVar25 = (undefined8 ******)/*Atlas.Gameplay.Kart.KartComposite$$GetPortal*/ func_0x015c3a0c(param_1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppppppuVar25,0,0);
  if (iVar7 != 0) {
    if (ppppppuVar25 == (undefined8 ******)0x0) goto code_r0x015c3650;
    lVar24 = *(long *)(param_1 + 0x1c);
    uVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar25,0);
    if (lVar24 == 0) goto code_r0x015c3650;
    /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(lVar24,uVar23,0);
    lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar25,0);
    if ((*(long *)(param_1 + 6) == 0) || (lVar24 = lVar13, lVar13 == 0)) goto code_r0x015c3650;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar13,*(undefined8 *)(*(long *)(param_1 + 6) + 0x70),0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar13,0);
    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar13,0);
    /*Atlas.Gameplay.PortalVFXBehaviour$$StartEnteringPortal*/ func_0x014c390c(ppppppuVar25,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xe),0);
  }
  /*Atlas.Gameplay.Kart.KartComposite$$RemoveActiveUsables*/ func_0x015c3ae8(param_1);
  lVar24 = lVar13;
  if ((*(long *)(param_1 + 0xe) != 0) &&
     (iVar7 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(param_1 + 0xe),0), iVar7 != 0)) {
    if (*(long *)(param_1 + 0xe) == 0) goto code_r0x015c3650;
    plVar15 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(param_1 + 0xe),0);
    if (plVar15 != (long *)0x0) {
      lVar24 = 0x3d24a28;
      if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(*plVar15 + 300)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                   -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
        if (*(long *)(param_1 + 0xe) == 0) goto code_r0x015c3650;
        ppppppuVar25 = (undefined8 ******)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(param_1 + 0xe),0);
        lVar13 = func_0x00022904(ppppppuVar25,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        lVar24 = 0x3d24a28;
        if (lVar13 == 0) goto code_r0x015c3650;
        plVar15 = (long *)func_0x00022904(ppppppuVar25,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        (**(code **)(*plVar15 + 0x2f8))(plVar15,1,*(undefined8 *)(*plVar15 + 0x300));
      }
    }
  }
  if ((((*(long *)(param_1 + 0x1e) == 0) ||
       (lVar13 = *(long *)(*(long *)(param_1 + 0x1e) + 0x1c0), lVar13 == 0)) ||
      (*(long *)(param_1 + 4) == 0)) ||
     ((lVar13 == 0 || (lVar14 = *(long *)(*(long *)(param_1 + 4) + 0x60), lVar14 == 0)))) {
code_r0x015c3650:
    auVar41 = func_0x00f78af4();
    lVar13 = auVar41._0_8_;
    pdStack_b0 = (dword *)uVar27;
    pdStack_a8 = (dword *)lVar24;
    pppppppuStack_a0 = (undefined8 *******)ppppppuVar25;
    pdStack_98 = param_1;
    if ((bRam0000000003eb52f3 & 1) == 0) {
      func_0x00f78a20(0x3d22c78);
      bRam0000000003eb52f3 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar23 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x20);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar23,0);
    if (*(long *)(lVar13 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$LateUpdate*/ func_0x015e5eec(*(long *)(lVar13 + 0x30),auVar41._8_8_,0);
    }
    plVar15 = *(long **)(lVar13 + 0x68);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x1c8))(plVar15,auVar41._8_8_,*(undefined8 *)(*plVar15 + 0x1d0));
    }
    if (*(long *)(lVar13 + 0x10) != 0) {
      /*Atlas.Gameplay.Kart.KartPhysics$$LateUpdate*/ func_0x015c3760();
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar12 = (dword *)(*pcRam0000000003ec05a0)(uVar23);
    return pdVar12;
  }
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetRespawning*/ func_0x015d9f58(uVar33,uVar35,uVar37,uVar34,uVar36,uVar38,in_s3,*(undefined4 *)(lVar13 + 0xd4),
                  lVar14,0);
  if (*(long *)(param_1 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar25 = *(undefined8 *******)(*(long *)(param_1 + 4) + 0x60);
  uVar27 = 0x3d23a50;
  lVar24 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar24,param_1,uRam0000000003d59bb0,0);
  if (ppppppuVar25 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartPortalEntered*/ func_0x015d9aa0(ppppppuVar25,lVar24,0);
  if (*(long *)(param_1 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar25 = *(undefined8 *******)(*(long *)(param_1 + 4) + 0x60);
  lVar24 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar24,param_1,uRam0000000003d59b90,0);
  if (ppppppuVar25 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnStartTransitionEnd*/ func_0x015d9960(ppppppuVar25,lVar24,0);
  if (*(long *)(param_1 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar25 = *(undefined8 *******)(*(long *)(param_1 + 4) + 0x60);
  lVar24 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar24,param_1,uRam0000000003d59ba8,0);
  if (ppppppuVar25 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnTransitionEnd*/ func_0x015d9be0(ppppppuVar25,lVar24,0);
  if (*(long *)(param_1 + 4) == 0) goto code_r0x015c3650;
  ppppppuVar25 = *(undefined8 *******)(*(long *)(param_1 + 4) + 0x60);
  lVar24 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar24,param_1,uRam0000000003d59b88,0);
  if (ppppppuVar25 == (undefined8 ******)0x0) goto code_r0x015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartRespawnEnd*/ func_0x015d9820(ppppppuVar25,lVar24,0);
  pdVar12 = *(dword **)(param_1 + 0x1c);
  if ((pdVar12 == (dword *)0x0) || (pdVar16 = *(dword **)(pdVar12 + 0x24), pdVar16 == (dword *)0x0))
  goto code_r0x015c3650;
  puVar6 = &stack0xffffffffffffffa0;
  if ((bRam0000000003eb47e0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28,pdVar12,0);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e0 = 1;
  }
  pdVar8 = (dword *)0x3eb4000;
  if (pdVar12 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar12,0);
    lVar13 = 0x28;
    if ((int)pdVar8 == 0) {
      lVar13 = 0x30;
    }
    pdVar21 = *(dword **)((long)pdVar16 + lVar13);
    if (pdVar21 == (dword *)0x0) {
      return pdVar8;
    }
    unaff_x24 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar8 = pdVar21;
    if (*(long *)(pdVar16 + 0x12) != 0) {
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      pdVar26 = *(dword **)(*(long *)(pdVar16 + 0x12) + 0xb8);
      uVar23 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar23,uRam0000000003d3bf00);
      uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      uVar23 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      auVar41._8_8_ = uVar27;
      auVar41._0_8_ = uVar23;
      iVar7 = 5;
      puVar30 = &UNK_0145ba68;
      pdVar9 = pdVar12;
      pppppppuVar29 = (undefined8 *******)&stack0xfffffffffffffff0;
      goto code_r0x014fe3e8;
    }
  }
  pdVar9 = (dword *)func_0x00f78af4();
  pdVar21 = pdVar9;
  if ((bRam0000000003eb47e1 & 1) == 0) {
    pdVar21 = (dword *)func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e1 = 1;
  }
  pdVar20 = *(dword **)(pdVar9 + 0x12);
  if (pdVar20 == (dword *)0x0) {
    return pdVar21;
  }
  pdVar22 = *(dword **)(pdVar9 + 10);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
    pdVar26 = pdVar20;
    if (pdVar22 == (dword *)0x0) goto code_r0x0145bbac;
code_r0x0145bb48:
    lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    pdVar21 = *(dword **)(pdVar26 + 0x2e);
    iVar31 = pdVar26[0x60];
    iVar18 = 10;
    pdVar9 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar5 = &stack0xffffffffffffffa0;
    pdVar26 = pdVar20;
    pppppppuVar28 = (undefined8 *******)&stack0xfffffffffffffff0;
    pdVar20 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakShield;
    uVar35 = _UNK_033f813c;
  }
  else {
    func_0x00f78ad0();
    pdVar26 = *(dword **)(pdVar9 + 0x12);
    if ((pdVar26 != (dword *)0x0) && (pdVar22 != (dword *)0x0)) goto code_r0x0145bb48;
code_r0x0145bbac:
    auVar41 = func_0x00f78af4();
    pdVar26 = auVar41._8_8_;
    uStack_c0 = 0x3d1ff28;
    pdStack_98 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
    pdStack_b8 = pdVar9;
    pdStack_b0 = pdVar22;
    pdStack_a8 = pdVar20;
    pppppppuStack_a0 = (undefined8 *******)&stack0xffffffffffffff90;
    if ((bRam0000000003eb47e2 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e2 = 1;
    }
    if (pdVar26 == (dword *)0x0) {
code_r0x0145bc7c:
      auVar41 = func_0x00f78af4();
      pdVar9 = auVar41._8_8_;
      puVar6 = auStack_120;
      puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
      pppppppuStack_d0 = &pppppppuStack_a0;
      if ((bRam0000000003eb47e3 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47e3 = 1;
      }
      if (pdVar9 != (dword *)0x0) {
        pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar9,0);
        lVar13 = 0x28;
        if ((int)pdVar12 == 0) {
          lVar13 = 0x30;
        }
        pdVar21 = *(dword **)(auVar41._0_8_ + lVar13);
        if (pdVar21 == (dword *)0x0) {
          return pdVar12;
        }
        unaff_x24 = 0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar24 = *(long *)(auVar41._0_8_ + 0x48);
        if (lVar24 != 0) {
          lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar26 = *(dword **)(lVar24 + 0xb8);
          uVar23 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar23,uRam0000000003d3bf00);
          uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          uVar23 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
          auVar41._8_8_ = uVar27;
          auVar41._0_8_ = uVar23;
          iVar7 = 0xf;
          puVar30 = &UNK_0145bdac;
          pppppppuVar29 = &pppppppuStack_d0;
          goto code_r0x014fe3e8;
        }
      }
      auVar40 = func_0x00f78af4();
      pdVar9 = auVar40._8_8_;
      lVar24 = auVar40._0_8_;
      puVar6 = auStack_180;
      puStack_128 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
      pppppppuVar29 = &pppppppuStack_130;
      pdVar21 = (dword *)0x3eb4000;
      pppppppuStack_130 = &pppppppuStack_d0;
      if ((bRam0000000003eb47e4 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47e4 = 1;
      }
      if (pdVar9 != (dword *)0x0) {
        pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar9,0);
        lVar13 = 0x28;
        if ((int)pdVar12 == 0) {
          lVar13 = 0x30;
        }
        pdVar21 = *(dword **)(lVar24 + lVar13);
        if (pdVar21 == (dword *)0x0) {
          return pdVar12;
        }
        unaff_x24 = 0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        if (*(long *)(lVar24 + 0x48) != 0) {
          lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar26 = *(dword **)(*(long *)(lVar24 + 0x48) + 0xb8);
          uVar23 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar23,uRam0000000003d3bf00);
          uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          uVar23 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
          auVar41._8_8_ = uVar27;
          auVar41._0_8_ = uVar23;
          iVar7 = 0x11;
          puVar30 = &UNK_0145bf54;
          goto code_r0x014fe3e8;
        }
      }
      pdVar12 = (dword *)func_0x00f78af4();
      puVar5 = auStack_1c0;
      uStack_1b0 = 0x3d1ff28;
      puStack_188 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
      pppppppuVar28 = &pppppppuStack_190;
      unaff_d8 = extraout_d0 & 0xffffffff;
      pdStack_1a0 = pdVar21;
      pppppppuStack_190 = pppppppuVar29;
      if ((bRam0000000003eb47e5 & 1) == 0) {
        lStack_1a8 = lVar24;
        pdStack_198 = pdVar9;
        func_0x00f78a20(0x3d1ff28);
        auVar40._8_8_ = pdStack_198;
        auVar40._0_8_ = lStack_1a8;
        bRam0000000003eb47e5 = 1;
      }
      pdStack_198 = auVar40._8_8_;
      lStack_1a8 = auVar40._0_8_;
      if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
        pdStack_198 = auVar40._8_8_;
        lStack_1a8 = auVar40._0_8_;
        fVar39 = (float)func_0x00f78af4();
        puStack_1c8 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
        uStack_1e8 = unaff_d8;
        pdStack_1e0 = extraout_x1;
        pdStack_1d8 = pdVar12;
        pppppppuStack_1d0 = pppppppuVar28;
        if ((bRam0000000003eb47e6 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d24568);
          bRam0000000003eb47e6 = 1;
        }
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auStack_1f8[0] = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
        if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        fVar32 = _UNK_033f8148;
        if (fVar39 != 0.0) {
          fVar32 = fVar39;
        }
        fVar39 = INFINITY;
        if (fVar32 != -INFINITY) {
          fVar39 = ABS(SQRT(fVar32));
        }
        pdVar12 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar39,auStack_1f8,
                                           *(undefined8 *)
                                            (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
        return pdVar12;
      }
      iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
      if ((iVar7 != 0) && (pdVar16 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar16 == 0)) {
        return pdVar16;
      }
      auVar40._8_8_ = pdStack_198;
      auVar40._0_8_ = lStack_1a8;
      if (*(long *)(pdVar12 + 0xc) == 0) goto code_r0x0145c21c;
      pdVar16 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(pdVar12 + 0xc),0);
      if ((((ulong)pdVar16 & 1) != 0) || (pdVar12[0x14] != 1)) {
        return pdVar16;
      }
      unaff_x22 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar13 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
      if (*(float *)(lVar13 + 0x30) <= (float)extraout_d0) {
        return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      }
      if (0.0 <= (float)pdVar12[0x22]) {
        return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      }
      if ((char)extraout_x1[0xe] == '\0') {
        return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      }
      fVar39 = (float)pdVar12[0x23];
      unaff_d8 = (ulong)(uint)fVar39;
      pdVar16 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        pdVar16 = (dword *)func_0x00f78ad0();
        lVar13 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
      }
      if (fVar39 <= *(float *)(lVar13 + 800)) {
        return pdVar16;
      }
      iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
      if (iVar7 == 2) {
        pdVar22 = *(dword **)(pdVar12 + 0xc);
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        auVar3._8_8_ = pdStack_198;
        auVar3._0_8_ = lStack_1a8;
        auVar40._8_8_ = pdStack_198;
        auVar40._0_8_ = lStack_1a8;
        lVar24 = *(long *)(pdVar12 + 0x12);
        if ((lVar24 == 0) || (auVar40 = auVar3, pdVar22 == (dword *)0x0)) goto code_r0x0145c21c;
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        pdVar21 = *(dword **)(lVar24 + 0xb8);
        iVar31 = *(int *)(lVar24 + 0x180);
        uVar35 = 0x3f800000;
        iVar18 = 6;
      }
      else if (iVar7 == 1) {
        pdVar22 = *(dword **)(pdVar12 + 0xc);
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        auVar40._8_8_ = pdStack_198;
        auVar40._0_8_ = lStack_1a8;
        if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
        pdVar21 = *(dword **)(extraout_x1 + 0x2e);
        iVar31 = extraout_x1[0x60];
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
        uVar35 = 0;
        iVar18 = 1;
        lVar14 = lVar13;
      }
      else {
        if (iVar7 != 0) {
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          pdVar16 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
          pdVar12[0x22] = *(int *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
          return pdVar16;
        }
        pdVar22 = *(dword **)(pdVar12 + 0xc);
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        auVar40._8_8_ = pdStack_198;
        auVar40._0_8_ = lStack_1a8;
        if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
        pdVar21 = *(dword **)(extraout_x1 + 0x2e);
        iVar31 = extraout_x1[0x60];
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
        uVar35 = 0;
        iVar18 = 0;
        lVar14 = lVar13;
      }
      pdVar9 = &MACH_HEADER.cputype;
      pdVar20 = (dword *)&UNK_0145c1e0;
      pdVar26 = extraout_x1;
      pdVar8 = extraout_x1;
      pdVar16 = pdVar22;
    }
    else {
      pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar26,0);
      if ((int)pdVar12 == 0) {
        return pdVar12;
      }
      pdVar22 = *(dword **)(auVar41._0_8_ + 0x28);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar24 = *(long *)(auVar41._0_8_ + 0x48);
      if ((lVar24 == 0) || (pdVar22 == (dword *)0x0)) goto code_r0x0145bc7c;
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      pdVar21 = *(dword **)(lVar24 + 0xb8);
      iVar31 = *(int *)(lVar24 + 0x180);
      uVar35 = 0;
      iVar18 = 6;
      pdVar9 = (dword *)((long)&MACH_HEADER.magic + 3);
      puVar5 = &stack0xffffffffffffff70;
      pdVar12 = pdStack_a8;
      pdVar8 = pdStack_b0;
      pdVar16 = pdStack_b8;
      unaff_x22 = uStack_c0;
      pppppppuVar28 = pppppppuStack_a0;
      pdVar20 = pdStack_98;
    }
  }
  auVar42._8_8_ = pdVar26;
  auVar42._0_8_ = pdVar22;
  puVar6 = puVar5 + -0x70;
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(dword **)(puVar5 + -0x28) = pdVar16;
  *(dword **)(puVar5 + -0x20) = pdVar8;
  *(dword **)(puVar5 + -0x18) = pdVar12;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar28;
  *(dword **)(puVar5 + -8) = pdVar20;
  lVar24 = lVar13;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar7 = (int)lVar24;
  if (lVar14 == 0) {
    pdVar12 = (dword *)0x0;
  }
  else {
    pdVar12 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar12,uRam0000000003d3bf00);
    lVar24 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar24,0);
    *(long *)(lVar24 + 0x10) = lVar14;
    *(float *)(lVar24 + 0x18) = (float)iVar18;
    if (pdVar12 == (dword *)0x0) {
      puVar30 = &Atlas_Audio_SpeechParam___ctor;
      auVar41 = func_0x00f78af4();
      pppppppuVar29 = (undefined8 *******)(puVar5 + -0x10);
code_r0x014fe3e8:
      lVar24 = auVar41._0_8_;
      *(dword **)(puVar6 + -0x30) = pdVar26;
      *(long *)(puVar6 + -0x28) = lVar13;
      *(dword **)(puVar6 + -0x20) = pdVar21;
      *(dword **)(puVar6 + -0x18) = pdVar9;
      *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar29;
      *(undefined **)(puVar6 + -8) = puVar30;
      pdVar12 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar24,0);
      *(long *)(lVar24 + 0x10) = auVar41._8_8_;
      *(float *)(lVar24 + 0x18) = (float)iVar7;
      return pdVar12;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar12,lVar24,uRam0000000003d3bf08);
  }
  uVar23 = *(undefined8 *)(puVar5 + -0x50);
  uVar1 = *(undefined8 *)(puVar5 + -0x48);
  uVar27 = *(undefined8 *)(puVar5 + -0x60);
  uVar2 = *(undefined8 *)(puVar5 + -0x58);
  *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x70);
  *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x68);
  *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
  *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
  *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  *(int *)(puVar5 + -0x54) = (int)pdVar9;
  lVar24 = lVar13;
  pdVar8 = pdVar21;
  pdVar16 = pdVar12;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar31,uVar35,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar22[0xd] == '\0') {
code_r0x014fe49c:
    pdVar16 = (dword *)(puVar5 + -0x54);
    puVar30 = &UNK_014fe4b4;
    lVar24 = lVar13;
    pdVar8 = pdVar12;
  }
  else {
    if (*(long *)(pdVar22 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar22 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar30 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar42 = func_0x00f78af4();
  }
  lVar17 = auVar42._8_8_;
  lVar14 = auVar42._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar27;
  *(undefined8 *)(puVar5 + -0xb8) = uVar2;
  *(undefined8 *)(puVar5 + -0xb0) = uVar23;
  *(undefined8 *)(puVar5 + -0xa8) = uVar1;
  *(undefined8 *)(puVar5 + -0xa0) = 0x3eb4000;
  *(dword **)(puVar5 + -0x98) = pdVar26;
  *(long *)(puVar5 + -0x90) = lVar13;
  *(dword **)(puVar5 + -0x88) = pdVar22;
  *(dword **)(puVar5 + -0x80) = pdVar21;
  *(dword **)(puVar5 + -0x78) = pdVar12;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x68) = puVar30;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar5 + -0xe0) = 0;
  *(undefined8 *)(puVar5 + -0xd8) = 0;
  *(undefined8 *)(puVar5 + -0xd0) = 0;
  *(undefined4 *)(puVar5 + -0xe4) = 0;
  if (*(long *)(lVar14 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar14 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar17 == 0) goto code_r0x014fe8f8;
  uVar10 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar17,0);
  if ((uVar10 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar24,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0)
  ;
  if (iVar7 != 0) {
    if (pdVar8 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0x100,pdVar8,uRam0000000003d3bf10);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0xf8);
    *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x100);
    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xf0);
    while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0xe0,uRam0000000003d32f58), (uVar10 & 1) != 0) {
      lVar13 = *(long *)(puVar5 + -0xd0);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar23 = *(undefined8 *)(lVar13 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar23,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar10 & 1) != 0) {
        fVar32 = *(float *)(lVar13 + 0x18);
        fVar39 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar39 = fVar32;
        }
        *(int *)(puVar5 + -0xe4) = (int)fVar39;
        plVar15 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar5 + -0xe4);
        if (plVar15 == (long *)0x0) goto code_r0x014fe8fc;
        uVar23 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        puVar11 = (undefined4 *)func_0x00f78ae4(plVar15);
        *(undefined4 *)(puVar5 + -0xe4) = *puVar11;
        lVar24 = /*System.String$$Concat*/ func_0x029bdb88(lVar24,uVar23,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar14 + 0x28),lVar24,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    pdVar12 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar14 + 0x28),lVar24,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar16 - 1 < 2) {
        dVar19 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar19 = 1;
code_r0x014fe860:
      *pdVar16 = dVar19;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar17 + 0xa0) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar17 + 0xa0) + 0x90), lVar13 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar13,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar7 < 3);
      }
      uVar10 = 2;
    }
    else {
      uVar10 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar17,0);
          return pdVar12;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar10,0);
    pdVar12 = (dword *)(ulong)(iVar7 == 0);
  }
  return pdVar12;
}



// ============================================================
// RVA: 0x15c2ffc | Atlas.Gameplay.Kart.KartComposite.GetLightWorldPosition
// ============================================================

long Atlas_Gameplay_Kart_KartComposite__GetLightWorldPosition(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return param_1;
  }
  lVar1 = func_0x00f78af4();
  return lVar1 + 0x194;
}



// ============================================================
// RVA: 0x15c3030 | Atlas.Gameplay.Kart.KartComposite.SetCurrentBlendAmount
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartComposite__SetCurrentBlendAmount
               (float param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0xdc);
  if (fVar2 == 0.0) {
    *(undefined4 *)(param_3 + 0xdc) = 0x3f800000;
    fVar2 = 1.0;
  }
  fVar2 = (float)_sinf((1.0 / fVar2) * _UNK_033f8b30 * param_1);
  fVar2 = (*(float *)(param_3 + 0xe0) + *(float *)(param_3 + 0xe4)) * 0.5 +
          fVar2 * (*(float *)(param_3 + 0xe0) - *(float *)(param_3 + 0xe4)) * 0.5;
  *(float *)(param_3 + 0xec) = fVar2;
  uVar1 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0,fVar2,param_2,0);
  *(undefined4 *)(param_3 + 0xec) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15c31c4 | Atlas.Gameplay.Kart.KartComposite.InvokeRespawn
// ============================================================

/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                  (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                  dword *param_9,undefined8 ******param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  dword *pdVar8;
  dword *pdVar9;
  ulong uVar10;
  undefined4 *puVar11;
  dword *pdVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  dword *pdVar16;
  dword *extraout_x1;
  long lVar17;
  ulong extraout_x1_00;
  int iVar18;
  dword dVar19;
  dword *pdVar20;
  dword *pdVar21;
  dword *pdVar22;
  long lVar23;
  dword *pdVar24;
  undefined8 unaff_x22;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  undefined *puVar29;
  int iVar30;
  float fVar31;
  ulong extraout_d0;
  undefined4 uVar32;
  float fVar33;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 auStack_1f8 [2];
  ulong uStack_1e8;
  dword *pdStack_1e0;
  dword *pdStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  long lStack_1a8;
  dword *pdStack_1a0;
  dword *pdStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [16];
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [16];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 *******pppppppuStack_a0;
  dword *pdStack_98;
  
  pdVar12 = param_9;
  if ((bRam0000000003eb52f4 & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d59b90);
    func_0x00f78a20(0x3d59ba8);
    func_0x00f78a20(0x3d59bb0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    pdVar12 = (dword *)func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52f4 = 1;
  }
  if (*(long *)(param_9 + 4) == 0) {
    return pdVar12;
  }
  lVar13 = *(long *)(*(long *)(param_9 + 4) + 0x60);
  if (lVar13 == 0) {
    return (dword *)0x0;
  }
  pdVar12 = (dword *)/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(lVar13,0);
  if (((ulong)pdVar12 & 1) != 0) {
    return pdVar12;
  }
  if (*(char *)(param_9 + 0x3c) == '\0') {
    return pdVar12;
  }
  lVar13 = *(long *)(param_9 + 0x20);
  uVar25 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar12 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
  lVar23 = lVar13;
  uVar26 = 0x3d23990;
  if ((int)pdVar12 != 0) {
    if (*(long *)(param_9 + 0x20) == 0) goto LAB_015c3650;
    if (((int)param_10 != 6) && (*(char *)(*(long *)(param_9 + 0x20) + 0x44) == '\0')) {
      return pdVar12;
    }
  }
  if ((*(long *)(param_9 + 0x1e) == 0) ||
     (lVar14 = *(long *)(*(long *)(param_9 + 0x1e) + 0x40), uVar26 = uVar25, lVar14 == 0))
  goto LAB_015c3650;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnBeforeRespawn*/ func_0x015a5ee4(lVar14,*(undefined8 *)(param_9 + 0x24),0);
  param_10 = (undefined8 ******)/*Atlas.Gameplay.Kart.KartComposite$$GetPortal*/ func_0x015c3a0c(param_9);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_10,0,0);
  if (iVar7 != 0) {
    if (param_10 == (undefined8 ******)0x0) goto LAB_015c3650;
    lVar23 = *(long *)(param_9 + 0x1c);
    uVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_10,0);
    if (lVar23 == 0) goto LAB_015c3650;
    /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(lVar23,uVar25,0);
    lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_10,0);
    if ((*(long *)(param_9 + 6) == 0) || (lVar23 = lVar13, lVar13 == 0)) goto LAB_015c3650;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar13,*(undefined8 *)(*(long *)(param_9 + 6) + 0x70),0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar13,0);
    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar13,0);
    /*Atlas.Gameplay.PortalVFXBehaviour$$StartEnteringPortal*/ func_0x014c390c(param_10,*(undefined8 *)(param_9 + 10),*(undefined8 *)(param_9 + 0xe),0);
  }
  /*Atlas.Gameplay.Kart.KartComposite$$RemoveActiveUsables*/ func_0x015c3ae8(param_9);
  lVar23 = lVar13;
  if ((*(long *)(param_9 + 0xe) != 0) &&
     (iVar7 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(param_9 + 0xe),0), iVar7 != 0)) {
    if (*(long *)(param_9 + 0xe) == 0) goto LAB_015c3650;
    plVar15 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(param_9 + 0xe),0);
    if (plVar15 != (long *)0x0) {
      lVar23 = 0x3d24a28;
      if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(*plVar15 + 300)) &&
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                   -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
        if (*(long *)(param_9 + 0xe) == 0) goto LAB_015c3650;
        param_10 = (undefined8 ******)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(param_9 + 0xe),0);
        lVar13 = func_0x00022904(param_10,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        lVar23 = 0x3d24a28;
        if (lVar13 == 0) goto LAB_015c3650;
        plVar15 = (long *)func_0x00022904(param_10,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        (**(code **)(*plVar15 + 0x2f8))(plVar15,1,*(undefined8 *)(*plVar15 + 0x300));
      }
    }
  }
  if ((*(long *)(param_9 + 0x1e) == 0) ||
     ((((lVar13 = *(long *)(*(long *)(param_9 + 0x1e) + 0x1c0), param_8 < 0.0 && (lVar13 == 0)) ||
       (*(long *)(param_9 + 4) == 0)) ||
      ((lVar13 == 0 || (lVar14 = *(long *)(*(long *)(param_9 + 4) + 0x60), lVar14 == 0)))))) {
LAB_015c3650:
    auVar35 = func_0x00f78af4();
    lVar13 = auVar35._0_8_;
    pdStack_b0 = (dword *)uVar26;
    pdStack_a8 = (dword *)lVar23;
    pppppppuStack_a0 = (undefined8 *******)param_10;
    pdStack_98 = param_9;
    if ((bRam0000000003eb52f3 & 1) == 0) {
      func_0x00f78a20(0x3d22c78);
      bRam0000000003eb52f3 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x20);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar25,0);
    if (*(long *)(lVar13 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$LateUpdate*/ func_0x015e5eec(*(long *)(lVar13 + 0x30),auVar35._8_8_,0);
    }
    plVar15 = *(long **)(lVar13 + 0x68);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x1c8))(plVar15,auVar35._8_8_,*(undefined8 *)(*plVar15 + 0x1d0));
    }
    if (*(long *)(lVar13 + 0x10) != 0) {
      /*Atlas.Gameplay.Kart.KartPhysics$$LateUpdate*/ func_0x015c3760();
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar12 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
    return pdVar12;
  }
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetRespawning*/ func_0x015d9f58(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                  *(undefined4 *)(lVar13 + 0xd4),lVar14,0);
  if (*(long *)(param_9 + 4) == 0) goto LAB_015c3650;
  param_10 = *(undefined8 *******)(*(long *)(param_9 + 4) + 0x60);
  uVar26 = 0x3d23a50;
  lVar23 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar23,param_9,uRam0000000003d59bb0,0);
  if (param_10 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartPortalEntered*/ func_0x015d9aa0(param_10,lVar23,0);
  if (*(long *)(param_9 + 4) == 0) goto LAB_015c3650;
  param_10 = *(undefined8 *******)(*(long *)(param_9 + 4) + 0x60);
  lVar23 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar23,param_9,uRam0000000003d59b90,0);
  if (param_10 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnStartTransitionEnd*/ func_0x015d9960(param_10,lVar23,0);
  if (*(long *)(param_9 + 4) == 0) goto LAB_015c3650;
  param_10 = *(undefined8 *******)(*(long *)(param_9 + 4) + 0x60);
  lVar23 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar23,param_9,uRam0000000003d59ba8,0);
  if (param_10 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnTransitionEnd*/ func_0x015d9be0(param_10,lVar23,0);
  if (*(long *)(param_9 + 4) == 0) goto LAB_015c3650;
  param_10 = *(undefined8 *******)(*(long *)(param_9 + 4) + 0x60);
  lVar23 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar23,param_9,uRam0000000003d59b88,0);
  if (param_10 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartRespawnEnd*/ func_0x015d9820(param_10,lVar23,0);
  pdVar12 = *(dword **)(param_9 + 0x1c);
  if ((pdVar12 == (dword *)0x0) || (pdVar16 = *(dword **)(pdVar12 + 0x24), pdVar16 == (dword *)0x0))
  goto LAB_015c3650;
  puVar6 = &stack0xffffffffffffffa0;
  if ((bRam0000000003eb47e0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28,pdVar12,0);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e0 = 1;
  }
  pdVar8 = (dword *)0x3eb4000;
  if (pdVar12 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar12,0);
    lVar13 = 0x28;
    if ((int)pdVar8 == 0) {
      lVar13 = 0x30;
    }
    pdVar21 = *(dword **)((long)pdVar16 + lVar13);
    if (pdVar21 == (dword *)0x0) {
      return pdVar8;
    }
    unaff_x24 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar8 = pdVar21;
    if (*(long *)(pdVar16 + 0x12) != 0) {
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      pdVar24 = *(dword **)(*(long *)(pdVar16 + 0x12) + 0xb8);
      uVar25 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar25,uRam0000000003d3bf00);
      uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      uVar25 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      auVar35._8_8_ = uVar26;
      auVar35._0_8_ = uVar25;
      iVar7 = 5;
      puVar29 = &UNK_0145ba68;
      pdVar9 = pdVar12;
      pppppppuVar28 = (undefined8 *******)&stack0xfffffffffffffff0;
      goto code_r0x014fe3e8;
    }
  }
  pdVar9 = (dword *)func_0x00f78af4();
  pdVar21 = pdVar9;
  if ((bRam0000000003eb47e1 & 1) == 0) {
    pdVar21 = (dword *)func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e1 = 1;
  }
  pdVar20 = *(dword **)(pdVar9 + 0x12);
  if (pdVar20 == (dword *)0x0) {
    return pdVar21;
  }
  pdVar22 = *(dword **)(pdVar9 + 10);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
    pdVar24 = pdVar20;
    if (pdVar22 != (dword *)0x0) goto code_r0x0145bb48;
code_r0x0145bbac:
    auVar35 = func_0x00f78af4();
    pdVar24 = auVar35._8_8_;
    uStack_c0 = 0x3d1ff28;
    pdStack_98 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
    pdStack_b8 = pdVar9;
    pdStack_b0 = pdVar22;
    pdStack_a8 = pdVar20;
    pppppppuStack_a0 = (undefined8 *******)&stack0xffffffffffffff90;
    if ((bRam0000000003eb47e2 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e2 = 1;
    }
    if (pdVar24 != (dword *)0x0) {
      pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar24,0);
      if ((int)pdVar12 == 0) {
        return pdVar12;
      }
      pdVar22 = *(dword **)(auVar35._0_8_ + 0x28);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar14 = *(long *)(auVar35._0_8_ + 0x48);
      if ((lVar14 != 0) && (pdVar22 != (dword *)0x0)) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        pdVar21 = *(dword **)(lVar14 + 0xb8);
        iVar30 = *(int *)(lVar14 + 0x180);
        uVar32 = 0;
        iVar18 = 6;
        pdVar9 = (dword *)((long)&MACH_HEADER.magic + 3);
        puVar5 = &stack0xffffffffffffff70;
        pdVar12 = pdStack_a8;
        pdVar8 = pdStack_b0;
        pdVar16 = pdStack_b8;
        unaff_x22 = uStack_c0;
        pppppppuVar27 = pppppppuStack_a0;
        pdVar20 = pdStack_98;
        goto code_r0x014fe2a8;
      }
    }
    auVar35 = func_0x00f78af4();
    pdVar9 = auVar35._8_8_;
    puVar6 = auStack_120;
    puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
    pppppppuStack_d0 = &pppppppuStack_a0;
    if ((bRam0000000003eb47e3 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e3 = 1;
    }
    if (pdVar9 != (dword *)0x0) {
      pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar9,0);
      lVar13 = 0x28;
      if ((int)pdVar12 == 0) {
        lVar13 = 0x30;
      }
      pdVar21 = *(dword **)(auVar35._0_8_ + lVar13);
      if (pdVar21 == (dword *)0x0) {
        return pdVar12;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar23 = *(long *)(auVar35._0_8_ + 0x48);
      if (lVar23 != 0) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar24 = *(dword **)(lVar23 + 0xb8);
        uVar25 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar25,uRam0000000003d3bf00);
        uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar25 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar35._8_8_ = uVar26;
        auVar35._0_8_ = uVar25;
        iVar7 = 0xf;
        puVar29 = &UNK_0145bdac;
        pppppppuVar28 = &pppppppuStack_d0;
        goto code_r0x014fe3e8;
      }
    }
    auVar34 = func_0x00f78af4();
    pdVar9 = auVar34._8_8_;
    lVar23 = auVar34._0_8_;
    puVar6 = auStack_180;
    puStack_128 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
    pppppppuVar28 = &pppppppuStack_130;
    pdVar21 = (dword *)0x3eb4000;
    pppppppuStack_130 = &pppppppuStack_d0;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (pdVar9 != (dword *)0x0) {
      pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar9,0);
      lVar13 = 0x28;
      if ((int)pdVar12 == 0) {
        lVar13 = 0x30;
      }
      pdVar21 = *(dword **)(lVar23 + lVar13);
      if (pdVar21 == (dword *)0x0) {
        return pdVar12;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      if (*(long *)(lVar23 + 0x48) != 0) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar24 = *(dword **)(*(long *)(lVar23 + 0x48) + 0xb8);
        uVar25 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar25,uRam0000000003d3bf00);
        uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar25 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar35._8_8_ = uVar26;
        auVar35._0_8_ = uVar25;
        iVar7 = 0x11;
        puVar29 = &UNK_0145bf54;
        goto code_r0x014fe3e8;
      }
    }
    pdVar12 = (dword *)func_0x00f78af4();
    puVar5 = auStack_1c0;
    uStack_1b0 = 0x3d1ff28;
    puStack_188 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
    pppppppuVar27 = &pppppppuStack_190;
    unaff_d8 = extraout_d0 & 0xffffffff;
    pdStack_1a0 = pdVar21;
    pppppppuStack_190 = pppppppuVar28;
    if ((bRam0000000003eb47e5 & 1) == 0) {
      lStack_1a8 = lVar23;
      pdStack_198 = pdVar9;
      func_0x00f78a20(0x3d1ff28);
      auVar34._8_8_ = pdStack_198;
      auVar34._0_8_ = lStack_1a8;
      bRam0000000003eb47e5 = 1;
    }
    pdStack_198 = auVar34._8_8_;
    lStack_1a8 = auVar34._0_8_;
    if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
      pdStack_198 = auVar34._8_8_;
      lStack_1a8 = auVar34._0_8_;
      fVar33 = (float)func_0x00f78af4();
      puStack_1c8 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
      uStack_1e8 = unaff_d8;
      pdStack_1e0 = extraout_x1;
      pdStack_1d8 = pdVar12;
      pppppppuStack_1d0 = pppppppuVar27;
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auStack_1f8[0] = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      fVar31 = _UNK_033f8148;
      if (fVar33 != 0.0) {
        fVar31 = fVar33;
      }
      fVar33 = INFINITY;
      if (fVar31 != -INFINITY) {
        fVar33 = ABS(SQRT(fVar31));
      }
      pdVar12 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar33,auStack_1f8,
                                         *(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
      return pdVar12;
    }
    iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar7 != 0) && (pdVar16 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar16 == 0)) {
      return pdVar16;
    }
    auVar34._8_8_ = pdStack_198;
    auVar34._0_8_ = lStack_1a8;
    if (*(long *)(pdVar12 + 0xc) == 0) goto code_r0x0145c21c;
    pdVar16 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(pdVar12 + 0xc),0);
    if ((((ulong)pdVar16 & 1) != 0) || (pdVar12[0x14] != 1)) {
      return pdVar16;
    }
    unaff_x22 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    lVar13 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    if (*(float *)(lVar13 + 0x30) <= (float)extraout_d0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if (0.0 <= (float)pdVar12[0x22]) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if ((char)extraout_x1[0xe] == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    fVar33 = (float)pdVar12[0x23];
    unaff_d8 = (ulong)(uint)fVar33;
    pdVar16 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      pdVar16 = (dword *)func_0x00f78ad0();
      lVar13 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    }
    if (fVar33 <= *(float *)(lVar13 + 800)) {
      return pdVar16;
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar7 == 2) {
      pdVar22 = *(dword **)(pdVar12 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar3._8_8_ = pdStack_198;
      auVar3._0_8_ = lStack_1a8;
      auVar34._8_8_ = pdStack_198;
      auVar34._0_8_ = lStack_1a8;
      lVar14 = *(long *)(pdVar12 + 0x12);
      if ((lVar14 == 0) || (auVar34 = auVar3, pdVar22 == (dword *)0x0)) goto code_r0x0145c21c;
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      pdVar21 = *(dword **)(lVar14 + 0xb8);
      iVar30 = *(int *)(lVar14 + 0x180);
      uVar32 = 0x3f800000;
      iVar18 = 6;
    }
    else if (iVar7 == 1) {
      pdVar22 = *(dword **)(pdVar12 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar34._8_8_ = pdStack_198;
      auVar34._0_8_ = lStack_1a8;
      if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar21 = *(dword **)(extraout_x1 + 0x2e);
      iVar30 = extraout_x1[0x60];
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar32 = 0;
      iVar18 = 1;
      lVar23 = lVar13;
    }
    else {
      if (iVar7 != 0) {
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        pdVar16 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        pdVar12[0x22] = *(int *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
        return pdVar16;
      }
      pdVar22 = *(dword **)(pdVar12 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar34._8_8_ = pdStack_198;
      auVar34._0_8_ = lStack_1a8;
      if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar21 = *(dword **)(extraout_x1 + 0x2e);
      iVar30 = extraout_x1[0x60];
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar32 = 0;
      iVar18 = 0;
      lVar23 = lVar13;
    }
    pdVar9 = &MACH_HEADER.cputype;
    pdVar20 = (dword *)&UNK_0145c1e0;
    pdVar24 = extraout_x1;
    pdVar8 = extraout_x1;
    pdVar16 = pdVar22;
  }
  else {
    func_0x00f78ad0();
    pdVar24 = *(dword **)(pdVar9 + 0x12);
    if ((pdVar24 == (dword *)0x0) || (pdVar22 == (dword *)0x0)) goto code_r0x0145bbac;
code_r0x0145bb48:
    lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar23 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    pdVar21 = *(dword **)(pdVar24 + 0x2e);
    iVar30 = pdVar24[0x60];
    iVar18 = 10;
    pdVar9 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar5 = &stack0xffffffffffffffa0;
    pdVar24 = pdVar20;
    pppppppuVar27 = (undefined8 *******)&stack0xfffffffffffffff0;
    pdVar20 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakShield;
    uVar32 = _UNK_033f813c;
  }
code_r0x014fe2a8:
  auVar36._8_8_ = pdVar24;
  auVar36._0_8_ = pdVar22;
  puVar6 = puVar5 + -0x70;
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(dword **)(puVar5 + -0x28) = pdVar16;
  *(dword **)(puVar5 + -0x20) = pdVar8;
  *(dword **)(puVar5 + -0x18) = pdVar12;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar27;
  *(dword **)(puVar5 + -8) = pdVar20;
  lVar14 = lVar13;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar7 = (int)lVar14;
  if (lVar23 == 0) {
    pdVar12 = (dword *)0x0;
  }
  else {
    pdVar12 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar12,uRam0000000003d3bf00);
    lVar14 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar14,0);
    *(long *)(lVar14 + 0x10) = lVar23;
    *(float *)(lVar14 + 0x18) = (float)iVar18;
    if (pdVar12 == (dword *)0x0) {
      puVar29 = &Atlas_Audio_SpeechParam___ctor;
      auVar35 = func_0x00f78af4();
      pppppppuVar28 = (undefined8 *******)(puVar5 + -0x10);
code_r0x014fe3e8:
      lVar23 = auVar35._0_8_;
      *(dword **)(puVar6 + -0x30) = pdVar24;
      *(long *)(puVar6 + -0x28) = lVar13;
      *(dword **)(puVar6 + -0x20) = pdVar21;
      *(dword **)(puVar6 + -0x18) = pdVar9;
      *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar28;
      *(undefined **)(puVar6 + -8) = puVar29;
      pdVar12 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar23,0);
      *(long *)(lVar23 + 0x10) = auVar35._8_8_;
      *(float *)(lVar23 + 0x18) = (float)iVar7;
      return pdVar12;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar12,lVar14,uRam0000000003d3bf08);
  }
  uVar25 = *(undefined8 *)(puVar5 + -0x50);
  uVar1 = *(undefined8 *)(puVar5 + -0x48);
  uVar26 = *(undefined8 *)(puVar5 + -0x60);
  uVar2 = *(undefined8 *)(puVar5 + -0x58);
  *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x70);
  *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x68);
  *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
  *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
  *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  *(int *)(puVar5 + -0x54) = (int)pdVar9;
  lVar23 = lVar13;
  pdVar8 = pdVar21;
  pdVar16 = pdVar12;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar30,uVar32,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar22[0xd] == '\0') {
code_r0x014fe49c:
    pdVar16 = (dword *)(puVar5 + -0x54);
    puVar29 = &UNK_014fe4b4;
    lVar23 = lVar13;
    pdVar8 = pdVar12;
  }
  else {
    if (*(long *)(pdVar22 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar22 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar29 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar36 = func_0x00f78af4();
  }
  lVar17 = auVar36._8_8_;
  lVar14 = auVar36._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar26;
  *(undefined8 *)(puVar5 + -0xb8) = uVar2;
  *(undefined8 *)(puVar5 + -0xb0) = uVar25;
  *(undefined8 *)(puVar5 + -0xa8) = uVar1;
  *(undefined8 *)(puVar5 + -0xa0) = 0x3eb4000;
  *(dword **)(puVar5 + -0x98) = pdVar24;
  *(long *)(puVar5 + -0x90) = lVar13;
  *(dword **)(puVar5 + -0x88) = pdVar22;
  *(dword **)(puVar5 + -0x80) = pdVar21;
  *(dword **)(puVar5 + -0x78) = pdVar12;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x68) = puVar29;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar5 + -0xe0) = 0;
  *(undefined8 *)(puVar5 + -0xd8) = 0;
  *(undefined8 *)(puVar5 + -0xd0) = 0;
  *(undefined4 *)(puVar5 + -0xe4) = 0;
  if (*(long *)(lVar14 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar14 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar17 == 0) goto code_r0x014fe8f8;
  uVar10 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar17,0);
  if ((uVar10 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar23,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0)
  ;
  if (iVar7 != 0) {
    if (pdVar8 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0x100,pdVar8,uRam0000000003d3bf10);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0xf8);
    *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x100);
    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xf0);
    while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0xe0,uRam0000000003d32f58), (uVar10 & 1) != 0) {
      lVar13 = *(long *)(puVar5 + -0xd0);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar25 = *(undefined8 *)(lVar13 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar25,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar10 & 1) != 0) {
        fVar31 = *(float *)(lVar13 + 0x18);
        fVar33 = -fVar31;
        if (fVar31 != INFINITY) {
          fVar33 = fVar31;
        }
        *(int *)(puVar5 + -0xe4) = (int)fVar33;
        plVar15 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar5 + -0xe4);
        if (plVar15 == (long *)0x0) goto code_r0x014fe8fc;
        uVar25 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        puVar11 = (undefined4 *)func_0x00f78ae4(plVar15);
        *(undefined4 *)(puVar5 + -0xe4) = *puVar11;
        lVar23 = /*System.String$$Concat*/ func_0x029bdb88(lVar23,uVar25,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar14 + 0x28),lVar23,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    pdVar12 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar14 + 0x28),lVar23,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar16 - 1 < 2) {
        dVar19 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar19 = 1;
code_r0x014fe860:
      *pdVar16 = dVar19;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar17 + 0xa0) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar17 + 0xa0) + 0x90), lVar13 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar13,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar7 < 3);
      }
      uVar10 = 2;
    }
    else {
      uVar10 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar17,0);
          return pdVar12;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar10,0);
    pdVar12 = (dword *)(ulong)(iVar7 == 0);
  }
  return pdVar12;
}



// ============================================================
// RVA: 0x15c3654 | Atlas.Gameplay.Kart.KartComposite.LateUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__LateUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb52f3 & 1) == 0) {
    func_0x00f78a20(0x3d22c78);
    bRam0000000003eb52f3 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x20);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    /*Atlas.Gameplay.Kart.KartVisualAnimation$$LateUpdate*/ func_0x015e5eec(*(long *)(param_1 + 0x30),param_2,0);
  }
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x1d0));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Atlas.Gameplay.Kart.KartPhysics$$LateUpdate*/ func_0x015c3760();
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar2);
  return;
}



// ============================================================
// RVA: 0x15c3a04 | Atlas.Gameplay.Kart.KartComposite.EnableRespawns
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__EnableRespawns(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf0) = param_2;
  return;
}



// ============================================================
// RVA: 0x15c3a0c | Atlas.Gameplay.Kart.KartComposite.GetPortal
// ============================================================

long Atlas_Gameplay_Kart_KartComposite__GetPortal(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 *extraout_x8;
  undefined8 uVar5;
  
  if ((bRam0000000003eb52f6 & 1) == 0) {
    func_0x00f78a20(0x3d570b0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d71368);
    bRam0000000003eb52f6 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xf8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_015c3ae4;
    /*Atlas.Gameplay.PortalVFXBehaviour$$Reset*/ func_0x014c353c(*(long *)(param_1 + 0xf8),0);
    lVar2 = *(long *)(param_1 + 0xf8);
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
LAB_015c3ae4:
      lVar2 = func_0x00f78af4();
      if ((*(long *)(lVar2 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60), lVar3 != 0)) {
        lVar3 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar3,0);
        if ((int)lVar3 == 0) {
          return lVar3;
        }
        if (((*(long *)(lVar2 + 0x10) != 0) &&
            (lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60), lVar2 != 0)) &&
           (plVar4 = *(long **)(lVar2 + 200), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar2 = (**(code **)(*plVar4 + 0x2c8))(plVar4,*(undefined8 *)(*plVar4 + 0x2d0));
          return lVar2;
        }
      }
      lVar2 = func_0x00f78af4();
      *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
      *(undefined8 *)((long)extraout_x8 + 5) = 0;
      extraout_x8[7] = 0;
      *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
      iVar1 = *(int *)(lVar2 + 0x50);
      *extraout_x8 = *(undefined4 *)(lVar2 + 0x54);
      *(bool *)(extraout_x8 + 1) = iVar1 == 0;
      return lVar2;
    }
    lVar2 = /*Atlas.Contexts.GameContextBase$$SpawnObject<PortalVFXBehaviour>*/ func_0x0185c0e0(*(long *)(param_1 + 0x78),/*STR('PortalVFXBehaviour')*/ uRam0000000003d71368,uRam0000000003d570b0);
    *(long *)(param_1 + 0xf8) = lVar2;
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  return lVar2;
}



// ============================================================
// RVA: 0x15c3ae8 | Atlas.Gameplay.Kart.KartComposite.RemoveActiveUsables
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__RemoveActiveUsables(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 *extraout_x8;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar2 != 0)) {
    iVar1 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar2,0);
    if (iVar1 == 0) {
      return;
    }
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 200), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
  *(undefined8 *)((long)extraout_x8 + 5) = 0;
  extraout_x8[7] = 0;
  *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
  iVar1 = *(int *)(lVar2 + 0x50);
  *extraout_x8 = *(undefined4 *)(lVar2 + 0x54);
  *(bool *)(extraout_x8 + 1) = iVar1 == 0;
  return;
}



// ============================================================
// RVA: 0x15c3b54 | Atlas.Gameplay.Kart.KartComposite.GetAsNetworkCar
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__GetAsNetworkCar(undefined4 *param_1,long param_2)

{
  int iVar1;
  
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 5) = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  *param_1 = *(undefined4 *)(param_2 + 0x54);
  *(bool *)(param_1 + 1) = iVar1 == 0;
  return;
}



// ============================================================
// RVA: 0x15c3b7c | Atlas.Gameplay.Kart.KartComposite.SetToAiIfLocalAi
// ============================================================

/* WARNING: Possible PIC construction at 0x01680840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01680b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680844) */
/* WARNING: Removing unreachable block (ram,0x01680b78) */
/* WARNING: Removing unreachable block (ram,0x01680b7c) */
/* WARNING: Removing unreachable block (ram,0x01680b94) */
/* WARNING: Removing unreachable block (ram,0x01680be8) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */
/* WARNING: Removing unreachable block (ram,0x01680bd8) */

long * Atlas_Gameplay_Kart_KartComposite__SetToAiIfLocalAi
                 (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined4 param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x20;
  undefined *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 extraout_s0;
  float fVar20;
  float extraout_s0_00;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  long lStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar9 = param_6[1];
  uVar7 = *param_6;
  uVar5 = param_6[2];
  *(undefined8 *)(param_5 + 0x60) = param_6[3];
  *(ulong *)(param_5 + 0x58) = uVar5;
  *(undefined8 *)(param_5 + 0x50) = uVar9;
  *(undefined8 *)(param_5 + 0x48) = uVar7;
  lVar3 = *(long *)(param_5 + 0x80);
  if (lVar3 == 0) goto LAB_015c3ca8;
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(param_5 + 0x54);
  if (*(int *)(param_6 + 1) == 2) {
    *(undefined1 *)(lVar3 + 0x44) = 1;
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_015c3ca8;
    if (*(int *)(*(long *)(param_5 + 0x20) + 0x10) == 3) {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_015c3ca8;
      unaff_x20 = *(undefined1 **)(*(long *)(param_5 + 0x10) + 0x70);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_015c3ca8;
      /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(unaff_x20,0);
      if (*(long *)(param_5 + 0x80) == 0) goto LAB_015c3ca8;
      uVar18 = /*Core.Services.Replicator$$get_LastKnownPosition*/ func_0x0167f1d0(*(long *)(param_5 + 0x80),0);
      uVar21 = (undefined4)uVar5;
      if (*(long *)(param_5 + 0x80) == 0) goto LAB_015c3ca8;
      fVar23 = param_3;
      uVar19 = /*Core.Services.Replicator$$get_LastKnownRotation*/ func_0x0167f1ec(*(long *)(param_5 + 0x80),0);
      uVar5 = uVar5 & 0xffffffff;
      Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                (uVar18,uVar5,param_3,uVar19,uVar21,fVar23,param_4,0xbf800000,param_5,7);
      plVar4 = *(long **)(param_5 + 0x68);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      }
    }
    if (*(long *)(param_5 + 0x20) == 0) {
LAB_015c3ca8:
      uVar18 = (undefined4)uVar5;
      lVar3 = func_0x00f78af4();
      if ((*(long *)(lVar3 + 0x10) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x48), param_5 = lVar3, lVar6 != 0)) {
        param_7 = 0;
        /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetGamePlayFreezeAndBrake*/ func_0x015da590(lVar6,1,0);
        if ((*(long *)(lVar3 + 0x10) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60), lVar6 != 0)) {
          param_7 = 2;
          param_8 = 0;
          /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKinematic*/ func_0x015da058(lVar6,1,2);
          if (*(long *)(lVar3 + 0x28) != 0) {
            /*Atlas.Gameplay.Kart.KartVisualComposite$$SetKartInFrontEnd*/ func_0x015ea148(*(long *)(lVar3 + 0x28),0);
            lVar3 = *(long *)(lVar3 + 0x80);
            if (lVar3 != 0) {
              if (pcRam0000000003ebe9d8 == (code *)0x0) {
                pcRam0000000003ebe9d8 =
                     (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
              }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar4 = (long *)(*pcRam0000000003ebe9d8)(lVar3,0);
              return plVar4;
            }
          }
        }
      }
      lVar3 = func_0x00f78af4();
      uStack_80 = &stack0xffffffffffffff90;
      if (*(long *)(lVar3 + 0x28) == 0) {
        lVar3 = func_0x00f78af4();
        uStack_78 = &Atlas_Gameplay_Kart_KartComposite__OnUsableHit;
        if (*(long *)(lVar3 + 0x10) == 0) {
          return (long *)0x0;
        }
        lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60);
        puStack_90 = unaff_x20;
        puStack_88 = (undefined *)param_5;
        puVar1 = &stack0xffffffffffffff90;
        if (lVar6 != 0) {
          uVar5 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsInvuln*/ func_0x015d96f0(lVar6,0);
          if ((uVar5 & 1) != 0) {
            return (long *)0x0;
          }
          uVar7 = 0;
          if (param_8 != 0) {
            uVar7 = *(undefined8 *)(param_8 + 0x90);
          }
          puVar1 = uStack_80;
          if ((*(long *)(lVar3 + 0x10) != 0) &&
             (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60), lVar6 != 0)) {
            iVar2 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar6,0);
            puVar1 = uStack_80;
            if (iVar2 == 0) {
              if (*(long *)(lVar3 + 0x70) != 0) {
                /*Atlas.Audio.KartAudio$$OnUsableHit*/ func_0x015c0c60(*(long *)(lVar3 + 0x70),0);
                puVar1 = uStack_80;
                if (*(long *)(lVar3 + 0x10) != 0) {
                  lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60);
                  if (lVar6 != 0) {
                    /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(extraout_s0,uVar18,param_3,lVar6,&stack0xffffffffffffff38,0);
                  }
                  puVar1 = uStack_80;
                  if ((*(long *)(lVar3 + 0x78) != 0) &&
                     (lVar6 = *(long *)(*(long *)(lVar3 + 0x78) + 0x40), lVar6 != 0)) {
                    /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitPlayer*/ func_0x015a62cc(lVar6,*(undefined8 *)(lVar3 + 0x90),uVar7,param_7,0);
                    return (long *)((long)&MACH_HEADER.magic + 1);
                  }
                }
              }
            }
            else if ((((*(long *)(lVar3 + 0x78) != 0) && (*(long *)(lVar3 + 0x10) != 0)) &&
                     (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60), lVar6 != 0)) &&
                    ((lVar6 = *(long *)(lVar6 + 200), lVar6 != 0 &&
                     (lVar8 = *(long *)(*(long *)(lVar3 + 0x78) + 0x40), lVar8 != 0)))) {
              /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar8,*(undefined8 *)(lVar3 + 0x90),uVar7,param_7,
                              *(undefined8 *)(lVar6 + 0x30),0);
              puVar1 = uStack_80;
              if ((*(long *)(lVar3 + 0x10) != 0) &&
                 (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60), lVar3 != 0)) {
                /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ConsumeShieldHit*/ func_0x015d9ec4(0xbf800000,lVar3,0);
                return (long *)0x0;
              }
            }
          }
        }
        uStack_80 = puVar1;
        auVar25 = func_0x00f78af4();
        lStack_e8 = auVar25._8_8_;
        puStack_d8 = &Atlas_Gameplay_Kart_KartPhysics__OnUsableHit;
        lVar3 = *(long *)(auVar25._0_8_ + 0x60);
        plVar4 = (long *)0x0;
        if (lVar3 != 0) {
          ppuStack_e0 = (undefined1 **)&uStack_80;
          plVar4 = (long *)/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(lVar3,&lStack_e8,0);
        }
        return plVar4;
      }
      return (long *)(ulong)*(byte *)(*(long *)(lVar3 + 0x28) + 400);
    }
    *(undefined4 *)(*(long *)(param_5 + 0x20) + 0x10) = 1;
    lVar3 = *(long *)(param_5 + 0x80);
    if (lVar3 == 0) goto LAB_015c3ca8;
  }
  fVar23 = (float)uVar5;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  lVar3 = *(long *)(lVar3 + 0x20);
  if (lVar3 == 0) {
    return (long *)0x0;
  }
  *(undefined1 *)(lVar3 + 0x30) = 0;
  *(undefined2 *)(lVar3 + 0x100) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x9c) = 0;
  *(undefined8 *)(lVar3 + 0xac) = 0;
  *(undefined8 *)(lVar3 + 0xa4) = 0;
  *(undefined8 *)(lVar3 + 0xc0) = 0;
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  *(undefined8 *)(lVar3 + 0xd0) = 0;
  *(undefined8 *)(lVar3 + 200) = 0;
  *(undefined8 *)(lVar3 + 0xe0) = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  *(undefined8 *)(lVar3 + 0xe9) = 0;
  *(undefined8 *)(lVar3 + 0xe1) = 0;
  lVar3 = *(long *)(lVar3 + 0xf8);
  fVar20 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0,0);
  if (lVar3 != 0) {
    fVar22 = 0.0;
    fVar24 = fVar20;
    plVar4 = (long *)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(float *)(lVar3 + 0x38) = fVar23;
    *(float *)(lVar3 + 0x3c) = param_3;
    *(float *)(lVar3 + 0x10) = fVar20;
    *(float *)(lVar3 + 0x14) = fVar23;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(float *)(lVar3 + 0x18) = param_3;
    *(float *)(lVar3 + 0x1c) = extraout_s0_00;
    *(float *)(lVar3 + 0x20) = fVar22;
    *(float *)(lVar3 + 0x24) = fVar24;
    *(float *)(lVar3 + 0x28) = fVar20 + extraout_s0_00 * 0.0;
    *(float *)(lVar3 + 0x2c) = fVar23 + fVar22 * 0.0;
    *(float *)(lVar3 + 0x30) = param_3 + fVar24 * 0.0;
    *(float *)(lVar3 + 0x34) = fVar20;
    return plVar4;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb59ef & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d22900);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d73060);
    func_0x00f78a20(0x3d73048);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d73028);
    func_0x00f78a20(0x3d7d1e8);
    func_0x00f78a20(0x3d760d0);
    func_0x00f78a20(0x3d7d100);
    bRam0000000003eb59ef = 1;
  }
  plVar4 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
  if (plVar4 != (long *)0x0) {
    if ((/*STR('{{')*/ lRam0000000003d7d100 == 0) ||
       (lVar6 = func_0x00f78adc(/*STR('{{')*/ lRam0000000003d7d100,*(undefined8 *)(*plVar4 + 0x40)), lVar6 != 0))
    {
      if ((int)plVar4[3] != 0) {
        plVar4[4] = /*STR('{{')*/ lRam0000000003d7d100;
        uVar7 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&stack0xffffffffffffff9c);
        lVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar7,0);
        if ((lVar6 != 0) &&
           (lVar8 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
        goto code_r0x01680440;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
          plVar4[5] = lVar6;
          uVar7 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&stack0xffffffffffffff9b);
          lVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncOwner={0} ')*/ uRam0000000003d73060,uVar7,0);
          if ((lVar6 != 0) &&
             (lVar8 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
          goto code_r0x01680440;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = lVar6;
            uVar7 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&stack0xffffffffffffff9a);
            lVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0} ')*/ uRam0000000003d73028,uVar7,0);
            if ((lVar6 != 0) &&
               (lVar8 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
            goto code_r0x01680440;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
              plVar4[7] = lVar6;
              uVar7 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,&stack0xffffffffffffff98);
              uVar9 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&stack0xffffffffffffff94);
              uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&stack0xffffffffffffff90);
              lVar6 = /*System.String$$Format*/ func_0x029bdf30(/*STR('SyncInstanceId={0}({1}:{2}) ')*/ uRam0000000003d73048,uVar7,uVar9,uVar10,0);
              if ((lVar6 != 0) &&
                 (lVar8 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
              goto code_r0x01680440;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = lVar6;
                if (*(long *)(lVar3 + 0x20) == 0) {
                  uVar18 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  uVar18 = *(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x9c);
                }
                uStack_78 = (undefined *)CONCAT44(uVar18,(undefined4)uStack_78);
                uVar7 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,(long)&uStack_78 + 4);
                if (*(long *)(lVar3 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  fVar23 = *(float *)(*(long *)(lVar3 + 0x20) + 0xa0);
                }
                uStack_78 = (undefined *)CONCAT44(uStack_78._4_4_,fVar23);
                uVar9 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_78);
                if (*(long *)(lVar3 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  param_3 = *(float *)(*(long *)(lVar3 + 0x20) + 0xa4);
                }
                uStack_80 = (undefined1 *)CONCAT44(param_3,(undefined4)uStack_80);
                uVar10 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,(long)&uStack_80 + 4);
                lVar3 = /*System.String$$Format*/ func_0x029bdf30(/*STR('Velocity={0:F2},{1:F2},{2:F2} ')*/ uRam0000000003d760d0,uVar7,uVar9,uVar10,0);
                if ((lVar3 != 0) &&
                   (lVar6 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto code_r0x01680440;
                uVar15 = *(uint *)(plVar4 + 3);
                if (5 < uVar15) {
                  plVar4[9] = lVar3;
                  if (/*STR('}}')*/ lRam0000000003d7d1e8 != 0) {
                    lVar3 = func_0x00f78adc(/*STR('}}')*/ lRam0000000003d7d1e8,*(undefined8 *)(*plVar4 + 0x40));
                    if (lVar3 == 0) goto code_r0x01680440;
                    uVar15 = *(uint *)(plVar4 + 3);
                  }
                  if (6 < uVar15) {
                    plVar4[10] = /*STR('}}')*/ lRam0000000003d7d1e8;
                    plVar4 = (long *)/*System.String$$Concat*/ func_0x029cfadc(plVar4,0);
                    return plVar4;
                  }
                }
              }
            }
          }
        }
      }
      uVar7 = func_0x00f78b24();
    }
    else {
code_r0x01680440:
      uVar7 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar7,0);
  }
  lVar3 = func_0x00f78af4();
  puStack_88 = &Core_Services_Replicator__Start;
  puStack_90 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb59f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d5c480);
    func_0x00f78a20(0x3d63b80);
    func_0x00f78a20(0x3d28928);
    func_0x00f78a20(0x3d25710);
    bRam0000000003eb59f0 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8) == 0) {
    if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar16 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
    lVar6 = puVar16[1];
    if (lVar6 == 0) {
      if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar16 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
      }
      uVar7 = *puVar16;
      lVar6 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
      /*System.Func<bool>$$.ctor*/ func_0x02163070(lVar6,uVar7,uRam0000000003d63b80,uRam0000000003d35530);
      *(long *)(*(long *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8) + 8) = lVar6;
    }
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(lVar6,4,0,0);
    uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar3,uRam0000000003d5c480,0);
    if ((bRam0000000003ebc80e & 1) == 0) {
      func_0x00f78a20(0x3d52108,uVar7,0);
      bRam0000000003ebc80e = 1;
    }
    puStack_d8 = (undefined *)0x0;
    ppuStack_e0 = (undefined1 **)0xffffffff;
    lStack_f0 = 0;
    lStack_e8 = 0;
    /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<UniTaskExtensions.<ContinueWith>d__29>*/ func_0x0181e1cc(&lStack_f0,&ppuStack_e0,uRam0000000003d52108);
    plVar4 = (long *)/*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&ppuStack_e0 | 8);
    return plVar4;
  }
  lVar6 = 0x3d22970;
  if ((bRam0000000003eb59f1 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d24408);
    func_0x00f78a20(0x3d5c488);
    func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f1 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  *(long *)(lVar3 + 0x18) = lVar8;
  if (lVar8 == 0) {
code_r0x01680860:
    func_0x00f78af4();
code_r0x01680864:
    puVar17 = &Core_Services_ReplicatorProviderEsq___ctor;
    auVar25 = func_0x00f78e5c();
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x148);
    uVar7 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
    /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar7,lVar3,uRam0000000003d5c488,puRam0000000003d2a5c8);
    plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,uVar7,0);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) goto code_r0x01680864;
    *(long **)(lVar8 + 0x148) = plVar4;
    lVar8 = *(long *)(lVar3 + 0x18);
    if (lVar8 == 0) goto code_r0x01680860;
    lVar6 = *(long *)(lVar8 + 0x140);
    uVar7 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar7,lVar3,uRam0000000003d5c490,puRam0000000003d2a2a8);
    plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,uVar7,0);
    if ((plVar4 != (long *)0x0) && (*plVar4 != /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) goto code_r0x01680864;
    *(long **)(lVar8 + 0x140) = plVar4;
    lVar6 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq_TypeInfo*/ uRam0000000003d24408);
    auVar25._8_8_ = lVar3;
    auVar25._0_8_ = lVar6;
    puVar17 = &UNK_01680844;
  }
  lVar12 = auVar25._8_8_;
  lVar8 = auVar25._0_8_;
  lStack_f0 = lVar6;
  lStack_e8 = lVar3;
  ppuStack_e0 = &puStack_90;
  puStack_d8 = puVar17;
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
  *(long *)(lVar8 + 0x28) = lVar12;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((lVar12 != 0) && (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar3 != 0)) {
    uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d578f0);
    *(undefined8 *)(lVar8 + 0x10) = uVar7;
    lVar3 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0);
    *(long *)(lVar8 + 0x18) = lVar3;
    lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0);
    if ((lVar6 != 0) && (uVar7 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar6,uRam0000000003d57978), lVar3 != 0)) {
      /*Core.Services.ReplicatorFloorClampEsq$$Init*/ func_0x016820f8(lVar3,uVar7);
      uVar7 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar4 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(lVar8 + 0xf8) = uVar7;
      return plVar4;
    }
  }
  plVar11 = (long *)func_0x00f78af4();
  plVar4 = plVar11;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar4 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar3 = plVar11[3];
  if (lVar3 == 0) {
    return plVar4;
  }
  uVar9 = *(undefined8 *)(lVar3 + 0x148);
  uVar7 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar14 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar7,plVar11,uRam0000000003d5c488);
  puVar13 = (undefined4 *)0x0;
  plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar7);
  if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar3 + 0x148) = plVar4;
    lVar3 = plVar11[3];
    if (lVar3 == 0) goto code_r0x01680b58;
    uVar9 = *(undefined8 *)(lVar3 + 0x140);
    uVar7 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar14 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar7,plVar11,uRam0000000003d5c490);
    puVar13 = (undefined4 *)0x0;
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar7);
    if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar3 + 0x140) = plVar4;
      plVar11[3] = 0;
      return plVar4;
    }
  }
  func_0x00f78e5c();
code_r0x01680b58:
  lVar3 = func_0x00f78af4();
  iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar3,0);
  if (iVar2 == 0) {
    return (long *)0x0;
  }
  lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
  if (lVar6 != 0) {
    iVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar6,0);
    if (iVar2 == 0) {
      return (long *)0x0;
    }
    if (*(char *)(lVar3 + 0x44) == '\0') {
      return (long *)0x0;
    }
    plVar4 = *(long **)(lVar3 + 0x18);
    if (plVar4 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar4 + 0x928))(plVar4,*(undefined8 *)(*plVar4 + 0x930));
      if (iVar2 == 0) {
        return (long *)0x0;
      }
      plVar4 = *(long **)(lVar3 + 0x18);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
        return plVar4;
      }
    }
  }
  auVar25 = func_0x00f78af4();
  lVar3 = auVar25._0_8_;
  uVar7 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar3 + 200),*(undefined4 *)(lVar3 + 0xcc),
                          *(undefined4 *)(lVar3 + 0xd0),0x44fa0000);
  *auVar25._8_8_ = (int)uVar7;
  *(short *)(auVar25._8_8_ + 1) = (short)((ulong)uVar7 >> 0x20);
  uVar7 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar3 + 0xd4),*(undefined4 *)(lVar3 + 0xd8),
                          *(undefined4 *)(lVar3 + 0xdc),0x42c80000);
  *puVar13 = (int)uVar7;
  *(short *)(puVar13 + 1) = (short)((ulong)uVar7 >> 0x20);
  plVar4 = (long *)/*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c(*(undefined4 *)(lVar3 + 0xe0),*(undefined4 *)(lVar3 + 0xe4),
                                   *(undefined4 *)(lVar3 + 0xe8),*(undefined4 *)(lVar3 + 0xec),
                                   0x3f800000);
  *puVar14 = (int)plVar4;
  return plVar4;
}



// ============================================================
// RVA: 0x15c3cac | Atlas.Gameplay.Kart.KartComposite.SetKartInFrontEnd
// ============================================================

ulong Atlas_Gameplay_Kart_KartComposite__SetKartInFrontEnd
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined4 extraout_s0;
  undefined1 auVar8 [16];
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((*(long *)(param_4 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x48), lVar3 != 0)) {
    param_6 = 0;
    /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetGamePlayFreezeAndBrake*/ func_0x015da590(lVar3,1,0);
    if ((*(long *)(param_4 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x60), lVar3 != 0)) {
      param_6 = 2;
      param_7 = 0;
      /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKinematic*/ func_0x015da058(lVar3,1,2);
      if (*(long *)(param_4 + 0x28) != 0) {
        /*Atlas.Gameplay.Kart.KartVisualComposite$$SetKartInFrontEnd*/ func_0x015ea148(*(long *)(param_4 + 0x28),0);
        lVar3 = *(long *)(param_4 + 0x80);
        if (lVar3 != 0) {
          if (pcRam0000000003ebe9d8 == (code *)0x0) {
            pcRam0000000003ebe9d8 =
                 (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*pcRam0000000003ebe9d8)(lVar3,0);
          return uVar6;
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_40 = &stack0xffffffffffffffd0;
  if (*(long *)(lVar3 + 0x28) == 0) {
    lVar3 = func_0x00f78af4();
    puStack_38 = &Atlas_Gameplay_Kart_KartComposite__OnUsableHit;
    if (*(long *)(lVar3 + 0x10) == 0) {
      return 0;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60);
    puVar1 = &stack0xffffffffffffffd0;
    if (lVar4 != 0) {
      uVar6 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsInvuln*/ func_0x015d96f0(lVar4,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      uVar7 = 0;
      if (param_7 != 0) {
        uVar7 = *(undefined8 *)(param_7 + 0x90);
      }
      puVar1 = puStack_40;
      if ((*(long *)(lVar3 + 0x10) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60), lVar4 != 0)) {
        iVar2 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar4,0);
        puVar1 = puStack_40;
        if (iVar2 == 0) {
          if (*(long *)(lVar3 + 0x70) != 0) {
            /*Atlas.Audio.KartAudio$$OnUsableHit*/ func_0x015c0c60(*(long *)(lVar3 + 0x70),0);
            puVar1 = puStack_40;
            if (*(long *)(lVar3 + 0x10) != 0) {
              lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60);
              uStack_88 = extraout_x1;
              if (lVar4 != 0) {
                /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(extraout_s0,param_2,param_3,lVar4,&uStack_88,0);
              }
              puVar1 = puStack_40;
              if ((*(long *)(lVar3 + 0x78) != 0) &&
                 (lVar4 = *(long *)(*(long *)(lVar3 + 0x78) + 0x40), lVar4 != 0)) {
                /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitPlayer*/ func_0x015a62cc(lVar4,*(undefined8 *)(lVar3 + 0x90),uVar7,param_6,0);
                return 1;
              }
            }
          }
        }
        else if ((((*(long *)(lVar3 + 0x78) != 0) && (*(long *)(lVar3 + 0x10) != 0)) &&
                 (lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60), lVar4 != 0)) &&
                ((lVar4 = *(long *)(lVar4 + 200), lVar4 != 0 &&
                 (lVar5 = *(long *)(*(long *)(lVar3 + 0x78) + 0x40), lVar5 != 0)))) {
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar5,*(undefined8 *)(lVar3 + 0x90),uVar7,param_6,
                          *(undefined8 *)(lVar4 + 0x30),0);
          puVar1 = puStack_40;
          if ((*(long *)(lVar3 + 0x10) != 0) &&
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60), lVar3 != 0)) {
            /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ConsumeShieldHit*/ func_0x015d9ec4(0xbf800000,lVar3,0);
            return 0;
          }
        }
      }
    }
    puStack_40 = puVar1;
    auVar8 = func_0x00f78af4();
    uStack_a8 = auVar8._8_8_;
    puStack_98 = &Atlas_Gameplay_Kart_KartPhysics__OnUsableHit;
    lVar3 = *(long *)(auVar8._0_8_ + 0x60);
    uVar6 = 0;
    if (lVar3 != 0) {
      ppuStack_a0 = &puStack_40;
      uVar6 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(lVar3,&uStack_a8,0);
    }
    return uVar6;
  }
  return (ulong)*(byte *)(*(long *)(lVar3 + 0x28) + 400);
}



// ============================================================
// RVA: 0x15c3d28 | Atlas.Gameplay.Kart.KartComposite.get_IsFrontEndKart
// ============================================================

ulong Atlas_Gameplay_Kart_KartComposite__get_IsFrontEndKart
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  undefined4 extraout_s0;
  undefined1 auVar7 [16];
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_4 + 0x28) != 0) {
    return (ulong)*(byte *)(*(long *)(param_4 + 0x28) + 400);
  }
  lVar2 = func_0x00f78af4();
  puStack_18 = &Atlas_Gameplay_Kart_KartComposite__OnUsableHit;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60);
    puStack_20 = &stack0xfffffffffffffff0;
    if (lVar3 != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      uVar4 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsInvuln*/ func_0x015d96f0(lVar3,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      uVar6 = 0;
      if (param_7 != 0) {
        uVar6 = *(undefined8 *)(param_7 + 0x90);
      }
      if ((*(long *)(lVar2 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60), lVar3 != 0)) {
        iVar1 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar3,0);
        if (iVar1 == 0) {
          if (*(long *)(lVar2 + 0x70) != 0) {
            /*Atlas.Audio.KartAudio$$OnUsableHit*/ func_0x015c0c60(*(long *)(lVar2 + 0x70),0);
            if (*(long *)(lVar2 + 0x10) != 0) {
              lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60);
              uStack_68 = extraout_x1;
              if (lVar3 != 0) {
                /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(extraout_s0,param_2,param_3,lVar3,&uStack_68,0);
              }
              if ((*(long *)(lVar2 + 0x78) != 0) &&
                 (lVar3 = *(long *)(*(long *)(lVar2 + 0x78) + 0x40), lVar3 != 0)) {
                /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitPlayer*/ func_0x015a62cc(lVar3,*(undefined8 *)(lVar2 + 0x90),uVar6,param_6,0);
                return 1;
              }
            }
          }
        }
        else if ((((*(long *)(lVar2 + 0x78) != 0) && (*(long *)(lVar2 + 0x10) != 0)) &&
                 (lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60), lVar3 != 0)) &&
                ((lVar3 = *(long *)(lVar3 + 200), lVar3 != 0 &&
                 (lVar5 = *(long *)(*(long *)(lVar2 + 0x78) + 0x40), lVar5 != 0)))) {
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar5,*(undefined8 *)(lVar2 + 0x90),uVar6,param_6,
                          *(undefined8 *)(lVar3 + 0x30),0);
          if ((*(long *)(lVar2 + 0x10) != 0) &&
             (lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60), lVar2 != 0)) {
            /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ConsumeShieldHit*/ func_0x015d9ec4(0xbf800000,lVar2,0);
            return 0;
          }
        }
      }
    }
    auVar7 = func_0x00f78af4();
    uStack_88 = auVar7._8_8_;
    puStack_78 = &Atlas_Gameplay_Kart_KartPhysics__OnUsableHit;
    lVar2 = *(long *)(auVar7._0_8_ + 0x60);
    uVar4 = 0;
    if (lVar2 != 0) {
      ppuStack_80 = &puStack_20;
      uVar4 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(lVar2,&uStack_88,0);
    }
    return uVar4;
  }
  return 0;
}



// ============================================================
// RVA: 0x15c3d48 | Atlas.Gameplay.Kart.KartComposite.OnUsableHit
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartComposite__OnUsableHit
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  
  if (*(long *)(param_4 + 0x10) == 0) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_4 + 0x10) + 0x60);
  if (lVar2 != 0) {
    uVar3 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsInvuln*/ func_0x015d96f0(lVar2,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar5 = 0;
    if (param_7 != 0) {
      uVar5 = *(undefined8 *)(param_7 + 0x90);
    }
    if ((*(long *)(param_4 + 0x10) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_4 + 0x10) + 0x60), lVar2 != 0)) {
      iVar1 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar2,0);
      if (iVar1 == 0) {
        if (*(long *)(param_4 + 0x70) != 0) {
          /*Atlas.Audio.KartAudio$$OnUsableHit*/ func_0x015c0c60(*(long *)(param_4 + 0x70),0);
          if (*(long *)(param_4 + 0x10) != 0) {
            lVar2 = *(long *)(*(long *)(param_4 + 0x10) + 0x60);
            uStack_58 = param_5;
            if (lVar2 != 0) {
              /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(param_1,param_2,param_3,lVar2,&uStack_58,0);
            }
            if ((*(long *)(param_4 + 0x78) != 0) &&
               (lVar2 = *(long *)(*(long *)(param_4 + 0x78) + 0x40), lVar2 != 0)) {
              /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitPlayer*/ func_0x015a62cc(lVar2,*(undefined8 *)(param_4 + 0x90),uVar5,param_6,0);
              return 1;
            }
          }
        }
      }
      else if ((((*(long *)(param_4 + 0x78) != 0) && (*(long *)(param_4 + 0x10) != 0)) &&
               (lVar2 = *(long *)(*(long *)(param_4 + 0x10) + 0x60), lVar2 != 0)) &&
              ((lVar2 = *(long *)(lVar2 + 200), lVar2 != 0 &&
               (lVar4 = *(long *)(*(long *)(param_4 + 0x78) + 0x40), lVar4 != 0)))) {
        /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar4,*(undefined8 *)(param_4 + 0x90),uVar5,param_6,
                        *(undefined8 *)(lVar2 + 0x30),0);
        if ((*(long *)(param_4 + 0x10) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_4 + 0x10) + 0x60), lVar2 != 0)) {
          /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ConsumeShieldHit*/ func_0x015d9ec4(0xbf800000,lVar2,0);
          return 0;
        }
      }
    }
  }
  auVar6 = func_0x00f78af4();
  uStack_78 = auVar6._8_8_;
  puStack_68 = &Atlas_Gameplay_Kart_KartPhysics__OnUsableHit;
  lVar2 = *(long *)(auVar6._0_8_ + 0x60);
  uVar5 = 0;
  if (lVar2 != 0) {
    puStack_70 = &stack0xfffffffffffffff0;
    uVar5 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(lVar2,&uStack_78,0);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x15c3ed8 | Atlas.Gameplay.Kart.KartComposite.OnHitOtherKartWithUsable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c3f08 | Atlas.Gameplay.Kart.KartComposite.OnUsableHoppedOver
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartComposite__OnUsableHoppedOver
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,
               undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  uint uVar23;
  undefined8 unaff_x23;
  code *pcVar24;
  undefined8 unaff_x24;
  long lVar25;
  undefined8 unaff_x25;
  uint uVar26;
  long *plVar27;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar28;
  undefined *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong unaff_d8;
  float fVar41;
  ulong unaff_d9;
  float fVar42;
  undefined8 unaff_d10;
  float fVar43;
  undefined8 unaff_d11;
  float fVar44;
  undefined8 unaff_d12;
  float fVar45;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  float fVar46;
  undefined8 unaff_d15;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulong auStack_350 [25];
  undefined4 auStack_288 [2];
  undefined8 auStack_280 [4];
  undefined4 auStack_260 [4];
  ulong auStack_250 [61];
  long lStack_68;
  
  if ((*(long *)(param_4 + 0x78) != 0) &&
     (lVar16 = *(long *)(*(long *)(param_4 + 0x78) + 0x40), lVar16 != 0)) {
    plVar12 = *(long **)(param_4 + 0x90);
    lVar16 = *(long *)(lVar16 + 0xa8);
    if (lVar16 == 0) {
      return;
    }
    lStack_68 = lVar16;
    lVar13 = *(long *)(lVar16 + 0x68);
    if (lVar13 == 0) {
      plVar27 = &lStack_68;
      lVar25 = 1;
    }
    else {
      lVar25 = *(long *)(lVar13 + 0x18);
      if (lVar25 == 0) {
        return;
      }
      plVar27 = (long *)(lVar13 + 0x20);
    }
    lVar13 = 0;
    do {
      lVar14 = plVar27[lVar13];
      pcVar24 = *(code **)(lVar14 + 0x10);
      plVar1 = *(long **)(lVar14 + 0x20);
      lVar14 = *(long *)(lVar14 + 0x28);
      if (*(short *)(lVar14 + 0x48) == -1) {
        func_0x00f78ad8(lVar14);
      }
      iVar8 = func_0x00f78a4c(lVar14);
      bVar7 = *(char *)(lVar14 + 0x4a) == '\x02';
      if (iVar8 == 0) {
        if (bVar7) {
          if (plVar1 == (long *)0x0) {
code_r0x01554280:
            (*pcVar24)(plVar12,param_5,lVar14);
          }
          else {
            if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar16 + 0x18) == 0)) goto code_r0x01554174;
            iVar8 = func_0x00f78a44(lVar14);
            iVar9 = func_0x00f78ec0(lVar14);
            if (iVar8 == 0) {
              uVar2 = *(ushort *)(lVar14 + 0x48);
              if (iVar9 == 0) {
                lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar14 + 0x138))
                          (plVar1,plVar12,param_5,*(undefined8 *)(lVar14 + 0x140));
                goto code_r0x01554290;
              }
              lVar14 = func_0x00f78a48(lVar14);
              lVar15 = *plVar1;
              uVar21 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == lVar14) {
                    puVar11 = (undefined8 *)
                              (lVar15 + (long)(int)(*piVar22 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x01554428;
                  }
                  piVar22 = piVar22 + 4;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar1,lVar14,(ulong)uVar2);
code_r0x01554428:
              pcVar24 = (code *)*puVar11;
              puVar11 = (undefined8 *)puVar11[1];
            }
            else {
              if (iVar9 == 0) {
                uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar15 = *plVar1;
                uVar21 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar14 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01554400;
                    }
                    piVar22 = piVar22 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                lVar15 = func_0x00fac1f0(plVar1);
code_r0x01554400:
                uVar10 = *(undefined8 *)(lVar15 + 8);
              }
              puVar11 = (undefined8 *)func_0x00f78acc(uVar10,lVar14);
              pcVar24 = (code *)*puVar11;
            }
            (*pcVar24)(plVar1,plVar12,param_5,puVar11);
          }
        }
        else {
          if ((*(short *)(lVar14 + 0x48) == -1) || (*(long *)(lVar16 + 0x18) == 0))
          goto code_r0x01554280;
          iVar8 = func_0x00f78a44(lVar14);
          iVar9 = func_0x00f78ec0(lVar14);
          if (iVar8 == 0) {
            uVar2 = *(ushort *)(lVar14 + 0x48);
            if (iVar9 == 0) {
              lVar14 = *plVar12 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar14 + 0x138))(plVar12,param_5,*(undefined8 *)(lVar14 + 0x140));
              goto code_r0x01554290;
            }
            lVar14 = func_0x00f78a48(lVar14);
            lVar15 = *plVar12;
            uVar21 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == lVar14) {
                  puVar11 = (undefined8 *)
                            (lVar15 + (long)(int)(*piVar22 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x015543bc;
                }
                piVar22 = piVar22 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar12,lVar14,(ulong)uVar2);
code_r0x015543bc:
            pcVar24 = (code *)*puVar11;
            puVar11 = (undefined8 *)puVar11[1];
          }
          else {
            if (iVar9 == 0) {
              uVar10 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *plVar12;
              uVar21 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar14 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554394;
                  }
                  piVar22 = piVar22 + 4;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              lVar15 = func_0x00fac1f0(plVar12);
code_r0x01554394:
              uVar10 = *(undefined8 *)(lVar15 + 8);
            }
            puVar11 = (undefined8 *)func_0x00f78acc(uVar10,lVar14);
            pcVar24 = (code *)*puVar11;
          }
          (*pcVar24)(plVar12,param_5,puVar11);
        }
      }
      else {
        if (bVar7) goto code_r0x01554280;
code_r0x01554174:
        (*pcVar24)(plVar1,plVar12,param_5,lVar14);
      }
code_r0x01554290:
      lVar13 = lVar13 + 1;
      if (lVar13 == lVar25) {
        return;
      }
    } while( true );
  }
  auVar47 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffe0;
  puVar28 = &stack0xffffffffffffffe0;
  lVar16 = *(long *)(auVar47._0_8_ + 0x10);
  auVar47._8_8_ = auVar47._8_8_;
  auVar47._0_8_ = lVar16;
  if (lVar16 == 0) {
    puVar29 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionEnter;
    auVar47 = func_0x00f78af4();
  }
  else {
    puVar4 = &stack0xfffffffffffffff0;
    puVar29 = &Atlas_Gameplay_Kart_KartComposite__OnCollisionEnter;
    puVar28 = &stack0xfffffffffffffff0;
  }
  uVar21 = auVar47._8_8_;
  lVar16 = auVar47._0_8_;
  *(undefined8 *)(puVar4 + -0xa0) = unaff_d15;
  *(undefined8 *)(puVar4 + -0x98) = unaff_d14;
  *(undefined8 *)(puVar4 + -0x90) = unaff_d13;
  *(undefined8 *)(puVar4 + -0x88) = unaff_d12;
  *(undefined8 *)(puVar4 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar4 + -0x78) = unaff_d10;
  *(ulong *)(puVar4 + -0x70) = unaff_d9;
  *(ulong *)(puVar4 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(ulong *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar28;
  *(undefined **)(puVar4 + -8) = puVar29;
  lVar13 = 0x3eb5000;
  if ((bRam0000000003eb537e & 1) == 0) {
    func_0x00f78a20(0x3d534c8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d232c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb537e = 1;
  }
  *(undefined4 *)(puVar4 + -0xe0) = 0;
  *(undefined8 *)(puVar4 + -0xf8) = 0;
  *(undefined8 *)(puVar4 + -0x100) = 0;
  *(undefined8 *)(puVar4 + -0xe8) = 0;
  *(undefined8 *)(puVar4 + -0xf0) = 0;
  if (0.0 < *(float *)(lVar16 + 0x5b4)) {
    return;
  }
  *(undefined4 *)(puVar4 + -0xb0) = 0;
  *(undefined8 *)(puVar4 + -200) = 0;
  *(undefined8 *)(puVar4 + -0xd0) = 0;
  *(undefined8 *)(puVar4 + -0xb8) = 0;
  *(undefined8 *)(puVar4 + -0xc0) = 0;
  if (uVar21 == 0) goto code_r0x015c4b60;
  fVar42 = *(float *)(lVar16 + 0x2ac);
  fVar43 = *(float *)(lVar16 + 0x2b0);
  uVar34 = *(undefined4 *)(lVar16 + 0x2b4);
  *(undefined4 *)(puVar4 + -0x168) = *(undefined4 *)(lVar16 + 0x2b8);
  *(undefined4 *)(puVar4 + -0x164) = uVar34;
  uVar34 = *(undefined4 *)(lVar16 + 700);
  *(undefined4 *)(puVar4 + -0x170) = *(undefined4 *)(lVar16 + 0x2c0);
  *(undefined4 *)(puVar4 + -0x16c) = uVar34;
  fVar35 = *(float *)(lVar16 + 0x2c4);
  *(undefined4 *)(puVar4 + -0x1b0) = *(undefined4 *)(lVar16 + 0x2c8);
  *(float *)(puVar4 + -0x1ac) = fVar35;
  *(undefined4 *)(puVar4 + -0x1b4) = *(undefined4 *)(lVar16 + 0x2cc);
  iVar8 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(uVar21,0);
  fVar41 = (float)param_3;
  if (iVar8 < 1) {
    *(undefined8 *)(puVar4 + -0x1d0) = 0;
    *(undefined8 *)(puVar4 + -0x1c8) = 0;
    *(undefined4 *)(puVar4 + -0x1d4) = 0;
    bVar7 = false;
    uVar26 = 0;
    *(undefined8 *)(puVar4 + -0x188) = 0;
    *(undefined8 *)(puVar4 + -400) = 0;
  }
  else {
    iVar8 = 0;
    uVar26 = 0;
    *(undefined4 *)(puVar4 + -0x1a8) = 0;
    *(undefined8 *)(puVar4 + -0x1d0) = 0;
    *(undefined8 *)(puVar4 + -0x1c8) = 0;
    *(undefined4 *)(puVar4 + -0x1d4) = 0;
    *(undefined8 *)(puVar4 + -0x188) = 0;
    *(undefined8 *)(puVar4 + -400) = 0;
    unaff_d8 = (ulong)(uint)_UNK_033f86cc;
    *(undefined4 *)(puVar4 + -0x174) = _UNK_033f875c;
    *(float *)(puVar4 + -0x1bc) = fVar43;
    *(float *)(puVar4 + -0x1b8) = fVar42;
    *(float *)(puVar4 + -0x1c0) = _UNK_033f86cc;
    bVar3 = false;
    do {
      /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14(puVar4 + -0x130,uVar21,iVar8,0);
      uVar10 = *(undefined8 *)(puVar4 + -0x120);
      *(undefined8 *)(puVar4 + -0xf8) = *(undefined8 *)(puVar4 + -0x128);
      *(undefined8 *)(puVar4 + -0x100) = *(undefined8 *)(puVar4 + -0x130);
      *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0x118);
      *(undefined8 *)(puVar4 + -0xf0) = uVar10;
      *(undefined4 *)(puVar4 + -0xe0) = *(undefined4 *)(puVar4 + -0x110);
      /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0x100,0);
      fVar35 = (float)uVar10;
      uVar23 = uVar26;
      bVar7 = bVar3;
      if (fVar35 <= (float)unaff_d8) {
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0x100,0);
        uVar34 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        *(float *)(puVar4 + -0x198) = fVar35;
        *(undefined4 *)(puVar4 + -0x194) = uVar34;
        *(int *)(puVar4 + -400) = (int)param_3;
        /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(uVar21,0);
        uVar34 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        *(float *)(puVar4 + -0x1a4) = fVar35;
        *(undefined4 *)(puVar4 + -0x1a0) = uVar34;
        *(int *)(puVar4 + -0x19c) = (int)param_3;
        /*UnityEngine.ContactPoint$$get_point*/ func_0x0329f028(puVar4 + -0x100,0);
        fVar30 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar30 = fVar30 - *(float *)(lVar16 + 0x2d0);
        fVar35 = fVar35 - *(float *)(lVar16 + 0x2d4);
        fVar46 = (float)param_3 - *(float *)(lVar16 + 0x2d8);
        fVar36 = *(float *)(puVar4 + -0x164) * fVar46;
        fVar44 = fVar36 + fVar42 * fVar30 + fVar43 * fVar35;
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0x100,0);
        fVar31 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar41 = (float)param_3;
        fVar37 = *(float *)(puVar4 + -0x170) * fVar46;
        fVar45 = fVar37 + *(float *)(puVar4 + -0x168) * fVar30 +
                          *(float *)(puVar4 + -0x16c) * fVar35;
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0x100,0);
        fVar32 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar46 = *(float *)(puVar4 + -0x1b4) * fVar46;
        if (fVar46 + *(float *)(puVar4 + -0x1ac) * fVar30 + *(float *)(puVar4 + -0x1b0) * fVar35 <=
            0.5) {
          uVar23 = 0;
        }
        else {
          /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0x100,0);
          param_3 = param_3 & 0xffffffff;
          uVar23 = (uint)(fVar46 < 0.0);
        }
        uVar18 = 100;
        if (fVar44 <= 0.5) {
          uVar18 = 0;
        }
        uVar40 = 10;
        if (-0.5 <= fVar44) {
          uVar40 = 0;
        }
        uVar18 = uVar40 | uVar18 | (uint)(fVar45 < -0.5);
        if (0.5 < fVar45) {
          uVar18 = uVar18 + 1;
        }
        if (*(int *)(puVar4 + -0x1a8) < (int)(uVar23 + uVar18)) {
          *(uint *)(puVar4 + -0x1c8) = (uint)(0.5 < fVar44);
          *(uint *)(puVar4 + -0x1c4) = (uint)(uVar23 != 0);
          *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -0xf8);
          *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0x100);
          *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xe8);
          *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xf0);
          *(uint *)(puVar4 + -0x1a8) = uVar23 + uVar18;
          *(undefined4 *)(puVar4 + -0xb0) = *(undefined4 *)(puVar4 + -0xe0);
          *(uint *)(puVar4 + -0x1d0) = (uint)(fVar45 < -0.5);
          *(uint *)(puVar4 + -0x1cc) = (uint)(0.5 < fVar45);
          *(uint *)(puVar4 + -0x1d4) = (uint)(fVar44 < -0.5);
        }
        fVar43 = *(float *)(puVar4 + -0x1bc);
        fVar42 = *(float *)(puVar4 + -0x1b8);
        fVar41 = *(float *)(puVar4 + -0x164) * fVar41 + fVar42 * fVar31 + fVar43 * fVar36;
        if (fVar44 <= 0.5) {
          unaff_x22 = 0;
        }
        else {
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            *(float *)(puVar4 + -0x1dc) = fVar37;
            *(int *)(puVar4 + -0x1d8) = (int)param_3;
            func_0x00f78ad0();
            fVar37 = *(float *)(puVar4 + -0x1dc);
            param_3 = (ulong)*(uint *)(puVar4 + -0x1d8);
          }
          unaff_x22 = (ulong)(*(float *)(puVar4 + -0x174) < ABS(fVar41));
        }
        if (-0.5 <= fVar44) {
          bVar7 = false;
          fVar35 = *(float *)(puVar4 + -400);
        }
        else {
          fVar35 = *(float *)(puVar4 + -400);
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            *(float *)(puVar4 + -0x1dc) = fVar37;
            *(int *)(puVar4 + -0x1d8) = (int)param_3;
            func_0x00f78ad0();
            fVar37 = *(float *)(puVar4 + -0x1dc);
            param_3 = (ulong)*(uint *)(puVar4 + -0x1d8);
          }
          bVar7 = *(float *)(puVar4 + -0x174) < ABS(fVar41);
        }
        fVar41 = *(float *)(puVar4 + -0x170) * (float)param_3 +
                 *(float *)(puVar4 + -0x168) * fVar32 + *(float *)(puVar4 + -0x16c) * fVar37;
        if (fVar45 <= 0.5) {
          uVar18 = 0;
          fVar30 = *(float *)(puVar4 + -0x19c);
        }
        else {
          fVar30 = *(float *)(puVar4 + -0x19c);
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = (uint)(*(float *)(puVar4 + -0x174) < ABS(fVar41));
        }
        iVar9 = (int)unaff_x22;
        if (-0.5 <= fVar45) {
          uVar40 = 100;
          if (iVar9 == 0) {
            uVar40 = 0;
          }
          uVar19 = 0;
          if (bVar7) {
            uVar19 = 10;
          }
          uVar19 = uVar19 | uVar40;
          uVar40 = *(uint *)(puVar4 + -0x1c0);
          fVar31 = *(float *)(puVar4 + -0x198);
          unaff_d9 = (ulong)*(uint *)(puVar4 + -0x194);
          fVar32 = *(float *)(puVar4 + -0x1a0);
code_r0x015c4458:
          iVar20 = 0;
        }
        else {
          fVar31 = *(float *)(puVar4 + -0x198);
          unaff_d9 = (ulong)*(uint *)(puVar4 + -0x194);
          fVar32 = *(float *)(puVar4 + -0x1a0);
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar40 = 100;
          if (iVar9 == 0) {
            uVar40 = 0;
          }
          uVar19 = 0;
          if (bVar7) {
            uVar19 = 10;
          }
          uVar19 = uVar19 | uVar40;
          if (ABS(fVar41) <= *(float *)(puVar4 + -0x174)) {
            uVar40 = *(uint *)(puVar4 + -0x1c0);
            goto code_r0x015c4458;
          }
          iVar20 = 1;
          uVar40 = *(uint *)(puVar4 + -0x1c0);
        }
        unaff_d8 = (ulong)uVar40;
        fVar35 = fVar35 * fVar30;
        *(undefined8 *)(puVar4 + -0x188) = 0;
        *(ulong *)(puVar4 + -400) =
             (ulong)(uint)(fVar35 + (float)unaff_d9 * fVar32 + fVar31 * *(float *)(puVar4 + -0x1a4))
        ;
        uVar23 = iVar20 + uVar19 + uVar18 + uVar23;
        bVar7 = iVar9 != 0;
        if (uVar23 <= uVar26) {
          uVar23 = uVar26;
          bVar7 = bVar3;
        }
      }
      uVar26 = uVar23;
      iVar8 = iVar8 + 1;
      iVar9 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(uVar21,0);
      fVar41 = (float)param_3;
      bVar3 = bVar7;
    } while (iVar8 < iVar9);
  }
  uVar10 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(uVar21,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
  lVar13 = 0;
  if (iVar8 != 0) {
    lVar25 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(uVar21,0);
    if (lVar25 == 0) goto code_r0x015c4b60;
    lVar13 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar25,uRam0000000003d534c8);
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x22 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
  uVar34 = 5;
  if ((*(uint *)(puVar4 + -0x1c4) & 1) == 0) {
    uVar34 = 0;
  }
  uVar38 = 4;
  if ((*(uint *)(puVar4 + -0x1d4) & 1) == 0) {
    uVar38 = uVar34;
  }
  uVar34 = 2;
  if ((*(uint *)(puVar4 + -0x1d0) & 1) == 0) {
    uVar34 = uVar38;
  }
  uVar38 = 3;
  if ((*(uint *)(puVar4 + -0x1cc) & 1) == 0) {
    uVar38 = uVar34;
  }
  if ((*(uint *)(puVar4 + -0x1c8) & 1) != 0) {
    uVar38 = 1;
  }
  lVar25 = 0x4a4;
  if ((int)unaff_x22 == 0) {
    lVar25 = 0x4a8;
  }
  fVar42 = *(float *)(lVar16 + lVar25);
  unaff_d8 = (ulong)(uint)fVar42;
  fVar43 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(puVar4 + -0xd0,0);
  if (fVar43 <= fVar42) {
    lVar25 = *(long *)(lVar16 + 0x20);
    if (lVar25 != 0) {
      uVar10 = *(undefined8 *)(lVar16 + 0x68);
      *(undefined8 *)(puVar4 + -0x110) = 0;
      *(undefined8 *)(puVar4 + -0x128) = 0;
      *(undefined8 *)(puVar4 + -0x130) = 0;
      *(undefined8 *)(puVar4 + -0x118) = 0;
      *(undefined8 *)(puVar4 + -0x120) = 0;
      uVar33 = *(ulong *)(puVar4 + -400);
      fVar41 = (float)uVar33;
      /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar33,uVar33 & 0xffffffff,puVar4 + -0x130,uVar10,uVar21,unaff_x22,uVar38,0);
      uVar10 = *(undefined8 *)(puVar4 + -0x120);
      *(undefined8 *)(puVar4 + -0x158) = *(undefined8 *)(puVar4 + -0x128);
      *(undefined8 *)(puVar4 + -0x160) = *(undefined8 *)(puVar4 + -0x130);
      *(undefined8 *)(puVar4 + -0x148) = *(undefined8 *)(puVar4 + -0x118);
      *(undefined8 *)(puVar4 + -0x150) = uVar10;
      *(undefined8 *)(puVar4 + -0x140) = *(undefined8 *)(puVar4 + -0x110);
      /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar25,puVar4 + -0x160,0);
      fVar35 = (float)uVar10;
    }
    if (uVar26 == 0 && (unaff_x22 & 1) == 0) {
      /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0xd0,0);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      if ((((1.0 <= (float)*(undefined8 *)(puVar4 + -400)) && (fVar35 <= _UNK_033f86cc)) &&
          (1 < *(int *)(lVar16 + 0x1e0))) && (*(char *)(lVar16 + 0x1d3) != '\0')) {
        *(undefined4 *)(lVar16 + 0x1e0) = 0;
        *(undefined1 *)(lVar16 + 0x1d3) = 0;
        *(undefined1 *)(lVar16 + 0x339) = 1;
      }
    }
    else {
      if ((int)unaff_x22 == 0) {
        uVar21 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(uVar21,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar21,0,0);
        if (iVar8 != 0) {
          if (bVar7) {
            uVar34 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
            *(undefined8 *)(lVar16 + 0x234) = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
            *(undefined4 *)(lVar16 + 0x23c) = uVar34;
            lVar25 = *(long *)(lVar16 + 0x40);
            fVar43 = (float)*(undefined8 *)(puVar4 + -400);
            if (lVar25 == 0) goto code_r0x015c4b60;
            if (*(float *)(lVar25 + 0x130) < fVar43) {
              uVar34 = *(undefined4 *)(lVar25 + 0x138);
              *(undefined4 *)(lVar16 + 0x1c4) = uVar34;
              *(undefined4 *)(lVar16 + 0x1cc) = uVar34;
              if ((*(long *)(lVar16 + 0x70) == 0) ||
                 (lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar16 + 0x70),0), lVar25 == 0))
              goto code_r0x015c4b60;
              fVar42 = (float)/*UnityEngine.Transform$$get_up*/ func_0x03275714(lVar25,0);
              unaff_d8 = (ulong)(uint)fVar42;
              unaff_d9 = (ulong)(uint)fVar43;
              fVar35 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0x40a00000,0x41200000,0);
              iVar8 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0xffffffff,2,0);
              fVar35 = fVar35 * (float)iVar8;
              fVar43 = fVar43 * fVar35;
              fVar41 = fVar41 * fVar35;
              uVar34 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar42 * fVar35,0);
              *(undefined4 *)(lVar16 + 0x234) = uVar34;
              *(float *)(lVar16 + 0x238) = fVar43;
              *(float *)(lVar16 + 0x23c) = fVar41;
            }
            if ((*(long *)(lVar16 + 0x70) == 0) ||
               (lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar16 + 0x70),0), lVar25 == 0))
            goto code_r0x015c4b60;
            /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar25,0);
            fVar42 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            unaff_d8 = (ulong)(uint)fVar42;
            unaff_d9 = (ulong)(uint)fVar41;
            uVar21 = 0x3ca3000;
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (*(long *)(lVar16 + 0x40) == 0) goto code_r0x015c4b60;
            fVar30 = 1.0 / SQRT(fVar41 * fVar41 + fVar42 * fVar42 + 0.0);
            fVar31 = (float)*(undefined8 *)(puVar4 + -400);
            fVar43 = fVar31 * fVar30 * -fVar41;
            fVar35 = *(float *)(*(long *)(lVar16 + 0x40) + 0x114);
            *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)(puVar4 + -0x188);
            *(undefined8 *)(puVar4 + -400) = *(undefined8 *)(puVar4 + -400);
            *(ulong *)(lVar16 + 0x228) =
                 CONCAT44(fVar30 * -0.0 * fVar31 * fVar35,-fVar42 * fVar30 * fVar31 * fVar35);
            *(float *)(lVar16 + 0x230) = fVar43 * fVar35;
            *(undefined4 *)(lVar16 + 0xd0) = 0;
            *(undefined4 *)(lVar16 + 0xec) = 0;
            *(undefined4 *)(lVar16 + 0xdc) = 0;
            *(undefined4 *)(lVar16 + 0x10c) = 0;
            *(undefined1 *)(lVar16 + 0x118) = 0;
            *(undefined4 *)(lVar16 + 0x1f0) = 0;
          }
          else {
            if ((*(long *)(lVar16 + 0x70) == 0) ||
               (lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar16 + 0x70),0), lVar25 == 0))
            goto code_r0x015c4b60;
            fVar30 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar25,0);
            unaff_d8 = (ulong)(uint)fVar30;
            unaff_d9 = (ulong)(uint)fVar35;
            fVar43 = fVar35;
            fVar42 = fVar41;
            fVar31 = (float)/*UnityEngine.ContactPoint$$get_point*/ func_0x0329f028(puVar4 + -0xd0,0);
            fVar41 = fVar41 - fVar42;
            fVar43 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar30 - fVar31,fVar35 - fVar43,0);
            if (*(long *)(lVar16 + 0x70) == 0) goto code_r0x015c4b60;
            unaff_d9 = (ulong)(uint)fVar43;
            unaff_d8 = (ulong)(uint)fVar41;
            fVar42 = *(float *)(lVar16 + 0x194);
            uVar21 = (ulong)(uint)fVar42;
            fVar32 = *(float *)(lVar16 + 0x438);
            fVar36 = *(float *)(lVar16 + 0x450);
            fVar31 = *(float *)(lVar16 + 0x4b0);
            fVar30 = *(float *)(lVar16 + 0x4b4);
            fVar35 = fVar41;
            lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar16 + 0x70),0);
            if (lVar25 == 0) goto code_r0x015c4b60;
            fVar30 = fVar30 - fVar31;
            fVar42 = (ABS(fVar42) / (fVar32 + fVar36)) * fVar30;
            /*UnityEngine.Transform$$get_right*/ func_0x03275618(lVar25,0);
            fVar32 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            fVar35 = fVar41 * fVar35 + fVar43 * fVar32 + fVar30 * 0.0;
            fVar43 = 1.0;
            if (fVar35 == 0.0 || 0.0 > fVar35) {
              fVar43 = 0.0;
            }
            fVar41 = 1.0;
            if (0.0 <= fVar35) {
              fVar41 = 0.0;
            }
            *(float *)(lVar16 + 0x210) = (fVar31 + fVar42) * (fVar43 - fVar41);
          }
          /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0xd0,0);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          if ((((1.0 <= (float)*(undefined8 *)(puVar4 + -400)) && (fVar43 <= _UNK_033f86cc)) &&
              (1 < *(int *)(lVar16 + 0x1e0))) && (*(char *)(lVar16 + 0x1d3) != '\0')) {
            *(undefined4 *)(lVar16 + 0x1e0) = 0;
            *(undefined1 *)(lVar16 + 0x1d3) = 0;
            *(undefined1 *)(lVar16 + 0x339) = 1;
          }
        }
      }
      else {
        if (((*(long *)(lVar16 + 0x70) == 0) ||
            (lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar16 + 0x70),0), lVar25 == 0)) ||
           (fVar43 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar25,0), lVar13 == 0)) {
code_r0x015c4b60:
          auVar47 = func_0x00f78af4();
          puVar5 = puVar4 + -0x1f0;
          puVar28 = puVar4 + -0x1f0;
          *(undefined1 **)(puVar4 + -0x1f0) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x1e8) = &Atlas_Gameplay_Kart_KartComposite__OnCollisionStay;
          lVar25 = *(long *)(auVar47._0_8_ + 0x10);
          auVar48._8_8_ = auVar47._8_8_;
          auVar48._0_8_ = lVar25;
          if (lVar25 == 0) {
            puVar29 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionStay;
            auVar48 = func_0x00f78af4();
          }
          else {
            puVar28 = *(undefined1 **)(puVar4 + -0x1f0);
            puVar29 = *(undefined **)(puVar4 + -0x1e8);
            puVar5 = puVar4 + -0x1e0;
          }
          lVar14 = auVar48._8_8_;
          lVar25 = auVar48._0_8_;
          *(ulong *)(puVar5 + -0x40) = unaff_d9;
          *(ulong *)(puVar5 + -0x38) = unaff_d8;
          *(ulong *)(puVar5 + -0x30) = unaff_x22;
          *(long *)(puVar5 + -0x28) = lVar13;
          *(ulong *)(puVar5 + -0x20) = uVar21;
          *(long *)(puVar5 + -0x18) = lVar16;
          *(undefined1 **)(puVar5 + -0x10) = puVar28;
          *(undefined **)(puVar5 + -8) = puVar29;
          if ((bRam0000000003eb537f & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb537f = 1;
          }
          *(undefined4 *)(puVar5 + -0x50) = 0;
          *(undefined8 *)(puVar5 + -0x68) = 0;
          *(undefined8 *)(puVar5 + -0x70) = 0;
          *(undefined8 *)(puVar5 + -0x58) = 0;
          *(undefined8 *)(puVar5 + -0x60) = 0;
          if (lVar14 == 0) {
            auVar47 = func_0x00f78af4();
            puVar6 = puVar5 + -0xb0;
            puVar28 = puVar5 + -0xb0;
            *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x10;
            *(undefined **)(puVar5 + -0xa8) = &Atlas_Gameplay_Kart_KartComposite__OnCollisionExit;
            lVar16 = *(long *)(auVar47._0_8_ + 0x10);
            auVar49._8_8_ = auVar47._8_8_;
            auVar49._0_8_ = lVar16;
            if (lVar16 == 0) {
              puVar29 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionExit;
              auVar49 = func_0x00f78af4();
            }
            else {
              puVar28 = *(undefined1 **)(puVar5 + -0xb0);
              puVar29 = *(undefined **)(puVar5 + -0xa8);
              puVar6 = puVar5 + -0xa0;
            }
            *(ulong *)(puVar6 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar6 + -0x28) = 0x3eb5000;
            *(undefined8 *)(puVar6 + -0x20) = 0;
            *(long *)(puVar6 + -0x18) = lVar25;
            *(undefined1 **)(puVar6 + -0x10) = puVar28;
            *(undefined **)(puVar6 + -8) = puVar29;
            if ((bRam0000000003eb5380 & 1) == 0) {
              func_0x00f78a20(0x3d265d8);
              bRam0000000003eb5380 = 1;
            }
            lVar16 = *(long *)(auVar49._0_8_ + 0x28);
            if (lVar16 != 0) {
              uVar10 = *(undefined8 *)(auVar49._0_8_ + 0x68);
              puVar17 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
              uVar34 = *puVar17;
              uVar38 = puVar17[1];
              uVar39 = puVar17[2];
              *(undefined8 *)(puVar6 + -0x40) = 0;
              *(undefined8 *)(puVar6 + -0x58) = 0;
              *(undefined8 *)(puVar6 + -0x60) = 0;
              *(undefined8 *)(puVar6 + -0x48) = 0;
              *(undefined8 *)(puVar6 + -0x50) = 0;
              /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar34,uVar38,uVar39,puVar6 + -0x60,uVar10,auVar49._8_8_,0,0,0);
              *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x58);
              *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x60);
              *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x48);
              *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x50);
              *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x40);
              /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar16,puVar6 + -0x90,0);
            }
            return;
          }
          uVar10 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(lVar14,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar21 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
          if ((uVar21 & 1) == 0) {
            fVar42 = *(float *)(lVar25 + 0x4ac);
            iVar8 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(lVar14,0);
            fVar43 = _UNK_033f86cc;
            if (0 < iVar8) {
              iVar8 = 0;
              do {
                /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14(puVar5 + -0x98,lVar14,iVar8,0);
                uVar10 = *(undefined8 *)(puVar5 + -0x88);
                *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x90);
                *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x98);
                *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x80);
                *(undefined8 *)(puVar5 + -0x60) = uVar10;
                *(undefined4 *)(puVar5 + -0x50) = *(undefined4 *)(puVar5 + -0x78);
                /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar5 + -0x70,0);
                if ((float)uVar10 <= fVar43) {
                  if (*(char *)(lVar25 + 0x1d3) != '\0') {
                    *(undefined4 *)(lVar25 + 0x1e0) = 0;
                    *(undefined1 *)(lVar25 + 0x1d3) = 0;
                    *(undefined1 *)(lVar25 + 0x339) = 1;
                  }
                  fVar35 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(puVar5 + -0x70,0);
                  if (fVar35 <= fVar42) {
                    /*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(puVar5 + -0x70,0);
                    if (*(float *)(lVar25 + 0x4b8) == 0.0) {
                      return;
                    }
                    if (*(float *)(lVar25 + 0x194) <= *(float *)(lVar25 + 0x4bc)) {
                      return;
                    }
                    *(float *)(lVar25 + 0x214) = *(float *)(lVar25 + 0x4b8);
                    return;
                  }
                }
                iVar8 = iVar8 + 1;
                iVar9 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(lVar14,0);
              } while (iVar8 < iVar9);
            }
          }
          return;
        }
        unaff_d8 = (ulong)(uint)fVar43;
        unaff_d9 = (ulong)(uint)fVar35;
        fVar42 = fVar35;
        fVar30 = fVar41;
        lVar25 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
        if ((lVar25 == 0) || (lVar25 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar25,0), lVar25 == 0))
        goto code_r0x015c4b60;
        fVar31 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar25,0);
        uVar33 = (ulong)(uint)(fVar41 - fVar30);
        fVar43 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar43 - fVar31,fVar35 - fVar42,0);
        plVar12 = *(long **)(lVar13 + 0xa0);
        if (plVar12 == (long *)0x0) {
          return;
        }
        if (*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) {
          return;
        }
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78) {
          return;
        }
        if ((plVar12 == (long *)0x0) || (plVar12[2] == 0)) goto code_r0x015c4b60;
        unaff_d9 = (ulong)(uint)fVar43;
        unaff_d8 = uVar33 & 0xffffffff;
        fVar42 = *(float *)(plVar12[2] + 0x194);
        fVar41 = *(float *)(lVar16 + 0x194) - fVar42;
        fVar35 = *(float *)(lVar16 + 0x438) + *(float *)(lVar16 + 0x450);
        fVar42 = ABS(*(float *)(lVar16 + 0x194) - fVar42) / fVar35;
        if (0.0 <= fVar41) {
          lVar25 = *(long *)(lVar16 + 0x70);
          if (lVar25 == 0) goto code_r0x015c4b60;
          fVar30 = *(float *)(lVar16 + 0x498);
          fVar31 = *(float *)(lVar16 + 0x49c);
        }
        else {
          lVar25 = *(long *)(lVar16 + 0x70);
          if (lVar25 == 0) goto code_r0x015c4b60;
          fVar30 = *(float *)(lVar16 + 0x490);
          fVar31 = *(float *)(lVar16 + 0x494);
        }
        lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar25,0);
        if (lVar25 == 0) goto code_r0x015c4b60;
        /*UnityEngine.Transform$$get_right*/ func_0x03275618(lVar25,0);
        fVar32 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar35 = (float)uVar33 * fVar41 + fVar43 * fVar32 + fVar35 * 0.0;
        fVar43 = 1.0;
        if (fVar35 == 0.0 || 0.0 > fVar35) {
          fVar43 = 0.0;
        }
        fVar41 = 1.0;
        if (0.0 <= fVar35) {
          fVar41 = 0.0;
        }
        *(float *)(lVar16 + 0x210) = (fVar30 + fVar42 * (fVar31 - fVar30)) * (fVar43 - fVar41);
      }
      *(undefined4 *)(lVar16 + 0x5b4) = *(undefined4 *)(lVar16 + 0x4cc);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15c3f3c | Atlas.Gameplay.Kart.KartComposite.OnCollisionEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartComposite__OnCollisionEnter
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,
               ulong param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar18;
  ulong unaff_x22;
  uint uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  uint uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  ulong unaff_d8;
  float fVar33;
  ulong unaff_d9;
  float fVar34;
  undefined8 unaff_d10;
  float fVar35;
  undefined8 unaff_d11;
  float fVar36;
  undefined8 unaff_d12;
  float fVar37;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  float fVar38;
  undefined8 unaff_d15;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  puVar3 = &stack0xfffffffffffffff0;
  lVar8 = *(long *)(param_4 + 0x10);
  if (lVar8 == 0) {
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionEnter;
    auVar39 = func_0x00f78af4();
    param_5 = auVar39._8_8_;
    lVar8 = auVar39._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar3;
  }
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar18 = 0x3eb5000;
  if ((bRam0000000003eb537e & 1) == 0) {
    func_0x00f78a20(0x3d534c8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d232c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb537e = 1;
  }
  *(undefined4 *)((long)register0x00000008 + -0xe0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  if (0.0 < *(float *)(lVar8 + 0x5b4)) {
    return;
  }
  *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  if (param_5 == 0) goto code_r0x015c4b60;
  fVar34 = *(float *)(lVar8 + 0x2ac);
  fVar35 = *(float *)(lVar8 + 0x2b0);
  uVar26 = *(undefined4 *)(lVar8 + 0x2b4);
  *(undefined4 *)((long)register0x00000008 + -0x168) = *(undefined4 *)(lVar8 + 0x2b8);
  *(undefined4 *)((long)register0x00000008 + -0x164) = uVar26;
  uVar26 = *(undefined4 *)(lVar8 + 700);
  *(undefined4 *)((long)register0x00000008 + -0x170) = *(undefined4 *)(lVar8 + 0x2c0);
  *(undefined4 *)((long)register0x00000008 + -0x16c) = uVar26;
  fVar27 = *(float *)(lVar8 + 0x2c4);
  *(undefined4 *)((long)register0x00000008 + -0x1b0) = *(undefined4 *)(lVar8 + 0x2c8);
  *(float *)((long)register0x00000008 + -0x1ac) = fVar27;
  *(undefined4 *)((long)register0x00000008 + -0x1b4) = *(undefined4 *)(lVar8 + 0x2cc);
  iVar6 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_5,0);
  fVar33 = (float)param_3;
  if (iVar6 < 1) {
    *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x1d4) = 0;
    bVar1 = false;
    uVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined8 *)((long)register0x00000008 + -400) = 0;
  }
  else {
    iVar6 = 0;
    uVar20 = 0;
    *(undefined4 *)((long)register0x00000008 + -0x1a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x1d4) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined8 *)((long)register0x00000008 + -400) = 0;
    unaff_d8 = (ulong)(uint)_UNK_033f86cc;
    *(undefined4 *)((long)register0x00000008 + -0x174) = _UNK_033f875c;
    *(float *)((long)register0x00000008 + -0x1bc) = fVar35;
    *(float *)((long)register0x00000008 + -0x1b8) = fVar34;
    *(float *)((long)register0x00000008 + -0x1c0) = _UNK_033f86cc;
    bVar2 = false;
    do {
      /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14((undefined1 *)((long)register0x00000008 + -0x130),param_5,iVar6,0);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0x120);
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0x128);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x130);
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0x118);
      *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar9;
      *(undefined4 *)((long)register0x00000008 + -0xe0) =
           *(undefined4 *)((long)register0x00000008 + -0x110);
      /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0x100),0);
      fVar27 = (float)uVar9;
      uVar19 = uVar20;
      bVar1 = bVar2;
      if (fVar27 <= (float)unaff_d8) {
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0x100),0);
        uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        *(float *)((long)register0x00000008 + -0x198) = fVar27;
        *(undefined4 *)((long)register0x00000008 + -0x194) = uVar26;
        *(int *)((long)register0x00000008 + -400) = (int)param_3;
        /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(param_5,0);
        uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        *(float *)((long)register0x00000008 + -0x1a4) = fVar27;
        *(undefined4 *)((long)register0x00000008 + -0x1a0) = uVar26;
        *(int *)((long)register0x00000008 + -0x19c) = (int)param_3;
        /*UnityEngine.ContactPoint$$get_point*/ func_0x0329f028((undefined1 *)((long)register0x00000008 + -0x100),0);
        fVar23 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar23 = fVar23 - *(float *)(lVar8 + 0x2d0);
        fVar27 = fVar27 - *(float *)(lVar8 + 0x2d4);
        fVar38 = (float)param_3 - *(float *)(lVar8 + 0x2d8);
        fVar28 = *(float *)((long)register0x00000008 + -0x164) * fVar38;
        fVar36 = fVar28 + fVar34 * fVar23 + fVar35 * fVar27;
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0x100),0);
        fVar24 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar33 = (float)param_3;
        fVar29 = *(float *)((long)register0x00000008 + -0x170) * fVar38;
        fVar37 = fVar29 + *(float *)((long)register0x00000008 + -0x168) * fVar23 +
                          *(float *)((long)register0x00000008 + -0x16c) * fVar27;
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0x100),0);
        fVar25 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar38 = *(float *)((long)register0x00000008 + -0x1b4) * fVar38;
        if (fVar38 + *(float *)((long)register0x00000008 + -0x1ac) * fVar23 +
                     *(float *)((long)register0x00000008 + -0x1b0) * fVar27 <= 0.5) {
          uVar19 = 0;
        }
        else {
          /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0x100),0);
          param_3 = param_3 & 0xffffffff;
          uVar19 = (uint)(fVar38 < 0.0);
        }
        uVar15 = 100;
        if (fVar36 <= 0.5) {
          uVar15 = 0;
        }
        uVar32 = 10;
        if (-0.5 <= fVar36) {
          uVar32 = 0;
        }
        uVar15 = uVar32 | uVar15 | (uint)(fVar37 < -0.5);
        if (0.5 < fVar37) {
          uVar15 = uVar15 + 1;
        }
        if (*(int *)((long)register0x00000008 + -0x1a8) < (int)(uVar19 + uVar15)) {
          *(uint *)((long)register0x00000008 + -0x1c8) = (uint)(0.5 < fVar36);
          *(uint *)((long)register0x00000008 + -0x1c4) = (uint)(uVar19 != 0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -0xf8);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0x100);
          *(undefined8 *)((long)register0x00000008 + -0xb8) =
               *(undefined8 *)((long)register0x00000008 + -0xe8);
          *(undefined8 *)((long)register0x00000008 + -0xc0) =
               *(undefined8 *)((long)register0x00000008 + -0xf0);
          *(uint *)((long)register0x00000008 + -0x1a8) = uVar19 + uVar15;
          *(undefined4 *)((long)register0x00000008 + -0xb0) =
               *(undefined4 *)((long)register0x00000008 + -0xe0);
          *(uint *)((long)register0x00000008 + -0x1d0) = (uint)(fVar37 < -0.5);
          *(uint *)((long)register0x00000008 + -0x1cc) = (uint)(0.5 < fVar37);
          *(uint *)((long)register0x00000008 + -0x1d4) = (uint)(fVar36 < -0.5);
        }
        fVar35 = *(float *)((long)register0x00000008 + -0x1bc);
        fVar34 = *(float *)((long)register0x00000008 + -0x1b8);
        fVar33 = *(float *)((long)register0x00000008 + -0x164) * fVar33 +
                 fVar34 * fVar24 + fVar35 * fVar28;
        if (fVar36 <= 0.5) {
          unaff_x22 = 0;
        }
        else {
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            *(float *)((long)register0x00000008 + -0x1dc) = fVar29;
            *(int *)((long)register0x00000008 + -0x1d8) = (int)param_3;
            func_0x00f78ad0();
            fVar29 = *(float *)((long)register0x00000008 + -0x1dc);
            param_3 = (ulong)*(uint *)((long)register0x00000008 + -0x1d8);
          }
          unaff_x22 = (ulong)(*(float *)((long)register0x00000008 + -0x174) < ABS(fVar33));
        }
        if (-0.5 <= fVar36) {
          bVar1 = false;
          fVar27 = *(float *)((long)register0x00000008 + -400);
        }
        else {
          fVar27 = *(float *)((long)register0x00000008 + -400);
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            *(float *)((long)register0x00000008 + -0x1dc) = fVar29;
            *(int *)((long)register0x00000008 + -0x1d8) = (int)param_3;
            func_0x00f78ad0();
            fVar29 = *(float *)((long)register0x00000008 + -0x1dc);
            param_3 = (ulong)*(uint *)((long)register0x00000008 + -0x1d8);
          }
          bVar1 = *(float *)((long)register0x00000008 + -0x174) < ABS(fVar33);
        }
        fVar33 = *(float *)((long)register0x00000008 + -0x170) * (float)param_3 +
                 *(float *)((long)register0x00000008 + -0x168) * fVar25 +
                 *(float *)((long)register0x00000008 + -0x16c) * fVar29;
        if (fVar37 <= 0.5) {
          uVar15 = 0;
          fVar23 = *(float *)((long)register0x00000008 + -0x19c);
        }
        else {
          fVar23 = *(float *)((long)register0x00000008 + -0x19c);
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar15 = (uint)(*(float *)((long)register0x00000008 + -0x174) < ABS(fVar33));
        }
        iVar7 = (int)unaff_x22;
        if (-0.5 <= fVar37) {
          uVar32 = 100;
          if (iVar7 == 0) {
            uVar32 = 0;
          }
          uVar16 = 0;
          if (bVar1) {
            uVar16 = 10;
          }
          uVar16 = uVar16 | uVar32;
          uVar32 = *(uint *)((long)register0x00000008 + -0x1c0);
          fVar24 = *(float *)((long)register0x00000008 + -0x198);
          unaff_d9 = (ulong)*(uint *)((long)register0x00000008 + -0x194);
          fVar25 = *(float *)((long)register0x00000008 + -0x1a0);
code_r0x015c4458:
          iVar17 = 0;
        }
        else {
          fVar24 = *(float *)((long)register0x00000008 + -0x198);
          unaff_d9 = (ulong)*(uint *)((long)register0x00000008 + -0x194);
          fVar25 = *(float *)((long)register0x00000008 + -0x1a0);
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar32 = 100;
          if (iVar7 == 0) {
            uVar32 = 0;
          }
          uVar16 = 0;
          if (bVar1) {
            uVar16 = 10;
          }
          uVar16 = uVar16 | uVar32;
          if (ABS(fVar33) <= *(float *)((long)register0x00000008 + -0x174)) {
            uVar32 = *(uint *)((long)register0x00000008 + -0x1c0);
            goto code_r0x015c4458;
          }
          iVar17 = 1;
          uVar32 = *(uint *)((long)register0x00000008 + -0x1c0);
        }
        unaff_d8 = (ulong)uVar32;
        fVar27 = fVar27 * fVar23;
        *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
        *(ulong *)((long)register0x00000008 + -400) =
             (ulong)(uint)(fVar27 + (float)unaff_d9 * fVar25 +
                                    fVar24 * *(float *)((long)register0x00000008 + -0x1a4));
        uVar19 = iVar17 + uVar16 + uVar15 + uVar19;
        bVar1 = iVar7 != 0;
        if (uVar19 <= uVar20) {
          uVar19 = uVar20;
          bVar1 = bVar2;
        }
      }
      uVar20 = uVar19;
      iVar6 = iVar6 + 1;
      iVar7 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_5,0);
      fVar33 = (float)param_3;
      bVar2 = bVar1;
    } while (iVar6 < iVar7);
  }
  uVar9 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_5,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
  lVar18 = 0;
  if (iVar6 != 0) {
    lVar10 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_5,0);
    if (lVar10 == 0) goto code_r0x015c4b60;
    lVar18 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar10,uRam0000000003d534c8);
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x22 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
  uVar26 = 5;
  if ((*(uint *)((long)register0x00000008 + -0x1c4) & 1) == 0) {
    uVar26 = 0;
  }
  uVar30 = 4;
  if ((*(uint *)((long)register0x00000008 + -0x1d4) & 1) == 0) {
    uVar30 = uVar26;
  }
  uVar26 = 2;
  if ((*(uint *)((long)register0x00000008 + -0x1d0) & 1) == 0) {
    uVar26 = uVar30;
  }
  uVar30 = 3;
  if ((*(uint *)((long)register0x00000008 + -0x1cc) & 1) == 0) {
    uVar30 = uVar26;
  }
  if ((*(uint *)((long)register0x00000008 + -0x1c8) & 1) != 0) {
    uVar30 = 1;
  }
  lVar10 = 0x4a4;
  if ((int)unaff_x22 == 0) {
    lVar10 = 0x4a8;
  }
  fVar34 = *(float *)(lVar8 + lVar10);
  unaff_d8 = (ulong)(uint)fVar34;
  fVar35 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0((undefined1 *)((long)register0x00000008 + -0xd0),0);
  if (fVar35 <= fVar34) {
    lVar10 = *(long *)(lVar8 + 0x20);
    if (lVar10 != 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x68);
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
      uVar11 = *(ulong *)((long)register0x00000008 + -400);
      fVar33 = (float)uVar11;
      /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar11,uVar11 & 0xffffffff,(undefined1 *)((long)register0x00000008 + -0x130),
                      uVar9,param_5,unaff_x22,uVar30,0);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0x120);
      *(undefined8 *)((long)register0x00000008 + -0x158) =
           *(undefined8 *)((long)register0x00000008 + -0x128);
      *(undefined8 *)((long)register0x00000008 + -0x160) =
           *(undefined8 *)((long)register0x00000008 + -0x130);
      *(undefined8 *)((long)register0x00000008 + -0x148) =
           *(undefined8 *)((long)register0x00000008 + -0x118);
      *(undefined8 *)((long)register0x00000008 + -0x150) = uVar9;
      *(undefined8 *)((long)register0x00000008 + -0x140) =
           *(undefined8 *)((long)register0x00000008 + -0x110);
      /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar10,(undefined1 *)((long)register0x00000008 + -0x160),0);
      fVar27 = (float)uVar9;
    }
    if (uVar20 == 0 && (unaff_x22 & 1) == 0) {
      /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0xd0),0);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      if ((((1.0 <= (float)*(undefined8 *)((long)register0x00000008 + -400)) &&
           (fVar27 <= _UNK_033f86cc)) && (1 < *(int *)(lVar8 + 0x1e0))) &&
         (*(char *)(lVar8 + 0x1d3) != '\0')) {
        *(undefined4 *)(lVar8 + 0x1e0) = 0;
        *(undefined1 *)(lVar8 + 0x1d3) = 0;
        *(undefined1 *)(lVar8 + 0x339) = 1;
      }
    }
    else {
      if ((int)unaff_x22 == 0) {
        param_5 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_5,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0,0);
        if (iVar6 != 0) {
          if (bVar1) {
            uVar26 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
            *(undefined8 *)(lVar8 + 0x234) = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
            *(undefined4 *)(lVar8 + 0x23c) = uVar26;
            lVar10 = *(long *)(lVar8 + 0x40);
            fVar35 = (float)*(undefined8 *)((long)register0x00000008 + -400);
            if (lVar10 == 0) goto code_r0x015c4b60;
            if (*(float *)(lVar10 + 0x130) < fVar35) {
              uVar26 = *(undefined4 *)(lVar10 + 0x138);
              *(undefined4 *)(lVar8 + 0x1c4) = uVar26;
              *(undefined4 *)(lVar8 + 0x1cc) = uVar26;
              if ((*(long *)(lVar8 + 0x70) == 0) ||
                 (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x70),0), lVar10 == 0))
              goto code_r0x015c4b60;
              fVar34 = (float)/*UnityEngine.Transform$$get_up*/ func_0x03275714(lVar10,0);
              unaff_d8 = (ulong)(uint)fVar34;
              unaff_d9 = (ulong)(uint)fVar35;
              fVar27 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0x40a00000,0x41200000,0);
              iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0xffffffff,2,0);
              fVar27 = fVar27 * (float)iVar6;
              fVar35 = fVar35 * fVar27;
              fVar33 = fVar33 * fVar27;
              uVar26 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar34 * fVar27,0);
              *(undefined4 *)(lVar8 + 0x234) = uVar26;
              *(float *)(lVar8 + 0x238) = fVar35;
              *(float *)(lVar8 + 0x23c) = fVar33;
            }
            if ((*(long *)(lVar8 + 0x70) == 0) ||
               (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x70),0), lVar10 == 0))
            goto code_r0x015c4b60;
            /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar10,0);
            fVar34 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            unaff_d8 = (ulong)(uint)fVar34;
            unaff_d9 = (ulong)(uint)fVar33;
            param_5 = 0x3ca3000;
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (*(long *)(lVar8 + 0x40) == 0) goto code_r0x015c4b60;
            fVar23 = 1.0 / SQRT(fVar33 * fVar33 + fVar34 * fVar34 + 0.0);
            fVar24 = (float)*(undefined8 *)((long)register0x00000008 + -400);
            fVar35 = fVar24 * fVar23 * -fVar33;
            fVar27 = *(float *)(*(long *)(lVar8 + 0x40) + 0x114);
            *(undefined8 *)((long)register0x00000008 + -0x188) =
                 *(undefined8 *)((long)register0x00000008 + -0x188);
            *(undefined8 *)((long)register0x00000008 + -400) =
                 *(undefined8 *)((long)register0x00000008 + -400);
            *(ulong *)(lVar8 + 0x228) =
                 CONCAT44(fVar23 * -0.0 * fVar24 * fVar27,-fVar34 * fVar23 * fVar24 * fVar27);
            *(float *)(lVar8 + 0x230) = fVar35 * fVar27;
            *(undefined4 *)(lVar8 + 0xd0) = 0;
            *(undefined4 *)(lVar8 + 0xec) = 0;
            *(undefined4 *)(lVar8 + 0xdc) = 0;
            *(undefined4 *)(lVar8 + 0x10c) = 0;
            *(undefined1 *)(lVar8 + 0x118) = 0;
            *(undefined4 *)(lVar8 + 0x1f0) = 0;
          }
          else {
            if ((*(long *)(lVar8 + 0x70) == 0) ||
               (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x70),0), lVar10 == 0))
            goto code_r0x015c4b60;
            fVar23 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0);
            unaff_d8 = (ulong)(uint)fVar23;
            unaff_d9 = (ulong)(uint)fVar27;
            fVar35 = fVar27;
            fVar34 = fVar33;
            fVar24 = (float)/*UnityEngine.ContactPoint$$get_point*/ func_0x0329f028((undefined1 *)((long)register0x00000008 + -0xd0),0);
            fVar33 = fVar33 - fVar34;
            fVar35 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar23 - fVar24,fVar27 - fVar35,0);
            if (*(long *)(lVar8 + 0x70) == 0) goto code_r0x015c4b60;
            unaff_d9 = (ulong)(uint)fVar35;
            unaff_d8 = (ulong)(uint)fVar33;
            fVar34 = *(float *)(lVar8 + 0x194);
            param_5 = (ulong)(uint)fVar34;
            fVar25 = *(float *)(lVar8 + 0x438);
            fVar28 = *(float *)(lVar8 + 0x450);
            fVar24 = *(float *)(lVar8 + 0x4b0);
            fVar23 = *(float *)(lVar8 + 0x4b4);
            fVar27 = fVar33;
            lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x70),0);
            if (lVar10 == 0) goto code_r0x015c4b60;
            fVar23 = fVar23 - fVar24;
            fVar34 = (ABS(fVar34) / (fVar25 + fVar28)) * fVar23;
            /*UnityEngine.Transform$$get_right*/ func_0x03275618(lVar10,0);
            fVar25 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            fVar27 = fVar33 * fVar27 + fVar35 * fVar25 + fVar23 * 0.0;
            fVar35 = 1.0;
            if (fVar27 == 0.0 || 0.0 > fVar27) {
              fVar35 = 0.0;
            }
            fVar33 = 1.0;
            if (0.0 <= fVar27) {
              fVar33 = 0.0;
            }
            *(float *)(lVar8 + 0x210) = (fVar24 + fVar34) * (fVar35 - fVar33);
          }
          /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0xd0),0);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          if ((((1.0 <= (float)*(undefined8 *)((long)register0x00000008 + -400)) &&
               (fVar35 <= _UNK_033f86cc)) && (1 < *(int *)(lVar8 + 0x1e0))) &&
             (*(char *)(lVar8 + 0x1d3) != '\0')) {
            *(undefined4 *)(lVar8 + 0x1e0) = 0;
            *(undefined1 *)(lVar8 + 0x1d3) = 0;
            *(undefined1 *)(lVar8 + 0x339) = 1;
          }
        }
      }
      else {
        if (((*(long *)(lVar8 + 0x70) == 0) ||
            (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x70),0), lVar10 == 0)) ||
           (fVar35 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0), lVar18 == 0)) {
code_r0x015c4b60:
          auVar39 = func_0x00f78af4();
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x1f0);
          puVar21 = (undefined1 *)((long)register0x00000008 + -0x1f0);
          *(undefined1 **)((long)register0x00000008 + -0x1f0) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x1e8) =
               &Atlas_Gameplay_Kart_KartComposite__OnCollisionStay;
          lVar10 = *(long *)(auVar39._0_8_ + 0x10);
          auVar39._8_8_ = auVar39._8_8_;
          auVar39._0_8_ = lVar10;
          if (lVar10 == 0) {
            puVar22 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionStay;
            auVar39 = func_0x00f78af4();
          }
          else {
            puVar21 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
            puVar22 = *(undefined **)((long)register0x00000008 + -0x1e8);
            puVar4 = (undefined1 *)((long)register0x00000008 + -0x1e0);
          }
          lVar12 = auVar39._8_8_;
          lVar10 = auVar39._0_8_;
          *(ulong *)(puVar4 + -0x40) = unaff_d9;
          *(ulong *)(puVar4 + -0x38) = unaff_d8;
          *(ulong *)(puVar4 + -0x30) = unaff_x22;
          *(long *)(puVar4 + -0x28) = lVar18;
          *(ulong *)(puVar4 + -0x20) = param_5;
          *(long *)(puVar4 + -0x18) = lVar8;
          *(undefined1 **)(puVar4 + -0x10) = puVar21;
          *(undefined **)(puVar4 + -8) = puVar22;
          if ((bRam0000000003eb537f & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb537f = 1;
          }
          *(undefined4 *)(puVar4 + -0x50) = 0;
          *(undefined8 *)(puVar4 + -0x68) = 0;
          *(undefined8 *)(puVar4 + -0x70) = 0;
          *(undefined8 *)(puVar4 + -0x58) = 0;
          *(undefined8 *)(puVar4 + -0x60) = 0;
          if (lVar12 == 0) {
            auVar39 = func_0x00f78af4();
            puVar5 = puVar4 + -0xb0;
            puVar21 = puVar4 + -0xb0;
            *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x10;
            *(undefined **)(puVar4 + -0xa8) = &Atlas_Gameplay_Kart_KartComposite__OnCollisionExit;
            lVar8 = *(long *)(auVar39._0_8_ + 0x10);
            auVar40._8_8_ = auVar39._8_8_;
            auVar40._0_8_ = lVar8;
            if (lVar8 == 0) {
              puVar22 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionExit;
              auVar40 = func_0x00f78af4();
            }
            else {
              puVar21 = *(undefined1 **)(puVar4 + -0xb0);
              puVar22 = *(undefined **)(puVar4 + -0xa8);
              puVar5 = puVar4 + -0xa0;
            }
            *(ulong *)(puVar5 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar5 + -0x28) = 0x3eb5000;
            *(undefined8 *)(puVar5 + -0x20) = 0;
            *(long *)(puVar5 + -0x18) = lVar10;
            *(undefined1 **)(puVar5 + -0x10) = puVar21;
            *(undefined **)(puVar5 + -8) = puVar22;
            if ((bRam0000000003eb5380 & 1) == 0) {
              func_0x00f78a20(0x3d265d8);
              bRam0000000003eb5380 = 1;
            }
            lVar8 = *(long *)(auVar40._0_8_ + 0x28);
            if (lVar8 != 0) {
              uVar9 = *(undefined8 *)(auVar40._0_8_ + 0x68);
              puVar14 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
              uVar26 = *puVar14;
              uVar30 = puVar14[1];
              uVar31 = puVar14[2];
              *(undefined8 *)(puVar5 + -0x40) = 0;
              *(undefined8 *)(puVar5 + -0x58) = 0;
              *(undefined8 *)(puVar5 + -0x60) = 0;
              *(undefined8 *)(puVar5 + -0x48) = 0;
              *(undefined8 *)(puVar5 + -0x50) = 0;
              /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar26,uVar30,uVar31,puVar5 + -0x60,uVar9,auVar40._8_8_,0,0,0);
              *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x58);
              *(undefined8 *)(puVar5 + -0x90) = *(undefined8 *)(puVar5 + -0x60);
              *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x48);
              *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x50);
              *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x40);
              /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar8,puVar5 + -0x90,0);
            }
            return;
          }
          uVar9 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(lVar12,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
          if ((uVar11 & 1) == 0) {
            fVar34 = *(float *)(lVar10 + 0x4ac);
            iVar6 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(lVar12,0);
            fVar35 = _UNK_033f86cc;
            if (0 < iVar6) {
              iVar6 = 0;
              do {
                /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14(puVar4 + -0x98,lVar12,iVar6,0);
                uVar9 = *(undefined8 *)(puVar4 + -0x88);
                *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x90);
                *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x98);
                *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x80);
                *(undefined8 *)(puVar4 + -0x60) = uVar9;
                *(undefined4 *)(puVar4 + -0x50) = *(undefined4 *)(puVar4 + -0x78);
                /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(puVar4 + -0x70,0);
                if ((float)uVar9 <= fVar35) {
                  if (*(char *)(lVar10 + 0x1d3) != '\0') {
                    *(undefined4 *)(lVar10 + 0x1e0) = 0;
                    *(undefined1 *)(lVar10 + 0x1d3) = 0;
                    *(undefined1 *)(lVar10 + 0x339) = 1;
                  }
                  fVar27 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(puVar4 + -0x70,0);
                  if (fVar27 <= fVar34) {
                    /*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(puVar4 + -0x70,0);
                    if (*(float *)(lVar10 + 0x4b8) == 0.0) {
                      return;
                    }
                    if (*(float *)(lVar10 + 0x194) <= *(float *)(lVar10 + 0x4bc)) {
                      return;
                    }
                    *(float *)(lVar10 + 0x214) = *(float *)(lVar10 + 0x4b8);
                    return;
                  }
                }
                iVar6 = iVar6 + 1;
                iVar7 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(lVar12,0);
              } while (iVar6 < iVar7);
            }
          }
          return;
        }
        unaff_d8 = (ulong)(uint)fVar35;
        unaff_d9 = (ulong)(uint)fVar27;
        fVar34 = fVar27;
        fVar23 = fVar33;
        lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar18,0);
        if ((lVar10 == 0) || (lVar10 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0), lVar10 == 0))
        goto code_r0x015c4b60;
        fVar24 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0);
        uVar11 = (ulong)(uint)(fVar33 - fVar23);
        fVar35 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar35 - fVar24,fVar27 - fVar34,0);
        plVar13 = *(long **)(lVar18 + 0xa0);
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) {
          return;
        }
        if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78) {
          return;
        }
        if ((plVar13 == (long *)0x0) || (plVar13[2] == 0)) goto code_r0x015c4b60;
        unaff_d9 = (ulong)(uint)fVar35;
        unaff_d8 = uVar11 & 0xffffffff;
        fVar34 = *(float *)(plVar13[2] + 0x194);
        fVar33 = *(float *)(lVar8 + 0x194) - fVar34;
        fVar27 = *(float *)(lVar8 + 0x438) + *(float *)(lVar8 + 0x450);
        fVar34 = ABS(*(float *)(lVar8 + 0x194) - fVar34) / fVar27;
        if (0.0 <= fVar33) {
          lVar10 = *(long *)(lVar8 + 0x70);
          if (lVar10 == 0) goto code_r0x015c4b60;
          fVar23 = *(float *)(lVar8 + 0x498);
          fVar24 = *(float *)(lVar8 + 0x49c);
        }
        else {
          lVar10 = *(long *)(lVar8 + 0x70);
          if (lVar10 == 0) goto code_r0x015c4b60;
          fVar23 = *(float *)(lVar8 + 0x490);
          fVar24 = *(float *)(lVar8 + 0x494);
        }
        lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
        if (lVar10 == 0) goto code_r0x015c4b60;
        /*UnityEngine.Transform$$get_right*/ func_0x03275618(lVar10,0);
        fVar25 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar27 = (float)uVar11 * fVar33 + fVar35 * fVar25 + fVar27 * 0.0;
        fVar35 = 1.0;
        if (fVar27 == 0.0 || 0.0 > fVar27) {
          fVar35 = 0.0;
        }
        fVar33 = 1.0;
        if (0.0 <= fVar27) {
          fVar33 = 0.0;
        }
        *(float *)(lVar8 + 0x210) = (fVar23 + fVar34 * (fVar24 - fVar23)) * (fVar35 - fVar33);
      }
      *(undefined4 *)(lVar8 + 0x5b4) = *(undefined4 *)(lVar8 + 0x4cc);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15c4b64 | Atlas.Gameplay.Kart.KartComposite.OnCollisionStay
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartComposite__OnCollisionStay(long param_1,long param_2)

{
  float fVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionStay;
    auVar18 = func_0x00f78af4();
    param_2 = auVar18._8_8_;
    lVar6 = auVar18._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb537f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537f = 1;
  }
  *(undefined4 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  if (param_2 == 0) {
    auVar18 = func_0x00f78af4();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar11 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &Atlas_Gameplay_Kart_KartComposite__OnCollisionExit;
    lVar9 = *(long *)(auVar18._0_8_ + 0x10);
    auVar18._8_8_ = auVar18._8_8_;
    auVar18._0_8_ = lVar9;
    if (lVar9 == 0) {
      puVar12 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionExit;
      auVar18 = func_0x00f78af4();
    }
    else {
      puVar11 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar12 = *(undefined **)((long)register0x00000008 + -0xa8);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0xa0);
    }
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = 0x3eb5000;
    *(undefined8 *)(puVar3 + -0x20) = 0;
    *(long *)(puVar3 + -0x18) = lVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar11;
    *(undefined **)(puVar3 + -8) = puVar12;
    if ((bRam0000000003eb5380 & 1) == 0) {
      func_0x00f78a20(0x3d265d8);
      bRam0000000003eb5380 = 1;
    }
    lVar6 = *(long *)(auVar18._0_8_ + 0x28);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(auVar18._0_8_ + 0x68);
      puVar10 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
      uVar14 = *puVar10;
      uVar15 = puVar10[1];
      uVar16 = puVar10[2];
      *(undefined8 *)(puVar3 + -0x40) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x48) = 0;
      *(undefined8 *)(puVar3 + -0x50) = 0;
      /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar14,uVar15,uVar16,puVar3 + -0x60,uVar7,auVar18._8_8_,0,0,0);
      *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x58);
      *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x60);
      *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x48);
      *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x50);
      *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x40);
      /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar6,puVar3 + -0x90,0);
    }
    return;
  }
  uVar7 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_2,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
  if ((uVar8 & 1) == 0) {
    fVar17 = *(float *)(lVar6 + 0x4ac);
    iVar4 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_2,0);
    fVar1 = _UNK_033f86cc;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14((undefined1 *)((long)register0x00000008 + -0x98),param_2,iVar4,0);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
        *(undefined4 *)((long)register0x00000008 + -0x50) =
             *(undefined4 *)((long)register0x00000008 + -0x78);
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)register0x00000008 + -0x70),0);
        if ((float)uVar7 <= fVar1) {
          if (*(char *)(lVar6 + 0x1d3) != '\0') {
            *(undefined4 *)(lVar6 + 0x1e0) = 0;
            *(undefined1 *)(lVar6 + 0x1d3) = 0;
            *(undefined1 *)(lVar6 + 0x339) = 1;
          }
          fVar13 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0((undefined1 *)((long)register0x00000008 + -0x70),0);
          if (fVar13 <= fVar17) {
            /*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0((undefined1 *)((long)register0x00000008 + -0x70),0);
            if (*(float *)(lVar6 + 0x4b8) == 0.0) {
              return;
            }
            if (*(float *)(lVar6 + 0x194) <= *(float *)(lVar6 + 0x4bc)) {
              return;
            }
            *(float *)(lVar6 + 0x214) = *(float *)(lVar6 + 0x4b8);
            return;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_2,0);
      } while (iVar4 < iVar5);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15c4d00 | Atlas.Gameplay.Kart.KartComposite.OnCollisionExit
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__OnCollisionExit(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 unaff_x19;
  long lVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionExit;
    auVar9 = func_0x00f78af4();
    param_2 = auVar9._8_8_;
    lVar2 = auVar9._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb5380 & 1) == 0) {
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb5380 = 1;
  }
  lVar5 = *(long *)(lVar2 + 0x28);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x68);
    puVar4 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
    uVar6 = *puVar4;
    uVar7 = puVar4[1];
    uVar8 = puVar4[2];
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar6,uVar7,uVar8,(undefined1 *)((long)register0x00000008 + -0x60),uVar3,param_2
                    ,0,0,0);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar5,(undefined1 *)((long)register0x00000008 + -0x90),0);
  }
  return;
}



// ============================================================
// RVA: 0x15c4dd4 | Atlas.Gameplay.Kart.KartComposite.OnTriggerEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x015c5004: Changing call to branch */

void Atlas_Gameplay_Kart_KartComposite__OnTriggerEnter
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar6;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined4 *extraout_x8;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar17;
  long unaff_x22;
  long lVar18;
  code *pcVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar21;
  float fVar22;
  float fVar23;
  float extraout_s0;
  float fVar24;
  float fVar25;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar10 = *(long *)(param_4 + 0x10);
  if (lVar10 == 0) {
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysics__OnTriggerEnter;
    auVar26 = func_0x00f78af4();
    param_5 = auVar26._8_8_;
    lVar10 = auVar26._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar7 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar17 = 0x3eb5000;
  if ((bRam0000000003eb537b & 1) == 0) {
    func_0x00f78a20(0x3d534c0);
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537b = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  if (param_5 != 0) {
    lVar12 = 0x3d23990;
    lVar18 = 0x3d23990;
    lVar17 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
    unaff_x22 = lVar12;
    if (iVar6 == 0) {
code_r0x015c4f74:
      lVar17 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d534c0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
      unaff_x22 = lVar12;
      if (iVar6 == 0) {
code_r0x015c4ff4:
        lVar12 = *(long *)(lVar10 + 0x10);
        if (lVar12 == 0) {
          return;
        }
        puVar21 = &UNK_015c5008;
        lVar18 = param_5;
        goto code_r0x014b45bc;
      }
      unaff_x22 = lVar18;
      if (lVar17 != 0) {
        unaff_x22 = *(long *)(lVar10 + 0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(lVar17 + 0x18);
        lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0);
        if ((lVar12 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar12,0), unaff_x22 != 0)) {
          /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(unaff_x22,(undefined1 *)((long)register0x00000008 + -0x58),0);
          goto code_r0x015c4ff4;
        }
      }
    }
    else if (lVar17 != 0) {
      if (*(char *)(lVar17 + 0x22) == '\0') goto code_r0x015c4f38;
      lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
      if (lVar11 != 0) {
        /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
        fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        unaff_x22 = lVar18;
        if (*(long *)(lVar10 + 0x70) != 0) {
          unaff_d9 = (ulong)(uint)fVar22;
          unaff_d8 = (ulong)(uint)param_3;
          fVar24 = param_2;
          fVar25 = param_3;
          lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar10 + 0x70),0);
          if (lVar11 != 0) {
            /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar11,0);
            fVar23 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            if (0.0 < param_3 * fVar25 + fVar22 * fVar23 + param_2 * fVar24) {
              lVar11 = *(long *)(lVar10 + 0x40);
              if (lVar11 == 0) goto code_r0x015c5024;
              *(undefined4 *)(lVar10 + 0xd0) = *(undefined4 *)(lVar11 + 0xac);
              *(undefined8 *)(lVar10 + 0xd4) = *(undefined8 *)(lVar11 + 0xa4);
              *(undefined1 *)(lVar10 + 0x332) = 1;
            }
code_r0x015c4f38:
            if (*(char *)(lVar17 + 0x21) != '\0') {
              *(undefined1 *)(lVar10 + 0x1d3) = 1;
              *(undefined1 *)(lVar10 + 0x338) = 1;
            }
            if (*(char *)(lVar17 + 0x23) != '\0') {
              *(int *)(lVar10 + 0x114) = *(int *)(lVar10 + 0x114) + 1;
            }
            if (*(char *)(lVar17 + 0x24) != '\0') {
              *(int *)(lVar10 + 0x218) = *(int *)(lVar10 + 0x218) + 1;
            }
            goto code_r0x015c4f74;
          }
        }
      }
    }
  }
code_r0x015c5024:
  auVar26 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
  puVar20 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar7;
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_Gameplay_Kart_KartComposite__OnTriggerStay;
  lVar12 = *(long *)(auVar26._0_8_ + 0x10);
  auVar26._8_8_ = auVar26._8_8_;
  auVar26._0_8_ = lVar12;
  if (lVar12 == 0) {
    puVar21 = &Atlas_Gameplay_Kart_KartPhysics__OnTriggerStay;
    auVar26 = func_0x00f78af4();
  }
  else {
    puVar20 = *(undefined1 **)((long)register0x00000008 + -0x70);
    puVar21 = *(undefined **)((long)register0x00000008 + -0x68);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
  }
  lVar12 = auVar26._0_8_;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = lVar17;
  *(long *)(puVar3 + -0x20) = lVar10;
  *(long *)(puVar3 + -0x18) = param_5;
  *(undefined1 **)(puVar3 + -0x10) = puVar20;
  *(undefined **)(puVar3 + -8) = puVar21;
  if ((bRam0000000003eb537c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537c = 1;
  }
  if (auVar26._8_8_ != 0) {
    uVar13 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(auVar26._8_8_,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
    if ((iVar6 != 0) && (*(float *)(lVar12 + 0x5b8) < 0.0)) {
      *(undefined4 *)(lVar12 + 0x5b8) = 0x3df5c28f;
    }
    return;
  }
  auVar26 = func_0x00f78af4();
  puVar4 = puVar3 + -0x40;
  puVar7 = puVar3 + -0x40;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &Atlas_Gameplay_Kart_KartComposite__OnTriggerExit;
  lVar10 = *(long *)(auVar26._0_8_ + 0x10);
  auVar27._8_8_ = auVar26._8_8_;
  auVar27._0_8_ = lVar10;
  if (lVar10 == 0) {
    puVar21 = &Atlas_Gameplay_Kart_KartPhysics__OnTriggerExit;
    auVar27 = func_0x00f78af4();
  }
  else {
    puVar4 = puVar3 + -0x30;
    puVar7 = *(undefined1 **)(puVar3 + -0x40);
    puVar21 = *(undefined **)(puVar3 + -0x38);
  }
  param_5 = auVar27._8_8_;
  lVar10 = auVar27._0_8_;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = 0x3eb5000;
  *(undefined8 *)(puVar4 + -0x20) = 0;
  *(long *)(puVar4 + -0x18) = lVar12;
  *(undefined1 **)(puVar4 + -0x10) = puVar7;
  *(undefined **)(puVar4 + -8) = puVar21;
  if ((bRam0000000003eb537d & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537d = 1;
  }
  if (param_5 != 0) {
    lVar17 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
    if (iVar6 != 0) {
      if (lVar17 == 0) goto code_r0x015c520c;
      if (*(char *)(lVar17 + 0x23) != '\0') {
        iVar6 = *(int *)(lVar10 + 0x114) + -1;
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        *(int *)(lVar10 + 0x114) = iVar6;
      }
      if (*(char *)(lVar17 + 0x24) != '\0') {
        iVar6 = *(int *)(lVar10 + 0x218) + -1;
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        *(int *)(lVar10 + 0x218) = iVar6;
      }
    }
    lVar12 = *(long *)(lVar10 + 0x18);
    if (lVar12 == 0) {
      return;
    }
    puVar7 = *(undefined1 **)(puVar4 + -0x10);
    puVar21 = *(undefined **)(puVar4 + -8);
    lVar10 = *(long *)(puVar4 + -0x20);
    lVar18 = *(long *)(puVar4 + -0x18);
    unaff_x22 = *(long *)(puVar4 + -0x30);
    lVar17 = *(long *)(puVar4 + -0x28);
code_r0x014b45bc:
    puVar20 = puVar4 + -0x60;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
    *(long *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = lVar17;
    *(long *)(puVar4 + -0x20) = lVar10;
    *(long *)(puVar4 + -0x18) = lVar18;
    *(undefined1 **)(puVar4 + -0x10) = puVar7;
    *(undefined **)(puVar4 + -8) = puVar21;
    *(long *)(puVar4 + -0x60) = lVar12;
    *(long *)(puVar4 + -0x58) = param_5;
    lVar10 = *(long *)(lVar12 + 0x68);
    if (lVar10 == 0) {
      lVar17 = 1;
    }
    else {
      lVar17 = *(long *)(lVar10 + 0x18);
      if (lVar17 == 0) {
        return;
      }
      puVar20 = (undefined1 *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    do {
      lVar18 = *(long *)(puVar20 + lVar10 * 8);
      pcVar19 = *(code **)(lVar18 + 0x10);
      plVar14 = *(long **)(lVar18 + 0x20);
      lVar18 = *(long *)(lVar18 + 0x28);
      if (*(short *)(lVar18 + 0x48) == -1) {
        func_0x00f78ad8(lVar18);
      }
      iVar6 = func_0x00f78a4c(lVar18);
      if (iVar6 == 0) {
        puVar7 = puVar4 + -0x68;
        if (plVar14 == (long *)0x0) goto code_r0x014b46e8;
        if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar12 + 0x18) == 0)) goto code_r0x014b46d0;
        iVar6 = func_0x00f78a44(lVar18);
        iVar5 = func_0x00f78ec0(lVar18);
        if (iVar6 == 0) {
          uVar1 = *(ushort *)(lVar18 + 0x48);
          if (iVar5 == 0) {
            lVar18 = *plVar14 + (ulong)uVar1 * 0x10;
            (**(code **)(lVar18 + 0x138))
                      (plVar14,*(undefined8 *)(puVar4 + -0x58),*(undefined8 *)(lVar18 + 0x140));
            goto code_r0x014b46f0;
          }
          lVar18 = func_0x00f78a48(lVar18);
          uVar13 = *(undefined8 *)(puVar4 + -0x58);
          lVar11 = *plVar14;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar18) {
                puVar9 = (undefined8 *)(lVar11 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x014b47c4;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar14,lVar18,(ulong)uVar1);
code_r0x014b47c4:
          pcVar19 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          uVar13 = *(undefined8 *)(puVar4 + -0x58);
          if (iVar5 == 0) {
            uVar8 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar14;
            uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar18 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x014b4794;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar11 = func_0x00fac1f0(plVar14);
code_r0x014b4794:
            uVar8 = *(undefined8 *)(lVar11 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar18);
          pcVar19 = (code *)*puVar9;
        }
        (*pcVar19)(plVar14,uVar13,puVar9);
      }
      else if (*(char *)(lVar18 + 0x4a) == '\x01') {
        puVar7 = *(undefined1 **)(puVar4 + -0x58);
code_r0x014b46e8:
        (*pcVar19)(puVar7,lVar18);
      }
      else {
code_r0x014b46d0:
        (*pcVar19)(plVar14,*(undefined8 *)(puVar4 + -0x58),lVar18);
      }
code_r0x014b46f0:
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar17) {
        return;
      }
    } while( true );
  }
code_r0x015c520c:
  auVar26 = func_0x00f78af4();
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Kart_KartComposite__OnUseShield;
  lVar10 = *(long *)(auVar26._0_8_ + 0x10);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x60), lVar10 != 0)) {
    *(undefined1 (*) [16])(puVar4 + -0x50) = auVar27;
    *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
    *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
    plVar14 = *(long **)(lVar10 + 200);
    if ((plVar14 != (long *)0x0) &&
       (iVar6 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0),0),
       iVar6 != 0)) {
      if (*(long *)(lVar10 + 200) == 0) {
        lVar17 = func_0x00f78af4();
        *(ulong *)(puVar4 + -0x80) = unaff_d9;
        *(ulong *)(puVar4 + -0x78) = unaff_d8;
        *(long *)(puVar4 + -0x70) = lVar10;
        *(long *)(puVar4 + -0x68) = auVar26._8_8_;
        *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x40;
        *(undefined **)(puVar4 + -0x58) =
             &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit;
        plVar14 = *(long **)(lVar17 + 200);
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x2d8))(plVar14,1,*(undefined8 *)(*plVar14 + 0x2e0));
          plVar14 = *(long **)(lVar17 + 200);
          if (plVar14 == (long *)0x0) {
            auVar26 = func_0x00f78af4();
            if (*(long *)(auVar26._0_8_ + 200) == auVar26._8_8_) {
              *(undefined8 *)(auVar26._0_8_ + 200) = 0;
              return;
            }
            return;
          }
          uVar15 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
          if ((uVar15 & 1) == 0) {
            *(undefined8 *)(lVar17 + 200) = 0;
          }
        }
        if ((0.0 <= extraout_s0) && (*(float *)(lVar17 + 0x5c) < extraout_s0)) {
          *(float *)(lVar17 + 0x5c) = extraout_s0;
        }
        return;
      }
      /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(lVar10 + 200),0,0);
    }
    *(long *)(lVar10 + 200) = auVar26._8_8_;
    return;
  }
  auVar26 = func_0x00f78af4();
  lVar10 = auVar26._0_8_;
  *(undefined1 (*) [16])(puVar4 + -0x60) = auVar27;
  *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x48) = &Atlas_Gameplay_Kart_KartComposite__OnFinishGameResultUpdated;
  if (*auVar26._8_8_ != *(int *)(lVar10 + 0x54)) {
    return;
  }
  if (*(long *)(lVar10 + 0x78) != 0) {
    lVar17 = *(long *)(*(long *)(lVar10 + 0x78) + 0x230);
    if (lVar17 == 0) {
      uVar15 = (ulong)(uint)auVar26._8_8_[10];
    }
    else {
      lVar12 = *(long *)(lVar17 + 0x50);
      uVar13 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar17,0);
      if (lVar12 == 0) goto code_r0x015c52ec;
      uVar13 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar12,uVar13,0);
      uVar15 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar13,0);
    }
    *(int *)(lVar10 + 0xa0) = (int)uVar15;
    if (*(long *)(lVar10 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(lVar10 + 0x30),uVar15,0);
      lVar17 = *(long *)(lVar10 + 0x10);
      if (lVar17 != 0) {
        *(undefined4 *)(lVar17 + 0xd0) = 0;
        *(undefined4 *)(lVar17 + 0xec) = 0;
        *(undefined4 *)(lVar17 + 0xdc) = 0;
        *(undefined4 *)(lVar17 + 0x10c) = 0;
        *(undefined1 *)(lVar17 + 0x118) = 0;
        *(undefined4 *)(lVar17 + 0x1f0) = 0;
        *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
        *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
        *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
        *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
        if ((*(long *)(lVar10 + 0x10) != 0) &&
           (lVar17 = *(long *)(*(long *)(lVar10 + 0x10) + 0x60), lVar17 != 0)) {
          iVar6 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar17,0);
          if (iVar6 == 0) {
            return;
          }
          if (((*(long *)(lVar10 + 0x10) != 0) &&
              (lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x60), lVar10 != 0)) &&
             (plVar14 = *(long **)(lVar10 + 200), plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar14 + 0x2c8))(plVar14,*(undefined8 *)(*plVar14 + 0x2d0));
            return;
          }
        }
        lVar10 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar6 = *(int *)(lVar10 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar10 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar6 == 0;
        return;
      }
    }
  }
code_r0x015c52ec:
  lVar10 = func_0x00f78af4();
  *(undefined4 *)(lVar10 + 0xd0) = 0;
  *(undefined4 *)(lVar10 + 0xec) = 0;
  *(undefined4 *)(lVar10 + 0xdc) = 0;
  *(undefined4 *)(lVar10 + 0x10c) = 0;
  *(undefined1 *)(lVar10 + 0x118) = 0;
  *(undefined4 *)(lVar10 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c5028 | Atlas.Gameplay.Kart.KartComposite.OnTriggerStay
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__OnTriggerStay(long param_1,long param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar5;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined4 *extraout_x8;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar20;
  float extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysics__OnTriggerStay;
    auVar21 = func_0x00f78af4();
    param_2 = auVar21._8_8_;
    lVar9 = auVar21._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb537c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537c = 1;
  }
  if (param_2 != 0) {
    uVar10 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_2,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
    if ((iVar5 != 0) && (*(float *)(lVar9 + 0x5b8) < 0.0)) {
      *(undefined4 *)(lVar9 + 0x5b8) = 0x3df5c28f;
    }
    return;
  }
  auVar21 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
  puVar19 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_Gameplay_Kart_KartComposite__OnTriggerExit;
  lVar11 = *(long *)(auVar21._0_8_ + 0x10);
  auVar21._8_8_ = auVar21._8_8_;
  auVar21._0_8_ = lVar11;
  if (lVar11 == 0) {
    puVar20 = &Atlas_Gameplay_Kart_KartPhysics__OnTriggerExit;
    auVar21 = func_0x00f78af4();
  }
  else {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
    puVar19 = *(undefined1 **)((long)register0x00000008 + -0x40);
    puVar20 = *(undefined **)((long)register0x00000008 + -0x38);
  }
  lVar18 = auVar21._8_8_;
  lVar11 = auVar21._0_8_;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3eb5000;
  *(undefined8 *)(puVar3 + -0x20) = 0;
  *(long *)(puVar3 + -0x18) = lVar9;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(undefined **)(puVar3 + -8) = puVar20;
  if ((bRam0000000003eb537d & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537d = 1;
  }
  if (lVar18 != 0) {
    lVar9 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar18,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
    if (iVar5 == 0) {
code_r0x015c51dc:
      lVar9 = *(long *)(lVar11 + 0x18);
      if (lVar9 == 0) {
        return;
      }
      puVar19 = puVar3 + -0x60;
      *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
      *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
      *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
      *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
      *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
      *(long *)(puVar3 + -0x60) = lVar9;
      *(long *)(puVar3 + -0x58) = lVar18;
      lVar11 = *(long *)(lVar9 + 0x68);
      if (lVar11 == 0) {
        lVar18 = 1;
      }
      else {
        lVar18 = *(long *)(lVar11 + 0x18);
        if (lVar18 == 0) {
          return;
        }
        puVar19 = (undefined1 *)(lVar11 + 0x20);
      }
      lVar11 = 0;
      do {
        lVar13 = *(long *)(puVar19 + lVar11 * 8);
        pcVar17 = *(code **)(lVar13 + 0x10);
        plVar12 = *(long **)(lVar13 + 0x20);
        lVar13 = *(long *)(lVar13 + 0x28);
        if (*(short *)(lVar13 + 0x48) == -1) {
          func_0x00f78ad8(lVar13);
        }
        iVar5 = func_0x00f78a4c(lVar13);
        if (iVar5 == 0) {
          puVar6 = puVar3 + -0x68;
          if (plVar12 == (long *)0x0) goto code_r0x014b46e8;
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x014b46d0;
          iVar5 = func_0x00f78a44(lVar13);
          iVar4 = func_0x00f78ec0(lVar13);
          if (iVar5 == 0) {
            uVar1 = *(ushort *)(lVar13 + 0x48);
            if (iVar4 == 0) {
              lVar13 = *plVar12 + (ulong)uVar1 * 0x10;
              (**(code **)(lVar13 + 0x138))
                        (plVar12,*(undefined8 *)(puVar3 + -0x58),*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x014b46f0;
            }
            lVar13 = func_0x00f78a48(lVar13);
            uVar10 = *(undefined8 *)(puVar3 + -0x58);
            lVar14 = *plVar12;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar8 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x014b47c4;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar12,lVar13,(ulong)uVar1);
code_r0x014b47c4:
            pcVar17 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            uVar10 = *(undefined8 *)(puVar3 + -0x58);
            if (iVar4 == 0) {
              uVar7 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar12;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x014b4794;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar12);
code_r0x014b4794:
              uVar7 = *(undefined8 *)(lVar14 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar13);
            pcVar17 = (code *)*puVar8;
          }
          (*pcVar17)(plVar12,uVar10,puVar8);
        }
        else if (*(char *)(lVar13 + 0x4a) == '\x01') {
          puVar6 = *(undefined1 **)(puVar3 + -0x58);
code_r0x014b46e8:
          (*pcVar17)(puVar6,lVar13);
        }
        else {
code_r0x014b46d0:
          (*pcVar17)(plVar12,*(undefined8 *)(puVar3 + -0x58),lVar13);
        }
code_r0x014b46f0:
        lVar11 = lVar11 + 1;
        if (lVar11 == lVar18) {
          return;
        }
      } while( true );
    }
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x23) != '\0') {
        iVar5 = *(int *)(lVar11 + 0x114) + -1;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        *(int *)(lVar11 + 0x114) = iVar5;
      }
      if (*(char *)(lVar9 + 0x24) != '\0') {
        iVar5 = *(int *)(lVar11 + 0x218) + -1;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        *(int *)(lVar11 + 0x218) = iVar5;
      }
      goto code_r0x015c51dc;
    }
  }
  auVar22 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &Atlas_Gameplay_Kart_KartComposite__OnUseShield;
  lVar9 = *(long *)(auVar22._0_8_ + 0x10);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x60), lVar9 != 0)) {
    *(undefined1 (*) [16])(puVar3 + -0x50) = auVar21;
    *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
    *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
    plVar12 = *(long **)(lVar9 + 200);
    if ((plVar12 != (long *)0x0) &&
       (iVar5 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0),0),
       iVar5 != 0)) {
      if (*(long *)(lVar9 + 200) == 0) {
        lVar11 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0x80) = unaff_d9;
        *(undefined8 *)(puVar3 + -0x78) = unaff_d8;
        *(long *)(puVar3 + -0x70) = lVar9;
        *(long *)(puVar3 + -0x68) = auVar22._8_8_;
        *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x40;
        *(undefined **)(puVar3 + -0x58) =
             &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit;
        plVar12 = *(long **)(lVar11 + 200);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x2d8))(plVar12,1,*(undefined8 *)(*plVar12 + 0x2e0));
          plVar12 = *(long **)(lVar11 + 200);
          if (plVar12 == (long *)0x0) {
            auVar21 = func_0x00f78af4();
            if (*(long *)(auVar21._0_8_ + 200) == auVar21._8_8_) {
              *(undefined8 *)(auVar21._0_8_ + 200) = 0;
              return;
            }
            return;
          }
          uVar15 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
          if ((uVar15 & 1) == 0) {
            *(undefined8 *)(lVar11 + 200) = 0;
          }
        }
        if ((0.0 <= extraout_s0) && (*(float *)(lVar11 + 0x5c) < extraout_s0)) {
          *(float *)(lVar11 + 0x5c) = extraout_s0;
        }
        return;
      }
      /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(lVar9 + 200),0,0);
    }
    *(long *)(lVar9 + 200) = auVar22._8_8_;
    return;
  }
  auVar22 = func_0x00f78af4();
  lVar9 = auVar22._0_8_;
  *(undefined1 (*) [16])(puVar3 + -0x60) = auVar21;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x48) = &Atlas_Gameplay_Kart_KartComposite__OnFinishGameResultUpdated;
  if (*auVar22._8_8_ != *(int *)(lVar9 + 0x54)) {
    return;
  }
  if (*(long *)(lVar9 + 0x78) != 0) {
    lVar11 = *(long *)(*(long *)(lVar9 + 0x78) + 0x230);
    if (lVar11 == 0) {
      uVar15 = (ulong)(uint)auVar22._8_8_[10];
    }
    else {
      lVar18 = *(long *)(lVar11 + 0x50);
      uVar10 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar11,0);
      if (lVar18 == 0) goto code_r0x015c52ec;
      uVar10 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar18,uVar10,0);
      uVar15 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar10,0);
    }
    *(int *)(lVar9 + 0xa0) = (int)uVar15;
    if (*(long *)(lVar9 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(lVar9 + 0x30),uVar15,0);
      lVar11 = *(long *)(lVar9 + 0x10);
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0xd0) = 0;
        *(undefined4 *)(lVar11 + 0xec) = 0;
        *(undefined4 *)(lVar11 + 0xdc) = 0;
        *(undefined4 *)(lVar11 + 0x10c) = 0;
        *(undefined1 *)(lVar11 + 0x118) = 0;
        *(undefined4 *)(lVar11 + 0x1f0) = 0;
        *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
        *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
        *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
        *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
        if ((*(long *)(lVar9 + 0x10) != 0) &&
           (lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar11 != 0)) {
          iVar5 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar11,0);
          if (iVar5 == 0) {
            return;
          }
          if (((*(long *)(lVar9 + 0x10) != 0) &&
              (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar9 != 0)) &&
             (plVar12 = *(long **)(lVar9 + 200), plVar12 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
            return;
          }
        }
        lVar9 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar5 = *(int *)(lVar9 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar9 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar5 == 0;
        return;
      }
    }
  }
code_r0x015c52ec:
  lVar9 = func_0x00f78af4();
  *(undefined4 *)(lVar9 + 0xd0) = 0;
  *(undefined4 *)(lVar9 + 0xec) = 0;
  *(undefined4 *)(lVar9 + 0xdc) = 0;
  *(undefined4 *)(lVar9 + 0x10c) = 0;
  *(undefined1 *)(lVar9 + 0x118) = 0;
  *(undefined4 *)(lVar9 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c50f0 | Atlas.Gameplay.Kart.KartComposite.OnTriggerExit
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__OnTriggerExit(long param_1,long param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysics__OnTriggerExit;
    auVar19 = func_0x00f78af4();
    param_2 = auVar19._8_8_;
    lVar8 = auVar19._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb537d & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537d = 1;
  }
  if (param_2 != 0) {
    lVar9 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_2,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
    if (iVar4 == 0) {
code_r0x015c51dc:
      lVar8 = *(long *)(lVar8 + 0x18);
      if (lVar8 == 0) {
        return;
      }
      puVar18 = (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x28) =
           *(undefined8 *)((long)register0x00000008 + -0x28);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      *(long *)((long)register0x00000008 + -0x60) = lVar8;
      *(long *)((long)register0x00000008 + -0x58) = param_2;
      lVar9 = *(long *)(lVar8 + 0x68);
      if (lVar9 == 0) {
        lVar17 = 1;
      }
      else {
        lVar17 = *(long *)(lVar9 + 0x18);
        if (lVar17 == 0) {
          return;
        }
        puVar18 = (undefined1 *)(lVar9 + 0x20);
      }
      lVar9 = 0;
      do {
        lVar11 = *(long *)(puVar18 + lVar9 * 8);
        pcVar15 = *(code **)(lVar11 + 0x10);
        plVar10 = *(long **)(lVar11 + 0x20);
        lVar11 = *(long *)(lVar11 + 0x28);
        if (*(short *)(lVar11 + 0x48) == -1) {
          func_0x00f78ad8(lVar11);
        }
        iVar4 = func_0x00f78a4c(lVar11);
        if (iVar4 == 0) {
          puVar5 = (undefined1 *)((long)register0x00000008 + -0x68);
          if (plVar10 == (long *)0x0) goto code_r0x014b46e8;
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar10 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x014b46d0;
          iVar4 = func_0x00f78a44(lVar11);
          iVar3 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar1 = *(ushort *)(lVar11 + 0x48);
            if (iVar3 == 0) {
              lVar11 = *plVar10 + (ulong)uVar1 * 0x10;
              (**(code **)(lVar11 + 0x138))
                        (plVar10,*(undefined8 *)((long)register0x00000008 + -0x58),
                         *(undefined8 *)(lVar11 + 0x140));
              goto code_r0x014b46f0;
            }
            lVar11 = func_0x00f78a48(lVar11);
            uVar16 = *(undefined8 *)((long)register0x00000008 + -0x58);
            lVar12 = *plVar10;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x014b47c4;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar10,lVar11,(ulong)uVar1);
code_r0x014b47c4:
            pcVar15 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            uVar16 = *(undefined8 *)((long)register0x00000008 + -0x58);
            if (iVar3 == 0) {
              uVar6 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar10;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x014b4794;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar10);
code_r0x014b4794:
              uVar6 = *(undefined8 *)(lVar12 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
            pcVar15 = (code *)*puVar7;
          }
          (*pcVar15)(plVar10,uVar16,puVar7);
        }
        else if (*(char *)(lVar11 + 0x4a) == '\x01') {
          puVar5 = *(undefined1 **)((long)register0x00000008 + -0x58);
code_r0x014b46e8:
          (*pcVar15)(puVar5,lVar11);
        }
        else {
code_r0x014b46d0:
          (*pcVar15)(plVar10,*(undefined8 *)((long)register0x00000008 + -0x58),lVar11);
        }
code_r0x014b46f0:
        lVar9 = lVar9 + 1;
        if (lVar9 == lVar17) {
          return;
        }
      } while( true );
    }
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x23) != '\0') {
        iVar4 = *(int *)(lVar8 + 0x114) + -1;
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        *(int *)(lVar8 + 0x114) = iVar4;
      }
      if (*(char *)(lVar9 + 0x24) != '\0') {
        iVar4 = *(int *)(lVar8 + 0x218) + -1;
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        *(int *)(lVar8 + 0x218) = iVar4;
      }
      goto code_r0x015c51dc;
    }
  }
  auVar19 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_Gameplay_Kart_KartComposite__OnUseShield;
  lVar9 = *(long *)(auVar19._0_8_ + 0x10);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x60), lVar9 != 0)) {
    *(long *)((long)register0x00000008 + -0x50) = lVar8;
    *(long *)((long)register0x00000008 + -0x48) = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    plVar10 = *(long **)(lVar9 + 200);
    if ((plVar10 != (long *)0x0) &&
       (iVar4 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0),0),
       iVar4 != 0)) {
      if (*(long *)(lVar9 + 200) == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d8;
        *(long *)((long)register0x00000008 + -0x70) = lVar9;
        *(long *)((long)register0x00000008 + -0x68) = auVar19._8_8_;
        *(undefined1 **)((long)register0x00000008 + -0x60) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined **)((long)register0x00000008 + -0x58) =
             &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit;
        plVar10 = *(long **)(lVar8 + 200);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x2d8))(plVar10,1,*(undefined8 *)(*plVar10 + 0x2e0));
          plVar10 = *(long **)(lVar8 + 200);
          if (plVar10 == (long *)0x0) {
            auVar19 = func_0x00f78af4();
            if (*(long *)(auVar19._0_8_ + 200) == auVar19._8_8_) {
              *(undefined8 *)(auVar19._0_8_ + 200) = 0;
              return;
            }
            return;
          }
          uVar13 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
          if ((uVar13 & 1) == 0) {
            *(undefined8 *)(lVar8 + 200) = 0;
          }
        }
        if ((0.0 <= extraout_s0) && (*(float *)(lVar8 + 0x5c) < extraout_s0)) {
          *(float *)(lVar8 + 0x5c) = extraout_s0;
        }
        return;
      }
      /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(lVar9 + 200),0,0);
    }
    *(long *)(lVar9 + 200) = auVar19._8_8_;
    return;
  }
  auVar19 = func_0x00f78af4();
  lVar9 = auVar19._0_8_;
  *(long *)((long)register0x00000008 + -0x60) = lVar8;
  *(long *)((long)register0x00000008 + -0x58) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x48) =
       &Atlas_Gameplay_Kart_KartComposite__OnFinishGameResultUpdated;
  if (*auVar19._8_8_ != *(int *)(lVar9 + 0x54)) {
    return;
  }
  if (*(long *)(lVar9 + 0x78) != 0) {
    lVar8 = *(long *)(*(long *)(lVar9 + 0x78) + 0x230);
    if (lVar8 == 0) {
      uVar13 = (ulong)(uint)auVar19._8_8_[10];
    }
    else {
      lVar17 = *(long *)(lVar8 + 0x50);
      uVar16 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar8,0);
      if (lVar17 == 0) goto code_r0x015c52ec;
      uVar16 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar17,uVar16,0);
      uVar13 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar16,0);
    }
    *(int *)(lVar9 + 0xa0) = (int)uVar13;
    if (*(long *)(lVar9 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(lVar9 + 0x30),uVar13,0);
      lVar8 = *(long *)(lVar9 + 0x10);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0xd0) = 0;
        *(undefined4 *)(lVar8 + 0xec) = 0;
        *(undefined4 *)(lVar8 + 0xdc) = 0;
        *(undefined4 *)(lVar8 + 0x10c) = 0;
        *(undefined1 *)(lVar8 + 0x118) = 0;
        *(undefined4 *)(lVar8 + 0x1f0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        if ((*(long *)(lVar9 + 0x10) != 0) &&
           (lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar8 != 0)) {
          iVar4 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar8,0);
          if (iVar4 == 0) {
            return;
          }
          if (((*(long *)(lVar9 + 0x10) != 0) &&
              (lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar8 != 0)) &&
             (plVar10 = *(long **)(lVar8 + 200), plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
            return;
          }
        }
        lVar8 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar4 = *(int *)(lVar8 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar8 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar4 == 0;
        return;
      }
    }
  }
code_r0x015c52ec:
  lVar8 = func_0x00f78af4();
  *(undefined4 *)(lVar8 + 0xd0) = 0;
  *(undefined4 *)(lVar8 + 0xec) = 0;
  *(undefined4 *)(lVar8 + 0xdc) = 0;
  *(undefined4 *)(lVar8 + 0x10c) = 0;
  *(undefined1 *)(lVar8 + 0x118) = 0;
  *(undefined4 *)(lVar8 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c5210 | Atlas.Gameplay.Kart.KartComposite.OnUseShield
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__OnUseShield(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  float extraout_s0;
  undefined1 auVar8 [16];
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar2 != 0)) {
    plVar5 = *(long **)(lVar2 + 200);
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0),0),
       iVar1 != 0)) {
      if (*(long *)(lVar2 + 200) == 0) {
        lVar2 = func_0x00f78af4();
        plVar5 = *(long **)(lVar2 + 200);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x2d8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x2e0));
          plVar5 = *(long **)(lVar2 + 200);
          if (plVar5 == (long *)0x0) {
            auVar8 = func_0x00f78af4();
            if (*(long *)(auVar8._0_8_ + 200) != auVar8._8_8_) {
              return;
            }
            *(undefined8 *)(auVar8._0_8_ + 200) = 0;
            return;
          }
          uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          if ((uVar6 & 1) == 0) {
            *(undefined8 *)(lVar2 + 200) = 0;
          }
        }
        if ((0.0 <= extraout_s0) && (*(float *)(lVar2 + 0x5c) < extraout_s0)) {
          *(float *)(lVar2 + 0x5c) = extraout_s0;
        }
        return;
      }
      /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(lVar2 + 200),0,0);
    }
    *(undefined8 *)(lVar2 + 200) = param_2;
    return;
  }
  auVar8 = func_0x00f78af4();
  lVar2 = auVar8._0_8_;
  if (*auVar8._8_8_ != *(int *)(lVar2 + 0x54)) {
    return;
  }
  if (*(long *)(lVar2 + 0x78) != 0) {
    lVar3 = *(long *)(*(long *)(lVar2 + 0x78) + 0x230);
    if (lVar3 == 0) {
      uVar6 = (ulong)(uint)auVar8._8_8_[10];
    }
    else {
      lVar7 = *(long *)(lVar3 + 0x50);
      uVar4 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar3,0);
      if (lVar7 == 0) goto code_r0x015c52ec;
      uVar4 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar7,uVar4,0);
      uVar6 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar4,0);
    }
    *(int *)(lVar2 + 0xa0) = (int)uVar6;
    if (*(long *)(lVar2 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(lVar2 + 0x30),uVar6,0);
      lVar3 = *(long *)(lVar2 + 0x10);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xd0) = 0;
        *(undefined4 *)(lVar3 + 0xec) = 0;
        *(undefined4 *)(lVar3 + 0xdc) = 0;
        *(undefined4 *)(lVar3 + 0x10c) = 0;
        *(undefined1 *)(lVar3 + 0x118) = 0;
        *(undefined4 *)(lVar3 + 0x1f0) = 0;
        if ((*(long *)(lVar2 + 0x10) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60), lVar3 != 0)) {
          iVar1 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar3,0);
          if (iVar1 == 0) {
            return;
          }
          if (((*(long *)(lVar2 + 0x10) != 0) &&
              (lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60), lVar2 != 0)) &&
             (plVar5 = *(long **)(lVar2 + 200), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
            return;
          }
        }
        lVar2 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar1 = *(int *)(lVar2 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar2 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar1 == 0;
        return;
      }
    }
  }
code_r0x015c52ec:
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0xd0) = 0;
  *(undefined4 *)(lVar2 + 0xec) = 0;
  *(undefined4 *)(lVar2 + 0xdc) = 0;
  *(undefined4 *)(lVar2 + 0x10c) = 0;
  *(undefined1 *)(lVar2 + 0x118) = 0;
  *(undefined4 *)(lVar2 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c5238 | Atlas.Gameplay.Kart.KartComposite.OnFinishGameResultUpdated
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__OnFinishGameResultUpdated(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *extraout_x8;
  long lVar6;
  
  if (*param_2 != *(int *)(param_1 + 0x54)) {
    return;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x230);
    if (lVar3 == 0) {
      uVar5 = (ulong)(uint)param_2[10];
    }
    else {
      lVar6 = *(long *)(lVar3 + 0x50);
      uVar4 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar3,0);
      if (lVar6 == 0) goto LAB_015c52ec;
      uVar4 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar6,uVar4,0);
      uVar5 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar4,0);
    }
    *(int *)(param_1 + 0xa0) = (int)uVar5;
    if (*(long *)(param_1 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(param_1 + 0x30),uVar5,0);
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0xd0) = 0;
        *(undefined4 *)(lVar3 + 0xec) = 0;
        *(undefined4 *)(lVar3 + 0xdc) = 0;
        *(undefined4 *)(lVar3 + 0x10c) = 0;
        *(undefined1 *)(lVar3 + 0x118) = 0;
        *(undefined4 *)(lVar3 + 0x1f0) = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar3 != 0)) {
          iVar1 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar3,0);
          if (iVar1 == 0) {
            return;
          }
          if (((*(long *)(param_1 + 0x10) != 0) &&
              (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar3 != 0)) &&
             (plVar2 = *(long **)(lVar3 + 200), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
            return;
          }
        }
        lVar3 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar1 = *(int *)(lVar3 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar3 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar1 == 0;
        return;
      }
    }
  }
LAB_015c52ec:
  lVar3 = func_0x00f78af4();
  *(undefined4 *)(lVar3 + 0xd0) = 0;
  *(undefined4 *)(lVar3 + 0xec) = 0;
  *(undefined4 *)(lVar3 + 0xdc) = 0;
  *(undefined4 *)(lVar3 + 0x10c) = 0;
  *(undefined1 *)(lVar3 + 0x118) = 0;
  *(undefined4 *)(lVar3 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c530c | Atlas.Gameplay.Kart.KartComposite.OnUseBoost
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__OnUseBoost
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined1 param_5)

{
  undefined1 extraout_w1;
  long lVar1;
  undefined4 extraout_s0;
  
  lVar1 = *(long *)(param_4 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xdc) = param_1;
    *(undefined4 *)(lVar1 + 0xe0) = param_2;
    *(undefined4 *)(lVar1 + 0xe4) = param_3;
    *(undefined1 *)(lVar1 + 0xe8) = param_5;
    *(undefined1 *)(lVar1 + 0x33c) = 1;
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined4 *)(lVar1 + 0xdc) = extraout_s0;
  *(undefined4 *)(lVar1 + 0xe0) = param_2;
  *(undefined4 *)(lVar1 + 0xe4) = param_3;
  *(undefined1 *)(lVar1 + 0xe8) = extraout_w1;
  *(undefined1 *)(lVar1 + 0x33c) = 1;
  return;
}



// ============================================================
// RVA: 0x15c5354 | Atlas.Gameplay.Kart.KartComposite.OnSpinOut
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c5374 | Atlas.Gameplay.Kart.KartComposite.ClearSpeedLimitEffects
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c53c8 | Atlas.Gameplay.Kart.KartComposite.SetNetworkVisuals
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__SetNetworkVisuals(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb52f5 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52f5 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      lVar2 = func_0x00f78af4();
      *(undefined4 *)(lVar2 + 0xf4) = extraout_s0;
      return;
    }
    *(ulong *)(*(long *)(param_1 + 0x80) + 0x48) =
         (long)(param_2 << 0x10) >> 0x10 & 0xffffff0000000000U | param_2 & 0xffffffffff;
  }
  return;
}



// ============================================================
// RVA: 0x15c5460 | Atlas.Gameplay.Kart.KartComposite.SetKartToCameraDistance
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__SetKartToCameraDistance(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xf4) = param_1;
  return;
}



// ============================================================
// RVA: 0x15c5468 | Atlas.Gameplay.Kart.KartComposite.StartTransition
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__StartTransition(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar11;
  undefined1 ***unaff_x29;
  undefined1 **ppuVar12;
  undefined *unaff_x30;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb52f8 & 1) == 0) {
    func_0x00f78a20(0x3d59bb0);
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb52f8 = 1;
  }
  lVar5 = unaff_x21;
  uVar11 = unaff_x22;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) == 2) {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_015c556c;
      lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0xd0);
      if ((lVar4 != 0) && (iVar3 = /*Atlas.UI.TransitionManager$$get_IsTransitionHidden*/ func_0x01511a90(lVar4,0), iVar3 != 0)) {
        if ((*(long *)(param_1 + 0x78) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0xd0), lVar4 == 0)) goto LAB_015c556c;
        /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(lVar4,1,0,0,0,0);
      }
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_015c556c;
    /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(param_1 + 0x28),0,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_015c556c;
    uVar11 = 0x3d59000;
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
    lVar5 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
    auVar16._8_8_ = lVar5;
    auVar16._0_8_ = lVar4;
    /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar5,param_1,uRam0000000003d59bb0,0);
    uVar9 = 0;
    if (lVar4 == 0) goto LAB_015c556c;
code_r0x015d9b40:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ****)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb5392 & 1) == 0) {
      func_0x00f78a20(0x3d23a50);
      bRam0000000003eb5392 = 1;
    }
    plVar10 = (long *)(auVar16._0_8_ + 0xe8);
    lVar5 = *plVar10;
    while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar16._8_8_,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
      lVar4 = func_0x00ff0f44(plVar10,plVar8,lVar5);
      bVar2 = lVar5 == lVar4;
      lVar5 = lVar4;
      if (bVar2) {
        return;
      }
    }
    auVar14 = func_0x00f78e5c(plVar8);
    puVar1 = (undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d23a50;
    *(long *)((long)register0x00000008 + -0x58) = lVar5;
    *(long **)((long)register0x00000008 + -0x50) = plVar10;
    *(long *)((long)register0x00000008 + -0x48) = auVar16._8_8_;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnTransitionEnd;
    if ((bRam0000000003eb5393 & 1) == 0) {
      func_0x00f78a20(0x3d23a50);
      bRam0000000003eb5393 = 1;
    }
    plVar10 = (long *)(auVar14._0_8_ + 0xf0);
    lVar5 = *plVar10;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar14._8_8_,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
      lVar4 = func_0x00ff0f44(plVar10,plVar8,lVar5);
      bVar2 = lVar5 == lVar4;
      lVar5 = lVar4;
      if (bVar2) {
        return;
      }
    }
    auVar15 = func_0x00f78e5c(plVar8);
    lVar4 = auVar14._8_8_;
    uVar9 = 0x3d23a50;
    ppuVar12 = (undefined1 **)((long)register0x00000008 + -0x40);
    puVar13 = &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnTransitionEnd;
    goto code_r0x015d9c80;
  }
LAB_015c556c:
  lVar4 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_KartComposite__EndTransition;
  plVar10 = (long *)0x3eb5000;
  uStack_60 = uVar11;
  lStack_58 = lVar5;
  uStack_50 = uVar9;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb52f9 & 1) == 0) {
    func_0x00f78a20(0x3d59b90);
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb52f9 = 1;
  }
  if (*(long *)(lVar4 + 0x78) != 0) {
    lVar6 = *(long *)(*(long *)(lVar4 + 0x78) + 0xd0);
    if (lVar6 != 0) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(lVar6,1,0,0,0);
    }
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar11 = 0x3d59000;
      lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x60);
      lVar5 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
      /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar5,lVar4,uRam0000000003d59b90,0);
      plVar10 = (long *)0x0;
      if (lVar6 != 0) {
        if ((bRam0000000003eb5390 & 1) == 0) {
          func_0x00f78a20(0x3d23a50,lVar5,0);
          bRam0000000003eb5390 = 1;
        }
        plVar10 = (long *)(lVar6 + 0xe0);
        lVar4 = *plVar10;
        while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,lVar5,0), plVar8 == (long *)0x0 ||
               (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          lVar6 = func_0x00ff0f44(plVar10,plVar8,lVar4);
          bVar2 = lVar4 == lVar6;
          lVar4 = lVar6;
          if (bVar2) {
            return;
          }
        }
        auVar16 = func_0x00f78e5c(plVar8);
        unaff_x19 = auVar16._8_8_;
        uStack_90 = 0x3d23a50;
        puStack_68 = &
                     Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnKartPortalEntered
        ;
        unaff_x29 = &ppuStack_70;
        lStack_88 = lVar4;
        plStack_80 = plVar10;
        lStack_78 = lVar5;
        ppuStack_70 = &puStack_40;
        if ((bRam0000000003eb5391 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5391 = 1;
        }
        unaff_x22 = 0x3d23a50;
        unaff_x20 = (long *)(auVar16._0_8_ + 0xe8);
        unaff_x21 = *unaff_x20;
        while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(unaff_x21,unaff_x19,0), plVar10 == (long *)0x0 ||
               (*plVar10 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          lVar5 = func_0x00ff0f44(unaff_x20,plVar10,unaff_x21);
          bVar2 = unaff_x21 == lVar5;
          unaff_x21 = lVar5;
          if (bVar2) {
            return;
          }
        }
        unaff_x30 = &
                    Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnKartPortalEntered
        ;
        auVar16 = func_0x00f78e5c(plVar10);
        register0x00000008 = (BADSPACEBASE *)&uStack_90;
        goto code_r0x015d9b40;
      }
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Kart_KartComposite__StartPortalExit;
  uStack_90 = uVar11;
  lStack_88 = lVar5;
  plStack_80 = plVar10;
  lStack_78 = lVar4;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb52fa & 1) == 0) {
    func_0x00f78a20(0x3d59ba8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb52fa = 1;
  }
  if (*(long *)(lVar6 + 0x28) != 0) {
    /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(lVar6 + 0x28),1,0);
    lVar5 = Atlas_Gameplay_Kart_KartComposite__GetPortal(lVar6);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
    if (iVar3 == 0) {
code_r0x015c5768:
      if ((*(long *)(lVar6 + 0x38) != 0) &&
         (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(lVar6 + 0x38),0), iVar3 != 0)) {
        if (*(long *)(lVar6 + 0x30) == 0) goto code_r0x015c5800;
        /*Atlas.Gameplay.Kart.KartVisualAnimation$$PlayItemPickup*/ func_0x015e3af0(*(long *)(lVar6 + 0x30),0,0);
      }
      if (-1 < *(int *)(lVar6 + 0xa0)) {
        if (*(long *)(lVar6 + 0x30) == 0) goto code_r0x015c5800;
        /*Atlas.Gameplay.Kart.KartVisualAnimation$$SetFinishLineIndexParam*/ func_0x015e69f0(*(long *)(lVar6 + 0x30),*(int *)(lVar6 + 0xa0),0);
      }
      if (*(long *)(lVar6 + 0x10) != 0) {
        lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 0x60);
        uVar9 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
        auVar15._8_8_ = uVar9;
        auVar15._0_8_ = lVar5;
        /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(uVar9,lVar6,uRam0000000003d59ba8,0);
        if (lVar5 != 0) {
          puVar1 = &uStack_60;
          lVar4 = lStack_78;
          plVar10 = plStack_80;
          lVar5 = lStack_88;
          uVar9 = uStack_90;
          ppuVar12 = ppuStack_70;
          puVar13 = puStack_68;
code_r0x015d9c80:
          *(undefined8 *)((long)puVar1 + -0x30) = uVar9;
          *(long *)((long)puVar1 + -0x28) = lVar5;
          *(long **)((long)puVar1 + -0x20) = plVar10;
          *(long *)((long)puVar1 + -0x18) = lVar4;
          *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar12;
          *(undefined **)((long)puVar1 + -8) = puVar13;
          if ((bRam0000000003eb5394 & 1) == 0) {
            func_0x00f78a20(0x3d23a50);
            bRam0000000003eb5394 = 1;
          }
          plVar10 = (long *)(auVar15._0_8_ + 0xf0);
          lVar5 = *plVar10;
          while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar15._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
            lVar4 = func_0x00ff0f44(plVar10,plVar8,lVar5);
            bVar2 = lVar5 == lVar4;
            lVar5 = lVar4;
            if (bVar2) {
              return;
            }
          }
          auVar16 = func_0x00f78e5c(plVar8);
          *(undefined8 *)((long)puVar1 + -0x60) = 0x3d23a50;
          *(long *)((long)puVar1 + -0x58) = lVar5;
          *(long **)((long)puVar1 + -0x50) = plVar10;
          *(long *)((long)puVar1 + -0x48) = auVar15._8_8_;
          *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
          *(undefined **)((long)puVar1 + -0x38) =
               &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnSpinOutTriggered;
          if ((bRam0000000003eb5395 & 1) == 0) {
            func_0x00f78a20(0x3d23a58);
            bRam0000000003eb5395 = 1;
          }
          plVar10 = (long *)(auVar16._0_8_ + 0xf8);
          lVar5 = *plVar10;
          while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar16._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
            lVar4 = func_0x00ff0f44(plVar10,plVar8,lVar5);
            bVar2 = lVar5 == lVar4;
            lVar5 = lVar4;
            if (bVar2) {
              return;
            }
          }
          auVar14 = func_0x00f78e5c(plVar8);
          *(undefined8 *)((long)puVar1 + -0x90) = 0x3d23a58;
          *(long *)((long)puVar1 + -0x88) = lVar5;
          *(long **)((long)puVar1 + -0x80) = plVar10;
          *(long *)((long)puVar1 + -0x78) = auVar16._8_8_;
          *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
          *(undefined **)((long)puVar1 + -0x68) =
               &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnSpinOutTriggered;
          if ((bRam0000000003eb5396 & 1) == 0) {
            func_0x00f78a20(0x3d23a58);
            bRam0000000003eb5396 = 1;
          }
          plVar10 = (long *)(auVar14._0_8_ + 0xf8);
          lVar5 = *plVar10;
          while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar14._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
            lVar4 = func_0x00ff0f44(plVar10,plVar8,lVar5);
            bVar2 = lVar5 == lVar4;
            lVar5 = lVar4;
            if (bVar2) {
              return;
            }
          }
          auVar16 = func_0x00f78e5c(plVar8);
          *(long *)(auVar16._0_8_ + 0x10) = auVar16._8_8_;
          return;
        }
      }
    }
    else if (lVar5 != 0) {
      lVar4 = *(long *)(lVar6 + 0x70);
      uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
      if (lVar4 != 0) {
        /*Atlas.Audio.KartAudio$$ExitPortal*/ func_0x015c0360(lVar4,uVar9,0);
        lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
        if (((*(long *)(lVar6 + 0x18) != 0) &&
            (lVar7 = *(long *)(*(long *)(lVar6 + 0x18) + 0x70), lVar7 != 0)) &&
           (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0), lVar4 != 0)) {
          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar4,0);
          if ((*(long *)(lVar6 + 0x18) != 0) &&
             (lVar7 = *(long *)(*(long *)(lVar6 + 0x18) + 0x70), lVar7 != 0)) {
            /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar7,0);
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar4,0);
            /*Atlas.Gameplay.PortalVFXBehaviour$$StartExitingPortal*/ func_0x014c3a84(lVar5,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x38),0);
            goto code_r0x015c5768;
          }
        }
      }
    }
  }
code_r0x015c5800:
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb52fb & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d23a50);
    func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52fb = 1;
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 0x60);
    uVar9 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
    /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(uVar9,lVar5,uRam0000000003d59b88,0);
    if (lVar4 != 0) {
      /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$remove_OnKartRespawnEnd*/ func_0x015d98c0(lVar4,uVar9,0);
      plVar10 = *(long **)(lVar5 + 0x68);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
      }
      if (*(long *)(lVar5 + 0x38) == 0) {
        return;
      }
      iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(lVar5 + 0x38),0);
      if (iVar3 == 0) {
        return;
      }
      if (*(long *)(lVar5 + 0x38) != 0) {
        plVar10 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(lVar5 + 0x38),0);
        if (plVar10 == (long *)0x0) {
          return;
        }
        if (*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300)) {
          return;
        }
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28) {
          return;
        }
        if ((*(long *)(lVar5 + 0x38) != 0) &&
           (plVar10 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(lVar5 + 0x38),0), plVar10 != (long *)0x0)) {
          lVar5 = *plVar10;
          if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(lVar5 + 300)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                       -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
                    /* WARNING: Could not recover jumptable at 0x015c5974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar5 + 0x2f8))(plVar10,0,*(undefined8 *)(lVar5 + 0x300));
            return;
          }
          goto code_r0x015c597c;
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x015c597c:
  lVar5 = func_0x00f78e5c();
  *(undefined8 *)(lVar5 + 0x9c) = 0xffffffffffffffff;
  *(undefined1 *)(lVar5 + 0xf0) = 1;
  *(undefined4 *)(lVar5 + 0xf4) = 0xbf800000;
  return;
}



// ============================================================
// RVA: 0x15c5570 | Atlas.Gameplay.Kart.KartComposite.EndTransition
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__EndTransition(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  long lStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  plVar11 = (long *)0x3eb5000;
  if ((bRam0000000003eb52f9 & 1) == 0) {
    func_0x00f78a20(0x3d59b90);
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb52f9 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0xd0);
    if (lVar4 != 0) {
      /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(lVar4,1,0,0,0);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      unaff_x22 = 0x3d59000;
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
      /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(unaff_x21,param_1,uRam0000000003d59b90,0);
      plVar11 = (long *)0x0;
      if (lVar4 != 0) {
        if ((bRam0000000003eb5390 & 1) == 0) {
          func_0x00f78a20(0x3d23a50,unaff_x21,0);
          bRam0000000003eb5390 = 1;
        }
        plVar11 = (long *)(lVar4 + 0xe0);
        lVar4 = *plVar11;
        while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,unaff_x21,0), plVar8 == (long *)0x0 ||
               (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          lVar9 = func_0x00ff0f44(plVar11,plVar8,lVar4);
          bVar2 = lVar4 == lVar9;
          lVar4 = lVar9;
          if (bVar2) {
            return;
          }
        }
        auVar14 = func_0x00f78e5c(plVar8);
        uVar5 = auVar14._8_8_;
        uStack_60 = 0x3d23a50;
        puStack_38 = &
                     Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnKartPortalEntered
        ;
        lStack_58 = lVar4;
        plStack_50 = plVar11;
        lStack_48 = unaff_x21;
        ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
        if ((bRam0000000003eb5391 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5391 = 1;
        }
        plVar11 = (long *)(auVar14._0_8_ + 0xe8);
        lVar4 = *plVar11;
        while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,uVar5,0), plVar8 == (long *)0x0 ||
               (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          lVar9 = func_0x00ff0f44(plVar11,plVar8,lVar4);
          bVar2 = lVar4 == lVar9;
          lVar4 = lVar9;
          if (bVar2) {
            return;
          }
        }
        auVar14 = func_0x00f78e5c(plVar8);
        uVar10 = auVar14._8_8_;
        uStack_90 = 0x3d23a50;
        puStack_68 = &
                     Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnKartPortalEntered
        ;
        lStack_88 = lVar4;
        plStack_80 = plVar11;
        lStack_78 = uVar5;
        ppuStack_70 = &ppuStack_40;
        if ((bRam0000000003eb5392 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5392 = 1;
        }
        plVar11 = (long *)(auVar14._0_8_ + 0xe8);
        lVar4 = *plVar11;
        while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,uVar10,0), plVar8 == (long *)0x0 ||
               (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          lVar9 = func_0x00ff0f44(plVar11,plVar8,lVar4);
          bVar2 = lVar4 == lVar9;
          lVar4 = lVar9;
          if (bVar2) {
            return;
          }
        }
        auVar14 = func_0x00f78e5c(plVar8);
        puVar1 = &uStack_c0;
        uStack_c0 = 0x3d23a50;
        puStack_98 = &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnTransitionEnd;
        lStack_b8 = lVar4;
        plStack_b0 = plVar11;
        uStack_a8 = uVar10;
        ppuStack_a0 = &ppuStack_70;
        if ((bRam0000000003eb5393 & 1) == 0) {
          func_0x00f78a20(0x3d23a50);
          bRam0000000003eb5393 = 1;
        }
        plVar11 = (long *)(auVar14._0_8_ + 0xf0);
        lVar4 = *plVar11;
        while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,auVar14._8_8_,0), plVar8 == (long *)0x0 ||
               (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
          lVar9 = func_0x00ff0f44(plVar11,plVar8,lVar4);
          bVar2 = lVar4 == lVar9;
          lVar4 = lVar9;
          if (bVar2) {
            return;
          }
        }
        auVar15 = func_0x00f78e5c(plVar8);
        lVar9 = auVar14._8_8_;
        uVar5 = 0x3d23a50;
        pppuVar12 = &ppuStack_a0;
        puVar13 = &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnTransitionEnd;
        goto code_r0x015d9c80;
      }
    }
  }
  lVar9 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Kart_KartComposite__StartPortalExit;
  lVar4 = 0x3eb5000;
  uStack_60 = unaff_x22;
  lStack_58 = unaff_x21;
  plStack_50 = plVar11;
  lStack_48 = param_1;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb52fa & 1) == 0) {
    func_0x00f78a20(0x3d59ba8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb52fa = 1;
  }
  if (*(long *)(lVar9 + 0x28) != 0) {
    /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(lVar9 + 0x28),1,0);
    lVar4 = Atlas_Gameplay_Kart_KartComposite__GetPortal(lVar9);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
    unaff_x21 = 0x3d23000;
    if (iVar3 == 0) {
code_r0x015c5768:
      if ((*(long *)(lVar9 + 0x38) != 0) &&
         (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(lVar9 + 0x38),0), iVar3 != 0)) {
        if (*(long *)(lVar9 + 0x30) == 0) goto code_r0x015c5800;
        /*Atlas.Gameplay.Kart.KartVisualAnimation$$PlayItemPickup*/ func_0x015e3af0(*(long *)(lVar9 + 0x30),0,0);
      }
      if (-1 < *(int *)(lVar9 + 0xa0)) {
        if (*(long *)(lVar9 + 0x30) == 0) goto code_r0x015c5800;
        /*Atlas.Gameplay.Kart.KartVisualAnimation$$SetFinishLineIndexParam*/ func_0x015e69f0(*(long *)(lVar9 + 0x30),*(int *)(lVar9 + 0xa0),0);
      }
      if (*(long *)(lVar9 + 0x10) != 0) {
        unaff_x22 = 0x3d59000;
        lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
        auVar15._8_8_ = unaff_x21;
        auVar15._0_8_ = lVar6;
        /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(unaff_x21,lVar9,uRam0000000003d59ba8,0);
        lVar4 = 0;
        if (lVar6 != 0) {
          puVar1 = (undefined8 *)&stack0xffffffffffffffd0;
          lVar9 = lStack_48;
          plVar11 = plStack_50;
          lVar4 = lStack_58;
          uVar5 = uStack_60;
          pppuVar12 = (undefined8 ***)ppuStack_40;
          puVar13 = puStack_38;
code_r0x015d9c80:
          *(undefined8 *)((long)puVar1 + -0x30) = uVar5;
          *(long *)((long)puVar1 + -0x28) = lVar4;
          *(long **)((long)puVar1 + -0x20) = plVar11;
          *(long *)((long)puVar1 + -0x18) = lVar9;
          *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar12;
          *(undefined **)((long)puVar1 + -8) = puVar13;
          if ((bRam0000000003eb5394 & 1) == 0) {
            func_0x00f78a20(0x3d23a50);
            bRam0000000003eb5394 = 1;
          }
          plVar11 = (long *)(auVar15._0_8_ + 0xf0);
          lVar4 = *plVar11;
          while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,auVar15._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
            lVar9 = func_0x00ff0f44(plVar11,plVar8,lVar4);
            bVar2 = lVar4 == lVar9;
            lVar4 = lVar9;
            if (bVar2) {
              return;
            }
          }
          auVar14 = func_0x00f78e5c(plVar8);
          *(undefined8 *)((long)puVar1 + -0x60) = 0x3d23a50;
          *(long *)((long)puVar1 + -0x58) = lVar4;
          *(long **)((long)puVar1 + -0x50) = plVar11;
          *(long *)((long)puVar1 + -0x48) = auVar15._8_8_;
          *(undefined1 **)((long)puVar1 + -0x40) = (undefined1 *)((long)puVar1 + -0x10);
          *(undefined **)((long)puVar1 + -0x38) =
               &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__add_OnSpinOutTriggered;
          if ((bRam0000000003eb5395 & 1) == 0) {
            func_0x00f78a20(0x3d23a58);
            bRam0000000003eb5395 = 1;
          }
          plVar11 = (long *)(auVar14._0_8_ + 0xf8);
          lVar4 = *plVar11;
          while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,auVar14._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
            lVar9 = func_0x00ff0f44(plVar11,plVar8,lVar4);
            bVar2 = lVar4 == lVar9;
            lVar4 = lVar9;
            if (bVar2) {
              return;
            }
          }
          auVar15 = func_0x00f78e5c(plVar8);
          *(undefined8 *)((long)puVar1 + -0x90) = 0x3d23a58;
          *(long *)((long)puVar1 + -0x88) = lVar4;
          *(long **)((long)puVar1 + -0x80) = plVar11;
          *(long *)((long)puVar1 + -0x78) = auVar14._8_8_;
          *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x40);
          *(undefined **)((long)puVar1 + -0x68) =
               &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__remove_OnSpinOutTriggered;
          if ((bRam0000000003eb5396 & 1) == 0) {
            func_0x00f78a20(0x3d23a58);
            bRam0000000003eb5396 = 1;
          }
          plVar11 = (long *)(auVar15._0_8_ + 0xf8);
          lVar4 = *plVar11;
          while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,auVar15._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
            lVar9 = func_0x00ff0f44(plVar11,plVar8,lVar4);
            bVar2 = lVar4 == lVar9;
            lVar4 = lVar9;
            if (bVar2) {
              return;
            }
          }
          auVar14 = func_0x00f78e5c(plVar8);
          *(long *)(auVar14._0_8_ + 0x10) = auVar14._8_8_;
          return;
        }
      }
    }
    else if (lVar4 != 0) {
      unaff_x21 = *(long *)(lVar9 + 0x70);
      uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
      if (unaff_x21 != 0) {
        /*Atlas.Audio.KartAudio$$ExitPortal*/ func_0x015c0360(unaff_x21,uVar5,0);
        lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
        if (((*(long *)(lVar9 + 0x18) != 0) &&
            (lVar7 = *(long *)(*(long *)(lVar9 + 0x18) + 0x70), unaff_x21 = lVar6, lVar7 != 0)) &&
           (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0), lVar6 != 0)) {
          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar6,0);
          if ((*(long *)(lVar9 + 0x18) != 0) &&
             (lVar7 = *(long *)(*(long *)(lVar9 + 0x18) + 0x70), lVar7 != 0)) {
            /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar7,0);
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar6,0);
            /*Atlas.Gameplay.PortalVFXBehaviour$$StartExitingPortal*/ func_0x014c3a84(lVar4,*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x38),0);
            goto code_r0x015c5768;
          }
        }
      }
    }
  }
code_r0x015c5800:
  lVar6 = func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Kart_KartComposite__EndPortalExit;
  uStack_90 = unaff_x22;
  lStack_88 = unaff_x21;
  plStack_80 = (long *)lVar4;
  lStack_78 = lVar9;
  ppuStack_70 = &ppuStack_40;
  if ((bRam0000000003eb52fb & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d23a50);
    func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52fb = 1;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar4 = *(long *)(*(long *)(lVar6 + 0x10) + 0x60);
    uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
    /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(uVar5,lVar6,uRam0000000003d59b88,0);
    if (lVar4 != 0) {
      /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$remove_OnKartRespawnEnd*/ func_0x015d98c0(lVar4,uVar5,0);
      plVar11 = *(long **)(lVar6 + 0x68);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
      }
      if (*(long *)(lVar6 + 0x38) == 0) {
        return;
      }
      iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(lVar6 + 0x38),0);
      if (iVar3 == 0) {
        return;
      }
      if (*(long *)(lVar6 + 0x38) != 0) {
        plVar11 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(lVar6 + 0x38),0);
        if (plVar11 == (long *)0x0) {
          return;
        }
        if (*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300)) {
          return;
        }
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28) {
          return;
        }
        if ((*(long *)(lVar6 + 0x38) != 0) &&
           (plVar11 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(lVar6 + 0x38),0), plVar11 != (long *)0x0)) {
          lVar4 = *plVar11;
          if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(lVar4 + 300)) &&
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                       -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
                    /* WARNING: Could not recover jumptable at 0x015c5974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x2f8))(plVar11,0,*(undefined8 *)(lVar4 + 0x300));
            return;
          }
          goto code_r0x015c597c;
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x015c597c:
  lVar4 = func_0x00f78e5c();
  *(undefined8 *)(lVar4 + 0x9c) = 0xffffffffffffffff;
  *(undefined1 *)(lVar4 + 0xf0) = 1;
  *(undefined4 *)(lVar4 + 0xf4) = 0xbf800000;
  return;
}



// ============================================================
// RVA: 0x15c5630 | Atlas.Gameplay.Kart.KartComposite.StartPortalExit
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__StartPortalExit(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb52fa & 1) == 0) {
    func_0x00f78a20(0x3d59ba8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    bRam0000000003eb52fa = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(param_1 + 0x28),1,0);
    lVar3 = Atlas_Gameplay_Kart_KartComposite__GetPortal(param_1);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
    if (iVar2 == 0) {
LAB_015c5768:
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (iVar2 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(param_1 + 0x38),0), iVar2 != 0)) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_015c5800;
        /*Atlas.Gameplay.Kart.KartVisualAnimation$$PlayItemPickup*/ func_0x015e3af0(*(long *)(param_1 + 0x30),0,0);
      }
      if (-1 < *(int *)(param_1 + 0xa0)) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_015c5800;
        /*Atlas.Gameplay.Kart.KartVisualAnimation$$SetFinishLineIndexParam*/ func_0x015e69f0(*(long *)(param_1 + 0x30),*(int *)(param_1 + 0xa0),0);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
        uVar4 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
        /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(uVar4,param_1,uRam0000000003d59ba8,0);
        if (lVar3 != 0) {
          if ((bRam0000000003eb5394 & 1) == 0) {
            func_0x00f78a20(0x3d23a50,uVar4,0);
            bRam0000000003eb5394 = 1;
          }
          plVar7 = (long *)(lVar3 + 0xf0);
          lVar3 = *plVar7;
          while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar3,uVar4,0), plVar6 == (long *)0x0 ||
                 (*plVar6 == /*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50))) {
            lVar8 = func_0x00ff0f44(plVar7,plVar6,lVar3);
            bVar1 = lVar3 == lVar8;
            lVar3 = lVar8;
            if (bVar1) {
              return;
            }
          }
          auVar9 = func_0x00f78e5c(plVar6);
          if ((bRam0000000003eb5395 & 1) == 0) {
            func_0x00f78a20(0x3d23a58);
            bRam0000000003eb5395 = 1;
          }
          plVar7 = (long *)(auVar9._0_8_ + 0xf8);
          lVar3 = *plVar7;
          while ((plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar3,auVar9._8_8_,0), plVar6 == (long *)0x0 ||
                 (*plVar6 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
            lVar8 = func_0x00ff0f44(plVar7,plVar6,lVar3);
            bVar1 = lVar3 == lVar8;
            lVar3 = lVar8;
            if (bVar1) {
              return;
            }
          }
          auVar9 = func_0x00f78e5c(plVar6);
          if ((bRam0000000003eb5396 & 1) == 0) {
            func_0x00f78a20(0x3d23a58);
            bRam0000000003eb5396 = 1;
          }
          plVar7 = (long *)(auVar9._0_8_ + 0xf8);
          lVar3 = *plVar7;
          while ((plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar3,auVar9._8_8_,0), plVar6 == (long *)0x0 ||
                 (*plVar6 == /*Atlas.Gameplay.Kart.OnKartSpinOutDelegate_TypeInfo*/ lRam0000000003d23a58))) {
            lVar8 = func_0x00ff0f44(plVar7,plVar6,lVar3);
            bVar1 = lVar3 == lVar8;
            lVar3 = lVar8;
            if (bVar1) {
              return;
            }
          }
          auVar9 = func_0x00f78e5c(plVar6);
          *(long *)(auVar9._0_8_ + 0x10) = auVar9._8_8_;
          return;
        }
      }
    }
    else if (lVar3 != 0) {
      lVar8 = *(long *)(param_1 + 0x70);
      uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
      if (lVar8 != 0) {
        /*Atlas.Audio.KartAudio$$ExitPortal*/ func_0x015c0360(lVar8,uVar4,0);
        lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
        if (((*(long *)(param_1 + 0x18) != 0) &&
            (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x70), lVar5 != 0)) &&
           (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0), lVar8 != 0)) {
          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar8,0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x70), lVar5 != 0)) {
            /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar5,0);
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar8,0);
            /*Atlas.Gameplay.PortalVFXBehaviour$$StartExitingPortal*/ func_0x014c3a84(lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),0)
            ;
            goto LAB_015c5768;
          }
        }
      }
    }
  }
LAB_015c5800:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb52fb & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d23a50);
    func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52fb = 1;
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar8 = *(long *)(*(long *)(lVar3 + 0x10) + 0x60);
    uVar4 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ lRam0000000003d23a50);
    /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(uVar4,lVar3,uRam0000000003d59b88,0);
    if (lVar8 != 0) {
      /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$remove_OnKartRespawnEnd*/ func_0x015d98c0(lVar8,uVar4,0);
      plVar7 = *(long **)(lVar3 + 0x68);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      }
      if (*(long *)(lVar3 + 0x38) == 0) {
        return;
      }
      iVar2 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(lVar3 + 0x38),0);
      if (iVar2 == 0) {
        return;
      }
      if (*(long *)(lVar3 + 0x38) != 0) {
        plVar7 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(lVar3 + 0x38),0);
        if (plVar7 == (long *)0x0) {
          return;
        }
        if (*(byte *)(*plVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300)) {
          return;
        }
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28) {
          return;
        }
        if ((*(long *)(lVar3 + 0x38) != 0) &&
           (plVar7 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(lVar3 + 0x38),0), plVar7 != (long *)0x0)) {
          lVar3 = *plVar7;
          if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(lVar3 + 300)) &&
             (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                       -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
                    /* WARNING: Could not recover jumptable at 0x015c5974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar3 + 0x2f8))(plVar7,0,*(undefined8 *)(lVar3 + 0x300));
            return;
          }
          goto code_r0x015c597c;
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x015c597c:
  lVar3 = func_0x00f78e5c();
  *(undefined8 *)(lVar3 + 0x9c) = 0xffffffffffffffff;
  *(undefined1 *)(lVar3 + 0xf0) = 1;
  *(undefined4 *)(lVar3 + 0xf4) = 0xbf800000;
  return;
}



// ============================================================
// RVA: 0x15c5804 | Atlas.Gameplay.Kart.KartComposite.EndPortalExit
// ============================================================

void Atlas_Gameplay_Kart_KartComposite__EndPortalExit(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam0000000003eb52fb & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d23a50);
    func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52fb = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
    uVar2 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
    /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(uVar2,param_1,uRam0000000003d59b88,0);
    if (lVar4 != 0) {
      /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$remove_OnKartRespawnEnd*/ func_0x015d98c0(lVar4,uVar2,0);
      plVar3 = *(long **)(param_1 + 0x68);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      }
      if (*(long *)(param_1 + 0x38) == 0) {
        return;
      }
      iVar1 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(param_1 + 0x38),0);
      if (iVar1 == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        plVar3 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(param_1 + 0x38),0);
        if (plVar3 == (long *)0x0) {
          return;
        }
        if (*(byte *)(*plVar3 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300)) {
          return;
        }
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28) {
          return;
        }
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (plVar3 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(param_1 + 0x38),0), plVar3 != (long *)0x0)) {
          lVar4 = *plVar3;
          if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(lVar4 + 300)) &&
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                       -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
                    /* WARNING: Could not recover jumptable at 0x015c5974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x2f8))(plVar3,0,*(undefined8 *)(lVar4 + 0x300));
            return;
          }
          goto code_r0x015c597c;
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x015c597c:
  lVar4 = func_0x00f78e5c();
  *(undefined8 *)(lVar4 + 0x9c) = 0xffffffffffffffff;
  *(undefined1 *)(lVar4 + 0xf0) = 1;
  *(undefined4 *)(lVar4 + 0xf4) = 0xbf800000;
  return;
}



// ============================================================
// RVA: 0x15c5980 | Atlas.Gameplay.Kart.KartComposite..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartComposite___ctor(long param_1)

{
  *(undefined8 *)(param_1 + 0x9c) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  *(undefined4 *)(param_1 + 0xf4) = 0xbf800000;
  return;
}



// ============================================================
// RVA: 0x15c59a0 | Atlas.Gameplay.Kart.KartComposite..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartComposite___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb52fc & 1) == 0) {
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d6eec8);
    func_0x00f78a20(0x3d6eed0);
    func_0x00f78a20(0x3d6eee0);
    func_0x00f78a20(0x3d6eec0);
    func_0x00f78a20(0x3d6eee8);
    func_0x00f78a20(0x3d6eed8);
    bRam0000000003eb52fc = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartComposite.EarlyUpdate()')*/ uRam0000000003d6eec0,1,0,0,0);
  **(undefined8 **)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartComposite.FixedUpdate()')*/ uRam0000000003d6eec8,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartComposite.PreFixedUpdate()')*/ uRam0000000003d6eee0,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartComposite.PostFixedUpdate()')*/ uRam0000000003d6eed8,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x18) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartComposite.LateUpdate()')*/ uRam0000000003d6eed0,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x20) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartComposite.Update()')*/ uRam0000000003d6eee8,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x28) = uVar1;
  return;
}



