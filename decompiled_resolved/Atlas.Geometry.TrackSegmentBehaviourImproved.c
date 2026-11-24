// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.TrackSegmentBehaviourImproved

// ============================================================
// RVA: 0x15119a4 | Atlas.Geometry.TrackSegmentBehaviourImproved.get_Length
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_Length(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15119ac | Atlas.Geometry.TrackSegmentBehaviourImproved.get_LeftWidth
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_LeftWidth(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ============================================================
// RVA: 0x15119b4 | Atlas.Geometry.TrackSegmentBehaviourImproved.get_LeftHeight
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_LeftHeight(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15119bc | Atlas.Geometry.TrackSegmentBehaviourImproved.get_RightWidth
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_RightWidth(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ============================================================
// RVA: 0x15119c4 | Atlas.Geometry.TrackSegmentBehaviourImproved.get_RightHeight
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_RightHeight(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15119cc | Atlas.Geometry.TrackSegmentBehaviourImproved.get_Angle
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_Angle(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ============================================================
// RVA: 0x15119d4 | Atlas.Geometry.TrackSegmentBehaviourImproved.get_Elevation
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_Elevation(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15119dc | Atlas.Geometry.TrackSegmentBehaviourImproved.get_CuratureAdjustment
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_CuratureAdjustment(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x15119e4 | Atlas.Geometry.TrackSegmentBehaviourImproved.get_HeightAdjustment
// ============================================================

undefined4 Atlas_Geometry_TrackSegmentBehaviourImproved__get_HeightAdjustment(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x15119ec | Atlas.Geometry.TrackSegmentBehaviourImproved.get_FreeMoveTransform
// ============================================================

undefined1 Atlas_Geometry_TrackSegmentBehaviourImproved__get_FreeMoveTransform(long param_1)

{
  return *(undefined1 *)(param_1 + 0x54);
}



// ============================================================
// RVA: 0x15119f4 | Atlas.Geometry.TrackSegmentBehaviourImproved.Awake
// ============================================================

void Atlas_Geometry_TrackSegmentBehaviourImproved__Awake(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4d77 & 1) == 0) {
    func_0x00f78a20(0x3d6c080);
    bRam0000000003eb4d77 = 1;
  }
  uVar1 = /*STR('EditorOnly')*/ uRam0000000003d6c080;
  if (pcRam0000000003ebf190 == (code *)0x0) {
    pcRam0000000003ebf190 =
         (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()",/*STR('EditorOnly')*/ uRam0000000003d6c080,0);
  }
  lVar2 = (*pcRam0000000003ebf190)(param_1);
  if (lVar2 != 0) {
    if (pcRam0000000003ebf500 == (code *)0x0) {
      pcRam0000000003ebf500 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
    }
                    /* WARNING: Could not recover jumptable at 0x03227e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf500)(lVar2,uVar1);
    return;
  }
  auVar3 = func_0x00f78af4();
  if (pcRam0000000003ebf500 == (code *)0x0) {
    pcRam0000000003ebf500 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
  }
                    /* WARNING: Could not recover jumptable at 0x03227ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf500)(auVar3._0_8_,auVar3._8_8_);
  return;
}



// ============================================================
// RVA: 0x1511a4c | Atlas.Geometry.TrackSegmentBehaviourImproved.GetPriority
// ============================================================

undefined8 Atlas_Geometry_TrackSegmentBehaviourImproved__GetPriority(void)

{
  return 100;
}



// ============================================================
// RVA: 0x1511a54 | Atlas.Geometry.TrackSegmentBehaviourImproved..ctor
// ============================================================

undefined1  [16] Atlas_Geometry_TrackSegmentBehaviourImproved___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x30) = 0x40a00000;
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0);
    func_0x00f78a20(0x3d1e398);
    bRam0000000003eb4d72 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>_TypeInfo*/ uRam0000000003d1e398);
  /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$.ctor*/ func_0x025b4e4c(uVar1,uRam0000000003d3dce0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



