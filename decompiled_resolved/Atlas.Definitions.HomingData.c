// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.HomingData

// ============================================================
// RVA: 0x15b5cc8 | Atlas.Definitions.HomingData.get_FOV
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_FOV(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15b5cd0 | Atlas.Definitions.HomingData.get_TrackingRange
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_TrackingRange(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x15b5cd8 | Atlas.Definitions.HomingData.get_TrackingRangeSquared
// ============================================================

float Atlas_Definitions_HomingData__get_TrackingRangeSquared(long param_1)

{
  return *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x15b5ce4 | Atlas.Definitions.HomingData.get_KartMaxSteer
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_KartMaxSteer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15b5cec | Atlas.Definitions.HomingData.get_WaypointMaxSteer
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_WaypointMaxSteer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x15b5cf4 | Atlas.Definitions.HomingData.get_InAirKartMaxSteer
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_InAirKartMaxSteer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15b5cfc | Atlas.Definitions.HomingData.get_SteerTransitionTime
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_SteerTransitionTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x15b5d04 | Atlas.Definitions.HomingData.get_WaypointLookAhead
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_WaypointLookAhead(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15b5d0c | Atlas.Definitions.HomingData.get_StartTrackingInAirTimer
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_StartTrackingInAirTimer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x15b5d14 | Atlas.Definitions.HomingData.get_TargetWarningRangeMin
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_TargetWarningRangeMin(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15b5d1c | Atlas.Definitions.HomingData.get_TargetWarningRangeMax
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_TargetWarningRangeMax(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ============================================================
// RVA: 0x15b5d24 | Atlas.Definitions.HomingData.get_HasMinimumYOnTrack
// ============================================================

undefined1 Atlas_Definitions_HomingData__get_HasMinimumYOnTrack(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15b5d2c | Atlas.Definitions.HomingData.get_MinYGapOnTrack
// ============================================================

undefined4 Atlas_Definitions_HomingData__get_MinYGapOnTrack(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ============================================================
// RVA: 0x15b5d34 | Atlas.Definitions.HomingData.CreateDefault
// ============================================================

/* WARNING: Possible PIC construction at 0x015b5d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b5d7c) */
/* WARNING: Removing unreachable block (ram,0x015b5db0) */
/* WARNING: Removing unreachable block (ram,0x015b5d80) */

void Atlas_Definitions_HomingData__CreateDefault(void)

{
  if ((bRam0000000003eb5287 & 1) == 0) {
    func_0x00f78a20(0x3d21da8);
    bRam0000000003eb5287 = 1;
  }
  func_0x00f78aec(/*Atlas.Definitions.HomingData_TypeInfo*/ uRam0000000003d21da8);
  return;
}



// ============================================================
// RVA: 0x15b5db4 | Atlas.Definitions.HomingData..ctor
// ============================================================

void Atlas_Definitions_HomingData___ctor(void)

{
  return;
}



