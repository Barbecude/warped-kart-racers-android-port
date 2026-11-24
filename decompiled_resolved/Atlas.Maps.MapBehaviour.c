// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maps.MapBehaviour

// ============================================================
// RVA: 0x148cfdc | Atlas.Maps.MapBehaviour.get_MapSequence
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_MapSequence(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x148cfe4 | Atlas.Maps.MapBehaviour.get_RaceSplineRootBehaviour
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_RaceSplineRootBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x148cfec | Atlas.Maps.MapBehaviour.get_SpawnLocationsBehaviour
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_SpawnLocationsBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x148cff4 | Atlas.Maps.MapBehaviour.get_PickupSpotsRootBehaviour
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_PickupSpotsRootBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x148cffc | Atlas.Maps.MapBehaviour.get_BattleAiMapBoundsBehaviour
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_BattleAiMapBoundsBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x148d004 | Atlas.Maps.MapBehaviour.get_InteractablesRoot
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_InteractablesRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x148d00c | Atlas.Maps.MapBehaviour.get_NetworkSyncedPlayableDirectors
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_NetworkSyncedPlayableDirectors(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x148d014 | Atlas.Maps.MapBehaviour.get_VariantTextureSwapIndex
// ============================================================

undefined4 Atlas_Maps_MapBehaviour__get_VariantTextureSwapIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x148d01c | Atlas.Maps.MapBehaviour.get_MapBoundsBox
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_MapBoundsBox(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x148d024 | Atlas.Maps.MapBehaviour.get_MinimapBounds
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_MinimapBounds(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x148d02c | Atlas.Maps.MapBehaviour.get_RotateMinimapAxes
// ============================================================

undefined1 Atlas_Maps_MapBehaviour__get_RotateMinimapAxes(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x148d034 | Atlas.Maps.MapBehaviour.get_HitVolumeRootBehaviour
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_HitVolumeRootBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x148d03c | Atlas.Maps.MapBehaviour.get_IdentifiableLocatorRootBehaviour
// ============================================================

undefined8 Atlas_Maps_MapBehaviour__get_IdentifiableLocatorRootBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x148d044 | Atlas.Maps.MapBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0148d0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0148d0ac) */
/* WARNING: Removing unreachable block (ram,0x0148d0c4) */
/* WARNING: Removing unreachable block (ram,0x0148d0cc) */
/* WARNING: Removing unreachable block (ram,0x0148d0d0) */
/* WARNING: Removing unreachable block (ram,0x0148d0e4) */
/* WARNING: Removing unreachable block (ram,0x0148d0ec) */
/* WARNING: Removing unreachable block (ram,0x0148d0f4) */
/* WARNING: Removing unreachable block (ram,0x0148d104) */
/* WARNING: Removing unreachable block (ram,0x0148d10c) */
/* WARNING: Removing unreachable block (ram,0x0148d110) */
/* WARNING: Removing unreachable block (ram,0x0148d124) */
/* WARNING: Removing unreachable block (ram,0x0148d12c) */
/* WARNING: Removing unreachable block (ram,0x0148d140) */
/* WARNING: Removing unreachable block (ram,0x0148d150) */
/* WARNING: Removing unreachable block (ram,0x0148d154) */
/* WARNING: Removing unreachable block (ram,0x0148d15c) */
/* WARNING: Removing unreachable block (ram,0x0148d190) */
/* WARNING: Removing unreachable block (ram,0x0148d194) */
/* WARNING: Removing unreachable block (ram,0x0148d168) */
/* WARNING: Removing unreachable block (ram,0x0148d180) */

ulong Atlas_Maps_MapBehaviour__Init
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  
  if ((bRam0000000003eb4978 & 1) == 0) {
    func_0x00f78a20(0x3d53688);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4978 = 1;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    Atlas_Gameplay_RaceSplineRootBehaviour__Init(*(long *)(param_4 + 0x40),0);
  }
  if ((bRam0000000003eb497b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb497b = 1;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(float *)(param_4 + 0x18) = fVar10;
  *(float *)(param_4 + 0x1c) = param_2;
  *(float *)(param_4 + 0x20) = param_3;
  fVar10 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(float *)(param_4 + 0x24) = fVar10;
  *(float *)(param_4 + 0x28) = param_2;
  *(float *)(param_4 + 0x2c) = param_3;
  uVar9 = *(undefined8 *)(param_4 + 0x88);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
code_r0x0148d2c8:
    return (ulong)(uVar4 ^ 1);
  }
  fVar10 = param_2;
  if (*(long *)(param_4 + 0x88) != 0) {
    fVar11 = (float)/*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_4 + 0x88),0);
    fVar10 = param_2;
    if (*(long *)(param_4 + 0x88) != 0) {
      /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_4 + 0x88),0);
      fVar10 = param_2;
      if (*(long *)(param_4 + 0x88) != 0) {
        /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_4 + 0x88),0);
        if (*(long *)(param_4 + 0x88) != 0) {
          fVar13 = param_3 * 0.5;
          fVar12 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x88),0);
          *(float *)(param_4 + 0x18) = fVar12 - fVar11 * 0.5;
          *(float *)(param_4 + 0x1c) = fVar10 - param_2 * 0.5;
          *(float *)(param_4 + 0x20) = param_3 - fVar13;
          *(float *)(param_4 + 0x24) = fVar11 * 0.5 + fVar12;
          *(float *)(param_4 + 0x28) = param_2 * 0.5 + fVar10;
          *(float *)(param_4 + 0x2c) = fVar13 + param_3;
          goto code_r0x0148d2c8;
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4979 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4979 = 1;
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
  if ((int)uVar6 != 0) {
    if (*(long *)(lVar5 + 0x40) == 0) {
      lVar5 = func_0x00f78af4();
      if ((bRam0000000003eb497a & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb497a = 1;
      }
      uVar9 = *(undefined8 *)(lVar5 + 0x48);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
      uVar7 = 0;
      if ((uVar6 & 1) == 0) {
        if ((*(long *)(lVar5 + 0x48) == 0) ||
           (lVar8 = *(long *)(*(long *)(lVar5 + 0x48) + 0x18), lVar8 == 0)) {
          func_0x00f78af4(0);
code_r0x0148d450:
          uVar9 = func_0x00f78b24();
          lVar5 = func_0x00f78ac0(uVar9,0);
          if (*(char *)(lVar5 + 0x30) == '\0') {
            return 0;
          }
          if ((((*(float *)(lVar5 + 0x18) <= extraout_s0) &&
               (extraout_s0 <= *(float *)(lVar5 + 0x24))) && (*(float *)(lVar5 + 0x1c) <= fVar10))
             && ((fVar10 <= *(float *)(lVar5 + 0x28) && (*(float *)(lVar5 + 0x20) <= param_3)))) {
            return (ulong)(*(float *)(lVar5 + 0x2c) < param_3);
          }
          return 1;
        }
        if (*(long *)(lVar8 + 0x18) == 0) {
          uVar7 = 0;
        }
        else {
          iVar1 = *(int *)(lVar5 + 0x34);
          iVar3 = 0;
          uVar4 = (uint)*(long *)(lVar8 + 0x18);
          if (uVar4 != 0) {
            iVar3 = iVar1 / (int)uVar4;
          }
          uVar2 = iVar1 - iVar3 * uVar4;
          *(int *)(lVar5 + 0x34) = iVar1 + 1;
          if (uVar4 <= uVar2) goto code_r0x0148d450;
          uVar7 = *(ulong *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        }
      }
      return uVar7;
    }
    uVar6 = Atlas_Gameplay_RaceSplineRootBehaviour__DeInit(*(long *)(lVar5 + 0x40),0);
  }
  *(undefined1 *)(lVar5 + 0x30) = 0;
  *(undefined4 *)(lVar5 + 0x34) = 0;
  return uVar6;
}



// ============================================================
// RVA: 0x148d1a0 | Atlas.Maps.MapBehaviour.TryGetMapBounds
// ============================================================

ulong Atlas_Maps_MapBehaviour__TryGetMapBounds
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5,
                float *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  
  if ((bRam0000000003eb497b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb497b = 1;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *param_5 = fVar10;
  param_5[1] = param_2;
  param_5[2] = param_3;
  fVar10 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *param_6 = fVar10;
  param_6[1] = param_2;
  param_6[2] = param_3;
  uVar9 = *(undefined8 *)(param_4 + 0x88);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
LAB_0148d2c8:
    return (ulong)(uVar4 ^ 1);
  }
  fVar10 = param_2;
  if (*(long *)(param_4 + 0x88) != 0) {
    fVar11 = (float)/*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_4 + 0x88),0);
    fVar10 = param_2;
    if (*(long *)(param_4 + 0x88) != 0) {
      /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_4 + 0x88),0);
      fVar10 = param_2;
      if (*(long *)(param_4 + 0x88) != 0) {
        /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_4 + 0x88),0);
        if (*(long *)(param_4 + 0x88) != 0) {
          fVar13 = param_3 * 0.5;
          fVar12 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x88),0);
          *param_5 = fVar12 - fVar11 * 0.5;
          param_5[1] = fVar10 - param_2 * 0.5;
          param_5[2] = param_3 - fVar13;
          *param_6 = fVar11 * 0.5 + fVar12;
          param_6[1] = param_2 * 0.5 + fVar10;
          param_6[2] = fVar13 + param_3;
          goto LAB_0148d2c8;
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4979 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4979 = 1;
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
  if ((int)uVar6 != 0) {
    if (*(long *)(lVar5 + 0x40) == 0) {
      lVar5 = func_0x00f78af4();
      if ((bRam0000000003eb497a & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb497a = 1;
      }
      uVar9 = *(undefined8 *)(lVar5 + 0x48);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
      uVar7 = 0;
      if ((uVar6 & 1) == 0) {
        if ((*(long *)(lVar5 + 0x48) == 0) ||
           (lVar8 = *(long *)(*(long *)(lVar5 + 0x48) + 0x18), lVar8 == 0)) {
          func_0x00f78af4(0);
code_r0x0148d450:
          uVar9 = func_0x00f78b24();
          lVar5 = func_0x00f78ac0(uVar9,0);
          if (*(char *)(lVar5 + 0x30) == '\0') {
            return 0;
          }
          if ((((*(float *)(lVar5 + 0x18) <= extraout_s0) &&
               (extraout_s0 <= *(float *)(lVar5 + 0x24))) && (*(float *)(lVar5 + 0x1c) <= fVar10))
             && ((fVar10 <= *(float *)(lVar5 + 0x28) && (*(float *)(lVar5 + 0x20) <= param_3)))) {
            return (ulong)(*(float *)(lVar5 + 0x2c) < param_3);
          }
          return 1;
        }
        if (*(long *)(lVar8 + 0x18) == 0) {
          uVar7 = 0;
        }
        else {
          iVar1 = *(int *)(lVar5 + 0x34);
          iVar3 = 0;
          uVar4 = (uint)*(long *)(lVar8 + 0x18);
          if (uVar4 != 0) {
            iVar3 = iVar1 / (int)uVar4;
          }
          uVar2 = iVar1 - iVar3 * uVar4;
          *(int *)(lVar5 + 0x34) = iVar1 + 1;
          if (uVar4 <= uVar2) goto code_r0x0148d450;
          uVar7 = *(ulong *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        }
      }
      return uVar7;
    }
    uVar6 = Atlas_Gameplay_RaceSplineRootBehaviour__DeInit(*(long *)(lVar5 + 0x40),0);
  }
  *(undefined1 *)(lVar5 + 0x30) = 0;
  *(undefined4 *)(lVar5 + 0x34) = 0;
  return uVar6;
}



// ============================================================
// RVA: 0x148d2ec | Atlas.Maps.MapBehaviour.DeInit
// ============================================================

ulong Atlas_Maps_MapBehaviour__DeInit
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  float extraout_s0;
  
  if ((bRam0000000003eb4979 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4979 = 1;
  }
  uVar9 = *(undefined8 *)(param_4 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
  if ((int)uVar4 != 0) {
    if (*(long *)(param_4 + 0x40) == 0) {
      lVar5 = func_0x00f78af4();
      if ((bRam0000000003eb497a & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb497a = 1;
      }
      uVar9 = *(undefined8 *)(lVar5 + 0x48);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
      uVar6 = 0;
      if ((uVar4 & 1) == 0) {
        if ((*(long *)(lVar5 + 0x48) == 0) ||
           (lVar7 = *(long *)(*(long *)(lVar5 + 0x48) + 0x18), lVar7 == 0)) {
          func_0x00f78af4(0);
code_r0x0148d450:
          uVar9 = func_0x00f78b24();
          lVar5 = func_0x00f78ac0(uVar9,0);
          if (*(char *)(lVar5 + 0x30) == '\0') {
            return 0;
          }
          if ((((*(float *)(lVar5 + 0x18) <= extraout_s0) &&
               (extraout_s0 <= *(float *)(lVar5 + 0x24))) && (*(float *)(lVar5 + 0x1c) <= param_2))
             && ((param_2 <= *(float *)(lVar5 + 0x28) && (*(float *)(lVar5 + 0x20) <= param_3)))) {
            return (ulong)(*(float *)(lVar5 + 0x2c) < param_3);
          }
          return 1;
        }
        if (*(long *)(lVar7 + 0x18) == 0) {
          uVar6 = 0;
        }
        else {
          iVar1 = *(int *)(lVar5 + 0x34);
          iVar3 = 0;
          uVar8 = (uint)*(long *)(lVar7 + 0x18);
          if (uVar8 != 0) {
            iVar3 = iVar1 / (int)uVar8;
          }
          uVar2 = iVar1 - iVar3 * uVar8;
          *(int *)(lVar5 + 0x34) = iVar1 + 1;
          if (uVar8 <= uVar2) goto code_r0x0148d450;
          uVar6 = *(ulong *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        }
      }
      return uVar6;
    }
    uVar4 = Atlas_Gameplay_RaceSplineRootBehaviour__DeInit(*(long *)(param_4 + 0x40),0);
  }
  *(undefined1 *)(param_4 + 0x30) = 0;
  *(undefined4 *)(param_4 + 0x34) = 0;
  return uVar4;
}



// ============================================================
// RVA: 0x148d384 | Atlas.Maps.MapBehaviour.GetSpawnLocation
// ============================================================

ulong Atlas_Maps_MapBehaviour__GetSpawnLocation
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  float extraout_s0;
  
  if ((bRam0000000003eb497a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb497a = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  uVar5 = 0;
  if ((uVar4 & 1) == 0) {
    if ((*(long *)(param_4 + 0x48) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 0x48) + 0x18), lVar6 == 0)) {
      func_0x00f78af4(0);
LAB_0148d450:
      uVar8 = func_0x00f78b24();
      lVar6 = func_0x00f78ac0(uVar8,0);
      if (*(char *)(lVar6 + 0x30) == '\0') {
        return 0;
      }
      if ((((*(float *)(lVar6 + 0x18) <= extraout_s0) && (extraout_s0 <= *(float *)(lVar6 + 0x24)))
          && (*(float *)(lVar6 + 0x1c) <= param_2)) &&
         ((param_2 <= *(float *)(lVar6 + 0x28) && (*(float *)(lVar6 + 0x20) <= param_3)))) {
        return (ulong)(*(float *)(lVar6 + 0x2c) < param_3);
      }
      return 1;
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
      uVar5 = 0;
    }
    else {
      iVar1 = *(int *)(param_4 + 0x34);
      iVar3 = 0;
      uVar7 = (uint)*(long *)(lVar6 + 0x18);
      if (uVar7 != 0) {
        iVar3 = iVar1 / (int)uVar7;
      }
      uVar2 = iVar1 - iVar3 * uVar7;
      *(int *)(param_4 + 0x34) = iVar1 + 1;
      if (uVar7 <= uVar2) goto LAB_0148d450;
      uVar5 = *(ulong *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x148d45c | Atlas.Maps.MapBehaviour.IsOutsideBounds
// ============================================================

bool Atlas_Maps_MapBehaviour__IsOutsideBounds
               (float param_1,float param_2,float param_3,long param_4)

{
  if (*(char *)(param_4 + 0x30) == '\0') {
    return false;
  }
  if ((((*(float *)(param_4 + 0x18) <= param_1) && (param_1 <= *(float *)(param_4 + 0x24))) &&
      (*(float *)(param_4 + 0x1c) <= param_2)) &&
     ((param_2 <= *(float *)(param_4 + 0x28) && (*(float *)(param_4 + 0x20) <= param_3)))) {
    return *(float *)(param_4 + 0x2c) < param_3;
  }
  return true;
}



// ============================================================
// RVA: 0x148d4c0 | Atlas.Maps.MapBehaviour.IsNearBounds
// ============================================================

bool Atlas_Maps_MapBehaviour__IsNearBounds(float param_1,float param_2,float param_3,long param_4)

{
  if (*(char *)(param_4 + 0x30) == '\0') {
    return false;
  }
  if ((((*(float *)(param_4 + 0x18) + 30.0 <= param_1) &&
       (param_1 <= *(float *)(param_4 + 0x24) + -30.0)) &&
      (*(float *)(param_4 + 0x20) + 30.0 <= param_3)) &&
     (param_3 <= *(float *)(param_4 + 0x2c) + -30.0)) {
    return *(float *)(param_4 + 0x28) + -30.0 < param_2;
  }
  return true;
}



// ============================================================
// RVA: 0x148d53c | Atlas.Maps.MapBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Maps_MapBehaviour___ctor(ulong param_1)

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



