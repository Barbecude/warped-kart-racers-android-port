// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.HomingProjectileLogic

// ============================================================
// RVA: 0x15b5dbc | Atlas.Gameplay.Usables.HomingProjectileLogic.get_HasKartTarget
// ============================================================

bool Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



// ============================================================
// RVA: 0x15b5dcc | Atlas.Gameplay.Usables.HomingProjectileLogic.get_HasSplineRoot
// ============================================================

uint Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5288 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5288 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec027c & 1) == 0) {
    func_0x00f78a20(0x3d23990,0,0);
    bRam0000000003ec027c = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x15b5e40 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_CanTrack
// ============================================================

bool Atlas_Gameplay_Usables_HomingProjectileLogic__get_CanTrack(long param_1)

{
  return *(float *)(param_1 + 0x28) <= 0.0;
}



// ============================================================
// RVA: 0x15b5e50 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_StartTrackingInAirTimer
// ============================================================

undefined4 Atlas_Gameplay_Usables_HomingProjectileLogic__get_StartTrackingInAirTimer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15b5e58 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_RaceSplineJobCache
// ============================================================

void Atlas_Gameplay_Usables_HomingProjectileLogic__get_RaceSplineJobCache
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  param_1[1] = *(undefined8 *)(param_2 + 0x78);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x80);
  return;
}



// ============================================================
// RVA: 0x15b5e6c | Atlas.Gameplay.Usables.HomingProjectileLogic.get_RaceSpline
// ============================================================

undefined8 Atlas_Gameplay_Usables_HomingProjectileLogic__get_RaceSpline(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15b5e74 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_CurrentTrackCoords
// ============================================================

undefined4 Atlas_Gameplay_Usables_HomingProjectileLogic__get_CurrentTrackCoords(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15b5e7c | Atlas.Gameplay.Usables.HomingProjectileLogic.get_CurrentClosestPointOnTrack
// ============================================================

undefined4
Atlas_Gameplay_Usables_HomingProjectileLogic__get_CurrentClosestPointOnTrack(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15b5e88 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_KartTarget
// ============================================================

undefined8 Atlas_Gameplay_Usables_HomingProjectileLogic__get_KartTarget(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15b5e90 | Atlas.Gameplay.Usables.HomingProjectileLogic.set_KartTarget
// ============================================================

void Atlas_Gameplay_Usables_HomingProjectileLogic__set_KartTarget(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// ============================================================
// RVA: 0x15b5e98 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_TrackWaypointPos
// ============================================================

undefined8 Atlas_Gameplay_Usables_HomingProjectileLogic__get_TrackWaypointPos(void)

{
  return 0;
}



// ============================================================
// RVA: 0x15b5ea8 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_CurrentMaxSteer
// ============================================================

undefined4 Atlas_Gameplay_Usables_HomingProjectileLogic__get_CurrentMaxSteer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15b5eb0 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_CurrentSteer
// ============================================================

undefined4 Atlas_Gameplay_Usables_HomingProjectileLogic__get_CurrentSteer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// ============================================================
// RVA: 0x15b5eb8 | Atlas.Gameplay.Usables.HomingProjectileLogic.get_DesiredPolyLineIndex
// ============================================================

undefined4 Atlas_Gameplay_Usables_HomingProjectileLogic__get_DesiredPolyLineIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15b5ec0 | Atlas.Gameplay.Usables.HomingProjectileLogic.set_DesiredPolyLineIndex
// ============================================================

void Atlas_Gameplay_Usables_HomingProjectileLogic__set_DesiredPolyLineIndex
               (long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x90) = param_2;
  return;
}



// ============================================================
// RVA: 0x15b5ec8 | Atlas.Gameplay.Usables.HomingProjectileLogic.Init
// ============================================================

void Atlas_Gameplay_Usables_HomingProjectileLogic__Init(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000003eb5289 & 1) == 0) {
    func_0x00f78a20(0x3d24068);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d71288);
    func_0x00f78a20(0x3d6ef00);
    func_0x00f78a20(0x3d6ef68);
    func_0x00f78a20(0x3d6aae8);
    bRam0000000003eb5289 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_015b5f88:
    plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
    if (plVar6 == (long *)0x0) goto LAB_015b6114;
    if ((/*STR('CollidableUsable')*/ lRam0000000003d6aae8 != 0) &&
       (lVar7 = func_0x00f78adc(/*STR('CollidableUsable')*/ lRam0000000003d6aae8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    {
LAB_015b6120:
      uVar8 = func_0x00f78b14();
      goto code_r0x015b6124;
    }
    if ((int)plVar6[3] != 0) {
      plVar6[4] = /*STR('CollidableUsable')*/ lRam0000000003d6aae8;
      uVar1 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar6,0);
      plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      if (plVar6 == (long *)0x0) goto LAB_015b6114;
      if ((/*STR('PlacementHomingUsable')*/ lRam0000000003d71288 != 0) &&
         (lVar7 = func_0x00f78adc(/*STR('PlacementHomingUsable')*/ lRam0000000003d71288,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
         ) goto LAB_015b6120;
      if ((int)plVar6[3] != 0) {
        plVar6[4] = /*STR('PlacementHomingUsable')*/ lRam0000000003d71288;
        uVar2 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar6,0);
        plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
        if (plVar6 == (long *)0x0) goto LAB_015b6114;
        if ((/*STR('KartPhysics')*/ lRam0000000003d6ef00 != 0) &&
           (lVar7 = func_0x00f78adc(/*STR('KartPhysics')*/ lRam0000000003d6ef00,*(undefined8 *)(*plVar6 + 0x40)),
           lVar7 == 0)) goto LAB_015b6120;
        if ((int)plVar6[3] != 0) {
          plVar6[4] = /*STR('KartPhysics')*/ lRam0000000003d6ef00;
          uVar3 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar6,0);
          plVar6 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
          if (plVar6 == (long *)0x0) goto LAB_015b6114;
          if ((/*STR('KartTrigger')*/ lRam0000000003d6ef68 != 0) &&
             (lVar7 = func_0x00f78adc(/*STR('KartTrigger')*/ lRam0000000003d6ef68,*(undefined8 *)(*plVar6 + 0x40)),
             lVar7 == 0)) goto LAB_015b6120;
          if ((int)plVar6[3] != 0) {
            plVar6[4] = /*STR('KartTrigger')*/ lRam0000000003d6ef68;
            uVar4 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar6,0);
            uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326fc(~(uVar2 | uVar1 | uVar3 | uVar4),0);
            *(undefined4 *)(param_1 + 0x4c) = uVar5;
            *(undefined4 *)(param_1 + 0x54) = 1;
            return;
          }
        }
      }
    }
  }
  else {
    if ((*(byte *)(*param_2 + 300) < *(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 + -8)
        != /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068)) goto LAB_015b5f88;
    if (param_2[0x3a] != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2[0x3a] + 0x40);
      goto LAB_015b5f88;
    }
LAB_015b6114:
    func_0x00f78af4();
  }
  uVar8 = func_0x00f78b24();
code_r0x015b6124:
  lVar7 = func_0x00f78ac0(uVar8,0);
  *(undefined8 *)(lVar7 + 0x54) = 0;
  *(undefined8 *)(lVar7 + 0x4c) = 0;
  *(undefined4 *)(lVar7 + 0x5c) = 0;
  return;
}



// ============================================================
// RVA: 0x15b612c | Atlas.Gameplay.Usables.HomingProjectileLogic.DeInit
// ============================================================

void Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



// ============================================================
// RVA: 0x15b613c | Atlas.Gameplay.Usables.HomingProjectileLogic.SetUpParams
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((bRam0000000003eb528a & 1) == 0) {
    func_0x00f78a20(0x3d265d0);
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb528a = 1;
  }
  *(long *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    uVar2 = _cosf(fVar4 * _UNK_033f850c * 0.5);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    /*Atlas.Gameplay.RaceSplineCacheParams$$Init*/ func_0x014d9a3c((undefined8 *)(param_1 + 0x70),0);
    lVar1 = /*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8;
    uVar2 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
    *(undefined8 *)(param_1 + 0x2c) = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = **(undefined8 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
    uVar2 = *(undefined4 *)(*(undefined8 **)(lVar1 + 0xb8) + 1);
    *(undefined8 *)(param_1 + 0x40) = **(undefined8 **)(lVar1 + 0xb8);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined4 *)(lVar1 + 0x50) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x15b624c | Atlas.Gameplay.Usables.HomingProjectileLogic.TearDownParams
// ============================================================

void Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams(long param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x15b6264 | Atlas.Gameplay.Usables.HomingProjectileLogic.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x015b6330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b6334) */
/* WARNING: Removing unreachable block (ram,0x015b633c) */
/* WARNING: Removing unreachable block (ram,0x015b6344) */
/* WARNING: Removing unreachable block (ram,0x015b634c) */
/* WARNING: Removing unreachable block (ram,0x014cd714) */
/* WARNING: Removing unreachable block (ram,0x014dbed8) */
/* WARNING: Removing unreachable block (ram,0x014dbff8) */
/* WARNING: Removing unreachable block (ram,0x014dbee4) */
/* WARNING: Removing unreachable block (ram,0x014dbf00) */
/* WARNING: Removing unreachable block (ram,0x014dbf04) */
/* WARNING: Removing unreachable block (ram,0x014dbf34) */
/* WARNING: Removing unreachable block (ram,0x014dbf38) */
/* WARNING: Removing unreachable block (ram,0x014dbf44) */
/* WARNING: Removing unreachable block (ram,0x014dbf48) */
/* WARNING: Removing unreachable block (ram,0x014dbf78) */
/* WARNING: Removing unreachable block (ram,0x014dbf7c) */
/* WARNING: Removing unreachable block (ram,0x014dc000) */
/* WARNING: Removing unreachable block (ram,0x014dbf80) */
/* WARNING: Removing unreachable block (ram,0x014dbf88) */
/* WARNING: Removing unreachable block (ram,0x014dbf90) */
/* WARNING: Removing unreachable block (ram,0x014dbf9c) */
/* WARNING: Removing unreachable block (ram,0x014dbfa0) */
/* WARNING: Removing unreachable block (ram,0x014dbfa8) */
/* WARNING: Removing unreachable block (ram,0x014dc00c) */
/* WARNING: Removing unreachable block (ram,0x014dc020) */
/* WARNING: Removing unreachable block (ram,0x014dc02c) */
/* WARNING: Removing unreachable block (ram,0x014dc034) */
/* WARNING: Removing unreachable block (ram,0x014dbfb8) */
/* WARNING: Removing unreachable block (ram,0x014dbfc4) */
/* WARNING: Removing unreachable block (ram,0x014dbfe0) */
/* WARNING: Removing unreachable block (ram,0x014dc0c0) */
/* WARNING: Removing unreachable block (ram,0x014dbfe8) */
/* WARNING: Removing unreachable block (ram,0x014dc0cc) */
/* WARNING: Removing unreachable block (ram,0x014dbff0) */
/* WARNING: Removing unreachable block (ram,0x014dc03c) */
/* WARNING: Removing unreachable block (ram,0x014dc04c) */
/* WARNING: Removing unreachable block (ram,0x014dc054) */
/* WARNING: Removing unreachable block (ram,0x014dc070) */
/* WARNING: Removing unreachable block (ram,0x014dc094) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * Atlas_Gameplay_Usables_HomingProjectileLogic__Update
                  (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,float *param_5,
                  long *param_6,float *param_7,ulong param_8,undefined8 param_9)

{
  char cVar1;
  code *pcVar2;
  long **pplVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  int extraout_w1;
  float *extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  float *unaff_x22;
  uint uVar23;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar24;
  long lVar25;
  uint uVar26;
  undefined1 **ppuVar27;
  undefined *puVar28;
  float extraout_s0;
  undefined4 uVar29;
  float fVar30;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  float fVar31;
  float fVar32;
  float fVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  ulong unaff_d9;
  ulong uVar40;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 auStack_284 [3];
  float fStack_278;
  undefined4 uStack_274;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  ulong uStack_258;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
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
  long lStack_c8;
  long *plStack_60;
  float *pfStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  ulong uVar33;
  
  uVar20 = 0x3eb5000;
  pfVar5 = param_5;
  if ((bRam0000000003eb528b & 1) == 0) {
    pfVar5 = (float *)func_0x00f78a20(&/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618);
    bRam0000000003eb528b = 1;
  }
  fVar38 = param_5[10];
  uVar16 = (ulong)(uint)fVar38;
  if (fVar38 < 0.0) {
LAB_015b6318:
    if ((0.0 < (float)uVar16) ||
       (pfVar5 = (float *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(param_5),
       (int)pfVar5 == 0)) {
      return pfVar5;
    }
    puVar28 = &UNK_015b6334;
    pfVar5 = param_5;
  }
  else {
    if (param_6 != (long *)0x0) {
      lVar15 = *param_6;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_015b6304;
          }
          piVar17 = piVar17 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      param_7 = (float *)0x0;
      puVar6 = (undefined8 *)func_0x00fac1f0(param_6);
LAB_015b6304:
      pfVar5 = (float *)(*(code *)*puVar6)(param_6,puVar6[1]);
      uVar16 = (ulong)(uint)(fVar38 - extraout_s0);
      param_5[10] = fVar38 - extraout_s0;
      goto LAB_015b6318;
    }
    puVar28 = &Atlas_Gameplay_Usables_HomingProjectileLogic__UpdateCoordAndWaypoint;
    pfVar5 = (float *)func_0x00f78af4();
  }
  plStack_60 = param_6;
  pfStack_58 = param_5;
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar28;
  if (*(long *)(pfVar5 + 4) != 0) {
    param_5 = *(float **)(pfVar5 + 0x16);
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pfVar5 + 4),0);
    fVar38 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    if ((*(long *)(pfVar5 + 0x18) != 0) && (param_5 != (float *)0x0)) {
      fVar31 = pfVar5[0x24];
      uVar16 = (ulong)(uint)fVar31;
      pfVar7 = pfVar5 + 0x1c;
      pfVar8 = pfVar5 + 0xb;
      fVar37 = *(float *)(*(long *)(pfVar5 + 0x18) + 0x28);
      lStack_c8 = *(long *)PTR_03a5d648;
      pfVar9 = pfVar8;
      pfVar11 = pfVar7;
      if ((bRam0000000003eb4bc1 & 1) == 0) {
        func_0x00f78a20(&uRam0000000003d57fb8);
        bRam0000000003eb4bc1 = 1;
      }
      param_5[0x66] = fVar38;
      param_5[0x67] = (float)param_2;
      param_5[0x68] = (float)param_3;
      param_5[0x69] = 1.0;
      param_5[0x6f] = fVar37;
      uVar20 = *(undefined8 *)(pfVar5 + 0x1e);
      lVar15 = *(long *)pfVar7;
      param_5[0x6e] = pfVar5[0x20];
      *(undefined8 *)(param_5 + 0x6c) = uVar20;
      *(long *)(param_5 + 0x6a) = lVar15;
      param_5[0x70] = fVar31;
      uStack_f8 = *(undefined8 *)(param_5 + 0x6a);
      uStack_100 = *(undefined8 *)(param_5 + 0x68);
      uStack_e8 = *(undefined8 *)(param_5 + 0x6e);
      uStack_f0 = *(undefined8 *)(param_5 + 0x6c);
      uStack_d8 = *(undefined8 *)(param_5 + 0x72);
      uStack_e0 = *(undefined8 *)(param_5 + 0x70);
      uStack_d0 = *(undefined8 *)(param_5 + 0x74);
      uStack_138 = *(undefined8 *)(param_5 + 0x5a);
      uStack_140 = *(undefined8 *)(param_5 + 0x58);
      uStack_128 = *(undefined8 *)(param_5 + 0x5e);
      uStack_130 = *(undefined8 *)(param_5 + 0x5c);
      uStack_118 = *(undefined8 *)(param_5 + 0x62);
      uStack_120 = *(undefined8 *)(param_5 + 0x60);
      uStack_108 = *(undefined8 *)(param_5 + 0x66);
      uStack_110 = *(undefined8 *)(param_5 + 100);
      uStack_178 = *(undefined8 *)(param_5 + 0x4a);
      uStack_180 = *(undefined8 *)(param_5 + 0x48);
      uStack_168 = *(undefined8 *)(param_5 + 0x4e);
      uStack_170 = *(undefined8 *)(param_5 + 0x4c);
      uStack_158 = *(undefined8 *)(param_5 + 0x52);
      uStack_160 = *(undefined8 *)(param_5 + 0x50);
      uStack_148 = *(undefined8 *)(param_5 + 0x56);
      uStack_150 = *(undefined8 *)(param_5 + 0x54);
      uStack_198 = *(undefined8 *)(param_5 + 0x42);
      uStack_1a0 = *(undefined8 *)(param_5 + 0x40);
      uStack_188 = *(undefined8 *)(param_5 + 0x46);
      uStack_190 = *(undefined8 *)(param_5 + 0x44);
      /*Unity.Jobs.IJobExtensions$$Run<RaceSplineCoordsAndPointOnTrackJob>*/ func_0x0185e800(&uStack_1a0,uRam0000000003d57fb8);
      pcVar13 = *(char **)(param_5 + 0x72);
      cVar1 = *pcVar13;
      fVar38 = *(float *)(pcVar13 + 0xc);
      fVar31 = *(float *)(pcVar13 + 0x24);
      uVar33 = (ulong)(uint)fVar31;
      uStack_190 = *(undefined8 *)(pcVar13 + 0x38);
      uStack_198 = *(undefined8 *)(pcVar13 + 0x30);
      uStack_1a0 = *(undefined8 *)(pcVar13 + 0x28);
      uVar20 = *(undefined8 *)(pcVar13 + 0x14);
      uStack_1b8 = (undefined4)uStack_198;
      uStack_1b4 = (undefined4)((ulong)uStack_198 >> 0x20);
      uStack_1bc = (undefined4)((ulong)uStack_1a0 >> 0x20);
      uStack_1b0 = (undefined4)uStack_190;
      fStack_1ac = (float)((ulong)uStack_190 >> 0x20);
      uVar35 = *(ulong *)(pcVar13 + 0x1c);
      *(undefined8 *)pfVar8 = *(undefined8 *)(pcVar13 + 4);
      pfVar5[0xd] = fVar38;
      *(undefined8 *)(pfVar5 + 0xe) = uVar20;
      *(ulong *)(pfVar5 + 0x1e) = CONCAT44(uStack_1b0,uStack_1b4);
      *(long *)pfVar7 = CONCAT44(uStack_1b8,uStack_1bc);
      pfVar5[0x20] = fStack_1ac;
      *(ulong *)(pfVar5 + 0x10) = uVar35;
      pfVar5[0x12] = fVar31;
      if (*(long *)PTR_03a5d648 == lStack_c8) {
        return (float *)(ulong)(cVar1 != '\0');
      }
      lVar15 = ___stack_chk_fail((float *)(ulong)(cVar1 != '\0'));
      uStack_258 = uVar16;
      if ((bRam0000000003eb4bc2 & 1) == 0) {
        func_0x00f78a20(0x3d3ba08);
        func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
        bRam0000000003eb4bc2 = 1;
      }
      lStack_268 = 0;
      lStack_260 = 0;
      lStack_270 = 0;
      fStack_278 = 0.0;
      auStack_284[0] = 0;
      fVar38 = *(float *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
      *(undefined8 *)pfVar9 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
      pfVar9[2] = fVar38;
      plVar14 = &lStack_260;
      if ((bRam0000000003eb4bc4 & 1) == 0) {
        func_0x00f78a20(0x3d3ba08);
        func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0);
        func_0x00f78a20(&/*Unity.Mathematics.float2_TypeInfo*/ uRam0000000003d265d0);
        bRam0000000003eb4bc4 = 1;
      }
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar20 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar20,0);
      lVar25 = *(long *)(pfVar11 + 4);
      if (lVar25 == 0) {
        lVar25 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(extraout_d0 & 0xffffffff,uVar33 & 0xffffffff,uVar35 & 0xffffffff,
                                 lVar15);
      }
      uStack_340._4_4_ = 3.4028235e+38;
      lStack_270 = *(long *)pfVar11;
      lStack_260 = 0;
      lStack_268 = 0;
      auStack_284[0] = 0xffffffff;
      uStack_274 = 0xffffffff;
      fStack_278 = 0.0;
      if (*(long *)pfVar11 != 0) {
        lStack_268 = *(long *)(pfVar11 + 4);
        lStack_260 = *(long *)(pfVar11 + 2);
        if (*(long *)pfVar11 == 0) {
          func_0x00f78af4();
        }
        else {
          /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar33 & 0xffffffff,uVar35 & 0xffffffff,
                          *(long *)pfVar11,&uStack_348,(long)&uStack_340 + 4,&fStack_278,auStack_284
                          ,&uStack_274);
          if ((fStack_278 < 20.0) || (lStack_270 != 0)) goto code_r0x014dc718;
          func_0x00f78af4();
        }
        goto code_r0x014dc8b0;
      }
      if (lVar25 == 0) {
code_r0x014dc718:
        pfVar5 = (float *)/*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar20,0);
        return pfVar5;
      }
      lVar19 = *(long *)(lVar25 + 0x40);
      if (lVar19 == 0) {
        func_0x00f78af4();
      }
      else {
        fVar31 = 3.4028235e+38;
        uVar12 = *(uint *)(lVar19 + 0x18);
        fVar38 = uStack_340._4_4_;
        if ((int)uVar12 < 1) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          uVar22 = 0;
          do {
            if (uVar12 <= uVar22) {
              uStack_340._4_4_ = fVar38;
              uVar20 = func_0x00f78b24();
              func_0x00f78ac0(uVar20,0);
              goto code_r0x014dc8b0;
            }
            lVar18 = *(long *)(lVar19 + (long)(int)uVar22 * 8 + 0x20);
            if (lVar18 == 0) {
              uStack_340._4_4_ = fVar38;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            uVar16 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar33 & 0xffffffff,
                                     uVar35 & 0xffffffff,lVar18,&uStack_348,&uStack_350,
                                     (long)&uStack_350 + 4,(long)&uStack_358 + 4,&uStack_358);
            if (((uVar16 & 1) != 0) && (ABS((float)uStack_350) < ABS(fVar31))) {
              auStack_284[0] = uStack_358._4_4_;
              uStack_274 = (undefined4)uStack_358;
              fStack_278 = uStack_350._4_4_;
              fVar38 = (float)uStack_350;
              uVar26 = uVar22;
              fVar31 = (float)uStack_350;
              lStack_270 = lVar18;
            }
            uVar22 = uVar22 + 1;
            uVar12 = *(uint *)(lVar19 + 0x18);
          } while ((int)uVar22 < (int)uVar12);
        }
        lVar19 = *(long *)(lVar25 + 0x30);
        uStack_340._4_4_ = fVar38;
        if (lVar19 == 0) {
          func_0x00f78af4();
        }
        else {
          uVar12 = *(uint *)(lVar19 + 0x18);
          if ((int)uVar12 < 1) {
            bVar21 = false;
            uVar22 = 0xffffffff;
          }
          else {
            uVar23 = 0;
            bVar21 = false;
            uVar22 = 0xffffffff;
            do {
              if (uVar12 <= uVar23) {
                uStack_340._4_4_ = fVar38;
                uVar20 = func_0x00f78b24();
                func_0x00f78ac0(uVar20,0);
                goto code_r0x014dc8b0;
              }
              lVar18 = *(long *)(lVar15 + 0x40);
              if (lVar18 == 0) {
code_r0x014dc758:
                uStack_340._4_4_ = fVar38;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              uVar16 = 0;
              uVar12 = *(uint *)(lVar19 + (long)(int)uVar23 * 4 + 0x20);
              lVar24 = (long)(int)uVar12;
              while( true ) {
                if (*(uint *)(lVar18 + 0x18) <= uVar12) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar24 * 8 + 0x20);
                if (lVar18 == 0) {
                  uStack_340._4_4_ = fVar38;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                lVar18 = *(long *)(lVar18 + 0x28);
                if (lVar18 == 0) {
                  uStack_340._4_4_ = fVar38;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if ((long)*(int *)(lVar18 + 0x18) <= (long)uVar16) break;
                lVar18 = *(long *)(lVar15 + 0x40);
                if (lVar18 == 0) {
                  uStack_340._4_4_ = fVar38;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar18 + 0x18) <= uVar12) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar24 * 8 + 0x20);
                if (lVar18 == 0) {
                  uStack_340._4_4_ = fVar38;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                lVar18 = *(long *)(lVar18 + 0x28);
                if (lVar18 == 0) {
                  uStack_340._4_4_ = fVar38;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar18 + 0x18) <= uVar16) {
                  uStack_340._4_4_ = fVar38;
                  uVar20 = func_0x00f78b24();
                  func_0x00f78ac0(uVar20,0);
                  goto code_r0x014dc8b0;
                }
                if (*(int *)(lVar18 + uVar16 * 4 + 0x20) == *(int *)(lVar25 + 0x10)) {
                  lVar18 = *(long *)(lVar15 + 0x40);
                  if (lVar18 == 0) {
                    uStack_340._4_4_ = fVar38;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  if (*(uint *)(lVar18 + 0x18) <= uVar12) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar24 * 8 + 0x20);
                  if (lVar18 == 0) {
                    uStack_340._4_4_ = fVar38;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  lVar18 = *(long *)(lVar18 + 0x40);
                  if (lVar18 == 0) {
                    uStack_340._4_4_ = fVar38;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  if (*(uint *)(lVar18 + 0x18) <= uVar16) {
                    uStack_340._4_4_ = fVar38;
                    uVar20 = func_0x00f78b24();
                    func_0x00f78ac0(uVar20,0);
                    goto code_r0x014dc8b0;
                  }
                  lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
                  if (lVar18 == 0) {
                    uStack_340._4_4_ = fVar38;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  uVar4 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar33 & 0xffffffff,
                                          uVar35 & 0xffffffff,lVar18,&uStack_348,&uStack_360,
                                          (long)&uStack_360 + 4,(long)&uStack_368 + 4,&uStack_368);
                  if (((uVar4 & 1) != 0) &&
                     (fVar37 = (float)uStack_360, ABS((float)uStack_360) < ABS(fVar31))) {
                    lVar18 = *(long *)(lVar15 + 0x40);
                    if (lVar18 == 0) {
                      uStack_340._4_4_ = (float)uStack_360;
                      func_0x00f78af4();
                      goto code_r0x014dc8b0;
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar12) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar24 * 8 + 0x20);
                    if (lVar18 == 0) {
                      uStack_340._4_4_ = fVar37;
                      func_0x00f78af4();
                      goto code_r0x014dc8b0;
                    }
                    lVar18 = *(long *)(lVar18 + 0x40);
                    if (lVar18 == 0) {
                      uStack_340._4_4_ = fVar37;
                      func_0x00f78af4();
                      goto code_r0x014dc8b0;
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar16) {
                      uStack_340._4_4_ = fVar37;
                      uVar20 = func_0x00f78b24();
                      func_0x00f78ac0(uVar20,0);
                      goto code_r0x014dc8b0;
                    }
                    lStack_270 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
                    auStack_284[0] = uStack_368._4_4_;
                    uStack_274 = (undefined4)uStack_368;
                    fStack_278 = uStack_360._4_4_;
                    bVar21 = true;
                    fVar38 = fVar37;
                    fVar31 = fVar37;
                    uVar22 = uVar12;
                  }
                }
                uVar16 = uVar16 + 1;
                lVar18 = *(long *)(lVar15 + 0x40);
                if (lVar18 == 0) goto code_r0x014dc758;
              }
              uVar23 = uVar23 + 1;
              uVar12 = *(uint *)(lVar19 + 0x18);
            } while ((int)uVar23 < (int)uVar12);
          }
          uStack_340._4_4_ = fVar38;
          if (bVar21) {
            lVar15 = *(long *)(lVar15 + 0x40);
            lStack_268 = lVar25;
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar22) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
          }
          else {
            lVar19 = *(long *)(lVar25 + 0x28);
            lStack_260 = lVar25;
            if (lVar19 == 0) {
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar26) {
              uVar20 = func_0x00f78b24();
              func_0x00f78ac0(uVar20,0);
              goto code_r0x014dc8b0;
            }
            lVar15 = *(long *)(lVar15 + 0x40);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            uVar22 = *(uint *)(lVar19 + (long)(int)uVar26 * 4 + 0x20);
            plVar14 = &lStack_268;
            if (*(uint *)(lVar15 + 0x18) <= uVar22) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
          }
          *plVar14 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar22 * 8 + 0x20);
          if ((fStack_278 < 20.0) || (lStack_270 != 0)) goto code_r0x014dc718;
          func_0x00f78af4();
        }
      }
code_r0x014dc8b0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
      (*pcVar2)();
    }
  }
  pfVar7 = (float *)func_0x00f78af4();
  pplVar3 = (long **)&stack0xffffffffffffff50;
  ppuVar27 = (undefined1 **)&stack0xffffffffffffff90;
  pfVar8 = pfVar5;
  uVar33 = param_2;
  uVar35 = unaff_d11;
  uVar4 = unaff_d12;
  uVar36 = unaff_d13;
  if (*(long *)(pfVar7 + 4) != 0) {
    uVar29 = (undefined4)param_3;
    uVar35 = param_3 & 0xffffffff;
    fVar38 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pfVar7 + 4),0);
    pfVar8 = extraout_x1;
    uVar4 = param_2 & 0xffffffff;
    uVar36 = extraout_d0_00 & 0xffffffff;
    if ((extraout_x1 != (float *)0x0) && (pfVar8 = extraout_x1, *(long *)(extraout_x1 + 4) != 0)) {
      lVar15 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(extraout_x1 + 4),0);
      fVar37 = *(float *)(lVar15 + 0x140);
      fVar34 = *(float *)(lVar15 + 0x144);
      fVar31 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar15 + 0x13c),fVar37,fVar34,0);
      param_4 = extraout_d0_00 & 0xffffffff;
      pfVar8 = (float *)/*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(fVar31 - fVar38,fVar37 - (float)uVar33,
                                        fVar34 - (float)param_3,param_4,param_2 & 0xffffffff,uVar29,
                                        pfVar7[0x1a],0);
      if ((int)pfVar8 == 0) {
        return pfVar8;
      }
      lVar15 = *(long *)(extraout_x1 + 0x24);
      param_7 = *(float **)(pfVar7 + 0x13);
      param_8 = (ulong)(uint)pfVar7[0x15];
      uVar35 = (ulong)(uint)fVar38;
      uVar33 = uVar33 & 0xffffffff;
      param_3 = param_3 & 0xffffffff;
      puVar28 = &Atlas_Gameplay_Usables_HomingProjectileLogic__CanSeeKart;
      pplVar3 = &plStack_60;
      pfVar8 = pfVar7;
      pfVar7 = param_5;
      ppuVar27 = &puStack_50;
      goto code_r0x015b64dc;
    }
  }
  unaff_d13 = uVar36;
  unaff_d12 = uVar4;
  unaff_d11 = uVar35;
  pfVar5 = pfVar8;
  puVar28 = &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
  pfVar8 = (float *)func_0x00f78af4();
  lVar15 = extraout_x1_00;
  uVar35 = extraout_d0_01;
code_r0x015b64dc:
  do {
    pfVar9 = pfVar8;
    *(ulong *)((long)pplVar3 + -0x60) = unaff_d11;
    *(ulong *)((long)pplVar3 + -0x58) = unaff_d10;
    *(ulong *)((long)pplVar3 + -0x50) = unaff_d9;
    *(ulong *)((long)pplVar3 + -0x48) = uVar16;
    *(undefined8 *)((long)pplVar3 + -0x40) = unaff_x24;
    *(undefined8 *)((long)pplVar3 + -0x38) = unaff_x23;
    *(float **)((long)pplVar3 + -0x30) = unaff_x22;
    *(undefined8 *)((long)pplVar3 + -0x28) = uVar20;
    *(float **)((long)pplVar3 + -0x20) = pfVar5;
    *(float **)((long)pplVar3 + -0x18) = pfVar7;
    *(undefined1 ***)((long)pplVar3 + -0x10) = ppuVar27;
    *(undefined **)((long)pplVar3 + -8) = puVar28;
    uVar39 = param_3 & 0xffffffff;
    uVar40 = uVar33 & 0xffffffff;
    unaff_x23 = 0x3eb5000;
    pfVar7 = param_7;
    uVar16 = param_8;
    uVar20 = param_9;
    uVar4 = uVar33;
    uVar36 = param_3;
    if ((bRam0000000003eb528c & 1) == 0) {
      func_0x00f78a20(&/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990);
      bRam0000000003eb528c = 1;
      uVar20 = param_9;
    }
    iVar10 = (int)uVar16;
    *(undefined8 *)((long)pplVar3 + -0x7c) = 0;
    *(undefined8 *)((long)pplVar3 + -0x84) = 0;
    *(undefined8 *)((long)pplVar3 + -0x98) = 0;
    *(undefined8 *)((long)pplVar3 + -0xa0) = 0;
    *(undefined8 *)((long)pplVar3 + -0x88) = 0;
    *(undefined8 *)((long)pplVar3 + -0x90) = 0;
    if (lVar15 != 0) {
      fVar38 = (float)/*Atlas.Gameplay.Usables.HomingProjectileLogic$$DistToTargetSquared*/ func_0x015b68ac(pfVar9,*(undefined8 *)(lVar15 + 0x10));
      fVar31 = (float)uVar36;
      if (*(long *)(pfVar9 + 0x18) != 0) {
        fVar37 = *(float *)(*(long *)(pfVar9 + 0x18) + 0x14);
        fVar37 = fVar37 * fVar37;
        if (fVar37 < fVar38) {
          return (float *)0x0;
        }
        uVar4 = (ulong)(uint)fVar37;
        if ((*(long *)(lVar15 + 0x10) != 0) &&
           (lVar25 = *(long *)(*(long *)(lVar15 + 0x10) + 0x18), lVar25 != 0)) {
          fVar38 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                    (lVar25,0);
          *(float *)((long)pplVar3 + -0x70) = fVar38 - (float)uVar35;
          *(float *)((long)pplVar3 + -0x6c) = fVar37 - (float)uVar33;
          *(float *)((long)pplVar3 + -0x68) = fVar31 - (float)param_3;
          uVar29 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)pplVar3 + -0x70),0);
          /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824((undefined1 *)((long)pplVar3 + -0x70),0);
          *(undefined8 *)((long)pplVar3 + -0xb8) = 0;
          *(undefined8 *)((long)pplVar3 + -0xb0) = 0;
          *(undefined8 *)((long)pplVar3 + -0xa8) = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(uVar35 & 0xffffffff,uVar33 & 0xffffffff,param_3 & 0xffffffff,
                          *(undefined4 *)((long)pplVar3 + -0x70),
                          *(undefined4 *)((long)pplVar3 + -0x6c),
                          *(undefined4 *)((long)pplVar3 + -0x68),
                          (undefined1 *)((long)pplVar3 + -0xb8),0);
          uVar20 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((ulong)param_7 & 0xffffffff,0);
          *(undefined8 *)((long)pplVar3 + -200) = *(undefined8 *)((long)pplVar3 + -0xb0);
          *(undefined8 *)((long)pplVar3 + -0xd0) = *(undefined8 *)((long)pplVar3 + -0xb8);
          *(undefined8 *)((long)pplVar3 + -0xc0) = *(undefined8 *)((long)pplVar3 + -0xa8);
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(uVar29,(undefined1 *)((long)pplVar3 + -0xd0),
                          (undefined1 *)((long)pplVar3 + -0xa0),uVar20,param_8,0);
          uVar20 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30((undefined1 *)((long)pplVar3 + -0xa0),0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          pfVar5 = (float *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar20,0,0);
          return pfVar5;
        }
      }
    }
    param_3 = uVar36;
    uVar33 = uVar4;
    pfVar5 = (float *)func_0x00f78af4();
    *(ulong *)((long)pplVar3 + -0x130) = unaff_d13;
    *(ulong *)((long)pplVar3 + -0x128) = unaff_d12;
    *(ulong *)((long)pplVar3 + -0x120) = unaff_d11;
    *(ulong *)((long)pplVar3 + -0x118) = uVar35 & 0xffffffff;
    *(ulong *)((long)pplVar3 + -0x110) = uVar40;
    *(ulong *)((long)pplVar3 + -0x108) = uVar39;
    *(float **)((long)pplVar3 + -0x100) = pfVar9;
    *(long *)((long)pplVar3 + -0xf8) = lVar15;
    *(float **)((long)pplVar3 + -0xf0) = param_7;
    *(ulong *)((long)pplVar3 + -0xe8) = param_8;
    *(undefined1 **)((long)pplVar3 + -0xe0) = (undefined1 *)((long)pplVar3 + -0x10);
    *(undefined **)((long)pplVar3 + -0xd8) =
         &Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget;
    ppuVar27 = (undefined1 **)((long)pplVar3 + -0xe0);
    fVar38 = (float)param_4;
    unaff_d11 = param_4 & 0xffffffff;
    fVar31 = (float)param_3;
    unaff_d9 = param_3 & 0xffffffff;
    fVar37 = (float)uVar33;
    uVar16 = uVar33 & 0xffffffff;
    unaff_d10 = extraout_d0_02 & 0xffffffff;
    *(undefined4 *)((long)pplVar3 + -0x138) = 0;
    *(undefined8 *)((long)pplVar3 + -0x140) = 0;
    *(undefined4 *)((long)pplVar3 + -0x144) = 0;
    fVar34 = pfVar5[0x22];
    unaff_d12 = (ulong)(uint)fVar34;
    param_9 = uVar20;
    if (iVar10 == 0) {
      pfVar8 = (float *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(pfVar5);
      if ((int)pfVar8 == 0) {
        return pfVar8;
      }
      if (*(long *)(pfVar5 + 0x18) != 0) {
        pfVar8 = (float *)(*(long *)(pfVar5 + 0x18) + 0x1c);
        goto code_r0x015b6708;
      }
    }
    else {
      lVar15 = *(long *)(pfVar5 + 0x18);
      if (extraout_w1 == 0) {
        if (lVar15 != 0) {
          pfVar8 = (float *)(lVar15 + 0x18);
          goto code_r0x015b6708;
        }
      }
      else if (lVar15 != 0) {
        pfVar8 = (float *)(lVar15 + 0x20);
code_r0x015b6708:
        pfVar5[0x22] = *pfVar8;
        uVar33 = (ulong)(uint)fVar34;
        uVar35 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(0);
        if ((uVar35 & 1) == 0) {
          pfVar5[0x23] = fVar38;
        }
        if (*(long *)(pfVar5 + 0x18) != 0) {
          param_3 = (ulong)(uint)((fVar38 - pfVar5[0x23]) /
                                 *(float *)(*(long *)(pfVar5 + 0x18) + 0x24));
          uVar33 = (ulong)(uint)pfVar5[0x22];
          fVar34 = (float)/*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(pfVar5[0x21],0);
          fVar30 = (float)param_3;
          fVar38 = (float)uVar33;
          pfVar5[0x21] = fVar34;
          if (*(long *)(pfVar5 + 4) != 0) {
            fVar34 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pfVar5 + 4),0);
            fVar34 = (float)extraout_d0_02 - fVar34;
            fVar31 = fVar31 - fVar30;
            if ((int)uVar20 == 0) {
              fVar38 = fVar37 - fVar38;
            }
            else {
              *(float *)((long)pplVar3 + -0x140) = fVar34;
              *(undefined4 *)((long)pplVar3 + -0x13c) = 0;
              *(float *)((long)pplVar3 + -0x138) = fVar31;
              fVar34 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)pplVar3 + -0x140),0);
              fVar31 = fVar30;
            }
            fVar37 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
            fVar32 = pfVar5[0x21];
            fVar30 = (float)_cosf(fVar37 * fVar32 * _UNK_033f850c);
            if (fVar31 * pfVar7[2] + fVar34 * *pfVar7 + fVar38 * pfVar7[1] < fVar30) {
              fVar31 = pfVar7[2];
              /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(0);
              /*UnityEngine.Quaternion$$Internal_ToAxisAngleRad*/ func_0x03251b5c((undefined1 *)((long)pplVar3 + -0x140),
                              (undefined1 *)((long)pplVar3 + -0x144),0);
              fVar34 = *(float *)((long)pplVar3 + -0x144) * _UNK_033f8818;
              *(float *)((long)pplVar3 + -0x144) = fVar34;
              fVar38 = _UNK_033f8818;
              /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
              *(float *)((long)pplVar3 + -0x150) = (fVar37 * fVar32) / fVar34;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(0);
              fVar34 = (float)/*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
            }
            *pfVar7 = fVar34;
            pfVar7[1] = fVar38;
            pfVar7[2] = fVar31;
            pfVar5 = (float *)/*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(pfVar7,0);
            return pfVar5;
          }
        }
      }
    }
    puVar28 = &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
    pfVar8 = (float *)func_0x00f78af4();
    param_7 = *(float **)(pfVar8 + 0x13);
    param_8 = (ulong)(uint)pfVar8[0x15];
    pplVar3 = (long **)((long)pplVar3 + -0x150);
    lVar15 = extraout_x1_01;
    unaff_x22 = pfVar9;
    uVar35 = extraout_d0_03;
  } while( true );
}



// ============================================================
// RVA: 0x15b638c | Atlas.Gameplay.Usables.HomingProjectileLogic.UpdateCoordAndWaypoint
// ============================================================

/* WARNING: Possible PIC construction at 0x014dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014dbed8) */
/* WARNING: Removing unreachable block (ram,0x014dbff8) */
/* WARNING: Removing unreachable block (ram,0x014dbee4) */
/* WARNING: Removing unreachable block (ram,0x014dbf00) */
/* WARNING: Removing unreachable block (ram,0x014dbf04) */
/* WARNING: Removing unreachable block (ram,0x014dbf34) */
/* WARNING: Removing unreachable block (ram,0x014dbf38) */
/* WARNING: Removing unreachable block (ram,0x014dbf44) */
/* WARNING: Removing unreachable block (ram,0x014dbf48) */
/* WARNING: Removing unreachable block (ram,0x014dbf78) */
/* WARNING: Removing unreachable block (ram,0x014dbf7c) */
/* WARNING: Removing unreachable block (ram,0x014dc000) */
/* WARNING: Removing unreachable block (ram,0x014dbf80) */
/* WARNING: Removing unreachable block (ram,0x014dbf88) */
/* WARNING: Removing unreachable block (ram,0x014dbf90) */
/* WARNING: Removing unreachable block (ram,0x014dbf9c) */
/* WARNING: Removing unreachable block (ram,0x014dbfa0) */
/* WARNING: Removing unreachable block (ram,0x014dbfa8) */
/* WARNING: Removing unreachable block (ram,0x014dc00c) */
/* WARNING: Removing unreachable block (ram,0x014dc020) */
/* WARNING: Removing unreachable block (ram,0x014dc02c) */
/* WARNING: Removing unreachable block (ram,0x014dc034) */
/* WARNING: Removing unreachable block (ram,0x014dbfb8) */
/* WARNING: Removing unreachable block (ram,0x014dbfc4) */
/* WARNING: Removing unreachable block (ram,0x014dbfe0) */
/* WARNING: Removing unreachable block (ram,0x014dc0c0) */
/* WARNING: Removing unreachable block (ram,0x014dbfe8) */
/* WARNING: Removing unreachable block (ram,0x014dc0cc) */
/* WARNING: Removing unreachable block (ram,0x014dbff0) */
/* WARNING: Removing unreachable block (ram,0x014dc03c) */
/* WARNING: Removing unreachable block (ram,0x014dc04c) */
/* WARNING: Removing unreachable block (ram,0x014dc054) */
/* WARNING: Removing unreachable block (ram,0x014dc070) */
/* WARNING: Removing unreachable block (ram,0x014dc094) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Atlas_Gameplay_Usables_HomingProjectileLogic__UpdateCoordAndWaypoint
                (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5,
                undefined8 param_6,float *param_7,ulong param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  float *unaff_x19;
  long lVar19;
  undefined8 unaff_x21;
  bool bVar20;
  uint uVar21;
  float *unaff_x22;
  uint uVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar23;
  long lVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined *puVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  uint uVar32;
  float fVar33;
  ulong uVar34;
  ulong uVar35;
  float fVar36;
  undefined8 uVar37;
  ulong unaff_d8;
  ulong uVar38;
  ulong unaff_d9;
  ulong uVar39;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 auStack_244 [3];
  float fStack_238;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_218;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if (*(long *)(param_5 + 0x10) != 0) {
    unaff_x19 = *(float **)(param_5 + 0x58);
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x10),0);
    fVar29 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    if ((*(long *)(param_5 + 0x60) != 0) && (unaff_x19 != (float *)0x0)) {
      fVar30 = *(float *)(param_5 + 0x90);
      uVar14 = (ulong)(uint)fVar30;
      plVar16 = (long *)(param_5 + 0x70);
      puVar1 = (undefined8 *)(param_5 + 0x2c);
      fVar36 = *(float *)(*(long *)(param_5 + 0x60) + 0x28);
      lStack_88 = *(long *)PTR_03a5d648;
      puVar11 = puVar1;
      plVar13 = plVar16;
      if ((bRam0000000003eb4bc1 & 1) == 0) {
        func_0x00f78a20(&uRam0000000003d57fb8);
        bRam0000000003eb4bc1 = 1;
      }
      unaff_x19[0x66] = fVar29;
      unaff_x19[0x67] = (float)param_2;
      unaff_x19[0x68] = (float)param_3;
      unaff_x19[0x69] = 1.0;
      unaff_x19[0x6f] = fVar36;
      uVar37 = *(undefined8 *)(param_5 + 0x78);
      lVar5 = *plVar16;
      unaff_x19[0x6e] = *(float *)(param_5 + 0x80);
      *(undefined8 *)(unaff_x19 + 0x6c) = uVar37;
      *(long *)(unaff_x19 + 0x6a) = lVar5;
      unaff_x19[0x70] = fVar30;
      uStack_b8 = *(undefined8 *)(unaff_x19 + 0x6a);
      uStack_c0 = *(undefined8 *)(unaff_x19 + 0x68);
      uStack_a8 = *(undefined8 *)(unaff_x19 + 0x6e);
      uStack_b0 = *(undefined8 *)(unaff_x19 + 0x6c);
      uStack_98 = *(undefined8 *)(unaff_x19 + 0x72);
      uStack_a0 = *(undefined8 *)(unaff_x19 + 0x70);
      uStack_90 = *(undefined8 *)(unaff_x19 + 0x74);
      uStack_f8 = *(undefined8 *)(unaff_x19 + 0x5a);
      uStack_100 = *(undefined8 *)(unaff_x19 + 0x58);
      uStack_e8 = *(undefined8 *)(unaff_x19 + 0x5e);
      uStack_f0 = *(undefined8 *)(unaff_x19 + 0x5c);
      uStack_d8 = *(undefined8 *)(unaff_x19 + 0x62);
      uStack_e0 = *(undefined8 *)(unaff_x19 + 0x60);
      uStack_c8 = *(undefined8 *)(unaff_x19 + 0x66);
      uStack_d0 = *(undefined8 *)(unaff_x19 + 100);
      uStack_138 = *(undefined8 *)(unaff_x19 + 0x4a);
      uStack_140 = *(undefined8 *)(unaff_x19 + 0x48);
      uStack_128 = *(undefined8 *)(unaff_x19 + 0x4e);
      uStack_130 = *(undefined8 *)(unaff_x19 + 0x4c);
      uStack_118 = *(undefined8 *)(unaff_x19 + 0x52);
      uStack_120 = *(undefined8 *)(unaff_x19 + 0x50);
      uStack_108 = *(undefined8 *)(unaff_x19 + 0x56);
      uStack_110 = *(undefined8 *)(unaff_x19 + 0x54);
      uStack_158 = *(undefined8 *)(unaff_x19 + 0x42);
      uStack_160 = *(undefined8 *)(unaff_x19 + 0x40);
      uStack_148 = *(undefined8 *)(unaff_x19 + 0x46);
      uStack_150 = *(undefined8 *)(unaff_x19 + 0x44);
      /*Unity.Jobs.IJobExtensions$$Run<RaceSplineCoordsAndPointOnTrackJob>*/ func_0x0185e800(&uStack_160,uRam0000000003d57fb8);
      pcVar15 = *(char **)(unaff_x19 + 0x72);
      cVar2 = *pcVar15;
      uVar28 = *(undefined4 *)(pcVar15 + 0xc);
      uVar32 = *(uint *)(pcVar15 + 0x24);
      uVar8 = (ulong)uVar32;
      uStack_150 = *(undefined8 *)(pcVar15 + 0x38);
      uStack_158 = *(undefined8 *)(pcVar15 + 0x30);
      uStack_160 = *(undefined8 *)(pcVar15 + 0x28);
      uVar37 = *(undefined8 *)(pcVar15 + 0x14);
      uStack_178 = (undefined4)uStack_158;
      uStack_174 = (undefined4)((ulong)uStack_158 >> 0x20);
      uStack_17c = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_170 = (undefined4)uStack_150;
      uStack_16c = (undefined4)((ulong)uStack_150 >> 0x20);
      uVar34 = *(ulong *)(pcVar15 + 0x1c);
      *puVar1 = *(undefined8 *)(pcVar15 + 4);
      *(undefined4 *)(param_5 + 0x34) = uVar28;
      *(undefined8 *)(param_5 + 0x38) = uVar37;
      *(ulong *)(param_5 + 0x78) = CONCAT44(uStack_170,uStack_174);
      *plVar16 = CONCAT44(uStack_178,uStack_17c);
      *(undefined4 *)(param_5 + 0x80) = uStack_16c;
      *(ulong *)(param_5 + 0x40) = uVar34;
      *(uint *)(param_5 + 0x48) = uVar32;
      if (*(long *)PTR_03a5d648 == lStack_88) {
        return (ulong)(cVar2 != '\0');
      }
      lVar5 = ___stack_chk_fail((ulong)(cVar2 != '\0'));
      uStack_218 = uVar14;
      if ((bRam0000000003eb4bc2 & 1) == 0) {
        func_0x00f78a20(0x3d3ba08);
        func_0x00f78a20(&/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8);
        bRam0000000003eb4bc2 = 1;
      }
      lStack_228 = 0;
      lStack_220 = 0;
      lStack_230 = 0;
      fStack_238 = 0.0;
      auStack_244[0] = 0;
      uVar28 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
      *puVar11 = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
      *(undefined4 *)(puVar11 + 1) = uVar28;
      plVar16 = &lStack_220;
      if ((bRam0000000003eb4bc4 & 1) == 0) {
        func_0x00f78a20(0x3d3ba08);
        func_0x00f78a20(&/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0);
        func_0x00f78a20(&/*Unity.Mathematics.float2_TypeInfo*/ uRam0000000003d265d0);
        bRam0000000003eb4bc4 = 1;
      }
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar37 = **(undefined8 **)(/*Atlas.Gameplay.RaceSplineRootBehaviour_TypeInfo*/ lRam0000000003d240a0 + 0xb8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar37,0);
      lVar24 = plVar13[2];
      if (lVar24 == 0) {
        lVar24 = /*Atlas.Gameplay.RaceSplineRootBehaviour$$FindClosestKnot*/ func_0x014dce18(extraout_d0 & 0xffffffff,uVar8 & 0xffffffff,uVar34 & 0xffffffff,
                                 lVar5);
      }
      uStack_300._4_4_ = 3.4028235e+38;
      lStack_230 = *plVar13;
      lStack_220 = 0;
      lStack_228 = 0;
      auStack_244[0] = 0xffffffff;
      uStack_234 = 0xffffffff;
      fStack_238 = 0.0;
      if (*plVar13 != 0) {
        lStack_228 = plVar13[2];
        lStack_220 = plVar13[1];
        if (*plVar13 == 0) {
          func_0x00f78af4();
        }
        else {
          /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar8 & 0xffffffff,uVar34 & 0xffffffff,*plVar13,
                          &uStack_308,(long)&uStack_300 + 4,&fStack_238,auStack_244,&uStack_234);
          if ((fStack_238 < 20.0) || (lStack_230 != 0)) goto code_r0x014dc718;
          func_0x00f78af4();
        }
        goto code_r0x014dc8b0;
      }
      if (lVar24 == 0) {
code_r0x014dc718:
        uVar14 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar37,0);
        return uVar14;
      }
      lVar19 = *(long *)(lVar24 + 0x40);
      if (lVar19 == 0) {
        func_0x00f78af4();
      }
      else {
        fVar30 = 3.4028235e+38;
        uVar32 = *(uint *)(lVar19 + 0x18);
        fVar29 = uStack_300._4_4_;
        if ((int)uVar32 < 1) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          uVar21 = 0;
          do {
            if (uVar32 <= uVar21) {
              uStack_300._4_4_ = fVar29;
              uVar37 = func_0x00f78b24();
              func_0x00f78ac0(uVar37,0);
              goto code_r0x014dc8b0;
            }
            lVar18 = *(long *)(lVar19 + (long)(int)uVar21 * 8 + 0x20);
            if (lVar18 == 0) {
              uStack_300._4_4_ = fVar29;
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            uVar14 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar8 & 0xffffffff,uVar34 & 0xffffffff
                                     ,lVar18,&uStack_308,&uStack_310,(long)&uStack_310 + 4,
                                     (long)&uStack_318 + 4,&uStack_318);
            if (((uVar14 & 1) != 0) && (ABS((float)uStack_310) < ABS(fVar30))) {
              auStack_244[0] = uStack_318._4_4_;
              uStack_234 = (undefined4)uStack_318;
              fStack_238 = uStack_310._4_4_;
              fVar29 = (float)uStack_310;
              uVar25 = uVar21;
              fVar30 = (float)uStack_310;
              lStack_230 = lVar18;
            }
            uVar21 = uVar21 + 1;
            uVar32 = *(uint *)(lVar19 + 0x18);
          } while ((int)uVar21 < (int)uVar32);
        }
        lVar19 = *(long *)(lVar24 + 0x30);
        uStack_300._4_4_ = fVar29;
        if (lVar19 == 0) {
          func_0x00f78af4();
        }
        else {
          uVar32 = *(uint *)(lVar19 + 0x18);
          if ((int)uVar32 < 1) {
            bVar20 = false;
            uVar21 = 0xffffffff;
          }
          else {
            uVar22 = 0;
            bVar20 = false;
            uVar21 = 0xffffffff;
            do {
              if (uVar32 <= uVar22) {
                uStack_300._4_4_ = fVar29;
                uVar37 = func_0x00f78b24();
                func_0x00f78ac0(uVar37,0);
                goto code_r0x014dc8b0;
              }
              lVar18 = *(long *)(lVar5 + 0x40);
              if (lVar18 == 0) {
code_r0x014dc758:
                uStack_300._4_4_ = fVar29;
                func_0x00f78af4();
                goto code_r0x014dc8b0;
              }
              uVar14 = 0;
              uVar32 = *(uint *)(lVar19 + (long)(int)uVar22 * 4 + 0x20);
              lVar23 = (long)(int)uVar32;
              while( true ) {
                if (*(uint *)(lVar18 + 0x18) <= uVar32) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar23 * 8 + 0x20);
                if (lVar18 == 0) {
                  uStack_300._4_4_ = fVar29;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                lVar18 = *(long *)(lVar18 + 0x28);
                if (lVar18 == 0) {
                  uStack_300._4_4_ = fVar29;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if ((long)*(int *)(lVar18 + 0x18) <= (long)uVar14) break;
                lVar18 = *(long *)(lVar5 + 0x40);
                if (lVar18 == 0) {
                  uStack_300._4_4_ = fVar29;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar18 + 0x18) <= uVar32) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar23 * 8 + 0x20);
                if (lVar18 == 0) {
                  uStack_300._4_4_ = fVar29;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                lVar18 = *(long *)(lVar18 + 0x28);
                if (lVar18 == 0) {
                  uStack_300._4_4_ = fVar29;
                  func_0x00f78af4();
                  goto code_r0x014dc8b0;
                }
                if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                  uStack_300._4_4_ = fVar29;
                  uVar37 = func_0x00f78b24();
                  func_0x00f78ac0(uVar37,0);
                  goto code_r0x014dc8b0;
                }
                if (*(int *)(lVar18 + uVar14 * 4 + 0x20) == *(int *)(lVar24 + 0x10)) {
                  lVar18 = *(long *)(lVar5 + 0x40);
                  if (lVar18 == 0) {
                    uStack_300._4_4_ = fVar29;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  if (*(uint *)(lVar18 + 0x18) <= uVar32) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar23 * 8 + 0x20);
                  if (lVar18 == 0) {
                    uStack_300._4_4_ = fVar29;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  lVar18 = *(long *)(lVar18 + 0x40);
                  if (lVar18 == 0) {
                    uStack_300._4_4_ = fVar29;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    uStack_300._4_4_ = fVar29;
                    uVar37 = func_0x00f78b24();
                    func_0x00f78ac0(uVar37,0);
                    goto code_r0x014dc8b0;
                  }
                  lVar18 = *(long *)(lVar18 + uVar14 * 8 + 0x20);
                  if (lVar18 == 0) {
                    uStack_300._4_4_ = fVar29;
                    func_0x00f78af4();
                    goto code_r0x014dc8b0;
                  }
                  uVar6 = /*RacePolyLine$$TryGetClosestPoint*/ func_0x014d836c(extraout_d0 & 0xffffffff,uVar8 & 0xffffffff,
                                          uVar34 & 0xffffffff,lVar18,&uStack_308,&uStack_320,
                                          (long)&uStack_320 + 4,(long)&uStack_328 + 4,&uStack_328);
                  if (((uVar6 & 1) != 0) &&
                     (fVar36 = (float)uStack_320, ABS((float)uStack_320) < ABS(fVar30))) {
                    lVar18 = *(long *)(lVar5 + 0x40);
                    if (lVar18 == 0) {
                      uStack_300._4_4_ = (float)uStack_320;
                      func_0x00f78af4();
                      goto code_r0x014dc8b0;
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar32) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + lVar23 * 8 + 0x20);
                    if (lVar18 == 0) {
                      uStack_300._4_4_ = fVar36;
                      func_0x00f78af4();
                      goto code_r0x014dc8b0;
                    }
                    lVar18 = *(long *)(lVar18 + 0x40);
                    if (lVar18 == 0) {
                      uStack_300._4_4_ = fVar36;
                      func_0x00f78af4();
                      goto code_r0x014dc8b0;
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                      uStack_300._4_4_ = fVar36;
                      uVar37 = func_0x00f78b24();
                      func_0x00f78ac0(uVar37,0);
                      goto code_r0x014dc8b0;
                    }
                    lStack_230 = *(long *)(lVar18 + uVar14 * 8 + 0x20);
                    auStack_244[0] = uStack_328._4_4_;
                    uStack_234 = (undefined4)uStack_328;
                    fStack_238 = uStack_320._4_4_;
                    bVar20 = true;
                    fVar29 = fVar36;
                    fVar30 = fVar36;
                    uVar21 = uVar32;
                  }
                }
                uVar14 = uVar14 + 1;
                lVar18 = *(long *)(lVar5 + 0x40);
                if (lVar18 == 0) goto code_r0x014dc758;
              }
              uVar22 = uVar22 + 1;
              uVar32 = *(uint *)(lVar19 + 0x18);
            } while ((int)uVar22 < (int)uVar32);
          }
          uStack_300._4_4_ = fVar29;
          if (bVar20) {
            lVar5 = *(long *)(lVar5 + 0x40);
            lStack_228 = lVar24;
            if (lVar5 == 0) {
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar21) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
          }
          else {
            lVar19 = *(long *)(lVar24 + 0x28);
            lStack_220 = lVar24;
            if (lVar19 == 0) {
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar25) {
              uVar37 = func_0x00f78b24();
              func_0x00f78ac0(uVar37,0);
              goto code_r0x014dc8b0;
            }
            lVar5 = *(long *)(lVar5 + 0x40);
            if (lVar5 == 0) {
              func_0x00f78af4();
              goto code_r0x014dc8b0;
            }
            uVar21 = *(uint *)(lVar19 + (long)(int)uVar25 * 4 + 0x20);
            plVar16 = &lStack_228;
            if (*(uint *)(lVar5 + 0x18) <= uVar21) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
          }
          *plVar16 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar21 * 8 + 0x20);
          if ((fStack_238 < 20.0) || (lStack_230 != 0)) goto code_r0x014dc718;
          func_0x00f78af4();
        }
      }
code_r0x014dc8b0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x14dc8b4);
      (*pcVar3)();
    }
  }
  pfVar7 = (float *)func_0x00f78af4();
  puVar4 = &stack0xffffffffffffff90;
  puVar26 = &stack0xffffffffffffffd0;
  lVar5 = param_5;
  uVar14 = param_2;
  uVar8 = unaff_d11;
  uVar34 = unaff_d12;
  uVar6 = unaff_d13;
  if (*(long *)(pfVar7 + 4) != 0) {
    uVar28 = (undefined4)param_3;
    uVar8 = param_3 & 0xffffffff;
    fVar29 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pfVar7 + 4),0);
    lVar5 = extraout_x1;
    uVar34 = param_2 & 0xffffffff;
    uVar6 = extraout_d0_00 & 0xffffffff;
    if ((extraout_x1 != 0) && (lVar5 = extraout_x1, *(long *)(extraout_x1 + 0x10) != 0)) {
      lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(extraout_x1 + 0x10),0);
      fVar36 = *(float *)(lVar5 + 0x140);
      fVar33 = *(float *)(lVar5 + 0x144);
      fVar30 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),fVar36,fVar33,0);
      param_4 = extraout_d0_00 & 0xffffffff;
      uVar8 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(fVar30 - fVar29,fVar36 - (float)uVar14,fVar33 - (float)param_3,param_4
                              ,param_2 & 0xffffffff,uVar28,pfVar7[0x1a],0);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      lVar5 = *(long *)(extraout_x1 + 0x90);
      param_7 = *(float **)(pfVar7 + 0x13);
      param_8 = (ulong)(uint)pfVar7[0x15];
      uVar8 = (ulong)(uint)fVar29;
      uVar14 = uVar14 & 0xffffffff;
      param_3 = param_3 & 0xffffffff;
      puVar27 = &Atlas_Gameplay_Usables_HomingProjectileLogic__CanSeeKart;
      puVar4 = &stack0xffffffffffffffe0;
      pfVar10 = pfVar7;
      pfVar7 = unaff_x19;
      puVar26 = &stack0xfffffffffffffff0;
      goto code_r0x015b64dc;
    }
  }
  unaff_d13 = uVar6;
  unaff_d12 = uVar34;
  unaff_d11 = uVar8;
  param_5 = lVar5;
  puVar27 = &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
  pfVar10 = (float *)func_0x00f78af4();
  lVar5 = extraout_x1_00;
  uVar8 = extraout_d0_01;
code_r0x015b64dc:
  do {
    pfVar9 = pfVar10;
    *(ulong *)(puVar4 + -0x60) = unaff_d11;
    *(ulong *)(puVar4 + -0x58) = unaff_d10;
    *(ulong *)(puVar4 + -0x50) = unaff_d9;
    *(ulong *)(puVar4 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
    *(float **)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = param_5;
    *(float **)(puVar4 + -0x18) = pfVar7;
    *(undefined1 **)(puVar4 + -0x10) = puVar26;
    *(undefined **)(puVar4 + -8) = puVar27;
    uVar38 = param_3 & 0xffffffff;
    uVar39 = uVar14 & 0xffffffff;
    unaff_x23 = 0x3eb5000;
    pfVar7 = param_7;
    uVar34 = param_8;
    unaff_x21 = param_9;
    uVar6 = uVar14;
    uVar35 = param_3;
    if ((bRam0000000003eb528c & 1) == 0) {
      func_0x00f78a20(&/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990);
      bRam0000000003eb528c = 1;
      unaff_x21 = param_9;
    }
    iVar12 = (int)uVar34;
    *(undefined8 *)(puVar4 + -0x7c) = 0;
    *(undefined8 *)(puVar4 + -0x84) = 0;
    *(undefined8 *)(puVar4 + -0x98) = 0;
    *(undefined8 *)(puVar4 + -0xa0) = 0;
    *(undefined8 *)(puVar4 + -0x88) = 0;
    *(undefined8 *)(puVar4 + -0x90) = 0;
    if (lVar5 != 0) {
      fVar29 = (float)/*Atlas.Gameplay.Usables.HomingProjectileLogic$$DistToTargetSquared*/ func_0x015b68ac(pfVar9,*(undefined8 *)(lVar5 + 0x10));
      fVar30 = (float)uVar35;
      if (*(long *)(pfVar9 + 0x18) != 0) {
        fVar36 = *(float *)(*(long *)(pfVar9 + 0x18) + 0x14);
        fVar36 = fVar36 * fVar36;
        if (fVar36 < fVar29) {
          return 0;
        }
        uVar6 = (ulong)(uint)fVar36;
        if ((*(long *)(lVar5 + 0x10) != 0) &&
           (lVar24 = *(long *)(*(long *)(lVar5 + 0x10) + 0x18), lVar24 != 0)) {
          fVar29 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                    (lVar24,0);
          *(float *)(puVar4 + -0x70) = fVar29 - (float)uVar8;
          *(float *)(puVar4 + -0x6c) = fVar36 - (float)uVar14;
          *(float *)(puVar4 + -0x68) = fVar30 - (float)param_3;
          uVar28 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar4 + -0x70,0);
          /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(puVar4 + -0x70,0);
          *(undefined8 *)(puVar4 + -0xb8) = 0;
          *(undefined8 *)(puVar4 + -0xb0) = 0;
          *(undefined8 *)(puVar4 + -0xa8) = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(uVar8 & 0xffffffff,uVar14 & 0xffffffff,param_3 & 0xffffffff,
                          *(undefined4 *)(puVar4 + -0x70),*(undefined4 *)(puVar4 + -0x6c),
                          *(undefined4 *)(puVar4 + -0x68),puVar4 + -0xb8,0);
          uVar37 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((ulong)param_7 & 0xffffffff,0);
          *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -0xb0);
          *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xb8);
          *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xa8);
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(uVar28,puVar4 + -0xd0,puVar4 + -0xa0,uVar37,param_8,0);
          uVar37 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(puVar4 + -0xa0,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar37,0,0);
          return uVar14;
        }
      }
    }
    param_3 = uVar35;
    uVar14 = uVar6;
    param_5 = func_0x00f78af4();
    *(ulong *)(puVar4 + -0x130) = unaff_d13;
    *(ulong *)(puVar4 + -0x128) = unaff_d12;
    *(ulong *)(puVar4 + -0x120) = unaff_d11;
    *(ulong *)(puVar4 + -0x118) = uVar8 & 0xffffffff;
    *(ulong *)(puVar4 + -0x110) = uVar39;
    *(ulong *)(puVar4 + -0x108) = uVar38;
    *(float **)(puVar4 + -0x100) = pfVar9;
    *(long *)(puVar4 + -0xf8) = lVar5;
    *(float **)(puVar4 + -0xf0) = param_7;
    *(ulong *)(puVar4 + -0xe8) = param_8;
    *(undefined1 **)(puVar4 + -0xe0) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0xd8) = &Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget;
    puVar26 = puVar4 + -0xe0;
    fVar29 = (float)param_4;
    unaff_d11 = param_4 & 0xffffffff;
    fVar30 = (float)param_3;
    unaff_d9 = param_3 & 0xffffffff;
    fVar36 = (float)uVar14;
    unaff_d8 = uVar14 & 0xffffffff;
    unaff_d10 = extraout_d0_02 & 0xffffffff;
    *(undefined4 *)(puVar4 + -0x138) = 0;
    *(undefined8 *)(puVar4 + -0x140) = 0;
    *(undefined4 *)(puVar4 + -0x144) = 0;
    uVar32 = *(uint *)(param_5 + 0x88);
    unaff_d12 = (ulong)uVar32;
    param_9 = unaff_x21;
    if (iVar12 == 0) {
      uVar8 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(param_5);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (*(long *)(param_5 + 0x60) != 0) {
        puVar17 = (undefined4 *)(*(long *)(param_5 + 0x60) + 0x1c);
        goto code_r0x015b6708;
      }
    }
    else {
      lVar5 = *(long *)(param_5 + 0x60);
      if (extraout_w1 == 0) {
        if (lVar5 != 0) {
          puVar17 = (undefined4 *)(lVar5 + 0x18);
          goto code_r0x015b6708;
        }
      }
      else if (lVar5 != 0) {
        puVar17 = (undefined4 *)(lVar5 + 0x20);
code_r0x015b6708:
        *(undefined4 *)(param_5 + 0x88) = *puVar17;
        uVar14 = (ulong)uVar32;
        uVar8 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(0);
        if ((uVar8 & 1) == 0) {
          *(float *)(param_5 + 0x8c) = fVar29;
        }
        if (*(long *)(param_5 + 0x60) != 0) {
          param_3 = (ulong)(uint)((fVar29 - *(float *)(param_5 + 0x8c)) /
                                 *(float *)(*(long *)(param_5 + 0x60) + 0x24));
          uVar14 = (ulong)*(uint *)(param_5 + 0x88);
          uVar28 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(*(undefined4 *)(param_5 + 0x84),0);
          fVar33 = (float)param_3;
          fVar29 = (float)uVar14;
          *(undefined4 *)(param_5 + 0x84) = uVar28;
          if (*(long *)(param_5 + 0x10) != 0) {
            fVar31 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x10),0);
            fVar31 = (float)extraout_d0_02 - fVar31;
            fVar30 = fVar30 - fVar33;
            if ((int)unaff_x21 == 0) {
              fVar29 = fVar36 - fVar29;
            }
            else {
              *(float *)(puVar4 + -0x140) = fVar31;
              *(undefined4 *)(puVar4 + -0x13c) = 0;
              *(float *)(puVar4 + -0x138) = fVar30;
              fVar31 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(puVar4 + -0x140,0);
              fVar30 = fVar33;
            }
            fVar36 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
            fVar36 = fVar36 * *(float *)(param_5 + 0x84);
            fVar33 = (float)_cosf(fVar36 * _UNK_033f850c);
            if (fVar30 * pfVar7[2] + fVar31 * *pfVar7 + fVar29 * pfVar7[1] < fVar33) {
              fVar30 = pfVar7[2];
              /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(0);
              /*UnityEngine.Quaternion$$Internal_ToAxisAngleRad*/ func_0x03251b5c(puVar4 + -0x140,puVar4 + -0x144,0);
              fVar33 = *(float *)(puVar4 + -0x144) * _UNK_033f8818;
              *(float *)(puVar4 + -0x144) = fVar33;
              fVar29 = _UNK_033f8818;
              /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
              *(float *)(puVar4 + -0x150) = fVar36 / fVar33;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(0);
              fVar31 = (float)/*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
            }
            *pfVar7 = fVar31;
            pfVar7[1] = fVar29;
            pfVar7[2] = fVar30;
            uVar14 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(pfVar7,0);
            return uVar14;
          }
        }
      }
    }
    puVar27 = &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
    pfVar10 = (float *)func_0x00f78af4();
    param_7 = *(float **)(pfVar10 + 0x13);
    param_8 = (ulong)(uint)pfVar10[0x15];
    puVar4 = puVar4 + -0x150;
    lVar5 = extraout_x1_01;
    unaff_x22 = pfVar9;
    uVar8 = extraout_d0_03;
  } while( true );
}



// ============================================================
// RVA: 0x15b63f4 | Atlas.Gameplay.Usables.HomingProjectileLogic.CanSeeKart
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Gameplay_Usables_HomingProjectileLogic__CanSeeKart
          (float param_1,float param_2,float param_3,float param_4,float *param_5,long param_6,
          float *param_7,ulong param_8,undefined8 param_9)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  float *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  float *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  
  puVar2 = &stack0xffffffffffffffb0;
  puVar12 = &stack0xfffffffffffffff0;
  lVar3 = unaff_x20;
  fVar17 = param_2;
  fVar19 = param_3;
  uVar7 = unaff_d11;
  uVar10 = unaff_d12;
  uVar1 = unaff_d13;
  if (*(long *)(param_5 + 4) != 0) {
    fVar13 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 4),0);
    lVar3 = param_6;
    uVar7 = (ulong)(uint)param_3;
    uVar10 = (ulong)(uint)param_2;
    uVar1 = (ulong)(uint)param_1;
    if ((param_6 != 0) && (*(long *)(param_6 + 0x10) != 0)) {
      lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_6 + 0x10),0);
      fVar16 = *(float *)(lVar3 + 0x140);
      fVar18 = *(float *)(lVar3 + 0x144);
      fVar14 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x13c),fVar16,fVar18,0);
      uVar4 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(fVar14 - fVar13,fVar16 - fVar17,fVar18 - fVar19,param_1,param_2,
                              param_3,param_5[0x1a],0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      lVar3 = *(long *)(param_6 + 0x90);
      param_7 = *(float **)(param_5 + 0x13);
      param_8 = (ulong)(uint)param_5[0x15];
      uVar7 = (ulong)(uint)fVar13;
      puVar2 = (undefined1 *)register0x00000008;
      pfVar8 = param_5;
      param_5 = unaff_x19;
      puVar12 = unaff_x29;
      goto code_r0x015b64dc;
    }
  }
  unaff_d13 = uVar1;
  unaff_d12 = uVar10;
  unaff_d11 = uVar7;
  param_1 = param_4;
  unaff_x20 = lVar3;
  unaff_x30 = &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
  pfVar8 = (float *)func_0x00f78af4();
  lVar3 = extraout_x1;
  uVar7 = extraout_d0;
code_r0x015b64dc:
  do {
    pfVar5 = pfVar8;
    *(ulong *)(puVar2 + -0x60) = unaff_d11;
    *(ulong *)(puVar2 + -0x58) = unaff_d10;
    *(ulong *)(puVar2 + -0x50) = unaff_d9;
    *(ulong *)(puVar2 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(float **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(float **)(puVar2 + -0x18) = param_5;
    *(undefined1 **)(puVar2 + -0x10) = puVar12;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    unaff_x23 = 0x3eb5000;
    param_5 = param_7;
    uVar10 = param_8;
    unaff_x21 = param_9;
    fVar14 = fVar17;
    fVar13 = fVar19;
    fVar16 = param_1;
    if ((bRam0000000003eb528c & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb528c = 1;
      unaff_x21 = param_9;
      fVar16 = param_1;
    }
    iVar9 = (int)uVar10;
    *(undefined8 *)(puVar2 + -0x7c) = 0;
    *(undefined8 *)(puVar2 + -0x84) = 0;
    *(undefined8 *)(puVar2 + -0x98) = 0;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined8 *)(puVar2 + -0x88) = 0;
    *(undefined8 *)(puVar2 + -0x90) = 0;
    if (lVar3 != 0) {
      fVar18 = (float)/*Atlas.Gameplay.Usables.HomingProjectileLogic$$DistToTargetSquared*/ func_0x015b68ac(pfVar5,*(undefined8 *)(lVar3 + 0x10));
      if (*(long *)(pfVar5 + 0x18) != 0) {
        fVar14 = *(float *)(*(long *)(pfVar5 + 0x18) + 0x14);
        fVar14 = fVar14 * fVar14;
        if (fVar14 < fVar18) {
          return 0;
        }
        if ((*(long *)(lVar3 + 0x10) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x18), lVar6 != 0)) {
          fVar16 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                    (lVar6,0);
          *(float *)(puVar2 + -0x70) = fVar16 - (float)uVar7;
          *(float *)(puVar2 + -0x6c) = fVar14 - fVar17;
          *(float *)(puVar2 + -0x68) = fVar13 - fVar19;
          uVar15 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar2 + -0x70,0);
          /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(puVar2 + -0x70,0);
          *(undefined8 *)(puVar2 + -0xb8) = 0;
          *(undefined8 *)(puVar2 + -0xb0) = 0;
          *(undefined8 *)(puVar2 + -0xa8) = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(uVar7 & 0xffffffff,fVar17,fVar19,*(undefined4 *)(puVar2 + -0x70),
                          *(undefined4 *)(puVar2 + -0x6c),*(undefined4 *)(puVar2 + -0x68),
                          puVar2 + -0xb8,0);
          uVar4 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((ulong)param_7 & 0xffffffff,0);
          *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(puVar2 + -0xb0);
          *(undefined8 *)(puVar2 + -0xd0) = *(undefined8 *)(puVar2 + -0xb8);
          *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)(puVar2 + -0xa8);
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(uVar15,puVar2 + -0xd0,puVar2 + -0xa0,uVar4,param_8,0);
          uVar4 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(puVar2 + -0xa0,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
          return uVar4;
        }
      }
    }
    unaff_x20 = func_0x00f78af4();
    *(ulong *)(puVar2 + -0x130) = unaff_d13;
    *(ulong *)(puVar2 + -0x128) = unaff_d12;
    *(ulong *)(puVar2 + -0x120) = unaff_d11;
    *(ulong *)(puVar2 + -0x118) = uVar7 & 0xffffffff;
    *(ulong *)(puVar2 + -0x110) = (ulong)(uint)fVar17;
    *(ulong *)(puVar2 + -0x108) = (ulong)(uint)fVar19;
    *(float **)(puVar2 + -0x100) = pfVar5;
    *(long *)(puVar2 + -0xf8) = lVar3;
    *(float **)(puVar2 + -0xf0) = param_7;
    *(ulong *)(puVar2 + -0xe8) = param_8;
    *(undefined1 **)(puVar2 + -0xe0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xd8) = &Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget;
    puVar12 = puVar2 + -0xe0;
    unaff_d11 = (ulong)(uint)fVar16;
    unaff_d9 = (ulong)(uint)fVar13;
    unaff_d8 = (ulong)(uint)fVar14;
    unaff_d10 = extraout_d0_00 & 0xffffffff;
    *(undefined4 *)(puVar2 + -0x138) = 0;
    *(undefined8 *)(puVar2 + -0x140) = 0;
    *(undefined4 *)(puVar2 + -0x144) = 0;
    fVar18 = *(float *)(unaff_x20 + 0x88);
    unaff_d12 = (ulong)(uint)fVar18;
    param_9 = unaff_x21;
    fVar17 = fVar14;
    fVar19 = fVar13;
    param_1 = fVar16;
    if (iVar9 == 0) {
      uVar4 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(unaff_x20);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        puVar11 = (undefined4 *)(*(long *)(unaff_x20 + 0x60) + 0x1c);
        goto code_r0x015b6708;
      }
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x60);
      if (extraout_w1 == 0) {
        if (lVar3 != 0) {
          puVar11 = (undefined4 *)(lVar3 + 0x18);
          goto code_r0x015b6708;
        }
      }
      else if (lVar3 != 0) {
        puVar11 = (undefined4 *)(lVar3 + 0x20);
code_r0x015b6708:
        *(undefined4 *)(unaff_x20 + 0x88) = *puVar11;
        uVar7 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(0);
        if ((uVar7 & 1) == 0) {
          *(float *)(unaff_x20 + 0x8c) = fVar16;
        }
        fVar17 = fVar18;
        if (*(long *)(unaff_x20 + 0x60) != 0) {
          fVar19 = (fVar16 - *(float *)(unaff_x20 + 0x8c)) /
                   *(float *)(*(long *)(unaff_x20 + 0x60) + 0x24);
          fVar17 = *(float *)(unaff_x20 + 0x88);
          uVar15 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(*(undefined4 *)(unaff_x20 + 0x84),0);
          *(undefined4 *)(unaff_x20 + 0x84) = uVar15;
          if (*(long *)(unaff_x20 + 0x10) != 0) {
            fVar16 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(unaff_x20 + 0x10),0);
            fVar16 = (float)extraout_d0_00 - fVar16;
            fVar13 = fVar13 - fVar19;
            if ((int)unaff_x21 == 0) {
              fVar17 = fVar14 - fVar17;
            }
            else {
              *(float *)(puVar2 + -0x140) = fVar16;
              *(undefined4 *)(puVar2 + -0x13c) = 0;
              *(float *)(puVar2 + -0x138) = fVar13;
              fVar16 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(puVar2 + -0x140,0);
              fVar13 = fVar19;
            }
            fVar19 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
            fVar19 = fVar19 * *(float *)(unaff_x20 + 0x84);
            fVar14 = (float)_cosf(fVar19 * _UNK_033f850c);
            fVar18 = param_5[2];
            if (fVar13 * fVar18 + fVar16 * *param_5 + fVar17 * param_5[1] < fVar14) {
              /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(0);
              /*UnityEngine.Quaternion$$Internal_ToAxisAngleRad*/ func_0x03251b5c(puVar2 + -0x140,puVar2 + -0x144,0);
              fVar13 = *(float *)(puVar2 + -0x144) * _UNK_033f8818;
              *(float *)(puVar2 + -0x144) = fVar13;
              fVar17 = _UNK_033f8818;
              /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
              *(float *)(puVar2 + -0x150) = fVar19 / fVar13;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(0);
              fVar16 = (float)/*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
              fVar13 = fVar18;
            }
            *param_5 = fVar16;
            param_5[1] = fVar17;
            param_5[2] = fVar13;
            uVar4 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(param_5,0);
            return uVar4;
          }
        }
      }
    }
    unaff_x30 = &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
    pfVar8 = (float *)func_0x00f78af4();
    param_7 = *(float **)(pfVar8 + 0x13);
    param_8 = (ulong)(uint)pfVar8[0x15];
    puVar2 = puVar2 + -0x150;
    lVar3 = extraout_x1_00;
    unaff_x22 = pfVar5;
    uVar7 = extraout_d0_01;
  } while( true );
}



// ============================================================
// RVA: 0x15b64dc | Atlas.Gameplay.Usables.HomingProjectileLogic.HasLoSToKart
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart
          (ulong param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
          float *param_7,ulong param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int extraout_w1;
  long extraout_x1;
  int iVar5;
  undefined4 *puVar6;
  float *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  ulong extraout_d0;
  ulong extraout_d0_00;
  float fVar10;
  float fVar11;
  ulong unaff_d8;
  float fVar12;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  undefined8 unaff_d13;
  
  do {
    lVar1 = param_5;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x23 = 0x3eb5000;
    unaff_x19 = param_7;
    uVar4 = param_8;
    unaff_x21 = param_9;
    fVar10 = param_2;
    fVar12 = param_3;
    fVar8 = param_4;
    if ((bRam0000000003eb528c & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb528c = 1;
      unaff_x21 = param_9;
      fVar8 = param_4;
    }
    iVar5 = (int)uVar4;
    *(undefined8 *)((long)register0x00000008 + -0x7c) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x84) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    if (param_6 != 0) {
      fVar7 = (float)/*Atlas.Gameplay.Usables.HomingProjectileLogic$$DistToTargetSquared*/ func_0x015b68ac(lVar1,*(undefined8 *)(param_6 + 0x10));
      if (*(long *)(lVar1 + 0x60) != 0) {
        fVar10 = *(float *)(*(long *)(lVar1 + 0x60) + 0x14);
        fVar10 = fVar10 * fVar10;
        if (fVar10 < fVar7) {
          return 0;
        }
        if ((*(long *)(param_6 + 0x10) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_6 + 0x10) + 0x18), lVar2 != 0)) {
          fVar8 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                   (lVar2,0);
          *(float *)((long)register0x00000008 + -0x70) = fVar8 - (float)param_1;
          *(float *)((long)register0x00000008 + -0x6c) = fVar10 - param_2;
          *(float *)((long)register0x00000008 + -0x68) = fVar12 - param_3;
          uVar9 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)register0x00000008 + -0x70),0);
          /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824((undefined1 *)((long)register0x00000008 + -0x70),0);
          *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(param_1 & 0xffffffff,param_2,param_3,
                          *(undefined4 *)((long)register0x00000008 + -0x70),
                          *(undefined4 *)((long)register0x00000008 + -0x6c),
                          *(undefined4 *)((long)register0x00000008 + -0x68),
                          (undefined1 *)((long)register0x00000008 + -0xb8),0);
          uVar3 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((ulong)param_7 & 0xffffffff,0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined8 *)((long)register0x00000008 + -0xc0) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(uVar9,(undefined1 *)((long)register0x00000008 + -0xd0),
                          (undefined1 *)((long)register0x00000008 + -0xa0),uVar3,param_8,0);
          uVar3 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30((undefined1 *)((long)register0x00000008 + -0xa0),0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
          return uVar3;
        }
      }
    }
    unaff_x20 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x128) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x120) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x118) = param_1 & 0xffffffff;
    *(ulong *)((long)register0x00000008 + -0x110) = (ulong)(uint)param_2;
    *(ulong *)((long)register0x00000008 + -0x108) = (ulong)(uint)param_3;
    *(long *)((long)register0x00000008 + -0x100) = lVar1;
    *(long *)((long)register0x00000008 + -0xf8) = param_6;
    *(float **)((long)register0x00000008 + -0xf0) = param_7;
    *(ulong *)((long)register0x00000008 + -0xe8) = param_8;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0xd8) =
         &Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
    unaff_d11 = (ulong)(uint)fVar8;
    unaff_d9 = (ulong)(uint)fVar12;
    unaff_d8 = (ulong)(uint)fVar10;
    unaff_d10 = extraout_d0 & 0xffffffff;
    *(undefined4 *)((long)register0x00000008 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x144) = 0;
    fVar7 = *(float *)(unaff_x20 + 0x88);
    unaff_d12 = (ulong)(uint)fVar7;
    param_9 = unaff_x21;
    param_2 = fVar10;
    param_3 = fVar12;
    param_4 = fVar8;
    if (iVar5 == 0) {
      uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(unaff_x20);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        puVar6 = (undefined4 *)(*(long *)(unaff_x20 + 0x60) + 0x1c);
        goto code_r0x015b6708;
      }
    }
    else {
      lVar2 = *(long *)(unaff_x20 + 0x60);
      if (extraout_w1 == 0) {
        if (lVar2 != 0) {
          puVar6 = (undefined4 *)(lVar2 + 0x18);
          goto code_r0x015b6708;
        }
      }
      else if (lVar2 != 0) {
        puVar6 = (undefined4 *)(lVar2 + 0x20);
code_r0x015b6708:
        *(undefined4 *)(unaff_x20 + 0x88) = *puVar6;
        uVar4 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(0);
        if ((uVar4 & 1) == 0) {
          *(float *)(unaff_x20 + 0x8c) = fVar8;
        }
        param_2 = fVar7;
        if (*(long *)(unaff_x20 + 0x60) != 0) {
          param_3 = (fVar8 - *(float *)(unaff_x20 + 0x8c)) /
                    *(float *)(*(long *)(unaff_x20 + 0x60) + 0x24);
          param_2 = *(float *)(unaff_x20 + 0x88);
          uVar9 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(*(undefined4 *)(unaff_x20 + 0x84),0);
          *(undefined4 *)(unaff_x20 + 0x84) = uVar9;
          if (*(long *)(unaff_x20 + 0x10) != 0) {
            fVar8 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(unaff_x20 + 0x10),0);
            fVar8 = (float)extraout_d0 - fVar8;
            fVar12 = fVar12 - param_3;
            if ((int)unaff_x21 == 0) {
              param_2 = fVar10 - param_2;
            }
            else {
              *(float *)((long)register0x00000008 + -0x140) = fVar8;
              *(undefined4 *)((long)register0x00000008 + -0x13c) = 0;
              *(float *)((long)register0x00000008 + -0x138) = fVar12;
              fVar8 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)register0x00000008 + -0x140),0);
              fVar12 = param_3;
            }
            fVar10 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
            fVar10 = fVar10 * *(float *)(unaff_x20 + 0x84);
            fVar7 = (float)_cosf(fVar10 * _UNK_033f850c);
            fVar11 = unaff_x19[2];
            if (fVar12 * fVar11 + fVar8 * *unaff_x19 + param_2 * unaff_x19[1] < fVar7) {
              /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(0);
              /*UnityEngine.Quaternion$$Internal_ToAxisAngleRad*/ func_0x03251b5c((undefined1 *)((long)register0x00000008 + -0x140),
                              (undefined1 *)((long)register0x00000008 + -0x144),0);
              fVar12 = *(float *)((long)register0x00000008 + -0x144) * _UNK_033f8818;
              *(float *)((long)register0x00000008 + -0x144) = fVar12;
              param_2 = _UNK_033f8818;
              /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
              *(float *)((long)register0x00000008 + -0x150) = fVar10 / fVar12;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(0);
              fVar8 = (float)/*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
              fVar12 = fVar11;
            }
            *unaff_x19 = fVar8;
            unaff_x19[1] = param_2;
            unaff_x19[2] = fVar12;
            uVar3 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(unaff_x19,0);
            return uVar3;
          }
        }
      }
    }
    unaff_x30 = &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
    param_5 = func_0x00f78af4();
    param_7 = *(float **)(param_5 + 0x4c);
    param_8 = (ulong)*(uint *)(param_5 + 0x54);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    param_6 = extraout_x1;
    unaff_x22 = lVar1;
    param_1 = extraout_d0_00;
  } while( true );
}



// ============================================================
// RVA: 0x15b6680 | Atlas.Gameplay.Usables.HomingProjectileLogic.TrackTarget
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget
          (ulong param_1,float param_2,float param_3,float param_4,long param_5,undefined8 param_6,
          float *param_7,ulong param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar5;
  undefined4 *puVar6;
  ulong unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar7;
  float fVar8;
  ulong extraout_d0;
  ulong extraout_d0_00;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  float fVar12;
  ulong unaff_d12;
  undefined8 unaff_d13;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_d11 = (ulong)(uint)param_4;
    *(undefined4 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x74) = 0;
    fVar12 = *(float *)(param_5 + 0x88);
    unaff_d12 = (ulong)(uint)fVar12;
    uVar4 = param_9;
    fVar9 = param_2;
    fVar10 = param_3;
    fVar8 = param_4;
    if ((int)param_8 == 0) {
      uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(param_5);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if (*(long *)(param_5 + 0x60) != 0) {
        puVar6 = (undefined4 *)(*(long *)(param_5 + 0x60) + 0x1c);
        goto LAB_015b6708;
      }
    }
    else {
      lVar5 = *(long *)(param_5 + 0x60);
      if ((int)param_6 == 0) {
        if (lVar5 != 0) {
          puVar6 = (undefined4 *)(lVar5 + 0x18);
          goto LAB_015b6708;
        }
      }
      else if (lVar5 != 0) {
        puVar6 = (undefined4 *)(lVar5 + 0x20);
LAB_015b6708:
        *(undefined4 *)(param_5 + 0x88) = *puVar6;
        uVar3 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(0);
        if ((uVar3 & 1) == 0) {
          *(float *)(param_5 + 0x8c) = param_4;
        }
        fVar9 = fVar12;
        if (*(long *)(param_5 + 0x60) != 0) {
          fVar10 = (param_4 - *(float *)(param_5 + 0x8c)) /
                   *(float *)(*(long *)(param_5 + 0x60) + 0x24);
          fVar9 = *(float *)(param_5 + 0x88);
          uVar7 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(*(undefined4 *)(param_5 + 0x84),0);
          *(undefined4 *)(param_5 + 0x84) = uVar7;
          if (*(long *)(param_5 + 0x10) != 0) {
            fVar8 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x10),0);
            fVar8 = (float)param_1 - fVar8;
            param_3 = param_3 - fVar10;
            if ((int)param_9 == 0) {
              fVar9 = param_2 - fVar9;
            }
            else {
              *(float *)((long)register0x00000008 + -0x70) = fVar8;
              *(undefined4 *)((long)register0x00000008 + -0x6c) = 0;
              *(float *)((long)register0x00000008 + -0x68) = param_3;
              fVar8 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)register0x00000008 + -0x70),0);
              param_3 = fVar10;
            }
            fVar10 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
            fVar10 = fVar10 * *(float *)(param_5 + 0x84);
            fVar12 = (float)_cosf(fVar10 * _UNK_033f850c);
            fVar11 = param_7[2];
            if (param_3 * fVar11 + fVar8 * *param_7 + fVar9 * param_7[1] < fVar12) {
              /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(0);
              /*UnityEngine.Quaternion$$Internal_ToAxisAngleRad*/ func_0x03251b5c((undefined1 *)((long)register0x00000008 + -0x70),
                              (undefined1 *)((long)register0x00000008 + -0x74),0);
              fVar8 = *(float *)((long)register0x00000008 + -0x74) * _UNK_033f8818;
              *(float *)((long)register0x00000008 + -0x74) = fVar8;
              fVar9 = _UNK_033f8818;
              /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
              *(float *)((long)register0x00000008 + -0x80) = fVar10 / fVar8;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(0);
              fVar8 = (float)/*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
              param_3 = fVar11;
            }
            *param_7 = fVar8;
            param_7[1] = fVar9;
            param_7[2] = param_3;
            uVar4 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(param_7,0);
            return uVar4;
          }
        }
      }
    }
    param_4 = fVar8;
    lVar5 = func_0x00f78af4();
    unaff_x20 = *(float **)(lVar5 + 0x4c);
    unaff_x19 = (ulong)*(uint *)(lVar5 + 0x54);
    *(ulong *)((long)register0x00000008 + -0xe0) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0xd8) = param_1 & 0xffffffff;
    *(ulong *)((long)register0x00000008 + -0xd0) = (ulong)(uint)param_3;
    *(ulong *)((long)register0x00000008 + -200) = (ulong)(uint)param_2;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(long *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = param_9;
    *(long *)((long)register0x00000008 + -0xa0) = param_5;
    *(float **)((long)register0x00000008 + -0x98) = param_7;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) =
         &Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x90);
    unaff_d8 = (ulong)(uint)fVar10;
    unaff_d9 = (ulong)(uint)fVar9;
    unaff_d10 = extraout_d0_00 & 0xffffffff;
    unaff_x23 = 0x3eb5000;
    param_7 = unaff_x20;
    param_8 = unaff_x19;
    param_9 = uVar4;
    param_2 = fVar9;
    param_3 = fVar10;
    if ((bRam0000000003eb528c & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb528c = 1;
      param_9 = uVar4;
    }
    *(undefined8 *)((long)register0x00000008 + -0xfc) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x104) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    if (extraout_x1_00 != 0) {
      fVar8 = (float)/*Atlas.Gameplay.Usables.HomingProjectileLogic$$DistToTargetSquared*/ func_0x015b68ac(lVar5,*(undefined8 *)(extraout_x1_00 + 0x10));
      if (*(long *)(lVar5 + 0x60) != 0) {
        param_2 = *(float *)(*(long *)(lVar5 + 0x60) + 0x14);
        param_2 = param_2 * param_2;
        if (param_2 < fVar8) {
          return 0;
        }
        if ((*(long *)(extraout_x1_00 + 0x10) != 0) &&
           (lVar1 = *(long *)(*(long *)(extraout_x1_00 + 0x10) + 0x18), lVar1 != 0)) {
          fVar8 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                   (lVar1,0);
          *(float *)((long)register0x00000008 + -0xf0) = fVar8 - (float)extraout_d0_00;
          *(float *)((long)register0x00000008 + -0xec) = param_2 - fVar9;
          *(float *)((long)register0x00000008 + -0xe8) = param_3 - fVar10;
          uVar7 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)register0x00000008 + -0xf0),0);
          /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824((undefined1 *)((long)register0x00000008 + -0xf0),0);
          *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(extraout_d0_00 & 0xffffffff,fVar9,fVar10,
                          *(undefined4 *)((long)register0x00000008 + -0xf0),
                          *(undefined4 *)((long)register0x00000008 + -0xec),
                          *(undefined4 *)((long)register0x00000008 + -0xe8),
                          (undefined1 *)((long)register0x00000008 + -0x138),0);
          uVar4 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((ulong)unaff_x20 & 0xffffffff,0);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0x130);
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0x138);
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)((long)register0x00000008 + -0x128);
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(uVar7,(undefined1 *)((long)register0x00000008 + -0x150),
                          (undefined1 *)((long)register0x00000008 + -0x120),uVar4,unaff_x19,0);
          uVar4 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30((undefined1 *)((long)register0x00000008 + -0x120),0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
          return uVar4;
        }
      }
    }
    unaff_x30 = Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget;
    param_5 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    param_6 = extraout_x1;
    unaff_x21 = extraout_x1_00;
    unaff_x22 = lVar5;
    param_1 = extraout_d0;
  } while( true );
}



// ============================================================
// RVA: 0x15b68a0 | Atlas.Gameplay.Usables.HomingProjectileLogic.HasLoSToKart
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart
          (ulong param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
          undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w1;
  long extraout_x1;
  float *pfVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  float *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  ulong extraout_d0;
  ulong extraout_d0_00;
  float fVar12;
  float fVar13;
  ulong unaff_d8;
  float fVar14;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  undefined8 unaff_d13;
  
  do {
    lVar3 = param_5;
    pfVar4 = *(float **)(lVar3 + 0x4c);
    uVar5 = *(uint *)(lVar3 + 0x54);
    uVar7 = (ulong)uVar5;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x23 = 0x3eb5000;
    unaff_x19 = pfVar4;
    unaff_x21 = param_9;
    fVar12 = param_2;
    fVar14 = param_3;
    fVar10 = param_4;
    if ((bRam0000000003eb528c & 1) == 0) {
      uVar6 = uVar7;
      func_0x00f78a20(0x3d23990);
      uVar5 = (uint)uVar6;
      bRam0000000003eb528c = 1;
      unaff_x21 = param_9;
      fVar10 = param_4;
    }
    *(undefined8 *)((long)register0x00000008 + -0x7c) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x84) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    if (param_6 != 0) {
      fVar9 = (float)/*Atlas.Gameplay.Usables.HomingProjectileLogic$$DistToTargetSquared*/ func_0x015b68ac(lVar3,*(undefined8 *)(param_6 + 0x10));
      if (*(long *)(lVar3 + 0x60) != 0) {
        fVar12 = *(float *)(*(long *)(lVar3 + 0x60) + 0x14);
        fVar12 = fVar12 * fVar12;
        if (fVar12 < fVar9) {
          return 0;
        }
        if ((*(long *)(param_6 + 0x10) != 0) &&
           (lVar1 = *(long *)(*(long *)(param_6 + 0x10) + 0x18), lVar1 != 0)) {
          fVar10 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                    (lVar1,0);
          *(float *)((long)register0x00000008 + -0x70) = fVar10 - (float)param_1;
          *(float *)((long)register0x00000008 + -0x6c) = fVar12 - param_2;
          *(float *)((long)register0x00000008 + -0x68) = fVar14 - param_3;
          uVar11 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)register0x00000008 + -0x70),0);
          /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824((undefined1 *)((long)register0x00000008 + -0x70),0);
          *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(param_1 & 0xffffffff,param_2,param_3,
                          *(undefined4 *)((long)register0x00000008 + -0x70),
                          *(undefined4 *)((long)register0x00000008 + -0x6c),
                          *(undefined4 *)((long)register0x00000008 + -0x68),
                          (undefined1 *)((long)register0x00000008 + -0xb8),0);
          uVar2 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((ulong)pfVar4 & 0xffffffff,0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -0xb0);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined8 *)((long)register0x00000008 + -0xc0) =
               *(undefined8 *)((long)register0x00000008 + -0xa8);
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(uVar11,(undefined1 *)((long)register0x00000008 + -0xd0),
                          (undefined1 *)((long)register0x00000008 + -0xa0),uVar2,uVar7,0);
          uVar2 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30((undefined1 *)((long)register0x00000008 + -0xa0),0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
          return uVar2;
        }
      }
    }
    unaff_x20 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x128) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x120) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x118) = param_1 & 0xffffffff;
    *(ulong *)((long)register0x00000008 + -0x110) = (ulong)(uint)param_2;
    *(ulong *)((long)register0x00000008 + -0x108) = (ulong)(uint)param_3;
    *(long *)((long)register0x00000008 + -0x100) = lVar3;
    *(long *)((long)register0x00000008 + -0xf8) = param_6;
    *(float **)((long)register0x00000008 + -0xf0) = pfVar4;
    *(ulong *)((long)register0x00000008 + -0xe8) = uVar7;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xd8) =
         Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
    unaff_d11 = (ulong)(uint)fVar10;
    unaff_d9 = (ulong)(uint)fVar14;
    unaff_d8 = (ulong)(uint)fVar12;
    unaff_d10 = extraout_d0 & 0xffffffff;
    *(undefined4 *)((long)register0x00000008 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x144) = 0;
    fVar9 = *(float *)(unaff_x20 + 0x88);
    unaff_d12 = (ulong)(uint)fVar9;
    param_9 = unaff_x21;
    param_2 = fVar12;
    param_3 = fVar14;
    param_4 = fVar10;
    if (uVar5 == 0) {
      uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(unaff_x20);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        puVar8 = (undefined4 *)(*(long *)(unaff_x20 + 0x60) + 0x1c);
        goto LAB_015b6708;
      }
    }
    else {
      lVar1 = *(long *)(unaff_x20 + 0x60);
      if (extraout_w1 == 0) {
        if (lVar1 != 0) {
          puVar8 = (undefined4 *)(lVar1 + 0x18);
          goto LAB_015b6708;
        }
      }
      else if (lVar1 != 0) {
        puVar8 = (undefined4 *)(lVar1 + 0x20);
LAB_015b6708:
        *(undefined4 *)(unaff_x20 + 0x88) = *puVar8;
        uVar7 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(0);
        if ((uVar7 & 1) == 0) {
          *(float *)(unaff_x20 + 0x8c) = fVar10;
        }
        param_2 = fVar9;
        if (*(long *)(unaff_x20 + 0x60) != 0) {
          param_3 = (fVar10 - *(float *)(unaff_x20 + 0x8c)) /
                    *(float *)(*(long *)(unaff_x20 + 0x60) + 0x24);
          param_2 = *(float *)(unaff_x20 + 0x88);
          uVar11 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(*(undefined4 *)(unaff_x20 + 0x84),0);
          *(undefined4 *)(unaff_x20 + 0x84) = uVar11;
          if (*(long *)(unaff_x20 + 0x10) != 0) {
            fVar10 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(unaff_x20 + 0x10),0);
            fVar10 = (float)extraout_d0 - fVar10;
            fVar14 = fVar14 - param_3;
            if ((int)unaff_x21 == 0) {
              param_2 = fVar12 - param_2;
            }
            else {
              *(float *)((long)register0x00000008 + -0x140) = fVar10;
              *(undefined4 *)((long)register0x00000008 + -0x13c) = 0;
              *(float *)((long)register0x00000008 + -0x138) = fVar14;
              fVar10 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)register0x00000008 + -0x140),0);
              fVar14 = param_3;
            }
            fVar12 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
            fVar12 = fVar12 * *(float *)(unaff_x20 + 0x84);
            fVar9 = (float)_cosf(fVar12 * _UNK_033f850c);
            fVar13 = unaff_x19[2];
            if (fVar14 * fVar13 + fVar10 * *unaff_x19 + param_2 * unaff_x19[1] < fVar9) {
              /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(0);
              /*UnityEngine.Quaternion$$Internal_ToAxisAngleRad*/ func_0x03251b5c((undefined1 *)((long)register0x00000008 + -0x140),
                              (undefined1 *)((long)register0x00000008 + -0x144),0);
              fVar14 = *(float *)((long)register0x00000008 + -0x144) * _UNK_033f8818;
              *(float *)((long)register0x00000008 + -0x144) = fVar14;
              param_2 = _UNK_033f8818;
              /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
              *(float *)((long)register0x00000008 + -0x150) = fVar12 / fVar14;
              /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(0);
              fVar10 = (float)/*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251ed8(0);
              fVar14 = fVar13;
            }
            *unaff_x19 = fVar10;
            unaff_x19[1] = param_2;
            unaff_x19[2] = fVar14;
            uVar2 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(unaff_x19,0);
            return uVar2;
          }
        }
      }
    }
    unaff_x30 = Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart;
    param_5 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    param_6 = extraout_x1;
    unaff_x22 = lVar3;
    param_1 = extraout_d0_00;
  } while( true );
}



// ============================================================
// RVA: 0x15b68ac | Atlas.Gameplay.Usables.HomingProjectileLogic.DistToTargetSquared
// ============================================================

ulong Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float extraout_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_d8;
  undefined8 uVar11;
  undefined8 unaff_d9;
  undefined8 uVar12;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar13 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot();
  if ((uVar2 & 1) == 0) {
    if ((param_5 == 0) || (*(long *)(param_5 + 0x10) == 0)) goto LAB_015b6918;
    lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_5 + 0x10),0);
    param_2 = *(float *)(lVar3 + 0x140);
    param_3 = *(float *)(lVar3 + 0x144);
    fVar5 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x13c),0);
    lVar3 = param_4;
  }
  else {
    if (param_5 != 0) {
      lVar3 = *(long *)(param_5 + 0x90);
      puVar1 = (undefined1 *)register0x00000008;
      goto code_r0x015b6984;
    }
LAB_015b6918:
    unaff_x30 = &Atlas_Gameplay_Usables_HomingProjectileLogic__LinearDistToTargetSquared;
    lVar3 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_4;
    unaff_x20 = param_5;
    unaff_x29 = puVar1;
    fVar5 = extraout_s0;
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_d8;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(long *)(lVar3 + 0x10) != 0) {
    fVar6 = param_2;
    fVar7 = param_3;
    fVar8 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar3 + 0x10),0);
    *(float *)((long)register0x00000008 + -0x40) = fVar8 - fVar5;
    *(float *)((long)register0x00000008 + -0x3c) = fVar6 - param_2;
    *(float *)((long)register0x00000008 + -0x38) = fVar7 - param_3;
    uVar2 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined1 *)((long)register0x00000008 + -0x40),0);
    return uVar2;
  }
  unaff_x30 = &Atlas_Gameplay_Usables_HomingProjectileLogic__SplineDistToTargetSquared;
  auVar13 = func_0x00f78af4();
  lVar3 = auVar13._8_8_;
  param_4 = auVar13._0_8_;
code_r0x015b6984:
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if ((lVar3 != 0) && (*(long *)(param_4 + 0x58) != 0)) {
    fVar5 = *(float *)(lVar3 + 0x70);
    fVar6 = *(float *)(param_4 + 0x3c);
    fVar7 = *(float *)(*(long *)(param_4 + 0x58) + 0x58);
    *(float *)(puVar1 + -0x18) = *(float *)(lVar3 + 0x6c) - *(float *)(param_4 + 0x38);
    *(float *)(puVar1 + -0x14) = fVar7 * ABS(fVar5 - fVar6);
    uVar2 = /*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644(puVar1 + -0x18,0);
    return uVar2;
  }
  auVar13 = func_0x00f78af4();
  lVar4 = auVar13._8_8_;
  *(undefined8 *)(puVar1 + -0x60) = unaff_d11;
  *(undefined8 *)(puVar1 + -0x58) = unaff_d10;
  *(undefined8 *)(puVar1 + -0x50) = unaff_d9;
  *(undefined8 *)(puVar1 + -0x48) = unaff_d8;
  *(long *)(puVar1 + -0x40) = unaff_x20;
  *(long *)(puVar1 + -0x38) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x28) = &Atlas_Gameplay_Usables_HomingProjectileLogic__IsBehindKart;
  lVar3 = *(long *)(auVar13._0_8_ + 0x10);
  if (((lVar3 != 0) && (fVar5 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x10) != 0)) {
    lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar4 + 0x10),0);
    fVar7 = *(float *)(lVar3 + 0x140);
    fVar8 = *(float *)(lVar3 + 0x144);
    fVar6 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x13c),0);
    if (*(long *)(lVar4 + 0x10) != 0) {
      param_3 = param_3 - fVar8;
      param_2 = param_2 - fVar7;
      lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar4 + 0x10),0);
      fVar8 = *(float *)(lVar3 + 0x11c);
      fVar9 = *(float *)(lVar3 + 0x120);
      fVar7 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x118),0);
      fVar10 = *(float *)(auVar13._0_8_ + 0x6c);
      uVar12 = *(undefined8 *)(puVar1 + -0x50);
      uVar11 = *(undefined8 *)(puVar1 + -0x48);
      *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar1 + -0x60);
      *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x58);
      *(undefined8 *)(puVar1 + -0x40) = uVar12;
      *(undefined8 *)(puVar1 + -0x38) = uVar11;
      *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
      *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
      *(float *)(puVar1 + -0x60) = fVar5 - fVar6;
      *(float *)(puVar1 + -0x5c) = param_2;
      *(float *)(puVar1 + -0x58) = param_3;
      *(float *)(puVar1 + -0x70) = -fVar7;
      *(float *)(puVar1 + -0x6c) = -fVar8;
      *(float *)(puVar1 + -0x68) = -fVar9;
      fVar7 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(puVar1 + -0x60,0);
      fVar5 = param_2;
      fVar6 = param_3;
      fVar8 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(puVar1 + -0x70,0);
      return (ulong)(fVar10 <= param_3 * fVar6 + fVar7 * fVar8 + param_2 * fVar5);
    }
  }
  uVar2 = func_0x00f78af4();
  *(undefined4 *)(uVar2 + 0x6c) = 0xb33bbd2e;
  return uVar2;
}



// ============================================================
// RVA: 0x15b691c | Atlas.Gameplay.Usables.HomingProjectileLogic.LinearDistToTargetSquared
// ============================================================

ulong Atlas_Gameplay_Usables_HomingProjectileLogic__LinearDistToTargetSquared
                (float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_58;
  float fStack_54;
  undefined1 *puStack_50;
  undefined *puStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if (*(long *)(param_4 + 0x10) != 0) {
    fVar6 = param_2;
    fVar7 = param_3;
    fStack_40 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x10),0);
    fStack_40 = fStack_40 - param_1;
    fStack_3c = fVar6 - param_2;
    fStack_38 = fVar7 - param_3;
    uVar1 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&fStack_40,0);
    return uVar1;
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  lVar2 = auVar9._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_HomingProjectileLogic__SplineDistToTargetSquared;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((lVar3 != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
    fStack_58 = *(float *)(lVar3 + 0x6c) - *(float *)(lVar2 + 0x38);
    fStack_54 = *(float *)(*(long *)(lVar2 + 0x58) + 0x58) *
                ABS(*(float *)(lVar3 + 0x70) - *(float *)(lVar2 + 0x3c));
    uVar1 = /*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644(&fStack_58,0);
    return uVar1;
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  lVar2 = *(long *)(auVar9._0_8_ + 0x10);
  if (((lVar2 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0), lVar3 != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
    lVar2 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar3 + 0x10),0);
    fVar6 = *(float *)(lVar2 + 0x140);
    fVar7 = *(float *)(lVar2 + 0x144);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x13c),0);
    if (*(long *)(lVar3 + 0x10) != 0) {
      param_3 = param_3 - fVar7;
      param_2 = param_2 - fVar6;
      lVar2 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar3 + 0x10),0);
      fVar6 = *(float *)(lVar2 + 0x11c);
      fVar7 = *(float *)(lVar2 + 0x120);
      fStack_b0 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x118),0);
      fStack_b0 = -fStack_b0;
      fStack_ac = -fVar6;
      fStack_a8 = -fVar7;
      fVar8 = *(float *)(auVar9._0_8_ + 0x6c);
      fVar4 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&stack0xffffffffffffff60,0);
      fVar6 = param_2;
      fVar7 = param_3;
      fVar5 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_b0,0);
      return (ulong)(fVar8 <= param_3 * fVar7 + fVar4 * fVar5 + param_2 * fVar6);
    }
  }
  uVar1 = func_0x00f78af4();
  *(undefined4 *)(uVar1 + 0x6c) = 0xb33bbd2e;
  return uVar1;
}



// ============================================================
// RVA: 0x15b6984 | Atlas.Gameplay.Usables.HomingProjectileLogic.SplineDistToTargetSquared
// ============================================================

ulong Atlas_Gameplay_Usables_HomingProjectileLogic__SplineDistToTargetSquared
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_18;
  float fStack_14;
  
  if ((param_5 != 0) && (*(long *)(param_4 + 0x58) != 0)) {
    fStack_18 = *(float *)(param_5 + 0x6c) - *(float *)(param_4 + 0x38);
    fStack_14 = *(float *)(*(long *)(param_4 + 0x58) + 0x58) *
                ABS(*(float *)(param_5 + 0x70) - *(float *)(param_4 + 0x3c));
    uVar1 = /*UnityEngine.Vector2$$get_sqrMagnitude*/ func_0x0327a644(&fStack_18,0);
    return uVar1;
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  lVar2 = *(long *)(auVar9._0_8_ + 0x10);
  if (((lVar2 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0), lVar3 != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
    lVar2 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar3 + 0x10),0);
    fVar6 = *(float *)(lVar2 + 0x140);
    fVar7 = *(float *)(lVar2 + 0x144);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x13c),0);
    if (*(long *)(lVar3 + 0x10) != 0) {
      param_3 = param_3 - fVar7;
      param_2 = param_2 - fVar6;
      lVar2 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar3 + 0x10),0);
      fVar6 = *(float *)(lVar2 + 0x11c);
      fVar7 = *(float *)(lVar2 + 0x120);
      fStack_70 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x118),0);
      fStack_70 = -fStack_70;
      fStack_6c = -fVar6;
      fStack_68 = -fVar7;
      fVar8 = *(float *)(auVar9._0_8_ + 0x6c);
      fVar4 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&stack0xffffffffffffffa0,0);
      fVar6 = param_2;
      fVar7 = param_3;
      fVar5 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_70,0);
      return (ulong)(fVar8 <= param_3 * fVar7 + fVar4 * fVar5 + param_2 * fVar6);
    }
  }
  uVar1 = func_0x00f78af4();
  *(undefined4 *)(uVar1 + 0x6c) = 0xb33bbd2e;
  return uVar1;
}



// ============================================================
// RVA: 0x15b69d4 | Atlas.Gameplay.Usables.HomingProjectileLogic.IsBehindKart
// ============================================================

ulong Atlas_Gameplay_Usables_HomingProjectileLogic__IsBehindKart
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  if (((*(long *)(param_4 + 0x10) != 0) &&
      (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x10),0), param_5 != 0)) &&
     (*(long *)(param_5 + 0x10) != 0)) {
    lVar1 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_5 + 0x10),0);
    fVar5 = *(float *)(lVar1 + 0x140);
    fVar6 = *(float *)(lVar1 + 0x144);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar1 + 0x13c),0);
    if (*(long *)(param_5 + 0x10) != 0) {
      param_3 = param_3 - fVar6;
      param_2 = param_2 - fVar5;
      lVar1 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_5 + 0x10),0);
      fVar5 = *(float *)(lVar1 + 0x11c);
      fVar6 = *(float *)(lVar1 + 0x120);
      fStack_50 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar1 + 0x118),0);
      fStack_50 = -fStack_50;
      fStack_4c = -fVar5;
      fStack_48 = -fVar6;
      fVar7 = *(float *)(param_4 + 0x6c);
      fVar3 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&stack0xffffffffffffffc0,0);
      fVar5 = param_2;
      fVar6 = param_3;
      fVar4 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&fStack_50,0);
      return (ulong)(fVar7 <= param_3 * fVar6 + fVar3 * fVar4 + param_2 * fVar5);
    }
  }
  uVar2 = func_0x00f78af4();
  *(undefined4 *)(uVar2 + 0x6c) = 0xb33bbd2e;
  return uVar2;
}



// ============================================================
// RVA: 0x15b6a9c | Atlas.Gameplay.Usables.HomingProjectileLogic..ctor
// ============================================================

void Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0xb33bbd2e;
  return;
}



